// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00186148(u32, u32) asm("func_00186148");
extern "C" u32 func_0018cdd0(u32) asm("func_0018cdd0");
extern "C" u32 func_001b3e88(u32, u32) asm("func_001b3e88");
extern "C" u32 func_001b58a8(u32, u32) asm("func_001b58a8");
extern "C" u32 func_001b5ab0() asm("func_001b5ab0");
extern "C" void func_0016cce8(u32, u32, u32, u32, u32) asm("func_0016cce8");
extern "C" void func_00186d48(u32, u32) asm("func_00186d48");
extern "C" void func_001883f8(u32, u32) asm("func_001883f8");
extern "C" void func_001b3cb0(u32, u32) asm("func_001b3cb0");
extern "C" void func_001c20e8(u32, u32, u32) asm("func_001c20e8");

// 0x001b3d00 func_001b3d00
u32 func_001b3d00(u32 a0, u32 a1) asm("_ZN2YS7PIERROT16_OVR_exec_damageEPNS_6DAMAGEE");
u32 func_001b3d00(u32 a0, u32 a1) {
    u32 t7;
    u32 t6;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 t7_2;
    u32 v0_3;
    u32 t7_4;
    u32 v0_5;
    u32 v0_6;
    u32 t7_7;
    u32 t7_8;
    u32 t7_9;
    u32 a0_10;
    u32 t7_11;
    u32 a0_12;
    u32 t7_13;
    u32 loc_0;
    u32 v0_14;
    u32 v0_15;
    u32 v0_16;
    t7 = *(u32*)((a0 + 0xabc));
    t6 = *(u32*)(((a0 + 0xabc) + 8));
    if (((s32)((((t7 | *(u32*)(((a0 + 0xabc) + 4))) & ~((0 | t6))) & 0x2000)) == 0)) {
        v0 = func_001b58a8(a0, a1);
        if ((v0 != 0)) {
            v0_0 = func_0018cdd0(a1);
            if ((v0_0 != 0)) {
                v0_1 = func_001b5ab0();
                v0_0 = v0_1;
            }
            v0 = v0_0;
        }
        t7_2 = *(u32*)((a1 + 0x18));
        if (((t7_2 & 4) == 0)) {
            v0_3 = func_001b3e88(a0, a1);
            v0 = v0_3;
        }
        t7_4 = *(u32*)((a0 + 0x7f8));
        if (((t7_4 & 4) == 0)) {
            v0_5 = *(u32*)((*(u32*)(a0) + 0x60));
            v0_6 = ((u32(*)(u32))(v0_5))(a0);
            if ((v0_6 == 0)) {
                *(u32*)((a0 + 0xae8)) = *(u32*)(*(u32*)((a1 + 0x20)));
                func_001b3cb0(a0, *(u32*)((*(u32*)((a1 + 0x1c)) + 8)));
                t7_7 = *(u32*)((a0 + 0x7f8));
                func_00186d48(a0, a1);
                if (((t7_7 & 4) != 0)) {
                    t7_8 = *(u32*)((a0 + 0x588));
                    if (((t7_8 & 0x800) == 0)) {
                        t7_9 = *(u32*)(((a0 + 0xabc) + 8));
                        a0_10 = *(u32*)((a0 + 0xabc));
                        func_001c20e8((a0_10 | *(u32*)(((a0 + 0xabc) + 4))) & ~((0 | t7_9)), a1, a0);
                    }
                } else {
                    t7_11 = *(u32*)(((a0 + 0xabc) + 8));
                    a0_12 = *(u32*)((a0 + 0xabc));
                    func_001c20e8((a0_12 | *(u32*)(((a0 + 0xabc) + 4))) & ~((0 | t7_11)), a1, a0);
                }
                t7_13 = *(u32*)((a0 + 0x484));
                if (((s32)(t7_13) != 0)) {
                    func_001883f8(a0 + 0x300, a1);
                    loc_0 = a1;
                    func_0016cce8(*(u32*)((a0 + 0x484)), 6, (u32)&loc_0, 1, 0);
                }
                ((void(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x68))))(a0, a1);
                v0_14 = func_00186148(a0, a1);
                v0_6 = v0_14;
            }
            v0 = v0_6;
        }
        v0_16 = v0;
    } else {
        v0_15 = func_00186148(a0, a1);
        v0_16 = v0_15;
    }
    return v0_16;
}
