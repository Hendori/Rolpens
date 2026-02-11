
bool slh_dsa_compute_pk_root(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong __n;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0xa0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = *(undefined8 **)(lVar1 + 0xa8);
  __n = (ulong)*(uint *)(lVar2 + 0x10);
  (*(code *)puVar3[9])(local_88);
  (*(code *)*puVar3)(local_88,*(int *)(lVar2 + 0x18) + -1);
  iVar4 = *(int *)(*(long *)(lVar1 + 0xa0) + 0x10);
  if (param_3 == 0) {
    iVar4 = ossl_slh_xmss_node(param_1,lVar1,0,*(undefined4 *)(lVar2 + 0x1c),
                               lVar1 + (ulong)(uint)(iVar4 * 2),local_88,
                               (ulong)(uint)(*(int *)(*(long *)(param_2 + 0xa0) + 0x10) * 3) +
                               param_2,__n);
    bVar5 = true;
    if (iVar4 != 0) goto LAB_001000aa;
  }
  else {
    iVar4 = ossl_slh_xmss_node(param_1,lVar1,0,*(undefined4 *)(lVar2 + 0x1c),
                               lVar1 + (ulong)(uint)(iVar4 * 2),local_88,local_68,__n);
    if (iVar4 != 0) {
      iVar4 = memcmp(local_68,(void *)((ulong)(uint)(*(int *)(*(long *)(param_2 + 0xa0) + 0x10) * 3)
                                      + param_2),__n);
      bVar5 = iVar4 == 0;
      goto LAB_001000aa;
    }
  }
  bVar5 = false;
LAB_001000aa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_slh_dsa_key_free(void *param_1)

{
  long lVar1;
  
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x90));
    lVar1 = *(long *)((long)param_1 + 0xb8);
    if (*(long *)((long)param_1 + 0xc0) != lVar1) {
      EVP_MD_free(*(long *)((long)param_1 + 0xc0));
      lVar1 = *(long *)((long)param_1 + 0xb8);
    }
    *(undefined8 *)((long)param_1 + 0xc0) = 0;
    EVP_MD_free(lVar1);
    EVP_MAC_free(*(undefined8 *)((long)param_1 + 200));
    *(undefined8 *)((long)param_1 + 0xb8) = 0;
    OPENSSL_cleanse(param_1,0x40);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long ossl_slh_dsa_key_new(undefined8 param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = ossl_slh_dsa_params_get(param_3);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = CRYPTO_zalloc(0xd0,"crypto/slh_dsa/slh_dsa_key.c",0x60);
  if (lVar4 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar4 + 0x88) = param_1;
  *(long *)(lVar4 + 0xa0) = lVar3;
  if (param_2 == (char *)0x0) {
    pcVar5 = *(char **)(lVar4 + 0x90);
  }
  else {
    pcVar5 = CRYPTO_strdup(param_2,"crypto/slh_dsa/slh_dsa_key.c",0x65);
    *(char **)(lVar4 + 0x90) = pcVar5;
    if (pcVar5 == (char *)0x0) goto LAB_0010032b;
    lVar3 = *(long *)(lVar4 + 0xa0);
    param_1 = *(undefined8 *)(lVar4 + 0x88);
  }
  iVar1 = *(int *)(lVar3 + 0xc);
  iVar2 = *(int *)(lVar3 + 0x2c);
  if (iVar1 == 0) {
    lVar3 = EVP_MD_fetch(param_1,"SHA2-256",pcVar5);
    *(long *)(lVar4 + 0xb8) = lVar3;
    if (lVar3 == 0) {
LAB_0010032b:
      ossl_slh_dsa_key_free(lVar4);
      return 0;
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x90);
    uVar7 = *(undefined8 *)(lVar4 + 0x88);
    if (iVar2 == 1) {
      *(long *)(lVar4 + 0xc0) = lVar3;
    }
    else {
      lVar3 = EVP_MD_fetch(uVar7,"SHA2-512",uVar6);
      *(long *)(lVar4 + 0xc0) = lVar3;
      if (lVar3 == 0) goto LAB_00100388;
      uVar6 = *(undefined8 *)(lVar4 + 0x90);
      uVar7 = *(undefined8 *)(lVar4 + 0x88);
    }
    lVar3 = EVP_MAC_fetch(uVar7,&_LC2,uVar6);
    *(long *)(lVar4 + 200) = lVar3;
    if (lVar3 == 0) {
LAB_00100388:
      CRYPTO_free(*(void **)(lVar4 + 0x90));
      lVar3 = *(long *)(lVar4 + 0xb8);
      if (*(long *)(lVar4 + 0xc0) != lVar3) {
        EVP_MD_free(*(long *)(lVar4 + 0xc0));
        lVar3 = *(long *)(lVar4 + 0xb8);
      }
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      EVP_MD_free(lVar3);
      EVP_MAC_free(*(undefined8 *)(lVar4 + 200));
      *(undefined8 *)(lVar4 + 0xb8) = 0;
      ossl_slh_dsa_key_free(lVar4);
      return 0;
    }
  }
  else {
    lVar3 = EVP_MD_fetch(param_1,"SHAKE-256",pcVar5);
    *(long *)(lVar4 + 0xb8) = lVar3;
    if (lVar3 == 0) goto LAB_0010032b;
  }
  uVar6 = ossl_slh_get_adrs_fn(iVar1 == 0);
  *(undefined8 *)(lVar4 + 0xa8) = uVar6;
  uVar6 = ossl_slh_get_hash_fn(iVar1);
  *(undefined8 *)(lVar4 + 0xb0) = uVar6;
  return lVar4;
}



