// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de0c asm("D_0035de0c");
extern "C" u32 D_0035de55 asm("D_0035de55");
extern "C" u32 func_001069a8() asm("func_001069a8");
extern "C" u32 func_0014abb8() asm("func_0014abb8");
extern "C" u32 func_0014abc8() asm("func_0014abc8");
extern "C" u32 func_001978f0(f32) asm("func_001978f0");
extern "C" u32 func_001a84f0() asm("func_001a84f0");
extern "C" u32 func_001a8510(f32) asm("func_001a8510");
extern "C" u32 func_0022bd90() asm("func_0022bd90");
extern "C" u32 func_0022d7d8() asm("func_0022d7d8");
extern "C" u32 func_0022f5e8() asm("func_0022f5e8");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_001382b8(u32) asm("func_001382b8");
extern "C" void func_0014aa80(u32, u32, u32) asm("func_0014aa80");
extern "C" void func_0015cde0(u32) asm("func_0015cde0");
extern "C" void func_001618f0() asm("func_001618f0");
extern "C" void func_001623b0() asm("func_001623b0");
extern "C" void func_00224b08(u32) asm("func_00224b08");
extern "C" void func_002bbe80() asm("func_002bbe80");
extern "C" void func_002bbf18() asm("func_002bbf18");

// 0x00226bd0 wtarget_00226bd0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00226bd0(u32 a0) asm("_Z16wtarget_00226bd0jjjj");
u32 lift_00226bd0(u32 a0) {
    if ((*(u8*)(&D_0035de55) == 1)) {
        func_0015cde0(*(u8*)(&D_0035de0c));
    }
    if (((s32)(func_0022d7d8()) != 0)) {
        func_0014aa80(func_0014abb8(), 0xf, 0);
        func_0014aa80(func_0014abc8(), 0xf, 0);
    }
    if ((func_001069a8() == 1)) {
        func_001618f0();
        func_001623b0();
    }
    func_002bbe80();
    if (((s32)(func_0022bd90()) == 0)) {
        func_002bbf18();
    }
    func_00224b08(a0);
    if (((s32)(func_0022f5e8()) != 0)) {
        func_00102448(a0, 1);
    }
    if (((s32)(func_001a84f0()) == 0)) {
        func_001382b8(func_001a8510(0.0f));
        func_00102448(a0, 0);
    }
    return func_001978f0(0.0f);
}
