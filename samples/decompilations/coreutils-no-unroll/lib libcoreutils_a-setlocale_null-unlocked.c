
void setlocale_null_unlocked(int param_1)

{
  setlocale(param_1,(char *)0x0);
  return;
}



undefined8 setlocale_null_r_unlocked(int param_1,undefined1 *param_2,ulong param_3)

{
  char *__s;
  size_t sVar1;
  undefined8 uVar2;
  
  __s = setlocale(param_1,(char *)0x0);
  if (__s == (char *)0x0) {
    if (param_3 != 0) {
      *param_2 = 0;
    }
    uVar2 = 0x16;
  }
  else {
    sVar1 = strlen(__s);
    if (param_3 <= sVar1) {
      if (param_3 != 0) {
        memcpy(param_2,__s,param_3 - 1);
        param_2[param_3 - 1] = 0;
      }
      return 0x22;
    }
    memcpy(param_2,__s,sVar1 + 1);
    uVar2 = 0;
  }
  return uVar2;
}


