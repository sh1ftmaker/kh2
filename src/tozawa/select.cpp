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

// ---- 0x0028b078 func_0028b078 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 SetMoveKey_288f48(void* self, int, int, int, int) asm("_ZN2Tz6Select10SetMoveKeyEiiii");  // Tz::Select::SetMoveKey(int, int, int, int) -- arity VERIFIED
extern "C" u32 SetEnableButton_28af18(void* self, unsigned int) asm("_ZN2Tz6Select15SetEnableButtonEj");  // Tz::Select::SetEnableButton(unsigned int) -- arity VERIFIED
extern "C" u32 SetSelectDisable_28b1b0(void* self, unsigned int) asm("_ZN2Tz6Select16SetSelectDisableEj");  // Tz::Select::SetSelectDisable(unsigned int) -- arity VERIFIED

// layout row 0x0028b078, 100 bytes
// the definition MUST produce the symbol: func_0028b078  (source: stub)
// original name (E3 debug build): Tz::Select::Set2DMode(int, int)

struct SelectLayout {
    s16 m_Current;        // 0x00
    s16 m_CurrentOld;     // 0x02
    s16 m_MenuItemMax;    // 0x04
    s16 m_CurUp;          // 0x06
    s16 m_CurDown;        // 0x08
    s16 m_CurLeft;        // 0x0a
    s16 m_CurRight;       // 0x0c
    s16 m_FadeOut;        // 0x0e
    s16 m_ItemMax;        // 0x10
    s16 m_SelectTop;      // 0x12
    s16 m_SelectTopOld;   // 0x14
    s16 m_SelectMax;      // 0x16
    s16 m_SelectXMax;     // 0x18
    s16 m_SelectYMax;     // 0x1a
    s16 m_SizeOnPage;     // 0x1c
    u32 m_SelectDisable;  // 0x20
    u8  m_LoopOn;         // 0x24
    u8  m_2DModeOn;       // 0x25
    u8  m_2DSelCenter;    // 0x26
    u8  m_PageOn;         // 0x27
};

void func_0028b078_impl(void* self, int a, int b) asm("func_0028b078");  // declaration
void func_0028b078_impl(void* self, int a, int b) {  // definition: no asm() here
    SelectLayout* s = reinterpret_cast<SelectLayout*>(self);
    s->m_2DSelCenter = 0;
    s->m_2DModeOn = 1;
    s->m_SelectXMax = a;
    s->m_SelectYMax = b;
    SetMoveKey_288f48(self, 16, 32, 64, 128);
    SetEnableButton_28af18(self, 127);
    SetSelectDisable_28b1b0(self, 0);
}

// ---- 0x00244db8 func_00244db8 ----

extern "C" u32 isExist_139d78(u32 elem) asm("_Z16u_call4_00139d78jjjj");

extern "C" u32 D_0035ed04 asm("D_0035ed04");

void func_00244db8_impl() asm("func_00244db8");
void func_00244db8_impl() {
    int i = 1;
    u32 off = 0;
    while (1) {
        if (isExist_139d78(D_0035ed04 + off) != 0) {
            u32 p = off + D_0035ed04;
            u32 vt = *(u32*)p;
            ((void (*)(u32))(*(u32*)(vt + 20)))(p);
        }
        i--;
        if (i < 0) break;
        off += 408;
    }
}

// ---- 0x002a94f8 func_002a94f8 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 isExist_139d78(u32 elem) asm("_Z16u_call4_00139d78jjjj");
extern "C" u32 func_00276a18_276a18() asm("func_00276a18");
extern "C" u32 func_00276b10_276b10() asm("func_00276b10");

extern "C" u32 D_0035f60c asm("D_0035f60c");

void func_002a94f8_impl() asm("func_002a94f8");
void func_002a94f8_impl() {
    int i = 9;
    u32 off = 0;
    while (1) {
        if (isExist_139d78(D_0035f60c + off) != 0) {
            u32 p = off + D_0035f60c;
            u32 vt = *(u32*)p;
            ((void (*)(u32))(*(u32*)(vt + 20)))(p);
        }
        i--;
        if (i < 0) break;
        off += 436;
    }
    func_00276a18_276a18();
    func_00276b10_276b10();
}

// ---- 0x0024b078 func_0024b078 ----

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
// return types are not mangled -- change them freely (u32 / s32 / void / void*).
// a NON-static member function takes the object pointer as its FIRST argument:
//   add `void* self` in front of the listed args when the call site puts an object in $a0.
extern "C" u32 isExist_139d78(u32 elem) asm("_Z16u_call4_00139d78jjjj");  // Tz::Select::isExist() -- arity UNKNOWN (placeholder)

extern "C" u32 D_0035ed8c asm("D_0035ed8c");

// layout row 0x0024b078, 108 bytes
// the definition MUST produce the symbol: func_0024b078  (source: stub)

// func_0024b078 is a registry stub. The DECLARATION below carries the asm label
// that binds the name; the DEFINITION after it must NOT repeat asm(...) (parse error).
// Decide the arguments from the disassembly: a0 used as data -> no `void* self`.
void func_0024b078_impl() asm("func_0024b078");  // declaration
void func_0024b078_impl() {  // definition: no asm() here
    int i = 1;
    u32 off = 0;
    while (1) {
        if (isExist_139d78(D_0035ed8c + off) != 0) {
            u32 p = off + D_0035ed8c;
            u32 vt = *(u32*)p;
            ((void (*)(u32))(*(u32*)(vt + 20)))(p);
        }
        i--;
        if (i < 0) break;
        off += 408;
    }
}
