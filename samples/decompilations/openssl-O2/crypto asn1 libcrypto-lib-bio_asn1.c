
long asn1_bio_callback_ctrl(BIO *param_1,int param_2,fp *param_3)

{
  BIO *b;
  long lVar1;
  
  b = BIO_next(param_1);
  if (b != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(b,param_2,param_3);
    return lVar1;
  }
  return 0;
}



undefined8 asn1_bio_free(long param_1)

{
  void *ptr;
  
  if (param_1 == 0) {
    return 0;
  }
  ptr = (void *)BIO_get_data();
  if (ptr != (void *)0x0) {
    if (*(code **)((long)ptr + 0x30) != (code *)0x0) {
      (**(code **)((long)ptr + 0x30))(param_1,(long)ptr + 0x48,(long)ptr + 0x50,(long)ptr + 0x58);
    }
    if (*(code **)((long)ptr + 0x40) != (code *)0x0) {
      (**(code **)((long)ptr + 0x40))(param_1,(long)ptr + 0x48,(long)ptr + 0x50,(long)ptr + 0x58);
    }
    CRYPTO_free(*(void **)((long)ptr + 8));
    CRYPTO_free(ptr);
    BIO_set_data(param_1,0);
    BIO_set_init(param_1,0);
    return 1;
  }
  return 0;
}



int asn1_bio_gets(BIO *param_1,char *param_2,int param_3)

{
  int iVar1;
  BIO *bp;
  
  bp = BIO_next(param_1);
  if (bp != (BIO *)0x0) {
    iVar1 = BIO_gets(bp,param_2,param_3);
    return iVar1;
  }
  return 0;
}



int asn1_bio_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  BIO *b;
  
  b = BIO_next(param_1);
  if (b != (BIO *)0x0) {
    iVar1 = BIO_read(b,param_2,param_3);
    return iVar1;
  }
  return 0;
}



int asn1_bio_flush_ex_part_0(BIO *param_1,undefined4 *param_2,code *param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  BIO *b;
  int len;
  
  len = param_2[0x14];
  iVar2 = param_2[0x15];
  while( true ) {
    lVar1 = *(long *)(param_2 + 0x12);
    b = BIO_next(param_1);
    iVar2 = BIO_write(b,(void *)(iVar2 + lVar1),len);
    if (iVar2 < 1) {
      return iVar2;
    }
    len = param_2[0x14] - iVar2;
    param_2[0x14] = len;
    if (len < 1) break;
    iVar2 = iVar2 + param_2[0x15];
    param_2[0x15] = iVar2;
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_1,param_2 + 0x12,param_2 + 0x14,param_2 + 0x16);
  }
  *param_2 = param_4;
  param_2[0x15] = 0;
  return iVar2;
}



long asn1_bio_ctrl(BIO *param_1,int param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  BIO *bp;
  long lVar3;
  undefined8 uVar4;
  
  piVar2 = (int *)BIO_get_data();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  bp = BIO_next(param_1);
  if (param_2 != 0xb) {
    if (param_2 - 0x95U < 6) {
      switch(param_2) {
      case 0x96:
        uVar4 = *(undefined8 *)(piVar2 + 0xc);
        *param_4 = *(undefined8 *)(piVar2 + 10);
        param_4[1] = uVar4;
        break;
      case 0x97:
        uVar4 = param_4[1];
        *(undefined8 *)(piVar2 + 0xe) = *param_4;
        *(undefined8 *)(piVar2 + 0x10) = uVar4;
        break;
      case 0x98:
        uVar4 = *(undefined8 *)(piVar2 + 0x10);
        *param_4 = *(undefined8 *)(piVar2 + 0xe);
        param_4[1] = uVar4;
        break;
      case 0x99:
        *(undefined8 **)(piVar2 + 0x16) = param_4;
        break;
      case 0x9a:
        *param_4 = *(undefined8 *)(piVar2 + 0x16);
        break;
      default:
        uVar4 = param_4[1];
        *(undefined8 *)(piVar2 + 10) = *param_4;
        *(undefined8 *)(piVar2 + 0xc) = uVar4;
      }
      return 1;
    }
    if (bp == (BIO *)0x0) {
      return 0;
    }
    goto LAB_0010030d;
  }
  if (bp == (BIO *)0x0) {
    return 0;
  }
  iVar1 = *piVar2;
  if (iVar1 == 2) {
    if ((*(code **)(piVar2 + 0xe) != (code *)0x0) &&
       (iVar1 = (**(code **)(piVar2 + 0xe))(param_1,piVar2 + 0x12,piVar2 + 0x14,piVar2 + 0x16),
       iVar1 == 0)) goto LAB_0010033f;
    if (0 < piVar2[0x14]) {
      *piVar2 = 5;
      uVar4 = *(undefined8 *)(piVar2 + 0x10);
      goto LAB_0010037b;
    }
    *piVar2 = 6;
  }
  else {
    if (iVar1 == 5) {
      uVar4 = *(undefined8 *)(piVar2 + 0x10);
      if (piVar2[0x14] < 1) goto LAB_0010033f;
LAB_0010037b:
      iVar1 = asn1_bio_flush_ex_part_0(param_1,piVar2,uVar4,6);
      if ((long)iVar1 < 1) {
        return (long)iVar1;
      }
      iVar1 = *piVar2;
    }
    if (iVar1 != 6) {
LAB_0010033f:
      BIO_clear_flags(param_1,0xf);
      return 0;
    }
  }
  param_2 = 0xb;
LAB_0010030d:
  lVar3 = BIO_ctrl(bp,param_2,param_3,param_4);
  return lVar3;
}



