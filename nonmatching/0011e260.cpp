// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0011e410(u32, u32) asm("func_0011e410");
extern "C" u32 func_0011e600(u32, u32, u32) asm("func_0011e600");
extern "C" u32 func_00132018(u32) asm("func_00132018");
extern "C" u32 func_00132068(u32, u32) asm("func_00132068");
extern "C" void func_0011e450(u32, u32) asm("func_0011e450");

// 0x0011e260 func_0011e260
u32 func_0011e260(u32 a0, u32 a1) asm("func_0011e260");
u32 func_0011e260(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v0;
    u32 s2;
    u32 s0;
    u32 v0_0;
    u32 sp;
    u32 sp_1;
    u32 sp_2;
    *(u32*)((a0 + 0x34)) = a1;
    v0 = func_0011e410(a0, func_00132018(func_00132068(a1, 0)));
    if (((s32)(*(u32*)((a0 + 0x34))) != 0)) {
        if ((*(s16*)(*(u32*)((a0 + 0x34))) == 0xffffffff)) {
            if (((u32)(1) < (u32)(*(u32*)((*(u32*)((a0 + 0x34)) + 4))))) {
                s2 = 1;
                do {
                    func_0011e450(a0, func_00132018(func_00132068(*(u32*)((a0 + 0x34)), s2)));
                    s0 = func_00132018(func_00132068(*(u32*)((a0 + 0x34)), 0));
                    v0_0 = func_0011e600(a0, s0, func_00132018(func_00132068(*(u32*)((a0 + 0x34)), s2)));
                    s2 = (s2 + 1);
                    v0 = v0_0;
                } while (((s32)(((u32)(s2) < (u32)(*(u32*)((*(u32*)((a0 + 0x34)) + 4))))) != 0));
            } else {
                sp = (u32)frame;
            }
            sp_1 = sp;
        } else {
            sp_1 = (u32)frame;
        }
        sp_2 = sp_1;
    } else {
        sp_2 = (u32)frame;
    }
    return v0;
}
