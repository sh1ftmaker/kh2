// coverage: addr=0x002a8920 symbol=_ZN2Tz10JmMiniGame6isPlayEi size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:73.9;e3:near:53.88
#include "common/types.h"

extern "C" u32 func_001d56c8() asm("func_001d56c8");

// 0x002a8920 Tz::JmMiniGame::isPlay(int)
u32 lift_002a8920() asm("_ZN2Tz10JmMiniGame6isPlayEi");
u32 lift_002a8920() {
    return (((u32)(*(u8*)(func_001d56c8())) < (u32)(2)) ^ 1);
}
