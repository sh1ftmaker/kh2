// coverage: addr=0x001dda78 symbol=func_001dda78 size=180 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.33;m2c:near:94.02;ghidra:near:29.79
#include "common/types.h"

extern "C" u32 D_00352ae0 asm("D_00352ae0");
extern "C" u32 func_001dc738(u32) asm("func_001dc738");
extern "C" u32 func_001dc9d0(u32) asm("func_001dc9d0");

// 0x001dda78 func_001dda78
void func_001dda78() asm("func_001dda78");
void func_001dda78() {
            s32 t18_25;
    u32 t6;
    u32 s0;
    u8 t7;
    s0 = D_00352ae0;
    s32 s1;
    if (((s32)(s0) != 0)) {
        do {
        u32 t18_27 = (u32)(*(u32*)((s0 + 0x28)));
        s32 t16_13 = (s32)(t18_27);
        s1 = (t16_13) | 0;
        if (((s32)(func_001dc9d0(s0)) == 0)) {
            t18_25 = (s32)(*(u32*)((s0 + 8)));
            t7 = (((s32)(t18_25) >> 0x1a) & 1);
            if (((s32)(t7) == 0)) {
                if (((s32)(func_001dc738(s0)) == 0)) {
                    t6 = *(u32*)(((s0 + 8)));
                    if (((s32)((*(u32*)((8 + s0)) & 0x100000)) != 0)) {
                        if (((s0) != 0)) {
                            ((void(*)(u32))(*(u32*)((*(u32*)(s0) + 4))))(s0);
                        }
                    } else {
                        if (((s32)(((t6 & 1))))) {
                            *(u32*)((s0 + 8)) = (t6 | 0x100000);
                        }
                    }
                }
            }
        }
        s0 = s1;
        } while (((s32)(s0) != 0));
    }
    return;
}
