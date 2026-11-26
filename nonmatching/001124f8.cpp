// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_00341700 asm("D_00341700");
extern "C" u32 D_00341780 asm("D_00341780");
extern "C" u32 D_003417c4 asm("D_003417c4");
extern "C" u32 D_003417c8 asm("D_003417c8");
extern "C" u32 D_003417d0 asm("D_003417d0");
extern "C" u32 D_003a9040 asm("D_003a9040");
extern "C" u32 func_001127b0() asm("func_001127b0");
extern "C" void func_0010b550(u32) asm("func_0010b550");

// 0x001124f8 wtarget_001124f8(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001124f8() asm("_Z16wtarget_001124f8jjjj");
u32 lift_001124f8() {
    u32 t6;
    u32 t6_0;
    *(u8*)(&D_00341700) = 0;
    func_0010b550((u32)&D_003a9040);
    if ((*(u16*)(&D_0032bae0) != 0x808)) {
        if ((*(u16*)(&D_0032bae0) == 0x30d)) {
            t6 = 1;
        } else {
            t6 = 2;
        }
        t6_0 = t6;
    } else {
        t6_0 = 1;
    }
    *(u32*)(&D_00341780) = t6_0;
    *(u32*)(&D_003417c4) = 0;
    *(u32*)(&D_003417c8) = 0;
    *(u32*)(&D_003417d0) = 0xffffffff;
    return func_001127b0();
}
