// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_001a9218(u32) asm("func_001a9218");
extern "C" u32 func_001a9758(u32, u32) asm("func_001a9758");
extern "C" void func_00170e58() asm("func_00170e58");
extern "C" void func_001a9350(u32, u32, u32) asm("func_001a9350");

// 0x001a92d8 func_001a92d8
u32 func_001a92d8(u32 a0, u32 a1, u32 a2) asm("_ZN2YS7OBJDATA3setEjPKNS_8OBJENTRYE");
u32 func_001a92d8(u32 a0, u32 a1, u32 a2) {
    func_001a9350(a0, a1, a2);
    if (((s32)(a2) == 0)) {
        a2 = func_0016e920(a1);
    }
    if ((func_001a9758(a1, a2) == 0)) {
        func_00170e58();
    }
    *(u32*)((a0 + 4)) = a1;
    *(u32*)((a0 + 8)) = a2;
    return func_001a9218(a0);
}
