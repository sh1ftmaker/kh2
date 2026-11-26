// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" f32 func_00197b98() asm("func_00197b98");
extern "C" u32 func_0016b740(u32) asm("func_0016b740");
extern "C" u32 func_00197920(u32) asm("func_00197920");
extern "C" void func_0017f540(u32, u32, f32, f32) asm("func_0017f540");
extern "C" void func_00194070(u32, u32) asm("func_00194070");
extern "C" void func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");
extern "C" void func_002db968(u32, u32) asm("func_002db968");

// 0x002d94b8 func_002d94b8
// minilink-rodata 0x00375cb8   (float literals live here in the original)
void func_002d94b8(u32 a0) asm("_ZN2Ti12MGHachimitsu11demo_is_endEv");
void func_002d94b8(u32 a0) {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u8*)((a0 + 0xc9))) != 0)) {
        if ((func_00197920(a0) != 0)) {
            if ((func_00197b98() < 1.0f)) {
                *(u8*)((a0 + 0xc9)) = 0;
                v0 = func_0016b740(0x65e);
                func_00194070(v0, 0xc);
                if (((s32)((*(u8*)((a0 + 0xc8)) & 0xff)) != 0)) {
                    func_001c0d38(v0, *(u32*)(&D_0034e948), 0x43, 0);
                    func_0017f540(v0 + 0x140, 0, 0.0f, 0.0f);
                }
                func_002db968(v0, *(u8*)((a0 + 0xc8)) & 0xff);
            }
        } else {
            *(u8*)((a0 + 0xc9)) = 0;
            v0_0 = func_0016b740(0x65e);
            func_00194070(v0_0, 0xc);
            if (((s32)((*(u8*)((a0 + 0xc8)) & 0xff)) != 0)) {
                func_001c0d38(v0_0, *(u32*)(&D_0034e948), 0x43, 0);
                func_0017f540(v0_0 + 0x140, 0, 0.0f, 0.0f);
            }
            func_002db968(v0_0, *(u8*)((a0 + 0xc8)) & 0xff);
        }
    }
    return;
}
