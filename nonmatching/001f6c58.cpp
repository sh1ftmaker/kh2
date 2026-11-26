// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 func_001e7a98(u32, u32) asm("func_001e7a98");
extern "C" void func_002226b8(u32, u32) asm("func_002226b8");
extern "C" void func_00222750(u32, u32, u32) asm("func_00222750");
extern "C" void func_002f3f10(u32, u32, u32) asm("func_002f3f10");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");
extern "C" void func_002f3f88(u32, u32) asm("func_002f3f88");

// 0x001f6c58 func_001f6c58
// minilink-rodata 0x003701f0   (float literals live here in the original)
void func_001f6c58(u32 a0, u32 a1, u32 a2) asm("func_001f6c58");
void func_001f6c58(u32 a0, u32 a1, u32 a2) {
    u8 frame[48];
    u32 v0;
    u32 v0_0;
    u32 s3;
    u32 s2;
    u32 a0_1;
    f32 f20;
    f32 f21;
    u32 v0_2;
    u32 v0_3;
    u32 s0;
    if (((s32)((*(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 8)) << 4))) != 0)) {
        v0 = func_001e7a98(*(u32*)(&D_01d9e6e0), *(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 8)) << 4));
        *(u32*)((v0 + 4)) = a0;
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    s3 = ((v0_0 + *(u32*)((a1 + 0xc))) + 0xa0);
    func_002226b8((v0_0 + *(u32*)((a1 + 0xc))) + 0xa0, (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0);
    if (((s32)(*(u32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0))) == 0)) {
        *(f32*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8)) = (1.0f / (f32)((s32)((*(u8*)((a1 + 4)) + 1))));
        *(u32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)) = s3;
    } else {
        s2 = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
        func_002f3f88((u32)frame, *(u32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)));
        func_002f3f10((u32)frame + 0x10, s3, (u32)frame);
        if ((0.0f < (f32)((s32)(*(u8*)((a1 + 4)))))) {
            a0_1 = *(u32*)(&D_01d9e6e0);
            f20 = (f32)((s32)(*(u8*)((a1 + 4))));
            do {
                f21 = *(f32*)((s2 + 8));
                if (((s32)((*(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 8)) << 4))) != 0)) {
                    v0_2 = func_001e7a98(*(u32*)(&D_01d9e6e0), *(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 8)) << 4));
                    *(u32*)((v0_2 + 4)) = a0;
                    v0_3 = v0_2;
                } else {
                    v0_3 = 0;
                }
                s0 = ((v0_3 + *(u32*)((a1 + 0xc))) + 0xa0);
                func_002f3f40((u32)frame + 0x20, (u32)frame + 0x10, f21 * f20);
                func_00222750(s0, (u32)frame, (u32)frame + 0x20);
                f20 = (f20 - 1.0f);
            } while ((0.0f < f20));
        }
        *(u32*)(s2) = s3;
    }
    return;
}
