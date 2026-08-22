// coverage: addr=0x0028b218 symbol=_ZN2Tz6Select11SetPageModeEb size=44 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;e3:near:96.82;m2c:near:78.75;ghidra:near:54.17
#include "common/types.h"
typedef float f32; typedef double f64;
struct Tz_Select;

struct Tz_Select {  // class Tz::Select size=0x38
    s16 m_Current;                                     // +0x0
    s16 m_CurrentOld;                                  // +0x2
    s16 m_MenuItemMax;                                 // +0x4
    s16 m_CurUp;                                       // +0x6
    s16 m_CurDown;                                     // +0x8
    s16 m_CurLeft;                                     // +0xa
    s16 m_CurRight;                                    // +0xc
    s16 m_FadeOut;                                     // +0xe
    s16 m_ItemMax;                                     // +0x10
    s16 m_SelectTop;                                   // +0x12
    s16 m_SelectTopOld;                                // +0x14
    s16 m_SelectMax;                                   // +0x16
    s16 m_SelectXMax;                                  // +0x18
    s16 m_SelectYMax;                                  // +0x1a
    s16 m_SizeOnPage;                                  // +0x1c
    u8 _pad0[2];
    u32 m_SelectDisable;                               // +0x20
    s8 m_LoopOn;                                       // +0x24
    s8 m_2DModeOn;                                     // +0x25
    s8 m_2DSelCenter;                                  // +0x26
    s8 m_PageOn;                                       // +0x27
    void *m_MenuItem;                                  // +0x28
    void *m_SeqN;                                      // +0x2c
    void *m_SeqA;                                      // +0x30
    u32 m_EnableButton;                                // +0x34
};


// 0x0028b218 Tz::Select::SetPageMode(bool)
void lift_0028b218(u32 a0, u8 a1) asm("_ZN2Tz6Select11SetPageModeEb");
void lift_0028b218(u32 a0, u8 a1) {
    u32 t7;
    *(u8*)&(((Tz_Select*)a0)->m_PageOn) = a1;
    if (((s32)(a1) != 0)) {
        *(u32*)&(((Tz_Select*)a0)->m_EnableButton) |= 0x3000;
    } else {
        *(u32*)&(((Tz_Select*)a0)->m_EnableButton) &= 0xffffcfff;
    }
    return;
}
