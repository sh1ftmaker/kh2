// coverage: addr=0x002fb900 symbol=func_002fb900 size=40 class=float source=corpus status=exact fuzzy=100.0
// coverage-alternatives: lift:near:96.0;ghidra:near:42.4;m2c:near:33.76
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/003a4f88.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/003a4f88.c"


typedef union
{
  float value;
  unsigned int word;
} ieee_float_shape_type;
# 23 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/003a4f88.c"
__attribute__((section(".text.copysignf")))
float copysignf(float x, float y);



float func_002fb900_impl(float x, float y) asm("func_002fb900");
float func_002fb900_impl(float x, float y) {
        unsigned int ix,iy;
        do { ieee_float_shape_type gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
        do { ieee_float_shape_type gf_u; gf_u.value = (y); (iy) = gf_u.word; } while (0);
        do { ieee_float_shape_type sf_u; sf_u.word = ((ix&0x7fffffff)|(iy&0x80000000)); (x) = sf_u.value; } while (0);
        return x;
}
