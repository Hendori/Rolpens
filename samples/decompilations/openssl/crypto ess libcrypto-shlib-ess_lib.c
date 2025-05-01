
undefined8 * ESS_CERT_ID_new_init(X509 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  EVP_MD *type;
  GENERAL_NAME *a;
  X509_NAME *pXVar3;
  ASN1_INTEGER *pAVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  uchar auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)ESS_CERT_ID_new();
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    uVar7 = 0x4b;
LAB_001001a9:
    ERR_set_debug("crypto/ess/ess_lib.c",uVar7,"ESS_CERT_ID_new_init");
    ERR_set_error(0x36,0x80036,0);
LAB_00100150:
    a = (GENERAL_NAME *)0x0;
  }
  else {
    type = EVP_sha1();
    iVar1 = X509_digest(param_1,type,auStack_48,(uint *)0x0);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ess/ess_lib.c",0x4f,"ESS_CERT_ID_new_init");
      ERR_set_error(0x36,0x8000b,0);
      goto LAB_00100150;
    }
    iVar1 = ASN1_OCTET_STRING_set((ASN1_OCTET_STRING *)*puVar2,auStack_48,0x14);
    if (iVar1 == 0) {
      ERR_new();
      uVar7 = 0x53;
LAB_001001e1:
      ERR_set_debug("crypto/ess/ess_lib.c",uVar7,"ESS_CERT_ID_new_init");
      ERR_set_error(0x36,0x8000d,0);
      goto LAB_00100150;
    }
    puVar6 = puVar2;
    if (param_2 == 0) goto LAB_001000f7;
    if (puVar2[1] == 0) {
      lVar5 = ESS_ISSUER_SERIAL_new();
      puVar2[1] = lVar5;
      if (lVar5 == 0) {
        ERR_new();
        uVar7 = 0x5d;
        goto LAB_001001a9;
      }
    }
    a = GENERAL_NAME_new();
    if (a == (GENERAL_NAME *)0x0) {
      ERR_new();
      uVar7 = 0x61;
      goto LAB_001001e1;
    }
    a->type = 4;
    pXVar3 = X509_get_issuer_name(param_1);
    pXVar3 = X509_NAME_dup(pXVar3);
    (a->d).directoryName = pXVar3;
    if (pXVar3 == (X509_NAME *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ess/ess_lib.c",0x66,"ESS_CERT_ID_new_init");
      ERR_set_error(0x36,0x8000b,0);
    }
    else {
      iVar1 = OPENSSL_sk_push(*(undefined8 *)puVar2[1],a);
      if (iVar1 != 0) {
        ASN1_INTEGER_free(*(ASN1_INTEGER **)(puVar2[1] + 8));
        pAVar4 = (ASN1_INTEGER *)X509_get0_serialNumber(param_1);
        lVar5 = puVar2[1];
        pAVar4 = ASN1_INTEGER_dup(pAVar4);
        *(ASN1_INTEGER **)(lVar5 + 8) = pAVar4;
        if (pAVar4 != (ASN1_INTEGER *)0x0) goto LAB_001000f7;
        ERR_new();
        uVar7 = 0x71;
        goto LAB_001001e1;
      }
      ERR_new();
      ERR_set_debug("crypto/ess/ess_lib.c",0x6a,"ESS_CERT_ID_new_init");
      ERR_set_error(0x36,0x8000f,0);
    }
  }
  GENERAL_NAME_free(a);
  puVar6 = (undefined8 *)0x0;
  ESS_CERT_ID_free(puVar2);
LAB_001000f7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ess_issuer_serial_cmp(undefined8 *param_1,X509 *param_2)

