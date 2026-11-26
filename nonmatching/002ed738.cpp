// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_002ed8c0 asm("D_002ed8c0");
extern "C" f32 func_001906f0(u32, u32) asm("func_001906f0");
extern "C" u32 func_00190140(u32) asm("func_00190140");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_003142e0(u32, u32) asm("func_003142e0");
extern "C" void func_002ed630(u32) asm("func_002ed630");
extern "C" void func_002ed720(u32) asm("func_002ed720");
extern "C" void func_002ed830(u32) asm("func_002ed830");

// 0x002ed738 u_call4_002ed738(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00376198   (float literals live here in the original)
void lift_002ed738(u32 a0) asm("_Z16u_call4_002ed738jjjj");
void lift_002ed738(u32 a0) {
    Q16 loc_0;
    *(u8*)((a0 + 0x14)) = *(u8*)((a0 + 0x54));
    if (((s32)((*(u32*)((a0 + 0x78)) & 1)) != 0)) {
        if ((func_00190140(a0 + 0x64) != 0)) {
            loc_0 = *(Q16*)(a0);
            if (((s32)(func_003142e0(func_00313b80(func_001906f0(a0 + 0x64, (u32)&loc_0)), (u64)(0x201f) << 0x31)) < 0)) {
                *(u32*)((a0 + 0x78)) = (*(u32*)((a0 + 0x78)) & 0xfffffffe);
            }
        } else {
            *(u32*)((a0 + 0x78)) = (*(u32*)((a0 + 0x78)) & 0xfffffffe);
        }
    }
    func_002ed630(a0);
    func_002ed720(a0);
    if (((s32)(func_003142e0(func_00313b80(*(f32*)((a0 + 0x58))), 0)) <= 0)) {
        *(f32*)((a0 + 0x58)) = 8.0f;
        *(u32*)((a0 + 0x10)) = (u32)&D_002ed8c0;
        func_002ed830(a0);
    }
    return;
}
