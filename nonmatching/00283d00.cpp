// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2b4 asm("D_0035f2b4");
extern "C" u32 D_003742c8 asm("D_003742c8");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_00258048(u32) asm("func_00258048");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00283d00 func_00283d00
void func_00283d00(u32 a0) asm("func_00283d00");
void func_00283d00(u32 a0) {
    u32 s2;
    u32 t5;
    u32 t4;
    u32 s3;
    u32 s1;
    u32 s3_0;
    s2 = func_00258048(a0);
    func_002fde18(*(u32*)(&D_0035f2b4) + 4, 0, 9);
    if (((s32)(*(u16*)(((u32)&D_003742c8 + 4))) != 0)) {
        t5 = 0;
        t4 = (u32)&D_003742c8;
        s3 = 0;
        s1 = 0;
        do {
            if ((a0 == 0xffffffff) || (*(u8*)(((t5 + t4) + 6)) == a0)) {
                if ((func_00181500(*(u16*)(((t5 + (u32)&D_003742c8) + 4))) != 0)) {
                    if ((a0 == 0xffffffff)) {
                        t5 = (s1 & 0x1f);
                        t5 = (1 << t5);
                        if (((*(u32*)((((s1 >> 5) << 2) + (s2 + 0xc8))) & t5) == 0)) {
                            *(u8*)(((*(u32*)(&D_0035f2b4) + s3) + 4)) = s1;
                            s3 = (s3 + 1);
                        }
                    } else {
                        *(u8*)(((*(u32*)(&D_0035f2b4) + s3) + 4)) = s1;
                        s3 = (s3 + 1);
                    }
                }
            }
            s1 = (s1 + 1);
            t4 = (u32)&D_003742c8;
            t5 = (s1 << 3);
        } while (((s32)(*(u16*)((((s1 << 3) + t4) + 4))) != 0));
        s3_0 = s3;
    } else {
        s3_0 = 0;
    }
    *(u8*)((*(u32*)(&D_0035f2b4) + 0xd)) = s3_0;
    *(u8*)((*(u32*)(&D_0035f2b4) + 0xe)) = 0;
    return;
}
