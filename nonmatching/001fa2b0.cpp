// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00352be4 asm("D_00352be4");
extern "C" u32 D_00352be8 asm("D_00352be8");
extern "C" u32 D_00352bec asm("D_00352bec");
extern "C" u32 D_00352bf0 asm("D_00352bf0");
extern "C" u32 D_00352bf8 asm("D_00352bf8");
extern "C" u32 D_00352bfc asm("D_00352bfc");
extern "C" u32 D_00352c18 asm("D_00352c18");
extern "C" u32 D_00354be0 asm("D_00354be0");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 D_01d9eaa8 asm("D_01d9eaa8");
extern "C" f32 func_0020e7a8(u32, u32, u32, u32) asm("func_0020e7a8");
extern "C" f32 func_0020e858(u32, u32, u32, u32) asm("func_0020e858");
extern "C" f32 func_002231b8(u32) asm("func_002231b8");
extern "C" void func_00222f88(u32) asm("func_00222f88");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");

// 0x001fa2b0 func_001fa2b0
// minilink-rodata 0x00370250   (float literals live here in the original)
f32 func_001fa2b0(u32 a0, u32 a1, u32 a2) asm("func_001fa2b0");
f32 func_001fa2b0(u32 a0, u32 a1, u32 a2) {
    u8 frame[96];
    u32 t2;
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t6;
    f32 f0;
    f32 f0_0;
    if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
        if (((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00)) == 0)) {
            *(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 4)) = (*(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 4)) + *(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8)));
            *(f32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)) = (*(f32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)) + (*(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 4)) + *(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8))));
            if ((*(u32*)((a0 + 0xc)) == *(u32*)(a1))) {
                *(f32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)) = ((*(f32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)) + (*(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 4)) + *(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8)))) + *(f32*)((a1 + 4)));
                *(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 4)) = ((*(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 4)) + *(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8))) + *(f32*)((a1 + 8)));
                *(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8)) = (*(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8)) + *(f32*)((a1 + 0xc)));
            }
        }
    }
    *(f32*)(((u32)frame + 0x10)) = (f32)((s32)(*(u8*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0) + 8))));
    *(f32*)(((u32)frame + 0x14)) = (f32)((s32)(*(u8*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0) + 9))));
    *(f32*)(((u32)frame + 0x18)) = (f32)((s32)(*(u8*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0) + 0xa))));
    *(f32*)(((u32)frame + 0x1c)) = (f32)((s32)(*(u8*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0) + 0xb))));
    if (((s32)((*(u8*)((a1 + 0x19)) & 2)) != 0)) {
        *(f32*)((u32)frame) = *(f32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 0xc))) + 0xa0));
        *(f32*)(((u32)frame + 4)) = *(f32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 0xc))) + 0xa4));
        *(f32*)(((u32)frame + 8)) = 512.0f;
        *(f32*)(((u32)frame + 0xc)) = 1.0f;
    } else {
        *(Q16*)((u32)frame) = *(Q16*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0) + 0x30));
    }
    *(u32*)(((u32)frame + 0x28)) = (u32)&D_01d9e8c0;
    *(u32*)(((u32)frame + 0x20)) = (u32)&D_01d9e8c0;
    *(u32*)(((u32)frame + 0x24)) = (*(u32*)(&D_01d9eaa4) + 0x10);
    *(f32*)(((u32)frame + 0x58)) = (*(f32*)((a1 + 0x10)) * *(f32*)(&D_00354be0));
    *(f32*)(((u32)frame + 0x5c)) = (*(f32*)((a1 + 0x14)) * *(f32*)(((u32)&D_00354be0 + 4)));
    if (((s32)(*(u8*)((a1 + 0x18))) == 0)) {
        t2 = (((s32)(*(u32*)(&D_00352bec)) < (s32)(0)) ? (*(u32*)(&D_00352bec) + 0x3f) : *(u32*)(&D_00352bec));
        t3 = *(u32*)(&D_00352bf8);
        t4 = *(u32*)(&D_00352bec);
        t5 = (*(u32*)(&D_00352bf0) + (*(u32*)(&D_00352bf0) >> 0x1f));
        t6 = (*(u32*)(&D_00352bec) >> 0x1f);
    } else {
        t2 = (((s32)(*(u32*)(&D_00352be4)) < (s32)(0)) ? (*(u32*)(&D_00352be4) + 0x3f) : *(u32*)(&D_00352be4));
        t3 = *(u32*)(&D_00352bfc);
        t4 = *(u32*)(&D_00352be4);
        t5 = (*(u32*)(&D_00352be8) + (*(u32*)(&D_00352be8) >> 0x1f));
        t6 = (*(u32*)(&D_00352be4) >> 0x1f);
    }
    *(u64*)(((u32)frame + 0x40)) = (((t3 << 5) | (((s32)(t2) >> 6) << 0xe)) | (0x55 << 0x1b));
    *(u64*)(((u32)frame + 0x50)) = (((0x800 - ((s32)((t4 + t6)) >> 1)) << 4) | ((u64)((0x800 - ((s32)(t5) >> 1))) << 0x24));
    *(f32*)(((u32)frame + 0x30)) = 0.0f;
    *(f32*)(((u32)frame + 0x34)) = -(*(f32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)));
    *(f32*)(((u32)frame + 0x38)) = 0.0f;
    *(f32*)(((u32)frame + 0x3c)) = 0.0f;
    *(u64*)(((u32)frame + 0x48)) = *(u64*)(&D_00352c18);
    func_002f3cd8((u32)frame + 0x30, (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0, (u32)frame + 0x30);
    *(u32*)(((u32)frame + 0x3c)) = *(u8*)((a1 + 0x19));
    func_00222f88((u32)frame);
    if ((func_002231b8((u32)frame) != 0)) {
        if (((s32)((*(u8*)((a1 + 0x19)) & 2)) != 0)) {
            func_0020e7a8(*(u32*)(&D_01d9eaa4), (*(u32*)(((u32)frame + 0x24)) - *(u32*)(&D_01d9eaa4)) >> 4, 4, 0);
            f0 = func_0020e7a8(*(u32*)(&D_01d9eaa4), (*(u32*)(((u32)frame + 0x24)) - *(u32*)(&D_01d9eaa4)) >> 4, 4, 0);
        } else {
            func_0020e858(*(u32*)(&D_01d9eaa4), (*(u32*)(((u32)frame + 0x24)) - *(u32*)(&D_01d9eaa4)) >> 4, (s32)(*(u32*)(((u32)frame + 0x2c))) / 0x3000, 0);
            f0 = func_0020e858(*(u32*)(&D_01d9eaa4), (*(u32*)(((u32)frame + 0x24)) - *(u32*)(&D_01d9eaa4)) >> 4, (s32)(*(u32*)(((u32)frame + 0x2c))) / 0x3000, 0);
        }
        *(u32*)(&D_01d9eaa4) = *(u32*)(((u32)frame + 0x24));
        *(u32*)(&D_01d9eaa8) = (*(u32*)(&D_01d9eaa8) + (*(u32*)(((u32)frame + 0x24)) - *(u32*)(&D_01d9eaa4)));
        f0_0 = f0;
    } else {
        f0_0 = func_002231b8((u32)frame);
    }
    return f0_0;
}
