
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



long asn1_bio_ctrl(BIO *param_1,int param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  BIO *bp;
  long lVar4;
  BIO *b;
  int iVar5;
  code *local_40;
  
  piVar3 = (int *)BIO_get_data();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  bp = BIO_next(param_1);
  if (param_2 != 0xb) {
    if (param_2 - 0x95U < 6) {
      switch(param_2) {
      case 0x96:
        uVar1 = *(undefined8 *)(piVar3 + 0xc);
        *param_4 = *(undefined8 *)(piVar3 + 10);
        param_4[1] = uVar1;
        break;
      case 0x97:
        uVar1 = param_4[1];
        *(undefined8 *)(piVar3 + 0xe) = *param_4;
        *(undefined8 *)(piVar3 + 0x10) = uVar1;
        break;
      case 0x98:
        uVar1 = *(undefined8 *)(piVar3 + 0x10);
        *param_4 = *(undefined8 *)(piVar3 + 0xe);
        param_4[1] = uVar1;
        break;
      case 0x99:
        *(undefined8 **)(piVar3 + 0x16) = param_4;
        break;
      case 0x9a:
        *param_4 = *(undefined8 *)(piVar3 + 0x16);
        break;
      default:
        uVar1 = param_4[1];
        *(undefined8 *)(piVar3 + 10) = *param_4;
        *(undefined8 *)(piVar3 + 0xc) = uVar1;
      }
      return 1;
    }
    if (bp == (BIO *)0x0) {
      return 0;
    }
    goto LAB_0010026d;
  }
  if (bp == (BIO *)0x0) {
    return 0;
  }
  iVar5 = *piVar3;
  if (iVar5 == 2) {
    if ((*(code **)(piVar3 + 0xe) != (code *)0x0) &&
       (iVar5 = (**(code **)(piVar3 + 0xe))(param_1,piVar3 + 0x12,piVar3 + 0x14,piVar3 + 0x16),
       iVar5 == 0)) goto LAB_001002a7;
    iVar5 = piVar3[0x14];
    if (0 < iVar5) {
      local_40 = *(code **)(piVar3 + 0x10);
      *piVar3 = 5;
      goto LAB_001002d0;
    }
    *piVar3 = 6;
  }
  else if (iVar5 == 5) {
    local_40 = *(code **)(piVar3 + 0x10);
    iVar5 = piVar3[0x14];
    if (iVar5 < 1) goto LAB_001002a7;
LAB_001002d0:
    iVar2 = piVar3[0x15];
    while( true ) {
      lVar4 = *(long *)(piVar3 + 0x12);
      b = BIO_next(param_1);
      iVar2 = BIO_write(b,(void *)(iVar2 + lVar4),iVar5);
      if (iVar2 < 1) {
        return (long)iVar2;
      }
      iVar5 = piVar3[0x14] - iVar2;
      piVar3[0x14] = iVar5;
      if (iVar5 < 1) break;
      iVar2 = iVar2 + piVar3[0x15];
      piVar3[0x15] = iVar2;
    }
    if (local_40 != (code *)0x0) {
      (*local_40)(param_1,piVar3 + 0x12,piVar3 + 0x14,piVar3 + 0x16);
    }
    *piVar3 = 6;
    piVar3[0x15] = 0;
  }
  else if (iVar5 != 6) {
LAB_001002a7:
    BIO_clear_flags(param_1,0xf);
    return 0;
  }
  param_2 = 0xb;
LAB_0010026d:
  lVar4 = BIO_ctrl(bp,param_2,param_3,param_4);
  return lVar4;
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



int asn1_bio_write(BIO *param_1,void *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  BIO *b;
  BIO *b_00;
  int iVar6;
  long in_FS_OFFSET;
  int local_54;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = (int *)BIO_get_data();
  b = BIO_next(param_1);
  if ((((param_2 != (void *)0x0) && (-1 < param_3)) && (piVar5 != (int *)0x0)) && (b != (BIO *)0x0))
  {
    local_54 = 0;
    iVar4 = *piVar5;
LAB_001004ad:
    if (iVar4 == 0) goto LAB_0010060f;
LAB_001004b5:
    if (iVar4 == 1) goto LAB_00100644;
    if (iVar4 == 2) goto LAB_00100542;
    if (iVar4 == 3) goto LAB_00100589;
    if (iVar4 == 4) {
      do {
        iVar4 = piVar5[7];
        if (param_3 <= piVar5[7]) {
          iVar4 = param_3;
        }
        iVar4 = BIO_write(b,param_2,iVar4);
        if (iVar4 < 1) {
LAB_001006a0:
          BIO_clear_flags(param_1,0xf);
          BIO_copy_next_retry(param_1);
          if (0 < local_54) {
            iVar4 = local_54;
          }
          goto LAB_001004ec;
        }
        iVar6 = piVar5[7];
        local_54 = local_54 + iVar4;
        param_3 = param_3 - iVar4;
        param_2 = (void *)((long)param_2 + (long)iVar4);
        piVar5[7] = iVar6 - iVar4;
        if (iVar6 - iVar4 == 0) {
          *piVar5 = 2;
        }
        if (param_3 == 0) goto LAB_001006a0;
        iVar4 = *piVar5;
        if (iVar4 != 0) goto LAB_001004b5;
LAB_0010060f:
        if ((*(code **)(piVar5 + 10) != (code *)0x0) &&
           (iVar4 = (**(code **)(piVar5 + 10))(param_1,piVar5 + 0x12,piVar5 + 0x14,piVar5 + 0x16),
           iVar4 == 0)) {
          BIO_clear_flags(param_1,0xf);
LAB_0010070d:
          iVar4 = -1;
          goto LAB_001004ec;
        }
        if (piVar5[0x14] < 1) {
          *piVar5 = 2;
        }
        else {
          *piVar5 = 1;
LAB_00100644:
          iVar6 = piVar5[0x14];
          do {
          } while (iVar6 < 1);
          pcVar2 = *(code **)(piVar5 + 0xc);
          iVar4 = piVar5[0x15];
          while( true ) {
            lVar3 = *(long *)(piVar5 + 0x12);
            b_00 = BIO_next(param_1);
            iVar4 = BIO_write(b_00,(void *)(iVar4 + lVar3),iVar6);
            if (iVar4 < 1) goto LAB_001006a0;
            iVar6 = piVar5[0x14] - iVar4;
            piVar5[0x14] = iVar6;
            if (iVar6 < 1) break;
            iVar4 = iVar4 + piVar5[0x15];
            piVar5[0x15] = iVar4;
          }
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(param_1,piVar5 + 0x12,piVar5 + 0x14,piVar5 + 0x16);
          }
          *piVar5 = 2;
          piVar5[0x15] = 0;
        }
LAB_00100542:
        iVar4 = ASN1_object_size(0,param_3,piVar5[9]);
        piVar5[6] = iVar4 - param_3;
        if (piVar5[4] < iVar4 - param_3) goto LAB_0010070d;
        local_48 = *(uchar **)(piVar5 + 2);
        ASN1_put_object(&local_48,0,param_3,piVar5[9],piVar5[8]);
        piVar5[7] = param_3;
        *piVar5 = 3;
LAB_00100589:
        iVar4 = BIO_write(b,(void *)((long)piVar5[5] + *(long *)(piVar5 + 2)),piVar5[6]);
        if (iVar4 < 1) goto LAB_001006a0;
        piVar1 = piVar5 + 6;
        *piVar1 = *piVar1 - iVar4;
        if (*piVar1 != 0) {
          piVar5[5] = piVar5[5] + iVar4;
          iVar4 = *piVar5;
          goto LAB_001004ad;
        }
        piVar5[5] = 0;
        *piVar5 = 4;
      } while( true );
    }
    if (1 < iVar4 - 5U) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    BIO_clear_flags(param_1,0xf);
  }
  iVar4 = 0;
LAB_001004ec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
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


