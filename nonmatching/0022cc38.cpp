// FIXME(lane): not matching; origin: typed (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"
typedef float f32; typedef double f64;
struct sa_BIN_SEQ_FADE;

struct sa_BIN_SEQ_FADE {  // structure sa::BIN_SEQ_FADE size=0xa
    u16 my_size;                                       // +0x0
    s16 id;                                            // +0x2
    s16 start_frame;                                   // +0x4
    s16 fade_frame;                                    // +0x6
    s16 fade_type;                                     // +0x8
};

extern "C" u32 func_0014aa58(u32, u32, u32) asm("func_0014aa58");
extern "C" u32 func_0014aa80(u32, u32, u32) asm("func_0014aa80");
extern "C" u32 func_0014aba8() asm("func_0014aba8");
extern "C" u32 func_0014abd8() asm("func_0014abd8");
extern "C" u32 func_0014ac08() asm("func_0014ac08");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");

// 0x0022cc38 func_0022cc38
void func_0022cc38(u32 a0) asm("_ZN2sa5EVENT16set_bin_seq_fadeERNS_12BIN_SEQ_FADEEP4TASK");
void func_0022cc38(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    if ((func_002282f0(*(s16*)&(((sa_BIN_SEQ_FADE*)a0)->start_frame)) == 0)) {
        switch (*(u16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_type)) {
        case 0:
            func_0014aa80(func_0014ac08(), *(s16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_frame), 0);
            return;
        case 1:
            func_0014aa58(func_0014ac08(), *(s16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_frame), 0);
            return;
        case 2:
            func_0014aa58(func_0014ac08(), *(s16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_frame), 1);
            return;
        case 3:
            v0 = func_0014abd8();
            func_0014aa80(v0, *(s16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_frame), 0);
            return;
        case 4:
            v0_0 = func_0014abd8();
            func_0014aa58(v0_0, *(s16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_frame), 0);
            return;
        case 5:
            func_0014aa80(func_0014ac08(), *(s16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_frame), 1);
            return;
        case 6:
            v0_1 = func_0014aba8();
            func_0014aa58(v0_1, *(s16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_frame), 1);
            return;
        case 7:
            v0_2 = func_0014aba8();
            func_0014aa80(v0_2, *(s16*)&(((sa_BIN_SEQ_FADE*)a0)->fade_frame), 1);
            return;
        default:
            return;
        }
    } else {
        return;
    }
}
