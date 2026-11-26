// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00351228 asm("D_00351228");
extern "C" f32 func_001bd3a0(u32) asm("func_001bd3a0");
extern "C" void func_0017bf40(u32) asm("func_0017bf40");
extern "C" void func_00190128(u32) asm("func_00190128");
extern "C" void func_0019d4f8(u32) asm("func_0019d4f8");
extern "C" void func_001bc688(u32) asm("func_001bc688");
extern "C" void func_001bc720(u32) asm("func_001bc720");
extern "C" void func_001bc778(u32) asm("func_001bc778");
extern "C" void func_001bd370(u32) asm("func_001bd370");
extern "C" void func_001bde58(u32) asm("func_001bde58");
extern "C" void func_00320730(u32) asm("func_00320730");

// 0x001bcf80 func_001bcf80
// minilink-rodata 0x0036dc68   (float literals live here in the original)
void func_001bcf80(u32 a0) asm("_ZN2YS14PLAYER_COMMANDC1Ev");
void func_001bcf80(u32 a0) {
    u32 s2;
    u32 s5;
    u32 s0;
    u32 s1;
    u32 s3;
    u32 s6;
    u32 s7;
    u32 s0_0;
    u32 s1_1;
    u32 s2_2;
    u32 s2_3;
    u32 s3_4;
    func_00190128(a0 + 0xc);
    func_0017bf40(a0 + 4);
    *(u32*)(a0) = (u32)&D_00351228;
    *(u32*)((a0 + 0x20)) = 0;
    s2 = (a0 + 0x24);
    s5 = 0x12;
    do {
        s0 = (s2 + 0xc);
        s1 = 7;
        s3 = 0xffffffff;
        s6 = 0xffffffff;
        s7 = (a0 + 4);
        do {
            *(u16*)(s0) = 0;
            func_001bc688(s0);
            s0 = (s0 + 0xc);
            s1 = (s1 + -1);
        } while ((s1 != s3));
        func_001bc778(s2);
        func_001bc720(s2);
        s2 = (s2 + 0x74);
        s5 = (s5 + -1);
    } while ((s5 != s6));
    s0_0 = (a0 + 0x8c4);
    s1_1 = 6;
    s2_2 = 0xffffffff;
    do {
        *(u16*)(s0_0) = 0;
        func_001bc688(s0_0);
        func_00190128(s0_0 + 0xc);
        func_001bde58(s0_0);
        s0_0 = (s0_0 + 0x24);
        s1_1 = (s1_1 + -1);
    } while ((s1_1 != s2_2));
    *(u32*)(((a0 + 0x9c0) + 4)) = 0;
    *(u32*)(((a0 + 0x9c0) + 8)) = 0;
    *(u32*)((a0 + 0x9c0)) = 0;
    func_00190128(a0 + 0x9cc);
    *(u32*)((a0 + 0x9e0)) = 0;
    *(u32*)((a0 + 0x9e4)) = 0;
    *(u32*)((a0 + 0x9f8)) = a0;
    func_00190128(a0 + 0xa04);
    *(u32*)((a0 + 0xa18)) = 0;
    func_00320730(a0 + 0xa1c);
    func_001bc688(a0 + 0xa1c);
    func_0019d4f8(a0 + 0x9f8);
    *(f32*)((a0 + 0xa40)) = 1.0f;
    func_0017bf40(s7);
    s2_3 = a0;
    s3_4 = 0;
    do {
        *(u32*)((s2_3 + 0x24)) = s3_4;
        func_001bc778(s2_3 + 0x24);
        func_001bc720(s2_3 + 0x24);
        *(u32*)((s2_3 + 0x28)) = a0;
        s2_3 = (s2_3 + 0x74);
        s3_4 = (s3_4 + 1);
    } while (((s32)(((s32)(s3_4) < (s32)(0x13))) != 0));
    func_001bd370(a0);
    func_001bd3a0(a0);
    return;
}
