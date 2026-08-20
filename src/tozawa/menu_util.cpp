#include "menu_util.hpp"

namespace Tz {

u32 MenuUtil::GetFontType(s32 a0) {
    s32 t6 = 100;
    s32 t7 = 10;
    s32 v0 = a0 % t6;
    s32 t6h = v0 % t7;
    v0 = v0 - t6h;
    v0 = v0 ^ 10;
    return (u32)(v0 == 0);
}

}  // namespace Tz

// ---- 0x0027a7e0 func_0027a7e0 ----
#include "../common/types.h"

extern "C" u32 GetListBuffer_257770() asm("_ZN2Tz5CmTop13GetListBufferEv");
extern "C" u32 GetMode_287bc0() asm("_ZN2Tz8MenuBase7GetModeEv");
extern "C" u32 SprtFadeOut_28dac8(void* /* dk::Sprite* */, int) asm("_ZN2Tz6Select7FadeOutEz");
extern "C" u32 func_0027b4e8_27b4e8() asm("func_0027b4e8");
extern "C" u32 isExist_28be58(u32) asm("_ZN2Tz16LeadDataIsActiveEj");
extern "C" u32 isExist_28bdb8(u32) asm("_ZN2Tz13LeadDataLeaveEj");
extern "C" u32 isExist_28acc8(u32) asm("_ZN2Tz6Select9isCreatedEz");
extern "C" u32 isFadeOut_28acb8(u32) asm("_ZN2Tz6Select9isFadeOutEv");
extern "C" u32 FadeOut_28aa40(u32) asm("_ZN2Tz6Select5StartEz");

extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_0035f01c asm("D_0035f01c");

void func_0027a7e0_impl(u32 a) asm("func_0027a7e0");
void func_0027a7e0_impl(u32 a) {
    u8 s1 = (u8)a;
    u32 s0 = GetListBuffer_257770();

    if (GetMode_287bc0() != 16) {
        return;
    }

    SprtFadeOut_28dac8((void*)s0, 232);

    if (s1 != 0) {
        func_0027b4e8_27b4e8();
    }

    if (isExist_28be58(D_0035f04c) != 0) {
        isExist_28bdb8(D_0035f04c);
    }

    if (isExist_28acc8(D_0035f01c) != 0) {
        if (isFadeOut_28acb8(D_0035f01c) == 0) {
            FadeOut_28aa40(D_0035f01c);
        }
    }
}