undefined8 * ossl_slh_dsa_key_dup(undefined8 *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  char *pcVar20;
  bool bVar21;
  
  if ((param_1 == (undefined8 *)0x0) ||
     (puVar18 = (undefined8 *)CRYPTO_zalloc(0xd0,"crypto/slh_dsa/slh_dsa_key.c",0x8e),
     puVar18 == (undefined8 *)0x0)) {
LAB_001005d2:
    puVar18 = (undefined8 *)0x0;
  }
  else {
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    uVar8 = param_1[4];
    uVar9 = param_1[5];
    uVar12 = param_1[6];
    uVar13 = param_1[7];
    uVar16 = param_1[8];
    uVar17 = param_1[9];
    *puVar18 = *param_1;
    puVar18[1] = uVar2;
    uVar2 = param_1[10];
    uVar3 = param_1[0xb];
    puVar18[2] = uVar4;
    puVar18[3] = uVar5;
    uVar4 = param_1[0xc];
    uVar5 = param_1[0xd];
    uVar6 = param_1[0xe];
    uVar7 = param_1[0xf];
    puVar18[4] = uVar8;
    puVar18[5] = uVar9;
    uVar8 = param_1[0x10];
    uVar9 = param_1[0x11];
    uVar10 = param_1[0x12];
    uVar11 = param_1[0x13];
    puVar18[6] = uVar12;
    puVar18[7] = uVar13;
    uVar12 = param_1[0x14];
    uVar13 = param_1[0x15];
    uVar14 = param_1[0x16];
    uVar15 = param_1[0x17];
    puVar18[8] = uVar16;
    puVar18[9] = uVar17;
    lVar1 = param_1[0x18];
    uVar16 = param_1[0x18];
    uVar17 = param_1[0x19];
    puVar18[0x12] = uVar10;
    puVar18[0x13] = uVar11;
    puVar18[0x10] = uVar8;
    puVar18[0x11] = uVar9;
    puVar18[0x12] = 0;
    puVar18[0x10] = 0;
    *(undefined4 *)(puVar18 + 0x13) = 0;
    puVar18[10] = uVar2;
    puVar18[0xb] = uVar3;
    puVar18[0xc] = uVar4;
    puVar18[0xd] = uVar5;
    puVar18[0xe] = uVar6;
    puVar18[0xf] = uVar7;
    puVar18[0x14] = uVar12;
    puVar18[0x15] = uVar13;
    puVar18[0x16] = uVar14;
    puVar18[0x17] = uVar15;
    puVar18[0x18] = uVar16;
    puVar18[0x19] = uVar17;
    lVar19 = param_1[0x17];
    if (lVar1 == 0) {
LAB_0010051c:
      if (lVar19 != 0) goto LAB_001005b0;
      lVar1 = param_1[0x19];
    }
    else {
      bVar21 = lVar19 != lVar1;
      lVar19 = lVar1;
      if (bVar21) {
        EVP_MD_up_ref();
        lVar19 = param_1[0x17];
        goto LAB_0010051c;
      }
LAB_001005b0:
      EVP_MD_up_ref(lVar19);
      lVar1 = param_1[0x19];
    }
    if (lVar1 != 0) {
      EVP_MAC_up_ref();
    }
    if ((char *)param_1[0x12] != (char *)0x0) {
      pcVar20 = CRYPTO_strdup((char *)param_1[0x12],"crypto/slh_dsa/slh_dsa_key.c",0x96);
      puVar18[0x12] = pcVar20;
      if (pcVar20 == (char *)0x0) {
        ossl_slh_dsa_key_free(puVar18);
        goto LAB_001005d2;
      }
    }
    if ((param_2 & 3) != 0) {
      if (param_1[0x10] != 0) {
        puVar18[0x10] = (ulong)(uint)(*(int *)(puVar18[0x14] + 0x10) * 2) + (long)puVar18;
      }
      if ((param_2 & 1) != 0) {
        *(undefined4 *)(puVar18 + 0x13) = *(undefined4 *)(param_1 + 0x13);
      }
    }
  }
  return puVar18;
}



