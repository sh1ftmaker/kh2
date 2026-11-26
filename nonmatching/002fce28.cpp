// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002fbba8 asm("D_002fbba8");
extern "C" u32 D_00365948 asm("D_00365948");
extern "C" u32 D_0036594c asm("D_0036594c");
extern "C" u32 D_01e33480 asm("D_01e33480");
extern "C" u32 D_01e334e0 asm("D_01e334e0");
extern "C" u32 D_01e33530 asm("D_01e33530");
extern "C" u32 D_01e34a40 asm("D_01e34a40");
extern "C" u32 func_00305670(u32, u32, u32, u32) asm("func_00305670");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_002ff6f0(u32, u32, u32) asm("func_002ff6f0");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x002fce28 func_002fce28
u32 func_002fce28(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002fce28");
u32 func_002fce28(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    if (((s32)(*(u32*)(((u32)&D_01e33480 + 0x24))) == 0)) {
        v0_4 = 0xffffff9c;
    } else {
        if (((s32)(func_00305670(*(u32*)(&D_0036594c), a1, a2, a3)) >= 0)) {
            if (((s32)(a2) != 0)) {
                if (((s32)(*(s8*)(a2)) != 0)) {
                    if (((s32)(a3) == 0)) {
                        func_00305640(*(u32*)(&D_0036594c));
                        v0_0 = 0xffffff2e;
                    } else {
                        *(u32*)(&D_01e33530) = a0;
                        *(u32*)(((u32)&D_01e33530 + 4)) = a1;
                        *(u32*)(((u32)&D_01e33530 + 8)) = 0x10;
                        func_002ff6f0((u32)&D_01e33530 + 0x14, a2, 0x3ff);
                        *(u8*)(((u32)&D_01e33530 + 0x413)) = 0;
                        func_002ff6f0((u32)&D_01e334e0, a3, 0x20);
                        *(u32*)(((u32)&D_01e33530 + 0x10)) = ((u32)&D_01e334e0 + -0x20);
                        func_003058a0(0);
                        loc_0 = 0;
                        if (((s32)(func_003094b8((u32)&D_01e33480, 0xe, 1, (u32)&D_01e33530, 0x414, (u32)&D_01e34a40, 4, (u32)&D_002fbba8)) != 0)) {
                            func_00305640(*(u32*)(&D_0036594c));
                            v0 = 0xffffffa5;
                        } else {
                            *(u32*)(&D_00365948) = 0x13;
                            v0 = 0;
                        }
                        v0_0 = v0;
                    }
                    v0_1 = v0_0;
                } else {
                    func_00305640(*(u32*)(&D_0036594c));
                    v0_1 = 0xffffff2e;
                }
                v0_2 = v0_1;
            } else {
                func_00305640(*(u32*)(&D_0036594c));
                v0_2 = 0xffffff2e;
            }
            v0_3 = v0_2;
        } else {
            v0_3 = 0xffffff38;
        }
        v0_4 = v0_3;
    }
    return v0_4;
}
