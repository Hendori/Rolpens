
void X509at_get_attr_count(void)

{
  OPENSSL_sk_num();
  return;
}



int X509at_get_attr_by_OBJ(stack_st_X509_ATTRIBUTE *sk,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (sk != (stack_st_X509_ATTRIBUTE *)0x0) {
    iVar4 = lastpos + 1;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar1 = OPENSSL_sk_num();
    if (iVar4 < iVar1) {
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(sk,iVar4);
        iVar2 = OBJ_cmp((ASN1_OBJECT *)*puVar3,obj);
        if (iVar2 == 0) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  return -1;
}



int X509at_get_attr_by_NID(stack_st_X509_ATTRIBUTE *x,int nid,int lastpos)

{
  int iVar1;
  ASN1_OBJECT *obj;
  
  obj = OBJ_nid2obj(nid);
  if (obj != (ASN1_OBJECT *)0x0) {
    iVar1 = X509at_get_attr_by_OBJ(x,obj,lastpos);
    return iVar1;
  }
  return -2;
}



X509_ATTRIBUTE * X509at_get_attr(stack_st_X509_ATTRIBUTE *x,int loc)

{
  int iVar1;
  X509_ATTRIBUTE *pXVar2;
  
  if (x == (stack_st_X509_ATTRIBUTE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x3b,"X509at_get_attr");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    iVar1 = OPENSSL_sk_num();
    if ((-1 < loc) && (loc < iVar1)) {
      pXVar2 = (X509_ATTRIBUTE *)OPENSSL_sk_value(x,loc);
      return pXVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x3f,"X509at_get_attr");
    ERR_set_error(0xb,0x80106,0);
  }
  return (X509_ATTRIBUTE *)0x0;
}



X509_ATTRIBUTE * X509at_delete_attr(stack_st_X509_ATTRIBUTE *x,int loc)

{
  int iVar1;
  X509_ATTRIBUTE *pXVar2;
  
  if (x == (stack_st_X509_ATTRIBUTE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x48,"X509at_delete_attr");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    iVar1 = OPENSSL_sk_num();
    if ((-1 < loc) && (loc < iVar1)) {
      pXVar2 = (X509_ATTRIBUTE *)OPENSSL_sk_delete(x,loc);
      return pXVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x4c,"X509at_delete_attr");
    ERR_set_error(0xb,0x80106,0);
  }
  return (X509_ATTRIBUTE *)0x0;
}



long ossl_x509at_add1_attr(long *param_1,X509_ATTRIBUTE *param_2)

{
  int iVar1;
  X509_ATTRIBUTE *a;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (param_2 != (X509_ATTRIBUTE *)0x0)) {
    lVar2 = *param_1;
    if ((lVar2 == 0) && (lVar2 = OPENSSL_sk_new_null(), lVar2 == 0)) {
      ERR_new();
      a = (X509_ATTRIBUTE *)0x0;
      ERR_set_debug("crypto/x509/x509_att.c",0x5f,"ossl_x509at_add1_attr");
      ERR_set_error(0xb,0x8000f,0);
    }
    else {
      a = X509_ATTRIBUTE_dup(param_2);
      if (a != (X509_ATTRIBUTE *)0x0) {
        iVar1 = OPENSSL_sk_push(lVar2,a);
        if (iVar1 != 0) {
          if (*param_1 == 0) {
            *param_1 = lVar2;
            return lVar2;
          }
          return lVar2;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/x509_att.c",0x69,"ossl_x509at_add1_attr");
        ERR_set_error(0xb,0x8000f,0);
      }
    }
    X509_ATTRIBUTE_free(a);
    if (*param_1 == 0) {
      OPENSSL_sk_free(lVar2);
    }
    return 0;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_att.c",0x59,"ossl_x509at_add1_attr");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



stack_st_X509_ATTRIBUTE * X509at_add1_attr(stack_st_X509_ATTRIBUTE **x,X509_ATTRIBUTE *attr)

{
  int iVar1;
  stack_st_X509_ATTRIBUTE *psVar2;
  char *pcVar3;
  
  if ((x == (stack_st_X509_ATTRIBUTE **)0x0) || (attr == (X509_ATTRIBUTE *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x7a,"X509at_add1_attr");
    ERR_set_error(0xb,0xc0102,0);
    return (stack_st_X509_ATTRIBUTE *)0x0;
  }
  if ((*x != (stack_st_X509_ATTRIBUTE *)0x0) &&
     (iVar1 = X509at_get_attr_by_OBJ(*x,attr->object,-1), iVar1 != -1)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x7e,"X509at_add1_attr");
    iVar1 = OBJ_obj2nid(attr->object);
    pcVar3 = OBJ_nid2sn(iVar1);
    ERR_set_error(0xb,0x8c,"name=%s",pcVar3);
    return (stack_st_X509_ATTRIBUTE *)0x0;
  }
  psVar2 = (stack_st_X509_ATTRIBUTE *)ossl_x509at_add1_attr(x,attr);
  return psVar2;
}



stack_st_X509_ATTRIBUTE * ossl_x509at_dup(undefined8 param_1)

{
  int iVar1;
  X509_ATTRIBUTE *attr;
  stack_st_X509_ATTRIBUTE *psVar2;
  int iVar3;
  long in_FS_OFFSET;
  stack_st_X509_ATTRIBUTE *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OPENSSL_sk_num();
  local_38 = (stack_st_X509_ATTRIBUTE *)0x0;
  if (iVar1 < 1) {
    psVar2 = (stack_st_X509_ATTRIBUTE *)0x0;
  }
  else {
    iVar3 = 0;
    do {
      attr = (X509_ATTRIBUTE *)OPENSSL_sk_value(param_1,iVar3);
      psVar2 = X509at_add1_attr(&local_38,attr);
      if (psVar2 == (stack_st_X509_ATTRIBUTE *)0x0) {
        OPENSSL_sk_pop_free(local_38,X509_ATTRIBUTE_free);
        psVar2 = (stack_st_X509_ATTRIBUTE *)0x0;
        break;
      }
      iVar3 = iVar3 + 1;
      psVar2 = local_38;
    } while (iVar1 != iVar3);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return psVar2;
}



int X509_ATTRIBUTE_set1_object(X509_ATTRIBUTE *attr,ASN1_OBJECT *obj)

{
  ASN1_OBJECT *pAVar1;
  
  if ((attr != (X509_ATTRIBUTE *)0x0) && (obj != (ASN1_OBJECT *)0x0)) {
    ASN1_OBJECT_free(attr->object);
    pAVar1 = OBJ_dup(obj);
    attr->object = pAVar1;
    return (int)(pAVar1 != (ASN1_OBJECT *)0x0);
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_att.c",0x150,"X509_ATTRIBUTE_set1_object");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



int X509_ATTRIBUTE_set1_data(X509_ATTRIBUTE *attr,int attrtype,void *data,int len)

{
  int iVar1;
  int iVar2;
  ASN1_STRING *str;
  ASN1_TYPE *a;
  undefined8 uVar3;
  ASN1_STRING *pAVar4;
  
  if (attr == (X509_ATTRIBUTE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x160,"X509_ATTRIBUTE_set1_data");
    ERR_set_error(0xb,0xc0102,0);
    return 0;
  }
  if ((attrtype & 0x1000U) == 0) {
    str = (ASN1_STRING *)0x0;
    iVar2 = 0;
    if ((len == -1) ||
       ((str = ASN1_STRING_type_new(attrtype), str != (ASN1_STRING *)0x0 &&
        (iVar1 = ASN1_STRING_set(str,data,len), iVar2 = attrtype, iVar1 != 0)))) {
      if (attrtype == 0) {
        ASN1_STRING_free(str);
        return 1;
      }
      a = ASN1_TYPE_new();
      if (a != (ASN1_TYPE *)0x0) {
        if (len != -1) goto LAB_00100671;
        iVar2 = ASN1_TYPE_set1(a,attrtype,data);
        pAVar4 = str;
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("crypto/x509/x509_att.c",0x182,"X509_ATTRIBUTE_set1_data");
          ERR_set_error(0xb,0x8000d,0);
          goto LAB_001006c4;
        }
        goto LAB_0010067f;
      }
      goto LAB_001007d0;
    }
    ERR_new();
    uVar3 = 0x16e;
  }
  else {
    iVar2 = OBJ_obj2nid(attr->object);
    str = ASN1_STRING_set_by_NID((ASN1_STRING **)0x0,(uchar *)data,len,attrtype,iVar2);
    if (str == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509_att.c",0x167,"X509_ATTRIBUTE_set1_data");
      ERR_set_error(0xb,0x8000d,0);
      return 0;
    }
    iVar2 = str->type;
    a = ASN1_TYPE_new();
    if (a != (ASN1_TYPE *)0x0) {
LAB_00100671:
      pAVar4 = (ASN1_STRING *)0x0;
      ASN1_TYPE_set(a,iVar2,str);
LAB_0010067f:
      iVar2 = OPENSSL_sk_push(*(undefined8 *)&attr->single,a);
      if (iVar2 != 0) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/x509_att.c",0x18a,"X509_ATTRIBUTE_set1_data");
      ERR_set_error(0xb,0x8000f,0);
      str = pAVar4;
      goto LAB_001006c4;
    }
LAB_001007d0:
    ERR_new();
    uVar3 = 0x17d;
  }
  a = (ASN1_TYPE *)0x0;
  ERR_set_debug("crypto/x509/x509_att.c",uVar3,"X509_ATTRIBUTE_set1_data");
  ERR_set_error(0xb,0x8000d,0);
LAB_001006c4:
  ASN1_TYPE_free(a);
  ASN1_STRING_free(str);
  return 0;
}



X509_ATTRIBUTE *
X509_ATTRIBUTE_create_by_OBJ(X509_ATTRIBUTE **attr,ASN1_OBJECT *obj,int atrtype,void *data,int len)

{
  int iVar1;
  X509_ATTRIBUTE *attr_00;
  
  if ((attr == (X509_ATTRIBUTE **)0x0) || (attr_00 = *attr, attr_00 == (X509_ATTRIBUTE *)0x0)) {
    attr_00 = X509_ATTRIBUTE_new();
    if (attr_00 == (X509_ATTRIBUTE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509_att.c",0x126,"X509_ATTRIBUTE_create_by_OBJ");
      ERR_set_error(0xb,0x8000d,0);
      return (X509_ATTRIBUTE *)0x0;
    }
    iVar1 = X509_ATTRIBUTE_set1_object(attr_00,obj);
    if ((iVar1 != 0) && (iVar1 = X509_ATTRIBUTE_set1_data(attr_00,atrtype,data,len), iVar1 != 0)) {
      if (attr == (X509_ATTRIBUTE **)0x0) {
        return attr_00;
      }
      goto LAB_0010087f;
    }
    if (attr == (X509_ATTRIBUTE **)0x0) goto LAB_001008ae;
  }
  else {
    iVar1 = X509_ATTRIBUTE_set1_object(attr_00,obj);
    if ((iVar1 != 0) && (iVar1 = X509_ATTRIBUTE_set1_data(attr_00,atrtype,data,len), iVar1 != 0)) {
LAB_0010087f:
      if (*attr == (X509_ATTRIBUTE *)0x0) {
        *attr = attr_00;
      }
      return attr_00;
    }
  }
  if (*attr == attr_00) {
    return (X509_ATTRIBUTE *)0x0;
  }
LAB_001008ae:
  X509_ATTRIBUTE_free(attr_00);
  return (X509_ATTRIBUTE *)0x0;
}



undefined8
ossl_x509at_add1_attr_by_OBJ
          (undefined8 param_1,ASN1_OBJECT *param_2,int param_3,void *param_4,int param_5)

{
  X509_ATTRIBUTE *a;
  undefined8 uVar1;
  
  a = X509_ATTRIBUTE_create_by_OBJ((X509_ATTRIBUTE **)0x0,param_2,param_3,param_4,param_5);
  if (a != (X509_ATTRIBUTE *)0x0) {
    uVar1 = ossl_x509at_add1_attr(param_1,a);
    X509_ATTRIBUTE_free(a);
    return uVar1;
  }
  return 0;
}



stack_st_X509_ATTRIBUTE *
X509at_add1_attr_by_OBJ(stack_st_X509_ATTRIBUTE **x,ASN1_OBJECT *obj,int type,uchar *bytes,int len)

{
  int iVar1;
  stack_st_X509_ATTRIBUTE *psVar2;
  char *pcVar3;
  
  if ((x == (stack_st_X509_ATTRIBUTE **)0x0) || (obj == (ASN1_OBJECT *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x9e,"X509at_add1_attr_by_OBJ");
    ERR_set_error(0xb,0xc0102,0);
    return (stack_st_X509_ATTRIBUTE *)0x0;
  }
  if ((*x != (stack_st_X509_ATTRIBUTE *)0x0) &&
     (iVar1 = X509at_get_attr_by_OBJ(*x,obj,-1), iVar1 != -1)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0xa2,"X509at_add1_attr_by_OBJ");
    iVar1 = OBJ_obj2nid(obj);
    pcVar3 = OBJ_nid2sn(iVar1);
    ERR_set_error(0xb,0x8c,"name=%s",pcVar3);
    return (stack_st_X509_ATTRIBUTE *)0x0;
  }
  psVar2 = (stack_st_X509_ATTRIBUTE *)ossl_x509at_add1_attr_by_OBJ(x,obj,type,bytes,len);
  return psVar2;
}



X509_ATTRIBUTE *
X509_ATTRIBUTE_create_by_NID(X509_ATTRIBUTE **attr,int nid,int atrtype,void *data,int len)

{
  ASN1_OBJECT *obj;
  X509_ATTRIBUTE *pXVar1;
  
  obj = OBJ_nid2obj(nid);
  if (obj == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x114,"X509_ATTRIBUTE_create_by_NID");
    ERR_set_error(0xb,0x6d,0);
    pXVar1 = (X509_ATTRIBUTE *)0x0;
  }
  else {
    pXVar1 = X509_ATTRIBUTE_create_by_OBJ(attr,obj,atrtype,data,len);
    if (pXVar1 == (X509_ATTRIBUTE *)0x0) {
      ASN1_OBJECT_free(obj);
      return (X509_ATTRIBUTE *)0x0;
    }
  }
  return pXVar1;
}



undefined8
ossl_x509at_add1_attr_by_NID(undefined8 param_1,int param_2,int param_3,void *param_4,int param_5)

{
  X509_ATTRIBUTE *a;
  undefined8 uVar1;
  
  a = X509_ATTRIBUTE_create_by_NID((X509_ATTRIBUTE **)0x0,param_2,param_3,param_4,param_5);
  if (a != (X509_ATTRIBUTE *)0x0) {
    uVar1 = ossl_x509at_add1_attr(param_1,a);
    X509_ATTRIBUTE_free(a);
    return uVar1;
  }
  return 0;
}



stack_st_X509_ATTRIBUTE *
X509at_add1_attr_by_NID(stack_st_X509_ATTRIBUTE **x,int nid,int type,uchar *bytes,int len)

{
  int iVar1;
  stack_st_X509_ATTRIBUTE *psVar2;
  char *pcVar3;
  
  if (x == (stack_st_X509_ATTRIBUTE **)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0xc0,"X509at_add1_attr_by_NID");
    ERR_set_error(0xb,0xc0102,0);
    return (stack_st_X509_ATTRIBUTE *)0x0;
  }
  if ((*x != (stack_st_X509_ATTRIBUTE *)0x0) &&
     (iVar1 = X509at_get_attr_by_NID(*x,nid,-1), iVar1 != -1)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0xc4,"X509at_add1_attr_by_NID");
    pcVar3 = OBJ_nid2sn(nid);
    ERR_set_error(0xb,0x8c,"name=%s",pcVar3);
    return (stack_st_X509_ATTRIBUTE *)0x0;
  }
  psVar2 = (stack_st_X509_ATTRIBUTE *)ossl_x509at_add1_attr_by_NID(x,nid,type,bytes,len);
  return psVar2;
}



X509_ATTRIBUTE *
X509_ATTRIBUTE_create_by_txt(X509_ATTRIBUTE **attr,char *atrname,int type,uchar *bytes,int len)

{
  ASN1_OBJECT *obj;
  X509_ATTRIBUTE *pXVar1;
  
  obj = OBJ_txt2obj(atrname,0);
  if (obj == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x144,"X509_ATTRIBUTE_create_by_txt");
    pXVar1 = (X509_ATTRIBUTE *)0x0;
    ERR_set_error(0xb,0x77,"name=%s",atrname);
  }
  else {
    pXVar1 = X509_ATTRIBUTE_create_by_OBJ(attr,obj,type,bytes,len);
    ASN1_OBJECT_free(obj);
  }
  return pXVar1;
}



undefined8
ossl_x509at_add1_attr_by_txt
          (undefined8 param_1,char *param_2,int param_3,uchar *param_4,int param_5)

{
  X509_ATTRIBUTE *a;
  undefined8 uVar1;
  
  a = X509_ATTRIBUTE_create_by_txt((X509_ATTRIBUTE **)0x0,param_2,param_3,param_4,param_5);
  if (a != (X509_ATTRIBUTE *)0x0) {
    uVar1 = ossl_x509at_add1_attr(param_1,a);
    X509_ATTRIBUTE_free(a);
    return uVar1;
  }
  return 0;
}



stack_st_X509_ATTRIBUTE *
X509at_add1_attr_by_txt(stack_st_X509_ATTRIBUTE **x,char *attrname,int type,uchar *bytes,int len)

{
  X509_ATTRIBUTE *attr;
  stack_st_X509_ATTRIBUTE *psVar1;
  
  attr = X509_ATTRIBUTE_create_by_txt((X509_ATTRIBUTE **)0x0,attrname,type,bytes,len);
  if (attr != (X509_ATTRIBUTE *)0x0) {
    psVar1 = X509at_add1_attr(x,attr);
    X509_ATTRIBUTE_free(attr);
    return psVar1;
  }
  return (stack_st_X509_ATTRIBUTE *)0x0;
}



int X509_ATTRIBUTE_count(X509_ATTRIBUTE *attr)

{
  int iVar1;
  
  if (attr != (X509_ATTRIBUTE *)0x0) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)&attr->single);
    return iVar1;
  }
  return 0;
}



