// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_001a8190(u32) asm("func_001a8190");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_00281388(u32) asm("func_00281388");
extern "C" u32 func_002814b0(u32) asm("func_002814b0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_0027aed8(u32, u32, u32) asm("func_0027aed8");

// 0x00279620 func_00279620
u32 func_00279620() asm("_ZN2Tz9CmAbility20GetWeaponAbilityInfoEv");
u32 func_00279620() {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 loc_4;
    u32 s2;
    u32 v0_2;
    u32 v0_3;
    u32 s0;
    u32 v0_4;
    u32 t6;
    u32 t7;
    u32 v0_5;
    u8 t7_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 s0_10;
    u32 v0_11;
    if ((func_00287bc0() == 0xf)) {
        v0 = func_0028b040(*(u32*)(&D_0035f01c));
        v0_1 = v0;
    } else {
        v0_0 = func_002570a0(0xf);
        v0_1 = v0_0;
    }
    func_0027aed8(v0_1, (u32)&loc_0, (u32)&loc_4);
    s2 = *(s8*)((*(u32*)(&D_0035f230) + 7));
    v0_2 = func_001a80c8(*(u16*)(*(u32*)((func_00281180(*(u32*)(&D_0035f010), loc_4) + 0x244))));
    v0_3 = func_001a8190(v0_2);
    if (((s32)(*(u16*)((v0_3 + 2))) != 0)) {
        s0 = *(u16*)((func_001a8190(v0_2) + 2));
        v0_4 = func_001a80c8(*(u16*)((func_001a8190(v0_2) + 2)));
        *(u16*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0xc)) = s0;
        *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0xe)) = 1;
        *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0xf)) = 0xffffffff;
        *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0x10)) = 3;
        *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0x11)) = 0;
        *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0x13)) = 0xffffffff;
        s2 = (s2 + 1);
        v0_3 = v0_4;
    }
    if ((loc_0 == 1)) {
        t6 = 0;
        t7 = ((s32)(*(s16*)(*(u32*)(&D_0035f230))) >> 0);
        v0_5 = 0;
        do {
            t7_6 = ((t7 ^ 1) & 1);
            if ((t7_6 == 0)) {
                if ((v0_5 == loc_4)) {
                    break;
                }
                v0_5 = (v0_5 + 1);
            }
            t6 = (t6 + 1);
            t7 = ((s32)(*(s16*)(*(u32*)(&D_0035f230))) >> t6);
        } while (((s32)(t7) != 0));
        v0_7 = func_00281388(0xffffffff);
        if (((s32)(v0_7) != 0)) {
            v0_8 = func_001a80c8(func_002814b0(0xffffffff));
            v0_9 = func_001a8190(v0_8);
            if (((s32)(*(u16*)((v0_9 + 2))) != 0)) {
                s0_10 = *(u16*)((func_001a8190(v0_8) + 2));
                v0_11 = func_001a80c8(*(u16*)((func_001a8190(v0_8) + 2)));
                *(u16*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0xc)) = s0_10;
                *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0xe)) = 1;
                *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0xf)) = 0xffffffff;
                *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0x10)) = 3;
                *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0x11)) = 0;
                *(u8*)((((s2 << 3) + *(u32*)(&D_0035f230)) + 0x13)) = 0xffffffff;
                s2 = (s2 + 1);
                v0_9 = v0_11;
            }
            v0_7 = v0_9;
        }
        v0_3 = v0_7;
    }
    *(u8*)((*(u32*)(&D_0035f230) + 7)) = s2;
    return v0_3;
}
