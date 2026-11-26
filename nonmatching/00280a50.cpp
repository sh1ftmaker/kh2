// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f254 asm("D_0035f254");
extern "C" u32 D_0035f258 asm("D_0035f258");
extern "C" u32 D_00374120 asm("D_00374120");
extern "C" u32 func_00103550() asm("func_00103550");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028d7f0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d7f0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");

// 0x00280a50 func_00280a50
u32 func_00280a50() asm("_ZN2Tz12GumiGameOver5SetupEv");
u32 func_00280a50() {
    u8 frame[32];
    u32 s2;
    u32 t4;
    u32 t3;
    u32 t7;
    u32 t6;
    u32 t5;
    u32 s7;
    u32 s6;
    u32 s5;
    u32 s4;
    u32 s3;
    u32 s1;
    u32 s0;
    u32 fp;
    *(u32*)((u32)frame) = 0;
    func_0028d7f0(*(u32*)(&D_0035f250), 0x7532, 0, 0, 0, 0xffffffff, 0, 0);
    func_0023ef50(*(u32*)(&D_0035f250));
    func_0028d8c0(*(u32*)(&D_0035f258), 0x7533, 1, 0, *(u32*)(&D_0035f250), 0, 0xffffffff, 0);
    *(u32*)(((*(u32*)(&D_0035f258) + 0x18) + 0xb8)) = (*(u32*)(((*(u32*)(&D_0035f258) + 0x18) + 0xb8)) | 8);
    s2 = 0;
    do {
        t4 = ((s2 << 1) + (u32)&D_00374120);
        t3 = 0;
        do {
            t7 = ((t3 << 3) + ((u32)frame + 0x10));
            t6 = 3;
            t5 = *(u16*)(t4);
            s7 = (u32)&D_00374120;
            s6 = 2;
            s5 = 0x370000;
            s4 = 0x370000;
            s3 = ((u32)frame + 0x10);
            s1 = 0x35;
            s0 = 0x360000;
            fp = ((u32)frame + 0x18);
            do {
                *(u16*)(t7) = t5;
                t6 = (t6 + -1);
                t7 = (t7 + 2);
            } while (((s32)(t6) >= 0));
            t3 = (t3 + 1);
            t4 = (t4 + 6);
        } while (((s32)(((s32)(t3) < (s32)(2))) != 0));
        func_00288d80(*(u32*)((s0 + -0xdac)), s2, 1, 0, *(u32*)(&D_0035f250), *(u16*)(((s2 << 1) + ((func_00103550() ^ s1) ? (s5 + 0x4148) : (s4 + 0x4150)))), (u32)frame + 0x10, fp);
        func_00139620(func_002891b8(*(u32*)((s0 + -0xdac)), s2));
        *(u32*)((func_002891b8(*(u32*)((s0 + -0xdac)), s2) + 0x1b0)) = s6;
        s2 = (s2 + 1);
    } while (((s32)(((s32)(s2) < (s32)(3))) != 0));
    func_0028af28(*(u32*)(&D_0035f254), 0x20);
    func_0028af28(*(u32*)(&D_0035f254), 0x40);
    return func_002891f0(*(u32*)(&D_0035f254), 0, 1, 0, 0xffffffff);
}
