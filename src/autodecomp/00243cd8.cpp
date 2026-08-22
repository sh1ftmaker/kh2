// coverage: addr=0x00243cd8 symbol=_ZN2Tz4HEFT8SetupSelEv size=340 class=loop source=twins status=exact fuzzy=100.0
// coverage-alternatives: lift:near:91.58;ghidra:near:72.89;m2c:near:55.22
#include "/data/agent-tom/kh2/rig-wt/src/tozawa/smenu_hb.hpp"
#include "/data/agent-tom/kh2/rig-wt/src/common/types.h"

// ---- inferred layouts (NOT from the DWARF dump -- offsets/widths taken from the row's
// instructions only, and flagged as unverified) ----

// Global table at 0x003720a0, stride 0x24 (= 36, from the final `mult a1, s5, 36`).
//   +0x00 short const*  (arg6 of SetItem: `addu t2, s3, s6`)
//   +0x08 short const*  (arg7 of SetItem: `addu t3, s3, s7`, s7 = base + 8)
//   +0x10 `lb`  -> s8
//   +0x12 `lhu` -> u16
struct SeqInfoLayout {
    s16 unk00[4];      // 0x00
    s16 unk08[4];      // 0x08
    s8  unk10;         // 0x10
    u8  pad11;         // 0x11 -- not in the DWARF dump, unverified
    u16 unk12;         // 0x12
    u8  pad14[0x10];   // 0x14 -- unknown tail; stride is 0x24
};

struct SeqInfoTableLayout {
    SeqInfoLayout e[2];
};

// Tz::Select item returned by GetItemPtr: dk::Obj2D at +0, YI::SEQUENCE subobject at +0x18,
// `sw v0, 0x1ac` / `sw v0, 0x1b0`. Not in the DWARF dump, offsets unverified.
struct SelectItemLayout {
    u8  pad00[0x18];   // 0x00 -- dk::Obj2D base
    u8  seq[0x194];    // 0x18 -- YI::SEQUENCE subobject
    u32 unk1ac;        // 0x1ac
    u32 unk1b0;        // 0x1b0
};

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
// return types are not mangled -- change them freely (u32 / s32 / void / void*).
// a NON-static member function takes the object pointer as its FIRST argument:
//   add `void* self` in front of the listed args when the call site puts an object in $a0.
extern "C" u32 SetItem_288d80(void* self, int, int, int, void* /* Tz::Layout* */, int, short const*, short const*) asm("_ZN2Tz6Select7SetItemEiiiPNS_6LayoutEiPKsS4_");  // Tz::Select::SetItem(int, int, int, Tz::Layout*, int, short const*, short const*) -- arity VERIFIED
extern "C" SelectItemLayout* GetItemPtr_2891b8(void* self, int) asm("_ZN2Tz6Select10GetItemPtrEi");  // Tz::Select::GetItemPtr(int) -- arity VERIFIED
extern "C" u32 GetParamCr_23aa78(void* self) asm("_ZN2YI8SEQUENCE10GetParamCrEv");  // YI::SEQUENCE::GetParamCr() -- arity VERIFIED
extern "C" u32 SetExOffset_288e08(void* self, int, int, int) asm("_ZN2Tz6Select11SetExOffsetEiii");  // Tz::Select::SetExOffset(int, int, int) -- arity VERIFIED
extern "C" u32 GetParamEx_23aa98(void* self) asm("_ZN2YI8SEQUENCE10GetParamExEv");  // YI::SEQUENCE::GetParamEx() -- arity VERIFIED
extern "C" u32 GetAlignType_28dd90(int) asm("_ZN2Tz8MenuUtil12GetAlignTypeEi");  // Tz::MenuUtil::GetAlignType(int) -- arity VERIFIED [links as func_0028dd90: E3 name not in the registry yet]
extern "C" u32 GetFontType_28ddd8(int) asm("_ZN2Tz8MenuUtil11GetFontTypeEi");  // Tz::MenuUtil::GetFontType(int) -- arity VERIFIED
extern "C" u32 resetSeqAlphaOnly_1395f8(void* self) asm("_ZN2dk5Obj2D17resetSeqAlphaOnlyEv");  // dk::Obj2D::resetSeqAlphaOnly() -- arity VERIFIED
extern "C" u32 SetCurrent_2891f0(void* self, int, bool, int, int) asm("_ZN2Tz6Select10SetCurrentEibii");  // Tz::Select::SetCurrent(int, bool, int, int) -- arity VERIFIED
extern "C" u32 SetMsg_2b4388(void* self, void* /* Tz::SeqInfo const* */, int) asm("_ZN2Tz9SmHelpMsg6SetMsgEPKNS_7SeqInfoEi");  // Tz::SmHelpMsg::SetMsg(Tz::SeqInfo const*, int) -- arity VERIFIED

// ---- globals reached with lui + displacement ----
extern "C" SeqInfoTableLayout D_003719e8 asm("D_003719e8");
extern "C" void* D_0035ecec asm("D_0035ecec");
extern "C" void* D_0035ecf0 asm("D_0035ecf0");
extern "C" void* D_0035ed08 asm("D_0035ed08");

// layout row 0x0024ba58, 340 bytes
// the definition MUST produce the symbol: _ZN2Tz4HBTE8SetupSelEv  (source: registry)
// original name (E3 debug build): Tz::HBTE::SetupSel()

namespace Tz {


/* Tz::HBTE::SetupSel() */
u32 HBTE::SetupSel();

}  // namespace Tz


// synthesized: add this method to the real header on promotion
namespace Tz { class HEFT { public: u32 SetupSel(); }; }
// the definition MUST produce the symbol: _ZN2Tz4HBTE8SetupSelEv  (source: registry)
// original name (E3 debug build): Tz::HBTE::SetupSel()

namespace Tz {


/* Tz::HBTE::SetupSel() */
u32 Tz::HEFT::SetupSel() {
    int cur = 0;

    for (int i = 0; i < 2; i++) {
        if (D_003719e8.e[i].unk10 != 0) {
            cur = i;
        }
        SetItem_288d80(D_0035ecec, i, 0, 0, D_0035ecf0, D_003719e8.e[i].unk12,
                       D_003719e8.e[i].unk00, D_003719e8.e[i].unk08);

        SelectItemLayout* p = GetItemPtr_2891b8(D_0035ecec, i);
        SetExOffset_288e08(D_0035ecec, i, GetParamCr_23aa78(p->seq), 0);

        u32 ex = GetParamEx_23aa98(p->seq);
        p->unk1b0 = GetAlignType_28dd90(ex);
        p->unk1ac = GetFontType_28ddd8(ex);
        resetSeqAlphaOnly_1395f8(p);
    }

    SetCurrent_2891f0(D_0035ecec, cur, true, 0, 2);
    return SetMsg_2b4388(D_0035ed08, &D_003719e8.e[cur], 0);
}
}
