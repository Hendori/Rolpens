
bool cms_msgSigDigest(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  char *name;
  EVP_MD *pEVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar2 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 0x10));
  name = OBJ_nid2sn(iVar2);
  pEVar3 = EVP_get_digestbyname(name);
  bVar7 = false;
  if (pEVar3 != (EVP_MD *)0x0) {
    uVar4 = ossl_cms_ctx_get0_propq(*(undefined8 *)(param_1 + 0x58));
    uVar5 = ossl_cms_ctx_get0_libctx(*(undefined8 *)(param_1 + 0x58));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = CMS_Attributes_Verify_it();
    iVar2 = ossl_asn1_item_digest_ex(uVar6,pEVar3,uVar1,param_2,param_3,uVar5,uVar4);
    bVar7 = iVar2 != 0;
  }
  return bVar7;
}



CMS_ReceiptRequest * d2i_CMS_ReceiptRequest(CMS_ReceiptRequest **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CMS_ReceiptRequest_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (CMS_ReceiptRequest *)pAVar1;
}



int i2d_CMS_ReceiptRequest(CMS_ReceiptRequest *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)CMS_ReceiptRequest_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMS_ReceiptRequest * CMS_ReceiptRequest_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CMS_ReceiptRequest_it();
  pAVar1 = ASN1_item_new(it);
  return (CMS_ReceiptRequest *)pAVar1;
}



void CMS_ReceiptRequest_free(CMS_ReceiptRequest *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)CMS_ReceiptRequest_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined8 CMS_get1_ReceiptRequest(CMS_SignerInfo *param_1,undefined8 *param_2)

{
  ASN1_OBJECT *oid;
  ASN1_STRING *oct;
  ASN1_ITEM *it;
  CMS_ReceiptRequest *a;
  undefined8 uVar1;
  
  oid = OBJ_nid2obj(0xd4);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  oct = (ASN1_STRING *)CMS_signed_get0_data_by_OBJ(param_1,oid,-3,0x10);
  uVar1 = 0;
  if (oct != (ASN1_STRING *)0x0) {
    it = (ASN1_ITEM *)CMS_ReceiptRequest_it();
    a = (CMS_ReceiptRequest *)ASN1_item_unpack(oct,it);
    if (a == (CMS_ReceiptRequest *)0x0) {
      return 0xffffffff;
    }
    if (param_2 == (undefined8 *)0x0) {
      CMS_ReceiptRequest_free(a);
    }
    else {
      *param_2 = a;
    }
    uVar1 = 1;
  }
  return uVar1;
}



bool ossl_cms_check_signing_certs(CMS_SignerInfo *param_1,undefined8 param_2)

{
  int iVar1;
  ASN1_OBJECT *pAVar2;
  ASN1_STRING *oct;
  ASN1_ITEM *pAVar3;
  ASN1_STRING *oct_00;
  bool bVar4;
  
  pAVar2 = OBJ_nid2obj(0xdf);
  oct = (ASN1_STRING *)CMS_signed_get0_data_by_OBJ(param_1,pAVar2,-3,0x10);
  if (oct != (ASN1_STRING *)0x0) {
    pAVar3 = (ASN1_ITEM *)ESS_SIGNING_CERT_it();
    oct = (ASN1_STRING *)ASN1_item_unpack(oct,pAVar3);
    if (oct == (ASN1_STRING *)0x0) {
      oct_00 = (ASN1_STRING *)0x0;
      bVar4 = false;
      goto LAB_00100278;
    }
  }
  pAVar2 = OBJ_nid2obj(0x43e);
  oct_00 = (ASN1_STRING *)CMS_signed_get0_data_by_OBJ(param_1,pAVar2,-3,0x10);
  if (oct_00 != (ASN1_STRING *)0x0) {
    pAVar3 = (ASN1_ITEM *)ESS_SIGNING_CERT_V2_it();
    oct_00 = (ASN1_STRING *)ASN1_item_unpack(oct_00,pAVar3);
    if (oct_00 == (ASN1_STRING *)0x0) {
      bVar4 = false;
      goto LAB_00100278;
    }
  }
  iVar1 = OSSL_ESS_check_signing_certs(oct,oct_00,param_2,1);
  bVar4 = 0 < iVar1;
LAB_00100278:
  ESS_SIGNING_CERT_free(oct);
  ESS_SIGNING_CERT_V2_free(oct_00);
  return bVar4;
}



