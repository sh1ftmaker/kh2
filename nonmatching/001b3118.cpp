// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_00165830(u32, u32) asm("func_00165830");
extern "C" void func_0016b0e0(u32, u32, u32) asm("func_0016b0e0");

// 0x001b3118 func_001b3118
void func_001b3118(u32 a0, u32 a1) asm("_ZN2YS6OBJOCC10set_matrixEPNS_3OBJE");
void func_001b3118(u32 a0, u32 a1) {
    u8 frame[64];
    u32 t5;
    u32 s2;
    u32 s1;
    u32 a2_0;
    u32 sp;
    u32 sp_1;
    if (((s32)(*(u32*)(a0)) != 0)) {
        if (((s32)(*(u32*)((*(u32*)(a0) + 4))) > 0)) {
            t5 = *(u32*)(a0);
            s2 = 0;
            s1 = 0;
            a2_0 = *(u32*)((a0 + 8));
            do {
                func_0016b0e0(a1, *(u32*)((((s2 << 3) + t5) + 8)), (s1 + (*(u32*)((a0 + 8)) << 6)) + *(u32*)((a0 + 4)));
                *(Q16*)((u32)frame) = *(Q16*)(((s1 + (*(u32*)((a0 + 8)) << 6)) + *(u32*)((a0 + 4))));
                *(Q16*)(((u32)frame + 0x10)) = *(Q16*)((((s1 + (*(u32*)((a0 + 8)) << 6)) + *(u32*)((a0 + 4))) + 0x10));
                *(Q16*)(((u32)frame + 0x20)) = *(Q16*)((((s1 + (*(u32*)((a0 + 8)) << 6)) + *(u32*)((a0 + 4))) + 0x20));
                *(Q16*)(((u32)frame + 0x30)) = *(Q16*)((((s1 + (*(u32*)((a0 + 8)) << 6)) + *(u32*)((a0 + 4))) + 0x30));
                func_00165830(*(u32*)(((s1 + *(u32*)((a0 + 4))) + 0x80)), (u32)frame);
                s1 = (s1 + 0x90);
                s2 = (s2 + 1);
                t5 = *(u32*)(a0);
            } while (((s32)(s2) < (s32)(*(u32*)((*(u32*)(a0) + 4)))));
        } else {
            sp = (u32)frame;
        }
        *(u32*)((a0 + 8)) = (*(u32*)((a0 + 8)) ^ 1);
        sp_1 = sp;
    } else {
        sp_1 = (u32)frame;
    }
    return;
}
