// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5d4 asm("D_0035f5d4");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" void func_00138c90(u32, u32, u32) asm("func_00138c90");

// 0x002a16b8 Tz::JmDiagram::CalcSelIdx()
void lift_002a16b8() asm("_ZN2Tz9JmDiagram10CalcSelIdxEv");
void lift_002a16b8() {
    u32 v0;
    u32 s3;
    u32 s6;
    u32 v0_0;
    u32 s2;
    u32 loc_0;
    u32 loc_4;
    v0 = func_002766d0();
    s3 = *(s16*)((*(u32*)(&D_0035f5d4) + 0x44));
    s6 = *(s16*)((*(u32*)(&D_0035f5d4) + 0x46));
    v0_0 = func_0023aa98(v0 + 0x10b0);
    s2 = 0;
    if (((s32)(*(s8*)(*(u32*)(&D_0035f5d4))) > 0)) {
        do {
            func_00138c90(v0 + 0x1098, (u32)&loc_0, (u32)&loc_4);
            if (((s32)(((s32)(s3) < (s32)((loc_0 - ((s32)((v0_0 + (v0_0 >> 0x1f))) >> 1))))) == 0)) {
                if (((s32)(((s32)((loc_0 + ((s32)((v0_0 + (v0_0 >> 0x1f))) >> 1))) < (s32)(s3))) == 0)) {
                    if (((s32)(((s32)(s6) < (s32)((loc_4 - ((s32)((v0_0 + (v0_0 >> 0x1f))) >> 1))))) == 0)) {
                        if (((s32)(((s32)((loc_4 + ((s32)((v0_0 + (v0_0 >> 0x1f))) >> 1))) < (s32)(s6))) == 0)) {
                            *(u8*)((*(u32*)(&D_0035f5d4) + 1)) = s2;
                            if (((s32)(((s32)(s2) < (s32)(*(s8*)(*(u32*)(&D_0035f5d4))))) == 0)) {
                                *(u8*)((*(u32*)(&D_0035f5d4) + 1)) = 0xffffffff;
                            }
                            return;
                        }
                    }
                }
            }
            s2 = (s2 + 1);
        } while (((s32)(((s32)(s2) < (s32)(*(s8*)(*(u32*)(&D_0035f5d4))))) != 0));
    }
    if (((s32)(((s32)(s2) < (s32)(*(s8*)(*(u32*)(&D_0035f5d4))))) == 0)) {
        *(u8*)((*(u32*)(&D_0035f5d4) + 1)) = 0xffffffff;
    }
    return;
}
