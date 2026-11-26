// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00147f08(u32, u32) asm("func_00147f08");
extern "C" void func_00148470(u32, u32) asm("_ZN2dk11OctDrawFile9drawModelEPNS_11ObjDrawListE");
extern "C" void func_00148a68(u32, u32) asm("func_00148a68");

// 0x00148470 func_00148470
void func_00148470(u32 a0, u32 a1) asm("_ZN2dk11OctDrawFile9drawModelEPNS_11ObjDrawListE");
void func_00148470(u32 a0, u32 a1) {
    u32 s0;
    u32 a1_0;
    if (((s32)(*(u8*)((a1 + 0xeb))) != 0)) {
        if (((s32)((*(u32*)((a1 + 0xf8)) & 4)) != 0)) {
            if (((s32)((*(u32*)(((a0 + (*(u16*)((a1 + 0x11c)) << 3)) + 0x4364)) & 1)) != 0)) {
                if (((s32)(*(u8*)((a1 + 0x11f))) != 0)) {
                    func_00148a68(a0, a1);
                } else {
                    func_00147f08(a0, a1);
                }
            }
        }
    }
    s0 = 0;
    while ((a1_0 = (s0 == 0) ? *(u32*)((a1 + 0xf0)) : *(u32*)((s0 + 0xec))), (s0 = a1_0), ((s32)(a1_0) != 0)) {
        func_00148470(a0, a1_0);
    }
    return;
}
