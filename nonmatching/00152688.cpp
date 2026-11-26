// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036b248 asm("D_0036b248");
extern "C" u32 func_00192cc0(u32, u32, u32, u32) asm("func_00192cc0");
extern "C" u32 func_001a9ae8(u32, u32, u32, u32) asm("func_001a9ae8");
extern "C" void func_001a98e8(u32, u32, u32, u32, u32) asm("func_001a98e8");

// 0x00152688 func_00152688
u32 func_00152688(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2dk15LEVEL_UP_SUMMON4drawEv");
u32 func_00152688(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[112];
    func_001a98e8((u32)frame + 0x10, 1, func_00192cc0((u32)frame, (u32)&D_0036b248, *(u32*)((a0 + 0x1bc)), a3), *(u32*)((a0 + 0x1a8)), 0);
    return func_001a9ae8((u32)frame + 0x10, a1, a2, a3);
}
