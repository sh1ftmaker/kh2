import struct, csv, json
KH2='/data/agent-tom/kh2/kh2'
d=open(f'{KH2}/SLPM_666.75','rb').read()
BASE=0x100000; FOFF=0x1000; SEC_END=0x37A4B4
sec=d[FOFF:FOFF+(SEC_END-BASE)]
def w32(a): return struct.unpack_from('<I',sec,a-BASE)[0]
lay=[]
for l in open(f'{KH2}/layout.tsv'):
    if l.startswith('#') or l.startswith('addr'): continue
    a,e,s,n=l.rstrip('\n').split('\t'); lay.append((int(a,16),int(e,16),int(s),n))
gh={}
for r in csv.DictReader(open(__import__('os').path.join(__import__('os').path.dirname(__file__),'ghidra_bodies_base.tsv')),delimiter='\t'):
    e=int(r['entry'],16); rs=[tuple(int(x,16) for x in p.split('-')) for p in r['ranges'].split(',')]
    gh[e]=(r['name'],int(r['thunk']),rs)
print('ghidra fns',len(gh),'noncontig',sum(1 for v in gh.values() if len(v[2])>1))
# compare layout end vs ghidra body
diff=0; ex=[]
for a,e,s,n in lay:
    if a not in gh: print('missing in ghidra',hex(a)); continue
    rs=gh[a][2]
    gmax=max(r[1] for r in rs); gmin=min(r[0] for r in rs)
    if gmax!=e or gmin!=a:
        diff+=1
        if len(ex)<15: ex.append((hex(a),hex(e),rs))
print('layout rows whose ghidra body != [addr,end)',diff); print(ex)
# noncontig examples
nc=[(hex(k),v[2]) for k,v in gh.items() if len(v[2])>1]
print(nc[:20])
# gaps in code span
CODE_LO=0x10001c; CODE_HI=0x367418
gaps=[]; prev=CODE_LO
for a,e,s,n in lay:
    if a>prev: gaps.append((prev,a))
    prev=max(prev,e)
if CODE_HI>prev: gaps.append((prev,CODE_HI))
print('gaps',len(gaps),'bytes',sum(b-a for a,b in gaps))
big=sorted(gaps,key=lambda g:g[0]-g[1])[:15]
print([(hex(a),hex(b),b-a) for a,b in big])
# thunk names in layout
print('thunk rows',sum(1 for r in lay if r[3].startswith('thunk_')), 'ghidra thunks',sum(v[1] for v in gh.values()))
# name mismatch layout vs ghidra
mm=[(hex(a),n,gh[a][0]) for a,e,s,n in lay if a in gh and gh[a][0]!=n]
print('name mismatches',len(mm),mm[:10])
