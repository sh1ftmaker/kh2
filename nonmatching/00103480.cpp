// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00103100 asm("D_00103100");
extern "C" u32 D_001031d0 asm("D_001031d0");
extern "C" u32 D_0032b9e8 asm("D_0032b9e8");
extern "C" u32 D_0032ba1c asm("D_0032ba1c");
extern "C" u32 D_0032ba20 asm("D_0032ba20");
extern "C" u32 D_0032ba28 asm("D_0032ba28");
extern "C" u32 func_001384c0() asm("func_001384c0");
extern "C" void func_00103500(u32) asm("func_00103500");
extern "C" void func_00103c70() asm("func_00103c70");
extern "C" void func_00103e78() asm("func_00103e78");
extern "C" void func_00103ea0(u32) asm("func_00103ea0");
extern "C" void func_0023ed90() asm("func_0023ed90");

// 0x00103480 func_00103480
u32 func_00103480() asm("func_00103480");
u32 func_00103480() {
    u32 v0;
    *(u8*)(&D_0032ba28) = 0;
    func_00103ea0(0);
    *(u32*)(((u32)&D_0032b9e8 + 0x24)) = (u32)&D_001031d0;
    *(u32*)(((u32)&D_0032b9e8 + 0x20)) = (u32)&D_00103100;
    func_00103500(0xffffffff);
    func_00103c70();
    func_00103e78();
    func_0023ed90();
    *(u32*)(&D_0032ba20) = 0xffffffff;
    v0 = func_001384c0();
    *(u8*)(&D_0032ba1c) = v0;
    return v0;
}
