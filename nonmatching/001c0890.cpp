// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct A3704_u32 { u8 _p[0x3704]; u32 m[1]; };
extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 D_01d49358 asm("D_01d49358");
extern "C" u32 func_00181670() asm("func_00181670");
extern "C" u32 func_001a1658(u32, u32) asm("func_001a1658");
extern "C" u32 func_001c0648(u32) asm("func_001c0648");
extern "C" u32 func_001c09c0(u32) asm("func_001c09c0");
extern "C" void func_001a17c8(u32) asm("func_001a17c8");
extern "C" void func_001c0690(u32, u32) asm("func_001c0690");

// 0x001c0890 YS::BONUSLEVEL::Up(int)
u32 lift_001c0890(u32 a0) asm("_ZN2YS10BONUSLEVEL2UpEi");
u32 lift_001c0890(u32 a0) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    s1 = func_001c0648(a0);
    v0 = func_001c09c0(a0);
    if (((s32)(v0) == 0)) {
        *(u8*)(((u32)&D_0032bb30 + 0x3700)) = (*(u8*)(((u32)&D_0032bb30 + 0x3700)) + 1);
        ((A3704_u32*)&D_0032bb30)->m[(a0 >> 5)] = (((A3704_u32*)&D_0032bb30)->m[(a0 >> 5)] | (1 << (a0 & 0x1f)));
        if (((u32)(s1) < (u32)(((*(u32*)(&D_01d49358) + (*(u32*)((*(u32*)(&D_01d49358) + 4)) << 4)) + 8)))) {
            if ((*(u8*)(s1) == a0)) {
                do {
                    v0_0 = func_001a1658(*(u8*)((s1 + 1)), 0xffffffff);
                    func_001c0690(s1, v0_0);
                    func_001a17c8(v0_0);
                    if (((s32)(((u32)((s1 + 0x10)) < (u32)(((*(u32*)(&D_01d49358) + (*(u32*)((*(u32*)(&D_01d49358) + 4)) << 4)) + 8)))) == 0)) {
                        return func_00181670();
                    }
                    s1 = (s1 + 0x10);
                } while ((*(u8*)(s1) == a0));
            }
        }
        return func_00181670();
    } else {
        return v0;
    }
}
