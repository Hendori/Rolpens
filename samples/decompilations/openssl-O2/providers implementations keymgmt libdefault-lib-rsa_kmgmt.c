
undefined1 * rsa_import_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = rsa_key_types;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * rsa_gettable_params(void)

{
  return rsa_params;
}



undefined1 * rsa_gen_settable_params(void)

{
  return settable_2;
}



undefined1 * rsapss_gen_settable_params(void)

{
  return settable_0;
}



undefined * rsa_query_operation_name(void)

{
  return &_LC0;
}



undefined8 rsa_dup(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && ((param_2 & 3) != 0)) {
    uVar2 = ossl_rsa_dup(param_1,param_2);
    return uVar2;
  }
  return 0;
}



undefined4 rsa_export(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = ossl_rsa_get0_pss_params_30();
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 == 0) || (param_1 == 0)) || ((param_2 & 0x83) == 0)) ||
     (lVar4 = OSSL_PARAM_BLD_new(), lVar4 == 0)) {
    uVar2 = 0;
  }
  else {
    if ((((((param_2 & 0x80) == 0) ||
          (iVar1 = ossl_rsa_pss_params_30_is_unrestricted(uVar3), iVar1 != 0)) ||
         (iVar1 = ossl_rsa_pss_params_30_todata(uVar3,lVar4,0), iVar1 != 0)) &&
        (((param_2 & 3) == 0 || (iVar1 = ossl_rsa_todata(param_1,lVar4,0,param_2 & 1), iVar1 != 0)))
        ) && (lVar5 = OSSL_PARAM_BLD_to_param(lVar4), lVar5 != 0)) {
      uVar2 = (*param_3)(lVar5,param_4);
      OSSL_PARAM_free(lVar5);
    }
    else {
      uVar2 = 0;
    }
    OSSL_PARAM_BLD_free(lVar4);
  }
  return uVar2;
}



undefined8 rsapss_load(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if ((param_2 == 8) && (iVar2 != 0)) {
    uVar1 = *param_1;
    iVar2 = RSA_test_flags(uVar1,0xf000);
    if (iVar2 == 0x1000) {
      *param_1 = 0;
      return uVar1;
    }
  }
  return 0;
}



