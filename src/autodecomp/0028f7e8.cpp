// coverage: addr=0x0028f7e8 symbol=_ZN2Tz7JmStory12LeaveAllPostEz size=140 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.03;ghidra:near:88.73;e3:near:75.79
#include "common/types.h"

extern "C" u32 D_0035f480 asm("D_0035f480");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028d6e8(u32) asm("func_0028d6e8");

// 0x0028f7e8 Tz::JmStory::LeaveAllPost(...)
void lift_0028f7e8(u32 a0) asm("_ZN2Tz7JmStory12LeaveAllPostEz");
void lift_0028f7e8(u32 a0) {
    if (((s32)(*(u32*)(&D_0035f480)) != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f480) + (a0 * 0x374))) != 0)) {
            func_00139510(*(u32*)(&D_0035f480) + (a0 * 0x374));
        }
        if ((func_0028d6e8((*(u32*)(&D_0035f480) + (a0 * 0x374)) + 0x1b4) != 0)) {
            func_00139510((*(u32*)(&D_0035f480) + (a0 * 0x374)) + 0x1b4);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
