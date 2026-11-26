// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001688c8(u32) asm("func_001688c8");
extern "C" u32 func_00170cd0() asm("func_00170cd0");
extern "C" u32 func_002ba200() asm("func_002ba200");
extern "C" u32 func_002bd230(u32, u32) asm("func_002bd230");
extern "C" u32 func_002bd2f0(u32, u32) asm("func_002bd2f0");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" void func_002ba298(u32) asm("func_002ba298");
extern "C" void func_002baf48(u32, u32, u32, u32, u32, u32) asm("func_002baf48");

// 0x002bd310 func_002bd310
void func_002bd310(u32 a0) asm("_ZN5SOUND13readBgmThreadEP4TASK");
void func_002bd310(u32 a0) {
    u32 s0;
    u32 s3;
    u32 s5;
    u32 s7;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 loc_0;
    u32 s2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    s0 = *(u32*)((a0 + 4));
    s3 = *(u32*)((a0 + 0x10));
    s5 = *(u32*)((a0 + 0xc));
    s7 = *(u32*)((a0 + 8));
    func_002ba298(*(u32*)((a0 + 0xc)));
    v0 = func_001688c8(s0);
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(s3))))(s3, (v0 + 0x83f) & 0xfffff800, 0);
    func_00168388(s0, (v0_0 + 0x3f) & 0xffffffc0, 0, 0);
    while ((v0_1 = func_00170cd0()), ((s32)(v0_1) != 0)) {
        func_00102448(a0, 0);
    }
    func_002baf48(s5, 2, (v0_0 + 0x3f) & 0xffffffc0, v0, 0, 0);
    while ((v0_2 = func_002ba200()), ((s32)(v0_2) != 0)) {
        func_00102448(a0, 0);
    }
    loc_0 = 0;
    s2 = func_002bd2f0((v0_0 + 0x3f) & 0xffffffc0, (u32)&loc_0);
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(s3) + 4))))(s3, v0_0);
    if (((s32)(func_002bd230(loc_0, s7)) == 0)) {
        v0_3 = func_001688c8(s2);
        v0_4 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(s3))))(s3, (v0_3 + 0x83f) & 0xfffff800, 0);
        func_00168388(s2, (v0_4 + 0x3f) & 0xffffffc0, 0, 0);
        while ((v0_5 = func_00170cd0()), ((s32)(v0_5) != 0)) {
            func_00102448(a0, 0);
        }
        func_002baf48(0, 1, (v0_4 + 0x3f) & 0xffffffc0, v0_3, 0, 0);
        while ((v0_6 = func_002ba200()), ((s32)(v0_6) != 0)) {
            func_00102448(a0, 0);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(s3) + 4))))(s3, v0_4);
    }
    return;
}
