// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352be4 asm("D_00352be4");
extern "C" u32 D_00352be8 asm("D_00352be8");
extern "C" u32 D_00352bec asm("D_00352bec");
extern "C" u32 D_00352bf0 asm("D_00352bf0");
extern "C" u32 D_00352bf8 asm("D_00352bf8");
extern "C" u32 D_00352bfc asm("D_00352bfc");
extern "C" u32 D_00352c18 asm("D_00352c18");
extern "C" u32 D_00354be0 asm("D_00354be0");
extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" u32 D_01d9e8f8 asm("D_01d9e8f8");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" f32 func_003144b0(u32) asm("func_003144b0");
extern "C" u32 func_0020eaf8(u32) asm("func_0020eaf8");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_00313ed8(u32, u32) asm("func_00313ed8");
extern "C" u32 func_00313f40(u32, u32) asm("func_00313f40");
extern "C" u32 func_00314190(u32, u32) asm("func_00314190");
extern "C" void func_0020d528(u32, u32) asm("func_0020d528");
extern "C" void func_0020ebd8(u32) asm("func_0020ebd8");
extern "C" void func_002f3f40(u32, u32, u32, f32) asm("func_002f3f40");

// 0x0020d1d0 func_0020d1d0
// minilink-rodata 0x00370700   (float literals live here in the original)
void func_0020d1d0(u32 a0, u32 a1, u32 a2) asm("func_0020d1d0");
void func_0020d1d0(u32 a0, u32 a1, u32 a2) {
    u8 frame[96];
    u32 t5;
    u32 t7;
    u32 t4;
    f32 f3;
    u32 t6;
    u32 t7_0;
    f32 f0;
    f32 f1;
    f32 f0_1;
    u32 t6_2;
    u32 t7_3;
    u32 t7_4;
    u32 s3;
    f32 f20;
    u32 s2;
    u32 s0;
    u32 t2;
    u32 t1;
    f32 f0_5;
    f32 f0_6;
    u32 t6_7;
    u32 t4_8;
    u32 t5_9;
    u32 t4_10;
    u32 t5_11;
    u32 t3;
    u32 t4_12;
    u32 t5_13;
    t5 = *(u32*)((a2 + 0xc));
    t7 = *(u32*)((t5 + 8));
    t4 = *(u32*)(&D_01d9ea9c);
    if (((s32)(t4) == 0)) {
        f3 = *(f32*)((((a0 + *(u32*)(t5)) + 0xa0) + 8));
        *(f32*)((((a0 + *(u32*)(t5)) + 0xa0) + 4)) = (*(f32*)((((a0 + *(u32*)(t5)) + 0xa0) + 4)) + f3);
        *(f32*)(((a0 + *(u32*)(t5)) + 0xa0)) = (*(f32*)(((a0 + *(u32*)(t5)) + 0xa0)) + (*(f32*)((((a0 + *(u32*)(t5)) + 0xa0) + 4)) + f3));
        t6 = *(u32*)((a0 + 0xc));
        t7_0 = *(u32*)(a1);
        if ((t6 == t7_0)) {
            f0 = *(f32*)((a1 + 8));
            *(f32*)(((a0 + *(u32*)(t5)) + 0xa0)) = ((*(f32*)(((a0 + *(u32*)(t5)) + 0xa0)) + (*(f32*)((((a0 + *(u32*)(t5)) + 0xa0) + 4)) + f3)) + f0);
            f1 = *(f32*)((a1 + 0xc));
            *(f32*)((((a0 + *(u32*)(t5)) + 0xa0) + 4)) = ((*(f32*)((((a0 + *(u32*)(t5)) + 0xa0) + 4)) + f3) + f1);
            f0_1 = *(f32*)((a1 + 0x10));
            *(f32*)((((a0 + *(u32*)(t5)) + 0xa0) + 8)) = (f3 + f0_1);
        }
    }
    t6_2 = *(u32*)((a1 + 4));
    if ((t6_2 != 0xffff)) {
        t7_3 = *(u32*)((*(u32*)((a2 + 0xc)) + 4));
        t7_4 = *(u8*)((((a0 + t7_3) + 0xa0) + 0xb));
        if (((s32)(t7_4) != 0)) {
            *(f32*)((u32)frame) = (f32)((s32)(*(u8*)((((a0 + t7_3) + 0xa0) + 8))));
            *(f32*)(((u32)frame + 4)) = (f32)((s32)(*(u8*)((((a0 + t7_3) + 0xa0) + 9))));
            *(f32*)(((u32)frame + 8)) = (f32)((s32)(*(u8*)((((a0 + t7_3) + 0xa0) + 0xa))));
            *(f32*)(((u32)frame + 0xc)) = (f32)((s32)(t7_4));
            s3 = ((a0 + *(u32*)(t5)) + 0xa0);
            f20 = *(f32*)(((u32)&D_01d9e8c0 + 0x38));
            func_002f3f40((u32)frame, (u32)frame, (a0 + t7_3) + 0xa0, 0.0078125f);
            s2 = func_00313b80(f20);
            s0 = func_00313f40(func_00313b80(*(f32*)((a1 + 0x18))), (u64)(0x416312d) << 0x24);
            func_003144b0(func_00313ed8(s2, func_00314190(s0, func_00313b80(*(f32*)((((a0 + t7) + 0xa0) + 0x38))))));
            *(f32*)(((u32)&D_01d9e8c0 + 0x38)) = func_003144b0(func_00313ed8(s2, func_00314190(s0, func_00313b80(*(f32*)((((a0 + t7) + 0xa0) + 0x38))))));
            *(u32*)(((u32)frame + 0x20)) = (u32)&D_01d9e8c0;
            *(u32*)(((u32)frame + 0x24)) = ((a0 + t7) + 0xa0);
            *(u32*)(((u32)frame + 0x40)) = (u32)frame;
            *(u32*)(((u32)frame + 0x44)) = (u32)frame;
            *(u32*)(((u32)frame + 0x28)) = func_0020eaf8(0x1c0);
            t2 = *(u32*)((a1 + 4));
            t1 = *(u8*)((a1 + 0x16));
            *(u32*)(((u32)frame + 0x2c)) = *(u32*)((((t2 * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x1c));
            if (((s32)((t1 & 0xff)) != 0)) {
                f0_5 = *(f32*)(s3);
                f0_6 = (f0_5 * *(f32*)(&D_00354be0));
            } else {
                f0_6 = *(f32*)(s3);
            }
            *(f32*)(((u32)frame + 0x30)) = f0_6;
            *(u32*)(((u32)frame + 0x34)) = *(u8*)((a1 + 0x15));
            *(u32*)(((u32)frame + 0x48)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x90));
            *(u32*)(((u32)frame + 0x4c)) = *(u32*)((((t2 * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x18));
            if (((s32)((*(u32*)(*(u32*)(((u32)frame + 0x2c))) & 2)) != 0)) {
                *(u32*)(((u32)frame + 0x50)) = 0;
            } else {
                *(u32*)(((u32)frame + 0x50)) = 1;
            }
            *(u32*)(((u32)frame + 0x54)) = (t1 & 0xff);
            t6_7 = *(u8*)((a1 + 0x14));
            if (((s32)(t6_7) == 0)) {
                t4_8 = *(u32*)(&D_00352bec);
                t5_9 = *(u32*)(&D_00352bf0);
                t2 = (((s32)(t4_8) < (s32)(0)) ? (t4_8 + 0x3f) : t4_8);
                t3 = *(u32*)(&D_00352bf8);
                t4_12 = t4_8;
                t5_13 = (t5_9 + (t5_9 >> 0x1f));
                t6_7 = (t4_8 >> 0x1f);
            } else {
                t4_10 = *(u32*)(&D_00352be4);
                t5_11 = *(u32*)(&D_00352be8);
                t2 = (((s32)(t4_10) < (s32)(0)) ? (t4_10 + 0x3f) : t4_10);
                t3 = *(u32*)(&D_00352bfc);
                t4_12 = t4_10;
                t5_13 = (t5_11 + (t5_11 >> 0x1f));
                t6_7 = (t4_10 >> 0x1f);
            }
            *(u64*)(((u32)frame + 0x10)) = (((0x800 - ((s32)((t4_12 + t6_7)) >> 1)) << 4) | ((u64)((0x800 - ((s32)(t5_13) >> 1))) << 0x24));
            *(u64*)(((u32)frame + 0x18)) = (((t3 << 5) | (((s32)(t2) >> 6) << 0xe)) | (0x55 << 0x1b));
            *(u64*)(((u32)frame + 0x38)) = *(u64*)(&D_00352c18);
            *(u8*)(((u32)frame + 0x58)) = *(u8*)((a1 + 0x17));
            func_0020d528((u32)frame + 0x10, *(u8*)((a1 + 0x1c)));
            *(f32*)(&D_01d9e8f8) = f20;
            func_0020ebd8(0x1c0);
        }
    }
    return;
}
