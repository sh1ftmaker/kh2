// coverage: addr=0x0028e438 symbol=func_0028e438 size=140 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:exact:100.0;ghidra:near:93.54;e3:near:55.36
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_SLIST_ELEM_dk_Obj2D_2;
struct YS_BITFLAG_13_u_int;
struct dk_Obj2D;
struct Tz_PosXY;
struct Tz_MultiSeq;
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
struct YI_SPRITE_anon_str_sprite_h_219;
struct YI_SPRITE_anon_str_sprite_h_241;
struct YI_SPRITE_MODE_PARAM;
struct YI_SPRITE;
struct YI_SEQUENCE_anon_str_sequence_h_267;
struct YI_SEQUENCE_anon_str_sequence_h_306;
struct YI_SEQUENCE_anon_str_sequence_h_314;
struct YI_SEQUENCE;
struct dk_Sprite;
struct YI_SPRITE_SPRITE_FORMAT;
struct YI_SPRITE_PARTS_FORMAT;
struct YI_SPRITE_GROUP_FORMAT;
struct YI_IMAGE_PARAM;
struct YI_IMAGE_INIT_PACKET;
struct YI_IMAGE;
struct YI_SEQUENCE_ANIMATION_FORMAT_anon_str_sequence_h_115;
struct YI_SEQUENCE_ANIMATION_FORMAT;
struct YI_SEQUENCE_SEQUENCE_FORMAT;
struct Tz_SclXY;
struct Tz_MultiSeq_Localnfo;

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

struct Tz_PosXY {  // structure Tz::PosXY size=0x8
    s32 x;                                             // +0x0
    s32 y;                                             // +0x4
};

