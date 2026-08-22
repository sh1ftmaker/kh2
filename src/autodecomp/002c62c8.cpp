// coverage: addr=0x002c62c8 symbol=func_002c62c8 size=184 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:64.92
#include "common/types.h"

extern "C" void func_002c6280(u32, u32) asm("func_002c6280");
extern "C" void func_002c65f8(u32) asm("func_002c65f8");

// 0x002c62c8 func_002c62c8
u32 func_002c62c8(u32 a0) asm("func_002c62c8");
u32 func_002c62c8(u32 a0) {
    u32 a0_0;
    u32 s1;
    u32 s3;
    *(u32*)((a0 + 0x1c)) = 0;
    a0_0 = *(u32*)(((a0 + 8) + 0x10));
    s1 = 2;
    s3 = 0;
    do {
        if ((*(u32*)((((a0 + ((s1 - 2) * 4)) + 8) + 0x10)) != 0)) {
            if (((s32)(s3) == 0)) {
                if (((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((((a0 + ((s1 - 2) * 4)) + 8) + 0x10))) + 8))))(*(u32*)((((a0 + ((s1 - 2) * 4)) + 8) + 0x10)))) != 0)) {
                    *(u32*)((a0 + 0x1c)) = *(u32*)((((a0 + ((s1 - 2) * 4)) + 8) + 0x10));
                    s3 = 1;
                } else {
                    func_002c6280(a0, s1);
                }
            } else {
                func_002c65f8(*(u32*)((((a0 + ((s1 - 2) * 4)) + 8) + 0x10)));
            }
        }
        a0_0 = a0;
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return s3;
}
