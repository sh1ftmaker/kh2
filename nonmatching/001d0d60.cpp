// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 func_0017a538(u32) asm("func_0017a538");
extern "C" u32 func_001991a8(u32, u32) asm("func_001991a8");
extern "C" u32 func_001af290(u32) asm("func_001af290");
extern "C" u32 func_001af328(u32) asm("func_001af328");
extern "C" u32 func_001af360(u32) asm("func_001af360");
extern "C" u32 func_001b6c60(u32) asm("func_001b6c60");
extern "C" u32 func_001bb7f8(u32) asm("func_001bb7f8");
extern "C" u32 func_001bbb50() asm("func_001bbb50");
extern "C" u32 func_001c8ab0(u32) asm("func_001c8ab0");
extern "C" u32 func_001c8b48() asm("func_001c8b48");
extern "C" void func_00179e18(u32) asm("func_00179e18");
extern "C" void func_001d0eb8(u32) asm("func_001d0eb8");
extern "C" void func_001d1408(u32) asm("func_001d1408");

// 0x001d0d60 func_001d0d60
u32 func_001d0d60(u32 a0) asm("func_001d0d60");
u32 func_001d0d60(u32 a0) {
    if (((s32)((*(u32*)(&D_0034f240) & 0x20000)) != 0)) {
        if ((func_001bb7f8(a0) == 0)) {
            func_00179e18(a0);
            if (((s32)(func_0017a538(a0)) == 0)) {
                if (((s32)((*(u32*)((a0 + 0xb50)) ^ 0xc)) != 0)) {
                    func_001d0eb8(a0);
                    return func_001991a8(0x5a, 0);
                } else {
                    return func_001b6c60(a0);
                }
            } else {
                return func_001b6c60(a0);
            }
        } else {
            return func_001991a8(0x5a, 0);
        }
    } else {
        func_00179e18(a0);
        if (((s32)(func_001c8b48()) != 0)) {
            if (((s32)((*(u32*)((a0 + 0xb50)) ^ 0xc)) != 0)) {
                func_001d0eb8(a0);
                return func_001af328(a0);
            } else {
                return func_001b6c60(a0);
            }
        } else {
            if (((s32)(func_001bbb50()) != 0)) {
                func_001d0eb8(a0);
                return func_001af360(a0);
            } else {
                if (((s32)(func_0017a538(a0)) == 0)) {
                    if (((s32)((*(u32*)((a0 + 0xb50)) ^ 0xc)) != 0)) {
                        if ((func_001c8ab0(a0) == 2)) {
                            func_001d1408(a0);
                        }
                        func_001d0eb8(a0);
                        return func_001af290(a0);
                    } else {
                        return func_001b6c60(a0);
                    }
                } else {
                    return func_001b6c60(a0);
                }
            }
        }
    }
}
