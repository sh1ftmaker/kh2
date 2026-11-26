// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00375cb0 asm("D_00375cb0");
extern "C" u32 func_0016ace0(u32, u32) asm("func_0016ace0");
extern "C" u32 func_0016b740(u32) asm("func_0016b740");
extern "C" u32 func_0016f000(u32, u32, f32) asm("func_0016f000");
extern "C" u32 func_00194088(u32, u32) asm("func_00194088");
extern "C" u32 func_001c0cd8(u32) asm("func_001c0cd8");
extern "C" void func_0016b070(u32, u32) asm("func_0016b070");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_00180378(u32, u32, u32, f32) asm("func_00180378");
extern "C" void func_001987a8(u32, u32, u32) asm("func_001987a8");
extern "C" void func_001c0e60(u32) asm("func_001c0e60");
extern "C" void func_002dba28(u32) asm("func_002dba28");

// 0x002d9220 func_002d9220
u32 func_002d9220(u32 a0, u32 a1) asm("_ZN2Ti12MGHachimitsu9play_demoEi");
u32 func_002d9220(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s5;
    u32 s1;
    u32 v0;
    u32 s4;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    *(u32*)((a0 + 0xac)) = 0;
    *(u8*)((a0 + 0xc9)) = 1;
    s5 = *(u32*)(&D_0034e948);
    s1 = func_0016b740(0x65e);
    v0 = func_0016b740(0x661);
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    s4 = func_0016f000(a1 ? 0x7f3 : 0x7f2, (u32)frame, 0.0f);
    *(u8*)((a0 + 0xc8)) = func_001c0cd8(s1);
    func_002dba28(s1);
    if (((s32)(func_001c0cd8(s1)) != 0)) {
        func_001c0e60(s1);
    }
    if ((func_001c0cd8(v0) != 0)) {
        func_001c0e60(v0);
    }
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    func_0016b070(s1, (u32)frame);
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    func_0016ace0(s1, (u32)frame);
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    func_0016b070(v0, (u32)frame);
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    func_0016ace0(v0, (u32)frame);
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    func_0016b070(s4, (u32)frame);
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    v0_0 = func_0016ace0(s4, (u32)frame);
    *(u32*)((u32)frame) = *(u32*)(&D_00375cb0);
    *(u32*)(((u32)frame + 4)) = *(u32*)(((u32)&D_00375cb0 + 4));
    if (((s32)(a1) != 0)) {
        if ((a1 == 1)) {
            func_001987a8(s1, *(u32*)(((u32)&D_00375cb0 + 4)), 0);
            func_00180378(s1 + 0x140, s5, 0xfd, 0.0f);
            func_0017f488(s1 + 0x140, 0xac, 0.0f, 0.0f);
            func_0017f488(v0 + 0x140, 0xac, 0.0f, 0.0f);
            func_0017f488(s4 + 0x140, 0xaa, 0.0f, 0.0f);
            v0_1 = func_00194088(s1, 0xc);
            v0_0 = v0_1;
        }
    } else {
        func_001987a8(s1, *(u32*)(&D_00375cb0), 0);
        func_00180378(s1 + 0x140, s5, 0xfc, 0.0f);
        func_0017f488(s1 + 0x140, 0xab, 0.0f, 0.0f);
        func_0017f488(v0 + 0x140, 0xab, 0.0f, 0.0f);
        func_0017f488(s4 + 0x140, 0xa1, 0.0f, 0.0f);
        v0_2 = func_00194088(s1, 0xc);
        v0_0 = v0_2;
    }
    return v0_0;
}
