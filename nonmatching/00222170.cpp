// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00221348(u32) asm("func_00221348");
extern "C" void func_00221ed0(u32) asm("func_00221ed0");
extern "C" void func_002226b8(u32, u32) asm("func_002226b8");
extern "C" void func_002f4000(u32) asm("func_002f4000");

// 0x00222170 func_00222170
void func_00222170(u32 a0) asm("_Z13KeThCp_UpdateP15_KeaThCp_Update");
void func_00222170(u32 a0) {
    u8 frame[80];
    u32 s4;
    u32 s0;
    u32 s0_0;
    u32 t6;
    u32 s0_1;
    if (((s32)((*(u8*)((*(u32*)(a0) + 4)) & 2)) != 0)) {
        *(u8*)((*(u32*)(a0) + 4)) = (*(u8*)((*(u32*)(a0) + 4)) & 0xfd);
        s4 = 0x20;
    } else {
        s4 = 0;
    }
    s0 = *(u32*)(a0);
    func_002f4000((u32)frame);
    *(u32*)(((u32)frame + 0x44)) = *(u32*)((a0 + 4));
    *(u32*)(((u32)frame + 0x48)) = *(u32*)((a0 + 0xc));
    *(u32*)(((u32)frame + 0x4c)) = *(u32*)((a0 + 8));
    if (((s32)(*(u32*)(s0)) != 0)) {
        s0_0 = *(u32*)(s0);
        t6 = *(u16*)((*(u32*)(s0) + 0x3e));
        do {
            if (((s32)((*(u16*)((s0_0 + 0x3e)) & 0x200)) != 0)) {
                func_002226b8((s0_0 + (*(u16*)((s0_0 + 0x34)) * 0x30)) + 0x40, *(u32*)((a0 + 0x10)));
                func_002226b8((s0_0 + (*(u16*)((s0_0 + 0x34)) * 0x30)) + 0x60, *(u32*)((a0 + 0x14)));
            }
            if (((s32)((*(u16*)((s0_0 + 0x3e)) & 0x100)) != 0)) {
                *(u16*)((s0_0 + 0x3e)) = (s4 | *(u16*)((s0_0 + 0x3e)));
            }
            *(u32*)(((u32)frame + 0x40)) = s0_0;
            func_00221348((u32)frame);
            if (((s32)((*(u16*)((s0_0 + 0x3e)) & 0x10)) != 0)) {
                if (((s32)(*(u32*)(s0_0)) != 0)) {
                    *(u32*)((*(u32*)(s0_0) + 4)) = *(u32*)((s0_0 + 4));
                }
                *(u32*)(*(u32*)((s0_0 + 4))) = *(u32*)(s0_0);
                s0_1 = *(u32*)(s0_0);
                func_00221ed0(s0_0);
                *(u32*)(s0_0) = *(u32*)((*(u32*)((a0 + 0xc)) + 4));
                *(u32*)((*(u32*)((a0 + 0xc)) + 4)) = s0_0;
                s0_0 = s0_1;
            } else {
                s0_0 = *(u32*)(s0_0);
            }
            t6 = *(u32*)((*(u32*)((a0 + 0xc)) + 4));
        } while ((s0_0 != 0));
    }
    return;
}
