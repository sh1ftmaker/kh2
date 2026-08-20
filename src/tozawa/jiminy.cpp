#include "jiminy.hpp"
#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
// isExistParent takes no arguments: the jal at 0x27624c has a nop delay slot and no a0..a3 setup.
extern "C" u32 isExistParent_276368(void) asm("_Z16ctarget_00276368jjjj");  // Tz::Jiminy::isExistParent()
// 8 register arguments at the call site (a0..a3, t0..t3); the 48-byte frame holds only the 5 saved
// regs, so there is no outgoing stack-arg slot -> the call really passes 8 values.
extern "C" u32 CreateSprt_28d8c0(u32 /* dk::Sprite* */, int, u32, u32, u32 /* Tz::Layout* */, int, int, int) asm("_ZN2Tz5Pause16CreateFadeObjectEz");  // Tz::MenuUtil::CreateSprt(...)
extern "C" u32 setNum_138c10(u32 self, int) asm("_ZN2dk6Sprite6setNumEi");  // dk::Sprite::setNum(int) -- non-static member: object in a0

// globals reached with lui + displaced load/store
extern "C" u32 D_0035f144;  // lui 0x36 + -3772
extern "C" u32 D_0035f148;  // lui 0x36 + -3768
extern "C" u32 D_0035f14c;  // lui 0x36 + -3764
extern "C" u32 D_0035f204;  // lui 0x36 + -3580
extern "C" u32 D_0035f210;  // lui 0x36 + -3568
// lui 0x37 + 15712 / 15720 : two addresses materialised with addiu, then read with lh at 0(x)/4(x)
// -> s16 tables (element width from the lh, contents unverified).
extern "C" s16 D_00373d60;
extern "C" s16 D_00373d68;

// layout row 0x00276220, 220 bytes
// the definition MUST produce the symbol: _ZN2Tz6Jiminy15SetParentSeqNumEii  (source: registry)
// original name (E3 debug build): Tz::Jiminy::SetParentSeqNum(int, int)
// a0 is used as data (bnez a0 / sw a0 into D_0035f144), so there is no `this`: the method is static.

namespace Tz {


/* Tz::Jiminy::SetParentSeqNum(int, int) */
void Jiminy::SetParentSeqNum(int mode, int seq) {
    s16* tbl;

    if (mode == 0) {
        tbl = &D_00373d60;
    } else {
        tbl = &D_00373d68;
    }

    if (isExistParent_276368() == 0) {
        CreateSprt_28d8c0(D_0035f204, 30041, D_0035f14c, D_0035f148, D_0035f210, tbl[seq], -1, 0);
    } else {
        setNum_138c10(D_0035f204, tbl[seq]);
    }

    if (seq == 0) {
        *(s32*)(D_0035f204 + 392) = tbl[2];
    } else {
        *(s32*)(D_0035f204 + 392) = -1;
    }

    D_0035f144 = mode;
}
}  // namespace Tz
