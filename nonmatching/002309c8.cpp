// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0014f0e0(u32) asm("func_0014f0e0");
extern "C" u32 func_001ba028(u32) asm("func_001ba028");
extern "C" void func_001024a8(u32) asm("func_001024a8");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_0016ace0(u32, u32) asm("func_0016ace0");

// 0x002309c8 sa::EVENT::objMoveTask(TASK*)
// minilink-rodata 0x0037127c   (float literals live here in the original)
void lift_002309c8(u32 a0) asm("_ZN2sa5EVENT11objMoveTaskEP4TASK");
void lift_002309c8(u32 a0) {
    u8 frame[16];
    u32 s2;
    u32 s3;
    u32 s5;
    u32 s6;
    u32 s0;
    u32 s4;
    u32 v0;
    s2 = *(u32*)((a0 + 4));
    if (((s32)(func_001ba028(*(u32*)((a0 + 4)))) != 0)) {
        *(f32*)(((u32)frame + 0xc)) = 1.0f;
        s3 = *(u32*)((a0 + 8));
        s5 = *(u32*)((a0 + 0xc));
        s6 = *(u32*)((a0 + 0x10));
        s0 = func_0014f0e0(*(u32*)((a0 + 8)));
        s4 = func_0014f0e0(s5);
        v0 = func_0014f0e0(s6);
        if (((s32)(s0) == 0)) {
            if (((s32)(s4) == 0)) {
                if (((s32)(v0) == 0)) {
                    *(f32*)((u32)frame) = *(f32*)(s3);
                    *(f32*)(((u32)frame + 4)) = *(f32*)(s5);
                    *(f32*)(((u32)frame + 8)) = *(f32*)(s6);
                    func_0016ace0(s2, (u32)frame);
                    func_00106420(s3);
                    func_00106420(s5);
                    func_00106420(s6);
                    *(u32*)((a0 + 8)) = 0;
                    *(u32*)((a0 + 0xc)) = 0;
                    *(u32*)((a0 + 0x10)) = 0;
                    func_001024a8(a0);
                } else {
                    *(f32*)((u32)frame) = *(f32*)(s3);
                    *(f32*)(((u32)frame + 4)) = *(f32*)(s5);
                    *(f32*)(((u32)frame + 8)) = *(f32*)(s6);
                    func_0016ace0(s2, (u32)frame);
                }
            } else {
                *(f32*)((u32)frame) = *(f32*)(s3);
                *(f32*)(((u32)frame + 4)) = *(f32*)(s5);
                *(f32*)(((u32)frame + 8)) = *(f32*)(s6);
                func_0016ace0(s2, (u32)frame);
            }
        } else {
            *(f32*)((u32)frame) = *(f32*)(s3);
            *(f32*)(((u32)frame + 4)) = *(f32*)(s5);
            *(f32*)(((u32)frame + 8)) = *(f32*)(s6);
            func_0016ace0(s2, (u32)frame);
        }
    }
    return;
}
