
undefined8 pkey_ec_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  EVP_MD *pEVar4;
  
  iVar1 = strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    iVar1 = EC_curve_nist2nid(param_3);
    if (iVar1 != 0) {
LAB_001000dc:
      uVar2 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid(param_1,iVar1);
      return uVar2;
    }
    iVar1 = OBJ_sn2nid(param_3);
    if (iVar1 != 0) goto LAB_001000dc;
    iVar1 = OBJ_ln2nid(param_3);
    if (iVar1 != 0) goto LAB_001000dc;
    ERR_new();
    ERR_set_debug("crypto/ec/ec_pmeth.c",399,"pkey_ec_ctrl_str");
    ERR_set_error(0x10,0x8d,0);
LAB_00100158:
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_2,"ec_param_enc");
    if (iVar1 == 0) {
      iVar1 = strcmp(param_3,"explicit");
      if (iVar1 == 0) {
LAB_0010006c:
        uVar2 = EVP_PKEY_CTX_set_ec_param_enc(param_1,iVar1);
        return uVar2;
      }
      iVar1 = strcmp(param_3,"named_curve");
      if (iVar1 == 0) {
        iVar1 = 1;
        goto LAB_0010006c;
      }
    }
    else {
      iVar1 = strcmp(param_2,"ecdh_kdf_md");
      if (iVar1 == 0) {
        pEVar4 = EVP_get_digestbyname(param_3);
        if (pEVar4 != (EVP_MD *)0x0) {
          uVar2 = EVP_PKEY_CTX_set_ecdh_kdf_md(param_1);
          return uVar2;
        }
        ERR_new();
        ERR_set_debug("crypto/ec/ec_pmeth.c",0x19f,"pkey_ec_ctrl_str");
        ERR_set_error(0x10,0x97,0);
        goto LAB_00100158;
      }
      iVar1 = strcmp(param_2,"ecdh_cofactor_mode");
      if (iVar1 == 0) {
        uVar3 = strtol(param_3,(char **)0x0,10);
        uVar2 = EVP_PKEY_CTX_set_ecdh_cofactor_mode(param_1,uVar3 & 0xffffffff);
        return uVar2;
      }
    }
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



void pkey_ec_cleanup(long param_1)

