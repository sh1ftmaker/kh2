// coverage: addr=0x001fb698 symbol=func_001fb698 size=36 class=straight source=corpus status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;lift:near:76.56;ghidra:near:76.56
# 1 "/data/agent-tom/kh2/corpus/kh1/src/ppp/keProg/pppKeLnsFls.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/kh1/src/ppp/keProg/pppKeLnsFls.c"
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp/pppKeLns.h" 1



# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common.h" 1



# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/include_asm.h" 1
# 5 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common.h" 2

typedef char s8;
typedef short s16;
typedef int s32;
typedef long s64;

typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;

typedef union {
    vs8 s8;
    vs16 s16;
    vs32 s32;
    vs64 s64;
    vu8 u8;
    vu16 u16;
    vu32 u32;
    vu64 u64;
} _VX;

typedef float f32;
# 56 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common.h"
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common_data.h" 1
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common.h" 1
# 2 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common_data.h" 2
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libvu0.h" 1
# 23 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libvu0.h"
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eetypes.h" 1
# 25 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eetypes.h"
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef int long128 __attribute__ ((mode (TI)));
typedef unsigned int u_long128 __attribute__ ((mode (TI)));
# 24 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libvu0.h" 2






typedef int qword[4] __attribute__ ((aligned(16)));
typedef int sceVu0IVECTOR[4] __attribute__((aligned (16)));
typedef float sceVu0FVECTOR[4] __attribute__((aligned (16)));
typedef float sceVu0FMATRIX[4][4] __attribute__((aligned (16)));






void sceVu0CopyVector(sceVu0FVECTOR v0, sceVu0FVECTOR v1);





void sceVu0CopyVectorXYZ(sceVu0FVECTOR v0, sceVu0FVECTOR v1);




void sceVu0FTOI0Vector(sceVu0IVECTOR v0, sceVu0FVECTOR v1);




void sceVu0FTOI4Vector(sceVu0IVECTOR v0, sceVu0FVECTOR v1);




void sceVu0ITOF0Vector(sceVu0FVECTOR v0, sceVu0IVECTOR v1);




void sceVu0ITOF4Vector(sceVu0FVECTOR v0, sceVu0IVECTOR v1);





void sceVu0ScaleVector(sceVu0FVECTOR v0, sceVu0FVECTOR v1, float s);






void sceVu0ScaleVectorXYZ(sceVu0FVECTOR v0, sceVu0FVECTOR v1, float s);





void sceVu0AddVector(sceVu0FVECTOR v0, sceVu0FVECTOR v1, sceVu0FVECTOR v2);





void sceVu0SubVector(sceVu0FVECTOR v0, sceVu0FVECTOR v1, sceVu0FVECTOR v2);





void sceVu0MulVector(sceVu0FVECTOR v0, sceVu0FVECTOR v1, sceVu0FVECTOR v2);






void sceVu0InterVector(sceVu0FVECTOR v0, sceVu0FVECTOR v1, sceVu0FVECTOR v2, float r);







void sceVu0InterVectorXYZ(sceVu0FVECTOR v0, sceVu0FVECTOR v1, sceVu0FVECTOR v2, float r);





void sceVu0DivVector(sceVu0FVECTOR v0, sceVu0FVECTOR v1, float q);






void sceVu0DivVectorXYZ(sceVu0FVECTOR v0, sceVu0FVECTOR v1, float q);





float sceVu0InnerProduct(sceVu0FVECTOR v0, sceVu0FVECTOR v1);





void sceVu0OuterProduct(sceVu0FVECTOR v0, sceVu0FVECTOR v1, sceVu0FVECTOR v2);




void sceVu0Normalize(sceVu0FVECTOR v0, sceVu0FVECTOR v1);





void sceVu0ApplyMatrix(sceVu0FVECTOR v0, sceVu0FMATRIX m, sceVu0FVECTOR v1);



void sceVu0UnitMatrix(sceVu0FMATRIX m);




void sceVu0CopyMatrix(sceVu0FMATRIX m0, sceVu0FMATRIX m1);




void sceVu0TransposeMatrix(sceVu0FMATRIX m0, sceVu0FMATRIX m1);





void sceVu0MulMatrix(sceVu0FMATRIX m0, sceVu0FMATRIX m1, sceVu0FMATRIX m2);




void sceVu0InversMatrix(sceVu0FMATRIX m0, sceVu0FMATRIX m1);



static void _sceVu0ecossin(f32 t);





