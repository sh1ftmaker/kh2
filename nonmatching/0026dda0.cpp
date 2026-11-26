// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_0035f100 asm("D_0035f100");
extern "C" u32 D_0035f104 asm("D_0035f104");
extern "C" u32 D_0035f10c asm("D_0035f10c");
extern "C" u32 D_0035f118 asm("D_0035f118");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023c3e0(u32, u32, u32) asm("func_0023c3e0");
extern "C" u32 func_0023ee30(u32) asm("func_0023ee30");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0026df30() asm("func_0026df30");
extern "C" void func_0026e1e0() asm("func_0026e1e0");
extern "C" void func_0026e3b0() asm("func_0026e3b0");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028d7f0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d7f0");
extern "C" void func_0028dd28(u32, u32) asm("func_0028dd28");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x0026dda0 Tz::PauseTaskBegin()
u32 lift_0026dda0() asm("_ZN2Tz14PauseTaskBeginEv");
u32 lift_0026dda0() {
    u8 frame[16];
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s3;
    u32 v0_0;
    u32 s0_1;
    u32 s2;
    u32 sp;
    v0 = func_0023ee30(0xa0);
    *(u32*)(v0) = (u32)&D_00347f98;
    func_0031a838(v0 + 0xc);
    *(u32*)(v0) = (u32)&D_0035eb98;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(&D_0035f100) = v0;
    *(u32*)((u32)frame) = 0;
    func_0028d7f0(v0, 0x7532, 0, 0, 0, 0xffffffff, 0, 0);
    func_0026e1e0();
    if ((func_00287bc0() == 0)) {
        func_0026df30();
    }
    s0 = 2;
    s1 = 0;
    do {
        s3 = func_0023c3e0(func_0023f1b0(*(u32*)(&D_0035f100)), 0xa, 0);
        if (((s32)(func_00139d78(*(u32*)(&D_0035f104) + s1)) != 0)) {
            func_0028dd28(*(u32*)(&D_0035f104) + s1, s3);
        }
        s0 = (s0 + -1);
        s1 = (s1 + 0x1b4);
    } while (((s32)(s0) >= 0));
    v0_0 = func_002892f8(*(u32*)(&D_0035f10c));
    if (((s32)(v0_0) > 0)) {
        s0_1 = 0;
        s2 = 0x360000;
        do {
            func_0028dd28(func_002891b8(*(u32*)(&D_0035f10c), s0_1), s3);
            s0_1 = (s0_1 + 1);
        } while (((s32)(((s32)(s0_1) < (s32)(v0_0))) != 0));
    } else {
        sp = (u32)frame;
    }
    func_0026e3b0();
    func_0028af28(*(u32*)(&D_0035f10c), ((*(u8*)((*(u32*)(&D_0035f118) + 0x25)) ^ 1) & 1) ? 0x20 : 0x60);
    return func_00287cc0(1);
}
