#include "jm_synthe.hpp"

// ---- 0x002a74c0 _ZN2Tz8JmSynthe16isEnableMaterialEv ----
#include "../common/types.h"

extern "C" u32 getSaveRam_1058e8() asm("_Z10getSaveRamv");  // getSaveRam() -- arity VERIFIED

namespace Tz {


/* Tz::JmSynthe::isEnableMaterial() */
u8 JmSynthe::isEnableMaterial() {
    u32* p = (u32*)(getSaveRam_1058e8() + 18932);
    u8 r = 0;
    u32 i = 0;
    while ((s32)i < 64) {
        u32 mask = 1u << (i & 0x1f);
        u32 word = p[(u32)(i >> 5)];
        if (word & mask) {
            r = 1;
            break;
        }
        i++;
    }
    return r;
}
}  // namespace Tz
