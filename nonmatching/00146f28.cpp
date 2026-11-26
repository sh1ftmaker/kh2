// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00146ed8(u32, u32, u8) asm("func_00146ed8");
extern "C" void func_00146e28(u32, u32) asm("func_00146e28");
extern "C" void func_00146f28(u32, u32, u32) asm("_Z16wtarget_00146f28jjjj");
extern "C" void func_00147140(u32, u32) asm("func_00147140");

// 0x00146f28 wtarget_00146f28(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00146f28(u32 a0, u32 a1, u8 a2) asm("_Z16wtarget_00146f28jjjj");
void lift_00146f28(u32 a0, u32 a1, u8 a2) {
    u32 s0;
    u32 a1_0;
    if (((s32)((*(u32*)((a1 + 0xf8)) & 4)) != 0) || ((*(u32*)((a1 + 0xf8)) & 8) != 0)) {
        if (((s32)((*(u32*)((a1 + 0xf8)) & 0x1000)) == 0)) {
            if (((s32)(func_00146ed8(a0, a1, a2)) != 0)) {
                if ((a2 != 0)) {
                    *(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) = (*(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) | 2);
                } else {
                    *(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) = (*(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) & 0xfffffffd);
                }
                *(u16*)((a1 + 0x11a)) = 0;
                *(u16*)((a1 + 0x118)) = 0;
            } else {
                if (((s32)(a2) != 0)) {
                    *(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) = (*(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) | 2);
                    func_00147140(a0, a1);
                } else {
                    *(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) = (*(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) & 0xfffffffd);
                    *(u16*)((a1 + 0x11a)) = 0;
                    *(u16*)((a1 + 0x118)) = 0;
                }
            }
        } else {
            if ((a2 != 0)) {
                *(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) = (*(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) | 2);
            } else {
                *(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) = (*(u32*)(((a0 + (*(u32*)((a0 + 0x5360)) << 3)) + 0x4364)) & 0xfffffffd);
            }
            *(u16*)((a1 + 0x11a)) = 0;
            *(u16*)((a1 + 0x118)) = 0;
        }
        func_00146e28(a0, a1);
    }
    s0 = 0;
    while ((a1_0 = (s0 == 0) ? *(u32*)((a1 + 0xf0)) : *(u32*)((s0 + 0xec))), (s0 = a1_0), ((s32)(a1_0) != 0)) {
        func_00146f28(a0, a1_0, 0);
    }
    return;
}
