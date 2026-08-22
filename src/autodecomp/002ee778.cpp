// coverage: addr=0x002ee778 symbol=_ZN4menu4Mode5startEv size=68 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:exact:100.0;ghidra:near:75.79
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SLIST_ELEM_GAME_MODE_1;
struct GAME_MODE;
struct menu_Mode;
struct ALLOCATOR;
struct YS_LIST_TASK_0;
struct kingdom_CONTEXT;
struct TASK_MANAGER;
union TASK_ARGS;
struct YS_LIST_ELEM_TASK_1;
struct TASK;
struct TASK_THREAD;
struct Axa_CSJointT_Axa_FiberPS3;
struct CellFiberPpuContext;
struct Axa_FiberPS3;
struct Axa_CSJointT_Axa_ResourceEntry;

struct YS_SLIST_ELEM_GAME_MODE_1 {  // class YS::SLIST_ELEM<GAME_MODE, 1> size=0x4
    void *Next[1];                                     // +0x0
};

struct GAME_MODE {  // class GAME_MODE size=0x2c
    void *_vptr_;                                      // +0x0
    TASK_MANAGER *TaskManager;                         // +0x4
    s8 ProfilerCode;                                   // +0x8
    u8 _pad0[3];
    YS_SLIST_ELEM_GAME_MODE_1 SList;                   // +0xc
    s32 Id;                                            // +0x10
    s32 TaskId;                                        // +0x14
    s32 TaskPriority;                                  // +0x18
    s32 State;                                         // +0x1c
    void *InitFunc;                                    // +0x20
    void *EnsureFunc;                                  // +0x24
    u32 StackSize;                                     // +0x28
};

struct menu_Mode {  // class menu::Mode size=0x30
    GAME_MODE super_GAME_MODE;                         // +0x0
    GAME_MODE *current_;                               // +0x2c
};

struct ALLOCATOR {  // class ALLOCATOR size=0x4
    void *_vptr_;                                      // +0x0
};

struct YS_LIST_TASK_0 {  // class YS::LIST<TASK, 0> size=0x8
    void *Head;                                        // +0x0
    void *Tail;                                        // +0x4
};

struct kingdom_CONTEXT {  // class kingdom::CONTEXT size=0x10
    Axa_FiberPS3 *fiberHandle;                         // +0x0
    u32 dummy[3];                                      // +0x4
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

extern "C" u32 func_00102210(u32) asm("func_00102210");
extern "C" u32 func_001031b0() asm("func_001031b0");
extern "C" u32 func_002ee840() asm("func_002ee840");
extern "C" void func_00102080(u32) asm("func_00102080");

// 0x002ee778 menu::Mode::start()
u32 lift_002ee778(u32 a0) asm("_ZN4menu4Mode5startEv");
u32 lift_002ee778(u32 a0) {
    u32 s0;
    u32 v0;
    *(u32*)&(((menu_Mode*)a0)->current_) = func_00102210(a0);
    func_00102080(a0);
    s0 = func_002ee840();
    v0 = func_001031b0();
    *(u32*)((s0 + 4)) = v0;
    return v0;
}