bool rsa_import(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  iVar1 = ossl_prov_is_running();
  if (((param_1 == 0) || (iVar1 == 0)) || ((param_2 & 0x83) == 0)) {
LAB_00100226:
    bVar5 = false;
  }
  else {
    iVar1 = RSA_test_flags(param_1,0xf000);
    if ((param_2 & 0x80) != 0) {
      uVar3 = ossl_rsa_get0_libctx(param_1);
      uVar4 = ossl_rsa_get0_pss_params_30(param_1);
      iVar2 = ossl_rsa_pss_params_30_fromdata(uVar4,&local_44,param_3,uVar3);
      if ((iVar2 == 0) ||
         ((iVar1 != 0x1000 && (iVar1 = ossl_rsa_pss_params_30_is_unrestricted(uVar4), iVar1 == 0))))
      goto LAB_00100226;
    }
    bVar5 = true;
    if ((param_2 & 3) != 0) {
      iVar1 = ossl_rsa_fromdata(param_1,param_3,param_2 & 1);
      bVar5 = iVar1 != 0;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



bool rsa_validate(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x83) != 0) {
    if ((~param_2 & 3) == 0) {
      iVar1 = ossl_rsa_validate_pairwise(param_1);
      return iVar1 != 0;
    }
    if (((param_2 & 1) != 0) && (iVar1 = ossl_rsa_validate_private(param_1), iVar1 == 0)) {
      return false;
    }
    if ((param_2 & 2) != 0) {
      iVar1 = ossl_rsa_validate_public(param_1);
      return iVar1 != 0;
    }
  }
  return true;
}



bool rsa_has(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if (((param_2 & 0x83) != 0) && ((param_2 & 3) != 0)) {
    lVar2 = RSA_get0_n(param_1);
    if (lVar2 == 0) {
      return false;
    }
    if (((param_2 & 2) != 0) && (lVar2 = RSA_get0_e(param_1), lVar2 == 0)) {
      return false;
    }
    if ((param_2 & 1) != 0) {
      lVar2 = RSA_get0_d(param_1);
      return lVar2 != 0;
    }
  }
  return true;
}



bool rsa_get_params(RSA *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = ossl_rsa_get0_pss_params_30();
  iVar1 = RSA_test_flags(param_1,0xf000);
  lVar5 = RSA_get0_n(param_1);
  lVar6 = OSSL_PARAM_locate(param_2,&_LC1);
  if (lVar6 == 0) {
    lVar6 = OSSL_PARAM_locate(param_2,"security-bits");
    if (lVar6 != 0) {
      if (lVar5 == 0) {
        return false;
      }
      goto LAB_00100490;
    }
    lVar6 = OSSL_PARAM_locate(param_2,"max-size");
    if (lVar6 != 0) {
      if (lVar5 == 0) {
        return false;
      }
      goto LAB_001004c1;
    }
  }
  else {
    if (lVar5 == 0) {
      return false;
    }
    uVar2 = RSA_bits(param_1);
    iVar3 = OSSL_PARAM_set_int(lVar6,uVar2);
    if (iVar3 == 0) {
      return false;
    }
    lVar6 = OSSL_PARAM_locate(param_2,"security-bits");
    if (lVar6 != 0) {
LAB_00100490:
      uVar2 = RSA_security_bits(param_1);
      iVar3 = OSSL_PARAM_set_int(lVar6,uVar2);
      if (iVar3 == 0) {
        return false;
      }
    }
    lVar6 = OSSL_PARAM_locate(param_2,"max-size");
    if (lVar6 != 0) {
LAB_001004c1:
      iVar3 = RSA_size(param_1);
      iVar3 = OSSL_PARAM_set_int(lVar6,iVar3);
      if (iVar3 == 0) {
        return false;
      }
    }
  }
  lVar5 = OSSL_PARAM_locate(param_2,"default-digest");
  if (lVar5 == 0) {
LAB_00100512:
    lVar5 = OSSL_PARAM_locate(param_2,"mandatory-digest");
    if (lVar5 == 0) {
      if (iVar1 != 0x1000) goto LAB_0010053a;
    }
    else {
      if (iVar1 != 0x1000) goto LAB_0010053a;
LAB_001005c7:
      iVar1 = ossl_rsa_pss_params_30_is_unrestricted(uVar4);
      if (iVar1 == 0) {
        uVar2 = ossl_rsa_pss_params_30_hashalg(uVar4);
        lVar6 = ossl_rsa_oaeppss_nid2name(uVar2);
        if (lVar6 == 0) {
          return false;
        }
        iVar1 = OSSL_PARAM_set_utf8_string(lVar5,lVar6);
        if (iVar1 == 0) {
          return false;
        }
      }
    }
  }
  else {
    if ((iVar1 != 0x1000) || (iVar3 = ossl_rsa_pss_params_30_is_unrestricted(uVar4), iVar3 != 0)) {
      iVar3 = OSSL_PARAM_set_utf8_string(lVar5,"SHA256");
      if (iVar3 == 0) {
        return false;
      }
      goto LAB_00100512;
    }
    lVar5 = OSSL_PARAM_locate(param_2,"mandatory-digest");
    if (lVar5 != 0) goto LAB_001005c7;
  }
  iVar1 = ossl_rsa_pss_params_30_todata(uVar4,0,param_2);
  if (iVar1 == 0) {
    return false;
  }
LAB_0010053a:
  iVar1 = ossl_rsa_todata(param_1,0,param_2,1);
  return iVar1 != 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rsa_freedata(RSA *r)

{
  RSA_free(r);
  return;
}



RSA * rsa_gen(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  RSA *pRVar2;
  long lVar3;
  undefined8 uVar4;
  RSA *r;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (RSA *)0x0;
  }
  if (param_1 == (undefined8 *)0x0) {
    return (RSA *)0x0;
  }
  if (*(int *)(param_1 + 2) == 0) {
    iVar1 = ossl_rsa_pss_params_30_is_unrestricted(param_1 + 6);
    if (iVar1 != 0) goto LAB_001006c9;
    lVar3 = 0;
    r = (RSA *)0x0;
  }
  else {
    if (*(int *)(param_1 + 2) != 0x1000) {
      return (RSA *)0x0;
    }
LAB_001006c9:
    pRVar2 = (RSA *)ossl_rsa_new_with_ctx(*param_1);
    if (pRVar2 == (RSA *)0x0) {
      return (RSA *)0x0;
    }
    param_1[9] = param_2;
    param_1[10] = param_3;
    lVar3 = BN_GENCB_new();
    if (lVar3 != 0) {
      BN_GENCB_set(lVar3,rsa_gencb,param_1);
    }
    iVar1 = RSA_generate_multi_prime_key
                      (pRVar2,*(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 5),param_1[4],
                       lVar3);
    r = pRVar2;
    if (iVar1 != 0) {
      uVar4 = ossl_rsa_get0_pss_params_30(pRVar2);
      iVar1 = ossl_rsa_pss_params_30_copy(uVar4,param_1 + 6);
      if (iVar1 != 0) {
        RSA_clear_flags(pRVar2,0xf000);
        r = (RSA *)0x0;
        RSA_set_flags(pRVar2,*(undefined4 *)(param_1 + 2));
        goto LAB_0010071b;
      }
    }
  }
  pRVar2 = (RSA *)0x0;
LAB_0010071b:
  BN_GENCB_free(lVar3);
  RSA_free(r);
  return pRVar2;
}



void rsa_gencb(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_20;
  
  bVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_2;
  local_9c = param_1;
  lVar1 = BN_GENCB_get_arg(param_3);
  puVar3 = &local_98;
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  OSSL_PARAM_construct_int(&local_d8,"potential",&local_9c);
  local_78 = local_b8;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  OSSL_PARAM_construct_int(&local_d8,"iteration",&local_a0);
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  local_50 = local_b8;
  local_60 = local_c8;
  uStack_58 = uStack_c0;
  (**(code **)(lVar1 + 0x48))(&local_98,*(undefined8 *)(lVar1 + 0x50));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long rsa_newdata(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = ossl_rsa_new_with_ctx(uVar2);
    if (lVar3 != 0) {
      RSA_clear_flags(lVar3,0xf000);
      RSA_set_flags(lVar3,0);
    }
  }
  return lVar3;
}



long rsapss_newdata(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar3 = ossl_rsa_new_with_ctx(uVar2);
    if (lVar3 != 0) {
      RSA_clear_flags(lVar3,0xf000);
      RSA_set_flags(lVar3,0x1000);
    }
  }
  return lVar3;
}



