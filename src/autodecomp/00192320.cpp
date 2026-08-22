// coverage: addr=0x00192320 symbol=_ZN2YS7MESSAGE7SysInitEv size=104 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.65;m2c:near:75.1
#include "common/types.h"

extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_0036cda0 asm("D_0036cda0");
extern "C" u32 D_01c61970 asm("D_01c61970");
extern "C" u32 func_00191f78(u32, u32) asm("func_00191f78");
extern "C" u32 func_001b1490(u32) asm("func_001b1490");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x00192320 YS::MESSAGE::SysInit()
u32 lift_00192320() asm("_ZN2YS7MESSAGE7SysInitEv");
u32 lift_00192320() {
    u8 frame[48];
    u32 t6;
    u32 t7;
    t6 = 2;
    t7 = (u32)&D_01c61970;
    do {
        *(u32*)((t7 + ((t6 - 2) * -8))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    func_002fee78((u32)frame, (u32)&D_0036cda0, *(u32*)(&D_0033caf4));
    return func_00191f78(1, func_001b1490((u32)frame));
}
