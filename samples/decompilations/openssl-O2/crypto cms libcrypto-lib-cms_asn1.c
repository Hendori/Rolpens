
undefined1 * CMS_IssuerAndSerialNumber_it(void)

{
  return local_it_37;
}



undefined1 * CMS_OtherCertificateFormat_it(void)

{
  return local_it_35;
}



undefined1 * CMS_CertificateChoices_it(void)

{
  return local_it_36;
}



undefined1 * CMS_SignerIdentifier_it(void)

{
  return local_it_33;
}



undefined1 * CMS_EncapsulatedContentInfo_it(void)

{
  return local_it_29;
}



undefined1 * CMS_SignerInfo_it(void)

{
  return local_it_34;
}



undefined1 * CMS_OtherRevocationInfoFormat_it(void)

{
  return local_it_31;
}



undefined1 * CMS_RevocationInfoChoice_it(void)

{
  return local_it_32;
}



undefined1 * CMS_SignedData_it(void)

{
  return local_it_30;
}



undefined1 * CMS_OriginatorInfo_it(void)

{
  return local_it_13;
}



undefined1 * CMS_EncryptedContentInfo_it(void)

{
  return local_it_28;
}



undefined1 * CMS_KeyTransRecipientInfo_it(void)

{
  return local_it_27;
}



undefined1 * CMS_OtherKeyAttribute_it(void)

{
  return local_it_26;
}



undefined1 * CMS_RecipientKeyIdentifier_it(void)

{
  return local_it_25;
}



undefined1 * CMS_KeyAgreeRecipientIdentifier_it(void)

{
  return local_it_23;
}



undefined1 * CMS_RecipientEncryptedKey_it(void)

{
  return local_it_24;
}



undefined1 * CMS_OriginatorPublicKey_it(void)

{
  return local_it_22;
}



undefined1 * CMS_OriginatorIdentifierOrKey_it(void)

{
  return local_it_20;
}



undefined1 * CMS_KeyAgreeRecipientInfo_it(void)

{
  return local_it_21;
}



undefined1 * CMS_KEKIdentifier_it(void)

{
  return local_it_18;
}



undefined1 * CMS_KEKRecipientInfo_it(void)

{
  return local_it_19;
}



undefined1 * CMS_PasswordRecipientInfo_it(void)

{
  return local_it_17;
}



undefined1 * CMS_OtherRecipientInfo_it(void)

{
  return local_it_15;
}



undefined1 * CMS_RecipientInfo_it(void)

{
  return local_it_16;
}



undefined1 * CMS_EnvelopedData_it(void)

{
  return local_it_14;
}



undefined1 * CMS_DigestedData_it(void)

{
  return local_it_12;
}



undefined1 * CMS_EncryptedData_it(void)

{
  return local_it_11;
}



undefined1 * CMS_AuthEnvelopedData_it(void)

{
  return local_it_10;
}



undefined1 * CMS_AuthenticatedData_it(void)

{
  return local_it_6;
}



undefined1 * CMS_CompressedData_it(void)

{
  return local_it_9;
}



undefined1 * CMS_ContentInfo_adb(void)

{
  return internal_adb_7;
}



undefined1 * CMS_ReceiptsFrom_it(void)

{
  return local_it_2;
}



undefined8 cms_rek_cb(int param_1,long *param_2)

{
  if (param_1 != 3) {
    return 1;
  }
  EVP_PKEY_free(*(EVP_PKEY **)(*param_2 + 0x10));
  return 1;
}



undefined8 cms_ec_cb(int param_1,long *param_2)

{
  if (param_1 != 3) {
    return 1;
  }
  CRYPTO_clear_free(*(undefined8 *)(*param_2 + 0x20),*(undefined8 *)(*param_2 + 0x28),
                    "crypto/cms/cms_asn1.c",100);
  return 1;
}



undefined8 cms_kari_cb(int param_1,long *param_2)

