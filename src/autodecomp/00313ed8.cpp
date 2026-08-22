// coverage: addr=0x00313ed8 symbol=func_00313ed8 size=100 class=straight source=corpus status=exact fuzzy=100.0
// coverage-alternatives: lift:near:85.76;m2c:near:58.6;ghidra:near:26.44
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031e2e0.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031e2e0.c"


extern void func_003147a0(double *a0, struct fp *a1);

struct fp { int a; int b; int c; int d; long long e; long long f; };




__attribute__((section(".text.func_0031E2E0")))
int func_0031E2E0(double a0, double a1);



int func_00313ed8_impl(double a0, double a1) asm("func_00313ed8");
int func_00313ed8_impl(double a0, double a1) {
    struct fp bufA;
    struct fp bufB;
    struct fp bufC;
    func_003147a0(&a0, &bufA);
    func_003147a0(&a1, &bufB);
    bufB.b = bufB.b ^ 1;
    return func_003146c8(func_00313c58(&bufA, &bufB, &bufC));
}
