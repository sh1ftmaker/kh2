// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_002a2818() asm("func_002a2818");
extern "C" u32 func_002af0a0() asm("func_002af0a0");
extern "C" u32 func_002af748() asm("func_002af748");
extern "C" u32 func_002afe18() asm("func_002afe18");
extern "C" u32 func_002b05f8() asm("func_002b05f8");
extern "C" u32 func_002b14f0() asm("func_002b14f0");

// 0x002af010 func_002af010
void func_002af010() asm("_ZN2Tz8JmPuzzle7ControlEv");
void func_002af010() {
    switch (func_00287bc0()) {
    case 27:
        func_002af0a0();
        return;
    case 28:
        func_002af748();
        return;
    case 29:
        func_002afe18();
        return;
    case 30:
    case 31:
        func_002b05f8();
        return;
    case 32:
        func_002b14f0();
        return;
    case 33:
        func_002a2818();
        return;
    default:
        return;
    }
}
