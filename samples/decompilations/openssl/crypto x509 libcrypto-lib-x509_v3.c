
int X509v3_get_ext_count(stack_st_X509_EXTENSION *x)

{
  int iVar1;
  
  if (x != (stack_st_X509_EXTENSION *)0x0) {
    iVar1 = OPENSSL_sk_num();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



int X509v3_get_ext_by_OBJ(stack_st_X509_EXTENSION *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (x != (stack_st_X509_EXTENSION *)0x0) {
    iVar4 = lastpos + 1;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar1 = OPENSSL_sk_num();
    if (iVar4 < iVar1) {
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(x,iVar4);
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



int X509v3_get_ext_by_NID(stack_st_X509_EXTENSION *x,int nid,int lastpos)

{
  int iVar1;
  ASN1_OBJECT *obj;
  
  obj = OBJ_nid2obj(nid);
  if (obj != (ASN1_OBJECT *)0x0) {
    iVar1 = X509v3_get_ext_by_OBJ(x,obj,lastpos);
    return iVar1;
  }
  return -2;
}



X509_EXTENSION * X509v3_get_ext(stack_st_X509_EXTENSION *x,int loc)

{
  int iVar1;
  X509_EXTENSION *pXVar2;
  
  if (x == (stack_st_X509_EXTENSION *)0x0) {
    return (X509_EXTENSION *)0x0;
  }
  iVar1 = OPENSSL_sk_num();
  if ((-1 < loc) && (loc < iVar1)) {
    pXVar2 = (X509_EXTENSION *)OPENSSL_sk_value(x,loc);
    return pXVar2;
  }
  return (X509_EXTENSION *)0x0;
}



X509_EXTENSION * X509v3_delete_ext(stack_st_X509_EXTENSION *x,int loc)

{
  int iVar1;
  X509_EXTENSION *pXVar2;
  
  if (x == (stack_st_X509_EXTENSION *)0x0) {
    return (X509_EXTENSION *)0x0;
  }
  iVar1 = OPENSSL_sk_num();
  if ((-1 < loc) && (loc < iVar1)) {
    pXVar2 = (X509_EXTENSION *)OPENSSL_sk_delete(x,loc);
    return pXVar2;
  }
  return (X509_EXTENSION *)0x0;
}



stack_st_X509_EXTENSION * X509v3_add_ext(stack_st_X509_EXTENSION **x,X509_EXTENSION *ex,int loc)

{
  int iVar1;
  X509_EXTENSION *a;
  stack_st_X509_EXTENSION *psVar2;
  undefined8 uVar3;
  
  if (x == (stack_st_X509_EXTENSION **)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_v3.c",0x6d,"X509v3_add_ext");
    ERR_set_error(0xb,0xc0102,0);
    X509_EXTENSION_free((X509_EXTENSION *)0x0);
    return (stack_st_X509_EXTENSION *)0x0;
  }
  psVar2 = *x;
  if ((psVar2 == (stack_st_X509_EXTENSION *)0x0) &&
     (psVar2 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null(),
     psVar2 == (stack_st_X509_EXTENSION *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_v3.c",0x73,"X509v3_add_ext");
    uVar3 = 0x8000f;
  }
  else {
    iVar1 = OPENSSL_sk_num(psVar2);
    if ((loc <= iVar1) && (-1 < loc)) {
      iVar1 = loc;
    }
    a = X509_EXTENSION_dup(ex);
    if (a != (X509_EXTENSION *)0x0) {
      iVar1 = OPENSSL_sk_insert(psVar2,a,iVar1);
      if (iVar1 != 0) {
        if (*x == (stack_st_X509_EXTENSION *)0x0) {
          *x = psVar2;
          return psVar2;
        }
        return psVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/x509_v3.c",0x84,"X509v3_add_ext");
      ERR_set_error(0xb,0x8000f,0);
      X509_EXTENSION_free(a);
      goto LAB_001002a8;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x509_v3.c",0x80,"X509v3_add_ext");
    uVar3 = 0x8000d;
  }
  ERR_set_error(0xb,uVar3,0);
  X509_EXTENSION_free((X509_EXTENSION *)0x0);
LAB_001002a8:
  if (*x == (stack_st_X509_EXTENSION *)0x0) {
    OPENSSL_sk_free(psVar2);
  }
  return (stack_st_X509_EXTENSION *)0x0;
}



int X509_EXTENSION_set_object(X509_EXTENSION *ex,ASN1_OBJECT *obj)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  
  if (ex != (X509_EXTENSION *)0x0) {
    uVar1 = 0;
    if (obj != (ASN1_OBJECT *)0x0) {
      ASN1_OBJECT_free(ex->object);
      pAVar2 = OBJ_dup(obj);
      ex->object = pAVar2;
      uVar1 = (uint)(pAVar2 != (ASN1_OBJECT *)0x0);
    }
    return uVar1;
  }
  return 0;
}



int X509_EXTENSION_set_critical(X509_EXTENSION *ex,int crit)

{
  if (ex != (X509_EXTENSION *)0x0) {
    ex->critical = -(uint)(crit != 0) & 0xff;
    return 1;
  }
  return 0;
}



int X509_EXTENSION_set_data(X509_EXTENSION *ex,ASN1_OCTET_STRING *data)

{
  int iVar1;
  
  if (ex != (X509_EXTENSION *)0x0) {
    iVar1 = ASN1_OCTET_STRING_set((ASN1_OCTET_STRING *)&ex->value,data->data,data->length);
    return (int)(iVar1 != 0);
  }
  return 0;
}



X509_EXTENSION *
X509_EXTENSION_create_by_OBJ(X509_EXTENSION **ex,ASN1_OBJECT *obj,int crit,ASN1_OCTET_STRING *data)

{
  int iVar1;
  X509_EXTENSION *ex_00;
  
  if ((ex == (X509_EXTENSION **)0x0) || (ex_00 = *ex, ex_00 == (X509_EXTENSION *)0x0)) {
    ex_00 = X509_EXTENSION_new();
    if (ex_00 == (X509_EXTENSION *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509_v3.c",0xc9,"X509_EXTENSION_create_by_OBJ");
      ERR_set_error(0xb,0x8000d,0);
      return (X509_EXTENSION *)0x0;
    }
    iVar1 = X509_EXTENSION_set_object(ex_00,obj);
    if (((iVar1 != 0) && (iVar1 = X509_EXTENSION_set_critical(ex_00,crit), iVar1 != 0)) &&
       (iVar1 = X509_EXTENSION_set_data(ex_00,data), iVar1 != 0)) {
      if (ex == (X509_EXTENSION **)0x0) {
        return ex_00;
      }
      goto LAB_0010045f;
    }
    if (ex == (X509_EXTENSION **)0x0) goto LAB_001004b6;
  }
  else {
    iVar1 = X509_EXTENSION_set_object(ex_00,obj);
    if (((iVar1 != 0) && (iVar1 = X509_EXTENSION_set_critical(ex_00,crit), iVar1 != 0)) &&
       (iVar1 = X509_EXTENSION_set_data(ex_00,data), iVar1 != 0)) {
LAB_0010045f:
      if (*ex == (X509_EXTENSION *)0x0) {
        *ex = ex_00;
      }
      return ex_00;
    }
  }
  if (*ex == ex_00) {
    return (X509_EXTENSION *)0x0;
  }
LAB_001004b6:
  X509_EXTENSION_free(ex_00);
  return (X509_EXTENSION *)0x0;
}



X509_EXTENSION *
X509_EXTENSION_create_by_NID(X509_EXTENSION **ex,int nid,int crit,ASN1_OCTET_STRING *data)

{
  ASN1_OBJECT *obj;
  X509_EXTENSION *pXVar1;
  
  obj = OBJ_nid2obj(nid);
  if (obj == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_v3.c",0xb8,"X509_EXTENSION_create_by_NID");
    ERR_set_error(0xb,0x6d,0);
    pXVar1 = (X509_EXTENSION *)0x0;
  }
  else {
    pXVar1 = X509_EXTENSION_create_by_OBJ(ex,obj,crit,data);
    if (pXVar1 == (X509_EXTENSION *)0x0) {
      ASN1_OBJECT_free(obj);
      return (X509_EXTENSION *)0x0;
    }
  }
  return pXVar1;
}



ASN1_OBJECT * X509_EXTENSION_get_object(X509_EXTENSION *ex)

{
  if (ex != (X509_EXTENSION *)0x0) {
    return ex->object;
  }
  return (ASN1_OBJECT *)0x0;
}



stack_st_X509_EXTENSION *
X509v3_add_extensions(stack_st_X509_EXTENSION **param_1,undefined8 param_2)

{
  int iVar1;
  X509_EXTENSION *ex;
  ASN1_OBJECT *obj;
  X509_EXTENSION *a;
  stack_st_X509_EXTENSION *psVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 == (stack_st_X509_EXTENSION **)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_v3.c",0x98,"X509v3_add_extensions");
    ERR_set_error(0xb,0xc0102,0);
    return (stack_st_X509_EXTENSION *)0x0;
  }
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      ex = (X509_EXTENSION *)OPENSSL_sk_value(param_2,iVar3);
      obj = X509_EXTENSION_get_object(ex);
      while (iVar1 = X509v3_get_ext_by_OBJ(*param_1,obj,-1), iVar1 != -1) {
        a = (X509_EXTENSION *)OPENSSL_sk_delete(*param_1,iVar1);
        X509_EXTENSION_free(a);
      }
      psVar2 = X509v3_add_ext(param_1,ex,-1);
      if (psVar2 == (stack_st_X509_EXTENSION *)0x0) {
        return (stack_st_X509_EXTENSION *)0x0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return *param_1;
}



ASN1_OCTET_STRING * X509_EXTENSION_get_data(X509_EXTENSION *ne)

{
  ASN1_OCTET_STRING *pAVar1;
  
  pAVar1 = (ASN1_OCTET_STRING *)&ne->value;
  if (ne == (X509_EXTENSION *)0x0) {
    pAVar1 = (ASN1_OCTET_STRING *)0x0;
  }
  return pAVar1;
}



int X509_EXTENSION_get_critical(X509_EXTENSION *ex)

{
  if (ex != (X509_EXTENSION *)0x0) {
    return (int)(0 < ex->critical);
  }
  return 0;
}



int X509v3_get_ext_by_critical(stack_st_X509_EXTENSION *x,int crit,int lastpos)

{
  int iVar1;
  uint uVar2;
  X509_EXTENSION *ex;
  int iVar3;
  
  if (x != (stack_st_X509_EXTENSION *)0x0) {
    iVar3 = lastpos + 1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    iVar1 = OPENSSL_sk_num();
    if (iVar3 < iVar1) {
      do {
        ex = (X509_EXTENSION *)OPENSSL_sk_value(x,iVar3);
        uVar2 = X509_EXTENSION_get_critical(ex);
        crit = (int)(crit != 0);
        if (uVar2 == crit) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
  }
  return -1;
}