undefined8 asn1_bio_new(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 *ptr;
  void *pvVar2;
  
  ptr = (undefined4 *)CRYPTO_zalloc(0x60,"crypto/asn1/bio_asn1.c",0x65);
  if (ptr != (undefined4 *)0x0) {
    pvVar2 = CRYPTO_malloc(0x14,"crypto/asn1/bio_asn1.c",0x79);
    *(void **)(ptr + 2) = pvVar2;
    uVar1 = _LC1;
    if (pvVar2 != (void *)0x0) {
      ptr[4] = 0x14;
      *ptr = 0;
      *(undefined8 *)(ptr + 8) = uVar1;
      BIO_set_data(param_1,ptr);
      BIO_set_init(param_1,1);
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



int asn1_bio_write(BIO *param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  BIO *b;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (uint *)BIO_get_data();
  b = BIO_next(param_1);
  if ((((param_2 == (void *)0x0) || ((int)param_3 < 0)) || (puVar3 == (uint *)0x0)) ||
     (b == (BIO *)0x0)) {
LAB_00100505:
    iVar2 = 0;
LAB_00100507:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar2;
  }
  local_50 = 0;
  uVar5 = (ulong)*puVar3;
LAB_001004e1:
  if (6 < *puVar3) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  switch((long)&switchD_001004f1::switchdataD_001008b4 +
         (long)(int)(&switchD_001004f1::switchdataD_001008b4)[uVar5]) {
  case 0x1004f8:
    BIO_clear_flags(param_1,0xf);
    goto LAB_00100505;
  case 0x100530:
    uVar4 = puVar3[7];
    if ((int)param_3 <= (int)puVar3[7]) {
      uVar4 = param_3;
    }
    iVar2 = BIO_write(b,param_2,uVar4);
    if (0 < iVar2) {
      uVar4 = puVar3[7];
      local_50 = local_50 + iVar2;
      param_3 = param_3 - iVar2;
      param_2 = (void *)((long)param_2 + (long)iVar2);
      puVar3[7] = uVar4 - iVar2;
      if (uVar4 - iVar2 == 0) {
        *puVar3 = 2;
      }
      if (param_3 != 0) goto LAB_00100569;
    }
LAB_001005c6:
    BIO_clear_flags(param_1,0xf);
    BIO_copy_next_retry(param_1);
    if (0 < local_50) {
      iVar2 = local_50;
    }
    goto LAB_00100507;
  case 0x100570:
    iVar2 = BIO_write(b,(void *)((long)(int)puVar3[5] + *(long *)(puVar3 + 2)),puVar3[6]);
    if (iVar2 < 1) goto LAB_001005c6;
    puVar1 = puVar3 + 6;
    *puVar1 = *puVar1 - iVar2;
    if (*puVar1 == 0) {
      puVar3[5] = 0;
      uVar5 = 4;
      *puVar3 = 4;
    }
    else {
      puVar3[5] = puVar3[5] + iVar2;
      uVar5 = (ulong)*puVar3;
    }
    goto LAB_001004e1;
  case 0x1005a0:
    if (0 < (int)puVar3[0x14]) {
      iVar2 = asn1_bio_flush_ex_part_0(param_1,puVar3,*(undefined8 *)(puVar3 + 0xc),2);
      if (iVar2 < 1) goto LAB_001005c6;
LAB_00100569:
      uVar5 = (ulong)*puVar3;
    }
    goto LAB_001004e1;
  case 0x1005f8:
    if ((*(code **)(puVar3 + 10) == (code *)0x0) ||
       (iVar2 = (**(code **)(puVar3 + 10))(param_1,puVar3 + 0x12,puVar3 + 0x14,puVar3 + 0x16),
       iVar2 != 0)) {
      if ((int)puVar3[0x14] < 1) {
        *puVar3 = 2;
        uVar5 = 2;
      }
      else {
        *puVar3 = 1;
        uVar5 = 1;
      }
      goto LAB_001004e1;
    }
    BIO_clear_flags(param_1,0xf);
    break;
  case 0x100638:
    iVar2 = ASN1_object_size(0,param_3,puVar3[9]);
    puVar3[6] = iVar2 - param_3;
    if ((int)(iVar2 - param_3) <= (int)puVar3[4]) {
      local_48 = *(uchar **)(puVar3 + 2);
      ASN1_put_object(&local_48,0,param_3,puVar3[9],puVar3[8]);
      puVar3[7] = param_3;
      uVar5 = 3;
      *puVar3 = 3;
      goto LAB_001004e1;
    }
  }
  iVar2 = -1;
  goto LAB_00100507;
}



void asn1_bio_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  asn1_bio_write(param_1,param_2,sVar1 & 0xffffffff);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_asn1(void)

{
  return (BIO_METHOD *)methods_asn1;
}



int BIO_asn1_set_prefix(BIO *b,undefined1 *prefix,undefined1 *prefix_free)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 *local_28;
  undefined1 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = prefix;
  local_20 = prefix_free;
  lVar1 = BIO_ctrl(b,0x95,0,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_asn1_get_prefix(BIO *b,undefined1 **pprefix,undefined1 **pprefix_free)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 *local_38;
  undefined1 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = BIO_ctrl(b,0x96,0,&local_38);
  if (0 < (int)lVar1) {
    *pprefix = local_38;
    *pprefix_free = local_30;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_asn1_set_suffix(BIO *b,undefined1 *suffix,undefined1 *suffix_free)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 *local_28;
  undefined1 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = suffix;
  local_20 = suffix_free;
  lVar1 = BIO_ctrl(b,0x97,0,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_asn1_get_suffix(BIO *b,undefined1 **psuffix,undefined1 **psuffix_free)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 *local_38;
  undefined1 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = BIO_ctrl(b,0x98,0,&local_38);
  if (0 < (int)lVar1) {
    *psuffix = local_38;
    *psuffix_free = local_30;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


