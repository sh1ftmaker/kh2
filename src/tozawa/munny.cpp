#include "munny.hpp"

namespace Tz {

extern "C" u32 getSaveRam() asm("_Z10getSaveRamv");

u32 Munny::Get() {
    u32 p = getSaveRam();
    return *(u32*)((u32)p + 9280);
}

}  // namespace Tz

// ---- 0x00242500 _ZN2Tz5Munny3AddEj ----
#include "common/types.h"

namespace Tz {



extern "C" u32 getSaveRam() asm("_Z10getSaveRamv");
extern "C" u32 func_002424c0() asm("func_002424c0");

u32 Munny::Add(unsigned int a) {
    if (func_002424c0()) {
        u32 p = getSaveRam();
        *(u32*)(p + 9280) = *(u32*)(p + 9280) + a;
    } else {
        u32 p = getSaveRam();
        *(u32*)(p + 9280) = 999999;
    }
    return *(u32*)(getSaveRam() + 9280);
}

}  // namespace Tz