{
  undefined8 *ptr;
  
  ptr = *(undefined8 **)(param_1 + 0x98);
  if (ptr != (undefined8 *)0x0) {
    EC_GROUP_free((EC_GROUP *)*ptr);
    EC_KEY_free((EC_KEY *)ptr[2]);
    CRYPTO_free((void *)ptr[5]);
    CRYPTO_free(ptr);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}



uint pkey_ec_ctrl(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  EC_KEY *pEVar5;
  EC_GROUP *pEVar6;
  EC_KEY *key;
  
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (param_2 < 0xe) {
    if (0 < param_2) {
      if ((1L << ((byte)param_2 & 0x3f) & 0x8a4U) != 0) {
        return 1;
      }
      if (param_2 == 0xd) {
        *param_4 = puVar1[1];
        return 1;
      }
      if (param_2 != 1) {
        return 0xfffffffe;
      }
      iVar2 = EVP_MD_get_type(param_4);
      if ((((((iVar2 != 0x40) && (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x1a0)) &&
            (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a3)) &&
           ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a0 &&
            (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a1)))) &&
          ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x2a2 &&
           ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x448 &&
            (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x449)))))) &&
         ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x44a &&
          ((iVar2 = EVP_MD_get_type(param_4), iVar2 != 1099 &&
           (iVar2 = EVP_MD_get_type(param_4), iVar2 != 0x477)))))) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_pmeth.c",0x16d,"pkey_ec_ctrl");
        ERR_set_error(0x10,0x8a,0);
        return 0;
      }
      puVar1[1] = param_4;
      return 1;
    }
  }
  else if (param_2 - 0x1001U < 10) {
    switch(param_2) {
    case 0x1002:
      if ((EC_GROUP *)*puVar1 == (EC_GROUP *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_pmeth.c",0x108,"pkey_ec_ctrl");
        ERR_set_error(0x10,0x8b,0);
        return 0;
      }
      EC_GROUP_set_asn1_flag((EC_GROUP *)*puVar1,param_3);
      break;
    case 0x1003:
      if (param_3 == -2) {
        if (*(char *)(puVar1 + 3) == -1) {
          pEVar5 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
          uVar3 = EC_KEY_get_flags(pEVar5);
          return uVar3 >> 0xc & 1;
        }
        return (int)*(char *)(puVar1 + 3);
      }
      if (2 < param_3 + 1U) {
        return 0xfffffffe;
      }
      *(char *)(puVar1 + 3) = (char)param_3;
      if (param_3 == -1) {
        EC_KEY_free((EC_KEY *)puVar1[2]);
        puVar1[2] = 0;
      }
      else {
        pEVar5 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
        if (*(long *)(*(long *)(param_1 + 0x88) + 0x60) != 0) {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_pmeth.c",0x122,"pkey_ec_ctrl");
          ERR_set_error(0x10,0x8010c,0);
          return 0;
        }
        if (*(long *)(pEVar5 + 0x18) == 0) {
          return 0xfffffffe;
        }
        iVar2 = BN_is_one(*(undefined8 *)(*(long *)(pEVar5 + 0x18) + 0x18));
        if (iVar2 == 0) {
          key = (EC_KEY *)puVar1[2];
          if (key == (EC_KEY *)0x0) {
            key = EC_KEY_dup(pEVar5);
            puVar1[2] = key;
            if (key == (EC_KEY *)0x0) {
              return 0;
            }
          }
          if (param_3 == 0) {
            EC_KEY_clear_flags(key,0x1000);
          }
          else {
            EC_KEY_set_flags(key,0x1000);
          }
        }
      }
      break;
    case 0x1004:
      if (param_3 == -2) {
        return (int)*(char *)((long)puVar1 + 0x19);
      }
      if (1 < param_3 - 1U) {
        return 0xfffffffe;
      }
      *(char *)((long)puVar1 + 0x19) = (char)param_3;
      break;
    case 0x1005:
      puVar1[4] = param_4;
      break;
    case 0x1006:
      *param_4 = puVar1[4];
      break;
    case 0x1007:
      if (param_3 < 1) {
        return 0xfffffffe;
      }
      puVar1[7] = (long)param_3;
      break;
    case 0x1008:
      *(int *)param_4 = (int)puVar1[7];
      break;
    case 0x1009:
      CRYPTO_free((void *)puVar1[5]);
      lVar4 = (long)param_3;
      if (param_4 == (undefined8 *)0x0) {
        lVar4 = 0;
      }
      puVar1[5] = param_4;
      puVar1[6] = lVar4;
      break;
    case 0x100a:
      *param_4 = puVar1[5];
      return *(uint *)(puVar1 + 6);
    default:
      pEVar6 = EC_GROUP_new_by_curve_name(param_3);
      if (pEVar6 == (EC_GROUP *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_pmeth.c",0xff,"pkey_ec_ctrl");
        ERR_set_error(0x10,0x8d,0);
        return 0;
      }
      EC_GROUP_free((EC_GROUP *)*puVar1);
      *puVar1 = pEVar6;
    }
    return 1;
  }
  return 0xfffffffe;
}



undefined8 pkey_ec_derive(long param_1,void *param_2,size_t *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  EC_KEY *key;
  EC_POINT *pub_key;
  EC_GROUP *group;
  EC_KEY *key_00;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    ERR_new();
    uVar4 = 0xb0;
  }
  else {
    key = (EC_KEY *)EVP_PKEY_get0_EC_KEY();
    if (key != (EC_KEY *)0x0) {
      key_00 = *(EC_KEY **)(lVar1 + 0x10);
      if (key_00 == (EC_KEY *)0x0) {
        key_00 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
      }
      if (param_2 != (void *)0x0) {
        pub_key = EC_KEY_get0_public_key(key);
        iVar2 = ECDH_compute_key(param_2,*param_3,pub_key,key_00,(KDF *)0x0);
        if (iVar2 < 1) {
          return 0;
        }
        *param_3 = (long)iVar2;
        return 1;
      }
      group = EC_KEY_get0_group(key_00);
      if (group == (EC_GROUP *)0x0) {
        return 0;
      }
      iVar3 = EC_GROUP_get_degree(group);
      iVar2 = iVar3 + 0xe;
      if (-1 < iVar3 + 7) {
        iVar2 = iVar3 + 7;
      }
      *param_3 = (long)(iVar2 >> 3);
      return 1;
    }
    ERR_new();
    uVar4 = 0xb5;
  }
  ERR_set_debug("crypto/ec/ec_pmeth.c",uVar4,"pkey_ec_derive");
  ERR_set_error(0x10,0x8c,0);
  return 0;
}



