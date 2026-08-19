#include "effect.hpp"

namespace ryj {

u32 EFFECT::is_alive() {
    u32 r2 = (u32)(s32)(*(s16*)((u32)this + (s32)(10)));
    r2 = (u32)(r2 ^ 0x0001u);
    r2 = (u32)(r2 & 0x0001u);
    return r2;
}

void EFFECT::set_no_draw() {
    u32 v = *(u32*)((u32)this + 8);
    v |= (u32)0x800000u;
    *(u32*)((u32)this + 8) = v;
}

}  // namespace ryj

// ---- 0x001dc878 _ZN3ryj6EFFECT4freeEv ----
#include "../common/types.h"

extern "C" u32 pppFreeParticle_1e2c00(void*) asm("func_001e2c00");
extern "C" u32 pppDeleteMng_1e6c00(void*) asm("_Z12pppDeleteMngPv");

namespace ryj {
struct EFFECTLayout {
    u32  pad00[2];    // 0x00 - vptr, Type
    u32  Flag;        // 0x08
    u32  pad0c[4];    // 0x0c - Pax, Priority, Data, ID
    void* PartMng;    // 0x1c
    u32  pad20[0x3c]; // 0x20 - rest of struct
};

void EFFECT::free() {
    EFFECTLayout* self = reinterpret_cast<EFFECTLayout*>(this);
    self->Flag |= 0x10000;
    if (self->PartMng) {
        pppFreeParticle_1e2c00(self->PartMng);
        pppDeleteMng_1e6c00(self->PartMng);
        self->PartMng = 0;
    }
}
}  // namespace ryj
