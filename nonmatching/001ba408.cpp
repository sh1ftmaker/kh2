// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" f32 func_001ba598(u32) asm("func_001ba598");
extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_00176b20(u32) asm("func_00176b20");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" void func_001ba340(u32) asm("func_001ba340");
extern "C" void func_001ba528(u32, u32, u32) asm("func_001ba528");

// 0x001ba408 func_001ba408
// minilink-rodata 0x0036dbe8   (float literals live here in the original)
f32 func_001ba408(u32 a0) asm("func_001ba408");
f32 func_001ba408(u32 a0) {
    f32 f1;
    u32 loc_c;
    f32 f0;
    u32 v0;
    u32 a2_0;
    u32 s1;
    u32 v0_1;
    f32 f0_2;
    f1 = *(f32*)(a0);
    loc_c = 0;
    if ((30.0f <= f1)) {
        func_001ba340(a0);
        f1 = *(f32*)(a0);
    }
    f0 = *(f32*)(&D_00349e10);
    *(f32*)(a0) = (f1 - f0);
    if (((f1 - f0) <= 0.0f)) {
        v0 = func_001a80c8(*(u32*)((a0 + 4)));
        a2_0 = *(u32*)((a0 + 0x10));
        if (((s32)(a2_0) != 0)) {
            func_001ba528(a0, *(u16*)((v0 + 6)), a2_0);
        } else {
            s1 = 0;
            do {
                v0_1 = func_00176b20(s1);
                if (((s32)(func_0019ba60(v0_1)) != 0)) {
                    if (((s32)((*(u32*)((v0_1 + 0x588)) & 0x400000)) == 0)) {
                        func_001ba528(a0, *(u16*)((v0 + 6)), func_0016a070(v0_1));
                    }
                }
                s1 = (s1 + 1);
            } while (((s32)(((s32)(s1) < (s32)(3))) != 0));
        }
        func_001ba598(a0);
        f0_2 = func_001ba598(a0);
    } else {
        f0_2 = (f1 - f0);
    }
    return f0_2;
}
