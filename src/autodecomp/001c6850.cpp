// coverage: addr=0x001c6850 symbol=func_001c6850 size=144 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:57.0;ghidra:near:18.94
#include "common/types.h"

extern "C" u32 func_001c5f38(u32) asm("func_001c5f38");
extern "C" u32 func_001c6748(u32) asm("func_001c6748");
extern "C" u32 func_001c6760(u32) asm("func_001c6760");
extern "C" u32 func_001dbd68(u32) asm("_ZN2YS11CROWDEFFECT10is_cullingEv");

// 0x001c6850 func_001c6850
void func_001c6850(u32 a0) asm("func_001c6850");
void func_001c6850(u32 a0) {
    if ((func_001c5f38(a0) == 0)) {
        if ((0.0f < *(f32*)((a0 + 0x4c)))) {
            func_001c6760(a0);
            return;
        } else {
            *(f32*)((a0 + 4)) = *(f32*)((a0 + 0x34));
            *(u8*)((a0 + 0x15)) = 0;
            if (((s32)((*(u8*)((a0 + 0x50)) & 0xff)) != 0)) {
                *(u8*)((a0 + 0x50)) = (*(u8*)((a0 + 0x50)) + -1);
                return;
            } else {
                if (((s32)(func_001dbd68(a0)) != 0)) {
                    func_001c6748(a0);
                    return;
                } else {
                    return;
                }
            }
        }
    } else {
        return;
    }
}
