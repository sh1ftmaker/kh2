// coverage: addr=0x00262208 symbol=_ZN2Tz6CmItem13LeaveCategoryEv size=136 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:93.97;ghidra:near:86.67;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00256b68(u32) asm("func_00256b68");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028be18(u32) asm("func_0028be18");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x00262208 Tz::CmItem::LeaveCategory()
u32 lift_00262208() asm("_ZN2Tz6CmItem13LeaveCategoryEv");
u32 lift_00262208() {
    u32 v0;
    u32 v0_0;
    v0 = func_00256b68(1);
    if (((s32)(func_00139d78(v0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(v0) + 0x14))))(v0);
    }
    if ((func_0028acc8(*(u32*)(&D_0035f01c)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f01c));
    }
    v0_0 = func_0028be58(*(u32*)(&D_0035f04c));
    if ((v0_0 != 0)) {
        return func_0028be18(*(u32*)(&D_0035f04c));
    } else {
        return v0_0;
    }
}
