// coverage: addr=0x003145a8 symbol=func_003145a8 size=152 class=branchy source=corpus status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:45.47;lift:near:25.13;m2c:near:21.66
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031dc98.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031dc98.c"


__attribute__((section(".text.__floatdidf")))
double
__floatdidf (long long u);



double func_003145a8_impl(long long u) asm("func_003145a8");
double func_003145a8_impl(long long u) {
  double d;

  d = (int) (u >> 32);
  d *= (((unsigned long long) 1) << 16);
  d *= (((unsigned long long) 1) << 16);
  d += (unsigned int) (u & ((((unsigned long long) 1) << 32) - 1));

  return d;
}
