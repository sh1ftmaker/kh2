// coverage: addr=0x002b2220 symbol=func_002b2220 size=280 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:93.78;m2c:near:77.04;ghidra:near:75.41
#include "common/types.h"

extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_002b1660() asm("func_002b1660");

// 0x002b2220 func_002b2220
void func_002b2220() asm("func_002b2220");
void func_002b2220() {
    u32 a0_0;
    u32 s1;
    u32 s0;
    u32 a0_1;
    u32 s0_3;
    a0_0 = *(u32*)(&D_0035f634);
    s1 = 0;
    s0 = 0;
    do {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + (s0 + (s1 * 0x198)))) != 0)) {
            return;
        }
        s1 = (s1 + 1);
    } while (((s32)(s1) < (s32)(0x30)));
    if ((func_00139d78(*(u32*)(&D_0035f634) + 0x4c80) == 0)) {
        a0_1 = *(u32*)(&D_0035f634);
        u32 s1_2 = 0;
        s0_3 = 0;
        do {
            if (((s32)(func_00139d78((*(u32*)(&D_0035f634) + (s0_3 + (s1_2 * 0x198))) + 0x4e18)) != 0)) {
                return;
            }
            s1_2 = (s1_2 + 1);
        } while (((s32)(s1_2) < (s32)(2)));
        if ((func_00139d78(*(u32*)(&D_0035f634) + 0x5148) == 0)) {
            if ((func_00139d78(*(u32*)(&D_0035f634) + 0x52e0) == 0)) {
                if ((func_00139d78(*(u32*)(&D_0035f634) + 0x5610) == 0)) {
                    if ((func_00139d78(*(u32*)(&D_0035f634) + 0x57c4) == 0)) {
                        if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x5e94)) == 0)) {
                            func_002b1660();
                        }
                    }
                }
            }
        }
    }
    return;
}
