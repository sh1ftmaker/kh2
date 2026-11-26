// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_00176b20(u32) asm("func_00176b20");
extern "C" u32 func_001919d0() asm("func_001919d0");
extern "C" u32 func_001919f8(u32, u32) asm("func_001919f8");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001c7950(u32, u32, f32, f32) asm("func_001c7950");
extern "C" void func_001a5380(u32, u32, u32) asm("func_001a5380");

// 0x001a5140 func_001a5140
void func_001a5140(u32 a0, u32 a1) asm("_ZN2YS5PRIZE14_OVR_check_getEPNS_11PRIZEEFFECTE");
void func_001a5140(u32 a0, u32 a1) {
    u32 s1;
    u32 v0;
    if (((s32)(func_001919f8(a0, a1)) != 0)) {
        *(u32*)((a1 + 0x28)) = (*(u32*)((a1 + 0x28)) | 8);
    }
    if (((s32)(func_001919d0()) != 0)) {
        func_001a5380(a0, *(u32*)(&D_0034e948), a1);
    } else {
        if (((s32)((*(u32*)((a1 + 0x28)) & 8)) != 0)) {
            if (((s32)(((u32)(*(u8*)((a1 + 0x44))) < (u32)(3))) == 0)) {
                func_001a5380(a0, *(u32*)(&D_0034e948), a1);
            }
        }
        s1 = 0;
        do {
            v0 = func_00176b20(s1);
            if ((func_0019ba60(v0) != 0)) {
                if (((*(u32*)((v0 + 0x7f8)) & 4) == 0)) {
                    if (((*(u32*)((v0 + 0x588)) & 0x80) != 0)) {
                        if (((s32)((*(u32*)((v0 + 0xb50)) ^ 6)) != 0) || ((u32)(*(u8*)((a1 + 0x14))) >= (u32)(2))) {
                            if (((s32)(func_001c7950(a1, v0, 0.0f, 0.0f)) != 0)) {
                                func_001a5380(a0, v0, a1);
                                return;
                            }
                        }
                    } else {
                        if (((u32)((*(u8*)((a1 + 0x14)) + -7)) >= (u32)(2))) {
                            if (((s32)(func_001c7950(a1, v0, 0.0f, 0.0f)) != 0)) {
                                func_001a5380(a0, v0, a1);
                                return;
                            }
                        }
                    }
                }
            }
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(3))) != 0));
    }
    return;
}
