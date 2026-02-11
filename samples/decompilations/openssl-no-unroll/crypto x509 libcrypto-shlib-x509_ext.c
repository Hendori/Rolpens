
int X509_CRL_get_ext_count(X509_CRL *x)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_count((stack_st_X509_EXTENSION *)x->crl_number);
  return iVar1;
}



int X509_CRL_get_ext_by_NID(X509_CRL *x,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_NID((stack_st_X509_EXTENSION *)x->crl_number,nid,lastpos);
  return iVar1;
}



int X509_CRL_get_ext_by_OBJ(X509_CRL *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_OBJ((stack_st_X509_EXTENSION *)x->crl_number,obj,lastpos);
  return iVar1;
}



int X509_CRL_get_ext_by_critical(X509_CRL *x,int crit,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_critical((stack_st_X509_EXTENSION *)x->crl_number,crit,lastpos);
  return iVar1;
}



X509_EXTENSION * X509_CRL_get_ext(X509_CRL *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_get_ext((stack_st_X509_EXTENSION *)x->crl_number,loc);
  return pXVar1;
}



X509_EXTENSION * X509_CRL_delete_ext(X509_CRL *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_delete_ext((stack_st_X509_EXTENSION *)x->crl_number,loc);
  return pXVar1;
}



void * X509_CRL_get_ext_d2i(X509_CRL *x,int nid,int *crit,int *idx)

{
  void *pvVar1;
  
  pvVar1 = X509V3_get_d2i((stack_st_X509_EXTENSION *)x->crl_number,nid,crit,idx);
  return pvVar1;
}



int X509_CRL_add1_ext_i2d(X509_CRL *x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  
  iVar1 = X509V3_add1_i2d((stack_st_X509_EXTENSION **)&x->crl_number,nid,value,crit,flags);
  return iVar1;
}



int X509_CRL_add_ext(X509_CRL *x,X509_EXTENSION *ex,int loc)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext((stack_st_X509_EXTENSION **)&x->crl_number,ex,loc);
  return (int)(psVar1 != (stack_st_X509_EXTENSION *)0x0);
}



int X509_get_ext_count(X509 *x)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_count((stack_st_X509_EXTENSION *)x->skid);
  return iVar1;
}



int X509_get_ext_by_NID(X509 *x,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_NID((stack_st_X509_EXTENSION *)x->skid,nid,lastpos);
  return iVar1;
}



int X509_get_ext_by_OBJ(X509 *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_OBJ((stack_st_X509_EXTENSION *)x->skid,obj,lastpos);
  return iVar1;
}



int X509_get_ext_by_critical(X509 *x,int crit,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_critical((stack_st_X509_EXTENSION *)x->skid,crit,lastpos);
  return iVar1;
}



X509_EXTENSION * X509_get_ext(X509 *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_get_ext((stack_st_X509_EXTENSION *)x->skid,loc);
  return pXVar1;
}



X509_EXTENSION * X509_delete_ext(X509 *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_delete_ext((stack_st_X509_EXTENSION *)x->skid,loc);
  return pXVar1;
}



int X509_add_ext(X509 *x,X509_EXTENSION *ex,int loc)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext((stack_st_X509_EXTENSION **)&x->skid,ex,loc);
  return (int)(psVar1 != (stack_st_X509_EXTENSION *)0x0);
}



void * X509_get_ext_d2i(X509 *x,int nid,int *crit,int *idx)

{
  void *pvVar1;
  
  pvVar1 = X509V3_get_d2i((stack_st_X509_EXTENSION *)x->skid,nid,crit,idx);
  return pvVar1;
}



int X509_add1_ext_i2d(X509 *x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  
  iVar1 = X509V3_add1_i2d((stack_st_X509_EXTENSION **)&x->skid,nid,value,crit,flags);
  return iVar1;
}



int X509_REVOKED_get_ext_count(X509_REVOKED *x)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_count(*(stack_st_X509_EXTENSION **)&x->reason);
  return iVar1;
}



int X509_REVOKED_get_ext_by_NID(X509_REVOKED *x,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_NID(*(stack_st_X509_EXTENSION **)&x->reason,nid,lastpos);
  return iVar1;
}



int X509_REVOKED_get_ext_by_OBJ(X509_REVOKED *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_OBJ(*(stack_st_X509_EXTENSION **)&x->reason,obj,lastpos);
  return iVar1;
}



int X509_REVOKED_get_ext_by_critical(X509_REVOKED *x,int crit,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_critical(*(stack_st_X509_EXTENSION **)&x->reason,crit,lastpos);
  return iVar1;
}



X509_EXTENSION * X509_REVOKED_get_ext(X509_REVOKED *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_get_ext(*(stack_st_X509_EXTENSION **)&x->reason,loc);
  return pXVar1;
}



X509_EXTENSION * X509_REVOKED_delete_ext(X509_REVOKED *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_delete_ext(*(stack_st_X509_EXTENSION **)&x->reason,loc);
  return pXVar1;
}



int X509_REVOKED_add_ext(X509_REVOKED *x,X509_EXTENSION *ex,int loc)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext((stack_st_X509_EXTENSION **)&x->reason,ex,loc);
  return (int)(psVar1 != (stack_st_X509_EXTENSION *)0x0);
}



void * X509_REVOKED_get_ext_d2i(X509_REVOKED *x,int nid,int *crit,int *idx)

{
  void *pvVar1;
  
  pvVar1 = X509V3_get_d2i(*(stack_st_X509_EXTENSION **)&x->reason,nid,crit,idx);
  return pvVar1;
}



int X509_REVOKED_add1_ext_i2d(X509_REVOKED *x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  
  iVar1 = X509V3_add1_i2d((stack_st_X509_EXTENSION **)&x->reason,nid,value,crit,flags);
  return iVar1;
}


