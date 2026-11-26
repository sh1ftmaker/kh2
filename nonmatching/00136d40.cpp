// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d30 asm("D_00347d30");
extern "C" u32 D_00347d40 asm("D_00347d40");
extern "C" u32 D_00347d50 asm("D_00347d50");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_00136b78(u32, u32) asm("func_00136b78");
extern "C" u32 func_00136b90(u32) asm("func_00136b90");
extern "C" u32 func_00136cf0() asm("func_00136cf0");
extern "C" u32 func_00225540() asm("func_00225540");
extern "C" u32 func_002b7148(u32) asm("func_002b7148");
extern "C" u32 func_002bd260(u32) asm("func_002bd260");
extern "C" void func_00136cc8(u32, u32) asm("func_00136cc8");
extern "C" void func_002ba220(u32, u32, u32, u32, u32, u32) asm("func_002ba220");
extern "C" void func_002ba830(u32, u32, u32) asm("func_002ba830");
extern "C" void func_002bd310(u32) asm("func_002bd310");

// 0x00136d40 func_00136d40
void func_00136d40(u32 a0) asm("_ZN2dk3BGM8areaReadEP4TASK");
void func_00136d40(u32 a0) {
    u32 t7;
    u8 t7_0;
    u32 s1;
    u32 t7_1;
    u8 t7_2;
    u32 s1_3;
    u32 s0;
    t7 = *(u32*)(((u32)&D_00347d30 + 0xc));
    t7_0 = (t7 & 1);
    if (((s32)(t7_0) != 0)) {
        s1 = *(u32*)(((u32)&D_00347d30 + 4));
        func_00136cc8(a0, *(u32*)(((u32)&D_00347d30 + 4)));
        *(u32*)((a0 + 4)) = func_002bd260(s1);
        *(u32*)((a0 + 8)) = s1;
        *(u32*)((a0 + 0xc)) = 0;
        *(u32*)((a0 + 0x10)) = func_001050c8();
        func_002bd310(a0);
    }
    t7_1 = *(u32*)(((u32)&D_00347d30 + 0x1c));
    t7_2 = (t7_1 & 1);
    if (((s32)(t7_2) != 0)) {
        s1_3 = *(u32*)((((u32)&D_00347d30 + 0x10) + 4));
        *(u32*)((a0 + 4)) = func_002bd260(*(u32*)((((u32)&D_00347d30 + 0x10) + 4)));
        *(u32*)((a0 + 8)) = s1_3;
        *(u32*)((a0 + 0xc)) = 1;
        *(u32*)((a0 + 0x10)) = func_001050c8();
        func_002bd310(a0);
    }
    if (((s32)((*(u32*)(((u32)&D_00347d30 + 0xc)) & 2)) != 0)) {
        *(u32*)(&D_00347d50) = 0;
        func_002ba220(0, 0x3000, 0x3000, 0, 0, 0);
        func_00136b78(0, 0x3000);
        return;
    } else {
        if ((func_00136b90(0) != 0x3000)) {
            if (((s32)(*(u32*)(&D_00347d30)) != 0)) {
                if (((s32)(func_00225540()) != 0)) {
                    s0 = func_00136b90(0);
                    if (((s32)(func_002b7148(0)) != 0)) {
                        func_002ba830(0, s0, 0x14);
                    } else {
                        func_002ba220(0, 0, 0x3000, 0x14, 1, 0);
                        *(u32*)(&D_00347d50) = 0;
                        s0 = 0x3000;
                    }
                } else {
                    if (((s32)(func_00136b90(0)) == 0)) {
                        *(u32*)(&D_00347d50) = 0;
                        func_002ba220(0, 0x3000, 0x3000, 0, 0, 0);
                    } else {
                        func_002ba830(0, 0x3000, 0x14);
                    }
                }
                func_00136b78(0, s0);
                func_00136cf0();
                return;
            } else {
                return;
            }
        } else {
            if (((s32)(*(u32*)(&D_00347d40)) != 0)) {
                if (((s32)(func_002b7148(1)) == 0)) {
                    if (((s32)(*(u32*)(&D_00347d30)) != 0)) {
                        if (((s32)(func_002b7148(0)) == 0)) {
                            *(u32*)(&D_00347d50) = 0;
                            func_002ba220(0, 0, 0x3000, 0x14, 1, 0);
                            func_00136b78(0, 0x3000);
                            func_00136cf0();
                            return;
                        } else {
                            return;
                        }
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            } else {
                return;
            }
        }
    }
}
