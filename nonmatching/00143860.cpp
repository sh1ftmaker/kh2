// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034880c asm("D_0034880c");
extern "C" u32 func_00141ff0(u32, u32, u32, u32, u32) asm("func_00141ff0");
extern "C" void func_00141c18(u32, u32, u32, u32, u32) asm("func_00141c18");
extern "C" void func_001539c0(u32, u32) asm("func_001539c0");
extern "C" void func_0015cb78(u32, u32) asm("func_0015cb78");

// 0x00143860 func_00143860
u32 func_00143860(u32 a0, u32 a1) asm("_ZN2dk6Octree12getColorInfoERNS_4LineE");
u32 func_00143860(u32 a0, u32 a1) {
    u8 frame[48];
    *(u16*)(((u32)frame + 0x10)) = 0xffffffff;
    func_0015cb78(a0, 0);
    if (((s32)(*(u32*)(&D_0034880c)) != 0)) {
        func_00141c18(*(u32*)(&D_0034880c), 0, 0, 0, 0);
        if (((s32)(func_00141ff0(*(u32*)(&D_0034880c), a1, (u32)frame, (u32)frame + 0x10, 0xf)) != 0)) {
            if ((*(u16*)(((u32)frame + 0x10)) != 0xffff)) {
                func_0015cb78(a0, *(u8*)((*(u32*)((*(u32*)(&D_0034880c) + 0xc)) + (*(u16*)(((u32)frame + 0x10)) << 4))));
            }
        }
    }
    *(Q16*)(((u32)frame + 0x20)) = *(Q16*)(a1);
    func_001539c0(a0, (u32)frame + 0x20);
    return a0;
}
