// coverage: addr=0x003197f8 symbol=func_003197f8 size=40 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:98.0;m2c:near:98.0;corpus:near:82.92;e3:near:0.0
#include "common/types.h"
typedef float f32; typedef double f64;
struct Axa_FVECTOR4;
struct Axa_FMATRIX44;
struct kn_FMatrix;
struct kn_FVector;
struct YS_SLIST_ELEM_dk_BgObj_2;
struct dk_FVector3;
struct dk_Aabbox;
struct dk_Motion;
struct YS_BITFLAG_3_u_int;
struct YS_COLOR;
struct kn_PartsColor;
struct kn_DrawParam;
struct YS_SLIST_ELEM_dk_ObjDrawList_1;
struct YS_SLIST_dk_ObjDrawList_0;
struct YS_BITFLAG_15_u_int;
struct dk_ObjDrawList;
struct dk_BgObj;
struct YS_BITFLAG_1_u_short;
union YS_BINARC_INFO_anon_uni_binarc_h_50;
struct YS_BINARC_INFO;
struct YS_BINARC;
struct kn_Motion;
struct kn_Model;
struct kn_Projection;
struct kn_ProjectionCamera;
struct kn_ModelObj;
struct kn_AnimationWork;
union kn_Chunk_anon_uni_chunk_h_31;
union kn_Chunk_anon_uni_chunk_h_39;
struct kn_Chunk;
struct kn_ModelObj_Property;
struct kn_Texture;
struct ALLOCATOR;
struct kn_LightParam;
struct dk_BgObjPos;
struct kn_LightParamPosition;

struct Axa_FVECTOR4 {  // structure Axa::FVECTOR4 size=0x10
    f32 x;                                             // +0x0
    f32 y;                                             // +0x4
    f32 z;                                             // +0x8
    f32 w;                                             // +0xc
};

struct Axa_FMATRIX44 {  // structure Axa::FMATRIX44 size=0x40
    Axa_FVECTOR4 v0;                                   // +0x0
    Axa_FVECTOR4 v1;                                   // +0x10
    Axa_FVECTOR4 v2;                                   // +0x20
    Axa_FVECTOR4 v3;                                   // +0x30
};

struct kn_FMatrix {  // structure kn::FMatrix size=0x40
    Axa_FMATRIX44 super_FMATRIX44;                     // +0x0
};

struct kn_FVector {  // structure kn::FVector size=0x10
    Axa_FVECTOR4 super_FVECTOR4;                       // +0x0
};

struct YS_SLIST_ELEM_dk_BgObj_2 {  // class YS::SLIST_ELEM<dk::BgObj, 2> size=0x8
    void *Next[2];                                     // +0x0
};

struct dk_FVector3 {  // structure dk::FVector3 size=0xc
    f32 x;                                             // +0x0
    f32 y;                                             // +0x4
    f32 z;                                             // +0x8
};

struct dk_Aabbox {  // class dk::Aabbox size=0x18
    dk_FVector3 m_min;                                 // +0x0
    dk_FVector3 m_max;                                 // +0xc
};

struct dk_Motion {  // class dk::Motion size=0x70
    kn_FMatrix m_matrix;                               // +0x0
    YS_BINARC *m_boms;                                 // +0x40
    dk_BgObj *m_obj;                                   // +0x44
    kn_Motion *m_motion;                               // +0x48
    f32 m_time;                                        // +0x4c
    f32 m_length;                                      // +0x50
    dk_Aabbox m_box;                                   // +0x54
    u8 _pad0[4];
};

struct YS_BITFLAG_3_u_int {  // class YS::BITFLAG<3, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct YS_COLOR {  // class YS::COLOR size=0x4
    u8 R;                                              // +0x0
    u8 G;                                              // +0x1
    u8 B;                                              // +0x2
    u8 A;                                              // +0x3
};

struct kn_PartsColor {  // structure kn::PartsColor size=0x8
    u32 parts;                                         // +0x0
    YS_COLOR rgba;                                     // +0x4
};

struct kn_DrawParam {  // structure kn::DrawParam size=0x38
    u32 flag;                                          // +0x0
    u8 rgba[4];                                        // +0x4
    u8 fog[4];                                         // +0x8
    u8 _pad0[4];
    u64 frame;                                         // +0x10
    u64 zbuf;                                          // +0x18
    f32 zbias;                                         // +0x20
    void *texture;                                     // +0x24
    u8 texfade;                                        // +0x28
    u8 stealth_rgb[3];                                 // +0x29
    kn_PartsColor *partsColor;                         // +0x2c
    kn_LightParam *lightParam;                         // +0x30
    kn_FMatrix *specialMatrix;                         // +0x34
};

struct YS_SLIST_ELEM_dk_ObjDrawList_1 {  // class YS::SLIST_ELEM<dk::ObjDrawList, 1> size=0x4
    void *Next[1];                                     // +0x0
};

struct YS_SLIST_dk_ObjDrawList_0 {  // class YS::SLIST<dk::ObjDrawList, 0> size=0x8
    void *Head;                                        // +0x0
    void *Tail;                                        // +0x4
};

