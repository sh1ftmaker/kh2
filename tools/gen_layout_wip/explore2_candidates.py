import struct, csv, json, collections
KH2='/data/agent-tom/kh2/kh2'
d=open(f'{KH2}/SLPM_666.75','rb').read()
BASE=0x100000; FOFF=0x1000; SEC_END=0x37A4B4
sec=d[FOFF:FOFF+(SEC_END-BASE)+0x234+0x118]  # incl ctors/dtors (contiguous in file)
def w32(a): return struct.unpack_from('<I',sec,a-BASE)[0]
CODE_LO=0x10001c; CODE_HI=0x367418
gh={}
for r in csv.DictReader(open(__import__('os').path.join(__import__('os').path.dirname(__file__),'ghidra_bodies_base.tsv')),delimiter='\t'):
    e=int(r['entry'],16); rs=[tuple(int(x,16) for x in p.split('-')) for p in r['ranges'].split(',')]
    gh[e]=rs
# owned bitmap
own=bytearray(SEC_END-BASE)
gh={e:rs for e,rs in gh.items() if BASE<=e<SEC_END}
for e,rs in gh.items():
    for a,b in rs:
        if BASE<=a<SEC_END: own[a-BASE:b-BASE]=b'\x01'*(b-a)
starts=set(gh)
def in_code(a): return CODE_LO<=a<CODE_HI and a%4==0
# jal/j targets from owned code only
jal=set(); jt=set()
for e,rs in gh.items():
    for a,b in rs:
        for p in range(a,b,4):
            w=w32(p); op=w>>26
            if op in (2,3):
                t=((p+4)&0xF0000000)|((w&0x3FFFFFF)<<2)
                if in_code(t) and t not in starts and not own[t-BASE]:
                    (jal if op==3 else jt).add(t)
                elif in_code(t) and t not in starts and own[t-BASE] and op==3:
                    pass
print('jal targets not known',len(jal),'j targets not known (outside any body)',len(jt))
# jal targets landing INSIDE an existing body (mid-function): evidence of missed start / wrong body
mid=set()
for e,rs in gh.items():
    for a,b in rs:
        for p in range(a,b,4):
            w=w32(p)
            if w>>26==3:
                t=((p+4)&0xF0000000)|((w&0x3FFFFFF)<<2)
                if in_code(t) and t not in starts and own[t-BASE]: mid.add(t)
print('jal targets inside existing bodies but not starts',len(mid),[hex(x) for x in sorted(mid)[:20]])
# fptr tables: aligned words in non-owned area (whole sec incl ctors) pointing into code span, runs>=3 -> to unknown starts
runs=[]; p=BASE; cur=[]
END=SEC_END+0x234+0x118
while p<END-3:
    if not (BASE<=p<SEC_END and own[p-BASE]):
        w=w32(p)
        if in_code(w): cur.append((p,w))
        else:
            if len(cur)>=3: runs.append(cur)
            cur=[]
    else:
        if len(cur)>=3: runs.append(cur)
        cur=[]
    p+=4
if len(cur)>=3: runs.append(cur)
tab_unknown=set(); tab_known=0
for r in runs:
    for p,w in r:
        if w in starts: tab_known+=1
        elif not own[w-BASE]: tab_unknown.add(w)
print('runs',len(runs),'known ptrs',tab_known,'unknown ptr targets',len(tab_unknown))
# how many runs are 'pure' (all slots known starts) vs mixed
pure=sum(1 for r in runs if all(w in starts for p,w in r))
print('pure runs',pure)
# ctors/dtors
cd=set()
for p in range(0x37A4B4,0x37A4B4+0x234+0x118,4):
    w=w32(p)
    if in_code(w) and w not in starts: cd.add(w)
print('ctor/dtor unknown targets',len(cd))
# lui/addiu in owned code
lu=set(); hi={}
for e,rs in gh.items():
    for a,b in rs:
        hi={}
        for p in range(a,b,4):
            w=w32(p); op=w>>26; rs_=(w>>21)&31; rt=(w>>16)&31; imm=w&0xffff
            if op==15: hi[rt]=imm<<16; continue
            if op in (9,25,13) and rs_ in hi:
                x=(hi[rs_]+((imm-0x10000 if imm&0x8000 and op!=13 else imm)))&0xffffffff
                if in_code(x) and x not in starts and not own[x-BASE]: lu.add(x)
            if op==0: hi.pop((w>>11)&31,None)
            elif op not in (0x28,0x29,0x2b,0x2f,0x3f,0x39,0x3d,0x1f,0x2a,0x2e,4,5,6,7,1,2,3): hi.pop(rt,None)
print('lui/addiu targets unknown',len(lu))
ee=json.load(open('/data/agent-tom/kh2/e3/map/ee_funcs.json'))['funcs']
ex={int(k,16) for k,v in ee.items() if v['src']=='gap'}
print('ee extras',len(ex),'of which jal',len(ex&jal),'j',len(ex&jt),'tab',len(ex&tab_unknown),'lui',len(ex&lu),'cd',len(ex&cd))
allc=jal|jt|tab_unknown|lu|cd
print('union direct evidence',len(allc),'ee extras not in union',len(ex-allc))
json.dump({'jal':sorted(jal),'jt':sorted(jt),'tab':sorted(tab_unknown),'lu':sorted(lu),'cd':sorted(cd),'ee':sorted(ex)},open(__import__('os').path.join(__import__('os').path.dirname(__file__),'cands1.json'),'w'))
