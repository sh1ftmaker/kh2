// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a778 asm("D_0034a778");
extern "C" u32 D_0034a77c asm("D_0034a77c");
extern "C" u32 D_0034a78c asm("D_0034a78c");
extern "C" u32 D_0034a790 asm("D_0034a790");
extern "C" f32 func_00153840(u32) asm("func_00153840");
extern "C" void func_001535b0(u32, u32) asm("func_001535b0");
extern "C" void func_001535f0(f32, f32, f32) asm("func_001535f0");

// 0x00153678 func_00153678
// minilink-rodata 0x0036b258   (float literals live here in the original)
void func_00153678(u32 a0, u32 a1, u32 a2) asm("func_00153678");
void func_00153678(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 t7;
    u32 sp;
    *(u32*)(&D_0034a78c) = a2;
    if (((s32)(a0) == 0)) {
        *(u32*)(&D_0034a778) = 0;
        *(u32*)(&D_0034a77c) = 0;
        *(u32*)(&D_0034a790) = 0;
        return;
    } else {
        *(u32*)(&D_0034a778) = (a0 + *(u32*)(a0));
        *(u32*)(&D_0034a77c) = (*(u32*)((a0 + 4)) / 0x18);
        *(u32*)(&D_0034a790) = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(a2))))(a2, (*(u32*)((a0 + 4)) / 0x18) << 6, 0);
        func_001535f0(0.125f, 0.5f, 16.0f);
        if (((s32)(*(u32*)(&D_0034a77c)) > 0)) {
            s0 = 0;
            s1 = 0;
            s2 = *(u32*)(&D_0034a77c);
            s3 = 0x350000;
            s4 = 0x350000;
            t7 = *(u32*)(&D_0034a778);
            do {
                t7 = (s0 + t7);
                s1 = (s1 + 1);
                s0 = (s0 + 0x18);
                *(f32*)((*(u32*)((s3 + -0x5870)) + (s1 << 6))) = *(f32*)((t7 + 4));
                *(f32*)(((*(u32*)((s3 + -0x5870)) + (s1 << 6)) + 4)) = *(f32*)((t7 + 8));
                *(f32*)(((*(u32*)((s3 + -0x5870)) + (s1 << 6)) + 8)) = *(f32*)((t7 + 0xc));
                *(f32*)(((*(u32*)((s3 + -0x5870)) + (s1 << 6)) + 0x10)) = *(f32*)((t7 + 0x10));
                func_001535b0(*(u32*)((s3 + -0x5870)) + (s1 << 6), s1);
                t7 = ((s32)(s1) < (s32)(s2));
                t7 = *(u32*)((s4 + -0x5888));
            } while (((s32)(t7) != 0));
        } else {
            sp = (u32)frame;
        }
        func_00153840(a1);
        return;
    }
}
