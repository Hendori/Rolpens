
undefined8 slg_free(long param_1)

{
  if (param_1 != 0) {
    closelog();
    return 1;
  }
  return 0;
}



undefined8 slg_new(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  openlog("application",3,0x18);
  return 1;
}



int slg_write(undefined8 param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *__s1;
  char *__s2;
  int iVar3;
  
  if (param_3 < 0) {
    return 0;
  }
  __s1 = (char *)CRYPTO_malloc(param_3 + 1,"crypto/bio/bss_log.c",0xca);
  if (__s1 != (char *)0x0) {
    iVar3 = 0;
    memcpy(__s1,param_2,(long)param_3);
    __s1[param_3] = '\0';
    __s2 = "PANIC ";
    while( true ) {
      iVar1 = *(int *)(__s2 + -4);
      iVar2 = strncmp(__s1,__s2,(long)iVar1);
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
      __s2 = __s2 + 0x14;
    }
    __syslog_chk((&DAT_00100230)[(long)iVar3 * 5],2,&_LC2,__s1 + iVar1);
    CRYPTO_free(__s1);
    return param_3;
  }
  return 0;
}



void slg_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  slg_write(param_1,param_2,sVar1 & 0xffffffff);
  return;
}



undefined8 slg_ctrl(undefined8 param_1,int param_2,int param_3,char *param_4)

{
  if (param_2 != 4) {
    return 0;
  }
  closelog();
  openlog(param_4,3,param_3);
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_log(void)

{
  return (BIO_METHOD *)methods_slg;
}


