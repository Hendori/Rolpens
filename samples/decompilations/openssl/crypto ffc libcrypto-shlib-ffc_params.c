
void ossl_ffc_params_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0xb] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x60U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 3;
  return;
}



void ossl_ffc_params_cleanup(undefined8 *param_1)

{
  BN_free((BIGNUM *)*param_1);
  BN_free((BIGNUM *)param_1[1]);
  BN_free((BIGNUM *)param_1[2]);
  BN_free((BIGNUM *)param_1[3]);
  CRYPTO_free((void *)param_1[4]);
  ossl_ffc_params_init(param_1);
  return;
}



void ossl_ffc_params_set0_pqg(undefined8 *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  if ((param_2 != (BIGNUM *)0x0) && ((BIGNUM *)*param_1 != param_2)) {
    BN_free((BIGNUM *)*param_1);
    *param_1 = param_2;
  }
  if ((param_3 != (BIGNUM *)0x0) && ((BIGNUM *)param_1[1] != param_3)) {
    BN_free((BIGNUM *)param_1[1]);
    param_1[1] = param_3;
  }
  if ((param_4 != (BIGNUM *)0x0) && ((BIGNUM *)param_1[2] != param_4)) {
    BN_free((BIGNUM *)param_1[2]);
    param_1[2] = param_4;
  }
  return;
}



void ossl_ffc_params_get0_pqg
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_1[2];
  }
  return;
}



void ossl_ffc_params_set0_j(long param_1,undefined8 param_2)

{
  BN_free(*(BIGNUM **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



undefined8 ossl_ffc_params_set_seed(long param_1,void *param_2,long param_3)

{
  void *ptr;
  long lVar1;
  
  ptr = *(void **)(param_1 + 0x20);
  if (ptr != (void *)0x0) {
    if (ptr == param_2) {
      return 1;
    }
    CRYPTO_free(ptr);
  }
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto/ffc/ffc_params.c",0x5d);
    *(long *)(param_1 + 0x20) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x28) = param_3;
  }
  return 1;
}



void ossl_ffc_params_set_gindex(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



void ossl_ffc_params_set_pcounter(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



void ossl_ffc_params_set_h(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



void ossl_ffc_params_set_flags(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



void ossl_ffc_params_enable_flags(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x40);
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x40) | param_2;
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  return;
}



void ossl_ffc_set_digest(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



undefined8
ossl_ffc_params_set_validate_params
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_ffc_params_set_seed();
  if ((int)uVar1 != 0) {
    *(undefined4 *)(param_1 + 0x30) = param_4;
    uVar1 = 1;
  }
  return uVar1;
}



void ossl_ffc_params_get_validate_params
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x28);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x30);
  }
  return;
}



undefined8 ossl_ffc_params_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  BIGNUM *pBVar3;
  long lVar4;
  
  pBVar3 = (BIGNUM *)*param_2;
  if ((pBVar3 == (BIGNUM *)0x0) ||
     (((iVar2 = BN_get_flags(pBVar3,2), iVar2 != 0 && (iVar2 = BN_get_flags(pBVar3,1), iVar2 == 0))
      || (pBVar3 = BN_dup(pBVar3), pBVar3 != (BIGNUM *)0x0)))) {
    BN_clear_free((BIGNUM *)*param_1);
    *param_1 = pBVar3;
    pBVar3 = (BIGNUM *)param_2[2];
    if ((pBVar3 == (BIGNUM *)0x0) ||
       (((iVar2 = BN_get_flags(pBVar3,2), iVar2 != 0 && (iVar2 = BN_get_flags(pBVar3,1), iVar2 == 0)
         ) || (pBVar3 = BN_dup(pBVar3), pBVar3 != (BIGNUM *)0x0)))) {
      BN_clear_free((BIGNUM *)param_1[2]);
      param_1[2] = pBVar3;
      pBVar3 = (BIGNUM *)param_2[1];
      if (((pBVar3 == (BIGNUM *)0x0) ||
          ((iVar2 = BN_get_flags(pBVar3,2), iVar2 != 0 &&
           (iVar2 = BN_get_flags(pBVar3,1), iVar2 == 0)))) ||
         (pBVar3 = BN_dup(pBVar3), pBVar3 != (BIGNUM *)0x0)) {
        BN_clear_free((BIGNUM *)param_1[1]);
        param_1[1] = pBVar3;
        pBVar3 = (BIGNUM *)param_2[3];
        if ((pBVar3 == (BIGNUM *)0x0) ||
           (((iVar2 = BN_get_flags(pBVar3,2), iVar2 != 0 &&
             (iVar2 = BN_get_flags(pBVar3,1), iVar2 == 0)) ||
            (pBVar3 = BN_dup(pBVar3), pBVar3 != (BIGNUM *)0x0)))) {
          BN_clear_free((BIGNUM *)param_1[3]);
          param_1[3] = pBVar3;
          uVar1 = param_2[10];
          param_1[9] = param_2[9];
          param_1[10] = uVar1;
          CRYPTO_free((void *)param_1[4]);
          uVar1 = param_2[5];
          lVar4 = param_2[4];
          param_1[5] = uVar1;
          if (lVar4 == 0) {
            param_1[4] = 0;
          }
          else {
            lVar4 = CRYPTO_memdup(lVar4,uVar1,"crypto/ffc/ffc_params.c",0xc2);
            param_1[4] = lVar4;
            if (lVar4 == 0) {
              return 0;
            }
          }
          uVar1 = param_2[7];
          param_1[6] = param_2[6];
          param_1[7] = uVar1;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
          return 1;
        }
      }
    }
  }
  return 0;
}



