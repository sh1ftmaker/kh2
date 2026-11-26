// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de0c asm("D_0035de0c");
extern "C" u32 D_0035de14 asm("D_0035de14");
extern "C" u32 D_0035de15 asm("D_0035de15");
extern "C" u32 D_0035de18 asm("D_0035de18");
extern "C" u32 D_0035de44 asm("D_0035de44");
extern "C" u32 D_0035de48 asm("D_0035de48");
extern "C" u32 D_0035de68 asm("D_0035de68");
extern "C" u32 D_0035de6c asm("D_0035de6c");
extern "C" u32 D_0035de80 asm("D_0035de80");
extern "C" u32 D_0035de84 asm("D_0035de84");
extern "C" u32 D_0035de88 asm("D_0035de88");
extern "C" u32 D_0035de8c asm("D_0035de8c");
extern "C" f32 func_002272a8() asm("func_002272a8");
extern "C" u32 func_00197920(u32, u32, u32, u32, u32, u32, u32) asm("func_00197920");
extern "C" void func_00226ea0() asm("func_00226ea0");
extern "C" void func_00227130(u32) asm("func_00227130");
extern "C" void func_00227200(u32) asm("func_00227200");
extern "C" void func_00228150(u32) asm("func_00228150");

// 0x00226ac0 func_00226ac0
// minilink-rodata 0x00370e08   (float literals live here in the original)
f32 func_00226ac0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("_ZN2sa5EVENT9event_runEPcPN2kn7FMatrixEPN2YS3OBJEPN3ryj3PAXEPFviEii");
f32 func_00226ac0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    if (((s32)(func_00197920(a0, a1, a2, a3, a4, a5, a6)) != 0)) {
        func_00226ea0();
    }
    *(u32*)(&D_0035de8c) = a4;
    *(u32*)(&D_0035de18) = a1;
    *(u32*)(&D_0035de80) = a2;
    *(u32*)(&D_0035de68) = a5;
    *(u32*)(&D_0035de6c) = a6;
    *(u32*)(&D_0035de84) = a3;
    *(u8*)(&D_0035de14) = 0;
    *(f32*)(&D_0035de48) = 1.0f;
    *(u32*)(&D_0035de88) = 0;
    *(u8*)(&D_0035de15) = 0;
    *(u8*)(&D_0035de0c) = 0;
    *(u8*)(&D_0035de44) = 0;
    func_00227200(0);
    func_00227130(a0);
    func_00228150(1);
    return func_002272a8();
}
