#include "jm_treasure.hpp"

namespace Tz {

extern "C" u32 func_001a3570(...);
extern "C" u32 func_00287bc0(...);
extern "C" void func_002a41f0(...);
extern "C" void func_00274ac8(...) asm("_ZN2Tz6Jiminy13JmCommonLeaveEv");

void JmTreasure::LeaveAll() {
    u32 v0 = func_00287bc0();
    if (v0 == 7 || v0 == 26 || v0 == 9 || v0 == 34 || v0 == 8 || v0 == 33) {
        func_002a41f0();
        func_00274ac8();
    }
}

u32 JmTreasure::isEnableNavi(YS::TREASURE::TABLE const* entry) {
    u32 r4 = (u32)(*(u16*)((u32)entry + (s32)(2)));
    u32 r2 = func_001a3570(r4);
    r2 = ((s32)0u < (s32)r2);
    return r2;
}

}  // namespace Tz

// ---- 0x002a4ad8 func_002a4ad8 ----
#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 Cur2WorldId_2a4990(int) asm("_ZN2Tz10JmTreasure11Cur2WorldIdEi");  // Tz::JmTreasure::Cur2WorldId(int) -- arity VERIFIED [links as func_002a4990: E3 name not in the registry yet]

// global pointer at 0x35f5e4 (lui 0x36 + lw -2588)
extern "C" u32 D_0035f5e4 asm("D_0035f5e4");

// func_002a4ad8 is a registry stub. The DECLARATION below carries the asm label
// that binds the name; the DEFINITION after it must NOT repeat asm(...) (parse error).
// a0 used as data (bgez a0, move s0,a0) -> no `void* self`.
s32 func_002a4ad8_impl(s32 a) asm("func_002a4ad8");  // declaration
s32 func_002a4ad8_impl(s32 a) {  // definition: no asm() here
    s32 s0 = a;
    if (a < 0) {
        s0 = (s32)(*(u32*)(D_0035f5e4 + 0x1088));  // v
    }
    s32 idx = (s0 >= 0) ? s0 : s0 + 7;  // movz
    idx >>= 3;
    s32 base = (s32)(*(u32*)(D_0035f5e4 + 0x1084));
    s32 r = (s32)Cur2WorldId_2a4990(base + idx);
    s32 sum = 0;
    if (r > 0) {
        u8* bytes = (u8*)(D_0035f5e4 + 0x1001);  // *(p + 0x1001)
        while (r != 0) {
            r--;
            sum += *bytes;
            bytes += 8;
        }
    }
    s32 base2 = (s32)(*(u32*)(D_0035f5e4 + 0x1084));
    return s0 - (sum - base2) * 8;
}
