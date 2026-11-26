// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x0023e918 func_0023e918
void func_0023e918(u32 a0, u32 a1, f32 fa0, f32 fa1, f32 fa2) asm("_ZN2Tz7MenuObj8SetScaleEifff");
void func_0023e918(u32 a0, u32 a1, f32 fa0, f32 fa1, f32 fa2) {
    u8 frame[16];
    u32 t6;
    t6 = *(u8*)(((a1 + a0) + 0xb64));
    *(f32*)((u32)frame) = fa0;
    *(f32*)(((u32)frame + 4)) = fa1;
    *(f32*)(((u32)frame + 8)) = fa2;
    *(u32*)(((u32)frame + 0xc)) = 0;
    if ((((a0 + (t6 * 0x140)) + 0x680) != (u32)frame)) {
        *(Q16*)(((a0 + (t6 * 0x140)) + 0x680)) = *(Q16*)((u32)frame);
    }
    return;
}
