// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_00373278 asm("D_00373278");
extern "C" u32 D_0037327c asm("D_0037327c");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_00285d58(u32) asm("func_00285d58");
extern "C" u32 func_00285e30(u32) asm("func_00285e30");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_00285f50(u32) asm("func_00285f50");

// 0x00262a30 func_00262a30
u32 func_00262a30() asm("_ZN2Tz6CmItem10DrawUpdateEPNS_6SelectEii");
u32 func_00262a30() {
    u32 s1;
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 s0_1;
    s1 = func_00257770();
    s0 = func_00281f20(func_00257130());
    v0 = func_0028b040(*(u32*)(&D_0035f01c));
    v0_0 = func_00285d58(*(u16*)(((v0 * 6) + s0)));
    if ((v0_0 != 0)) {
        func_00285f50(*(u16*)(((v0 * 6) + s0)));
        s0_1 = ((s32)(func_00285e30(*(u16*)(((v0 * 6) + s0)))) != 0) ? *(u32*)(&D_0037327c) : *(u32*)(&D_00373278);
        return func_00138c10((s1 + (func_002891e8(*(u32*)(&D_0035f01c)) * 0x198)) + 0x87d0, s0_1);
    } else {
        return v0_0;
    }
}