{
  int iVar1;
  int *piVar2;
  X509_NAME *b;
  ASN1_INTEGER *y;
  
  if (param_1 == (undefined8 *)0x0) {
    return -1;
  }
  if (param_2 != (X509 *)0x0) {
    iVar1 = OPENSSL_sk_num(*param_1);
    if (iVar1 == 1) {
      piVar2 = (int *)OPENSSL_sk_value(*param_1,0);
      if (*piVar2 == 4) {
        b = X509_get_issuer_name(param_2);
        iVar1 = X509_NAME_cmp(*(X509_NAME **)(piVar2 + 2),b);
        if (iVar1 == 0) {
          y = (ASN1_INTEGER *)X509_get0_serialNumber(param_2);
          iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)param_1[1],y);
          return iVar1;
        }
      }
    }
  }
  return -1;
}



undefined8 * ESS_CERT_ID_V2_new_init(EVP_MD *param_1,X509 *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  GENERAL_NAME *a;
  X509_NAME *pXVar4;
  ASN1_INTEGER *pAVar5;
  X509_ALGOR *alg;
  undefined8 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  uint local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0x40;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  puVar2 = (undefined8 *)ESS_CERT_ID_V2_new();
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    uVar7 = 0xb7;
LAB_00100589:
    ERR_set_debug("crypto/ess/ess_lib.c",uVar7,"ESS_CERT_ID_V2_new_init");
    ERR_set_error(0x36,0x80036,0);
LAB_00100550:
    alg = (X509_ALGOR *)0x0;
    a = (GENERAL_NAME *)0x0;
  }
  else {
    alg = (X509_ALGOR *)0x0;
    iVar1 = EVP_MD_is_a(param_1,"SHA256");
    if (iVar1 != 0) {
LAB_001003a2:
      *puVar2 = alg;
      iVar1 = X509_digest(param_2,param_1,local_88,&local_8c);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/ess/ess_lib.c",0xcd,"ESS_CERT_ID_V2_new_init");
        ERR_set_error(0x36,0x8000b,0);
      }
      else {
        iVar1 = ASN1_OCTET_STRING_set((ASN1_OCTET_STRING *)puVar2[1],local_88,local_8c);
        if (iVar1 == 0) {
          ERR_new();
          uVar7 = 0xd2;
          goto LAB_001005c1;
        }
        puVar6 = puVar2;
        if (param_3 == 0) goto LAB_001003e2;
        lVar3 = ESS_ISSUER_SERIAL_new();
        puVar2[2] = lVar3;
        if (lVar3 == 0) {
          ERR_new();
          uVar7 = 0xda;
          goto LAB_00100589;
        }
        a = GENERAL_NAME_new();
        if (a != (GENERAL_NAME *)0x0) {
          a->type = 4;
          pXVar4 = X509_get_issuer_name(param_2);
          pXVar4 = X509_NAME_dup(pXVar4);
          (a->d).directoryName = pXVar4;
          if (pXVar4 == (X509_NAME *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/ess/ess_lib.c",0xe3,"ESS_CERT_ID_V2_new_init");
            ERR_set_error(0x36,0x8000d,0);
          }
          else {
            iVar1 = OPENSSL_sk_push(*(undefined8 *)puVar2[2],a);
            if (iVar1 != 0) {
              ASN1_INTEGER_free(*(ASN1_INTEGER **)(puVar2[2] + 8));
              pAVar5 = (ASN1_INTEGER *)X509_get0_serialNumber(param_2);
              lVar3 = puVar2[2];
              pAVar5 = ASN1_INTEGER_dup(pAVar5);
              *(ASN1_INTEGER **)(lVar3 + 8) = pAVar5;
              if (*(long *)(puVar2[2] + 8) != 0) goto LAB_001003e2;
              ERR_new();
              uVar7 = 0xee;
              goto LAB_001005c1;
            }
            ERR_new();
            ERR_set_debug("crypto/ess/ess_lib.c",0xe7,"ESS_CERT_ID_V2_new_init");
            ERR_set_error(0x36,0x8000f,0);
          }
          alg = (X509_ALGOR *)0x0;
          goto LAB_00100556;
        }
        ERR_new();
        uVar7 = 0xde;
LAB_001005c1:
        ERR_set_debug("crypto/ess/ess_lib.c",uVar7,"ESS_CERT_ID_V2_new_init");
        ERR_set_error(0x36,0x8000d,0);
      }
      goto LAB_00100550;
    }
    alg = X509_ALGOR_new();
    if (alg == (X509_ALGOR *)0x0) {
      ERR_new();
      a = (GENERAL_NAME *)0x0;
      ERR_set_debug("crypto/ess/ess_lib.c",0xbe,"ESS_CERT_ID_V2_new_init");
      ERR_set_error(0x36,0x8000d,0);
    }
    else {
      X509_ALGOR_set_md(alg,param_1);
      if (alg->algorithm != (ASN1_OBJECT *)0x0) goto LAB_001003a2;
      ERR_new();
      ERR_set_debug("crypto/ess/ess_lib.c",0xc3,"ESS_CERT_ID_V2_new_init");
      ERR_set_error(0x36,0x8000d,0);
      a = (GENERAL_NAME *)0x0;
    }
  }
