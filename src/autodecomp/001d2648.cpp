// coverage: addr=0x001d2648 symbol=func_001d2648 size=32 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:99.62;m2c:near:99.62;corpus:near:75.0
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_QUEUE_YS_INTERVAL_INFO_MESSAGE_QUEUE_3;
struct YS_INTERVAL_INFO;

struct YS_QUEUE_YS_INTERVAL_INFO_MESSAGE_QUEUE_3 {  // class YS::QUEUE<YS::INTERVAL_INFO::MESSAGE_QUEUE, 3> size=0x20
    s32 WritePt;                                       // +0x0
    s32 ReadPt;                                        // +0x4
    u8 Elem[24];   // raw: klass[3] (size mismatch)    // +0x8
};

struct YS_INTERVAL_INFO {  // class YS::INTERVAL_INFO size=0x2c
    YS_QUEUE_YS_INTERVAL_INFO_MESSAGE_QUEUE_3 Queue;   // +0x0
    void *Message;                                     // +0x20
    f32 Interval;                                      // +0x24
    f32 Time;                                          // +0x28
};

extern "C" u32 func_001d2690(u32) asm("func_001d2690");

// 0x001d2648 func_001d2648
u32 func_001d2648(u32 a0) asm("func_001d2648");
u32 func_001d2648(u32 a0) {
    *(u32*)&(((YS_INTERVAL_INFO*)a0)->Queue.WritePt) = 0;
    *(u32*)&(((YS_INTERVAL_INFO*)a0)->Queue.ReadPt) = 0;
    *(u32*)&(((YS_INTERVAL_INFO*)a0)->Message) = 0;
    return func_001d2690(a0);
}
