// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003069a8 asm("D_003069a8");
extern "C" u32 D_01e353d0 asm("D_01e353d0");
extern "C" u32 D_01e35400 asm("D_01e35400");
extern "C" u32 D_01e35540 asm("D_01e35540");
extern "C" u32 func_00306900(u32, u32, u32) asm("func_00306900");
extern "C" u32 func_00310fe0(u32, u32, u32) asm("func_00310fe0");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x00306d88 func_00306d88
void func_00306d88() asm("func_00306d88");
void func_00306d88() {
    func_003058a0(0);
    *(u32*)(&D_01e353d0) = func_00310fe0(0x210, (u32)&D_01e353d0, (u32)&D_003069a8);
    if (((s32)(*(u32*)(&D_01e353d0)) >= 0)) {
        *(u16*)((((u32)&D_01e35400 | 0x20000000) + 2)) = 0;
        *(u16*)((((u32)&D_01e35400 | 0x20000000) + 4)) = 0x210;
        *(u8*)((((u32)&D_01e35400 | 0x20000000) + 6)) = 0x45;
        *(u8*)((((u32)&D_01e35400 | 0x20000000) + 7)) = 0x48;
        *(u32*)((((u32)&D_01e35400 | 0x20000000) + 8)) = 0;
        *(u32*)(((u32)&D_01e353d0 + 4)) = 0;
        *(u32*)(((u32)&D_01e353d0 + 8)) = 0;
        *(u32*)(((u32)&D_01e353d0 + 0xc)) = 0;
        *(u32*)(((u32)&D_01e353d0 + 0x10)) = ((u32)&D_01e35400 | 0x20000000);
        *(u32*)(((u32)&D_01e353d0 + 0x14)) = ((u32)&D_01e35540 | 0x20000000);
        *(u32*)(((u32)&D_01e353d0 + 0x18)) = func_00306900(0x100, 0x45, 0x210);
    }
    return;
}
