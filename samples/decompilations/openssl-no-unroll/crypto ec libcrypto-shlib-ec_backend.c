
ulong ossl_ec_encoding_name2id(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    uVar2 = OPENSSL_strcasecmp(param_1,"explicit");
    if ((int)uVar2 != 0) {
      iVar1 = OPENSSL_strcasecmp(param_1,"named_curve");
      uVar2 = (ulong)(-(uint)(iVar1 != 0) | 1);
    }
    return uVar2;
  }
  return 1;
}



char * ossl_ec_check_group_type_id2name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "default";
  if (((param_1 != 0) && (pcVar1 = "named", param_1 != 0x2000)) &&
     (pcVar1 = "named-nist", param_1 != 0x4000)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



undefined8 ossl_ec_set_check_group_type_from_name(EC_KEY *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,"default");
    if (iVar1 == 0) {
      lVar2 = 0;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(param_2,"named");
      if (iVar1 == 0) {
        lVar2 = 1;
      }
      else {
        iVar1 = OPENSSL_strcasecmp(param_2,"named-nist");
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = 2;
      }
    }
    iVar1 = (&check_group_type_nameid_map)[lVar2 * 4];
    if (iVar1 == -1) {
      return 0;
    }
  }
  EC_KEY_clear_flags(param_1,0x6000);
  EC_KEY_set_flags(param_1,iVar1);
  return 1;
}



undefined4 ossl_ec_pt_format_name2id(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 4;
  }
  iVar1 = OPENSSL_strcasecmp(param_1,"uncompressed");
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_1,"compressed");
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(param_1,"hybrid");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      lVar2 = 2;
    }
  }
  return (&format_nameid_map)[lVar2 * 4];
}



char * ossl_ec_pt_format_id2name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "uncompressed";
  if (((param_1 != 4) && (pcVar1 = "compressed", param_1 != 2)) && (pcVar1 = "hybrid", param_1 != 6)
     ) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



undefined8
ossl_ec_group_todata
          (EC_GROUP *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          BN_CTX *param_6,undefined8 *param_7)

