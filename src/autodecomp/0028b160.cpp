// coverage: addr=0x0028b160 symbol=_ZN2Tz6Select10GetPtr2IdxEPv size=76 class=loop source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:31.2;m2c:near:29.89;e3:near:28.42
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


// 0x0028b160 Tz::Select::GetPtr2Idx(void*)
u32 lift_0028b160(u32 a0, u32 a1) asm("_ZN2Tz6Select10GetPtr2IdxEPv");
u32 lift_0028b160(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    u32 a0_0;
    t6 = 0;
    if (((s32)(((s32)((*(u16*)&(((Tz_Select*)a0)->m_MenuItemMax) << 0x10)) >> 0x10)) > 0)) {
        t7 = *(u32*)(*(u32*)&(((Tz_Select*)a0)->m_MenuItem));
        a0_0 = *(u32*)&(((Tz_Select*)a0)->m_MenuItem);
        do {
            if ((a1 == *(u32*)((a0_0 + (t6 * 4))))) {
                break;
            }
            t6 = (t6 + 1);
            t7 = ((s32)(t6) < (s32)(((s32)((*(u16*)&(((Tz_Select*)a0)->m_MenuItemMax) << 0x10)) >> 0x10)));
        } while ((t7 != 0));
    }
    return (((s32)(t6) < (s32)(((s32)((*(u16*)&(((Tz_Select*)a0)->m_MenuItemMax) << 0x10)) >> 0x10))) ? t6 : 0xffffffff);
}
