// coverage: addr=0x001e6b00 symbol=func_001e6b00 size=144 class=float source=corpus status=exact fuzzy=100.0
// coverage-alternatives: lift:near:76.67;e3:near:21.07;ghidra:near:7.32;m2c:near:0.0
# 1 "/data/agent-tom/kh2/corpus/kh1/src/ppp/pppMngr.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/kh1/src/ppp/pppMngr.c"
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
# 2 "/data/agent-tom/kh2/corpus/kh1/src/ppp/pppMngr.c" 2
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
# 3 "/data/agent-tom/kh2/corpus/kh1/src/ppp/pppMngr.c" 2
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp/draw.h" 1

# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libdma.h" 1 3 4
# 28 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libdma.h" 3 4
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 1 3 4
# 24 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
# 1 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eekernel.h" 1 3 4
# 48 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eekernel.h" 3 4
int EIntr(void);
int DIntr(void);
# 140 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eekernel.h" 3 4
struct ThreadParam {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    u_int attr;
    u_int option;
    int waitType;
    int waitId;
    int wakeupCount;
};

struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    u_int attr;
    u_int option;
};

extern void *_gp;





int EnableCache(int);
int DisableCache(int);
void FlushCache(int);
void iFlushCache(int);
void SyncDCache(void *, void *);
void iSyncDCache(void *, void *);
void InvalidDCache(void *, void *);
void iInvalidDCache(void *, void *);
u_int GetCop0(int);
u_int iGetCop0(int);
u_int CpuConfig(u_int);





int InitThread(void);
int CreateThread(struct ThreadParam *);
int DeleteThread(int);
int StartThread(int, void *arg);
void ExitThread(void);
void ExitDeleteThread(void);
int TerminateThread(int);
int iTerminateThread(int);
int ChangeThreadPriority(int, int);
int iChangeThreadPriority(int, int);
int RotateThreadReadyQueue(int);
int iRotateThreadReadyQueue(int);
int ReleaseWaitThread(int);
int iReleaseWaitThread(int);
int GetThreadId(void);
int ReferThreadStatus(int, struct ThreadParam *);
int iReferThreadStatus(int, struct ThreadParam *);
int SleepThread(void);
int WakeupThread(int);
int iWakeupThread(int);
int CancelWakeupThread(int);
int iCancelWakeupThread(int);
int SuspendThread(int);
int iSuspendThread(int);
int ResumeThread(int);
int iResumeThread(int);
void *EndOfHeap(void);





int CreateSema(struct SemaParam *);
int DeleteSema(int);
int SignalSema(int);
int iSignalSema(int);
int WaitSema(int);
int PollSema(int);
int iPollSema(int);
int ReferSemaStatus(int, struct SemaParam *);
int iReferSemaStatus(int, struct SemaParam *);





void SetVSyncCount(u_int *);
void VSync(void);





int EnableIntc(int);
int iEnableIntc(int);
int DisableIntc(int);
int iDisableIntc(int);
int EnableDmac(int);
int iEnableDmac(int);
int DisableDmac(int);
int iDisableDmac(int);
int SetAlarm(u_short, void (*)(int, u_short, void *), void *);
int iSetAlarm(u_short, void (*)(int, u_short, void *), void *);
int ReleaseAlarm(int);
int iReleaseAlarm(int);

int AddIntcHandler(int, int (*)(int), int);
int AddIntcHandler2(int, int (*)(int, void *, void *), int, void *);
int RemoveIntcHandler(int, int);
int AddDmacHandler(int, int (*)(int), int);
int AddDmacHandler2(int, int (*)(int, void *, void *), int, void *);
int RemoveDmacHandler(int, int);

int AddSbusIntcHandler(int, void (*)(int ca));
int RemoveSbusIntcHandler(int);
int Interrupt2Iop(int);

void *SetDebugHandler(
        int,
        void (*h)(u_int, u_int, u_int, u_int, u_int, u_long128 *)
);
void InitTLBFunctions(void);
int ExpandScratchPad(u_int);





