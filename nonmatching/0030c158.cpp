// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366164 asm("D_00366164");
extern "C" u32 D_00366170 asm("D_00366170");
extern "C" u32 D_01e38780 asm("D_01e38780");
extern "C" u32 func_00309cd8() asm("func_00309cd8");
extern "C" u32 func_0030b9e0(u32, u32) asm("func_0030b9e0");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_0030a2d0(u32) asm("func_0030a2d0");
extern "C" void func_0030a300() asm("func_0030a300");
extern "C" void func_0030a3f8() asm("func_0030a3f8");

// 0x0030c158 func_0030c158
void func_0030c158(u32 a0) asm("func_0030c158");
void func_0030c158(u32 a0) {
    u32 s2;
    u32 s1;
    u32 s1_0;
    u32 s1_1;
    func_0030a2d0(9);
    if (((s32)(*(u32*)(&D_00366164)) == 0)) {
        func_0030a3f8();
    }
    func_0030a300();
    if (((s32)(func_00309cd8()) != 0)) {
        s2 = func_00309cd8();
        if (((s32)(func_0030b9e0(a0, 9)) < 0)) {
            s1 = func_0030b9e0(a0, 9);
            func_00305660(*(u32*)(&D_00366170));
            *(u32*)((s2 + 4)) = 0;
            s1_1 = s1;
        } else {
            s1_0 = func_0030b9e0(a0, 9);
            func_00305660(*(u32*)(&D_00366170));
            *(u32*)(s2) = s1_0;
            s1_1 = ((s32)((s2 - (u32)&D_01e38780)) >> 4);
        }
        func_00305640(*(u32*)(&D_00366170));
    }
    return;
}
