// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001003c8(u32) asm("func_001003c8");
extern "C" u32 func_00100920(u32, u32) asm("func_00100920");
extern "C" u32 func_001009a0(u32) asm("func_001009a0");
extern "C" void func_001004c0(u32, u32, u32, u32) asm("func_001004c0");

// 0x00101050 func_00101050
u32 func_00101050(u32 a0, u32 a1, u32 a2) asm("func_00101050");
u32 func_00101050(u32 a0, u32 a1, u32 a2) {
    u8 a0_0;
    s32 s2;
    u32 v0;
    u32 v0_1;
    u32 s4;
    u32 s4_2;
    u32 v0_3;
    u32 v0_4;
    u32 loc_0;
    u32 v0_5;
    a0_0 = ((*(u64*)((a0 + 0x10)) >> 3) & 0xff);
    s2 = (s32)((u64)(((*(u64*)((a0 + 0x10)) >> 3) & 0xff)));
    v0 = func_00100920(a0_0 & 0xff, a0);
    v0_1 = v0;
    if (((s32)(*(u32*)(a2)) != 0)) {
        s4 = 0;
        do {
            if ((*(u32*)((a2 + 4)) != 0)) {
                if (((s32)((s32)((u64)(((*(u64*)((a0 + 0x10)) >> 2) & 1)))) != 0)) {
                    if ((((a2 - *(u32*)((a2 + 4))) + 4) != s4)) {
                        s4_2 = ((a2 - *(u32*)((a2 + 4))) + 4);
                        v0_3 = func_001009a0((a2 - *(u32*)((a2 + 4))) + 4);
                        s2 = v0_3;
                        v0_4 = func_00100920(v0_3 & 0xff, a0);
                        v0 = v0_4;
                        s4 = s4_2;
                        v0_1 = v0_4;
                    }
                }
                if (((s32)(s2) == 0)) {
                    if ((*(u32*)((a2 + 8)) != 0)) {
                        if ((*(u32*)(a1) != 0)) {
                            *(u32*)((((*(u32*)((*(u32*)(a1) + 4)) << 2) + *(u32*)(a1)) + 8)) = a2;
                            *(u32*)((*(u32*)(a1) + 4)) = (*(u32*)((*(u32*)(a1) + 4)) + 1);
                        }
                    }
                } else {
                    func_001004c0(s2 & 0xff, v0, a2 + 8, (u32)&loc_0);
                    v0_5 = func_001003c8(s2 & 0xff);
                    if (((s32)(((u32)(v0_5) < (u32)(4))) != 0)) {
                        v0_1 = (u64)((((u64)(1) << (v0_5 << 3)) + -1));
                        v0_1 = (s32)(v0_1);
                    } else {
                        v0_1 = 0xffffffff;
                    }
                    if (((loc_0 & v0_1) != 0)) {
                        if ((*(u32*)(a1) != 0)) {
                            *(u32*)((((*(u32*)((*(u32*)(a1) + 4)) << 2) + *(u32*)(a1)) + 8)) = a2;
                            *(u32*)((*(u32*)(a1) + 4)) = (*(u32*)((*(u32*)(a1) + 4)) + 1);
                        }
                    }
                }
            }
            a2 = ((a2 + *(u32*)(a2)) + 4);
        } while (((s32)(*(u32*)(a2)) != 0));
    }
    return v0_1;
}
