#include "linkflag.hpp"

// ---- 0x001d5868 func_001d5868 ----
#include "../../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 CheckFlag_181500(int) asm("_ZN2YS8PROGRESS9CheckFlagEi");  // YS::PROGRESS::CheckFlag(int) -- arity VERIFIED
extern "C" u32 Check_1a6d08(int) asm("_ZN2YS8MENUFLAG5CheckEi");  // YS::MENUFLAG::Check(int) -- arity VERIFIED
extern "C" u32 Check_1b8958(int) asm("_ZN2YS9WORLDFLAG5CheckEi");  // YS::WORLDFLAG::Check(int) -- arity VERIFIED

// layout row 0x001d5868, 116 bytes
// the definition MUST produce the symbol: func_001d5868  (source: stub)
// original name (E3 debug build): YS::LINK_FLAG::exec() const

struct LINK_FLAG_Layout {
    u16 m_Flag;      // 0x0
    u16 m_Require[12]; // 0x4
    u32 m_Num;       // 0x38
};

u32 func_001d5868_impl(void* self) asm("func_001d5868");  // declaration
u32 func_001d5868_impl(void* self) {  // definition: no asm() here
    LINK_FLAG_Layout* lf = reinterpret_cast<LINK_FLAG_Layout*>(self);
    u32 result;
    switch (lf->m_Flag) {
    case 1:
        result = CheckFlag_181500(lf->m_Require[0]);
        break;
    case 2:
        result = Check_1b8958(lf->m_Require[0]);
        break;
    case 3:
        result = Check_1a6d08(lf->m_Require[0]);
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
