#include "fieldobj.hpp"

// ---- 0x001c2338 func_001c2338 ----
#include "../../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 _ZN2YS6SUMMOND1Ev_1980d0(void* self, u32 a1, u32 a2, u32 a3) asm("func_001980d0");  // YS::SUMMON::~SUMMON() / constructor
extern "C" u32 get_entry_id_16a020(void* self) asm("_ZN2YS3OBJ12get_entry_idEv");  // YS::OBJ::get_entry_id() -- arity VERIFIED

extern "C" u32 D_003513a8 asm("D_003513a8");

void func_001c2338_impl(void* self, const void* objentry, const void* fvec, float f) asm("func_001c2338");
void func_001c2338_impl(void* self, const void* objentry, const void* fvec, float f) {
    _ZN2YS6SUMMOND1Ev_1980d0(self, (u32)objentry, 9, (u32)fvec);
    *(u32*)((char*)self + 0) = (u32)&D_003513a8;
    *(u32*)((char*)self + 1416) |= 0x80000;
    *(u8*)((char*)self + 943) = 64;
    if (get_entry_id_16a020(self) == 1185) {
        *(u32*)((char*)self + 1896) |= 0x10;
    }
}
