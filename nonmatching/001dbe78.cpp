// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00352ad0 asm("D_00352ad0");
extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" f32 func_002f8ad0(u32, u32, f32, f32) asm("func_002f8ad0");
extern "C" u32 func_0016f000(u32, u32, f32) asm("func_0016f000");
extern "C" void func_0016c018(u32, u32, u32) asm("func_0016c018");

// 0x001dbe78 func_001dbe78
// minilink-rodata 0x0036e7bc   (float literals live here in the original)
void func_001dbe78(u32 a0, u32 a1) asm("func_001dbe78");
void func_001dbe78(u32 a0, u32 a1) {
    u8 frame[16];
    f32 f0;
    u32 v0;
    u32 t6;
    f32 f0_0;
    if (((u32)frame != a0)) {
        *(Q16*)((u32)frame) = *(Q16*)(a0);
    }
    f0 = *(f32*)(((u32)frame + 4));
    *(f32*)(((u32)frame + 4)) = (f0 + *(f32*)((*(u32*)((a0 + 0x5c)) + 8)));
    v0 = func_0016f000(*(u32*)((*(u32*)((a0 + 0x5c)) + 4)), (u32)frame, func_002f8ad0(a0, a1, *(f32*)(a1), *(f32*)((a1 + 8))));
    if (((s32)(v0) != 0)) {
        t6 = *(u32*)(&D_003638d0);
        func_0016c018(v0, 1, *(u32*)((a0 + 0x58)));
        *(u32*)(&D_003638d0) = (t6 * 0x10dcd);
        f0_0 = (f32)((t6 * 0x10dcd));
        *(f32*)(&D_00352ad0) = (8.0f + ((f0_0 * 2.3283064365386963e-10f) * 22.0f));
    }
    return;
}
