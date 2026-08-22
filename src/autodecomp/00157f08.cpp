// coverage: addr=0x00157f08 symbol=func_00157f08 size=248 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:exact:100.0;ghidra:near:79.54
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SLIST_ELEM_dk_Obj2D_2;
struct YS_BITFLAG_13_u_int;
struct dk_Obj2D;
struct sa_MUSICAL_SCORE_BASE;
struct sa_MUSICAL_GAUGE4;
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

struct sa_MUSICAL_SCORE_BASE {  // class sa::MUSICAL_SCORE_BASE size=0x18
    dk_Obj2D super_Obj2D;                              // +0x0
};

struct sa_MUSICAL_GAUGE4 {  // class sa::MUSICAL_GAUGE4 size=0x4ec
    sa_MUSICAL_SCORE_BASE super_MUSICAL_SCORE_BASE;    // +0x0
    u8 m_sp[1236];   // raw: dk::Sprite[3] (size mismatch) // +0x18
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

extern "C" u32 func_00156d20(u32) asm("func_00156d20");
extern "C" u32 func_00157068(u32) asm("func_00157068");
extern "C" u32 func_001570a0(u32) asm("func_001570a0");
extern "C" u32 func_001570d0(u32) asm("func_001570d0");
extern "C" u32 func_00157100(u32) asm("func_00157100");
extern "C" u32 func_00157130(u32) asm("func_00157130");
extern "C" u32 func_001571c0(u32) asm("func_001571c0");
extern "C" u32 func_001577c8(u32) asm("func_001577c8");
extern "C" u32 func_00157c88(u32) asm("func_00157c88");
extern "C" void func_001574d8(u32) asm("func_001574d8");
extern "C" void func_00157758(u32) asm("func_00157758");
extern "C" void func_001578d8(u32) asm("func_001578d8");
extern "C" void func_00157a00(u32) asm("func_00157a00");
extern "C" void func_00157ae0(u32) asm("func_00157ae0");
extern "C" void func_00158300(u32) asm("func_00158300");

// 0x00157f08 func_00157f08
u32 func_00157f08(u32 a0) asm("func_00157f08");
u32 func_00157f08(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    func_00158300(a0);
    func_00157758(a0);
    v0 = func_001577c8(a0);
    if ((*(u32*)&(((sa_MUSICAL_GAUGE4*)a0)->m_sp[28]) != 0)) {
        if (((*(u32*)&(((sa_MUSICAL_GAUGE4*)a0)->super_MUSICAL_SCORE_BASE.super_Obj2D.m_flag) & 0x100) == 0)) {
            func_001578d8(a0);
            func_00157a00(a0);
            func_00157ae0(a0);
            if (((s32)(func_00157100(a0)) != 0)) {
                v0_0 = func_001571c0(a0);
                v0_8 = v0_0;
            } else {
                if (((s32)(func_00157130(a0)) != 0)) {
                    func_001574d8(a0);
                    v0_1 = func_00156d20(a0);
                    v0_7 = v0_1;
                } else {
                    if (((s32)(func_001570a0(a0)) != 0)) {
                        v0_2 = func_00157068(a0);
                        v0_6 = v0_2;
                    } else {
                        if (((s32)(func_001570d0(a0)) == 0)) {
                            v0_3 = func_00157c88(a0);
                            v0_5 = v0_3;
                        } else {
                            v0_4 = func_00156d20(a0);
                            v0_5 = v0_4;
                        }
                        v0_6 = v0_5;
                    }
                    v0_7 = v0_6;
                }
                v0_8 = v0_7;
            }
            *(u32*)((a0 + 0x3cf0)) = *(u8*)((*(u32*)((*(u32*)&(((sa_MUSICAL_GAUGE4*)a0)->m_sp[28]) + 0x48c)) + 0x1af));
            v0 = v0_8;
        }
    }
    return v0;
}
