// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016b800(u32) asm("func_0016b800");
extern "C" u32 func_001c8bb8(u32) asm("func_001c8bb8");
extern "C" u32 func_001c8cc0(u32) asm("func_001c8cc0");
extern "C" void func_00190878(u32, u32, u32) asm("func_00190878");
extern "C" void func_0019ba60(u32) asm("func_0019ba60");
extern "C" void func_001bc778(u32) asm("func_001bc778");
extern "C" void func_001bc780(u32, u32, u32, u32) asm("func_001bc780");

// 0x001bf010 func_001bf010
void func_001bf010(u32 a0) asm("_ZN2YS13FIELD_COMMAND15make_genie_formEv");
void func_001bf010(u32 a0) {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 t7;
    u32 sp;
    v0 = func_0016b800(0xc9);
    func_0019ba60(v0);
    func_00190878(a0 + 0xa90, v0, 0);
    func_001bc778(a0 + 0x180);
    v0_0 = func_001c8bb8((u32)frame);
    s1 = (a0 + 0x180);
    if (((s32)(v0_0) > 0)) {
        s2 = 0;
        s3 = (a0 + 0xa90);
        t7 = (u32)frame;
        do {
            func_001bc780(s1, func_001c8cc0(*(s8*)(t7)), s3, 1);
            s2 = (s2 + 1);
            t7 = ((u32)frame + s2);
        } while (((s32)(t7) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