uint ossl_slh_dsa_key_equal(void *param_1,void *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = *(long *)((long)param_1 + 0xa0);
  uVar3 = 0;
  if ((lVar1 == *(long *)((long)param_2 + 0xa0)) && (uVar3 = 1, (param_3 & 3) != 0)) {
    if (((param_3 & 2) == 0) ||
       ((*(void **)((long)param_1 + 0x80) == (void *)0x0 ||
        (*(void **)((long)param_2 + 0x80) == (void *)0x0)))) {
      uVar3 = param_3 & 1;
      if (((param_3 & 1) != 0) &&
         ((uVar3 = *(uint *)((long)param_1 + 0x98), uVar3 != 0 &&
          (uVar3 = *(uint *)((long)param_2 + 0x98), uVar3 != 0)))) {
        iVar2 = memcmp(param_1,param_2,(ulong)*(uint *)(lVar1 + 0x30));
        uVar3 = (uint)(iVar2 == 0);
      }
    }
    else {
      iVar2 = memcmp(*(void **)((long)param_1 + 0x80),*(void **)((long)param_2 + 0x80),
                     (ulong)*(uint *)(lVar1 + 0x30));
      uVar3 = (uint)(iVar2 == 0);
    }
    return uVar3;
  }
  return uVar3;
}



bool ossl_slh_dsa_key_has(long param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = param_2 & 3;
  if (bVar1 != 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
      if ((param_2 & 1) != 0) {
        return *(int *)(param_1 + 0x98) != 0;
      }
    }
  }
  return (bool)bVar1;
}



undefined4 ossl_slh_dsa_key_pairwise_check(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    lVar2 = ossl_slh_dsa_hash_ctx_new();
    if (lVar2 != 0) {
      uVar1 = slh_dsa_compute_pk_root(lVar2,param_1,1);
      ossl_slh_dsa_hash_ctx_free(lVar2);
      return uVar1;
    }
  }
  return 0;
}



undefined8
ossl_slh_dsa_generate_key
          (undefined8 param_1,void *param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  ulong len;
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)*(uint *)(*(long *)((long)param_2 + 0xa0) + 0x10);
  len = uVar2 * 2;
  lVar3 = (len & 0xffffffff) + (long)param_2;
  if ((param_4 == (void *)0x0) || (param_5 == 0)) {
    iVar1 = RAND_priv_bytes_ex(param_3,param_2,len,0);
    if ((iVar1 < 1) || (iVar1 = RAND_bytes_ex(param_3,lVar3,uVar2,0), iVar1 < 1)) goto LAB_0010077c;
  }
  else {
    if (uVar2 * 3 != param_5) goto LAB_0010077c;
    memcpy(param_2,param_4,uVar2 * 3);
  }
  iVar1 = slh_dsa_compute_pk_root(param_1,param_2,0);
  if (iVar1 != 0) {
    *(long *)((long)param_2 + 0x80) = lVar3;
    *(undefined4 *)((long)param_2 + 0x98) = 1;
    return 1;
  }
LAB_0010077c:
  *(undefined4 *)((long)param_2 + 0x98) = 0;
  *(undefined8 *)((long)param_2 + 0x80) = 0;
  OPENSSL_cleanse(param_2,len);
  return 0;
}



bool ossl_slh_dsa_key_type_matches(long param_1)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(**(undefined8 **)(param_1 + 0xa0));
  return iVar1 == 0;
}



undefined8 ossl_slh_dsa_key_get_pub(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



int ossl_slh_dsa_key_get_pub_len(long param_1)

{
  return *(int *)(*(long *)(param_1 + 0xa0) + 0x10) * 2;
}



long ossl_slh_dsa_key_get_priv(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



int ossl_slh_dsa_key_get_priv_len(long param_1)

{
  return *(int *)(*(long *)(param_1 + 0xa0) + 0x10) * 4;
}



undefined8 ossl_slh_dsa_key_fromdata(void *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong len;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_40;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  if (param_1 != (void *)0x0) {
    len = ossl_slh_dsa_key_get_priv_len();
    uVar4 = len >> 1;
    if ((param_3 == 0) || (lVar2 = OSSL_PARAM_locate_const(param_2,&_LC5), lVar2 == 0)) {
LAB_001009c8:
      local_38 = (void *)((ulong)(uint)(*(int *)(*(long *)((long)param_1 + 0xa0) + 0x10) * 2) +
                         (long)param_1);
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC6);
      if (((lVar2 != 0) &&
          (iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_38,uVar4,&local_40), iVar1 != 0)) &&
         (local_40 == uVar4)) {
        *(void **)((long)param_1 + 0x80) = local_38;
LAB_00100a2a:
        uVar3 = 1;
        goto LAB_00100992;
      }
    }
    else {
      local_38 = param_1;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_38,len,&local_40);
      if (iVar1 == 0) goto LAB_00100990;
      if (local_40 == len) {
        *(undefined4 *)((long)param_1 + 0x98) = 1;
        *(ulong *)((long)param_1 + 0x80) =
             (ulong)(uint)(*(int *)(*(long *)((long)param_1 + 0xa0) + 0x10) * 2) + (long)param_1;
        goto LAB_00100a2a;
      }
      if (local_40 == uVar4) {
        *(undefined4 *)((long)param_1 + 0x98) = 1;
        goto LAB_001009c8;
      }
    }
    *(undefined4 *)((long)param_1 + 0x98) = 0;
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    OPENSSL_cleanse(param_1,len);
  }
