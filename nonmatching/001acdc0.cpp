// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001ab800() asm("func_001ab800");
extern "C" u32 func_002367a0() asm("func_002367a0");
extern "C" void func_001abf38(u32, u32, u32) asm("func_001abf38");
extern "C" void func_001ac108(u32, u32, u32, u32, u32) asm("func_001ac108");
extern "C" void func_001ac6d0(u32) asm("func_001ac6d0");
extern "C" void func_00236788(u32) asm("func_00236788");
extern "C" void func_00239bf8(u32, u32) asm("func_00239bf8");
extern "C" void func_0023acd8(u32) asm("func_0023acd8");
extern "C" void func_0023ade0(u32) asm("func_0023ade0");
extern "C" void func_0023bc58(u32, u32, u32) asm("func_0023bc58");

// 0x001acdc0 func_001acdc0
u32 func_001acdc0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2YS11WINDOW_BASE5_drawEiiiii");
u32 func_001acdc0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u8 frame[16];
    u32 s1;
    u32 t6;
    u32 sp;
    u32 t6_0;
    u32 s0;
    u32 sp_1;
    func_00236788(func_001ab800());
    if ((a5 == 0)) {
        a5 = *(u32*)((a0 + 0x5c));
    }
    func_0023bc58(a0 + 0x84, a5, *(u32*)((a0 + 0x60)));
    func_0023acd8(a0 + 0x84);
    *(u32*)(((a0 + 0x84) + 0x148)) = a1;
    *(u32*)(((a0 + 0x84) + 0x14c)) = a2;
    func_0023ade0(a0 + 0x84);
    if (((s32)(*(u32*)((a0 + 0x70))) > 0)) {
        func_001ac108(a0 + 0x4ac, a1, a2, *(u32*)((a0 + 0x5c)), *(u32*)((a0 + 0x60)));
    }
    if (((s32)(((u32)((*(u32*)((a0 + 0x70)) + -1)) < (u32)(5))) != 0)) {
        func_001ac6d0(a0);
        if (((s32)(*(u32*)((a0 + 0x70))) >= (s32)(2))) {
            func_001abf38(a0 + 0x1e0, a3, a4);
        }
        if (((s32)(*(u32*)((a0 + 0xb68))) > 0)) {
            s1 = 0;
            do {
                func_0023acd8((a0 + (s1 * 0x158)) + 0x608);
                func_0023ade0((a0 + (s1 * 0x158)) + 0x608);
                s1 = (s1 + 1);
                t6 = *(u32*)((a0 + 0xb68));
            } while (((s32)(((s32)(s1) < (s32)(*(u32*)((a0 + 0xb68))))) != 0));
            t6_0 = t6;
        } else {
            sp = (u32)frame;
            t6_0 = *(u32*)((a0 + 0xb68));
        }
        if (((s32)(((s32)(t6_0) < (s32)(4))) != 0)) {
            s0 = (((t6_0 * 0x158) + a0) + 0x608);
            do {
                func_00239bf8(s0, 0);
                s0 = (s0 + 0x158);
                t6_0 = (t6_0 + 1);
            } while (((s32)(((s32)(t6_0) < (s32)(4))) != 0));
        }
        *(u32*)((a0 + 0xb68)) = 0;
        sp_1 = sp;
    } else {
        sp_1 = (u32)frame;
    }
    func_001ab800();
    return func_002367a0();
}
