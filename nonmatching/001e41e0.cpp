// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001e3650(u32) asm("func_001e3650");
extern "C" u32 func_001e3660(u32, u32) asm("func_001e3660");
extern "C" u32 func_001e3c98(u32, u32) asm("func_001e3c98");
extern "C" u32 func_001e3e48(u32, u32) asm("func_001e3e48");
extern "C" u32 func_001e4028(u32, u32) asm("func_001e4028");

// 0x001e41e0 func_001e41e0
u32 func_001e41e0(u32 a0) asm("func_001e41e0");
u32 func_001e41e0(u32 a0) {
    return func_001e4028(func_001e3e48(func_001e3c98(func_001e3660(func_001e3650(*(u32*)((a0 + 0x88))), 2), *(u32*)((a0 + 0x8c)) + 0xc0), *(u32*)((a0 + 0x8c)) + 0xd0), *(u32*)((a0 + 0x8c)) + 0xe0);
}
