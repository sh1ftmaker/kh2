// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f6c4 asm("D_0035f6c4");
extern "C" u32 D_00372f40 asm("D_00372f40");
extern "C" u32 func_00263a58(u32, u32) asm("func_00263a58");
extern "C" u32 func_00263a90(u32, u32) asm("func_00263a90");
extern "C" u32 func_00263d28(u32) asm("func_00263d28");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_002b6338(u32, u32, u32, u32) asm("func_002b6338");

// 0x0025d560 func_0025d560
u32 func_0025d560() asm("func_0025d560");
u32 func_0025d560() {
    u32 v0;
    v0 = func_00287bc0();
    if (((s32)(v0) == 0)) {
        return func_00263a58(*(u16*)(((func_0028b040(*(u32*)(&D_0035f64c)) << 1) + (u32)&D_00372f40)), 1);
    } else {
        if ((v0 != 0x13)) {
            if ((v0 == 1)) {
                func_002b6338(*(u32*)(&D_0035f6c4), 0x200, 0xb85a, func_0028b040(*(u32*)(&D_0035f64c)));
                return func_00263a90(*(u32*)(&D_0035f6c4), 1);
            } else {
                if ((v0 == 0xc)) {
                    return func_00263a58(0x8aa1, 1);
                } else {
                    return func_00263d28(0x8a82);
                }
            }
        } else {
            return func_00263a58(0x8a82, 1);
        }
    }
}
