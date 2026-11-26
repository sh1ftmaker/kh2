// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3fc asm("D_0035f3fc");
extern "C" u32 D_0035f400 asm("D_0035f400");
extern "C" u32 D_0035f408 asm("D_0035f408");
extern "C" u32 D_0035f40c asm("D_0035f40c");
extern "C" u32 D_0035f410 asm("D_0035f410");
extern "C" u32 func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");

// 0x0028cc78 Tz::MenuCursor::Create(int, int, int, Tz::Layout*, int, int, int)
u32 lift_0028cc78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2Tz10MenuCursor6CreateEiiiPNS_6LayoutEiii");
u32 lift_0028cc78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    s1 = func_0023c4b8(func_0023f1b0(a3), a1);
    v0 = func_00236ca8(*(u32*)((func_0023f1b0(a3) + 0x28)), a2);
    v0_0 = func_001386e0(*(u32*)(&D_0035f3fc) + (a0 * 0x198), *(u32*)(((a0 << 2) + *(u32*)(&D_0035f40c))), s1, v0, a4, 0);
    *(u16*)(((a0 << 2) + *(u32*)(&D_0035f400))) = a4;
    *(u16*)((((a0 << 2) + *(u32*)(&D_0035f400)) + 2)) = a5;
    *(u32*)(((a0 << 2) + *(u32*)(&D_0035f408))) = 0;
    *(u32*)(&D_0035f410) = (*(u32*)(&D_0035f410) & ~((0 | (1 << a0))));
    if (((s32)(*(u8*)((v0 + 0x190))) != 0)) {
        *(u32*)((((*(u32*)(&D_0035f3fc) + (a0 * 0x198)) + 0x18) + 0xb8)) = (*(u32*)((((*(u32*)(&D_0035f3fc) + (a0 * 0x198)) + 0x18) + 0xb8)) | 8);
    }
    return v0_0;
}
