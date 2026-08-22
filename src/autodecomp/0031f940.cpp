// coverage: addr=0x0031f940 symbol=_ZN2YS12WINDOW_OBJ2D4drawEv size=40 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:98.0;m2c:near:98.0;e3:near:87.45;corpus:near:82.83
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SLIST_ELEM_dk_Obj2D_2;
struct YS_BITFLAG_13_u_int;
struct dk_Obj2D;
struct YS_WINDOW_OBJ2D;
union TASK_ARGS;
struct YS_LIST_ELEM_TASK_1;
struct TASK;
struct kingdom_CONTEXT;
struct TASK_THREAD;
struct Axa_CSJointT_Axa_FiberPS3;
struct CellFiberPpuContext;
struct Axa_FiberPS3;
struct Axa_CSJointT_Axa_ResourceEntry;
struct ALLOCATOR;
struct YS_LIST_TASK_0;
struct TASK_MANAGER;
struct YS_BITFLAG_1_u_int;
struct YS_MESSAGE_SIZE;
struct YS_MESSAGE_STYLE;
struct YS_MESSAGEDRAW;
struct YS_SLIST_ELEM_YS_WINDOW_1;
struct YS_WINDOW;

struct YS_SLIST_ELEM_dk_Obj2D_2 {  // class YS::SLIST_ELEM<dk::Obj2D, 2> size=0x8
    void *Next[2];                                     // +0x0
};

struct YS_BITFLAG_13_u_int {  // class YS::BITFLAG<13, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct dk_Obj2D {  // class dk::Obj2D size=0x18
    void *_vptr_;                                      // +0x0
    YS_SLIST_ELEM_dk_Obj2D_2 SList;                    // +0x4
    YS_BITFLAG_13_u_int m_flag;                        // +0xc
    s32 m_group;                                       // +0x10
    TASK *m_task;                                      // +0x14
};

struct YS_WINDOW_OBJ2D {  // class YS::WINDOW_OBJ2D size=0x1c
    dk_Obj2D super_Obj2D;                              // +0x0
    YS_WINDOW *Window;                                 // +0x18
};

union TASK_ARGS {  // union TASK::ARGS size=0x4
    s32 i;
    s8 b;
    f32 f;
    void *p;
};

struct YS_LIST_ELEM_TASK_1 {  // class YS::LIST_ELEM<TASK, 1> size=0x8
    void *Next[1];                                     // +0x0
    void *Prev[1];                                     // +0x4
};

struct TASK {  // class TASK size=0x54
    void *EntryFunc;                                   // +0x0
    void *m_nThreadID;                                 // +0x4
    s32 m_nThreadSemaID;                               // +0x8
    s32 m_nSuspend;                                    // +0xc
    TASK_ARGS Args[8];                                 // +0x10
    TASK_MANAGER *Manager;                             // +0x30
    s32 Id;                                            // +0x34
    s32 Priority;                                      // +0x38
    void *Finalizer;                                   // +0x3c
    TASK_THREAD *Thread;                               // +0x40
    YS_LIST_ELEM_TASK_1 List;                          // +0x44
    TASK *Prev;                                        // +0x4c
    TASK *Next;                                        // +0x50
};

struct kingdom_CONTEXT {  // class kingdom::CONTEXT size=0x10
    Axa_FiberPS3 *fiberHandle;                         // +0x0
    u32 dummy[3];                                      // +0x4
};

struct TASK_THREAD {  // structure TASK::THREAD size=0x20
    kingdom_CONTEXT Context;                           // +0x0
    s8 IsInit;                                         // +0x10
    u8 _pad0[3];
    s32 Wait;                                          // +0x14
    f32 GameWait;                                      // +0x18
    u32 StackSize;                                     // +0x1c
};

struct Axa_CSJointT_Axa_FiberPS3 {  // class Axa::CSJointT<Axa::FiberPS3> size=0x8
    void *_vptr_;                                      // +0x0
    Axa_CSJointT_Axa_ResourceEntry *m_pNext;           // +0x4
};

struct CellFiberPpuContext {  // structure CellFiberPpuContext size=0x280
    u8 skip[640];                                      // +0x0
};

