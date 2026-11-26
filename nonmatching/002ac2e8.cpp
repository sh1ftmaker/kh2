// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_001d9d48(u32) asm("func_001d9d48");
extern "C" u32 func_001d9e30(u32) asm("func_001d9e30");
extern "C" u32 func_002a9d68() asm("func_002a9d68");

// 0x002ac2e8 func_002ac2e8
u32 func_002ac2e8() asm("_ZN2Tz9JmNewInfo11CheckPuzzleEv");
u32 func_002ac2e8() {
    u32 s0;
    u32 s1;
    u32 v0_0;
    s0 = 0;
    while ((s1 = func_002a9d68()), (v0_0 = func_001d9e30(s0)), (s0 = v0_0), ((s32)(v0_0) != 0)) {
        if (((s32)(func_001d9d48(v0_0)) != 0)) {
            if (((s32)((*(u32*)((((s1 + (*(u8*)(s0) << 3)) + ((*(u8*)((s0 + 1)) >> 5) << 2)) + 0x144)) & (1 << (*(u8*)((s0 + 1)) & 0x1f)))) == 0)) {
                *(u32*)((((*(u32*)(&D_0035f610) + (*(u8*)(s0) << 3)) + 0x144) + ((*(u8*)((s0 + 1)) >> 5) << 2))) = (*(u32*)((((*(u32*)(&D_0035f610) + (*(u8*)(s0) << 3)) + 0x144) + ((*(u8*)((s0 + 1)) >> 5) << 2))) | (1 << (*(u8*)((s0 + 1)) & 0x1f)));
            }
        }
        if (((s32)(func_00181500(*(u16*)((s0 + 8)))) == 0)) {
            continue;
        }
        if (((s32)((*(u32*)((((s1 + (*(u8*)(s0) << 3)) + ((*(u8*)((s0 + 1)) >> 5) << 2)) + 0x194)) & (1 << (*(u8*)((s0 + 1)) & 0x1f)))) != 0)) {
            continue;
        }
        *(u32*)((((*(u32*)(&D_0035f610) + (*(u8*)(s0) << 3)) + 0x194) + ((*(u8*)((s0 + 1)) >> 5) << 2))) = (*(u32*)((((*(u32*)(&D_0035f610) + (*(u8*)(s0) << 3)) + 0x194) + ((*(u8*)((s0 + 1)) >> 5) << 2))) | (1 << (*(u8*)((s0 + 1)) & 0x1f)));
    }
    return v0_0;
}
