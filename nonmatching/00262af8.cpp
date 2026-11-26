// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_002632d0(u32) asm("func_002632d0");
extern "C" u32 func_00263a58(u32, u32) asm("func_00263a58");
extern "C" u32 func_00281cf0(u32) asm("func_00281cf0");
extern "C" u32 func_00281f18(u32) asm("func_00281f18");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289300(u32) asm("func_00289300");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");

// 0x00262af8 func_00262af8
void func_00262af8() asm("_ZN2Tz6CmItem14UpdateHelpMessEv");
void func_00262af8() {
    u32 v0;
    u32 s1;
    u32 v0_0;
    v0 = func_00287bc0();
    if ((v0 == 1)) {
        s1 = func_002891e8(*(u32*)(&D_0035f01c));
        func_00263a58(((s32)(s1) < (s32)(func_00289300(*(u32*)(&D_0035f01c)))) ? 0xbb86 : 0xbb87, 1);
        return;
    } else {
        if ((v0 == 0xa)) {
            if ((func_00281f18(func_00257130()) == 0)) {
                func_00263a58(0xffffffff, 1);
                return;
            } else {
                v0_0 = func_0028b040(*(u32*)(&D_0035f01c));
                if (((s32)(func_002632d0(v0_0)) != 0)) {
                    if (((s32)(*(u16*)(func_002632d0(v0_0))) != 0)) {
                        func_00263a58((*(u16*)((func_002632d0(v0_0) + 0xa)) | 0xffff8000) & 0xffff, 1);
                        func_00281cf0(*(u16*)((func_002632d0(v0_0) + 0x14)));
                        return;
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            }
        } else {
            if (((s32)(((u32)((v0 + -0xb)) < (u32)(2))) != 0)) {
                func_00263a58((*(u16*)((func_002632d0(func_002570a0(0xa)) + 0xa)) | 0xffff8000) & 0xffff, 1);
                return;
            } else {
                return;
            }
        }
    }
}
