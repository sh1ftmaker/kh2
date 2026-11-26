// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00367118 asm("D_00367118");

// 0x0030ffd8 func_0030ffd8
u32 func_0030ffd8() asm("func_0030ffd8");
u32 func_0030ffd8() {
    u32 a2_0;
    if (((s32)(*(u32*)(((u32)&D_00367118 + 0x14))) == 0)) {
        return 0x80008005;
    } else {
        *(u32*)((*(u32*)(((u32)&D_00367118 + 0x14)) + 0xc)) = 0;
        *(u32*)((*(u32*)(((u32)&D_00367118 + 0x14)) + 0x28)) = 0;
        *(u32*)(((u32)&D_00367118 + 0x10)) = (*(u32*)(((u32)&D_00367118 + 0x10)) + 1);
        a2_0 = *(u32*)(((u32)&D_00367118 + 0x14));
        *(u32*)(((u32)&D_00367118 + 0x14)) = *(u32*)(*(u32*)(((u32)&D_00367118 + 0x14)));
        *(u64*)((a2_0 + 0x18)) = 0;
        *(u32*)(((u32)&D_00367118 + 0xc)) = (*(u32*)(((u32)&D_00367118 + 0xc)) + 1);
        *(u32*)((a2_0 + 8)) = (((*(u32*)(((u32)&D_00367118 + 0xc)) << 1) & 0x3fe) | 1);
        return ((*(u32*)(((u32)&D_00367118 + 0x14)) << 4) | *(u32*)((a2_0 + 8)));
    }
}
