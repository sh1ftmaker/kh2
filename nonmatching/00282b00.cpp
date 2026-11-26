// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00374240 asm("D_00374240");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_002595e0() asm("func_002595e0");
extern "C" u32 func_00259618(u32, u32, u32) asm("func_00259618");
extern "C" void func_00192b30(u32) asm("func_00192b30");
extern "C" void func_00259570(u32, u32, u32, u32) asm("func_00259570");
extern "C" void func_002595e8(u32, u32) asm("func_002595e8");

// 0x00282b00 func_00282b00
void func_00282b00(u32 a0) asm("_ZN2Tz8ItemInfo12MakeEquipMsgEv");
void func_00282b00(u32 a0) {
    u8 frame[16];
    u32 s7;
    u32 s6;
    u32 s5;
    u32 t7;
    u32 s4;
    u32 s3;
    u32 s2;
    u32 s1;
    u32 s0;
    *(u32*)((u32)frame) = 0;
    *(u32*)(((u32)frame + 8)) = (u32)&D_00374240;
    s7 = 0;
    s6 = (a0 + 0x1010);
    do {
        if ((s7 != 1)) {
            if (((s32)(s7) == 0)) {
                s5 = (*(u32*)(s6) + *(u32*)((a0 + 0x1014)));
                t7 = *(u32*)((a0 + 0x1014));
            } else {
                s5 = *(u32*)(s6);
                t7 = *(u32*)(((u32)frame + 8));
            }
            if (((s32)(s5) > 0)) {
                *(u32*)(((u32)frame + 4)) = *(u32*)(((u32)frame + 8));
                s4 = (((*(u32*)((u32)frame) * 0x50) + a0) + 0x614);
                s3 = s5;
                s2 = ((*(u32*)((u32)frame) * 0x50) + a0);
                s1 = ((*(u32*)((u32)frame) * 6) + a0);
                do {
                    if (((s32)(*(u16*)((s1 + 4))) == 0)) {
                        func_00259570(*(s16*)(*(u32*)(((u32)frame + 4))), s2 + 0x614, 0, 1);
                        s4 = (s4 + 0x50);
                        s0 = (s2 + func_002595e0());
                        func_002595e8(s0 + 0x614, func_00192048(0x8448));
                    } else {
                        func_00192b30(func_00259618(*(u16*)((s1 + 4)), s4, (u32)(0) < (u32)(*(u8*)((s1 + 7)))));
                        s4 = (s4 + 0x50);
                    }
                    s2 = (s2 + 0x50);
                    s3 = (s3 + -1);
                    s1 = (s1 + 6);
                } while (((s32)(s3) != 0));
            }
            *(u32*)((u32)frame) = (*(u32*)((u32)frame) + s5);
        }
        s7 = (s7 + 1);
        *(u32*)(((u32)frame + 8)) = (*(u32*)(((u32)frame + 8)) + 2);
        s6 = (s6 + 4);
    } while (((s32)(((s32)(s7) < (s32)(5))) != 0));
    return;
}
