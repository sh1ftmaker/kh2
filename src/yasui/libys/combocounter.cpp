#include "combocounter.hpp"

// ---- 0x001d1f38 func_001d1f38 ----
#include "../../common/types.h"

extern "C" u32 _ZN2YS10TEST_SOUND6WIDGETD1Ev_1d1678(void* self, int) asm("func_001d1678");
extern "C" u32 init_1d19e8(void* self, int) asm("_ZN2YS13MISSION_COUNT4initEi");
extern "C" u32 set_image_1d16e8(void* self, u32, int) asm("_ZN2YS9MISSION2D9set_imageEN2dk9INFO_BASE5ALIGNEi");

extern "C" u32 D_003525c8 asm("D_003525c8");
extern "C" u32 D_003525e8 asm("D_003525e8");

void func_001d1f38_impl(void* self) asm("func_001d1f38");

void func_001d1f38_impl(void* self) {
    u32* p = (u32*)self;
    p[1] = 0;
    p[0] = (u32)&D_003525c8;
    p[2] = 0;
    p[3] = 0;
    _ZN2YS10TEST_SOUND6WIDGETD1Ev_1d1678(self, -1);
    p[12] = 0;
    p[0] = (u32)&D_003525e8;
    init_1d19e8(self, -1);
    p[11] = 0;
    p[14] = 0;
    set_image_1d16e8(self, 0, 12);
}

// ---- 0x001d2248 func_001d2248 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 check_warning_1d17b0(void* self, int) asm("_ZN2YS9MISSION2D13check_warningEi");  // YS::MISSION2D::check_warning(int) -- arity VERIFIED

// layout row 0x001d2248, 80 bytes
// the definition MUST produce the symbol: func_001d2248  (source: stub)
// original name (E3 debug build): YS::COMBOCOUNTER::set_combo_max(int)

void func_001d2248_impl(void* self, int max) asm("func_001d2248");  // declaration
void func_001d2248_impl(void* self, int max) {  // definition: no asm() here
    struct ComboLayout {
        u32 pad00[0x1c / 4]; // 0x00
        s32 unk1c;           // 0x1c
        u32 pad20[0x18 / 4]; // 0x20
        s32 ComboMax;        // 0x38
        f32 Time;            // 0x3c
    };
    ComboLayout* c = reinterpret_cast<ComboLayout*>(self);
    if (c->ComboMax < max) {
        c->ComboMax = max;
        check_warning_1d17b0(self, max);
        if (c->unk1c != 0 && c->unk1c < c->ComboMax) {
            c->unk1c = c->ComboMax;
        }
    }
}
