// coverage: addr=0x001a91f8 symbol=_ZN2YS7OBJDATA5clearEv size=28 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;e3:exact:100.0;ghidra:near:99.43;m2c:near:99.43;corpus:near:96.57
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_OBJDATA;
struct YS_MOTIONSET;
struct YS_BITFLAG_1_u_short;
union YS_BINARC_INFO_anon_uni_binarc_h_50;
struct YS_BINARC_INFO;
struct YS_BINARC;

struct YS_OBJDATA {  // class YS::OBJDATA size=0x18
    s32 Priority;                                      // +0x0
    u32 EntryId;                                       // +0x4
    void *Entry;                                       // +0x8
    YS_BINARC *Mdlx;                                   // +0xc
    YS_BINARC *Apdx;                                   // +0x10
    YS_MOTIONSET *Mset;                                // +0x14
};

struct YS_MOTIONSET {  // class YS::MOTIONSET size=0x1
    u8 _pad0[1];
};

struct YS_BITFLAG_1_u_short {  // class YS::BITFLAG<1, u_short> size=0x2
    u8 Flag[2];   // raw: klass[1] (size mismatch)     // +0x0
};

union YS_BINARC_INFO_anon_uni_binarc_h_50 {  // union YS::BINARC::INFO::__anon_uni_binarc_h_50 size=0x4
    u32 Offset;
    void *Address;
};

struct YS_BINARC_INFO {  // class YS::BINARC::INFO size=0x10
    u16 Type;                                          // +0x0
    YS_BITFLAG_1_u_short Flag;                         // +0x2
    u32 Tag;                                           // +0x4
    YS_BINARC_INFO_anon_uni_binarc_h_50 _anon8;        // +0x8
    u32 Size;                                          // +0xc
};

struct YS_BINARC {  // class YS::BINARC size=0x10
    u8 Id[3];                                          // +0x0
    u8 ExtFlg : 4;                                     // +0x3
    u8 Version : 4;                                    // +0x4
    u32 FileNum;                                       // +0x5
    u32 Address;                                       // +0x9
    u32 Replace : 30;                                  // +0xd
    u32 Flag : 2;                                      // +0x11
    YS_BINARC_INFO Info[0];                            // +0x15
};


// 0x001a91f8 YS::OBJDATA::clear()
void lift_001a91f8(u32 a0) asm("_ZN2YS7OBJDATA5clearEv");
void lift_001a91f8(u32 a0) {
    *(u32*)&(((YS_OBJDATA*)a0)->Priority) = 0xffffffff;
    *(u32*)&(((YS_OBJDATA*)a0)->EntryId) = 0;
    *(u32*)&(((YS_OBJDATA*)a0)->Mdlx) = 0;
    *(u32*)&(((YS_OBJDATA*)a0)->Apdx) = 0;
    *(u32*)&(((YS_OBJDATA*)a0)->Mset) = 0;
}
