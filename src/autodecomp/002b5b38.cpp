// coverage: addr=0x002b5b38 symbol=func_002b5b38 size=248 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:83.78;m2c:near:76.71
#include "common/types.h"

extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 func_00287cd0(u32, u32, u32) asm("func_00287cd0");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289358(u32) asm("func_00289358");
extern "C" u32 func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" void func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_002b5c30(u32) asm("func_002b5c30");

// 0x002b5b38 func_002b5b38
void func_002b5b38(u32 a0, u32 a1, u32 a2) asm("func_002b5b38");
void func_002b5b38(u32 a0, u32 a1, u32 a2) {
    if ((func_00287cd0(a0, a1, a2) == 1)) {
        if (((s32)(func_00289310(a0)) != 0)) {
            func_002890e0(a0, 1, 2, 0, 0xffffffff);
            func_00289038(a0, func_002891e8(a0), 1, 1, 2, 0, 0xffffffff);
            if ((a1 == 0xc)) {
                if (((s32)(func_00289358(*(u32*)(&D_0035f64c))) != 0)) {
                    func_002b5c30(0);
                }
            }
            if (((s32)(func_0028d008(a2)) != 0)) {
                func_0028cf28(a2, func_002891d0(a0));
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
