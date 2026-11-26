// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0010f660() asm("func_0010f660");
extern "C" u32 func_0010f648(u32) asm("func_0010f648");
extern "C" u32 func_00116938(u32, u32, u32) asm("func_00116938");
extern "C" u32 func_00116990(u32, u32, u32) asm("func_00116990");

// 0x001169e8 func_001169e8
void func_001169e8(u32 a0, u32 a1) asm("_ZN2kn6Stitch16calc_move_targetEi");
void func_001169e8(u32 a0, u32 a1) {
    f32 f20;
    u32 v0;
    f32 f0;
    f32 f0_0;
    *(f32*)((a0 + 0x658)) = 1024.0f;
    switch (a1) {
    case 0:
        *(f32*)((a0 + 0x650)) = -135.0f;
        *(f32*)((a0 + 0x654)) = 110.0f;
        *(f32*)((a0 + 0x650)) = -260.0f;
        *(f32*)((a0 + 0x654)) = -180.0f;
        break;
    case 1:
        *(f32*)((a0 + 0x650)) = -260.0f;
        *(f32*)((a0 + 0x654)) = -180.0f;
        break;
    case 2:
        *(f32*)((a0 + 0x650)) = 260.0f;
        *(f32*)((a0 + 0x654)) = -180.0f;
        break;
    case 3:
        *(f32*)((a0 + 0x650)) = 260.0f;
        *(f32*)((a0 + 0x654)) = 180.0f;
        break;
    case 4:
        *(f32*)((a0 + 0x650)) = -260.0f;
        *(f32*)((a0 + 0x654)) = 180.0f;
        break;
    case 5:
        *(u32*)((a0 + 0x650)) = 0;
        *(u32*)((a0 + 0x654)) = 0;
        break;
    case 6:
        *(f32*)((a0 + 0x650)) = -230.0f;
        *(f32*)((a0 + 0x654)) = 90.0f;
        break;
    case 7:
        *(f32*)((a0 + 0x650)) = 138.0f;
        *(f32*)((a0 + 0x654)) = 106.0f;
        break;
    default:
        if ((func_0010f660() < 0.5f)) {
            if ((*(f32*)((a0 + 0x640)) < 0.0f)) {
                func_00116938(a0, a0 + 0x650, a0 + 0x654);
                return;
            } else {
                func_00116990(a0, a0 + 0x650, a0 + 0x654);
                return;
            }
        } else {
            f20 = (((func_0010f660() * 0.5f) + 0.5f) * 60.0f);
            v0 = func_0010f648(4);
            if ((v0 != 1)) {
                if (((s32)(v0) != 0)) {
                    if ((v0 != 2)) {
                        if ((v0 == 3)) {
                            if ((*(f32*)((a0 + 0x640)) < 0.0f)) {
                                func_00116938(a0, a0 + 0x650, a0 + 0x654);
                            } else {
                                func_00116990(a0, a0 + 0x650, a0 + 0x654);
                            }
                            *(f32*)((a0 + 0x654)) = (*(f32*)((a0 + 0x654)) - 640.0f);
                        }
                    } else {
                        if ((*(f32*)((a0 + 0x640)) < 0.0f)) {
                            func_00116938(a0, a0 + 0x650, a0 + 0x654);
                        } else {
                            func_00116990(a0, a0 + 0x650, a0 + 0x654);
                        }
                        *(f32*)((a0 + 0x654)) = (*(f32*)((a0 + 0x654)) + (640.0f - f20));
                    }
                } else {
                    if ((*(f32*)((a0 + 0x640)) < 0.0f)) {
                        func_00116990(a0, a0 + 0x650, a0 + 0x654);
                        f0 = (*(f32*)((a0 + 0x650)) - f20);
                    } else {
                        func_00116938(a0, a0 + 0x650, a0 + 0x654);
                        f0 = (*(f32*)((a0 + 0x650)) + f20);
                    }
                    *(f32*)((a0 + 0x650)) = f0;
                }
            } else {
                if ((*(f32*)((a0 + 0x640)) < 0.0f)) {
                    func_00116990(a0, a0 + 0x650, a0 + 0x654);
                    f0_0 = (*(f32*)((a0 + 0x650)) - 800.0f);
                } else {
                    func_00116938(a0, a0 + 0x650, a0 + 0x654);
                    f0_0 = (*(f32*)((a0 + 0x650)) + 800.0f);
                }
                *(f32*)((a0 + 0x650)) = f0_0;
            }
            return;
        }
        break;
    }
    return;
}
