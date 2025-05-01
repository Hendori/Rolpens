
ulong asn1_d2i_read_bio(BIO *param_1,undefined8 *param_2)

{
  ulong len;
  int iVar1;
  uint uVar2;
  uint uVar3;
  BUF_MEM *str;
  ulong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uchar *puVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  ulong local_78;
  ulong local_60;
  int local_58;
  int local_54;
  uchar *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  str = BUF_MEM_new();
  if (str != (BUF_MEM *)0x0) {
    uVar5 = 0;
    uVar4 = 0;
    iVar10 = 0;
    ERR_set_mark();
    uVar8 = 8;
LAB_001000af:
    uVar7 = uVar5 - uVar4;
    if (uVar8 < uVar7) goto LAB_00100195;
LAB_001000be:
    len = uVar8 + uVar4;
    uVar8 = len - uVar5;
    if ((len < uVar5) || (iVar1 = BUF_MEM_grow_clean(str,len), CONCAT44(extraout_var,iVar1) == 0)) {
      ERR_new();
      uVar6 = 0x89;
      goto LAB_00100381;
    }
    iVar1 = BIO_read(param_1,str->data + uVar5,(int)uVar8);
    if ((iVar1 < 0) && (uVar7 == 0)) {
      ERR_new();
      uVar6 = 0x8e;
LAB_00100302:
      ERR_set_debug("crypto/asn1/a_d2i_fp.c",uVar6,"asn1_d2i_read_bio");
      ERR_set_error(0xd,0x8e,0);
      goto LAB_00100321;
    }
    if (0 < iVar1) {
      uVar7 = (ulong)iVar1;
      bVar11 = CARRY8(uVar5,uVar7);
      uVar5 = uVar5 + uVar7;
      if (bVar11) {
        ERR_new();
        uVar6 = 0x93;
        goto LAB_00100435;
      }
      if (uVar7 < uVar8) goto LAB_001000af;
      uVar7 = uVar5 - uVar4;
    }
    puVar9 = (uchar *)(str->data + uVar4);
    local_50 = puVar9;
    if (uVar7 != 0) goto LAB_0010013c;
    goto LAB_00100321;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/a_d2i_fp.c",0x7e,"asn1_d2i_read_bio");
  ERR_set_error(0xd,0x80007,0);
  goto LAB_00100064;
LAB_0010013c:
  while( true ) {
    local_50 = puVar9;
    uVar2 = ASN1_get_object(&local_50,(long *)&local_48,&local_58,&local_54,uVar7);
    if ((uVar2 & 0x80) != 0) {
      uVar8 = ERR_peek_last_error();
      uVar3 = (uint)uVar8 & 0x7fffffff;
      if ((uVar8 & 0x80000000) == 0) {
        uVar3 = (uint)uVar8 & 0x7fffff;
      }
      if (uVar3 != 0x9b) goto LAB_00100321;
      ERR_pop_to_mark();
    }
    uVar4 = uVar4 + (long)((int)local_50 - (int)puVar9);
    if ((uVar2 & 1) == 0) {
      if ((iVar10 != 0) && (local_48 == 0)) {
        if (local_58 != 0) goto LAB_001001c8;
        iVar10 = iVar10 + -1;
        goto joined_r0x001001f2;
      }
      if (local_48 <= uVar5 - uVar4) goto LAB_001001e3;
      local_60 = (local_48 - uVar5) + uVar4;
      if ((local_60 < 0x80000000) && (!CARRY8(local_60,uVar5))) {
        local_78 = 0x4000;
        uVar8 = local_78;
        if (local_60 != 0) goto LAB_0010028a;
        goto LAB_001001e3;
      }
      ERR_new();
      uVar6 = 199;
      goto LAB_00100435;
    }
    if (iVar10 == -1) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_d2i_fp.c",0xb2,"asn1_d2i_read_bio");
      ERR_set_error(0xd,0x7b,0);
      goto LAB_00100321;
    }
    uVar8 = 8;
    iVar10 = iVar10 + 1;
    uVar7 = uVar5 - uVar4;
    if (uVar7 < 9) break;
LAB_00100195:
    puVar9 = (uchar *)(str->data + uVar4);
  }
  goto LAB_001000be;
LAB_0010028a:
  do {
    local_78 = uVar8;
    uVar7 = local_78;
    if (local_60 <= local_78) {
      uVar7 = local_60;
    }
    iVar1 = BUF_MEM_grow_clean(str,uVar7 + uVar5);
    if (CONCAT44(extraout_var_00,iVar1) == 0) {
      ERR_new();
      uVar6 = 0xd4;
LAB_00100381:
      ERR_set_debug("crypto/asn1/a_d2i_fp.c",uVar6,"asn1_d2i_read_bio");
      ERR_set_error(0xd,0x80007,0);
      goto LAB_00100321;
    }
    uVar8 = uVar7;
    if (uVar7 != 0) break;
    uVar8 = local_78 * 2;
    if (0x3ffffffe < local_78) {
      uVar8 = local_78;
    }
  } while( true );
  do {
    iVar1 = BIO_read(param_1,str->data + uVar5,(int)uVar8);
    if (iVar1 < 1) {
      ERR_new();
      uVar6 = 0xdb;
      goto LAB_00100302;
    }
    uVar5 = uVar5 + (long)iVar1;
    uVar8 = uVar8 - (long)iVar1;
  } while (uVar8 != 0);
  uVar8 = local_78 * 2;
  if (0x3ffffffe < local_78) {
    uVar8 = local_78;
  }
  local_60 = local_60 - uVar7;
  if (local_60 == 0) goto LAB_001001e3;
  goto LAB_0010028a;
LAB_001001e3:
  bVar11 = CARRY8(local_48,uVar4);
  uVar4 = local_48 + uVar4;
  if (bVar11) {
    ERR_new();
    uVar6 = 0xea;
    goto LAB_00100435;
  }
joined_r0x001001f2:
  if (iVar10 != 0) {
LAB_001001c8:
    uVar8 = 8;
    goto LAB_001000af;
  }
  if (uVar4 < 0x80000000) {
    *param_2 = str;
    uVar4 = uVar4 & 0xffffffff;
    goto LAB_00100069;
  }
  ERR_new();
  uVar6 = 0xf6;
LAB_00100435:
  ERR_set_debug("crypto/asn1/a_d2i_fp.c",uVar6,"asn1_d2i_read_bio");
  ERR_set_error(0xd,0x9b,0);
LAB_00100321:
  ERR_clear_last_mark();
  BUF_MEM_free(str);
LAB_00100064:
  uVar4 = 0xffffffff;
LAB_00100069:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * ASN1_d2i_bio(xnew *xnew,undefined1 *d2i,BIO *in,void **x)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_30;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (BUF_MEM *)0x0;
  iVar1 = asn1_d2i_read_bio(in,&local_30);
  if (iVar1 < 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    local_28 = local_30->data;
    pvVar2 = (void *)(*(code *)d2i)(x,&local_28,(long)iVar1);
  }
  BUF_MEM_free(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * ASN1_d2i_fp(xnew *xnew,undefined1 *d2i,FILE *in,void **x)

{
  BIO_METHOD *type;
  BIO *bp;
  void *pvVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    pvVar1 = (void *)0x0;
    ERR_set_debug("crypto/asn1/a_d2i_fp.c",0x1c,__func___2);
    ERR_set_error(0xd,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,in);
    pvVar1 = ASN1_d2i_bio(xnew,d2i,bp,x);
    BIO_free(bp);
  }
  return pvVar1;
}



undefined8
ASN1_item_d2i_bio_ex
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_40;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BUF_MEM *)0x0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = asn1_d2i_read_bio(param_2,&local_40);
    if (-1 < iVar1) {
      local_38 = local_40->data;
      uVar2 = ASN1_item_d2i_ex(param_3,&local_38,(long)iVar1,param_1,param_4,param_5);
    }
    BUF_MEM_free(local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * ASN1_item_d2i_bio(ASN1_ITEM *it,BIO *in,void *x)

{
  void *pvVar1;
  
  pvVar1 = (void *)ASN1_item_d2i_bio_ex();
  return pvVar1;
}



undefined8
ASN1_item_d2i_fp_ex(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("crypto/asn1/a_d2i_fp.c",0x5c,"ASN1_item_d2i_fp_ex");
    ERR_set_error(0xd,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_2);
    uVar1 = ASN1_item_d2i_bio_ex(param_1,bp,param_3,param_4,param_5);
    BIO_free(bp);
  }
  return uVar1;
}



void * ASN1_item_d2i_fp(ASN1_ITEM *it,FILE *in,void *x)

{
  void *pvVar1;
  
  pvVar1 = (void *)ASN1_item_d2i_fp_ex();
  return pvVar1;
}


