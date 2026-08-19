#include "bgm.hpp"

namespace dk {

extern "C" u32 func_00242ea8(...);
extern "C" void func_002ba848(u32);

void BGM::fieldExit() {
    if (func_00242ea8() != 0u) {
        func_002ba848(240u);
        return;
    }
    func_002ba848(960u);
}

}  // namespace dk

// ---- 0x00136968 func_00136968 ----
#include "../../common/types.h"
extern "C" u32 func_001369d0_1369d0() asm("func_001369d0");
extern "C" u32 func_001369f0_1369f0() asm("func_001369f0");
extern "C" void clearOff_136a50() asm("_ZN2dk4BGSE8clearOffEv");
struct D_003b8b20_t { u16 unk0; u16 unk2; };  // layout inferred from load/store widths only
extern "C" u32 D_00347d20 asm("D_00347d20");
extern "C" D_003b8b20_t D_003b8b20 asm("D_003b8b20");
extern "C" u32 D_003b8b38 asm("D_003b8b38");
extern "C" u32 D_00347d24 asm("D_00347d24");
extern "C" void func_00136968() {
    func_001369d0_1369d0();
    func_001369f0_1369f0();
    D_003b8b38 = -1;
    D_003b8b20.unk2 = -1;
    D_003b8b20.unk0 = -1;
    D_00347d24 = -1;
    D_00347d20 = -1;
    clearOff_136a50();
}
