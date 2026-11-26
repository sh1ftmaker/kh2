// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e40 asm("D_00347e40");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f254 asm("D_0035f254");
extern "C" u32 D_0035f258 asm("D_0035f258");
extern "C" u32 D_0035f25c asm("D_0035f25c");
extern "C" u32 _ZN2Tz12GumiGameOver11PauseThreadEP4TASK asm("_ZN2Tz12GumiGameOver11PauseThreadEP4TASK");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00103eb0() asm("func_00103eb0");
extern "C" u32 func_0023ee30(u32) asm("func_0023ee30");
extern "C" u32 func_00288be8(u32) asm("func_00288be8");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_002427c0() asm("func_002427c0");
extern "C" void func_00253818(u32) asm("func_00253818");
extern "C" void func_00259350(u32) asm("func_00259350");
extern "C" void func_00287b18(u32, u32) asm("func_00287b18");
extern "C" void func_002889f0(u32, u32, u32) asm("func_002889f0");
extern "C" void func_0028d068(u32, u32) asm("func_0028d068");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00280720 Tz::GumiGameOver::Init()
u32 lift_00280720() asm("_ZN2Tz12GumiGameOver4InitEv");
u32 lift_00280720() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s6;
    func_002427c0();
    func_00253818(5);
    func_00259350(5);
    func_00287b18(1, 3);
    func_00242618(0xb, 1);
    func_0028d068(0x754a, 0xffffffff);
    v0 = func_00288be8(0x38);
    func_002889f0(v0, 3, 0);
    *(u32*)(&D_0035f254) = v0;
    v0_0 = func_0023ee30(0xa0);
    *(u32*)(v0_0) = (u32)&D_00347f98;
    func_0031a838(v0_0 + 0xc);
    *(u32*)(v0_0) = (u32)&D_0035eb98;
    func_002369a0(v0_0 + 0x18);
    func_0023c008(v0_0 + 0x30);
    *(u32*)(&D_0035f250) = v0_0;
    v0_1 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x198, 0);
    *(u32*)(v0_1) = (u32)&D_00347e60;
    *(u32*)((v0_1 + 0xc)) = 0;
    func_00239700(v0_1 + 0x18);
    *(u32*)(&D_0035f258) = v0_1;
    v0_2 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x520, 0);
    *(u32*)(v0_2) = 3;
    s0 = (v0_2 + 4);
    s1 = (v0_2 + 4);
    s2 = (u32)&D_00347e40;
    s3 = 2;
    s4 = (u32)&D_00347e60;
    s5 = (u32)&D_00347f98;
    s6 = 0xffffffff;
    do {
        *(u32*)(s0) = s5;
        func_0031a838(s0 + 0xc);
        *(u32*)(s0) = s4;
        func_00239700(s0 + 0x18);
        *(u32*)(s0) = s2;
        *(u32*)((s0 + 0x198)) = 0;
        s0 = (s0 + 0x1b4);
        s3 = (s3 + -1);
    } while ((s3 != s6));
    *(u32*)(&D_0035f25c) = s1;
    return func_00102818(*(u32*)((func_00103eb0() + 4)), 0, 0x7d0, (u32)&_ZN2Tz12GumiGameOver11PauseThreadEP4TASK, 0x1000);
}
