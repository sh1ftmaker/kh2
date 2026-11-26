// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_0018c438(u32) asm("func_0018c438");
extern "C" void func_0018c480(u32, u32) asm("func_0018c480");

// 0x0018c150 func_0018c150
f32 func_0018c150(u32 a0) asm("_ZN2YS3NPC14end_rtn_actionEv");
f32 func_0018c150(u32 a0) {
    u32 s0;
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t1;
    u32 t2;
    u32 t6;
    u32 t6_0;
    f32 f0;
    f32 f0_1;
    *(u32*)((a0 + 0xaa0)) = *(u32*)((a0 + 0xa40));
    s0 = (a0 + 0xa40);
    t3 = (a0 + 0xaa0);
    *(u32*)((t3 + 4)) = *(u32*)((s0 + 4));
    *(u32*)((t3 + 8)) = *(u32*)((s0 + 8));
    *(u32*)((t3 + 0xc)) = *(u32*)((s0 + 0xc));
    t4 = (a0 + 0xab0);
    t5 = (a0 + 0xa50);
    if ((t4 != t5)) {
        *(Q16*)(t4) = *(Q16*)(t5);
    }
    *(u32*)((t3 + 0x20)) = *(u32*)((s0 + 0x20));
    *(u8*)((t3 + 0x24)) = *(u8*)((s0 + 0x24));
    *(f32*)((t3 + 0x28)) = *(f32*)((s0 + 0x28));
    *(f32*)((t3 + 0x2c)) = *(f32*)((s0 + 0x2c));
    *(u8*)((t3 + 0x30)) = *(u8*)((s0 + 0x30));
    *(u8*)((t3 + 0x31)) = *(u8*)((s0 + 0x31));
    t1 = (a0 + 0xae0);
    t2 = (a0 + 0xa80);
    if ((t1 != t2)) {
        *(Q16*)(t1) = *(Q16*)(t2);
    }
    *(f32*)((t3 + 0x50)) = *(f32*)((s0 + 0x50));
    func_0018c480(s0, 0);
    t6 = *(u32*)((a0 + 0xa40));
    func_0018c438(s0);
    if ((t6 != 4)) {
        t6_0 = *(u32*)((a0 + 0xa40));
        f0 = (t6_0 == 5) ? *(f32*)((a0 + 0xb24)) : *(f32*)((a0 + 0xb30));
        f0_1 = f0;
    } else {
        f0_1 = *(f32*)((a0 + 0xb18));
    }
    *(f32*)((a0 + 0xb00)) = f0_1;
    return f0_1;
}
