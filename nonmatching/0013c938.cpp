// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004573c0 asm("D_004573c0");
extern "C" u32 func_0013b838(u32) asm("func_0013b838");
extern "C" u32 func_0013c878(u32) asm("func_0013c878");
extern "C" u32 func_0013c888(u32, u32, u32) asm("func_0013c888");
extern "C" u32 func_001917b0() asm("func_001917b0");
extern "C" u32 func_001bcf38(u32, u32) asm("func_001bcf38");
extern "C" void func_0013c3b8(u32, u32, u32, u32, u32) asm("func_0013c3b8");
extern "C" void func_0013c900(u32, u32, u32, u32) asm("func_0013c900");
extern "C" void func_0013cbb8(u32, u32, u32) asm("func_0013cbb8");
extern "C" void func_0013ce08(u32, u32) asm("func_0013ce08");
extern "C" void func_0013d3f8(u32) asm("func_0013d3f8");

// 0x0013c938 func_0013c938
u32 func_0013c938(u32 a0) asm("_ZN2dk12COMMAND_DRAW6updateEv");
u32 func_0013c938(u32 a0) {
    u32 s4;
    u32 t6;
    u32 t7;
    u32 s2;
    u32 s0;
    u32 s0_0;
    u32 v0;
    u32 s3;
    u32 t6_1;
    u32 s0_2;
    u32 t5;
    u32 t6_3;
    u32 v0_4;
    func_0013d3f8(a0);
    s4 = func_001917b0();
    t6 = 3;
    t7 = (u32)&D_004573c0;
    do {
        *(u32*)((t7 + ((t6 - 3) * -4))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    s2 = ((s32)(*(u32*)((*(u32*)((a0 + 0x29c)) + 0x8c0))) != 0) ? (((s32)(((*(u32*)((*(u32*)((a0 + 0x29c)) + 0x8c0)) - *(u32*)((a0 + 0x29c))) + -0x9e8)) >> 2) + 1) : 0;
    if (((s32)((*(u32*)((*(u32*)((a0 + 0x29c)) + 0x20)) & 8)) != 0)) {
        s0 = *(u32*)((*(u32*)((a0 + 0x29c)) + 0x9e8));
        func_0013ce08(a0, (*(u32*)(*(u32*)((*(u32*)((a0 + 0x29c)) + 0x9e8))) ^ 0xa) ? 4 : 0);
    } else {
        s0_0 = *(u32*)((*(u32*)((a0 + 0x29c)) + 0x9e8));
        if (((s32)(func_001bcf38(*(u32*)((*(u32*)((a0 + 0x29c)) + 0x9e8)), 4)) != 0)) {
            func_0013c900(a0, 0, s0_0, s2);
            func_0013cbb8(a0, s0_0, func_0013c878(a0));
        } else {
            v0 = func_0013c888(a0, s4, s0_0);
            if (((s32)(s2) > 0)) {
                s3 = 0;
                t6_1 = *(u32*)((a0 + 0x29c));
                do {
                    s0_2 = *(u32*)((((s3 << 2) + *(u32*)((a0 + 0x29c))) + 0x9e8));
                    func_0013c900(a0, s3, *(u32*)((((s3 << 2) + *(u32*)((a0 + 0x29c))) + 0x9e8)), s2);
                    func_0013c3b8(a0, s0_2, s3, s4, v0);
                    s3 = (s3 + 1);
                } while (((s32)(s3) < (s32)(s2)));
            }
            if (((s32)(((s32)(s2) < (s32)(4))) != 0)) {
                t5 = 0xffffffff;
                t6_3 = (((s2 << 2) + a0) + 0xcc);
                do {
                    *(u32*)(t6_3) = t5;
                    s2 = (s2 + 1);
                    t6_3 = (t6_3 + 4);
                } while (((s32)(((s32)(s2) < (s32)(4))) != 0));
            }
        }
    }
    *(u32*)((a0 + 0xec)) = *(u32*)(*(u32*)((*(u32*)((a0 + 0x29c)) + 0x9e8)));
    v0_4 = func_0013b838(a0);
    *(u32*)((a0 + 0xf8)) = s4;
    return v0_4;
}
