
undefined8
mbedtls_platform_entropy_poll(undefined8 param_1,void *param_2,size_t param_3,size_t *param_4)

{
  long lVar1;
  int *piVar2;
  FILE *__stream;
  size_t sVar3;
  undefined8 uVar4;
  
  lVar1 = syscall(0x13e,param_2,param_3,0);
  if ((int)lVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0x26) {
      *param_4 = 0;
      __stream = fopen64("/dev/urandom","rb");
      if (__stream != (FILE *)0x0) {
        setbuf(__stream,(char *)0x0);
        sVar3 = fread(param_2,1,param_3,__stream);
        if (param_3 == sVar3) {
          fclose(__stream);
          *param_4 = param_3;
          goto LAB_00100084;
        }
        fclose(__stream);
      }
    }
    uVar4 = 0xffffffc4;
  }
  else {
    *param_4 = (long)(int)lVar1;
LAB_00100084:
    uVar4 = 0;
  }
  return uVar4;
}


