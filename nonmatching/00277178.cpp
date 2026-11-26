// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_002570e0(u32, u32) asm("func_002570e0");
extern "C" u32 func_002772c8(u32) asm("func_002772c8");
extern "C" u32 func_00277d20() asm("func_00277d20");
extern "C" u32 func_0027aa78() asm("func_0027aa78");
extern "C" u32 func_0027ae20() asm("func_0027ae20");
extern "C" u32 func_00281100(u32) asm("func_00281100");
extern "C" u32 func_00281140(u32, u32) asm("func_00281140");
extern "C" u32 func_002813b8() asm("func_002813b8");
extern "C" void func_00257050(u32, u32, u32) asm("func_00257050");
extern "C" void func_00279040() asm("func_00279040");
extern "C" void func_0028fb28(u32, u32) asm("func_0028fb28");
extern "C" void func_0028fb68(u32, u32) asm("func_0028fb68");

// 0x00277178 func_00277178
u32 func_00277178(u32 a0, u32 a1) asm("_ZN2Tz9CmAbility14SetupFromEquipEii");
u32 func_00277178(u32 a0, u32 a1) {
    u32 s0;
    u32 s1;
    u32 s0_0;
    u32 s0_1;
    func_0028fb28(0, *(u16*)((func_002570e0(a0, a1) + 0x36)));
    func_00257050(0, 1, 0);
    if ((a0 == 0xf)) {
        return func_002772c8(a1);
    } else {
        s0 = *(u32*)(&D_0035f230);
        *(u16*)(s0) = func_002813b8();
        s1 = *(u32*)(&D_0035f230);
        s0_0 = func_0027ae20();
        *(u8*)((s1 + 6)) = (s0_0 + func_00281100(*(u32*)(&D_0035f010)));
        s0_1 = (s0_0 + func_00281100(*(u32*)(&D_0035f010)));
        if (((s32)(func_0027aa78()) != 0)) {
            *(u16*)(*(u32*)(&D_0035f230)) = (*(u16*)(*(u32*)(&D_0035f230)) | 0x80);
        }
        if (((s32)(a1) != 0)) {
            a1 = (a1 + func_0027ae20());
        }
        if ((func_00257070(0xf) != a1)) {
            func_00257050(0x10, 0, 0);
            func_00257050(0xf, a1, 0);
        }
        if ((a1 != 0)) {
            a1 = (a1 - func_0027ae20());
        }
        func_0028fb68(1, func_00281140(*(u32*)(&D_0035f010), a1));
        func_00279040();
        return func_00277d20();
    }
}
