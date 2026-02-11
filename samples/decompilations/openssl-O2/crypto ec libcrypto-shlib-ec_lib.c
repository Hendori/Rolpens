
undefined8 * ossl_ec_group_new_ex(undefined8 param_1,char *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  BIGNUM *pBVar3;
  
  if (param_3 == (byte *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x24,"ossl_ec_group_new_ex");
    ERR_set_error(0x10,0x6c,0);
    return (undefined8 *)0x0;
  }
  if (*(long *)(param_3 + 8) == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x28,"ossl_ec_group_new_ex");
    ERR_set_error(0x10,0xc0101,0);
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0xb8,"crypto/ec/ec_lib.c",0x2c);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  ptr[0x15] = param_1;
  if (param_2 == (char *)0x0) {
LAB_00100076:
    *ptr = param_3;
    if ((*param_3 & 2) == 0) {
      pBVar3 = BN_new();
      ptr[2] = pBVar3;
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_001000d4;
      pBVar3 = BN_new();
      ptr[3] = pBVar3;
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_001000d0;
    }
    *(undefined4 *)((long)ptr + 0x24) = 0;
    *(undefined4 *)((long)ptr + 0x2c) = 4;
    iVar1 = (**(code **)(param_3 + 8))(ptr);
    if (iVar1 != 0) {
      return ptr;
    }
  }
  else {
    pcVar2 = CRYPTO_strdup(param_2,"crypto/ec/ec_lib.c",0x32);
    ptr[0x16] = pcVar2;
    if (pcVar2 != (char *)0x0) goto LAB_00100076;
  }
LAB_001000d0:
  pBVar3 = (BIGNUM *)ptr[2];
LAB_001000d4:
  BN_free(pBVar3);
  BN_free((BIGNUM *)ptr[3]);
  CRYPTO_free((void *)ptr[0x16]);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



EC_GROUP * EC_GROUP_new(EC_METHOD *meth)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = (EC_GROUP *)ossl_ec_group_new_ex(0,0,meth);
  return pEVar1;
}



void EC_pre_comp_free(long param_1)

{
  if (*(int *)(param_1 + 0x98) == 5) {
    EC_nistz256_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x98) != 6) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  EC_ec_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



EC_METHOD * EC_GROUP_method_of(EC_GROUP *group)

{
  return *(EC_METHOD **)group;
}



int EC_METHOD_get_field_type(EC_METHOD *meth)

{
  return *(int *)(meth + 4);
}



EC_POINT * EC_GROUP_get0_generator(EC_GROUP *group)

{
  return *(EC_POINT **)(group + 8);
}



undefined8 EC_GROUP_get_mont_data(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



int EC_GROUP_get_order(EC_GROUP *group,BIGNUM *order,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  if (*(BIGNUM **)(group + 0x10) != (BIGNUM *)0x0) {
    pBVar2 = BN_copy(order,*(BIGNUM **)(group + 0x10));
    if (pBVar2 != (BIGNUM *)0x0) {
      iVar1 = BN_is_zero(order);
      return (int)(iVar1 == 0);
    }
  }
  return 0;
}



undefined8 EC_GROUP_get0_order(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void EC_GROUP_order_bits(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



int EC_GROUP_get_cofactor(EC_GROUP *group,BIGNUM *cofactor,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  if (*(BIGNUM **)(group + 0x18) != (BIGNUM *)0x0) {
    pBVar2 = BN_copy(cofactor,*(BIGNUM **)(group + 0x18));
    if (pBVar2 != (BIGNUM *)0x0) {
      iVar1 = BN_is_zero(*(undefined8 *)(group + 0x18));
      return (int)(iVar1 == 0);
    }
  }
  return 0;
}



undefined8 EC_GROUP_get0_cofactor(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



void EC_GROUP_set_curve_name(EC_GROUP *group,int nid)

{
  *(int *)(group + 0x20) = nid;
  *(uint *)(group + 0x24) = (uint)(nid != 0);
  return;
}



int EC_GROUP_get_curve_name(EC_GROUP *group)

{
  return *(int *)(group + 0x20);
}



undefined8 EC_GROUP_get0_field(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined4 EC_GROUP_get_field_type(long *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}



void EC_GROUP_set_asn1_flag(EC_GROUP *group,int flag)

{
  *(int *)(group + 0x24) = flag;
  return;
}



int EC_GROUP_get_asn1_flag(EC_GROUP *group)

{
  return *(int *)(group + 0x24);
}



void EC_GROUP_set_point_conversion_form(EC_GROUP *group,point_conversion_form_t form)

{
  *(point_conversion_form_t *)(group + 0x2c) = form;
  return;
}



point_conversion_form_t EC_GROUP_get_point_conversion_form(EC_GROUP *param_1)

{
  return *(point_conversion_form_t *)(param_1 + 0x2c);
}



size_t EC_GROUP_set_seed(EC_GROUP *param_1,uchar *param_2,size_t len)

{
  void *__dest;
  size_t sVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((len == 0) || (param_2 == (uchar *)0x0)) {
    sVar1 = 1;
  }
  else {
    __dest = CRYPTO_malloc((int)len,"crypto/ec/ec_lib.c",0x21b);
    *(void **)(param_1 + 0x30) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,len);
      *(size_t *)(param_1 + 0x38) = len;
      return len;
    }
    sVar1 = 0;
  }
  return sVar1;
}



uchar * EC_GROUP_get0_seed(EC_GROUP *x)

{
  return *(uchar **)(x + 0x30);
}



size_t EC_GROUP_get_seed_len(EC_GROUP *param_1)

{
  return *(size_t *)(param_1 + 0x38);
}



undefined8 EC_GROUP_set_curve(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x28))();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_lib.c",0x231,"EC_GROUP_set_curve");
  ERR_set_error(0x10,0xc0101,0);
  return 0;
}



undefined8 EC_GROUP_get_curve(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001004c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_lib.c",0x23b,"EC_GROUP_get_curve");
  ERR_set_error(0x10,0xc0101,0);
  return 0;
}



void EC_GROUP_set_curve_GFp(void)

{
  EC_GROUP_set_curve();
  return;
}



void EC_GROUP_get_curve_GFp(void)

{
  EC_GROUP_get_curve();
  return;
}



void EC_GROUP_set_curve_GF2m(void)

{
  EC_GROUP_set_curve();
  return;
}



void EC_GROUP_get_curve_GF2m(void)

{
  EC_GROUP_get_curve();
  return;
}



int EC_GROUP_get_degree(EC_GROUP *group)

{
  int iVar1;
  
  if (*(code **)(*(long *)group + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)group + 0x38))();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_lib.c",0x260,"EC_GROUP_get_degree");
  ERR_set_error(0x10,0xc0101,0);
  return 0;
}



int EC_GROUP_check_discriminant(EC_GROUP *group,BN_CTX *ctx)

{
  int iVar1;
  
  if (*(code **)(*(long *)group + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001005c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)group + 0x48))();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_lib.c",0x269,"EC_GROUP_check_discriminant");
  ERR_set_error(0x10,0xc0101,0);
  return 0;
}



