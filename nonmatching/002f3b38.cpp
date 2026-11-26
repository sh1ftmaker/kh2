// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f3588(u32, u32, u32) asm("func_002f3588");
extern "C" void func_002f3490(u32) asm("func_002f3490");

// 0x002f3b38 func_002f3b38
void func_002f3b38(u32 a0, u32 a1, u32 a2) asm("func_002f3b38");
void func_002f3b38(u32 a0, u32 a1, u32 a2) {
    u32 s1;
    u32 v1;
    u32 v0;
    s1 = func_002f3588(a1, a1, a2);
    v1 = *(u32*)((a0 + 0x10));
    func_002f3490(a0);
    if ((v1 != 0xffffffff)) {
        *(u32*)((a0 + 0x10)) = s1;
    }
    *(u32*)((a0 + 0x20)) = a2;
    v0 = *(u32*)(a0);
    *(u32*)(a0) = ((((v0 & 0xfffffff3) | 8) & 0xfffffffe) | 0x100);
    return;
}
