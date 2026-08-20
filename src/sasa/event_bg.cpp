#include "../common/types.h"


namespace sa {

} // namespace sa

// ---- 0x0022d1d8 func_0022d1d8 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 checkStart_2282f0(int, void* /* TASK* */) asm("_ZN2sa5EVENT10checkStartEiP4TASK");  // sa::EVENT::checkStart(int, TASK*) -- arity VERIFIED
extern "C" u32 get_int_227ca8(void*) asm("_ZN2sa5EVENT7get_intEPv");  // sa::EVENT::get_int(void*) -- arity VERIFIED
extern "C" u32 func_0015c958_15c958(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5) asm("func_0015c958");  // func_0015c958 -- arity UNKNOWN [links as func_0015c958: E3 name not in the registry yet]

// layout row 0x0022d1d8, 96 bytes
// the definition MUST produce the symbol: func_0022d1d8  (source: stub)
// original name (E3 debug build): sa::EVENT::set_bin_fog(sa::BIN_FOG&, TASK*)

void func_0022d1d8_impl(void* self, void* task) asm("func_0022d1d8");  // declaration
void func_0022d1d8_impl(void* self, void* task) {  // definition: no asm() here
    if (checkStart_2282f0(*(s16*)((u8*)self + 4), task) != 0) {
        return;
    }
    u32 v = get_int_227ca8((u8*)self + 8);
    u8 b = ((u8*)self)[12];
    u8 g = ((u8*)self)[13];
    u8 r = ((u8*)self)[14];
    u8 n = ((u8*)self)[6];
    u8 m = ((u8*)self)[7];
    func_0015c958_15c958((void*)v, (void*)b, (void*)g, (void*)r, (void*)n, (void*)m);
}
