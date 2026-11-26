// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035e2f0 asm("D_0035e2f0");
extern "C" u32 func_00197df8(u32, u32, u32) asm("func_00197df8");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139598(u32) asm("func_00139598");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00150260(u32, u32, u32, u32) asm("func_00150260");
extern "C" void func_0023a9c0(u32, u32, u32) asm("func_0023a9c0");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x0022c1f8 func_0022c1f8
void func_0022c1f8(u32 a0, u32 a1, u32 a2) asm("_ZN2sa12ROUND_NUMBER6createEiPNS_9COUNTDOWNE");
void func_0022c1f8(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    u32 s6;
    u32 s2;
    u32 s3;
    u32 s2_0;
    u32 s1;
    u32 s1_1;
    u32 s7;
    u32 s2_2;
    *(u32*)((a0 + 0x18)) = a2;
    s6 = func_00197df8(a0, a1, a2);
    func_00150260((u32)&D_0035e2f0, a1, 3, (u32)frame);
    func_0023a9c0(a2 + 0x18, (u32)frame + 0x10, (u32)frame + 0x14);
    *(u32*)(((u32)frame + 0x10)) = (*(u32*)(((u32)frame + 0x10)) + func_0023aa18(a2 + 0x18));
    *(u32*)(((u32)frame + 0x14)) = (*(u32*)(((u32)frame + 0x14)) + func_0023aa38(a2 + 0x18));
    s2 = 2;
    s3 = (u32)frame;
    do {
        func_001386e0((a0 + ((s2 - 2) * -0x198)) + 0x1c, 0x6590, *(u32*)((s6 + 4)), a2 + 0x1c0, *(u32*)((s3 + ((s2 - 2) * -4))), 0x10);
        *(u32*)((((a0 + ((s2 - 2) * -0x198)) + 0x1c) + 0x18c)) = a2;
        func_001396b0((a0 + ((s2 - 2) * -0x198)) + 0x1c);
        if (((s32)(*(u32*)((((a0 + ((s2 - 2) * -0x198)) + 0x1c) + 0x18c))) != 0)) {
            *(u32*)((((a0 + ((s2 - 2) * -0x198)) + 0x1c) + 0x190)) = 0;
            func_001396b0((a0 + ((s2 - 2) * -0x198)) + 0x1c);
            if (((s32)(*(u32*)((((a0 + ((s2 - 2) * -0x198)) + 0x1c) + 0x190))) != 0)) {
                func_0031a260((a0 + ((s2 - 2) * -0x198)) + 0x1c, 0);
            }
        }
        func_00139660((a0 + ((s2 - 2) * -0x198)) + 0x1c);
        func_00139688((a0 + ((s2 - 2) * -0x198)) + 0x1c);
        s2 = (s2 + -1);
    } while (((s32)(s2) >= 0));
    s2_0 = 2;
    s1 = (u32)frame;
    do {
        if ((*(u32*)(((s1 + ((s2_0 - 2) * 4)) + 8)) != 7)) {
            break;
        }
        func_00138c10((a0 + ((s2_0 - 2) * 0x198)) + 0x34c, 0x11);
        func_00139598((a0 + ((s2_0 - 2) * 0x198)) + 0x34c);
        s2_0 = (s2_0 + -1);
    } while (((s32)(s2_0) > 0));
    s1_1 = 2;
    s7 = 0;
    do {
        if ((*(u32*)(((a0 + ((s1_1 - 2) * -0x198)) + 0x1a0)) != 0x11)) {
            s7 = (s7 + func_0023aa98((a0 + ((s1_1 - 2) * -0x198)) + 0x34));
        }
        s1_1 = (s1_1 + -1);
    } while (((s32)(s1_1) >= 0));
    *(u32*)(((u32)frame + 0x10)) = (*(u32*)(((u32)frame + 0x10)) + ((s32)((s7 + (s7 >> 0x1f))) >> 1));
    s2_2 = 2;
    do {
        if ((*(u32*)((a0 + 0x1a0)) != 0x11)) {
            *(u32*)(((u32)frame + 0x10)) = (*(u32*)(((u32)frame + 0x10)) - func_0023aa98(a0 + 0x34));
            func_00138c68(a0 + 0x1c, *(u32*)(((u32)frame + 0x10)) - func_0023aa98(a0 + 0x34), *(u32*)(((u32)frame + 0x14)));
        }
        a0 = (a0 + 0x198);
        s2_2 = (s2_2 + -1);
    } while (((s32)(s2_2) >= 0));
    return;
}
