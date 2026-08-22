// coverage: addr=0x0019cc20 symbol=_ZN2YS6LOCKON7releaseEv size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.96;ghidra:near:81.97
#include "common/types.h"

extern "C" u32 func_00190128(u32) asm("func_00190128");
extern "C" void func_0019cbe8(u32) asm("func_0019cbe8");
extern "C" void func_0019d228(u32) asm("func_0019d228");
extern "C" void func_0019d480(u32) asm("func_0019d480");

// 0x0019cc20 YS::LOCKON::release()
void lift_0019cc20(u32 a0) asm("_ZN2YS6LOCKON7releaseEv");
void lift_0019cc20(u32 a0) {
    if (((s32)(*(u32*)(a0)) != 0)) {
        func_0019d228(a0);
        func_0019cbe8(a0);
        if ((*(u32*)(a0) == 2)) {
            func_0019d480(a0);
        }
        *(u32*)(a0) = 0;
        func_00190128(a0 + 4);
        return;
    } else {
        return;
    }
}