void LoadExecPS2(const char *, int, char *[]);
void Exit(int n);
void ResetEE(u_int n);
int ExecPS2(void *, void *, int, char *[]);
void SetGsCrt(short, short, short);
int MachineType(void);
int iMachineType(void);
void PSMode(void);
int GetMemorySize(void);
int Deci2Call(int, u_int *);
u_long GsGetIMR(void);
u_long GsPutIMR(u_long);
void scePrintf(const char *fmt, ...);
# 25 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 2 3 4
# 48 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned COUNT: 16;
        unsigned p0 : 16;
} tT_COUNT;
# 93 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned CLKS: 2;
        unsigned GATE: 1;
        unsigned GATS: 1;
        unsigned GATM: 2;
        unsigned ZRET: 1;
        unsigned CUE : 1;
        unsigned CMPE: 1;
        unsigned OVFE: 1;
        unsigned EQUF: 1;
        unsigned OVFF: 1;
        unsigned p0 :20;
} tT_MODE;
# 127 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned COMP:16;
        unsigned p0 :16;
} tT_COMP;
# 152 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned HOLD:16;
        unsigned p0 :16;
} tT_HOLD;
# 181 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned OPTION:28;
        unsigned CODE : 4;
} tIPU_CMD_write;
# 216 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned DATA:32;
        unsigned p0 :31;
        unsigned BUSY: 1;
} tIPU_CMD_read;
# 252 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned BSTOP:32;
        unsigned p0 :31;
        unsigned BUSY : 1;
} tIPU_TOP;
# 304 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned IFC : 4;
        unsigned OFC : 4;
        unsigned CBP : 6;
        unsigned ECD : 1;
        unsigned SCD : 1;
        unsigned IDP : 2;
        unsigned p0 : 2;
        unsigned AS : 1;
        unsigned IVF : 1;
        unsigned QST : 1;
        unsigned MP1 : 1;
        unsigned PCT : 3;
        unsigned p1 : 3;
        unsigned RST : 1;
        unsigned BUSY: 1;
} tIPU_CTRL;
# 347 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned BP : 7;
        unsigned p0 : 1;
        unsigned IFC: 4;
        unsigned p1 : 4;
        unsigned FP : 2;
        unsigned p2 :14;
} tIPU_BP;
# 381 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned RST: 1;
        unsigned p0 : 2;
        unsigned PSE: 1;
        unsigned p1 :28;
} tGIF_CTRL;
# 411 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned M3R: 1;
        unsigned p0 : 1;
        unsigned IMT: 1;
        unsigned p1 :29;
} tGIF_MODE;
# 461 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned M3R : 1;
        unsigned M3P : 1;
        unsigned IMT : 1;
        unsigned PSE : 1;
        unsigned p0 : 1;
        unsigned IP3 : 1;
        unsigned P3Q : 1;
        unsigned P2Q : 1;
        unsigned P1Q : 1;
        unsigned OPH : 1;
        unsigned APATH: 2;
        unsigned DIR : 1;
        unsigned p1 :11;
        unsigned FQC : 5;
        unsigned p2 : 3;
} tGIF_STAT;
# 503 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned NLOOP:15;
        unsigned EOP : 1;
        unsigned tag :16;
} tGIF_TAG0;
# 537 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned tag :14;
        unsigned PRE : 1;
        unsigned PRIM:11;
        unsigned FLG : 2;
        unsigned NREG: 4;
} tGIF_TAG1;
# 565 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned tag :32;
} tGIF_TAG2;
# 589 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned tag :32;
} tGIF_TAG3;
# 617 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned LOOPCNT:15;
        unsigned p0 : 1;
        unsigned REGCNT : 4;
        unsigned VUADDR :10;
        unsigned p1 : 2;
} tGIF_CNT;
# 645 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned P3CNT:15;
        unsigned p0 :17;
} tGIF_P3CNT;
# 672 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned LOOPCNT:15;
        unsigned EOP : 1;
        unsigned p0 :16;
} tGIF_P3TAG;
# 719 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned VPS: 2;
        unsigned VEW: 1;
        unsigned p0 : 3;
        unsigned MRK: 1;
        unsigned p1 : 1;
        unsigned VSS: 1;
        unsigned VFS: 1;
        unsigned VIS: 1;
        unsigned INT: 1;
        unsigned ERO: 1;
        unsigned ER1: 1;
        unsigned p2 :10;
        unsigned FQC: 4;
        unsigned p3 : 4;

} tVIF0_STAT;
# 764 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned RST: 1;
        unsigned FBK: 1;
        unsigned STP: 1;
        unsigned STC: 1;
        unsigned p0 :28;
} tVIF0_FBRST;
# 797 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned MII: 1;
        unsigned ME0: 1;
        unsigned ME1: 1;
        unsigned p0 :29;
} tVIF0_ERR;
# 826 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned MARK:16;
        unsigned p0 :16;
} tVIF_MARK;
# 854 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned CL: 8;
        unsigned WL: 8;
        unsigned p0:16;
} tVIF_CYCLE;
# 881 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned MOD: 2;
        unsigned p0 :30;
} tVIF_MODE;
# 907 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned num: 8;
        unsigned p0 :24;
} tVIF0_NUM;
# 963 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned m0 :2;
        unsigned m1 :2;
        unsigned m2 :2;
        unsigned m3 :2;
        unsigned m4 :2;
        unsigned m5 :2;
        unsigned m6 :2;
        unsigned m7 :2;
        unsigned m8 :2;
        unsigned m9 :2;
        unsigned m10:2;
        unsigned m11:2;
        unsigned m12:2;
        unsigned m13:2;
        unsigned m14:2;
        unsigned m15:2;
} tVIF_MASK;
# 1007 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned immediate :16;
        unsigned num : 8;
        unsigned CMD : 8;
} tVIF_CODE;
# 1034 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ITOPS :10;
        unsigned p0 :22;
} tVIF_ITOPS;
# 1060 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ITOP :10;
        unsigned p0 :22;
} tVIF_ITOP;
# 1086 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned R0 :32;
} tVIF_R0;
# 1111 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned R1 :32;
} tVIF_R1;
# 1136 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned R2 :32;
} tVIF_R2;
# 1161 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned R3 :32;
} tVIF_R3;
# 1186 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned C0 :32;
} tVIF_C0;
# 1211 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned C1 :32;
} tVIF_C1;
# 1236 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned C2 :32;
} tVIF_C2;
# 1261 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned C3 :32;
} tVIF_C3;
# 1310 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned VPS: 2;
        unsigned VEW: 1;
        unsigned VGW: 1;
        unsigned p0 : 2;
        unsigned MRK: 1;
        unsigned DBF: 1;
        unsigned VSS: 1;
        unsigned VFS: 1;
        unsigned VIS: 1;
        unsigned INT: 1;
        unsigned ERO: 1;
        unsigned ER1: 1;
        unsigned p1 : 9;
        unsigned FDR: 1;
        unsigned FQC: 5;
        unsigned p2 : 3;

} tVIF1_STAT;
# 1357 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned RST: 1;
        unsigned FBK: 1;
        unsigned STP: 1;
        unsigned STC: 1;
        unsigned p0 :28;
} tVIF1_FBRST;
# 1389 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned MII: 1;
        unsigned ME0: 1;
        unsigned ME1: 1;
        unsigned p0 :29;
} tVIF1_ERR;
# 1417 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned num: 8;
        unsigned p0 :24;
} tVIF1_NUM;
# 1443 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned BASE:10;
        unsigned p0 :22;
} tVIF1_BASE;
# 1469 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned OFFSET:10;
        unsigned p0 :22;
} tVIF1_OFST;
# 1495 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned TOPS:10;
        unsigned p0 :22;
} tVIF1_TOPS;
# 1521 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned TOP:10;
        unsigned p0 :22;
} tVIF1_TOP;
# 1559 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned DIR: 1;
        unsigned p0 : 1;
        unsigned MOD: 2;
        unsigned ASP: 2;
        unsigned TTE: 1;
        unsigned TIE: 1;
        unsigned STR: 1;
        unsigned p1 : 7;
        unsigned TAG:16;
} tD_CHCR;
# 1594 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ADDR:31;
        unsigned SPR : 1;
} tD_MADR;
# 1620 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned QWC:16;
        unsigned p0 :16;
} tD_QWC;
# 1647 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ADDR:31;
        unsigned SPR : 1;
} tD_TADR;
# 1674 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ADDR:31;
        unsigned SPR : 1;
} tD_ASR0;
# 1701 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ADDR:31;
        unsigned SPR : 1;
} tD_ASR1;
# 1726 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ADDR:14;
        unsigned p0 :18;
} tD_SADR;
# 1763 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned DMAE: 1;
        unsigned RELE: 1;
        unsigned MFD : 2;
        unsigned STS : 2;
        unsigned STD : 2;
        unsigned RCYC: 3;
        unsigned p0 :21;
} tD_CTRL;
# 1843 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned CIS0: 1;
        unsigned CIS1: 1;
        unsigned CIS2: 1;
        unsigned CIS3: 1;
        unsigned CIS4: 1;
        unsigned CIS5: 1;
        unsigned CIS6: 1;
        unsigned CIS7: 1;
        unsigned CIS8: 1;
        unsigned CIS9: 1;
        unsigned p0 : 3;
        unsigned SIS : 1;
        unsigned MEIS: 1;
        unsigned BEIS: 1;
        unsigned CIM0: 1;
        unsigned CIM1: 1;
        unsigned CIM2: 1;
        unsigned CIM3: 1;
        unsigned CIM4: 1;
        unsigned CIM5: 1;
        unsigned CIM6: 1;
        unsigned CIM7: 1;
        unsigned CIM8: 1;
        unsigned CIM9: 1;
        unsigned p1 : 3;
        unsigned SIM : 1;
        unsigned MEIM: 1;
        unsigned p2 : 1;
} tD_STAT;
# 1936 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned CPC0: 1;
        unsigned CPC1: 1;
        unsigned CPC2: 1;
        unsigned CPC3: 1;
        unsigned CPC4: 1;
        unsigned CPC5: 1;
        unsigned CPC6: 1;
        unsigned CPC7: 1;
        unsigned CPC8: 1;
        unsigned CPC9: 1;
        unsigned p0 : 6;
        unsigned CDE0: 1;
        unsigned CDE1: 1;
        unsigned CDE2: 1;
        unsigned CDE3: 1;
        unsigned CDE4: 1;
        unsigned CDE5: 1;
        unsigned CDE6: 1;
        unsigned CDE7: 1;
        unsigned CDE8: 1;
        unsigned CDE9: 1;
        unsigned p1 : 5;
        unsigned PCE : 1;
} tD_PCR;
# 1985 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned SQWC: 8;
        unsigned p0 : 8;
        unsigned TQWC: 8;
        unsigned p1 : 8;
} tD_SQWC;
# 2013 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned RMSK:31;
        unsigned p0 : 1;
} tD_RBSR;
# 2039 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ADDR:31;
        unsigned p0 : 1;
} tD_RBOR;
# 2065 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned ADDR:31;
        unsigned p0 : 1;
} tD_STADR;
# 2092 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned p0 :16;
        unsigned CPND: 1;
        unsigned p1 :15;
} tD_ENABLER;
# 2120 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned p0 :16;
        unsigned CPND: 1;
        unsigned p1 :15;
} tD_ENABLEW;
# 2169 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned EN1 : 1;
        unsigned EN2 : 1;
        unsigned CRTMD : 3;
        unsigned MMOD : 1;
        unsigned AMOD : 1;
        unsigned SLBG : 1;
        unsigned ALP : 8;
        unsigned p0 :16;
        unsigned int p1;
} tGS_PMODE;
# 2216 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned INT : 1;
        unsigned FFMD : 1;
        unsigned DPMS : 2;
        unsigned p0 :28;
        unsigned int p1;
} tGS_SMODE2;
# 2260 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned FBP: 9;
        unsigned FBW: 6;
        unsigned PSM: 5;
        unsigned p0 :12;
        unsigned DBX:11;
        unsigned DBY:11;
        unsigned p1 :10;
} tGS_DISPFB1;
# 2308 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned DX :12;
        unsigned DY :11;
        unsigned MAGH: 4;
        unsigned MAGV: 2;
        unsigned p0 : 3;
        unsigned DW :12;
        unsigned DH :11;
        unsigned p1 : 9;
} tGS_DISPLAY1;
# 2355 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned FBP: 9;
        unsigned FBW: 6;
        unsigned PSM: 5;
        unsigned p0 :12;
        unsigned DBX:11;
        unsigned DBY:11;
        unsigned p1 :10;
} tGS_DISPFB2;
# 2403 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned DX :12;
        unsigned DY :11;
        unsigned MAGH: 4;
        unsigned MAGV: 2;
        unsigned p0 : 3;
        unsigned DW :12;
        unsigned DH :11;
        unsigned p1 : 9;
} tGS_DISPLAY2;
# 2458 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned EXBP :14;
        unsigned EXBW : 6;
        unsigned FBIN : 2;
        unsigned WFFMD : 1;
        unsigned EMODA : 2;
        unsigned EMODC : 2;
        unsigned p0 : 5;
        unsigned WDX :11;
        unsigned WDY :11;
        unsigned p1 :10;
} tGS_EXTBUF;
# 2509 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned SX :12;
        unsigned SY :11;
        unsigned SMPH: 4;
        unsigned SMPV: 2;
        unsigned p0 : 3;
        unsigned WW :12;
        unsigned WH :11;
        unsigned p1 : 9;
} tGS_EXTDATA;
# 2552 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned WRITE: 1;
        unsigned p0 :31;
        unsigned int p1;
} tGS_EXTWRITE;
# 2590 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned R : 8;
        unsigned G : 8;
        unsigned B : 8;
        unsigned p0: 8;
        unsigned int p1;
} tGS_BGCOLOR;
# 2653 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned SIGNAL : 1;
        unsigned FINISH : 1;
        unsigned HSINT : 1;
        unsigned VSINT : 1;
        unsigned EDWINT : 1;
        unsigned p0 : 3;
        unsigned FLUSH : 1;
        unsigned RESET : 1;
        unsigned p1 : 2;
        unsigned NFIELD : 1;
        unsigned FIELD : 1;
        unsigned FIFO : 2;
        unsigned REV : 8;
        unsigned ID : 8;
        unsigned int p2;
} tGS_CSR;
# 2719 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned p0 : 8;
        unsigned SIGMSK : 1;
        unsigned FINISHMSK: 1;
        unsigned HSMSK : 1;
        unsigned VSMSK : 1;
        unsigned EDWMSK : 1;
        unsigned p1 :19;
        unsigned int p2;
} tGS_IMR;
# 2758 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned DIR: 1;
        unsigned p0 :31;
        unsigned int p1;
} tGS_BUSDIR;
# 2794 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/eeregs.h" 3 4
typedef struct {
        unsigned SIGID:32;
        unsigned LBLID:32;
} tGS_SIGLBLID;
# 29 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libdma.h" 2 3 4
# 50 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libdma.h" 3 4
typedef struct _sceDmaTag {
        u_short qwc;
        u_char mark;
        u_char id;
        struct _sceDmaTag *next;
        u_int p[2];
} sceDmaTag __attribute__ ((aligned(16)));




