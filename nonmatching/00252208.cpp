// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee60 asm("D_0035ee60");
extern "C" u32 D_0035ee70 asm("D_0035ee70");
extern "C" u32 D_00372608 asm("D_00372608");
extern "C" u32 D_00372610 asm("D_00372610");
extern "C" u32 func_001058e8() asm("func_001058e8");
extern "C" u32 func_00252098(u32) asm("func_00252098");
extern "C" u32 func_0028b300(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028b300");

// 0x00252208 func_00252208
u32 func_00252208() asm("_ZN2Tz4CANA13CreateNewMarkEv");
u32 func_00252208() {
    u8 frame[16];
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s4;
    u32 v0_0;
    u32 t5;
    u32 t7;
    u32 v0_1;
    u32 t6;
    u32 t6_2;
    u32 s0_3;
    s0 = 0;
    s1 = 0;
    s2 = (u32)&D_00372610;
    do {
        s4 = (func_001058e8() + 0x49d8);
        v0_0 = func_00252098(s0);
        if (((s32)(v0_0) != 0)) {
            t5 = (s0 + 8);
            t7 = ((t5 >> 5) << 2);
            if (((*(u32*)((t7 + s4)) & (1 << (t5 & 0x1f))) == 0)) {
                *(u32*)((u32)frame) = 0;
                v0_1 = func_0028b300(*(u32*)(&D_0035ee70) + s1, 0x753c, 2, 2, *(u32*)(&D_0035ee60), (u32)&D_00372608, s2, 0x17);
                *(u8*)(((*(u32*)(&D_0035ee70) + s1) + 0x195)) = 1;
                t6 = (*(u32*)(&D_0035ee70) + s1);
                t6_2 = (t6 + 0x18);
                *(u32*)((t6_2 + 0xb8)) = (*(u32*)((t6_2 + 0xb8)) | 8);
                v0_0 = v0_1;
            }
        }
        s0_3 = (s0 + 1);
        s0 = s0_3;
        s1 = (s1 + 0x1b0);
        s2 = (s2 + 8);
    } while (((s32)(((s32)(s0_3) < (s32)(4))) != 0));
    return v0_0;
}
