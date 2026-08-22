// coverage: addr=0x002bf098 symbol=func_002bf098 size=212 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:97.94;ghidra:near:87.63;e3:near:56.77
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_BITFLAG_32_u_int;
struct YS_SLIST_menu_Widget_0;
struct menu_Position;
struct YS_COLOR;
struct YS_SLIST_ELEM_menu_Widget_1;
struct menu_Widget;
struct YI_IMAGE_FREEZE;
struct menu_LayoutWidget;
struct AREA_OBJECT;
struct worldmap_RootWindow;
struct YS_BITFLAG_1_u_short;
union YS_BINARC_INFO_anon_uni_binarc_h_50;
struct YS_BINARC_INFO;
struct YS_BINARC;
struct ALLOCATOR;
struct YI_IMAGE_PARAM;
struct YI_IMAGE_INIT_PACKET;
struct YI_IMAGE;
struct YI_IMAGE_FREEZE_INDEX_FORMAT;

struct YS_BITFLAG_32_u_int {  // class YS::BITFLAG<32, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct YS_SLIST_menu_Widget_0 {  // class YS::SLIST<menu::Widget, 0> size=0x8
    void *Head;                                        // +0x0
    void *Tail;                                        // +0x4
};

struct menu_Position {  // class menu::Position size=0x8
    s32 x;                                             // +0x0
    s32 y;                                             // +0x4
};

struct YS_COLOR {  // class YS::COLOR size=0x4
    u8 R;                                              // +0x0
    u8 G;                                              // +0x1
    u8 B;                                              // +0x2
    u8 A;                                              // +0x3
};

struct YS_SLIST_ELEM_menu_Widget_1 {  // class YS::SLIST_ELEM<menu::Widget, 1> size=0x4
    void *Next[1];                                     // +0x0
};

struct menu_Widget {  // class menu::Widget size=0x24
    void *_vptr_;                                      // +0x0
    YS_BITFLAG_32_u_int flag_;                         // +0x4
    YS_SLIST_menu_Widget_0 childList_;                 // +0x8
    menu_Position pos_;                                // +0x10
    YS_COLOR color_;                                   // +0x18
    menu_Widget *parent_;                              // +0x1c
    YS_SLIST_ELEM_menu_Widget_1 SList;                 // +0x20
};

struct YI_IMAGE_FREEZE {  // class YI::IMAGE_FREEZE size=0x18
    void *_vptr_;                                      // +0x0
    ALLOCATOR *allocator;                              // +0x4
    void *imz_addr;                                    // +0x8
    YI_IMAGE_FREEZE_INDEX_FORMAT *index_table;         // +0xc
    s32 image_max;                                     // +0x10
    YI_IMAGE *image_table;                             // +0x14
};

struct menu_LayoutWidget {  // class menu::LayoutWidget size=0xa0
    menu_Widget super_Widget;                          // +0x0
    ALLOCATOR *allocator_;                             // +0x24
    YI_IMAGE_FREEZE imageFreeze_;                      // +0x28
    u8 layout_[96];   // raw: YI::LAYOUT (size mismatch) // +0x40
};

struct AREA_OBJECT {  // class AREA_OBJECT size=0x1
    u8 _pad0[1];
};

struct worldmap_RootWindow {  // class worldmap::RootWindow size=0xa4
    menu_LayoutWidget super_LayoutWidget;              // +0x0
    AREA_OBJECT super_AREA_OBJECT;                     // +0xa0
    YS_BINARC *bar_;                                   // +0xa1
};

struct YS_BITFLAG_1_u_short {  // class YS::BITFLAG<1, u_short> size=0x2
    u8 Flag[2];   // raw: klass[1] (size mismatch)     // +0x0
};

union YS_BINARC_INFO_anon_uni_binarc_h_50 {  // union YS::BINARC::INFO::__anon_uni_binarc_h_50 size=0x4
    u32 Offset;
    void *Address;
};

struct YS_BINARC_INFO {  // class YS::BINARC::INFO size=0x10
    u16 Type;                                          // +0x0
    YS_BITFLAG_1_u_short Flag;                         // +0x2
    u32 Tag;                                           // +0x4
    YS_BINARC_INFO_anon_uni_binarc_h_50 _anon8;        // +0x8
    u32 Size;                                          // +0xc
};

struct YS_BINARC {  // class YS::BINARC size=0x10
    u8 Id[3];                                          // +0x0
    u8 ExtFlg : 4;                                     // +0x3
    u8 Version : 4;                                    // +0x4
    u32 FileNum;                                       // +0x5
    u32 Address;                                       // +0x9
    u32 Replace : 30;                                  // +0xd
    u32 Flag : 2;                                      // +0x11
    YS_BINARC_INFO Info[0];                            // +0x15
};

struct ALLOCATOR {  // class ALLOCATOR size=0x4
    void *_vptr_;                                      // +0x0
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

extern "C" u32 D_002bf308 asm("D_002bf308");
extern "C" u32 D_00361998 asm("D_00361998");
extern "C" u32 D_003619a8 asm("D_003619a8");
extern "C" u32 D_00363880 asm("D_00363880");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_001050c8(u32) asm("func_001050c8");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_002beb90() asm("func_002beb90");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_002edf28(u32) asm("func_002edf28");
extern "C" void func_002ef1f8(u32, u32, u32) asm("func_002ef1f8");

// 0x002bf098 func_002bf098
u32 func_002bf098(u32 a0) asm("func_002bf098");
u32 func_002bf098(u32 a0) {
    u32 s1;
    u32 v0;
    u32 s1_0;
    s1 = func_001050c8(a0);
    func_002edf28(a0);
    *(u32*)(a0) = (u32)&D_00363880;
    *(u32*)&(((worldmap_RootWindow*)a0)->super_LayoutWidget.allocator_) = s1;
    func_002369a0(a0 + 0x28);
    func_0023c008(a0 + 0x40);
    *(u32*)(a0) = (u32)&D_003619a8;
    *(u32*)(&D_00361998) = a0;
    v0 = func_001708f8(func_002beb90(), 0xffffffff);
    *(u32*)&(((worldmap_RootWindow*)a0)->super_LayoutWidget.layout_[92]) = v0;
    s1_0 = func_00168b38(v0, 0x1c, 0);
    func_002ef1f8(a0, *(u32*)((s1_0 + 8)), *(u32*)((func_00168b38(*(u32*)&(((worldmap_RootWindow*)a0)->super_LayoutWidget.layout_[92]), 0x1d, 0) + 8)));
    *(u32*)&(((worldmap_RootWindow*)a0)->super_LayoutWidget.super_Widget.flag_) = (*(u32*)&(((worldmap_RootWindow*)a0)->super_LayoutWidget.super_Widget.flag_) | 1);
    return func_00102c18(1, 0x19258, (u32)&D_002bf308);
}
