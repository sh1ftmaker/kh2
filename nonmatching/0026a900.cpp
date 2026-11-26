// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f0ec asm("D_0035f0ec");
extern "C" u32 D_00373730 asm("D_00373730");
extern "C" u32 D_00373734 asm("D_00373734");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_00285d58(u32) asm("func_00285d58");
extern "C" u32 func_00285e30(u32) asm("func_00285e30");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_00285f50(u32) asm("func_00285f50");

// 0x0026a900 func_0026a900
void func_0026a900() asm("func_0026a900");
void func_0026a900() {
    u32 s2;
    u32 s1;
    u32 s0;
    u32 v0;
    u32 s0_0;
    u32 s0_1;
    s2 = func_00257770();
    s1 = func_00281f20(*(u32*)(&D_0035f0ec));
    s0 = ((u32)((func_00287bc0() + -5)) < (u32)(2));
    v0 = func_0028b040(*(u32*)(&D_0035f01c));
    if (((s32)(s0) == 0)) {
        if (((s32)(v0) != 0)) {
            if ((func_00285d58(*(u16*)((((v0 + -1) * 6) + s1))) != 0)) {
                func_00285f50(*(u16*)((((v0 + -1) * 6) + s1)));
                s0_0 = ((s32)(func_00285e30(*(u16*)((((v0 + -1) * 6) + s1)))) == 0) ? *(u32*)(&D_00373730) : *(u32*)(&D_00373734);
                func_00138c10((s2 + (func_002891e8(*(u32*)(&D_0035f01c)) * 0x198)) + 0x87d0, s0_0);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        if ((func_00285d58(*(u16*)(((v0 * 6) + s1))) != 0)) {
            func_00285f50(*(u16*)(((v0 * 6) + s1)));
            s0_1 = ((s32)(func_00285e30(*(u16*)(((v0 * 6) + s1)))) == 0) ? *(u32*)(&D_00373730) : *(u32*)(&D_00373734);
            func_00138c10((s2 + (func_002891e8(*(u32*)(&D_0035f01c)) * 0x198)) + 0x87d0, s0_1);
            return;
        } else {
            return;
        }
    }
}
