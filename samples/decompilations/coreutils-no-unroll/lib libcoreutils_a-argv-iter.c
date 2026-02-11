
void argv_iter_init_argv(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[4] = param_1;
    puVar1[5] = param_1;
  }
  return;
}



void argv_iter_init_stream(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
  }
  return;
}



long argv_iter(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  __ssize_t _Var3;
  long lVar4;
  
  if ((FILE *)*param_1 == (FILE *)0x0) {
    plVar1 = (long *)param_1[5];
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      *param_2 = 1;
      param_1[5] = plVar1 + 1;
      return lVar4;
    }
    *param_2 = 2;
    lVar4 = 0;
  }
  else {
    _Var3 = getdelim((char **)(param_1 + 2),param_1 + 3,0,(FILE *)*param_1);
    if (_Var3 < 0) {
      iVar2 = feof((FILE *)*param_1);
      *param_2 = (-(uint)(iVar2 == 0) & 2) + 2;
      lVar4 = 0;
    }
    else {
      *param_2 = 1;
      lVar4 = param_1[2];
      param_1[1] = param_1[1] + 1;
    }
  }
  return lVar4;
}



long argv_iter_n_args(long *param_1)

{
  if (*param_1 != 0) {
    return param_1[1];
  }
  return param_1[5] - param_1[4] >> 3;
}



void argv_iter_free(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[2]);
  }
  free(param_1);
  return;
}


