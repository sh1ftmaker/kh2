// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035dcec asm("D_0035dcec");
extern "C" u32 D_0035de1c asm("D_0035de1c");
extern "C" u32 D_0035de20 asm("D_0035de20");
extern "C" f32 func_00230f10(u32, u32, u32, f32) asm("func_00230f10");
extern "C" u32 func_002302c0(u32, u32, u32, f32) asm("func_002302c0");
extern "C" void func_0016ace0(u32, u32) asm("func_0016ace0");
extern "C" void func_0016aeb8(u32, f32) asm("func_0016aeb8");
extern "C" void func_001ba028(u32) asm("func_001ba028");

// 0x002306a8 func_002306a8
// minilink-rodata 0x00371274   (float literals live here in the original)
void func_002306a8() asm("_ZN2sa5EVENT11spline_ctrlEv");
void func_002306a8() {
    u32 t7;
    u32 s1;
    u32 s2;
    u32 t6;
    u32 t4;
    u32 t7_0;
    u32 t7_1;
    u32 t6_2;
    f32 f12;
    u32 a0_3;
    f32 loc_c;
    u32 loc_0;
    u32 t6_4;
    f32 loc_4;
    f32 loc_8;
    f32 f1;
    f32 f0;
    u32 t7_5;
    u32 s0;
    f32 loc_14;
    t7 = *(u32*)(&D_0035dcec);
    if (((s32)(t7) != 0)) {
        s1 = 0;
        s2 = 0x3f;
        do {
            t6 = *(u32*)((s1 + *(u32*)(&D_0035dcec)));
            if ((t6 != 0)) {
                t4 = *(u32*)(&D_0035de20);
                t7_0 = *(u16*)((t6 + 8));
                if (((s32)(t7_0) < (s32)(t4))) {
                    *(u32*)((s1 + *(u32*)(&D_0035dcec))) = 0;
                    t7_1 = *(u32*)(&D_0035dcec);
                    *(u32*)(((s1 + t7_1) + 4)) = 0;
                } else {
                    t6_2 = *(u16*)((t6 + 6));
                    if (((s32)(t4) >= (s32)(t6_2))) {
                        f12 = *(f32*)(&D_0035de1c);
                        a0_3 = *(u32*)(*(u32*)(((s1 + *(u32*)(&D_0035dcec)) + 4)));
                        t6_4 = *(u32*)(&D_0035dcec);
                        if ((func_002302c0(*(u32*)((*(u32*)(((s1 + t6_4) + 4)) + 4)), (u32)&loc_0, (u32)&loc_c + 4, func_00230f10(a0_3 + 0xc, *(u16*)((a0_3 + 8)), 0, (f12 * 0.5f) - (f32)((s32)(t6_2)))) == 1)) {
                            f1 = loc_4;
                            f0 = loc_8;
                            loc_c = 1.0f;
                            t7_5 = *(u32*)(&D_0035dcec);
                            loc_4 = -(f1);
                            loc_8 = -(f0);
                            s0 = *(u32*)(((s1 + t7_5) + 8));
                            func_001ba028(s0);
                            func_0016ace0(s0, (u32)&loc_0);
                            func_0016aeb8(s0, loc_14);
                        }
                    }
                }
            }
            s1 = (s1 + 0xc);
            s2 = (s2 + -1);
        } while (((s32)(s2) >= 0));
    }
    return;
}
