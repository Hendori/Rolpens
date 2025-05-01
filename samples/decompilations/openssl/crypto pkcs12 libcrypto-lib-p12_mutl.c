
void pkcs12_pbmac1_pbkdf2_key_gen
               (char *param_1,int param_2,uchar *param_3,int param_4,undefined8 param_5,int param_6,
               int param_7,uchar *param_8,EVP_MD *param_9)

{
  PKCS5_PBKDF2_HMAC(param_1,param_2,param_3,param_4,param_6,param_9,param_7,param_8);
  return;
}



bool PKCS12_mac_present(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



void PKCS12_get0_mac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                    ,long param_5)

{
  if (*(undefined8 **)(param_5 + 8) == (undefined8 *)0x0) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
      return;
    }
  }
  else {
    X509_SIG_get0(**(undefined8 **)(param_5 + 8),param_2,param_1);
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(long *)(param_5 + 8) + 8);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(long *)(param_5 + 8) + 0x10);
    }
  }
  return;
}



undefined8 PBMAC1_get1_pbkdf2_param(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = PBMAC1PARAM_it();
  plVar3 = (long *)ASN1_TYPE_unpack_sequence(uVar2);
  if (plVar3 == (long *)0x0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x5a,"PBMAC1_get1_pbkdf2_param");
    ERR_set_error(0x23,0x80106,0);
  }
  else {
    X509_ALGOR_get0(&local_28,(int *)0x0,(void **)0x0,(X509_ALGOR *)*plVar3);
    iVar1 = OBJ_obj2nid(local_28);
    if (iVar1 == 0x45) {
      uVar2 = *(undefined8 *)(*plVar3 + 8);
      uVar4 = PBKDF2PARAM_it();
      uVar2 = ASN1_TYPE_unpack_sequence(uVar4,uVar2);
      PBMAC1PARAM_free(plVar3);
    }
    else {
      ERR_new();
      uVar2 = 0;
      ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x60,"PBMAC1_get1_pbkdf2_param");
      ERR_set_error(0x23,0x80106,0);
      PBMAC1PARAM_free(plVar3);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint pkcs12_gen_mac(long param_1,char *param_2,int param_3,uchar *param_4,uint *param_5,int param_6,
                   int param_7,code *param_8)

{
  uchar *salt;
  int *piVar1;
  undefined8 uVar2;
  ASN1_STRING *pAVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  EVP_MD *pEVar8;
  HMAC_CTX *ctx;
  PBKDF2PARAM *a;
  char *pcVar9;
  EVP_MD *digest;
  ASN1_OBJECT *pAVar10;
  EVP_MD *digest_00;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  int local_1a4;
  X509_ALGOR *local_170;
  ASN1_OBJECT *local_168;
  ASN1_OBJECT *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char local_118 [80];
  uchar local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = OBJ_obj2nid(*(ASN1_OBJECT **)(*(long *)(param_1 + 0x10) + 0x18));
  if (iVar4 == 0x15) {
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x20) == 0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_mutl.c",0xb7,"pkcs12_gen_mac");
      ERR_set_error(0x23,0x65,0);
    }
    else {
      puVar7 = *(undefined8 **)(param_1 + 8);
      uVar13 = 1;
      salt = *(uchar **)((int *)puVar7[1] + 2);
      iVar4 = *(int *)puVar7[1];
      if ((ASN1_INTEGER *)puVar7[2] != (ASN1_INTEGER *)0x0) {
        uVar13 = ASN1_INTEGER_get((ASN1_INTEGER *)puVar7[2]);
        uVar13 = uVar13 & 0xffffffff;
        puVar7 = *(undefined8 **)(param_1 + 8);
      }
      X509_SIG_get0(*puVar7,&local_170,0);
      X509_ALGOR_get0(&local_168,(int *)0x0,(void **)0x0,local_170);
      iVar5 = OBJ_obj2nid(local_168);
      pAVar10 = local_168;
      if (iVar5 == 0xa2) {
        pAVar10 = OBJ_nid2obj(param_6);
      }
      iVar5 = OBJ_obj2txt(local_118,0x50,pAVar10,0);
      if (-1 < iVar5) {
        ERR_set_mark();
        pEVar8 = (EVP_MD *)
                 EVP_MD_fetch(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),local_118,
                              *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
        digest_00 = pEVar8;
        if (pEVar8 == (EVP_MD *)0x0) {
          iVar5 = OBJ_obj2nid(local_168);
          pcVar9 = OBJ_nid2sn(iVar5);
          digest_00 = EVP_get_digestbyname(pcVar9);
          if (digest_00 == (EVP_MD *)0x0) {
            ERR_clear_last_mark();
            ERR_new();
            ERR_set_debug("crypto/pkcs12/p12_mutl.c",0xd2,"pkcs12_gen_mac");
            ERR_set_error(0x23,0x76,0);
            goto LAB_00100498;
          }
        }
        ERR_pop_to_mark();
        local_1a4 = EVP_MD_get_size(digest_00);
        iVar5 = EVP_MD_get_type(digest_00);
        if (local_1a4 < 1) {
LAB_00100660:
          ctx = (HMAC_CTX *)0x0;
          uVar6 = 0;
        }
        else {
          if ((param_6 == 0) || (param_8 != (code *)0x0)) {
            if (((iVar5 - 0x3d6U < 2) || (iVar5 == 0x329)) &&
               (lVar11 = ossl_safe_getenv("LEGACY_GOST_PKCS12"), lVar11 == 0)) {
              iVar4 = PKCS5_PBKDF2_HMAC(param_2,param_3,salt,iVar4,(int)uVar13,digest_00,0x60,
                                        local_c8);
              if (iVar4 == 0) {
                ERR_new();
                ERR_set_debug("crypto/pkcs12/p12_mutl.c",0xe9,"pkcs12_gen_mac");
                ERR_set_error(0x23,0x6b,0);
                goto LAB_00100590;
              }
              local_158 = local_88;
              uStack_150 = uStack_80;
              local_148 = local_78;
              uStack_140 = uStack_70;
              OPENSSL_cleanse(local_c8,0x60);
              local_1a4 = 0x20;
LAB_001003a3:
              ctx = (HMAC_CTX *)HMAC_CTX_new();
              if (ctx != (HMAC_CTX *)0x0) {
                uVar6 = HMAC_Init_ex(ctx,&local_158,local_1a4,digest_00,(ENGINE *)0x0);
                if (uVar6 != 0) {
                  piVar1 = *(int **)(*(long *)(param_1 + 0x10) + 0x20);
                  iVar4 = HMAC_Update(ctx,*(uchar **)(piVar1 + 2),(long)*piVar1);
                  if (iVar4 == 0) {
                    uVar6 = 0;
                  }
                  else {
                    iVar4 = HMAC_Final(ctx,param_4,param_5);
                    uVar6 = (uint)(iVar4 != 0);
                  }
                }
                goto LAB_001003f8;
              }
            }
            else {
              if (param_7 == 0) {
                if (param_8 != (code *)0x0) {
                  iVar4 = (*param_8)(param_2,param_3,salt,iVar4,3,uVar13,local_1a4,&local_158,
                                     digest_00);
                  goto LAB_00100399;
                }
LAB_00100798:
                iVar4 = PKCS12_key_gen_utf8_ex
                                  (param_2,param_3,salt,iVar4,3,uVar13,local_1a4,&local_158,
                                   digest_00,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
                if (iVar4 != 0) goto LAB_001003a3;
                ERR_new();
                uVar12 = 0x10b;
              }
              else {
                pAVar10 = OBJ_nid2obj(param_7);
                iVar5 = OBJ_obj2txt((char *)local_c8,0x80,pAVar10,0);
                if ((iVar5 < 0) || (lVar11 = EVP_MD_fetch(0,local_c8,0), lVar11 == 0))
                goto LAB_00100660;
                if (param_8 == (code *)0x0) {
                  EVP_MD_free(lVar11);
                  goto LAB_00100798;
                }
                iVar4 = (*param_8)(param_2,param_3,salt,iVar4,3,uVar13,local_1a4,&local_158,lVar11);
                EVP_MD_free(lVar11);
LAB_00100399:
                if (iVar4 == 1) goto LAB_001003a3;
                ERR_new();
                uVar12 = 0x101;
              }
              ERR_set_debug("crypto/pkcs12/p12_mutl.c",uVar12,"pkcs12_gen_mac");
              ERR_set_error(0x23,0x6b,0);
            }
          }
          else {
            uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
            uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
            a = (PBKDF2PARAM *)PBMAC1_get1_pbkdf2_param(local_170);
            if (a == (PBKDF2PARAM *)0x0) {
              ERR_new();
              uVar6 = 0;
              ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x7a,__func___4);
              ERR_set_error(0x23,0x8010c,0);
              EVP_MD_free();
              PBKDF2PARAM_free((PBKDF2PARAM *)0x0);
              ctx = (HMAC_CTX *)0x0;
              goto LAB_001003f8;
            }
            uVar13 = ASN1_INTEGER_get(a->keylength);
            iVar4 = 0xa3;
            local_1a4 = (int)uVar13;
            pAVar3 = (a->salt->value).asn1_string;
            if (a->prf != (X509_ALGOR *)0x0) {
              X509_ALGOR_get0(&local_160,(int *)0x0,(void **)0x0,a->prf);
              iVar4 = OBJ_obj2nid(local_160);
            }
            iVar4 = ossl_hmac2mdnid(iVar4);
            pcVar9 = OBJ_nid2sn(iVar4);
            digest = (EVP_MD *)EVP_MD_fetch(uVar2,pcVar9,uVar12);
            if (digest == (EVP_MD *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x89,__func___4);
              ERR_set_error(0x23,0x8010d,0);
              EVP_MD_free(0);
              PBKDF2PARAM_free(a);
              goto LAB_00100660;
            }
            lVar11 = ASN1_INTEGER_get(a->iter);
            uVar13 = uVar13 & 0xffffffff;
            iVar4 = PKCS5_PBKDF2_HMAC(param_2,param_3,pAVar3->data,pAVar3->length,(int)lVar11,digest
                                      ,local_1a4,(uchar *)&local_158);
            if (iVar4 < 1) {
              ERR_new(uVar13);
              ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x8f,__func___4);
              ERR_set_error(0x23,0xc0103,0);
              EVP_MD_free(digest);
              PBKDF2PARAM_free(a);
            }
            else {
              EVP_MD_free(digest);
              PBKDF2PARAM_free(a);
              if (-1 < local_1a4) goto LAB_001003a3;
            }
          }
LAB_00100590:
          ctx = (HMAC_CTX *)0x0;
          uVar6 = 0;
        }
LAB_001003f8:
        OPENSSL_cleanse(&local_158,0x40);
        HMAC_CTX_free(ctx);
        EVP_MD_free(pEVar8);
        goto LAB_00100415;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_mutl.c",0xb2,"pkcs12_gen_mac");
    ERR_set_error(0x23,0x79,0);
  }
LAB_00100498:
  uVar6 = 0;
LAB_00100415:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



int PKCS12_gen_mac(PKCS12 *p12,char *pass,int passlen,uchar *mac,uint *maclen)

{
  int iVar1;
  
  iVar1 = pkcs12_gen_mac();
  return iVar1;
}



int PKCS12_verify_mac(PKCS12 *p12,char *pass,int passlen)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  void *b;
  long in_FS_OFFSET;
  uint local_a4;
  X509_ALGOR *local_a0;
  ASN1_OBJECT *local_98;
  ASN1_OBJECT *local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (p12->mac == (PKCS12_MAC_DATA *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x130,"PKCS12_verify_mac");
    ERR_set_error(0x23,0x6c,0);
  }
  else {
    X509_SIG_get0(p12->mac->dinfo,&local_a0,0);
    X509_ALGOR_get0(&local_98,(int *)0x0,(void **)0x0,local_a0);
    iVar1 = OBJ_obj2nid(local_98);
    if (iVar1 == 0xa2) {
      uVar4 = PBMAC1PARAM_it();
      lVar5 = ASN1_TYPE_unpack_sequence(uVar4);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x13d,"PKCS12_verify_mac");
        ERR_set_error(0x23,0x8010c,0);
      }
      else {
        X509_ALGOR_get0(&local_90,(int *)0x0,(void **)0x0,*(X509_ALGOR **)(lVar5 + 8));
        iVar1 = OBJ_obj2nid(local_90);
        uVar3 = ossl_hmac2mdnid(iVar1);
        iVar1 = pkcs12_gen_mac(p12,pass,passlen,local_88,&local_a4,uVar3);
        if (iVar1 != 0) {
          PBMAC1PARAM_free(lVar5);
          goto LAB_00100a0c;
        }
        ERR_new(0,0);
        ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x144,"PKCS12_verify_mac");
        ERR_set_error(0x23,0x6d,0);
        PBMAC1PARAM_free(lVar5);
      }
    }
    else {
      iVar1 = pkcs12_gen_mac(p12,pass,passlen,local_88,&local_a4,0);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x14b,"PKCS12_verify_mac");
        ERR_set_error(0x23,0x6d,0);
      }
      else {
LAB_00100a0c:
        X509_SIG_get0(p12->mac->dinfo,0,&local_90);
        uVar2 = ASN1_STRING_length((ASN1_STRING *)local_90);
        if (uVar2 == local_a4) {
          b = (void *)ASN1_STRING_get0_data(local_90);
          iVar1 = CRYPTO_memcmp(local_88,b,(ulong)uVar2);
          uVar2 = (uint)(iVar1 == 0);
          goto LAB_00100a35;
        }
      }
    }
  }
  uVar2 = 0;