typedef struct {
        u_char sts;
        u_char std;
        u_char mfd;
        u_char rcycle;
        u_short express;
        u_short notify;
        u_short sqwc;
        u_short tqwc;
        void *rbadr;
        u_int rbmsk;
} sceDmaEnv;




typedef struct {
        tD_CHCR chcr; u_int p0[3];
        void *madr; u_int p1[3];
        u_int qwc; u_int p2[3];
        sceDmaTag *tadr; u_int p3[3];
        void *as0; u_int p4[3];
        void *as1; u_int p5[3];
        u_int p6[4];
        u_int p7[4];
        void *sadr; u_int p8[3];
} sceDmaChan;







int sceDmaReset(int mode);
int sceDmaPutEnv(sceDmaEnv *env);
sceDmaEnv *sceDmaGetEnv(sceDmaEnv *env);
void *sceDmaPutStallAddr(void *addr);
sceDmaChan *sceDmaGetChan(int id);
void sceDmaSend(sceDmaChan *d, void *tag);
void sceDmaSendN(sceDmaChan *d, void *addr, int size);
void sceDmaSendI(sceDmaChan *d, void *addr, int size);
void sceDmaRecv(sceDmaChan *d);
void sceDmaRecvN(sceDmaChan *d, void *addr, int size);
void sceDmaRecvI(sceDmaChan *d, void *addr, int size);
int sceDmaSync(sceDmaChan *d, int mode, int timeout);
int sceDmaWatch(sceDmaChan *d, void *addr, int mode, int timeout);
u_int sceDmaPause(sceDmaChan *d);
int sceDmaRestart(sceDmaChan *d, u_int chcr);
# 127 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/sdk/ee/libdma.h" 3 4
extern inline sceDmaTag *sceDmaGetNextTag(sceDmaTag *tag);
extern inline sceDmaTag *sceDmaGetNextTag(sceDmaTag *tag);


