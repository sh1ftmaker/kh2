// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016a070(u32, u32, u32, u32) asm("func_0016a070");
extern "C" u32 func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x00176dd8 YS::PARTY::exec_item(YS::COMMAND_ELEM const*, YS::TARGET&, int)
// minilink-rodata 0x0036c4c4   (float literals live here in the original)
u32 lift_00176dd8(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS5PARTY9exec_itemEPKNS_12COMMAND_ELEMERNS_6TARGETEi");
u32 lift_00176dd8(u32 a0, u32 a1, u32 a2, u32 a3) {
    *(u16*)((a0 + 0xb2c)) = *(u16*)((a1 + 4));
    if (((s32)(*(u32*)(a2)) != 0)) {
        *(u32*)((a0 + 0xb30)) = func_0016a070(*(u32*)(a2), a1, a2, a3);
    } else {
        *(u32*)((a0 + 0xb30)) = 0;
    }
    *(u16*)((a0 + 0xb2e)) = a3;
    func_0017f488(a0 + 0x140, 9, 8.0f, 0.0f);
    return func_0017f5e0(a0 + 0x140, 0, 0, 0.0f, 0.0f);
}
