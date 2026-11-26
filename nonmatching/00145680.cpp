// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00146d28(u32) asm("func_00146d28");
extern "C" void func_00106ab8(u32, u32, u8, u32) asm("func_00106ab8");
extern "C" void func_001070c8(u32) asm("func_001070c8");
extern "C" void func_001447c0(u32, f32, f32, f32, f32, f32, f32) asm("func_001447c0");
extern "C" void func_00145b90(u32, u32) asm("func_00145b90");
extern "C" void func_0015e4e0(u32) asm("func_0015e4e0");
extern "C" void func_0015e9e0(u32) asm("func_0015e9e0");
extern "C" void func_0031a830(u32) asm("func_0031a830");

// 0x00145680 func_00145680
// minilink-rodata 0x0036af84   (float literals live here in the original)
u32 func_00145680(u32 a0, u32 a1, u8 a2, u32 a3) asm("func_00145680");
u32 func_00145680(u32 a0, u32 a1, u8 a2, u32 a3) {
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s0_0;
    u32 s1_1;
    u32 s2_2;
    u32 a0_3;
    u32 t7;
    u32 t7_4;
    *(u32*)((a0 + 4)) = 0;
    *(u32*)((a0 + 8)) = 0;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0x10)) = 0;
    *(u32*)((a0 + 0x14)) = 0;
    *(u32*)((a0 + 0x18)) = 0;
    *(u32*)((a0 + 0x1c)) = 0;
    func_00106ab8(a0 + 0x20, a1, a2, a3);
    func_001070c8(a0 + 0x120);
    *(u8*)((a0 + 0x778)) = a2;
    *(u8*)((a0 + 0x779)) = 0;
    func_0015e4e0(a0 + 0x790);
    s0 = (a0 + 0xc60);
    s1 = 0xf;
    s2 = 0xffffffff;
    do {
        s1 = (s1 + -1);
        func_0015e9e0(s0);
        s0 = (s0 + 0x370);
    } while ((s1 != s2));
    *(u32*)((a0 + 0x4360)) = 0;
    s0_0 = (a0 + 0x4360);
    s1_1 = 0x1ff;
    s2_2 = 0xffffffff;
    do {
        *(u32*)(s0_0) = 0;
        *(u32*)((s0_0 + 4)) = 0;
        s1_1 = (s1_1 + -1);
        s0_0 = (s0_0 + 8);
        func_0031a830(s0_0 + 4);
    } while ((s1_1 != s2_2));
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 0x5364)) = 0;
    *(u32*)((a0 + 0x536c)) = 0;
    *(u32*)((a0 + 0x5370)) = 0;
    *(u32*)((a0 + 0x5374)) = 0;
    *(u32*)((a0 + 0x5378)) = 0;
    *(u32*)((a0 + 0x537c)) = 0;
    a0_3 = *(u32*)((a1 + 0x14));
    *(u32*)((a0 + 4)) = (a1 + a0_3);
    t7 = *(u32*)((a1 + 0x1c));
    *(u32*)((a0 + 8)) = (a1 + t7);
    t7_4 = *(u32*)((a1 + 0x24));
    *(u32*)((a0 + 0xc)) = (a1 + t7_4);
    *(u32*)((a0 + 0x10)) = (*(u32*)((a1 + 0x18)) / 0x30);
    *(u32*)((a0 + 0x14)) = (*(u32*)((a1 + 0x20)) / 0x1c);
    *(u32*)((a0 + 0x18)) = (*(u32*)((a1 + 0x28)) / 0x34);
    *(u8*)((a0 + 0x778)) = a2;
    func_001447c0((a1 + a0_3) + 0x10, -100000000.0f, -100000000.0f, -100000000.0f, 100000000.0f, 100000000.0f, 100000000.0f);
    func_00145b90(a0, a3);
    return func_00146d28(a0);
}
