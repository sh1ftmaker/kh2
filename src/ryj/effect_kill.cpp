#include "effect.hpp"
#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 pppFreeParticle_1e2c00(void*) asm("func_001e2c00");  // pppFreeParticle(void*) -- arity VERIFIED [links as func_001e2c00: E3 name not in the registry yet]
extern "C" u32 pppDeleteMng_1e6c00(void*) asm("_Z12pppDeleteMngPv");  // pppDeleteMng(void*) -- arity VERIFIED

// layout row 0x001dc920, 84 bytes
// the definition MUST produce the symbol: _ZN3ryj6EFFECT4killEv  (source: registry)
// original name (E3 debug build): ryj::EFFECT::kill()

namespace ryj {


struct EFFECTLayout {
    u32  pad00[2];    // 0x00 - vptr, Type
    u32  Flag;        // 0x08
    u32  pad0c[4];    // 0x0c - Pax, Priority, Data, ID
    void* PartMng;    // 0x1c
    u32  pad20[0x3c]; // 0x20 - rest of struct
};

/* ryj::EFFECT::kill() */
void EFFECT::kill() {
    EFFECTLayout* self = reinterpret_cast<EFFECTLayout*>(this);
    self->Flag |= 0x10001;
    if (self->PartMng) {
        pppFreeParticle_1e2c00(self->PartMng);
        pppDeleteMng_1e6c00(self->PartMng);
        self->PartMng = 0;
    }
}
}  // namespace ryj
