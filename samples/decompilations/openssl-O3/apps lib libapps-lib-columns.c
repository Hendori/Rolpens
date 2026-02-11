
void calculate_columns(int *param_1,undefined4 *param_2)

{
  size_t sVar1;
  char *__s;
  int iVar2;
  
  __s = *(char **)(param_1 + 2);
  if (__s != (char *)0x0) {
    iVar2 = 0;
    do {
      if (*param_1 - 1U < 3) {
        sVar1 = strlen(__s);
        if (iVar2 < (int)sVar1) {
          iVar2 = (int)sVar1;
        }
      }
      __s = *(char **)(param_1 + 0xe);
      param_1 = param_1 + 0xc;
    } while (__s != (char *)0x0);
    param_2[1] = iVar2 + 2;
    *param_2 = (int)(0x4f / (long)(iVar2 + 2));
    return;
  }
  param_2[1] = 2;
  *param_2 = 0x27;
  return;
}


