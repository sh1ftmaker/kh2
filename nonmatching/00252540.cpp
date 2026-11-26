// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0035ee58 asm("D_0035ee58");
extern "C" u32 D_0035ee60 asm("D_0035ee60");
extern "C" u32 D_0035ee7c asm("D_0035ee7c");
extern "C" u32 D_00372650 asm("D_00372650");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00252110(u32) asm("func_00252110");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028da70(u32, u32, u32, u32) asm("func_0028da70");

// 0x00252540 Tz::CANA::UpdateGra()
void lift_00252540() asm("_ZN2Tz4CANA9UpdateGraEv");
void lift_00252540() {
    u32 s0;
    s0 = func_00252110(func_002891e8(*(u32*)(&D_0035ee58)));
    if (((s32)(func_00139d78(*(u32*)(&D_0035ee7c))) == 0)) {
        func_0028d8c0(*(u32*)(&D_0035ee7c), 0x753f, 3, 3, *(u32*)(&D_0035ee60), *(s16*)(((s0 * 6) + (u32)&D_00372650)), ((S6_4_s16*)&D_00372650)[s0].m, 0);
        *(u8*)((*(u32*)(&D_0035ee7c) + 0x195)) = 1;
        *(u32*)(((*(u32*)(&D_0035ee7c) + 0x18) + 0xb8)) = (*(u32*)(((*(u32*)(&D_0035ee7c) + 0x18) + 0xb8)) | 8);
    } else {
        func_0028da70(*(u32*)(&D_0035ee7c), ((S6_4_s16*)&D_00372650)[s0].m, 3, 3);
        *(u32*)((*(u32*)(&D_0035ee7c) + 0x188)) = 0xffffffff;
    }
    return;
}
