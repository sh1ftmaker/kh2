// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003a7b70 asm("D_003a7b70");
extern "C" u32 D_003a7d70 asm("D_003a7d70");
extern "C" u32 D_003a7f70 asm("D_003a7f70");
extern "C" u32 D_003a8090 asm("D_003a8090");
extern "C" u32 D_003a81b0 asm("D_003a81b0");
extern "C" u32 D_003a83b0 asm("D_003a83b0");
extern "C" void func_00106ab8(u32) asm("func_00106ab8");
extern "C" void func_00106ac8(u32) asm("func_00106ac8");
extern "C" void func_001070c8(u32) asm("func_001070c8");

// 0x00107d20 func_00107d20(int, int)
void lift_00107d20(u32 a0, u32 a1) asm("_Z13func_00107d20ii");
void lift_00107d20(u32 a0, u32 a1) {
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 s0_2;
    u32 s0_3;
    u32 s0_4;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00106ab8((u32)&D_003a7b70);
            func_00106ab8((u32)&D_003a7b70 + 0x100);
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00106ab8((u32)&D_003a7d70);
            func_00106ab8((u32)&D_003a7d70 + 0x100);
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_001070c8((u32)&D_003a7f70);
            func_001070c8((u32)&D_003a7f70 + 0x90);
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_001070c8((u32)&D_003a8090);
            func_001070c8((u32)&D_003a8090 + 0x90);
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00106ab8((u32)&D_003a81b0);
            func_00106ab8((u32)&D_003a81b0 + 0x100);
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_001070c8((u32)&D_003a83b0);
            func_001070c8((u32)&D_003a83b0 + 0x90);
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((s32)((u32)&D_003a83b0) != 0)) {
                s0 = ((u32)&D_003a83b0 + 0x120);
                while (((s0 + -0x90) != (u32)&D_003a83b0)) {
                    ((void(*)(u32))(*(u32*)(*(u32*)((s0 + -0x90)))))(s0 + -0x90);
                    s0 = (s0 + -0x90);
                }
            }
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((s32)((u32)&D_003a81b0) != 0)) {
                s0_0 = ((u32)&D_003a81b0 + 0x200);
                while (((s0_0 + -0x100) != (u32)&D_003a81b0)) {
                    func_00106ac8(s0_0 + -0x100);
                    s0_0 = (s0_0 + -0x100);
                }
            }
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((s32)((u32)&D_003a8090) != 0)) {
                s0_1 = ((u32)&D_003a8090 + 0x120);
                while (((s0_1 + -0x90) != (u32)&D_003a8090)) {
                    ((void(*)(u32))(*(u32*)(*(u32*)((s0_1 + -0x90)))))(s0_1 + -0x90);
                    s0_1 = (s0_1 + -0x90);
                }
            }
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((s32)((u32)&D_003a7f70) != 0)) {
                s0_2 = ((u32)&D_003a7f70 + 0x120);
                while (((s0_2 + -0x90) != (u32)&D_003a7f70)) {
                    ((void(*)(u32))(*(u32*)(*(u32*)((s0_2 + -0x90)))))(s0_2 + -0x90);
                    s0_2 = (s0_2 + -0x90);
                }
            }
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((s32)((u32)&D_003a7d70) != 0)) {
                s0_3 = ((u32)&D_003a7d70 + 0x200);
                while (((s0_3 + -0x100) != (u32)&D_003a7d70)) {
                    func_00106ac8(s0_3 + -0x100);
                    s0_3 = (s0_3 + -0x100);
                }
            }
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((s32)((u32)&D_003a7b70) != 0)) {
                s0_4 = ((u32)&D_003a7b70 + 0x200);
                while (((s0_4 + -0x100) != (u32)&D_003a7b70)) {
                    func_00106ac8(s0_4 + -0x100);
                    s0_4 = (s0_4 + -0x100);
                }
            }
        }
    }
    return;
}