LAB_00100990:
  uVar3 = 0;
LAB_00100992:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4 ossl_slh_dsa_key_get_n(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10);
}



undefined4 ossl_slh_dsa_key_get_sig_len(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x34);
}



undefined8 ossl_slh_dsa_key_get_name(long param_1)

{
  return **(undefined8 **)(param_1 + 0xa0);
}



undefined4 ossl_slh_dsa_key_get_type(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0xa0) + 8);
}



undefined8 ossl_slh_dsa_set_priv(void *param_1,void *param_2,size_t param_3)

{
  size_t __n;
  
  __n = ossl_slh_dsa_key_get_priv_len();
  if (__n != param_3) {
    return 0;
  }
  memcpy(param_1,param_2,__n);
  *(undefined4 *)((long)param_1 + 0x98) = 1;
  *(ulong *)((long)param_1 + 0x80) =
       (ulong)(uint)(*(int *)(*(long *)((long)param_1 + 0xa0) + 0x10) * 2) + (long)param_1;
  return 1;
}



undefined8 ossl_slh_dsa_set_pub(long param_1,void *param_2,size_t param_3)

{
  size_t __n;
  void *__dest;
  
  __n = ossl_slh_dsa_key_get_pub_len();
  if (__n != param_3) {
    return 0;
  }
  __dest = (void *)((ulong)(uint)(*(int *)(*(long *)(param_1 + 0xa0) + 0x10) * 2) + param_1);
  *(void **)(param_1 + 0x80) = __dest;
  memcpy(__dest,param_2,__n);
  *(undefined4 *)(param_1 + 0x98) = 0;
  return 1;
}



bool ossl_slh_dsa_key_to_text(BIO *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if ((param_1 == (BIO *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/slh_dsa/slh_dsa_key.c",0x1d3,"ossl_slh_dsa_key_to_text");
    ERR_set_error(0x39,0xc0102,0);
    return false;
  }
  uVar2 = ossl_slh_dsa_key_get_name(param_2);
  lVar3 = ossl_slh_dsa_key_get_pub(param_2);
  if (lVar3 == 0) {
    ERR_new();
    uVar4 = 0x1d9;
LAB_00100cd9:
    ERR_set_debug("crypto/slh_dsa/slh_dsa_key.c",uVar4,"ossl_slh_dsa_key_to_text");
    ERR_set_error(0x39,0x80,"no %s key material available",uVar2);
    bVar5 = false;
  }
  else {
    if ((param_3 & 1) == 0) {
      if (((param_3 & 2) != 0) && (iVar1 = BIO_printf(param_1,"%s Public-Key:\n",uVar2), iVar1 < 1))
      {
        return false;
      }
    }
    else {
      lVar3 = ossl_slh_dsa_key_get_priv(param_2);
      if (lVar3 == 0) {
        ERR_new();
        uVar4 = 0x1e0;
        goto LAB_00100cd9;
      }
      iVar1 = BIO_printf(param_1,"%s Private-Key:\n",uVar2);
      if (iVar1 < 1) {
        return false;
      }
      uVar2 = ossl_slh_dsa_key_get_priv_len(param_2);
      uVar4 = ossl_slh_dsa_key_get_priv(param_2);
      iVar1 = ossl_bio_print_labeled_buf(param_1,"priv:",uVar4,uVar2);
      if (iVar1 == 0) {
        return false;
      }
    }
    uVar2 = ossl_slh_dsa_key_get_pub_len(param_2);
    uVar4 = ossl_slh_dsa_key_get_pub(param_2);
    iVar1 = ossl_bio_print_labeled_buf(param_1,&_LC10,uVar4,uVar2);
    bVar5 = iVar1 != 0;
  }
  return bVar5;
}


