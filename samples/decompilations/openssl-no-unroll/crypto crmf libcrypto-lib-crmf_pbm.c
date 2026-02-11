
undefined8 *
OSSL_CRMF_pbmp_new(undefined8 param_1,undefined8 param_2,int param_3,ulong param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uchar *data;
  ASN1_OBJECT *pAVar3;
  
  puVar2 = (undefined8 *)OSSL_CRMF_PBMPARAMETER_new();
  if (puVar2 != (undefined8 *)0x0) {
    data = (uchar *)CRYPTO_malloc((int)param_2,"crypto/crmf/crmf_pbm.c",0x36);
    if (data != (uchar *)0x0) {
      iVar1 = RAND_bytes_ex(param_1,data,param_2);
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("crypto/crmf/crmf_pbm.c",0x39,"OSSL_CRMF_pbmp_new");
        ERR_set_error(0x38,0x6b,0);
      }
      else {
        iVar1 = ASN1_OCTET_STRING_set((ASN1_OCTET_STRING *)*puVar2,data,(int)param_2);
        if (iVar1 != 0) {
          pAVar3 = OBJ_nid2obj(param_3);
          iVar1 = X509_ALGOR_set0((X509_ALGOR *)puVar2[1],pAVar3,-1,(void *)0x0);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/crmf/crmf_pbm.c",0x45,"OSSL_CRMF_pbmp_new");
            ERR_set_error(0x38,0x6f,0);
          }
          else if (param_4 < 100) {
            ERR_new();
            ERR_set_debug("crypto/crmf/crmf_pbm.c",0x54,"OSSL_CRMF_pbmp_new");
            ERR_set_error(0x38,0x6c,0);
          }
          else if (param_4 < 0x186a1) {
            iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)puVar2[2],param_4);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("crypto/crmf/crmf_pbm.c",0x5d,"OSSL_CRMF_pbmp_new");
              ERR_set_error(0x38,0x66,0);
            }
            else {
              pAVar3 = OBJ_nid2obj(param_5);
              iVar1 = X509_ALGOR_set0((X509_ALGOR *)puVar2[3],pAVar3,-1,(void *)0x0);
              if (iVar1 != 0) {
                CRYPTO_free(data);
                return puVar2;
              }
              ERR_new();
              ERR_set_debug("crypto/crmf/crmf_pbm.c",0x67,"OSSL_CRMF_pbmp_new");
              ERR_set_error(0x38,0x6e,0);
            }
          }
          else {
            ERR_new();
            ERR_set_debug("crypto/crmf/crmf_pbm.c",0x58,"OSSL_CRMF_pbmp_new");
            ERR_set_error(0x38,100,0);
          }
        }
      }
      goto LAB_0010011b;
    }
  }
  data = (uchar *)0x0;
LAB_0010011b:
  CRYPTO_free(data);
  OSSL_CRMF_PBMPARAMETER_free(puVar2);
  return (undefined8 *)0x0;
}



undefined8
OSSL_CRMF_pbm_new(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 undefined8 param_5,void *param_6,size_t param_7,undefined8 *param_8,
                 undefined8 param_9)

