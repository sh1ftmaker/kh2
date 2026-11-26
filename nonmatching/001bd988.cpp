// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001bc710(u32) asm("func_001bc710");
extern "C" u32 func_001bc730(u32, u32) asm("func_001bc730");
extern "C" u32 func_001bcf18(u32) asm("func_001bcf18");
extern "C" u32 func_001bcf38(u32) asm("func_001bcf38");
extern "C" u32 func_002ba2e8(u32, u32) asm("func_002ba2e8");
extern "C" void func_001bd618(u32, u32) asm("func_001bd618");

// 0x001bd988 YS::PLAYER_COMMAND::decide()
u32 lift_001bd988(u32 a0) asm("_ZN2YS14PLAYER_COMMAND6decideEv");
u32 lift_001bd988(u32 a0) {
    u32 t5;
    u32 t5_0;
    u32 v0;
    u32 v0_1;
    u32 t7;
    u32 s0;
    u32 v0_2;
    t5 = (*(u32*)(*(u32*)((a0 + 0x8c0))) + (*(u32*)((*(u32*)(*(u32*)((a0 + 0x8c0))) + 0x6c)) * 0xc));
    t5_0 = (t5 + 0xc);
    if (((s32)((((u32)(*(u8*)((t5_0 + 5))) < (u32)(4)) & 0xff)) == 0)) {
        v0 = func_001bc710(t5_0);
        if (((s32)(v0) != 0)) {
            if (((s32)((*(u32*)((a0 + 0x20)) & 8)) == 0)) {
                return func_002ba2e8(5, 0);
            } else {
                return v0;
            }
        } else {
            return v0;
        }
    } else {
        v0_1 = ((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
        if (((s32)(v0_1) != 0)) {
            t7 = *(u32*)((a0 + 0x8c0));
            for (;;) {
                s0 = *(u32*)(t7);
                if (((s32)(func_001bcf18(*(u32*)(t7))) == 0)) {
                    v0_2 = func_001bcf38(s0);
                    t7 = 0;
                    if (((s32)(v0_2) != 0)) {
                        t7 = 1;
                    }
                } else {
                    t7 = 1;
                }
                if (((s32)(*(u32*)((a0 + 0x8c0))) != 0)) break;
                func_001bc730(*(u32*)(*(u32*)((a0 + 0x8c0))), 0);
                func_001bd618(a0, 0);
                t7 = *(u32*)((a0 + 0x8c0));
            }
            return func_001bc730(*(u32*)(t7), 0);
        } else {
            return v0_1;
        }
    }
}
