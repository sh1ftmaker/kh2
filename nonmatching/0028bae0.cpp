// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0028e8b8(u32, u32, u32, u32) asm("func_0028e8b8");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa58(u32) asm("func_0023aa58");
extern "C" u32 func_0028e798(u32, u32) asm("func_0028e798");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_003142e0(u32, u32) asm("func_003142e0");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_0028be58(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028be58");
extern "C" void func_0028e0d8(u32, u32, u32, u32, u32, u32, u32) asm("func_0028e0d8");
extern "C" void func_0028e5e0(u32, u32, u32) asm("func_0028e5e0");
extern "C" void func_0028e710(u32, u32) asm("func_0028e710");
extern "C" void func_0028e748(u32, u32, u32) asm("func_0028e748");
extern "C" void func_0028e870(u32, u32, u32) asm("func_0028e870");
extern "C" void func_0028eb88(u32, u32, f32, f32) asm("func_0028eb88");

// 0x0028bae0 func_0028bae0
// minilink-rodata 0x00374428   (float literals live here in the original)
void func_0028bae0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2Tz9ScrollBar6CreateEiPvPN2YI5IMAGEEPKsiiPN2dk6SpriteEi");
void func_0028bae0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 t4;
    u32 t2;
    u32 t3;
    u32 v0;
    f32 f20;
    f32 f20_0;
    u32 v0_1;
    f32 f20_2;
    u32 s1;
    u32 s0;
    f32 f20_3;
    func_0028be58(a0, a1, a2, a3, a4, a5, a6, a7);
    t4 = (0 << 3);
    t2 = 0;
    do {
        t3 = 3;
        do {
            *(u16*)(((t4 + a0) + 8)) = *(u16*)((t4 + a4));
            t3 = (t3 + -1);
            t4 = (t4 + 2);
        } while (((s32)(t3) >= 0));
        t2 = (t2 + 1);
        t4 = (t2 << 3);
    } while (((s32)(((s32)(t2) < (s32)(3))) != 0));
    func_0028e0d8(*(u32*)(a0), a1, a2, a3, a0 + 8, 4, 0);
    func_0028e5e0(*(u32*)(a0), a0 + 0x18, 4);
    *(u32*)((a0 + 4)) = a7;
    *(u32*)((a0 + 0x20)) = (((s32)(a5) < (s32)(a6)) ? a6 : a5);
    *(u32*)((a0 + 0x24)) = a6;
    *(u32*)((a0 + 0x28)) = 0;
    *(u32*)((a0 + 0x2c)) = func_0023aa58(func_0028e798(*(u32*)(a0), 0));
    v0 = func_0023aa58(func_0028e798(*(u32*)(a0), 2));
    *(u32*)((a0 + 0x30)) = v0;
    if (((s32)(func_003142e0((u64)(0x3ff) << 0x34, func_00313b80((f32)((s32)(a6)) / (f32)((s32)(a5))))) <= 0)) {
        f20 = 1.0f;
    } else {
        f20 = ((f32)((s32)(a6)) / (f32)((s32)(a5)));
    }
    if (((s32)(*(u32*)((a0 + 4))) == 0)) {
        f20_0 = (((f32)(*(s32*)((a0 + 0x2c))) / (f32)((s32)(v0))) * f20);
        v0_1 = func_0028e798(*(u32*)(a0), 0);
        func_0028e748(*(u32*)(a0), 1, v0_1);
        func_0028e748(*(u32*)(a0), 2, v0_1);
        func_0028e748(*(u32*)(a0), 3, v0_1);
        f20_3 = f20_0;
    } else {
        f20_2 = (((f32)(*(s32*)((a0 + 0x2c))) / (f32)((s32)(v0))) * f20);
        s1 = func_0023aa18(*(u32*)((a0 + 4)) + 0x18);
        s0 = func_0023aa38(*(u32*)((a0 + 4)) + 0x18);
        func_0028e710(*(u32*)(a0), *(u32*)((a0 + 4)));
        func_0028e870(*(u32*)(a0), s1, s0);
        func_00139660(*(u32*)(a0));
        func_00139688(*(u32*)(a0));
        f20_3 = f20_2;
    }
    func_0028eb88(*(u32*)(a0), 2, 1.0f, f20_0);
    func_0028e8b8(*(u32*)(a0), 3, 0, (s32)(((f32)(*(s32*)((a0 + 0x30))) * f20_3)));
    return;
}
