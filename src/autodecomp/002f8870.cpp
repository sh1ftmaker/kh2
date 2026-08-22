// coverage: addr=0x002f8870 symbol=func_002f8870 size=24 class=float source=corpus status=exact fuzzy=100.0
// coverage-alternatives: lift:near:98.33;m2c:near:56.25;ghidra:near:55.0
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/003a19d8.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/003a19d8.c"


typedef union
{
  float value;
  unsigned int word;
} ieee_float_shape_type;
# 23 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/003a19d8.c"
__attribute__((section(".text.func_003A19D8")))
float func_003A19D8(float x);



float func_002f8870_impl(float x) asm("_ZNK3Axa8FVECTOR49getLengthEv");
float func_002f8870_impl(float x) {
        unsigned int ix;
        do { ieee_float_shape_type gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
        do { ieee_float_shape_type sf_u; sf_u.word = (ix&0x7fffffff); (x) = sf_u.value; } while (0);
        return x;
}