void sceVu0RotMatrixX(sceVu0FMATRIX m0, sceVu0FMATRIX m1, float rx);





void sceVu0RotMatrixY(sceVu0FMATRIX m0, sceVu0FMATRIX m1, float ry);





void sceVu0RotMatrixZ(sceVu0FMATRIX m0, sceVu0FMATRIX m1, float rz);






void sceVu0RotMatrix(sceVu0FMATRIX m0, sceVu0FMATRIX m1, sceVu0FVECTOR rot);





void sceVu0TransMatrix(sceVu0FMATRIX m0, sceVu0FMATRIX m1, sceVu0FVECTOR tv);






void sceVu0CameraMatrix(sceVu0FMATRIX m, sceVu0FVECTOR p, sceVu0FVECTOR zd, sceVu0FVECTOR yd);






void sceVu0NormalLightMatrix(sceVu0FMATRIX m, sceVu0FVECTOR l0, sceVu0FVECTOR l1, sceVu0FVECTOR l2);







void sceVu0LightColorMatrix(sceVu0FMATRIX m, sceVu0FVECTOR c0,
                                                sceVu0FVECTOR c1, sceVu0FVECTOR c2, sceVu0FVECTOR a);
# 244 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libvu0.h"
void sceVu0ViewScreenMatrix(sceVu0FMATRIX m, float scrz, float ax, float ay,
        float cx, float cy, float zmin, float zmax, float nearz, float farz);
# 254 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libvu0.h"
void sceVu0DropShadowMatrix(sceVu0FMATRIX m,
                                sceVu0FVECTOR lp, float a, float b, float c, int mode);
# 264 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libvu0.h"
int sceVu0ClipAll(sceVu0FVECTOR minv, sceVu0FVECTOR maxv, sceVu0FMATRIX ms, sceVu0FVECTOR *vm, int n);






void sceVu0ClampVector(sceVu0FVECTOR v0, sceVu0FVECTOR v1, float min, float max);




int sceVu0ClipScreen(sceVu0FVECTOR v0);






int sceVu0ClipScreen3(sceVu0FVECTOR v0, sceVu0FVECTOR v1, sceVu0FVECTOR v2);







void sceVu0RotTransPersN(sceVu0IVECTOR *v0, sceVu0FMATRIX m0, sceVu0FVECTOR *v1, int n, int mode);






void sceVu0RotTransPers(sceVu0IVECTOR v0, sceVu0FMATRIX m0, sceVu0FVECTOR v1, int mode);


void sceVpu0Reset(void);
# 3 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common_data.h" 2

typedef struct Unk150000 {
               char unk_00[0x2];
               s16 unk_02;
} Unk150000;

typedef struct Unk3010F8 {
                char unk_000[0x36];
                u8 unk_036;
                char unk_037[0x457];
                u8 unk_48E[3];
                u8 unk_491;
                u8 unk_492[3];
} Unk3010F8;

typedef struct XGoblin {
               u16 unk_00;
               u16 unk_02;
               s32 unk_04;
               struct XGoblin* unk_08;
               u32 (*unk_0C)(struct XGoblin*);
} XGoblin;

extern _VX D_002C1EB8;

extern sceVu0FMATRIX D_002C1E20;
extern u32 D_002C1EA8;


extern Unk3010F8* D_003010F8;
# 57 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common.h" 2
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common_funcs.h" 1


void func_0011EDD0(s32*, s32*, s32, s32);
s32 func_00120590(char*, s32, s32 (*)(void), s32);
void* func_0011ED30(s32, s32 (*func)(void));
s32 func_00155ED8(s32, s32);
s32 func_00120438(const char* fileName, void* dst);
void func_001208B8();
# 58 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common.h" 2
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common_math.h" 1





f32 cosf(f32);
f32 atan2f(f32, f32);


static inline f32 _sqrtf(f32 arg);

# 59 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/common.h" 2
# 5 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp/pppKeLns.h" 2
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp.h" 1




# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp/pppEnv.h" 1

# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/pppfunc.h" 1





typedef f32 FMATRIX[4][4];

typedef struct {
    s32 time;
} pppCDT;

typedef struct {
    s16 x, y, z;
} pppSVECTOR;

typedef struct {
    f32 x, y, z;
} pppFVECTOR;

typedef struct {
    s32 x, y, z;
} pppIVECTOR;

typedef struct {
    s16 r, g, b, a;
} pppHCVECTOR;

