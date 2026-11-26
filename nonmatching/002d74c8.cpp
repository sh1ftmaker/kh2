// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001ca8f8(f32, f32) asm("func_001ca8f8");
extern "C" u32 func_002cf308(u32) asm("func_002cf308");
extern "C" u32 func_002d1260() asm("func_002d1260");
extern "C" u32 func_002d73f0(u32) asm("func_002d73f0");
extern "C" u32 func_002e34d8(u32, u32, u32) asm("func_002e34d8");
extern "C" void func_001a58f8() asm("func_001a58f8");
extern "C" void func_002cf2d8() asm("func_002cf2d8");
extern "C" void func_002cf938(u32) asm("func_002cf938");
extern "C" void func_002d0a78() asm("func_002d0a78");
extern "C" void func_002d7420(u32) asm("func_002d7420");
extern "C" void func_002d9220(u32, u32) asm("func_002d9220");
extern "C" void func_002da040(u32) asm("func_002da040");

// 0x002d74c8 func_002d74c8
// minilink-rodata 0x00375b78   (float literals live here in the original)
void func_002d74c8(u32 a0, u32 a1, u32 a2) asm("_ZN2Ti12MGHachimitsu12reset_courseEib");
void func_002d74c8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 t5;
    u32 s0;
    *(u32*)((a0 + 0xa8)) = a1;
    *(u8*)((a0 + 0xb4)) = 0;
    *(u8*)((a0 + 0x1e0)) = 0;
    v0 = func_002e34d8(a0 + 0xbc, a1, a2);
    *(u32*)((a0 + 0xb8)) = v0;
    *(u32*)((a0 + 0xa4)) = *(u8*)((v0 + 8));
    *(f32*)((a0 + 0xac)) = (f32)(*(s32*)(v0));
    if (((s32)((a2 & 0xff)) != 0)) {
        func_002d0a78();
        func_001a58f8();
    }
    func_002d7420(a0);
    func_002da040(func_002d1260());
    func_002cf2d8();
    func_002cf938(1);
    *(u32*)((a0 + 0x6c)) = (*(u32*)((a0 + 0x6c)) + func_002cf308(0));
    *(u32*)((a0 + 0x70)) = (*(u32*)((a0 + 0x70)) + func_002cf308(1));
    *(u32*)((a0 + 0x74)) = (*(u32*)((a0 + 0x74)) + func_002cf308(2));
    t5 = 2;
    do {
        *(u32*)(((a0 + ((t5 - 2) * -4)) + 0x84)) = 0;
        t5 = (t5 + -1);
    } while (((s32)(t5) >= 0));
    *(u8*)((a0 + 0x1d0)) = 1;
    if ((*(u32*)((a0 + 0xa4)) == 5)) {
        func_002d9220(a0, 0);
    } else {
        if ((*(u32*)((a0 + 0xa4)) == 6)) {
            func_002d9220(a0, 1);
        }
    }
    *(f32*)((a0 + 0xb0)) = (*(f32*)((a0 + 0xac)) - 1.0f);
    s0 = func_002d73f0(a0);
    func_001ca8f8(*(f32*)((s0 + 0x24)), *(f32*)((func_002d73f0(a0) + 0x20)));
    return;
}
