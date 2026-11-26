// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d70 asm("D_00347d70");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" void func_0031a3d8(u32) asm("func_0031a3d8");
extern "C" void func_0031a508(u32) asm("func_0031a508");

// 0x0031a790 func_0031a790
void func_0031a790(u32 a0) asm("func_0031a790");
void func_0031a790(u32 a0) {
    u32 t7;
    u32 s0;
    u32 s1;
    u32 t6;
    u32 s0_0;
    u32 s1_1;
    *(u32*)(a0) = (u32)&D_00347d70;
    t7 = (a0 + 0x29c4);
    if ((t7 != 0xfffffff8)) {
        s0 = (a0 + 0x478c);
        while ((s0 = (s0 + -0x1dc)), (s1 = (a0 + 0x29cc)), (s1 != s0)) {
            func_0031a508(s0);
        }
    }
    t6 = (a0 + 0x30);
    if ((t6 != 0xfffffff0)) {
        s0_0 = (a0 + 0x29c0);
        while ((s0_0 = (s0_0 + -0x530)), (s1_1 = (a0 + 0x40)), (s1_1 != s0_0)) {
            func_0031a3d8(s0_0);
        }
    }
    *(u32*)(a0) = (u32)&D_00347f98;
    return;
}
