#include "sequence.hpp"

namespace YI {

u32 SEQUENCE::GetDrawMode() { return (*(u32*)((u32)this + 252) != 0); }

u32 SEQUENCE::GetPlayMode() {
    u32 v = *(u32*)((u32)this + 252);
    v = (u32)((s32)v + (-1));
    return (v < 2u);
}

}  // namespace YI

// ---- 0x0023a9c0 _ZN2YI8SEQUENCE11GetActiveXYEPiS1_ ----
#include "../common/types.h"

extern "C" u32 UpdateActive_23a0d8(void* self) asm("func_0023a0d8");

namespace YI {


struct SEQUENCELayout {
    u8  pad00[0xd4];
    u8  active_flag;  // 0xd4
    u8  pad_d5[0xf];
    u32 active_x;     // 0xe4
    u32 active_y;     // 0xe8
};

void SEQUENCE::GetActiveXY(int* x, int* y) {
    SEQUENCELayout* s = reinterpret_cast<SEQUENCELayout*>(this);
    if (s->active_flag == 0)
        UpdateActive_23a0d8(this);
    *x = s->active_x;
    *y = s->active_y;
}
}  // namespace YI