LAB_00100556:
  X509_ALGOR_free(alg);
  GENERAL_NAME_free(a);
  puVar6 = (undefined8 *)0x0;
  ESS_CERT_ID_V2_free(puVar2);
LAB_001003e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * OSSL_ESS_signing_cert_new_init(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  plVar2 = (long *)ESS_SIGNING_CERT_new();
  if (plVar2 == (long *)0x0) {
    ERR_new();
    uVar4 = 0x21;
LAB_001007f1:
    lVar3 = 0;
    ERR_set_debug("crypto/ess/ess_lib.c",uVar4,"OSSL_ESS_signing_cert_new_init");
    ERR_set_error(0x36,0x80036,0);
  }
  else {
    if (*plVar2 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        ERR_new();
        lVar3 = 0;
        ERR_set_debug("crypto/ess/ess_lib.c",0x26,"OSSL_ESS_signing_cert_new_init");
        ERR_set_error(0x36,0x8000f,0);
        goto LAB_00100848;
      }
    }
    lVar3 = ESS_CERT_ID_new_init(param_1,param_3);
    if (lVar3 != 0) {
      iVar5 = 0;
      iVar1 = OPENSSL_sk_push(*plVar2,lVar3);
      if (iVar1 != 0) {
        while( true ) {
          iVar1 = OPENSSL_sk_num(param_2);
          if (iVar1 <= iVar5) {
            return plVar2;
          }
          uVar4 = OPENSSL_sk_value(param_2,iVar5);
          lVar3 = ESS_CERT_ID_new_init(uVar4,1);
          if (lVar3 == 0) break;
          iVar1 = OPENSSL_sk_push(*plVar2,lVar3);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/ess/ess_lib.c",0x37,"OSSL_ESS_signing_cert_new_init");
            ERR_set_error(0x36,0x8000f,0);
            goto LAB_00100848;
          }
          iVar5 = iVar5 + 1;
        }
        ERR_new();
        uVar4 = 0x33;
        goto LAB_001007f1;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/ess/ess_lib.c",0x2c,"OSSL_ESS_signing_cert_new_init");
    ERR_set_error(0x36,0x80036,0);
  }
LAB_00100848:
  ESS_SIGNING_CERT_free(plVar2);
  ESS_CERT_ID_free(lVar3);
  return (long *)0x0;
}



