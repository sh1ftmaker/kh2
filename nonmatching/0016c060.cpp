// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036c1f0 asm("D_0036c1f0");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");

// 0x0016c060 func_0016c060
u32 func_0016c060(u32 a0, u32 a1, u32 a2) asm("_ZN2YS3OBJ8get_faceEPPvS2_");
u32 func_0016c060(u32 a0, u32 a1, u32 a2) {
    u32 s3;
    u32 t7;
    u32 v0;
    u32 t7_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    *(u32*)(a1) = 0;
    *(u32*)(a2) = 0;
    s3 = (a0 + 0x7a0);
    if (((s32)(*(u32*)((s3 + 0x10))) != 0)) {
        t7 = (*(s8*)(((u32)&D_0036c1f0 + 2)) << 0x10);
        v0 = func_00168b88(*(u32*)((s3 + 0x10)), 0x18, (*(s8*)(&D_0036c1f0) | (*(s8*)(((u32)&D_0036c1f0 + 3)) << 0x18)) | (t7 | (*(s8*)(((u32)&D_0036c1f0 + 1)) << 8)), 0);
        if ((v0 != 0)) {
            if (((s32)(*(u32*)((v0 + 8))) != 0)) {
                *(u32*)(a1) = *(u32*)((v0 + 8));
                t7_0 = (*(s8*)(((u32)&D_0036c1f0 + 2)) << 0x10);
                v0_1 = func_00168b88(*(u32*)((s3 + 0x10)), 0x19, (*(s8*)(&D_0036c1f0) | (*(s8*)(((u32)&D_0036c1f0 + 3)) << 0x18)) | (t7_0 | (*(s8*)(((u32)&D_0036c1f0 + 1)) << 8)), 0);
                if ((v0_1 != 0)) {
                    if ((*(u32*)((v0_1 + 8)) != 0)) {
                        *(u32*)(a2) = *(u32*)((v0_1 + 8));
                        v0_2 = 1;
                    } else {
                        v0_2 = 0;
                    }
                    v0_1 = v0_2;
                } else {
                    v0_1 = 0;
                }
                v0_3 = v0_1;
            } else {
                v0_3 = 0;
            }
            v0 = v0_3;
        } else {
            v0 = 0;
        }
        v0_4 = v0;
    } else {
        v0_4 = 0;
    }
    return v0_4;
}
