// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 D_0035f034 asm("D_0035f034");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_00372a10 asm("D_00372a10");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00138c78(u32, u32, u32) asm("func_00138c78");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00259108(u32, u32, u32, u32, u32, u32, u32) asm("func_00259108");
extern "C" void func_00288f48(u32, u32, u32, u32, u32) asm("func_00288f48");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x002571e0 func_002571e0
void func_002571e0(u32 a0) asm("_ZN2Tz5CmTop19SetupWarningConfirmEi");
void func_002571e0(u32 a0) {
    u32 s1;
    u32 v0;
    u32 loc_4;
    u32 loc_0;
    func_00259108(*(u32*)(&D_0035f024), 0x7549, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), a0, (u32)&D_00372a10);
    func_00288f48(*(u32*)(&D_0035f024), 0x80, 0x40, 0, 0);
    func_0028af28(*(u32*)(&D_0035f024), 0x40);
    if (((s32)(func_00139d78(*(u32*)(&D_0035f034))) != 0)) {
        s1 = 0;
        while (((s32)(((s32)(s1) < (s32)(func_002892f8(*(u32*)(&D_0035f024))))) != 0)) {
            v0 = func_002891b8(*(u32*)(&D_0035f024), s1);
            *(u32*)((v0 + 0x18c)) = *(u32*)(&D_0035f034);
            func_001396b0(v0);
            if (((s32)(*(u32*)((v0 + 0x18c))) != 0)) {
                *(u32*)((v0 + 0x190)) = 0;
                func_001396b0(v0);
                if (((s32)(*(u32*)((v0 + 0x190))) != 0)) {
                    func_0031a260(v0, 0);
                }
            }
            func_00138c78(func_002891b8(*(u32*)(&D_0035f024), s1), (u32)&loc_0, (u32)&loc_4);
            loc_0 = (loc_0 + func_0023aa18(*(u32*)(&D_0035f034) + 0x18));
            loc_4 = (loc_4 + func_0023aa38(*(u32*)(&D_0035f034) + 0x18));
            func_00138c68(func_002891b8(*(u32*)(&D_0035f024), s1), loc_0, loc_4);
            func_001396b0(func_002891b8(*(u32*)(&D_0035f024), s1));
            s1 = (s1 + 1);
        }
    }
    return;
}
