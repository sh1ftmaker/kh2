// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 func_001145b0(u32) asm("func_001145b0");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00273180(u32, u32) asm("func_00273180");
extern "C" u32 func_0027af58() asm("func_0027af58");
extern "C" u32 func_0027c3b8(u32) asm("func_0027c3b8");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_0027aed8(u32, u32, u32) asm("func_0027aed8");
extern "C" void func_0027c118(u32, u32) asm("func_0027c118");

// 0x0027c1c0 func_0027c1c0
void func_0027c1c0() asm("_ZN2Tz9CmAbility15ChgEquipAbilityEv");
void func_0027c1c0() {
    u32 v0;
    u32 s0;
    u32 loc_0;
    u32 loc_4;
    u32 s2;
    u32 s2_0;
    u32 s0_1;
    u32 v0_2;
    v0 = func_002570a0(0x10);
    func_0027c118(v0, (u32)(0) < (u32)(func_0028b040(*(u32*)(&D_0035f01c))));
    s0 = func_002570a0(0xf);
    s2 = func_0027af58();
    func_0027aed8(s0, (u32)&loc_0, (u32)&loc_4);
    if (((s32)(loc_0) == 0)) {
        if (((s32)(loc_4) != 0)) {
            if (((s32)(s2) == 0)) {
                if ((*(s8*)((((v0 << 3) + *(u32*)(&D_0035f230)) + 0x10)) == 0)) {
                    if (((s32)(func_0027c3b8(v0)) == 0)) {
                        s2_0 = func_00273180(4, 0xffffffff);
                        s0_1 = func_001145b0(*(u16*)((((v0 << 3) + *(u32*)(&D_0035f230)) + 0xc)));
                        v0_2 = func_0028b040(*(u32*)(&D_0035f01c));
                        if (((s32)(v0_2) != 0)) {
                            *(u8*)(((s0_1 + *(u32*)((func_00281180(*(u32*)(&D_0035f010), loc_4) + 0x244))) + 0xf5)) = *(u8*)(((s2_0 + (v0_2 << 3)) + -3));
                            func_002570a0(0x10);
                        }
                    }
                }
            }
        }
    }
    return;
}
