// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 D_00361fa0 asm("D_00361fa0");
extern "C" u32 D_00361fa4 asm("D_00361fa4");
extern "C" u32 func_00197920() asm("func_00197920");
extern "C" u32 func_002ceb28() asm("func_002ceb28");
extern "C" u32 func_002cec20(u32, u32) asm("func_002cec20");
extern "C" u32 func_002cf270(u32, u32) asm("func_002cf270");
extern "C" void func_001444c8(u32, u32, u32) asm("func_001444c8");
extern "C" void func_002cf280(u32, u32, u32) asm("func_002cf280");
extern "C" void func_002cf2b0(u32, u32, u32) asm("func_002cf2b0");

// 0x002cf998 func_002cf998
// minilink-rodata 0x00375980   (float literals live here in the original)
void func_002cf998() asm("_ZN2Ti5MGObj12exec_prepareEv");
void func_002cf998() {
    u8 frame[64];
    u32 s2;
    u32 s1;
    u32 s0;
    u32 s3;
    if ((func_002ceb28() != 0)) {
        if (((s32)(func_00197920()) == 0)) {
            if (((s32)(*(u32*)(&D_00361fa0)) > 0)) {
                s2 = 0;
                s1 = 0;
                do {
                    if (((s32)(*(u32*)((*(u32*)(&D_00361fa4) + (s1 + (s2 * 0x28))))) != 0)) {
                        if (((s32)(*(u32*)(((*(u32*)(&D_00361fa4) + (s1 + (s2 * 0x28))) + 0x10))) != 0)) {
                            s0 = (*(u32*)(&D_00361fa4) + (s1 + (s2 * 0x28)));
                            s3 = ((*(u32*)(&D_00361fa4) + (s1 + (s2 * 0x28))) + 4);
                            if (((s32)(func_002cf270((*(u32*)(&D_00361fa4) + (s1 + (s2 * 0x28))) + 4, 0x10)) != 0)) {
                                *(f32*)((u32)frame) = (*(f32*)((*(u32*)((s0 + 0x10)) + 4)) - 1.0f);
                                *(f32*)(((u32)frame + 4)) = (*(f32*)((*(u32*)((s0 + 0x10)) + 8)) - 1.0f);
                                *(f32*)(((u32)frame + 8)) = (*(f32*)((*(u32*)((s0 + 0x10)) + 0xc)) - 1.0f);
                                *(f32*)(((u32)frame + 0xc)) = 0.0f;
                                *(f32*)(((u32)frame + 0x10)) = (*(f32*)((*(u32*)((s0 + 0x10)) + 4)) + 1.0f);
                                *(f32*)(((u32)frame + 0x14)) = (*(f32*)((*(u32*)((s0 + 0x10)) + 8)) + 1.0f);
                                *(f32*)(((u32)frame + 0x18)) = (*(f32*)((*(u32*)((s0 + 0x10)) + 0xc)) + 1.0f);
                                *(f32*)(((u32)frame + 0x1c)) = 0.0f;
                                func_001444c8((u32)frame + 0x20, (u32)frame, (u32)frame + 0x10);
                                if (((s32)(func_002cec20(*(u32*)(&D_00361f60), (u32)frame + 0x20)) != 0)) {
                                    func_002cf280(s3, 0x20, 0);
                                } else {
                                    func_002cf2b0(s3, 0x20, 0);
                                }
                            }
                        }
                    }
                    s2 = (s2 + 1);
                } while (((s32)(((s32)(s2) < (s32)(*(u32*)(&D_00361fa0)))) != 0));
            }
        }
    }
    return;
}
