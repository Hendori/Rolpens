
undefined8 check_suite_b(long param_1,int param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_90 [8];
  char local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    iVar1 = EVP_PKEY_is_a(param_1,&_LC0);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_get_group_name(param_1,local_88,0x50,local_90);
      if (iVar1 != 0) {
        iVar1 = OBJ_txt2nid(local_88);
        if (iVar1 == 0x2cb) {
          if ((param_2 == -1) || (uVar2 = 0x3b, param_2 == 0x31b)) {
            uVar2 = 0x3c;
            if ((*param_3 & 0x20000) != 0) {
              uVar2 = 0;
              *param_3 = *param_3 & 0xfffffffffffeffff;
            }
          }
          goto LAB_001000a5;
        }
        if (iVar1 == 0x19f) {
          if ((param_2 == -1) || (uVar2 = 0x3b, param_2 == 0x31a)) {
            if ((*param_3 & 0x10000) == 0) {
              uVar2 = 0x3c;
            }
            else {
              uVar2 = 0;
            }
          }
          goto LAB_001000a5;
        }
      }
      uVar2 = 0x3a;
      goto LAB_001000a5;
    }
  }
  uVar2 = 0x39;
LAB_001000a5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong X509_issuer_and_serial_hash(X509 *a)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  char *__s;
  EVP_MD *type;
  size_t cnt;
  ulong uVar2;
  long in_FS_OFFSET;
  uint local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    __s = X509_NAME_oneline(*(X509_NAME **)&(a->ex_data).dummy,(char *)0x0,0);
    if (__s != (char *)0x0) {
      uVar2 = 0;
      type = (EVP_MD *)
             EVP_MD_fetch(*(undefined8 *)a[1].sha1_hash,&_LC1,*(undefined8 *)(a[1].sha1_hash + 8));
      if (type != (EVP_MD *)0x0) {
        iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (iVar1 != 0) {
          cnt = strlen(__s);
          iVar1 = EVP_DigestUpdate(ctx,__s,cnt);
          if (iVar1 != 0) {
            iVar1 = EVP_DigestUpdate(ctx,a->signature,(long)*(int *)&a->sig_alg);
            if (iVar1 != 0) {
              iVar1 = EVP_DigestFinal_ex(ctx,(uchar *)local_48,(uint *)0x0);
              if (iVar1 != 0) {
                uVar2 = (ulong)local_48[0];
                goto LAB_001001a8;
              }
            }
          }
        }
        uVar2 = 0;
      }
      goto LAB_001001a8;
    }
  }
  type = (EVP_MD *)0x0;
  __s = (char *)0x0;
  uVar2 = 0;
LAB_001001a8:
  CRYPTO_free(__s);
  EVP_MD_free(type);
  EVP_MD_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_CRL_match(X509_CRL *a,X509_CRL *b)

{
  int iVar1;
  uint uVar2;
  
  if ((((ulong)a[1].sig_alg & 0x10000000000000) == 0) &&
     (((ulong)b[1].sig_alg & 0x10000000000000) == 0)) {
    iVar1 = memcmp(&a[1].base_crl_number,&b[1].base_crl_number,0x14);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uint)(0 < iVar1);
    }
    return uVar2;
  }
  return -2;
}



X509_NAME * X509_get_issuer_name(X509 *a)

{
  return *(X509_NAME **)&(a->ex_data).dummy;
}



X509_NAME * X509_get_subject_name(X509 *a)

{
  return (X509_NAME *)a->ex_flags;
}



ASN1_INTEGER * X509_get_serialNumber(X509 *x)

{
  return (ASN1_INTEGER *)&x->sig_alg;
}



long X509_get0_serialNumber(long param_1)

{
  return param_1 + 8;
}



int X509_cmp(X509 *a,X509 *b)