EC_POINT * EC_POINT_new(EC_GROUP *group)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  EC_POINT *ptr;
  
  if (group == (EC_GROUP *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x2d2,"EC_POINT_new");
    ERR_set_error(0x10,0xc0102,0);
  }
  else if (*(long *)(*(long *)group + 0x50) == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x2d6,"EC_POINT_new");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    ptr = (EC_POINT *)CRYPTO_zalloc(0x30,"crypto/ec/ec_lib.c",0x2da);
    if (ptr != (EC_POINT *)0x0) {
      lVar2 = *(long *)group;
      uVar1 = *(undefined4 *)(group + 0x20);
      *(long *)ptr = lVar2;
      *(undefined4 *)(ptr + 8) = uVar1;
      iVar3 = (**(code **)(lVar2 + 0x50))(ptr);
      if (iVar3 != 0) {
        return ptr;
      }
      CRYPTO_free(ptr);
    }
  }
  return (EC_POINT *)0x0;
}



void EC_POINT_free(EC_POINT *point)

{
  if (point != (EC_POINT *)0x0) {
    if (*(code **)(*(long *)point + 0x58) != (code *)0x0) {
      (**(code **)(*(long *)point + 0x58))();
    }
    CRYPTO_free(point);
    return;
  }
  return;
}



void EC_GROUP_free(EC_GROUP *group)

{
  if (group != (EC_GROUP *)0x0) {
    if (*(code **)(*(long *)group + 0x10) != (code *)0x0) {
      (**(code **)(*(long *)group + 0x10))();
    }
    EC_pre_comp_free(group);
    BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
    EC_POINT_free(*(EC_POINT **)(group + 8));
    BN_free(*(BIGNUM **)(group + 0x10));
    BN_free(*(BIGNUM **)(group + 0x18));
    CRYPTO_free(*(void **)(group + 0x30));
    CRYPTO_free(*(void **)(group + 0xb0));
    CRYPTO_free(group);
    return;
  }
  return;
}



void EC_POINT_clear_free(EC_POINT *point)

{
  code *pcVar1;
  
  if (point == (EC_POINT *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*(long *)point + 0x60);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*(long *)point + 0x58), pcVar1 != (code *)0x0)
     ) {
    (*pcVar1)(point);
  }
  CRYPTO_clear_free(point,0x30,"crypto/ec/ec_lib.c",0x300);
  return;
}



void EC_GROUP_clear_free(EC_GROUP *group)

{
  code *pcVar1;
  
  if (group == (EC_GROUP *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*(long *)group + 0x18);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*(long *)group + 0x10), pcVar1 != (code *)0x0)
     ) {
    (*pcVar1)(group);
  }
  EC_pre_comp_free(group);
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
  EC_POINT_clear_free(*(EC_POINT **)(group + 8));
  BN_clear_free(*(BIGNUM **)(group + 0x10));
  BN_clear_free(*(BIGNUM **)(group + 0x18));
  CRYPTO_clear_free(*(undefined8 *)(group + 0x30),*(undefined8 *)(group + 0x38),"crypto/ec/ec_lib.c"
                    ,0x9d);
  CRYPTO_clear_free(group,0xb8,"crypto/ec/ec_lib.c",0x9e);
  return;
}



int EC_POINT_copy(EC_POINT *dst,EC_POINT *src)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)dst + 0x68);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x306,"EC_POINT_copy");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((*(long *)dst == *(long *)src) &&
       ((*(int *)(dst + 8) == 0 || *(int *)(dst + 8) == *(int *)(src + 8) ||
        (*(int *)(src + 8) == 0)))) {
      if (dst == src) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x0010093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x30d,"EC_POINT_copy");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



int EC_GROUP_copy(EC_GROUP *dst,EC_GROUP *src)