ulong pkey_ec_kdf_derive(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = pkey_ec_derive();
      return uVar5;
    }
    goto LAB_00100933;
  }
  if (param_2 == 0) {
    *param_3 = *(long *)(lVar1 + 0x38);
    uVar5 = 1;
  }
  else {
    if (*param_3 == *(long *)(lVar1 + 0x38)) {
      iVar2 = pkey_ec_derive(param_1,0,&local_48);
      if (iVar2 != 0) {
        pvVar4 = CRYPTO_malloc((int)local_48,"crypto/ec/ec_pmeth.c",0xe6);
        if (pvVar4 != (void *)0x0) {
          uVar3 = pkey_ec_derive(param_1,pvVar4,&local_48);
          if (uVar3 != 0) {
            iVar2 = ossl_ecdh_kdf_X9_63(param_2,*param_3,pvVar4,local_48,
                                        *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),
                                        *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(param_1 + 8),
                                        *(undefined8 *)(param_1 + 0x10));
            uVar3 = (uint)(iVar2 != 0);
          }
          CRYPTO_clear_free(pvVar4,local_48,"crypto/ec/ec_pmeth.c",0xf2);
          uVar5 = (ulong)uVar3;
          goto LAB_00100831;
        }
      }
    }
    uVar5 = 0;
  }
LAB_00100831:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00100933:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pkey_ec_verify(long param_1,uchar *param_2,int param_3,uchar *param_4,int param_5)

{
  long lVar1;
  int type;
  EC_KEY *eckey;
  
  lVar1 = *(long *)(param_1 + 0x98);
  eckey = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
  type = 0x40;
  lVar1 = *(long *)(lVar1 + 8);
  if (lVar1 != 0) {
    type = EVP_MD_get_type(lVar1);
  }
  ECDSA_verify(type,param_4,param_5,param_2,param_3,eckey);
  return;
}



int pkey_ec_sign(long param_1,uchar *param_2,ulong *param_3,uchar *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  EC_KEY *eckey;
  ulong uVar3;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  eckey = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
  iVar2 = ECDSA_size(eckey);
  if (iVar2 < 1) {
LAB_00100aa0:
    iVar2 = 0;
  }
  else {
    uVar3 = (ulong)iVar2;
    if (param_2 != (uchar *)0x0) {
      if (*param_3 < uVar3) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_pmeth.c",0x80,"pkey_ec_sign");
        ERR_set_error(0x10,100,0);
        goto LAB_00100aa0;
      }
      lVar1 = *(long *)(lVar1 + 8);
      iVar2 = 0x40;
      if (lVar1 != 0) {
        iVar2 = EVP_MD_get_type(lVar1);
      }
      iVar2 = ECDSA_sign(iVar2,param_4,param_5,param_2,&local_44,eckey);
      if (iVar2 < 1) goto LAB_00100a4f;
      uVar3 = (ulong)local_44;
    }
    *param_3 = uVar3;
    iVar2 = 1;
  }
