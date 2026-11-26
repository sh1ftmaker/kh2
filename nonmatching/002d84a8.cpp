// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" f32 func_002d7af0(u32) asm("func_002d7af0");
extern "C" f32 func_002d9218(u32) asm("func_002d9218");
extern "C" u32 func_002d1260() asm("func_002d1260");
extern "C" void func_002cf248(u32) asm("func_002cf248");
extern "C" void func_002cfb30() asm("func_002cfb30");
extern "C" void func_002d7698(u32) asm("func_002d7698");
extern "C" void func_002da8f0(u32, u32) asm("func_002da8f0");
extern "C" void func_002da958(u32) asm("func_002da958");
extern "C" void func_002e7108(u32, f32) asm("func_002e7108");
extern "C" void func_002e71a0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002e71a0");

// 0x002d84a8 func_002d84a8(int)
// minilink-rodata 0x00375c04   (float literals live here in the original)
f32 lift_002d84a8(u32 a0) asm("_Z13func_002d84a8i");
f32 lift_002d84a8(u32 a0) {
    u8 frame[64];
    u32 s2;
    Q16 loc_0;
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t3;
    Q16 loc_10;
    Q16 loc_20;
    Q16 loc_30;
    f32 f0;
    u32 t4;
    u32 t4_0;
    func_002cf248(a0);
    func_002cfb30();
    s2 = func_002d1260();
    func_002d7698(a0);
    func_002da8f0(s2, *(u32*)((a0 + 0xc4)));
    if ((*(u8*)((a0 + 0x1e0)) == 0)) {
        if ((*(u32*)((a0 + 0xa4)) == 4)) {
            if ((671.0f <= *(f32*)((a0 + 0xac)))) {
                func_002da958(*(u32*)(&D_0034e948));
                *(u8*)((a0 + 0x1e0)) = 1;
            }
        }
    }
    if ((*(u8*)((a0 + 0xc9)) != 0)) {
        func_002d9218(a0);
        f0 = func_002d9218(a0);
    } else {
        func_002e7108(*(u32*)((a0 + 0xa0)), *(f32*)((a0 + 0xac)));
        func_002e71a0((u32)&loc_0, *(u32*)((a0 + 0xa0)), *(u8*)((*(u32*)((a0 + 0xb8)) + 8)), 1, t0, t1, t2, t3);
        if (((a0 + 0x190) != (u32)frame)) {
            *(Q16*)((a0 + 0x190)) = loc_0;
            *(Q16*)(((a0 + 0x190) + 0x10)) = loc_10;
            *(Q16*)(((a0 + 0x190) + 0x20)) = loc_20;
            *(Q16*)(((a0 + 0x190) + 0x30)) = loc_30;
        }
        func_002e71a0((u32)&loc_0, *(u32*)((a0 + 0xa0)), *(u8*)((*(u32*)((a0 + 0xb8)) + 8)), 2, loc_0.w[0], loc_10.w[0], loc_20.w[0], loc_30.w[0]);
        if (((a0 + 0xd0) != (u32)frame)) {
            *(Q16*)((a0 + 0xd0)) = loc_0;
            *(Q16*)(((a0 + 0xd0) + 0x10)) = loc_10;
            *(Q16*)(((a0 + 0xd0) + 0x20)) = loc_20;
            *(Q16*)(((a0 + 0xd0) + 0x30)) = loc_30;
        }
        func_002d7af0(a0);
        if (((s32)(*(u8*)((a0 + 0x1d0))) != 0)) {
            if (((a0 + 0x150) != (a0 + 0x110))) {
                *(Q16*)((a0 + 0x150)) = *(Q16*)((a0 + 0x110));
                *(Q16*)(((a0 + 0x150) + 0x10)) = *(Q16*)(((a0 + 0x110) + 0x10));
                *(Q16*)(((a0 + 0x150) + 0x20)) = *(Q16*)(((a0 + 0x110) + 0x20));
                *(Q16*)(((a0 + 0x150) + 0x30)) = *(Q16*)(((a0 + 0x110) + 0x30));
            }
            *(u8*)((a0 + 0x1d0)) = 0;
        }
        f0 = func_002d7af0(a0);
    }
    if ((*(u8*)((*(u32*)((a0 + 0xb8)) + 8)) == 7)) {
        if (!((250.0f <= *(f32*)((a0 + 0xac))))) {
            t4 = 0;
        } else {
            t4 = 1;
        }
        f0 = 250.0f;
        t4_0 = t4;
    } else {
        t4_0 = 0;
    }
    *(u8*)((s2 + 0xc05)) = t4_0;
    return f0;
}
