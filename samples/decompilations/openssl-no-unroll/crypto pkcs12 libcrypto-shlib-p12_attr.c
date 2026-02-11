
int PKCS12_add_localkeyid(PKCS12_SAFEBAG *bag,uchar *name,int namelen)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID(&bag->attrib,0x9d,4,name,namelen);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



int PKCS8_add_keyusage(PKCS8_PRIV_KEY_INFO *p8,int usage)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_11 = (undefined1)usage;
  iVar1 = PKCS8_pkey_add1_attr_by_NID(p8,0x53,3,&local_11,1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PKCS12_add_friendlyname_asc(PKCS12_SAFEBAG *bag,char *name,int namelen)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID(&bag->attrib,0x9c,0x1001,(uchar *)name,namelen);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



bool PKCS12_add_friendlyname_utf8(long param_1,uchar *param_2,int param_3)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID
                     ((stack_st_X509_ATTRIBUTE **)(param_1 + 0x10),0x9c,0x1000,param_2,param_3);
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



int PKCS12_add_friendlyname_uni(PKCS12_SAFEBAG *bag,uchar *name,int namelen)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID(&bag->attrib,0x9c,0x1002,name,namelen);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



int PKCS12_add_CSPName_asc(PKCS12_SAFEBAG *bag,char *name,int namelen)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID(&bag->attrib,0x1a1,0x1001,(uchar *)name,namelen);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



bool PKCS12_add1_attr_by_NID(long param_1,int param_2,int param_3,uchar *param_4,int param_5)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID
                     ((stack_st_X509_ATTRIBUTE **)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



bool PKCS12_add1_attr_by_txt(long param_1,char *param_2,int param_3,uchar *param_4,int param_5)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_txt
                     ((stack_st_X509_ATTRIBUTE **)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



ASN1_TYPE * PKCS12_get_attr_gen(stack_st_X509_ATTRIBUTE *attrs,int attr_nid)

{
  int loc;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar1;
  
  loc = X509at_get_attr_by_NID(attrs,attr_nid,-1);
  if (-1 < loc) {
    attr = X509at_get_attr(attrs,loc);
    pAVar1 = X509_ATTRIBUTE_get0_type(attr,0);
    return pAVar1;
  }
  return (ASN1_TYPE *)0x0;
}



char * PKCS12_get_friendlyname(PKCS12_SAFEBAG *bag)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)PKCS12_SAFEBAG_get0_attr(bag,0x9c);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x1e)) {
    pcVar2 = (char *)OPENSSL_uni2utf8(*(undefined8 *)(*(undefined4 **)(piVar1 + 2) + 2),
                                      **(undefined4 **)(piVar1 + 2));
    return pcVar2;
  }
  return (char *)0x0;
}



undefined8 PKCS12_SAFEBAG_get0_attrs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void PKCS12_SAFEBAG_set0_attrs(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x10) != param_2) {
    OPENSSL_sk_free();
  }
  *(long *)(param_1 + 0x10) = param_2;
  return;
}


