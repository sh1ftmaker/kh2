// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed4c asm("D_0035ed4c");
extern "C" u32 D_0035ed50 asm("D_0035ed50");
extern "C" u32 D_0035ed60 asm("D_0035ed60");
extern "C" u32 D_00371d18 asm("D_00371d18");
extern "C" u32 D_00371d90 asm("D_00371d90");
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

// 0x00248b38 func_00248b38
void func_00248b38() asm("func_00248b38");
void func_00248b38() {
    u32 s2;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    s2 = func_00287cd0();
    v0 = func_00289380(*(u32*)(&D_0035ed50));
    if ((s2 == 2)) {
        if (((s32)(func_0028acc8(*(u32*)(&D_0035ed50))) != 0)) {
            if ((v0 == 0xffffffff)) {
                if (((s32)(func_00289310(*(u32*)(&D_0035ed50))) != 0)) {
                    func_0028abe0(*(u32*)(&D_0035ed50));
                    return;
                } else {
                    return;
                }
            } else {
                func_0028abe0(*(u32*)(&D_0035ed50));
                return;
            }
        } else {
            func_002b4388(*(u32*)(&D_0035ed60), (func_002891e8(*(u32*)(&D_0035ed4c)) * 0x24) + (u32)&D_00371d90, 0);
            func_00287bd0(0, 0);
            func_00287cc0(1);
            return;
        }
    } else {
        if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035ed50))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ed50), 0)) == 0)) {
                func_0028ab20(*(u32*)(&D_0035ed50));
            }
        }
        if (((s32)(s2) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ed50), 0)) != 0)) {
                func_00287c90(1);
            }
        }
        v0_0 = (v0 + 4);
        func_00287df0(v0, func_00289310(*(u32*)(&D_0035ed50)), 0, 0, 1);
        switch (v0_0) {
        case 2:
        case 5:
            func_0028aa40(*(u32*)(&D_0035ed50));
            func_00287c90(1);
            return;
        case 4:
            v0_1 = (func_002891e8(*(u32*)(&D_0035ed4c)) << 1);
            func_00287b08(*(s16*)((v0_1 + (u32)&D_00371d18)));
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