{
  long lVar1;
  int iVar2;
  BN_MONT_CTX *pBVar3;
  void *__dest;
  BIGNUM *pBVar4;
  undefined8 uVar5;
  BN_MONT_CTX *mont;
  EC_POINT *point;
  EC_POINT *src_00;
  size_t __n;
  
  if (*(long *)(*(long *)dst + 0x20) == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0xa5,"EC_GROUP_copy");
    ERR_set_error(0x10,0xc0101,0);
  }
  else if (*(long *)dst == *(long *)src) {
    if (dst == src) {
      return 1;
    }
    *(undefined8 *)(dst + 0xa8) = *(undefined8 *)(src + 0xa8);
    *(undefined4 *)(dst + 0x20) = *(undefined4 *)(src + 0x20);
    iVar2 = *(int *)(src + 0x98);
    *(int *)(dst + 0x98) = iVar2;
    if (iVar2 == 5) {
      uVar5 = EC_nistz256_pre_comp_dup(*(undefined8 *)(src + 0xa0));
      *(undefined8 *)(dst + 0xa0) = uVar5;
    }
    else if (iVar2 == 6) {
      uVar5 = EC_ec_pre_comp_dup(*(undefined8 *)(src + 0xa0));
      *(undefined8 *)(dst + 0xa0) = uVar5;
    }
    else if (iVar2 == 0) {
      *(undefined8 *)(dst + 0xa0) = 0;
    }
    pBVar3 = *(BN_MONT_CTX **)(src + 0x90);
    mont = *(BN_MONT_CTX **)(dst + 0x90);
    if (pBVar3 == (BN_MONT_CTX *)0x0) {
      BN_MONT_CTX_free(mont);
      *(undefined8 *)(dst + 0x90) = 0;
    }
    else {
      if (mont == (BN_MONT_CTX *)0x0) {
        mont = BN_MONT_CTX_new();
        *(BN_MONT_CTX **)(dst + 0x90) = mont;
        if (mont == (BN_MONT_CTX *)0x0) {
          return 0;
        }
        pBVar3 = *(BN_MONT_CTX **)(src + 0x90);
      }
      pBVar3 = BN_MONT_CTX_copy(mont,pBVar3);
      if (pBVar3 == (BN_MONT_CTX *)0x0) {
        return 0;
      }
    }
    src_00 = *(EC_POINT **)(src + 8);
    point = *(EC_POINT **)(dst + 8);
    if (src_00 == (EC_POINT *)0x0) {
      EC_POINT_clear_free(point);
      *(undefined8 *)(dst + 8) = 0;
    }
    else {
      if (point == (EC_POINT *)0x0) {
        point = EC_POINT_new(dst);
        *(EC_POINT **)(dst + 8) = point;
        if (point == (EC_POINT *)0x0) {
          return 0;
        }
        src_00 = *(EC_POINT **)(src + 8);
      }
      iVar2 = EC_POINT_copy(point,src_00);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (((**(byte **)src & 2) != 0) ||
       ((pBVar4 = BN_copy(*(BIGNUM **)(dst + 0x10),*(BIGNUM **)(src + 0x10)),
        pBVar4 != (BIGNUM *)0x0 &&
        (pBVar4 = BN_copy(*(BIGNUM **)(dst + 0x18),*(BIGNUM **)(src + 0x18)),
        pBVar4 != (BIGNUM *)0x0)))) {
      uVar5 = *(undefined8 *)(src + 0x24);
      lVar1 = *(long *)(src + 0x30);
      *(undefined4 *)(dst + 0x2c) = *(undefined4 *)(src + 0x2c);
      *(undefined8 *)(dst + 0x24) = uVar5;
      if (lVar1 == 0) {
        __n = 0;
        CRYPTO_free(*(void **)(dst + 0x30));
        *(undefined8 *)(dst + 0x30) = 0;
      }
      else {
        CRYPTO_free(*(void **)(dst + 0x30));
        __dest = CRYPTO_malloc((int)*(undefined8 *)(src + 0x38),"crypto/ec/ec_lib.c",0xff);
        *(void **)(dst + 0x30) = __dest;
        if (__dest == (void *)0x0) {
          return 0;
        }
        __n = *(size_t *)(src + 0x38);
        memcpy(__dest,*(void **)(src + 0x30),__n);
      }
      *(size_t *)(dst + 0x38) = __n;
                    /* WARNING: Could not recover jumptable at 0x00100b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(*(long *)dst + 0x20))(dst,src);
      return iVar2;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0xa9,"EC_GROUP_copy");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



EC_GROUP * EC_GROUP_dup(EC_GROUP *src)

{
  int iVar1;
  EC_GROUP *dst;
  
  if ((src != (EC_GROUP *)0x0) &&
     (dst = (EC_GROUP *)
            ossl_ec_group_new_ex
                      (*(undefined8 *)(src + 0xa8),*(undefined8 *)(src + 0xb0),*(undefined8 *)src),
     dst != (EC_GROUP *)0x0)) {
    iVar1 = EC_GROUP_copy(dst,src);
    if (iVar1 != 0) {
      return dst;
    }
    EC_GROUP_free(dst);
  }
  return (EC_GROUP *)0x0;
}



int EC_GROUP_set_generator(EC_GROUP *group,EC_POINT *generator,BIGNUM *order,BIGNUM *cofactor)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BN_CTX *pBVar4;
  BIGNUM *pBVar5;
  EC_POINT *dst;
  BN_MONT_CTX *mont;
  
  if (generator == (EC_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x173,"EC_GROUP_set_generator");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  if (((*(long *)(group + 0x40) == 0) || (iVar1 = BN_is_zero(), iVar1 != 0)) ||
     (iVar1 = BN_is_negative(*(undefined8 *)(group + 0x40)), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x17a,"EC_GROUP_set_generator");
    ERR_set_error(0x10,0x67,0);
    return 0;
  }
  if (((order == (BIGNUM *)0x0) || (iVar1 = BN_is_zero(order), iVar1 != 0)) ||
     (iVar1 = BN_is_negative(order), iVar1 != 0)) {
LAB_00100ddd:
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x185,"EC_GROUP_set_generator");
    ERR_set_error(0x10,0x7a,0);
    return 0;
  }
  iVar1 = BN_num_bits(order);
  iVar2 = BN_num_bits(*(BIGNUM **)(group + 0x40));
  if (iVar2 + 1 < iVar1) goto LAB_00100ddd;
  if ((cofactor != (BIGNUM *)0x0) && (iVar1 = BN_is_negative(cofactor), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",399,"EC_GROUP_set_generator");
    ERR_set_error(0x10,0xa4,0);
    return 0;
  }
  dst = *(EC_POINT **)(group + 8);
  if (dst == (EC_POINT *)0x0) {
    dst = EC_POINT_new(group);
    *(EC_POINT **)(group + 8) = dst;
    if (dst == (EC_POINT *)0x0) {
      return 0;
    }
  }
  iVar1 = EC_POINT_copy(dst,generator);
  if (iVar1 == 0) {
    return 0;
  }
  pBVar3 = BN_copy(*(BIGNUM **)(group + 0x10),order);
  if (pBVar3 == (BIGNUM *)0x0) {
    return 0;
  }
  if ((cofactor != (BIGNUM *)0x0) && (iVar1 = BN_is_zero(cofactor), iVar1 == 0)) {
    pBVar3 = BN_copy(*(BIGNUM **)(group + 0x18),cofactor);
    if (pBVar3 == (BIGNUM *)0x0) {
      return 0;
    }
    goto LAB_00100fbd;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(group + 0x10));
  iVar2 = BN_num_bits(*(BIGNUM **)(group + 0x40));
  if (iVar1 <= (iVar2 + 1) / 2 + 3) {
    BN_zero_ex(*(undefined8 *)(group + 0x18));
    goto LAB_00100fbd;
  }
  pBVar4 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(group + 0xa8));
  if (pBVar4 == (BN_CTX *)0x0) goto LAB_00101041;
  BN_CTX_start(pBVar4);
  pBVar3 = BN_CTX_get(pBVar4);
  if (pBVar3 != (BIGNUM *)0x0) {
    if (*(int *)(*(long *)group + 4) == 0x197) {
      BN_zero_ex(pBVar3);
      iVar1 = BN_num_bits(*(BIGNUM **)(group + 0x40));
      iVar1 = BN_set_bit(pBVar3,iVar1 + -1);
      if (iVar1 != 0) goto LAB_00100f48;
    }
    else {
      pBVar5 = BN_copy(pBVar3,*(BIGNUM **)(group + 0x40));
      if (pBVar5 != (BIGNUM *)0x0) {
LAB_00100f48:
        iVar1 = BN_rshift1(*(BIGNUM **)(group + 0x18),*(BIGNUM **)(group + 0x10));
        if ((iVar1 != 0) &&
           (iVar1 = BN_add(*(BIGNUM **)(group + 0x18),*(BIGNUM **)(group + 0x18),pBVar3), iVar1 != 0
           )) {
          pBVar3 = BN_value_one();
          iVar1 = BN_add(*(BIGNUM **)(group + 0x18),*(BIGNUM **)(group + 0x18),pBVar3);
          if ((iVar1 != 0) &&
             (iVar1 = BN_div(*(BIGNUM **)(group + 0x18),(BIGNUM *)0x0,*(BIGNUM **)(group + 0x18),
                             *(BIGNUM **)(group + 0x10),pBVar4), iVar1 != 0)) {
            BN_CTX_end(pBVar4);
            BN_CTX_free(pBVar4);
LAB_00100fbd:
            iVar1 = BN_is_odd(*(undefined8 *)(group + 0x10));
            if (iVar1 != 0) {
              pBVar4 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(group + 0xa8));
              BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
              *(undefined8 *)(group + 0x90) = 0;
              iVar1 = 0;
              if (pBVar4 != (BN_CTX *)0x0) {
                mont = BN_MONT_CTX_new();
                *(BN_MONT_CTX **)(group + 0x90) = mont;
                if (mont != (BN_MONT_CTX *)0x0) {
                  iVar2 = BN_MONT_CTX_set(mont,*(BIGNUM **)(group + 0x10),pBVar4);
                  if (iVar2 == 0) {
                    BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
                    *(undefined8 *)(group + 0x90) = 0;
                  }
                  else {
                    iVar1 = 1;
                  }
                }
              }
              BN_CTX_free(pBVar4);
              return iVar1;
            }
            BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
            *(undefined8 *)(group + 0x90) = 0;
            return 1;
          }
        }
      }
    }
  }
  BN_CTX_end(pBVar4);
  BN_CTX_free(pBVar4);
LAB_00101041:
  BN_zero_ex(*(undefined8 *)(group + 0x18));
  return 0;
}



EC_POINT * EC_POINT_dup(EC_POINT *src,EC_GROUP *group)

{
  int iVar1;
  EC_POINT *dst;
  
  if ((src != (EC_POINT *)0x0) && (dst = EC_POINT_new(group), dst != (EC_POINT *)0x0)) {
    iVar1 = EC_POINT_copy(dst,src);
    if (iVar1 != 0) {
      return dst;
    }
    EC_POINT_free(dst);
  }
  return (EC_POINT *)0x0;
}



EC_METHOD * EC_POINT_method_of(EC_POINT *point)

{
  return *(EC_METHOD **)point;
}



int EC_POINT_set_to_infinity(EC_GROUP *group,EC_POINT *point)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x332,"EC_POINT_set_to_infinity");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (*(long *)group == *(long *)point) {
                    /* WARNING: Could not recover jumptable at 0x001011bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x336,"EC_POINT_set_to_infinity");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



int EC_POINT_set_Jprojective_coordinates_GFp
              (EC_GROUP *group,EC_POINT *p,BIGNUM *x,BIGNUM *y,BIGNUM *z,BN_CTX *ctx)

{
  int iVar1;
  
  if (*(int *)(*(long *)group + 4) != 0x196) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x343,"EC_POINT_set_Jprojective_coordinates_GFp");
    ERR_set_error(0x10,0xc0101,0);
    return 0;
  }
  if ((*(long *)group == *(long *)p) &&
     (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
      (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
    iVar1 = ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_lib.c",0x347,"EC_POINT_set_Jprojective_coordinates_GFp");
  ERR_set_error(0x10,0x65,0);
  return 0;
}



int EC_POINT_get_Jprojective_coordinates_GFp
              (EC_GROUP *group,EC_POINT *p,BIGNUM *x,BIGNUM *y,BIGNUM *z,BN_CTX *ctx)

{
  int iVar1;
  
  if (*(int *)(*(long *)group + 4) != 0x196) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x354,"EC_POINT_get_Jprojective_coordinates_GFp");
    ERR_set_error(0x10,0xc0101,0);
    return 0;
  }
  if ((*(long *)group == *(long *)p) &&
     (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
      (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
    iVar1 = ossl_ec_GFp_simple_get_Jprojective_coordinates_GFp();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_lib.c",0x358,"EC_POINT_get_Jprojective_coordinates_GFp");
  ERR_set_error(0x10,0x65,0);
  return 0;
}



int EC_POINT_add(EC_GROUP *group,EC_POINT *r,EC_POINT *a,EC_POINT *b,BN_CTX *ctx)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)group;
  if (*(code **)(lVar1 + 0xa0) == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3b1,"EC_POINT_add");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (lVar1 == *(long *)r) {
      iVar2 = *(int *)(group + 0x20);
      if (iVar2 == 0) {
        if ((lVar1 == *(long *)a) && (lVar1 == *(long *)b)) goto LAB_00101452;
      }
      else if (((iVar2 == *(int *)(r + 8)) || (*(int *)(r + 8) == 0)) &&
              ((lVar1 == *(long *)a &&
               ((((*(int *)(a + 8) == 0 || (iVar2 == *(int *)(a + 8))) && (lVar1 == *(long *)b)) &&
                ((iVar2 == *(int *)(b + 8) || (*(int *)(b + 8) == 0)))))))) {
LAB_00101452:
                    /* WARNING: Could not recover jumptable at 0x00101456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (**(code **)(lVar1 + 0xa0))();
        return iVar2;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3b6,"EC_POINT_add");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



int EC_POINT_dbl(EC_GROUP *group,EC_POINT *r,EC_POINT *a,BN_CTX *ctx)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)group;
  if (*(code **)(lVar1 + 0xa8) == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3c0,"EC_POINT_dbl");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (lVar1 == *(long *)r) {
      iVar2 = *(int *)(group + 0x20);
      if (iVar2 == 0) {
        if (lVar1 == *(long *)a) goto LAB_00101538;
      }
      else if ((((*(int *)(r + 8) == 0) || (iVar2 == *(int *)(r + 8))) && (lVar1 == *(long *)a)) &&
              ((iVar2 == *(int *)(a + 8) || (*(int *)(a + 8) == 0)))) {
LAB_00101538:
                    /* WARNING: Could not recover jumptable at 0x0010153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (**(code **)(lVar1 + 0xa8))();
        return iVar2;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3c4,"EC_POINT_dbl");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



int EC_POINT_invert(EC_GROUP *group,EC_POINT *a,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xb0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3cd,"EC_POINT_invert");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((*(long *)group == *(long *)a) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(a + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(a + 8))))) {
                    /* WARNING: Could not recover jumptable at 0x00101601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3d1,"EC_POINT_invert");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



int EC_POINT_is_at_infinity(EC_GROUP *group,EC_POINT *p)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xb8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3da,"EC_POINT_is_at_infinity");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((*(long *)group == *(long *)p) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
                    /* WARNING: Could not recover jumptable at 0x001016ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3de,"EC_POINT_is_at_infinity");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



undefined8
EC_POINT_get_affine_coordinates
          (EC_GROUP *param_1,EC_POINT *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(*(long *)param_1 + 0x80) == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x38d,"EC_POINT_get_affine_coordinates");
    ERR_set_error(0x10,0xc0101,0);
    return 0;
  }
  if ((*(long *)param_1 == *(long *)param_2) &&
     (((*(int *)(param_1 + 0x20) == 0 || (*(int *)(param_2 + 8) == 0)) ||
      (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 8))))) {
    iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010179e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)param_1 + 0x80))(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x395,"EC_POINT_get_affine_coordinates");
    ERR_set_error(0x10,0x6a,0);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x391,"EC_POINT_get_affine_coordinates");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



void EC_POINT_get_affine_coordinates_GFp(void)

{
  EC_POINT_get_affine_coordinates();
  return;
}



void EC_POINT_get_affine_coordinates_GF2m(void)

{
  EC_POINT_get_affine_coordinates();
  return;
}



int EC_POINT_is_on_curve(EC_GROUP *group,EC_POINT *point,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xc0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3ef,"EC_POINT_is_on_curve");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((*(long *)group == *(long *)point) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(point + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(point + 8))))) {
                    /* WARNING: Could not recover jumptable at 0x001018a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3f3,"EC_POINT_is_on_curve");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



undefined8
EC_POINT_set_affine_coordinates
          (EC_GROUP *param_1,EC_POINT *param_2,undefined8 param_3,undefined8 param_4,BN_CTX *param_5
          )

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(long *)param_1 + 0x78);
  if (pcVar1 == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x365,"EC_POINT_set_affine_coordinates");
    ERR_set_error(0x10,0xc0101,0);
  }
  else if ((*(long *)param_1 == *(long *)param_2) &&
          (((*(int *)(param_1 + 0x20) == 0 || (*(int *)(param_2 + 8) == 0)) ||
           (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 8))))) {
    iVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
    if (iVar2 != 0) {
      iVar2 = EC_POINT_is_on_curve(param_1,param_2,param_5);
      if (0 < iVar2) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x370,"EC_POINT_set_affine_coordinates");
      ERR_set_error(0x10,0x6b,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x369,"EC_POINT_set_affine_coordinates");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



void EC_POINT_set_affine_coordinates_GFp(void)

{
  EC_POINT_set_affine_coordinates();
  return;
}



void EC_POINT_set_affine_coordinates_GF2m(void)

{
  EC_POINT_set_affine_coordinates();
  return;
}



int EC_POINT_cmp(EC_GROUP *group,EC_POINT *a,EC_POINT *b,BN_CTX *ctx)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)group;
  if (*(code **)(lVar1 + 200) == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x3fd,"EC_POINT_cmp");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (lVar1 == *(long *)a) {
      iVar2 = *(int *)(group + 0x20);
      if (iVar2 == 0) {
        if (lVar1 == *(long *)b) goto LAB_00101aa8;
      }
      else if ((((*(int *)(a + 8) == 0) || (iVar2 == *(int *)(a + 8))) && (lVar1 == *(long *)b)) &&
              ((iVar2 == *(int *)(b + 8) || (*(int *)(b + 8) == 0)))) {
LAB_00101aa8:
                    /* WARNING: Could not recover jumptable at 0x00101aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (**(code **)(lVar1 + 200))();
        return iVar2;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x401,"EC_POINT_cmp");
    ERR_set_error(0x10,0x65,0);
  }
  return -1;
}



int EC_GROUP_cmp(EC_GROUP *a,EC_GROUP *b,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *a_00;
  BIGNUM *b_00;
  BIGNUM *b_01;
  BIGNUM *b_02;
  EC_POINT *b_03;
  EC_POINT *a_01;
  uint uVar5;
  BN_CTX *c;
  
  iVar1 = EC_GROUP_get_field_type();
  iVar2 = EC_GROUP_get_field_type(b);
  if (iVar1 != iVar2) {
    return 1;
  }
  iVar1 = EC_GROUP_get_curve_name(a);
  if ((iVar1 != 0) && (iVar1 = EC_GROUP_get_curve_name(b), iVar1 != 0)) {
    iVar1 = EC_GROUP_get_curve_name(a);
    iVar2 = EC_GROUP_get_curve_name(b);
    if (iVar1 != iVar2) {
      return 1;
    }
  }
  if ((**(byte **)a & 2) != 0) {
    return 0;
  }
  c = (BN_CTX *)0x0;
  if ((ctx == (BN_CTX *)0x0) && (ctx = BN_CTX_new(), c = ctx, ctx == (BN_CTX *)0x0)) {
    return -1;
  }
  BN_CTX_start(ctx);
  pBVar3 = BN_CTX_get(ctx);
  pBVar4 = BN_CTX_get(ctx);
  a_00 = BN_CTX_get(ctx);
  b_00 = BN_CTX_get(ctx);
  b_01 = BN_CTX_get(ctx);
  b_02 = BN_CTX_get(ctx);
  if (b_02 == (BIGNUM *)0x0) {
    BN_CTX_end(ctx);
    BN_CTX_free(c);
    return -1;
  }
  iVar1 = (**(code **)(*(long *)a + 0x30))(a,pBVar3,pBVar4,a_00,ctx);
  if ((((iVar1 != 0) && (iVar1 = (**(code **)(*(long *)b + 0x30))(b,b_00,b_01,b_02,ctx), iVar1 != 0)
       ) && (iVar1 = BN_cmp(pBVar3,b_00), iVar1 == 0)) &&
     ((iVar1 = BN_cmp(pBVar4,b_01), iVar1 == 0 && (iVar1 = BN_cmp(a_00,b_02), iVar1 == 0)))) {
    b_03 = EC_GROUP_get0_generator(b);
    a_01 = EC_GROUP_get0_generator(a);
    iVar1 = EC_POINT_cmp(a,a_01,b_03,ctx);
    if (iVar1 == 0) {
      pBVar3 = (BIGNUM *)EC_GROUP_get0_order(a);
      pBVar4 = (BIGNUM *)EC_GROUP_get0_order(b);
      if ((pBVar3 == (BIGNUM *)0x0) || (pBVar4 == (BIGNUM *)0x0)) {
        uVar5 = 0xffffffff;
        goto LAB_00101c03;
      }
      iVar1 = BN_cmp(pBVar3,pBVar4);
      if (iVar1 == 0) {
        pBVar3 = (BIGNUM *)EC_GROUP_get0_cofactor(a);
        pBVar4 = (BIGNUM *)EC_GROUP_get0_cofactor(b);
        iVar1 = BN_is_zero(pBVar3);
        uVar5 = 0;
        if ((iVar1 == 0) && (iVar1 = BN_is_zero(pBVar4), iVar1 == 0)) {
          iVar1 = BN_cmp(pBVar3,pBVar4);
          uVar5 = (uint)(iVar1 != 0);
        }
        goto LAB_00101c03;
      }
    }
  }
  uVar5 = 1;
LAB_00101c03:
  BN_CTX_end(ctx);
  BN_CTX_free(c);
  return uVar5;
}



int EC_POINT_make_affine(EC_GROUP *group,EC_POINT *point,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xd0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x40b,"EC_POINT_make_affine");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((*(long *)group == *(long *)point) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(point + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(point + 8))))) {
                    /* WARNING: Could not recover jumptable at 0x00101e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x40f,"EC_POINT_make_affine");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



int EC_POINTs_make_affine(EC_GROUP *group,size_t num,EC_POINT **points,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  size_t sVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xd8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x41b,"EC_POINTs_make_affine");
    ERR_set_error(0x10,0xc0101,0);
    return 0;
  }
  sVar2 = 0;
  if (num != 0) {
    do {
      if ((*(long *)group != *(long *)points[sVar2]) ||
         (((*(int *)(group + 0x20) != 0 && (iVar1 = *(int *)(points[sVar2] + 8), iVar1 != 0)) &&
          (*(int *)(group + 0x20) != iVar1)))) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_lib.c",0x420,"EC_POINTs_make_affine");
        ERR_set_error(0x10,0x65,0);
        return 0;
      }
      sVar2 = sVar2 + 1;
    } while (num != sVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00101ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  return iVar1;
}



int EC_POINTs_mul(EC_GROUP *group,EC_POINT *r,BIGNUM *n,size_t num,EC_POINT **p,BIGNUM **m,
                 BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  long lVar3;
  BN_CTX *c;
  size_t sVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)group;
  if ((*(long *)r == lVar3) &&
     (((iVar2 = *(int *)(group + 0x20), iVar2 == 0 || (*(int *)(r + 8) == 0)) ||
      (iVar2 == *(int *)(r + 8))))) {
    if (n == (BIGNUM *)0x0 && num == 0) {
      iVar2 = EC_POINT_set_to_infinity(group,r);
      return iVar2;
    }
    sVar4 = 0;
    if (num != 0) {
      do {
        if ((lVar3 != *(long *)p[sVar4]) ||
           (((iVar2 != 0 && (iVar1 = *(int *)(p[sVar4] + 8), iVar2 != iVar1)) && (iVar1 != 0)))) {
          ERR_new();
          uVar5 = 0x443;
          goto LAB_00101f48;
        }
        sVar4 = sVar4 + 1;
      } while (num != sVar4);
    }
    c = (BN_CTX *)0x0;
    if (ctx == (BN_CTX *)0x0) {
      c = (BN_CTX *)BN_CTX_secure_new();
      if (c == (BN_CTX *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_lib.c",0x44d,"EC_POINTs_mul");
        ERR_set_error(0x10,0xc0103,0);
        goto LAB_00101f67;
      }
      lVar3 = *(long *)group;
      ctx = c;
    }
    if (*(code **)(lVar3 + 0xe0) == (code *)0x0) {
      iVar2 = ossl_ec_wNAF_mul(group,r,n,num,p,m,ctx);
    }
    else {
      iVar2 = (**(code **)(lVar3 + 0xe0))();
    }
    BN_CTX_free(c);
  }
  else {
    ERR_new();
    uVar5 = 0x43a;
LAB_00101f48:
    ERR_set_debug("crypto/ec/ec_lib.c",uVar5,"EC_POINTs_mul");
    ERR_set_error(0x10,0x65,0);
LAB_00101f67:
    iVar2 = 0;
  }
  return iVar2;
}



int EC_POINT_mul(EC_GROUP *group,EC_POINT *r,BIGNUM *n,EC_POINT *q,BIGNUM *m,BN_CTX *ctx)

{
  int iVar1;
  long lVar2;
  BN_CTX *c;
  BIGNUM *local_18;
  EC_POINT *local_10;
  
  lVar2 = *(long *)group;
  local_18 = m;
  local_10 = q;
  if (*(long *)r == lVar2) {
    iVar1 = *(int *)(group + 0x20);
    if (iVar1 == 0) {
      if ((q == (EC_POINT *)0x0) || (lVar2 == *(long *)q)) goto LAB_00102150;
    }
    else if (((*(int *)(r + 8) == 0) || (iVar1 == *(int *)(r + 8))) &&
            ((q == (EC_POINT *)0x0 ||
             ((lVar2 == *(long *)q && ((*(int *)(q + 8) == 0 || (iVar1 == *(int *)(q + 8))))))))) {
LAB_00102150:
      if (n == (BIGNUM *)0x0 && m == (BIGNUM *)0x0) {
        iVar1 = EC_POINT_set_to_infinity(group,r);
        return iVar1;
      }
      c = (BN_CTX *)0x0;
      if (ctx == (BN_CTX *)0x0) {
        c = (BN_CTX *)BN_CTX_secure_new();
        if (c == (BN_CTX *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_lib.c",0x475,"EC_POINT_mul");
          ERR_set_error(0x10,0xc0103,0);
          return 0;
        }
        lVar2 = *(long *)group;
        ctx = c;
      }
      if (*(code **)(lVar2 + 0xe0) == (code *)0x0) {
        iVar1 = ossl_ec_wNAF_mul(group,r,n,local_18 != (BIGNUM *)0x0 && local_10 != (EC_POINT *)0x0,
                                 &local_10,&local_18,ctx);
      }
      else {
        iVar1 = (**(code **)(lVar2 + 0xe0))();
      }
      BN_CTX_free(c);
      return iVar1;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_lib.c",0x469,"EC_POINT_mul");
  ERR_set_error(0x10,0x65,0);
  return 0;
}



int EC_GROUP_precompute_mult(EC_GROUP *group,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (*(long *)(*(long *)group + 0xe0) == 0) {
    iVar1 = ossl_ec_wNAF_precompute_mult();
    return iVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xe8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010229d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  return 1;
}



int EC_GROUP_have_precompute_mult(EC_GROUP *group)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (*(long *)(*(long *)group + 0xe0) == 0) {
    iVar1 = ossl_ec_wNAF_have_precompute_mult();
    return iVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xf0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001022dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  return 0;
}



void EC_KEY_set_ex_data(long param_1,int param_2,void *param_3)

{
  CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(param_1 + 0x40),param_2,param_3);
  return;
}



void EC_KEY_get_ex_data(long param_1,int param_2)

{
  CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(param_1 + 0x40),param_2);
  return;
}



int ossl_ec_group_simple_order_bits(long param_1)

{
  int iVar1;
  
  if (*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
    return iVar1;
  }
  return 0;
}



ulong ossl_ec_group_do_inverse_ord
                (long *param_1,undefined8 param_2,undefined8 param_3,BN_CTX *param_4)

{
  int iVar1;
  ulong uVar2;
  BIGNUM *a;
  BN_CTX *c;
  
  if (*(code **)(*param_1 + 400) == (code *)0x0) {
    if ((param_1[0x12] == 0) ||
       ((c = (BN_CTX *)0x0, param_4 == (BN_CTX *)0x0 &&
        (param_4 = (BN_CTX *)BN_CTX_secure_new(), c = param_4, param_4 == (BN_CTX *)0x0)))) {
      uVar2 = 0;
    }
    else {
      BN_CTX_start(param_4);
      a = BN_CTX_get(param_4);
      if (((a == (BIGNUM *)0x0) || (iVar1 = BN_set_word(a,2), iVar1 == 0)) ||
         (iVar1 = BN_sub(a,(BIGNUM *)param_1[2],a), iVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        iVar1 = bn_mod_exp_mont_fixed_top(param_2,param_3,a,param_1[2],param_4,param_1[0x12]);
        uVar2 = (ulong)(iVar1 != 0);
      }
      BN_CTX_end(param_4);
      BN_CTX_free(c);
    }
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0010236b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 400))();
  return uVar2;
}



undefined8 ossl_ec_point_blind_coordinates(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x198) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x198))();
    return uVar1;
  }
  return 1;
}



int EC_GROUP_get_basis_type(EC_GROUP *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = EC_GROUP_get_field_type();
  iVar2 = 0;
  if (iVar1 == 0x197) {
    lVar3 = 0;
    while (*(int *)(param_1 + lVar3 * 4 + 0x48) != 0) {
      lVar3 = lVar3 + 1;
      if (lVar3 == 6) {
        return 0;
      }
    }
    if ((int)lVar3 == 4) {
      return 0x2ab;
    }
    iVar2 = 0x2aa;
    if ((int)lVar3 != 2) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



undefined8 EC_GROUP_get_trinomial_basis(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = EC_GROUP_get_field_type();
    if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0))
       && (*(int *)(param_1 + 0x50) == 0)) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x4c);
      }
      uVar2 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x54e,"EC_GROUP_get_trinomial_basis");
      ERR_set_error(0x10,0xc0101,0);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



undefined8
EC_GROUP_get_pentanomial_basis(long param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = EC_GROUP_get_field_type();
    if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0))
       && (((*(int *)(param_1 + 0x50) != 0 && (*(int *)(param_1 + 0x54) != 0)) &&
           (*(int *)(param_1 + 0x58) == 0)))) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x54);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + 0x50);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x4c);
      }
      uVar2 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x562,"EC_GROUP_get_pentanomial_basis");
      ERR_set_error(0x10,0xc0101,0);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



undefined8 ossl_ec_group_set_params(EC_GROUP *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_28;
  point_conversion_form_t local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = -1;
  local_24 = 0xffffffff;
  lVar2 = OSSL_PARAM_locate_const(param_2,"point-format");
  if (lVar2 != 0) {
    iVar1 = ossl_ec_pt_format_param2id(lVar2,&local_24);
    if (iVar1 != 0) {
      EC_GROUP_set_point_conversion_form(param_1,local_24);
      goto LAB_00102684;
    }
    ERR_new();
    uVar4 = 0x5ea;
LAB_00102719:
    ERR_set_debug("crypto/ec/ec_lib.c",uVar4,"ossl_ec_group_set_params");
    ERR_set_error(0x10,0x68,0);
    uVar4 = 0;
    goto LAB_001026ea;
  }
LAB_00102684:
  lVar2 = OSSL_PARAM_locate_const(param_2,"encoding");
  if (lVar2 != 0) {
    iVar1 = ossl_ec_encoding_param2id(lVar2,&local_28);
    if (iVar1 == 0) {
      ERR_new();
      uVar4 = 0x5f3;
      goto LAB_00102719;
    }
    EC_GROUP_set_asn1_flag(param_1,local_28);
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,&_LC3);
  if (lVar2 == 0) {
LAB_001026e5:
    uVar4 = 1;
  }
  else {
    if (*(int *)(lVar2 + 8) == 5) {
      sVar3 = EC_GROUP_set_seed(param_1,*(uchar **)(lVar2 + 0x10),*(size_t *)(lVar2 + 0x18));
      if (sVar3 != 0) goto LAB_001026e5;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x5fe,"ossl_ec_group_set_params");
    ERR_set_error(0x10,0xaf,0);
    uVar4 = 0;
  }
LAB_001026ea:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00103293) */

EC_GROUP * EC_GROUP_new_from_params(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte *buf;
  int iVar1;
  int iVar2;
  long lVar3;
  EC_GROUP *group;
  BN_CTX *ctx;
  undefined8 uVar4;
  EC_GROUP *group_00;
  size_t sVar5;
  EC_POINT *p;
  EC_POINT *generator;
  BIGNUM *order;
  uchar *puVar6;
  EC_GROUP *group_01;
  EC_GROUP *group_02;
  long in_FS_OFFSET;
  int local_74;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (BIGNUM *)0x0;
  local_68 = (BIGNUM *)0x0;
  local_60 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  lVar3 = OSSL_PARAM_locate_const(param_1,"group");
  if (lVar3 != 0) {
    local_74 = 0;
    local_48 = 0;
    if (*(int *)(lVar3 + 8) == 4) {
      local_48 = *(long *)(lVar3 + 0x10);
      if (local_48 != 0) {
        iVar1 = ossl_ec_curve_name2nid();
        if (iVar1 != 0) goto LAB_0010288d;
LAB_00102a00:
        ERR_new();
        ERR_set_debug("crypto/ec/ec_lib.c",0x5d8,"group_new_from_name");
        ERR_set_error(0x10,0x8d,0);
      }
    }
    else if ((*(int *)(lVar3 + 8) == 6) &&
            (iVar1 = OSSL_PARAM_get_utf8_ptr(lVar3,&local_48), iVar1 != 0)) {
      iVar1 = ossl_ec_curve_name2nid(local_48);
      if (iVar1 == 0) goto LAB_00102a00;
LAB_0010288d:
      group = (EC_GROUP *)EC_GROUP_new_by_curve_name_ex(param_2,param_3);
      if (group != (EC_GROUP *)0x0) {
        iVar1 = ossl_ec_group_set_params(group,param_1);
        if (iVar1 == 0) {
          EC_GROUP_free(group);
        }
        else {
          lVar3 = OSSL_PARAM_locate_const(param_1,"decoded-from-explicit");
          if ((lVar3 == 0) || (iVar1 = OSSL_PARAM_get_int(lVar3,&local_74), iVar1 != 0)) {
            *(uint *)(group + 0x28) = (uint)(0 < local_74);
            goto LAB_0010283c;
          }
          ERR_new();
          ERR_set_debug("crypto/ec/ec_lib.c",0x627,"EC_GROUP_new_from_params");
          ERR_set_error(0x10,0x91,0);
          EC_GROUP_free(group);
        }
      }
    }
    group = (EC_GROUP *)0x0;
    goto LAB_0010283c;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(param_2);
  group = (EC_GROUP *)0x0;
  if (ctx == (BN_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x635,"EC_GROUP_new_from_params");
    ERR_set_error(0x10,0x80003,0);
    goto LAB_0010283c;
  }
  BN_CTX_start(ctx);
  local_70 = BN_CTX_get(ctx);
  local_68 = BN_CTX_get(ctx);
  local_60 = BN_CTX_get(ctx);
  local_58 = BN_CTX_get(ctx);
  if (local_58 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_lib.c",0x63f,"EC_GROUP_new_from_params");
    ERR_set_error(0x10,0x80003,0);
LAB_001029ca:
    p = (EC_POINT *)0x0;
    group_00 = (EC_GROUP *)0x0;
LAB_001029d0:
    EC_GROUP_free(group_00);
    group_00 = group;
  }
  else {
    lVar3 = OSSL_PARAM_locate_const(param_1,"field-type");
    if ((lVar3 == 0) || (*(int *)(lVar3 + 8) != 4)) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x645,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0x67,0);
      goto LAB_001029ca;
    }
    iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"prime-field");
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"characteristic-two-field");
      if (iVar1 != 0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_lib.c",0x64f,"EC_GROUP_new_from_params");
        ERR_set_error(0x10,0x83,0);
        goto LAB_001029ca;
      }
    }
    uVar4 = OSSL_PARAM_locate_const(param_1,&_LC9);
    iVar2 = OSSL_PARAM_get_BN(uVar4,&local_68);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x655,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xa8,0);
      goto LAB_001029ca;
    }
    uVar4 = OSSL_PARAM_locate_const(param_1,&_LC10);
    iVar2 = OSSL_PARAM_get_BN(uVar4,&local_60);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x65a,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xa9,0);
      goto LAB_001029ca;
    }
    uVar4 = OSSL_PARAM_locate_const(param_1,&_LC11);
    iVar2 = OSSL_PARAM_get_BN(uVar4,&local_70);
    if (iVar2 == 0) {
      ERR_new();
      uVar4 = 0x661;
LAB_00102d57:
      ERR_set_debug("crypto/ec/ec_lib.c",uVar4,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xac,0);
      goto LAB_001029ca;
    }
    if (iVar1 != 0) {
      iVar1 = BN_is_negative();
      if ((iVar1 != 0) || (iVar1 = BN_is_zero(local_70), iVar1 != 0)) {
        ERR_new();
        uVar4 = 0x667;
        goto LAB_00102d57;
      }
      iVar1 = BN_num_bits(local_70);
      if (0x295 < iVar1) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_lib.c",0x66c,"EC_GROUP_new_from_params");
        ERR_set_error(0x10,0x8f,0);
        goto LAB_001029ca;
      }
      group_00 = EC_GROUP_new_curve_GFp(local_70,local_68,local_60,ctx);
      if (group_00 != (EC_GROUP *)0x0) goto LAB_00102cec;
