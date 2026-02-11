
void uint64_clear(undefined8 *param_1)

{
  *(undefined8 *)*param_1 = 0;
  return;
}



void uint32_clear(undefined8 *param_1)

{
  *(undefined4 *)*param_1 = 0;
  return;
}



undefined8 uint32_i2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  if ((iVar2 == 0) && ((*(ulong *)(param_4 + 0x28) & 1) != 0)) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (((*(ulong *)(param_4 + 0x28) & 2) != 0) && (iVar2 < 0)) {
    iVar2 = -iVar2;
    uVar1 = 1;
  }
  uVar1 = ossl_i2c_uint64_int(param_2,iVar2,uVar1);
  return uVar1;
}



undefined8 uint64_i2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)*param_1;
  if ((lVar2 == 0) && ((*(ulong *)(param_4 + 0x28) & 1) != 0)) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (((*(ulong *)(param_4 + 0x28) & 2) != 0) && (lVar2 < 0)) {
    lVar2 = -lVar2;
    uVar1 = 1;
  }
  uVar1 = ossl_i2c_uint64_int(param_2,lVar2,uVar1);
  return uVar1;
}



bool uint64_new(long *param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(8,"crypto/asn1/x_int64.c",0x1f);
  *param_1 = lVar1;
  return lVar1 != 0;
}



bool uint32_new(long *param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(4,"crypto/asn1/x_int64.c",0x7c);
  *param_1 = lVar1;
  return lVar1 != 0;
}



void uint32_free(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  *param_1 = 0;
  return;
}



void uint64_free(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  *param_1 = 0;
  return;
}



void uint64_print(BIO *param_1,undefined8 *param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
    BIO_printf(param_1,"%ju\n",*(undefined8 *)*param_2);
    return;
  }
  BIO_printf(param_1,"%jd\n",*(undefined8 *)*param_2);
  return;
}



void uint32_print(BIO *param_1,undefined8 *param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
    BIO_printf(param_1,"%u\n",(ulong)*(uint *)*param_2);
    return;
  }
  BIO_printf(param_1,"%d\n",(ulong)*(uint *)*param_2);
  return;
}



undefined8
uint64_c2i(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 local_50 [2];
  int local_3c;
  long local_38;
  long local_30;
  
  plVar4 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38 = 0;
  local_50[0] = param_2;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)CRYPTO_zalloc(8,"crypto/asn1/x_int64.c",0x1f);
    *param_1 = (long)plVar4;
    if (plVar4 == (long *)0x0) {
      uVar3 = 0;
      goto LAB_00100227;
    }
  }
  lVar2 = local_38;
  if (param_3 != 0) {
    iVar1 = ossl_c2i_uint64_int(&local_38,&local_3c,local_50,(long)param_3);
    if (iVar1 == 0) {
LAB_001002b8:
      uVar3 = 0;
      goto LAB_00100227;
    }
    lVar2 = local_38;
    if ((*(byte *)(param_6 + 0x28) & 2) == 0) {
      if (local_3c != 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/x_int64.c",0x5f,__func___5);
        ERR_set_error(0xd,0xe2,0);
        uVar3 = 0;
        goto LAB_00100227;
      }
    }
    else if (local_3c == 0) {
      if (local_38 < 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/x_int64.c",100,__func___5);
        ERR_set_error(0xd,0xdf,0);
        goto LAB_001002b8;
      }
    }
    else {
      lVar2 = -local_38;
    }
  }
  *plVar4 = lVar2;
  uVar3 = 1;
LAB_00100227:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8
uint32_c2i(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_50 [2];
  int local_3c;
  ulong local_38;
  long local_30;
  
  puVar4 = (undefined4 *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38 = 0;
  local_50[0] = param_2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)CRYPTO_zalloc(8,"crypto/asn1/x_int64.c",0x1f);
    *param_1 = (long)puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = 0;
      goto LAB_00100397;
    }
  }
  uVar2 = local_38;
  if (param_3 != 0) {
    iVar1 = ossl_c2i_uint64_int(&local_38,&local_3c,local_50,(long)param_3);
    if (iVar1 == 0) {
LAB_0010042c:
      uVar3 = 0;
      goto LAB_00100397;
    }
    uVar2 = local_38;
    if ((*(byte *)(param_6 + 0x28) & 2) == 0) {
      if (local_3c != 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/x_int64.c",0xc4,__func___8);
        ERR_set_error(0xd,0xe2,0);
        uVar3 = 0;
        goto LAB_00100397;
      }
      if (local_38 >> 0x20 != 0) {
LAB_001003fc:
        ERR_new();
        ERR_set_debug("crypto/asn1/x_int64.c",0xd0,__func___8);
        ERR_set_error(0xd,0xdf,0);
        goto LAB_0010042c;
      }
    }
    else if (local_3c == 0) {
      if (0x7fffffff < local_38) goto LAB_001003fc;
    }
    else {
      if (0x80000000 < local_38) {
        ERR_new();
        ERR_set_debug("crypto/asn1/x_int64.c",0xc9,__func___8);
        ERR_set_error(0xd,0xe0,0);
        uVar3 = 0;
        goto LAB_00100397;
      }
      uVar2 = -local_38;
    }
  }
  *puVar4 = (int)uVar2;
  uVar3 = 1;
LAB_00100397:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined1 * INT32_it(void)

{
  return local_it_9;
}



undefined1 * UINT32_it(void)

{
  return local_it_7;
}



undefined1 * INT64_it(void)

{
  return local_it_6;
}



undefined1 * UINT64_it(void)

{
  return local_it_4;
}



undefined1 * ZINT32_it(void)

{
  return local_it_3;
}



undefined1 * ZUINT32_it(void)

{
  return local_it_2;
}



undefined1 * ZINT64_it(void)

{
  return local_it_1;
}



undefined1 * ZUINT64_it(void)

{
  return local_it_0;
}


