// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f5d4 asm("D_0035f5d4");
extern "C" u32 D_0035f5d8 asm("D_0035f5d8");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" u32 func_002a1220() asm("func_002a1220");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00138cd0(u32, u32, u32) asm("func_00138cd0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_002a16b8() asm("func_002a16b8");

// 0x002a10e0 func_002a10e0
u32 func_002a10e0() asm("_ZN2Tz9JmDiagram12CreateCursorEv");
u32 func_002a10e0() {
    u32 s1;
    u32 v0;
    u32 loc_0;
    u32 loc_4;
    u32 t7;
    u32 t7_0;
    u32 t6;
    s1 = func_002766d0();
    func_0028d8c0(*(u32*)(&D_0035f5d8) + 0x330, 0x7571, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x22, 0xffffffff, 0);
    v0 = func_0028dcc0(*(u32*)(&D_0035f5d8) + 0x330, s1);
    if (((s32)(*(s8*)((*(u32*)(&D_0035f5d4) + 1))) < 0)) {
        t7 = ((*(s16*)((*(u32*)(&D_0035f5d4) + 0x4a)) - *(s16*)((*(u32*)(&D_0035f5d4) + 0x48))) + ((*(s16*)((*(u32*)(&D_0035f5d4) + 0x4a)) - *(s16*)((*(u32*)(&D_0035f5d4) + 0x48))) >> 0x1f));
        loc_0 = (*(s16*)((*(u32*)(&D_0035f5d4) + 0x48)) + ((s32)(t7) >> 1));
        t7_0 = ((*(s16*)((*(u32*)(&D_0035f5d4) + 0x4e)) - *(s16*)((*(u32*)(&D_0035f5d4) + 0x4c))) + ((*(s16*)((*(u32*)(&D_0035f5d4) + 0x4e)) - *(s16*)((*(u32*)(&D_0035f5d4) + 0x4c))) >> 0x1f));
        loc_4 = (*(s16*)((*(u32*)(&D_0035f5d4) + 0x4c)) + ((s32)(t7_0) >> 1));
    } else {
        func_00138cd0((s1 + (*(s8*)((*(u32*)(&D_0035f5d4) + 1)) * 0x198)) + 0x1098, (u32)&loc_0, (u32)&loc_4);
    }
    t6 = (*(u32*)(&D_0035f5d8) + 0x348);
    *(u32*)((t6 + 0xb8)) = (*(u32*)((t6 + 0xb8)) | 8);
    func_00138c68(*(u32*)(&D_0035f5d8) + 0x330, loc_0, loc_4);
    *(u16*)((*(u32*)(&D_0035f5d4) + 0x44)) = *(u16*)(&loc_0);
    *(u16*)((*(u32*)(&D_0035f5d4) + 0x46)) = *(u16*)(&loc_4);
    func_002a16b8();
    return func_002a1220();
}
