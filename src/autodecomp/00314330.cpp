// coverage: addr=0x00314330 symbol=func_00314330 size=176 class=loop source=corpus status=exact fuzzy=100.0
// coverage-alternatives: lift:near:41.39;m2c:near:9.7;ghidra:near:0.0
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031e8c0.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/data/agent-tom/kh2/corpus/god-hand-decomp/src/cod/0031e8c0.c"


extern void *__frame_state_for(void *pc_target, void *state_in);
extern long long *func_00320948(int col, void *a1, int a2);
extern void _dispRefImage(void *, int, int);
extern void _dispRefImageField(void *, int, int, int);
extern int SignalSema(int);
extern int D_003F86C0;
extern int D_003F9810;
extern int D_003F8668;
extern void *GetD003F8560_395388(void);
extern void func_003B06D8(int a);
extern int RemoveIntcHandler(int a, int b);
extern int AddIntcHandler(int a, void *b, int c);
extern void func_003B0740(int a);
extern double func_003146c8(void *);

typedef struct {
    int cfa;
    int eh_ptr;
    long long cfa_offset;
    long long args_size;
    long long reg_or_offset[80];
    unsigned short cfa_reg;
    unsigned short retaddr_column;
    char saved[80];
} frame_state;




__attribute__((section(".text.func_00320A50")))
frame_state *func_00320A50(void *a0, frame_state *a1, frame_state *a2);


__attribute__((section(".text.func_0039B8D0")))
void func_0039B8D0(void *a0, int a1, int a2, int a3);


__attribute__((section(".text.func_00398D08")))
int func_00398D08(void);


__attribute__((section(".text.func_00395F68")))
int func_00395F68(void *handler);


typedef enum { CLASS_SNAN, CLASS_QNAN, CLASS_ZERO, CLASS_NUMBER, CLASS_INFINITY } fp_class_type;
typedef long long DItype;
typedef unsigned long long UDItype;
typedef int SItype;
typedef struct {
  fp_class_type class;
  unsigned int sign;
  int normal_exp;
  union { UDItype ll; SItype l[2]; } fraction;
} fp_number_type;



__attribute__((section(".text.func_0031E8C0")))
double func_0031E8C0(SItype arg_a);



double func_00314330_impl(SItype arg_a) asm("func_00314330");
double func_00314330_impl(SItype arg_a) {
  fp_number_type in;

  in.class = CLASS_NUMBER;
  in.sign = arg_a < 0;
  if (!arg_a)
    {
      in.class = CLASS_ZERO;
    }
  else
    {
      in.normal_exp = 52 + 8;
      if (in.sign)
        {
          if (arg_a == (SItype) 0x80000000)
            {
              return -2147483648.0;
            }
          in.fraction.ll = (-arg_a);
        }
      else
        in.fraction.ll = arg_a;

      while (in.fraction.ll < (1ULL << (52 + 8)))
        {
          in.fraction.ll <<= 1;
          in.normal_exp -= 1;
        }
    }
  return func_003146c8(&in);
}
