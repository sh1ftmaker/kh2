// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e14 asm("D_00349e14");
extern "C" f32 func_00138840(u32) asm("func_00138840");
extern "C" f32 func_00139598(u32) asm("func_00139598");
extern "C" u32 func_001b1e70() asm("func_001b1e70");
extern "C" u32 func_001b1fc8(u32) asm("func_001b1fc8");
extern "C" u32 func_001b1ff0(u32) asm("func_001b1ff0");
extern "C" void func_00138650(u32, u32, u32, u32) asm("func_00138650");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_001395a8(u32) asm("func_001395a8");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00236410(u32, u32) asm("func_00236410");
extern "C" void func_00236428(u32, u32) asm("func_00236428");
extern "C" void func_002367c8(u32) asm("func_002367c8");
extern "C" void func_002ba2e8(u32, u32) asm("func_002ba2e8");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x001376b8 dk::TREASURE_BOX_INFO::update()
// minilink-rodata 0x0036aca0   (float literals live here in the original)
void lift_001376b8(u32 a0) asm("_ZN2dk17TREASURE_BOX_INFO6updateEv");
void lift_001376b8(u32 a0) {
    u32 s1;
    if ((0.0f < *(f32*)((a0 + 0x1b4)))) {
        *(f32*)((a0 + 0x1b4)) = (*(f32*)((a0 + 0x1b4)) - *(f32*)(&D_00349e14));
        func_00139598(a0);
        return;
    } else {
        if ((*(u32*)((a0 + 0x1b8)) != 0xffffffff)) {
            if (((s32)(*(u32*)((a0 + 0x518))) == 0)) {
                if ((func_001b1fc8(*(u32*)((a0 + 0x1b8))) == 0)) {
                    func_00139598(a0);
                    return;
                } else {
                    *(u32*)((a0 + 0x518)) = func_001b1ff0(*(u32*)((a0 + 0x1b8)));
                    s1 = func_001b1e70();
                    func_00138650(a0 + 0x1c0, 0x2b5c, *(u32*)((a0 + 0x518)), 0);
                    func_001386e0(a0 + 0x380, 0x2b5c, s1, a0 + 0x1e0, 6, 0);
                    func_00236410(a0 + 0x1e0, 0x3700);
                    func_00236428(a0 + 0x1e0, 0x2a00);
                    func_002367c8(a0 + 0x1e0);
                    *(u32*)(((a0 + 0x380) + 0x18c)) = a0;
                    func_001396b0(a0 + 0x380);
                    if ((*(u32*)(((a0 + 0x380) + 0x18c)) != 0)) {
                        *(u32*)(((a0 + 0x380) + 0x190)) = 0;
                        func_001396b0(a0 + 0x380);
                        if (((s32)(*(u32*)(((a0 + 0x380) + 0x190))) != 0)) {
                            func_0031a260(a0 + 0x380, 0);
                        }
                    }
                    if ((-20000.0f < *(f32*)((a0 + 0x1b4)))) {
                        func_002ba2e8(0xa, 0);
                        *(f32*)((a0 + 0x1b4)) = -20000.0f;
                    }
                    func_001395a8(a0);
                    func_00138840(a0);
                    return;
                }
            } else {
                if ((-20000.0f < *(f32*)((a0 + 0x1b4)))) {
                    func_002ba2e8(0xa, 0);
                    *(f32*)((a0 + 0x1b4)) = -20000.0f;
                }
                func_001395a8(a0);
                func_00138840(a0);
                return;
            }
        } else {
            if ((-20000.0f < *(f32*)((a0 + 0x1b4)))) {
                func_002ba2e8(0xa, 0);
                *(f32*)((a0 + 0x1b4)) = -20000.0f;
            }
            func_001395a8(a0);
            func_00138840(a0);
            return;
        }
    }
}