struct YS_BITFLAG_15_u_int {  // class YS::BITFLAG<15, u_int> size=0x4
    u8 Flag[4];   // raw: klass[1] (size mismatch)     // +0x0
};

struct dk_ObjDrawList {  // structure dk::ObjDrawList size=0x130
    kn_ModelObj *ModelObj;                             // +0x0
    u8 _pad0[4];
    kn_DrawParam DrawParam;                            // +0x8
    kn_FMatrix Matrix;                                 // +0x40
    kn_FMatrix OldMatrix;                              // +0x80
    kn_FVector Pos;                                    // +0xc0
    dk_Aabbox Box;                                     // +0xd0
    YS_COLOR Color;                                    // +0xe8
    YS_SLIST_ELEM_dk_ObjDrawList_1 SList;              // +0xec
    YS_SLIST_dk_ObjDrawList_0 Children;                // +0xf0
    YS_BITFLAG_15_u_int Flag;                          // +0xf8
    kn_FVector *Vertex8;                               // +0xfc
    kn_LightParamPosition *LightParamPosition;         // +0x100
    f32 ShadowBBoxMaxYOffset;                          // +0x104
    f32 ShadowOffLimit;                                // +0x108
    u8 ShadowAlpha;                                    // +0x10c
    u8 Level;                                          // +0x10d
    u8 DrawType[2];                                    // +0x10e
    dk_ObjDrawList *Next;                              // +0x110
    dk_BgObjPos *BgObjPosPtr;                          // +0x114
    u16 InsertNode;                                    // +0x118
    u16 InsertNodeDepth;                               // +0x11a
    u16 InsertIndex;                                   // +0x11c
    u8 FloorLevel;                                     // +0x11e
    u8 DrawPriority;                                   // +0x11f
    kn_FMatrix *OverrideMatrix;                        // +0x120
    s32 BoxId;                                         // +0x124
    u8 _pad1[8];
};