struct Axa_FiberPS3 {  // class Axa::FiberPS3 size=0x122c0
    Axa_CSJointT_Axa_FiberPS3 super_FiberPS3;          // +0x0
    u8 _pad0[8];
    CellFiberPpuContext context;                       // +0x10
    void *func;                                        // +0x290
    void *arg;                                         // +0x294
    u32 stackSize;                                     // +0x298
    s32 disposeFlg;                                    // +0x29c
    s32 dum[3];                                        // +0x2a0
    u32 _pad;                                          // +0x2ac
    u8 stack[73728];                                   // +0x2b0
    u32 _check[4];                                     // +0x122b0
};

struct Axa_CSJointT_Axa_ResourceEntry {  // class Axa::CSJointT<Axa::ResourceEntry> size=0x8
    void *_vptr_;                                      // +0x0
    Axa_CSJointT_Axa_ResourceEntry *m_pNext;           // +0x4
};

struct ALLOCATOR {  // class ALLOCATOR size=0x4
    void *_vptr_;                                      // +0x0
};

struct YS_LIST_TASK_0 {  // class YS::LIST<TASK, 0> size=0x8
    void *Head;                                        // +0x0
    void *Tail;                                        // +0x4
};

struct TASK_MANAGER {  // class TASK_MANAGER size=0x28
    ALLOCATOR super_ALLOCATOR;                         // +0x0
    ALLOCATOR *Allocator;                              // +0x4
    YS_LIST_TASK_0 TaskList;                           // +0x8
    u8 _pad0[224];
    TASK *Current;                                     // +0xf0
    kingdom_CONTEXT Context;                           // +0xf4
    u8 _pad1[12];
    TASK *Next;                                        // +0x110
};

struct YS_BITFLAG_1_u_int {  // class YS::BITFLAG<1, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct YS_MESSAGE_SIZE {  // class YS::MESSAGE::SIZE size=0x8
    u32 Width;                                         // +0x0
    u32 Height;                                        // +0x4
};

struct YS_MESSAGE_STYLE {  // class YS::MESSAGE::STYLE size=0x18
    u32 Color;                                         // +0x0
    f32 Scale;                                         // +0x4
    f32 HScale;                                        // +0x8
    s32 LineSpace;                                     // +0xc
    u32 OrigColor;                                     // +0x10
    f32 OrigScale;                                     // +0x14
};

struct YS_MESSAGEDRAW {  // class YS::MESSAGEDRAW size=0x60
    YS_BITFLAG_1_u_int Flag;                           // +0x0
    void *Font;                                        // +0x4
    void *Message;                                     // +0x8
    void *Current;                                     // +0xc
    YS_MESSAGE_SIZE Size;                              // +0x10
    YS_WINDOW *Window;                                 // +0x18
    f32 Time;                                          // +0x1c
    s32 SelectNum;                                     // +0x20
    YS_MESSAGE_STYLE Style;                            // +0x24
    u32 Color;                                         // +0x3c
    u32 ShadowColor;                                   // +0x40
    s32 XPos;                                          // +0x44
    s32 YPos;                                          // +0x48
    f32 FadeTime;                                      // +0x4c
    YS_MESSAGE_SIZE MaxSize;                           // +0x50
    s32 Align;                                         // +0x58
    f32 FontTime;                                      // +0x5c
};

struct YS_SLIST_ELEM_YS_WINDOW_1 {  // class YS::SLIST_ELEM<YS::WINDOW, 1> size=0x4
    void *Next[1];                                     // +0x0
};

struct YS_WINDOW {  // class YS::WINDOW size=0x84
    void *_vptr_;                                      // +0x0
    s32 XPos;                                          // +0x4
    s32 YPos;                                          // +0x8
    YS_MESSAGEDRAW MessageDraw;                        // +0xc
    void *FontStyle;                                   // +0x6c
    s32 Phase;                                         // +0x70
    f32 Time;                                          // +0x74
    s32 Priority;                                      // +0x78
    YS_SLIST_ELEM_YS_WINDOW_1 SList;                   // +0x7c
    s32 MessageId;                                     // +0x80
};


// 0x0031f940 YS::WINDOW_OBJ2D::draw()
void lift_0031f940(u32 a0) asm("_ZN2YS12WINDOW_OBJ2D4drawEv");
void lift_0031f940(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)&(((YS_WINDOW_OBJ2D*)a0)->Window)) + 0x10))))(*(u32*)&(((YS_WINDOW_OBJ2D*)a0)->Window));
}
