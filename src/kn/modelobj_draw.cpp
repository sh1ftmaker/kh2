#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
// return types are not mangled -- change them freely (u32 / s32 / void / void*).
// a NON-static member function takes the object pointer as its FIRST argument:
//   add `void* self` in front of the listed args when the call site puts an object in $a0.
extern "C" u32 getType_132338(void* self) asm("func_00132338");  // arity UNKNOWN -- disasm shows self-only call
extern "C" u32 swap_132cb8(void* self) asm("func_00132cb8");  // arity UNKNOWN -- disasm shows self-only call
extern "C" u32 getNext_132350(void* self) asm("_ZNK2kn13AnimationWork7getNextEv");  // kn::AnimationWork::getNext() const -- arity VERIFIED

// layout row 0x0011c8f8, 292 bytes
// the definition MUST produce the symbol: _ZN2kn8ModelObj5draw_EPNS_9DrawParamEbPNS_5ModelEPPN3Axa11DMA_SET_TAGEPc  (source: registry)
// original name (E3 debug build): kn::ModelObj::draw_(kn::DrawParam*, bool, kn::Model*, Axa::DMA_SET_TAG**, char*)

namespace kn { class DrawParam; }
namespace kn { class Model; }
namespace Axa { class DMA_SET_TAG; }

namespace kn {
class ModelObj {
public:
    int draw_(kn::DrawParam*, bool, kn::Model*, Axa::DMA_SET_TAG**, char*);
};

// hypothesis (attempt_002): attempt_001 was 99.86% fuzzy, only diff was the second vtable call's
// function-pointer temp landing in t6 instead of v0. Try giving the second call's result an int
// return type and assigning it to a variable (like the first call does with `ret`), instead of
// a bare discarded void call, to see if that nudges the allocator back onto v0.
struct ModelObjLayout {
    u8    pad00[0x0c];       // 0x00 -- vptr + unknown, not in DWARF (no field dump for kn::ModelObj)
    u32   systemFlag_;       // 0x0c
    u8    pad10[0x38 - 0x10]; // 0x10 -- unknown, not in DWARF
    void* anmWork_;          // 0x38
};

struct DrawParamLayout {
    u8    pad00[0x34];   // 0x00 -- flag/rgba/fog/frame/zbuf/zbias/texture/texfade/stealth_rgb/partsColor/lightParam
    void* specialMatrix; // 0x34
};

/* kn::ModelObj::draw_(kn::DrawParam*, bool, kn::Model*, Axa::DMA_SET_TAG**, char*) */
int ModelObj::draw_(kn::DrawParam* param, bool alpha, kn::Model* model, Axa::DMA_SET_TAG** tag, char* display_flag) {
    ModelObjLayout* self = reinterpret_cast<ModelObjLayout*>(this);
    DrawParamLayout* p = reinterpret_cast<DrawParamLayout*>(param);

    int ret = ((int(*)(void*, void*, void*, void*, void*, void*, u32, void*))(*(u32*)((*(u32*)(model)) + 0x4c)))
        (model, reinterpret_cast<u8*>(this) + 0x40, tag, param, display_flag, self->anmWork_, alpha, p->specialMatrix);

    if (!alpha && (self->systemFlag_ & 2)) {
        int ret2 = ((int(*)(void*, void*, void*, void*, void*, void*, u32, void*))(*(u32*)((*(u32*)(model)) + 0x54)))
            (model, reinterpret_cast<u8*>(this) + 0x40, tag, param, display_flag, self->anmWork_, 0, p->specialMatrix);
        (void)ret2;
    }

    if (ret || alpha) {
        void* tmp = self->anmWork_;
        while (tmp) {
            if (getType_132338(tmp) == 1) {
                swap_132cb8(tmp);
            }
            tmp = (void*)getNext_132350(tmp);
        }
    }
    return ret;
}
}  // namespace kn
