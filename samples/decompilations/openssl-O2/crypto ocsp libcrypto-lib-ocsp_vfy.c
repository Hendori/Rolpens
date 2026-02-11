
int ocsp_verify_signer(X509 *param_1,int param_2,X509_STORE *param_3,ulong param_4,
                      stack_st_X509 *param_5,undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  X509_STORE_CTX *ctx;
  X509_VERIFY_PARAM *param;
  stack_st_X509 *psVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  ctx = X509_STORE_CTX_new();
  if (ctx == (X509_STORE_CTX *)0x0) {
    ERR_new();
    uVar5 = 0x27;
LAB_00100181:
    ERR_set_debug("crypto/ocsp/ocsp_vfy.c",uVar5,"ocsp_verify_signer");
    ERR_set_error(0x27,0x8000b,0);
  }
  else {
    iVar1 = X509_STORE_CTX_init(ctx,param_3,param_1,param_5);
    if (iVar1 == 0) {
      ERR_new();
      uVar5 = 0x2b;
      goto LAB_00100181;
    }
    param = X509_STORE_CTX_get0_param(ctx);
    if (param != (X509_VERIFY_PARAM *)0x0) {
      if ((param_4 & 0x1000) != 0) {
        X509_VERIFY_PARAM_set_flags(param,0x80000);
      }
      if (param_2 != 0) {
        iVar1 = X509_get_ext_by_NID(param_1,0x171,-1);
        if (-1 < iVar1) {
          X509_VERIFY_PARAM_clear_flags(param,4);
        }
      }
      X509_STORE_CTX_set_purpose(ctx,8);
      X509_STORE_CTX_set_trust(ctx,7);
      iVar1 = X509_verify_cert(ctx);
      if (iVar1 < 1) {
        iVar2 = X509_STORE_CTX_get_error(ctx);
        ERR_new();
        ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x40,"ocsp_verify_signer");
        pcVar4 = X509_verify_cert_error_string((long)iVar2);
        ERR_set_error(0x27,0x65,"Verify error: %s",pcVar4);
      }
      else if (param_6 != (undefined8 *)0x0) {
        psVar3 = X509_STORE_CTX_get1_chain(ctx);
        *param_6 = psVar3;
      }
      goto LAB_001000ad;
    }
  }
  iVar1 = -1;
LAB_001000ad:
  X509_STORE_CTX_free(ctx);
  return iVar1;
}



uint ocsp_match_issuerid(X509 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  EVP_MD *type;
  undefined8 *puVar4;
  X509_NAME *data;
  long in_FS_OFFSET;
  char acStack_b8 [64];
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    iVar3 = 0;
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(param_3,iVar3);
        uVar2 = ocsp_match_issuerid(param_1,*puVar4,0);
        if ((int)uVar2 < 1) goto LAB_00100251;
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(param_3);
      } while (iVar3 < iVar1);
    }
    uVar2 = 1;
    goto LAB_00100251;
  }
  OBJ_obj2txt(acStack_b8,0x32,(ASN1_OBJECT *)*param_2,0);
  ERR_set_mark();
  type = (EVP_MD *)EVP_MD_fetch(0,acStack_b8,0);
  if (type == (EVP_MD *)0x0) {
    type = EVP_get_digestbyname(acStack_b8);
    if (type != (EVP_MD *)0x0) goto LAB_00100223;
    ERR_clear_last_mark();
    uVar2 = 0xffffffff;
    ERR_new();
    ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x145,"ocsp_match_issuerid");
    ERR_set_error(0x27,0x77,0);
  }
  else {
LAB_00100223:
    ERR_pop_to_mark();
    iVar1 = EVP_MD_get_size(type);
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x14c,"ocsp_match_issuerid");
      ERR_set_error(0x27,0x6b,0);
    }
    else {
      if ((*(int *)(param_2 + 2) != iVar1) || (*(int *)(param_2 + 5) != iVar1)) {
LAB_00100246:
        uVar2 = 0;
        goto LAB_00100249;
      }
      data = X509_get_subject_name(param_1);
      iVar3 = X509_NAME_digest(data,type,local_78,(uint *)0x0);
      if (iVar3 != 0) {
        iVar3 = memcmp(local_78,(void *)param_2[3],(long)iVar1);
        if (iVar3 != 0) goto LAB_00100246;
        iVar3 = X509_pubkey_digest(param_1,type,local_78,(uint *)0x0);
        if (iVar3 != 0) {
          iVar1 = memcmp(local_78,(void *)param_2[6],(long)iVar1);
          uVar2 = (uint)(iVar1 == 0);
          goto LAB_00100249;
        }
        ERR_new();
        ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x15c,"ocsp_match_issuerid");
        ERR_set_error(0x27,0x66,0);
      }
    }
    uVar2 = 0xffffffff;
  }
LAB_00100249:
  EVP_MD_free(type);
