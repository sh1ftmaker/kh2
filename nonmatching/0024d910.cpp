// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035edcc asm("D_0035edcc");
extern "C" u32 D_0035edd0 asm("D_0035edd0");
extern "C" u32 D_0035edec asm("D_0035edec");
extern "C" u32 D_0035edf4 asm("D_0035edf4");
extern "C" u32 D_00372118 asm("D_00372118");
extern "C" u32 D_00372120 asm("D_00372120");
extern "C" u32 func_0024e058() asm("func_0024e058");
extern "C" u32 func_00287c90(u32) asm("func_00287c90");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287da0() asm("func_00287da0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028abe0(u32) asm("func_0028abe0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" void func_00287b08(u32) asm("func_00287b08");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");
extern "C" void func_002b4388(u32, u32, u32) asm("func_002b4388");

// 0x0024d910 func_0024d910
void func_0024d910() asm("func_0024d910");
void func_0024d910() {
    u32 s2;
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 t7;
    u32 t6;
    s2 = func_00287cd0();
    v0 = func_00289380(*(u32*)(&D_0035edd0));
    if ((s2 == 2)) {
        if (((s32)(func_0028acc8(*(u32*)(&D_0035edd0))) != 0)) {
            if ((v0 == 0xffffffff)) {
                if (((s32)(func_00289310(*(u32*)(&D_0035edd0))) != 0)) {
                    func_0028abe0(*(u32*)(&D_0035edd0));
                    return;
                } else {
                    return;
                }
            } else {
                func_0028abe0(*(u32*)(&D_0035edd0));
                return;
            }
        } else {
            s0 = func_0024e058();
            v0_0 = func_002891e8(*(u32*)(&D_0035edcc));
            func_002b4388(*(u32*)(&D_0035edec), s0 + (v0_0 * 0x24), 0);
            func_00287bd0(0, 0);
            func_00287cc0(1);
            return;
        }
    } else {
        if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035edd0))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035edd0), 0)) == 0)) {
                func_0028ab20(*(u32*)(&D_0035edd0));
            }
        }
        if (((s32)(s2) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035edd0), 0)) != 0)) {
                func_00287c90(1);
            }
        }
        v0_1 = (v0 + 4);
        func_00287df0(v0, func_00289310(*(u32*)(&D_0035edd0)), 0, 0, 1);
        switch (v0_1) {
        case 2:
        case 5:
            func_0028aa40(*(u32*)(&D_0035edd0));
            func_00287c90(1);
            return;
        case 4:
            v0_2 = func_002891e8(*(u32*)(&D_0035edcc));
            if ((*(u32*)(&D_0035edf4) == 0)) {
                t7 = (u32)&D_00372118;
            } else {
                t7 = (u32)&D_00372120;
            }
            t6 = (v0_2 << 1);
            func_00287b08(*(s16*)((t6 + t7)));
            func_00287da0();
            return;
        case 0:
        case 1:
        case 3:
        default:
            return;
        }
    }
}
