// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c6cb20 asm("D_01c6cb20");
extern "C" void func_0016c7d8(u32) asm("func_0016c7d8");
extern "C" void func_0016cab8(u32) asm("func_0016cab8");
extern "C" void func_001826c8(u32, f32) asm("func_001826c8");

// 0x001a5c88 func_001a5c88
void func_001a5c88(u32 a0) asm("_ZN2YS5MAGIC8set_costEf");
void func_001a5c88(u32 a0) {
    u8 frame[16];
    u32 s1;
    u32 t6;
    u32 t5;
    u32 sp;
    u32 t5_0;
    u32 sp_1;
    u32 t5_2;
    u32 t6_3;
    if ((0.0f < *(f32*)((a0 + 8)))) {
        func_001826c8(a0, -(*(f32*)((a0 + 8))));
    }
    if (((s32)(*(u32*)(a0)) != 0)) {
        s1 = *(u32*)(a0);
        func_0016cab8(*(u32*)(a0));
        func_0016c7d8(s1);
    }
    if ((a0 == *(u32*)(&D_01c6cb20))) {
        *(u32*)(&D_01c6cb20) = *(u32*)((a0 + 0xc));
        sp_1 = (u32)frame;
        t5_2 = 0;
    } else {
        t6 = *(u32*)((*(u32*)(&D_01c6cb20) + 0xc));
        if ((t6 != a0)) {
            do {
                t5 = t6;
                t6 = *(u32*)((t6 + 0xc));
            } while ((t6 != a0));
            t5_0 = t5;
        } else {
            sp = (u32)frame;
            t5_0 = *(u32*)(&D_01c6cb20);
        }
        *(u32*)((t5_0 + 0xc)) = *(u32*)((a0 + 0xc));
        sp_1 = sp;
        t5_2 = t5_0;
    }
    if ((a0 == *(u32*)(((u32)&D_01c6cb20 + 4)))) {
        t6_3 = *(u32*)(((u32)&D_01c6cb20 + 4));
        *(u32*)(((u32)&D_01c6cb20 + 4)) = t5_2;
    }
    *(u32*)((a0 + 0xc)) = 0;
    return;
}
