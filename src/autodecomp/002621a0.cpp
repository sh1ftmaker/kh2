// coverage: addr=0x002621a0 symbol=_ZN2Tz6CmItem15FadeOutCategoryEv size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:92.86;m2c:near:90.61;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 func_00256b68(u32) asm("func_00256b68");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028bdb8(u32) asm("func_0028bdb8");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x002621a0 Tz::CmItem::FadeOutCategory()
void lift_002621a0() asm("_ZN2Tz6CmItem15FadeOutCategoryEv");
void lift_002621a0() {
    if ((func_00287bc0() == 0xa)) {
        func_0028dac8(func_00256b68(1), 0x127);
        if ((func_0028be58(*(u32*)(&D_0035f04c)) != 0)) {
            func_0028bdb8(*(u32*)(&D_0035f04c));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