{
  int iVar1;
  void *ptr;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  ASN1_OBJECT *a;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_198;
  uint local_194;
  long local_190;
  char local_188 [64];
  char local_148 [64];
  uchar local_108 [64];
  char local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_198 = 0;
  local_194 = 0x40;
  if ((((param_8 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) ||
      ((long *)param_3[3] == (long *)0x0)) ||
     (((*(long *)param_3[3] == 0 || (param_4 == 0)) || (param_6 == (void *)0x0)))) {
    ptr = (void *)0x0;
    ctx = (EVP_MD_CTX *)0x0;
    type = (EVP_MD *)0x0;
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_pbm.c",0x92,"OSSL_CRMF_pbm_new");
    ERR_set_error(0x38,0x6d,0);
LAB_001004e4:
    OPENSSL_cleanse(local_108,(ulong)local_194);
    EVP_MD_free(type);
    EVP_MD_CTX_free(ctx);
    CRYPTO_free(ptr);
    if (param_3 == (undefined8 *)0x0) goto LAB_00100515;
  }
  else {
    ptr = CRYPTO_malloc(0x40,"crypto/crmf/crmf_pbm.c",0x95);
    if (ptr == (void *)0x0) {
      ctx = (EVP_MD_CTX *)0x0;
      type = (EVP_MD *)0x0;
      goto LAB_001004e4;
    }
    OBJ_obj2txt(local_188,0x32,*(ASN1_OBJECT **)param_3[1],0);
    type = (EVP_MD *)EVP_MD_fetch(param_1,local_188,param_2);
    if (type == (EVP_MD *)0x0) {
      ERR_new();
      ctx = (EVP_MD_CTX *)0x0;
      ERR_set_debug("crypto/crmf/crmf_pbm.c",0x9f,"OSSL_CRMF_pbm_new");
      ERR_set_error(0x38,0x70,0);
      goto LAB_001004e4;
    }
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if ((ctx == (EVP_MD_CTX *)0x0) ||
       (iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar1 == 0)) goto LAB_001004e4;
    iVar1 = EVP_DigestUpdate(ctx,param_6,param_7);
    if ((iVar1 == 0) ||
       (iVar1 = EVP_DigestUpdate(ctx,*(void **)((int *)*param_3 + 2),(long)*(int *)*param_3),
       iVar1 == 0)) goto LAB_001004e4;
    iVar1 = EVP_DigestFinal_ex(ctx,local_108,&local_194);
    if (iVar1 == 0) goto LAB_001004e4;
    iVar1 = ASN1_INTEGER_get_int64(&local_190,param_3[2]);
    if ((iVar1 == 0) || (0x1863c < local_190 - 100U)) {
      ERR_new();
      ERR_set_debug("crypto/crmf/crmf_pbm.c",0xb4,"OSSL_CRMF_pbm_new");
      ERR_set_error(0x38,100,0);
      goto LAB_001004e4;
    }
    do {
      local_190 = local_190 + -1;
      if (local_190 < 1) {
        iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)param_3[3]);
        iVar1 = EVP_PBE_find(1,iVar1,(int *)0x0,&local_198,(undefined1 **)0x0);
        if (iVar1 != 0) {
          a = OBJ_nid2obj(local_198);
          iVar1 = OBJ_obj2txt(local_148,0x32,a,0);
          if (0 < iVar1) {
            lVar2 = EVP_Q_mac(param_1,&_LC1,param_2,local_148,0,local_108,local_194,param_4,param_5,
                              ptr,0x40,param_9);
            OPENSSL_cleanse(local_108,(ulong)local_194);
            EVP_MD_free(type);
            EVP_MD_CTX_free(ctx);
            if (lVar2 == 0) {
              CRYPTO_free(ptr);
              goto LAB_00100571;
            }
            *param_8 = ptr;
            uVar3 = 1;
            goto LAB_00100517;
          }
        }
        ERR_new();
        ERR_set_debug("crypto/crmf/crmf_pbm.c",0xcc,"OSSL_CRMF_pbm_new");
        ERR_set_error(0x38,0x70,0);
        goto LAB_001004e4;
      }
      iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
    } while (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(ctx,local_108,(ulong)local_194), iVar1 != 0)
             ) && (iVar1 = EVP_DigestFinal_ex(ctx,local_108,&local_194), iVar1 != 0));
    OPENSSL_cleanse(local_108,(ulong)local_194);
    EVP_MD_free(type);
    EVP_MD_CTX_free(ctx);
    CRYPTO_free(ptr);
  }
LAB_00100571:
  if ((undefined8 *)param_3[3] != (undefined8 *)0x0) {
    iVar1 = OBJ_obj2txt(local_c8,0x80,*(ASN1_OBJECT **)param_3[3],0);
    if (iVar1 != 0) {
      ERR_add_error_data(1,local_c8);
    }
  }
LAB_00100515:
  uVar3 = 0;
LAB_00100517:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


