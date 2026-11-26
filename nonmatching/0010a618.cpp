// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0033cc78 asm("D_0033cc78");
extern "C" u32 D_00340ed0 asm("D_00340ed0");
extern "C" u32 D_00340ed4 asm("D_00340ed4");
extern "C" u32 D_00340ed8 asm("D_00340ed8");
extern "C" u32 func_00109050(u32) asm("func_00109050");
extern "C" u32 func_00109070() asm("func_00109070");
extern "C" void func_00108998(u32) asm("func_00108998");
extern "C" void func_00108a10(u32) asm("func_00108a10");
extern "C" void func_00108ae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00108ae0");
extern "C" void func_00108f28(u32, u32) asm("func_00108f28");
extern "C" void func_00109008(u32) asm("func_00109008");
extern "C" void func_00109330() asm("func_00109330");
extern "C" void func_00109340() asm("func_00109340");
extern "C" void func_00109fe8(u32) asm("func_00109fe8");
extern "C" void func_0010a1d0(u32) asm("func_0010a1d0");
extern "C" void func_0010a4d0() asm("func_0010a4d0");
extern "C" void func_0010a580(u32) asm("func_0010a580");
extern "C" void func_0010a5f0() asm("func_0010a5f0");
extern "C" void func_001344b8(u32) asm("func_001344b8");

// 0x0010a618 ctarget0_0010a618()
u32 lift_0010a618() asm("_Z17ctarget0_0010a618v");
u32 lift_0010a618() {
    func_00109330();
    func_00109340();
    func_001344b8(0x40);
    func_00108998((u32)&D_00340ed8);
    func_00108f28((u32)&D_00340ed8, (*(u8*)(&D_00340ed0) | (*(u8*)(((u32)&D_00340ed0 + 1)) << 8)) | (*(u8*)(((u32)&D_00340ed0 + 2)) << 0x10));
    func_00109008((u32)&D_00340ed8);
    if (((s32)(*(u32*)(&D_0033cc78)) != 0)) {
        *(u32*)(&D_00340ed4) = 1;
        func_00109fe8(*(u32*)(&D_0033cc78));
        *(u32*)(&D_00340ed4) = 2;
        func_0010a1d0(*(u32*)(&D_0033cc78));
        func_0010a5f0();
        func_00108ae0((u32)&D_00340ed8, 4, 0, 0, func_00109050((u32)&D_00340ed8), 0, 0, 0);
    }
    if (((s32)(*(u32*)(((u32)&D_0033cc78 + 4))) != 0)) {
        *(u32*)(&D_00340ed4) = 3;
        func_00109fe8(*(u32*)(((u32)&D_0033cc78 + 4)));
        *(u32*)(&D_00340ed4) = 4;
        func_0010a1d0(*(u32*)(((u32)&D_0033cc78 + 4)));
        func_0010a5f0();
        func_00108ae0((u32)&D_00340ed8, 4, 0, 0, func_00109050((u32)&D_00340ed8), 0, 0, 0);
    }
    *(u32*)(&D_00340ed4) = 5;
    func_00109fe8(*(u32*)(((u32)&D_0033cc78 + 8)));
    *(u32*)(&D_00340ed4) = 6;
    func_0010a580(0);
    *(u32*)(&D_00340ed4) = 7;
    func_00109fe8(*(u32*)(((u32)&D_0033cc78 + 0x10)));
    *(u32*)(&D_00340ed4) = 8;
    func_0010a1d0(*(u32*)(((u32)&D_0033cc78 + 8)));
    *(u32*)(&D_00340ed4) = 0xa;
    func_0010a4d0();
    *(u32*)(&D_00340ed4) = 0xb;
    func_0010a1d0(*(u32*)(((u32)&D_0033cc78 + 0x10)));
    func_00108a10((u32)&D_00340ed8);
    *(u32*)(&D_00340ed4) = 0;
    return func_00109070();
}
