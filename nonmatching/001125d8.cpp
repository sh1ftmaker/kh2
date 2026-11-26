// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003417b0 asm("D_003417b0");
extern "C" u32 func_00190128(u32) asm("func_00190128");
extern "C" u32 func_00190140(u32) asm("func_00190140");
extern "C" void func_0010d918(u32, u32, u32) asm("func_0010d918");

// 0x001125d8 func_001125d8
u32 func_001125d8(u32 a0, u32 a1, u32 a2) asm("_ZN2kn6Friend9setTargetENS0_15SET_TARGET_MODEEPN2YS6TARGETE");
u32 func_001125d8(u32 a0, u32 a1, u32 a2) {
    u32 s2;
    u32 s2_0;
    u32 s2_1;
    u32 s2_2;
    u32 s2_3;
    u32 s2_4;
    u32 s2_5;
    u32 s2_6;
    u32 s2_7;
    u32 v0;
    u32 t7;
    u32 s1;
    u32 v0_8;
    if ((a1 != 1)) {
        if (((s32)(((s32)(a1) < (s32)(2))) == 0)) {
            if ((a1 != 2)) {
                if ((a1 == 3)) {
                    s2 = (a0 + 0x9f4);
                    func_00190128(s2);
                    func_0010d918(a0, s2, s2);
                    s2_1 = s2;
                } else {
                    s2_0 = (a0 + 0x9f4);
                    s2_1 = s2_0;
                }
                s2_3 = s2_1;
            } else {
                *(u32*)((a0 + 0x9f4)) = *(u32*)(&D_003417b0);
                *(u32*)((a0 + 0x9f8)) = *(u32*)(((u32)&D_003417b0 + 4));
                *(u32*)((a0 + 0x9fc)) = *(u32*)(((u32)&D_003417b0 + 8));
                *(u32*)((a0 + 0xa00)) = *(u32*)(((u32)&D_003417b0 + 0xc));
                *(u32*)((a0 + 0xa04)) = *(u32*)(((u32)&D_003417b0 + 0x10));
                s2_2 = (a0 + 0x9f4);
                s2_3 = s2_2;
            }
            s2_5 = s2_3;
        } else {
            s2_4 = (a0 + 0x9f4);
            s2_5 = s2_4;
        }
        s2_7 = s2_5;
    } else {
        *(u32*)((a0 + 0x9f4)) = *(u32*)(a2);
        *(u32*)((a0 + 0x9f8)) = *(u32*)((a2 + 4));
        *(u32*)((a0 + 0x9fc)) = *(u32*)((a2 + 8));
        *(u32*)((a0 + 0xa00)) = *(u32*)((a2 + 0xc));
        *(u32*)((a0 + 0xa04)) = *(u32*)((a2 + 0x10));
        s2_6 = (a0 + 0x9f4);
        s2_7 = s2_6;
    }
    v0 = func_00190140(s2);
    t7 = ((s32)(v0) != 0) ? (((u32)(0) < (u32)(*(u32*)((a0 + 0x9f4)))) & 0xff) : 0;
    if (((s32)(t7) == 0)) {
        s1 = ((u32)(0) < (u32)(*(u32*)((a0 + 0x9f4))));
        v0_8 = func_00190128(s2_7);
        v0 = v0_8;
    }
    if ((a1 == 0)) {
        *(u32*)((a0 + 0xb7c)) = (*(u32*)((a0 + 0xb7c)) & 0xfffeffff);
    } else {
        *(u32*)((a0 + 0xb7c)) = (*(u32*)((a0 + 0xb7c)) | 0x10000);
    }
    return v0;
}
