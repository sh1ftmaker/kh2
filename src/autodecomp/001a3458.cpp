// coverage: addr=0x001a3458 symbol=_ZN2YS4ITEM6ReduceEii size=132 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:92.12;ghidra:near:89.52;m2c:near:86.0
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_00188fe0(u32, u32) asm("_ZN2YS14SAVERAM_BATTLE11get_partramEi");
extern "C" void func_001a34e0(u32, u32) asm("func_001a34e0");

// 0x001a3458 YS::ITEM::Reduce(int, int)
u32 lift_001a3458(u32 a0, u32 a1) asm("_ZN2YS4ITEM6ReduceEii");
u32 lift_001a3458(u32 a0, u32 a1) {
    u32 v0;
    u32 t5;
    u32 t6;
    u32 v0_0;
    u32 v0_1;
    if ((a1 == 0x64)) {
        func_001a34e0(a0, 1);
        v0_1 = 1;
    } else {
        v0 = func_00188fe0((u32)&D_0032e020, a1);
        if (((s32)((*(u8*)((v0 + 0x12)) + -1)) >= 0)) {
            v0_0 = ((((*(u8*)((v0 + 0x12)) + -1) << 1) + v0) + 0x34);
            t5 = (((*(u8*)((v0 + 0x12)) + -1) << 1) + v0);
            t6 = (*(u8*)((v0 + 0x12)) + -1);
            do {
                if ((*(u16*)(v0_0) == a0)) {
                    *(u16*)((t5 + 0x34)) = 0;
                    return 1;
                }
                t5 = (t5 + -2);
                t6 = (t6 + -1);
                v0_0 = (v0_0 + -2);
            } while (((s32)(t6) >= 0));
        }
        v0_1 = 0;
    }
    return v0_1;
}
