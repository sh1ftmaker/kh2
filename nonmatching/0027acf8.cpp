// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028abe0(u32) asm("func_0028abe0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_00257a00() asm("func_00257a00");
extern "C" void func_0028be18(u32) asm("func_0028be18");

// 0x0027acf8 func_0027acf8
u32 func_0027acf8() asm("func_0027acf8");
u32 func_0027acf8() {
    u32 s0;
    u32 v0;
    s0 = func_00257770();
    func_00257a00();
    if (((s32)(func_00139d78(s0 + 0x814)) != 0)) {
        func_00139510(s0 + 0x814);
    }
    if ((func_0028be58(*(u32*)(&D_0035f04c)) != 0)) {
        func_0028be18(*(u32*)(&D_0035f04c));
    }
    v0 = func_0028acc8(*(u32*)(&D_0035f01c));
    if ((v0 != 0)) {
        return func_0028abe0(*(u32*)(&D_0035f01c));
    } else {
        return v0;
    }
}
