
undefined8 ZSTD_versionNumber(void)

{
  return 0x290a;
}



char * ZSTD_versionString(void)

{
  return "1.5.6";
}



bool ZSTD_isError(ulong param_1)

{
  return 0xffffffffffffff88 < param_1;
}



void ZSTD_getErrorName(ulong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0xffffffffffffff88 < param_1) {
    iVar1 = -(int)param_1;
  }
  ERR_getErrorString(iVar1);
  return;
}



int ZSTD_getErrorCode(ulong param_1)

{
  int iVar1;
  
  iVar1 = -(int)param_1;
  if (param_1 < 0xffffffffffffff89) {
    iVar1 = 0;
  }
  return iVar1;
}



void ZSTD_getErrorString(void)

{
  ERR_getErrorString();
  return;
}


