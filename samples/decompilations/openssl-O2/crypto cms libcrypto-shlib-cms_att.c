
uint cms_check_attribute(int param_1,uint param_2,uint param_3,stack_st_X509_ATTRIBUTE *param_4,
                        uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  X509_ATTRIBUTE *pXVar4;
  
  iVar1 = X509at_get_attr_by_NID(param_4,param_1,-1);
  if ((iVar1 < 0) || (pXVar4 = X509at_get_attr(param_4,iVar1), pXVar4 == (X509_ATTRIBUTE *)0x0)) {
    uVar3 = 1;
    if ((param_5 != 0) && (uVar3 = param_5, (param_2 & 0x10) != 0)) {
      return (uint)((param_2 & param_3) == 0);
    }
    return uVar3;
  }
  iVar2 = X509_ATTRIBUTE_count(pXVar4);
  if (((param_2 & param_3) != 0) &&
     ((((param_2 & 0x20) == 0 || (iVar1 = X509at_get_attr_by_NID(param_4,param_1,iVar1), iVar1 < 0))
      || (pXVar4 = X509at_get_attr(param_4,iVar1), pXVar4 == (X509_ATTRIBUTE *)0x0)))) {
    if ((param_2 & 0x40) == 0) {
      return (uint)(iVar2 != 0);
    }
    return (uint)(iVar2 == 1);
  }
  return 0;
}



int CMS_signed_get_attr_count(CMS_SignerInfo *si)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_count(*(stack_st_X509_ATTRIBUTE **)(si + 0x18));
  return iVar1;
}



int CMS_signed_get_attr_by_NID(CMS_SignerInfo *si,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_by_NID(*(stack_st_X509_ATTRIBUTE **)(si + 0x18),nid,lastpos);
  return iVar1;
}



int CMS_signed_get_attr_by_OBJ(CMS_SignerInfo *si,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_by_OBJ(*(stack_st_X509_ATTRIBUTE **)(si + 0x18),obj,lastpos);
  return iVar1;
}



X509_ATTRIBUTE * CMS_signed_get_attr(CMS_SignerInfo *si,int loc)

{
  X509_ATTRIBUTE *pXVar1;
  
  pXVar1 = X509at_get_attr(*(stack_st_X509_ATTRIBUTE **)(si + 0x18),loc);
  return pXVar1;
}



X509_ATTRIBUTE * CMS_signed_delete_attr(CMS_SignerInfo *si,int loc)

{
  X509_ATTRIBUTE *pXVar1;
  
  pXVar1 = X509at_delete_attr(*(stack_st_X509_ATTRIBUTE **)(si + 0x18),loc);
  return pXVar1;
}



int CMS_signed_add1_attr(CMS_SignerInfo *si,X509_ATTRIBUTE *attr)

{
  long lVar1;
  
  lVar1 = ossl_x509at_add1_attr(si + 0x18);
  return (int)(lVar1 != 0);
}



int CMS_signed_add1_attr_by_OBJ(CMS_SignerInfo *si,ASN1_OBJECT *obj,int type,void *bytes,int len)

{
  long lVar1;
  
  lVar1 = ossl_x509at_add1_attr_by_OBJ(si + 0x18);
  return (int)(lVar1 != 0);
}



int CMS_signed_add1_attr_by_NID(CMS_SignerInfo *si,int nid,int type,void *bytes,int len)

{
  long lVar1;
  
  lVar1 = ossl_x509at_add1_attr_by_NID(si + 0x18);
  return (int)(lVar1 != 0);
}



int CMS_signed_add1_attr_by_txt(CMS_SignerInfo *si,char *attrname,int type,void *bytes,int len)

{
  long lVar1;
  
  lVar1 = ossl_x509at_add1_attr_by_txt(si + 0x18);
  return (int)(lVar1 != 0);
}



void * CMS_signed_get0_data_by_OBJ(CMS_SignerInfo *si,ASN1_OBJECT *oid,int lastpos,int type)

