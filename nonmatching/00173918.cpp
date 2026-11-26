// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00175540 asm("D_00175540");
extern "C" u32 D_01c5f4f0 asm("D_01c5f4f0");
extern "C" u32 D_01c5f500 asm("D_01c5f500");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x00173918 func_00173918
void func_00173918(u32 a0) asm("_ZN2YS18trap_obj_get_movedEP8BD_VALUE");
void func_00173918(u32 a0) {
    if (((s32)(*(s8*)(&D_01c5f4f0)) == 0)) {
        *(u8*)(&D_01c5f4f0) = 1;
        func_002fd188((u32)&D_00175540);
    }
    if (((*(u32*)((*(u32*)(a0) + 4)) + 0x860) != (u32)&D_01c5f500)) {
        *(Q16*)((u32)&D_01c5f500) = *(Q16*)((*(u32*)((*(u32*)(a0) + 4)) + 0x860));
    }
    *(u32*)(a0) = (u32)&D_01c5f500;
    return;
}
