// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f5d0 asm("D_0035f5d0");
extern "C" u32 D_00374b1c asm("D_00374b1c");
extern "C" u32 D_00374b20 asm("D_00374b20");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028b038(u32) asm("func_0028b038");
extern "C" u32 func_002943e8(u32) asm("func_002943e8");
extern "C" u32 func_002a01c8(u32) asm("func_002a01c8");
extern "C" u32 func_002aa2f8(u32) asm("func_002aa2f8");
extern "C" u32 func_002aa378(u32) asm("func_002aa378");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00192c90(u32, u32) asm("func_00192c90");
extern "C" void func_0028be78(u32, u32) asm("func_0028be78");
extern "C" void func_0028de08(u32, u32, u32) asm("func_0028de08");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x0029fcb0 func_0029fcb0
void func_0029fcb0() asm("_ZN2Tz7JmAnsem13UpdateTopListEv");
void func_0029fcb0() {
    u8 frame[16];
    u32 s6;
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 sp;
    u32 loc_0;
    u32 loc_4;
    u32 loc_8;
    u32 s0_1;
    u32 s5;
    u32 s7;
    u32 t7;
    u32 s3;
    u32 s2;
    u32 v0_2;
    s6 = func_002766d0();
    v0 = func_0028b038(*(u32*)(&D_0035f200));
    func_0028be78(*(u32*)(&D_0035f214), v0);
    func_002fde18(s6 + 0x110a0, 0, 0x280);
    v0_0 = func_002892f8(*(u32*)(&D_0035f200));
    if (((s32)(v0_0) > 0)) {
        s0 = (s6 + 0xa998);
        do {
            func_00138c10(s0, 2);
            s0 = (s0 + 0x198);
            v0_0 = (v0_0 + -1);
        } while (((s32)(v0_0) != 0));
    } else {
        sp = (u32)frame;
    }
    if (((s32)(*(s8*)(*(u32*)(&D_0035f5d0))) > 0)) {
        loc_0 = 0x10000;
        loc_0 = 0x110a0;
        loc_4 = 0x10000;
        loc_4 = 0x110a0;
        loc_8 = 0x10000;
        loc_8 = 0x110a0;
        s0_1 = 0;
        s5 = 0;
        s7 = (s6 + 0xa998);
        t7 = ((s32)(0) < (s32)(v0));
        do {
            s3 = *(s8*)(*(u32*)(&D_0035f5d0));
            if ((t7 == 0)) {
                s2 = *(u16*)((func_002a01c8(*(s8*)(((*(u32*)(&D_0035f5d0) + s0_1) + 6))) + 2));
                v0_2 = func_002943e8(func_002a01c8(*(s8*)(((*(u32*)(&D_0035f5d0) + s0_1) + 6))));
                if (((s32)(v0_2) != 0)) {
                    func_00192c90(func_00192048(s2), (s6 + (s5 << 6)) + loc_0);
                } else {
                    func_0028de08(s2, (s6 + (s5 << 6)) + loc_4, 0x40);
                }
                *(u32*)((func_002891b8(*(u32*)(&D_0035f200), s5) + 0x198)) = ((s6 + (s5 << 6)) + loc_8);
                if (((s32)(v0_2) != 0)) {
                    if (((s32)(func_002aa2f8(*(s8*)(((*(u32*)(&D_0035f5d0) + s0_1) + 6)))) != 0)) {
                        func_00138c10(s7, func_002aa378(*(s8*)(((*(u32*)(&D_0035f5d0) + s0_1) + 6))) ? *(u32*)(&D_00374b20) : *(u32*)(&D_00374b1c));
                    }
                }
                s5 = (s5 + 1);
                s7 = (s7 + 0x198);
            }
            if (((s32)(((s32)((s0_1 + 1)) < (s32)(s3))) == 0)) {
                break;
            }
            s0_1 = (s0_1 + 1);
            t7 = ((s32)(s0_1) < (s32)(v0));
        } while (((s32)(((s32)((s0_1 + 1)) < (s32)(s3))) != 0));
    }
    return;
}