LAB_00100a35:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PKCS12_setup_mac(PKCS12 *p12,int iter,uchar *salt,int saltlen,EVP_MD *md_type)

{
  ASN1_OCTET_STRING *pAVar1;
  int iVar2;
  int iVar3;
  PKCS12_MAC_DATA *pPVar4;
  uchar *puVar5;
  ASN1_OBJECT *aobj;
  ASN1_INTEGER *pAVar6;
  undefined8 uVar7;
  size_t __n;
  long in_FS_OFFSET;
  X509_ALGOR *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_MD_get_type(md_type);
  PKCS12_MAC_DATA_free(p12->mac);
  p12->mac = (PKCS12_MAC_DATA *)0x0;
  pPVar4 = PKCS12_MAC_DATA_new();
  p12->mac = pPVar4;
  if (pPVar4 != (PKCS12_MAC_DATA *)0x0) {
    if (iter < 2) {
LAB_00100c66:
      if (saltlen == 0) {
        __n = 8;
        saltlen = 8;
      }
      else {
        __n = (size_t)saltlen;
        if (saltlen < 0) goto LAB_00100d85;
      }
      pAVar1 = p12->mac->salt;
      puVar5 = (uchar *)CRYPTO_malloc((int)__n,"crypto/pkcs12/p12_mutl.c",0x19a);
      pAVar1->data = puVar5;
      if (puVar5 == (uchar *)0x0) goto LAB_00100d85;
      pAVar1 = p12->mac->salt;
      pAVar1->length = saltlen;
      puVar5 = pAVar1->data;
      if (salt == (uchar *)0x0) {
        iVar3 = RAND_bytes_ex(p12->authsafes[1].asn1,puVar5,__n);
        if (iVar3 < 1) goto LAB_00100d85;
      }
      else {
        memcpy(puVar5,salt,__n);
      }
      X509_SIG_getm(p12->mac->dinfo,&local_48,0);
      aobj = OBJ_nid2obj(iVar2);
      iVar2 = X509_ALGOR_set0(local_48,aobj,5,(void *)0x0);
      iVar3 = 1;
      if (iVar2 != 0) goto LAB_00100cff;
      ERR_new();
      uVar7 = 0x1a6;
    }
    else {
      pAVar6 = ASN1_INTEGER_new();
      pPVar4->iter = pAVar6;
      if (pAVar6 == (ASN1_INTEGER *)0x0) {
        ERR_new();
        uVar7 = 0x18e;
      }
      else {
        iVar3 = ASN1_INTEGER_set(p12->mac->iter,(long)iter);
        if (iVar3 != 0) goto LAB_00100c66;
        ERR_new();
        uVar7 = 0x192;
      }
    }
    ERR_set_debug("crypto/pkcs12/p12_mutl.c",uVar7,"pkcs12_setup_mac");
    ERR_set_error(0x23,0x8000d,0);
  }
LAB_00100d85:
  iVar3 = 0;
LAB_00100cff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



int PKCS12_set_mac(PKCS12 *p12,char *pass,int passlen,uchar *salt,int saltlen,int iter,
                  EVP_MD *md_type)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_84;
  ASN1_OCTET_STRING *local_80;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (md_type == (EVP_MD *)0x0) {
    md_type = EVP_sha256();
  }
  if (iter == 0) {
    iter = 0x800;
  }
  iVar1 = PKCS12_setup_mac(p12,iter,salt,saltlen,md_type);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x166,"PKCS12_set_mac");
    ERR_set_error(0x23,0x6e,0);
    iVar1 = 0;
  }
  else {
    iVar1 = pkcs12_gen_mac(p12,pass,passlen,local_78,&local_84,0);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x16d,"PKCS12_set_mac");
      ERR_set_error(0x23,0x6d,0);
      iVar1 = 0;
    }
    else {
      X509_SIG_getm(p12->mac->dinfo,0,&local_80);
      iVar2 = ASN1_OCTET_STRING_set(local_80,local_78,local_84);
      iVar1 = 1;
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x172,"PKCS12_set_mac");
        ERR_set_error(0x23,0x6f,0);
        iVar1 = 0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
