
EVP_PKEY * evp_pkcs82pkey_legacy(PKCS8_PRIV_KEY_INFO *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_90;
  char local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = PKCS8_pkey_get0(&local_90,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,param_1);
  if (iVar2 != 0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      pkey = (EVP_PKEY *)0x0;
      ERR_set_debug("crypto/evp/evp_pkey.c",0x24,"evp_pkcs82pkey_legacy");
      ERR_set_error(6,0x80006,0);
      goto LAB_00100091;
    }
    iVar2 = OBJ_obj2nid(local_90);
    iVar2 = EVP_PKEY_set_type(pkey,iVar2);
    if (iVar2 == 0) {
      i2t_ASN1_OBJECT(local_88,0x50,local_90);
      ERR_new();
      ERR_set_debug("crypto/evp/evp_pkey.c",0x2a,"evp_pkcs82pkey_legacy");
      ERR_set_error(6,0x76,"TYPE=%s",local_88);
    }
    else {
      pcVar1 = *(code **)(*(long *)&pkey->references + 0x138);
      if (pcVar1 == (code *)0x0) {
        pcVar1 = *(code **)(*(long *)&pkey->references + 0x40);
        if (pcVar1 == (code *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/evp/evp_pkey.c",0x38,"evp_pkcs82pkey_legacy");
          ERR_set_error(6,0x90,0);
        }
        else {
          iVar2 = (*pcVar1)(pkey,param_1);
          if (iVar2 != 0) goto LAB_00100091;
          ERR_new();
          ERR_set_debug("crypto/evp/evp_pkey.c",0x34,"evp_pkcs82pkey_legacy");
          ERR_set_error(6,0x91,0);
        }
      }
      else {
        iVar2 = (*pcVar1)(pkey,param_1,param_2,param_3);
        if (iVar2 != 0) goto LAB_00100091;
      }
    }
    EVP_PKEY_free(pkey);
  }
  pkey = (EVP_PKEY *)0x0;
LAB_00100091:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pkey;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKCS82PKEY_ex(PKCS8_PRIV_KEY_INFO *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined8 local_a0;
  uchar *local_98;
  uchar *local_90;
  long local_88;
  ASN1_OBJECT *local_80;
  char local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_98 = (uchar *)0x0;
  local_90 = (uchar *)0x0;
  local_80 = (ASN1_OBJECT *)0x0;
  if ((param_1 != (PKCS8_PRIV_KEY_INFO *)0x0) &&
     (iVar1 = PKCS8_pkey_get0(&local_80,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,param_1),
     iVar1 != 0)) {
    iVar1 = OBJ_obj2txt(local_78,0x32,local_80,0);
    if ((iVar1 != 0) &&
       ((iVar1 = i2d_PKCS8_PRIV_KEY_INFO(param_1,&local_90), 0 < iVar1 && (local_90 != (uchar *)0x0)
        ))) {
      local_98 = local_90;
      uVar3 = param_3;
      local_88 = (long)iVar1;
      auVar5 = OSSL_DECODER_CTX_new_for_pkey(&local_a0,&_LC3,"PrivateKeyInfo",local_78,0x87,param_2)
      ;
      lVar4 = auVar5._0_8_;
      if (lVar4 == 0) {
LAB_0010038b:
        lVar4 = 0;
LAB_0010038e:
        local_a0 = evp_pkcs82pkey_legacy(param_1,param_2,param_3);
      }
      else {
        iVar2 = OSSL_DECODER_CTX_get_num_decoders(lVar4,0x100294,auVar5._8_8_,uVar3);
        if (iVar2 == 0) {
          OSSL_DECODER_CTX_free(lVar4);
          lVar4 = OSSL_DECODER_CTX_new_for_pkey
                            (&local_a0,&_LC3,"PrivateKeyInfo",0,0x87,param_2,param_3);
          if (lVar4 == 0) goto LAB_0010038b;
        }
        iVar2 = OSSL_DECODER_from_data(lVar4,&local_98,&local_88);
        if (iVar2 == 0) goto LAB_0010038e;
      }
      CRYPTO_clear_free(local_90,(long)iVar1,"crypto/evp/evp_pkey.c",0x70);
      OSSL_DECODER_CTX_free(lVar4);
      uVar3 = local_a0;
      goto LAB_00100322;
    }
  }
  uVar3 = 0;
LAB_00100322:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



EVP_PKEY * EVP_PKCS82PKEY(PKCS8_PRIV_KEY_INFO *p8)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)EVP_PKCS82PKEY_ex(p8,0,0);
  return pEVar1;
}



