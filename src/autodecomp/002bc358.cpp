// coverage: addr=0x002bc358 symbol=_ZN2Tz9MenuSound14StopBgSeHandleEz size=64 class=branchy source=corpus status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.69;ghidra:near:93.24;lift:near:44.69
# 1 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
# 1 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/include/include_asm.h" 1
# 2 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c" 2

# 1 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/include/type.h" 1



typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short u16;
typedef signed short s16;

typedef unsigned int u32;
typedef signed int s32;

typedef unsigned long long u64;
typedef signed long long s64;

typedef float f32;
typedef double f64;

typedef s32 intptr_t;
typedef u32 uintptr_t;

typedef u32 size_t;
# 4 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c" 2

typedef struct Resrc {
    u8 data[0x28];
    u32 flags;
} Resrc;

extern Resrc* func_002bbda0();

u32 func_00268ce0(float* first, float* second, float* output, float* third);

typedef struct { f32 x, y, z; } SVec3;
extern u32 func_00269190(Resrc* param_1, u32 param_2, float param_3, u32 param_4);
extern u32 func_002694f0(u32 param_1, u8 param_2, u32 param_3, u32 param_4);
extern u32 func_00269820(u16 *param_1, s32 param_2, s64 param_3, s64 param_4,
                         s32 param_5, s32 param_6, float param_7);
extern u32 func_002699d0(u32 *param_1, u32 param_2, u32 param_3, u32 param_4,
                         u32 param_5, u32 param_6, float param_7);
extern u32 func_002bbf68(void* resource, s32 enabled);
extern s32 func_0026bc90(u8 *arg0, s32 arg1);

extern u8 *func_001452b0(s32 arg0);

extern void func_0026c680(float *param_1);






typedef struct SceneVecBits
{
    u64 xy;
    float z;
} __attribute__((packed)) SceneVecBits;

extern SceneVecBits D_0063b1a0[];
extern float D_0063b1a8[];
extern SceneVecBits D_0063B120[];
extern f32 D_0063B128[];
extern SceneVecBits D_0063B130[];
extern f32 D_0063B138[];
extern SceneVecBits D_0063B140[];
extern f32 D_0063B148[];
extern SceneVecBits D_0063B150[];
extern f32 D_0063B158[];
extern float RwV3dNormalize(float *dst, const float *src);
extern u32 func_0044dcd8(float param_1);
extern u32 func_0044b8d8(u32 value);
extern float func_0044e7d8(u32 value);
extern float fGpffff8428;



typedef struct RwV3d
{
    f32 x;
    f32 y;
    f32 z;
} RwV3d;




extern void func_0026c960(float param_1, float *param_2, float *param_3, float *param_4, float *param_5, float *param_6, float *param_7);
extern f32 RwV3dLength(const RwV3d *vector);




extern f32 D_007614c0;
extern float func_0026cca0(float param_1, float param_2, float *param_3, float *param_4, float *param_5, float *param_6, float *param_7);




extern u16 D_00764580;
extern void func_004b15d0(void);

extern u8 *func_00145270();
extern void func_0026c740(s32 object);
extern float func_0026cdb0(char *param_1);
extern s32 func_0026da30(u16 arg0, s32 arg1);
extern s32 func_0017b990(s32 arg0, s32 arg1, s32 arg2);
extern void func_0043f9c8(void *dst, s32 value, s32 size);
extern f32 func_003e40b0();
extern s64 D_0063B110;
extern f32 D_0063B118;
extern f32 fGpffff8048;
extern void func_003e0870(void *dst, void *src, f32 angle, s32 mode);
extern u8 *func_003e4320(void *dst, void *src, void *mat);
extern s32 func_003e05d0(void *arg0);
extern s32 func_00168ec0();
extern s32 func_00479dd0(u32 arg0, u16 arg1, s16 arg2);
extern void func_0047a0e0(u32 arg0, u16 arg1, f32 arg2);
extern s32 func_00479940(u32 arg0, u16 arg1, s16 arg2, u16 arg3, u16 arg4);
extern void func_00479e60(u32 arg0, u16 arg1, f32 arg2);
extern u8 *func_0047a250(u32 arg0);
extern void func_004b14f0(u32 arg0, void *arg1);
extern void func_0044ea90(const void *msg, u32 id);
extern s32 func_00451fc0(s32 arg0, char *arg1, s32 arg2, s32 arg3, s32 arg4,
                         void (*arg5)(u8 *), void (*arg6)(u8 *), u8 *arg7);
