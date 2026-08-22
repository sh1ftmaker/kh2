// coverage: addr=0x001d6e08 symbol=func_001d6e08 size=84 class=loop source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:99.95;e3:near:83.71;ghidra:near:73.73
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SUMMON_TABLE;

struct YS_SUMMON_TABLE {  // class YS::SUMMON_TABLE size=0x40
    u16 Command;                                       // +0x0
    u16 Item;                                          // +0x2
    u32 EntryId[2];                                    // +0x4
    u16 LimitCommand;                                  // +0xc
    s8 Padding[50];                                    // +0xe
};

extern "C" void func_0016ed50(u32, u32, u32) asm("func_0016ed50");

// 0x001d6e08 func_001d6e08
void func_001d6e08(u32 a0) asm("func_001d6e08");
void func_001d6e08(u32 a0) {
    u32 s1;
    u32 t7;
    s1 = 1;
    t7 = *(u32*)&(((YS_SUMMON_TABLE*)a0)->EntryId[0]);
    do {
        if (((s32)(*(u32*)(((a0 + ((s1 - 1) * -4)) + 4))) != 0)) {
            func_0016ed50(*(u32*)(((a0 + ((s1 - 1) * -4)) + 4)), 0xffffffff, 0x1e);
        }
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
