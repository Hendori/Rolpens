
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
  uint uVar1;
  stack_st_X509_ATTRIBUTE *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  X509_ATTRIBUTE *pXVar8;
  int *piVar9;
  
  iVar3 = CMS_signed_get_attr_count(param_1);
  iVar4 = CMS_unsigned_get_attr_count(param_1);
  piVar9 = &cms_attribute_properties;
  if (0 < iVar3) {
    do {
      iVar3 = *piVar9;
      psVar2 = *(stack_st_X509_ATTRIBUTE **)(param_1 + 0x18);
      uVar1 = piVar9[1];
      iVar5 = X509at_get_attr_by_NID(psVar2,iVar3,-1);
      if ((iVar5 < 0) || (pXVar8 = X509at_get_attr(psVar2,iVar5), pXVar8 == (X509_ATTRIBUTE *)0x0))
      {
        uVar7 = ~uVar1 & 0x11;
joined_r0x00100397:
        if (uVar7 == 0) goto LAB_001002b7;
      }
      else {
        uVar7 = X509_ATTRIBUTE_count(pXVar8);
        if (((uVar1 & 1) == 0) ||
           ((((uVar1 & 0x20) != 0 &&
             (iVar5 = X509at_get_attr_by_NID(psVar2,iVar3,iVar5), -1 < iVar5)) &&
            (pXVar8 = X509at_get_attr(psVar2,iVar5), pXVar8 != (X509_ATTRIBUTE *)0x0))))
        goto LAB_001002b7;
        if ((uVar1 & 0x40) == 0) goto joined_r0x00100397;
        if (uVar7 != 1) goto LAB_001002b7;
      }
      psVar2 = *(stack_st_X509_ATTRIBUTE **)(param_1 + 0x30);
      iVar5 = X509at_get_attr_by_NID(psVar2,iVar3,-1);
      if ((iVar5 < 0) || (pXVar8 = X509at_get_attr(psVar2,iVar5), pXVar8 == (X509_ATTRIBUTE *)0x0))
      {
        if ((0 < iVar4) && ((~uVar1 & 0x12) == 0)) goto LAB_001002b7;
        piVar9 = piVar9 + 2;
        if ((NoteGnuProperty_4 *)piVar9 == &NoteGnuProperty_4_00100638) {
          return 1;
        }
      }
      else {
        iVar6 = X509_ATTRIBUTE_count(pXVar8);
        if (((uVar1 & 2) == 0) ||
           ((((uVar1 & 0x20) != 0 &&
             (iVar3 = X509at_get_attr_by_NID(psVar2,iVar3,iVar5), -1 < iVar3)) &&
            (pXVar8 = X509at_get_attr(psVar2,iVar3), pXVar8 != (X509_ATTRIBUTE *)0x0))))
        goto LAB_001002b7;
        if ((uVar1 & 0x40) == 0) {
          if (iVar6 == 0) goto LAB_001002b7;
          piVar9 = piVar9 + 2;
          if ((NoteGnuProperty_4 *)piVar9 == &NoteGnuProperty_4_00100638) {
            return 1;
          }
        }
        else {
          if (iVar6 != 1) goto LAB_001002b7;
          piVar9 = piVar9 + 2;
          if ((NoteGnuProperty_4 *)piVar9 == &NoteGnuProperty_4_00100638) {
            return 1;
          }
        }
      }
    } while( true );
  }
LAB_001001f7:
  do {
    iVar3 = *piVar9;
    psVar2 = *(stack_st_X509_ATTRIBUTE **)(param_1 + 0x18);
    uVar1 = piVar9[1];
    iVar5 = X509at_get_attr_by_NID(psVar2,iVar3,-1);
    if ((-1 < iVar5) && (pXVar8 = X509at_get_attr(psVar2,iVar5), pXVar8 != (X509_ATTRIBUTE *)0x0)) {
      iVar6 = X509_ATTRIBUTE_count(pXVar8);
      if (((uVar1 & 1) == 0) ||
         ((((uVar1 & 0x20) != 0 && (iVar5 = X509at_get_attr_by_NID(psVar2,iVar3,iVar5), -1 < iVar5))
          && (pXVar8 = X509at_get_attr(psVar2,iVar5), pXVar8 != (X509_ATTRIBUTE *)0x0)))) {
LAB_001002b7:
        ERR_new();
        ERR_set_debug("crypto/cms/cms_att.c",0x11a,"ossl_cms_si_check_attributes");
        ERR_set_error(0x2e,0xa1,0);
        return 0;
      }
      if ((uVar1 & 0x40) == 0) {
        if (iVar6 == 0) goto LAB_001002b7;
      }
      else if (iVar6 != 1) goto LAB_001002b7;
    }
    psVar2 = *(stack_st_X509_ATTRIBUTE **)(param_1 + 0x30);
    iVar5 = X509at_get_attr_by_NID(psVar2,iVar3,-1);
    if ((iVar5 < 0) || (pXVar8 = X509at_get_attr(psVar2,iVar5), pXVar8 == (X509_ATTRIBUTE *)0x0)) {
      if ((0 < iVar4) && ((~uVar1 & 0x12) == 0)) goto LAB_001002b7;
    }
    else {
      iVar6 = X509_ATTRIBUTE_count(pXVar8);
      if (((uVar1 & 2) == 0) ||
         ((((uVar1 & 0x20) != 0 && (iVar3 = X509at_get_attr_by_NID(psVar2,iVar3,iVar5), -1 < iVar3))
          && (pXVar8 = X509at_get_attr(psVar2,iVar3), pXVar8 != (X509_ATTRIBUTE *)0x0))))
      goto LAB_001002b7;
      if ((uVar1 & 0x40) == 0) {
        if (iVar6 == 0) goto LAB_001002b7;
        piVar9 = piVar9 + 2;
        if ((NoteGnuProperty_4 *)piVar9 == &NoteGnuProperty_4_00100638) {
          return 1;
        }
        goto LAB_001001f7;
      }
      if (iVar6 != 1) goto LAB_001002b7;
    }
    piVar9 = piVar9 + 2;
    if ((NoteGnuProperty_4 *)piVar9 == &NoteGnuProperty_4_00100638) {
      return 1;
    }
  } while( true );
}


