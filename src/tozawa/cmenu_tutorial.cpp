#include "cmenu_tutorial.hpp"

namespace Tz {

extern "C" u32 func_0027d350(...);
extern "C" u32 func_00287bc0(...);

u32 CmTutorial::LeaveAll() {
    u32 r2 = func_00287bc0();
    if (r2 != 36u) {
        return r2;
    }
    return func_0027d350();
}

}  // namespace Tz

// ---- 0x002831e0 func_002831e0 ----
#include "../common/types.h"

extern "C" u32 SetHideCursor_257708(bool) asm("_ZN2Tz5CmTop13SetHideCursorEb");
extern "C" u32 GetDrawList_283d00(int) asm("func_00283d00");
extern "C" u32 InitParty_283f50() asm("func_00283f50");
extern "C" u32 CreateList_2833f8() asm("func_002833f8");

extern "C" u32 D_0035f2b4 asm("D_0035f2b4");

void func_002831e0_impl(void* self, void* arg1) asm("func_002831e0");
void func_002831e0_impl(void* self, void* arg1) {
    SetHideCursor_257708(true);
    u32* p = (u32*)D_0035f2b4;
    *p = (u32)arg1;
    GetDrawList_283d00((int)self);
    InitParty_283f50();
    CreateList_2833f8();
}
