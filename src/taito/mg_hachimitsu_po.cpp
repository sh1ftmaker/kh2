#include "mg_hachimitsu_po.hpp"

// ---- 0x002db610 _ZN2Ti15MGHachimitsuPod14set_run_effectEi ----
#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 loop_end_1dc818(void* self) asm("_ZN3ryj6EFFECT8loop_endEv");  // ryj::EFFECT::loop_end() -- arity VERIFIED
extern "C" u32 start_effect_bind_16ac38(void* self, int, int, int, void* /* YS::OBJ* */) asm("func_0016ac38");  // YS::OBJ::start_effect_bind(int, int, int, YS::OBJ*) -- arity VERIFIED [links as func_0016ac38: E3 name not in the registry yet]

// layout row 0x002db610, 112 bytes
// the definition MUST produce the symbol: _ZN2Ti15MGHachimitsuPod14set_run_effectEi  (source: registry)
// original name (E3 debug build): Ti::MGHachimitsuPod::set_run_effect(int)

namespace Ti {
class MGHachimitsuPod {
public:
    void set_run_effect(int);   // return type is free (not mangled)
};

struct MGHachimitsuPodLayout {
    u8 pad00[2828];             // 0x00 -- MGObj base + unknown members
    u32 m_effect;               // 0x0B0C (2828) -- ryj::EFFECT*
    u8 pad04[4];                // 0x0B10 -- unknown
    u32 m_run_effect;           // 0x0B14 (2836) -- int
};

/* Ti::MGHachimitsuPod::set_run_effect(int) */
void MGHachimitsuPod::set_run_effect(int eff) {
    MGHachimitsuPodLayout* self = reinterpret_cast<MGHachimitsuPodLayout*>(this);
    if (self->m_effect) {
        if (self->m_run_effect == eff)
            return;
        loop_end_1dc818((void*)self->m_effect);
        self->m_effect = 0;
    }
    if (eff >= 0)
        self->m_effect = start_effect_bind_16ac38(this, eff, 1, 0, 0);
    self->m_run_effect = eff;
}
}  // namespace Ti