PKCS12_set_pbmac1_pbkdf2
          (long param_1,undefined8 param_2,undefined4 param_3,uchar *param_4,int param_5,int param_6
          ,EVP_MD *param_7,char *param_8)

{
  int *piVar1;
  int iVar2;
  int prf_nid;
  undefined4 uVar3;
  int n;
  int iVar4;
  undefined8 *puVar5;
  X509_ALGOR *pXVar6;
  PKCS12_MAC_DATA *pPVar7;
  void *pvVar8;
  ASN1_OBJECT *pAVar9;
  undefined8 uVar10;
  long lVar11;
  ASN1_INTEGER *pAVar12;
  size_t __n;
  undefined8 uVar13;
  long in_FS_OFFSET;
  uchar *local_e0;
  uchar *local_d0;
  int local_c8;
  int local_c4;
  X509_ALGOR *local_c0;
  int local_9c;
  long local_98;
  ASN1_OCTET_STRING *local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (param_7 == (EVP_MD *)0x0) {
    param_7 = EVP_sha256();
  }
  if (param_8 == (char *)0x0) {
    local_c4 = EVP_MD_get_type(param_7);
  }
  else {
    local_c4 = OBJ_txt2nid(param_8);
  }
  if (param_6 == 0) {
    param_6 = 0x800;
  }
  iVar2 = EVP_MD_get_size(param_7);
  prf_nid = ossl_md2hmacnid(local_c4);
  uVar3 = EVP_MD_get_type(param_7);
  n = ossl_md2hmacnid(uVar3);
  if ((prf_nid == 0) || (n == 0)) {
    ERR_new();
    puVar5 = (undefined8 *)0x0;
    uVar10 = 0;
    ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x1d5,"PKCS12_set_pbmac1_pbkdf2");
    ERR_set_error(0x23,0x76,0);
    local_d0 = (uchar *)0x0;
    goto LAB_001013a5;
  }
  if (param_4 == (uchar *)0x0) {
    local_e0 = (uchar *)CRYPTO_malloc(param_5,"crypto/pkcs12/p12_mutl.c",0x1da);
    local_d0 = local_e0;
    if (local_e0 == (uchar *)0x0) {
      puVar5 = (undefined8 *)0x0;
      uVar10 = 0;
      goto LAB_001013a5;
    }
    iVar4 = RAND_bytes_ex(0,local_e0,(long)param_5,0);
    if (iVar4 < 1) {
      ERR_new();
      puVar5 = (undefined8 *)0x0;
      uVar10 = 0;
      ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x1df,"PKCS12_set_pbmac1_pbkdf2");
      ERR_set_error(0x23,0x80024,0);
      goto LAB_001013a5;
    }
    puVar5 = (undefined8 *)PBMAC1PARAM_new();
    local_c0 = X509_ALGOR_new();
  }
  else {
    puVar5 = (undefined8 *)PBMAC1PARAM_new();
    local_c0 = X509_ALGOR_new();
    local_d0 = (uchar *)0x0;
    local_e0 = param_4;
  }
  pXVar6 = PKCS5_pbkdf2_set(param_6,local_e0,param_5,prf_nid,iVar2);
  if ((puVar5 == (undefined8 *)0x0 || local_c0 == (X509_ALGOR *)0x0) ||
     (pXVar6 == (X509_ALGOR *)0x0)) {
LAB_001012cc:
    uVar10 = 0;
    goto LAB_001013a5;
  }
  PKCS12_MAC_DATA_free(*(PKCS12_MAC_DATA **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  pPVar7 = PKCS12_MAC_DATA_new();
  *(PKCS12_MAC_DATA **)(param_1 + 8) = pPVar7;
  if (pPVar7 == (PKCS12_MAC_DATA *)0x0) {
LAB_00101449:
    ERR_new();
    uVar13 = 0x1ec;
  }
  else {
    if (1 < param_6) {
      pAVar12 = ASN1_INTEGER_new();
      pPVar7->iter = pAVar12;
      if (pAVar12 == (ASN1_INTEGER *)0x0) {
        ERR_new();
        uVar10 = 0x18e;
      }
      else {
        iVar2 = ASN1_INTEGER_set(*(ASN1_INTEGER **)(*(long *)(param_1 + 8) + 0x10),(long)param_6);
        if (iVar2 != 0) goto LAB_00101128;
        ERR_new();
        uVar10 = 0x192;
      }
LAB_0010142c:
      ERR_set_debug("crypto/pkcs12/p12_mutl.c",uVar10,"pkcs12_setup_mac");
      ERR_set_error(0x23,0x8000d,0);
      goto LAB_00101449;
    }
LAB_00101128:
    if (param_5 == 0) {
      local_c8 = 8;
      __n = 8;
    }
    else {
      __n = (size_t)param_5;
      local_c8 = param_5;
      if (param_5 < 0) goto LAB_00101449;
    }
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 8);
    pvVar8 = CRYPTO_malloc((int)__n,"crypto/pkcs12/p12_mutl.c",0x19a);
    *(void **)(lVar11 + 8) = pvVar8;
    if (pvVar8 == (void *)0x0) goto LAB_00101449;
    piVar1 = *(int **)(*(long *)(param_1 + 8) + 8);
    *piVar1 = local_c8;
    memcpy(*(void **)(piVar1 + 2),local_e0,__n);
    X509_SIG_getm(**(undefined8 **)(param_1 + 8),&local_90,0);
    pAVar9 = OBJ_nid2obj(0xa2);
    iVar2 = X509_ALGOR_set0((X509_ALGOR *)local_90,pAVar9,5,(void *)0x0);
    if (iVar2 == 0) {
      ERR_new();
      uVar10 = 0x1a6;
      goto LAB_0010142c;
    }
    pAVar9 = OBJ_nid2obj(n);
    iVar2 = X509_ALGOR_set0(local_c0,pAVar9,5,(void *)0x0);
    if (iVar2 != 0) {
      X509_ALGOR_free((X509_ALGOR *)*puVar5);
      X509_ALGOR_free((X509_ALGOR *)puVar5[1]);
      *puVar5 = pXVar6;
      puVar5[1] = local_c0;
      X509_SIG_getm(**(undefined8 **)(param_1 + 8),&local_98,&local_90);
      lVar11 = local_98 + 8;
      uVar10 = PBMAC1PARAM_it();
      lVar11 = ASN1_TYPE_pack_sequence(uVar10,puVar5,lVar11);
      if (lVar11 != 0) {
        uVar3 = EVP_MD_get_type(param_7);
        iVar2 = pkcs12_gen_mac(param_1,param_2,param_3,local_88,&local_9c,uVar3);
        if (iVar2 == 0) {
          ERR_new();
          uVar10 = 0;
          ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x204,"PKCS12_set_pbmac1_pbkdf2");
          ERR_set_error(0x23,0x6d,0);
          goto LAB_001013a5;
        }
        uVar10 = 1;
        iVar2 = ASN1_OCTET_STRING_set(local_90,local_88,local_9c);
        if (iVar2 != 0) goto LAB_001013a5;
        ERR_new();
        ERR_set_debug("crypto/pkcs12/p12_mutl.c",0x208,"PKCS12_set_pbmac1_pbkdf2");
        ERR_set_error(0x23,0x6f,0);
      }
      goto LAB_001012cc;
    }
    ERR_new();
    uVar13 = 0x1f1;
  }
  uVar10 = 0;
  ERR_set_debug("crypto/pkcs12/p12_mutl.c",uVar13,"PKCS12_set_pbmac1_pbkdf2");
  ERR_set_error(0x23,0x6e,0);
LAB_001013a5:
  PBMAC1PARAM_free(puVar5);
  CRYPTO_free(local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