ASN1_OBJECT * X509_ATTRIBUTE_get0_object(X509_ATTRIBUTE *attr)

{
  if (attr != (X509_ATTRIBUTE *)0x0) {
    return attr->object;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_att.c",0x19e,"X509_ATTRIBUTE_get0_object");
  ERR_set_error(0xb,0xc0102,0);
  return (ASN1_OBJECT *)0x0;
}



ASN1_TYPE * X509_ATTRIBUTE_get0_type(X509_ATTRIBUTE *attr,int idx)

{
  ASN1_TYPE *pAVar1;
  undefined4 in_register_00000034;
  
  if (attr != (X509_ATTRIBUTE *)0x0) {
    pAVar1 = (ASN1_TYPE *)OPENSSL_sk_value(*(undefined8 *)&attr->single);
    return pAVar1;
  }
  ERR_new(0,CONCAT44(in_register_00000034,idx));
  ERR_set_debug("crypto/x509/x509_att.c",0x1b7,"X509_ATTRIBUTE_get0_type");
  ERR_set_error(0xb,0xc0102,0);
  return (ASN1_TYPE *)0x0;
}



void * X509_ATTRIBUTE_get0_data(X509_ATTRIBUTE *attr,int idx,int atrtype,void *data)

{
  int iVar1;
  ASN1_TYPE *a;
  
  a = X509_ATTRIBUTE_get0_type(attr,idx);
  if (a != (ASN1_TYPE *)0x0) {
    if ((atrtype & 0xfffffffbU) != 1) {
      iVar1 = ASN1_TYPE_get(a);
      if (iVar1 == atrtype) {
        return (a->value).ptr;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x509_att.c",0x1ae,"X509_ATTRIBUTE_get0_data");
    ERR_set_error(0xb,0x7a,0);
  }
  return (void *)0x0;
}



void * X509at_get0_data_by_OBJ(stack_st_X509_ATTRIBUTE *x,ASN1_OBJECT *obj,int lastpos,int type)

{
  int iVar1;
  int iVar2;
  X509_ATTRIBUTE *attr;
  void *pvVar3;
  
  iVar1 = X509at_get_attr_by_OBJ(x,obj,lastpos);
  if (iVar1 == -1) {
    return (void *)0x0;
  }
  if (lastpos < -1) {
    iVar2 = X509at_get_attr_by_OBJ(x,obj,iVar1);
    if (iVar2 != -1) {
      return (void *)0x0;
    }
    attr = X509at_get_attr(x,iVar1);
    if ((lastpos != -2) && (iVar1 = X509_ATTRIBUTE_count(attr), iVar1 != 1)) {
      return (void *)0x0;
    }
  }
  else {
    attr = X509at_get_attr(x,iVar1);
  }
  pvVar3 = X509_ATTRIBUTE_get0_data(attr,0,type,(void *)0x0);
  return pvVar3;
}