{
  X509_POLICY_CACHE *__n;
  int iVar1;
  uint uVar2;
  
  if (a != b) {
    X509_check_purpose(a,-1,0);
    X509_check_purpose(b,-1,0);
    if (((((ulong)a[1].name & 0x100000) == 0) && (((ulong)b[1].name & 0x100000) == 0)) &&
       (iVar1 = memcmp(&a[1].akid,&b[1].akid,0x14), iVar1 != 0)) {
      uVar2 = iVar1 >> 0x1f | 1;
    }
    else if (*(int *)&a->crldp == 0) {
      uVar2 = 0;
      if (*(int *)&b->crldp == 0) {
        __n = a->policy_cache;
        uVar2 = 0xffffffff;
        if (((long)b->policy_cache <= (long)__n) && (uVar2 = 1, (long)__n <= (long)b->policy_cache))
        {
          iVar1 = memcmp(a->akid,b->akid,(size_t)__n);
          uVar2 = (uint)(0 < iVar1);
          if (iVar1 < 0) {
            uVar2 = 0xffffffff;
          }
        }
      }
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



bool X509_add_cert(long param_1,X509 *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  X509 *a;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_cmp.c",0xc4,"X509_add_cert");
    ERR_set_error(0xb,0xc0102,0);
    return false;
  }
  if (param_2 == (X509 *)0x0) {
    return false;
  }
  if ((param_3 & 4) != 0) {
    for (iVar2 = 0; iVar1 = OPENSSL_sk_num(param_1), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      a = (X509 *)OPENSSL_sk_value(param_1,iVar2);
      iVar1 = X509_cmp(a,param_2);
      if (iVar1 == 0) {
        return true;
      }
    }
  }
  if (((param_3 & 8) != 0) && (iVar2 = X509_self_signed(param_2,0), iVar2 != 0)) {
    return 0 < iVar2;
  }
  if ((param_3 & 1) == 0) {
    iVar2 = OPENSSL_sk_insert(param_1,param_2,-(uint)((param_3 & 2) == 0));
    if (iVar2 == 0) {
LAB_0010049e:
      ERR_new();
      ERR_set_debug("crypto/x509/x509_cmp.c",0xe1,"X509_add_cert");
      ERR_set_error(0xb,0x8000f,0);
      return false;
    }
  }
  else {
    iVar2 = X509_up_ref(param_2);
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = OPENSSL_sk_insert(param_1,param_2,-(uint)((param_3 & 2) == 0));
    if (iVar2 == 0) {
      X509_free(param_2);
      goto LAB_0010049e;
    }
  }
  return true;
}



undefined8 ossl_x509_add_cert_new(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      ERR_new(0,param_2,param_3);
      ERR_set_debug("crypto/x509/x509_cmp.c",0xbb,"ossl_x509_add_cert_new");
      ERR_set_error(0xb,0x8000f,0);
      return 0;
    }
  }
  uVar1 = X509_add_cert();
  return uVar1;
}



