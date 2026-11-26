// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 D_01d48db0 asm("D_01d48db0");
extern "C" u32 func_0019baa8(u32) asm("func_0019baa8");
extern "C" u32 func_0019c470(u32) asm("func_0019c470");
extern "C" u32 func_0019c6f0(u32) asm("func_0019c6f0");
extern "C" void func_0011ea40(u32, f32) asm("func_0011ea40");
extern "C" void func_0017f620(u32, f32) asm("func_0017f620");
extern "C" void func_0017f938(u32) asm("func_0017f938");
extern "C" void func_00183088(u32) asm("func_00183088");
extern "C" void func_00194010(u32) asm("func_00194010");
extern "C" void func_001d7a88(u32) asm("func_001d7a88");

// 0x001b9420 func_001b9420
void func_001b9420(u32 a0) asm("_ZN2YS3OBJ8sys_execEv");
void func_001b9420(u32 a0) {
    f32 f20;
    f20 = *(f32*)(&D_00349e10);
    if (((s32)((*(u32*)((a0 + 0x108)) & 0x10000000)) != 0)) {
        if (((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x24))))(a0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x28))))(a0);
        }
    }
    if (((s32)(func_0019baa8(a0)) != 0)) {
        *(u32*)((a0 + 0x7f8)) = (*(u32*)((a0 + 0x7f8)) | 0x100);
    } else {
        if (((s32)((*(u32*)((a0 + 0x7f8)) & 0x80)) == 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 8))))(a0);
        }
        func_001d7a88(a0 + 0x518);
        if (((s32)(func_0019c6f0(a0)) == 0)) {
            if (((s32)((*(u32*)(&D_0034f240) & 0x20)) == 0)) {
                if ((func_0019c470(a0) != 0)) {
                    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
                } else {
                    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0xc))))(a0);
                    if (((s32)((*(u32*)((a0 + 0x10c)) & 0x400000)) == 0)) {
                        func_0017f620(a0 + 0x140, f20);
                        if (((s32)((*(u32*)((a0 + 0x7f8)) & 2)) != 0)) {
                            func_0011ea40(*(u32*)((a0 + 0x670)), f20);
                        }
                    }
                    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x10))))(a0);
                    if (((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x40))))(a0)) != 0)) {
                        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
                    }
                    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x18))))(a0);
                    func_0017f938(a0 + 0x140);
                    func_00183088(a0);
                }
                func_00194010(a0);
                if ((*(f32*)((a0 + 0x82c)) == 0.0f)) {
                    if (((*(u32*)((a0 + 0x7f8)) & 0x10) != 0) || (*(f32*)((a0 + 0x8d0)) == 0.0f)) {
                        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x20))))(a0);
                    }
                } else {
                    if ((*(f32*)((a0 + 0x8d0)) == 0.0f)) {
                        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x20))))(a0);
                    }
                }
            } else {
                if (((s32)(func_0019c470(a0)) == 0)) {
                    func_0017f938(a0 + 0x140);
                }
            }
        } else {
            if (((s32)(func_0019c470(a0)) == 0)) {
                func_0017f938(a0 + 0x140);
            }
        }
        if ((func_0019baa8(a0) == 0)) {
            if ((*(u32*)(((u32)&D_01d48db0 + 4)) == 0)) {
                *(u32*)(((u32)&D_01d48db0 + 4)) = a0;
                *(u32*)(&D_01d48db0) = a0;
                *(u32*)((a0 + 0x8b8)) = 0;
            } else {
                *(u32*)((*(u32*)(((u32)&D_01d48db0 + 4)) + 0x8b8)) = a0;
                *(u32*)((a0 + 0x8b8)) = 0;
                *(u32*)(((u32)&D_01d48db0 + 4)) = a0;
            }
        }
    }
    *(u32*)((a0 + 0x7f8)) = ((*(u32*)((a0 + 0x7f8)) | 0x800) & 0xffffdfff);
    return;
}