{
  point_conversion_form_t pVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  EC_POINT *pEVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  BIGNUM *pBVar11;
  uchar *puVar12;
  size_t sVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *local_48;
  
  if (param_1 == (EC_GROUP *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_backend.c",0x12a,"ossl_ec_group_todata");
    ERR_set_error(0x10,0x86,0);
    return 0;
  }
  pVar1 = EC_GROUP_get_point_conversion_form(param_1);
  lVar5 = ossl_ec_pt_format_id2name(pVar1);
  if ((lVar5 == 0) ||
     (iVar2 = ossl_param_build_set_utf8_string(param_2,param_3,"point-format",lVar5), iVar2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_backend.c",0x134,"ossl_ec_group_todata");
    ERR_set_error(0x10,0x68,0);
    return 0;
  }
  uVar3 = EC_GROUP_get_asn1_flag(param_1);
  if ((*(long *)(encoding_nameid_map + (ulong)(uVar3 & 1) * 0x10 + 8) == 0) ||
     (iVar2 = ossl_param_build_set_utf8_string(param_2,param_3,"encoding"), iVar2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_backend.c",0x13d,"ossl_ec_group_todata");
    ERR_set_error(0x10,0x66,0);
    return 0;
  }
  iVar2 = ossl_param_build_set_int
                    (param_2,param_3,"decoded-from-explicit",*(undefined4 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = EC_GROUP_get_curve_name(param_1);
  if ((param_2 == 0) || (iVar2 == 0)) {
    iVar4 = EC_GROUP_get_field_type(param_1);
    if (iVar4 == 0x196) {
      local_48 = "prime-field";
    }
    else {
      local_48 = "characteristic-two-field";
      if (iVar4 != 0x197) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_backend.c",0xb4,"ec_group_explicit_todata");
        ERR_set_error(0x10,0x67,0);
        return 0;
      }
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,&_LC14);
    lVar6 = OSSL_PARAM_locate_const(param_3,&_LC15);
    lVar7 = OSSL_PARAM_locate_const(param_3,&_LC16);
    if (lVar7 != 0 || ((lVar5 != 0 || lVar6 != 0) || param_2 != 0)) {
      pBVar9 = BN_CTX_get(param_6);
      pBVar10 = BN_CTX_get(param_6);
      pBVar11 = BN_CTX_get(param_6);
      if (pBVar11 == (BIGNUM *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_backend.c",0xc1,"ec_group_explicit_todata");
        ERR_set_error(0x10,0x80003,0);
        return 0;
      }
      iVar4 = EC_GROUP_get_curve(param_1,pBVar9,pBVar10,pBVar11,param_6);
      if (iVar4 == 0) {
        ERR_new();
        pcVar14 = "ec_group_explicit_todata";
        uVar15 = 0xc6;
        goto LAB_00100571;
      }
      iVar4 = ossl_param_build_set_bn(param_2,param_3,&_LC14,pBVar9);
      if (((iVar4 == 0) ||
          (iVar4 = ossl_param_build_set_bn(param_2,param_3,&_LC15,pBVar10), iVar4 == 0)) ||
         (iVar4 = ossl_param_build_set_bn(param_2,param_3,&_LC16,pBVar11), iVar4 == 0)) {
        ERR_new();
        uVar15 = 0xcc;
        goto LAB_0010064a;
      }
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,"order");
    if (lVar5 != 0 || param_2 != 0) {
      lVar5 = EC_GROUP_get0_order(param_1);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_backend.c",0xd6,"ec_group_explicit_todata");
        ERR_set_error(0x10,0x7a,0);
        return 0;
      }
      iVar4 = ossl_param_build_set_bn(param_2,param_3,"order");
      if (iVar4 == 0) {
        ERR_new();
        uVar15 = 0xdb;
        goto LAB_0010064a;
      }
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,"field-type");
    if ((lVar5 != 0 || param_2 != 0) &&
       (iVar4 = ossl_param_build_set_utf8_string(param_2,param_3,"field-type",local_48), iVar4 == 0)
       ) {
      ERR_new();
      uVar15 = 0xe5;
LAB_0010064a:
      ERR_set_debug("crypto/ec/ec_backend.c",uVar15,"ec_group_explicit_todata");
      ERR_set_error(0x10,0x8000f,0);
      return 0;
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,"generator");
    if (lVar5 != 0 || param_2 != 0) {
      pEVar8 = EC_GROUP_get0_generator(param_1);
      pVar1 = EC_GROUP_get_point_conversion_form(param_1);
      if (pEVar8 == (EC_POINT *)0x0) {
        ERR_new();
        uVar15 = 0xf1;
LAB_00100767:
        ERR_set_debug("crypto/ec/ec_backend.c",uVar15,"ec_group_explicit_todata");
        ERR_set_error(0x10,0xad,0);
        return 0;
      }
      lVar5 = EC_POINT_point2buf(param_1,pEVar8,pVar1,param_7,param_6);
      if (lVar5 == 0) {
        ERR_new();
        uVar15 = 0xf6;
        goto LAB_00100767;
      }
      iVar4 = ossl_param_build_set_octet_string(param_2,param_3,"generator",*param_7);
      if (iVar4 == 0) {
        ERR_new();
        uVar15 = 0xfc;
        goto LAB_0010064a;
      }
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,"cofactor");
    if (((lVar5 != 0 || param_2 != 0) && (lVar5 = EC_GROUP_get0_cofactor(param_1), lVar5 != 0)) &&
       (iVar4 = ossl_param_build_set_bn(param_2,param_3,"cofactor",lVar5), iVar4 == 0)) {
      ERR_new();
      uVar15 = 0x108;
      goto LAB_0010064a;
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,&_LC21);
    if (lVar5 != 0 || param_2 != 0) {
      puVar12 = EC_GROUP_get0_seed(param_1);
      sVar13 = EC_GROUP_get_seed_len(param_1);
      if (((puVar12 != (uchar *)0x0) && (sVar13 != 0)) &&
         (iVar4 = ossl_param_build_set_octet_string(param_2,param_3,&_LC21,puVar12,sVar13),
         iVar4 == 0)) {
        ERR_new();
        uVar15 = 0x117;
        goto LAB_0010064a;
      }
    }
    if (iVar2 == 0) {
      return 1;
    }
  }
  lVar5 = OSSL_EC_curve_nid2name(iVar2);
  if ((lVar5 != 0) &&
     (iVar2 = ossl_param_build_set_utf8_string(param_2,param_3,"group",lVar5), iVar2 != 0)) {
    return 1;
  }
  ERR_new();
  pcVar14 = "ossl_ec_group_todata";
  uVar15 = 0x159;
LAB_00100571:
  ERR_set_debug("crypto/ec/ec_backend.c",uVar15,pcVar14);
  ERR_set_error(0x10,0x8d,0);
  return 0;
}



undefined8 ossl_ec_set_ecdh_cofactor_mode(EC_KEY *param_1,uint param_2)

{
  int iVar1;
  EC_GROUP *pEVar2;
  long lVar3;
  
  pEVar2 = EC_KEY_get0_group(param_1);
  if (param_2 < 2) {
    lVar3 = EC_GROUP_get0_cofactor(pEVar2);
    if (lVar3 != 0) {
      iVar1 = BN_is_one(lVar3);
      if (iVar1 == 0) {
        if (param_2 == 1) {
          EC_KEY_set_flags(param_1,0x1000);
        }
        else {
          EC_KEY_clear_flags(param_1,0x1000);
        }
      }
      return 1;
    }
  }
  return 0;
}



uint ossl_ec_key_fromdata(EC_KEY *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  EC_POINT *p;
  undefined8 uVar3;
  BN_CTX *ctx;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  BIGNUM *local_58;
  uchar *local_50;
  size_t local_48;
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (BIGNUM *)0x0;
  local_50 = (uchar *)0x0;
  group = EC_KEY_get0_group(param_1);
  if (group == (EC_GROUP *)0x0) goto LAB_00100983;
  p = (EC_POINT *)OSSL_PARAM_locate_const(param_2,&_LC23);
  local_60 = 0;
  if (param_3 != 0) {
    local_60 = OSSL_PARAM_locate_const(param_2,&_LC24);
  }
  uVar3 = ossl_ec_key_get_libctx(param_1);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar3);
  if (ctx == (BN_CTX *)0x0) {
LAB_0010094e:
    uVar2 = 0;
    p = (EC_POINT *)0x0;
  }
  else if (p == (EC_POINT *)0x0) {
LAB_001009e3:
    if ((local_60 == 0) || (param_3 == 0)) {
LAB_001009f0:
      if ((local_58 == (BIGNUM *)0x0) ||
         (iVar1 = EC_KEY_set_private_key(param_1,local_58), iVar1 != 0)) {
        uVar2 = 1;
        if (p != (EC_POINT *)0x0) {
          iVar1 = EC_KEY_set_public_key(param_1,p);
          uVar2 = (uint)(iVar1 != 0);
        }
        goto LAB_00100953;
      }
    }
    else {
      lVar4 = EC_GROUP_get0_order(group);
      if ((lVar4 != 0) && (iVar1 = BN_is_zero(lVar4), iVar1 == 0)) {
        iVar1 = bn_get_top(lVar4);
        local_58 = (BIGNUM *)BN_secure_new();
        uVar2 = 0;
        if (local_58 == (BIGNUM *)0x0) goto LAB_00100953;
        lVar4 = bn_wexpand(local_58,iVar1 + 2);
        if (lVar4 != 0) {
          BN_set_flags(local_58,4);
          iVar1 = OSSL_PARAM_get_BN(local_60,&local_58);
          if (iVar1 != 0) goto LAB_001009f0;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = OSSL_PARAM_get_octet_string(p,&local_50,0,&local_48);
    if ((iVar1 == 0) || (p = EC_POINT_new(group), p == (EC_POINT *)0x0)) goto LAB_0010094e;
    uVar2 = EC_POINT_oct2point(group,p,local_50,local_48,ctx);
    if (uVar2 != 0) goto LAB_001009e3;
  }
LAB_00100953:
  BN_CTX_free(ctx);
  BN_clear_free(local_58);
  CRYPTO_free(local_50);
  EC_POINT_free(p);
LAB_00100983:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool ossl_ec_group_fromdata(EC_KEY *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EC_GROUP *group;
  bool bVar4;
  
  bVar4 = false;
  if (param_1 != (EC_KEY *)0x0) {
    uVar2 = ossl_ec_key_get0_propq();
    uVar3 = ossl_ec_key_get_libctx(param_1);
    group = (EC_GROUP *)EC_GROUP_new_from_params(param_2,uVar3,uVar2);
    iVar1 = EC_KEY_set_group(param_1,group);
    bVar4 = iVar1 != 0;
    EC_GROUP_free(group);
  }
  return bVar4;
}



bool ossl_ec_key_is_foreign(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    return true;
  }
  lVar1 = EC_KEY_get_method();
  lVar2 = EC_KEY_OpenSSL();
  return lVar1 != lVar2;
}



EC_KEY * ossl_ec_key_dup(long *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  EC_KEY *key;
  EC_POINT *dst;
  BIGNUM *pBVar3;
  EC_GROUP *dst_00;
  
  if (param_1 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_backend.c",0x25a,"ossl_ec_key_dup");
    ERR_set_error(0x10,0xc0102,0);
    return (EC_KEY *)0x0;
  }
  key = (EC_KEY *)ossl_ec_key_new_method_int(param_1[10],param_1[0xb],param_1[1]);
  if (key == (EC_KEY *)0x0) {
    return (EC_KEY *)0x0;
  }
  if (((undefined8 *)param_1[3] != (undefined8 *)0x0) && ((param_2 & 4) != 0)) {
    dst_00 = (EC_GROUP *)ossl_ec_group_new_ex(param_1[10],param_1[0xb],*(undefined8 *)param_1[3]);
    *(EC_GROUP **)(key + 0x18) = dst_00;
    if ((dst_00 == (EC_GROUP *)0x0) ||
       (iVar2 = EC_GROUP_copy(dst_00,(EC_GROUP *)param_1[3]), iVar2 == 0)) goto LAB_00100cd0;
    if (*param_1 != 0) {
      *(long *)key = *param_1;
    }
  }
  if ((param_1[4] != 0) && ((param_2 & 2) != 0)) {
    if (*(EC_GROUP **)(key + 0x18) == (EC_GROUP *)0x0) goto LAB_00100cd0;
    dst = EC_POINT_new(*(EC_GROUP **)(key + 0x18));
    *(EC_POINT **)(key + 0x20) = dst;
    if ((dst == (EC_POINT *)0x0) || (iVar2 = EC_POINT_copy(dst,(EC_POINT *)param_1[4]), iVar2 == 0))
    goto LAB_00100cd0;
  }
  if ((param_1[5] != 0) && ((param_2 & 1) != 0)) {
    if (*(long *)(key + 0x18) == 0) goto LAB_00100cd0;
    pBVar3 = BN_new();
    *(BIGNUM **)(key + 0x28) = pBVar3;
    if (((pBVar3 == (BIGNUM *)0x0) ||
        (pBVar3 = BN_copy(pBVar3,(BIGNUM *)param_1[5]), pBVar3 == (BIGNUM *)0x0)) ||
       ((*(code **)(**(long **)(key + 0x18) + 0x160) != (code *)0x0 &&
        (iVar2 = (**(code **)(**(long **)(key + 0x18) + 0x160))(key,param_1), iVar2 == 0))))
    goto LAB_00100cd0;
  }
  if ((param_2 & 0x80) != 0) {
    *(long *)(key + 0x30) = param_1[6];
  }
  *(int *)(key + 0x10) = (int)param_1[2];
  *(undefined4 *)(key + 0x3c) = *(undefined4 *)((long)param_1 + 0x3c);
  iVar2 = CRYPTO_dup_ex_data(8,(CRYPTO_EX_DATA *)(key + 0x40),(CRYPTO_EX_DATA *)(param_1 + 8));
  if (iVar2 != 0) {
    if (*(long *)key == 0) {
      return key;
    }
    pcVar1 = *(code **)(*(long *)key + 0x20);
    if (pcVar1 == (code *)0x0) {
      return key;
    }
    if (((~param_2 & 3) == 0) && (iVar2 = (*pcVar1)(key,param_1), iVar2 != 0)) {
      return key;
    }
  }
LAB_00100cd0:
  EC_KEY_free(key);
  return (EC_KEY *)0x0;
}



undefined8 ossl_ec_encoding_param2id(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(int *)(param_1 + 8) == 4) {
    local_18 = *(long *)(param_1 + 0x10);
    if (local_18 != 0) {
      iVar1 = ossl_ec_encoding_name2id();
      goto joined_r0x00100dec;
    }
  }
  else if ((*(int *)(param_1 + 8) == 6) &&
          (iVar1 = OSSL_PARAM_get_utf8_ptr(param_1,&local_18), iVar1 != 0)) {
    iVar1 = ossl_ec_encoding_name2id(local_18);
joined_r0x00100dec:
    if (-1 < iVar1) {
      *param_2 = iVar1;
      uVar2 = 1;
      goto LAB_00100d93;
    }
  }
  uVar2 = 0;
LAB_00100d93:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_ec_pt_format_param2id(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(int *)(param_1 + 8) == 4) {
    local_18 = *(long *)(param_1 + 0x10);
    if (local_18 != 0) {
      iVar1 = ossl_ec_pt_format_name2id();
      goto joined_r0x00100e8c;
    }
  }
  else if ((*(int *)(param_1 + 8) == 6) &&
          (iVar1 = OSSL_PARAM_get_utf8_ptr(param_1,&local_18), iVar1 != 0)) {
    iVar1 = ossl_ec_pt_format_name2id(local_18);
joined_r0x00100e8c:
    if (-1 < iVar1) {
      *param_2 = iVar1;
      uVar2 = 1;
      goto LAB_00100e33;
    }
  }
  uVar2 = 0;
LAB_00100e33:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_ec_key_otherparams_fromdata(EC_KEY *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint flags;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (EC_KEY *)0x0) ||
     ((lVar3 = OSSL_PARAM_locate_const(param_2,"use-cofactor-flag"), lVar3 != 0 &&
      ((iVar1 = OSSL_PARAM_get_int(lVar3,&local_28), iVar1 == 0 ||
       (iVar1 = ossl_ec_set_ecdh_cofactor_mode(param_1,local_28 & 0xffffffff), iVar1 == 0))))))
  goto LAB_00100f28;
  lVar3 = OSSL_PARAM_locate_const(param_2,"include-public");
  if (lVar3 != 0) {
    local_28 = CONCAT44(local_28._4_4_,1);
    iVar1 = OSSL_PARAM_get_int(lVar3,&local_28);
    if (iVar1 == 0) goto LAB_00100f28;
    iVar1 = (point_conversion_form_t)local_28;
    uVar2 = EC_KEY_get_enc_flags(param_1);
    flags = uVar2 | 2;
    if (iVar1 != 0) {
      flags = uVar2 & 0xfffffffd;
    }
    EC_KEY_set_enc_flags(param_1,flags);
  }
  local_28 = CONCAT44(local_28._4_4_,0xffffffff);
  lVar3 = OSSL_PARAM_locate_const(param_2,"point-format");
  if (lVar3 != 0) {
    iVar1 = ossl_ec_pt_format_param2id(lVar3,&local_28);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_backend.c",0x20e,"ec_key_point_format_fromdata");
      ERR_set_error(0x10,0x68,0);
      goto LAB_00100f28;
    }
    EC_KEY_set_conv_form(param_1,(point_conversion_form_t)local_28);
  }
  lVar3 = OSSL_PARAM_locate_const(param_2,"group-check");
  bVar4 = true;
  if (lVar3 == 0) goto LAB_00100f2a;
  local_28 = 0;
  if (*(int *)(lVar3 + 8) == 4) {
    local_28 = *(ulong *)(lVar3 + 0x10);
    if (local_28 != 0) goto LAB_00100ff6;
  }
  else if ((*(int *)(lVar3 + 8) == 6) &&
          (iVar1 = OSSL_PARAM_get_utf8_ptr(lVar3,&local_28), iVar1 != 0)) {
LAB_00100ff6:
    iVar1 = ossl_ec_set_check_group_type_from_name(param_1,local_28);
    bVar4 = iVar1 != 0;
    goto LAB_00100f2a;
  }
LAB_00100f28:
  bVar4 = false;
LAB_00100f2a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



bool ossl_x509_algor_is_sm2(X509_ALGOR *param_1)

{
  int iVar1;
  EC_GROUP *group;
  long in_FS_OFFSET;
  bool bVar2;
  int local_34;
  ASN1_OBJECT *local_30;
  char **local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  local_30 = (ASN1_OBJECT *)0x0;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_34,&local_30,param_1);
  if (local_34 == 6) {
    iVar1 = OBJ_obj2nid(local_30);
    bVar2 = iVar1 == 0x494;
  }
  else {
    bVar2 = false;
    if (local_34 == 0x10) {
      local_28 = local_30->ln;
      group = d2i_ECPKParameters((EC_GROUP **)0x0,(uchar **)&local_28,(long)*(int *)&local_30->sn);
      if (group != (EC_GROUP *)0x0) {
        iVar1 = EC_GROUP_get_curve_name(group);
        bVar2 = iVar1 == 0x494;
      }
      EC_GROUP_free(group);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EC_KEY * ossl_ec_key_param_from_x509_algor
                   (X509_ALGOR *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  EC_GROUP *group;
  EC_KEY *pEVar2;
  EC_KEY *pEVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  EC_KEY *local_30;
  char **local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38 = (ASN1_OBJECT *)0x0;
  local_30 = (EC_KEY *)0x0;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_3c,&local_38,param_1);
  local_30 = (EC_KEY *)EC_KEY_new_ex(param_2,param_3);
  if (local_30 == (EC_KEY *)0x0) {
    ERR_new();
    group = (EC_GROUP *)0x0;
    ERR_set_debug("crypto/ec/ec_backend.c",0x302,"ossl_ec_key_param_from_x509_algor");
    ERR_set_error(0x10,0x80010,0);
  }
  else {
    if (local_3c == 0x10) {
      local_28 = local_38->ln;
      pEVar3 = d2i_ECParameters(&local_30,(uchar **)&local_28,(long)*(int *)&local_38->sn);
      pEVar2 = local_30;
      if (pEVar3 != (EC_KEY *)0x0) goto LAB_00101203;
      ERR_new();
      uVar4 = 0x30d;
LAB_00101231:
      ERR_set_debug("crypto/ec/ec_backend.c",uVar4,"ossl_ec_key_param_from_x509_algor");
      ERR_set_error(0x10,0x8e,0);
    }
    else {
      if (local_3c != 6) {
        ERR_new();
        uVar4 = 799;
        goto LAB_00101231;
      }
      iVar1 = OBJ_obj2nid(local_38);
      group = (EC_GROUP *)EC_GROUP_new_by_curve_name_ex(param_2,param_3,iVar1);
      if (group != (EC_GROUP *)0x0) {
        EC_GROUP_set_asn1_flag(group,1);
        iVar1 = EC_KEY_set_group(local_30,group);
        if (iVar1 != 0) {
          EC_GROUP_free(group);
          pEVar2 = local_30;
          goto LAB_00101203;
        }
        goto LAB_00101258;
      }
    }
    group = (EC_GROUP *)0x0;
  }
LAB_00101258:
  EC_KEY_free(local_30);
  EC_GROUP_free(group);
  pEVar2 = (EC_KEY *)0x0;
LAB_00101203:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar2;
}



EC_KEY * ossl_ec_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  EC_KEY *pEVar2;
  EC_KEY *pEVar3;
  long in_FS_OFFSET;
  int local_3c;
  uchar *local_38;
  EC_KEY *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  local_30 = (EC_KEY *)0x0;
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_38,&local_3c,&local_28,param_1);
  if (iVar1 != 0) {
    local_30 = (EC_KEY *)ossl_ec_key_param_from_x509_algor(local_28,param_2,param_3);
    if (local_30 != (EC_KEY *)0x0) {
      pEVar2 = d2i_ECPrivateKey(&local_30,&local_38,(long)local_3c);
      pEVar3 = local_30;
      if (pEVar2 != (EC_KEY *)0x0) goto LAB_00101381;
      ERR_new();
      ERR_set_debug("crypto/ec/ec_backend.c",0x33b,"ossl_ec_key_from_pkcs8");
      ERR_set_error(0x10,0x8e,0);
    }
    EC_KEY_free(local_30);
  }
  pEVar3 = (EC_KEY *)0x0;
LAB_00101381:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