CMS_ReceiptRequest *
CMS_ReceiptRequest_create0_ex
          (void *param_1,int param_2,undefined4 param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  CMS_ReceiptRequest *a;
  
  a = CMS_ReceiptRequest_new();
  if (a == (CMS_ReceiptRequest *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_ess.c",0x7d,"CMS_ReceiptRequest_create0_ex");
    ERR_set_error(0x2e,0x8002e,0);
  }
  else {
    if (param_1 != (void *)0x0) {
      ASN1_STRING_set0(*(ASN1_STRING **)a,param_1,param_2);
LAB_001002fd:
      OPENSSL_sk_pop_free(*(undefined8 *)(a + 0x10),&GENERAL_NAMES_free);
      *(undefined8 *)(a + 0x10) = param_5;
      puVar1 = *(undefined4 **)(a + 8);
      if (param_4 != 0) {
        *puVar1 = 1;
        *(long *)(puVar1 + 2) = param_4;
        return a;
      }
      *puVar1 = 0;
      puVar1[2] = param_3;
      return a;
    }
    iVar2 = ASN1_STRING_set(*(ASN1_STRING **)a,(void *)0x0,0x20);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_ess.c",0x84,"CMS_ReceiptRequest_create0_ex");
      ERR_set_error(0x2e,0x8000d,0);
    }
    else {
      iVar2 = RAND_bytes_ex(param_6,*(undefined8 *)(*(long *)a + 8),0x20,0);
      if (0 < iVar2) goto LAB_001002fd;
    }
  }
  CMS_ReceiptRequest_free(a);
  return (CMS_ReceiptRequest *)0x0;
}



void CMS_ReceiptRequest_create0(void)

{
  CMS_ReceiptRequest_create0_ex();
  return;
}