extern inline void sceDmaAddExpress(sceDmaTag *tag);
extern inline void sceDmaAddExpress(sceDmaTag *tag);


extern inline void *sceDmaAddRef(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddRef(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddRefe(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddRefe(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddRefs(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddRefs(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddCont(sceDmaTag **tag, int qwc);
extern inline void *sceDmaAddCont(sceDmaTag **tag, int qwc);


extern inline void *sceDmaAddNext(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddNext(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddCall(sceDmaTag **tag, int qwc, void *ctag);
extern inline void *sceDmaAddCall(sceDmaTag **tag, int qwc, void *ctag);


extern inline void *sceDmaAddRet(sceDmaTag **tag, int qwc);
extern inline void *sceDmaAddRet(sceDmaTag **tag, int qwc);


extern inline void *sceDmaAddEnd(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddEnd(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddDest(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddDest(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddDests(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddDests(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddIRef(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddIRef(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddIRefe(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddIRefe(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddIRefs(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddIRefs(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddICont(sceDmaTag **tag, int qwc);
extern inline void *sceDmaAddICont(sceDmaTag **tag, int qwc);


extern inline void *sceDmaAddINext(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddINext(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddICall(sceDmaTag **tag, int qwc, void *ctag);
extern inline void *sceDmaAddICall(sceDmaTag **tag, int qwc, void *ctag);


extern inline void *sceDmaAddIRet(sceDmaTag **tag, int qwc);
extern inline void *sceDmaAddIRet(sceDmaTag **tag, int qwc);


extern inline void *sceDmaAddIEnd(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddIEnd(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddIDest(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddIDest(sceDmaTag **tag, int qwc, void *addr);


extern inline void *sceDmaAddIDests(sceDmaTag **tag, int qwc, void *addr);
extern inline void *sceDmaAddIDests(sceDmaTag **tag, int qwc, void *addr);

# 3 "/data/agent-tom/kh2/autodecomp/out/corpus/overlay/kh1/include/ppp/draw.h" 2

s32 spr_a[32];
s32 spr_rev_a[32];
s8 spr_index;
s8 spr_rev_index;

sceDmaChan* oa_dmagif;

void op_ot_draw(void);
void op_init_draw(void);
void op_gs2_init(void);
void op_otz_init(void);
void op_init_fog_work(void);
# 4 "/data/agent-tom/kh2/corpus/kh1/src/ppp/pppMngr.c" 2

extern sceVu0FMATRIX D_002B84F0;

s32 D_0035FE00;

pppModelSt RendModel[128];
pppShapeSt RendShape[128];
pppVsfSt RendVsf[128];
ppvmng D_00360600[0x100];

s16 D_0036C5C6[];
s32 D_0036C600;

u8 D_00590580[];

s32 ppvCurPrimpLen;
u_long128* ppvPrimp;
s32 ppvPrimpLen;

u_long128 D_00570580;
pppSVECTOR* ppvVertex;

void pppSetPrimPacket(u_long128* primPacketArea, s32 len);


void drawStart(void);


s32 pppDbgAlloc(s32 arg0, s32 arg1);


void drawEnd(void);


void initGraphicSystem(void);


;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;
# 119 "/data/agent-tom/kh2/corpus/kh1/src/ppp/pppMngr.c"
;

;

;

s32 dpd_set_object_data(ppvmng* pMng);


void func_00182110(s32 arg0);


;

;

;

;

;

;

void vramcache_clear(_VRAMCACHE* cache);


void vramcachemng_clear(_VRAMCACHE_MNG* cacheMng);


;

void vramcache_texture(_VRAMCACHE_MNG* cacheMng, ppvmng* pMng);


void vramcache_clut(_VRAMCACHE_MNG* cacheMng, ppvmng* pMng);


;

;

;

;

;

;

;

;

void init_part_mng(ppvmng* pMng);


;

;

;

;

;

;

;

;

;

;

;

;
# 274 "/data/agent-tom/kh2/corpus/kh1/src/ppp/pppMngr.c"
;

;

;

;

;

;

;

;

;

void func_00184E48(ppvmng* pMng);


;

;

void func_00185000(void);


;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;


void func_001e6b00_impl(ppvmng* pMng) asm("func_001e6b00");
void func_001e6b00_impl(ppvmng* pMng) {
    func_002fde18(pMng, 0, 0x150);
    pMng->unk_00 = 0;
    pMng->usef = 8;
    pMng->unk_04 = 0.0f;
    pMng->unk_08 = 0.0f;
    pMng->unk_0C = 1.0f;
    pMng->unk_20 = 1.0f;
    pMng->unk_24 = 1.0f;
    pMng->unk_28 = 1.0f;
    pMng->unk_2C = 1.0f;
    pMng->unk_10 = 0.0f;
    pMng->unk_14 = 0.0f;
    pMng->unk_18 = 0.0f;
    pMng->unk_1C = 0.0f;
    pMng->colorR = 1.0f;
    pMng->colorG = 1.0f;
    pMng->colorB = 1.0f;
    pMng->colorA = 1.0f;
    pMng->scaleX = 1.0f;
    pMng->scaleY = 1.0f;
    pMng->unk_48 = 1.0f;
    pMng->unk_4C = 1.0f;
}
