// coverage: addr=0x00237508 symbol=func_00237508 size=52 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:exact:100.0;e3:near:82.69;m2c:compile:0.0
#include "common/types.h"
typedef float f32; typedef double f64;
struct YI_SPRITE_anon_str_sprite_h_219;
struct YI_SPRITE_anon_str_sprite_h_241;
struct YI_SPRITE_MODE_PARAM;
struct YI_SPRITE;
struct YI_SPRITE_SPRITE_FORMAT;
struct YI_SPRITE_PARTS_FORMAT;
struct YI_SPRITE_GROUP_FORMAT;
struct YI_IMAGE_PARAM;
struct YI_IMAGE_INIT_PACKET;
struct YI_IMAGE;

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


// 0x00237508 func_00237508
u32 func_00237508(u32 a0, u32 a1, u32 a2) asm("func_00237508");
u32 func_00237508(u32 a0, u32 a1, u32 a2) {
    u32 a1_0;
    u32 t7;
    u32 t5;
    a1_0 = (a1 << 2);
    t7 = (*(u16*)((a1_0 + *(u32*)&(((YI_SPRITE*)a0)->sprite_table))) + a2);
    t5 = (*(u32*)&(((YI_SPRITE*)a0)->group_table) + (t7 * 0x14));
    return (*(u32*)((t5 + 8)) - *(u32*)(t5));
}
