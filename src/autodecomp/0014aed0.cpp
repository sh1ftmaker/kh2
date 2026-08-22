// coverage: addr=0x0014aed0 symbol=_Z13func_0014aed0ii size=576 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:74.95;m2c:near:73.67
#include "common/types.h"

extern "C" u32 D_003493a0 asm("D_003493a0");
extern "C" u32 D_003494b0 asm("D_003494b0");
extern "C" u32 D_003495c0 asm("D_003495c0");
extern "C" u32 D_003496d0 asm("D_003496d0");
extern "C" u32 D_003497e0 asm("D_003497e0");
extern "C" u32 D_003498f0 asm("D_003498f0");
extern "C" u32 D_00349a00 asm("D_00349a00");
extern "C" u32 D_00349b40 asm("D_00349b40");
extern "C" u32 func_0014a950(u32) asm("func_0014a950");
extern "C" u32 func_0031bb08(u32) asm("func_0031bb08");

// 0x0014aed0 func_0014aed0(int, int)
u32 lift_0014aed0(u32 a0, u32 a1) asm("_Z13func_0014aed0ii");
u32 lift_0014aed0(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    u32 v0_12;
    u32 v0_13;
    u32 v0_14;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            v0 = func_0014a950((u32)&D_003493a0);
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            v0_2 = func_0014a950((u32)&D_003494b0);
            v0_1 = v0_2;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            v0_3 = func_0014a950((u32)&D_003495c0);
            v0_1 = v0_3;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            v0_4 = func_0014a950((u32)&D_003496d0);
            v0_1 = v0_4;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            v0_5 = func_0014a950((u32)&D_003497e0);
            v0_1 = v0_5;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            v0_6 = func_0014a950((u32)&D_003498f0);
            v0_1 = v0_6;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            v0_7 = func_0014a950((u32)&D_00349a00);
            v0_1 = v0_7;
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_00349a00) = (u32)&D_00349b40;
            v0_8 = func_0031bb08((u32)&D_00349a00);
            v0_1 = v0_8;
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_003498f0) = (u32)&D_00349b40;
            v0_9 = func_0031bb08((u32)&D_003498f0);
            v0_1 = v0_9;
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_003497e0) = (u32)&D_00349b40;
            v0_10 = func_0031bb08((u32)&D_003497e0);
            v0_1 = v0_10;
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_003496d0) = (u32)&D_00349b40;
            v0_11 = func_0031bb08((u32)&D_003496d0);
            v0_1 = v0_11;
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_003495c0) = (u32)&D_00349b40;
            v0_12 = func_0031bb08((u32)&D_003495c0);
            v0_1 = v0_12;
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_003494b0) = (u32)&D_00349b40;
            v0_13 = func_0031bb08((u32)&D_003494b0);
            v0_1 = v0_13;
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_003493a0) = (u32)&D_00349b40;
            v0_14 = func_0031bb08((u32)&D_003493a0);
            v0_1 = v0_14;
        }
    }
    return v0_1;
}
