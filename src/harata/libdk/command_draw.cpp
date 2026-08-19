#include "command_draw.hpp"

namespace dk {

extern u8 D_003484a0 asm("D_003484a0");

extern "C" u32 func_0013cb08(...);
extern "C" u32 func_001bcf38(...);
extern "C" u32 func_0013a810(...);

u32 COMMAND_DRAW::isInsertSkipCommand() {
    u32 t6;
    u32 t7 = *(u32*)((u32)this + (s32)(668));
    if (t7 == 0u) {
        t6 = 0u;
    } else {
        u32 s0 = *(u32*)((u32)t7 + (s32)(2536));
        if (func_0013cb08() != 0u) {
            t6 = 0u;
        } else {
            t6 = func_001bcf38(s0);
        }
    }
    return t6;
}

u32 COMMAND_DRAW::getSqd() {
    if (func_0013cb08(*(u32*)((u32)&D_003484a0 + (s32)(0))) != 0u) {
        u32 t7 = *(u32*)((u32)&D_003484a0 + (s32)(0));
        return *(u32*)((u32)t7 + (s32)(672));
    }
    u32 t7 = *(u32*)((u32)&D_003484a0 + (s32)(0));
    u32 t6 = *(u32*)((u32)t7 + (s32)(676));
    if (t6 != 0u) return t6;
    return func_0013a810();
}

u32 COMMAND_DRAW::getShortCutType() {
    u32 r15 = (u32)(0x0035u << 16);
    u32 r4 = *(u32*)((u32)r15 + (s32)(-31584));
    u32 r2 = func_0013cb08(r4);
    r2 = ((u32)0u < (u32)r2);
    return r2;
}

u32 COMMAND_DRAW::isSpecialCommand() {
    u32 t6 = *(u32*)((u32)&D_003484a0 + (s32)(0));
    u32 ret = 0u;
    if (t6 != 0u) {
        ret = func_0013cb08(t6);
    }
    return ret;
}

}  // namespace dk

// ---- 0x0031b070 func_0031b070 ----
#include "../../common/types.h"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 _ZN2YI8SEQUENCED1Ev_239870(void* self) asm("_ZN2YI8SEQUENCED1Ev");  // YI::SEQUENCE::~SEQUENCE() -- arity VERIFIED

// globals
extern "C" u32 D_00348590 asm("D_00348590");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");

// func_0031b070 is a registry stub; the asm label below binds the name.
// if the call sites show an object in $a0, keep `void* self` as the first argument.
void func_0031b070_impl(void* self) asm("func_0031b070");
void func_0031b070_impl(void* self) {
    u32* p = (u32*)self;
    p[0] = (u32)&D_00348590;
    p[260/4] = (u32)&D_00347e60;
    _ZN2YI8SEQUENCED1Ev_239870((u32)self + 284);
    p[260/4] = (u32)&D_00347f98;
    p[0] = (u32)&D_00347f98;
}
