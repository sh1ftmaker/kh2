// coverage: addr=0x0023efb8 symbol=func_0023efb8 size=156 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:57.85;ghidra:near:24.39;e3:near:9.14
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SLIST_ELEM_dk_Obj2D_2;
struct YS_BITFLAG_13_u_int;
struct dk_Obj2D;
struct YI_IMAGE_FREEZE;
struct Tz_Layout;
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
struct YI_IMAGE_PARAM;
struct YI_IMAGE_INIT_PACKET;
struct YI_IMAGE;
struct YI_IMAGE_FREEZE_INDEX_FORMAT;

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

struct YI_IMAGE_FREEZE {  // class YI::IMAGE_FREEZE size=0x18
    void *_vptr_;                                      // +0x0
    ALLOCATOR *allocator;                              // +0x4
    void *imz_addr;                                    // +0x8
    YI_IMAGE_FREEZE_INDEX_FORMAT *index_table;         // +0xc
    s32 image_max;                                     // +0x10
    YI_IMAGE *image_table;                             // +0x14
};

struct Tz_Layout {  // class Tz::Layout size=0xa4
    dk_Obj2D super_Obj2D;                              // +0x0
    YI_IMAGE_FREEZE m_image;                           // +0x18
    u8 m_layout[96];   // raw: YI::LAYOUT (size mismatch) // +0x30
    s32 m_num;                                         // +0x90
    s32 m_nextNum;                                     // +0x94
    s8 m_chgNext;                                      // +0x98
    u8 _pad0[3];
    s32 m_New_num;                                     // +0x9c
    s32 m_New_nextNum;                                 // +0xa0
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

struct YI_IMAGE_PARAM {  // structure YI::IMAGE::PARAM size=0x34
    s32 tex_bp;                                        // +0x0
    s32 tex_w;                                         // +0x4
    s32 tex_h;                                         // +0x8
    s32 tex_tw;                                        // +0xc
    s32 tex_th;                                        // +0x10
    s32 tex_bw;                                        // +0x14
    s32 tex_psm;                                       // +0x18
    s32 clut_bp;                                       // +0x1c
    s32 clut_w;                                        // +0x20
    s32 clut_h;                                        // +0x24
    s32 clut_bw;                                       // +0x28
    s32 clut_psm;                                      // +0x2c
    u32 pad : 29;                                      // +0x30
    u32 tex_cnv : 1;                                   // +0x34
    u32 clut_load : 1;                                 // +0x38
    u32 tex_load : 1;                                  // +0x3c
};

struct YI_IMAGE_INIT_PACKET {  // structure YI::IMAGE::INIT_PACKET size=0x90
    u64 dmatag[2];                                     // +0x0
    u64 giftag[2];                                     // +0x10
    u64 clamp[2];                                      // +0x20
    u64 texflush[2];                                   // +0x30
    u64 tex0[2];                                       // +0x40
    u64 tex1[2];                                       // +0x50
    u64 tex2_0[2];                                     // +0x60
    u64 tex2_1[2];                                     // +0x70
    u64 alpha[2];                                      // +0x80
};

struct YI_IMAGE {  // class YI::IMAGE size=0xe0
    void *_vptr_;                                      // +0x0
    YI_IMAGE_PARAM param;                              // +0x4
    void *tex_buf;                                     // +0x38
    void *clut_buf;                                    // +0x3c
    YI_IMAGE_INIT_PACKET init_packet;                  // +0x40
    s8 cache;                                          // +0xd0
    u8 _pad0[3];
    s32 id;                                            // +0xd4
    u8 _pad1[192];
    s8 *grayflag_buff;                                 // +0x198
    u8 _pad2[4];
};

struct YI_IMAGE_FREEZE_INDEX_FORMAT {  // structure YI::IMAGE_FREEZE::INDEX_FORMAT size=0x8
    u32 ofs;                                           // +0x0
    u32 size;                                          // +0x4
};

extern "C" u32 func_0023c900(u32) asm("func_0023c900");
extern "C" void func_0023ca80(u32) asm("func_0023ca80");
extern "C" void func_0023f108(u32) asm("func_0023f108");
extern "C" void func_0023f168(u32) asm("func_0023f168");

// 0x0023efb8 func_0023efb8
void func_0023efb8(u32 a0) asm("func_0023efb8");
void func_0023efb8(u32 a0) {
    func_0023f168(a0);
    func_0023ca80(a0 + 0x30);
    if (((s32)(*(u8*)((a0 + 0x94))) != 0)) {
        *(u8*)((a0 + 0x94)) = 0;
    }
    if ((func_0023c900(a0 + 0x30) == 0)) {
        if ((*(u32*)&(((Tz_Layout*)a0)->m_num) != 0xffffffff)) {
            func_0023f108(a0);
            func_0023f168(a0);
            func_0023ca80(a0 + 0x30);
            *(u8*)((a0 + 0x94)) = 1;
        } else {
            ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
        }
    }
    return;
}
