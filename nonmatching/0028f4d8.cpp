// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f458 asm("D_0035f458");
extern "C" u32 D_0035f45c asm("D_0035f45c");
extern "C" u32 D_0035f460 asm("D_0035f460");
extern "C" u32 D_0035f468 asm("D_0035f468");
extern "C" u32 D_0035f470 asm("D_0035f470");
extern "C" u32 D_0035f478 asm("D_0035f478");
extern "C" u32 D_0035f480 asm("D_0035f480");
extern "C" u32 func_00139d78(u32, u32, u8) asm("func_00139d78");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_0028d660(u32, u32) asm("func_0028d660");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0028d1c0(u32, u32, u32, u32, u32, u32, u32) asm("func_0028d1c0");
extern "C" void func_0028fb28(u32, u32) asm("func_0028fb28");

// 0x0028f4d8 func_0028f4d8
u32 func_0028f4d8(u32 a0, u32 a1, u8 a2) asm("_ZN2Tz7SelHist6CreateEiib");
u32 func_0028f4d8(u32 a0, u32 a1, u8 a2) {
    u32 s2;
    u32 v0;
    u32 s4;
    u32 v0_0;
    u32 s0;
    s2 = (*(u32*)(&D_0035f480) + (a0 * 0x374));
    v0 = func_00139d78(*(u32*)(&D_0035f480) + (a0 * 0x374), a1, a2);
    if ((v0 == 0)) {
        s4 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f460)), *(u32*)(&D_0035f45c));
        v0_0 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f460)) + 0x28)), *(u32*)(&D_0035f458));
        if (((s32)(a2) == 0)) {
            s0 = (u32)&D_0035f468;
        } else {
            s0 = (u32)&D_0035f470;
        }
        func_00138d60(s2, *(u32*)(&D_0035f3d4), s4, v0_0, *(s16*)(s0), 0, 0);
        *(u32*)((s2 + 0x188)) = *(s16*)((s0 + 4));
        func_00138c68(s2, func_0023aa98(s2 + 0x18) * a0, 0);
        func_00139620(s2);
        *(u32*)((s2 + 0x1ac)) = 1;
        if (((s32)(a1) >= 0)) {
            func_0028fb28(a0, a1);
        }
        *(u32*)((s2 + 0x198)) = *(u32*)((((a0 * 0x374) + *(u32*)(&D_0035f480)) + 0x370));
        func_0028d1c0((*(u32*)(&D_0035f480) + (a0 * 0x374)) + 0x1b4, *(u32*)(&D_0035f3d4) + 1, *(u32*)(&D_0035f45c), *(u32*)(&D_0035f458), *(u32*)(&D_0035f460), (u32)&D_0035f478, 0);
        return func_0028d660((*(u32*)(&D_0035f480) + (a0 * 0x374)) + 0x1b4, s2);
    } else {
        return v0;
    }
}