undefined8 *
OSSL_ESS_signing_cert_v2_new_init
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)ESS_SIGNING_CERT_V2_new();
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    uVar4 = 0x87;
  }
  else {
    lVar3 = ESS_CERT_ID_V2_new_init(param_1,param_2,param_4);
    if (lVar3 == 0) {
      ERR_new();
      uVar4 = 0x8c;
    }
    else {
      iVar5 = 0;
      iVar1 = OPENSSL_sk_push(*puVar2,lVar3);
      if (iVar1 == 0) {
        ERR_new();
        uVar4 = 0x90;
LAB_001009d9:
        ERR_set_debug("crypto/ess/ess_lib.c",uVar4,"OSSL_ESS_signing_cert_v2_new_init");
        ERR_set_error(0x36,0x8000f,0);
        goto LAB_001009a2;
      }
      while( true ) {
        iVar1 = OPENSSL_sk_num(param_3);
        if (iVar1 <= iVar5) {
          return puVar2;
        }
        uVar4 = OPENSSL_sk_value(param_3,iVar5);
        lVar3 = ESS_CERT_ID_V2_new_init(param_1,uVar4,1);
        if (lVar3 == 0) break;
        iVar1 = OPENSSL_sk_push(*puVar2,lVar3);
        if (iVar1 == 0) {
          ERR_new();
          uVar4 = 0x9d;
          goto LAB_001009d9;
        }
        iVar5 = iVar5 + 1;
      }
      ERR_new();
      uVar4 = 0x99;
    }
  }
  lVar3 = 0;
  ERR_set_debug("crypto/ess/ess_lib.c",uVar4,"OSSL_ESS_signing_cert_v2_new_init");
  ERR_set_error(0x36,0x80036,0);
LAB_001009a2:
  ESS_SIGNING_CERT_V2_free(puVar2);
  ESS_CERT_ID_V2_free(lVar3);
  return (undefined8 *)0x0;
}



undefined8
OSSL_ESS_check_signing_certs(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  X509 *pXVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  EVP_MD *local_110;
  uint *local_108;
  char *local_100;
  uint local_cc;
  char local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      if (param_4 != 0) {
        ERR_new();
        ERR_set_debug("crypto/ess/ess_lib.c",0x15d,"OSSL_ESS_check_signing_certs");
        ERR_set_error(0x36,0x6c,0);
        goto LAB_00100caa;
      }
    }
    else {
      iVar3 = OPENSSL_sk_num(*param_2);
      if (iVar3 == 0) goto LAB_00100f2d;
LAB_00100d46:
      if (0 < iVar3) {
        iVar2 = 0;
        do {
          local_100 = local_c8;
          plVar5 = (long *)OPENSSL_sk_value(*param_2,iVar2);
          if (plVar5 == (long *)0x0) goto LAB_00100fa8;
          if ((undefined8 *)*plVar5 == (undefined8 *)0x0) {
            builtin_strncpy(local_c8,"SHA256",7);
          }
          else {
            OBJ_obj2txt(local_100,0x32,*(ASN1_OBJECT **)*plVar5,0);
          }
          local_100 = local_c8;
          ERR_set_mark();
          local_110 = (EVP_MD *)EVP_MD_fetch(0,local_100,0);
          if ((local_110 == (EVP_MD *)0x0) &&
             (local_110 = EVP_get_digestbyname(local_100), local_110 == (EVP_MD *)0x0))
          goto LAB_00100cd0;
          ERR_pop_to_mark();
          iVar9 = 0;
          while( true ) {
            local_108 = &local_cc;
            iVar8 = OPENSSL_sk_num(param_3);
            if (iVar8 <= iVar9) goto LAB_00100bf0;
            pXVar6 = (X509 *)OPENSSL_sk_value(param_3,iVar9);
            uVar1 = *(uint *)plVar5[1];
            iVar8 = X509_digest(pXVar6,local_110,local_88,local_108);
            if ((iVar8 == 0) || (uVar1 != local_cc)) goto LAB_00100c70;
            iVar8 = memcmp(*(void **)(plVar5[1] + 8),local_88,(ulong)uVar1);
            if ((iVar8 == 0) &&
               ((plVar5[2] == 0 || (iVar8 = ess_issuer_serial_cmp(plVar5[2],pXVar6), iVar8 == 0))))
            break;
            iVar9 = iVar9 + 1;
          }
          if ((iVar9 != 0) == (iVar2 == 0)) goto LAB_00100ee9;
          iVar2 = iVar2 + 1;
          EVP_MD_free(local_110);
        } while (iVar2 != iVar3);
      }
    }
