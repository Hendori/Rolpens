
undefined8 null_read(void)

{
  return 0;
}



undefined4 null_write(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  return param_3;
}



uint null_ctrl(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 0xd) {
    uVar1 = (uint)(0x1a16L >> ((byte)param_2 & 0x3f)) & 1;
  }
  return uVar1;
}



size_t null_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    return sVar1;
  }
  return 0;
}



undefined8 null_gets(void)

{
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_null(void)

{
  return (BIO_METHOD *)null_method;
}


