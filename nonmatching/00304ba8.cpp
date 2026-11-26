// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00365c48 asm("D_00365c48");
extern "C" u32 func_00304b60(u32, u32) asm("func_00304b60");
extern "C" void func_00302e90(u32, u32) asm("func_00302e90");

// 0x00304ba8 func_00304ba8
void func_00304ba8(u32 a0) asm("func_00304ba8");
void func_00304ba8(u32 a0) {
    u8 frame[16];
    u32 s2;
    u32 t6;
    u32 s0;
    u32 s0_0;
    u32 sp;
    u32 sp_1;
    u32 s0_2;
    u32 s2_3;
    u32 s0_4;
    if ((a0 != *(u32*)(&D_00365c48))) {
        if (((s32)(*(u32*)((a0 + 0x4c))) == 0)) {
            sp_1 = (u32)frame;
        } else {
            s2 = 0;
            t6 = *(u32*)((a0 + 0x4c));
            do {
                if ((*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x4c)))) != 0)) {
                    s0 = *(u32*)(((s2 << 2) + *(u32*)((a0 + 0x4c))));
                    do {
                        s0_0 = *(u32*)(s0);
                        func_00302e90(a0, *(u32*)(((s2 << 2) + *(u32*)((a0 + 0x4c)))));
                        s0 = s0_0;
                    } while (((s32)(s0) != 0));
                } else {
                    sp = (u32)frame;
                }
                s2 = (s2 + 1);
            } while (((s32)(s2) < (s32)(0xf)));
            func_00302e90(a0, *(u32*)((a0 + 0x4c)));
            sp_1 = sp;
        }
        if ((*(u32*)((a0 + 0x148)) != 0)) {
            if ((*(u32*)((a0 + 0x148)) != (a0 + 0x14c))) {
                s0_2 = *(u32*)((a0 + 0x148));
                s2_3 = (a0 + 0x14c);
                do {
                    s0_4 = *(u32*)(s0_2);
                    func_00302e90(a0, *(u32*)((a0 + 0x148)));
                    s0_2 = s0_4;
                } while ((s0_2 != s2_3));
            }
        }
        if ((*(u32*)((a0 + 0x54)) != 0)) {
            func_00302e90(a0, *(u32*)((a0 + 0x54)));
        }
        if (((s32)(*(u32*)((a0 + 0x38))) != 0)) {
            ((void(*)(u32))(*(u32*)((a0 + 0x3c))))(a0);
            if (((s32)(*(u32*)((a0 + 0x1d8))) != 0)) {
                func_00304b60(a0, *(u32*)((a0 + 0x1d8)));
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