typedef struct {
    u8 r, g, b, a;
} pppCVECTOR;

typedef struct {
               const char* progName;
               void* calcFunc;
               void* dektFunc;
               void* drawFunc;
               void* iniFunc;
               void* staFunc;
               void* endFunc;
               void* conFunc;
               void* con2Func;
               void* desFunc;
} pppProg;

typedef struct {
               s32 time;
               char dt[0];
} pppCtrlData;

typedef struct {
               struct pppProg* prog;
               u16 dtbytes;
               u16 ctrldtn;
               pppCtrlData* ctrldt;
               s32* useVal;
} pppCtrlTable;

typedef struct _pppPData {
               struct _pppPData* next;
               u64* cvoff;
               u32 flag;
               u32 status;
               s32 startFrameInit;
               s32 totalFrame;
               s32 loopFrame0;
               s32 loopFrame1;
               s32 valbytes;
               s16 prio;
               s16 ctrlTablen;
               pppCtrlTable ctrlTable[0];
} pppPData;

typedef struct {
               pppPData* pdt;
               struct _pppPObject* pobj;
               s32 startFrame;
               u16 pobjn;
               u8 pdtno;
               u8 cdummy[1];
} pppPDataVal;

typedef struct _pppPObject {
               struct _pppPObject* next;
               struct _pppPObject* ppobj;
               pppPDataVal* pdtval;
               s32 time;
               FMATRIX cmat;
               FMATRIX dmat;
               pppSVECTOR* lpvert;
               pppSVECTOR* lpnorm;
               pppCtrlData** lpcdt;
               u8 appearf;
               u8 loop_in;
               u8 loop_start0;
               u8 dummy[1];
               char val[0];
} pppPObject;

typedef struct {
              s32 pdtn;
              s32 valoff;
} pppParamPObj;
# 3 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp/pppEnv.h" 2

typedef struct {
               s32 flag;
               s32 pa;
               s32 va;
               s32 na;
               u16 pc;
               u16 vc;
               u16 nc;
               u8 alpha;
               u8 alphaFix;
               u16 res[2];
               s32 vna;
} OMD_H;

typedef struct _pppEMCB {
               struct _pppEMCB* next;
               struct _pppEMCB* prev;
               s32 owner;
               s32 wdummy;
} pppEMCB;

typedef struct {
               pppEMCB* lastFreeHeap;
               pppEMCB* effectHeapTop;
               pppEMCB* effectHeapBottom;
               s32 allocSize;
} pppMemMng;

typedef struct {
               s32 nvert;
               s32 nnorm;
               s32 npoly;
               s32 tex0l;
               s32 tex0h;
               pppSVECTOR* vert;
               pppSVECTOR* norm;
               OMD_H* omd;
               s32 nPacketSize;
} pppModelSt;

typedef struct {
              u_long128* shape;
              s32 nPacketSize;
} pppShapeSt;

typedef struct {
              u16 modelNo;
              u16 indexN;
              s16* index;
} pppVsfSt;

typedef struct {
               pppMemMng heapMng;
               pppModelSt* lpModel;
               pppShapeSt* lpShape;
               pppVsfSt* lpVsf;
} pppEnvSt;

extern pppEnvSt g_Env;
extern pppEnvSt* ppvEnv;
# 6 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp.h" 2


typedef struct {
               char* dpd;
               u32 dpdId;
               s8 blockStart;
               s8 blockNum;
               s8 boolUse;
               s8 res;
} _VRAMCACHE;

typedef struct {
                _VRAMCACHE vramCacheTex[10];
                _VRAMCACHE vramCacheClut[6];
} _VRAMCACHE_MNG;

typedef struct _pppPEtcData {
                f32 afBbox[32];
                f32 vecOffset[4];
                s32 ivecAngle[4];
                f32 vecScale[4];
                u8 abUseTexture[16];
                u8 abUseShape[16];
                u8 abUseRsd[16];
                u8 abUseVsf[16];
                s32 nWorkMemSize;
                s32 nPacketMemSize;
                u8 viewClipStop;
                u8 chrScale;
                u8 bindPosOnly;
                u8 nonAmbient;
                s16 seNo;
                s16 seVolAdd;
                f32 seWait;
                s32 boneNo;
                s32 wait;
                s32 res;
} pppPEtcData;

