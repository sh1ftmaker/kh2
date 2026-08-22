// coverage: addr=0x0015aaf8 symbol=_ZN2dk14BILLBOARD_BASE6updateEv size=120 class=float source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:95.71;e3:near:71.84;ghidra:near:28.51
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SLIST_ELEM_dk_Obj2D_2;
struct YS_BITFLAG_13_u_int;
struct dk_Obj2D;
struct dk_BILLBOARD_BASE;
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

struct dk_BILLBOARD_BASE {  // class dk::BILLBOARD_BASE size=0x24
    dk_Obj2D super_Obj2D;                              // +0x0
    void *m_message;                                   // +0x18
    f32 m_time;                                        // +0x1c
    s32 m_fontSize;                                    // +0x20
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

extern "C" u32 D_00349e14 asm("D_00349e14");
extern "C" u32 func_00197920(u32) asm("func_00197920");

// 0x0015aaf8 dk::BILLBOARD_BASE::update()
void lift_0015aaf8(u32 a0) asm("_ZN2dk14BILLBOARD_BASE6updateEv");
void lift_0015aaf8(u32 a0) {
    if (((s32)(func_00197920(a0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
    } else {
        if ((*(f32*)&(((dk_BILLBOARD_BASE*)a0)->m_time) <= 0.0f)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
        }
        *(f32*)&(((dk_BILLBOARD_BASE*)a0)->m_time) = (*(f32*)&(((dk_BILLBOARD_BASE*)a0)->m_time) - *(f32*)(&D_00349e14));
    }
    return;
}
