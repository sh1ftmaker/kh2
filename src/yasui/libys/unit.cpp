#include "unit.hpp"

// ---- 0x0019eb60 _ZN2YS4UNIT8ActivateEPc ----
#include "../../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" void setVisibleGroup_15ee90(unsigned int) asm("_ZN2dk3Map15setVisibleGroupEj");  // dk::Map::setVisibleGroup(unsigned int) -- arity VERIFIED
extern "C" u64 D_0034ecc8 asm("D_0034ecc8");

namespace YS {



void UNIT::Activate(char* a0) {
    s32 i = 0;
    do {
        // The original uses a branch-likely instruction (beqzl) to check the bit.
        // Based on the assembly, the loop is expected to perform the check
        // for each bit from 0 to 63, and if the bit is set, call setVisibleGroup_15ee90.
        if ((u8)((D_0034ecc8 >> i) & 1)) {
            setVisibleGroup_15ee90((unsigned int)i);
        }
        i = i + 1;
    } while (i < 64);
}

}  // namespace YS
