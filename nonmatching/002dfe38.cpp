// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00362bf8 asm("D_00362bf8");
extern "C" u32 D_00375d40 asm("D_00375d40");
extern "C" u32 func_0016b740(u32) asm("func_0016b740");
extern "C" u32 func_002ddbb8(u32) asm("func_002ddbb8");
extern "C" u32 func_002e7568(u32, u32, u32, f32) asm("func_002e7568");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_002de698(u32, u32, u32, u32, f32) asm("func_002de698");

// 0x002dfe38 func_002dfe38
// minilink-rodata 0x00375e84   (float literals live here in the original)
void func_002dfe38(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0) asm("_ZN2Ti21ACTION_PO_JUMP_PLAYER12land_balloonEPN2YS3OBJES3_fi");
void func_002dfe38(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0) {
    u32 v0;
    func_002de698(a2, a1, a2, a3, fa0);
    *(u8*)((a0 + 0x31)) = 0;
    *(u32*)((a0 + 0x48)) = a2;
    *(f32*)((a0 + 0x4c)) = fa0;
    *(u32*)((a0 + 0x50)) = a3;
    func_0017f488(a1 + 0x140, ((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x30))))(a0), 0.0f, 0.0f);
    *(f32*)((a0 + 0x28)) = 0.0f;
    *(f32*)((a0 + 0x2c)) = 0.0f;
    *(f32*)((a0 + 0x1c)) = (-((*(f32*)((a0 + 0x4c)) + *(f32*)(&D_00375d40))) * 0.009999999776482582f);
    if (((s32)(func_002ddbb8(*(u32*)((a0 + 0x48)))) != 0)) {
        v0 = func_0016b740(0x663);
        if (((s32)(v0) != 0)) {
            func_002e7568(v0, 2, (u32)&D_00362bf8, 1.0f);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
