// coverage: addr=0x001de228 symbol=_ZN3ryj3PAX11start_groupEiiiiPv size=184 class=loop source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:76.8;m2c:near:64.35
#include "common/types.h"
typedef float f32; typedef double f64;
struct ryj_EFFECT_DATA;
struct YS_SLIST_ryj_PAX_MANAGER_0;
struct YS_SLIST_ELEM_ryj_PAX_1;
struct ryj_PAX;
struct anon_str_pax_h_114;
union ryj_PAX_ELEM_anon_uni_pax_h_112;
struct ryj_PAX_ELEM;
struct ryj_PAX_HEADER;

struct ryj_EFFECT_DATA {  // class ryj::EFFECT_DATA size=0x4
    void *Data;                                        // +0x0
};

struct YS_SLIST_ryj_PAX_MANAGER_0 {  // class YS::SLIST<ryj::PAX::MANAGER, 0> size=0x8
    void *Head;                                        // +0x0
    void *Tail;                                        // +0x4
};

struct YS_SLIST_ELEM_ryj_PAX_1 {  // class YS::SLIST_ELEM<ryj::PAX, 1> size=0x4
    void *Next[1];                                     // +0x0
};

struct ryj_PAX {  // class ryj::PAX size=0x1c
    ryj_PAX_HEADER *Header;                            // +0x0
    ryj_PAX_ELEM *Elem;                                // +0x4
    ryj_EFFECT_DATA EffectData;                        // +0x8
    YS_SLIST_ryj_PAX_MANAGER_0 ManagerList;            // +0xc
    YS_SLIST_ELEM_ryj_PAX_1 SList;                     // +0x14
    s32 Type;                                          // +0x18
};

struct anon_str_pax_h_114 {  // structure __anon_str_pax_h_114 size=0x10
    u16 A;                                             // +0x0
    u16 B;                                             // +0x2
    f32 RatioA;                                        // +0x4
    f32 RatioB;                                        // +0x8
    s8 Adjust;                                         // +0xc
    u8 _pad0[3];
};

union ryj_PAX_ELEM_anon_uni_pax_h_112 {  // union ryj::PAX::ELEM::__anon_uni_pax_h_112 size=0x10
    anon_str_pax_h_114 BonePos;
};

struct ryj_PAX_ELEM {  // structure ryj::PAX::ELEM size=0x50
    u16 No;                                            // +0x0
    u16 Id;                                            // +0x2
    u8 Group;                                          // +0x4
    u8 FadeoutFrame;                                   // +0x5
    u16 BoneId;                                        // +0x6
    u64 Category;                                      // +0x8
    u32 Flag;                                          // +0x10
    f32 StartWait;                                     // +0x14
    s32 SeNo;                                          // +0x18
    f32 Translate[3];                                  // +0x1c
    f32 Rotate[3];                                     // +0x28
    f32 Scale[3];                                      // +0x34
    ryj_PAX_ELEM_anon_uni_pax_h_112 _anon40;           // +0x40
};

struct ryj_PAX_HEADER {  // structure ryj::PAX::HEADER size=0x10
    s8 Pax[4];                                         // +0x0
    s32 DebugInfoOffset;                               // +0x4
    s32 ElemNum;                                       // +0x8
    s32 DpxOffset;                                     // +0xc
};

extern "C" void func_001ddef0(u32, u32, u32, u32, u32, u32) asm("func_001ddef0");

// 0x001de228 ryj::PAX::start_group(int, int, int, int, void*)
void lift_001de228(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN3ryj3PAX11start_groupEiiiiPv");
void lift_001de228(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 a1_0;
    u32 s0;
    u32 s1;
    if (((s32)(*(u32*)((*(u32*)&(((ryj_PAX*)a0)->Header) + 8))) > 0)) {
        a1_0 = *(u32*)&(((ryj_PAX*)a0)->Elem);
        s0 = *(u32*)((*(u32*)&(((ryj_PAX*)a0)->Header) + 8));
        s1 = 0;
        do {
            if ((*(u8*)(((*(u32*)&(((ryj_PAX*)a0)->Elem) + s1) + 4)) == a1)) {
                func_001ddef0(a0, *(u32*)&(((ryj_PAX*)a0)->Elem) + s1, a2, a3, a4, a5);
            }
            s0 = (s0 + -1);
            s1 = (s1 + 0x50);
        } while ((s0 != 0));
    }
    return;
}
