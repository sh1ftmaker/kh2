// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032ba14 asm("D_0032ba14");
extern "C" u32 D_0032ba18 asm("D_0032ba18");
extern "C" u32 D_0032ba30 asm("D_0032ba30");
extern "C" u32 _Z16wtarget_01f18014jjjj asm("_Z16wtarget_01f18014jjjj");
extern "C" u32 func_00106178(u32, u32) asm("func_00106178");

// 0x001036d0 func_001036d0
void func_001036d0(u32 a0, u32 a1) asm("_ZN4MENU15CreateAllocatorEPcj");
void func_001036d0(u32 a0, u32 a1) {
    u32 s0;
    if (((s32)(a0) == 0)) {
        a0 = (u32)&_Z16wtarget_01f18014jjjj;
    }
    s0 = (a1 + 0xfff98000);
    *(u32*)(&D_0032ba14) = func_00106178(a0, s0);
    *(u32*)(&D_0032ba18) = func_00106178(a0 + s0, 0x68000);
    *(u8*)(&D_0032ba30) = 1;
    return;
}
