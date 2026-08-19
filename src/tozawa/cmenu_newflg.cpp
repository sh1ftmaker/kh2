#include "cmenu_newflg.hpp"

namespace Tz {

extern "C" u32 getSaveRam() asm("_Z10getSaveRamv");

u32 CmNewFlg::GetSram() {
    u32 r2 = getSaveRam();
    r2 = (u32)((s32)r2 + 16808);
    return r2;
}

}  // namespace Tz

// ---- 0x002865d0 func_002865d0 ----
#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
// return types are not mangled -- change them freely (u32 / s32 / void / void*).
// a NON-static member function takes the object pointer as its FIRST argument:
//   add `void* self` in front of the listed args when the call site puts an object in $a0.
extern "C" u32 GetSram_2859a0() asm("_ZN2Tz8CmNewFlg7GetSramEv");  // Tz::CmNewFlg::GetSram() -- arity VERIFIED

// layout row 0x002865d0, 84 bytes
// the definition MUST produce the symbol: func_002865d0  (source: stub)
// original name (E3 debug build): Tz::CmNewFlg::SetStatFlg(int)

// func_002865d0 is a registry stub. The DECLARATION below carries the asm label
// that binds the name; the DEFINITION after it must NOT repeat asm(...) (parse error).
// Decide the arguments from the disassembly: a0 used as data -> no `void* self`.
void func_002865d0_impl(int flg) asm("func_002865d0");  // declaration
void func_002865d0_impl(int flg) {  // definition: no asm() here
    u32* sram = (u32*)((u32)GetSram_2859a0() + 0xcc);
    u32 idx = (u32)flg >> 5;
    u32 bit = 1u << ((u32)flg & 0x1f);
    u32 v = sram[idx];
    if ((v & bit) == 0u) {
        sram[idx] = v | bit;
    }
}
