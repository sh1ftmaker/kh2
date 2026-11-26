// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 func_0016c028(u32, u32, u32) asm("func_0016c028");
extern "C" u32 func_001cc3b8(u32, u32) asm("func_001cc3b8");

// 0x0016bf38 func_0016bf38
void func_0016bf38(u32 a0, u32 a1, u32 a2) asm("_ZN2YS3OBJ18_OVR_set_unit_dataEPNS_10UNIT_GROUPEPKNS_13UNIT_DATA_OBJE");
void func_0016bf38(u32 a0, u32 a1, u32 a2) {
    u32 t4;
    *(u32*)((a0 + 0x818)) = a1;
    *(u32*)((a0 + 0x81c)) = a2;
    if (((s32)(*(u16*)((a2 + 0x28))) != 0)) {
        *(u32*)((a0 + 0x500)) = *(u16*)((a2 + 0x28));
    }
    t4 = 0;
    do {
        *(u32*)((((t4 << 2) + a0) + 0x820)) = *(u32*)((((t4 << 2) + a2) + 0x20));
        t4 = (t4 + 1);
    } while (((s32)(((s32)(t4) < (s32)(2))) != 0));
    if (((s32)(*(u8*)((a2 + 0x31))) != 0)) {
        if ((*(u8*)(&D_0032bae0) != 0xe)) {
            if ((*(u8*)(&D_0032bae0) == 0x10)) {
                if (((s32)((*(u32*)((a0 + 0x588)) & 2)) != 0)) {
                    *(u32*)((a0 + 0xac8)) = *(u8*)((a2 + 0x31));
                    return;
                } else {
                    func_001cc3b8(func_0016c028(a0, a1, a2), *(u8*)((a2 + 0x31)));
                    return;
                }
            } else {
                return;
            }
        } else {
            *(u32*)((a0 + 0xacc)) = *(u8*)((a2 + 0x31));
            return;
        }
    } else {
        return;
    }
}
