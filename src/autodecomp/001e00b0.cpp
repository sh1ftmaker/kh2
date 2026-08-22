// coverage: addr=0x001e00b0 symbol=func_001e00b0 size=120 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.75;m2c:near:68.32
#include "common/types.h"

extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001dc790(u32) asm("func_001dc790");
extern "C" u32 func_001dcc60(u32) asm("func_001dcc60");
extern "C" u32 func_002bc398(u32, u32) asm("_ZN5SOUND8setPosSeEjRKN2kn7FVectorE");
extern "C" u32 func_002bc3f0(u32) asm("func_002bc3f0");

// 0x001e00b0 func_001e00b0
void func_001e00b0(u32 a0) asm("func_001e00b0");
void func_001e00b0(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x54))) >= 0)) {
        if ((func_001dc790(*(u32*)((a0 + 0x40))) == 0)) {
            if ((func_001dcc60(*(u32*)((a0 + 0x40))) != 0)) {
                func_002bc398(*(u32*)((a0 + 0x54)), func_001dc5f8(*(u32*)((a0 + 0x40))));
                return;
            } else {
                func_002bc3f0(*(u32*)((a0 + 0x54)));
                return;
            }
        } else {
            func_002bc3f0(*(u32*)((a0 + 0x54)));
            return;
        }
    } else {
        return;
    }
}
