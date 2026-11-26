// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2aa80 asm("D_01e2aa80");
extern "C" u32 func_002b7d5c(u32, u32, u32, u32) asm("func_002b7d5c");
extern "C" u32 func_002b97d8(u32, u32, u32, u32, u32) asm("func_002b97d8");
extern "C" void func_002b73ac(u32, u32, u32, u32, u32) asm("func_002b73ac");

// 0x002bb468 ctarget_002bb468(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002bb468(u32 a0, u32 a1) asm("_Z16ctarget_002bb468jjjj");
void lift_002bb468(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    t6 = 0;
    while ((t7 = ((s32)(t6) != 0) ? *(u32*)((t6 + 0x1c)) : *(u32*)(&D_01e2aa80)), (t6 = t7), ((s32)(t7) != 0)) {
        if ((t7 == a0)) {
            break;
        }
    }
    if ((*(u8*)((a0 + 0x31)) != 5)) {
        if ((*(u8*)((a0 + 0x31)) != 6)) {
            func_002b73ac(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), 0xffffffff, a1);
            return;
        } else {
            func_002b97d8(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), 0xffffffff, a1, a1);
            return;
        }
    } else {
        func_002b7d5c(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), 0xffffffff, a1);
        return;
    }
}
