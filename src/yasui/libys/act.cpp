#include "act.hpp"

// ---- 0x00188340 _ZN2YS3ACT8callbackEiP8BD_VALUEi ----
#include "../../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 syscallback_188398(int, void* /* BD_VALUE* */, int, void* /* YS::VM* */) asm("func_00188398");  // YS::VM::syscallback(int, BD_VALUE*, int, YS::VM*) -- arity VERIFIED [links as func_00188398: E3 name not in the registry yet]

// layout row 0x00188340, 88 bytes
// the definition MUST produce the symbol: _ZN2YS3ACT8callbackEiP8BD_VALUEi  (source: registry)
// original name (E3 debug build): YS::ACT::callback(int, BD_VALUE*, int)

class BD_VALUE;

namespace YS {

}  // namespace YS

// ELEM is not in the DWARF dump -- offsets inferred from `sll code,1` + `lhu 10(elem+code*2)`
struct ELEMLayout {
    u8  pad00[0xa];   // 0x00 -- unverified padding
    u16 Call[1];      // 0x0a
};

struct ACTLayout {
    u8                pad00[0x88];      // 0x00 -- QUEUE Queue (unused here)
    u32               VmObj;            // 0x88
    u32               CurrentTable;     // 0x8c
    const ELEMLayout* CurrentElem;      // 0x90
    u32               Vm;               // 0x94
    s32               CurrentPriority;  // 0x98
    u32               Flag;             // 0x9c  BITFLAG
};

// BD_VALUE has no DWARF layout; the frame (locals 0x00..0x0f, ra @0x10, frame 0x20)
// implies a 16-byte local with only its first word written.
struct BD_VALUE_work {
    u32 unk00;  // 0x00
    u32 unk04;  // 0x04 -- unverified
    u32 unk08;  // 0x08 -- unverified
    u32 unk0c;  // 0x0c -- unverified
};

namespace YS {

/* YS::ACT::callback(int, BD_VALUE*, int) */
int ACT::callback(int code, BD_VALUE* val, int num) {
    ACTLayout* self = reinterpret_cast<ACTLayout*>(this);
    BD_VALUE_work work;

    const ELEMLayout* elem = self->CurrentElem;
    if (elem == 0) return 0;
    if (self->Flag & 4) return 0;

    if (val == 0) {
        work.unk00 = self->VmObj;
        val = reinterpret_cast<BD_VALUE*>(&work);
        num = 1;
    }
    return syscallback_188398((int)this, (void*)(u32)elem->Call[code], (int)val, (void*)num);
}

}  // namespace YS
