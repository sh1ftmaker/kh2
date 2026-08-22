// coverage: addr=0x00232070 symbol=_ZN2sa5EVENT21set_bin_seq_objcameraERNS_17BIN_SEQ_OBJCAMERAEP4TASK size=144 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:72.97;e3:near:12.27;ghidra:near:12.17
#include "common/types.h"
typedef float f32; typedef double f64;
struct sa_BIN_SEQ_OBJCAMERA;

struct sa_BIN_SEQ_OBJCAMERA {  // structure sa::BIN_SEQ_OBJCAMERA size=0x8
    u16 my_size;                                       // +0x0
    s16 id;                                            // +0x2
    s16 start_frame;                                   // +0x4
    s16 type;                                          // +0x6
};

extern "C" u32 D_0035de0a asm("D_0035de0a");
extern "C" u32 D_0035de0c asm("D_0035de0c");
extern "C" u32 D_0035de10 asm("D_0035de10");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_002319c0(u32) asm("func_002319c0");
extern "C" u32 func_002ba620() asm("func_002ba620");

// 0x00232070 sa::EVENT::set_bin_seq_objcamera(sa::BIN_SEQ_OBJCAMERA&, TASK*)
void lift_00232070(u32 a0) asm("_ZN2sa5EVENT21set_bin_seq_objcameraERNS_17BIN_SEQ_OBJCAMERAEP4TASK");
void lift_00232070(u32 a0) {
    if ((func_002282f0(*(s16*)&(((sa_BIN_SEQ_OBJCAMERA*)a0)->start_frame)) == 0)) {
        *(u8*)(&D_0035de0a) = 1;
        *(u32*)(&D_0035de10) = *(s16*)&(((sa_BIN_SEQ_OBJCAMERA*)a0)->type);
        if (((s32)(*(s16*)&(((sa_BIN_SEQ_OBJCAMERA*)a0)->type)) != 0)) {
            if ((*(s16*)&(((sa_BIN_SEQ_OBJCAMERA*)a0)->type) == 1)) {
                func_002319c0(*(s16*)&(((sa_BIN_SEQ_OBJCAMERA*)a0)->start_frame));
                return;
            } else {
                return;
            }
        } else {
            if (((s32)(func_002ba620()) == 0)) {
                *(u8*)(&D_0035de0c) = 1;
            }
            return;
        }
    } else {
        return;
    }
}
