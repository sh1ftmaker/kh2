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
extern "C" f32 func_0020f1e0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0020f1e0");
extern "C" void func_002f3d08(u32, u32, u32) asm("func_002f3d08");

// 0x001fded0 func_001fded0
// minilink-rodata 0x00370280   (float literals live here in the original)
f32 func_001fded0(u32 a0, u32 a1, u32 a2) asm("func_001fded0");
f32 func_001fded0(u32 a0, u32 a1, u32 a2) {
    u8 frame[160];
    u32 t5;
    u32 t7;
    u32 t4;
    u32 t7_0;
    u32 s2;
    u32 t6;
    u32 t3;
    u32 s7;
    u32 s3;
    u32 t6_1;
    u8 t7_2;
    u32 s3_3;
    u32 t7_4;
    u32 s3_5;
    u32 t7_6;
    u32 t7_7;
    u32 t7_8;
    u32 t7_9;
    u32 t7_10;
    u32 t7_11;
    u32 t7_12;
    u32 t7_13;
    u32 t7_14;
    u32 t7_15;
    u32 s5;
    f32 f2;
    u32 t7_16;
    f32 f0;
    f32 f0_17;
    f32 f0_18;
    t5 = *(u32*)((a2 + 0xc));
    t7 = *(u32*)((t5 + 8));
    t4 = *(u32*)((a1 + 4));
    if ((t4 != 0xffff)) {
        t7_0 = *(u32*)(t5);
        s2 = ((a0 + t7_0) + 0xa0);
        t6 = *(u8*)((s2 + 0xb));
        *(u8*)(((u32)frame + 0x1b)) = t6;
        if (((s32)(t6) != 0)) {
            t3 = *(u8*)((a1 + 0x20));
            s7 = (*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (t4 * 0x24));
            *(u32*)((u32)frame) = 0;
            if (((s32)((t3 & 2)) != 0)) {
                *(u32*)((u32)frame) = 4;
                s3 = *(u32*)((s7 + 0x1c));
                t6_1 = *(u32*)(s3);
                if (((s32)((t6_1 & 1)) == 0)) {
                    *(u32*)((u32)frame) = 0xc;
                }
                s3_5 = s3;
            } else {
                t7_2 = (t3 & 1);
                if (((s32)(t7_2) != 0)) {
                    *(u32*)((u32)frame) = 0x80;
                }
                s3_3 = *(u32*)((s7 + 0x1c));
                if (((*(u32*)(s3_3) & 1) == 0)) {
                    t7_4 = *(u32*)((u32)frame);
                    *(u32*)((u32)frame) = (t7_4 | 8);
                }
                s3_5 = s3_3;
            }
            if (((*(u32*)(s3) & 2) == 0)) {
                t7_6 = *(u32*)((u32)frame);
                *(u32*)((u32)frame) = (t7_6 | 0x10);
            }
            t7_7 = *(u8*)((a1 + 0x21));
            if (((s32)(t7_7) != 0)) {
                t7_8 = *(u32*)((u32)frame);
                *(u32*)((u32)frame) = (t7_8 | 0x200);
            }
            t7_9 = *(u8*)((a1 + 0x23));
            if (((s32)(t7_9) != 0)) {
                t7_10 = *(u32*)((u32)frame);
                *(u32*)((u32)frame) = (t7_10 | 0x100);
            }
            t7_11 = *(u8*)((a1 + 0x22));
            if (((s32)(t7_11) != 0)) {
                t7_12 = *(u32*)((u32)frame);
                *(u32*)((u32)frame) = (t7_12 | 0x2000);
                *(u32*)(((u32)frame + 0x30)) = ((u32)frame + 0x60);
                func_002f3d08((u32)frame + 0x60, (u32)&D_01d9e840, *(u32*)(&D_01d9e6e8) + 0x10);
            }
            t7_13 = *(u8*)((a1 + 0x24));
            if ((t7_13 != 0)) {
                t7_14 = *(u32*)((*(u32*)((a2 + 0xc)) + 0xc));
                t7_15 = (a0 + t7_14);
                *(u32*)(((u32)frame + 0x44)) = (t7_15 + 0xa0);
            } else {
                *(u32*)(((u32)frame + 0x44)) = 0;
            }
            s5 = ((a0 + t7) + 0xa0);
            *(u16*)(((u32)frame + 8)) = *(u16*)((s3_5 + 0x16));
            *(u32*)(((u32)frame + 0x1c)) = 0;
            f2 = *(f32*)((s5 + 0xc));
            *(u8*)(((u32)frame + 0xa)) = 0;
            t7_16 = *(u32*)(&D_01d9e6e8);
            f0 = *(f32*)(s5);
            *(u32*)(((u32)frame + 0x38)) = *(u32*)((t7_16 + 0x90));
            *(u32*)(((u32)frame + 0x14)) = (s32)((f2 * 65536.0f));
            *(u32*)(((u32)frame + 4)) = (u32)&D_01d9eac0;
            *(u32*)(((u32)frame + 0xc)) = 0;
            *(u32*)(((u32)frame + 0x10)) = (s32)((f0 * 65536.0f));
            *(u8*)(((u32)frame + 0x18)) = *(u8*)((s2 + 8));
            *(u8*)(((u32)frame + 0x19)) = *(u8*)((s2 + 9));
            *(u8*)(((u32)frame + 0x1a)) = *(u8*)((s2 + 0xa));
            *(u32*)(((u32)frame + 0x20)) = (t7_16 + 0x50);
            *(u32*)(((u32)frame + 0x24)) = (u32)&D_01d9e9c0;
            *(u32*)(((u32)frame + 0x28)) = (u32)&D_01d9e980;
            *(u32*)(((u32)frame + 0x2c)) = (t7_16 + 0x10);
            *(u32*)(((u32)frame + 0x34)) = *(u32*)(&D_01d9eaa4);
            *(u32*)(((u32)frame + 0x3c)) = *(u32*)((t7_16 + 0x94));
            *(u32*)(((u32)frame + 0x40)) = 0;
            *(u8*)(((u32)frame + 0x4c)) = 0;
            *(u8*)(((u32)frame + 0x4d)) = *(u8*)((a1 + 0x25));
            *(u32*)(&D_01d9eaa4) = func_0020f1e0(s3_5, (u32)frame, *(u32*)((s7 + 0x20)), t7_16 + 0x10, *(u8*)((a1 + 0x25)), t7_16 + 0x50, *(u32*)(&D_01d9eaa4), *(u8*)((s2 + 0xa)));
            f0_17 = func_0020f1e0(s3_5, (u32)frame, *(u32*)((s7 + 0x20)), t7_16 + 0x10, *(u8*)((a1 + 0x25)), t7_16 + 0x50, *(u32*)(&D_01d9eaa4), *(u8*)((s2 + 0xa)));
        }
        f0_18 = f0_17;
    }
    return f0_18;
}
