// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00179648(u32, u32) asm("func_00179648");
extern "C" u32 func_001991a8(u32, u32) asm("func_001991a8");
extern "C" u32 func_001a6e88(u32, u32, u32) asm("func_001a6e88");
extern "C" u32 func_001a70a0(u32, u32, u32) asm("func_001a70a0");
extern "C" u32 func_001a8778(u32, u32) asm("func_001a8778");
extern "C" void func_00178bf0(u32, u32) asm("func_00178bf0");
extern "C" void func_00178cf8(u32, u32) asm("func_00178cf8");

// 0x00178ae8 func_00178ae8
void func_00178ae8(u32 a0, u32 a1) asm("_ZN2YS6PLAYER24_OVR_exec_command_playerEPKNS_12COMMAND_ELEME");
void func_00178ae8(u32 a0, u32 a1) {
    if ((*(u16*)((a1 + 2)) != 0x20)) {
        if (((s32)(((s32)(*(u16*)((a1 + 2))) < (s32)(0x21))) != 0)) {
            if ((*(u16*)((a1 + 2)) != 0x1e)) {
                if ((*(u16*)((a1 + 2)) != 0x1f)) {
                    func_00178bf0(a0, a1);
                    return;
                } else {
                    func_00178cf8(a0, a1);
                    func_001a70a0(*(u32*)((*(u32*)((a0 + 0xb44)) + 0xc)) + 0x500, a0, *(u32*)((a0 + 0xb44)) + 0xc);
                    return;
                }
            } else {
                func_00178cf8(a0, a1);
                func_001a6e88(*(u32*)((*(u32*)((a0 + 0xb44)) + 0xc)) + 0x500, a0, *(u32*)((a0 + 0xb44)) + 0xc);
                return;
            }
        } else {
            if ((*(u16*)((a1 + 2)) != 0x37)) {
                if ((*(u16*)((a1 + 2)) == 0x7f)) {
                    func_001991a8(*(u16*)((*(u32*)((a0 + 0xb44)) + 6)), 0);
                    return;
                } else {
                    func_00178bf0(a0, a1);
                    return;
                }
            } else {
                func_00179648(a0, *(u32*)((*(u32*)((a0 + 0xb44)) + 0xc)));
                return;
            }
        }
    } else {
        func_001a8778(*(u32*)((*(u32*)((a0 + 0xb44)) + 0xc)), a0);
        return;
    }
}
