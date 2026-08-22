#include "unitload.hpp"

namespace Tz {

extern "C" u32 func_001688b8();

u32 UnitLoad::isReading() {
    u32 t5;
    if (func_001688b8() != 0) {
        goto set1;
    }
    t5 = 0;
    {
        u32 base = 0x00360000u;
        u32 t6 = *(u8*)(base + (s32)-2846);
        if (t6 == 0) {
            goto out;
        }
    }
set1:
    t5 = 1;
out:
    return t5;
}

}  // namespace Tz

// ---- 0x002927b8 func_002927b8 ----
#include "../common/types.h"

extern "C" u32 _ZdaPv_106450(void*) asm("_ZdaPv");  // operator delete[](void*) -- arity VERIFIED

// globals (addresses decoded from lui 0x36 + signed lo)
extern "C" u32 D_0035f4bc asm("D_0035f4bc");
extern "C" u32 D_0035f4c0 asm("D_0035f4c0");
extern "C" u32 D_0035f4c4 asm("D_0035f4c4");
extern "C" u32 D_0035f4c8 asm("D_0035f4c8");
extern "C" u32 D_0035f4cc asm("D_0035f4cc");
extern "C" u32 D_0035f4d0 asm("D_0035f4d0");
extern "C" u32 D_0035f4d4 asm("D_0035f4d4");
extern "C" u32 D_0035f4dc asm("D_0035f4dc");
extern "C" u32 D_0035f4e4 asm("D_0035f4e4");
extern "C" u16 D_0035f4d8 asm("D_0035f4d8");
extern "C" u16 D_0035f4e0 asm("D_0035f4e0");
extern "C" u8  D_0035f4e2 asm("D_0035f4e2");

void func_002927b8_impl(void) asm("_ZN2Tz8UnitLoad4ExitEv");
void func_002927b8_impl(void) {
    D_0035f4bc = 0;
    D_0035f4c0 = 0;
    D_0035f4c4 = 0;
    D_0035f4d8 = 0;
    D_0035f4e0 = 0;
    D_0035f4d0 = 0;
    D_0035f4c8 = 0;
    D_0035f4cc = 0;
    D_0035f4e2 = 0;
    if (D_0035f4d4 != 0) {
        _ZdaPv_106450((void*)D_0035f4d4);
        D_0035f4d4 = 0;
    }
    if (D_0035f4dc != 0) {
        _ZdaPv_106450((void*)D_0035f4dc);
        D_0035f4dc = 0;
    }
    if (D_0035f4e4 != 0) {
        _ZdaPv_106450((void*)D_0035f4e4);
        D_0035f4e4 = 0;
    }
}
