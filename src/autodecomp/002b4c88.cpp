// coverage: addr=0x002b4c88 symbol=_ZN2Tz8CmSLBase19SetupWarningConfirmEi size=324 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:82.73;m2c:near:36.98
#include "common/types.h"

extern "C" u32 D_0035f640 asm("D_0035f640");
extern "C" u32 D_0035f644 asm("D_0035f644");
extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 D_0035f654 asm("D_0035f654");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_0035f6cc asm("D_0035f6cc");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00138c78(u32, u32, u32) asm("func_00138c78");
extern "C" void func_00259108(u32, u32, u32, u32, u32, u32, u32) asm("func_00259108");
extern "C" void func_00288f48(u32, u32, u32, u32, u32) asm("func_00288f48");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_002b6418(u32) asm("func_002b6418");

// 0x002b4c88 Tz::CmSLBase::SetupWarningConfirm(int)
void lift_002b4c88(u32 a0) asm("_ZN2Tz8CmSLBase19SetupWarningConfirmEi");
void lift_002b4c88(u32 a0) {
    u32 s0;
    u32 loc_4;
    u32 loc_0;
    func_002b6418(a0);
    func_00259108(*(u32*)(&D_0035f650), 0x7570, *(u32*)(&D_0035f644), *(u32*)(&D_0035f640), *(u32*)(&D_0035f664), a0, *(u32*)((*(u32*)(&D_0035f6cc) + 0x10)));
    func_00288f48(*(u32*)(&D_0035f650), 0x80, 0x40, 0, 0);
    func_0028af28(*(u32*)(&D_0035f650), 0x40);
    if (((s32)(func_00139d78(*(u32*)(&D_0035f654))) != 0)) {
        s0 = 0;
        while (((s32)(((s32)(s0) < (s32)(func_002892f8(*(u32*)(&D_0035f650))))) != 0)) {
            func_0028dcc0(func_002891b8(*(u32*)(&D_0035f650), s0), *(u32*)(&D_0035f654));
            func_00138c78(func_002891b8(*(u32*)(&D_0035f650), s0), (u32)&loc_0, (u32)&loc_4);
            loc_0 = (loc_0 + func_0023aa18(*(u32*)(&D_0035f654) + 0x18));
            loc_4 = (loc_4 + func_0023aa38(*(u32*)(&D_0035f654) + 0x18));
            func_00138c68(func_002891b8(*(u32*)(&D_0035f650), s0), loc_0, loc_4);
            s0 = (s0 + 1);
        }
    }
    return;
}
