// coverage: addr=0x00232c88 symbol=_ZN2sa5EVENT10set_se_seqERNS_10BIN_SE_SEQEP4TASK size=212 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.06;m2c:near:82.2;ghidra:near:78.9
#include "common/types.h"

extern "C" u32 D_0035db60 asm("D_0035db60");
extern "C" u32 D_0035e35c asm("D_0035e35c");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_00227ca8(u32) asm("func_00227ca8");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_002bc238(u32) asm("func_002bc238");
extern "C" u32 func_002bc358(u32, u32) asm("func_002bc358");

// 0x00232c88 sa::EVENT::set_se_seq(sa::BIN_SE_SEQ&, TASK*)
void lift_00232c88(u32 a0) asm("_ZN2sa5EVENT10set_se_seqERNS_10BIN_SE_SEQEP4TASK");
void lift_00232c88(u32 a0) {
    u32 v0;
    u32 s1;
    s32 s0;
    if ((func_002282f0(((s16*)a0)[6]) == 0)) {
        if (((s32)(((s16*)a0)[3]) == 0)) {
            v0 = func_00227ca8(a0 + 8);
            s1 = ((s32)(((s32)(v0) < (s32)(0x3e9))) != 0) ? ((*(u32*)(&D_0035e35c) * 0x3e8) + v0) : (v0 + -0x3e8);
            if (((s32)(func_00225b00(((s16*)a0)[6])) == 0)) {
                u32 t21_35 = (u32)(((s16*)a0)[2]);
                s1 = s1;
                s32 t21_23 = (s32)(t21_35);
                s0 = ((t21_23 << 2) + (u32)&D_0035db60);
                *(u32*)(s0) = func_002bc238(s1);
            }
            return;
        } else {
            if (((s32)(func_00225b00(((s16*)a0)[6])) == 0)) {
                v0 = v0;
                s32 t31_30 = (s32)(*(u32*)(((((s16*)a0)[2] << 2) + (u32)&D_0035db60)));
                func_002bc358(t31_30, 0xf0);
                return;
            } else {
                return;
            }
        }
    } else {
        return;
    }
}
