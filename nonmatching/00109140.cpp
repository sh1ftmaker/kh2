// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00340eb0 asm("D_00340eb0");
extern "C" u32 D_0036a180 asm("D_0036a180");
extern "C" u32 D_003a8e10 asm("D_003a8e10");
extern "C" u32 func_0010a8a8(f32, f32) asm("func_0010a8a8");
extern "C" void func_00109330() asm("func_00109330");
extern "C" void func_00109340() asm("func_00109340");
extern "C" void func_0010a7d8(u32, u32, u32) asm("func_0010a7d8");
extern "C" void func_0010a828(f32, f32) asm("func_0010a828");
extern "C" void func_00133de8() asm("func_00133de8");

// 0x00109140 func_00109140
// minilink-rodata 0x0036a188   (float literals live here in the original)
u32 func_00109140() asm("func_00109140");
u32 func_00109140() {
    func_00133de8();
    func_00109330();
    func_00109340();
    *(u64*)(&D_003a8e10) = *(u64*)(&D_0036a180);
    *(u8*)(&D_00340eb0) = 1;
    func_0010a7d8(0x80, 0x80, 0x80);
    func_0010a828(5000.0f, 1000000.0f);
    return func_0010a8a8(0.0f, 255.0f);
}
