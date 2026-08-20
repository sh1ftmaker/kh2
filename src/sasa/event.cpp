#include "event.hpp"

namespace sa {

extern u32 D_0032bae0 asm("D_0032bae0");
extern u8 D_00360000 asm("D_00360000");
extern "C" u32 func_0014abb8(...);
extern "C" u32 func_0014abc8(...);
extern "C" void func_0014aa58(...);

extern "C" u32 func_00197920(...) asm("_ZN2YS5EVENT6IsExecEv");
extern "C" u32 func_002ba620(...);

u32 EVENT::isLM() {
    u32 v = *(u8*)&D_0032bae0;
    v ^= 0xbu;
    return (v < 1u);
}

u32 EVENT::isLK() {
    u32 v = *(u8*)&D_0032bae0;
    v ^= 0xau;
    return (v < 1u);
}

u32 EVENT::isSceneEventExec() {
    u32 r2 = ((u32(*)())func_00197920)();
    u32 r15 = 0u;
    if (r2 != 0u) {
        r2 = ((u32(*)())func_002ba620)();
        r15 = ((u32)0u < (u32)r2);
    }
    r2 = r15;
    return r2;
}

void EVENT::wide_on() {
    u32 v0 = func_0014abb8();
    func_0014aa58(v0, 1, 0);
    v0 = func_0014abc8();
    func_0014aa58(v0, 1, 0);
    *(u8*)((u8*)&D_00360000 - 7336u) = 1;
}

void EVENT::readWaitInit() {
    u32 r15 = (u32)(0x004cu << 16);
    u32 r14 = (u32)(0x0036u << 16);
    r15 = (u32)(r15 | 0x4b40u);
    *(u32*)((u32)r14 + (s32)(-9488)) = r15;
}

void EVENT::setActorParam(YS::OBJ* obj) {
    u32 v0 = *(u32*)((u32)this + 264);
    u32 v1 = *(u32*)((u32)this + 1896);
    v0 |= 0x40000003u;
    v1 |= 0x6010u;
    *(u32*)((u32)this + 264) = v0;
    *(u32*)((u32)this + 1896) = v1;
    (void)obj;
}

}  // namespace sa

// ---- 0x0022e288 _ZN2sa5EVENT14leaveAllEffectEv ----
#include "../common/types.h"

extern "C" u32 ThisIsValid_1de568(void* /* ryj::PAX* */) asm("_ZN3ryj3PAX11ThisIsValidEPS0_");
extern "C" u32 ensure_1dde40(void* self) asm("_ZN3ryj3PAX6ensureEv");

extern "C" u32 D_0035dcf4 asm("D_0035dcf4");

namespace sa {


void EVENT::leaveAllEffect() {
    u32* base = (u32*)&D_0035dcf4;
    if (*base == 0)
        return;
    s32 neg = -1;
    s32 offset = 0;
    for (s32 cnt = 95; cnt >= 0; cnt--) {
        u32* e = (u32*)(offset + (u32)D_0035dcf4);
        if (e[1] == (u32)neg) {
            offset += 52;
            continue;
        }
        if (ThisIsValid_1de568((void*)(e + 4))) {
            u32* e2 = (u32*)((u32)D_0035dcf4 + offset);
            ensure_1dde40((void*)(e2 + 4));
        }
        u32* e3 = (u32*)(offset + (u32)D_0035dcf4);
        e3[3] = 0;
        u32* e4 = (u32*)(offset + (u32)D_0035dcf4);
        e4[1] = (u32)neg;
        offset += 52;
    }
}
}  // namespace sa
