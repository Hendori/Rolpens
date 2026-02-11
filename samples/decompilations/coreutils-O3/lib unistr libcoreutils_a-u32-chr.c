
int * u32_chr(int *param_1,long param_2,int param_3)

{
  if (param_2 != 0) {
    do {
      if (*param_1 == param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return (int *)0x0;
}


