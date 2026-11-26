// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 func_001c0cd8(u32) asm("func_001c0cd8");
extern "C" u32 func_002d73f0(u32) asm("func_002d73f0");
extern "C" u32 func_002d8d68(u32, u32, u32, u32) asm("func_002d8d68");
extern "C" void func_0016ace0(u32, u32) asm("func_0016ace0");
extern "C" void func_0016b070(u32, u32) asm("func_0016b070");
extern "C" void func_00198690(u32) asm("func_00198690");
extern "C" void func_001d86a0(u32, u32) asm("func_001d86a0");

// 0x002dbb88 func_002dbb88
// minilink-rodata 0x00375d28   (float literals live here in the original)
void func_002dbb88(u32 a0) asm("_ZN2Ti14MGHachimitsuPo14_OVR_post_execEv");
void func_002dbb88(u32 a0) {
    u8 frame[32];
    u32 s1;
    u32 t7;
    func_00198690(a0);
    if (((s32)(func_001c0cd8(a0)) != 0)) {
        *(f32*)((u32)frame) = -1.570796251296997f;
        *(f32*)(((u32)frame + 4)) = -1.570796251296997f;
        *(f32*)(((u32)frame + 8)) = 0.0f;
        *(f32*)(((u32)frame + 0xc)) = 0.0f;
        func_0016b070(a0, (u32)frame);
        *(f32*)(((u32)frame + 0x10)) = 0.0f;
        *(f32*)(((u32)frame + 0x14)) = 0.0f;
        *(f32*)(((u32)frame + 0x18)) = 0.0f;
        *(f32*)(((u32)frame + 0x1c)) = 0.0f;
        func_0016ace0(a0, (u32)frame + 0x10);
    } else {
        if ((*(u8*)((a0 + 0xbc0)) == 0)) {
            if ((*(f32*)((a0 + 0xbf0)) <= 0.0f)) {
                if (((s32)(*(u32*)(&D_00361f60)) != 0)) {
                    s1 = *(u32*)(&D_00361f60);
                    if (((s32)(func_002d8d68(*(u32*)(&D_00361f60), a0, a0 + 0xb20, a0 + 0xb60)) > 0)) {
                        if (!((*(f32*)((a0 + 0xb18)) < 0.0f))) {
                            t7 = 0;
                        } else {
                            t7 = 1;
                        }
                        *(u8*)((a0 + 0xb1c)) = t7;
                        *(f32*)((a0 + 0xbf0)) = *(f32*)((func_002d73f0(s1) + 0x34));
                        if ((*(u32*)((s1 + 0x98)) == 1)) {
                            func_001d86a0(0xffffffff, 0);
                        }
                    }
                }
            }
        }
    }
    return;
}