undefined8 ossl_x509_add_certs_new(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = OPENSSL_sk_num(param_2);
  if (0 < (int)uVar1) {
    uVar4 = param_3 & 2;
    if ((param_3 & 2) == 0) {
      do {
        uVar3 = OPENSSL_sk_value(param_2,uVar4);
        iVar2 = ossl_x509_add_cert_new(param_1,uVar3,param_3);
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
    else {
      do {
        uVar1 = uVar1 - 1;
        uVar3 = OPENSSL_sk_value(param_2,uVar1);
        iVar2 = ossl_x509_add_cert_new(param_1,uVar3,param_3);
        if (iVar2 == 0) {
          return 0;
        }
      } while (uVar1 != 0);
    }
  }
  return 1;
}



undefined8 X509_add_certs(long param_1)

{
  undefined8 uVar1;
  long local_10 [2];
  
  local_10[0] = param_1;
  if (param_1 != 0) {
    uVar1 = ossl_x509_add_certs_new(local_10);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_cmp.c",0xeb,"X509_add_certs");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



int X509_NAME_cmp(X509_NAME *a,X509_NAME *b)

{
  int iVar1;
  int iVar2;
  
  if (b == (X509_NAME *)0x0) {
    return (int)(a != (X509_NAME *)0x0);
  }
  if (a != (X509_NAME *)0x0) {
    if ((((a->canon_enc == (uchar *)0x0) || (a->modified != 0)) &&
        (iVar1 = i2d_X509_NAME(a,(uchar **)0x0), iVar1 < 0)) ||
       (((b->canon_enc == (uchar *)0x0 || (b->modified != 0)) &&
        (iVar1 = i2d_X509_NAME(b,(uchar **)0x0), iVar1 < 0)))) {
      return -2;
    }
    iVar1 = a->canon_enclen;
    iVar2 = iVar1 - b->canon_enclen;
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
      if (a->canon_enc == (uchar *)0x0) {
        return -2;
      }
      if (b->canon_enc == (uchar *)0x0) {
        return -2;
      }
      iVar2 = memcmp(a->canon_enc,b->canon_enc,(long)iVar1);
    }
    if (-1 < iVar2) {
      return (uint)(0 < iVar2);
    }
  }
  return -1;
}



int X509_issuer_and_serial_cmp(X509 *a,X509 *b)

{
  int iVar1;
  
  if (b == (X509 *)0x0) {
    return (int)(a != (X509 *)0x0);
  }
  if (a != (X509 *)0x0) {
    iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)&a->sig_alg,(ASN1_INTEGER *)&b->sig_alg);
    if (iVar1 == 0) {
      iVar1 = X509_NAME_cmp(*(X509_NAME **)&(a->ex_data).dummy,*(X509_NAME **)&(b->ex_data).dummy);
      return iVar1;
    }
    if (-1 < iVar1) {
      return 1;
    }
  }
  return -1;
}



int X509_issuer_name_cmp(X509 *a,X509 *b)

{
  int iVar1;
  
  iVar1 = X509_NAME_cmp(*(X509_NAME **)&(a->ex_data).dummy,*(X509_NAME **)&(b->ex_data).dummy);
  return iVar1;
}



int X509_subject_name_cmp(X509 *a,X509 *b)

{
  int iVar1;
  
  iVar1 = X509_NAME_cmp((X509_NAME *)a->ex_flags,(X509_NAME *)b->ex_flags);
  return iVar1;
}



int X509_CRL_cmp(X509_CRL *a,X509_CRL *b)

{
  int iVar1;
  
  iVar1 = X509_NAME_cmp(*(X509_NAME **)&a->references,*(X509_NAME **)&b->references);
  return iVar1;
}



undefined4
X509_NAME_hash_ex(X509_NAME *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  EVP_MD *type;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined4 local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(param_2);
  iVar1 = i2d_X509_NAME(param_1,(uchar **)0x0);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((-1 < iVar1) && (type != (EVP_MD *)0x0)) {
    iVar1 = EVP_Digest(param_1->canon_enc,(long)param_1->canon_enclen,(uchar *)local_38,(uint *)0x0,
                       type,(ENGINE *)0x0);
    if (iVar1 != 0) {
      uVar2 = local_38[0];
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      goto LAB_001008c6;
    }
  }
  uVar2 = 0;
LAB_001008c6:
  EVP_MD_free(type);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong X509_issuer_name_hash(X509 *a)

{
  ulong uVar1;
  
  uVar1 = X509_NAME_hash_ex(*(undefined8 *)&(a->ex_data).dummy,0,0,0);
  return uVar1;
}



ulong X509_subject_name_hash(X509 *x)

{
  ulong uVar1;
  
  uVar1 = X509_NAME_hash_ex(x->ex_flags,0,0,0);
  return uVar1;
}



ulong X509_NAME_hash_old(X509_NAME *x)

{
  int iVar1;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  ulong uVar2;
  long in_FS_OFFSET;
  uint local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(0,&_LC1,"-fips");
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if ((((type == (EVP_MD *)0x0) || (ctx == (EVP_MD_CTX *)0x0)) ||
      (iVar1 = i2d_X509_NAME(x,(uchar **)0x0), iVar1 < 0)) ||
     (((iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar1 == 0 ||
       (iVar1 = EVP_DigestUpdate(ctx,x->bytes->data,x->bytes->length), iVar1 == 0)) ||
      (iVar1 = EVP_DigestFinal_ex(ctx,(uchar *)local_38,(uint *)0x0), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)local_38[0];
  }
  EVP_MD_CTX_free(ctx);
  EVP_MD_free(type);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



ulong X509_issuer_name_hash_old(X509 *a)

{
  ulong uVar1;
  
  uVar1 = X509_NAME_hash_old(*(X509_NAME **)&(a->ex_data).dummy);
  return uVar1;
}



ulong X509_subject_name_hash_old(X509 *x)

{
  ulong uVar1;
  
  uVar1 = X509_NAME_hash_old((X509_NAME *)x->ex_flags);
  return uVar1;
}



X509 * X509_find_by_issuer_and_serial(stack_st_X509 *sk,X509_NAME *name,ASN1_INTEGER *serial)

{
  int iVar1;
  X509 *a;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_1b8 [392];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (sk != (stack_st_X509 *)0x0) {
    auStack_1b8._8_8_ = *(undefined8 *)serial;
    auStack_1b8._16_8_ = serial->data;
    auStack_1b8._24_8_ = serial->flags;
    iVar2 = 0;
    auStack_1b8._48_8_ = name;
    while( true ) {
      iVar1 = OPENSSL_sk_num(sk);
      if (iVar1 <= iVar2) break;
      a = (X509 *)OPENSSL_sk_value(sk,iVar2);
      iVar1 = X509_issuer_and_serial_cmp(a,(X509 *)auStack_1b8);
      if (iVar1 == 0) goto LAB_00100aed;
      iVar2 = iVar2 + 1;
    }
  }
  a = (X509 *)0x0;
LAB_00100aed:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



X509 * X509_find_by_subject(stack_st_X509 *sk,X509_NAME *name)

{
  int iVar1;
  X509 *a;
  X509_NAME *a_00;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(sk);
    if (iVar1 <= iVar2) {
      return (X509 *)0x0;
    }
    a = (X509 *)OPENSSL_sk_value(sk,iVar2);
    a_00 = X509_get_subject_name(a);
    iVar1 = X509_NAME_cmp(a_00,name);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  return a;
}



undefined8 X509_get0_pubkey(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x50));
    return uVar1;
  }
  return 0;
}



EVP_PKEY * X509_get_pubkey(X509 *x)

{
  EVP_PKEY *pEVar1;
  
  if (x != (X509 *)0x0) {
    pEVar1 = X509_PUBKEY_get((X509_PUBKEY *)x->ex_kusage);
    return pEVar1;
  }
  return (EVP_PKEY *)0x0;
}



bool ossl_x509_check_private_key(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_cmp.c",0x19d,"ossl_x509_check_private_key");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    iVar1 = EVP_PKEY_eq();
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509_cmp.c",0x1a4,"ossl_x509_check_private_key");
      ERR_set_error(0xb,0x74,0);
    }
    else {
      if (0 < iVar1) {
        return iVar1 == 1;
      }
      if (iVar1 == -2) {
        ERR_new();
        ERR_set_debug("crypto/x509/x509_cmp.c",0x1aa,"ossl_x509_check_private_key");
        ERR_set_error(0xb,0x75,0);
      }
      else if (iVar1 == -1) {
        ERR_new();
        ERR_set_debug("crypto/x509/x509_cmp.c",0x1a7,"ossl_x509_check_private_key");
        ERR_set_error(0xb,0x73,0);
      }
    }
  }
  return false;
}



int X509_check_private_key(X509 *x509,EVP_PKEY *pkey)

{
  int iVar1;
  long lVar2;
  
  lVar2 = X509_get0_pubkey();
  if (lVar2 != 0) {
    iVar1 = ossl_x509_check_private_key(lVar2,pkey);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_cmp.c",0x194,"X509_check_private_key");
  ERR_set_error(0xb,0x6c,0);
  return 0;
}



ulong X509_chain_check_suiteb(uint *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  ulong local_a8;
  undefined1 local_a0 [8];
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_4;
  if ((param_4 & 0x30000) == 0) {
LAB_00100e08:
    uVar5 = 0;
  }
  else {
    bVar7 = param_2 == 0;
    if (bVar7) {
      param_2 = OPENSSL_sk_value(param_3,0);
    }
    uVar6 = (uint)bVar7;
    lVar3 = X509_get0_pubkey(param_2);
    if (param_3 == 0) {
      if ((lVar3 == 0) || (iVar1 = EVP_PKEY_is_a(lVar3,&_LC0), iVar1 == 0)) {
        uVar5 = 0x39;
        goto LAB_00100ddc;
      }
      iVar1 = EVP_PKEY_get_group_name(lVar3,local_98,0x50,local_a0);
      if (iVar1 != 0) {
        iVar1 = OBJ_txt2nid(local_98);
        if (iVar1 == 0x2cb) {
          uVar5 = (ulong)(-(uint)((param_4 & 0x20000) == 0) & 0x3c);
          goto LAB_00100ddc;
        }
        if (iVar1 == 0x19f) {
          uVar5 = (ulong)(-(uint)((param_4 & 0x10000) == 0) & 0x3c);
          goto LAB_00100ddc;
        }
      }
      uVar5 = 0x3a;
      goto LAB_00100ddc;
    }
    lVar4 = X509_get_version(param_2);
    if (lVar4 == 2) {
      if ((lVar3 == 0) || (iVar1 = EVP_PKEY_is_a(lVar3,&_LC0), iVar1 == 0)) {
        uVar6 = 0;
        uVar5 = 0x39;
      }
      else {
        iVar1 = EVP_PKEY_get_group_name(lVar3,local_98,0x50,local_a0);
        if (iVar1 == 0) {
LAB_00101030:
          uVar6 = 0;
          uVar5 = 0x3a;
        }
        else {
          iVar1 = OBJ_txt2nid(local_98);
          if (iVar1 == 0x2cb) {
            if ((param_4 & 0x20000) == 0) {
LAB_00101065:
              uVar6 = 0;
              uVar5 = 0x3c;
              goto LAB_00100dd4;
            }
            local_a8 = param_4 & 0xfffffffffffeffff;
          }
          else {
            if (iVar1 != 0x19f) goto LAB_00101030;
            if ((param_4 & 0x10000) == 0) goto LAB_00101065;
          }
          for (; iVar1 = OPENSSL_sk_num(param_3), (int)uVar6 < iVar1; uVar6 = uVar6 + 1) {
            uVar2 = X509_get_signature_nid(param_2);
            param_2 = OPENSSL_sk_value(param_3,uVar6);
            lVar3 = X509_get_version(param_2);
            if (lVar3 != 2) {
              uVar5 = 0x38;
              goto LAB_00100dd4;
            }
            lVar3 = X509_get0_pubkey(param_2);
            uVar5 = check_suite_b(lVar3,uVar2,&local_a8);
            if ((int)uVar5 != 0) goto LAB_00100f10;
          }
          uVar2 = X509_get_signature_nid(param_2);
          uVar5 = check_suite_b(lVar3,uVar2,&local_a8);
          if ((int)uVar5 == 0) goto LAB_00100e08;
LAB_00100f10:
          if ((int)uVar5 - 0x3bU < 2) {
            uVar6 = (uVar6 - 1) + (uint)(uVar6 == 0);
            if ((int)uVar5 == 0x3c) {
              uVar5 = uVar5 & 0xffffffff;
              if (local_a8 != param_4) {
                uVar5 = 0x3d;
              }
            }
            else {
              uVar5 = 0x3b;
            }
          }
        }
      }
    }
    else {
      uVar6 = 0;
      uVar5 = 0x38;
    }
LAB_00100dd4:
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar6;
    }
  }
LAB_00100ddc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



byte X509_CRL_check_suiteb(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_90 [8];
  char local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = 0;
  if ((param_3 & 0x30000) == 0) goto LAB_001010a6;
  iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 8));
  if (param_2 != 0) {
    iVar3 = EVP_PKEY_is_a(param_2,&_LC0);
    if (iVar3 != 0) {
      iVar3 = EVP_PKEY_get_group_name(param_2,local_88,0x50,local_90);
      if (iVar3 != 0) {
        iVar3 = OBJ_txt2nid(local_88);
        if (iVar3 == 0x2cb) {
          if ((iVar2 == -1) || (bVar1 = 0x3b, iVar2 == 0x31b)) {
            bVar1 = -((param_3 & 0x20000) == 0) & 0x3c;
          }
          goto LAB_001010a6;
        }
        if (iVar3 == 0x19f) {
          if ((iVar2 == -1) || (bVar1 = 0x3b, iVar2 == 0x31a)) {
            bVar1 = -((param_3 & 0x10000) == 0) & 0x3c;
          }
          goto LAB_001010a6;
        }
      }
      bVar1 = 0x3a;
      goto LAB_001010a6;
    }
  }
  bVar1 = 0x39;
LAB_001010a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long X509_chain_up_ref(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  X509 *a;
  int iVar4;
  
  lVar2 = OPENSSL_sk_dup();
  if (lVar2 != 0) {
    iVar4 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(lVar2);
      if (iVar1 <= iVar4) {
        return lVar2;
      }
      uVar3 = OPENSSL_sk_value(lVar2,iVar4);
      iVar1 = X509_up_ref(uVar3);
      if (iVar1 == 0) break;
      iVar4 = iVar4 + 1;
    }
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      a = (X509 *)OPENSSL_sk_value(lVar2,iVar4);
      X509_free(a);
    }
    OPENSSL_sk_free(lVar2);
  }
  return 0;
}


