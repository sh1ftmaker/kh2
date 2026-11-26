import struct, csv, json, collections
KH2='/data/agent-tom/kh2/kh2'
d=open(f'{KH2}/SLPM_666.75','rb').read()
BASE=0x100000; FOFF=0x1000; SEC_END=0x37A4B4
sec=d[FOFF:FOFF+(SEC_END-BASE)]
def w32(a): return struct.unpack_from('<I',sec,a-BASE)[0]
CODE_LO=0x10001c; CODE_HI=0x367418
lay=[]
for l in open(f'{KH2}/layout.tsv'):
    if l.startswith('#') or l.startswith('addr'): continue
    a,e,s,n=l.rstrip('\n').split('\t'); lay.append((int(a,16),int(e,16),int(s),n))
gaps=[]; prev=CODE_LO
for a,e,s,n in lay:
    if a>prev: gaps.append((prev,a))
    prev=max(prev,e)
if CODE_HI>prev: gaps.append((prev,CODE_HI))
starts={r[0] for r in lay}
def in_code(a): return CODE_LO<=a<CODE_HI and a%4==0
hist=collections.Counter(); byt=collections.Counter()
samples=collections.defaultdict(list)
for g0,g1 in gaps:
    n=g1-g0
    ws=[w32(p) for p in range(g0,g1-3,4)]
    if all(w==0 for w in ws): c='zero'
    elif all(in_code(w) for w in ws): c='ptrs_all_code'
    elif sum(1 for w in ws if in_code(w))>=len(ws)*0.6: c='ptrs_mostly'
    else:
        b=sec[g0-BASE:g1-BASE]
        pr=sum(1 for x in b if 32<=x<127 or x in (0,9,10,13))
        if pr>=len(b)*0.9 and n>=8: c='stringish'
        else: c='other'
    hist[c]+=1; byt[c]+=n
    if len(samples[c])<6: samples[c].append((hex(g0),hex(g1),n))
print(hist); print(byt); print(dict(samples))
# size hist of 'other'
sz=collections.Counter()
for g0,g1 in gaps:
    n=g1-g0
    ws=[w32(p) for p in range(g0,g1-3,4)]
    if all(w==0 for w in ws) or all(in_code(w) for w in ws): continue
    sz['<16' if n<16 else '<64' if n<64 else '<256' if n<256 else '<1k' if n<1024 else '>=1k']+=1
print(sz)
