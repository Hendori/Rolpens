
void ERR_new(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = ossl_err_get_state_int();
  if (lVar4 != 0) {
    iVar3 = (*(int *)(lVar4 + 0x380) + 1) % 0x10;
    *(int *)(lVar4 + 0x380) = iVar3;
    if (iVar3 == *(int *)(lVar4 + 900)) {
      *(int *)(lVar4 + 900) = (iVar3 + 1) % 0x10;
    }
    lVar5 = (long)iVar3;
    puVar1 = (undefined4 *)(lVar4 + lVar5 * 4);
    if ((*(byte *)(puVar1 + 0x80) & 1) == 0) {
      *(undefined8 *)(lVar4 + 0x100 + lVar5 * 8) = 0;
      *(undefined8 *)(lVar4 + 0x180 + lVar5 * 8) = 0;
      puVar1[0x80] = 0;
    }
    else {
      puVar2 = *(undefined1 **)(lVar4 + 0x100 + lVar5 * 8);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
        puVar1[0x80] = 1;
      }
    }
    lVar4 = lVar4 + lVar5 * 8;
    puVar1[0x10] = 0;
    *puVar1 = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    puVar1[0xb0] = 0xffffffff;
    CRYPTO_free(*(void **)(lVar4 + 0x240));
    *(undefined8 *)(lVar4 + 0x240) = 0;
    CRYPTO_free(*(void **)(lVar4 + 0x300));
    *(undefined8 *)(lVar4 + 0x300) = 0;
  }
  return;
}



void ERR_set_debug(char *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  
  lVar3 = ossl_err_get_state_int();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x380);
    lVar1 = lVar3 + (long)iVar2 * 8;
    CRYPTO_free(*(void **)(lVar1 + 0x240));
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      *(undefined8 *)(lVar1 + 0x240) = 0;
    }
    else {
      sVar4 = strlen(param_1);
      pcVar5 = (char *)CRYPTO_malloc((int)sVar4 + 1,(char *)0x0,0);
      *(char **)(lVar1 + 0x240) = pcVar5;
      if (pcVar5 != (char *)0x0) {
        strcpy(pcVar5,param_1);
      }
    }
    *(undefined4 *)(lVar3 + 0x2c0 + (long)iVar2 * 4) = param_2;
    CRYPTO_free(*(void **)(lVar1 + 0x300));
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      *(undefined8 *)(lVar1 + 0x300) = 0;
    }
    else {
      sVar4 = strlen(param_3);
      pcVar5 = (char *)CRYPTO_malloc((int)sVar4 + 1,(char *)0x0,0);
      *(char **)(lVar1 + 0x300) = pcVar5;
      if (pcVar5 != (char *)0x0) {
        strcpy(pcVar5,param_3);
        return;
      }
    }
  }
  return;
}



void ERR_vset_error(ulong param_1,uint param_2,char *param_3,va_list param_4)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *buf;
  int iVar7;
  undefined4 uVar8;
  ulong n;
  char *pcVar9;
  ulong uVar10;
  
  lVar4 = ossl_err_get_state_int();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = (long)*(int *)(lVar4 + 0x380);
  if (param_3 == (char *)0x0) {
    pcVar9 = (char *)0x0;
    uVar8 = 0;
    n = 0;
    goto LAB_00100335;
  }
  lVar1 = lVar4 + lVar5 * 8;
  n = *(ulong *)(lVar1 + 0x180);
  pcVar9 = *(char **)(lVar1 + 0x100);
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined4 *)(lVar4 + 0x200 + lVar5 * 4) = 0;
  if ((n < 0x400) &&
     (buf = (char *)CRYPTO_realloc(pcVar9,0x400,"crypto/err/err_blocks.c",0x54), buf != (char *)0x0)
     ) {
    n = 0x400;
LAB_001002c4:
    iVar3 = BIO_vsnprintf(buf,n,param_3,param_4);
    iVar7 = 0;
    if (-1 < iVar3) {
      iVar7 = iVar3;
    }
    buf[iVar7] = '\0';
    uVar10 = (ulong)(iVar7 + 1);
    pcVar6 = (char *)CRYPTO_realloc(buf,iVar7 + 1,"crypto/err/err_blocks.c",0x67);
    pcVar9 = pcVar6 + iVar7;
    if (pcVar6 == (char *)0x0) {
      lVar5 = (long)*(int *)(lVar4 + 0x380);
      uVar8 = 3;
      pcVar9 = buf;
      goto LAB_00100335;
    }
  }
  else {
    buf = pcVar9;
    if (pcVar9 != (char *)0x0) goto LAB_001002c4;
    pcVar9 = (char *)CRYPTO_realloc((void *)0x0,1,"crypto/err/err_blocks.c",0x67);
    if (pcVar9 == (char *)0x0) {
      lVar5 = (long)*(int *)(lVar4 + 0x380);
      uVar8 = 0;
      goto LAB_00100335;
    }
    uVar10 = 1;
    pcVar6 = pcVar9;
  }
  *pcVar9 = '\0';
  lVar5 = (long)*(int *)(lVar4 + 0x380);
  uVar8 = 3;
  n = uVar10;
  pcVar9 = pcVar6;
LAB_00100335:
  lVar1 = lVar5 + 0x80;
  if ((*(byte *)(lVar4 + 0x200 + lVar5 * 4) & 1) == 0) {
    *(undefined8 *)(lVar4 + 0x100 + lVar5 * 8) = 0;
    *(undefined8 *)(lVar4 + 0x180 + lVar5 * 8) = 0;
    *(undefined4 *)(lVar4 + lVar1 * 4) = 0;
  }
  else {
    puVar2 = *(undefined1 **)(lVar4 + 0x100 + lVar5 * 8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      lVar5 = (long)*(int *)(lVar4 + 0x380);
      *(undefined4 *)(lVar4 + lVar1 * 4) = 1;
    }
  }
  if ((int)param_1 == 2) {
    param_2 = param_2 | 0x80000000;
  }
  else {
    param_2 = (uint)((param_1 & 0xffffffff) << 0x17) & 0x7f800000 | param_2 & 0x7fffff;
  }
  lVar1 = lVar4 + lVar5 * 8;
  *(ulong *)(lVar1 + 0x80) = (ulong)param_2;
  if (param_3 != (char *)0x0) {
    if ((*(byte *)(lVar4 + 0x200 + lVar5 * 4) & 1) != 0) {
      CRYPTO_free(*(void **)(lVar1 + 0x100));
    }
    *(char **)(lVar1 + 0x100) = pcVar9;
    *(ulong *)(lVar1 + 0x180) = n;
    *(undefined4 *)(lVar4 + (lVar5 + 0x80) * 4) = uVar8;
  }
  return;
}



void ERR_set_error(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ERR_vset_error();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


