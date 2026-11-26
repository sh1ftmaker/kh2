// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00315f6d asm("D_00315f6d");
extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_00ffffff asm("D_00ffffff");
extern "C" u32 func_00197920() asm("func_00197920");
extern "C" u32 func_002ceb28() asm("func_002ceb28");
extern "C" u32 func_002dc7c8(u32) asm("func_002dc7c8");
extern "C" u32 func_002e3318(u32, u32, u32, u32, u32, u32) asm("func_002e3318");
extern "C" u32 func_002e33d8(u32, u32, u32) asm("func_002e33d8");
extern "C" u32 func_002e33f8(u32, u32, u32) asm("func_002e33f8");
extern "C" void func_002cf938(u32, u32) asm("func_002cf938");
extern "C" void func_002cfb30() asm("func_002cfb30");

// 0x002dcc90 func_002dcc90(int)
// minilink-rodata 0x00375da4   (float literals live here in the original)
void lift_002dcc90(u32 a0) asm("_Z13func_002dcc90i");
void lift_002dcc90(u32 a0) {
    u32 s2;
    s32 s0;
    u32 v0;
    u32 v0_0;
    u32 s3;
    u32 v0_1;
    u32 t7;
    u32 t5;
    u32 t7_2;
    u32 t5_3;
    *(u8*)((a0 + 0x58)) = 1;
    if (((s32)(*(u32*)(((a0 + 0x8000) + 0x74))) >= (s32)(*(u32*)((func_002dc7c8(a0) + 0x8c))))) {
        *(u32*)((a0 + 0x88)) = 1;
    } else {
        *(u32*)((a0 + 0x88)) = 0;
    }
    if (((s32)(func_002ceb28()) != 0)) {
        if (((s32)(func_00197920()) == 0)) {
            if (((*(f32*)((a0 + 0xd8)) / 60.0f) < (f32)((s32)((*(f32*)((a0 + 0xd4)) / 60.0f))))) {
                s2 = (a0 + 0x8000);
                s0 = (s32)((*(f32*)((a0 + 0xd4)) / 60.0f));
                v0 = func_002e33d8(*(u32*)((s2 + 0x64)), (s32)((*(f32*)((a0 + 0xd4)) / 60.0f)), *(u32*)((a0 + 0x8c)));
                if (((s32)(v0) >= 0)) {
                    *(f32*)((a0 + 0xd4)) = ((f32)((s32)(v0)) * 60.0f);
                    s0 = v0;
                }
                v0_0 = func_002e33f8(*(u32*)((s2 + 0x64)), s0, *(u32*)((a0 + 0x8c)));
                if (((s32)(v0_0) >= 0)) {
                    *(u32*)((a0 + 0x8c)) = 0;
                    *(f32*)((a0 + 0xd4)) = ((f32)((s32)(v0_0)) * 60.0f);
                    *(u8*)((s2 + 0x90)) = 0;
                    s0 = v0_0;
                }
                s3 = (a0 + 0x90);
                v0_1 = func_002e3318(*(u32*)((s2 + 0x64)), s3, 0x10, s0, *(u32*)((a0 + 0x88)), *(u32*)((a0 + 0x8c)));
                t7 = (v0_1 << 2);
                *(u32*)(((t7 + a0) + 0x90)) = 0;
                if (((s32)(v0_1) != 0)) {
                    if (((s32)(*(u8*)((s2 + 0x90))) != 0)) {
                        if (((s32)(v0_1) > 0)) {
                            t5 = 0;
                            t7_2 = *(u32*)(s3);
                            do {
                                if (((s32)(*(u32*)(s3)) != 0)) {
                                    if (((*(u32*)(s3) & (u32)&D_00ffffff) != (u32)&D_00315f6d)) {
                                        *(u8*)(((a0 + 0x8000) + 0x90)) = 0;
                                        break;
                                    }
                                }
                                t5_3 = (t5 + 1);
                                s3 = (s3 + 4);
                                t5 = t5_3;
                                t7_2 = ((s32)(t5_3) < (s32)(v0_1));
                            } while ((t7_2 != 0));
                        }
                    }
                    func_002cf938(0, s3);
                }
                *(u32*)((a0 + 0x90)) = 0;
            }
            func_002cfb30();
            *(f32*)((a0 + 0xd8)) = *(f32*)((a0 + 0xd4));
            *(f32*)((a0 + 0xd4)) = (*(f32*)((a0 + 0xd4)) + *(f32*)(&D_00349e10));
        }
    }
    return;
}
