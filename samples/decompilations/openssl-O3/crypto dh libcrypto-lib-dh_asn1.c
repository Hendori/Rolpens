
undefined1 * DHvparams_it(void)

{
  return local_it_0;
}



char dh_cb(int param_1,long *param_2)

{
  long lVar1;
  DH *pDVar2;
  
  if (param_1 == 0) {
    pDVar2 = DH_new();
    *param_2 = (long)pDVar2;
    return (pDVar2 != (DH *)0x0) * '\x02';
  }
  if (param_1 == 2) {
    DH_free((DH *)*param_2);
    *param_2 = 0;
    return '\x02';
  }
  if (param_1 == 5) {
    lVar1 = *param_2;
    DH_clear_flags(lVar1,0xf000);
    DH_set_flags(lVar1,0);
    ossl_dh_cache_named_group(lVar1);
    *(long *)(lVar1 + 200) = *(long *)(lVar1 + 200) + 1;
  }
  return '\x01';
}



undefined1 * DHparams_it(void)

{
  return local_it_2;
}



DH * d2i_DHparams(DH **a,uchar **pp,long length)

{
  ASN1_ITEM *it;
  DH *pDVar1;
  
  it = (ASN1_ITEM *)DHparams_it();
  pDVar1 = (DH *)ASN1_item_d2i((ASN1_VALUE **)a,pp,length,it);
  return pDVar1;
}



int i2d_DHparams(DH *a,uchar **pp)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)DHparams_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,pp,it);
  return iVar1;
}



void d2i_int_dhx(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_1);
  return;
}



void i2d_int_dhx(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_1);
  return;
}



DH * d2i_DHxparams(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  DH *dh;
  undefined8 *ptr;
  ulong uVar1;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
    ptr = (undefined8 *)d2i_int_dhx(0,param_2,param_3);
    if (ptr != (undefined8 *)0x0) {
      if (param_1 != (undefined8 *)0x0) {
        DH_free((DH *)*param_1);
        *param_1 = dh;
      }
      DH_set0_pqg(dh,*ptr,ptr[1],ptr[2]);
      ossl_ffc_params_set0_j(&dh->p,ptr[3]);
      if (ptr[4] != 0) {
        uVar1 = BN_get_word(*(BIGNUM **)(ptr[4] + 8));
        ossl_ffc_params_set_validate_params
                  (&dh->p,*(undefined8 *)(*(int **)ptr[4] + 2),(long)**(int **)ptr[4],
                   uVar1 & 0xffffffff);
        ASN1_BIT_STRING_free(*(ASN1_BIT_STRING **)ptr[4]);
        BN_free(*(BIGNUM **)(ptr[4] + 8));
        CRYPTO_free((void *)ptr[4]);
        ptr[4] = 0;
      }
      CRYPTO_free(ptr);
      DH_clear_flags(dh,0xf000);
      DH_set_flags(dh,0x1000);
      return dh;
    }
    DH_free(dh);
  }
  return (DH *)0x0;
}



undefined4 i2d_DHxparams(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  BIGNUM *a;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined1 local_88 [16];
  int local_78 [2];
  long local_70 [3];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_90 = 0;
  ossl_ffc_params_get0_pqg(param_1 + 8,local_58,local_50,local_48);
  local_40 = *(undefined8 *)(param_1 + 0x20);
  ossl_ffc_params_get_validate_params(param_1 + 8,local_70,&local_90,&local_94);
  local_78[0] = (int)local_90;
  if (((local_94 == -1) || (local_70[0] == 0)) || (local_78[0] < 1)) {
    puVar3 = (undefined1 *)0x0;
LAB_001002f2:
    local_38 = puVar3;
    uVar1 = i2d_int_dhx(local_58,param_2);
  }
  else {
    local_70[1] = 8;
    local_88._0_8_ = local_78;
    uVar1 = 0;
    a = BN_new();
    local_88._8_8_ = a;
    if (a == (BIGNUM *)0x0) goto LAB_0010030e;
    iVar2 = BN_set_word(a,(long)local_94);
    puVar3 = local_88;
    if (iVar2 != 0) goto LAB_001002f2;
    uVar1 = 0;
  }
  BN_free((BIGNUM *)local_88._8_8_);
LAB_0010030e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