typedef struct {
               s32 unk_00;
               f32 unk_04;
               f32 unk_08;
               f32 unk_0C;
               f32 unk_10;
               f32 unk_14;
               f32 unk_18;
               f32 unk_1C;
               f32 unk_20;
               f32 unk_24;
               f32 unk_28;
               f32 unk_2C;
               f32 colorR;
               f32 colorG;
               f32 colorB;
               f32 colorA;
               f32 scaleX;
               f32 scaleY;
               f32 unk_48;
               f32 unk_4C;
               char unk_50[0x24];
               pppPObject* unk_74;
               char unk_78[0x8];
               s32 unk_80;
               char unk_84[0x2];
               s16 usef;
               char* pchDpd;
               pppPEtcData* pEtc;
               char unk_90;
               u8 unk_91;
               u8 unk_92;
               char unk_93[0x5];
               s32 unk_98;
               void* unk_9C;
               char unk_A0[4];
               s16 texpStart;
               s16 clutpStart;
               char unk_A8[0x8];
               u8 drawPriority;
               u8 stop;
               u8 followCam;
               u8 unk_B3;
               u8 unk_B4;
               u8 unk_B5;
               u8 unk_B6;
               u8 unk_B7;
               u64 unk_B8;
} ppvmng;

extern sceVu0FVECTOR ppvParScl;



extern s32 ppvDbgTemp;

typedef void (*pppDrawFunc)(pppPObject* pobj, s32 param);

extern ppvmng* ppvMng;
extern pppPObject ppvPObj;
extern sceVu0FVECTOR ppvEye;
extern sceVu0FVECTOR ppvAt;
extern sceVu0FMATRIX ppvWorldMatrix;
extern sceVu0FMATRIX ppvWorldMatrixWood;
extern sceVu0FMATRIX ppvScreenMatrix;
extern sceVu0FMATRIX ppvSWMatrix;
extern sceVu0FMATRIX ppvSWMatrixWood;
extern sceVu0FMATRIX ppvUnitMatrix;
extern sceVu0FVECTOR ppvZeroVector;
extern s32 ppvUserStopPartF;
extern pppDrawFunc* ppvHookFuncTbl;
extern s32 ppvEmptyLoop;
extern sceVu0FMATRIX g_matUnit;
extern sceVu0FMATRIX KeDMat;
extern sceVu0FMATRIX KeMatPht;
# 6 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp/pppKeLns.h" 2

typedef struct {
               FMATRIX mat;
               f32 zMat[3][4];
               f32 vec[2];
               f32 pers;
               f32 vPow;
               f32 lcPos[3];
               u8 idx;
               u8 mbk;
               u8 r;
               u8 md;
               sceVu0FVECTOR lVec;
               f32 _p2[1];
               f32 len2;
               f32 pow;
               f32 preHidePow;
} KeLnsLp;

typedef struct {
              s16 cnt;
              u8 seqIdx;
              char flag[1];
} KeLnsFlr;

typedef struct {
              KeLnsFlr* lp;
              pppShapeSt* shp;
              KeLnsFlr flr;
} KeLnsArnd;

typedef struct {
              KeLnsFlr* lp;
              pppShapeSt* shp;
              KeLnsFlr flr;
} KeLnsCrn;

typedef struct {
              KeLnsFlr* lp;
              pppShapeSt* shp;
              KeLnsFlr flr;
} KeLnsFls;

typedef struct {
              KeLnsFlr flr;
              f32 rdPr;
} KeLnsClmFlr;

typedef struct {
               KeLnsLp* lp;
               pppShapeSt* shp;
               u8 num;
               u8 flag;
               s16 betw;
               s16 stOfs;
               u8 flagType;
               char _p0[1];
               KeLnsClmFlr flr[1];
} KeLnsClm;

void KeLnsLp_Init(KeLnsLp*);
void KeLnsClm_Init(KeLnsClm*);
void KeLnsArnd_Init(KeLnsArnd*);
void KeLnsCrn_Init(KeLnsCrn*);
void func_0021fbc0(KeLnsFls*);
# 2 "/data/agent-tom/kh2/corpus/kh1/src/ppp/keProg/pppKeLnsFls.c" 2

;

void pppKeLnsFlsCon(pppPObject* pobj, pppCtrlTable* ctbl);


;


void func_001fb698_impl(pppPObject* pobj, pppCtrlTable* ctbl) asm("func_001fb698");
void func_001fb698_impl(pppPObject* pobj, pppCtrlTable* ctbl) {
    KeLnsFls* fls = (KeLnsFls*)&pobj->val[ctbl->useVal[0]];

    func_0021fbc0(fls);
}
