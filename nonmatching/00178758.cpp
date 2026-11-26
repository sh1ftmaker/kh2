// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_00352130 asm("D_00352130");
extern "C" f32 func_0017a3b0(u32) asm("func_0017a3b0");
extern "C" u32 func_00177860(u32) asm("func_00177860");
extern "C" u32 func_001917c0() asm("func_001917c0");
extern "C" u32 func_00197920() asm("func_00197920");
extern "C" u32 func_001b9d40(u32) asm("func_001b9d40");
extern "C" void func_00175af8(u32) asm("func_00175af8");
extern "C" void func_00178220(u32) asm("func_00178220");
extern "C" void func_00179718(u32) asm("func_00179718");
extern "C" void func_00179cb8(u32) asm("func_00179cb8");
extern "C" void func_001a1b68(u32, f32) asm("func_001a1b68");

// 0x00178758 YS::PLAYER::_OVR_pre_exec()
void lift_00178758(u32 a0) asm("_ZN2YS6PLAYER13_OVR_pre_execEv");
void lift_00178758(u32 a0) {
    f32 f20;
    func_00175af8(a0);
    func_00179718(a0);
    if (((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x40))))(a0)) != 0)) {
        if (((s32)(*(u32*)((a0 + 0x48c))) != 0)) {
            if (((s32)(func_00197920()) == 0)) {
                if (((s32)(((u32)((*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) + -2)) < (u32)(2))) != 0)) {
                    f20 = *(f32*)(&D_00349e10);
                    if ((func_001917c0() == 0)) {
                        f20 = (f20 * *(f32*)((*(u32*)(&D_00352130) + 0x6c)));
                    }
                    if ((*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) != 2)) {
                        if ((*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) == 3)) {
                            f20 = (f20 * *(f32*)((func_00177860(a0) + 0x6c)));
                        }
                    } else {
                        f20 = (f20 * *(f32*)((func_00177860(a0) + 0x40)));
                    }
                    func_001a1b68(*(u32*)((a0 + 0x48c)), -(f20));
                }
            }
        }
    }
    func_00179cb8(a0);
    if ((func_001b9d40(a0) != 0)) {
        if (((*(u32*)((a0 + 0x7f8)) & 0x20) == 0)) {
            func_00178220(a0);
            *(u32*)((a0 + 0x7f8)) = (*(u32*)((a0 + 0x7f8)) | 0x20);
        }
        *(u32*)((a0 + 0xb48)) = 0;
    }
    func_0017a3b0(a0);
    return;
}
