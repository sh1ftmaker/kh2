#include "jm_diagram.hpp"

namespace Tz {

extern u32 D_0035f5d8 asm("D_0035f5d8");
extern "C" u32 func_00139d78(u32);
extern "C" void func_00139510(u32);
extern u32 D_0035f5dc asm("D_0035f5dc");
extern u8* D_0035f5d4 asm("D_0035f5d4");
extern u8 D_0035f5e0 asm("D_0035f5e0");
extern "C" u32 func_0023f900(u32);
extern "C" u32 func_00292630();
extern "C" u32 func_00293de8(u32);
extern "C" u32 func_00293db8(u32, u32);
extern "C" void func_0023fa08(u32, u32);

void JmDiagram::FileAlloc() {
    u32* s0 = &D_0035f5dc;
    func_0023f900(*s0);
    if (func_00292630() != 0) {
        return;
    }

    u8* t6 = D_0035f5d4;
    u32 r = func_00293de8((s8)t6[2]);
    u32 r2 = func_00293db8(4, r);
    func_0023fa08(*s0, r2);
    D_0035f5e0 = 1;
}

void JmDiagram::LeaveSeq() {
    u32 p = D_0035f5d8 + 408;
    if (func_00139d78(p) == 0u) {
        return;
    }
    func_00139510(D_0035f5d8 + 408);
}

extern "C" u32 func_00287bc0();

void JmDiagram::FadeOutAll() {
    u32 v0 = func_00287bc0();
    if (v0 == 6 || v0 == 12 || v0 == 40) {
        u32* s0 = &D_0035f5d8;
        if (func_00139d78(*s0 + 816) != 0) {
            func_00139510(*s0 + 816);
        }
    }
}

}  // namespace Tz

// ---- 0x002a1c68 func_002a1c68 ----
#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 isFlushing_292630() asm("_ZN2Tz18LoadDataIsFlushingEv");  // Tz::LoadData::isFlushing() -- arity VERIFIED
extern "C" u32 getFileAddress_23f900(void* self) asm("_ZNK2Tz7LayFile14getFileAddressEv");  // Tz::LayFile::getFileAddress() const -- arity VERIFIED
extern "C" u32 func_0023fad0_23fad0(u32) asm("func_0023fad0");  // arity UNKNOWN
extern "C" u32 Clear_293d80(int) asm("_ZN2Tz6JMData5ClearEi");  // Tz::JMData::Clear(int) -- arity VERIFIED

// layout row 0x002a1c68, 108 bytes
// the definition MUST produce the symbol: func_002a1c68  (source: registry)
// original name (E3 debug build): Tz::JmDiagram::LeaveAll(int)

extern "C" u32 D_0035f5dc asm("D_0035f5dc");
extern "C" u8 D_0035f5e0 asm("D_0035f5e0");
extern "C" u8 D_0035f5e1 asm("D_0035f5e1");

void func_002a1c68_impl(int) asm("func_002a1c68");  // declaration
void func_002a1c68_impl(int) {
    if (isFlushing_292630() == 0) {
        u32* p = &D_0035f5dc;
        if (D_0035f5e0 != 0) {
            u32 r = getFileAddress_23f900((void*)*p);
            if (r != 0) {
                func_0023fad0_23fad0(*p);
            }
        }
        Clear_293d80(5101);
        D_0035f5e0 = 0;
        D_0035f5e1 = 0;
    }
}
