// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00351228 asm("D_00351228");
extern "C" u32 D_00351260 asm("D_00351260");
extern "C" u32 D_01c5f530 asm("D_01c5f530");
extern "C" u32 func_001d48b0(u32) asm("func_001d48b0");
extern "C" u32 func_0031e2b8(u32) asm("func_0031e2b8");
extern "C" void func_00190128(u32) asm("func_00190128");
extern "C" void func_0019c920(u32) asm("func_0019c920");
extern "C" void func_0019c9a8(u32) asm("func_0019c9a8");
extern "C" void func_001bcf80(u32, u32) asm("func_001bcf80");

// 0x0017a7e0 wtarget_0017a7e0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_0017a7e0(u32 a0, u32 a1) asm("_Z16wtarget_0017a7e0jjjj");
u32 lift_0017a7e0(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_001bcf80((u32)&D_01c5f530, a1);
            *(u32*)(&D_01c5f530) = (u32)&D_00351260;
            func_00190128((u32)&D_01c5f530 + 0xa68);
            func_00190128((u32)&D_01c5f530 + 0xa7c);
            func_00190128((u32)&D_01c5f530 + 0xa90);
            func_0019c920((u32)&D_01c5f530 + 0xac0);
            v0 = func_0031e2b8((u32)&D_01c5f530 + 0xaf0);
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            func_0019c9a8((u32)&D_01c5f530 + 0xac0);
            *(u32*)(&D_01c5f530) = (u32)&D_00351228;
            v0_2 = func_001d48b0((u32)&D_01c5f530 + 0x9c0);
            v0_1 = v0_2;
        }
    }
    return v0_1;
}