LAB_00100edf:
    uVar7 = 1;
    goto LAB_00100c2c;
  }
  iVar2 = OPENSSL_sk_num(*param_1);
  if (param_2 == (undefined8 *)0x0) {
    if (iVar2 != 0) {
      if (iVar2 < 1) goto LAB_00100edf;
      iVar3 = -1;
      goto LAB_00100ade;
    }
  }
  else {
    iVar3 = OPENSSL_sk_num(*param_2);
    if ((iVar3 != 0) && (iVar2 != 0)) {
      if (iVar2 < 1) goto LAB_00100d46;
LAB_00100ade:
      iVar9 = 0;
      do {
        plVar5 = (long *)OPENSSL_sk_value(*param_1,iVar9);
        if (plVar5 == (long *)0x0) goto LAB_00100fa8;
        builtin_strncpy(local_c8,"SHA1",5);
        ERR_set_mark();
        local_110 = (EVP_MD *)EVP_MD_fetch(0,local_c8,0);
        if ((local_110 == (EVP_MD *)0x0) &&
           (local_110 = EVP_get_digestbyname(local_c8), local_110 == (EVP_MD *)0x0))
        goto LAB_00100cd0;
        ERR_pop_to_mark();
        iVar8 = 0;
        while( true ) {
          iVar4 = OPENSSL_sk_num(param_3);
          if (iVar4 <= iVar8) goto LAB_00100bf0;
          pXVar6 = (X509 *)OPENSSL_sk_value(param_3,iVar8);
          uVar1 = *(uint *)*plVar5;
          iVar4 = X509_digest(pXVar6,local_110,local_88,&local_cc);
          if ((iVar4 == 0) || (uVar1 != local_cc)) goto LAB_00100c70;
          iVar4 = memcmp(*(void **)(*plVar5 + 8),local_88,(ulong)uVar1);
          if ((iVar4 == 0) &&
             ((plVar5[1] == 0 || (iVar4 = ess_issuer_serial_cmp(plVar5[1],pXVar6), iVar4 == 0))))
          break;
          iVar8 = iVar8 + 1;
        }
        if ((iVar8 != 0) == (iVar9 == 0)) goto LAB_00100ee9;
        iVar9 = iVar9 + 1;
        EVP_MD_free(local_110);
      } while (iVar2 != iVar9);
      goto LAB_00100d46;
    }
  }
LAB_00100f2d:
  ERR_new();
  ERR_set_debug("crypto/ess/ess_lib.c",0x161,"OSSL_ESS_check_signing_certs");
  ERR_set_error(0x36,0x6b,0);
  goto LAB_00100caa;
LAB_00100fa8:
  ERR_new();
  ERR_set_debug("crypto/ess/ess_lib.c",0x11b,&__func___0);
  ERR_set_error(0x36,0x80106,0);
  goto LAB_00100caa;
LAB_00100bf0:
  ERR_new();
  ERR_set_debug("crypto/ess/ess_lib.c",0x14d,&__func___0);
  ERR_set_error(0x36,0x68,0);
  EVP_MD_free(local_110);
  uVar7 = 0;
  goto LAB_00100c2c;
LAB_00100c70:
  ERR_new();
  ERR_set_debug("crypto/ess/ess_lib.c",0x139,&__func___0);
  uVar7 = 0x67;
  goto LAB_00100c94;
LAB_00100ee9:
  ERR_new();
  ERR_set_debug("crypto/ess/ess_lib.c",0x146,&__func___0);
  uVar7 = 0x69;
LAB_00100c94:
  ERR_set_error(0x36,uVar7,0);
  EVP_MD_free(local_110);
  goto LAB_00100caa;
LAB_00100cd0:
  ERR_clear_last_mark();
  ERR_new();
  ERR_set_debug("crypto/ess/ess_lib.c",0x12e,&__func___0);
  ERR_set_error(0x36,0x6a,0);
  EVP_MD_free(0);
LAB_00100caa:
  uVar7 = 0xffffffff;
LAB_00100c2c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


