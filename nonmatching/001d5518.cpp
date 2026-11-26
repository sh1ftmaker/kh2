// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350438 asm("D_00350438");
extern "C" u32 func_001050d8(u32, u32, u8) asm("func_001050d8");
extern "C" u32 func_0016b740(u32) asm("func_0016b740");
extern "C" u32 func_00185de0() asm("func_00185de0");
extern "C" u32 func_00196f00(u32) asm("func_00196f00");
extern "C" void func_00196ca8(u32, u32, u32) asm("func_00196ca8");
extern "C" void func_00196e98(u32, u32) asm("func_00196e98");
extern "C" void func_001d30f8(u32, u32, u32) asm("func_001d30f8");

// 0x001d5518 func_001d5518
void func_001d5518(u32 a0, u32 a1, u8 a2) asm("_ZN2YS14MISSION_CAMERA5startEPN3ryj3PAXEb");
void func_001d5518(u32 a0, u32 a1, u8 a2) {
    u32 v0;
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        v0 = func_001050d8(0xb0, a1, a2);
        func_00196ca8(v0, *(u32*)(a0), *(u32*)((a0 + 4)));
        *(u32*)((v0 + 8)) = a1;
        if (((s32)(a2) != 0)) {
            *(u32*)(v0) = (*(u32*)(v0) | 8);
        }
        *(u32*)((v0 + 0x94)) = *(u32*)((a0 + 0xc));
        *(u32*)((v0 + 0x98)) = *(u32*)((a0 + 0x10));
        if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
            *(u32*)((v0 + 0x9c)) = 2;
            *(u32*)((v0 + 0xa0)) = *(u32*)((a0 + 0x18));
        } else {
            if ((*(u32*)((a0 + 0x14)) != 0)) {
                *(u32*)((v0 + 0x9c)) = *(u32*)((a0 + 0x14));
            }
        }
        if ((*(u32*)((a0 + 8)) != 0x386)) {
            if (((s32)(((u32)(*(u32*)((a0 + 8))) < (u32)(0x387))) != 0)) {
                if (((s32)(*(u32*)((a0 + 8))) != 0)) {
                    func_00196e98(v0, func_0016b740(*(u32*)((a0 + 8))));
                }
            } else {
                if ((*(u32*)((a0 + 8)) != 0x68f)) {
                    func_00196e98(v0, *(u32*)(&D_00350438));
                } else {
                    func_001d30f8(v0 + 0x40, 4, 0);
                }
            }
        } else {
            func_00196e98(v0, func_00185de0());
        }
        func_00196f00(v0);
        return;
    } else {
        return;
    }
}
