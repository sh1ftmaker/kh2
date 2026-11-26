// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee60 asm("D_0035ee60");
extern "C" u32 D_0035ee74 asm("D_0035ee74");
extern "C" u32 D_003725d8 asm("D_003725d8");
extern "C" u32 D_00372608 asm("D_00372608");
extern "C" u32 D_00372610 asm("D_00372610");
extern "C" u32 D_00372638 asm("D_00372638");
extern "C" u32 func_001a6d08(u32) asm("func_001a6d08");
extern "C" u32 func_0028b300(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028b300");

// 0x00252320 func_00252320
u32 func_00252320() asm("_ZN2Tz4CANA18CreateMapBlackPerlEv");
u32 func_00252320() {
    u8 frame[16];
    u32 s1;
    u32 s3;
    u32 s2;
    u32 v0_0;
    u32 v0_1;
    s1 = 0;
    s3 = (u32)&D_00372610;
    s2 = 0;
    do {
        v0_0 = func_001a6d08(*(u16*)(((s1 << 1) + (u32)&D_003725d8)));
        if (((s32)(v0_0) != 0)) {
            *(u32*)((u32)frame) = 0;
            v0_1 = func_0028b300(*(u32*)(&D_0035ee74) + (s2 + (s1 * 0x1b0)), 0x753b, 2, 2, *(u32*)(&D_0035ee60), (u32)&D_00372608, s3 + (s1 * 8), *(s16*)(((s1 << 1) + (u32)&D_00372638)));
            u32 cse0 = s2 + (s1 * 0x1b0);
            *(u8*)(((*(u32*)(&D_0035ee74) + cse0) + 0x195)) = 1;
            *(u32*)((((*(u32*)(&D_0035ee74) + cse0) + 0x18) + 0xb8)) = (*(u32*)((((*(u32*)(&D_0035ee74) + cse0) + 0x18) + 0xb8)) | 8);
            v0_0 = v0_1;
        }
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(4))) != 0));
    return v0_0;
}
