// coverage: addr=0x001de450 symbol=func_001de450 size=96 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;lift:near:99.58
#include "common/types.h"

extern "C" void func_001dc920(u32) asm("func_001dc920");
extern "C" void func_001e0058(u32) asm("func_001e0058");
extern "C" void func_00321ce8(u32, u32) asm("func_00321ce8");

// 0x001de450 func_001de450
void func_001de450(u32 a0) asm("func_001de450");
void func_001de450(u32 a0) {
    u8 frame[1];
    u32 s1;
    u32 s2;
    u32 s0;
    u32 sp;
    s1 = *(u32*)((a0 + 0xc));
    if (((s32)(s1) != 0)) {
        s2 = (a0 + 0xc);
        do {
            s0 = *(u32*)((s1 + 0x60));
            func_00321ce8(s2, s1);
            func_001dc920(*(u32*)((s1 + 0x40)));
            func_001e0058(s1);
            s1 = s0;
        } while (((s32)(s0) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
