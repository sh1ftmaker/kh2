#include "../naka/libkn/animation.hpp"
#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 getNext_132350(void* self) asm("_ZNK2kn13AnimationWork7getNextEv");  // kn::AnimationWork::getNext() const -- arity VERIFIED

// layout row 0x0011ea40, 84 bytes
// the definition MUST produce the symbol: _ZN2kn8ModelObj13playAnimationEf

namespace kn {

// vtable slot 0x14 (index 5) is the one called here; the earlier slots are
// placeholders only -- their signatures are unknown and unused.


class ModelObj {
public:
    void playAnimation(float);   // return type is free (not mangled)
};

struct ModelObjLayout {
    u8 pad00[0x38];         // 0x00 -- not in the DWARF dump, offsets unverified
    AnimationWork* m_Anim;  // 0x38
};

/* kn::ModelObj::playAnimation(float) */
void ModelObj::playAnimation(float a0) {
    AnimationWork* p = reinterpret_cast<ModelObjLayout*>(this)->m_Anim;
    while (p != 0) {
        p->vf14(a0);
        p = (AnimationWork*)getNext_132350(p);
    }
}

}  // namespace kn