LAB_00102b40:
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x684,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0x80010,0);
      goto LAB_001029ca;
    }
    group_00 = (EC_GROUP *)EC_GROUP_new_curve_GF2m(local_70,local_68,local_60,0);
    if (group_00 == (EC_GROUP *)0x0) goto LAB_00102b40;
    iVar1 = EC_GROUP_get_degree(group_00);
    if (0x295 < iVar1) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x67c,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0x8f,0);
      p = (EC_POINT *)0x0;
      goto LAB_001029d0;
    }
LAB_00102cec:
    lVar3 = OSSL_PARAM_locate_const(param_1,&_LC3);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) == 5) {
        sVar5 = EC_GROUP_set_seed(group_00,*(uchar **)(lVar3 + 0x10),*(size_t *)(lVar3 + 0x18));
        if (sVar5 != 0) goto LAB_00102ddc;
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_lib.c",0x68c,"EC_GROUP_new_from_params");
        ERR_set_error(0x10,0xaf,0);
      }
LAB_00102d3e:
      p = (EC_POINT *)0x0;
      goto LAB_001029d0;
    }
LAB_00102ddc:
    lVar3 = OSSL_PARAM_locate_const(param_1,"generator");
    if ((lVar3 == 0) || (*(int *)(lVar3 + 8) != 5)) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x697,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xad,0);
      goto LAB_00102d3e;
    }
    buf = *(byte **)(lVar3 + 0x10);
    p = EC_POINT_new(group_00);
    if (p == (EC_POINT *)0x0) goto LAB_00102d3e;
    EC_GROUP_set_point_conversion_form(group_00,*buf & 0xfffffffe);
    iVar2 = EC_POINT_oct2point(group_00,p,buf,*(size_t *)(lVar3 + 0x18),ctx);
    if (iVar2 == 0) {
      ERR_new();
      uVar4 = 0x6a0;
LAB_00103186:
      ERR_set_debug("crypto/ec/ec_lib.c",uVar4,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xad,0);
      goto LAB_001029d0;
    }
    uVar4 = OSSL_PARAM_locate_const(param_1,"order");
    iVar2 = OSSL_PARAM_get_BN(uVar4,&local_58);
    if ((((iVar2 == 0) || (iVar2 = BN_is_negative(local_58), iVar2 != 0)) ||
        (iVar2 = BN_is_zero(local_58), iVar2 != 0)) ||
       (iVar2 = BN_num_bits(local_58), iVar1 + 1 < iVar2)) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x6a9,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0x7a,0);
      goto LAB_001029d0;
    }
    lVar3 = OSSL_PARAM_locate_const(param_1,"cofactor");
    if ((lVar3 != 0) &&
       ((local_50 = BN_CTX_get(ctx), local_50 == (BIGNUM *)0x0 ||
        (iVar1 = OSSL_PARAM_get_BN(lVar3,&local_50), iVar1 == 0)))) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x6b2,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xab,0);
      goto LAB_001029d0;
    }
    iVar1 = EC_GROUP_set_generator(group_00,p,local_58,local_50);
    if (iVar1 == 0) {
      ERR_new();
      uVar4 = 0x6b9;
      goto LAB_00103186;
    }
    generator = EC_GROUP_get0_generator(group_00);
    order = (BIGNUM *)EC_GROUP_get0_order(group_00);
    puVar6 = EC_GROUP_get0_seed(group_00);
    group_01 = EC_GROUP_dup(group_00);
    if (((group_01 == (EC_GROUP *)0x0) ||
        (sVar5 = EC_GROUP_set_seed(group_01,(uchar *)0x0,0), sVar5 != 1)) ||
       (iVar1 = EC_GROUP_set_generator(group_01,generator,order,(BIGNUM *)0x0), iVar1 == 0)) {
LAB_00103317:
      group_02 = (EC_GROUP *)0x0;
LAB_001032c6:
      EC_GROUP_free(group_01);
      EC_GROUP_free(group_02);
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x6bf,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xae,0);
      goto LAB_001029d0;
    }
    iVar1 = ossl_ec_curve_nid_from_params(group_01,ctx);
    if (iVar1 != 0) {
      group_02 = (EC_GROUP *)EC_GROUP_new_by_curve_name_ex(param_2,param_3,iVar1);
      if (group_02 == (EC_GROUP *)0x0) goto LAB_00103317;
      EC_GROUP_set_asn1_flag(group_02,0);
      if ((puVar6 != (uchar *)0x0) ||
         (sVar5 = EC_GROUP_set_seed(group_02,(uchar *)0x0,0), sVar5 == 1)) {
        EC_GROUP_free(group_01);
        if (group_02 == group_00) goto LAB_00103202;
        EC_GROUP_free(group_00);
        group_00 = group_02;
        goto LAB_00103120;
      }
      goto LAB_001032c6;
    }
    EC_GROUP_free(group_01);