extern void func_0046d730(const void *msg, u32 line);
extern void func_00440b68(const void *msg, u32 value);
extern u8 *(*D_008873F4[])(s32, s32, s32);
extern u32 *jtbl_008873E8[];
extern s32 func_004577d0(void *arg0, f32 arg1);
extern s32 func_00457120(void);
extern u8 *func_003e0f80(void);
extern void func_003e0c90(void *dst, void *src, s32 mode);
extern s32 func_0026d400(void *arg0);
extern void func_003e9df0(void *arg0);
extern void func_003e9cb0(void *arg0, void *arg1, s32 arg2);
extern void func_003e0f40(void *arg0);
extern void func_00146f50(void *arg0, void *arg1, void *arg2);
extern void func_0026bfc0(f32 *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 *arg1);
extern u8 *func_00147620(u32 arg0);
extern f32 func_0044b610(f32 arg0);
extern f32 func_0044b938(f32 arg0);
extern f32 func_0044b950(f32 arg0, f32 arg1);
extern u32 PTR_DAT_00762ea0;
extern u32 D_005F08B0[];
extern u8 D_0063B090[];
extern u8 D_0063B0A0[];
extern u8 D_0063B0D0[];
extern u8 D_0063B080[];
extern u8 D_0063B088[];
extern s64 D_0063B0F0;
extern f32 D_0063B0F8;
extern s64 D_0063B100;
extern f32 D_0063B108;
extern s64 D_0063B0B8[];
extern f32 D_0063B0C0[];
extern void func_00268a70(u8 *arg0);
extern void func_00268ad0(u8 *arg0);


void func_00268b20(u32 arg0);



u32 func_00268bd0(Resrc* resource, s32 enabled);





u32 func_00268c20(u32 resTypeId, s32 enabled);





u8 func_00268cb0(Resrc* resource);

# 225 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
u32 func_00268ce0(float *first, float *second, float *output, float *third);



u32 func_00268e30(float* first, float* second, float* third);





s32 func_00268e60(u32 unk, u8 *arg1, f32 fparg0);





s32 func_00268f20(u32 arg0, SVec3 *arg1, u32 arg2, u8 arg3);



s32 func_00269000(u8 *arg0, u8 *arg1, u8 *arg2, f32 fparg0, f32 fparg1,
                  f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, s32 arg3,
                  s8 arg4);








s32 func_002690b0(u32 arg0, u8 *arg1, u8 *arg2, f32 fparg0, f32 fparg1,
                  f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, s32 arg3,
                  s8 arg4);



u32 func_00269190(Resrc *param_1, u32 param_2, float param_3, u32 param_4);




u32 func_002692d0(u32 param_1, u32 param_2, float param_3, u32 param_4);





s32 func_00269340(u32 arg0, SVec3 *arg1, u32 arg2, u8 arg3);



s32 func_00269440(u32 unk, u8 *arg1, s32 arg2);








u32 func_002694f0(u32 param_1, u8 param_2, u32 param_3, u32 param_4);



u32 func_00269620(u32 param_1, u8 param_2, u32 param_3, u32 param_4);





s32 func_00269690(u32 unk, f32 fparg0, s32 arg1);

# 576 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
s32 func_00269740(void);



u32 func_00269820(u16 *arg0, s32 arg1, s64 arg2, s64 arg3, s32 arg4, s32 arg5,
                  float fparg0);


u32 func_002699d0(u32 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, f32 fparg0);



void func_00269a90(u32 param_1, short param_2, short param_3, short param_4,
                   short param_5);





u32 func_002bbf68(void* resource, s32 enabled);





s32 func_00269c20(u32 unk, s32 arg1);

# 753 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
;






;





;
# 775 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
;


s32 func_0026bc10(u32 arg0, u32 arg1);



s32 func_0026bc90(u8 *arg0, s32 arg1);



s32 func_0026bd50(u32 unk, s32 arg1);





s32 func_0026bda0(u32 arg0, s8 arg1, s8 arg2, s16 arg3, s16 arg4, s8 arg5);



s32 func_0026be60(void);



void func_0026bf20(void);




void func_0026bf70(u32 arg0);

# 978 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
;
# 989 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
;







;



#pragma opt_loop_invariants on


void func_0026c680(float *param_1);

#pragma opt_loop_invariants off




void func_0026c740(s32 object);







#pragma opt_loop_invariants on


void func_0026c770(float *param_1, float *param_2, float *param_3);

#pragma opt_loop_invariants off
# 1080 "/data/agent-tom/kh2/corpus/Persona4-Decompilation/src/Scene/mt_sceneFunc.c"
void func_0026c860(const float *param_1, float *param_2);





void func_0026c960(float t, float *x, float *y, float *z, float *outX,
                   float *outY, float *outZ);




#pragma opt_lifetimes on


void func_0026ca10(char *param_2, float param_1, float *param_3);

#pragma opt_lifetimes off




float func_0026cba0(u32 arg0, float param_2, float param_3);


float func_0026cca0(float param_1, float param_2, float *param_3, float *param_4,
                    float *param_5, float *param_6, float *param_7);





float func_0026cdb0(char *param_1);





void func_0026d810(void);



s32 twin__ZN2Tz9MenuSound14StopBgSeHandleEz(u32 unk, s32 arg1) asm("_ZN2Tz9MenuSound14StopBgSeHandleEz");
s32 twin__ZN2Tz9MenuSound14StopBgSeHandleEz(u32 unk, s32 arg1) {
    u8 *temp_2 = (u8*)func_002bbda0();

    if (temp_2 != ((void*)0)) {
        return func_002bbf68(temp_2, arg1);
    }
    return 0;
}