undefined8 CMS_add1_ReceiptRequest(CMS_SignerInfo *param_1,CMS_ReceiptRequest *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (uchar *)0x0;
  iVar1 = i2d_CMS_ReceiptRequest(param_2,&local_28);
  if (iVar1 < 0) {
    ERR_new();
    uVar3 = 0xae;
  }
  else {
    uVar2 = 1;
    iVar1 = CMS_signed_add1_attr_by_NID(param_1,0xd4,0x10,local_28,iVar1);
    if (iVar1 != 0) goto LAB_0010046d;
    ERR_new();
    uVar3 = 0xb4;
  }
  uVar2 = 0;
  ERR_set_debug("crypto/cms/cms_ess.c",uVar3,"CMS_add1_ReceiptRequest");
  ERR_set_error(0x2e,0x8002e,0);
LAB_0010046d:
  CRYPTO_free(local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void CMS_ReceiptRequest_get0_values
               (undefined8 *param_1,undefined8 *param_2,int *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  int *piVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  piVar1 = (int *)param_1[1];
  if (*piVar1 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = piVar1[2];
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = -1;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(piVar1 + 2);
    }
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = param_1[2];
  }
  return;
}



undefined8 ossl_cms_msgSigDigest_add1(CMS_SignerInfo *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_6c;
  undefined1 local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = cms_msgSigDigest(param_2,local_68,&local_6c);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_ess.c",0xf1,"ossl_cms_msgSigDigest_add1");
    ERR_set_error(0x2e,0xac,0);
    uVar2 = 0;
  }
  else {
    iVar1 = CMS_signed_add1_attr_by_NID(param_1,0xd8,4,local_68,local_6c);
    uVar2 = 1;
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_ess.c",0xf6,"ossl_cms_msgSigDigest_add1");
      ERR_set_error(0x2e,0x8002e,0);
      uVar2 = 0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_cms_Receipt_verify(CMS_ContentInfo *param_1,CMS_ContentInfo *param_2)

{
  int iVar1;
  int iVar2;
  stack_st_CMS_SignerInfo *psVar3;
  stack_st_CMS_SignerInfo *psVar4;
  ASN1_OBJECT *pAVar5;
  ASN1_ITEM *pAVar6;
  ASN1_OCTET_STRING **ppAVar7;
  ASN1_VALUE *val;
  CMS_SignerInfo *si;
  CMS_SignerInfo *si_00;
  uint *puVar8;
  undefined4 uVar9;
  long in_FS_OFFSET;
  uint local_94;
  CMS_ReceiptRequest *local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (CMS_ReceiptRequest *)0x0;
  psVar3 = CMS_get0_SignerInfos(param_2);
  psVar4 = CMS_get0_SignerInfos(param_1);
  if ((psVar3 == (stack_st_CMS_SignerInfo *)0x0) || (psVar4 == (stack_st_CMS_SignerInfo *)0x0))
  goto LAB_00100740;
  iVar1 = OPENSSL_sk_num(psVar4);
  if (iVar1 != 1) {
    ERR_new();
    val = (ASN1_VALUE *)0x0;
    uVar9 = 0;
    ERR_set_debug("crypto/cms/cms_ess.c",0x111,"ossl_cms_Receipt_verify");
    ERR_set_error(0x2e,0xa4,0);
    goto LAB_00100745;
  }
  pAVar5 = CMS_get0_eContentType(param_1);
  iVar1 = OBJ_obj2nid(pAVar5);
  if (iVar1 == 0xcc) {
    ppAVar7 = CMS_get0_content(param_1);
    if ((ppAVar7 == (ASN1_OCTET_STRING **)0x0) || (*ppAVar7 == (ASN1_OCTET_STRING *)0x0)) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_ess.c",0x11e,"ossl_cms_Receipt_verify");
      ERR_set_error(0x2e,0x7f,0);
      goto LAB_00100740;
    }
    pAVar6 = (ASN1_ITEM *)CMS_Receipt_it();
    si = (CMS_SignerInfo *)0x0;
    iVar1 = 0;
    val = (ASN1_VALUE *)ASN1_item_unpack(*ppAVar7,pAVar6);
    if (val == (ASN1_VALUE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_ess.c",0x125,"ossl_cms_Receipt_verify");
      ERR_set_error(0x2e,0xa9,0);
      goto LAB_00100740;
    }
    while( true ) {
      iVar2 = OPENSSL_sk_num(psVar3);
      if (iVar2 <= iVar1) break;
      si = (CMS_SignerInfo *)OPENSSL_sk_value(psVar3,iVar1);
      iVar2 = ASN1_STRING_cmp(*(ASN1_STRING **)(si + 0x28),*(ASN1_STRING **)(val + 0x18));
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
    }
    iVar2 = OPENSSL_sk_num(psVar3);
    if (iVar2 == iVar1) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_ess.c",0x132,"ossl_cms_Receipt_verify");
      ERR_set_error(0x2e,0xa6,0);
    }
    else {
      si_00 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar4,0);
      pAVar5 = OBJ_nid2obj(0xd8);
      puVar8 = (uint *)CMS_signed_get0_data_by_OBJ(si_00,pAVar5,-3,4);
      if (puVar8 == (uint *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_ess.c",0x140,"ossl_cms_Receipt_verify");
        ERR_set_error(0x2e,0xa7,0);
      }
      else {
        iVar1 = cms_msgSigDigest(si,local_88,&local_94);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_ess.c",0x145,"ossl_cms_Receipt_verify");
          ERR_set_error(0x2e,0xac,0);
        }
        else if (*puVar8 == local_94) {
          iVar1 = memcmp(local_88,*(void **)(puVar8 + 2),(ulong)local_94);
          if (iVar1 == 0) {
            pAVar5 = OBJ_nid2obj(0x32);
            pAVar5 = (ASN1_OBJECT *)CMS_signed_get0_data_by_OBJ(si,pAVar5,-3,6);
            if (pAVar5 == (ASN1_OBJECT *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/cms/cms_ess.c",0x159,"ossl_cms_Receipt_verify");
              ERR_set_error(0x2e,0xad,0);
            }
            else {
              iVar1 = OBJ_cmp(pAVar5,*(ASN1_OBJECT **)(val + 8));
              if (iVar1 == 0) {
                iVar1 = CMS_get1_ReceiptRequest(si,&local_90);
                if (iVar1 < 1) {
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_ess.c",0x167,"ossl_cms_Receipt_verify");
                  ERR_set_error(0x2e,0xa8,0);
                }
                else {
                  iVar1 = ASN1_STRING_cmp(*(ASN1_STRING **)local_90,*(ASN1_STRING **)(val + 0x10));
                  uVar9 = 1;
                  if (iVar1 == 0) goto LAB_00100745;
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_ess.c",0x16d,"ossl_cms_Receipt_verify");
                  ERR_set_error(0x2e,0xaa,0);
                }
              }
              else {
                ERR_new();
                ERR_set_debug("crypto/cms/cms_ess.c",0x160,"ossl_cms_Receipt_verify");
                ERR_set_error(0x2e,0xab,0);
              }
            }
          }
          else {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_ess.c",0x14f,"ossl_cms_Receipt_verify");
            ERR_set_error(0x2e,0xa2,0);
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_ess.c",0x14a,"ossl_cms_Receipt_verify");
          ERR_set_error(0x2e,0xa3,0);
        }
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_ess.c",0x117,"ossl_cms_Receipt_verify");
    ERR_set_error(0x2e,0xa5,0);
LAB_00100740:
    val = (ASN1_VALUE *)0x0;
  }
  uVar9 = 0;
LAB_00100745:
  CMS_ReceiptRequest_free(local_90);
  pAVar6 = (ASN1_ITEM *)CMS_Receipt_it();
  ASN1_item_free(val,pAVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_STRING * ossl_cms_encode_Receipt(CMS_SignerInfo *param_1)

{
  int iVar1;
  ASN1_OBJECT *oid;
  void *pvVar2;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar3;
  long in_FS_OFFSET;
  CMS_ReceiptRequest *local_40;
  undefined4 local_38 [2];
  void *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (CMS_ReceiptRequest *)0x0;
  iVar1 = CMS_get1_ReceiptRequest(param_1,&local_40);
  if (iVar1 < 1) {
    ERR_new();
    pAVar3 = (ASN1_STRING *)0x0;
    ERR_set_debug("crypto/cms/cms_ess.c",0x18b,"ossl_cms_encode_Receipt");
    ERR_set_error(0x2e,0xa8,0);
  }
  else {
    oid = OBJ_nid2obj(0x32);
    pvVar2 = CMS_signed_get0_data_by_OBJ(param_1,oid,-3,6);
    if (pvVar2 == (void *)0x0) {
      ERR_new();
      pAVar3 = (ASN1_STRING *)0x0;
      ERR_set_debug("crypto/cms/cms_ess.c",0x195,"ossl_cms_encode_Receipt");
      ERR_set_error(0x2e,0xad,0);
    }
    else {
      local_20 = *(undefined8 *)(param_1 + 0x28);
      local_38[0] = 1;
      uStack_28 = *(undefined8 *)local_40;
      local_30 = pvVar2;
      it = (ASN1_ITEM *)CMS_Receipt_it();
      pAVar3 = ASN1_item_pack(local_38,it,(ASN1_OCTET_STRING **)0x0);
    }
  }
  CMS_ReceiptRequest_free(local_40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


