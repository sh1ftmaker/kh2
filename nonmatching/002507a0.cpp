// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee34 asm("D_0035ee34");
extern "C" u32 D_0035ee3c asm("D_0035ee3c");
extern "C" u32 D_0035ee48 asm("D_0035ee48");
extern "C" u32 D_0035ee51 asm("D_0035ee51");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_00250998() asm("func_00250998");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139648(u32) asm("func_00139648");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x002507a0 func_002507a0
void func_002507a0() asm("_ZN2Tz4LMMU13CreateNewMarkEv");
void func_002507a0() {
    u32 s6;
    u32 v0;
    u32 s1;
    u32 s2;
    u32 v0_0;
    u8 t7;
    u32 s0;
    if (((s32)(*(s8*)(&D_0035ee51)) != 0)) {
        if ((func_00139d78(*(u32*)(&D_0035ee48)) == 0)) {
            s6 = (*(u32*)(&D_0035f3d4) + 1);
            v0 = func_002892f8(*(u32*)(&D_0035ee34));
            if (((s32)(v0) > 0)) {
                s1 = 0;
                s2 = 0;
                do {
                    v0_0 = func_002891b8(*(u32*)(&D_0035ee34), s1);
                    t7 = (((s32)(*(s8*)(&D_0035ee51)) >> s1) & 1);
                    if (((s32)(t7) != 0)) {
                        func_0028d8c0(*(u32*)(&D_0035ee48) + (s2 + (s1 * 0x198)), s6, 0, 0, *(u32*)(&D_0035ee3c), 0x23, 0xffffffff, 0);
                        func_0028dcc0(*(u32*)(&D_0035ee48) + (s2 + (s1 * 0x198)), v0_0);
                        func_00139648(*(u32*)(&D_0035ee48) + (s2 + (s1 * 0x198)));
                        s0 = func_0023aa18(v0_0 + 0x18);
                        func_00138c68(*(u32*)(&D_0035ee48) + (s2 + (s1 * 0x198)), s0, func_0023aa38(v0_0 + 0x18));
                    }
                    s1 = (s1 + 1);
                } while (((s32)(((s32)(s1) < (s32)(v0))) != 0));
            }
            func_00250998();
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
