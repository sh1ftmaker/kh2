#include "cmenu_custom.hpp"

namespace Tz {

extern u32 D_0035f12c asm("D_0035f12c");

extern "C" u32 func_001a80c8(...);

u32 CmCustom::GetItemTbl(s32 index) {
    u32 p = ((u32)index << 3) + D_0035f12c;
    s32 v = *(s16*)(p + 8u);
    if (v != 0) {
        return func_001a80c8((u32)v);
    }
    return 0u;
}

extern "C" u32 func_00287bc0();
extern "C" void func_00271e80();
extern "C" void func_002723e0();
extern "C" void func_00256ea8();

void CmCustom::LeaveAll() {
    if ((u32)(func_00287bc0() - 25u) >= 9u) {
        return;
    }
    func_00271e80();
    func_002723e0();
    func_00256ea8();
}

}  // namespace Tz

// ---- 0x00271870 _ZN2Tz8CmCustom12Command2ItemEi ----
#include "../common/types.h"

extern "C" u32 Each_1a8110(void* /* YS::ITEM_TABLE const* */) asm("_ZN2YS10ITEM_TABLE4EachEPKS0_");
extern "C" u32 GetCommand_1a3820(int) asm("func_001a3820");

namespace Tz {

}

int Tz::CmCustom::Command2Item(int cmd) {
    u32 item = 0;
    u32 result = 0;
    if (this == 0)
        return result;
    while ((item = Each_1a8110((void*)item)) != 0) {
        u8 type = *(u8*)(item + 2);
        if (type != 18 && type != 0)
            continue;
        u32 c = GetCommand_1a3820(*(u16*)item);
        if (c != (u32)this)
            continue;
        result = *(u16*)item;
        break;
    }
    return result;
}