bool ossl_ffc_params_cmp(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = BN_cmp((BIGNUM *)*param_1,(BIGNUM *)*param_2);
  if ((iVar1 == 0) && (iVar1 = BN_cmp((BIGNUM *)param_1[2],(BIGNUM *)param_2[2]), iVar1 == 0)) {
    if (param_3 != 0) {
      return true;
    }
    iVar1 = BN_cmp((BIGNUM *)param_1[1],(BIGNUM *)param_2[1]);
    return iVar1 == 0;
  }
  return false;
}



bool ossl_ffc_params_todata(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((((((*param_1 == 0) || (iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC1), iVar1 != 0))
        && ((param_1[1] == 0 || (iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC2), iVar1 != 0)
            ))) &&
       ((param_1[2] == 0 || (iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC3), iVar1 != 0))))
      && ((param_1[3] == 0 || (iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC5), iVar1 != 0)))
      ) && ((((iVar1 = ossl_param_build_set_int(param_2,param_3,"gindex",(int)param_1[7]),
              iVar1 != 0 &&
              (iVar1 = ossl_param_build_set_int(param_2,param_3,"pcounter",(int)param_1[6]),
              iVar1 != 0)) &&
             (iVar1 = ossl_param_build_set_int
                                (param_2,param_3,"hindex",*(undefined4 *)((long)param_1 + 0x3c)),
             iVar1 != 0)) &&
            ((param_1[4] == 0 ||
             (iVar1 = ossl_param_build_set_octet_string(param_2,param_3,&_LC8,param_1[4],param_1[5])
             , iVar1 != 0)))))) {
    if (*(int *)((long)param_1 + 0x34) != 0) {
      uVar2 = ossl_ffc_uid_to_dh_named_group();
      lVar3 = ossl_ffc_named_group_get_name(uVar2);
      if (lVar3 == 0) {
        return false;
      }
      iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"group",lVar3);
      if (iVar1 == 0) {
        return false;
      }
    }
    iVar1 = ossl_param_build_set_int(param_2,param_3,"validate-pq",*(uint *)(param_1 + 8) & 1);
    if (((iVar1 != 0) &&
        (iVar1 = ossl_param_build_set_int
                           (param_2,param_3,"validate-g",*(uint *)(param_1 + 8) >> 1 & 1),
        iVar1 != 0)) &&
       ((iVar1 = ossl_param_build_set_int
                           (param_2,param_3,"validate-legacy",*(uint *)(param_1 + 8) >> 2 & 1),
        iVar1 != 0 &&
        ((param_1[9] == 0 ||
         (iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"digest"), iVar1 != 0)))))) {
      if (param_1[10] != 0) {
        iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"properties");
        return iVar1 != 0;
      }
      return true;
    }
  }
  return false;
}



bool ossl_ffc_params_print(BIO *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  iVar1 = ASN1_bn_print(param_1,"prime P:",(BIGNUM *)*param_2,(uchar *)0x0,param_3);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = ASN1_bn_print(param_1,"generator G:",(BIGNUM *)param_2[2],(uchar *)0x0,param_3);
  if (iVar1 == 0) {
    return false;
  }
  if (((BIGNUM *)param_2[1] != (BIGNUM *)0x0) &&
     (iVar1 = ASN1_bn_print(param_1,"subgroup order Q:",(BIGNUM *)param_2[1],(uchar *)0x0,param_3),
     iVar1 == 0)) {
    return false;
  }
  if (((BIGNUM *)param_2[3] != (BIGNUM *)0x0) &&
     (iVar1 = ASN1_bn_print(param_1,"subgroup factor:",(BIGNUM *)param_2[3],(uchar *)0x0,param_3),
     iVar1 == 0)) {
    return false;
  }
  if (param_2[4] != 0) {
    iVar1 = BIO_indent(param_1,param_3,0x80);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = BIO_puts(param_1,"seed:");
    if (iVar1 < 1) {
      return false;
    }
    uVar4 = 0;
    while (uVar2 = param_2[5], uVar4 < uVar2) {
      if (uVar4 * -0x1111111111111111 < 0x1111111111111112) {
        iVar1 = BIO_puts(param_1,"\n");
        if (iVar1 < 1) {
          return false;
        }
        iVar1 = BIO_indent(param_1,param_3 + 4,0x80);
        if (iVar1 == 0) {
          return false;
        }
        uVar2 = param_2[5];
      }
      puVar3 = &_LC21;
      if (uVar4 + 1 != uVar2) {
        puVar3 = &_LC23;
      }
      iVar1 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_2[4] + uVar4),puVar3);
      uVar4 = uVar4 + 1;
      if (iVar1 < 1) {
        return false;
      }
    }
    iVar1 = BIO_write(param_1,&_LC20,1);
    if (iVar1 < 1) {
      return false;
    }
  }
  if (*(int *)(param_2 + 6) == -1) {
    return true;
  }
  iVar1 = BIO_indent(param_1,param_3,0x80);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = BIO_printf(param_1,"counter: %d\n",(ulong)*(uint *)(param_2 + 6));
  return 0 < iVar1;
}


