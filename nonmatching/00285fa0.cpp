// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2e4 asm("D_0035f2e4");
extern "C" u32 func_001a3570(u32) asm("func_001a3570");
extern "C" u32 func_001a8110(u32) asm("func_001a8110");
extern "C" u32 func_002859a0() asm("func_002859a0");
extern "C" u32 func_00286058(u32) asm("func_00286058");

// 0x00285fa0 u_call0_00285fa0()
u32 lift_00285fa0() asm("_Z16u_call0_00285fa0v");
u32 lift_00285fa0() {
    u32 s0;
    u32 s1;
    u32 v0_0;
    u32 t7;
    u32 t7_1;
    u32 t6;
    u32 t7_2;
    s0 = 0;
    for (;;) {
        s1 = func_002859a0();
        v0_0 = func_001a8110(s0);
        s0 = v0_0;
        if (((s32)(v0_0) == 0)) break;
        if (((s32)(func_00286058(*(u8*)((v0_0 + 2)))) == 0)) {
            continue;
        }
        if (((s32)(func_001a3570(*(u16*)(s0))) == 0)) {
            continue;
        }
        t7 = *(u16*)(s0);
        t7_1 = *(u32*)((((t7 >> 5) << 2) + s1));
        if (((s32)((t7_1 & (1 << (t7 & 0x1f)))) != 0)) {
            continue;
        }
        t6 = *(u32*)(&D_0035f2e4);
        t7_2 = *(u32*)((t6 + ((t7 >> 5) << 2)));
        *(u32*)((t6 + ((t7 >> 5) << 2))) = (t7_2 | (1 << (t7 & 0x1f)));
    }
    return v0_0;
}
