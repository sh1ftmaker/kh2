// coverage: addr=0x00311bb8 symbol=func_00311bb8 size=264 class=branchy source=corpus status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:55.35;lift:near:0.0
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031dba0.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031dba0.c"


extern long long __fixunsdfdi (double a);

__attribute__((section(".text.__fixunsdfdi")))
long long
__fixunsdfdi (double a);


__attribute__((section(".text.__fixdfdi")))
long long
__fixdfdi (double a);


__attribute__((section(".text.__fixunssfdi")))
long long
__fixunssfdi (float original_a);



long long func_00311bb8_impl(double a) asm("func_00311bb8");
long long func_00311bb8_impl(double a) {
  double b;
  unsigned long long v;

  if (a < 0)
    return 0;

  b = (a / (((unsigned long long) 1) << 32));
  v = (unsigned int) b;
  v <<= 32;
  a -= (double)v;
  if (a < 0)
    v -= (unsigned int) (- a);
  else
    v += (unsigned int) a;
  return v;
}
