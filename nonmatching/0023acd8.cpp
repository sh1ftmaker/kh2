// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e14 asm("D_00349e14");
extern "C" void func_00237ae8(u32) asm("func_00237ae8");
extern "C" void func_0023aab8(u32) asm("func_0023aab8");

// 0x0023acd8 func_0023acd8
// minilink-rodata 0x003714e0   (float literals live here in the original)
void func_0023acd8(u32 a0) asm("_ZN2YI8SEQUENCE7ControlEv");
void func_0023acd8(u32 a0) {
    f32 f2;
    f32 f0;
    u32 t6;
    f2 = (*(f32*)(&D_00349e14) * *(f32*)((a0 + 0x44)));
    *(f32*)((a0 + 0x100)) = (*(f32*)((a0 + 0x100)) + f2);
    if ((*(u32*)((a0 + 0xfc)) != 1)) {
        if (((s32)(*(u32*)((a0 + 0xfc))) >= (s32)(2))) {
            if ((*(u32*)((a0 + 0xfc)) == 2)) {
                f0 = (*(f32*)((a0 + 0x104)) + f2);
                *(f32*)((a0 + 0x104)) = f0;
                if ((*(f32*)((a0 + 0x108)) <= f0)) {
                    *(u32*)((a0 + 0x110)) = 0;
                    *(f32*)((a0 + 0x104)) = (f32)(*(s32*)((a0 + 0x144)));
                    if (((s32)(*(u32*)((a0 + 0x140))) != 0)) {
                        t6 = (*(u32*)((a0 + 0x140)) + -1);
                        *(u32*)((a0 + 0x10c)) = (*(u32*)((a0 + 0x10c)) + 1);
                        *(u32*)((a0 + 0x140)) = t6;
                        if (((s32)(t6) == 0)) {
                            *(u32*)((a0 + 0xfc)) = 3;
                            *(f32*)((a0 + 0x104)) = (*(f32*)((a0 + 0x108)) - 1.0f);
                            if (((s32)(*(u32*)((a0 + 0xec))) != 0)) {
                                ((void(*)(u32))(*(u32*)((a0 + 0xec))))(a0);
                            }
                        }
                    }
                }
                func_0023aab8(a0);
                func_00237ae8(a0);
                *(u8*)((a0 + 0xd4)) = 0;
            }
        }
    } else {
        *(u32*)((a0 + 0xfc)) = 2;
        *(u32*)((a0 + 0x104)) = 0;
        func_0023aab8(a0);
        func_00237ae8(a0);
        *(u32*)((a0 + 0x110)) = 0;
        *(u8*)((a0 + 0xd4)) = 0;
    }
    return;
}
