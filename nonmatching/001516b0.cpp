// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0013a9d0() asm("func_0013a9d0");
extern "C" u32 func_0023a950(u32) asm("func_0023a950");
extern "C" u32 func_0023a988(u32) asm("func_0023a988");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" void func_00138650(u32, u32, u32, u32, u32, u32, f32) asm("func_00138650");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c40(u32, u32, u32) asm("func_00138c40");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_0014fc40(u32, u32, u32, u32, u32, u32) asm("func_0014fc40");
extern "C" void func_001519f8(u32) asm("func_001519f8");
extern "C" void func_00151bd8(u32) asm("func_00151bd8");
extern "C" void func_002367c8(u32) asm("func_002367c8");
extern "C" void func_002368e8(u32, f32) asm("func_002368e8");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");
extern "C" void func_00239c38(u32, u32) asm("func_00239c38");
extern "C" void func_0023acd8(u32) asm("func_0023acd8");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x001516b0 func_001516b0
// minilink-rodata 0x0036b238   (float literals live here in the original)
f32 func_001516b0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, f32 fa0) asm("_ZN2dk13MISSION_GAUGE6createEPvS1_NS_9INFO_BASE5ALIGNEfPfi");
f32 func_001516b0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, f32 fa0) {
    u32 loc_0;
    u32 s1;
    u32 s1_0;
    u32 s1_1;
    u32 s1_2;
    u32 loc_4;
    u32 s1_3;
    u32 s6;
    u32 s0;
    u32 s0_4;
    loc_0 = a5;
    *(f32*)((a0 + 0xb40)) = fa0;
    *(u32*)((a0 + 0xb44)) = a4;
    *(u32*)((a0 + 0xb50)) = 0;
    *(f32*)((a0 + 0xb48)) = *(f32*)(a4);
    func_00138650(a0 + 0x30, 0xd48, a1, 0xa, a4, a5, fa0);
    if (((s32)(func_0013a9d0()) != 0)) {
        func_002368e8(a0 + 0x50, 0.800000011920929f);
        func_002367c8(a0 + 0x50);
    }
    if ((a3 != 1)) {
        if (((s32)(((s32)(a3) < (s32)(2))) != 0)) {
            if ((a3 != 0)) {
                s1 = 0;
            } else {
                s1 = 0x10;
            }
            s1_1 = s1;
        } else {
            if ((a3 != 2)) {
                s1_0 = 0;
            } else {
                s1_0 = 0xf;
            }
            s1_1 = s1_0;
        }
        s1_2 = s1_1;
    } else {
        s1_2 = 0x11;
    }
    func_00239988(a0 + 0x1f0, a2, a0 + 0x50);
    func_00239c38(a0 + 0x1f0, s1_2);
    loc_4 = (a0 + 0x678);
    func_0023acd8(a0 + 0x1f0);
    *(u32*)((a0 + 0x20)) = func_0023a950(a0 + 0x1f0);
    func_001386e0(a0 + 0x348, 0xd48, a2, a0 + 0x50, 3, 0xa);
    func_001386e0(a0 + 0x4e0, 0xd48, a2, a0 + 0x50, 0xc, 0xa);
    func_001386e0(loc_4, 0xd48, a2, a0 + 0x50, 0xd, 0xa);
    func_001386e0(a0 + 0x810, 0xd48, a2, a0 + 0x50, 0xe, 0xa);
    func_001386e0(a0 + 0x9a8, 0xd48, a2, a0 + 0x50, 9, 0xa);
    func_0014fc40(a0, loc_0, func_0023aa78(a0 + 0x360), 0xd48, 0xa, a3);
    func_001519f8(a0);
    *(u32*)(((a0 + 0x348) + 0x18c)) = (a0 + 0x348);
    s1_3 = (a0 + 0x348);
    s6 = 4;
    do {
        *(u32*)((s1_3 + 0x18c)) = (a0 + 0x348);
        func_001396b0(s1_3);
        if (((s32)(*(u32*)((s1_3 + 0x18c))) != 0)) {
            *(u32*)((s1_3 + 0x190)) = 0;
            func_001396b0(s1_3);
            if (((s32)(*(u32*)((s1_3 + 0x190))) != 0)) {
                func_0031a260(s1_3, 0);
            }
        }
        func_00139660(s1_3);
        func_00139688(s1_3);
        s0 = func_0023a950(a0 + 0x360);
        func_00138c68(s1_3, s0, func_0023a988(a0 + 0x360));
        s1_3 = (s1_3 + 0x198);
        s6 = (s6 + -1);
    } while (((s32)(s6) >= 0));
    s0_4 = func_0023aa18(a0 + 0x360);
    func_00138c68(loc_4, s0_4, func_0023aa38(a0 + 0x360));
    *(u32*)(((a0 + 0x348) + 0x18c)) = 0;
    func_001396b0(a0 + 0x348);
    if ((*(u32*)(((a0 + 0x348) + 0x18c)) != 0)) {
        *(u32*)(((a0 + 0x348) + 0x190)) = 0;
        func_001396b0(a0 + 0x348);
        if ((*(u32*)(((a0 + 0x348) + 0x190)) != 0)) {
            func_0031a260(a0 + 0x348, 0);
        }
    }
    func_00138c40(a0 + 0x348, *(u32*)((a0 + 0x20)), *(u32*)((a0 + 0x24)));
    func_00151bd8(a0);
    *(f32*)((a0 + 0xb4c)) = -1.0f;
    return -1.0f;
}
