// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032b968 asm("D_0032b968");
extern "C" u32 D_0033cb80 asm("D_0033cb80");
extern "C" u32 D_00369f50 asm("D_00369f50");
extern "C" u32 func_001688b8() asm("func_001688b8");
extern "C" u32 func_01f18014(u32, u32) asm("func_01f18014");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_0014c9d8(u32) asm("func_0014c9d8");
extern "C" void func_0014df88() asm("func_0014df88");
extern "C" void func_0014e0d8() asm("func_0014e0d8");
extern "C" void func_00167ea8(u32) asm("func_00167ea8");
extern "C" void func_00168548(u32, u32, u32) asm("func_00168548");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x00105c68 D_00105c68
u32 lift_D_00105c68(u32 a0) asm("D_00105c68");
u32 lift_D_00105c68(u32 a0) {
    u32 v0;
    func_00167ea8(a0);
    func_0014c9d8(1);
    func_0014df88();
    func_0014e0d8();
    if (((s32)(*(u32*)(((u32)&D_0032b968 + 0x1c))) != 0)) {
        *(u32*)(((u32)&D_0032b968 + 0x1c)) = 2;
    }
    func_00168548((u32)&D_00369f50, 0, 0);
    while ((v0 = func_001688b8()), ((s32)(v0) != 0)) {
        func_00102448(a0, 0);
    }
    func_003058a0(2);
    return func_01f18014(0, (u32)&D_0033cb80);
}
