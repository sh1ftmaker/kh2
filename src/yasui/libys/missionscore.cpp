#include "missionscore.hpp"

// ---- 0x001d4c98 func_001d4c98 ----
#include "../../common/types.h"

extern "C" u32 _ZN2YS10TEST_SOUND6WIDGETD1Ev_1d1678(void* self, int) asm("func_001d1678");
extern "C" u32 init_1d19e8(void* self, int) asm("_ZN2YS13MISSION_COUNT4initEi");
extern "C" u32 set_image_1d16e8(void* self, u32, int) asm("_ZN2YS9MISSION2D9set_imageEN2dk9INFO_BASE5ALIGNEi");

extern "C" u32 D_003525c8 asm("D_003525c8");
extern "C" u32 D_00352750 asm("D_00352750");

void func_001d4c98_impl(void* self) asm("_ZN2YS13MISSION_SCOREC1Ev");

void func_001d4c98_impl(void* self) {
    u32* p = (u32*)self;
    p[1] = 0;
    p[0] = (u32)&D_003525c8;
    p[2] = 0;
    p[3] = 0;
    _ZN2YS10TEST_SOUND6WIDGETD1Ev_1d1678(self, -1);
    p[12] = 0;
    p[0] = (u32)&D_00352750;
    u8* q = (u8*)(self + 57);
    int i = 127;
    do {
        *q = 0;
        q += 4;
    } while (--i >= 0);
    init_1d19e8(self, -1);
    set_image_1d16e8(self, 0, 12);
}
