// coverage: addr=0x00243020 symbol=func_00243020 size=140 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.54;ghidra:near:46.45
#include "common/types.h"

extern "C" u32 D_0032bad8 asm("D_0032bad8");
extern "C" u32 func_00103428(u32) asm("func_00103428");
extern "C" u32 func_00103500(u32) asm("func_00103500");
extern "C" u32 func_00103550(u32) asm("func_00103550");
extern "C" u32 func_00103b38(u32) asm("func_00103b38");
extern "C" u32 func_00243150(u32) asm("func_00243150");
extern "C" u32 func_00253538(u32) asm("func_00253538");

// 0x00243020 func_00243020
void func_00243020(u32 a0) asm("func_00243020");
void func_00243020(u32 a0) {
    if (((s32)(*(u8*)(&D_0032bad8)) != 0)) {
        if (((s32)(func_00103b38(a0)) != 0)) {
            if (((s32)(func_00103428(func_00103550(a0))) != 0)) {
                func_00103500(*(s16*)((func_00243150(a0) + 2)));
                return;
            } else {
                return;
            }
        } else {
            func_00253538(*(s16*)((func_00243150(a0) + 2)));
            return;
        }
    } else {
        return;
    }
}
