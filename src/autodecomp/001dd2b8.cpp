// coverage: addr=0x001dd2b8 symbol=func_001dd2b8 size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:95.38;m2c:near:92.79
#include "common/types.h"

extern "C" u32 D_00352af0 asm("D_00352af0");
extern "C" u32 D_00352af1 asm("D_00352af1");
extern "C" u32 func_00106a18(u32) asm("func_00106a18");
extern "C" u32 func_00106a60(u32) asm("func_00106a60");
extern "C" u32 func_001dd320(u32, u32, u32) asm("func_001dd320");

// 0x001dd2b8 func_001dd2b8
void func_001dd2b8() asm("func_001dd2b8");
void func_001dd2b8() {
    u32 s0;
    if (((s32)(*(u8*)(&D_00352af1)) == 0)) {
        if (((s32)(*(u8*)(&D_00352af0)) != 0)) {
            s0 = func_00106a18(0);
            func_001dd320(s0, func_00106a60(0), 1);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
