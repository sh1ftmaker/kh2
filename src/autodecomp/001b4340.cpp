// coverage: addr=0x001b4340 symbol=func_001b4340 size=160 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.79;e3:near:64.34;ghidra:near:48.61
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00351eb8 asm("D_00351eb8");
extern "C" u32 D_01d48cb0 asm("D_01d48cb0");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001b5250(u32, u32) asm("func_001b5250");
extern "C" u32 func_001c8db8(u32, u32) asm("func_001c8db8");
extern "C" u32 func_001d4180() asm("func_001d4180");

// 0x001b4340 func_001b4340
void func_001b4340() asm("func_001b4340");
void func_001b4340() {
    u32 s0;
    u32 t7;
    u32 v0;
    s0 = *(u32*)(&D_0034e948);
    t7 = *(u32*)(&D_01d48cb0);
    if (((s32)(t7) == 0)) {
        if (((s32)(func_0019ba60(s0)) != 0)) {
            v0 = *(u32*)((*(u32*)(s0) + 0x40));
            if (((s32)(((u32(*)(u32))(v0))(s0)) != 0)) {
                if (((s32)(((func_001c8db8((u32)&D_00351eb8, 0) ^ 1) & 0xff)) != 0)) {
                    func_001d4180();
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
    } else {
        func_001b5250(t7, 0);
        return;
    }
}
