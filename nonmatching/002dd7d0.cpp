// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" f32 func_002dc808(u32) asm("func_002dc808");
extern "C" f32 func_002f8870(f32) asm("func_002f8870");
extern "C" u32 func_002dc7c8(u32) asm("func_002dc7c8");
extern "C" void func_001788b8(u32) asm("func_001788b8");
extern "C" void func_00183768(u32, u32, f32) asm("func_00183768");

// 0x002dd7d0 func_002dd7d0
// minilink-rodata 0x00375ddc   (float literals live here in the original)
f32 func_002dd7d0(u32 a0) asm("_ZN2Ti12MGJumpPlayer9_OVR_execEv");
f32 func_002dd7d0(u32 a0) {
    u32 s1;
    f32 loc_c;
    f32 loc_0;
    f32 loc_4;
    f32 loc_8;
    u32 s2;
    u32 s1_0;
    u32 s3;
    f32 f20;
    f32 f1;
    f32 f0;
    f32 f0_1;
    f32 f0_2;
    f32 f0_3;
    func_001788b8(a0);
    s1 = *(u32*)(&D_00361f60);
    func_002dc808(*(u32*)(&D_00361f60));
    loc_4 = 0.0f;
    loc_8 = 0.0f;
    loc_c = 0.0f;
    loc_0 = *(f32*)((*(u32*)((a0 + 0xb44)) + 0xa30));
    func_00183768(a0, (u32)&loc_0, func_002dc808(*(u32*)(&D_00361f60)) * 10.0f);
    if (((s32)((*(u32*)((*(u32*)((a0 + 0xb44)) + 8)) & 2)) != 0)) {
        *(u32*)((a0 + 0x108)) = (*(u32*)((a0 + 0x108)) | 0x10000);
    }
    s2 = func_002dc7c8(s1);
    s1_0 = (func_002dc7c8(s1) + 0x98);
    s3 = (func_002dc7c8(s1) + 0x9c);
    if ((func_002f8870(*(f32*)((*(u32*)((a0 + 0xb44)) + 0xa34))) < 0.10000000149011612f)) {
        f20 = (1.0f - *(f32*)((a0 + 0xc00)));
        f1 = (func_002f8870(1.0f - *(f32*)((a0 + 0xc00))) < *(f32*)((s2 + 0x94))) ? func_002f8870(f20) : *(f32*)((s2 + 0x94));
        if ((f20 < 0.0f)) {
            *(f32*)((a0 + 0xc00)) -= f1;
        } else {
            *(f32*)((a0 + 0xc00)) += f1;
        }
    } else {
        *(f32*)((a0 + 0xc00)) = (*(f32*)((a0 + 0xc00)) + (*(f32*)((*(u32*)((a0 + 0xb44)) + 0xa34)) * *(f32*)((s2 + 0x94))));
    }
    if (!((*(f32*)((a0 + 0xc00)) < *(f32*)(s1_0)))) {
        f0_1 = *(f32*)((a0 + 0xc00));
        if ((*(f32*)(s3) < *(f32*)((a0 + 0xc00)))) {
            *(f32*)((a0 + 0xc00)) = *(f32*)(s3);
        }
        f0_3 = f0_1;
    } else {
        f0_2 = *(f32*)((a0 + 0xc00));
        *(f32*)((a0 + 0xc00)) = *(f32*)(s1_0);
        f0_3 = f0_2;
    }
    return f0_3;
}
