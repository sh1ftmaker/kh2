// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350e48 asm("D_00350e48");
extern "C" u32 D_0036da78 asm("D_0036da78");
extern "C" u32 D_0036da80 asm("D_0036da80");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_0016d080(u32, u32) asm("func_0016d080");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_001d3f98(u32, f32) asm("func_001d3f98");
extern "C" u32 func_001d4550(u32) asm("func_001d4550");
extern "C" void func_0016cbc8(u32, u32, u32, u32) asm("func_0016cbc8");
extern "C" void func_001b4c48(u32, u32, u32) asm("func_001b4c48");
extern "C" void func_001b5708(u32, u32) asm("func_001b5708");
extern "C" void func_001d1698(u32, u32, u32, u32) asm("func_001d1698");
extern "C" void func_001d16e8(u32, u32, u32) asm("func_001d16e8");
extern "C" void func_001d1a18(u32, u32, u32, u32) asm("func_001d1a18");
extern "C" void func_001d1d00(u32) asm("func_001d1d00");
extern "C" void func_001d1da0(u32, f32) asm("func_001d1da0");
extern "C" void func_001d20a8(u32) asm("func_001d20a8");
extern "C" void func_001d2248(u32, u32) asm("func_001d2248");
extern "C" void func_001dddd0(u32, u32) asm("func_001dddd0");

// 0x001b4a00 YS::LIMIT::setup(float)
void lift_001b4a00(u32 a0, f32 fa0) asm("_ZN2YS5LIMIT5setupEf");
void lift_001b4a00(u32 a0, f32 fa0) {
    u32 v0;
    u32 v0_0;
    u32 t7;
    u32 v0_1;
    u32 t7_2;
    u32 v0_3;
    u32 t7_4;
    u32 v0_5;
    u32 loc_0;
    u32 v0_6;
    u32 t7_7;
    u32 t5;
    u32 s0;
    u32 s0_8;
    v0 = func_001708f8(func_001d3f98(*(u32*)(a0), fa0), 0xffffffff);
    *(u32*)((a0 + 4)) = v0;
    v0_0 = func_00168b38(v0, 0x14, 0);
    t7 = ((s32)(v0_0) != 0) ? ((u32)(0) < (u32)(*(u32*)((v0_0 + 8)))) : 0;
    if (((t7 & 0xff) != 0)) {
        *(u32*)((a0 + 8)) = *(u32*)((v0_0 + 8));
    }
    v0_1 = func_00168b38(*(u32*)((a0 + 4)), 0x12, 0);
    t7_2 = ((s32)(v0_1) != 0) ? ((u32)(0) < (u32)(*(u32*)((v0_1 + 8)))) : 0;
    if (((t7_2 & 0xff) != 0)) {
        func_001dddd0(a0 + 0x18, *(u32*)((v0_1 + 8)));
    }
    v0_3 = func_00168b38(*(u32*)((a0 + 4)), 3, 0);
    t7_4 = ((s32)(v0_3) != 0) ? ((u32)(0) < (u32)(*(u32*)((v0_3 + 8)))) : 0;
    if (((t7_4 & 0xff) != 0)) {
        v0_5 = func_0016d080(*(u32*)((v0_3 + 8)), 0);
        *(u32*)((a0 + 0x34)) = v0_5;
        loc_0 = a0;
        func_0016cbc8(v0_5, 0x16, (u32)&loc_0, 1);
    }
    v0_6 = func_00168b38(*(u32*)((a0 + 4)), 0x22, 0);
    t7_7 = ((s32)(v0_6) != 0) ? ((u32)(0) < (u32)(*(u32*)((v0_6 + 8)))) : 0;
    if (((s32)((t7_7 & 0xff)) != 0)) {
        t5 = (a0 + 0x48);
        *(u32*)((t5 + 4)) = 2;
        *(u32*)((t5 + 8)) = 0xffffffff;
        *(u32*)((t5 + 0xc)) = 0;
        *(u32*)((t5 + 0x10)) = 0;
        *(u32*)((t5 + 0x14)) = 0x1800;
        *(u32*)((t5 + 0x1c)) = *(u32*)((v0_6 + 8));
        *(u32*)((a0 + 0x44)) = t5;
        *(u32*)((a0 + 0x48)) = (u32)&D_00350e48;
    }
    s0 = (a0 + 0x68);
    func_001b4c48(a0, a0 + 0x6c, (u32)&D_0036da78);
    func_001d1a18(s0, 0, 0x3e7, 0);
    func_001d2248(s0, func_001d4550(*(u32*)(a0)));
    if ((*(u16*)((*(u32*)(a0) + 0x28)) != 0x1e4)) {
        if ((*(u16*)((*(u32*)(a0) + 0x28)) != 0x26c)) {
            func_001d20a8(s0);
        }
    }
    s0_8 = (a0 + 0xa8);
    func_001b4c48(a0, a0 + 0xac, (u32)&D_0036da80);
    func_001d16e8(s0_8, 1, 0xc);
    func_001d1698(s0_8, (s32)(fa0), (s32)(fa0), 0);
    func_001d1da0(s0_8, fa0);
    func_001d1d00(s0_8);
    if ((*(u16*)((*(u32*)(a0) + 0x28)) == 0x1e4)) {
        func_001b5708(a0, 3);
    }
    return;
}
