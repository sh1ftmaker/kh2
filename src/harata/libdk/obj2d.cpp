#include "obj2d.hpp"

namespace dk {
extern u32 D_00347f80 asm("D_00347f80");
extern "C" u32 TASK_MANAGER_create_task_raw(u32, u32, u32, u32)
    asm("_ZN12TASK_MANAGER11create_taskEiiPFvP4TASKE");
extern u8 dk_Obj2D_ExecTask asm("_ZN2dk5Obj2D8ExecTaskEP4TASK");

u32 Obj2D::GetAllocator() {
    u32 p = D_00347f80;
    return *(u32*)((u32)p + 20);
}

void Obj2D::create(s32 link_value, s32 state_value) {
    *reinterpret_cast<s32*>(reinterpret_cast<char*>(this) + 0x10) = state_value;
    *reinterpret_cast<s32*>(reinterpret_cast<char*>(this) + 0x0c) = 0;
    link(link_value);
}

void Obj2D::link(s32 v) {
    u32 s1 = reinterpret_cast<u32>(this);
    u32 v0 = TASK_MANAGER_create_task_raw(*(u32*)D_00347f80, 0, (u32)v, (u32)&dk_Obj2D_ExecTask);
    u32 t = D_00347f80;

    *(u32*)(v0 + 8) = s1;
    *(u32*)(v0 + 4) = t;
    *(u32*)(s1 + 20) = v0;

    u32 head = D_00347f80;
    u32 p = head + 4;
    u32 n = *(u32*)(p + 4);

    if (n == 0) {
        *(u32*)(p + 4) = s1;
        *(u32*)(head + 4) = s1;
        *(u32*)(s1 + 4) = 0;
        return;
    }

    *(u32*)(n + 4) = s1;
    *(u32*)(s1 + 4) = 0;
    *(u32*)(p + 4) = s1;
}

void Obj2D::leave() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0001u;
}

void Obj2D::resetLeave() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v & static_cast<u32>(-2);
}

u32 Obj2D::isLeave() {
    u32 v = *(u32*)((u32)this + 12);
    return v & 0x1u;
}

void Obj2D::setNoKick() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x1000u;
}

void Obj2D::hide() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0002u;
}

void Obj2D::show() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v & static_cast<u32>(-3);
}

void Obj2D::localHide() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0040u;
}

void Obj2D::localShow() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v & static_cast<u32>(-65);
}

void Obj2D::getSeqColorOff() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v & static_cast<u32>(-5);
}

void Obj2D::getSeqColorOn() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0004u;
}

void Obj2D::resetSeqAlphaOnly() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v & static_cast<u32>(-9);
}

void Obj2D::getSeqAlphaOnly() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0008u;
}

void Obj2D::getSeqPraramXYOff() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v & static_cast<u32>(-17);
}

void Obj2D::getSeqPraramXYOn() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0010u;
}

void Obj2D::getParentSeqColorOff() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v & static_cast<u32>(-513);
}

void Obj2D::getParentSeqColorOn() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0200u;
}

void Obj2D::getParentSeqAlphaOnly() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0400u;
}

void Obj2D::DoubleSuicideOn() {
    u32 v = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x0c) = v | 0x0800u;
}

u32 Obj2D::isHide() {
    u32 v = *(u32*)((u32)this + 12);
    v &= 0x0002u;
    return (v != 0);
}
}  // namespace dk

// ---- 0x0031d0f8 func_0031d0f8 ----
#include "../../common/types.h"

extern "C" u32 _ZN2dk4FACED1Ev_31cec0(void* self) asm("func_0031cec0");  // dk::FACE::~FACE() -- arity VERIFIED [links as func_0031cec0: E3 name not in the registry yet]

extern "C" u32 D_0034a848 asm("D_0034a848");
extern "C" u32 D_00348608 asm("D_00348608");
extern "C" u32 D_00347f98 asm("D_00347f98");

typedef void (*Fn_0031d0f8)(u32);

void func_0031d0f8_impl(u32 self) asm("func_0031d0f8");
void func_0031d0f8_impl(u32 self) {
    *(u32*)self = (u32)&D_0034a848;

    if (self != (u32)-2576) {
        u32 end = self + 5536;
        u32 begin = self + 2576;
        do {
            if (begin == end) {
                break;
            }
            end -= 592;
            Fn_0031d0f8 fn = (Fn_0031d0f8)*(u32*)(*(u32*)end + 12);
            fn(end);
        } while (1);
    }

    if (self != (u32)-916) {
        u32 end = self + 2564;
        u32 begin = self + 916;
        do {
            if (begin == end) {
                break;
            }
            end -= 412;
            Fn_0031d0f8 fn = (Fn_0031d0f8)*(u32*)(*(u32*)end + 12);
            fn(end);
        } while (1);
    }

    *(u32*)self = (u32)&D_00348608;
    _ZN2dk4FACED1Ev_31cec0((void*)(self + 64));
    *(u32*)self = (u32)&D_00347f98;
}
