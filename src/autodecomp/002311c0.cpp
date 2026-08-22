// coverage: addr=0x002311c0 symbol=func_002311c0 size=460 class=float source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:75.88;ghidra:near:37.92
#include "common/types.h"
typedef float f32; typedef double f64;
struct sa_BIN_CAMERA_DATA_WK;
struct sa_BIN_CAMERA_DATA_ENC_WK;
struct sa_BIN_CAMERA_DATA_ENC;

struct sa_BIN_CAMERA_DATA_WK {  // structure sa::BIN_CAMERA_DATA_WK size=0x20
    f32 eyex;                                          // +0x0
    f32 eyey;                                          // +0x4
    f32 eyez;                                          // +0x8
    f32 centerx;                                       // +0xc
    f32 centery;                                       // +0x10
    f32 centerz;                                       // +0x14
    f32 camroll;                                       // +0x18
    f32 camfov;                                        // +0x1c
};

struct sa_BIN_CAMERA_DATA_ENC_WK {  // structure sa::BIN_CAMERA_DATA_ENC_WK size=0x10
    u32 type : 3;                                      // +0x0
    s32 time : 29;                                     // +0x4
    f32 value;                                         // +0x8
    f32 left;                                          // +0xc
    f32 right;                                         // +0x10
};

struct sa_BIN_CAMERA_DATA_ENC {  // structure sa::BIN_CAMERA_DATA_ENC size=0x28
    u16 my_size;                                       // +0x0
    s16 id;                                            // +0x2
    s16 put_id;                                        // +0x4
    u16 cmetx_ofs;                                     // +0x6
    u16 cmetx_cnt;                                     // +0x8
    u16 cmety_ofs;                                     // +0xa
    u16 cmety_cnt;                                     // +0xc
    u16 cmetz_ofs;                                     // +0xe
    u16 cmetz_cnt;                                     // +0x10
    u16 cmietx_ofs;                                    // +0x12
    u16 cmietx_cnt;                                    // +0x14
    u16 cmiety_ofs;                                    // +0x16
    u16 cmiety_cnt;                                    // +0x18
    u16 cmietz_ofs;                                    // +0x1a
    u16 cmietz_cnt;                                    // +0x1c
    u16 cmroll_ofs;                                    // +0x1e
    u16 cmroll_cnt;                                    // +0x20
    u16 cmfov_ofs;                                     // +0x22
    u16 cmfov_cnt;                                     // +0x24
    u16 dummy;                                         // +0x26
    sa_BIN_CAMERA_DATA_ENC_WK tmp[0];                  // +0x28
};

extern "C" u32 D_0035de90 asm("D_0035de90");
extern "C" u32 D_0035deb0 asm("D_0035deb0");
extern "C" u32 D_0035ded0 asm("D_0035ded0");
extern "C" u32 D_0035def0 asm("D_0035def0");
extern "C" u32 D_0035df10 asm("D_0035df10");
extern "C" u32 D_0035df30 asm("D_0035df30");
extern "C" u32 D_0035df50 asm("D_0035df50");
extern "C" u32 D_0035df70 asm("D_0035df70");
extern "C" f32 func_00230f10(u32, u32, u32, f32) asm("func_00230f10");

// 0x002311c0 func_002311c0
// minilink-rodata 0x0037129c   (float literals live here in the original)
void func_002311c0(u32 a0, u32 a1, f32 fa0) asm("func_002311c0");
void func_002311c0(u32 a0, u32 a1, f32 fa0) {
    if (((s32)(*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmetx_cnt)) != 0)) {
        *(f32*)&(((sa_BIN_CAMERA_DATA_WK*)a0)->eyex) = func_00230f10((a1 + (*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmetx_ofs) << 4)) + 0x28, *(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmetx_cnt), (u32)&D_0035de90, fa0);
    }
    if (((s32)(*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmety_cnt)) != 0)) {
        *(f32*)&(((sa_BIN_CAMERA_DATA_WK*)a0)->eyey) = -(func_00230f10((a1 + (*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmety_ofs) << 4)) + 0x28, *(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmety_cnt), (u32)&D_0035deb0, fa0));
    }
    if (((s32)(*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmetz_cnt)) != 0)) {
        *(f32*)&(((sa_BIN_CAMERA_DATA_WK*)a0)->eyez) = -(func_00230f10((a1 + (*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmetz_ofs) << 4)) + 0x28, *(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmetz_cnt), (u32)&D_0035ded0, fa0));
    }
    if (((s32)(*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmietx_cnt)) != 0)) {
        *(f32*)&(((sa_BIN_CAMERA_DATA_WK*)a0)->centerx) = func_00230f10((a1 + (*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmietx_ofs) << 4)) + 0x28, *(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmietx_cnt), (u32)&D_0035def0, fa0);
    }
    if (((s32)(*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmiety_cnt)) != 0)) {
        *(f32*)&(((sa_BIN_CAMERA_DATA_WK*)a0)->centery) = -(func_00230f10((a1 + (*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmiety_ofs) << 4)) + 0x28, *(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmiety_cnt), (u32)&D_0035df10, fa0));
    }
    if (((s32)(*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmietz_cnt)) != 0)) {
        *(f32*)&(((sa_BIN_CAMERA_DATA_WK*)a0)->centerz) = -(func_00230f10((a1 + (*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmietz_ofs) << 4)) + 0x28, *(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmietz_cnt), (u32)&D_0035df30, fa0));
    }
    if (((s32)(*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmroll_cnt)) != 0)) {
        *(f32*)&(((sa_BIN_CAMERA_DATA_WK*)a0)->camroll) = ((func_00230f10((a1 + (*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmroll_ofs) << 4)) + 0x28, *(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmroll_cnt), (u32)&D_0035df50, fa0) * 3.1415927410125732f) / 180.0f);
    }
    if (((s32)(*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmfov_cnt)) != 0)) {
        *(f32*)&(((sa_BIN_CAMERA_DATA_WK*)a0)->camfov) = func_00230f10((a1 + (*(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmfov_ofs) << 4)) + 0x28, *(u16*)&(((sa_BIN_CAMERA_DATA_ENC*)a1)->cmfov_cnt), (u32)&D_0035df70, fa0);
    }
    return;
}