LAB_00100251:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ocsp_verify_part_0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = X509_get0_pubkey(param_3);
  if (lVar5 == 0) {
    ERR_new();
    iVar4 = -1;
    ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x54,"ocsp_verify");
    ERR_set_error(0x27,0x82,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x178);
    uVar2 = *(undefined8 *)(param_3 + 0x170);
    if (param_1 == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x40);
      uVar7 = OCSP_RESPDATA_it();
      iVar4 = ASN1_item_verify_ex(uVar7,param_2 + 0x30,uVar1,param_2,0,lVar5,uVar2);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x20);
      uVar7 = *(undefined8 *)(lVar3 + 0x10);
      uVar6 = OCSP_REQINFO_it();
      iVar4 = ASN1_item_verify_ex(uVar6,lVar3,uVar7,param_1,0,lVar5,uVar2,uVar1);
    }
    if (iVar4 < 1) {
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x5c,"ocsp_verify");
      ERR_set_error(0x27,0x75,0);
    }
  }
  return iVar4;
}



X509 * ocsp_find_signer_sk_isra_0(stack_st_X509 *param_1,int param_2,X509_NAME *param_3)

{
  long *plVar1;
  int iVar2;
  X509 *pXVar3;
  EVP_MD *type;
  int iVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pXVar3 = X509_find_by_subject(param_1,param_3);
      return pXVar3;
    }
  }
  else {
    if (*(int *)&param_3->entries == 0x14) {
      plVar1 = *(long **)&param_3->modified;
      iVar4 = 0;
      while( true ) {
        iVar2 = OPENSSL_sk_num(param_1);
        if (iVar2 <= iVar4) break;
        pXVar3 = (X509 *)OPENSSL_sk_value(param_1,iVar4);
        if (pXVar3 != (X509 *)0x0) {
          type = (EVP_MD *)
                 EVP_MD_fetch(*(undefined8 *)pXVar3[1].sha1_hash,&_LC2,
                              *(undefined8 *)(pXVar3[1].sha1_hash + 8));
          if (type == (EVP_MD *)0x0) break;
          iVar2 = X509_pubkey_digest(pXVar3,type,(uchar *)&local_58,(uint *)0x0);
          EVP_MD_free(type);
          if (iVar2 == 0) break;
          if ((*plVar1 == local_58 && plVar1[1] == local_50) && ((int)plVar1[2] == local_48))
          goto LAB_0010060a;
        }
        iVar4 = iVar4 + 1;
      }
    }
    pXVar3 = (X509 *)0x0;
LAB_0010060a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pXVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OCSP_basic_verify(OCSP_BASICRESP *bs,stack_st_X509 *certs,X509_STORE *st,ulong flags)

{
  OCSP_RESPDATA *pOVar1;
  OCSP_CERTID *b;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  X509 *x;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long in_FS_OFFSET;
  OCSP_CERTID *local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lVar5 = ocsp_find_signer_sk_isra_0(certs,*(undefined4 *)&bs->signatureAlgorithm,bs->signature);
  if (lVar5 == 0) {
    if (((flags & 2) != 0) ||
       (lVar5 = ocsp_find_signer_sk_isra_0
                          (bs[2].signatureAlgorithm,*(undefined4 *)&bs->signatureAlgorithm,
                           bs->signature), lVar5 == 0)) {
      ERR_new();
      lVar7 = 0;
      ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x6b,"OCSP_basic_verify");
      ERR_set_error(0x27,0x76,0);
      iVar2 = 0;
      uVar11 = 0;
      goto LAB_001006ec;
    }
  }
  else if ((flags & 0x200) != 0) {
    flags = flags | 0x10;
  }
  iVar2 = 1;
  if ((((flags & 4) == 0) && (iVar2 = ocsp_verify_part_0(0,bs,lVar5), iVar2 < 1)) ||
     ((flags & 0x10) != 0)) {
    uVar11 = 0;
    lVar7 = 0;
    goto LAB_001006ec;
  }
  if ((flags & 8) == 0) {
    lVar7 = OPENSSL_sk_dup(bs[2].signatureAlgorithm);
    if ((lVar7 != 0) && (iVar2 = X509_add_certs(lVar7,certs,0), iVar2 != 0)) goto LAB_00100759;
    uVar11 = 0;
  }
  else {
    lVar7 = 0;
LAB_00100759:
    iVar2 = ocsp_verify_signer(lVar5,1,st,flags,lVar7,&local_48);
    uVar11 = local_48;
    if ((iVar2 < 1) || (iVar2 = 1, (flags & 0x100) != 0)) goto LAB_001006ec;
    pOVar1 = bs[1].tbsResponseData;
    iVar2 = OPENSSL_sk_num(local_48);
    if (iVar2 < 1) {
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0xe6,"ocsp_check_issuer");
      ERR_set_error(0x27,0x69,0);
    }
    else {
      iVar2 = OPENSSL_sk_num(pOVar1);
      if (0 < iVar2) {
        puVar6 = (undefined8 *)OPENSSL_sk_value(pOVar1,0);
        local_58 = (OCSP_CERTID *)*puVar6;
        if (iVar2 != 1) {
          iVar12 = 1;
          do {
            puVar6 = (undefined8 *)OPENSSL_sk_value(pOVar1,iVar12);
            b = (OCSP_CERTID *)*puVar6;
            iVar3 = OCSP_id_issuer_cmp(local_58,b);
            if (iVar3 != 0) {
              iVar2 = OBJ_cmp((ASN1_OBJECT *)b->hashAlgorithm,(ASN1_OBJECT *)local_58->hashAlgorithm
                             );
              if (iVar2 == 0) goto LAB_00100825;
              local_58 = (OCSP_CERTID *)0x0;
              break;
            }
            iVar12 = iVar12 + 1;
          } while (iVar2 != iVar12);
        }
        uVar8 = OPENSSL_sk_value(uVar11,0);
        iVar2 = OPENSSL_sk_num(uVar11);
        if (iVar2 < 2) {
LAB_001009c8:
          iVar2 = ocsp_match_issuerid(uVar8,local_58,pOVar1);
          if (iVar2 != 0) goto LAB_001006ec;
        }
        else {
          uVar9 = OPENSSL_sk_value(uVar11,1);
          iVar2 = ocsp_match_issuerid(uVar9,local_58,pOVar1);
          if (iVar2 < 0) goto LAB_001006ec;
          if (iVar2 == 0) goto LAB_001009c8;
          uVar10 = X509_get_extension_flags(uVar8);
          if ((uVar10 & 4) != 0) {
            uVar4 = X509_get_extended_key_usage(uVar8);
            iVar2 = 1;
            if ((uVar4 & 0x20) != 0) goto LAB_001006ec;
          }
          ERR_new();
          ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x178,"ocsp_check_delegated");
          ERR_set_error(0x27,0x67,0);
        }
LAB_00100825:
        iVar2 = 0;
        if ((flags & 0x20) == 0) {
          iVar2 = OPENSSL_sk_num(uVar11);
          x = (X509 *)OPENSSL_sk_value(uVar11,iVar2 + -1);
          iVar2 = X509_check_trust(x,0xb4,0);
          if (iVar2 != 1) {
            ERR_new();
            ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x95,"OCSP_basic_verify");
            ERR_set_error(0x27,0x70,0);
            iVar2 = 0;
          }
        }
        goto LAB_001006ec;
      }
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x112,"ocsp_check_ids");
      ERR_set_error(0x27,0x6f,0);
    }
  }
  iVar2 = -1;
