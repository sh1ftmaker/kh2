// coverage: addr=0x00232590 symbol=_ZN2sa5EVENT14set_audio_dataERNS_9BIN_AUDIOE size=92 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.71;ghidra:near:84.8
#include "common/types.h"

extern "C" u32 D_0035e359 asm("D_0035e359");
extern "C" u32 D_003712f0 asm("D_003712f0");
extern "C" u32 func_00227120() asm("func_00227120");
extern "C" u32 func_002283e0() asm("func_002283e0");
extern "C" u32 func_002ff538(u32, u32, u32) asm("func_002ff538");

// 0x00232590 sa::EVENT::set_audio_data(sa::BIN_AUDIO&)
u32 lift_00232590() asm("_ZN2sa5EVENT14set_audio_dataERNS_9BIN_AUDIOE");
u32 lift_00232590() {
    u32 v0;
    u32 v0_0;
    *(u8*)(&D_0035e359) = 0;
    v0 = func_002283e0();
    if ((v0 != 0)) {
        v0_0 = func_002ff538(func_00227120(), (u32)&D_003712f0, 0xc);
        if ((v0_0 == 0)) {
            *(u8*)(&D_0035e359) = 1;
        }
        v0 = v0_0;
    }
    return v0;
}
