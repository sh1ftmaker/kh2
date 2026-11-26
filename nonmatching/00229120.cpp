// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00224860() asm("func_00224860");
extern "C" u32 func_0022b720() asm("func_0022b720");
extern "C" u32 func_0022b9e0() asm("func_0022b9e0");
extern "C" u32 func_0031a260(u32, u32) asm("func_0031a260");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00229430(u32, u32) asm("func_00229430");

// 0x00229120 func_00229120
void func_00229120(u32 a0) asm("_ZN2sa14MUSICAL_SCORE14initEv");
void func_00229120(u32 a0) {
    u32 s0;
    u32 s1;
    func_00229430(a0, 0xaf0);
    *(u32*)((a0 + 0x9a8)) = func_00224860();
    s0 = func_0022b9e0();
    s1 = (a0 + 0x18);
    func_001386e0(s1, 0xaf0, s0, func_0022b720(), 0x15, 0xb);
    *(u32*)((s1 + 0x188)) = 0x16;
    *(u32*)((s1 + 0x18c)) = 0;
    func_001396b0(s1);
    if (((s32)(*(u32*)((s1 + 0x18c))) != 0)) {
        *(u32*)((s1 + 0x190)) = 0;
        func_001396b0(s1);
        if (((s32)(*(u32*)((s1 + 0x190))) != 0)) {
            func_0031a260(s1, 0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
