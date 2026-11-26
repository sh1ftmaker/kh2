// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00192fb8(u32) asm("func_00192fb8");
extern "C" u32 func_00192388(u32) asm("func_00192388");
extern "C" u32 func_00192440(u32, u32, u32, u32) asm("func_00192440");
extern "C" u32 func_00192450(u32, u32) asm("func_00192450");
extern "C" u32 func_001aae80(u32, u32) asm("func_001aae80");
extern "C" u32 func_001aae90(u32) asm("func_001aae90");
extern "C" u32 func_001ab820(u32) asm("func_001ab820");
extern "C" u32 func_00313bc0(f32) asm("func_00313bc0");
extern "C" void func_00192f98(u32) asm("func_00192f98");

// 0x00192528 func_00192528(void*)
void lift_00192528(u32 a0, u32 a1, u32 a2, u32 a3) asm("_Z13func_00192528Pv");
void lift_00192528(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s5;
    f32 f20;
    f32 f20_0;
    u32 v0;
    u32 v0_1;
    f32 f20_2;
    f32 f0;
    u32 v0_3;
    *(u32*)(a3) = 0;
    *(u32*)((a3 + 4)) = (s32)(((f32)((s32)(*(u8*)((a1 + 0x11)))) * *(f32*)((a2 + 4))));
    if (((s32)(a0) != 0)) {
        if ((*(u8*)(a0) != 0x10)) {
            s5 = 0;
            do {
                if (((s32)(func_00192440(a0, 0, a2, a3)) != 0)) {
                    switch (*(u8*)(a0)) {
                    case 1:
                        f20 = (f32)((s32)(func_001ab820(a1)));
                        f20_0 = (f20 * func_00192fb8(a2));
                        *(u32*)(a3) = (*(u32*)(a3) + (s32)((f20_0 + 0.5f)));
                        break;
                    case 2:
                        s5 = 1;
                        break;
                    case 3:
                        func_00192f98(a2);
                        break;
                    case 9:
                        *(u32*)(a3) = (*(u32*)(a3) + func_001aae90(*(u8*)((a0 + 1))));
                        *(u32*)((a3 + 4)) = (((u32)(func_00313bc0((f32)((s32)(*(u8*)((a1 + 0x11)))) * *(f32*)((a2 + 4)))) < (u32)(*(u32*)((a3 + 4)))) ? *(u32*)((a3 + 4)) : func_00313bc0((f32)((s32)(*(u8*)((a1 + 0x11)))) * *(f32*)((a2 + 4))));
                        break;
                    case 10:
                        *(f32*)((a2 + 4)) = ((f32)((s32)(*(u8*)((a0 + 1)))) / (f32)((s32)(*(u8*)((a1 + 0x11)))));
                        break;
                    case 11:
                        *(f32*)((a2 + 8)) = ((f32)((s32)(*(u8*)((a0 + 1)))) / 100.0f);
                        break;
                    case 12:
                        *(u32*)((a2 + 0xc)) = *(u8*)((a0 + 1));
                        break;
                    case 21:
                        *(u32*)(a3) = (*(u32*)(a3) + 0x20);
                        break;
                    case 22:
                        *(u32*)(a3) = (*(u32*)(a3) + 0x20);
                        *(u32*)((a3 + 4)) = (((u32)(func_00313bc0((f32)((s32)(*(u8*)((a1 + 0x11)))) * *(f32*)((a2 + 4)))) < (u32)(*(u32*)((a3 + 4)))) ? *(u32*)((a3 + 4)) : func_00313bc0((f32)((s32)(*(u8*)((a1 + 0x11)))) * *(f32*)((a2 + 4))));
                        break;
                    case 0:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                    case 20:
                    default:
                        break;
                    }
                } else {
                    v0 = func_00192450(a0, 0);
                    v0_1 = func_001aae80(a1, v0);
                    if ((v0 == 0x46)) {
                        if ((0xffffffff == v0)) {
                            v0_1 = (v0_1 + -2);
                        }
                    }
                    f20_2 = (f32)(v0_1);
                    f0 = (f20_2 * func_00192fb8(a2));
                    *(u32*)((a3 + 4)) = (((u32)((s32)(((f32)((s32)(*(u8*)((a1 + 0x11)))) * *(f32*)((a2 + 4))))) < (u32)(*(u32*)((a3 + 4)))) ? *(u32*)((a3 + 4)) : (s32)(((f32)((s32)(*(u8*)((a1 + 0x11)))) * *(f32*)((a2 + 4)))));
                    *(u32*)(a3) = (*(u32*)(a3) + (s32)((f0 + 0.5f)));
                }
                v0_3 = func_00192388(a0);
                a0 = v0_3;
                if (((s32)(v0_3) == 0)) {
                    break;
                }
                if ((*(u8*)(v0_3) == 0x10)) {
                    return;
                }
            } while ((s5 == 0));
        }
    }
    return;
}
