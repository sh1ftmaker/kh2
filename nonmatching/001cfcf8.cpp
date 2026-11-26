// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 D_00351ec0 asm("D_00351ec0");
extern "C" u32 D_00352360 asm("D_00352360");
extern "C" u32 D_0036e3bc asm("D_0036e3bc");
extern "C" u32 func_001c8d80(u32, u32) asm("func_001c8d80");
extern "C" void func_00177dc8(u32, u32, u32, u32, u32) asm("func_00177dc8");
extern "C" void func_0017a480(u32, u32, u32, u32) asm("func_0017a480");
extern "C" void func_001a1a50(u32, u32) asm("func_001a1a50");
extern "C" void func_001d2648(u32, u32, f32) asm("func_001d2648");

// 0x001cfcf8 func_001cfcf8
u32 func_001cfcf8(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS6MICKEYC1EPKNS_8OBJENTRYEPNS_3PADERKN2kn7FVectorEf");
u32 func_001cfcf8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s0;
    func_00177dc8(a0, a1, 0xb, a2, a3);
    *(u32*)(a0) = (u32)&D_00352360;
    *(u32*)((a0 + 0xb68)) = 0;
    *(u32*)((a0 + 0xb6c)) = 0;
    *(u8*)((a0 + 0xb70)) = 0;
    *(u32*)((a0 + 0xb74)) = 0;
    s0 = (a0 + 0xb74);
    *(u32*)((s0 + 4)) = 0;
    *(u32*)((s0 + 0x20)) = 0;
    *(u8*)((*(u32*)((a0 + 0x48c)) + 0x1b0)) = 0;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x2000000);
    *(u8*)((*(u32*)((a0 + 0x48c)) + 0x1b1)) = 0;
    *(u8*)((*(u32*)((a0 + 0x48c)) + 0x1b2)) = 3;
    func_0017a480(a0, *(u32*)((*(u32*)((a0 + 0x48c)) + 4)), 0, 0);
    func_001a1a50(*(u32*)((a0 + 0x48c)), 0);
    *(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) = 1;
    if (((s32)(((u32)((*(u16*)(((u32)&D_0032bb30 + 0x3db0)) & 0xffff)) < (u32)(0x3e7))) != 0)) {
        *(u16*)(((u32)&D_0032bb30 + 0x3db0)) = (*(u16*)(((u32)&D_0032bb30 + 0x3db0)) + 1);
    }
    if (((s32)(((u32)((*(u16*)(((u32)&D_0032bb30 + 0x3db2)) & 0xffff)) < (u32)(0x3e7))) != 0)) {
        *(u16*)(((u32)&D_0032bb30 + 0x3db2)) = (*(u16*)(((u32)&D_0032bb30 + 0x3db2)) + 1);
    }
    *(u32*)((a0 + 0xabc)) = (*(u32*)((a0 + 0xabc)) | 0x240);
    func_001d2648(s0, 0xbbc2, *(f32*)(&D_0036e3bc));
    return func_001c8d80((u32)&D_00351ec0, 4);
}
