// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e840 asm("D_01d9e840");
extern "C" u32 D_01d9e980 asm("D_01d9e980");
extern "C" u32 D_01d9e9c0 asm("D_01d9e9c0");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 D_01d9eac0 asm("D_01d9eac0");
extern "C" u32 func_0020f1e0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0020f1e0");
extern "C" void func_002f3d08(u32, u32, u32, u32, u32, u32, u32) asm("func_002f3d08");

// 0x00222d40 func_00222d40
void func_00222d40(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_00222d40");
void func_00222d40(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u8 frame[160];
    u32 s2;
    u32 t6;
    u8 t7;
    u32 s2_0;
    u32 t7_1;
    u32 s2_2;
    u32 t7_3;
    u32 t7_4;
    u32 t7_5;
    u32 t7_6;
    u32 s5;
    u32 s5_7;
    u32 t3;
    u32 t2;
    u32 t4;
    u32 t5;
    u32 t7_8;
    if ((a0 != 0xffff)) {
        *(u32*)(((u32)frame + 0x40)) = 0;
        if (((s32)(((a5 & 0xff) & 2)) != 0)) {
            *(u32*)(((u32)frame + 0x40)) = 4;
            s2 = *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (a0 * 0x24)) + 0x1c));
            t6 = *(u32*)(s2);
            if (((s32)((t6 & 1)) == 0)) {
                *(u32*)(((u32)frame + 0x40)) = 0xc;
            }
            s2_2 = s2;
        } else {
            t7 = ((a5 & 0xff) & 1);
            if (((s32)(t7) != 0)) {
                *(u32*)(((u32)frame + 0x40)) = 0x80;
            }
            s2_0 = *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (a0 * 0x24)) + 0x1c));
            if (((*(u32*)(s2_0) & 1) == 0)) {
                t7_1 = *(u32*)(((u32)frame + 0x40));
                *(u32*)(((u32)frame + 0x40)) = (t7_1 | 8);
            }
            s2_2 = s2_0;
        }
        if (((s32)((*(u32*)(s2) & 2)) == 0)) {
            t7_3 = *(u32*)(((u32)frame + 0x40));
            *(u32*)(((u32)frame + 0x40)) = (t7_3 | 0x10);
        }
        if (((s32)(((a5 & 0xff) & 4)) != 0)) {
            t7_4 = *(u32*)(((u32)frame + 0x40));
            *(u32*)(((u32)frame + 0x40)) = (t7_4 | 0x200);
        }
        if (((s32)(((a5 & 0xff) & 8)) != 0)) {
            t7_5 = *(u32*)(((u32)frame + 0x40));
            *(u32*)(((u32)frame + 0x40)) = (t7_5 | 0x100);
        }
        if (((s32)(((a5 & 0xff) & 0x10)) != 0)) {
            t7_6 = *(u32*)(((u32)frame + 0x40));
            *(u32*)(((u32)frame + 0x40)) = (t7_6 | 0x2000);
            *(u32*)(((u32)frame + 0x70)) = (u32)frame;
            s5 = (*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (a0 * 0x24));
            func_002f3d08((u32)frame, (u32)&D_01d9e840, *(u32*)(&D_01d9e6e8) + 0x10, a3, a4, a5, a6);
            s5_7 = s5;
        } else {
            s5_7 = (*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (a0 * 0x24));
        }
        *(u32*)(((u32)frame + 0x84)) = (((a5 & 0xff) & 0x20) ? a6 : 0);
        t3 = *(u16*)(a1);
        t2 = *(u16*)((a1 + 6));
        t4 = *(u16*)((a1 + 2));
        *(u16*)(((u32)frame + 0x48)) = *(u16*)((s2_2 + 0x16));
        t5 = *(u16*)((a1 + 4));
        *(u32*)(((u32)frame + 0x5c)) = 0;
        t7_8 = *(u32*)(&D_01d9e6e8);
        *(u32*)(((u32)frame + 0x78)) = *(u32*)((t7_8 + 0x90));
        *(u32*)(((u32)frame + 0x44)) = (u32)&D_01d9eac0;
        *(u8*)(((u32)frame + 0x4a)) = 0;
        *(u16*)(((u32)frame + 0x4c)) = 0;
        *(u16*)(((u32)frame + 0x4e)) = a2;
        *(u32*)(((u32)frame + 0x50)) = (a3 << 0x10);
        *(u32*)(((u32)frame + 0x54)) = (a4 << 0x10);
        *(u8*)(((u32)frame + 0x58)) = (t3 >> 7);
        *(u8*)(((u32)frame + 0x59)) = (t4 >> 7);
        *(u8*)(((u32)frame + 0x5a)) = (t5 >> 7);
        *(u8*)(((u32)frame + 0x5b)) = (t2 >> 7);
        *(u32*)(((u32)frame + 0x60)) = (t7_8 + 0x50);
        *(u32*)(((u32)frame + 0x64)) = (u32)&D_01d9e9c0;
        *(u32*)(((u32)frame + 0x68)) = (u32)&D_01d9e980;
        *(u32*)(((u32)frame + 0x6c)) = (t7_8 + 0x10);
        *(u32*)(((u32)frame + 0x74)) = *(u32*)(&D_01d9eaa4);
        *(u32*)(((u32)frame + 0x7c)) = *(u32*)((t7_8 + 0x94));
        *(u32*)(((u32)frame + 0x80)) = 0;
        *(u32*)(&D_01d9eaa4) = func_0020f1e0(s2_2, (u32)frame + 0x40, *(u32*)((s5_7 + 0x20)), t7_8 + 0x50, a3 << 0x10, a4 << 0x10, t2 >> 7, t3 >> 7);
    }
    return;
}
