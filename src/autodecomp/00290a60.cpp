// coverage: addr=0x00290a60 symbol=_ZN2Tz6JmInfo6UnloadEz size=48 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;twins:exact:100.0;m2c:near:94.92;ghidra:near:83.33;corpus:near:83.25;e3:near:62.63
#include "common/types.h"
typedef float f32; typedef double f64;
struct Tz_MenuFile;
struct YS_BITFLAG_1_u_short;
union YS_BINARC_INFO_anon_uni_binarc_h_50;
struct YS_BINARC_INFO;
struct YS_BINARC;
struct Tz_MenuFile_FileSet;

struct Tz_MenuFile {  // class Tz::MenuFile size=0x18
    void *_vptr_;                                      // +0x0
    YS_BINARC *m_Address;                              // +0x4
    s32 m_FileNum;                                     // +0x8
    s32 m_FileMax;                                     // +0xc
    s8 m_Alloc;                                        // +0x10
    u8 _pad0[3];
    Tz_MenuFile_FileSet *m_FileSet;                    // +0x14
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

struct Tz_MenuFile_FileSet {  // structure Tz::MenuFile::FileSet size=0x4
    void *m_File;                                      // +0x0
};

extern "C" u32 func_00170950(u32) asm("func_00170950");

// 0x00290a60 Tz::JmInfo::Unload(...)
u32 lift_00290a60(u32 a0) asm("_ZN2Tz6JmInfo6UnloadEz");
u32 lift_00290a60(u32 a0) {
    u32 v0;
    v0 = func_00170950(*(u32*)&(((Tz_MenuFile*)a0)->m_Address));
    *(u32*)&(((Tz_MenuFile*)a0)->m_Address) = 0;
    *(u8*)&(((Tz_MenuFile*)a0)->m_Alloc) = 0;
    return v0;
}
