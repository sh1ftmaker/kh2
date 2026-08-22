// coverage: addr=0x00313f40 symbol=func_00313f40 size=88 class=straight source=corpus status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;lift:near:84.23;m2c:near:70.61
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031e288.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031e288.c"


extern void func_003147a0(void *a0, void *a1);

struct s20 { char b[0x20]; };

__attribute__((section(".text.func_0031E288")))
int func_0031E288(long long a0, long long a1);



int func_00313f40_impl(long long a0, long long a1) asm("func_00313f40");
int func_00313f40_impl(long long a0, long long a1) {
    struct s20 b00;
    struct s20 b20;
    struct s20 b40;
    func_003147a0(&a0, &b00);
    func_003147a0(&a1, &b20);
    return func_003146c8(func_00313f98(&b00, &b20, &b40));
}
