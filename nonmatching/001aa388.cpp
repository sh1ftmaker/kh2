// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00192388(u32) asm("func_00192388");
extern "C" u32 func_00192440(u32, u32) asm("func_00192440");
extern "C" u32 func_00192498(u32, u32) asm("func_00192498");
extern "C" void func_00192940(u32, u32, u32, u32) asm("func_00192940");
extern "C" void func_001991a8(u32, u32) asm("func_001991a8");

// 0x001aa388 wtarget_001aa388(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001aa388(u32 a0, u32 a1) asm("_Z16wtarget_001aa388jjjj");
void lift_001aa388(u32 a0, u32 a1) {
    u8 frame[32];
    u32 s1;
    u32 s4;
    u32 s0;
    u32 v0;
    *(u32*)((u32)frame) = *(u32*)((a0 + 0x24));
    *(u32*)(((u32)frame + 4)) = *(u32*)((a0 + 0x28));
    *(u32*)(((u32)frame + 8)) = *(u32*)((a0 + 0x2c));
    *(u32*)(((u32)frame + 0xc)) = *(u32*)((a0 + 0x30));
    *(u32*)(((u32)frame + 0x10)) = *(u32*)((a0 + 0x34));
    *(u32*)(((u32)frame + 0x14)) = *(u32*)((a0 + 0x38));
    *(u32*)(a0) = 0;
    func_00192940(a1, *(u32*)((a0 + 4)), (u32)frame, a0 + 0x10);
    *(u32*)((a0 + 0x1c)) = 0;
    *(u32*)((a0 + 0x20)) = 0;
    s1 = a1;
    while (((s32)(s1) != 0)) {
        if (((s32)(func_00192440(s1, 0)) != 0)) {
            switch (*(u8*)(s1)) {
            case 0:
            case 16:
                s1 = 0;
                break;
            case 6:
                if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
                    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x18))) + 0x24))))(*(u32*)((a0 + 0x18)), *(u8*)((s1 + 1)));
                }
                break;
            case 8:
                if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
                    ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x18))) + 0x28))))(*(u32*)((a0 + 0x18)), *(u8*)((s1 + 1)), *(u8*)((s1 + 2)), *(u8*)((s1 + 3)));
                }
                break;
            case 18:
                func_001991a8(func_00192498(s1, 1), 0);
                break;
            case 19:
                if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
                    s4 = *(u32*)((a0 + 0x18));
                    s0 = func_00192498(s1, 1);
                    *(u32*)((s4 + 8)) = func_00192498(s1, 3);
                    *(u32*)((s4 + 4)) = s0;
                }
                break;
            case 21:
                *(u32*)((a0 + 0x20)) = (*(u32*)((a0 + 0x20)) + 1);
                break;
            case 23:
                *(f32*)((a0 + 0x5c)) = (f32)((s32)(*(u8*)((s1 + 1))));
                *(f32*)((a0 + 0x4c)) = (f32)((s32)(*(u8*)((s1 + 2))));
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 7:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 17:
            case 20:
            case 22:
            default:
                break;
            }
        }
        if ((s1 == 0)) {
            break;
        }
        v0 = func_00192388(s1);
        s1 = v0;
    }
    *(u32*)((a0 + 0xc)) = a1;
    return;
}
