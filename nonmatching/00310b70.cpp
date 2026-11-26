// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003109e0 asm("D_003109e0");
extern "C" u32 D_01e3b300 asm("D_01e3b300");
extern "C" u32 func_0030ffd8(u32, u32, u32) asm("func_0030ffd8");
extern "C" void func_00310230(u32) asm("func_00310230");
extern "C" void func_00310670(u32, u32, u32, u32) asm("func_00310670");

// 0x00310b70 func_00310b70
u32 func_00310b70(u32 a0, u32 a1, u32 a2) asm("func_00310b70");
u32 func_00310b70(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 v0;
    u32 v1;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(a1) == 0)) {
        v0_1 = 0x80000016;
    } else {
        s0 = *(u32*)(&D_01e3b300);
        if (((s32)(*(u32*)(&D_01e3b300)) != 0)) {
            *(u32*)(&D_01e3b300) = *(u32*)(*(u32*)(&D_01e3b300));
        }
        if (((s32)(s0) == 0)) {
            v0_0 = 0x80008005;
        } else {
            v0 = func_0030ffd8(a0, a1, a2);
            if (((s32)(v0) < 0)) {
                v1 = *(u32*)(&D_01e3b300);
                *(u32*)(&D_01e3b300) = s0;
                *(u32*)(s0) = v1;
                *(u32*)((s0 + 4)) = 0;
            } else {
                *(u32*)((s0 + 4)) = v0;
                *(u32*)((s0 + 8)) = a1;
                *(u32*)((s0 + 0xc)) = a2;
                func_00310670(v0, a0, (u32)&D_003109e0, s0);
                func_00310230(v0);
                v0 = (((s0 << 4) | (v0 & 0xfe)) | 1);
            }
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    return v0_1;
}
