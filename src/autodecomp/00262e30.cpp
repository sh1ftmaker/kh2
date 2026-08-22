// coverage: addr=0x00262e30 symbol=func_00262e30 size=228 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:90.79;m2c:near:83.8;ghidra:near:72.34
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00262e30 func_00262e30
void func_00262e30() asm("func_00262e30");
void func_00262e30() {
    u32 v0;
    v0 = func_00257770();
    if ((func_00139d78(v0) == 0)) {
        if ((func_00139d78(v0 + 0x660) == 0)) {
            if ((func_00139d78(v0 + 0xb350) == 0)) {
                if ((func_0028acc8(*(u32*)(&D_0035f01c)) == 0)) {
                    if ((func_0028acc8(*(u32*)(&D_0035f020)) == 0)) {
                        if ((func_0028acc8(*(u32*)(&D_0035f024)) == 0)) {
                            u32 s2 = 0;
                            do {
                                if (((s32)(func_00139d78((v0 + (s2 * 0x1b4)) + 0xd30)) != 0)) {
                                    return;
                                }
                                if (((s32)(func_00139d78((v0 + (s2 * 0x1b4)) + 0x5ef0)) != 0)) {
                                    return;
                                }
                                s2 = (s2 + 1);
                            } while (((s32)(((s32)(s2) < (s32)(0x18))) != 0));
                            func_00139d78(v0 + 0x330);
                        }
                    }
                }
            }
        }
    }
    return;
}
