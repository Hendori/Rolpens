
long u32_strlen(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (*param_1 == 0) {
    return 0;
  }
  do {
    piVar1 = piVar2 + 1;
    piVar2 = piVar2 + 1;
  } while (*piVar1 != 0);
  return (long)piVar2 - (long)param_1 >> 2;
}


