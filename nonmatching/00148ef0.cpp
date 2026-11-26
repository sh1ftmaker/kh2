// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00457478 asm("D_00457478");
extern "C" u32 D_00457480 asm("D_00457480");
extern "C" u32 func_00146088(u32, u32) asm("func_00146088");
extern "C" u32 func_00146730(u32, u32, u32) asm("func_00146730");
extern "C" void func_00108698(u32, u32, u32) asm("func_00108698");
extern "C" void func_0011de88(u32, u32, u32, u32, u32) asm("func_0011de88");
extern "C" void func_00144860(u32, u32, u32) asm("func_00144860");
extern "C" void func_00146080(u32, u32) asm("func_00146080");
extern "C" void func_00148c50(u32, u32, u32, u32, u32, u32) asm("func_00148c50");

// 0x00148ef0 func_00148ef0
// minilink-rodata 0x0036afb4   (float literals live here in the original)
void func_00148ef0(u32 a0, u32 a1, u32 a2) asm("func_00148ef0");
void func_00148ef0(u32 a0, u32 a1, u32 a2) {
    u8 frame[2160];
    u32 a2_0;
    u32 s1;
    u32 s2;
    u32 s4;
    u32 s5;
    u32 s2_1;
    u32 s5_2;
    u32 sp;
    u32 s3;
    u32 s2_3;
    u32 sp_4;
    func_00108698((u32)frame, a1, a2);
    *(u8*)(((u32)frame + 7)) = *(u8*)((*(u32*)(a1) + 0x10c));
    if (((s32)(*(u8*)((*(u32*)(a1) + 0x10c))) != 0)) {
        *(u32*)(((u32)frame + 0x40)) = *(u32*)((*(u32*)(a1) + 0xd0));
        *(u32*)(((u32)frame + 0x44)) = *(u32*)(((*(u32*)(a1) + 0xd0) + 4));
        *(u32*)(((u32)frame + 0x48)) = *(u32*)(((*(u32*)(a1) + 0xd0) + 8));
        *(u32*)(((u32)frame + 0x4c)) = *(u32*)(((*(u32*)(a1) + 0xd0) + 0xc));
        *(u32*)(((u32)frame + 0x50)) = *(u32*)(((*(u32*)(a1) + 0xd0) + 0x10));
        *(u32*)(((u32)frame + 0x54)) = *(u32*)(((*(u32*)(a1) + 0xd0) + 0x14));
        if (((s32)(a2) > 0)) {
            a2_0 = *(u32*)(a1);
            s1 = 0;
            s2 = *(u32*)(a1);
            s4 = a1;
            s5 = ((u32)frame + 0x40);
            do {
                func_00144860(s5, s5, *(u32*)((a1 + (s1 * 4))) + 0xd0);
                s1 = (s1 + 1);
            } while (((s32)(s1) < (s32)(a2)));
            s2_1 = s2;
            a1 = s4;
            s5_2 = s5;
        } else {
            s2_1 = *(u32*)(a1);
            s5_2 = ((u32)frame + 0x40);
            sp = (u32)frame;
        }
        *(f32*)((sp + 0x50)) = (*(f32*)((sp + 0x50)) + (((*(f32*)((sp + 0x50)) - *(f32*)((sp + 0x44))) * 0.5f) + ((*(f32*)((sp + 0x50)) - *(f32*)((sp + 0x44))) * 0.5f)));
        *(f32*)((sp + 0x50)) = ((*(f32*)((sp + 0x50)) + (((*(f32*)((sp + 0x50)) - *(f32*)((sp + 0x44))) * 0.5f) + ((*(f32*)((sp + 0x50)) - *(f32*)((sp + 0x44))) * 0.5f))) + *(f32*)((s2_1 + 0x104)));
        if ((func_00146730(a0 + 0x1f0, s5_2, a2_0) != 0)) {
            if ((func_00146088(a0, s5_2) != 1)) {
                if (((s32)((*(u32*)((s2_1 + 0xf8)) & 0x40)) != 0)) {
                    *(u32*)(sp) = (*(u32*)(sp) | 1);
                    *(u8*)((sp + 4)) = *(u8*)((s2_1 + 0xe8));
                    *(u8*)((sp + 5)) = *(u8*)((s2_1 + 0xe9));
                    *(u8*)((sp + 6)) = *(u8*)((s2_1 + 0xea));
                    *(u8*)((sp + 7)) = *(u8*)((s2_1 + 0xeb));
                }
                s3 = ((s32)((*(u32*)((s2_1 + 0xf8)) & 0x200)) == 0) ? ((*(u32*)((s2_1 + 0xf8)) & 0x400) ? 2 : 0) : 1;
                *(u64*)(&D_00457480) = *(u64*)(sp);
                *(u64*)(((u32)&D_00457480 + 0x30)) = *(u64*)((sp + 0x30));
                *(u64*)(((u32)&D_00457480 + 8)) = *(u64*)((sp + 8));
                *(u64*)(((u32)&D_00457480 + 0x10)) = *(u64*)((sp + 0x10));
                *(u64*)(((u32)&D_00457480 + 0x18)) = *(u64*)((sp + 0x18));
                *(u64*)(((u32)&D_00457480 + 0x20)) = *(u64*)((sp + 0x20));
                *(u32*)(&D_00457478) = a1;
                *(u64*)(((u32)&D_00457480 + 0x28)) = *(u64*)((sp + 0x28));
                *(u32*)((sp + 0x860)) = 0;
                s2_3 = *(u8*)((s2_1 + 0x11e));
                func_00146080(a0, sp + 0x60);
                *(u16*)((sp + 0x60)) = 0xffffffff;
                func_00148c50(a0, 0, s5_2, sp + 0x860, s2_3, a1);
                *(u16*)((((*(u32*)((sp + 0x860)) << 1) + sp) + 0x60)) = 0xffffffff;
                *(u32*)(sp) = (*(u32*)(sp) | 2);
                *(u8*)((sp + 8)) = 0xffffff80;
                *(u8*)((sp + 9)) = 0xffffff80;
                *(u8*)((sp + 0xa)) = 0xffffff80;
                *(u8*)((sp + 0xb)) = 0xffffffff;
                func_0011de88(*(u32*)((a0 + 0x5368)), sp, sp + 0x60, a1, s3);
            }
        }
        sp_4 = sp;
    } else {
        sp_4 = (u32)frame;
    }
    return;
}
