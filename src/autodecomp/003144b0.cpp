// coverage: addr=0x003144b0 symbol=func_003144b0 size=84 class=straight source=corpus status=exact fuzzy=100.0
// coverage-alternatives: lift:near:51.04;ghidra:near:43.29;m2c:near:28.22
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031eae0.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031eae0.c"


extern void func_003147a0(void *a0, void *a1);
extern float func_00314698(int class, unsigned int sign, int exp, unsigned int frac);
extern void WaitDma(void *);

struct fp32 { int a; int b; int c; int d; long long e; long long f; };

__attribute__((section(".text.func_0031EAE0")))
float func_0031EAE0(double a0);


__attribute__((section(".text.func_00397450")))
void func_00397450(void *a0, int a1, void *a2);



float func_003144b0_impl(double a0) asm("func_003144b0");
float func_003144b0_impl(double a0) {
    struct fp32 buf;
    long long frac;
    unsigned int sffrac;
    func_003147a0(&a0, &buf);
    frac = buf.e;
    sffrac = (unsigned int)(frac >> 30);
    if (frac & 0x3FFFFFFF)
        sffrac |= 1;
    return func_00314698(buf.a, buf.b, buf.c, sffrac);
}