LAB_001006ec:
  OSSL_STACK_OF_X509_free(uVar11);
  OPENSSL_sk_free(lVar7);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



bool OCSP_resp_get0_signer(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = ocsp_find_signer_sk_isra_0
                    (param_3,*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  bVar2 = true;
  if (lVar1 == 0) {
    lVar1 = ocsp_find_signer_sk_isra_0
                      (*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 0x10));
    bVar2 = lVar1 != 0;
  }
  *param_2 = lVar1;
  return bVar2;
}



int OCSP_request_verify(OCSP_REQUEST *req,stack_st_X509 *certs,X509_STORE *store,ulong flags)

{
  OCSP_SIGNATURE *pOVar1;
  X509_NAME *name;
  int iVar2;
  X509 *pXVar3;
  stack_st_X509_EXTENSION *psVar4;
  
  if (req[2].tbsRequest == (OCSP_REQINFO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x18a,"OCSP_request_verify");
    ERR_set_error(0x27,0x80,0);
  }
  else {
    pOVar1 = req->optionalSignature;
    if ((pOVar1 == (OCSP_SIGNATURE *)0x0) || (*(int *)&pOVar1->signatureAlgorithm != 4)) {
      ERR_new();
      ERR_set_debug("crypto/ocsp/ocsp_vfy.c",399,"OCSP_request_verify");
      ERR_set_error(0x27,0x81,0);
    }
    else {
      name = (X509_NAME *)pOVar1->signature;
      if (((flags & 2) != 0) ||
         (pXVar3 = X509_find_by_subject
                             ((stack_st_X509 *)(req[2].tbsRequest)->requestExtensions,name),
         pXVar3 == (X509 *)0x0)) {
        pXVar3 = X509_find_by_subject(certs,name);
        if (pXVar3 == (X509 *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/ocsp/ocsp_vfy.c",0x195,"OCSP_request_verify");
          ERR_set_error(0x27,0x76,0);
          return 0;
        }
        if ((flags & 0x200) != 0) {
          flags = flags | 0x10;
        }
      }
      if (((flags & 4) != 0) || (iVar2 = ocsp_verify_part_0(req,0,pXVar3), 0 < iVar2)) {
        if ((flags & 0x10) == 0) {
          psVar4 = (stack_st_X509_EXTENSION *)0x0;
          if ((flags & 8) == 0) {
            psVar4 = (req[2].tbsRequest)->requestExtensions;
          }
          iVar2 = ocsp_verify_signer(pXVar3,0,store,flags,psVar4,0);
          return (int)(0 < iVar2);
        }
        return 1;
      }
    }
  }
  return 0;
}


