// coverage: addr=0x001e0058 symbol=func_001e0058 size=84 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:exact:100.0;ghidra:near:90.43
#include "common/types.h"
typedef float f32; typedef double f64;
struct Axa_FVECTOR4;
struct Axa_FMATRIX44;
struct kn_FMatrix;
union ryj_PAX_MANAGER_anon_uni_pax_h_210;
struct YS_BITFLAG_7_u_int;
struct YS_SLIST_ELEM_ryj_PAX_MANAGER_1;
struct ryj_PAX_MANAGER;
struct anon_str_pax_h_114;
union ryj_PAX_ELEM_anon_uni_pax_h_112;
struct ryj_PAX_ELEM;
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
struct ryj_PAX_HEADER;
struct kn_FVector;

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

union ryj_PAX_MANAGER_anon_uni_pax_h_210 {  // union ryj::PAX::MANAGER::__anon_uni_pax_h_210 size=0x4
    void *Special;
    void *BonePos;
    void *UserBind;
};

struct YS_BITFLAG_7_u_int {  // class YS::BITFLAG<7, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct YS_SLIST_ELEM_ryj_PAX_MANAGER_1 {  // class YS::SLIST_ELEM<ryj::PAX::MANAGER, 1> size=0x4
    void *Next[1];                                     // +0x0
};

struct ryj_PAX_MANAGER {  // class ryj::PAX::MANAGER size=0x70
    kn_FMatrix Bone;                                   // +0x0
    ryj_EFFECT *Effect;                                // +0x40
    ryj_PAX_ELEM *Param;                               // +0x44
    void *Obj;                                         // +0x48
    f32 Time;                                          // +0x4c
    f32 StartWait;                                     // +0x50
    s32 SeId;                                          // +0x54
    ryj_PAX_MANAGER_anon_uni_pax_h_210 _anon58;        // +0x58
    YS_BITFLAG_7_u_int Flag;                           // +0x5c
    YS_SLIST_ELEM_ryj_PAX_MANAGER_1 SList;             // +0x60
    u8 _pad0[12];
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

struct ryj_PAX_HEADER {  // structure ryj::PAX::HEADER size=0x10
    s8 Pax[4];                                         // +0x0
    s32 DebugInfoOffset;                               // +0x4
    s32 ElemNum;                                       // +0x8
    s32 DpxOffset;                                     // +0xc
};

struct kn_FVector {  // structure kn::FVector size=0x10
    Axa_FVECTOR4 super_FVECTOR4;                       // +0x0
};

extern "C" u32 func_001de978(u32) asm("func_001de978");
extern "C" void func_001dee10(u32) asm("func_001dee10");
extern "C" void func_002bc358(u32, u32) asm("func_002bc358");

// 0x001e0058 func_001e0058
void func_001e0058(u32 a0) asm("func_001e0058");
void func_001e0058(u32 a0) {
    if (((s32)(*(u32*)&(((ryj_PAX_MANAGER*)a0)->SeId)) >= 0)) {
        func_002bc358(*(u32*)&(((ryj_PAX_MANAGER*)a0)->SeId), 0x78);
    }
    if ((a0 != 0)) {
        func_001dee10(a0);
        func_001de978(a0);
        return;
    } else {
        return;
    }
}