LAB_00100a4f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int pkey_ec_paramgen(long param_1,EVP_PKEY *param_2)

{
  long *plVar1;
  int iVar2;
  EC_KEY *key;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (*plVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_pmeth.c",0x1b3,"pkey_ec_paramgen");
    ERR_set_error(0x10,0x8b,0);
  }
  else {
    key = EC_KEY_new();
    if (key != (EC_KEY *)0x0) {
      iVar2 = EC_KEY_set_group(key,(EC_GROUP *)*plVar1);
      if (iVar2 != 0) {
        iVar2 = EVP_PKEY_assign(param_2,0x198,key);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      EC_KEY_free(key);
    }
  }
  return 0;
}



int pkey_ec_keygen(long param_1,EVP_PKEY *param_2)

{
  long *plVar1;
  int iVar2;
  EC_KEY *key;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) && (*plVar1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_pmeth.c",0x1c6,"pkey_ec_keygen");
    ERR_set_error(0x10,0x8b,0);
  }
  else {
    key = EC_KEY_new();
    if (key != (EC_KEY *)0x0) {
      iVar2 = EVP_PKEY_assign(param_2,0x198,key);
      if (iVar2 == 0) {
        EC_KEY_free(key);
      }
      else {
        if (*(EVP_PKEY **)(param_1 + 0x88) == (EVP_PKEY *)0x0) {
          iVar2 = EC_KEY_set_group(key,(EC_GROUP *)*plVar1);
        }
        else {
          iVar2 = EVP_PKEY_copy_parameters(param_2,*(EVP_PKEY **)(param_1 + 0x88));
        }
        if (iVar2 != 0) {
          iVar2 = EC_KEY_generate_key(key);
          return iVar2;
        }
      }
    }
  }
  return 0;
}



undefined8 pkey_ec_init(long param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x40,"crypto/ec/ec_pmeth.c",0x33);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x98) = lVar1;
    *(undefined2 *)(lVar1 + 0x18) = 0x1ff;
    return 1;
  }
  return 0;
}



undefined8 pkey_ec_copy(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  EC_GROUP *pEVar3;
  EC_KEY *pEVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x40,"crypto/ec/ec_pmeth.c",0x33);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  *(undefined8 **)(param_1 + 0x98) = puVar2;
  puVar1 = *(undefined8 **)(param_2 + 0x98);
  *(undefined2 *)(puVar2 + 3) = 0x1ff;
  if ((EC_GROUP *)*puVar1 != (EC_GROUP *)0x0) {
    pEVar3 = EC_GROUP_dup((EC_GROUP *)*puVar1);
    *puVar2 = pEVar3;
    if (pEVar3 == (EC_GROUP *)0x0) {
      return 0;
    }
  }
  pEVar4 = (EC_KEY *)puVar1[2];
  puVar2[1] = puVar1[1];
  if (pEVar4 != (EC_KEY *)0x0) {
    pEVar4 = EC_KEY_dup(pEVar4);
    puVar2[2] = pEVar4;
    if (pEVar4 == (EC_KEY *)0x0) {
      return 0;
    }
  }
  *(undefined1 *)((long)puVar2 + 0x19) = *(undefined1 *)((long)puVar1 + 0x19);
  lVar5 = puVar1[5];
  uVar6 = puVar1[6];
  puVar2[4] = puVar1[4];
  puVar2[7] = puVar1[7];
  if (lVar5 == 0) {
    puVar2[5] = 0;
  }
  else {
    lVar5 = CRYPTO_memdup(lVar5,uVar6,"crypto/ec/ec_pmeth.c",0x53);
    puVar2[5] = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
    uVar6 = puVar1[6];
  }
  puVar2[6] = uVar6;
  return 1;
}



undefined1 * ossl_ec_pkey_method(void)

{
  return ec_pkey_meth;
}


