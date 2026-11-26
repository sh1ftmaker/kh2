// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f3f8 asm("D_0035f3f8");
extern "C" u32 D_0035f3fc asm("D_0035f3fc");
extern "C" u32 D_0035f400 asm("D_0035f400");
extern "C" u32 D_0035f404 asm("D_0035f404");
extern "C" u32 D_0035f408 asm("D_0035f408");
extern "C" u32 D_0035f40c asm("D_0035f40c");
extern "C" u32 D_0035f410 asm("D_0035f410");
extern "C" u32 D_0035f414 asm("D_0035f414");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" void func_00239700(u32) asm("func_00239700");

// 0x0028c878 Tz::MenuCursor::Init(ALLOCATOR*, int)
void lift_0028c878(u32 a0, u32 a1) asm("_ZN2Tz10MenuCursor4InitEP9ALLOCATORi");
void lift_0028c878(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 s4;
    u32 fp;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s5;
    u32 s6;
    u32 s7;
    u32 s5_1;
    u32 s6_2;
    u32 s7_3;
    u32 sp;
    u32 t4;
    u32 t5;
    u32 t7;
    u32 t6;
    if (((s32)(*(u32*)(&D_0035f3f8)) != 0)) {
        v0 = func_001063c0(0x1c, a0);
        *(u32*)(&D_0035f414) = v0;
        *(u32*)((v0 + 0x10)) = *(u32*)(&D_0035f3f8);
        *(u32*)((*(u32*)(&D_0035f414) + 8)) = *(u32*)(&D_0035f404);
        *(u32*)(*(u32*)(&D_0035f414)) = *(u32*)(&D_0035f3fc);
        *(u32*)((*(u32*)(&D_0035f414) + 4)) = *(u32*)(&D_0035f400);
        *(u32*)((*(u32*)(&D_0035f414) + 0xc)) = *(u32*)(&D_0035f408);
        *(u32*)((*(u32*)(&D_0035f414) + 0x14)) = *(u32*)(&D_0035f40c);
        *(u32*)((*(u32*)(&D_0035f414) + 0x18)) = *(u32*)(&D_0035f410);
    }
    *(u32*)(&D_0035f3f8) = a0;
    *(u32*)(&D_0035f404) = a1;
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), (a1 * 0x198) + 4, 0);
    *(u32*)(v0_0) = a1;
    s4 = (v0_0 + 4);
    fp = 0x360000;
    if (((s32)(a1) != 0)) {
        s0 = s4;
        s1 = (a1 + -1);
        s2 = (u32)&D_00347e60;
        s3 = 0xffffffff;
        s5 = 0x360000;
        s6 = 0x360000;
        s7 = (u32)&D_0035f3fc;
        do {
            *(u32*)((s0 + 0xc)) = 0;
            *(u32*)(s0) = s2;
            s1 = (s1 + -1);
            func_00239700(s0 + 0x18);
            s0 = (s0 + 0x198);
        } while ((s1 != s3));
        s5_1 = s5;
        s6_2 = s6;
        s7_3 = s7;
    } else {
        s5_1 = 0x360000;
        s6_2 = 0x360000;
        s7_3 = (u32)&D_0035f3fc;
        sp = (u32)frame;
    }
    *(u32*)(s7_3) = s4;
    *(u32*)((fp + -0xc00)) = func_001063f0(*(u32*)((s5_1 + -0xbfc)) << 2, *(u32*)(&D_0035f3f8));
    *(u32*)(&D_0035f408) = func_001063f0(*(u32*)((s5_1 + -0xbfc)) << 2, *(u32*)(&D_0035f3f8));
    *(u32*)((s6_2 + -0xbf4)) = func_001063f0(*(u32*)((s5_1 + -0xbfc)) << 2, *(u32*)(&D_0035f3f8));
    if (((s32)(*(u32*)((s5_1 + -0xbfc))) > 0)) {
        t4 = 0xffffffff;
        t5 = 0;
        t7 = *(u32*)((s6_2 + -0xbf4));
        do {
            t5 = (t5 + 1);
            t6 = (t5 << 2);
            *(u32*)((t6 + t7)) = t4;
            t7 = *(u32*)((s6_2 + -0xbf4));
        } while (((s32)(t7) != 0));
    }
    *(u32*)(&D_0035f410) = 0;
    return;
}
