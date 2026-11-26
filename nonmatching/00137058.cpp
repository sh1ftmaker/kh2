// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d30 asm("D_00347d30");
extern "C" u32 D_00347d44 asm("D_00347d44");
extern "C" u32 D_00347d54 asm("D_00347d54");
extern "C" u32 func_002b7148(u32) asm("func_002b7148");
extern "C" u32 func_002bd250() asm("func_002bd250");
extern "C" void func_00136b78(u32, u32) asm("func_00136b78");
extern "C" void func_002ba2b0(u32, u32) asm("func_002ba2b0");

// 0x00137058 func_00137058
void func_00137058(u32 a0) asm("func_00137058");
void func_00137058(u32 a0) {
    u32 s2;
    u32 s1;
    if (((s32)(func_002b7148(1)) != 0)) {
        func_002ba2b0(0xf0, 1);
    }
    *(u8*)(&D_00347d54) = 0;
    s2 = 0;
    s1 = (u32)&D_00347d30;
    do {
        if ((*(u32*)((s1 + (s2 * 0x10))) != *(u32*)((a0 + (s2 * 4)))) || (*(u32*)(((s1 + (s2 * 0x10)) + 4)) != *(u32*)((a0 + (s2 * 4))))) {
            *(u32*)((s1 + (s2 * 0x10))) = *(u32*)((a0 + (s2 * 4)));
            func_002ba2b0(0xf0, s2);
            if ((s2 == 0)) {
                if ((*(u32*)(a0) != 0)) {
                    *(u32*)(((u32)&D_00347d30 + 0xc)) = (*(u32*)(((u32)&D_00347d30 + 0xc)) | 2);
                    if ((*(u32*)(((u32)&D_00347d30 + 4)) != *(u32*)(a0)) || (*(u32*)(((u32)&D_00347d30 + 4)) != func_002bd250())) {
                        *(u32*)(((u32)&D_00347d30 + 4)) = *(u32*)(a0);
                        *(u32*)(((u32)&D_00347d30 + 0xc)) = (*(u32*)(((u32)&D_00347d30 + 0xc)) | 1);
                    }
                } else {
                    func_00136b78(0, 0);
                }
            }
        }
        s2 = (s2 + 1);
    } while (((s32)(((s32)(s2) < (s32)(2))) != 0));
    *(u32*)(&D_00347d44) = 0;
    return;
}
