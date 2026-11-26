// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002272b8 asm("D_002272b8");
extern "C" u32 D_00227e30 asm("D_00227e30");
extern "C" u32 D_00228058 asm("D_00228058");
extern "C" u32 D_0035de27 asm("D_0035de27");
extern "C" u32 D_0035de30 asm("D_0035de30");
extern "C" u32 D_0035de34 asm("D_0035de34");
extern "C" u32 D_0035de38 asm("D_0035de38");
extern "C" u32 D_0035de3c asm("D_0035de3c");
extern "C" u32 _ZN2sa5EVENT18EventTaskFinalizerEP4TASK asm("_ZN2sa5EVENT18EventTaskFinalizerEP4TASK");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_002282d8() asm("func_002282d8");
extern "C" void func_00228240(u32) asm("func_00228240");

// 0x00228150 func_00228150
u32 func_00228150(u32 a0) asm("_ZN2sa5EVENT17event_task_createEi");
u32 func_00228150(u32 a0) {
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    func_00228240(a0);
    s0 = func_002282d8();
    v0 = func_00102c80();
    *(u32*)(&D_0035de3c) = *(u32*)((v0 + 4));
    if (((s32)(*(u32*)(&D_0035de30)) == 0)) {
        v0_0 = func_00102818(*(u32*)((v0 + 4)), a0, s0, (u32)&D_00227e30, 0x2000);
        *(u32*)(&D_0035de30) = v0_0;
        v0 = v0_0;
    }
    if ((*(u32*)(&D_0035de34) == 0)) {
        v0_1 = func_00102818(*(u32*)(&D_0035de3c), a0, s0, (u32)&D_002272b8, 0x2000);
        *(u32*)(&D_0035de34) = v0_1;
        v0 = v0_1;
    }
    if ((*(u32*)(&D_0035de38) == 0)) {
        v0_2 = func_00102788(*(u32*)(&D_0035de3c), a0, s0, (u32)&D_00228058);
        *(u32*)(&D_0035de38) = v0_2;
        *(u32*)((v0_2 + 0x30)) = (u32)&_ZN2sa5EVENT18EventTaskFinalizerEP4TASK;
        *(u8*)(&D_0035de27) = 0;
        v0 = v0_2;
    }
    return v0;
}
