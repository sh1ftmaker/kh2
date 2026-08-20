#include "menu_item.hpp"

// ---- 0x0028c4f8 _ZN2Tz8MenuItem6updateEv ----
#include "../common/types.h"

extern "C" u32 _ZN2Tz12LoadDataFreeEz_106420(void*) asm("_ZN2Tz12LoadDataFreeEz");  // operator delete(void*)

extern "C" u32 D_0035F3C4 asm("D_0035F3C4");
extern "C" u32 D_0035F3C8 asm("D_0035F3C8");
extern "C" u32 D_0035F3CC asm("D_0035F3CC");
extern "C" u32 D_0035F3D0 asm("D_0035F3D0");

namespace Tz {


void MenuItem::update() {
    if (D_0035F3C8 != 0) {
        u32 s1 = D_0035F3C4;
        if (s1 != 0) {
            u32 s0 = s1 + 0x3700;
            while (true) {
                if (s1 == s0) break;
                s0 -= 0x1B8;
                u32 t6 = *(u32*)s0;
                u32 t7 = *(u32*)(t6 + 12);
                ((void (*)(u32))t7)(s0);
            }
            _ZN2Tz12LoadDataFreeEz_106420((void*)s1);
            D_0035F3C4 = 0;
        }
        D_0035F3C4 = D_0035F3C8;
        D_0035F3CC = D_0035F3D0;
        D_0035F3C8 = 0;
        D_0035F3D0 = 0;
    } else {
        u32 s1 = D_0035F3C4;
        if (s1 != 0) {
            u32 s0 = s1 + 0x3700;
            while (true) {
                if (s1 == s0) break;
                s0 -= 0x1B8;
                u32 t6 = *(u32*)s0;
                u32 t7 = *(u32*)(t6 + 12);
                ((void (*)(u32))t7)(s0);
            }
            _ZN2Tz12LoadDataFreeEz_106420((void*)s1);
            D_0035F3C4 = 0;
        }
        D_0035F3C4 = 0;
    }
}
}  // namespace Tz
