// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f264 asm("D_0035f264");
extern "C" u32 func_001395f8(u32) asm("func_001395f8");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00280148 func_00280148
u32 func_00280148() asm("_ZN2Tz9GumiPause12CreateAdviceEv");
u32 func_00280148() {
    u8 frame[16];
    u32 s3;
    u32 s3_0;
    u32 v0;
    *(u32*)((u32)frame) = 0;
    s3 = (*(u32*)(&D_0035f264) + 0x18);
    func_0028d980(*(u32*)(&D_0035f264) + 0x18, 0x755d, 0, 0, *(u32*)(&D_0035f250), 7, 8, 0xffffffff);
    func_00139620(s3);
    func_001395f8(s3);
    *(u32*)((s3 + 0x1b0)) = 2;
    *(u32*)((s3 + 0x198)) = func_00192048(0x4903);
    *(u32*)((u32)frame) = 0;
    s3_0 = (*(u32*)(&D_0035f264) + 0x1cc);
    func_0028d980(*(u32*)(&D_0035f264) + 0x1cc, 0x755e, 0, 0, *(u32*)(&D_0035f250), 0xa, 0xb, 0xffffffff);
    func_002fde18(*(u32*)(&D_0035f264) + 0x518, 0, 8);
    func_00139620(s3_0);
    v0 = func_001395f8(s3_0);
    *(u32*)((s3_0 + 0x1b0)) = 2;
    *(u32*)((s3_0 + 0x198)) = (*(u32*)(&D_0035f264) + 0x518);
    return v0;
}
