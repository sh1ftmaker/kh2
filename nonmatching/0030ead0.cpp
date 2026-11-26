// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e38e80 asm("D_01e38e80");
extern "C" u32 func_003059e0(u32, u32) asm("func_003059e0");
extern "C" u32 func_00305a30(u32) asm("func_00305a30");
extern "C" void func_003058f0() asm("func_003058f0");
extern "C" void func_00305a20(u32, u32) asm("func_00305a20");
extern "C" void func_00308a80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00308a80");
extern "C" void func_00310f38(u32, u32) asm("func_00310f38");

// 0x0030ead0 func_0030ead0
u32 func_0030ead0(u32 a0, u32 a1) asm("func_0030ead0");
u32 func_0030ead0(u32 a0, u32 a1) {
    u8 frame[16];
    u32 a0_0;
    u32 t1;
    u32 t2;
    u32 t3;
    u32 sp;
    u32 t1_1;
    u32 t2_2;
    u32 t3_3;
    u32 loc_4;
    u32 loc_8;
    u32 loc_c;
    u32 loc_0;
    u32 v0;
    func_00310f38(0, 0);
    func_00310f38(1, 0);
    func_003058f0();
    *(u32*)(((u32)&D_01e38e80 + 0x14)) = a1;
    if (((s32)(*(s8*)(a0)) != 0)) {
        a0_0 = *(u8*)(a0);
        t1 = 0;
        t2 = 0x1e40000;
        t3 = func_00305a30(0x80000000);
        do {
            *(u8*)((((t2 + -0x7180) + t1) + 0x18)) = *(u8*)(a0);
            a0_0 = *(u8*)(a0);
            t1 = (t1 + 1);
        } while ((*(s8*)((a0 + t1)) != 0));
        t1_1 = t1;
        t2_2 = t2;
        t3_3 = t3;
    } else {
        sp = (u32)frame;
        t1_1 = 0;
        t2_2 = 0x1e40000;
        t3_3 = func_00305a30(0x80000000);
    }
    *(u32*)(((t2_2 + -0x7180) + 4)) = 0;
    loc_0 = (t2_2 + -0x7180);
    loc_4 = t3_3;
    loc_8 = 0x68;
    loc_c = 0x44;
    *(u32*)(((t2_2 + -0x7180) + 8)) = 0x80000003;
    *(u32*)(((t2_2 + -0x7180) + 0x10)) = t1_1;
    *(u64*)((t2_2 + -0x7180)) = (*(u64*)((t2_2 + -0x7180)) & ((u64)(0xffffffff) | 0xff));
    *(u8*)((t2_2 + -0x7180)) = 0x68;
    func_00308a80(t2_2 + -0x7180, 0x68, t2_2 + -0x7180, 0x68, 0x44, t1_1, t2_2, t3_3);
    func_00305a20(4, 0x40000);
    if (((s32)(func_003059e0((u32)&loc_0, 1)) != 0)) {
        func_00305a20(4, 0x10000);
        func_00305a20(4, 0x20000);
        func_00305a20(0x80000002, 0);
        func_00305a20(0x80000000, 0);
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}
