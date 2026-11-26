// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_00373240 asm("D_00373240");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257158(u32, u32, u32) asm("func_00257158");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_00281f30(u32) asm("func_00281f30");
extern "C" u32 func_002827e0(u32, u32) asm("func_002827e0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289300(u32) asm("func_00289300");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00261ce8(u32) asm("func_00261ce8");
extern "C" void func_00261fb8(u32) asm("func_00261fb8");

// 0x00261d48 func_00261d48
void func_00261d48() asm("_ZN2Tz6CmItem15UpdateEquipListEv");
void func_00261d48() {
    u8 frame[64];
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s1_0;
    u32 s0_1;
    u32 s2_2;
    u32 v0;
    u32 v0_3;
    u32 s0_4;
    u32 v0_5;
    u32 s2_6;
    u32 fp;
    u32 t7;
    u32 s3_7;
    u32 s4;
    u32 s5;
    u32 s6;
    u32 s7;
    u32 s1_8;
    u32 s1_9;
    u32 s0_10;
    u32 t5;
    u32 sp;
    *(u32*)(((u32)frame + 0x24)) = func_00257770();
    func_00139d78(*(u32*)(((u32)frame + 0x24)));
    s0 = *(u32*)(((u32)frame + 0x24));
    s1 = func_00257140(0);
    s2 = 0x13;
    s3 = 0x360000;
    do {
        s2 = (s2 + -1);
        func_00138c10(s0 + 0x3610, *(u32*)((s3 + -0x1094)));
        func_00138c10(s0 + 0x5ef0, s1);
        *(u32*)((s0 + 0x6088)) = 0;
        s0 = (s0 + 0x1b4);
    } while (((s32)(s2) >= 0));
    s1_0 = func_002891e8(*(u32*)(&D_0035f01c));
    if (((s32)(((s32)(s1_0) < (s32)(func_00289300(*(u32*)(&D_0035f01c))))) == 0)) {
        func_00261fb8(s1_0);
    } else {
        func_00261ce8(s1_0);
        s0_1 = (u32)frame;
        s2_2 = 0;
        do {
            v0 = func_002827e0(func_00257130(), s2_2);
            s2_2 = (s2_2 + 1);
            *(u32*)(s0_1) = v0;
            s0_1 = (s0_1 + 4);
        } while (((s32)(((s32)(s2_2) < (s32)(5))) != 0));
        v0_3 = func_00257130();
        *(u32*)(((u32)frame + 0x20)) = 0;
        s0_4 = func_00281f30(v0_3);
        v0_5 = func_00257130();
        *(u32*)(((u32)frame + 0x38)) = s0_4;
        *(u32*)(((u32)frame + 0x28)) = func_00281f20(v0_5);
        *(u32*)(((u32)frame + 0x2c)) = (u32)frame;
        *(u32*)(((u32)frame + 0x30)) = (u32)&D_00373240;
        *(u32*)(((u32)frame + 0x34)) = 0;
        s2_6 = 0;
        do {
            if ((s2_6 != 1)) {
                if (((s32)(s2_6) == 0)) {
                    fp = (*(u32*)(*(u32*)(((u32)frame + 0x2c))) + *(u32*)(((u32)frame + 4)));
                    t7 = *(u32*)(((u32)frame + 4));
                } else {
                    fp = *(u32*)(*(u32*)(((u32)frame + 0x2c)));
                    t7 = *(u32*)(((u32)frame + 0x2c));
                }
                if (((s32)(fp) > 0)) {
                    s3_7 = ((*(u32*)(((u32)frame + 0x20)) * 0x1b4) + *(u32*)(((u32)frame + 0x24)));
                    s4 = *(s16*)(*(u32*)(((u32)frame + 0x30)));
                    s5 = (*(u32*)(((u32)frame + 0x38)) + 0x10);
                    s6 = (*(u32*)(((u32)frame + 0x34)) + *(u32*)(((u32)frame + 0x28)));
                    s7 = 0;
                    do {
                        s4 = (s2_6 ? s4 : (s7 ? 0x97 : s4));
                        s7 = (s7 + 1);
                        func_00138c10(s3_7 + 0x3610, s4);
                        if ((s2_6 == 4)) {
                            s1_8 = func_00257140(0);
                            s1_9 = func_00257140(func_00257158(*(u16*)(s6), *(u8*)((s6 + 2)), (u32)(0) < (u32)(*(u8*)((s6 + 3)))));
                        } else {
                            s1_9 = func_00257140(0);
                        }
                        s0_10 = (s3_7 + 0x5ef0);
                        *(u32*)(((u32)frame + 0x34)) = (*(u32*)(((u32)frame + 0x34)) + 6);
                        *(u32*)(((u32)frame + 0x38)) = (*(u32*)(((u32)frame + 0x38)) + 0x50);
                        s6 = (s6 + 6);
                        s3_7 = (s3_7 + 0x1b4);
                        func_00138c10(s0_10, s1_9);
                        *(u32*)((s0_10 + 0x198)) = s5;
                        s5 = (s5 + 0x50);
                    } while (((s32)(((s32)(s7) < (s32)(fp))) != 0));
                }
                t5 = (*(u32*)(((u32)frame + 0x20)) + fp);
                *(u32*)(((u32)frame + 0x20)) = (t5 + (fp & 1));
            }
            s2_6 = (s2_6 + 1);
            *(u32*)(((u32)frame + 0x30)) = (*(u32*)(((u32)frame + 0x30)) + 2);
            *(u32*)(((u32)frame + 0x2c)) = (*(u32*)(((u32)frame + 0x2c)) + 4);
        } while (((s32)(((s32)(s2_6) < (s32)(5))) != 0));
        sp = (u32)frame;
    }
    return;
}
