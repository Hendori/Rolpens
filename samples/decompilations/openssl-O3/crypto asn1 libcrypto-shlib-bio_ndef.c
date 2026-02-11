
bool ndef_prefix_free(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  
  if (param_4 != (long *)0x0) {
    lVar1 = *param_4;
    if (lVar1 != 0) {
      CRYPTO_free(*(void **)(lVar1 + 0x28));
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *param_2 = 0;
      *param_3 = 0;
    }
    return lVar1 != 0;
  }
  return false;
}



bool ndef_suffix_free(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  void *ptr;
  
  if (param_4 != (long *)0x0) {
    lVar1 = *param_4;
    if (lVar1 != 0) {
      CRYPTO_free(*(void **)(lVar1 + 0x28));
      ptr = (void *)*param_4;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *param_2 = 0;
      *param_3 = 0;
      CRYPTO_free(ptr);
      *param_4 = 0;
    }
    return lVar1 != 0;
  }
  return false;
}



undefined8 ndef_suffix(undefined8 param_1,long *param_2,int *param_3,long *param_4)

{
  undefined8 *puVar1;
  ASN1_ITEM *it;
  ASN1_VALUE *val;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (long *)0x0) {
    puVar1 = (undefined8 *)*param_4;
    uStack_30 = puVar1[2];
    local_28 = puVar1[4];
    local_38 = puVar1[3];
    iVar3 = (**(code **)(*(long *)(puVar1[1] + 0x20) + 0x18))(0xb,puVar1,puVar1[1],&local_38);
    if (0 < iVar3) {
      iVar3 = ASN1_item_ndef_i2d((ASN1_VALUE *)*puVar1,(uchar **)0x0,(ASN1_ITEM *)puVar1[1]);
      if (-1 < iVar3) {
        local_40 = (uchar *)CRYPTO_malloc(iVar3,"crypto/asn1/bio_ndef.c",0xd8);
        if (local_40 != (uchar *)0x0) {
          it = (ASN1_ITEM *)puVar1[1];
          val = (ASN1_VALUE *)*puVar1;
          puVar1[5] = local_40;
          *param_2 = (long)local_40;
          iVar3 = ASN1_item_ndef_i2d(val,&local_40,it);
          lVar2 = *(long *)puVar1[4];
          if (lVar2 != 0) {
            *param_2 = lVar2;
            *param_3 = iVar3 - ((int)lVar2 - (int)puVar1[5]);
            uVar4 = 1;
            goto LAB_001001c2;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_001001c2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ndef_prefix(undefined8 param_1,undefined8 *param_2,int *param_3,long *param_4)

{
  undefined8 *puVar1;
  ASN1_ITEM *it;
  int num;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (long *)0x0) {
    puVar1 = (undefined8 *)*param_4;
    num = ASN1_item_ndef_i2d((ASN1_VALUE *)*puVar1,(uchar **)0x0,(ASN1_ITEM *)puVar1[1]);
    if (-1 < num) {
      local_28 = (uchar *)CRYPTO_malloc(num,"crypto/asn1/bio_ndef.c",0x8f);
      if (local_28 != (uchar *)0x0) {
        puVar1[5] = local_28;
        it = (ASN1_ITEM *)puVar1[1];
        *param_2 = local_28;
        ASN1_item_ndef_i2d((ASN1_VALUE *)*puVar1,&local_28,it);
        if (*(long *)puVar1[4] != 0) {
          *param_3 = (int)*(long *)puVar1[4] - (int)*param_2;
          uVar2 = 1;
          goto LAB_00100272;
        }
      }
    }
  }
  uVar2 = 0;
LAB_00100272:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



BIO * BIO_new_NDEF(BIO *out,ASN1_VALUE *val,ASN1_ITEM *it)

{
  void *pvVar1;
  int iVar2;
  undefined8 *parg;
  BIO_METHOD *type;
  BIO *pBVar3;
  BIO *pBVar4;
  long lVar5;
  BIO *b;
  long in_FS_OFFSET;
  ASN1_VALUE *local_60;
  BIO *local_58;
  BIO *local_50;
  undefined8 local_48;
  long local_40;
  
  pvVar1 = it->funcs;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = val;
  if ((pvVar1 == (void *)0x0) || (*(long *)((long)pvVar1 + 0x18) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/asn1/bio_ndef.c",0x43,"BIO_new_NDEF");
    ERR_set_error(0xd,0xca,0);
  }
  else {
    parg = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/asn1/bio_ndef.c",0x46);
    type = BIO_f_asn1();
    pBVar3 = BIO_new(type);
    if ((parg == (undefined8 *)0x0) || (pBVar3 == (BIO *)0x0)) {
      b = (BIO *)0x0;
    }
    else {
      pBVar4 = BIO_push(pBVar3,out);
      b = pBVar4;
      if ((((pBVar4 != (BIO *)0x0) &&
           (iVar2 = BIO_asn1_set_prefix(pBVar3,ndef_prefix,ndef_prefix_free), b = pBVar3, 0 < iVar2)
           ) && (iVar2 = BIO_asn1_set_suffix(pBVar3,ndef_suffix,ndef_suffix_free), 0 < iVar2)) &&
         (lVar5 = BIO_ctrl(pBVar3,0x99,0,parg), 0 < lVar5)) {
        local_50 = (BIO *)0x0;
        local_48 = 0;
        local_58 = pBVar4;
        iVar2 = (**(code **)((long)pvVar1 + 0x18))(10,&local_60,it,&local_58);
        if (0 < iVar2) {
          parg[1] = it;
          parg[3] = pBVar4;
          *parg = local_60;
          parg[4] = local_48;
          parg[2] = local_50;
          pBVar3 = local_50;
          goto LAB_00100405;
        }
        parg = (undefined8 *)0x0;
      }
    }
    BIO_pop(b);
    BIO_free(pBVar3);
    CRYPTO_free(parg);
  }
  pBVar3 = (BIO *)0x0;
LAB_00100405:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar3;
}


