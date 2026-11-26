// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 D_00361fa8 asm("D_00361fa8");
extern "C" f32 func_0019c768(u32) asm("func_0019c768");
extern "C" f32 func_002d0d88(u32) asm("func_002d0d88");
extern "C" u32 func_0016a020(u32) asm("func_0016a020");
extern "C" u32 func_00199938(u32, u32) asm("func_00199938");
extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");
extern "C" u32 func_002cf270(u32, u32) asm("func_002cf270");
extern "C" u32 func_002e3260(u32, u32, u32) asm("func_002e3260");
extern "C" void func_0016ace0(u32, u32) asm("func_0016ace0");
extern "C" void func_002cff50(u32) asm("func_002cff50");

// 0x002cf4a8 func_002cf4a8
f32 func_002cf4a8(u32 a0) asm("_ZN2Ti5MGObj6appearERNS_11MGObjMemberE");
f32 func_002cf4a8(u32 a0) {
    u32 s0;
    u32 v0;
    u32 s3;
    u32 t5;
    f32 loc_0;
    f32 loc_4;
    f32 loc_8;
    u32 loc_c;
    f32 f0;
    u32 t5_0;
    f32 f0_1;
    s0 = 0;
    do {
        v0 = func_001b9bc8(s0);
        if (((s32)(v0) == 0)) {
            s3 = ((s32)(0) == 0) ? func_00199938(*(u32*)((a0 + 0xc)), *(u32*)((a0 + 0x14))) : 0;
            if ((func_0019c768(s3) != 0)) {
                func_002cff50(s3);
            }
            if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
                *(u32*)((s3 + 0xaf8)) = func_002e3260(*(u32*)((*(u32*)(&D_00361f60) + 0x5c)), *(u32*)(a0), *(u16*)(*(u32*)((*(u32*)((a0 + 0x18)) + 0x10))));
                *(u32*)((s3 + 0xafc)) = *(u32*)((*(u32*)((a0 + 0x18)) + 0x10));
                t5 = ((s32)(*(u32*)((a0 + 0x1c))) != 0) ? *(u32*)((*(u32*)((a0 + 0x1c)) + 0x10)) : 0;
                *(u32*)((s3 + 0xb00)) = t5;
            }
            if (((s32)(func_0019c768(s3)) != 0)) {
                loc_0 = *(f32*)((*(u32*)((a0 + 0xc)) + 4));
                loc_4 = *(f32*)((*(u32*)((a0 + 0xc)) + 8));
                loc_8 = *(f32*)((*(u32*)((a0 + 0xc)) + 0xc));
                loc_c = 0;
                func_0016ace0(s3, (u32)&loc_0);
                func_002d0d88(s3);
                f0 = func_002d0d88(s3);
            } else {
                *(u32*)(&D_00361fa8) = (*(u32*)(&D_00361fa8) + 1);
                f0 = func_0019c768(s3);
            }
            return f0;
        }
        if (((s32)((*(u32*)((v0 + 0x588)) & 0x8000000)) == 0)) {
            s0 = v0;
            continue;
        }
        if ((func_0016a020(v0) != *(u32*)(*(u32*)((a0 + 0xc))))) {
            s0 = v0;
            continue;
        }
        if (((s32)(func_0019c768(v0)) == 0)) {
            s0 = v0;
            continue;
        }
        if (((s32)(func_002cf270(v0 + 0xaf0, 0x1000)) == 0)) {
            s0 = v0;
            continue;
        }
        s0 = v0;
    } while (((s32)(*(u32*)((v0 + 0xb10))) > 0));
    if (((s32)(s0) == 0)) {
        s0 = func_00199938(*(u32*)((a0 + 0xc)), *(u32*)((a0 + 0x14)));
    }
    if ((func_0019c768(s0) != 0)) {
        func_002cff50(s0);
    }
    if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
        *(u32*)((s0 + 0xaf8)) = func_002e3260(*(u32*)((*(u32*)(&D_00361f60) + 0x5c)), *(u32*)(a0), *(u16*)(*(u32*)((*(u32*)((a0 + 0x18)) + 0x10))));
        *(u32*)((s0 + 0xafc)) = *(u32*)((*(u32*)((a0 + 0x18)) + 0x10));
        t5_0 = ((s32)(*(u32*)((a0 + 0x1c))) != 0) ? *(u32*)((*(u32*)((a0 + 0x1c)) + 0x10)) : 0;
        *(u32*)((s0 + 0xb00)) = t5_0;
    }
    if (((s32)(func_0019c768(s0)) != 0)) {
        loc_0 = *(f32*)((*(u32*)((a0 + 0xc)) + 4));
        loc_4 = *(f32*)((*(u32*)((a0 + 0xc)) + 8));
        loc_8 = *(f32*)((*(u32*)((a0 + 0xc)) + 0xc));
        loc_c = 0;
        func_0016ace0(s0, (u32)&loc_0);
        func_002d0d88(s0);
        f0_1 = func_002d0d88(s0);
    } else {
        *(u32*)(&D_00361fa8) = (*(u32*)(&D_00361fa8) + 1);
        f0_1 = func_0019c768(s0);
    }
    return f0_1;
}
