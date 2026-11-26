// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361980 asm("D_00361980");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001ad0f8(u32, u32, u32) asm("func_001ad0f8");
extern "C" u32 func_001ad330(u32, u32) asm("func_001ad330");
extern "C" u32 func_002edf28(u32, u32, u32) asm("func_002edf28");

// 0x002bed48 worldmap::MessageWidget::MessageWidget(int, int)
u32 lift_002bed48(u32 a0, u32 a1, u32 a2) asm("_ZN8worldmap13MessageWidgetC1Eii");
u32 lift_002bed48(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 t5;
    v0 = func_002edf28(a0, a1, a2);
    *(u32*)(a0) = (u32)&D_00361980;
    *(u32*)((a0 + 0x28)) = 0;
    if (((s32)(a1) != 0)) {
        if ((a1 == 1)) {
            v0_0 = func_001050d8(0x1230);
            v0_1 = func_001ad330(v0_0, a2);
            *(u32*)((a0 + 0x24)) = v0_0;
            v0 = v0_1;
        }
    } else {
        v0_2 = func_001050d8(0xb6c);
        v0_3 = func_001ad0f8(v0_2, a2, 0);
        *(u32*)((a0 + 0x24)) = v0_2;
        *(u32*)((v0_2 + 0x64)) = 2;
        t5 = *(u32*)((a0 + 0x24));
        *(u32*)((t5 + 4)) = 0x100;
        *(u32*)((t5 + 8)) = 0x30;
        v0 = v0_3;
    }
    return v0;
}
