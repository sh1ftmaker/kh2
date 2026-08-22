// coverage: addr=0x0028b0e0 symbol=_ZN2Tz6Select11Reset2DModeEv size=64 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:67.44;m2c:near:63.75;e3:near:23.06
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

extern "C" u32 func_0028b1b0(u32, u32) asm("func_0028b1b0");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");

// 0x0028b0e0 Tz::Select::Reset2DMode()
u32 lift_0028b0e0(u32 a0) asm("_ZN2Tz6Select11Reset2DModeEv");
u32 lift_0028b0e0(u32 a0) {
    *(u8*)&(((Tz_Select*)a0)->m_2DModeOn) = 0;
    *(u8*)&(((Tz_Select*)a0)->m_2DSelCenter) = 0;
    *(u16*)&(((Tz_Select*)a0)->m_SelectXMax) = 0;
    *(u16*)&(((Tz_Select*)a0)->m_SelectYMax) = 0;
    func_0028af18(a0, 0x73);
    return func_0028b1b0(a0, 0);
}
