// coverage: addr=0x0023fa90 symbol=_ZN2Tz7LayFile5allocEPKc size=64 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:96.25;ghidra:near:85.56
#include "common/types.h"
typedef float f32; typedef double f64;
struct Tz_LayFile;
struct YS_BITFLAG_1_u_short;
union YS_BINARC_INFO_anon_uni_binarc_h_50;
struct YS_BINARC_INFO;
struct YS_BINARC;

struct Tz_LayFile {  // class Tz::LayFile size=0x1c
    void *_vptr_;                                      // +0x0
    YS_BINARC *m_Address;                              // +0x4
    s32 m_LayNum;                                      // +0x8
    s32 m_SeqNum;                                      // +0xc
    s32 m_ImzNum;                                      // +0x10
    s32 m_ImdNum;                                      // +0x14
    s8 m_Alloc;                                        // +0x18
    u8 _pad0[3];
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

extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_0023fa08(u32, u32) asm("func_0023fa08");

// 0x0023fa90 Tz::LayFile::alloc(char const*)
u32 lift_0023fa90(u32 a0, u32 a1) asm("_ZN2Tz7LayFile5allocEPKc");
u32 lift_0023fa90(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_0023fa08(a0, func_001708f8(a1, 0xffffffff));
    *(u8*)&(((Tz_LayFile*)a0)->m_Alloc) = 1;
    return v0;
}