PKCS8_PRIV_KEY_INFO * EVP_PKEY2PKCS8(EVP_PKEY *pkey)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  PKCS8_PRIV_KEY_INFO *pPVar4;
  PKCS8_PRIV_KEY_INFO *pPVar5;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)&pkey[1].save_parameters == 0) {
    pPVar4 = PKCS8_PRIV_KEY_INFO_new();
    if (pPVar4 == (PKCS8_PRIV_KEY_INFO *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_pkey.c",0x9a,__func___0);
      ERR_set_error(6,0x8000d,0);
      goto LAB_001004b4;
    }
    lVar3 = 0;
    pPVar5 = pPVar4;
    if (*(long *)&pkey->references == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_pkey.c",0xa9,__func___0);
      ERR_set_error(6,0x76,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)&pkey->references + 0x48);
      if (pcVar1 == (code *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_pkey.c",0xa5,__func___0);
        ERR_set_error(6,0x90,0);
      }
      else {
        iVar2 = (*pcVar1)(pPVar4,pkey);
        if (iVar2 != 0) goto LAB_001004ac;
        ERR_new();
        ERR_set_debug("crypto/evp/evp_pkey.c",0xa1,__func___0);
        ERR_set_error(6,0x92,0);
      }
    }
LAB_001004a2:
    pPVar4 = (PKCS8_PRIV_KEY_INFO *)0x0;
    PKCS8_PRIV_KEY_INFO_free(pPVar5);
  }
  else {
    local_38 = (uchar *)0x0;
    local_30 = 0;
    lVar3 = OSSL_ENCODER_CTX_new_for_pkey(pkey,0x87,&_LC3,"PrivateKeyInfo",0);
    if ((lVar3 == 0) || (iVar2 = OSSL_ENCODER_to_data(lVar3,&local_38,&local_30), iVar2 == 0)) {
LAB_001004a0:
      pPVar5 = (PKCS8_PRIV_KEY_INFO *)0x0;
      goto LAB_001004a2;
    }
    local_28 = local_38;
    pPVar4 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_28,local_30);
    CRYPTO_free(local_38);
    if (pPVar4 == (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_001004a0;
  }
LAB_001004ac:
  OSSL_ENCODER_CTX_free(lVar3);
LAB_001004b4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar4;
}



int EVP_PKEY_get_attr_count(EVP_PKEY *key)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_count(*(stack_st_X509_ATTRIBUTE **)&key[1].references);
  return iVar1;
}



int EVP_PKEY_get_attr_by_NID(EVP_PKEY *key,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_by_NID(*(stack_st_X509_ATTRIBUTE **)&key[1].references,nid,lastpos);
  return iVar1;
}



int EVP_PKEY_get_attr_by_OBJ(EVP_PKEY *key,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_by_OBJ(*(stack_st_X509_ATTRIBUTE **)&key[1].references,obj,lastpos);
  return iVar1;
}



X509_ATTRIBUTE * EVP_PKEY_get_attr(EVP_PKEY *key,int loc)

{
  X509_ATTRIBUTE *pXVar1;
  
  pXVar1 = X509at_get_attr(*(stack_st_X509_ATTRIBUTE **)&key[1].references,loc);
  return pXVar1;
}



X509_ATTRIBUTE * EVP_PKEY_delete_attr(EVP_PKEY *key,int loc)

{
  X509_ATTRIBUTE *pXVar1;
  
  pXVar1 = X509at_delete_attr(*(stack_st_X509_ATTRIBUTE **)&key[1].references,loc);
  return pXVar1;
}



int EVP_PKEY_add1_attr(EVP_PKEY *key,X509_ATTRIBUTE *attr)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr((stack_st_X509_ATTRIBUTE **)&key[1].references,attr);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



int EVP_PKEY_add1_attr_by_OBJ(EVP_PKEY *key,ASN1_OBJECT *obj,int type,uchar *bytes,int len)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_OBJ
                     ((stack_st_X509_ATTRIBUTE **)&key[1].references,obj,type,bytes,len);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



int EVP_PKEY_add1_attr_by_NID(EVP_PKEY *key,int nid,int type,uchar *bytes,int len)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID
                     ((stack_st_X509_ATTRIBUTE **)&key[1].references,nid,type,bytes,len);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



int EVP_PKEY_add1_attr_by_txt(EVP_PKEY *key,char *attrname,int type,uchar *bytes,int len)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_txt
                     ((stack_st_X509_ATTRIBUTE **)&key[1].references,attrname,type,bytes,len);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



char * EVP_PKEY_get0_type_name(EVP_PKEY *param_1)

{
  char *pcVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (char *)0x0;
  if (*(long *)&param_1[1].save_parameters == 0) {
    ameth = EVP_PKEY_get0_asn1(param_1);
    pcVar1 = local_18;
    if (ameth != (EVP_PKEY_ASN1_METHOD *)0x0) {
      EVP_PKEY_asn1_get0_info((int *)0x0,(int *)0x0,(int *)0x0,(char **)0x0,&local_18,ameth);
      pcVar1 = local_18;
    }
  }
  else {
    pcVar1 = (char *)EVP_KEYMGMT_get0_name(*(long *)&param_1[1].save_parameters);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar1;
}



undefined8 EVP_PKEY_get0_provider(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = EVP_KEYMGMT_get0_provider();
    return uVar1;
  }
  return 0;
}


