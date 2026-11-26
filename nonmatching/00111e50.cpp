// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00341708 asm("D_00341708");
extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_001357d8() asm("func_001357d8");
extern "C" u32 func_0017df58(u32) asm("func_0017df58");
extern "C" void func_001136b0(u32, u32) asm("func_001136b0");
extern "C" void func_00135818(u32, u32) asm("func_00135818");

// 0x00111e50 func_00111e50
u32 func_00111e50() asm("_ZN2kn6Friend20setPartyCharaAddressEv");
u32 func_00111e50() {
    u8 frame[16];
    u32 s0;
    u32 t4;
    u32 s1;
    u32 s2;
    u32 v0;
    u32 s0_0;
    u32 t7;
    s0 = 0;
    t4 = (u32)&D_00341708;
    do {
        *(u32*)(((s0 << 2) + (u32)frame)) = *(u32*)(((s0 << 2) + t4));
        s0 = (s0 + 1);
    } while (((s32)(((s32)(s0) < (s32)(3))) != 0));
    *(u32*)(&D_00341708) = *(u32*)(&D_0034e948);
    *(u32*)(((u32)&D_00341708 + 4)) = 0;
    *(u32*)(((u32)&D_00341708 + 8)) = 0;
    s1 = 1;
    s2 = (u32)&D_00341708;
    do {
        v0 = func_0017df58(s1 + -1);
        if (((s32)(v0) != 0)) {
            *(u32*)(((s2 + ((s1 - 1) * 4)) + 4)) = v0;
            func_001136b0(*(u32*)((v0 + 0xb60)), v0);
            *(u32*)((v0 + 0xb70)) = s1;
        }
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(3))) != 0));
    s0_0 = 0;
    t7 = (0 << 2);
    do {
        if ((*(u32*)((t7 + (u32)frame)) != *(u32*)((t7 + (u32)&D_00341708)))) {
            func_00135818(*(u32*)((t7 + (u32)frame)), *(u32*)((t7 + (u32)&D_00341708)));
        }
        s0_0 = (s0_0 + 1);
        t7 = (s0_0 << 2);
    } while (((s32)(t7) != 0));
    return func_001357d8();
}
