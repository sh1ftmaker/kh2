// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ec94 asm("D_0035ec94");
extern "C" u32 D_0035ec98 asm("D_0035ec98");
extern "C" u32 D_0035ec9c asm("D_0035ec9c");
extern "C" u32 D_003716e0 asm("D_003716e0");
extern "C" u32 D_003716e8 asm("D_003716e8");
extern "C" u32 func_002349c8(u32, u32) asm("func_002349c8");
extern "C" u32 func_002ff1a4(u32, u32) asm("func_002ff1a4");
extern "C" void func_00240360(u32) asm("func_00240360");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x00241008 Tz::MCard::UpdateLocalInfo()
u32 lift_00241008() asm("_ZN2Tz5MCard15UpdateLocalInfoEv");
u32 lift_00241008() {
    u32 s1;
    u32 s0;
    u32 s3;
    u32 s2;
    s1 = *(u32*)(&D_0035ec9c);
    func_00240360(*(s8*)((*(u32*)(&D_0035ec94) + 1)));
    s0 = func_002349c8(*(s8*)(*(u32*)(&D_0035ec94)), 0);
    func_002fde18(*(u32*)(&D_0035ec98), 0, 4);
    *(u32*)(*(u32*)(&D_0035ec98)) = s0;
    if (((s32)(s0) > 0)) {
        s3 = 0;
        s2 = 0;
        do {
            if (((s32)(func_002ff1a4(s1 + 0x20, (u32)&D_003716e0)) != 0)) {
                if (((s32)(func_002ff1a4(s1 + 0x20, (u32)&D_003716e8)) != 0)) {
                    func_002ff2e8((*(u32*)(&D_0035ec98) + (s2 + (s3 * 0x28))) + 0x10, s1 + 0x20);
                    if (((s32)((*(u16*)((s1 + 0x14)) & 0x20)) != 0)) {
                        *(u32*)((((s2 + (s3 * 0x28)) + *(u32*)(&D_0035ec98)) + 8)) = 1;
                    } else {
                        *(u32*)((((s2 + (s3 * 0x28)) + *(u32*)(&D_0035ec98)) + 8)) = 2;
                    }
                    *(u32*)((((s2 + (s3 * 0x28)) + *(u32*)(&D_0035ec98)) + 0xc)) = *(u32*)((s1 + 0x10));
                }
            }
            s1 = (s1 + 0x40);
            s3 = (s3 + 1);
        } while (((s32)(((s32)(s3) < (s32)(s0))) != 0));
    }
    return s0;
}
