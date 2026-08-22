// coverage: addr=0x00181670 symbol=_ZN2YS8PROGRESS7CheckLMEv size=260 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:84.7;ghidra:near:70.51
#include "common/types.h"

extern "C" u32 D_0032f05a asm("D_0032f05a");
extern "C" u32 func_00181178(u32) asm("func_00181178");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_001a3570(u32) asm("func_001a3570");

// 0x00181670 YS::PROGRESS::CheckLM()
void lift_00181670() asm("_ZN2YS8PROGRESS7CheckLMEv");
void lift_00181670() {
    if (((s32)(func_00181500(0x2c26)) == 0)) {
        if (((s32)(func_00181500(0x2c31)) != 0)) {
            if (((s32)(func_001a3570(0x57)) <= 0)) {
                return;
            } else {
                func_00181178(0x2c26);
                return;
            }
        } else {
            return;
        }
    } else {
        if (((s32)(func_00181500(0x2c27)) == 0)) {
            if (((s32)(func_00181500(0x2c34)) != 0)) {
                if (((s32)(((u32)(*(u8*)(&D_0032f05a)) < (u32)(5))) != 0)) {
                    return;
                } else {
                    func_00181178(0x2c27);
                    return;
                }
            } else {
                return;
            }
        } else {
            if (((s32)(func_00181500(0x2c28)) == 0)) {
                if (((s32)(func_00181500(0x2c37)) != 0)) {
                    if (((s32)(((s32)(func_001a3570(0x57)) < (s32)(2))) != 0)) {
                        return;
                    } else {
                        func_00181178(0x2c28);
                        return;
                    }
                } else {
                    return;
                }
            } else {
                if (((s32)(func_00181500(0x2c2d)) == 0)) {
                    if (((s32)(func_00181500(0x2c3a)) != 0)) {
                        if (((s32)(((s32)(func_001a3570(0x17)) < (s32)(3))) == 0)) {
                            func_00181178(0x2c2d);
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
        }
    }
}