ulong rsa_match(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  pBVar3 = (BIGNUM *)RSA_get0_e(param_2);
  pBVar4 = (BIGNUM *)RSA_get0_e(param_1);
  iVar1 = BN_cmp(pBVar4,pBVar3);
  if ((param_3 & 3) != 0) {
    if ((param_3 & 2) != 0) {
      pBVar3 = (BIGNUM *)RSA_get0_n(param_1);
      pBVar4 = (BIGNUM *)RSA_get0_n(param_2);
      if ((pBVar3 != (BIGNUM *)0x0) && (pBVar4 != (BIGNUM *)0x0)) {
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = BN_cmp(pBVar3,pBVar4);
        return (ulong)(iVar1 == 0);
      }
    }
    if ((param_3 & 1) != 0) {
      pBVar3 = (BIGNUM *)RSA_get0_d(param_1);
      pBVar4 = (BIGNUM *)RSA_get0_d(param_2);
      if (((pBVar3 != (BIGNUM *)0x0) && (pBVar4 != (BIGNUM *)0x0)) && (iVar1 == 0)) {
        iVar1 = BN_cmp(pBVar3,pBVar4);
        return (ulong)(iVar1 == 0);
      }
    }
    return 0;
  }
  return (ulong)(iVar1 == 0);
}



void rsa_gen_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    BN_clear_free(*(BIGNUM **)((long)param_1 + 0x20));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined1 * rsa_export_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = rsa_key_types;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined8 rsa_load(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if ((param_2 == 8) && (iVar2 != 0)) {
    uVar1 = *param_1;
    iVar2 = RSA_test_flags(uVar1,0xf000);
    if (iVar2 == 0) {
      *param_1 = 0;
      return uVar1;
    }
  }
  return 0;
}



bool rsa_gen_set_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == (long *)0x0) {
    return true;
  }
  if (*param_2 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 3);
      if (iVar1 == 0) {
        return false;
      }
      if ((ulong)param_1[3] < 0x200) {
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/rsa_kmgmt.c",0x202,"rsa_gen_set_params");
        ERR_set_error(0x39,0xab,0);
        return false;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"primes");
    if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 5), iVar1 == 0)) {
      return false;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC11);
    if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_get_BN(lVar2,param_1 + 4), iVar1 == 0)) {
      return false;
    }
    if (*(int *)(param_1 + 2) == 0x1000) {
      iVar1 = ossl_rsa_pss_params_30_fromdata(param_1 + 6,(long)param_1 + 0x44,param_2,*param_1);
      return iVar1 != 0;
    }
  }
  return true;
}



undefined8 * gen_init(undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  BIGNUM *a;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && ((param_2 & 3) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x58,"providers/implementations/keymgmt/rsa_kmgmt.c",0x1cd);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar2;
      a = BN_new();
      ptr[4] = a;
      if (a != (BIGNUM *)0x0) {
        iVar1 = BN_set_word(a,0x10001);
        if (iVar1 != 0) {
          ptr[3] = 0x800;
          ptr[5] = 2;
          *(undefined4 *)(ptr + 2) = param_3;
          iVar1 = rsa_gen_set_params(ptr,param_4);
          if (iVar1 != 0) {
            return ptr;
          }
        }
        a = (BIGNUM *)ptr[4];
      }
      BN_free(a);
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void rsa_gen_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  gen_init(param_1,param_2,0,param_3);
  return;
}



void rsapss_gen_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  gen_init(param_1,param_2,0x1000,param_3);
  return;
}


