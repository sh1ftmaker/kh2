// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350e48 asm("D_00350e48");
extern "C" u32 D_00351eb8 asm("D_00351eb8");
extern "C" u32 D_00352560 asm("D_00352560");
extern "C" u32 D_01d48cb0 asm("D_01d48cb0");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001b5858(u32) asm("func_001b5858");
extern "C" u32 func_001b5cb8(u32) asm("func_001b5cb8");
extern "C" u32 func_001ddd88(u32) asm("func_001ddd88");
extern "C" void func_0016c640(u32) asm("func_0016c640");
extern "C" void func_0016c7d8(u32) asm("func_0016c7d8");
extern "C" void func_0016cab8(u32) asm("func_0016cab8");
extern "C" void func_00170950(u32) asm("func_00170950");
extern "C" void func_001b0188(u32) asm("func_001b0188");
extern "C" void func_001b1c10(u32, f32) asm("func_001b1c10");
extern "C" void func_001c8d98(u32, u32) asm("func_001c8d98");
extern "C" void func_001d1ed0(u32) asm("func_001d1ed0");
extern "C" void func_001d2048(u32) asm("func_001d2048");
extern "C" void func_001d4570(u32, u32) asm("func_001d4570");
extern "C" void func_001dde40(u32) asm("func_001dde40");

// 0x001b4f40 func_001b4f40
// minilink-rodata 0x0036da8c   (float literals live here in the original)
u32 func_001b4f40(u32 a0) asm("func_001b4f40");
u32 func_001b4f40(u32 a0) {
    u32 s0;
    u32 s2;
    u32 s0_0;
    u32 s2_1;
    u32 s0_2;
    *(u32*)((*(u32*)((a0 + 0xc)) + 0x10c)) = (*(u32*)((*(u32*)((a0 + 0xc)) + 0x10c)) & 0xfffeffff);
    s0 = a0;
    s2 = 1;
    do {
        if (((s32)(func_0019ba60(*(u32*)((s0 + 0x10)))) != 0)) {
            *(u32*)((*(u32*)((s0 + 0x10)) + 0x10c)) = (*(u32*)((*(u32*)((s0 + 0x10)) + 0x10c)) & 0xfffeffff);
            *(u8*)((*(u32*)((s0 + 0x10)) + 0xb4c)) = 0;
        }
        s0 = (s0 + 4);
        s2 = (s2 + -1);
    } while (((s32)(s2) >= 0));
    if ((*(u32*)((a0 + 0x34)) != 0)) {
        s0_0 = *(u32*)((a0 + 0x34));
        func_0016cab8(*(u32*)((a0 + 0x34)));
        func_0016c7d8(s0_0);
    }
    s2_1 = (a0 + 0x18);
    if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
        func_001dde40(s2_1);
    }
    func_001b1c10(*(u32*)((a0 + 0x38)), 30.0f);
    s0_2 = (a0 + 0x68);
    func_0016c640(1);
    func_001d4570(*(u32*)(a0), *(u32*)((s0_2 + 0x38)));
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        func_00170950(*(u32*)((a0 + 4)));
    }
    *(u32*)(&D_01d48cb0) = 0;
    if (((s32)(func_001b5858(a0)) == 0)) {
        if (((s32)(func_001b5cb8(a0)) == 0)) {
            func_001c8d98((u32)&D_00351eb8, 0);
        }
    }
    *(u32*)((a0 + 0xa8)) = (u32)&D_00352560;
    func_001d1ed0(a0 + 0xa8);
    func_001d2048(s0_2);
    *(u32*)((a0 + 0x48)) = (u32)&D_00350e48;
    func_001b0188(a0 + 0x48);
    return func_001ddd88(s2_1);
}
