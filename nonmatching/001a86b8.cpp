// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 func_0016c008(u32, u32) asm("func_0016c008");
extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" u32 func_001a81f0(u32, u32, u32) asm("func_001a81f0");
extern "C" u32 func_001a8450(u32, u32, f32) asm("func_001a8450");
extern "C" u32 func_001a8678(u32) asm("func_001a8678");
extern "C" void func_00198450(u32) asm("func_00198450");

// 0x001a86b8 func_001a86b8
u32 func_001a86b8(u32 a0) asm("_ZN2YS12TREASURE_BOX15_OVR_initializeEv");
u32 func_001a86b8(u32 a0) {
    u32 v0;
    func_00198450(a0);
    v0 = func_001a81f0(*(u8*)(&D_0032bae0), *(u8*)(((u32)&D_0032bae0 + 1)), func_0016c008(a0, 1));
    *(u32*)((a0 + 0x9f8)) = v0;
    if (((s32)(v0) == 0)) {
        return func_0017f488(a0 + 0x140, 0x97, 0.0f, 0.0f);
    } else {
        if (((s32)(func_001a8450(v0, 0x97, 0.0f)) != 0)) {
            func_0017f488(a0 + 0x140, 0x98, 0.0f, 0.0f);
            return func_001a8678(a0);
        } else {
            return func_0017f488(a0 + 0x140, 0x97, 0.0f, 0.0f);
        }
    }
}
