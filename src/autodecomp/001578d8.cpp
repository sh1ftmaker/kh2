// coverage: addr=0x001578d8 symbol=func_001578d8 size=180 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.67;ghidra:near:6.54
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0013c7d0(u32) asm("_ZN2dk12COMMAND_DRAW13isCommandSkipEv");
extern "C" u32 func_00155d58(u32, u32) asm("func_00155d58");
extern "C" u32 func_00155f40(u32) asm("func_00155f40");
extern "C" u32 func_00155fc0(u32) asm("func_00155fc0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00157aa0(u32) asm("func_00157aa0");

// 0x001578d8 func_001578d8
void func_001578d8(u32 a0) asm("func_001578d8");
void func_001578d8(u32 a0) {
    if (((s32)(*(u8*)((a0 + 0x20))) == 0)) {
        if (((s32)(func_0013c7d0(a0)) != 0)) {
            func_00138c10(a0 + 0x1a30, func_00155d58(a0, 0));
            func_00138c10(a0 + 0x2d80, func_00155f40(a0));
            if (((s32)(func_00139d78(a0 + 0x2f1c)) != 0)) {
                func_00138c10(a0 + 0x2f1c, func_00155fc0(a0));
            }
            func_00157aa0(a0);
            *(u8*)((a0 + 0x20)) = 1;
        } else {
            if (((s32)(*(u8*)((a0 + 0x2f14))) != 0)) {
                *(u8*)((a0 + 0x20)) = 1;
            }
        }
    }
    return;
}
