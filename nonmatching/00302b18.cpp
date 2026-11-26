// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00302b18 asm("D_00302b18");
extern "C" u32 D_00365c48 asm("D_00365c48");
extern "C" u32 func_00303698(u32, u32) asm("func_00303698");
extern "C" void func_00302e10(u32) asm("func_00302e10");

// 0x00302b18 func_00302b18
void func_00302b18(u32 a0) asm("func_00302b18");
void func_00302b18(u32 a0) {
    u32 t7;
    u32 t7_0;
    u32 t5;
    u32 s0;
    u32 s2;
    u32 v0;
    u32 v0_1;
    if (((s32)(a0) == 0)) {
        func_00303698(*(u32*)(&D_00365c48), (u32)&D_00302b18);
        return;
    } else {
        if ((*(u32*)((a0 + 0x54)) == 0)) {
            *(u32*)((a0 + 0x54)) = *(u32*)(&D_00365c48);
            t7 = *(u32*)((*(u32*)(&D_00365c48) + 0x38));
        } else {
            t7 = *(u32*)((*(u32*)((a0 + 0x54)) + 0x38));
        }
        if ((t7 == 0)) {
            func_00302e10(*(u32*)(&D_00365c48));
        }
        if (((*(s16*)((a0 + 0xc)) & 8) != 0)) {
            if (((s32)(*(u32*)((a0 + 0x10))) != 0)) {
                t7_0 = *(u32*)(a0);
                *(u32*)(a0) = *(u32*)((a0 + 0x10));
                t5 = ((s32)((*(s16*)((a0 + 0xc)) & 3)) == 0) ? *(u32*)((a0 + 0x14)) : 0;
                *(u32*)((a0 + 8)) = t5;
                if (((s32)((t7_0 - *(u32*)((a0 + 0x10)))) > 0)) {
                    s0 = (t7_0 - *(u32*)((a0 + 0x10)));
                    s2 = *(u32*)((a0 + 0x10));
                    v0 = *(u32*)((a0 + 0x24));
                    do {
                        v0_1 = ((u32(*)(u32, u32, u32))(*(u32*)((a0 + 0x24))))(*(u32*)((a0 + 0x1c)), s2, s0);
                        if (((s32)(v0_1) <= 0)) {
                            *(u16*)((a0 + 0xc)) = (*(u16*)((a0 + 0xc)) | 0x40);
                            return;
                        }
                        s0 = (s0 - v0_1);
                        s2 = (s2 + v0_1);
                        v0 = v0_1;
                    } while (((s32)(s0) > 0));
                }
            }
        }
        return;
    }
}
