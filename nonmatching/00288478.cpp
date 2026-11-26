// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00288638 asm("D_00288638");
extern "C" u32 D_0035f32a asm("D_0035f32a");
extern "C" u32 D_0035f32c asm("D_0035f32c");
extern "C" u32 D_0035f32e asm("D_0035f32e");
extern "C" u32 D_0035f330 asm("D_0035f330");
extern "C" u32 D_0035f3a8 asm("D_0035f3a8");
extern "C" u32 func_00103398(u32) asm("func_00103398");
extern "C" u32 func_001033b0(u32) asm("func_001033b0");
extern "C" u32 func_00243150(u32) asm("func_00243150");
extern "C" u32 func_00253330(u32) asm("func_00253330");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00103ea0(u32) asm("func_00103ea0");
extern "C" void func_00236d60() asm("func_00236d60");
extern "C" void func_0023fad0(u32) asm("func_0023fad0");
extern "C" void func_00242fa0() asm("func_00242fa0");
extern "C" void func_002530c8() asm("func_002530c8");
extern "C" void func_002883f8(u32) asm("func_002883f8");
extern "C" void func_00288870() asm("func_00288870");

// 0x00288478 func_00288478
void func_00288478(u32 a0) asm("func_00288478");
void func_00288478(u32 a0) {
    u32 s2;
    u32 v0;
    u32 t7;
    func_002883f8(a0);
    func_00102448(a0, 1);
    s2 = func_00103398(*(s16*)(&D_0035f32a));
    v0 = func_001033b0(*(s16*)(&D_0035f32a));
    if ((v0 != 1)) {
        func_002530c8();
        t7 = *(u32*)((func_00253330(s2) + 4));
    } else {
        func_00242fa0();
        t7 = *(u32*)((func_00243150(s2) + 4));
    }
    ((void(*)())(t7))();
    *(u8*)(&D_0035f330) = 0;
    func_00103ea0((u32)&D_00288638);
    for (;;) {
        func_00236d60();
        func_00288870();
        if (((s32)(*(u8*)(&D_0035f330)) != 0)) break;
        func_00102448(a0, 0);
    }
    if ((v0 != 1)) {
        ((void(*)())(*(u32*)((func_00253330(s2) + 8))))();
    } else {
        ((void(*)())(*(u32*)((func_00243150(s2) + 8))))();
        func_0023fad0((u32)&D_0035f3a8);
    }
    *(u16*)(&D_0035f32a) = *(u16*)(&D_0035f32c);
    *(u16*)(&D_0035f32c) = *(u16*)(&D_0035f32e);
    *(u16*)(&D_0035f32e) = 0xffffffff;
    return;
}
