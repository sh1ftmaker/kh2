// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f270 asm("D_0035f270");
extern "C" u32 D_0035f274 asm("D_0035f274");
extern "C" u32 D_0035f278 asm("D_0035f278");
extern "C" u32 D_0035f27c asm("D_0035f27c");
extern "C" u32 D_0035f284 asm("D_0035f284");
extern "C" u32 D_0035f28c asm("D_0035f28c");
extern "C" u32 D_0035f290 asm("D_0035f290");
extern "C" u32 D_0035f29c asm("D_0035f29c");
extern "C" u32 D_0035f2a0 asm("D_0035f2a0");
extern "C" u32 D_0035f2a8 asm("D_0035f2a8");
extern "C" f32 func_003144b0(u32) asm("func_003144b0");
extern "C" u32 func_001396b0(u32) asm("func_001396b0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_001b1e70() asm("func_001b1e70");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_0023c3e0(u32, u32, u32) asm("func_0023c3e0");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00281be0(u32) asm("func_00281be0");
extern "C" u32 func_00293148(u32) asm("func_00293148");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_00314190(u32, u32) asm("func_00314190");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");
extern "C" void func_0031ac78(u32, u32) asm("func_0031ac78");

// 0x002818b8 Tz::ItemPicDraw::Create(int)
void lift_002818b8(u32 a0) asm("_ZN2Tz11ItemPicDraw6CreateEi");
void lift_002818b8(u32 a0) {
    u32 s1;
    u32 s1_0;
    u32 s3;
    u32 s2;
    u32 s3_1;
    u32 s3_2;
    u32 t6;
    u32 s1_3;
    if (((s32)(func_00281be0(a0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f290)) + 0x14))))(*(u32*)(&D_0035f290));
        return;
    } else {
        if (((s32)(*(u32*)(&D_0035f274)) == 0)) {
            if (((s32)(func_00139d78(*(u32*)(&D_0035f28c))) == 0)) {
                func_0028d8c0(*(u32*)(&D_0035f28c), *(u32*)(&D_0035f270), *(u32*)(&D_0035f278), *(u32*)(&D_0035f27c), *(u32*)(&D_0035f284), *(s16*)(&D_0035f2a0), *(s16*)(((u32)&D_0035f2a0 + 4)), 0);
            }
        }
        s1 = func_001b1e70();
        func_002362b0(*(u32*)(&D_0035f29c), func_00293148(a0));
        *(u8*)((*(u32*)(&D_0035f29c) + 0x190)) = 1;
        func_001386e0(*(u32*)(&D_0035f290), *(u32*)(&D_0035f270), s1, *(u32*)(&D_0035f29c), *(s16*)(&D_0035f2a8), 0);
        if (((s32)(*(u32*)(&D_0035f274)) == 0)) {
            *(u32*)((*(u32*)(&D_0035f290) + 0x18c)) = *(u32*)(&D_0035f28c);
            s1_0 = *(u32*)(&D_0035f290);
            s3 = func_0023aa98(*(u32*)(&D_0035f28c) + 0x18);
            func_001396b0(*(u32*)(&D_0035f290));
            if ((*(u32*)((s1_0 + 0x18c)) != 0)) {
                *(u32*)((s1_0 + 0x190)) = 0;
                func_001396b0(s1_0);
                if ((*(u32*)((s1_0 + 0x190)) != 0)) {
                    func_0031a260(s1_0, 0);
                }
            }
            s3_2 = s3;
        } else {
            s2 = *(u32*)(&D_0035f290);
            s3_1 = func_0023aa98(func_0023c3e0(func_0023f1b0(*(u32*)(&D_0035f284)), *(s16*)(((u32)&D_0035f2a0 + 4)), 0));
            *(u32*)((s2 + 0x190)) = func_0023c3e0(func_0023f1b0(*(u32*)(&D_0035f284)), *(s16*)(((u32)&D_0035f2a0 + 4)), 0);
            func_001396b0(s2);
            if ((*(u32*)((s2 + 0x190)) != 0)) {
                *(u32*)((s2 + 0x18c)) = 0;
                func_001396b0(s2);
                if ((*(u32*)((s2 + 0x18c)) != 0)) {
                    func_0031ac78(s2, 0);
                }
            }
            s3_2 = s3_1;
        }
        t6 = (*(u32*)(&D_0035f290) + 0x18);
        *(u32*)((t6 + 0xb8)) = (*(u32*)((t6 + 0xb8)) | 8);
        s1_3 = *(u32*)(&D_0035f290);
        *(f32*)((s1_3 + 0x180)) = func_003144b0(func_00314190(func_00313b80((f32)((((s32)(0) < (s32)(s3_2)) ? s3_2 : 0x64))), (u64)(0x4059) << 0x30));
        *(u8*)((*(u32*)(&D_0035f290) + 0x195)) = 1;
        func_001396b0(*(u32*)(&D_0035f290));
        return;
    }
}
