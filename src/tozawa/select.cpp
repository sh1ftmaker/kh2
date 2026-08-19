#include "select.hpp"

namespace Tz {
s16 Select::GetCurrent() { return reinterpret_cast<SelectLayout*>(this)->current; }
s32 Select::GetLast() {
    u32 r2 = (u32)(s32)(*(s16*)((u32)this + (s32)(4)));
    r2 = (u32)((s32)r2 + (-1));
    return (s32)r2;
}
void* Select::GetItemPtr(s32 index) { return reinterpret_cast<SelectLayout*>(this)->itemPtr[index]; }
void* Select::GetCurrentItemPtr() { return reinterpret_cast<SelectLayout*>(this)->itemPtr[reinterpret_cast<SelectLayout*>(this)->current]; }
s16 Select::GetItemMax() { return reinterpret_cast<SelectLayout*>(this)->itemMax; }
s16 Select::GetSelectMax() { return *(s16*)((u32)this + 22); }
u32 Select::isFadeOut() {
    u32 v0 = (u32)(s16)*(s16*)((u32)this + 14);
    return (u32)(0u < v0);
}
extern "C" u32 func_0028acb8(u32) __attribute__((alias("_ZN2Tz6Select9isFadeOutEv")));

extern "C" u32 func_0028b040(...);
u32 Select::isCursorMove() {
    u32 s0 = (u32)this;
    u32 ret;
    if (*(s16*)(s0 + 2) >= 0) {
        ret = ((u32(*)(void))func_0028b040)() != (u32)(s32)*(s16*)(s0 + 2);
    } else {
        ret = 0;
    }
    return ret;
}
s32 Select::GetEnableButton() { return reinterpret_cast<SelectLayout*>(this)->enableButton; }
s16 Select::GetSelectTop() { return reinterpret_cast<SelectLayout*>(this)->selectTop; }
s32 Select::SetEnableButton(u32 v) {
    reinterpret_cast<SelectLayout*>(this)->enableButton = (s32)v;
    return (s32)v;
}
s32 Select::SetDisableButton(u32 v) {
    u32 r = (u32)reinterpret_cast<SelectLayout*>(this)->enableButton;
    r &= ~(0u | v);
    reinterpret_cast<SelectLayout*>(this)->enableButton = (s32)r;
    return (s32)r;
}
void Select::SetSelectorLoop(bool v) { *(u8*)((u32)this + 36) = (u8)((u32)v & 0xffu); }
s32 Select::SetEnableShortCut(u32 v) {
    u32 r2 = *(u32*)((u32)this + (s32)(52));
    u32 r15 = (u32)((s32)0u + (-1793));
    v = (u32)(v & 0x0700u);
    r2 = (u32)(r2 & r15);
    r2 = (u32)(r2 | v);
    *(u32*)((u32)this + (s32)(52)) = r2;
    return (s32)r2;
}
void Select::SetSelectDisable(u32 v) { reinterpret_cast<SelectLayout*>(this)->selectDisable = v; }
}  // namespace Tz

// ---- 0x0028af90 _ZN2Tz6Select12SetSelectMaxEi ----
#include "common/types.h"

namespace Tz {

// Byte offsets from the E3-2014 DWARF dump (class Tz::Select size=56).
struct SelectMaxLayout {
    s16 m_Current;       // 0x00
    s16 m_CurrentOld;    // 0x02
    u16 m_MenuItemMax;   // 0x04
    s16 m_CurUp;         // 0x06
    s16 m_CurDown;       // 0x08
    s16 m_CurLeft;       // 0x0a
    s16 m_CurRight;      // 0x0c
    s16 m_FadeOut;       // 0x0e
    s16 m_ItemMax;       // 0x10
    s16 m_SelectTop;     // 0x12
    s16 m_SelectTopOld;  // 0x14
    s16 m_SelectMax;     // 0x16
};



void Select::SetSelectMax(int max) {
    SelectMaxLayout* p = reinterpret_cast<SelectMaxLayout*>(this);
    p->m_SelectMax = (s16)((max < 0) ? (s32)p->m_MenuItemMax : max);
}

}  // namespace Tz

// ---- 0x0024c828 func_0024c828 ----

extern "C" u32 isExist_139d78(u32 elem) asm("_Z16u_call4_00139d78jjjj");

extern "C" u32 D_0035edbc asm("D_0035edbc");

void func_0024c828_impl() asm("func_0024c828");
void func_0024c828_impl() {
    int i = 2;
    u32 off = 0;
    while (1) {
        if (isExist_139d78(D_0035edbc + off) != 0) {
            u32 p = off + D_0035edbc;
            u32 vt = *(u32*)p;
            ((void (*)(u32))(*(u32*)(vt + 20)))(p);
        }
        i--;
        if (i < 0) break;
        off += 408;
    }
}
