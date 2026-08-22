// coverage: addr=0x001a5e38 symbol=_ZN2YS5MAGIC8ClearAllEv size=132 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:96.91;e3:near:69.55;ghidra:near:67.84
#include "common/types.h"

extern "C" u32 D_0035080c asm("D_0035080c");
extern "C" u32 D_01c6cb20 asm("D_01c6cb20");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_001a5d48(u32) asm("func_001a5d48");
extern "C" void func_001de450(u32) asm("func_001de450");

// 0x001a5e38 YS::MAGIC::ClearAll()
void lift_001a5e38() asm("_ZN2YS5MAGIC8ClearAllEv");
void lift_001a5e38() {
    u32 s0;
    u32 s1;
    u32 s0_0;
    u32 t7;
    u32 t7_1;
    s0 = *(u32*)(&D_01c6cb20);
    if (((s32)(s0) != 0)) {
        do {
            s1 = *(u32*)((s0 + 0xc));
            if (((s32)(s0) != 0)) {
                func_001a5d48(s0);
                func_00105110(s0);
            }
            s0 = s1;
        } while (((s32)(s1) != 0));
    }
    s0_0 = (u32)&D_0035080c;
    t7 = *(u32*)((u32)&D_0035080c);
    do {
        t7_1 = *(u32*)(s0_0);
        if ((t7_1 != 0)) {
            func_001de450(s0_0);
        }
        s0_0 = (s0_0 + 0x2c);
        t7 = ((s32)(s0_0) < (s32)(((u32)&D_0035080c + 0x108)));
    } while ((t7 != 0));
    return;
}
