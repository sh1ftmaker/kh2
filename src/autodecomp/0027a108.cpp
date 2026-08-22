// coverage: addr=0x0027a108 symbol=_ZN2Tz9CmAbility14FadeOutSelListEb size=120 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.75;m2c:near:93.62
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028aa40(u32) asm("func_0028aa40");
extern "C" u32 func_0028acb8(u32) asm("func_0028acb8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x0027a108 Tz::CmAbility::FadeOutSelList(bool)
void lift_0027a108() asm("_ZN2Tz9CmAbility14FadeOutSelListEb");
void lift_0027a108() {
    u32 s0;
    s0 = func_00257770();
    if ((func_00287bc0() == 0xf)) {
        func_0028dac8(s0, 0x8e);
        if ((func_0028acc8(*(u32*)(&D_0035f01c)) != 0)) {
            if ((func_0028acb8(*(u32*)(&D_0035f01c)) == 0)) {
                func_0028aa40(*(u32*)(&D_0035f01c));
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
