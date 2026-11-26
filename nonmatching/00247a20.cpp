// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed28 asm("D_0035ed28");
extern "C" u32 D_0035ed34 asm("D_0035ed34");
extern "C" u32 D_0035ed44 asm("D_0035ed44");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_002469a0(u32) asm("func_002469a0");
extern "C" u32 func_00247c20() asm("func_00247c20");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028afa8(u32) asm("func_0028afa8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139648(u32) asm("func_00139648");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x00247a20 Tz::HECO::CreateNewMark()
void lift_00247a20() asm("_ZN2Tz4HECO13CreateNewMarkEv");
void lift_00247a20() {
    u32 s7;
    u32 v0;
    u32 s2;
    u32 s3;
    u32 v0_0;
    u32 s0;
    u8 s0_1;
    u32 s0_2;
    if (((s32)(*(s8*)(&D_0035ed44)) != 0)) {
        if ((func_00139d78(*(u32*)(&D_0035ed34)) == 0)) {
            s7 = (*(u32*)(&D_0035f3d4) + 1);
            v0 = func_0028afa8(*(u32*)(&D_0035ed20));
            if (((s32)(v0) > 0)) {
                s2 = 0;
                s3 = 0;
                do {
                    v0_0 = func_002891b8(*(u32*)(&D_0035ed20), s2);
                    s0 = *(s8*)(&D_0035ed44);
                    s0_1 = (((s32)(s0) >> func_002469a0(s2)) & 1);
                    if (((s32)(s0_1) != 0)) {
                        func_0028d8c0(*(u32*)(&D_0035ed34) + (s3 + (s2 * 0x198)), s7, 0, 0, *(u32*)(&D_0035ed28), 0x53, 0xffffffff, 0);
                        func_0028dcc0(*(u32*)(&D_0035ed34) + (s3 + (s2 * 0x198)), v0_0);
                        func_00139648(*(u32*)(&D_0035ed34) + (s3 + (s2 * 0x198)));
                        s0_2 = func_0023aa18(v0_0 + 0x18);
                        func_00138c68(*(u32*)(&D_0035ed34) + (s3 + (s2 * 0x198)), s0_2, func_0023aa38(v0_0 + 0x18));
                    }
                    s2 = (s2 + 1);
                } while (((s32)(((s32)(s2) < (s32)(v0))) != 0));
            }
            func_00247c20();
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
