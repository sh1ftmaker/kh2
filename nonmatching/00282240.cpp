// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a3570(u32) asm("func_001a3570");
extern "C" u32 func_001a8110(u32) asm("func_001a8110");
extern "C" u32 func_002811f8(u32, u32) asm("func_002811f8");
extern "C" u32 func_00281fe0(u32, u32, u32) asm("func_00281fe0");
extern "C" u32 func_00282228(u32, u32, u32) asm("func_00282228");
extern "C" u32 func_002823b0(u32, u32, u32) asm("func_002823b0");
extern "C" u32 func_00282ec0(u32) asm("func_00282ec0");
extern "C" void func_00281f48(u32, u32, u32) asm("func_00281f48");
extern "C" void func_00281f90(u32, u32, u32) asm("func_00281f90");

// 0x00282240 func_00282240
u32 func_00282240(u32 a0, u32 a1, u32 a2) asm("func_00282240");
u32 func_00282240(u32 a0, u32 a1, u32 a2) {
    u32 s3;
    u32 s0;
    u32 s4;
    u32 v0_0;
    u32 v0;
    func_00281f48(a0, a1, a2);
    if (((s32)(((s32)(a1) < (s32)(5))) != 0)) {
        s3 = func_00281fe0(a0, a1, a2);
        func_00281f90(a0, a1, func_00281fe0(a0, a1, a2));
        *(u32*)((a0 + 0x1008)) = 0;
        if (((s32)(a1) != 0)) {
            *(u32*)((a0 + 0x100c)) = func_002811f8(*(u32*)((a0 + 0x1004)), a1 + -1);
        }
        *(u32*)(a0) = 0;
        s0 = 0;
        s4 = (a0 + 4);
        while ((v0_0 = func_001a8110(s0)), (s0 = v0_0), ((s32)(v0_0) != 0)) {
            if (((s32)(func_00282228(a0, *(u8*)((v0_0 + 2)), s3)) == 0)) {
                continue;
            }
            v0 = func_001a3570(*(u16*)(s0));
            if (((s32)(v0) == 0)) {
                continue;
            }
            if (((s32)(func_00282ec0(*(u16*)(s0))) != 0)) {
                continue;
            }
            *(u8*)((s4 + 2)) = v0;
            *(u16*)(s4) = *(u16*)(s0);
            *(u8*)((s4 + 3)) = 0;
            *(u16*)((s4 + 4)) = 0x3e7;
            s4 = (s4 + 6);
            *(u32*)(a0) = (*(u32*)(a0) + 1);
        }
        return v0_0;
    } else {
        return func_002823b0(a0, a1, func_00281fe0(a0, a1, a2));
    }
}
