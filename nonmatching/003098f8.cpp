// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e37200 asm("D_01e37200");
extern "C" void func_0030edb0(u32) asm("func_0030edb0");
extern "C" void func_0030ee00() asm("func_0030ee00");

// 0x003098f8 func_003098f8
u32 func_003098f8(u32 a0) asm("func_003098f8");
u32 func_003098f8(u32 a0) {
    u32 s0;
    u32 v1;
    u32 s0_0;
    u32 s0_1;
    u32 s0_2;
    u32 s0_3;
    func_0030edb0(a0);
    if ((*(u32*)(((u32)&D_01e37200 + 0x28)) == a0)) {
        s0 = *(u32*)(((u32)&D_01e37200 + 0x28));
        *(u32*)(((u32)&D_01e37200 + 0x28)) = *(u32*)((*(u32*)(((u32)&D_01e37200 + 0x28)) + 0x14));
        s0_3 = s0;
    } else {
        if (((s32)(*(u32*)(((u32)&D_01e37200 + 0x28))) != 0)) {
            if ((*(u32*)((*(u32*)(((u32)&D_01e37200 + 0x28)) + 0x14)) != a0)) {
                v1 = *(u32*)((*(u32*)(((u32)&D_01e37200 + 0x28)) + 0x14));
                do {
                    if (((s32)(v1) == 0)) {
                        s0_0 = v1;
                        func_0030ee00();
                        return s0_0;
                    }
                    s0_0 = v1;
                    v1 = *(u32*)((v1 + 0x14));
                } while ((v1 != a0));
                *(u32*)((s0_0 + 0x14)) = *(u32*)((a0 + 0x14));
                s0_1 = s0_0;
            } else {
                *(u32*)((*(u32*)(((u32)&D_01e37200 + 0x28)) + 0x14)) = *(u32*)((a0 + 0x14));
                s0_1 = *(u32*)(((u32)&D_01e37200 + 0x28));
            }
            s0_2 = s0_1;
        } else {
            s0_2 = *(u32*)(((u32)&D_01e37200 + 0x28));
        }
        s0_3 = s0_2;
    }
    func_0030ee00();
    return s0_3;
}
