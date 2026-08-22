// coverage: addr=0x001d4d28 symbol=func_001d4d28 size=148 class=loop source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:exact:100.0;ghidra:near:81.46
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_IMAGE_DATA;
struct YS_BITFLAG_5_u_int;
struct YS_MISSION2D;
struct YS_MISSION_COUNT;
struct YS_COMMAND_HISTORY_128_WORK;
struct YS_COMMAND_HISTORY_128;
struct YS_MISSION_SCORE;
struct YS_SLIST_ELEM_dk_Obj2D_2;
struct YS_BITFLAG_13_u_int;
struct dk_Obj2D;
struct dk_INFO_BASE;
struct YI_IMAGE_PARAM;
struct YI_IMAGE_INIT_PACKET;
struct YI_IMAGE;
struct dk_SpriteImage;
struct YI_SPRITE_anon_str_sprite_h_219;
struct YI_SPRITE_anon_str_sprite_h_241;
struct YI_SPRITE_MODE_PARAM;
struct YI_SPRITE;
struct YI_SEQUENCE_anon_str_sequence_h_267;
struct YI_SEQUENCE_anon_str_sequence_h_306;
struct YI_SEQUENCE_anon_str_sequence_h_314;
struct YI_SEQUENCE;
struct dk_COUNTER;
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
struct YI_SPRITE_SPRITE_FORMAT;
struct YI_SPRITE_PARTS_FORMAT;
struct YI_SPRITE_GROUP_FORMAT;
struct YI_SEQUENCE_ANIMATION_FORMAT_anon_str_sequence_h_115;
struct YI_SEQUENCE_ANIMATION_FORMAT;
struct YI_SEQUENCE_SEQUENCE_FORMAT;

struct YS_IMAGE_DATA {  // structure YS::IMAGE_DATA size=0x8
    void *Imd;                                         // +0x0
    void *Sqd;                                         // +0x4
};

struct YS_BITFLAG_5_u_int {  // class YS::BITFLAG<5, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct YS_MISSION2D {  // class YS::MISSION2D size=0x2c
    void *_vptr_;                                      // +0x0
    YS_IMAGE_DATA super_IMAGE_DATA;                    // +0x4
    YS_BITFLAG_5_u_int Flag;                           // +0xc
    s32 Id;                                            // +0x10
    s32 Start;                                         // +0x14
    s32 Max;                                           // +0x18
    s32 Warning;                                       // +0x1c
    s32 Align;                                         // +0x20
    s32 Priority;                                      // +0x24
    s32 WarningSe;                                     // +0x28
};

struct YS_MISSION_COUNT {  // structure YS::MISSION_COUNT size=0x38
    YS_MISSION2D super_MISSION2D;                      // +0x0
    s32 Value;                                         // +0x2c
    dk_COUNTER *Information;                           // +0x30
    s32 Figure;                                        // +0x34
};

struct YS_COMMAND_HISTORY_128_WORK {  // structure YS::COMMAND_HISTORY<128>::WORK size=0x4
    u8 Type;                                           // +0x0
    u8 Count;                                          // +0x1
    u16 Command;                                       // +0x2
};

struct YS_COMMAND_HISTORY_128 {  // class YS::COMMAND_HISTORY<128> size=0x200
    YS_COMMAND_HISTORY_128_WORK Work[128];             // +0x0
};

struct YS_MISSION_SCORE {  // class YS::MISSION_SCORE size=0x244
    YS_MISSION_COUNT super_MISSION_COUNT;              // +0x0
    YS_COMMAND_HISTORY_128 History;                    // +0x38
    s32 ExpRate;                                       // +0x238
    s32 ExpMax;                                        // +0x23c
    s32 TimeBonus;                                     // +0x240
};

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

struct dk_INFO_BASE {  // class dk::INFO_BASE size=0x30
    dk_Obj2D super_Obj2D;                              // +0x0
    s32 m_prio;                                        // +0x18
    s32 m_align;                                       // +0x1c
    s32 m_posx;                                        // +0x20
    s32 m_posy;                                        // +0x24
    f32 m_posyNow;                                     // +0x28
    f32 m_posyPrev;                                    // +0x2c
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

struct dk_SpriteImage {  // class dk::SpriteImage size=0x100
    dk_Obj2D super_Obj2D;                              // +0x0
    u8 _pad0[8];
    u8 m_image[224];   // raw: YI::IMAGE (size mismatch) // +0x20
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

struct dk_COUNTER {  // class dk::COUNTER size=0x17a0
    dk_INFO_BASE super_INFO_BASE;                      // +0x0
    dk_SpriteImage m_image;                            // +0x30
    YI_SEQUENCE m_sequencePos;                         // +0x130
    u8 m_sp[5356];   // raw: dk::Sprite[13] (size mismatch) // +0x288
    s32 *m_counterPtr;                                 // +0x1774
    s32 m_counter;                                     // +0x1778
    s32 m_oldCounter;                                  // +0x177c
    s32 *m_denominatorPtr;                             // +0x1780
    s32 m_denominator;                                 // +0x1784
    s32 m_oldDenominator;                              // +0x1788
    s32 m_digitNum;                                    // +0x178c
    s32 m_type;                                        // +0x1790
    s32 m_mode;                                        // +0x1794
    u8 _pad0[8];
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

extern "C" u32 D_003525c8 asm("D_003525c8");
extern "C" u32 D_00352750 asm("D_00352750");
extern "C" u32 func_001d16e8(u32, u32, u32) asm("func_001d16e8");
extern "C" void func_001d1678(u32, u32) asm("func_001d1678");
extern "C" void func_001d19e8(u32, u32) asm("func_001d19e8");
extern "C" void func_00320400(u32) asm("func_00320400");

// 0x001d4d28 func_001d4d28
u32 func_001d4d28(u32 a0) asm("func_001d4d28");
u32 func_001d4d28(u32 a0) {
    u32 t6;
    u32 t7;
    *(u32*)(a0) = (u32)&D_003525c8;
    *(u32*)&(((YS_MISSION_SCORE*)a0)->super_MISSION_COUNT.super_MISSION2D.super_IMAGE_DATA.Imd) = 0;
    *(u32*)&(((YS_MISSION_SCORE*)a0)->super_MISSION_COUNT.super_MISSION2D.super_IMAGE_DATA.Sqd) = 0;
    func_00320400(a0 + 0xc);
    func_001d1678(a0, 0xffffffff);
    *(u32*)(a0) = (u32)&D_00352750;
    *(u32*)&(((YS_MISSION_SCORE*)a0)->super_MISSION_COUNT.Information) = 0;
    t6 = (a0 + 0x39);
    t7 = 0x7f;
    do {
        *(u8*)(t6) = 0;
        t6 = (t6 + 4);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    func_001d19e8(a0, 0xffffffff);
    return func_001d16e8(a0, 0, 0xc);
}