{
  void *pvVar1;
  
  pvVar1 = X509at_get0_data_by_OBJ(*(stack_st_X509_ATTRIBUTE **)(si + 0x18),oid,lastpos,type);
  return pvVar1;
}



int CMS_unsigned_get_attr_count(CMS_SignerInfo *si)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_count(*(stack_st_X509_ATTRIBUTE **)(si + 0x30));
  return iVar1;
}



int CMS_unsigned_get_attr_by_NID(CMS_SignerInfo *si,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_by_NID(*(stack_st_X509_ATTRIBUTE **)(si + 0x30),nid,lastpos);
  return iVar1;
}



int CMS_unsigned_get_attr_by_OBJ(CMS_SignerInfo *si,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_by_OBJ(*(stack_st_X509_ATTRIBUTE **)(si + 0x30),obj,lastpos);
  return iVar1;
}



X509_ATTRIBUTE * CMS_unsigned_get_attr(CMS_SignerInfo *si,int loc)

{
  X509_ATTRIBUTE *pXVar1;
  
  pXVar1 = X509at_get_attr(*(stack_st_X509_ATTRIBUTE **)(si + 0x30),loc);
  return pXVar1;
}



X509_ATTRIBUTE * CMS_unsigned_delete_attr(CMS_SignerInfo *si,int loc)

{
  X509_ATTRIBUTE *pXVar1;
  
  pXVar1 = X509at_delete_attr(*(stack_st_X509_ATTRIBUTE **)(si + 0x30),loc);
  return pXVar1;
}



int CMS_unsigned_add1_attr(CMS_SignerInfo *si,X509_ATTRIBUTE *attr)

{
  long lVar1;
  
  lVar1 = ossl_x509at_add1_attr(si + 0x30);
  return (int)(lVar1 != 0);
}



int CMS_unsigned_add1_attr_by_OBJ(CMS_SignerInfo *si,ASN1_OBJECT *obj,int type,void *bytes,int len)

{
  long lVar1;
  
  lVar1 = ossl_x509at_add1_attr_by_OBJ(si + 0x30);
  return (int)(lVar1 != 0);
}



int CMS_unsigned_add1_attr_by_NID(CMS_SignerInfo *si,int nid,int type,void *bytes,int len)

{
  long lVar1;
  
  lVar1 = ossl_x509at_add1_attr_by_NID(si + 0x30);
  return (int)(lVar1 != 0);
}



int CMS_unsigned_add1_attr_by_txt(CMS_SignerInfo *si,char *attrname,int type,void *bytes,int len)

{
  long lVar1;
  
  lVar1 = ossl_x509at_add1_attr_by_txt(si + 0x30);
  return (int)(lVar1 != 0);
}



void * CMS_unsigned_get0_data_by_OBJ(CMS_SignerInfo *si,ASN1_OBJECT *oid,int lastpos,int type)

{
  void *pvVar1;
  
  pvVar1 = X509at_get0_data_by_OBJ(*(stack_st_X509_ATTRIBUTE **)(si + 0x30),oid,lastpos,type);
  return pvVar1;
}



undefined8 ossl_cms_si_check_attributes(CMS_SignerInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = &cms_attribute_properties;
  iVar3 = CMS_signed_get_attr_count(param_1);
  iVar4 = CMS_unsigned_get_attr_count(param_1);
  while( true ) {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    iVar5 = cms_check_attribute(uVar1,uVar2,1,*(undefined8 *)(param_1 + 0x18),0 < iVar3);
    if (iVar5 == 0) break;
    iVar5 = cms_check_attribute(uVar1,uVar2,2,*(undefined8 *)(param_1 + 0x30),0 < iVar4);
    if (iVar5 == 0) break;
    puVar6 = puVar6 + 2;
    if ((NoteGnuProperty_4 *)puVar6 == &NoteGnuProperty_4_00100418) {
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_att.c",0x11a,"ossl_cms_si_check_attributes");
  ERR_set_error(0x2e,0xa1,0);
  return 0;
}


