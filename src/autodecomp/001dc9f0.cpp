// coverage: addr=0x001dc9f0 symbol=_ZN3ryj6EFFECT10is_waitingEv size=48 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SLIST_ELEM_ryj_EFFECT_2;
struct anon_str_effect_h_229;
struct anon_str_effect_h_237;
union ryj_EFFECT_anon_uni_effect_h_224;
struct ryj_EFFECT_anon_str_effect_h_245;
struct ryj_EFFECT;
struct ryj_EFFECT_DATA;
struct YS_SLIST_ryj_PAX_MANAGER_0;
struct YS_SLIST_ELEM_ryj_PAX_1;
struct ryj_PAX;
struct anon_str_pax_h_114;
union ryj_PAX_ELEM_anon_uni_pax_h_112;
struct ryj_PAX_ELEM;
struct ryj_PAX_HEADER;
struct Axa_FVECTOR4;
struct Axa_FMATRIX44;
struct kn_FMatrix;
struct kn_FVector;

struct YS_SLIST_ELEM_ryj_EFFECT_2 {  // class YS::SLIST_ELEM<ryj::EFFECT, 2> size=0x8
    void *Next[2];                                     // +0x0
};

struct anon_str_effect_h_229 {  // structure __anon_str_effect_h_229 size=0x8
    kn_FVector *List;                                  // +0x0
    s32 Num;                                           // +0x4
};

struct anon_str_effect_h_237 {  // structure __anon_str_effect_h_237 size=0x8
    kn_FMatrix *List;                                  // +0x0
    s32 Num;                                           // +0x4
};

union ryj_EFFECT_anon_uni_effect_h_224 {  // union ryj::EFFECT::__anon_uni_effect_h_224 size=0x8
    anon_str_effect_h_229 ReferencePos;
    anon_str_effect_h_237 ReferenceMatrix;
};

struct ryj_EFFECT_anon_str_effect_h_245 {  // structure ryj::EFFECT::__anon_str_effect_h_245 size=0x24
    u8 Name[32];                                       // +0x0
    s32 Id;                                            // +0x20
};

struct ryj_EFFECT {  // class ryj::EFFECT size=0x5c
    void *_vptr_;                                      // +0x0
    u32 Type;                                          // +0x4
    u32 Flag;                                          // +0x8
    ryj_PAX *Pax;                                      // +0xc
    s32 Priority;                                      // +0x10
    void *Data;                                        // +0x14
    u32 ID;                                            // +0x18
    void *PartMng;                                     // +0x1c
    f32 Fade;                                          // +0x20
    f32 FadeAdd;                                       // +0x24
    YS_SLIST_ELEM_ryj_EFFECT_2 SList;                  // +0x28
    ryj_EFFECT_anon_uni_effect_h_224 _anon30;          // +0x30
    ryj_EFFECT_anon_str_effect_h_245 DebugInfo;        // +0x38
};

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

struct Axa_FVECTOR4 {  // structure Axa::FVECTOR4 size=0x10
    f32 x;                                             // +0x0
    f32 y;                                             // +0x4
    f32 z;                                             // +0x8
    f32 w;                                             // +0xc
};

struct Axa_FMATRIX44 {  // structure Axa::FMATRIX44 size=0x40
    Axa_FVECTOR4 v0;                                   // +0x0
    Axa_FVECTOR4 v1;                                   // +0x10
    Axa_FVECTOR4 v2;                                   // +0x20
    Axa_FVECTOR4 v3;                                   // +0x30
};

struct kn_FMatrix {  // structure kn::FMatrix size=0x40
    Axa_FMATRIX44 super_FMATRIX44;                     // +0x0
};

struct kn_FVector {  // structure kn::FVector size=0x10
    Axa_FVECTOR4 super_FVECTOR4;                       // +0x0
};

extern "C" u32 func_001e6d08(u32) asm("func_001e6d08");
extern "C" void func_001dc9e0(u32) asm("func_001dc9e0");

// 0x001dc9f0 ryj::EFFECT::is_waiting()
u32 lift_001dc9f0(u32 a0) asm("_ZN3ryj6EFFECT10is_waitingEv");
u32 lift_001dc9f0(u32 a0) {
    func_001dc9e0(a0);
    return ((u32)(0) < (u32)(func_001e6d08(*(u32*)&(((ryj_EFFECT*)a0)->PartMng))));
}