struct Tz_MultiSeq {  // class Tz::MultiSeq size=0x3c
    dk_Obj2D super_Obj2D;                              // +0x0
    s32 m_SeqCnt;                                      // +0x18
    Tz_PosXY m_Pos;                                    // +0x1c
    Tz_PosXY m_Offset;                                 // +0x24
    f32 m_AllScale;                                    // +0x2c
    dk_Sprite *m_Parent;                               // +0x30
    s32 m_ExMode;                                      // +0x34
    Tz_MultiSeq_Localnfo *m_Info;                      // +0x38
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

struct YI_SPRITE_anon_str_sprite_h_219 {  // structure YI::SPRITE::__anon_str_sprite_h_219 size=0x4
    u32 reserved : 25;                                 // +0x0
    u32 ExDirectUV : 1;                                // +0x4
    u32 color_disable : 1;                             // +0x8
    u32 scale_disable : 1;                             // +0xc
    u32 rotate_disable : 1;                            // +0x10
    u32 send_reset_packet : 1;                         // +0x14
    u32 send_init_test_packet : 1;                     // +0x18
    u32 send_init_packet : 1;                          // +0x1c
};

struct YI_SPRITE_anon_str_sprite_h_241 {  // structure YI::SPRITE::__anon_str_sprite_h_241 size=0x20
    YI_SPRITE_GROUP_FORMAT *group_pos;                 // +0x0
    s32 group_max;                                     // +0x4
    f32 px0;                                           // +0x8
    f32 py0;                                           // +0xc
    f32 px1;                                           // +0x10
    f32 py1;                                           // +0x14
    f32 scl_x;                                         // +0x18
    f32 scl_y;                                         // +0x1c
};

struct YI_SPRITE_MODE_PARAM {  // structure YI::SPRITE::MODE_PARAM size=0x18
    s32 mode;                                          // +0x0
    f32 counter;                                       // +0x4
    f32 max;                                           // +0x8
    f32 wait;                                          // +0xc
    s32 req_max;                                       // +0x10
    s32 req_wait;                                      // +0x14
};

struct YI_SPRITE {  // class YI::SPRITE size=0xb0
    void *_vptr_;                                      // +0x0
    YI_SPRITE_PARTS_FORMAT *parts_table;               // +0x4
    YI_SPRITE_GROUP_FORMAT *group_table;               // +0x8
    YI_SPRITE_SPRITE_FORMAT *sprite_table;             // +0xc
    YI_SPRITE_anon_str_sprite_h_219 status;            // +0x10
    YI_SPRITE_anon_str_sprite_h_241 calc;              // +0x14
    s32 parts_max;                                     // +0x34
    s32 group_max;                                     // +0x38
    s32 sprite_max;                                    // +0x3c
    YI_IMAGE *image;                                   // +0x40
    f32 speed;                                         // +0x44
    f32 counter;                                       // +0x48
    f32 time_counter;                                  // +0x4c
    YI_SPRITE_MODE_PARAM mode_param;                   // +0x50
    s32 number;                                        // +0x68
    f32 shade;                                         // +0x6c
    f32 x_rotate;                                      // +0x70
    f32 y_rotate;                                      // +0x74
    f32 z_rotate;                                      // +0x78
    f32 scale;                                         // +0x7c
    f32 scale_x;                                       // +0x80
    f32 scale_y;                                       // +0x84
    u32 rgba;                                          // +0x88
    s32 x_position;                                    // +0x8c
    s32 y_position;                                    // +0x90
    s32 x_offset;                                      // +0x94
    s32 y_offset;                                      // +0x98
    u32 draw_z;                                        // +0x9c
    u16 u[4];                                          // +0xa0
    u16 v[4];                                          // +0xa8
};

struct YI_SEQUENCE_anon_str_sequence_h_267 {  // structure YI::SEQUENCE::__anon_str_sequence_h_267 size=0x4
    u32 reserved : 18;                                 // +0x0
    u32 ExNearest : 1;                                 // +0x4
    u32 sway_disable : 1;                              // +0x8
    u32 curve_disable : 1;                             // +0xc
    u32 pos_disable : 1;                               // +0x10
    u32 scroll_disable : 1;                            // +0x14
    u32 color_disable : 1;                             // +0x18
    u32 scale_disable : 1;                             // +0x1c
    u32 rotate_disable : 1;                            // +0x20
    u32 ablend_disable : 1;                            // +0x24
    u32 bilinear_disable : 1;                          // +0x28
    u32 load_image : 1;                                // +0x2c
    u32 color : 1;                                     // +0x30
    u32 scale : 1;                                     // +0x34
    u32 rotate : 1;                                    // +0x38
};

struct YI_SEQUENCE_anon_str_sequence_h_306 {  // structure YI::SEQUENCE::__anon_str_sequence_h_306 size=0x18
    s8 flag;                                           // +0x0
    u8 _pad0[3];
    s32 number;                                        // +0x4
    YI_SEQUENCE_ANIMATION_FORMAT *anm_pos;             // +0x8
    s32 anm_max;                                       // +0xc
    f32 cnt;                                           // +0x10
    u32 rgba;                                          // +0x14
};

struct YI_SEQUENCE_anon_str_sequence_h_314 {  // structure YI::SEQUENCE::__anon_str_sequence_h_314 size=0x18
    s8 flag;                                           // +0x0
    u8 _pad0[3];
    f32 scale_x;                                       // +0x4
    f32 scale_y;                                       // +0x8
    u32 rgba;                                          // +0xc
    s32 x;                                             // +0x10
    s32 y;                                             // +0x14
};

struct YI_SEQUENCE {  // class YI::SEQUENCE size=0x158
    YI_SPRITE super_SPRITE;                            // +0x0
    YI_SEQUENCE_ANIMATION_FORMAT *animation_table;     // +0xb0
    YI_SEQUENCE_SEQUENCE_FORMAT *sequence_table;       // +0xb4
    YI_SEQUENCE_anon_str_sequence_h_267 status;        // +0xb8
    YI_SEQUENCE_anon_str_sequence_h_306 calc;          // +0xbc
    YI_SEQUENCE_anon_str_sequence_h_314 active;        // +0xd4
    void *exit_func;                                   // +0xec
    void *tag_func;                                    // +0xf0
    s32 animation_max;                                 // +0xf4
    s32 sequence_max;                                  // +0xf8
    s32 phase;                                         // +0xfc
    f32 counter;                                       // +0x100
    f32 time_counter;                                  // +0x104
    f32 time_max;                                      // +0x108
    s32 loop_counter;                                  // +0x10c
    s32 tag_count;                                     // +0x110
    s32 number;                                        // +0x114
    f32 r_rate;                                        // +0x118
    f32 g_rate;                                        // +0x11c
    f32 b_rate;                                        // +0x120
    f32 a_rate;                                        // +0x124
    f32 x_rotate;                                      // +0x128
    f32 y_rotate;                                      // +0x12c
    f32 z_rotate;                                      // +0x130
    f32 scale;                                         // +0x134
    f32 scale_x;                                       // +0x138
    f32 scale_y;                                       // +0x13c
    s32 loop;                                          // +0x140
    s32 frame;                                         // +0x144
    s32 x_position;                                    // +0x148
    s32 y_position;                                    // +0x14c
    u16 u[2];                                          // +0x150
    u16 v[2];                                          // +0x154
};

struct dk_Sprite {  // class dk::Sprite size=0x19c
    dk_Obj2D super_Obj2D;                              // +0x0
    YI_SEQUENCE m_sequence;                            // +0x18
    s32 m_posx;                                        // +0x170
    s32 m_posy;                                        // +0x174
    s32 m_offsetx;                                     // +0x178
    s32 m_offsety;                                     // +0x17c
    f32 m_scale;                                       // +0x180
    s32 m_num;                                         // +0x184
    s32 m_nextNum;                                     // +0x188
    dk_Sprite *m_parent;                               // +0x18c
    YI_SEQUENCE *m_ParentSeq;                          // +0x190
    s8 m_chgNext;                                      // +0x194
    s8 m_ClrImgCache;                                  // +0x195
    u8 _pad0[2];
};

struct YI_SPRITE_SPRITE_FORMAT {  // structure YI::SPRITE::SPRITE_FORMAT size=0x4
    u16 pos;                                           // +0x0
    u16 max;                                           // +0x2
};

struct YI_SPRITE_PARTS_FORMAT {  // structure YI::SPRITE::PARTS_FORMAT size=0x2c
    u32 palette;                                       // +0x0
    u32 u0;                                            // +0x4
    u32 v0;                                            // +0x8
    u32 u1;                                            // +0xc
    u32 v1;                                            // +0x10
    f32 s_scroll;                                      // +0x14
    f32 t_scroll;                                      // +0x18
    u32 rgba0;                                         // +0x1c
    u32 rgba1;                                         // +0x20
    u32 rgba2;                                         // +0x24
    u32 rgba3;                                         // +0x28
};

struct YI_SPRITE_GROUP_FORMAT {  // structure YI::SPRITE::GROUP_FORMAT size=0x14
    s32 x0;                                            // +0x0
    s32 y0;                                            // +0x4
    s32 x1;                                            // +0x8
    s32 y1;                                            // +0xc
    u32 parts_id;                                      // +0x10
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

struct YI_SEQUENCE_ANIMATION_FORMAT_anon_str_sequence_h_115 {  // structure YI::SEQUENCE::ANIMATION_FORMAT::__anon_str_sequence_h_115 size=0x4
    u8 a;                                              // +0x0
    u8 b;                                              // +0x1
    u8 g;                                              // +0x2
    u8 r;                                              // +0x3
};

struct YI_SEQUENCE_ANIMATION_FORMAT {  // structure YI::SEQUENCE::ANIMATION_FORMAT size=0x90
    u32 reserved : 12;                                 // +0x0
    u32 tag : 1;                                       // +0x4
    u32 pos_disable : 1;                               // +0x8
    u32 base_ofs_disable : 1;                          // +0xc
    u32 base_disable : 1;                              // +0x10
    u32 last_cut : 1;                                  // +0x14
    u32 ofs_disable : 1;                               // +0x18
    u32 ofs_stop : 1;                                  // +0x1c
    u32 base_stop : 1;                                 // +0x20
    u32 sway_stop : 1;                                 // +0x24
    u32 color_disable : 1;                             // +0x28
    u32 scale_stop : 1;                                // +0x2c
    u32 rotate_stop : 1;                               // +0x30
    u32 color_stop : 1;                                // +0x34
    u32 scale_disable : 1;                             // +0x38
    u32 rotate_disable : 1;                            // +0x3c
    u32 sway_disable : 1;                              // +0x40
    u32 sway_lag : 1;                                  // +0x44
    u32 bilinear_disable : 1;                          // +0x48
    u32 active : 1;                                    // +0x4c
    u32 curve_disable : 1;                             // +0x50
    s32 sprite_id;                                     // +0x54
    s32 time[2];                                       // +0x58
    s32 x_base[2];                                     // +0x60
    s32 y_base[2];                                     // +0x68
    s32 x_ofs[2];                                      // +0x70
    s32 y_ofs[2];                                      // +0x78
    f32 x_rotate[2];                                   // +0x80
    f32 y_rotate[2];                                   // +0x88
    f32 z_rotate[2];                                   // +0x90
    f32 scale[2];                                      // +0x98
    f32 scale_x[2];                                    // +0xa0
    f32 scale_y[2];                                    // +0xa8
    f32 curve[4];                                      // +0xb0
    f32 x_sway[2];                                     // +0xc0
    f32 y_sway[2];                                     // +0xc8
    u16 x_sway_count;                                  // +0xd0
    u16 y_sway_count;                                  // +0xd2
    u32 alpha_blend;                                   // +0xd4
    YI_SEQUENCE_ANIMATION_FORMAT_anon_str_sequence_h_115 color[2]; // +0xd8
};

struct YI_SEQUENCE_SEQUENCE_FORMAT {  // structure YI::SEQUENCE::SEQUENCE_FORMAT size=0x24
    u16 pos;                                           // +0x0
    u16 max;                                           // +0x2
    u16 loop;                                          // +0x4
    u16 reserved : 6;                                  // +0x6
    u16 sway_disable : 1;                              // +0x8
    u16 curve_disable : 1;                             // +0xa
    u16 active_disable : 1;                            // +0xc
    u16 pos_disable : 1;                               // +0xe
    u16 scroll_disable : 1;                            // +0x10
    u16 color_disable : 1;                             // +0x12
    u16 scale_disable : 1;                             // +0x14
    u16 rotate_disable : 1;                            // +0x16
    u16 ablend_disable : 1;                            // +0x18
    u16 bilinear_disable : 1;                          // +0x1a
    u32 frame;                                         // +0x1c
    u32 end;                                           // +0x20
    s32 x;                                             // +0x24
    s32 y;                                             // +0x28
    s32 size;                                          // +0x2c
    s32 cr;                                            // +0x30
    s32 ex;                                            // +0x34
};

struct Tz_SclXY {  // structure Tz::SclXY size=0x8
    f32 x;                                             // +0x0
    f32 y;                                             // +0x4
};

struct Tz_MultiSeq_Localnfo {  // structure Tz::MultiSeq::Localnfo size=0x17c
    YI_SEQUENCE Seq;                                   // +0x0
    s32 Num;                                           // +0x158
    s32 NextNum;                                       // +0x15c
    s8 ChgNext;                                        // +0x160
    u8 _pad0[3];
    f32 Scale;                                         // +0x164
    Tz_PosXY LocalOffset;                              // +0x168
    Tz_SclXY LocalScaleXY;                             // +0x170
    YI_SEQUENCE *LocalParentSeq;                       // +0x178
};

extern "C" u32 func_00139d78(u32, u32, u32, u32) asm("func_00139d78");
extern "C" u32 func_00239bf8(u32, u32) asm("func_00239bf8");

// 0x0028e438 func_0028e438
u32 func_0028e438(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_0028e438");
u32 func_0028e438(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    u32 v0_0;
    v0 = func_00139d78(a0, a1, a2, a3);
    if ((*(u32*)((((a1 * 0x17c) + *(u32*)&(((Tz_MultiSeq*)a0)->m_Info)) + 0x158)) != a2)) {
        *(u32*)((((a1 * 0x17c) + *(u32*)&(((Tz_MultiSeq*)a0)->m_Info)) + 0x158)) = a2;
        v0_0 = func_00239bf8(*(u32*)&(((Tz_MultiSeq*)a0)->m_Info) + (a1 * 0x17c), a2);
        v0 = v0_0;
    }
    *(u32*)((((a1 * 0x17c) + *(u32*)&(((Tz_MultiSeq*)a0)->m_Info)) + 0x15c)) = a3;
    *(u8*)((((a1 * 0x17c) + *(u32*)&(((Tz_MultiSeq*)a0)->m_Info)) + 0x160)) = 0;
    return v0;
}
