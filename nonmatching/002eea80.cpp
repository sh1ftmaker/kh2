// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363860 asm("D_00363860");
extern "C" u32 func_0011b6a8(u32) asm("func_0011b6a8");
extern "C" u32 func_001a93e8(u32) asm("func_001a93e8");
extern "C" u32 func_001a9420(u32) asm("func_001a9420");
extern "C" void func_00106ab8(u32) asm("func_00106ab8");
extern "C" void func_00106c08(u32) asm("func_00106c08");
extern "C" void func_00106d40(u32, f32, f32, f32, f32, f32, f32, f32, f32) asm("func_00106d40");
extern "C" void func_00108698(u32) asm("func_00108698");
extern "C" void func_0011e260(u32, u32) asm("func_0011e260");
extern "C" void func_001a91f8(u32) asm("func_001a91f8");
extern "C" void func_001a92d8(u32, u32, u32) asm("func_001a92d8");
extern "C" void func_002edf28(u32, u32, u32) asm("func_002edf28");
extern "C" void func_002eeee8(u32, u32) asm("func_002eeee8");

// 0x002eea80 func_002eea80
// minilink-rodata 0x003761dc   (float literals live here in the original)
f32 func_002eea80(u32 a0, u32 a1, u32 a2) asm("_ZN4menu9ObjWidgetC1EP9ALLOCATORj");
f32 func_002eea80(u32 a0, u32 a1, u32 a2) {
    u32 s2;
    u32 s4;
    u32 v0;
    u32 v0_0;
    f32 loc_0;
    f32 loc_8;
    f32 loc_10;
    u32 t7;
    u32 v0_1;
    func_002edf28(a0, a1, a2);
    *(u32*)((a0 + 0x28)) = a1;
    *(u32*)((a0 + 0x24)) = 0;
    *(u32*)(a0) = (u32)&D_00363860;
    s2 = (a0 + 0x2c);
    func_001a91f8(s2);
    s4 = (a0 + 0x50);
    func_001a92d8(s2, a2, 0);
    func_00106ab8(s4);
    func_00108698(a0 + 0x190);
    func_002eeee8(a0 + 0x1c8, a0);
    v0 = func_001a93e8(s2);
    *(u32*)((a0 + 0x44)) = ((u32(*)(u32, u32))(*(u32*)((*(u32*)(v0) + 0x24))))(v0, *(u32*)((a0 + 0x28)));
    v0_0 = func_001a9420(s2);
    func_0011e260(*(u32*)((a0 + 0x44)), v0_0);
    *(u32*)((a0 + 0x1b4)) = v0_0;
    *(u8*)((a0 + 0x19a)) = 0xffffff80;
    *(u32*)((a0 + 0x190)) = (*(u32*)((a0 + 0x190)) | 2);
    *(f32*)((a0 + 0x1b0)) = 80000.0f;
    *(u8*)((a0 + 0x19b)) = 0xffffffff;
    loc_0 = 4000000.0f;
    loc_8 = 256.0f;
    loc_10 = 208.0f;
    *(u8*)((a0 + 0x198)) = 0xffffff80;
    *(u8*)((a0 + 0x199)) = 0xffffff80;
    func_00106d40(s4, 512.0f, 0.7999999523162842f, 0.8666666150093079f, 2048.0f, 2048.0f, 1.0f, 16770000.0f, 1.0f);
    func_00106c08(s4);
    t7 = (a0 + 0x180);
    v0_1 = func_0011b6a8(a0 + 0x150);
    *(f32*)((t7 + 0xc)) = 1.0f;
    *(f32*)((a0 + 0x180)) = 0.0f;
    *(f32*)((t7 + 4)) = 0.0f;
    *(f32*)((t7 + 8)) = 500.0f;
    return v0_1;
}
