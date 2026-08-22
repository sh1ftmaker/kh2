// coverage: addr=0x0011c7f8 symbol=func_0011c7f8 size=48 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:97.08;m2c:near:97.08;e3:near:91.85
#include "common/types.h"
typedef float f32; typedef double f64;
struct Axa_FVECTOR4;
struct Axa_FMATRIX44;
struct kn_FMatrix;
struct kn_Projection;
struct kn_ProjectionCamera;
struct kn_ModelObj;
struct kn_AnimationWork;
union kn_Chunk_anon_uni_chunk_h_31;
union kn_Chunk_anon_uni_chunk_h_39;
struct kn_Chunk;
struct kn_FVector;
struct kn_ModelObj_Property;
struct kn_Texture;
struct ALLOCATOR;
struct kn_Model;
struct kn_Motion;

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

struct kn_FVector {  // structure kn::FVector size=0x10
    Axa_FVECTOR4 super_FVECTOR4;                       // +0x0
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

struct kn_Model {  // class kn::Model size=0x10
    void *_vptr_;                                      // +0x0
    void *rawdata_;                                    // +0x4
    kn_ModelObj *obj_;                                 // +0x8
    u32 flag_;                                         // +0xc
};

struct kn_Motion {  // class kn::Motion size=0x18
    void *_vptr_;                                      // +0x0
    void *rawdata_;                                    // +0x4
    kn_FMatrix *grot_;                                 // +0x8
    kn_FMatrix *lmatrix_;                              // +0xc
    kn_FMatrix *gmatrix_;                              // +0x10
    kn_FVector *gscale_;                               // +0x14
};


// 0x0011c7f8 func_0011c7f8
void func_0011c7f8(u32 a0, u32 a1) asm("func_0011c7f8");
void func_0011c7f8(u32 a0, u32 a1) {
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)&(((kn_ModelObj*)a0)->model_)) + 0x40))))(*(u32*)&(((kn_ModelObj*)a0)->model_), *(u32*)((a0 + 0x104)), a1);
}
