// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00365c50 asm("D_00365c50");
extern "C" u32 D_00366068 asm("D_00366068");
extern "C" u32 D_00366080 asm("D_00366080");
extern "C" u32 func_002fea70(u32, u32) asm("func_002fea70");
extern "C" void func_002fded8(u32, u32) asm("func_002fded8");
extern "C" void func_002fdf30(u32, u32) asm("func_002fdf30");

// 0x00303170 func_00303170
u32 func_00303170(u32 a0, u32 a1) asm("func_00303170");
u32 func_00303170(u32 a0, u32 a1) {
    u32 s0;
    u32 s1;
    u32 v0;
    u32 a1_0;
    u32 s1_1;
    u32 v0_2;
    u32 a1_3;
    u32 v0_4;
    u32 s0_5;
    u32 s1_6;
    u32 v0_7;
    func_002fded8(a0, a1);
    if (((s32)(((s32)(((((((u32)((*(u32*)((*(u32*)(((u32)&D_00365c50 + 8)) + 4)) & 0xfffffffc)) - (u32)(a1)) + 0xfef) >> 0xc) + -1) << 0xc)) < (s32)(0x1000))) == 0)) {
        s0 = ((((((u32)((*(u32*)((*(u32*)(((u32)&D_00365c50 + 8)) + 4)) & 0xfffffffc)) - (u32)(a1)) + 0xfef) >> 0xc) + -1) << 0xc);
        s1 = (u32)((*(u32*)((*(u32*)(((u32)&D_00365c50 + 8)) + 4)) & 0xfffffffc));
        if ((func_002fea70(a0, 0) == (*(u32*)(((u32)&D_00365c50 + 8)) + (s32)((u64)(s1))))) {
            if ((func_002fea70(a0, -((s32)((u64)(s0)))) == 0xffffffff)) {
                v0 = func_002fea70(a0, 0);
                if (((s32)(((s32)((v0 - *(u32*)(((u32)&D_00365c50 + 8)))) < (s32)(0x10))) == 0)) {
                    *(u32*)(&D_00366080) = (v0 - *(u32*)(&D_00366068));
                    *(u32*)((*(u32*)(((u32)&D_00365c50 + 8)) + 4)) = (s32)((u64)(((v0 - *(u32*)(((u32)&D_00365c50 + 8))) | 1)));
                }
                s1_1 = (v0 - *(u32*)(((u32)&D_00365c50 + 8)));
                func_002fdf30(a0, a1_0);
                v0_2 = 0;
            } else {
                *(u32*)((*(u32*)(((u32)&D_00365c50 + 8)) + 4)) = (s32)((u64)(((s1 - s0) | 1)));
                *(u32*)(&D_00366080) = (*(u32*)(&D_00366080) - (s32)((u64)(s0)));
                func_002fdf30(a0, 0);
                v0_2 = 1;
            }
            v0_4 = v0_2;
        } else {
            func_002fdf30(a0, a1_3);
            v0_4 = 0;
        }
        v0_7 = v0_4;
    } else {
        s0_5 = ((((((u32)((*(u32*)((*(u32*)(((u32)&D_00365c50 + 8)) + 4)) & 0xfffffffc)) - (u32)(a1)) + 0xfef) >> 0xc) + -1) << 0xc);
        s1_6 = (u32)((*(u32*)((*(u32*)(((u32)&D_00365c50 + 8)) + 4)) & 0xfffffffc));
        func_002fdf30(a0, 0);
        v0_7 = 0;
    }
    return v0_7;
}
