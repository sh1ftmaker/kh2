// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003511c0 asm("D_003511c0");
extern "C" u32 D_003511c2 asm("D_003511c2");
extern "C" u32 func_001b7fd0(u32) asm("func_001b7fd0");
extern "C" u32 func_002f25a0(u32, u32) asm("func_002f25a0");
extern "C" u32 func_002f35e8(u32) asm("func_002f35e8");
extern "C" void func_002f3918(u32, u32) asm("func_002f3918");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x001b80d8 func_001b80d8
void func_001b80d8(u32 a0) asm("func_001b80d8");
void func_001b80d8(u32 a0) {
    u32 s0;
    u32 s1;
    u32 v0;
    u32 t7;
    if (((s32)(*(u32*)(a0)) != 0)) {
        if (((s32)(((u32)((*(u32*)(a0) + 0x10)) < (u32)(*(u32*)((a0 + 8))))) != 0)) {
            if ((*(u8*)(&D_003511c2) == 1)) {
                s0 = (*(u32*)((a0 + 8)) - *(u32*)(a0));
                s1 = *(u32*)(a0);
                v0 = ((u64)(((u32)(0) < (u32)(func_001b7fd0(a0)))) << 0x3f);
                *(u64*)(s1) = (((((s32)(s0) >> 4) + -1) | v0) | 0x70000000);
            } else {
                t7 = (((s32)((*(u32*)((a0 + 8)) - *(u32*)(a0))) >> 4) + -1);
                *(u64*)(*(u32*)(a0)) = (t7 | 0x70000000);
            }
            if (((s32)(func_001b7fd0(a0)) != 0)) {
                func_002f3918(func_002f35e8(2), *(u32*)(a0));
                *(u8*)(&D_003511c0) = 1;
                return;
            } else {
                func_003058a0(0);
                func_002f3918(func_002f35e8(2), *(u32*)(a0));
                func_002f25a0(0, 0);
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
