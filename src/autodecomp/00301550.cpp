// coverage: addr=0x00301550 symbol=func_00301550 size=84 class=straight source=corpus status=exact fuzzy=100.0
// coverage-alternatives: lift:near:89.62;ghidra:near:0.0;m2c:near:0.0
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/00133810.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/00133810.c"


extern int D_00365c48;
extern int write(int, char *, int);
extern int D_0077DB88;
extern void SetField_0_4_8_31EEA8(void *a, void *b, void *c);
extern int D_00785FB8;
extern int D_00427740;
extern int D_007859B8;
extern void func_0031EEC8(void *a, void *b);
extern int D_00785528;
extern int D_00460D00;
extern int D_0041D5D0;
extern int D_0041D5E8;

__attribute__((section(".text.func_003A7AE8")))
void func_003A7AE8(void *a0, void *a1, void *a2);


__attribute__((section(".text.func_003AE128")))
int func_003AE128(int *errp, int fd, char *buf, int n);


__attribute__((section(".text.func_003AE008")))
int func_003AE008(int *errp, int fd, char *buf, int n);


__attribute__((section(".text.func_001A82F8")))
void *func_001A82F8(void);


__attribute__((section(".text.func_00133810")))
void *func_00133810(void);



void func_00301550_impl(void *a0, void *a1, void *a2) asm("func_00301550");
void func_00301550_impl(void *a0, void *a1, void *a2) {
    char buf[0x60];
    char *p;
    *(void **)(buf + 0x0) = a0;
    *(int *)(buf + 0x8) = 0x7FFFFFFF;
    *(short *)(buf + 0xC) = 0x208;
    *(void **)(buf + 0x10) = a0;
    *(int *)(buf + 0x14) = 0x7FFFFFFF;
    *(int *)(buf + 0x54) = D_00365c48;
    func_002ffd00(buf, a1, a2);
    p = *(char **)buf;
    *p = 0;
}
