// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00340ed0 asm("D_00340ed0");
extern "C" u32 D_00340ed4 asm("D_00340ed4");
extern "C" u32 D_00340ed8 asm("D_00340ed8");
extern "C" u32 func_00109ea8(u32, u32, u32) asm("func_00109ea8");
extern "C" u32 func_00109f58(u32, u32, u32) asm("func_00109f58");
extern "C" u32 func_0011c8f8(u32, u32, u32, u32, u32, u32) asm("func_0011c8f8");
extern "C" void func_00108c00(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00108c00");
extern "C" void func_00134490() asm("func_00134490");

// 0x00109fe8 func_00109fe8
void func_00109fe8(u32 a0) asm("func_00109fe8");
void func_00109fe8(u32 a0) {
    u32 t5;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    if (((s32)(a0) != 0)) {
        t5 = *(u32*)(a0);
        do {
            if ((*(u32*)(a0) != 0)) {
                if (((*(u32*)((a0 + 0x18)) & 2) == 0)) {
                    *(u8*)((a0 + 0x20)) = *(u8*)(&D_00340ed0);
                    *(u8*)((a0 + 0x21)) = *(u8*)(((u32)&D_00340ed0 + 1));
                    *(u8*)((a0 + 0x22)) = *(u8*)(((u32)&D_00340ed0 + 2));
                }
                if (((s32)(((s32)((*(u8*)((a0 + 0x1f)) << 0x18)) >> 0x18)) < 0)) {
                    s0 = func_00109f58(*(u32*)(&D_00340ed4), *(u32*)((*(u32*)((*(u32*)((*(u32*)(a0) + 0x14)) + 4)) + 4)), *(u8*)((a0 + 0x1f)) & 0xff);
                    func_00108c00((u32)&D_00340ed8, 0x3f, *(u64*)((a0 + 0x28)), *(u64*)((a0 + 0x30)) & ~((0 | (u64)(1))), func_00109ea8(*(u32*)(&D_00340ed4), *(u32*)((*(u32*)((*(u32*)((*(u32*)(a0) + 0x14)) + 4)) + 4)), *(u8*)((a0 + 0x1f))), s0, (*(u8*)((a0 + 0x20)) | (*(u8*)((a0 + 0x21)) << 8)) | (*(u8*)((a0 + 0x22)) << 0x10), ((*(u8*)((a0 + 0x1c)) | ((u64)(0x7f) << 0x37)) | ((*(u8*)((a0 + 0x1e)) << 0x10) | (*(u8*)((a0 + 0x1d)) << 8))) | (*(u8*)((a0 + 0x1f)) << 0x18));
                    if (((s32)(*(u32*)((a0 + 0x50))) != 0)) {
                        s0_0 = *(u32*)(a0);
                        ((void(*)(u32, u32))(*(u32*)((a0 + 0x50))))(a0, 0);
                    }
                    s0_1 = (func_0011c8f8(*(u32*)(a0), a0 + 0x18, 0, *(u32*)((a0 + 4)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc))) ? 0 : s0_0);
                    if (((s32)(*(u32*)((a0 + 0x54))) != 0)) {
                        ((void(*)(u32, u32))(*(u32*)((a0 + 0x54))))(a0, 0);
                    }
                    *(u32*)(a0) = s0_1;
                }
            } else {
                if (((s32)(*(u32*)((a0 + 0x50))) != 0)) {
                    ((void(*)(u32, u32))(*(u32*)((a0 + 0x50))))(a0, 0);
                }
                if (((s32)(*(u32*)((a0 + 0x54))) != 0)) {
                    ((void(*)(u32, u32))(*(u32*)((a0 + 0x54))))(a0, 0);
                }
            }
            func_00134490();
            a0 = *(u32*)((a0 + 0x10));
        } while ((a0 != 0));
    }
    return;
}
