
undefined4 null_callback(undefined4 param_1)

{
  return param_1;
}



bool check_issued(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_x509_likely_issued(param_3);
  return iVar1 == 0;
}



long lookup_certs_sk(long param_1,X509_NAME *param_2)

{
  int iVar1;
  long lVar2;
  X509 *a;
  X509_NAME *b;
  int iVar3;
  
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
LAB_001000b7:
    lVar2 = 0;
  }
  else {
    iVar3 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x28));
      if (iVar1 <= iVar3) break;
      a = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x28),iVar3);
      b = X509_get_subject_name(a);
      iVar1 = X509_NAME_cmp(param_2,b);
      if (iVar1 == 0) {
        iVar1 = X509_add_cert(lVar2,a,1);
        if (iVar1 == 0) {
          OSSL_STACK_OF_X509_free(lVar2);
          *(undefined4 *)(param_1 + 0xb0) = 0x11;
          goto LAB_001000b7;
        }
      }
      iVar3 = iVar3 + 1;
    }
  }
  return lVar2;
}



bool crl_extension_match(X509_CRL *param_1,X509_CRL *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ASN1_OCTET_STRING *b;
  X509_EXTENSION *pXVar3;
  ASN1_OCTET_STRING *a;
  
  iVar1 = X509_CRL_get_ext_by_NID(param_1,param_3,-1);
  if (iVar1 < 0) {
    a = (ASN1_OCTET_STRING *)0x0;
  }
  else {
    iVar2 = X509_CRL_get_ext_by_NID(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    pXVar3 = X509_CRL_get_ext(param_1,iVar1);
    a = X509_EXTENSION_get_data(pXVar3);
  }
  iVar1 = X509_CRL_get_ext_by_NID(param_2,param_3,-1);
  if (iVar1 < 0) {
    return a == (ASN1_OCTET_STRING *)0x0;
  }
  iVar2 = X509_CRL_get_ext_by_NID(param_2,param_3,iVar1);
  if (iVar2 == -1) {
    pXVar3 = X509_CRL_get_ext(param_2,iVar1);
    b = X509_EXTENSION_get_data(pXVar3);
    if (b == (ASN1_OCTET_STRING *)0x0 && a == (ASN1_OCTET_STRING *)0x0) {
      return true;
    }
    if ((a != (ASN1_OCTET_STRING *)0x0) && (b != (ASN1_OCTET_STRING *)0x0)) {
      iVar1 = ASN1_OCTET_STRING_cmp(a,b);
      return iVar1 == 0;
    }
  }
  return false;
}



ulong cert_crl(long param_1,X509_CRL *param_2,X509 *param_3)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  X509_REVOKED *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x10) == 0) &&
     (((ulong)param_2[1].sig_alg & 0x20000000000) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar2 == 0) goto LAB_00100237;
  }
  iVar1 = X509_CRL_get0_by_cert(param_2,&local_28,param_3);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (*(int *)&local_28[1].revocationDate == 8) {
    uVar2 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
LAB_00100237:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 dane_match_cert_isra_0(int param_1,long *param_2,X509 *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  EVP_MD *type;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  X509_PUBKEY *a;
  undefined4 uVar8;
  uint uVar9;
  size_t __n;
  long *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  uint local_dc;
  uchar *local_d8;
  uint local_c4;
  uchar *local_c0;
  uint local_a0;
  uint local_94;
  uchar *local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  uVar9 = 2 - (param_4 != 0);
  if (param_4 < param_1) {
    uVar9 = (-(uint)(param_4 == 0) & 5) + 5;
  }
  if (-1 < *(int *)((long)param_2 + 0x2c)) {
    uVar9 = uVar9 & 0xfffffffc;
  }
  if (((uVar9 & *(uint *)(param_2 + 5)) == 0) || (iVar4 = OPENSSL_sk_num(param_2[1]), iVar4 < 1)) {
    uVar8 = 0;
    local_d8 = (uchar *)0x0;
  }
  else {
    local_a0 = 0;
    uVar12 = 0x100;
    iVar11 = 0;
    local_c0 = (uchar *)0x0;
    local_dc = 0x100;
    local_c4 = 0x100;
    local_d8 = (uchar *)0x0;
    uVar13 = 0x100;
    do {
      while( true ) {
        pbVar6 = (byte *)OPENSSL_sk_value(param_2[1],iVar11);
        bVar1 = *pbVar6;
        if ((uVar9 >> (bVar1 & 0x1f) & 1) == 0) break;
        if (bVar1 != uVar13) {
          local_dc = 0x100;
          local_c4 = (uint)*(byte *)(*(long *)(*param_2 + 8) + (ulong)pbVar6[2]);
        }
        bVar2 = pbVar6[1];
        uVar14 = (uint)bVar2;
        if (uVar14 != uVar12) {
          CRYPTO_free(local_d8);
          local_90 = (uchar *)0x0;
          if (bVar2 == 0) {
            local_a0 = i2d_X509(param_3,&local_90);
            local_d8 = local_90;
joined_r0x001005f3:
            local_90 = local_d8;
            if ((-1 < (int)local_a0) && (local_d8 != (uchar *)0x0)) {
              plVar10 = (long *)*param_2;
              uVar7 = (ulong)pbVar6[2];
              local_c4 = (uint)*(byte *)(plVar10[1] + uVar7);
              local_dc = (uint)pbVar6[2];
              goto LAB_00100568;
            }
            ERR_new();
            ERR_set_debug("crypto/x509/x509_vfy.c",0xb39,__func___10);
            ERR_set_error(0xb,0x8000d,0);
          }
          else {
            if (bVar2 == 1) {
              a = (X509_PUBKEY *)X509_get_X509_PUBKEY(param_3);
              local_a0 = i2d_X509_PUBKEY(a,&local_90);
              local_d8 = local_90;
              goto joined_r0x001005f3;
            }
            ERR_new();
            ERR_set_debug("crypto/x509/x509_vfy.c",0xb34,__func___10);
            ERR_set_error(0xb,0x85,0);
          }
          uVar8 = 0xffffffff;
          goto LAB_00100325;
        }
        bVar2 = pbVar6[2];
        uVar7 = (ulong)bVar2;
        if ((bVar2 == 0) || (local_c4 <= *(byte *)(*(long *)(*param_2 + 8) + (ulong)bVar2))) {
          if (bVar2 == local_dc) {
            __n = (size_t)local_94;
LAB_001004d6:
            uVar13 = (uint)bVar1;
            uVar12 = uVar14;
            if ((__n != *(size_t *)(pbVar6 + 0x10)) ||
               (iVar5 = memcmp(local_c0,*(void **)(pbVar6 + 8),__n), iVar5 != 0)) break;
            if ((0xcU >> (bVar1 & 0x1f) & 1) == 0) {
              uVar8 = 0;
              uVar3 = 0;
              if (-1 < *(int *)((long)param_2 + 0x2c)) goto LAB_00100309;
            }
            else {
              uVar3 = 1;
            }
            uVar8 = uVar3;
            iVar4 = X509_up_ref(param_3);
            if (iVar4 != 0) {
              CRYPTO_free((void *)param_2[4]);
              param_2[3] = (long)pbVar6;
              param_2[4] = (long)param_3;
              *(int *)((long)param_2 + 0x2c) = param_4;
              goto LAB_00100309;
            }
          }
          else {
            plVar10 = (long *)*param_2;
            local_dc = (uint)bVar2;
LAB_00100568:
            type = *(EVP_MD **)(*plVar10 + uVar7 * 8);
            local_94 = local_a0;
            if (type == (EVP_MD *)0x0) {
              __n = (size_t)local_a0;
              local_c0 = local_d8;
              goto LAB_001004d6;
            }
            local_c0 = local_88;
            iVar5 = EVP_Digest(local_d8,(ulong)local_a0,local_c0,&local_94,type,(ENGINE *)0x0);
            if (iVar5 != 0) {
              __n = (size_t)local_94;
              goto LAB_001004d6;
            }
          }
          uVar8 = 0xffffffff;
          goto LAB_00100309;
        }
        iVar11 = iVar11 + 1;
        uVar13 = (uint)bVar1;
        if (iVar4 == iVar11) goto LAB_00100505;
      }
      iVar11 = iVar11 + 1;
    } while (iVar4 != iVar11);
LAB_00100505:
    uVar8 = 0;
  }
LAB_00100309:
  CRYPTO_free(local_d8);
LAB_00100325:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong x509_verify_rpk(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  EVP_PKEY *a;
  EVP_MD *type;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  ulong uVar11;
  short *psVar12;
  undefined8 uVar13;
  size_t __n;
  uchar *md;
  long in_FS_OFFSET;
  bool bVar14;
  uint local_94;
  uchar *local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
  if (0 < iVar6) {
    if (*(long *)(param_1 + 0x100) != 0) {
      iVar5 = EVP_PKEY_get_security_bits();
      if (5 < iVar6) {
        iVar6 = 5;
      }
      if (*(int *)(minbits_table + (long)(iVar6 + -1) * 4) <= iVar5) goto LAB_00100747;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    uVar13 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    *(undefined4 *)(param_1 + 0xb0) = 0x42;
    *(undefined8 *)(param_1 + 0xb8) = uVar13;
    uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar11 == 0) goto LAB_00100784;
  }
LAB_00100747:
  *(undefined4 *)(param_1 + 0xb0) = 0x5f;
  if ((*(long *)(param_1 + 0xf0) == 0) ||
     (iVar6 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 8)), iVar6 < 1)) {
    pcVar10 = *(code **)(param_1 + 0x30);
    if (pcVar10 != (code *)0x0) goto LAB_0010077b;
    bVar14 = *(int *)(param_1 + 0xb0) == 0;
LAB_001007c0:
    iVar6 = (**(code **)(param_1 + 0x38))(bVar14,param_1);
    uVar11 = (ulong)(iVar6 != 0);
    if (iVar6 != 0) goto LAB_00100784;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xf0);
    X509_free(*(X509 **)(lVar2 + 0x20));
    *(undefined8 *)(lVar2 + 0x2c) = 0xffffffffffffffff;
    *(undefined1 (*) [16])(lVar2 + 0x18) = (undefined1  [16])0x0;
    puVar3 = *(undefined8 **)(param_1 + 0xf0);
    a = *(EVP_PKEY **)(param_1 + 0x100);
    local_90 = (uchar *)0x0;
    local_94 = 0;
    iVar6 = OPENSSL_sk_num(puVar3[1]);
    uVar7 = i2d_PUBKEY(a,&local_90);
    if ((int)uVar7 < 1) {
LAB_00100a20:
      *(undefined8 *)(param_1 + 0xac) = 0x100000000;
      uVar11 = 0xffffffff;
      goto LAB_00100784;
    }
    local_94 = uVar7;
    if (iVar6 < 1) {
      CRYPTO_free(local_90);
    }
    else {
      iVar5 = 0;
      md = local_90;
      bVar4 = 0;
      do {
        psVar12 = (short *)OPENSSL_sk_value(puVar3[1],iVar5);
        bVar1 = bVar4;
        if (*psVar12 == 0x103) {
          bVar1 = *(byte *)(psVar12 + 1);
          if (bVar4 == bVar1) {
            __n = (size_t)local_94;
            bVar1 = bVar4;
            if (__n == *(ulong *)(psVar12 + 8)) {
LAB_00100914:
              iVar8 = memcmp(md,*(void **)(psVar12 + 4),__n);
              if (iVar8 == 0) {
                puVar3[3] = psVar12;
                *(undefined4 *)((long)puVar3 + 0x2c) = 0;
                CRYPTO_free(local_90);
                bVar14 = true;
                *(undefined4 *)(param_1 + 0xac) = 0;
                uVar9 = 0;
                goto LAB_001009d9;
              }
            }
          }
          else {
            type = *(EVP_MD **)(*(long *)*puVar3 + (ulong)bVar1 * 8);
            md = local_90;
            local_94 = uVar7;
            if (type != (EVP_MD *)0x0) {
              md = local_88;
              iVar8 = EVP_Digest(local_90,(long)(int)uVar7,md,&local_94,type,(ENGINE *)0x0);
              if (iVar8 == 0) {
                CRYPTO_free(local_90);
                goto LAB_00100a20;
              }
            }
            __n = (size_t)local_94;
            if (__n == *(ulong *)(psVar12 + 8)) goto LAB_00100914;
          }
        }
        iVar5 = iVar5 + 1;
        bVar4 = bVar1;
      } while (iVar6 != iVar5);
      CRYPTO_free(local_90);
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    bVar14 = false;
    uVar9 = 0x41;
LAB_001009d9:
    *(undefined4 *)(param_1 + 0xb0) = uVar9;
    pcVar10 = *(code **)(param_1 + 0x30);
    if (pcVar10 == (code *)0x0) goto LAB_001007c0;
LAB_0010077b:
    uVar11 = (*pcVar10)(param_1);
    if (0 < (int)uVar11) goto LAB_00100784;
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
LAB_00100784:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



ulong check_policy(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  stack_st_X509 *certs;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    return 1;
  }
  certs = *(stack_st_X509 **)(param_1 + 0x98);
  if (*(int *)(param_1 + 0xf8) != 0) {
    iVar2 = OPENSSL_sk_push(certs,0);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509_vfy.c",0x6fa,"check_policy");
      ERR_set_error(0xb,0x8000f,0);
      goto LAB_00100c4e;
    }
    certs = *(stack_st_X509 **)(param_1 + 0x98);
  }
  iVar2 = X509_policy_check((X509_POLICY_TREE **)(param_1 + 0xa0),(int *)(param_1 + 0xa8),certs,
                            *(stack_st_ASN1_OBJECT **)(*(long *)(param_1 + 0x20) + 0x30),
                            *(uint *)(*(long *)(param_1 + 0x20) + 0x18));
  if (*(int *)(param_1 + 0xf8) != 0) {
    OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
  }
  if (iVar2 != 0) {
    if (iVar2 == -1) {
      bVar1 = false;
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98)), iVar2 < iVar3;
          iVar2 = iVar2 + 1) {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2);
        if ((*(byte *)(lVar4 + 0xe9) & 8) != 0) {
          *(int *)(param_1 + 0xac) = iVar2;
          *(long *)(param_1 + 0xb8) = lVar4;
          *(undefined4 *)(param_1 + 0xb0) = 0x2a;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) {
            return 0;
          }
          bVar1 = true;
        }
      }
      if (bVar1) {
        return 1;
      }
      ERR_new();
      uVar6 = 0x715;
    }
    else {
      if (iVar2 == -2) {
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0x2b;
                    /* WARNING: Could not recover jumptable at 0x00100c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar5;
      }
      if (iVar2 == 1) {
        if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 8) == 0) {
          return 1;
        }
        *(undefined8 *)(param_1 + 0xb8) = 0;
        iVar2 = (**(code **)(param_1 + 0x38))(2,param_1);
        return (ulong)(iVar2 != 0);
      }
      ERR_new();
      uVar6 = 0x721;
    }
    ERR_set_debug("crypto/x509/x509_vfy.c",uVar6,"check_policy");
    ERR_set_error(0xb,0xc0103,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_vfy.c",0x703,"check_policy");
  ERR_set_error(0xb,0x8000b,0);
LAB_00100c4e:
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
  return 0xffffffff;
}



undefined8 check_trust(long param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  X509 *a;
  X509_NAME *pXVar6;
  long lVar7;
  X509 *a_00;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar5 = param_2;
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0x28) & 5) == 0)) || (param_2 < 1)) {
    if (iVar3 <= param_2) goto LAB_00100d82;
  }
  else {
    if (iVar3 <= param_2) {
LAB_00100d82:
      if (iVar3 != param_2) {
        return 3;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) & 8) == 0) {
        return 3;
      }
      a = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      ERR_set_mark();
      pcVar2 = *(code **)(param_1 + 0x78);
      pXVar6 = X509_get_subject_name(a);
      lVar7 = (*pcVar2)(param_1,pXVar6);
      iVar5 = 0;
      ERR_pop_to_mark();
      if (lVar7 == 0) {
        return 0xffffffff;
      }
      do {
        iVar3 = OPENSSL_sk_num(lVar7);
        if (iVar3 <= iVar5) {
LAB_00100e16:
          OSSL_STACK_OF_X509_free(lVar7);
          return 3;
        }
        a_00 = (X509 *)OPENSSL_sk_value(lVar7,iVar5);
        iVar3 = X509_cmp(a_00,a);
        if (iVar3 == 0) {
          if (a_00 != (X509 *)0x0) {
            iVar5 = X509_up_ref(a_00);
            if (iVar5 == 0) {
              OSSL_STACK_OF_X509_free(lVar7);
              return 0xffffffff;
            }
            OSSL_STACK_OF_X509_free(lVar7);
            iVar5 = X509_check_trust(a_00,*(int *)(*(long *)(param_1 + 0x20) + 0x24),0);
            if (iVar5 == 2) {
              X509_free(a_00);
              iVar5 = 0;
              goto LAB_00100e2d;
            }
            OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),0,a_00);
            X509_free(a);
            *(undefined4 *)(param_1 + 0x94) = 0;
            goto LAB_00100d2e;
          }
          goto LAB_00100e16;
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
    if (((*(long *)(param_1 + 0xf0) != 0) &&
        ((*(byte *)(*(long *)(param_1 + 0xf0) + 0x28) & 5) != 0)) &&
       (lVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_2), lVar7 != 0)) {
      uVar8 = dane_match_cert_isra_0
                        (*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xf0),lVar7,
                         param_2);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      if ((int)uVar8 != 0) {
        *(int *)(param_1 + 0x94) = param_2 + -1;
        return 1;
      }
    }
  }
  do {
    a = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
    iVar4 = X509_check_trust(a,*(int *)(*(long *)(param_1 + 0x20) + 0x24),0);
    if (iVar4 == 1) goto LAB_00100d2e;
    if (iVar4 == 2) {
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0xac);
      }
      else {
LAB_00100e2d:
        *(int *)(param_1 + 0xac) = iVar5;
      }
      if (a == (X509 *)0x0) {
        a = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
      }
      *(X509 **)(param_1 + 0xb8) = a;
      *(undefined4 *)(param_1 + 0xb0) = 0x1c;
      iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar5 != 0) {
        return 3;
      }
      return 2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar3 != iVar5);
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) & 8) == 0) {
    return 3;
  }
LAB_00100d2e:
  if ((lVar1 != 0) && (iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), 0 < iVar5)) {
    if (*(int *)(lVar1 + 0x30) < 0) {
      *(int *)(lVar1 + 0x30) = param_2;
    }
    if (*(int *)(lVar1 + 0x2c) < 0) {
      return 3;
    }
  }
  return 1;
}



bool check_id(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x38) != 0) {
    iVar2 = OPENSSL_sk_num();
    if (*(void **)(lVar6 + 0x48) != (void *)0x0) {
      CRYPTO_free(*(void **)(lVar6 + 0x48));
      *(undefined8 *)(lVar6 + 0x48) = 0;
    }
    iVar7 = 0;
    if (iVar2 < 1) {
      if (iVar2 == 0) goto LAB_00101051;
    }
    else {
      do {
        uVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x38),iVar7);
        iVar3 = X509_check_host(uVar1,uVar4,0,*(undefined4 *)(lVar6 + 0x40),lVar6 + 0x48);
        if (0 < iVar3) goto LAB_00101051;
        iVar7 = iVar7 + 1;
      } while (iVar2 != iVar7);
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar5;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return false;
    }
  }
LAB_00101051:
  if ((*(long *)(lVar6 + 0x50) != 0) &&
     (iVar2 = X509_check_email(uVar1,*(long *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58),0),
     iVar2 < 1)) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar5;
    *(undefined4 *)(param_1 + 0xb0) = 0x3f;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return false;
    }
  }
  if ((*(long *)(lVar6 + 0x60) != 0) &&
     (iVar2 = X509_check_ip(uVar1,*(long *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68),0),
     iVar2 < 1)) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      lVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar6;
    *(undefined4 *)(param_1 + 0xb0) = 0x40;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    return iVar2 != 0;
  }
  return true;
}



int X509_self_signed(X509 *param_1,int param_2)

{
  int iVar1;
  EVP_PKEY *r;
  
  r = (EVP_PKEY *)X509_get0_pubkey();
  if (r == (EVP_PKEY *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0x65,"X509_self_signed");
    ERR_set_error(0xb,0x6c,0);
  }
  else {
    iVar1 = ossl_x509v3_cache_extensions(param_1);
    if (iVar1 != 0) {
      if (((ulong)param_1[1].name & 0x2000) == 0) {
        return 0;
      }
      if (param_2 == 0) {
        return 1;
      }
      iVar1 = X509_verify(param_1,r);
      return iVar1;
    }
  }
  return -1;
}



ASN1_TIME * X509_time_adj_ex(ASN1_TIME *s,int offset_day,long offset_sec,time_t *t)

{
  ASN1_TIME *pAVar1;
  long in_FS_OFFSET;
  time_t local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (t == (time_t *)0x0) {
    time(&local_28);
  }
  else {
    local_28 = *t;
  }
  if ((s != (ASN1_TIME *)0x0) && ((s->flags & 0x40) == 0)) {
    if (s->type == 0x17) {
      pAVar1 = ASN1_UTCTIME_adj(s,local_28,offset_day,offset_sec);
      goto LAB_0010128b;
    }
    if (s->type == 0x18) {
      pAVar1 = ASN1_GENERALIZEDTIME_adj(s,local_28,offset_day,offset_sec);
      goto LAB_0010128b;
    }
  }
  pAVar1 = ASN1_TIME_adj(s,local_28,offset_day,offset_sec);
LAB_0010128b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_TIME * X509_time_adj(ASN1_TIME *s,long adj,time_t *t)

{
  ASN1_TIME *pAVar1;
  
  pAVar1 = X509_time_adj_ex(s,0,adj,t);
  return pAVar1;
}



int X509_cmp_time(ASN1_TIME *s,time_t *t)

{
  int iVar1;
  int iVar2;
  ASN1_TIME *a;
  long in_FS_OFFSET;
  uint local_28;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (s->type == 0x17) {
    if (s->length == 0xd) goto LAB_00101375;
  }
  else if ((s->type == 0x18) && (s->length == 0xf)) {
LAB_00101375:
    iVar2 = 0;
    do {
      iVar1 = ossl_ascii_isdigit();
      if (iVar1 == 0) goto LAB_0010134d;
      iVar2 = iVar2 + 1;
    } while (iVar2 < s->length + -1);
    if (s->data[(long)s->length + -1] == 'Z') {
      a = X509_time_adj((ASN1_TIME *)0x0,0,t);
      if ((a == (ASN1_TIME *)0x0) || (iVar2 = ASN1_TIME_diff(&local_28,&local_24,s,a), iVar2 == 0))
      {
        iVar2 = 0;
      }
      else {
        iVar2 = ((int)(local_28 | local_24) >> 0x1f & 2U) - 1;
      }
      ASN1_TIME_free(a);
      goto LAB_0010134f;
    }
  }
LAB_0010134d:
  iVar2 = 0;
LAB_0010134f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



bool ossl_x509_check_cert_time(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ASN1_TIME *pAVar4;
  long lVar5;
  time_t *t;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  t = (time_t *)(*(long *)(param_1 + 0x20) + 8);
  if (((uVar1 & 2) == 0) && (t = (time_t *)0x0, (uVar1 & 0x200000) != 0)) {
    return true;
  }
  pAVar4 = (ASN1_TIME *)X509_get0_notBefore(param_2);
  uVar2 = X509_cmp_time(pAVar4,t);
  if (-1 < (int)(~param_3 | uVar2)) {
    return false;
  }
  if (uVar2 == 0) {
    if ((int)param_3 < 0) {
      uVar2 = *(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = param_3;
      uVar2 = param_3;
    }
    lVar5 = param_2;
    if (param_2 == 0) {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar2);
    }
    *(long *)(param_1 + 0xb8) = lVar5;
    *(undefined4 *)(param_1 + 0xb0) = 0xd;
    iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  }
  else {
    if ((int)uVar2 < 1) goto LAB_001014b2;
    if ((int)param_3 < 0) {
      uVar2 = *(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = param_3;
      uVar2 = param_3;
    }
    lVar5 = param_2;
    if (param_2 == 0) {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar2);
    }
    *(long *)(param_1 + 0xb8) = lVar5;
    *(undefined4 *)(param_1 + 0xb0) = 9;
    iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  }
  if (iVar3 == 0) {
    return false;
  }
LAB_001014b2:
  pAVar4 = (ASN1_TIME *)X509_get0_notAfter(param_2);
  iVar3 = X509_cmp_time(pAVar4,t);
  if (((int)param_3 < 0) && (iVar3 < 1)) {
    return false;
  }
  if (iVar3 == 0) {
    if ((int)param_3 < 0) {
      param_3 = *(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = param_3;
    }
    if (param_2 == 0) {
      param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 0xe;
  }
  else {
    if (-1 < iVar3) {
      return true;
    }
    if ((int)param_3 < 0) {
      param_3 = *(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = param_3;
    }
    if (param_2 == 0) {
      param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 10;
  }
  iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  return iVar3 != 0;
}



bool internal_verify(long param_1)

{
  int iVar1;
  int iVar2;
  X509 *pXVar3;
  EVP_PKEY *r;
  X509 *pXVar4;
  int iVar5;
  X509 *pXVar6;
  bool bVar7;
  
  if (*(long *)(param_1 + 0x100) == 0) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    iVar5 = iVar1 + -1;
    pXVar3 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
    *(int *)(param_1 + 0xac) = iVar5;
    pXVar6 = (X509 *)0x0;
    if (((*(int *)(param_1 + 0xf8) == 0) &&
        (iVar2 = ossl_x509_likely_issued(pXVar3,pXVar3), pXVar6 = pXVar3, iVar2 != 0)) &&
       ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) & 8) == 0)) {
      if (iVar5 < 1) {
        *(undefined4 *)(param_1 + 0xac) = 0;
        pXVar4 = pXVar3;
        if (pXVar3 == (X509 *)0x0) {
          pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
        }
        *(X509 **)(param_1 + 0xb8) = pXVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x15;
        iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar1 == 0) {
          return false;
        }
      }
      else {
        iVar5 = iVar1 + -2;
        *(int *)(param_1 + 0xac) = iVar5;
        pXVar3 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
      }
    }
    if (-1 < iVar5) {
      do {
        if (pXVar6 != (X509 *)0x0) {
          iVar1 = iVar5 + 1;
          if (pXVar6 == pXVar3) {
            if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x40) == 0) ||
               (((ulong)pXVar6[1].name & 0x2000) == 0)) goto LAB_00101728;
            iVar1 = iVar5;
            if (((ulong)pXVar6[1].name & 0x10) != 0) {
              iVar2 = ossl_x509_signing_allowed(pXVar6,pXVar3);
              goto joined_r0x001017a7;
            }
          }
          else {
            iVar2 = ossl_x509_signing_allowed(pXVar6,pXVar3);
joined_r0x001017a7:
            if (iVar2 != 0) {
              *(int *)(param_1 + 0xac) = iVar1;
              *(X509 **)(param_1 + 0xb8) = pXVar6;
              *(int *)(param_1 + 0xb0) = iVar2;
              iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar2 == 0) {
                return false;
              }
            }
          }
          r = (EVP_PKEY *)X509_get0_pubkey(pXVar6);
          if (r == (EVP_PKEY *)0x0) {
            *(int *)(param_1 + 0xac) = iVar1;
            *(X509 **)(param_1 + 0xb8) = pXVar6;
            *(undefined4 *)(param_1 + 0xb0) = 6;
          }
          else {
            iVar1 = X509_verify(pXVar3,r);
            if (0 < iVar1) goto LAB_00101728;
            *(int *)(param_1 + 0xac) = iVar5;
            pXVar4 = pXVar3;
            if (pXVar3 == (X509 *)0x0) {
              pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
            }
            *(X509 **)(param_1 + 0xb8) = pXVar4;
            *(undefined4 *)(param_1 + 0xb0) = 7;
          }
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 == 0) {
            return false;
          }
        }
LAB_00101728:
        iVar1 = ossl_x509_check_cert_time(param_1,pXVar3,iVar5);
        if (iVar1 == 0) {
          return false;
        }
        *(X509 **)(param_1 + 0xc0) = pXVar6;
        *(X509 **)(param_1 + 0xb8) = pXVar3;
        *(int *)(param_1 + 0xac) = iVar5;
        iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
        if (iVar1 == 0) {
          return false;
        }
        bVar7 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar7) break;
        pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
        pXVar6 = pXVar3;
        pXVar3 = pXVar4;
      } while( true );
    }
    bVar7 = true;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x38))(*(int *)(param_1 + 0xb0) == 0,param_1);
    bVar7 = iVar1 != 0;
  }
  return bVar7;
}



X509 * get0_best_issuer_sk_constprop_0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  X509 *b;
  X509 *a;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  X509 *local_40;
  
  iVar5 = 0;
  local_40 = (X509 *)0x0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      b = (X509 *)OPENSSL_sk_value(param_2,iVar5);
      if (((*(byte *)(param_3 + 0xe8) & 0x20) == 0) ||
         (iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98)), iVar1 != 1)) {
        uVar3 = *(undefined8 *)(param_1 + 0x98);
        iVar6 = 0;
        iVar1 = OPENSSL_sk_num(uVar3);
        if (0 < iVar1) {
          do {
            a = (X509 *)OPENSSL_sk_value(uVar3,iVar6);
            iVar2 = X509_cmp(a,b);
            if (iVar2 == 0) goto LAB_001019c7;
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
      }
      iVar1 = (**(code **)(param_1 + 0x48))(param_1,param_3,b);
      if (iVar1 != 0) {
        iVar1 = ossl_x509_check_cert_time(param_1,b,0xffffffff);
        if (iVar1 != 0) {
          return b;
        }
        if (local_40 != (X509 *)0x0) {
          uVar3 = X509_get0_notAfter(local_40);
          uVar4 = X509_get0_notAfter(b);
          iVar1 = ASN1_TIME_compare(uVar4,uVar3);
          if (iVar1 < 1) goto LAB_001019c7;
        }
        local_40 = b;
      }
LAB_001019c7:
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar5 < iVar1);
  }
  return local_40;
}



ulong build_chain(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  X509 *pXVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  short *psVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  long in_FS_OFFSET;
  byte bVar15;
  int local_60;
  uint local_5c;
  long local_58;
  uint local_4c;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_1 + 0xf0);
  iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  local_58 = 0;
  if ((iVar3 == 1) && (*(int *)(param_1 + 0x94) == 1)) {
    bVar15 = *(long *)(param_1 + 0x10) != 0;
    if ((lVar1 != 0) &&
       (((*(uint *)(lVar1 + 0x28) & 3) == 0 && ((*(uint *)(lVar1 + 0x28) & 0xc) != 0)))) {
      local_58 = OPENSSL_sk_new_null();
      if (local_58 == 0) goto LAB_001025ae;
      local_4c = 0;
      cVar2 = '\0';
LAB_00101ba3:
      cVar13 = cVar2;
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
      if (((iVar3 < 1) || (*(long *)(lVar1 + 0x10) == 0)) ||
         (iVar3 = X509_add_certs(local_58,*(long *)(lVar1 + 0x10),0), iVar3 != 0))
      goto LAB_00101bd2;
      ERR_new();
      uVar8 = 0xd03;
LAB_00102263:
      ERR_set_debug("crypto/x509/x509_vfy.c",uVar8,"build_chain");
      ERR_set_error(0xb,0x8000b,0);
LAB_00102282:
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
      OPENSSL_sk_free(local_58);
      goto LAB_00101aea;
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (uVar9 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18), (uVar9 & 0x8000) != 0)) {
      local_4c = 0;
      bVar15 = bVar15 | 2;
    }
    else {
      bVar15 = 1;
      local_4c = ((uint)(uVar9 >> 0x14) ^ 1) & 1;
    }
    local_58 = OPENSSL_sk_new_null();
    if (local_58 == 0) {
LAB_001025ae:
      ERR_new();
      ERR_set_debug("crypto/x509/x509_vfy.c",0xcf9,"build_chain");
      ERR_set_error(0xb,0x8000f,0);
      local_58 = 0;
      goto LAB_00102282;
    }
    cVar13 = '\x01';
    cVar2 = '\x01';
    if (lVar1 != 0) goto LAB_00101ba3;
LAB_00101bd2:
    iVar3 = X509_add_certs(local_58,*(undefined8 *)(param_1 + 0x10),0);
    if (iVar3 == 0) {
      ERR_new();
      uVar8 = 0xd0d;
      goto LAB_00102263;
    }
    local_60 = *(int *)(*(long *)(param_1 + 0x20) + 0x28);
    if (local_60 < 0x40000000) {
      local_60 = local_60 + 1;
    }
    else {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28) = 0x3fffffff;
      local_60 = 0x40000000;
    }
    if (bVar15 == 0) {
      OPENSSL_sk_free(local_58);
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      if (iVar3 <= local_60) {
        if (lVar1 != 0) {
LAB_00101e19:
          if ((*(byte *)(lVar1 + 0x28) & 4) != 0) {
            lVar10 = *(long *)(param_1 + 0xf0);
            iVar4 = *(int *)(param_1 + 0x94) + -1;
            pXVar7 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4);
            iVar14 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 8));
            if (0 < iVar14) {
              iVar5 = 0;
              do {
                psVar11 = (short *)OPENSSL_sk_value(*(undefined8 *)(lVar10 + 8),iVar5);
                if (((*psVar11 == 0x102) && ((char)psVar11[1] == '\0')) &&
                   (iVar6 = X509_verify(pXVar7,*(EVP_PKEY **)(psVar11 + 0xc)), 0 < iVar6)) {
                  X509_free(*(X509 **)(lVar10 + 0x20));
                  uVar8 = *(undefined8 *)(param_1 + 0x98);
                  *(undefined8 *)(lVar10 + 0x20) = 0;
                  *(undefined4 *)(param_1 + 0xf8) = 1;
                  *(int *)(lVar10 + 0x2c) = iVar4;
                  *(short **)(lVar10 + 0x18) = psVar11;
                  iVar3 = OPENSSL_sk_num(uVar8);
                  if (*(int *)(param_1 + 0x94) < iVar3) {
                    do {
                      iVar3 = iVar3 + -1;
                      pXVar7 = (X509 *)OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
                      X509_free(pXVar7);
                    } while (*(int *)(param_1 + 0x94) < iVar3);
                  }
                  goto LAB_0010221e;
                }
                iVar5 = iVar5 + 1;
              } while (iVar14 != iVar5);
            }
          }
        }
LAB_00101e2f:
        if (*(int *)(param_1 + 0x94) == iVar3) {
          local_5c = check_trust(param_1,iVar3);
          goto LAB_001022aa;
        }
        iVar4 = *(int *)(param_1 + 0xb0);
        if (10 < iVar4) goto LAB_001022e7;
        if (8 < iVar4) goto LAB_001022c0;
        iVar14 = iVar3 + -1;
        if (iVar4 == 0) goto LAB_00101e61;
LAB_001022ef:
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
        }
        else {
          *(int *)(param_1 + 0xac) = iVar3;
          uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3);
        }
        *(undefined8 *)(param_1 + 0xb8) = uVar8;
        *(int *)(param_1 + 0xb0) = iVar4;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101f42;
        goto LAB_0010232f;
      }
LAB_00102460:
      iVar4 = *(int *)(param_1 + 0xb0);
      if (iVar4 < 0xb) {
        if (iVar4 < 9) {
          if (iVar4 != 0) goto LAB_001022ef;
          iVar14 = iVar3 + -1;
          if (local_60 < iVar3) {
            if (iVar14 < 0) {
              iVar4 = *(int *)(param_1 + 0xac);
            }
            else {
              *(int *)(param_1 + 0xac) = iVar14;
              iVar4 = iVar14;
            }
            uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4);
            *(undefined4 *)(param_1 + 0xb0) = 0x16;
            *(undefined8 *)(param_1 + 0xb8) = uVar8;
            iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar4 == 0) goto LAB_001022c0;
          }
LAB_00101e61:
          if (((lVar1 != 0) && (iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), 0 < iVar4)) &&
             (((*(byte *)(lVar1 + 0x28) & 3) == 0 || (-1 < *(int *)(lVar1 + 0x30))))) {
            if (iVar14 < 0) {
              iVar4 = *(int *)(param_1 + 0xac);
            }
            else {
              *(int *)(param_1 + 0xac) = iVar14;
              iVar4 = iVar14;
            }
            uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4);
            *(undefined4 *)(param_1 + 0xb0) = 0x41;
            *(undefined8 *)(param_1 + 0xb8) = uVar8;
            iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar4 == 0) goto LAB_001022c0;
          }
          uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
          iVar4 = X509_self_signed(uVar8,0);
          if (iVar4 < 1) {
            uVar8 = *(undefined8 *)(param_1 + 0x98);
            uVar12 = 0x14;
            if (*(int *)(param_1 + 0x94) < iVar3) {
              uVar12 = 2;
            }
            if (-1 < iVar14) {
              *(int *)(param_1 + 0xac) = iVar14;
              goto LAB_00101f18;
            }
            uVar8 = OPENSSL_sk_value(uVar8,*(undefined4 *)(param_1 + 0xac));
          }
          else {
            if (iVar3 == 1) {
              uVar12 = 0x12;
LAB_001025a5:
              *(int *)(param_1 + 0xac) = iVar14;
            }
            else {
              if (-1 < iVar14) {
                uVar12 = 0x13;
                goto LAB_001025a5;
              }
              iVar14 = *(int *)(param_1 + 0xac);
              uVar12 = 0x13;
            }
            uVar8 = *(undefined8 *)(param_1 + 0x98);
LAB_00101f18:
            uVar8 = OPENSSL_sk_value(uVar8,iVar14);
          }
          *(undefined8 *)(param_1 + 0xb8) = uVar8;
          *(undefined4 *)(param_1 + 0xb0) = uVar12;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00101f42:
                    /* WARNING: Could not recover jumptable at 0x00101f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
            return uVar9;
          }
          goto LAB_0010232f;
        }
      }
      else {
LAB_001022e7:
        if (1 < iVar4 - 0xdU) goto LAB_001022ef;
      }
LAB_001022c0:
      local_5c = 0;
    }
    else {
      local_5c = 3;
      iVar3 = 0;
LAB_00101c20:
      do {
        local_48 = (X509 *)0x0;
        iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        iVar14 = iVar4 + -1;
        *(int *)(param_1 + 0xac) = iVar14;
        if ((bVar15 & 2) != 0) {
          iVar6 = iVar4;
          iVar5 = iVar14;
          if ((bVar15 & 4) != 0) {
            iVar6 = iVar3;
            iVar5 = iVar3 + -1;
          }
          pXVar7 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
          if (local_60 < iVar4) {
LAB_00101db0:
            if ((bVar15 & 1) != 0) goto LAB_00101f60;
            if ((bVar15 & 4) != 0) {
              iVar3 = iVar3 + -1;
              if (iVar3 < 1) break;
              goto LAB_00101c20;
            }
LAB_00102093:
            bVar15 = 2;
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + 0x98);
            *(undefined8 *)(param_1 + 0x98) = 0;
            iVar5 = (**(code **)(param_1 + 0x40))(&local_48,param_1,pXVar7);
            *(undefined8 *)(param_1 + 0x98) = uVar8;
            if (iVar5 < 0) {
              *(undefined4 *)(param_1 + 0xb0) = 0x46;
              OPENSSL_sk_free(local_58);
              goto LAB_00101aea;
            }
            if (iVar5 == 0) goto LAB_00101db0;
            iVar5 = X509_self_signed(pXVar7,0);
            if (iVar5 < 0) {
LAB_001020d0:
              X509_free(local_48);
              goto LAB_00101aa5;
            }
            if ((bVar15 & 4) == 0) {
              iVar6 = iVar4;
              if (iVar5 == 0) goto LAB_00102050;
              iVar4 = X509_cmp(pXVar7,local_48);
              if (iVar4 != 0) {
                X509_free(local_48);
                if ((bVar15 & 1) != 0) goto LAB_00101f60;
                goto LAB_00102093;
              }
              X509_free(pXVar7);
              *(int *)(param_1 + 0x94) = iVar14;
              OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),iVar14,local_48);
            }
            else {
              if ((iVar4 <= iVar6 || iVar6 < 1) || (iVar5 != 0)) goto LAB_001020d0;
              bVar15 = bVar15 & 0xfb;
              do {
                iVar4 = iVar4 + -1;
                pXVar7 = (X509 *)OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
                X509_free(pXVar7);
              } while (iVar6 < iVar4);
              *(int *)(param_1 + 0x94) = iVar6;
              if (lVar1 != 0) {
                iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
                if ((0 < iVar4) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar1 + 0x2c))) {
                  *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
                  X509_free(*(X509 **)(lVar1 + 0x20));
                  *(undefined8 *)(lVar1 + 0x20) = 0;
                }
                iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
                if ((0 < iVar4) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar1 + 0x30))) {
                  *(undefined4 *)(lVar1 + 0x30) = 0xffffffff;
                }
              }
LAB_00102050:
              iVar14 = iVar6;
              iVar4 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),local_48);
              if (iVar4 == 0) {
                X509_free(local_48);
                ERR_new();
                ERR_set_debug("crypto/x509/x509_vfy.c",0xd7f,"build_chain");
                ERR_set_error(0xb,0x8000f,0);
                goto LAB_00102282;
              }
              iVar5 = X509_self_signed(local_48,0);
              if (iVar5 < 0) goto LAB_00101aa5;
            }
            if (iVar14 < *(int *)(param_1 + 0x94)) goto LAB_00101aa5;
            bVar15 = bVar15 & 0xfe;
            local_5c = check_trust(param_1,iVar14);
            if (local_5c != 3) break;
            if (iVar5 == 0) goto LAB_00101fb3;
          }
          if ((local_4c == 0) || (*(int *)(param_1 + 0x94) < 2)) break;
          bVar15 = bVar15 | 4;
          iVar3 = *(int *)(param_1 + 0x94) + -1;
          goto LAB_00101c20;
        }
        if ((bVar15 & 1) == 0) {
          bVar15 = 4;
          goto LAB_00101c20;
        }
LAB_00101f60:
        iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        if (*(int *)(param_1 + 0x94) != iVar4) goto LAB_00101aa5;
        uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4 + -1);
        iVar14 = X509_self_signed(uVar8,0);
        if (((iVar4 <= local_60) && (iVar14 < 1)) &&
           (local_48 = (X509 *)get0_best_issuer_sk_constprop_0(param_1,local_58,uVar8),
           local_48 != (X509 *)0x0)) {
          OPENSSL_sk_delete_ptr(local_58,local_48);
          iVar4 = X509_add_cert(*(undefined8 *)(param_1 + 0x98),local_48,1);
          if (iVar4 == 0) goto LAB_00101aa5;
          iVar4 = *(int *)(param_1 + 0x94);
          *(int *)(param_1 + 0x94) = iVar4 + 1;
          if (((*(long *)(param_1 + 0xf0) != 0) &&
              ((*(byte *)(*(long *)(param_1 + 0xf0) + 0x28) & 5) != 0)) &&
             ((iVar4 != 0 &&
              (lVar10 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4), lVar10 != 0)))) {
            local_5c = dane_match_cert_isra_0
                                 (*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xf0),
                                  lVar10,iVar4);
            if ((int)local_5c < 0) goto LAB_00101c20;
            if (local_5c != 0) {
              *(int *)(param_1 + 0x94) = iVar4 + -1;
              OPENSSL_sk_free(local_58);
              OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
              goto LAB_0010221e;
            }
          }
          local_5c = 3;
          goto LAB_00101c20;
        }
        bVar15 = bVar15 & 0xfe | -cVar13 & 2U;
LAB_00101fb3:
      } while (bVar15 != 0);
      OPENSSL_sk_free(local_58);
      if (-1 < (int)local_5c) {
        iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        if (iVar3 <= local_60) {
          if (lVar1 == 0) {
            if (local_5c == 3) goto LAB_00101e2f;
          }
          else if (local_5c == 3) goto LAB_00101e19;
        }
LAB_001022aa:
        if (local_5c != 1) {
          if (local_5c != 2) goto LAB_00102460;
          goto LAB_001022c0;
        }
LAB_0010221e:
        local_5c = 1;
      }
    }
  }
  else {
LAB_00101aa5:
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0xe21,"build_chain");
    ERR_set_error(0xb,0xc0103,0);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    OPENSSL_sk_free(local_58);
LAB_00101aea:
    local_5c = 0xffffffff;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_5c;
  }
LAB_0010232f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint get1_best_issuer_other_sk(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = get0_best_issuer_sk_constprop_0(param_2,*(undefined8 *)(param_2 + 0x28));
  *param_1 = lVar3;
  uVar2 = 0;
  if (lVar3 != 0) {
    iVar1 = X509_up_ref();
    uVar2 = -(uint)(iVar1 == 0) | 1;
  }
  return uVar2;
}



int X509_STORE_CTX_get1_issuer(X509 **issuer,X509_STORE_CTX *ctx,X509 *x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  X509_NAME *pXVar4;
  undefined4 *puVar5;
  long lVar6;
  X509 *x_00;
  undefined8 uVar7;
  undefined8 uVar8;
  X509 *local_58;
  int local_4c;
  
  pXVar4 = X509_get_issuer_name(x);
  puVar5 = (undefined4 *)X509_OBJECT_new();
  *issuer = (X509 *)0x0;
  if (puVar5 == (undefined4 *)0x0) {
    local_4c = -1;
  }
  else {
    iVar1 = ossl_x509_store_ctx_get_by_subject(ctx,1,pXVar4,puVar5);
    local_4c = iVar1;
    if (iVar1 == 1) {
      iVar2 = (*ctx->get_issuer)((X509 **)ctx,(X509_STORE_CTX *)x,*(X509 **)(puVar5 + 2));
      if ((iVar2 == 0) ||
         (iVar2 = ossl_x509_check_cert_time(ctx,*(undefined8 *)(puVar5 + 2),0xffffffff), iVar2 == 0)
         ) {
        lVar6 = X509_STORE_CTX_get1_certs(ctx,pXVar4);
        if (lVar6 == 0) {
          local_4c = -1;
        }
        else {
          local_58 = (X509 *)0x0;
          for (iVar2 = 0; iVar3 = OPENSSL_sk_num(lVar6), x_00 = local_58, iVar2 < iVar3;
              iVar2 = iVar2 + 1) {
            x_00 = (X509 *)OPENSSL_sk_value(lVar6,iVar2);
            iVar3 = (*ctx->get_issuer)((X509 **)ctx,(X509_STORE_CTX *)x,x_00);
            if (iVar3 != 0) {
              iVar3 = ossl_x509_check_cert_time(ctx,x_00,0xffffffff);
              if (iVar3 != 0) break;
              if (local_58 != (X509 *)0x0) {
                uVar7 = X509_get0_notAfter(local_58);
                uVar8 = X509_get0_notAfter(x_00);
                iVar3 = ASN1_TIME_compare(uVar8,uVar7);
                if (iVar3 < 1) goto LAB_00102770;
              }
              local_58 = x_00;
            }
LAB_00102770:
          }
          local_58 = x_00;
          *issuer = local_58;
          if (local_58 == (X509 *)0x0) {
            local_4c = 0;
          }
          else {
            iVar2 = X509_up_ref();
            local_4c = -1;
            if (iVar2 != 0) {
              local_4c = iVar1;
            }
          }
          OSSL_STACK_OF_X509_free(lVar6);
        }
      }
      else {
        *issuer = *(X509 **)(puVar5 + 2);
        *puVar5 = 0;
      }
    }
    X509_OBJECT_free(puVar5);
  }
  return local_4c;
}



int X509_cmp_current_time(ASN1_TIME *s)

{
  int iVar1;
  
  iVar1 = X509_cmp_time(s,(time_t *)0x0);
  return iVar1;
}



int X509_cmp_timeframe(X509_VERIFY_PARAM *param_1,ASN1_TIME *param_2,ASN1_TIME *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  time_t *t;
  long in_FS_OFFSET;
  time_t local_28;
  long local_20;
  
  t = &local_28;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (X509_VERIFY_PARAM *)0x0) {
LAB_001028d0:
    t = (time_t *)0x0;
joined_r0x00102875:
    if (param_3 != (ASN1_TIME *)0x0) {
      iVar1 = X509_cmp_time(param_3,t);
      iVar2 = 1;
      if (iVar1 < 0) goto LAB_001028a7;
    }
    if (param_2 != (ASN1_TIME *)0x0) {
      iVar1 = X509_cmp_time(param_2,t);
      iVar2 = -(uint)(0 < iVar1);
      goto LAB_001028a7;
    }
  }
  else {
    uVar3 = X509_VERIFY_PARAM_get_flags(param_1);
    if ((uVar3 & 2) != 0) {
      local_28 = X509_VERIFY_PARAM_get_time(param_1);
      goto joined_r0x00102875;
    }
    if ((uVar3 & 0x200000) == 0) goto LAB_001028d0;
  }
  iVar2 = 0;
LAB_001028a7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 check_crl_time(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  ASN1_TIME *pAVar3;
  long lVar4;
  time_t *t;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  t = (time_t *)(*(long *)(param_1 + 0x20) + 8);
  if (((uVar1 & 2) == 0) && (t = (time_t *)0x0, (uVar1 & 0x200000) != 0)) {
    return 1;
  }
  if (param_3 == 0) {
    pAVar3 = (ASN1_TIME *)X509_CRL_get0_lastUpdate(param_2);
    iVar2 = X509_cmp_time(pAVar3,t);
    if (iVar2 == 0) {
      return 0;
    }
    if (0 < iVar2) {
      return 0;
    }
    lVar4 = X509_CRL_get0_nextUpdate(param_2);
    if (lVar4 == 0) {
      return 1;
    }
LAB_00102a78:
    pAVar3 = (ASN1_TIME *)X509_CRL_get0_nextUpdate(param_2);
    iVar2 = X509_cmp_time(pAVar3,t);
    if (iVar2 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      goto LAB_00102a48;
    }
    if ((-1 < iVar2) || ((*(byte *)(param_1 + 0xd0) & 2) != 0)) {
      if (param_3 == 0) {
        return 1;
      }
      goto LAB_00102990;
    }
    if (param_3 == 0) {
      return 0;
    }
LAB_00102a33:
    *(undefined4 *)(param_1 + 0xb0) = 0xc;
  }
  else {
    *(undefined8 *)(param_1 + 200) = param_2;
    pAVar3 = (ASN1_TIME *)X509_CRL_get0_lastUpdate(param_2);
    iVar2 = X509_cmp_time(pAVar3,t);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0xf;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      lVar4 = X509_CRL_get0_nextUpdate(param_2);
      if (lVar4 == 0) goto LAB_00102990;
      pAVar3 = (ASN1_TIME *)X509_CRL_get0_nextUpdate(param_2);
      iVar2 = X509_cmp_time(pAVar3,t);
    }
    else {
      if (iVar2 < 1) {
        lVar4 = X509_CRL_get0_nextUpdate(param_2);
        if (lVar4 == 0) goto LAB_00102990;
        goto LAB_00102a78;
      }
      *(undefined4 *)(param_1 + 0xb0) = 0xb;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      lVar4 = X509_CRL_get0_nextUpdate(param_2);
      if (lVar4 == 0) goto LAB_00102990;
      pAVar3 = (ASN1_TIME *)X509_CRL_get0_nextUpdate(param_2);
      iVar2 = X509_cmp_time(pAVar3,t);
    }
    if (iVar2 != 0) {
      if ((-1 < iVar2) || ((*(byte *)(param_1 + 0xd0) & 2) != 0)) goto LAB_00102990;
      goto LAB_00102a33;
    }
LAB_00102a48:
    *(undefined4 *)(param_1 + 0xb0) = 0x10;
  }
  iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00102990:
  *(undefined8 *)(param_1 + 200) = 0;
  return 1;
}



ulong get_crl_sk(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                uint *param_6,undefined8 param_7)

{
  X509 *a;
  int *piVar1;
  X509_CRL *a_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  X509_NAME *pXVar9;
  X509_NAME *pXVar10;
  X509 *issuer;
  undefined8 *puVar11;
  GENERAL_NAME *a_01;
  GENERAL_NAME *b;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long in_FS_OFFSET;
  uint local_d8;
  uint local_cc;
  long local_c8;
  uint local_b0;
  uint local_ac;
  X509 *local_a0;
  uint local_90;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = *param_5;
  local_90 = 0;
  local_c8 = 0;
  iVar19 = 0;
  local_a0 = (X509 *)0x0;
  a = *(X509 **)(param_1 + 0xb8);
LAB_00102b68:
  iVar3 = OPENSSL_sk_num(param_7);
  if (iVar19 < iVar3) {
    lVar8 = OPENSSL_sk_value(param_7,iVar19);
    uVar7 = *(uint *)(lVar8 + 0x98);
    if ((uVar7 & 2) == 0) {
      local_b0 = *param_6;
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x10) == 0) {
        uVar7 = uVar7 & 0x60;
joined_r0x00102bbb:
        if (uVar7 != 0) goto LAB_00102f20;
      }
      else {
        if ((uVar7 & 0x40) != 0) {
          uVar7 = ~local_b0 & *(uint *)(lVar8 + 0x9c);
          goto joined_r0x00102bbb;
        }
        if (*(long *)(lVar8 + 0xa8) != 0) {
          iVar19 = iVar19 + 1;
          goto LAB_00102b68;
        }
      }
      pXVar9 = (X509_NAME *)X509_CRL_get_issuer(lVar8);
      pXVar10 = X509_get_issuer_name(a);
      iVar3 = X509_NAME_cmp(pXVar10,pXVar9);
      if (iVar3 == 0) {
        uVar21 = 0x3c;
        uVar17 = 0x7c;
        uVar4 = 0x60;
        local_cc = 0x17c;
        uVar20 = 0x13c;
        uVar7 = 0x120;
        uVar16 = 0x20;
        local_d8 = 0x160;
      }
      else {
        if ((*(byte *)(lVar8 + 0x98) & 0x20) == 0) goto LAB_00102f20;
        local_cc = 0x15c;
        uVar16 = 0;
        uVar21 = 0x1c;
        uVar17 = 0x5c;
        uVar4 = 0x40;
        uVar20 = 0x11c;
        uVar7 = 0x100;
        local_d8 = 0x140;
      }
      uVar2 = local_cc;
      if ((*(byte *)(lVar8 + 0x85) & 2) != 0) {
        uVar20 = uVar21;
        local_d8 = uVar4;
        uVar7 = uVar16;
        uVar2 = uVar17;
      }
      iVar3 = check_crl_time(param_1,lVar8,0);
      local_cc = uVar20;
      if (iVar3 != 0) {
        local_cc = uVar2;
        uVar7 = local_d8;
      }
      pXVar9 = (X509_NAME *)X509_CRL_get_issuer(lVar8);
      iVar3 = *(int *)(param_1 + 0xac);
      iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      iVar18 = iVar5 + -1;
      if (iVar3 != iVar5 + -1) {
        iVar18 = iVar3 + 1;
      }
      issuer = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar18);
      iVar3 = X509_check_akid(issuer,*(AUTHORITY_KEYID **)(lVar8 + 0x88));
      if ((iVar3 != 0) || (uVar16 == 0)) {
        do {
          iVar18 = iVar18 + 1;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          if (iVar3 <= iVar18) {
            iVar3 = 0;
            if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x10) == 0) goto LAB_00102f20;
            goto LAB_00102fda;
          }
          issuer = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar18);
          pXVar10 = X509_get_subject_name(issuer);
          iVar3 = X509_NAME_cmp(pXVar10,pXVar9);
        } while ((iVar3 != 0) ||
                (iVar3 = X509_check_akid(issuer,*(AUTHORITY_KEYID **)(lVar8 + 0x88)), iVar3 != 0));
        local_cc = uVar7 | 0xc;
      }
LAB_00102d1f:
      uVar7 = *(uint *)(lVar8 + 0x98);
      if ((uVar7 & 0x10) == 0) {
        if (((ulong)a[1].name & 0x10) == 0) {
          uVar7 = uVar7 & 8;
        }
        else {
          uVar7 = uVar7 & 4;
        }
        if (uVar7 == 0) {
          uVar7 = *(uint *)(lVar8 + 0x9c);
          iVar3 = 0;
          while (iVar18 = OPENSSL_sk_num(a[1].ex_flags), iVar3 < iVar18) {
            iVar18 = 0;
            puVar11 = (undefined8 *)OPENSSL_sk_value(a[1].ex_flags,iVar3);
            pXVar9 = (X509_NAME *)X509_CRL_get_issuer(lVar8);
            lVar22 = puVar11[2];
            if (lVar22 == 0) {
              if ((local_cc & 0x20) == 0) goto LAB_00103220;
LAB_00102df4:
              if (*(undefined8 **)(lVar8 + 0x90) == (undefined8 *)0x0) {
LAB_00102ec7:
                uVar7 = uVar7 & *(uint *)(puVar11 + 3);
                goto LAB_00102ece;
              }
              piVar15 = (int *)*puVar11;
              piVar1 = (int *)**(undefined8 **)(lVar8 + 0x90);
              if ((piVar15 == (int *)0x0) || (piVar1 == (int *)0x0)) goto LAB_00102ec7;
              if (*piVar15 != 1) {
                if (*piVar1 == 1) {
                  pXVar9 = *(X509_NAME **)(piVar1 + 4);
                  if (pXVar9 != (X509_NAME *)0x0) {
                    uVar12 = *(undefined8 *)(piVar15 + 2);
                    goto LAB_00103241;
                  }
                }
                else {
                  for (iVar18 = 0; iVar5 = OPENSSL_sk_num(*(undefined8 *)(piVar15 + 2)),
                      iVar18 < iVar5; iVar18 = iVar18 + 1) {
                    a_01 = (GENERAL_NAME *)OPENSSL_sk_value(*(undefined8 *)(piVar15 + 2),iVar18);
                    for (iVar5 = 0; iVar6 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 2)),
                        iVar5 < iVar6; iVar5 = iVar5 + 1) {
                      b = (GENERAL_NAME *)OPENSSL_sk_value(*(undefined8 *)(piVar1 + 2),iVar5);
                      iVar6 = GENERAL_NAME_cmp(a_01,b);
                      if (iVar6 == 0) goto LAB_00102ec7;
                    }
                  }
                }
                goto LAB_00103220;
              }
              pXVar9 = *(X509_NAME **)(piVar15 + 4);
              if (pXVar9 == (X509_NAME *)0x0) goto LAB_00103220;
              if (*piVar1 != 1) {
                uVar12 = *(undefined8 *)(piVar1 + 2);
LAB_00103241:
                for (iVar18 = 0; iVar5 = OPENSSL_sk_num(uVar12), iVar18 < iVar5; iVar18 = iVar18 + 1
                    ) {
                  piVar15 = (int *)OPENSSL_sk_value(uVar12,iVar18);
                  if ((*piVar15 == 4) &&
                     (iVar5 = X509_NAME_cmp(pXVar9,*(X509_NAME **)(piVar15 + 2)), iVar5 == 0))
                  goto LAB_00102ec7;
                }
                goto LAB_00103220;
              }
              if (*(X509_NAME **)(piVar1 + 4) == (X509_NAME *)0x0) goto LAB_00103220;
              iVar18 = X509_NAME_cmp(pXVar9,*(X509_NAME **)(piVar1 + 4));
              if (iVar18 == 0) goto LAB_00102ec7;
              iVar3 = iVar3 + 1;
            }
            else {
              for (; iVar5 = OPENSSL_sk_num(lVar22), iVar18 < iVar5; iVar18 = iVar18 + 1) {
                piVar15 = (int *)OPENSSL_sk_value(puVar11[2],iVar18);
                if ((*piVar15 == 4) &&
                   (iVar5 = X509_NAME_cmp(*(X509_NAME **)(piVar15 + 2),pXVar9), iVar5 == 0))
                goto LAB_00102df4;
                lVar22 = puVar11[2];
              }
LAB_00103220:
              iVar3 = iVar3 + 1;
            }
          }
          if (((*(long **)(lVar8 + 0x90) == (long *)0x0) || (**(long **)(lVar8 + 0x90) == 0)) &&
             ((local_cc & 0x20) != 0)) {
LAB_00102ece:
            if ((~local_b0 & uVar7) == 0) goto LAB_00102f20;
            local_b0 = local_b0 | uVar7;
            local_cc = local_cc | 0x80;
          }
        }
      }
      if ((int)local_ac <= (int)local_cc) {
        if ((local_ac == local_cc) && (local_c8 != 0)) {
          uVar12 = X509_CRL_get0_lastUpdate(lVar8);
          uVar13 = X509_CRL_get0_lastUpdate(local_c8);
          iVar3 = ASN1_TIME_diff(&local_48,&local_44,uVar13,uVar12);
          if (iVar3 == 0) goto LAB_00102f20;
          if ((local_48 < 1) && (local_44 < 1)) {
            iVar19 = iVar19 + 1;
            goto LAB_00102b68;
          }
        }
        local_90 = local_b0;
        local_ac = local_cc;
        local_c8 = lVar8;
        local_a0 = issuer;
      }
    }
LAB_00102f20:
    iVar19 = iVar19 + 1;
    goto LAB_00102b68;
  }
  if (local_c8 != 0) {
    uVar14 = X509_CRL_up_ref(local_c8);
    if ((int)uVar14 == 0) goto LAB_0010309f;
    X509_CRL_free((X509_CRL *)*param_2);
    *param_2 = local_c8;
    a_00 = (X509_CRL *)*param_3;
    *param_4 = local_a0;
    *param_5 = local_ac;
    *param_6 = local_90;
    X509_CRL_free(a_00);
    *param_3 = 0;
    if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x20) != 0) &&
       (((*(uint *)(*(long *)(param_1 + 0xb8) + 0xe8) | *(uint *)(local_c8 + 0x84)) & 0x1000) != 0))
    {
      for (iVar19 = 0; iVar3 = OPENSSL_sk_num(param_7), iVar19 < iVar3; iVar19 = iVar19 + 1) {
        lVar8 = OPENSSL_sk_value(param_7,iVar19);
        if ((*(long *)(lVar8 + 0xa8) != 0) && (*(long *)(local_c8 + 0xa0) != 0)) {
          pXVar9 = (X509_NAME *)X509_CRL_get_issuer(lVar8);
          pXVar10 = (X509_NAME *)X509_CRL_get_issuer(local_c8);
          iVar3 = X509_NAME_cmp(pXVar10,pXVar9);
          if (((iVar3 == 0) &&
              (((iVar3 = crl_extension_match(lVar8,local_c8,0x5a), iVar3 != 0 &&
                (iVar3 = crl_extension_match(lVar8,local_c8,0x302), iVar3 != 0)) &&
               (iVar3 = ASN1_INTEGER_cmp(*(ASN1_INTEGER **)(lVar8 + 0xa8),
                                         *(ASN1_INTEGER **)(local_c8 + 0xa0)), iVar3 < 1)))) &&
             (iVar3 = ASN1_INTEGER_cmp(*(ASN1_INTEGER **)(lVar8 + 0xa0),
                                       *(ASN1_INTEGER **)(local_c8 + 0xa0)), 0 < iVar3)) {
            iVar19 = X509_CRL_up_ref(lVar8);
            if (iVar19 != 0) {
              *param_3 = lVar8;
              iVar19 = check_crl_time(param_1,lVar8,0);
              if (iVar19 != 0) {
                *param_5 = *param_5 | 2;
              }
              goto LAB_001030d4;
            }
            break;
          }
        }
      }
      *param_3 = 0;
    }
  }
LAB_001030d4:
  uVar14 = (ulong)(0x1bf < (int)local_ac);
LAB_0010309f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102fda:
  iVar18 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
  if (iVar18 <= iVar3) goto code_r0x00102fe9;
  issuer = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),iVar3);
  pXVar10 = X509_get_subject_name(issuer);
  iVar18 = X509_NAME_cmp(pXVar10,pXVar9);
  if ((iVar18 == 0) &&
     (iVar18 = X509_check_akid(issuer,*(AUTHORITY_KEYID **)(lVar8 + 0x88)), iVar18 == 0)) {
    local_cc = uVar7 | 4;
    goto LAB_00102d1f;
  }
  iVar3 = iVar3 + 1;
  goto LAB_00102fda;
code_r0x00102fe9:
  iVar19 = iVar19 + 1;
  goto LAB_00102b68;
}



undefined8 check_revocation(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  X509 *a;
  X509_NAME *pXVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  undefined8 uVar8;
  X509_CRL *a_00;
  uint uVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  X509_CRL *local_60;
  undefined8 local_58;
  X509_CRL *local_50;
  X509_CRL *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar2 & 4) != 0) {
    if ((uVar2 & 8) == 0) {
      if (*(long *)(param_1 + 0xd8) != 0) goto LAB_001035da;
      iVar4 = 0;
    }
    else {
      iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) goto LAB_001035da;
    }
    local_70 = 0;
    do {
      local_60 = (X509_CRL *)0x0;
      *(int *)(param_1 + 0xac) = local_70;
      a = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0xd0) = 0;
      uVar9 = *(uint *)&a[1].name;
      *(X509 **)(param_1 + 0xb8) = a;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      uVar9 = uVar9 & 0x400;
      if (uVar9 == 0) {
        do {
          if (*(code **)(param_1 + 0x58) != (code *)0x0) {
            iVar3 = (**(code **)(param_1 + 0x58))(param_1,&local_60,a);
            if (iVar3 != 0) {
              a_00 = (X509_CRL *)0x0;
              *(X509_CRL **)(param_1 + 200) = local_60;
              iVar3 = (**(code **)(param_1 + 0x60))(param_1);
              if (iVar3 != 0) goto LAB_001036a7;
LAB_0010348c:
              X509_CRL_free(local_60);
              X509_CRL_free(a_00);
              *(undefined8 *)(param_1 + 200) = 0;
              goto LAB_001034a9;
            }
LAB_0010358b:
            *(undefined4 *)(param_1 + 0xb0) = 3;
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            break;
          }
          local_58 = 0;
          local_68 = 0;
          local_50 = (X509_CRL *)0x0;
          local_48 = (X509_CRL *)0x0;
          pXVar5 = X509_get_issuer_name(a);
          local_64 = *(undefined4 *)(param_1 + 0xd4);
          uVar7 = *(undefined8 *)(param_1 + 0x18);
          iVar3 = get_crl_sk(param_1,&local_50,&local_48,&local_58,&local_68,&local_64);
          uVar8 = extraout_RDX;
          if (iVar3 == 0) {
            auVar10 = (**(code **)(param_1 + 0x80))(param_1,pXVar5,extraout_RDX,uVar7);
            uVar8 = auVar10._8_8_;
            lVar6 = auVar10._0_8_;
            if ((lVar6 != 0) || (local_50 == (X509_CRL *)0x0)) {
              get_crl_sk(param_1,&local_50,&local_48,&local_58,&local_68,&local_64,lVar6);
              OPENSSL_sk_pop_free(lVar6,X509_CRL_free);
              uVar8 = 0x103538;
              goto LAB_0010357d;
            }
          }
          else {
LAB_0010357d:
            if (local_50 == (X509_CRL *)0x0) goto LAB_0010358b;
          }
          a_00 = local_48;
          local_60 = local_50;
          *(undefined4 *)(param_1 + 0xd0) = local_68;
          *(undefined8 *)(param_1 + 0xc0) = local_58;
          *(X509_CRL **)(param_1 + 200) = local_50;
          *(undefined4 *)(param_1 + 0xd4) = local_64;
          iVar3 = (**(code **)(param_1 + 0x60))(param_1,local_50,uVar8);
          if (iVar3 == 0) goto LAB_0010348c;
          if (a_00 != (X509_CRL *)0x0) {
            iVar3 = (**(code **)(param_1 + 0x60))(param_1,a_00);
            if ((iVar3 != 0) && (iVar3 = (**(code **)(param_1 + 0x68))(param_1,a_00,a), iVar3 != 0))
            {
              if (iVar3 != 2) goto LAB_001036a7;
              goto LAB_001036c0;
            }
            goto LAB_0010348c;
          }
LAB_001036a7:
          iVar3 = (**(code **)(param_1 + 0x68))(param_1,local_60,a);
          if (iVar3 == 0) goto LAB_0010348c;
LAB_001036c0:
          X509_CRL_free(local_60);
          X509_CRL_free(a_00);
          uVar1 = *(uint *)(param_1 + 0xd4);
          local_60 = (X509_CRL *)0x0;
          if (uVar9 == uVar1) goto LAB_0010358b;
          uVar9 = uVar1;
        } while (uVar1 != 0x807f);
        X509_CRL_free(local_60);
        X509_CRL_free((X509_CRL *)0x0);
        *(undefined8 *)(param_1 + 200) = 0;
        if (iVar3 == 0) {
LAB_001034a9:
          uVar7 = 0;
          goto LAB_001035df;
        }
      }
      local_70 = local_70 + 1;
    } while (local_70 <= iVar4);
  }
LAB_001035da:
  uVar7 = 1;
LAB_001035df:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



ASN1_TIME * X509_gmtime_adj(ASN1_TIME *s,long adj)

{
  ASN1_TIME *pAVar1;
  
  pAVar1 = X509_time_adj(s,adj,(time_t *)0x0);
  return pAVar1;
}



int X509_get_pubkey_parameters(EVP_PKEY *pkey,stack_st_X509 *chain)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_PKEY *pkey_00;
  EVP_PKEY *to;
  
  if ((pkey == (EVP_PKEY *)0x0) || (iVar1 = EVP_PKEY_missing_parameters(pkey), iVar1 != 0)) {
    iVar1 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(chain);
      if (iVar2 <= iVar1) {
        ERR_new();
        ERR_set_debug("crypto/x509/x509_vfy.c",0x86a,"X509_get_pubkey_parameters");
        ERR_set_error(0xb,0x6b,0);
        return 0;
      }
      uVar3 = OPENSSL_sk_value(chain,iVar1);
      pkey_00 = (EVP_PKEY *)X509_get0_pubkey(uVar3);
      if (pkey_00 == (EVP_PKEY *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x509_vfy.c",0x862,"X509_get_pubkey_parameters");
        ERR_set_error(0xb,0x6c,0);
        return 0;
      }
      iVar2 = EVP_PKEY_missing_parameters(pkey_00);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
    }
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      uVar3 = OPENSSL_sk_value(chain,iVar1);
      to = (EVP_PKEY *)X509_get0_pubkey(uVar3);
      iVar2 = EVP_PKEY_copy_parameters(to,pkey_00);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (pkey != (EVP_PKEY *)0x0) {
      iVar1 = EVP_PKEY_copy_parameters(pkey,pkey_00);
      return iVar1;
    }
  }
  return 1;
}



undefined8 verify_chain(long param_1)

{
  byte bVar1;
  NAME_CONSTRAINTS *nc;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar9;
  X509 *pXVar10;
  X509_NAME *pXVar11;
  X509_NAME *name;
  X509_NAME_ENTRY *pXVar12;
  ASN1_OBJECT *o;
  long lVar13;
  int iVar8;
  GENERAL_NAMES *a;
  int *piVar14;
  long lVar15;
  X509 *pXVar16;
  long in_FS_OFFSET;
  bool bVar17;
  uint local_68;
  int local_5c;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = build_chain();
  if (0 < (int)uVar9) {
    iVar4 = 6;
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    local_68 = 0;
    if (*(long *)(param_1 + 0xd8) == 0) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
      local_68 = (uint)(*(ulong *)(*(long *)(param_1 + 0x20) + 0x18) >> 6) & 1;
    }
    if (0 < iVar2) {
      if (iVar2 == 1) {
        pXVar10 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x10) == 0) &&
           (((ulong)pXVar10[1].name & 0x200) != 0)) {
          *(X509 **)(param_1 + 0xb8) = pXVar10;
          *(undefined8 *)(param_1 + 0xac) = 0x2200000000;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 == 0) {
            uVar9 = 0;
            goto LAB_00103d38;
          }
        }
        if ((local_68 == 0) && (((ulong)pXVar10[1].name & 0x400) != 0)) {
          *(X509 **)(param_1 + 0xb8) = pXVar10;
          *(undefined8 *)(param_1 + 0xac) = 0x2800000000;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 == 0) {
            uVar9 = 0;
            goto LAB_00103d38;
          }
        }
        uVar3 = X509_check_ca(pXVar10);
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0) && (1 < uVar3)) {
          *(undefined4 *)(param_1 + 0xac) = 0;
          pXVar16 = pXVar10;
          if (pXVar10 == (X509 *)0x0) {
            pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
          }
          *(X509 **)(param_1 + 0xb8) = pXVar16;
          *(undefined4 *)(param_1 + 0xb0) = 0x4f;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 == 0) {
            uVar9 = 0;
            goto LAB_00103d38;
          }
        }
        if (0 < iVar4) {
          if ((*(int *)(param_1 + 0x94) < 1) &&
             (iVar4 == *(int *)(*(long *)(param_1 + 0x20) + 0x20))) {
            iVar2 = X509_check_trust(pXVar10,*(int *)(*(long *)(param_1 + 0x20) + 0x24),4);
            if (iVar2 != 1) {
              if (iVar2 != 2) goto LAB_00103cd0;
              goto LAB_00103cf7;
            }
          }
          else {
LAB_00103cd0:
            iVar4 = X509_check_purpose(pXVar10,iVar4,0);
            if ((iVar4 == 0) ||
               ((iVar4 != 1 && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0)))) {
LAB_00103cf7:
              *(undefined4 *)(param_1 + 0xac) = 0;
              pXVar16 = pXVar10;
              if (pXVar10 == (X509 *)0x0) {
                pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
              }
              *(X509 **)(param_1 + 0xb8) = pXVar16;
              *(undefined4 *)(param_1 + 0xb0) = 0x1a;
              iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar4 == 0) {
LAB_00103d31:
                uVar9 = 0;
                goto LAB_00103d38;
              }
            }
          }
        }
        if (((((ulong)pXVar10[1].name & 0x400) != 0) &&
            (lVar15._0_4_ = pXVar10[1].valid, lVar15._4_4_ = pXVar10[1].references, lVar15 != -1))
           && (lVar15 < 0)) {
          *(X509 **)(param_1 + 0xb8) = pXVar10;
          *(undefined8 *)(param_1 + 0xac) = 0x2600000000;
          iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar4 == 0) {
            uVar9 = 0;
            goto LAB_00103d38;
          }
        }
      }
      else {
        iVar5 = 0;
        iVar7 = -1;
        iVar6 = 0;
        local_5c = 0;
LAB_00103e8a:
        do {
          pXVar10 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
          if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x10) == 0) &&
             (((ulong)pXVar10[1].name & 0x200) != 0)) {
            *(int *)(param_1 + 0xac) = iVar6;
            *(X509 **)(param_1 + 0xb8) = pXVar10;
            *(undefined4 *)(param_1 + 0xb0) = 0x22;
            iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar8 == 0) {
              uVar9 = 0;
              goto LAB_00103d38;
            }
          }
          if ((local_68 == 0) && (((ulong)pXVar10[1].name & 0x400) != 0)) {
            *(int *)(param_1 + 0xac) = iVar6;
            *(X509 **)(param_1 + 0xb8) = pXVar10;
            *(undefined4 *)(param_1 + 0xb0) = 0x28;
            iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar8 == 0) {
              uVar9 = 0;
              goto LAB_00103d38;
            }
          }
          uVar3 = X509_check_ca(pXVar10);
          if (iVar7 == -1) {
            if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) == 0) goto LAB_00103f2f;
            if (1 < uVar3) goto LAB_00103ef9;
            lVar13 = X509_get0_pubkey(pXVar10);
            if (lVar13 != 0) goto LAB_00103f43;
LAB_00104308:
            *(int *)(param_1 + 0xac) = iVar6;
            pXVar16 = pXVar10;
            if (pXVar10 == (X509 *)0x0) {
              pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
            }
            *(X509 **)(param_1 + 0xb8) = pXVar16;
            *(undefined4 *)(param_1 + 0xb0) = 1;
LAB_0010432d:
            iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar8 == 0) {
              uVar9 = 0;
              goto LAB_00103d38;
            }
          }
          else {
            if (iVar7 == 0) {
              if (uVar3 != 0) {
                *(int *)(param_1 + 0xac) = iVar6;
                pXVar16 = pXVar10;
                if (pXVar10 == (X509 *)0x0) {
                  pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
                }
                *(X509 **)(param_1 + 0xb8) = pXVar16;
                *(undefined4 *)(param_1 + 0xb0) = 0x25;
                goto LAB_00103f1e;
              }
            }
            else if ((uVar3 == 0) ||
                    (((iVar6 + 1 < iVar2 ||
                      ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0)) && (uVar3 != 1)))
                    ) {
LAB_00103ef9:
              *(int *)(param_1 + 0xac) = iVar6;
              pXVar16 = pXVar10;
              if (pXVar10 == (X509 *)0x0) {
                pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
              }
              *(X509 **)(param_1 + 0xb8) = pXVar16;
              *(undefined4 *)(param_1 + 0xb0) = 0x4f;
LAB_00103f1e:
              iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar8 == 0) goto LAB_00103d31;
            }
LAB_00103f2f:
            lVar13 = X509_get0_pubkey(pXVar10);
            if (lVar13 == 0) goto LAB_00104308;
LAB_00103f43:
            iVar8 = EVP_PKEY_get_id();
            if (iVar8 == 0x198) {
              iVar8 = EVP_PKEY_get_int_param(lVar13,"decoded-from-explicit",&local_44);
              if (iVar8 != 1) goto LAB_00104308;
              if (local_44 == 0) goto LAB_00103f5d;
              *(int *)(param_1 + 0xac) = iVar6;
              pXVar16 = pXVar10;
              if (pXVar10 == (X509 *)0x0) {
                pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
              }
              *(X509 **)(param_1 + 0xb8) = pXVar16;
              *(undefined4 *)(param_1 + 0xb0) = 0x5e;
              goto LAB_0010432d;
            }
          }
LAB_00103f5d:
          if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0) {
            if (pXVar10[1].signature != (ASN1_BIT_STRING *)0xffffffffffffffff) {
              if (((ulong)pXVar10[1].name & 0x10) == 0) {
                *(int *)(param_1 + 0xac) = iVar6;
                *(X509 **)(param_1 + 0xb8) = pXVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x50;
                iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar8 == 0) goto LAB_00103d31;
                bVar1 = *(byte *)((long)&pXVar10[1].name + 4);
              }
              else {
                bVar1 = *(byte *)((long)&pXVar10[1].name + 4);
              }
              if ((bVar1 & 4) == 0) {
                *(int *)(param_1 + 0xac) = iVar6;
                *(X509 **)(param_1 + 0xb8) = pXVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x51;
                iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar8 == 0) goto LAB_00103d31;
              }
            }
            uVar3 = *(uint *)&pXVar10[1].name;
            if ((uVar3 & 0x10011) == 0x11) {
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x59;
              iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar8 == 0) goto LAB_00103d31;
              uVar3 = *(uint *)&pXVar10[1].name;
            }
            if ((uVar3 & 0x10) == 0) {
              if (((ulong)pXVar10[1].name & 0x400000000) != 0) {
                *(int *)(param_1 + 0xac) = iVar6;
                *(X509 **)(param_1 + 0xb8) = pXVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x52;
                goto LAB_001044af;
              }
            }
            else if ((uVar3 & 2) == 0) {
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x5c;
LAB_001044af:
              iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar8 == 0) goto LAB_00103d31;
            }
            pXVar11 = X509_get_issuer_name(pXVar10);
            iVar8 = X509_NAME_entry_count(pXVar11);
            if (iVar8 == 0) {
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x53;
              iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar8 == 0) {
                uVar9 = 0;
                goto LAB_00103d38;
              }
            }
            if ((((ulong)pXVar10[1].name & 0x200000010) != 0) || (pXVar10[1].ex_kusage == 0)) {
              pXVar11 = X509_get_subject_name(pXVar10);
              iVar8 = X509_NAME_entry_count(pXVar11);
              if (iVar8 == 0) {
                *(int *)(param_1 + 0xac) = iVar6;
                *(X509 **)(param_1 + 0xb8) = pXVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x54;
                iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar8 == 0) {
                  uVar9 = 0;
                  goto LAB_00103d38;
                }
              }
            }
            pXVar11 = X509_get_subject_name(pXVar10);
            iVar8 = X509_NAME_entry_count(pXVar11);
            if (iVar8 == 0) {
              if (pXVar10[1].ex_kusage != 0) {
                if (((ulong)pXVar10[1].name & 0x80000) != 0) {
                  iVar8 = OPENSSL_sk_num();
                  if (0 < iVar8) goto LAB_00104040;
                  goto LAB_001043cd;
                }
                *(int *)(param_1 + 0xac) = iVar6;
                *(X509 **)(param_1 + 0xb8) = pXVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x58;
                iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar8 != 0) goto LAB_001043b0;
                goto LAB_00103d31;
              }
            }
            else {
LAB_001043b0:
              if ((pXVar10[1].ex_kusage != 0) && (iVar8 = OPENSSL_sk_num(), iVar8 < 1)) {
LAB_001043cd:
                *(int *)(param_1 + 0xac) = iVar6;
                *(X509 **)(param_1 + 0xb8) = pXVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x57;
                iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar8 == 0) goto LAB_00103d31;
              }
            }
LAB_00104040:
            iVar8 = X509_ALGOR_cmp((X509_ALGOR *)&pXVar10->altname,(X509_ALGOR *)&pXVar10->name);
            if (iVar8 != 0) {
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x4e;
              iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar8 == 0) {
                uVar9 = 0;
                goto LAB_00103d38;
              }
            }
            if ((pXVar10[1].ex_pathlen != 0) && (((ulong)pXVar10[1].name & 0x20000) != 0)) {
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x5a;
              iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar8 == 0) {
                uVar9 = 0;
                goto LAB_00103d38;
              }
            }
            if ((*(long *)&pXVar10[1].ex_data.dummy == 0) ||
               (((ulong)pXVar10[1].name & 0x40000) == 0)) {
              lVar13 = X509_get_version(pXVar10);
              if (1 < lVar13) goto LAB_0010409a;
LAB_001046e4:
              uVar9 = X509_get0_extensions(pXVar10);
              iVar8 = OPENSSL_sk_num(uVar9);
              if (iVar8 < 1) goto LAB_001040d8;
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x5d;
            }
            else {
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x5b;
              iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar8 == 0) goto LAB_00103d31;
              lVar13 = X509_get_version(pXVar10);
              if (lVar13 < 2) goto LAB_001046e4;
LAB_0010409a:
              if ((iVar6 + 1 < iVar2) &&
                 (((long *)pXVar10[1].ex_pathlen == (long *)0x0 ||
                  (*(long *)pXVar10[1].ex_pathlen == 0)))) {
                *(int *)(param_1 + 0xac) = iVar6;
                *(X509 **)(param_1 + 0xb8) = pXVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x55;
                iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar8 == 0) {
                  uVar9 = 0;
                  goto LAB_00103d38;
                }
              }
              if ((((ulong)pXVar10[1].name & 0x10) == 0) ||
                 (*(long *)&pXVar10[1].ex_data.dummy != 0)) goto LAB_001040d8;
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x56;
            }
            iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar8 == 0) {
              uVar9 = 0;
              goto LAB_00103d38;
            }
          }
LAB_001040d8:
          if (iVar4 < 1) {
LAB_00103e30:
            if (1 < iVar6) goto LAB_00103e39;
LAB_00104162:
            uVar3 = *(uint *)&pXVar10[1].name;
            if (iVar6 != 0) goto LAB_00103e61;
            if ((uVar3 & 0x400) == 0) {
              iVar7 = 1;
              iVar6 = 1;
              goto LAB_00103e8a;
            }
LAB_00104270:
            lVar13._0_4_ = pXVar10[1].valid;
            lVar13._4_4_ = pXVar10[1].references;
            if (lVar13 != -1) {
              if (lVar13 < iVar5) {
                *(int *)(param_1 + 0xac) = iVar6;
                *(X509 **)(param_1 + 0xb8) = pXVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x26;
                iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar5 == 0) goto LAB_00103d31;
                lVar13._0_4_ = pXVar10[1].valid;
                lVar13._4_4_ = pXVar10[1].references;
              }
              iVar5 = (int)lVar13;
            }
            iVar5 = iVar5 + 1;
            iVar7 = 0;
          }
          else {
            if ((iVar6 < *(int *)(param_1 + 0x94)) ||
               (iVar4 != *(int *)(*(long *)(param_1 + 0x20) + 0x20))) {
LAB_001040f6:
              iVar7 = X509_check_purpose(pXVar10,iVar4,(uint)(0 < iVar7));
              if ((iVar7 != 0) &&
                 ((iVar7 == 1 || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) == 0))))
              goto LAB_00103e30;
            }
            else {
              iVar8 = X509_check_trust(pXVar10,*(int *)(*(long *)(param_1 + 0x20) + 0x24),4);
              if (iVar8 == 1) goto LAB_00103e30;
              if (iVar8 != 2) goto LAB_001040f6;
            }
            *(int *)(param_1 + 0xac) = iVar6;
            pXVar16 = pXVar10;
            if (pXVar10 == (X509 *)0x0) {
              pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
            }
            *(X509 **)(param_1 + 0xb8) = pXVar16;
            *(undefined4 *)(param_1 + 0xb0) = 0x1a;
            iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar7 == 0) goto LAB_00103d31;
            if (iVar6 < 2) goto LAB_00104162;
LAB_00103e39:
            if ((pXVar10[1].signature != (ASN1_BIT_STRING *)0xffffffffffffffff) &&
               ((long)&(pXVar10[1].signature)->length + (long)iVar5 < (long)local_5c)) {
              *(int *)(param_1 + 0xac) = iVar6;
              *(X509 **)(param_1 + 0xb8) = pXVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x19;
              iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar7 == 0) {
                uVar9 = 0;
                goto LAB_00103d38;
              }
            }
            uVar3 = *(uint *)&pXVar10[1].name;
LAB_00103e61:
            local_5c = local_5c + (uint)((uVar3 & 0x20) == 0);
            if ((uVar3 & 0x400) != 0) goto LAB_00104270;
            iVar7 = 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
    }
    iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if ((0 < *(int *)(*(long *)(param_1 + 0x20) + 0x2c)) && (0 < iVar4)) {
      if (iVar4 != 1) {
        lVar13 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
        iVar2 = 0;
        do {
          local_44 = -1;
          iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
          if (0 < iVar5) {
            iVar6 = X509_get_signature_info(lVar13,0,0,&local_44,0);
            if (iVar6 != 0) {
              iVar6 = 5;
              if (iVar5 < 6) {
                iVar6 = iVar5;
              }
              if (*(int *)(minbits_table + (long)(iVar6 + -1) * 4) <= local_44) goto LAB_001041f8;
            }
            *(int *)(param_1 + 0xac) = iVar2;
            if (lVar13 == 0) {
              lVar13 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2);
            }
            *(long *)(param_1 + 0xb8) = lVar13;
            *(undefined4 *)(param_1 + 0xb0) = 0x44;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) {
              uVar9 = 0;
              goto LAB_00103d38;
            }
          }
LAB_001041f8:
          do {
            iVar2 = iVar2 + 1;
            if (iVar4 == iVar2) goto LAB_001039ae;
            lVar13 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
            lVar15 = X509_get0_pubkey(lVar13);
            iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
            if (0 < iVar5) {
              if (lVar15 != 0) {
                iVar6 = EVP_PKEY_get_security_bits(lVar15);
                if (5 < iVar5) {
                  iVar5 = 5;
                }
                if (*(int *)(minbits_table + (long)(iVar5 + -1) * 4) <= iVar6) goto LAB_00104261;
              }
              *(int *)(param_1 + 0xac) = iVar2;
              lVar15 = lVar13;
              if (lVar13 == 0) {
                lVar15 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2);
              }
              *(long *)(param_1 + 0xb8) = lVar15;
              *(undefined4 *)(param_1 + 0xb0) = 0x43;
              iVar5 = (**(code **)(param_1 + 0x38))(0);
              if (iVar5 == 0) {
                uVar9 = 0;
                goto LAB_00103d38;
              }
            }
LAB_00104261:
          } while (iVar4 + -1 <= iVar2);
        } while( true );
      }
      OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
    }
LAB_001039ae:
    uVar9 = check_id();
    if (0 < (int)uVar9) {
      iVar4 = X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)(param_1 + 0x98));
      if (iVar4 == 0) {
LAB_00104a1b:
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = (**(code **)(param_1 + 0x50))(param_1);
        if (0 < (int)uVar9) {
          iVar4 = X509_chain_check_suiteb(param_1 + 0xac,0,*(undefined8 *)(param_1 + 0x98));
          if (iVar4 != 0) {
            uVar9 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac)
                                    );
            *(int *)(param_1 + 0xb0) = iVar4;
            *(undefined8 *)(param_1 + 0xb8) = uVar9;
            iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar4 == 0) {
              uVar9 = 0;
              goto LAB_00103d38;
            }
          }
          if (*(code **)(param_1 + 0x30) == (code *)0x0) {
            uVar9 = internal_verify(param_1);
          }
          else {
            uVar9 = (**(code **)(param_1 + 0x30))(param_1);
          }
          if (0 < (int)uVar9) {
            iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
            iVar4 = iVar4 + -1;
            if (-1 < iVar4) {
              do {
                while( true ) {
                  pXVar10 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4);
                  if ((iVar4 == 0) || (((ulong)pXVar10[1].name & 0x20) == 0)) break;
                  iVar4 = iVar4 + -1;
                }
                if (((ulong)pXVar10[1].name & 0x400) != 0) {
                  pXVar11 = X509_get_subject_name(pXVar10);
                  name = X509_get_issuer_name(pXVar10);
                  iVar5 = X509_NAME_entry_count(pXVar11);
                  iVar2 = iVar5 + -1;
                  if (0 < iVar2) {
                    iVar6 = X509_NAME_entry_count(pXVar11);
                    iVar7 = X509_NAME_entry_count(name);
                    if (iVar6 == iVar7 + 1) {
                      pXVar12 = X509_NAME_get_entry(pXVar11,iVar2);
                      iVar6 = X509_NAME_ENTRY_set(pXVar12);
                      pXVar12 = X509_NAME_get_entry(pXVar11,iVar5 + -2);
                      iVar5 = X509_NAME_ENTRY_set(pXVar12);
                      if (iVar6 != iVar5) {
                        pXVar11 = X509_NAME_dup(pXVar11);
                        if (pXVar11 == (X509_NAME *)0x0) {
                          ERR_new();
                          ERR_set_debug("crypto/x509/x509_vfy.c",0x343,"check_name_constraints");
                          ERR_set_error(0xb,0x8000d,0);
                          *(undefined4 *)(param_1 + 0xb0) = 0x11;
                          goto LAB_00104a1b;
                        }
                        pXVar12 = X509_NAME_delete_entry(pXVar11,iVar2);
                        o = X509_NAME_ENTRY_get_object(pXVar12);
                        iVar2 = OBJ_obj2nid(o);
                        if (iVar2 == 0xd) {
                          iVar2 = X509_NAME_cmp(pXVar11,name);
                          if (iVar2 == 0) {
                            X509_NAME_ENTRY_free(pXVar12);
                            X509_NAME_free(pXVar11);
                            goto LAB_00103b5b;
                          }
                          X509_NAME_ENTRY_free(pXVar12);
                          X509_NAME_free(pXVar11);
                        }
                        else {
                          X509_NAME_ENTRY_free(pXVar12);
                          X509_NAME_free(pXVar11);
                        }
                      }
                    }
                  }
                  *(int *)(param_1 + 0xac) = iVar4;
                  *(X509 **)(param_1 + 0xb8) = pXVar10;
                  *(undefined4 *)(param_1 + 0xb0) = 0x48;
                  iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
                  if (iVar2 == 0) goto LAB_00103d31;
                }
LAB_00103b5b:
                iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
                iVar2 = iVar2 + -1;
                if (iVar4 < iVar2) {
                  do {
                    lVar13 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2);
                    nc = *(NAME_CONSTRAINTS **)(lVar13 + 0x120);
                    if (nc != (NAME_CONSTRAINTS *)0x0) {
                      iVar5 = NAME_CONSTRAINTS_check(pXVar10,nc);
                      if (iVar4 == 0 && iVar5 == 0) {
                        uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x40);
                        if ((uVar3 & 0x20) != 0) goto LAB_00103c46;
                        if ((uVar3 & 1) == 0) {
                          a = (GENERAL_NAMES *)X509_get_ext_d2i(pXVar10,0x55,(int *)0x0,(int *)0x0);
                          iVar5 = 0;
                          if (a != (GENERAL_NAMES *)0x0) {
                            for (; iVar6 = OPENSSL_sk_num(a), iVar5 < iVar6; iVar5 = iVar5 + 1) {
                              piVar14 = (int *)OPENSSL_sk_value(a,iVar5);
                              if (*piVar14 == 2) {
                                GENERAL_NAMES_free(a);
                                goto LAB_00103c46;
                              }
                            }
                            GENERAL_NAMES_free(a);
                          }
                        }
                        iVar5 = NAME_CONSTRAINTS_check_CN(pXVar10,nc);
                      }
                      if (iVar5 != 0) {
                        if (iVar5 == 0x11) goto LAB_00104a1b;
                        *(int *)(param_1 + 0xac) = iVar4;
                        *(X509 **)(param_1 + 0xb8) = pXVar10;
                        *(int *)(param_1 + 0xb0) = iVar5;
                        iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                        if (iVar5 == 0) goto LAB_00103d31;
                      }
                    }
LAB_00103c46:
                    iVar2 = iVar2 + -1;
                  } while (iVar4 != iVar2);
                }
                bVar17 = iVar4 != 0;
                iVar4 = iVar4 + -1;
              } while (bVar17);
            }
            uVar9 = X509v3_asid_validate_path(param_1);
            if (((0 < (int)uVar9) && (uVar9 = X509v3_addr_validate_path(param_1), 0 < (int)uVar9))
               && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x80) != 0)) {
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)(param_1 + 0x70))(param_1);
                return uVar9;
              }
              goto LAB_00104abb;
            }
          }
        }
      }
    }
  }
LAB_00103d38:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
LAB_00104abb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 x509_verify_x509(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 8) == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0x14b,"x509_verify_x509");
    ERR_set_error(0xb,0x69,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0x155,"x509_verify_x509");
    ERR_set_error(0xb,0xc0101,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  iVar1 = ossl_x509_add_cert_new(param_1 + 0x98,*(long *)(param_1 + 8),1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x94) = 1;
  lVar3 = X509_get0_pubkey(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
  if (0 < iVar1) {
    if (lVar3 != 0) {
      iVar2 = EVP_PKEY_get_security_bits(lVar3);
      if (5 < iVar1) {
        iVar1 = 5;
      }
      if (*(int *)(minbits_table + (long)(iVar1 + -1) * 4) <= iVar2) goto LAB_00104b52;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar3;
    *(undefined4 *)(param_1 + 0xb0) = 0x42;
    uVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
LAB_00104b52:
  if ((*(long *)(param_1 + 0xf0) == 0) ||
     (iVar1 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 8)), iVar1 < 1)) {
LAB_00104b6b:
    uVar4 = verify_chain(param_1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0xf0);
    lVar6 = *(long *)(param_1 + 8);
    X509_free(*(X509 **)(lVar3 + 0x20));
    *(undefined8 *)(lVar3 + 0x2c) = 0xffffffffffffffff;
    *(undefined1 (*) [16])(lVar3 + 0x18) = (undefined1  [16])0x0;
    iVar1 = dane_match_cert_isra_0
                      (*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xf0),
                       *(undefined8 *)(param_1 + 8),0);
    if (iVar1 == 0) {
      if (((*(byte *)(lVar3 + 0x28) & 5) != 0) || (-1 < *(int *)(lVar3 + 0x2c))) goto LAB_00104b6b;
      iVar1 = X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)(param_1 + 0x98));
      if (iVar1 == 0) goto LAB_00104ee4;
      iVar1 = X509_chain_check_suiteb(0,lVar6,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (iVar1 != 0) {
        if (lVar6 == 0) {
          uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
          *(int *)(param_1 + 0xb0) = iVar1;
          *(undefined8 *)(param_1 + 0xb8) = uVar4;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            goto LAB_00104e8f;
          }
        }
        else {
          *(long *)(param_1 + 0xb8) = lVar6;
          *(int *)(param_1 + 0xb0) = iVar1;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            goto LAB_00104c2b;
          }
        }
LAB_00104ce8:
        uVar4 = 0;
        goto LAB_00104cf0;
      }
      if (lVar6 == 0) {
LAB_00104e8f:
        lVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
LAB_00104c2b:
      *(long *)(param_1 + 0xb8) = lVar6;
      *(undefined4 *)(param_1 + 0xb0) = 0x41;
      uVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
    }
    else {
      iVar2 = X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)(param_1 + 0x98));
      uVar4 = _LC4;
      if (iVar2 == 0) {
LAB_00104ee4:
        uVar4 = 0xffffffff;
        goto LAB_00104cf0;
      }
      if (iVar1 < 1) {
        *(long *)(param_1 + 0xb8) = lVar6;
        *(undefined8 *)(param_1 + 0xac) = uVar4;
        return 0xffffffff;
      }
      iVar1 = X509_chain_check_suiteb(0,lVar6,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0xac) = 0;
        lVar5 = lVar6;
        if (lVar6 == 0) {
          lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
        }
        *(long *)(param_1 + 0xb8) = lVar5;
        *(int *)(param_1 + 0xb0) = iVar1;
        iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar1 == 0) {
          uVar4 = 0;
          goto LAB_00104cf0;
        }
      }
      if (((*(byte *)(lVar3 + 0x38) & 1) == 0) && (iVar1 = check_id(param_1), iVar1 == 0))
      goto LAB_00104ce8;
      *(long *)(param_1 + 0xb8) = lVar6;
      *(undefined4 *)(param_1 + 0xac) = 0;
      uVar4 = (**(code **)(param_1 + 0x38))(1,param_1);
    }
  }
  if (0 < (int)uVar4) {
    return uVar4;
  }
LAB_00104cf0:
  if (*(int *)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return uVar4;
  }
  return uVar4;
}



undefined8 X509_STORE_CTX_verify(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0x113,"X509_STORE_CTX_verify");
    ERR_set_error(0xb,0xc0102,0);
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
      if (0 < iVar1) {
        uVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),0);
        *(undefined8 *)(param_1 + 8) = uVar2;
      }
    }
    uVar2 = x509_verify_x509(param_1);
    return uVar2;
  }
  uVar2 = x509_verify_rpk();
  return uVar2;
}



int X509_verify_cert(X509_STORE_CTX *ctx)

{
  int iVar1;
  
  if (ctx == (X509_STORE_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0x120,"X509_verify_cert");
    ERR_set_error(0xb,0xc0102,0);
    return -1;
  }
  if (*(long *)&ctx[1].current_method != 0) {
    iVar1 = x509_verify_rpk();
    return iVar1;
  }
  iVar1 = x509_verify_x509();
  return iVar1;
}



X509_CRL * X509_CRL_diff(X509_CRL *param_1,X509_CRL *param_2,EVP_PKEY *param_3,EVP_MD *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  X509_NAME *pXVar5;
  X509_NAME *a;
  X509_CRL *x;
  undefined8 uVar6;
  X509_EXTENSION *ex;
  ASN1_INTEGER *serial;
  long in_FS_OFFSET;
  X509_REVOKED *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1._0_4_ = param_1[1].idp_flags;
  lVar1._4_4_ = param_1[1].idp_reasons;
  if ((lVar1 == 0) &&
     (lVar2._0_4_ = param_2[1].idp_flags, lVar2._4_4_ = param_2[1].idp_reasons, lVar2 == 0)) {
    if ((param_1[1].idp == (ISSUING_DIST_POINT *)0x0) ||
       (param_2[1].idp == (ISSUING_DIST_POINT *)0x0)) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509_vfy.c",0x88c,"X509_CRL_diff");
      ERR_set_error(0xb,0x82,0);
    }
    else {
      pXVar5 = (X509_NAME *)X509_CRL_get_issuer(param_2);
      a = (X509_NAME *)X509_CRL_get_issuer(param_1);
      iVar3 = X509_NAME_cmp(a,pXVar5);
      if (iVar3 == 0) {
        iVar3 = crl_extension_match(param_1,param_2,0x5a);
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("crypto/x509/x509_vfy.c",0x897,"X509_CRL_diff");
          ERR_set_error(0xb,0x6e,0);
        }
        else {
          iVar3 = crl_extension_match(param_1,param_2,0x302);
          if (iVar3 == 0) {
            ERR_new();
            ERR_set_debug("crypto/x509/x509_vfy.c",0x89b,"X509_CRL_diff");
            ERR_set_error(0xb,0x80,0);
          }
          else {
            iVar3 = ASN1_INTEGER_cmp((ASN1_INTEGER *)param_2[1].idp,(ASN1_INTEGER *)param_1[1].idp);
            if (iVar3 < 1) {
              ERR_new();
              ERR_set_debug("crypto/x509/x509_vfy.c",0x8a0,"X509_CRL_diff");
              ERR_set_error(0xb,0x84,0);
            }
            else if (param_3 == (EVP_PKEY *)0x0) {
LAB_00105106:
              x = (X509_CRL *)X509_CRL_new_ex(param_1[1].meth_data,param_1[2].crl);
              if (x == (X509_CRL *)0x0) {
LAB_00105358:
                ERR_new();
                uVar6 = 0x8ac;
              }
              else {
                iVar3 = X509_CRL_set_version(x,1);
                if (iVar3 == 0) goto LAB_00105358;
                pXVar5 = (X509_NAME *)X509_CRL_get_issuer(param_2);
                iVar3 = X509_CRL_set_issuer_name(x,pXVar5);
                if (iVar3 == 0) {
                  ERR_new();
                  uVar6 = 0x8b1;
                }
                else {
                  uVar6 = X509_CRL_get0_lastUpdate(param_2);
                  iVar3 = X509_CRL_set1_lastUpdate(x,uVar6);
                  if (iVar3 == 0) {
                    ERR_new();
                    uVar6 = 0x8b6;
                  }
                  else {
                    uVar6 = X509_CRL_get0_nextUpdate(param_2);
                    iVar3 = X509_CRL_set1_nextUpdate(x,uVar6);
                    if (iVar3 == 0) {
                      ERR_new();
                      uVar6 = 0x8ba;
                    }
                    else {
                      iVar4 = 0;
                      iVar3 = X509_CRL_add1_ext_i2d(x,0x8c,param_1[1].idp,1,0);
                      if (iVar3 < 1) {
                        ERR_new();
                        uVar6 = 0x8c0;
                      }
                      else {
                        while( true ) {
                          iVar3 = X509_CRL_get_ext_count(param_2);
                          if (iVar3 <= iVar4) break;
                          ex = X509_CRL_get_ext(param_2,iVar4);
                          iVar3 = X509_CRL_add_ext(x,ex,-1);
                          if (iVar3 == 0) {
                            ERR_new();
                            uVar6 = 0x8cc;
                            goto LAB_00105369;
                          }
                          iVar4 = iVar4 + 1;
                        }
                        uVar6 = X509_CRL_get_REVOKED(param_2);
                        iVar3 = 0;
                        while( true ) {
                          iVar4 = OPENSSL_sk_num(uVar6);
                          if (iVar4 <= iVar3) break;
                          serial = (ASN1_INTEGER *)OPENSSL_sk_value(uVar6,iVar3);
                          iVar4 = X509_CRL_get0_by_serial(param_1,&local_48,serial);
                          if (iVar4 == 0) {
                            local_48 = (X509_REVOKED *)X509_REVOKED_dup(serial);
                            if (local_48 == (X509_REVOKED *)0x0) {
                              ERR_new();
                              ERR_set_debug("crypto/x509/x509_vfy.c",0x8e0,"X509_CRL_diff");
                              ERR_set_error(0xb,0x8000d,0);
                              goto LAB_00105388;
                            }
                            iVar4 = X509_CRL_add0_revoked(x,local_48);
                            if (iVar4 == 0) {
                              X509_REVOKED_free(local_48);
                              ERR_new();
                              uVar6 = 0x8e5;
                              goto LAB_00105369;
                            }
                          }
                          iVar3 = iVar3 + 1;
                        }
                        if ((param_3 == (EVP_PKEY *)0x0) || (param_4 == (EVP_MD *)0x0))
                        goto LAB_001052bb;
                        iVar3 = X509_CRL_sign(x,param_3,param_4);
                        if (iVar3 != 0) goto LAB_001052bb;
                        ERR_new();
                        uVar6 = 0x8ec;
                      }
                    }
                  }
                }
              }
LAB_00105369:
              ERR_set_debug("crypto/x509/x509_vfy.c",uVar6,"X509_CRL_diff");
              ERR_set_error(0xb,0x8000b,0);
LAB_00105388:
              X509_CRL_free(x);
            }
            else {
              iVar3 = X509_CRL_verify(param_1,param_3);
              if (0 < iVar3) {
                iVar3 = X509_CRL_verify(param_2,param_3);
                if (0 < iVar3) goto LAB_00105106;
              }
              ERR_new();
              ERR_set_debug("crypto/x509/x509_vfy.c",0x8a6,"X509_CRL_diff");
              ERR_set_error(0xb,0x83,0);
            }
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/x509/x509_vfy.c",0x892,"X509_CRL_diff");
        ERR_set_error(0xb,0x81,0);
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0x887,"X509_CRL_diff");
    ERR_set_error(0xb,0x7f,0);
  }
  x = (X509_CRL *)0x0;
LAB_001052bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return x;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_STORE_CTX_set_ex_data(X509_STORE_CTX *ctx,int idx,void *data)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)&ctx->parent,idx,data);
  return iVar1;
}



void * X509_STORE_CTX_get_ex_data(X509_STORE_CTX *ctx,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)&ctx->parent,idx);
  return pvVar1;
}



int X509_STORE_CTX_get_error(X509_STORE_CTX *ctx)

{
  return ctx->explicit_policy;
}



void X509_STORE_CTX_set_error(X509_STORE_CTX *ctx,int s)

{
  ctx->explicit_policy = s;
  return;
}



int X509_STORE_CTX_get_error_depth(X509_STORE_CTX *ctx)

{
  return *(int *)((long)&ctx->tree + 4);
}



void X509_STORE_CTX_set_error_depth(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}



X509 * X509_STORE_CTX_get_current_cert(X509_STORE_CTX *ctx)

{
  return *(X509 **)&ctx->error;
}



void X509_STORE_CTX_set_current_cert(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  return;
}



undefined8 X509_STORE_CTX_get0_chain(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



stack_st_X509 * X509_STORE_CTX_get1_chain(X509_STORE_CTX *ctx)

{
  long lVar1;
  stack_st_X509 *psVar2;
  
  lVar1._0_4_ = ctx->valid;
  lVar1._4_4_ = ctx->last_untrusted;
  if (lVar1 != 0) {
    psVar2 = (stack_st_X509 *)X509_chain_up_ref();
    return psVar2;
  }
  return (stack_st_X509 *)0x0;
}



X509 * X509_STORE_CTX_get0_current_issuer(X509_STORE_CTX *ctx)

{
  return ctx->current_cert;
}



X509_CRL * X509_STORE_CTX_get0_current_crl(X509_STORE_CTX *ctx)

{
  return (X509_CRL *)ctx->current_issuer;
}



X509_STORE_CTX * X509_STORE_CTX_get0_parent_ctx(X509_STORE_CTX *ctx)

{
  return *(X509_STORE_CTX **)&ctx->current_crl_score;
}



void X509_STORE_CTX_set_cert(X509_STORE_CTX *c,X509 *x)

{
  *(X509 **)&c->current_method = x;
  return;
}



void X509_STORE_CTX_set0_rpk(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  return;
}



void X509_STORE_CTX_set0_crls(X509_STORE_CTX *c,stack_st_X509_CRL *sk)

{
  c->untrusted = (stack_st_X509 *)sk;
  return;
}



int X509_STORE_CTX_purpose_inherit(X509_STORE_CTX *ctx,int def_purpose,int purpose,int trust)

{
  stack_st_X509_CRL *psVar1;
  int iVar2;
  X509_PURPOSE *pXVar3;
  undefined8 uVar4;
  
  if (purpose == 0) {
    iVar2 = def_purpose;
    if (def_purpose == 0) {
      if (trust == 0) {
        return 1;
      }
      goto LAB_001056dc;
    }
  }
  else {
    iVar2 = purpose;
    if (def_purpose == 0) {
      def_purpose = purpose;
    }
  }
  purpose = iVar2;
  iVar2 = X509_PURPOSE_get_by_id(purpose);
  if (iVar2 != -1) {
    pXVar3 = X509_PURPOSE_get0(iVar2);
    if (pXVar3->trust == 0) {
      iVar2 = X509_PURPOSE_get_by_id(def_purpose);
      if (iVar2 == -1) {
        ERR_new();
        uVar4 = 0x981;
        goto LAB_00105789;
      }
      pXVar3 = X509_PURPOSE_get0(iVar2);
    }
    if ((trust == 0) && (trust = pXVar3->trust, trust == 0)) {
      if (ctx->crls[1].stack.num != 0) {
        return 1;
      }
      ctx->crls[1].stack.num = purpose;
      return 1;
    }
LAB_001056dc:
    iVar2 = X509_TRUST_get_by_id(trust);
    if (iVar2 != -1) {
      psVar1 = ctx->crls;
      iVar2 = *(int *)&psVar1[1].stack.field_0x4;
      if ((psVar1[1].stack.num == 0) && (purpose != 0)) {
        psVar1[1].stack.num = purpose;
      }
      if (iVar2 == 0) {
        *(int *)&psVar1[1].stack.field_0x4 = trust;
      }
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0x98d,"X509_STORE_CTX_purpose_inherit");
    ERR_set_error(0xb,0x78,0);
    return 0;
  }
  ERR_new();
  uVar4 = 0x97a;
LAB_00105789:
  ERR_set_debug("crypto/x509/x509_vfy.c",uVar4,"X509_STORE_CTX_purpose_inherit");
  ERR_set_error(0xb,0x79,0);
  return 0;
}



int X509_STORE_CTX_set_purpose(X509_STORE_CTX *ctx,int purpose)

{
  int iVar1;
  
  iVar1 = X509_STORE_CTX_purpose_inherit(ctx,0,purpose,0);
  return iVar1;
}



int X509_STORE_CTX_set_trust(X509_STORE_CTX *ctx,int trust)

{
  int iVar1;
  
  iVar1 = X509_STORE_CTX_purpose_inherit(ctx,0,0,trust);
  return iVar1;
}



void * X509_STORE_CTX_new_ex(undefined8 param_1,char *param_2)

{
  void *ptr;
  char *pcVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x118,"crypto/x509/x509_vfy.c",0x99b);
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x108) = param_1;
    if (param_2 == (char *)0x0) {
      return ptr;
    }
    pcVar1 = CRYPTO_strdup(param_2,"crypto/x509/x509_vfy.c",0x9a2);
    *(char **)((long)ptr + 0x110) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_STORE_CTX * X509_STORE_CTX_new(void)

{
  X509_STORE_CTX *pXVar1;
  
  pXVar1 = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(0,0);
  return pXVar1;
}



void X509_STORE_CTX_set0_trusted_stack(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x40) = get1_best_issuer_other_sk;
  *(code **)(param_1 + 0x78) = lookup_certs_sk;
  return;
}



void X509_STORE_CTX_cleanup(X509_STORE_CTX *ctx)

{
  undefined8 uVar1;
  long lVar2;
  X509_NAME *in_RSI;
  
  if (ctx->lookup_crls != (_func_1865 *)0x0) {
    (*ctx->lookup_crls)(ctx,in_RSI);
    ctx->lookup_crls = (_func_1865 *)0x0;
  }
  if ((X509_VERIFY_PARAM *)ctx->crls != (X509_VERIFY_PARAM *)0x0) {
    lVar2._0_4_ = ctx->current_crl_score;
    lVar2._4_4_ = ctx->current_reasons;
    if (lVar2 == 0) {
      X509_VERIFY_PARAM_free((X509_VERIFY_PARAM *)ctx->crls);
    }
    ctx->crls = (stack_st_X509_CRL *)0x0;
  }
  X509_policy_tree_free((X509_POLICY_TREE *)ctx->chain);
  uVar1._0_4_ = ctx->valid;
  uVar1._4_4_ = ctx->last_untrusted;
  ctx->chain = (stack_st_X509 *)0x0;
  OSSL_STACK_OF_X509_free(uVar1);
  ctx->valid = 0;
  ctx->last_untrusted = 0;
  CRYPTO_free_ex_data(5,ctx,(CRYPTO_EX_DATA *)&ctx->parent);
  ctx->parent = (X509_STORE_CTX *)0x0;
  (ctx->ex_data).sk = (stack_st_void *)0x0;
  return;
}



void X509_STORE_CTX_free(X509_STORE_CTX *ctx)

{
  if (ctx != (X509_STORE_CTX *)0x0) {
    X509_STORE_CTX_cleanup(ctx);
    CRYPTO_free(ctx[1].untrusted);
    CRYPTO_free(ctx);
    return;
  }
  return;
}



void X509_STORE_CTX_set_depth(X509_STORE_CTX *ctx,int depth)

{
  X509_VERIFY_PARAM_set_depth((X509_VERIFY_PARAM *)ctx->crls,depth);
  return;
}



void X509_STORE_CTX_set_flags(X509_STORE_CTX *ctx,ulong flags)

{
  X509_VERIFY_PARAM_set_flags((X509_VERIFY_PARAM *)ctx->crls,flags);
  return;
}



void X509_STORE_CTX_set_time(X509_STORE_CTX *ctx,ulong flags,time_t t)

{
  X509_VERIFY_PARAM_set_time((X509_VERIFY_PARAM *)ctx->crls,t);
  return;
}



void X509_STORE_CTX_set_current_reasons(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  return;
}



undefined8 X509_STORE_CTX_get0_cert(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 X509_STORE_CTX_get0_rpk(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



undefined8 X509_STORE_CTX_get0_untrusted(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void X509_STORE_CTX_set0_untrusted(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



void X509_STORE_CTX_set0_verified_chain(long param_1,undefined8 param_2)

{
  OSSL_STACK_OF_X509_free(*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}



void X509_STORE_CTX_set_verify_cb(X509_STORE_CTX *ctx,verify_cb *verify_cb)

{
  ctx->verify = (_func_1855 *)verify_cb;
  return;
}



undefined8 X509_STORE_CTX_get_verify_cb(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



void X509_STORE_CTX_set_verify(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



undefined8 X509_STORE_CTX_get_verify(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 X509_STORE_CTX_get_get_issuer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined8 X509_STORE_CTX_get_check_issued(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



undefined8 X509_STORE_CTX_get_check_revocation(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



undefined8 X509_STORE_CTX_get_get_crl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



void X509_STORE_CTX_set_get_crl(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



undefined8 X509_STORE_CTX_get_check_crl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



undefined8 X509_STORE_CTX_get_cert_crl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



undefined8 X509_STORE_CTX_get_check_policy(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



undefined8 X509_STORE_CTX_get_lookup_certs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



undefined8 X509_STORE_CTX_get_lookup_crls(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



undefined8 X509_STORE_CTX_get_cleanup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



X509_POLICY_TREE * X509_STORE_CTX_get0_policy_tree(X509_STORE_CTX *ctx)

{
  return (X509_POLICY_TREE *)ctx->chain;
}



int X509_STORE_CTX_get_explicit_policy(X509_STORE_CTX *ctx)

{
  return *(int *)&ctx->tree;
}



undefined4 X509_STORE_CTX_get_num_untrusted(long param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}



int X509_STORE_CTX_set_default(X509_STORE_CTX *ctx,char *name)

{
  int iVar1;
  X509_VERIFY_PARAM *from;
  
  from = X509_VERIFY_PARAM_lookup(name);
  if (from != (X509_VERIFY_PARAM *)0x0) {
    iVar1 = X509_VERIFY_PARAM_inherit((X509_VERIFY_PARAM *)ctx->crls,from);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_vfy.c",0xb0d,"X509_STORE_CTX_set_default");
  ERR_set_error(0xb,0x79,"name=%s",name);
  return 0;
}



int X509_STORE_CTX_init(X509_STORE_CTX *ctx,X509_STORE *store,X509 *x509,stack_st_X509 *chain)

{
  _func_1848 *p_Var1;
  stack_st_X509_CRL *psVar2;
  undefined *puVar3;
  int iVar4;
  code *pcVar5;
  X509_VERIFY_PARAM *pXVar6;
  _func_1864 *p_Var7;
  X509_PURPOSE *xp;
  
  if (ctx == (X509_STORE_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0x9ca,"X509_STORE_CTX_init");
    ERR_set_error(0xb,0xc0102,0);
    return 0;
  }
  X509_STORE_CTX_cleanup(ctx);
  ctx->cert = (X509 *)chain;
  ctx->valid = 0;
  ctx->last_untrusted = 0;
  ctx->chain = (stack_st_X509 *)0x0;
  ctx->error = 0;
  *(undefined4 *)&ctx->field_0xbc = 0;
  ctx->current_cert = (X509 *)0x0;
  ctx->ctx = store;
  *(X509 **)&ctx->current_method = x509;
  ctx->untrusted = (stack_st_X509 *)0x0;
  ctx->param = (X509_VERIFY_PARAM *)0x0;
  ctx->cleanup = (_func_1866 *)0x0;
  ctx->explicit_policy = 0;
  ctx->tree = (X509_POLICY_TREE *)0x0;
  ctx->current_issuer = (X509 *)0x0;
  ctx->current_crl = (X509_CRL *)0x0;
  ctx->current_crl_score = 0;
  ctx->current_reasons = 0;
  *(undefined8 *)&(ctx->ex_data).dummy = 0;
  *(undefined4 *)&ctx[1].ctx = 0;
  *(undefined8 *)&ctx[1].current_method = 0;
  ctx->parent = (X509_STORE_CTX *)0x0;
  (ctx->ex_data).sk = (stack_st_void *)0x0;
  if (store == (X509_STORE *)0x0) {
    ctx->lookup_crls = (_func_1865 *)0x0;
    ctx->check_revocation = (_func_1859 *)0x0;
    ctx->check_issued = check_revocation;
    ctx->get_crl = check_crl;
    ctx->check_crl = cert_crl;
    ctx->cert_crl = check_policy;
    ctx->other_ctx = internal_verify;
    ctx->verify = null_callback;
    puVar3 = _GLOBAL_OFFSET_TABLE_;
    ctx->check_policy = X509_STORE_CTX_get1_certs;
    ctx->lookup_certs = (_func_1864 *)&X509_STORE_CTX_get1_crls;
    ctx->verify_cb = (_func_1856 *)puVar3;
    ctx->get_issuer = check_issued;
    pXVar6 = X509_VERIFY_PARAM_new();
    ctx->crls = (stack_st_X509_CRL *)pXVar6;
    if (pXVar6 == (X509_VERIFY_PARAM *)0x0) goto LAB_00105ff0;
    *(uint *)&pXVar6->inh_flags = (uint)pXVar6->inh_flags | 0x11;
  }
  else {
    ctx->lookup_crls = (_func_1865 *)(store->ex_data).sk;
    pcVar5 = store->check_issued;
    if (pcVar5 == (_func_1846 *)0x0) {
      pcVar5 = check_issued;
    }
    ctx->get_issuer = pcVar5;
    pcVar5 = store->get_issuer;
    if (pcVar5 == (_func_1845 *)0x0) {
      pcVar5 = X509_STORE_CTX_get1_issuer;
    }
    ctx->verify_cb = pcVar5;
    pcVar5 = store->verify_cb;
    if (pcVar5 == (_func_1844 *)0x0) {
      pcVar5 = null_callback;
    }
    ctx->verify = pcVar5;
    pcVar5 = store->verify;
    if (pcVar5 == (_func_1843 *)0x0) {
      pcVar5 = internal_verify;
    }
    ctx->other_ctx = pcVar5;
    pcVar5 = store->check_revocation;
    if (pcVar5 == (_func_1858 *)0x0) {
      pcVar5 = check_revocation;
    }
    p_Var1 = store->get_crl;
    ctx->check_issued = pcVar5;
    ctx->check_revocation = (_func_1859 *)p_Var1;
    pcVar5 = store->check_crl;
    if (pcVar5 == (_func_1860 *)0x0) {
      pcVar5 = check_crl;
    }
    ctx->get_crl = pcVar5;
    pcVar5 = store->cert_crl;
    if (pcVar5 == (_func_1850 *)0x0) {
      pcVar5 = cert_crl;
    }
    ctx->check_crl = pcVar5;
    pcVar5 = store->lookup_certs;
    if (pcVar5 == (_func_1862 *)0x0) {
      pcVar5 = check_policy;
    }
    ctx->cert_crl = pcVar5;
    if (store->lookup_crls == (_func_1852 *)0x0) {
      ctx->check_policy = X509_STORE_CTX_get1_certs;
      p_Var7 = (_func_1864 *)store->cleanup;
    }
    else {
      ctx->check_policy = (_func_1863 *)store->lookup_crls;
      p_Var7 = (_func_1864 *)store->cleanup;
    }
    if (p_Var7 == (_func_1864 *)0x0) {
      p_Var7 = (_func_1864 *)&X509_STORE_CTX_get1_crls;
    }
    ctx->lookup_certs = p_Var7;
    pXVar6 = X509_VERIFY_PARAM_new();
    ctx->crls = (stack_st_X509_CRL *)pXVar6;
    if (pXVar6 == (X509_VERIFY_PARAM *)0x0) {
LAB_00105ff0:
      ERR_new();
      ERR_set_debug("crypto/x509/x509_vfy.c",0xa26,"X509_STORE_CTX_init");
      ERR_set_error(0xb,0x8000d,0);
      goto LAB_00105e84;
    }
    iVar4 = X509_VERIFY_PARAM_inherit(pXVar6,store->param);
    if (iVar4 == 0) goto LAB_00105e84;
  }
  iVar4 = X509_STORE_CTX_set_default(ctx,"default");
  if (iVar4 != 0) {
    if (*(int *)&ctx->crls[1].stack.field_0x4 == 0) {
      iVar4 = X509_PURPOSE_get_by_id(ctx->crls[1].stack.num);
      xp = X509_PURPOSE_get0(iVar4);
      if (xp != (X509_PURPOSE *)0x0) {
        psVar2 = ctx->crls;
        iVar4 = X509_PURPOSE_get_trust(xp);
        *(int *)&psVar2[1].stack.field_0x4 = iVar4;
      }
    }
    iVar4 = CRYPTO_new_ex_data(5,ctx,(CRYPTO_EX_DATA *)&ctx->parent);
    if (iVar4 != 0) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0xa42,"X509_STORE_CTX_init");
    ERR_set_error(0xb,0x8000f,0);
  }
LAB_00105e84:
  X509_STORE_CTX_cleanup(ctx);
  return 0;
}



int X509_STORE_CTX_init_rpk(X509_STORE_CTX *param_1,X509_STORE *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = X509_STORE_CTX_init(param_1,param_2,(X509 *)0x0,(stack_st_X509 *)0x0);
  if (iVar1 != 0) {
    *(undefined8 *)&param_1[1].current_method = param_3;
    iVar1 = 1;
  }
  return iVar1;
}



X509_VERIFY_PARAM * X509_STORE_CTX_get0_param(X509_STORE_CTX *ctx)

{
  return (X509_VERIFY_PARAM *)ctx->crls;
}



void X509_STORE_CTX_set0_param(X509_STORE_CTX *ctx,X509_VERIFY_PARAM *param)

{
  X509_VERIFY_PARAM_free((X509_VERIFY_PARAM *)ctx->crls);
  ctx->crls = (stack_st_X509_CRL *)param;
  return;
}



uint check_crl_path(undefined8 *param_1,X509 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  X509 *a;
  X509 *b;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_138 [280];
  long local_20;
  
  uVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = param_1[0x1b];
  puVar6 = (undefined8 *)auStack_138;
  for (lVar5 = 0x23; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (lVar2 == 0) {
    iVar3 = X509_STORE_CTX_init((X509_STORE_CTX *)auStack_138,(X509_STORE *)*param_1,param_2,
                                (stack_st_X509 *)param_1[2]);
    if (iVar3 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      auStack_138._24_8_ = param_1[3];
      X509_STORE_CTX_set0_param((X509_STORE_CTX *)auStack_138,(X509_VERIFY_PARAM *)param_1[4]);
      auStack_138._56_8_ = param_1[7];
      auStack_138._216_8_ = param_1;
      uVar4 = X509_verify_cert((X509_STORE_CTX *)auStack_138);
      if (0 < (int)uVar4) {
        uVar1 = param_1[0x13];
        iVar3 = OPENSSL_sk_num(uVar1);
        a = (X509 *)OPENSSL_sk_value(uVar1,iVar3 + -1);
        iVar3 = OPENSSL_sk_num(auStack_138._152_8_);
        b = (X509 *)OPENSSL_sk_value(auStack_138._152_8_,iVar3 + -1);
        iVar3 = X509_cmp(a,b);
        uVar4 = (uint)(iVar3 == 0);
      }
      X509_STORE_CTX_cleanup((X509_STORE_CTX *)auStack_138);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool check_crl(long param_1,X509_CRL *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  EVP_PKEY *r;
  long lVar5;
  
  iVar3 = *(int *)(param_1 + 0xac);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  lVar5 = *(long *)(param_1 + 0xc0);
  if (lVar5 == 0) {
    if (iVar3 < iVar2 + -1) {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3 + 1);
      if (lVar5 == 0) {
        return true;
      }
    }
    else {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
      if (lVar5 == 0) {
        return false;
      }
      iVar3 = (**(code **)(param_1 + 0x48))(param_1,lVar5,lVar5);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x21;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return false;
        }
      }
    }
  }
  lVar1._0_4_ = param_2[1].idp_flags;
  lVar1._4_4_ = param_2[1].idp_reasons;
  if (lVar1 == 0) {
    if ((*(ulong *)(lVar5 + 0xe8) & 0x200000002) == 2) {
      *(undefined4 *)(param_1 + 0xb0) = 0x23;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xd0);
    if ((uVar4 & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x2c;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
      uVar4 = *(uint *)(param_1 + 0xd0);
    }
    if (((uVar4 & 8) == 0) &&
       (iVar3 = check_crl_path(param_1,*(undefined8 *)(param_1 + 0xc0)), iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x36;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
    }
    if (((ulong)param_2[1].akid & 2) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
    }
  }
  if (((*(byte *)(param_1 + 0xd0) & 0x40) == 0) &&
     (iVar3 = check_crl_time(param_1,param_2,1), iVar3 == 0)) {
    return false;
  }
  r = (EVP_PKEY *)X509_get0_pubkey(lVar5);
  if (r == (EVP_PKEY *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 6;
  }
  else {
    iVar3 = X509_CRL_check_suiteb(param_2,r,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return false;
      }
    }
    iVar3 = X509_CRL_verify(param_2,r);
    if (0 < iVar3) {
      return true;
    }
    *(undefined4 *)(param_1 + 0xb0) = 8;
  }
  iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  return iVar3 != 0;
}



void X509_STORE_CTX_set0_dane(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  return;
}



undefined8
X509_build_chain(X509 *param_1,stack_st_X509 *param_2,X509_STORE *param_3,int param_4,
                undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  X509_STORE_CTX *ctx;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (param_1 == (X509 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vfy.c",0xe36,"X509_build_chain");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(param_5);
    if (ctx != (X509_STORE_CTX *)0x0) {
      if (param_3 == (X509_STORE *)0x0) {
        iVar2 = X509_STORE_CTX_init(ctx,(X509_STORE *)0x0,param_1,(stack_st_X509 *)0x0);
        if (iVar2 != 0) {
          X509_STORE_CTX_set0_trusted_stack(ctx,param_2);
          iVar2 = ossl_x509_add_cert_new(&ctx->valid,param_1,1);
          if (iVar2 == 0) goto LAB_001065b0;
          *(undefined4 *)((long)&ctx->cleanup + 4) = 1;
          build_chain(ctx);
LAB_001064f4:
          uVar3._0_4_ = ctx->valid;
          uVar3._4_4_ = ctx->last_untrusted;
          iVar2 = OPENSSL_sk_num(uVar3);
          if ((param_4 != 0) || (uVar3 = 9, iVar2 < 2)) {
            uVar3 = 1;
          }
          uVar1._0_4_ = ctx->valid;
          uVar1._4_4_ = ctx->last_untrusted;
          iVar2 = ossl_x509_add_certs_new(&local_38,uVar1,uVar3);
          if (iVar2 == 0) {
            OPENSSL_sk_free(local_38);
            local_38 = 0;
          }
        }
      }
      else {
        iVar2 = X509_STORE_CTX_init(ctx,param_3,param_1,param_2);
        if (iVar2 != 0) {
          iVar2 = ossl_x509_add_cert_new(&ctx->valid,param_1,1);
          if (iVar2 == 0) {
LAB_001065b0:
            ctx->explicit_policy = 0x11;
          }
          else {
            *(undefined4 *)((long)&ctx->cleanup + 4) = 1;
            iVar2 = build_chain(ctx);
            if (iVar2 != 0) goto LAB_001064f4;
          }
        }
      }
      X509_STORE_CTX_free(ctx);
      uVar3 = local_38;
      goto LAB_0010654c;
    }
  }
  uVar3 = 0;
LAB_0010654c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


