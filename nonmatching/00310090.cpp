// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00367118 asm("D_00367118");
extern "C" void func_0030fc28(u32) asm("func_0030fc28");

// 0x00310090 func_00310090
u32 func_00310090(u32 a0) asm("func_00310090");
u32 func_00310090(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(a0) >= 0)) {
        if (((a0 & 0x3ff) != *(u32*)((((a0 >> 0xa) << 6) + 8)))) {
            v0_0 = 0x80008002;
        } else {
            if ((*(u32*)(((u32)&D_00367118 + 0x1c)) == a0)) {
                v0 = 0x80000010;
            } else {
                if (((s32)((*(u32*)((((a0 >> 0xa) << 6) + 0xc)) & 2)) != 0)) {
                    func_0030fc28((a0 >> 0xa) << 6);
                }
                *(u32*)((((a0 >> 0xa) << 6) + 8)) = 0;
                *(u32*)((((a0 >> 0xa) << 6) + 0xc)) = 0;
                *(u32*)(((a0 >> 0xa) << 6)) = *(u32*)(((u32)&D_00367118 + 0x14));
                *(u32*)(((u32)&D_00367118 + 0x10)) = (*(u32*)(((u32)&D_00367118 + 0x10)) + -1);
                *(u32*)(((u32)&D_00367118 + 0x14)) = ((a0 >> 0xa) << 6);
                v0 = 0;
            }
            v0_0 = v0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 0x80008002;
    }
    return v0_1;
}