{
  long lVar1;
  EVP_CIPHER_CTX *ctx;
  
  lVar1 = *param_2;
  if (param_1 == 1) {
    ctx = EVP_CIPHER_CTX_new();
    *(EVP_CIPHER_CTX **)(lVar1 + 0x30) = ctx;
    if (ctx == (EVP_CIPHER_CTX *)0x0) {
      return 0;
    }
    EVP_CIPHER_CTX_set_flags(ctx,1);
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
  else if (param_1 == 3) {
    EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar1 + 0x28));
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(lVar1 + 0x30));
  }
  return 1;
}



bool cms_cb(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  CMS_ContentInfo *cms;
  int iVar1;
  BIO *pBVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return true;
  }
  cms = (CMS_ContentInfo *)*param_2;
  switch(param_1) {
  case 3:
    CRYPTO_free(*(void **)(cms + 0x18));
  default:
    return true;
  case 10:
    iVar1 = CMS_stream((uchar ***)(param_4 + 2),cms);
    if (iVar1 < 1) {
      return false;
    }
switchD_0010030f_caseD_c:
    pBVar2 = CMS_dataInit(cms,(BIO *)*param_4);
    param_4[1] = pBVar2;
    return pBVar2 != (BIO *)0x0;
  case 0xb:
  case 0xd:
    iVar1 = CMS_dataFinal(cms,(BIO *)param_4[1]);
    return 0 < iVar1;
  case 0xc:
    goto switchD_0010030f_caseD_c;
  }
}



undefined8 cms_ri_cb(int param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (param_1 != 2) {
    return 1;
  }
  piVar2 = (int *)*param_2;
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      CRYPTO_clear_free(*(undefined8 *)(*(long *)(piVar2 + 2) + 0x20),
                        *(undefined8 *)(*(long *)(piVar2 + 2) + 0x28),"crypto/cms/cms_asn1.c",0xde);
    }
    else if (iVar1 == 3) {
      CRYPTO_clear_free(*(undefined8 *)(*(long *)(piVar2 + 2) + 0x20),
                        *(undefined8 *)(*(long *)(piVar2 + 2) + 0x28),"crypto/cms/cms_asn1.c",0xe1);
    }
    return 1;
  }
  lVar3 = *(long *)(piVar2 + 2);
  EVP_PKEY_free(*(EVP_PKEY **)(lVar3 + 0x28));
  X509_free(*(X509 **)(lVar3 + 0x20));
  EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar3 + 0x30));
  return 1;
}



undefined8 cms_si_cb(int param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 != 3) {
    return 1;
  }
  lVar1 = *param_2;
  EVP_PKEY_free(*(EVP_PKEY **)(lVar1 + 0x40));
  X509_free(*(X509 **)(lVar1 + 0x38));
  EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0x48));
  EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar1 + 0x50));
  return 1;
}



void CMS_SignedData_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)CMS_SignedData_it();
  ASN1_item_new(it);
  return;
}



void CMS_SignedData_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)CMS_SignedData_it();
  ASN1_item_free(param_1,it);
  return;
}



void CMS_EnvelopedData_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)CMS_EnvelopedData_it();
  ASN1_item_dup(it,param_1);
  return;
}



undefined1 * CMS_ContentInfo_it(void)

{
  return local_it_8;
}



undefined1 * CMS_Attributes_Sign_it(void)

{
  return local_it_5;
}



undefined1 * CMS_Attributes_Verify_it(void)

{
  return local_it_4;
}



undefined1 * CMS_ReceiptRequest_it(void)

{
  return local_it_3;
}



undefined1 * CMS_Receipt_it(void)

{
  return local_it_1;
}



void CMS_SharedInfo_encode(uchar **param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  uint *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  uint local_14;
  long local_10;
  
  local_28 = (undefined1 *)&local_58;
  uVar1 = param_4 << 3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &local_14;
  local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | param_4 << 0x1b;
  local_58 = _LC1;
  local_48 = 0;
  local_38 = param_2;
  local_30 = param_3;
  ASN1_item_i2d((ASN1_VALUE *)&local_38,param_1,(ASN1_ITEM *)local_it_0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


