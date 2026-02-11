
undefined1 * OTHERNAME_it(void)

{
  return local_it_4;
}



undefined1 * EDIPARTYNAME_it(void)

{
  return local_it_3;
}



undefined1 * GENERAL_NAME_it(void)

{
  return local_it_2;
}



GENERAL_NAME * d2i_GENERAL_NAME(GENERAL_NAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  GENERAL_NAME *pGVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAME_it();
  pGVar1 = (GENERAL_NAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pGVar1;
}



int i2d_GENERAL_NAME(GENERAL_NAME *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAME_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



OTHERNAME * d2i_OTHERNAME(OTHERNAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OTHERNAME *pOVar1;
  
  it = (ASN1_ITEM *)OTHERNAME_it();
  pOVar1 = (OTHERNAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OTHERNAME(OTHERNAME *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OTHERNAME_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OTHERNAME * OTHERNAME_new(void)

{
  ASN1_ITEM *it;
  OTHERNAME *pOVar1;
  
  it = (ASN1_ITEM *)OTHERNAME_it();
  pOVar1 = (OTHERNAME *)ASN1_item_new(it);
  return pOVar1;
}



void OTHERNAME_free(OTHERNAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OTHERNAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



EDIPARTYNAME * d2i_EDIPARTYNAME(EDIPARTYNAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  EDIPARTYNAME *pEVar1;
  
  it = (ASN1_ITEM *)EDIPARTYNAME_it();
  pEVar1 = (EDIPARTYNAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pEVar1;
}



int i2d_EDIPARTYNAME(EDIPARTYNAME *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)EDIPARTYNAME_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EDIPARTYNAME * EDIPARTYNAME_new(void)

{
  ASN1_ITEM *it;
  EDIPARTYNAME *pEVar1;
  
  it = (ASN1_ITEM *)EDIPARTYNAME_it();
  pEVar1 = (EDIPARTYNAME *)ASN1_item_new(it);
  return pEVar1;
}



void EDIPARTYNAME_free(EDIPARTYNAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)EDIPARTYNAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

GENERAL_NAME * GENERAL_NAME_new(void)

{
  ASN1_ITEM *it;
  GENERAL_NAME *pGVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAME_it();
  pGVar1 = (GENERAL_NAME *)ASN1_item_new(it);
  return pGVar1;
}



void GENERAL_NAME_free(GENERAL_NAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)GENERAL_NAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * GENERAL_NAMES_it(void)

{
  return local_it_1;
}



GENERAL_NAMES * d2i_GENERAL_NAMES(GENERAL_NAMES **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAMES_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (GENERAL_NAMES *)pAVar1;
}



int i2d_GENERAL_NAMES(GENERAL_NAMES *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAMES_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

GENERAL_NAMES * GENERAL_NAMES_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAMES_it();
  pAVar1 = ASN1_item_new(it);
  return (GENERAL_NAMES *)pAVar1;
}



void GENERAL_NAMES_free(GENERAL_NAMES *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)GENERAL_NAMES_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



GENERAL_NAME * GENERAL_NAME_dup(GENERAL_NAME *a)

{
  GENERAL_NAME *pGVar1;
  
  pGVar1 = (GENERAL_NAME *)ASN1_dup(i2d_GENERAL_NAME,d2i_GENERAL_NAME,a);
  return pGVar1;
}



undefined8 GENERAL_NAME_set1_X509_NAME(undefined8 *param_1,X509_NAME *param_2)

{
  int iVar1;
  GENERAL_NAME *a;
  X509_NAME *pXVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_genn.c",0x42,"GENERAL_NAME_set1_X509_NAME");
    ERR_set_error(0x22,0x6b,0);
  }
  else {
    a = GENERAL_NAME_new();
    if (a != (GENERAL_NAME *)0x0) {
      a->type = 4;
      if (param_2 == (X509_NAME *)0x0) {
        pXVar2 = X509_NAME_new();
        (a->d).directoryName = pXVar2;
        if (pXVar2 != (X509_NAME *)0x0) goto LAB_0010031b;
      }
      else {
        iVar1 = X509_NAME_set(&(a->d).directoryName,param_2);
        if (iVar1 != 0) {
LAB_0010031b:
          GENERAL_NAME_free((GENERAL_NAME *)*param_1);
          *param_1 = a;
          return 1;
        }
      }
      GENERAL_NAME_free(a);
    }
  }
  return 0;
}



int OTHERNAME_cmp(OTHERNAME *a,OTHERNAME *b)

{
  int iVar1;
  
  if (a == (OTHERNAME *)0x0) {
    return -1;
  }
  if (b == (OTHERNAME *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = OBJ_cmp(a->type_id,b->type_id);
    if (iVar1 == 0) {
      iVar1 = ASN1_TYPE_cmp(a->value,b->value);
      return iVar1;
    }
  }
  return iVar1;
}



int GENERAL_NAME_cmp(GENERAL_NAME *a,GENERAL_NAME *b)

{
  EDIPARTYNAME *pEVar1;
  EDIPARTYNAME *pEVar2;
  ASN1_STRING *b_00;
  int iVar3;
  
  if (((a != (GENERAL_NAME *)0x0) && (b != (GENERAL_NAME *)0x0)) && (a->type == b->type)) {
    switch(a->type) {
    case 0:
      iVar3 = OTHERNAME_cmp((a->d).otherName,(b->d).otherName);
      return iVar3;
    case 1:
    case 2:
    case 3:
    case 6:
      iVar3 = ASN1_STRING_cmp((ASN1_STRING *)(a->d).otherName,(ASN1_STRING *)(b->d).otherName);
      return iVar3;
    case 4:
      iVar3 = X509_NAME_cmp((a->d).directoryName,(b->d).directoryName);
      return iVar3;
    case 5:
      pEVar1 = (a->d).ediPartyName;
      pEVar2 = (b->d).ediPartyName;
      if ((pEVar1 != (EDIPARTYNAME *)0x0) && (pEVar2 != (EDIPARTYNAME *)0x0)) {
        b_00 = pEVar2->nameAssigner;
        if (pEVar1->nameAssigner == (ASN1_STRING *)0x0) {
          if (b_00 != (ASN1_STRING *)0x0) {
            return -1;
          }
        }
        else {
          if (b_00 == (ASN1_STRING *)0x0) {
            return 1;
          }
          iVar3 = ASN1_STRING_cmp(pEVar1->nameAssigner,b_00);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        if ((pEVar1->partyName != (ASN1_STRING *)0x0) && (pEVar2->partyName != (ASN1_STRING *)0x0))
        {
          iVar3 = ASN1_STRING_cmp(pEVar1->partyName,pEVar2->partyName);
          return iVar3;
        }
      }
      return -1;
    case 7:
      iVar3 = ASN1_OCTET_STRING_cmp((a->d).iPAddress,(b->d).iPAddress);
      return iVar3;
    case 8:
      iVar3 = OBJ_cmp((a->d).registeredID,(b->d).registeredID);
      return iVar3;
    }
  }
  return -1;
}



/* WARNING: Switch with 1 destination removed at 0x0010051d : 9 cases all go to same destination */

void GENERAL_NAME_set0_value(GENERAL_NAME *a,int type,void *value)

{
  if ((uint)type < 9) {
    (a->d).ptr = (char *)value;
  }
  a->type = type;
  return;
}



void * GENERAL_NAME_get0_value(GENERAL_NAME *a,int *ptype)

{
  if (ptype != (int *)0x0) {
    *ptype = a->type;
  }
  switch(a->type) {
  case 0:
    return (a->d).ptr;
  case 1:
  case 2:
  case 6:
    return (a->d).ptr;
  case 3:
    return (a->d).ptr;
  case 4:
    return (a->d).ptr;
  case 5:
    return (a->d).ptr;
  case 7:
    return (a->d).ptr;
  case 8:
    return (a->d).ptr;
  default:
    return (void *)0x0;
  }
}



int GENERAL_NAME_set0_othername(GENERAL_NAME *gen,ASN1_OBJECT *oid,ASN1_TYPE *value)

{
  OTHERNAME *value_00;
  
  value_00 = OTHERNAME_new();
  if (value_00 != (OTHERNAME *)0x0) {
    ASN1_TYPE_free(value_00->value);
    value_00->type_id = oid;
    value_00->value = value;
    GENERAL_NAME_set0_value(gen,0,value_00);
  }
  return (uint)(value_00 != (OTHERNAME *)0x0);
}



int GENERAL_NAME_get0_otherName(GENERAL_NAME *gen,ASN1_OBJECT **poid,ASN1_TYPE **pvalue)

{
  if (gen->type == 0) {
    if (poid != (ASN1_OBJECT **)0x0) {
      *poid = ((gen->d).otherName)->type_id;
    }
    if (pvalue != (ASN1_TYPE **)0x0) {
      *pvalue = ((gen->d).otherName)->value;
    }
    return 1;
  }
  return 0;
}



undefined8 GENERAL_NAME_get0_value_cold(void)

{
  return 0;
}


