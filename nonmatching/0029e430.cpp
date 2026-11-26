// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f228 asm("D_0035f228");
extern "C" u32 D_0035f5b6 asm("D_0035f5b6");
extern "C" u32 D_0035f5bc asm("D_0035f5bc");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00287dc0() asm("func_00287dc0");
extern "C" u32 func_00293d80(u32) asm("func_00293d80");
extern "C" u32 func_00293da0(u32) asm("func_00293da0");
extern "C" void func_0023d820(u32) asm("func_0023d820");
extern "C" void func_00292630() asm("func_00292630");

// 0x0029e430 func_0029e430
u32 func_0029e430() asm("_ZN2Tz5JmDic13CrearCharaObjEv");
u32 func_0029e430() {
    u32 v0;
    func_00292630();
    v0 = func_00287dc0();
    if (((s32)(func_00139d78(v0)) != 0)) {
        func_0023d820(v0);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f5bc))) != 0)) {
        func_0023d820(*(u32*)(&D_0035f5bc));
    }
    *(u16*)(&D_0035f5b6) = 0xffffffff;
    if ((*(s8*)(&D_0035f228) == 1)) {
        return func_00293da0(0x13ef);
    } else {
        return func_00293d80(0x13ef);
    }
}
