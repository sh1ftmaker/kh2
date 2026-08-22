#include "../../common/types.h"

// ---- callees, copied verbatim from the rig skeleton ----
extern "C" u32 ResetPauseMode_1c11a8(int) asm("_ZN2YS8SELECTOR14ResetPauseModeEi");  // YS::SELECTOR::ResetPauseMode(int) -- arity VERIFIED
extern "C" u32 pauseOff_14c9f0(unsigned int) asm("_ZN2dk5Timer8pauseOffEj");  // dk::Timer::pauseOff(unsigned int) -- arity VERIFIED
extern "C" u32 _ZN2YI8SEQUENCED1Ev_239870(void* self) asm("_ZN2YI8SEQUENCED1Ev");  // YI::SEQUENCE::~SEQUENCE() -- arity VERIFIED
extern "C" u32 func_0031e668_31e668(void* self) asm("func_0031e668");  // arity UNKNOWN, but call site puts a pointer in a0

// globals -- names precedented in src/autodecomp/001ad5a8.cpp / 001ad5f0.cpp
extern "C" u32 D_00350a56 asm("D_00350a56");
extern "C" u32 D_00350a70 asm("D_00350a70");
extern "C" u32 D_00350ab0 asm("D_00350ab0");
extern "C" u32 D_00350bb0 asm("D_00350bb0");

// layout row 0x001ad738, 252 bytes
// original name (E3 debug build) is actually YS::WINDOW_BASE::~WINDOW_BASE() (D1)
// -- the map_functions.tsv entry keyed to this exact address is
// "001ad738  sim-vt-med  _ZN2YS11WINDOW_BASED1Ev  YS::WINDOW_BASE::~WINDOW_BASE()",
// which also fits the surrounding address range of every other WINDOW_BASE method
// (0x1ac078..0x1ad020 = set_tail/ctor/update/page_end/close/_draw/draw/set_type/
// draw_anime, all _ZN2YS11WINDOW_BASE...). The task's original "WINDOW_SYSTEM_TUTORIAL"
// hypothesis was a different, nearby function (0x1ad638, _ZN2YS22WINDOW_SYSTEM_TUTORIALD1Ev).
//
// HYPOTHESIS (attempt_010): attempts 1-9 got everything byte-exact except the LAST
// call (to WINDOW's own destructor, func_001ac5b8) which our explicit call sibcalls
// (`j`) while the original does a normal `jal`+`jr ra`. A real base class relationship
// (WINDOW_BASE : public YS::WINDOW) makes this call the COMPILER's own implicit
// base-subobject-destructor chaining call (emitted after our written body, targeting
// YS::WINDOW's D2 -- `_ZN2YS6WINDOWD2Ev`, now registered to WINDOW's D1 address
// 0x001ac5b8 since the PS2 binary folds D1/D2 into one function there -- confirmed
// by 0x001ac630, where the E3 map's D2 would sit, not being a layout-row start).
// An *implicit* destructor-chaining call may not be eligible for the same
// sibcall/tail-call RTL optimization as an explicit trailing call.

// #include the repo's real YS::WINDOW header instead of locally redeclaring
// `class WINDOW { ... }` -- promote's normalize_candidate matches a locally
// declared `class WINDOW {}` against *any* repo header with that class name
// regardless of namespace (src/libyw/window.hpp has an unrelated *global*
// ::WINDOW and sorts first alphabetically), which silently substitutes the
// wrong base class and breaks the link. Including the real header directly
// sidesteps that ambiguity.
#include "window.hpp"

namespace YS {
class WINDOW_BASE : public WINDOW {
public:
    // asm-labeling a destructor is ignored by this gcc 3.2 build (confirmed:
    // the object still came out named _ZN2YS11WINDOW_BASED1Ev/D2Ev regardless of
    // any asm() on the declaration) -- that mangled name IS the row's real E3
    // name per map_functions.tsv, and now that functions.tsv maps
    // 0x001ad738 -> _ZN2YS11WINDOW_BASED1Ev, defining it directly is correct.
    ~WINDOW_BASE();
};
}  // namespace YS

YS::WINDOW_BASE::~WINDOW_BASE() {   // definition: no asm() here
    u32 a0 = (u32)this;
    u32 s0;
    u32 s0_0;
    *(u32*)(a0) = (u32)&D_00350a70;
    *(u8*)(&D_00350a56) = 0;
    ResetPauseMode_1c11a8(0xc);
    pauseOff_14c9f0(8);
    *(u32*)(a0) = (u32)&D_00350ab0;
    if ((a0 != 0xfffff330)) {
        s0 = (a0 + 0x1230);
        do {
            if ((a0 + 0xcd0) == s0) break;
            s0 = (s0 + -0x158);
            ((void(*)(u32))(*(u32*)(*(u32*)(s0))))(s0);
        } while (1);
    }
    _ZN2YI8SEQUENCED1Ev_239870((void*)(a0 + 0xb78));
    *(u32*)(a0) = (u32)&D_00350bb0;
    if ((a0 != 0xfffff9f8)) {
        s0_0 = (a0 + 0xb68);
        do {
            if ((a0 + 0x608) == s0_0) break;
            s0_0 = (s0_0 + -0x158);
            ((void(*)(u32))(*(u32*)(*(u32*)(s0_0))))(s0_0);
        } while (1);
    }
    _ZN2YI8SEQUENCED1Ev_239870((void*)(a0 + 0x4b0));
    _ZN2YI8SEQUENCED1Ev_239870((void*)(a0 + 0x350));
    _ZN2YI8SEQUENCED1Ev_239870((void*)(a0 + 0x1e4));
    func_0031e668_31e668((void*)(a0 + 0x84));
    // no explicit call to the base destructor here -- the compiler inserts its
    // own call to YS::WINDOW::~WINDOW() (D2) after this point.
}
