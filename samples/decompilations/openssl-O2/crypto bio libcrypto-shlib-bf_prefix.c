
void prefix_callback_ctrl(BIO *param_1,int param_2,fp *param_3)

{
  BIO *b;
  
  b = BIO_next(param_1);
  BIO_callback_ctrl(b,param_2,param_3);
  return;
}



undefined8 prefix_destroy(void)

{
  undefined8 *ptr;
  
  ptr = (undefined8 *)BIO_get_data();
  CRYPTO_free((void *)*ptr);
  CRYPTO_free(ptr);
  return 1;
}



undefined8 prefix_create(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x10,"crypto/bio/bf_prefix.c",0x36);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0x100000000;
    BIO_set_data(param_1);
    BIO_set_init(param_1,1);
    return 1;
  }
  return 0;
}



ulong prefix_ctrl(BIO *param_1,int param_2,long param_3,char *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  BIO *pBVar3;
  ulong uVar4;
  
  if (param_1 == (BIO *)0x0) {
    return 0xffffffffffffffff;
  }
  puVar1 = (undefined8 *)BIO_get_data();
  if (puVar1 == (undefined8 *)0x0) {
    return 0xffffffffffffffff;
  }
  if (param_2 == 0x50) {
    if (param_3 < 0) {
      return 0;
    }
    *(int *)(puVar1 + 1) = (int)param_3;
  }
  else {
    if (param_2 == 0x51) {
      return (ulong)*(uint *)(puVar1 + 1);
    }
    if (param_2 != 0x4f) {
      if ((param_2 == 1) || (param_2 == 0x80)) {
        *(undefined4 *)((long)puVar1 + 0xc) = 1;
      }
      pBVar3 = BIO_next(param_1);
      if (pBVar3 == (BIO *)0x0) {
        return 0;
      }
      pBVar3 = BIO_next(param_1);
      uVar4 = BIO_ctrl(pBVar3,param_2,param_3,param_4);
      return uVar4;
    }
    CRYPTO_free((void *)*puVar1);
    if (param_4 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_4,"crypto/bio/bf_prefix.c",0xa6);
      *puVar1 = pcVar2;
      return (ulong)(pcVar2 != (char *)0x0);
    }
    *puVar1 = 0;
  }
  return 1;
}



void prefix_gets(BIO *param_1,char *param_2,int param_3)

{
  BIO *bp;
  
  bp = BIO_next(param_1);
  BIO_gets(bp,param_2,param_3);
  return;
}



void prefix_puts(BIO *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  BIO_write(param_1,param_2,(int)sVar1);
  return;
}



void prefix_read(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BIO *pBVar1;
  
  pBVar1 = BIO_next(param_1);
  BIO_read_ex(pBVar1,param_2,param_3,param_4);
  return;
}



undefined8 prefix_write(BIO *param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  uint uVar2;
  char *__s;
  int iVar3;
  undefined8 *puVar4;
  size_t sVar5;
  BIO *pBVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined8 *)BIO_get_data();
  if (puVar4 == (undefined8 *)0x0) {
LAB_00100462:
    uVar7 = 0;
  }
  else {
    if ((((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) &&
       (*(int *)(puVar4 + 1) == 0)) {
      if (param_3 != 0) {
        *(uint *)((long)puVar4 + 0xc) = (uint)(*(char *)(param_2 + -1 + param_3) == '\n');
      }
      pBVar6 = BIO_next(param_1);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = BIO_write_ex(pBVar6,param_2,param_3,param_4);
        return uVar7;
      }
      goto LAB_001004aa;
    }
    *param_4 = 0;
    while (param_3 != 0) {
      if (*(int *)((long)puVar4 + 0xc) != 0) {
        __s = (char *)*puVar4;
        if (__s != (char *)0x0) {
          sVar5 = strlen(__s);
          pBVar6 = BIO_next(param_1);
          iVar3 = BIO_write_ex(pBVar6,__s,sVar5,&local_48);
          if (iVar3 == 0) goto LAB_00100462;
        }
        uVar2 = *(uint *)(puVar4 + 1);
        pBVar6 = BIO_next(param_1);
        BIO_printf(pBVar6,"%*s",(ulong)uVar2,&_LC1);
        *(undefined4 *)((long)puVar4 + 0xc) = 0;
      }
      lVar8 = 0;
      do {
        cVar1 = *(char *)(param_2 + lVar8);
        lVar8 = lVar8 + 1;
        lVar9 = lVar8;
        if (cVar1 == '\n') break;
        lVar9 = param_3;
      } while (lVar8 != param_3);
      do {
        local_48 = 0;
        pBVar6 = BIO_next(param_1);
        iVar3 = BIO_write_ex(pBVar6,param_2,lVar9,&local_48);
        if (iVar3 == 0) goto LAB_00100462;
        *param_4 = *param_4 + local_48;
        param_2 = param_2 + local_48;
        param_3 = param_3 - local_48;
        lVar9 = lVar9 - local_48;
      } while (lVar9 != 0);
      if (cVar1 == '\n') {
        *(undefined4 *)((long)puVar4 + 0xc) = 1;
      }
    }
    uVar7 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_001004aa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * BIO_f_prefix(void)

{
  return prefix_meth;
}


