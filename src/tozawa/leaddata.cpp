#include "../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 get_file_num_168aa0(void* self, unsigned int) asm("func_00168aa0");  // YS::BINARC::get_file_num(unsigned int) const -- arity VERIFIED

// layout row 0x0023fa08, 100 bytes
// the definition MUST produce the symbol: _ZN2Tz15LeadDataSetTextEPvj  (source: registry)

struct LeadDataLayout {
    u32 unk0;      // 0x00
    u32 unk4;      // 0x04
    u32 unk8;      // 0x08
    u32 unkc;      // 0x0c
    u32 unk10;     // 0x10
    u32 unk14;     // 0x14
};

/* Tz::LeadDataSetText(void*, unsigned int) */
void LeadDataSetText_impl(void* self, unsigned int num) asm("_ZN2Tz15LeadDataSetTextEPvj");

void LeadDataSetText_impl(void* self, unsigned int num) {
    LeadDataLayout* l = reinterpret_cast<LeadDataLayout*>(self);
    l->unk4 = num;
    l->unk8  = get_file_num_168aa0((void*)l->unk4, 28);
    l->unk10 = get_file_num_168aa0((void*)l->unk4, 29);
    l->unkc  = get_file_num_168aa0((void*)l->unk4, 25);
    l->unk14 = get_file_num_168aa0((void*)l->unk4, 24);
}
