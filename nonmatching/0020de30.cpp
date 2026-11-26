// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352bf4 asm("D_00352bf4");
extern "C" u32 D_00352c00 asm("D_00352c00");
extern "C" u32 D_00808080 asm("D_00808080");
extern "C" u32 D_01da8bb0 asm("D_01da8bb0");
extern "C" u32 D_01da8c40 asm("D_01da8c40");

// 0x0020de30 u_call0_0020de30()
u32 lift_0020de30() asm("_Z16u_call0_0020de30v");
u32 lift_0020de30() {
    u32 s3;
    u32 t4;
    s3 = ((u64)(7) << 0x3c);
    *(u64*)(((u32)&D_01da8bb0 + 0x10)) = (s3 | 0x8001);
    *(u64*)(((u32)&D_01da8bb0 + 0x18)) = 0xeeeeeee;
    *(u64*)(((u32)&D_01da8bb0 + 0x20)) = *(u64*)(&D_00352c00);
    *(u64*)(((u32)&D_01da8bb0 + 0x28)) = 0x4c;
    *(u64*)(((u32)&D_01da8bb0 + 0x38)) = 0x4e;
    *(u64*)(((u32)&D_01da8bb0 + 0x40)) = 0x7000d;
    *(u64*)(((u32)&D_01da8bb0 + 0x30)) = ((*(u32*)(&D_00352bf4) | 0x31000000) | (u64)(1));
    *(u64*)(((u32)&D_01da8bb0 + 0x48)) = 0x47;
    *(u64*)(((u32)&D_01da8bb0 + 0x50)) = 0x21;
    *(u64*)(((u32)&D_01da8bb0 + 0x58)) = 0x14;
    *(u64*)(((u32)&D_01da8bb0 + 0x78)) = 8;
    *(u64*)(((u32)&D_01da8bb0 + 0x88)) = 0x3d;
    t4 = ((u64)(1) << 0x27);
    *(u64*)(((u32)&D_01da8bb0 + 0x60)) = t4;
    *(u64*)(((u32)&D_01da8bb0 + 0x68)) = 0x3b;
    *(u64*)(((u32)&D_01da8bb0 + 0x80)) = (u32)&D_00808080;
    *(u64*)(((u32)&D_01da8bb0 + 0x70)) = 0;
    *(u64*)(((u32)&D_01da8c40 + 0x10)) = (s3 | 0x8001);
    *(u64*)(((u32)&D_01da8c40 + 0x18)) = 0xeeeeeee;
    *(u64*)(((u32)&D_01da8c40 + 0x28)) = 0x4c;
    *(u64*)(((u32)&D_01da8c40 + 0x20)) = *(u64*)(&D_00352c00);
    *(u64*)(((u32)&D_01da8c40 + 0x48)) = 0x47;
    *(u64*)(((u32)&D_01da8c40 + 0x38)) = 0x4e;
    *(u64*)(((u32)&D_01da8c40 + 0x40)) = 0x7000d;
    *(u64*)(((u32)&D_01da8c40 + 0x30)) = (*(u32*)(&D_00352bf4) | 0x31000000);
    *(u64*)(((u32)&D_01da8c40 + 0x50)) = 0x21;
    *(u64*)(((u32)&D_01da8c40 + 0x58)) = 0x14;
    *(u64*)(((u32)&D_01da8c40 + 0x80)) = (u32)&D_00808080;
    *(u64*)(((u32)&D_01da8c40 + 0x78)) = 8;
    *(u64*)(((u32)&D_01da8c40 + 0x60)) = t4;
    *(u64*)(((u32)&D_01da8c40 + 0x70)) = 0;
    *(u64*)(((u32)&D_01da8c40 + 0x68)) = 0x3b;
    *(u64*)(((u32)&D_01da8c40 + 0x88)) = 0x3d;
    return 0x7000d;
}
