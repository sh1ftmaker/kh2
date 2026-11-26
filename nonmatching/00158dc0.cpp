// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034a9b0 asm("D_0034a9b0");
extern "C" u32 D_0034a9e8 asm("D_0034a9e8");
extern "C" f32 func_0013fd10(u32) asm("func_0013fd10");
extern "C" u32 func_0013f9e0(u32, u32, u32, u32, u32) asm("func_0013f9e0");
extern "C" u32 func_00143d10(u32, u32, u32, u32, u32) asm("func_00143d10");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" void func_00158ac8(u32) asm("func_00158ac8");
extern "C" void func_00158b20(u32) asm("func_00158b20");
extern "C" void func_00158b78(u32, u32) asm("func_00158b78");
extern "C" void func_00158c88(u32) asm("func_00158c88");
extern "C" void func_0016c2b0(u32, u32) asm("func_0016c2b0");

// 0x00158dc0 dk::DangleCamera::update(dk::ObjCamera*)
u32 lift_00158dc0(u32 a0) asm("_ZN2dk12DangleCamera6updateEPNS_9ObjCameraE");
u32 lift_00158dc0(u32 a0) {
    u8 frame[80];
    u32 s1;
    u32 v0;
    Q16 loc_0;
    u32 v0_0;
    u32 loc_44;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    s1 = func_00167f18(0);
    v0 = ((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x44))) + 0x40))))(*(u32*)((a0 + 0x44)));
    if ((v0 != 0)) {
        func_00158ac8(a0);
        if ((*(u8*)(&D_0034a9e8) == 1)) {
            func_0016c2b0((u32)&loc_0, *(u32*)((a0 + 0x44)));
            v0_0 = func_0016c028(*(u32*)((a0 + 0x44)));
            if ((((u32)&loc_0 + 0x10) != v0_0)) {
                *(Q16*)(((u32)&loc_0 + 0x10)) = *(Q16*)(v0_0);
            }
            if ((((u32)&loc_0 + 0x20) != (u32)frame)) {
                *(Q16*)(((u32)&loc_0 + 0x20)) = loc_0;
            }
            loc_44 = 0;
            if (((s32)(func_00143d10((u32)&loc_0 + 0x10, (u32)&loc_0 + 0x30, (u32)&loc_0 + 0x40, (u32)&loc_44, loc_0.w[0])) != 0)) {
                if ((((u32)&loc_0 + 0x30) != (u32)&D_0034a9b0)) {
                    *(Q16*)((u32)&D_0034a9b0) = *(Q16*)(((u32)&loc_0 + 0x30));
                }
            } else {
                if (((u32)frame != (u32)&D_0034a9b0)) {
                    *(Q16*)((u32)&D_0034a9b0) = loc_0;
                }
            }
            *(f32*)((a0 + 0x50)) = func_0013fd10(a0);
            *(u8*)(&D_0034a9e8) = 0;
            v0_3 = func_0013fd10(a0);
        } else {
            func_00158b78(s1, a0);
            v0_1 = func_0013f9e0(a0 + 0x70, a0 + 0x80, a0 + 0x60, 1, 1);
            if ((v0_1 != 0)) {
                func_00158b20(a0);
                func_00158c88(a0);
                v0_2 = func_0013f9e0(a0 + 0x70, a0 + 0x80, a0 + 0x60, 1, 1);
                v0_1 = v0_2;
            }
            v0_3 = v0_1;
        }
        v0 = v0_3;
    }
    return v0;
}
