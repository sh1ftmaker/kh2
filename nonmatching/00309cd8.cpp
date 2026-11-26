// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366170 asm("D_00366170");
extern "C" u32 D_01e38780 asm("D_01e38780");
extern "C" void func_00305640(u32, u32) asm("func_00305640");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_00309be8() asm("func_00309be8");

// 0x00309cd8 func_00309cd8
void func_00309cd8() asm("func_00309cd8");
void func_00309cd8() {
    u32 s0;
    u32 v0;
    func_00309be8();
    func_00305660(*(u32*)(&D_00366170));
    if (((s32)(((u32)((u32)&D_01e38780) < (u32)(((u32)&D_01e38780 + 0x200)))) != 0)) {
        s0 = (u32)&D_01e38780;
        v0 = *(u32*)(((u32)&D_01e38780 + 4));
        do {
            if ((*(u32*)((s0 + 4)) == 0)) {
                *(u32*)(((s0 + 0x10) + 4)) = 0x10000000;
                func_00305640(*(u32*)(&D_00366170), 0x10000000);
                return;
            }
            s0 = (s0 + 0x10);
            v0 = ((u32)(s0) < (u32)(((u32)&D_01e38780 + 0x200)));
        } while ((v0 != 0));
    }
    func_00305640(*(u32*)(&D_00366170), 0x10000000);
    return;
}