struct dk_BgObj {  // class dk::BgObj size=0x2f0
    void *_vptr_;                                      // +0x0
    kn_Model *m_model;                                 // +0x4
    u8 _pad0[8];
    kn_FMatrix m_matrix;                               // +0x10
    kn_FVector m_pos;                                  // +0x50
    kn_FVector m_rot;                                  // +0x60
    kn_FVector m_scale;                                // +0x70
    YS_SLIST_ELEM_dk_BgObj_2 SList;                    // +0x80
    u8 _pad1[8];
    kn_FVector m_vertex8[8];                           // +0x90
    dk_Motion m_motion;                                // +0x110
    YS_BITFLAG_3_u_int m_flag;                         // +0x180
    kn_PartsColor m_partsColor[4];                     // +0x184
    YS_COLOR m_color;                                  // +0x1a4
    u32 m_group;                                       // +0x1a8
    u32 m_inputFlag;                                   // +0x1ac
    s32 m_kind;                                        // +0x1b0
    u8 _pad2[12];
    dk_ObjDrawList m_drawList;                         // +0x1c0
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

struct kn_Motion {  // class kn::Motion size=0x18
    void *_vptr_;                                      // +0x0
    void *rawdata_;                                    // +0x4
    kn_FMatrix *grot_;                                 // +0x8
    kn_FMatrix *lmatrix_;                              // +0xc
    kn_FMatrix *gmatrix_;                              // +0x10
    kn_FVector *gscale_;                               // +0x14
};

struct kn_Model {  // class kn::Model size=0x10
    void *_vptr_;                                      // +0x0
    void *rawdata_;                                    // +0x4
    kn_ModelObj *obj_;                                 // +0x8
    u32 flag_;                                         // +0xc
};

struct kn_Projection {  // class kn::Projection size=0x190
    kn_FMatrix super_FMatrix;                          // +0x0
    f32 scrz_;                                         // +0x40
    f32 fov_[2];                                       // +0x44
    f32 aspect_[3];                                    // +0x4c
    f32 center_[3];                                    // +0x58
    f32 zmin_;                                         // +0x64
    f32 zmax_;                                         // +0x68
    f32 clipNear_;                                     // +0x6c
    f32 clipFar_;                                      // +0x70
    f32 dispNear_;                                     // +0x74
    f32 dispFar_;                                      // +0x78
    f32 clipX_;                                        // +0x7c
    f32 clipY_;                                        // +0x80
    u8 _pad0[12];
    kn_FMatrix viewClip_;                              // +0x90
    kn_FMatrix viewClipGs_;                            // +0xd0
    kn_FMatrix viewProjection;                         // +0x110
    kn_FMatrix projectionScreen;                       // +0x150
};

struct kn_ProjectionCamera {  // class kn::ProjectionCamera size=0x250
    kn_FMatrix super_FMatrix;                          // +0x0
    kn_Projection m_Projection;                        // +0x40
    kn_FMatrix m_WorldView;                            // +0x1d0
    kn_FMatrix m_LocalWorld;                           // +0x210
};

struct kn_ModelObj {  // class kn::ModelObj size=0x340
    kn_ModelObj *all_link_;                            // +0x0
    kn_ModelObj *next_;                                // +0x4
    u32 flag_;                                         // +0x8
    u32 systemFlag_;                                   // +0xc
    ALLOCATOR *allocator_;                             // +0x10
    kn_Model *model_;                                  // +0x14
    kn_Motion *motion_;                                // +0x18
    kn_FVector *scale_;                                // +0x1c
    kn_FVector *rot_;                                  // +0x20
    kn_FVector *trans_;                                // +0x24
    kn_FMatrix *mat_;                                  // +0x28
    kn_FMatrix *gmat_[2];                              // +0x2c
    kn_Texture *texture_;                              // +0x34
    kn_AnimationWork *anmWork_;                        // +0x38
    u8 _pad0[4];
    kn_ProjectionCamera prj_cam_root_;                 // +0x40
    kn_FMatrix root_;                                  // +0x290
    kn_FMatrix specialMatrix_;                         // +0x2d0
    s32 display_polygon_num_;                          // +0x310
    s8 *display_flag_;                                 // +0x314
    void *dmaTag_[2];                                  // +0x318
    void *reserved[5];                                 // +0x320
    kn_ModelObj_Property *property_;                   // +0x334
    u8 _pad1[8];
};

struct kn_AnimationWork {  // class kn::AnimationWork size=0x24
    void *_vptr_;                                      // +0x0
    void *outer_;                                      // +0x4
    s32 type_;                                         // +0x8
    f32 frame_;                                        // +0xc
    kn_Chunk *data_;                                   // +0x10
    u32 flag_;                                         // +0x14
    f32 ratio_;                                        // +0x18
    kn_AnimationWork *next_;                           // +0x1c
    kn_AnimationWork *sync_;                           // +0x20
};

union kn_Chunk_anon_uni_chunk_h_31 {  // union kn::Chunk::__anon_uni_chunk_h_31 size=0x4
    u32 id32_do_not_use;
    u8 id8_[4];
};

union kn_Chunk_anon_uni_chunk_h_39 {  // union kn::Chunk::__anon_uni_chunk_h_39 size=0x4
    u8 size32_do_not_use[4];
    u8 size8_[4];
};

struct kn_Chunk {  // class kn::Chunk size=0x8
    kn_Chunk_anon_uni_chunk_h_31 _anon0;               // +0x0
    kn_Chunk_anon_uni_chunk_h_39 _anon4;               // +0x4
};

struct kn_ModelObj_Property {  // structure kn::ModelObj::Property size=0x10
    s32 type;                                          // +0x0
    u32 size;                                          // +0x4
    kn_ModelObj_Property *prev;                        // +0x8
    kn_ModelObj_Property *next;                        // +0xc
    u8 data[0];                                        // +0x10
};

struct kn_Texture {  // structure kn::Texture size=0x24
    s16 type;                                          // +0x0
    u16 flag;                                          // +0x2
    u32 clut_data_num;                                 // +0x4
    u32 pixel_data_num;                                // +0x8
    u32 texture_env_num;                               // +0xc
    u32 pixel_no_offset;                               // +0x10
    u32 send_packet_offset;                            // +0x14
    u32 texture_env_packet_offset;                     // +0x18
    u32 pixel_data_offset;                             // +0x1c
    u32 clut_data_offset;                              // +0x20
};

struct ALLOCATOR {  // class ALLOCATOR size=0x4
    void *_vptr_;                                      // +0x0
};

struct kn_LightParam {  // structure kn::LightParam size=0x70
    kn_FVector vecX;                                   // +0x0
    kn_FVector vecY;                                   // +0x10
    kn_FVector vecZ;                                   // +0x20
    kn_FMatrix color;                                  // +0x30
};

struct dk_BgObjPos {  // structure dk::BgObjPos size=0x68
    f32 m_pos[3];                                      // +0x0
    f32 m_rot[3];                                      // +0xc
    f32 m_scale[3];                                    // +0x18
    u32 m_bobIndex;                                    // +0x24
    u32 m_group;                                       // +0x28
    s32 motionIndex;                                   // +0x2c
    u32 motionOffset;                                  // +0x30
    u32 flag;                                          // +0x34
    f32 model_h_upper;                                 // +0x38
    f32 model_h_lower;                                 // +0x3c
    f32 model_m_upper;                                 // +0x40
    f32 model_m_lower;                                 // +0x44
    f32 model_l_upper;                                 // +0x48
    f32 model_l_lower;                                 // +0x4c
    f32 parts_h_upper;                                 // +0x50
    f32 parts_h_lower;                                 // +0x54
    f32 parts_m_upper;                                 // +0x58
    f32 parts_m_lower;                                 // +0x5c
    f32 parts_l_upper;                                 // +0x60
    f32 parts_l_lower;                                 // +0x64
};

struct kn_LightParamPosition {  // structure kn::LightParamPosition size=0x54
    f32 pos[9];                                        // +0x0
    f32 color[12];                                     // +0x24
};


// 0x003197f8 func_003197f8
void func_003197f8(u32 a0) asm("func_003197f8");
void func_003197f8(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)&(((dk_BgObj*)a0)->m_model)) + 4))))(*(u32*)&(((dk_BgObj*)a0)->m_model));
}
