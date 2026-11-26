// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f100 asm("D_0035f100");
extern "C" u32 D_0035f108 asm("D_0035f108");
extern "C" u32 D_0035f11c asm("D_0035f11c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_0023e9c8(u32, u32, u32) asm("func_0023e9c8");
extern "C" u32 func_00287dc0() asm("func_00287dc0");
extern "C" void func_0023d808(u32, u32) asm("func_0023d808");
extern "C" void func_0023e5d0(u32, u32, u32) asm("func_0023e5d0");
extern "C" void func_0023e858(u32, u32, f32) asm("func_0023e858");
extern "C" void func_0023e8b8(u32, u32, f32) asm("func_0023e8b8");
extern "C" void func_0023e8d8(u32, u32, f32) asm("func_0023e8d8");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");

// 0x0026e1e0 func_0026e1e0
// minilink-rodata 0x00373878   (float literals live here in the original)
void func_0026e1e0() asm("_ZN2Tz8Selector9CreateObjEv");
void func_0026e1e0() {
    u32 s2;
    u32 v0;
    if (((s32)(*(u32*)(&D_0035f11c)) != 0)) {
        if (((s32)(*(u32*)(*(u32*)(&D_0035f11c))) != 0)) {
            if (((s32)(*(u32*)((*(u32*)(&D_0035f11c) + 4))) != 0)) {
                s2 = (*(u32*)(&D_0035f3d4) + -1);
                func_0028d8c0(*(u32*)(&D_0035f108), *(u32*)(&D_0035f3d4) + -1, 0, 0, *(u32*)(&D_0035f100), 0x10, 0x11, 0);
                v0 = func_00287dc0();
                func_0023d808(v0, s2);
                ((void(*)(u32, u32, u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(v0) + 0x18))))(v0, 0, *(u32*)(*(u32*)(&D_0035f11c)) | 0x20000000, 0xffffffff, 2, 0, 0);
                func_0023e5d0(v0, 0, *(u32*)((*(u32*)(&D_0035f11c) + 4)));
                func_0023e858(v0, 0, -100.0f);
                func_0023e8b8(v0, 0, 0.0f);
                func_0023e8d8(v0, 0, 0.0f);
                func_0023e9c8(v0, 0, *(u32*)(&D_0035f108));
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
