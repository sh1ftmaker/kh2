// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003a7b70 asm("D_003a7b70");
extern "C" u32 D_003a7f70 asm("D_003a7f70");
extern "C" u32 func_00106de8(u32, u32, f32) asm("func_00106de8");
extern "C" void func_00106998(u32) asm("func_00106998");
extern "C" void func_001069b8(u32) asm("func_001069b8");
extern "C" void func_001069f8(u32) asm("func_001069f8");
extern "C" void func_00106d40(u32, f32, f32, f32, f32, f32, f32, f32, f32) asm("func_00106d40");
extern "C" void func_00107330(u32, f32, f32, f32) asm("func_00107330");
extern "C" void func_00107340(u32, f32, f32, f32) asm("func_00107340");
extern "C" void func_00107350(u32, f32, f32, f32) asm("func_00107350");
extern "C" void func_00107360(u32, f32) asm("func_00107360");

// 0x00107a90 func_00107a90
// minilink-rodata 0x0036a0e4   (float literals live here in the original)
u32 func_00107a90() asm("_ZN2gb13PLAYER_CAMERA4execEv");
u32 func_00107a90() {
    u8 frame[32];
    func_00106998(0);
    func_001069b8(0);
    func_001069f8(0);
    *(f32*)((u32)frame) = 4000000.0f;
    *(f32*)(((u32)frame + 8)) = 256.0f;
    *(f32*)(((u32)frame + 0x10)) = 208.0f;
    func_00106d40((u32)&D_003a7b70, 512.0f, 0.7999999523162842f, 0.8666666150093079f, 2048.0f, 2048.0f, 1.0f, 16770000.0f, 1.0f);
    *(f32*)((u32)frame) = 4000000.0f;
    *(f32*)(((u32)frame + 8)) = 256.0f;
    *(f32*)(((u32)frame + 0x10)) = 208.0f;
    func_00106d40((u32)&D_003a7b70 + 0x100, 512.0f, 0.7999999523162842f, 0.8666666150093079f, 2048.0f, 2048.0f, 1.0f, 16770000.0f, 1.0f);
    func_00107330((u32)&D_003a7f70, 0.0f, -600.0f, -10000.0f);
    func_00107340((u32)&D_003a7f70, 1000.0f, -1000.0f, 0.0f);
    func_00107350((u32)&D_003a7f70, 0.0f, -1.0f, 0.0f);
    func_00107360((u32)&D_003a7f70, 0.0f);
    func_00107330((u32)&D_003a7f70 + 0x90, 0.0f, -600.0f, -10000.0f);
    func_00107340((u32)&D_003a7f70 + 0x90, 1000.0f, -1000.0f, 0.0f);
    func_00107350((u32)&D_003a7f70 + 0x90, 0.0f, -1.0f, 0.0f);
    func_00107360((u32)&D_003a7f70 + 0x90, 0.0f);
    func_00106de8((u32)&D_003a7b70, 0, 1.5f);
    return func_00106de8((u32)&D_003a7b70 + 0x100, 0, 1.5f);
}
