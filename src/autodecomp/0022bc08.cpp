// coverage: addr=0x0022bc08 symbol=_ZN2sa5EVENT17set_bin_seq_movieERNS_13BIN_SEQ_MOVIEEP4TASK size=376 class=loop source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:90.27;m2c:near:53.08
#include "common/types.h"
typedef float f32; typedef double f64;
struct sa_BIN_SEQ_MOVIE;

struct sa_BIN_SEQ_MOVIE {  // structure sa::BIN_SEQ_MOVIE size=0x8
    s16 my_size;                                       // +0x0
    s16 id;                                            // +0x2
    s16 start_frame;                                   // +0x4
    s8 name[2];                                        // +0x6
};

extern "C" u32 D_0033caf0 asm("D_0033caf0");
extern "C" u32 D_0035e2ec asm("D_0035e2ec");
extern "C" u32 D_00371150 asm("D_00371150");
extern "C" u32 D_00371168 asm("D_00371168");
extern "C" u32 D_00371170 asm("D_00371170");
extern "C" u32 _ZN2sa5EVENT14loadImageMovieEP4TASK asm("_ZN2sa5EVENT14loadImageMovieEP4TASK");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_0014abd8() asm("func_0014abd8");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_002282f0(u32, u32) asm("func_002282f0");
extern "C" u32 func_002ef7a0(u32, u32) asm("func_002ef7a0");
extern "C" u32 func_002ff538(u32, u32, u32) asm("func_002ff538");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_0014a1f0() asm("func_0014a1f0");
extern "C" void func_0014aa58(u32, u32, u32) asm("func_0014aa58");
extern "C" void func_0014aa80(u32, u32, u32) asm("func_0014aa80");
extern "C" void func_00226ed0() asm("func_00226ed0");
extern "C" void func_0022bd80() asm("func_0022bd80");
extern "C" void func_002fee78(u32, u32, u32, u32) asm("func_002fee78");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x0022bc08 sa::EVENT::set_bin_seq_movie(sa::BIN_SEQ_MOVIE&, TASK*)
u32 lift_0022bc08(u32 a0, u32 a1) asm("_ZN2sa5EVENT17set_bin_seq_movieERNS_13BIN_SEQ_MOVIEEP4TASK");
u32 lift_0022bc08(u32 a0, u32 a1) {
    u8 frame[48];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    v0 = func_002282f0(*(s16*)&(((sa_BIN_SEQ_MOVIE*)a0)->start_frame), a1);
    if ((v0 == 0)) {
        v0_0 = func_00225b00(*(s16*)&(((sa_BIN_SEQ_MOVIE*)a0)->start_frame));
        if ((v0_0 == 0)) {
            func_0014aa58(func_0014abd8(), 0, 0);
            func_00226ed0();
            func_002fee78((u32)frame, (u32)&D_00371150, *(u32*)(&D_0033caf0), a0 + 6);
            func_0022bd80();
            if (((s32)(func_002ff538(a0 + 6, (u32)&D_00371168, 3)) == 0) || (func_002ff538(a0 + 6, (u32)&D_00371170, 4) == 0)) {
                *(u8*)(&D_0035e2ec) = 1;
            }
            func_002ff3fc((u32)frame);
            func_002ef7a0(0, (u32)frame);
            while ((v0_1 = func_002ef7a0(5, 0)), (v0_1 != 2)) {
                func_0014a1f0();
                func_00102448(a1, 0);
            }
            while ((v0_2 = func_002ef7a0(1, 0)), ((s32)(v0_2) != 0)) {
                func_0014a1f0();
                func_00102448(a1, 0);
            }
            func_0014aa80(func_0014abd8(), 0, 0);
            v0_3 = func_00102c18(1, 0x16f30, (u32)&_ZN2sa5EVENT14loadImageMovieEP4TASK);
            v0_0 = v0_3;
        }
        v0 = v0_0;
    }
    return v0;
}
