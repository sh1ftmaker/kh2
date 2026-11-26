// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e348 asm("D_01d9e348");
extern "C" u32 func_001de450(u32) asm("func_001de450");
extern "C" u32 func_00321cb0(u32, u32) asm("func_00321cb0");

// 0x001dde40 ryj::PAX::ensure()
u32 lift_001dde40(u32 a0) asm("_ZN3ryj3PAX6ensureEv");
u32 lift_001dde40(u32 a0) {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 t6;
    u32 t5;
    u32 sp;
    u32 t5_1;
    u32 sp_2;
    u32 t5_3;
    u32 t6_4;
    u32 sp_5;
    v0 = func_00321cb0((u32)&D_01d9e348, a0);
    if ((v0 != 0)) {
        v0_0 = func_001de450(a0);
        if ((a0 == *(u32*)(&D_01d9e348))) {
            *(u32*)(&D_01d9e348) = *(u32*)((a0 + 0x14));
            sp_2 = (u32)frame;
            t5_3 = 0;
        } else {
            t6 = *(u32*)((*(u32*)(&D_01d9e348) + 0x14));
            if ((t6 != a0)) {
                do {
                    t5 = t6;
                    t6 = *(u32*)((t6 + 0x14));
                } while ((t6 != a0));
                t5_1 = t5;
            } else {
                sp = (u32)frame;
                t5_1 = *(u32*)(&D_01d9e348);
            }
            *(u32*)((t5_1 + 0x14)) = *(u32*)((a0 + 0x14));
            sp_2 = sp;
            t5_3 = t5_1;
        }
        if ((a0 == *(u32*)(((u32)&D_01d9e348 + 4)))) {
            t6_4 = *(u32*)(((u32)&D_01d9e348 + 4));
            *(u32*)(((u32)&D_01d9e348 + 4)) = t5_3;
        }
        *(u32*)(a0) = 0;
        *(u32*)((a0 + 0x14)) = 0;
        sp_5 = sp_2;
        v0 = v0_0;
    } else {
        sp_5 = (u32)frame;
    }
    return v0;
}
