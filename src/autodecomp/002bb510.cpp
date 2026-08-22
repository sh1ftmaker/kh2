// coverage: addr=0x002bb510 symbol=func_002bb510 size=148 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:84.62;e3:near:60.52;ghidra:near:50.21
#include "common/types.h"
typedef float f32; typedef double f64;
struct Axa_FVECTOR4;
struct kn_FVector;
struct YS_SLIST_ELEM_SE3D_2;
struct YS_BITFLAG_4_u_int;
struct SE3D;

struct Axa_FVECTOR4 {  // structure Axa::FVECTOR4 size=0x10
    f32 x;                                             // +0x0
    f32 y;                                             // +0x4
    f32 z;                                             // +0x8
    f32 w;                                             // +0xc
};

struct kn_FVector {  // structure kn::FVector size=0x10
    Axa_FVECTOR4 super_FVECTOR4;                       // +0x0
};

struct YS_SLIST_ELEM_SE3D_2 {  // class YS::SLIST_ELEM<SE3D, 2> size=0x8
    void *Next[2];                                     // +0x0
};

struct YS_BITFLAG_4_u_int {  // class YS::BITFLAG<4, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct SE3D {  // class SE3D size=0x40
    kn_FVector m_pos;                                  // +0x0
    s32 m_num;                                         // +0x10
    s32 m_id;                                          // +0x14
    s32 m_bank;                                        // +0x18
    YS_SLIST_ELEM_SE3D_2 SList;                        // +0x1c
    YS_BITFLAG_4_u_int m_flag;                         // +0x24
    s16 m_volume;                                      // +0x28
    s16 m_minVolume;                                   // +0x2a
    s16 m_pan;                                         // +0x2c
    u8 _pad0[2];
    u16 m_polyId;                                      // +0x30
    u8 m_status;                                       // +0x32
    u8 m_type;                                         // +0x33
    u8 _pad1[14];
};

extern "C" u32 D_01e2aa80 asm("D_01e2aa80");
extern "C" u32 func_002b7440(u32, u32, u32) asm("func_002b7440");
extern "C" u32 func_002b79cc(u32, u32, u32) asm("func_002b79cc");
extern "C" u32 func_002b986c(u32, u32) asm("func_002b986c");
extern "C" void func_00324718(u32, u32) asm("func_00324718");

// 0x002bb510 func_002bb510
u32 func_002bb510(u32 a0) asm("func_002bb510");
u32 func_002bb510(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    func_00324718((u32)&D_01e2aa80, a0);
    if ((*(u8*)((a0 + 0x30)) != 1)) {
        if ((*(u8*)((a0 + 0x31)) != 5)) {
            v0 = (*(u8*)((a0 + 0x31)) != 6) ? ((u32)(0) < (u32)(func_002b7440(*(u32*)&(((SE3D*)a0)->m_bank), *(u32*)&(((SE3D*)a0)->m_num), *(u32*)&(((SE3D*)a0)->m_id)))) : ((u32)(0) < (u32)(func_002b986c(*(u32*)&(((SE3D*)a0)->m_bank), *(u32*)&(((SE3D*)a0)->m_num))));
            v0_0 = v0;
        } else {
            v0_0 = ((u32)(0) < (u32)(func_002b79cc(*(u32*)&(((SE3D*)a0)->m_bank), *(u32*)&(((SE3D*)a0)->m_num), 0)));
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 1;
    }
    return v0_1;
}