LAB_00103202:
    lVar3 = OSSL_PARAM_locate_const(param_1);
    if ((lVar3 != 0) && (iVar1 = ossl_ec_encoding_param2id(lVar3), iVar1 == 0)) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_lib.c",0x6ca,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0x66,0);
      goto LAB_001029d0;
    }
    EC_GROUP_set_asn1_flag(group_00,0);
LAB_00103120:
    *(undefined4 *)(group_00 + 0x28) = 1;
  }
  EC_POINT_free(p);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  group = group_00;
LAB_0010283c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return group;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EC_GROUP_to_params(long param_1,undefined8 param_2,undefined8 param_3,BN_CTX *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  BN_CTX *c;
  BN_CTX *pBVar5;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (lVar3 = OSSL_PARAM_BLD_new(), lVar3 == 0)) {
    uVar4 = 0;
    c = (BN_CTX *)0x0;
    lVar3 = 0;
  }
  else {
    c = (BN_CTX *)0x0;
    pBVar5 = c;
    if ((param_4 == (BN_CTX *)0x0) &&
       (param_4 = (BN_CTX *)BN_CTX_new_ex(param_2), pBVar5 = param_4, param_4 == (BN_CTX *)0x0)) {
      uVar4 = 0;
    }
    else {
      BN_CTX_start(param_4);
      uVar4 = 0;
      iVar2 = ossl_ec_group_todata(param_1,lVar3,0,param_2,param_3,param_4);
      c = pBVar5;
      if (iVar2 != 0) {
        uVar4 = OSSL_PARAM_BLD_to_param(lVar3);
      }
    }
  }
  OSSL_PARAM_BLD_free(lVar3);
  CRYPTO_free((void *)0x0);
  BN_CTX_end(param_4);
  BN_CTX_free(c);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


