// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00229830(u32) asm("func_00229830");
extern "C" u32 func_0022b720() asm("func_0022b720");
extern "C" u32 func_0022b9e0(u32, u32, u32, u32) asm("func_0022b9e0");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00229430(u32, u32) asm("func_00229430");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x002294c8 func_002294c8
u32 func_002294c8(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2sa13MUSICAL_SCORE6createEiPiS1_i");
u32 func_002294c8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s7;
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s5;
    u32 v0_0;
    s7 = func_0022b9e0(a0, a1, a2, a3);
    v0 = func_0022b720();
    *(u32*)((a0 + 0xb40)) = a2;
    *(u32*)((a0 + 0xb48)) = a1;
    *(u32*)((a0 + 0xb4c)) = a3;
    func_001386e0(a0 + 0x18, 0xaf0, s7, v0, *(u32*)((a3 + 0x2c)), 0xb);
    if (((s32)(*(u32*)((a0 + 0xb48))) > 0)) {
        s0 = (a0 + 0x1b0);
        s1 = (*(u32*)((a0 + 0xb48)) + -1);
        s5 = 0;
        do {
            func_001386e0(s0, 0xaf0, s7, v0, *(u32*)(*(u32*)((a0 + 0xb4c))), 0xb);
            *(u32*)((s0 + 0x18c)) = (a0 + 0x18);
            func_001396b0(s0);
            if (((s32)(*(u32*)((s0 + 0x18c))) != 0)) {
                *(u32*)((s0 + 0x190)) = 0;
                func_001396b0(s0);
                if (((s32)(*(u32*)((s0 + 0x190))) != 0)) {
                    func_0031a260(s0, 0);
                }
            }
            func_001396b0(s0);
            func_00139660(s0);
            func_00139688(s0);
            func_00138c68(s0, s1 * func_0023aa98(a0 + 0x1c8), 0);
            s0 = (s0 + 0x198);
            s1 = (s1 + -1);
            s5 = (s5 + 1);
        } while (((s32)(((s32)(s5) < (s32)(*(u32*)((a0 + 0xb48))))) != 0));
    }
    func_00229430(a0, 0xaf0);
    *(u32*)(((a0 + 0x18) + 0x18c)) = 0;
    func_001396b0(a0 + 0x18);
    if (((s32)(*(u32*)(((a0 + 0x18) + 0x18c))) != 0)) {
        *(u32*)(((a0 + 0x18) + 0x190)) = 0;
        func_001396b0(a0 + 0x18);
        if (((s32)(*(u32*)(((a0 + 0x18) + 0x190))) != 0)) {
            func_0031a260(a0 + 0x18, 0);
        }
    }
    v0_0 = func_00229830(a0);
    *(u32*)((a0 + 0xb44)) = 0xffffffff;
    return v0_0;
}
