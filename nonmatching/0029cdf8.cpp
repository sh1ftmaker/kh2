// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f5ac asm("D_0035f5ac");
extern "C" u32 D_00374ad0 asm("D_00374ad0");
extern "C" u32 D_00374ad4 asm("D_00374ad4");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028afa8(u32) asm("func_0028afa8");
extern "C" u32 func_0028b038(u32) asm("func_0028b038");
extern "C" u32 func_00295430(u32, u32) asm("func_00295430");
extern "C" u32 func_002954e0(u32) asm("func_002954e0");
extern "C" u32 func_002aa098(u32) asm("func_002aa098");
extern "C" u32 func_002aa148(u32) asm("func_002aa148");
extern "C" void func_00192c90(u32, u32) asm("func_00192c90");
extern "C" void func_0028be78(u32, u32) asm("func_0028be78");
extern "C" void func_0028de08(u32, u32, u32) asm("func_0028de08");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x0029cdf8 func_0029cdf8
u32 func_0029cdf8() asm("_ZN2Tz5JmDic14UpdateWorldSelEv");
u32 func_0029cdf8() {
    u8 frame[16];
    u32 s3;
    u32 v0;
    u32 s1;
    u32 v0_0;
    u32 s1_1;
    u32 s6;
    u32 t7;
    u8 t7_2;
    u32 s4;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 sp;
    s3 = func_002766d0();
    v0 = func_0028b038(*(u32*)(&D_0035f200));
    func_0028be78(*(u32*)(&D_0035f214), v0);
    s1 = 9;
    do {
        func_00138c10((s3 + ((s1 - 9) * -0x198)) + 0xa998, 2);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    func_002fde18(*(u32*)(&D_0035f5ac) + 0x108, 0, 0x280);
    v0_0 = func_0028afa8(*(u32*)(&D_0035f200));
    if (((s32)((((s32)(v0_0) < (s32)(0xb)) ? v0_0 : 0xa)) > 0)) {
        *(u32*)((u32)frame) = (s3 + 0xa998);
        s1_1 = 0;
        s6 = 0;
        t7 = ((s32)(0) < (s32)(v0));
        do {
            if ((t7 == 0)) {
                t7_2 = (((s32)(*(u32*)(*(u32*)(&D_0035f5ac))) >> s1_1) & 1);
                if (((s32)(t7_2) != 0)) {
                    s4 = func_00295430(s1_1 ? (s1_1 + -1) : 0x10, 1);
                    v0_3 = func_002954e0(s1_1 ? (s1_1 + -1) : 0x10);
                    if (((s32)(v0_3) != 0)) {
                        func_00192c90(func_00192048(s4), (*(u32*)(&D_0035f5ac) + (s6 << 6)) + 0x108);
                    } else {
                        func_0028de08(s4, (*(u32*)(&D_0035f5ac) + (s6 << 6)) + 0x108, 0x40);
                    }
                    v0_4 = func_002891b8(*(u32*)(&D_0035f200), s6);
                    *(u32*)((v0_4 + 0x198)) = ((*(u32*)(&D_0035f5ac) + (s6 << 6)) + 0x108);
                    if (((s32)(v0_3) != 0)) {
                        v0_5 = func_002aa098(s1_1 ? (s1_1 + -1) : 0x10);
                        if (((s32)(v0_5) != 0)) {
                            v0_6 = func_00138c10(*(u32*)((u32)frame), func_002aa148(s1_1 ? (s1_1 + -1) : 0x10) ? *(u32*)(&D_00374ad4) : *(u32*)(&D_00374ad0));
                            v0_5 = v0_6;
                        }
                        v0_4 = v0_5;
                    }
                    *(u32*)((u32)frame) = (*(u32*)((u32)frame) + 0x198);
                    s6 = (s6 + 1);
                    v0_0 = v0_4;
                }
            }
            if (((s32)(((s32)((s1_1 + 1)) < (s32)(0x13))) == 0)) {
                break;
            }
            s1_1 = (s1_1 + 1);
            t7 = ((s32)(s1_1) < (s32)(v0));
        } while (((s32)(((s32)((s1_1 + 1)) < (s32)(0x13))) != 0));
        sp = (u32)frame;
    }
    return v0_0;
}
