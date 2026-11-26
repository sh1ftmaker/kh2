// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 D_00352400 asm("D_00352400");
extern "C" u32 D_00352410 asm("D_00352410");
extern "C" u32 func_00181978() asm("func_00181978");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001c1130(u32) asm("func_001c1130");
extern "C" u32 func_001c11a8(u32) asm("func_001c11a8");
extern "C" u32 func_001d6d88() asm("func_001d6d88");
extern "C" void func_00177dc8(u32, u32) asm("func_00177dc8");
extern "C" void func_001a1c90(u32, u32, u32) asm("func_001a1c90");

// 0x001d0980 func_001d0980
void func_001d0980(u32 a0, u32 a1, u32 a2) asm("_ZN2YS4SORAC1EPKNS_8OBJENTRYEiPNS_3PADERKN2kn7FVectorEf");
void func_001d0980(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    u32 s0;
    func_00177dc8(a0, a1);
    *(u32*)(a0) = (u32)&D_00352410;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x1000000);
    *(u32*)((a0 + 0xb68)) = 0;
    *(u32*)((a0 + 0xb6c)) = 0;
    *(u32*)((a0 + 0xb70)) = 0;
    *(u32*)(&D_00352400) = a0;
    if (((s32)(func_00181978()) != 0)) {
        if (((s32)((*(u32*)(&D_0034f240) & 0x40000)) != 0)) {
            *(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) = 4;
        } else {
            if ((*(u32*)((a0 + 0xb50)) == 0xc)) {
                func_001a1c90(*(u32*)((a0 + 0x48c)), 2, 0xffffffff);
            } else {
                if (((s32)(func_001d6d88()) != 0)) {
                    t7 = 3;
                } else {
                    t7 = 1;
                }
                *(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) = t7;
            }
        }
    }
    if ((a2 == 6)) {
        s0 = func_001c1130(0x1d);
        *(u32*)((s0 + 0x18)) = func_00192048(0xc44f);
        return;
    } else {
        func_001c11a8(0x1d);
        return;
    }
}
