
int X509_NAME_entry_count(X509_NAME *name)

{
  int iVar1;
  
  if (name != (X509_NAME *)0x0) {
    iVar1 = OPENSSL_sk_num(name->entries);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



int X509_NAME_get_index_by_OBJ(X509_NAME *name,ASN1_OBJECT *obj,int lastpos)

{
  stack_st_X509_NAME_ENTRY *psVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (name != (X509_NAME *)0x0) {
    psVar1 = name->entries;
    iVar5 = -1;
    if (-1 < lastpos) {
      iVar5 = lastpos;
    }
    iVar2 = OPENSSL_sk_num(psVar1);
    iVar5 = iVar5 + 1;
    if (iVar5 < iVar2) {
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(psVar1,iVar5);
        iVar3 = OBJ_cmp((ASN1_OBJECT *)*puVar4,obj);
        if (iVar3 == 0) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  return -1;
}



int X509_NAME_get_index_by_NID(X509_NAME *name,int nid,int lastpos)

{
  int iVar1;
  ASN1_OBJECT *obj;
  
  obj = OBJ_nid2obj(nid);
  if (obj != (ASN1_OBJECT *)0x0) {
    iVar1 = X509_NAME_get_index_by_OBJ(name,obj,lastpos);
    return iVar1;
  }
  return -2;
}



X509_NAME_ENTRY * X509_NAME_get_entry(X509_NAME *name,int loc)

{
  int iVar1;
  X509_NAME_ENTRY *pXVar2;
  
  if (name == (X509_NAME *)0x0) {
    return (X509_NAME_ENTRY *)0x0;
  }
  iVar1 = OPENSSL_sk_num(name->entries);
  if ((-1 < loc) && (loc < iVar1)) {
    pXVar2 = (X509_NAME_ENTRY *)OPENSSL_sk_value(name->entries,loc);
    return pXVar2;
  }
  return (X509_NAME_ENTRY *)0x0;
}



X509_NAME_ENTRY * X509_NAME_delete_entry(X509_NAME *name,int loc)

{
  stack_st_X509_NAME_ENTRY *psVar1;
  int iVar2;
  X509_NAME_ENTRY *pXVar3;
  long lVar4;
  int iVar5;
  
  if (name != (X509_NAME *)0x0) {
    iVar2 = OPENSSL_sk_num(name->entries);
    if ((-1 < loc) && (loc < iVar2)) {
      psVar1 = name->entries;
      pXVar3 = (X509_NAME_ENTRY *)OPENSSL_sk_delete(psVar1,loc);
      iVar2 = OPENSSL_sk_num(psVar1);
      name->modified = 1;
      if (loc != iVar2) {
        if (loc == 0) {
          iVar5 = pXVar3->set;
        }
        else {
          lVar4 = OPENSSL_sk_value(psVar1,loc + -1);
          iVar5 = *(int *)(lVar4 + 0x10) + 1;
        }
        lVar4 = OPENSSL_sk_value(psVar1,loc);
        if ((iVar5 < *(int *)(lVar4 + 0x10)) && (loc < iVar2)) {
          do {
            iVar5 = loc + 1;
            lVar4 = OPENSSL_sk_value(psVar1,loc);
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
            loc = iVar5;
          } while (iVar2 != iVar5);
        }
      }
      return pXVar3;
    }
  }
  return (X509_NAME_ENTRY *)0x0;
}



int X509_NAME_add_entry(X509_NAME *name,X509_NAME_ENTRY *ne,int loc,int set)

{
  stack_st_X509_NAME_ENTRY *psVar1;
  int iVar2;
  int iVar3;
  X509_NAME_ENTRY *a;
  long lVar4;
  int iVar5;
  bool bVar6;
  
  if (name == (X509_NAME *)0x0) {
    return 0;
  }
  psVar1 = name->entries;
  iVar2 = OPENSSL_sk_num(psVar1);
  name->modified = 1;
  bVar6 = set == 0;
  if ((loc < 0) || (iVar2 < loc)) {
    loc = iVar2;
    if (set == -1) goto LAB_00100328;
  }
  else {
    if (set == -1) {
LAB_00100328:
      iVar3 = 0;
      bVar6 = true;
      if (loc != 0) {
        bVar6 = false;
        lVar4 = OPENSSL_sk_value(psVar1,loc + -1);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      goto LAB_0010028a;
    }
    if (iVar2 != loc) {
      lVar4 = OPENSSL_sk_value(psVar1,loc);
      iVar3 = *(int *)(lVar4 + 0x10);
      goto LAB_0010028a;
    }
  }
  iVar3 = 0;
  loc = iVar2;
  if (iVar2 != 0) {
    lVar4 = OPENSSL_sk_value(psVar1,iVar2 + -1);
    iVar3 = *(int *)(lVar4 + 0x10) + 1;
  }
LAB_0010028a:
  a = X509_NAME_ENTRY_dup(ne);
  if (a != (X509_NAME_ENTRY *)0x0) {
    a->set = iVar3;
    iVar2 = OPENSSL_sk_insert(psVar1,a,loc);
    if (iVar2 != 0) {
      if (bVar6) {
        iVar3 = OPENSSL_sk_num(psVar1);
        iVar2 = loc + 1;
        if (loc + 1 < iVar3) {
          do {
            iVar5 = iVar2 + 1;
            lVar4 = OPENSSL_sk_value(psVar1,iVar2);
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
            iVar2 = iVar5;
          } while (iVar3 != iVar5);
        }
      }
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x509name.c",0xe4,"X509_NAME_add_entry");
    ERR_set_error(0xb,0x8000f,0);
  }
  X509_NAME_ENTRY_free(a);
  return 0;
}



int X509_NAME_ENTRY_set_object(X509_NAME_ENTRY *ne,ASN1_OBJECT *obj)

{
  ASN1_OBJECT *pAVar1;
  
  if ((ne != (X509_NAME_ENTRY *)0x0) && (obj != (ASN1_OBJECT *)0x0)) {
    ASN1_OBJECT_free(ne->object);
    pAVar1 = OBJ_dup(obj);
    ne->object = pAVar1;
    return (int)(pAVar1 != (ASN1_OBJECT *)0x0);
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509name.c",0x135,"X509_NAME_ENTRY_set_object");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



int X509_NAME_ENTRY_set_data(X509_NAME_ENTRY *ne,int type,uchar *bytes,int len)

{
  int iVar1;
  size_t sVar2;
  ASN1_STRING *pAVar3;
  
  if (ne == (X509_NAME_ENTRY *)0x0) {
    return 0;
  }
  if ((bytes != (uchar *)0x0) || (len == 0)) {
    if ((0 < type) && ((type & 0x1000U) != 0)) {
      iVar1 = OBJ_obj2nid(ne->object);
      pAVar3 = ASN1_STRING_set_by_NID(&ne->value,bytes,len,type,iVar1);
      return (uint)(pAVar3 != (ASN1_STRING *)0x0);
    }
    if (len < 0) {
      sVar2 = strlen((char *)bytes);
      len = (int)sVar2;
    }
    iVar1 = ASN1_STRING_set(ne->value,bytes,len);
    if (iVar1 != 0) {
      if (type != -1) {
        pAVar3 = ne->value;
        if (type == -2) {
          iVar1 = ASN1_PRINTABLE_type(bytes,len);
          pAVar3->type = iVar1;
        }
        else {
          pAVar3->type = type;
        }
      }
      return 1;
    }
  }
  return 0;
}



X509_NAME_ENTRY *
X509_NAME_ENTRY_create_by_OBJ(X509_NAME_ENTRY **ne,ASN1_OBJECT *obj,int type,uchar *bytes,int len)

{
  int iVar1;
  X509_NAME_ENTRY *ne_00;
  
  if ((ne == (X509_NAME_ENTRY **)0x0) || (ne_00 = *ne, ne_00 == (X509_NAME_ENTRY *)0x0)) {
    ne_00 = X509_NAME_ENTRY_new();
    if (ne_00 == (X509_NAME_ENTRY *)0x0) {
      return (X509_NAME_ENTRY *)0x0;
    }
    iVar1 = X509_NAME_ENTRY_set_object(ne_00,obj);
    if ((iVar1 != 0) && (iVar1 = X509_NAME_ENTRY_set_data(ne_00,type,bytes,len), iVar1 != 0)) {
      if (ne == (X509_NAME_ENTRY **)0x0) {
        return ne_00;
      }
      goto LAB_0010056f;
    }
    if (ne == (X509_NAME_ENTRY **)0x0) goto LAB_0010059e;
  }
  else {
    iVar1 = X509_NAME_ENTRY_set_object(ne_00,obj);
    if ((iVar1 != 0) && (iVar1 = X509_NAME_ENTRY_set_data(ne_00,type,bytes,len), iVar1 != 0)) {
LAB_0010056f:
      if (*ne == (X509_NAME_ENTRY *)0x0) {
        *ne = ne_00;
        return ne_00;
      }
      return ne_00;
    }
  }
  if (*ne == ne_00) {
    return (X509_NAME_ENTRY *)0x0;
  }
LAB_0010059e:
  X509_NAME_ENTRY_free(ne_00);
  return (X509_NAME_ENTRY *)0x0;
}



int X509_NAME_add_entry_by_OBJ
              (X509_NAME *name,ASN1_OBJECT *obj,int type,uchar *bytes,int len,int loc,int set)

{
  int iVar1;
  X509_NAME_ENTRY *ne;
  
  iVar1 = 0;
  ne = X509_NAME_ENTRY_create_by_OBJ((X509_NAME_ENTRY **)0x0,obj,type,bytes,len);
  if (ne != (X509_NAME_ENTRY *)0x0) {
    iVar1 = X509_NAME_add_entry(name,ne,loc,set);
    X509_NAME_ENTRY_free(ne);
  }
  return iVar1;
}



X509_NAME_ENTRY *
X509_NAME_ENTRY_create_by_txt(X509_NAME_ENTRY **ne,char *field,int type,uchar *bytes,int len)

{
  ASN1_OBJECT *obj;
  X509_NAME_ENTRY *pXVar1;
  
  obj = OBJ_txt2obj(field,0);
  if (obj == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509name.c",0xfc,"X509_NAME_ENTRY_create_by_txt");
    pXVar1 = (X509_NAME_ENTRY *)0x0;
    ERR_set_error(0xb,0x77,"name=%s",field);
  }
  else {
    pXVar1 = X509_NAME_ENTRY_create_by_OBJ(ne,obj,type,bytes,len);
    ASN1_OBJECT_free(obj);
  }
  return pXVar1;
}



int X509_NAME_add_entry_by_txt
              (X509_NAME *name,char *field,int type,uchar *bytes,int len,int loc,int set)

{
  int iVar1;
  X509_NAME_ENTRY *ne;
  
  iVar1 = 0;
  ne = X509_NAME_ENTRY_create_by_txt((X509_NAME_ENTRY **)0x0,field,type,bytes,len);
  if (ne != (X509_NAME_ENTRY *)0x0) {
    iVar1 = X509_NAME_add_entry(name,ne,loc,set);
    X509_NAME_ENTRY_free(ne);
  }
  return iVar1;
}



X509_NAME_ENTRY *
X509_NAME_ENTRY_create_by_NID(X509_NAME_ENTRY **ne,int nid,int type,uchar *bytes,int len)

{
  ASN1_OBJECT *obj;
  X509_NAME_ENTRY *pXVar1;
  
  obj = OBJ_nid2obj(nid);
  if (obj == (ASN1_OBJECT *)0x0) {
    ERR_new();
    pXVar1 = (X509_NAME_ENTRY *)0x0;
    ERR_set_debug("crypto/x509/x509name.c",0x10f,"X509_NAME_ENTRY_create_by_NID");
    ERR_set_error(0xb,0x6d,0);
  }
  else {
    pXVar1 = X509_NAME_ENTRY_create_by_OBJ(ne,obj,type,bytes,len);
    ASN1_OBJECT_free(obj);
  }
  return pXVar1;
}



int X509_NAME_add_entry_by_NID
              (X509_NAME *name,int nid,int type,uchar *bytes,int len,int loc,int set)

{
  int iVar1;
  X509_NAME_ENTRY *ne;
  
  iVar1 = 0;
  ne = X509_NAME_ENTRY_create_by_NID((X509_NAME_ENTRY **)0x0,nid,type,bytes,len);
  if (ne != (X509_NAME_ENTRY *)0x0) {
    iVar1 = X509_NAME_add_entry(name,ne,loc,set);
    X509_NAME_ENTRY_free(ne);
  }
  return iVar1;
}



ASN1_OBJECT * X509_NAME_ENTRY_get_object(X509_NAME_ENTRY *ne)

{
  if (ne != (X509_NAME_ENTRY *)0x0) {
    return ne->object;
  }
  return (ASN1_OBJECT *)0x0;
}



ASN1_STRING * X509_NAME_ENTRY_get_data(X509_NAME_ENTRY *ne)

{
  if (ne != (X509_NAME_ENTRY *)0x0) {
    return ne->value;
  }
  return (ASN1_STRING *)0x0;
}



int X509_NAME_get_text_by_OBJ(X509_NAME *name,ASN1_OBJECT *obj,char *buf,int len)

{
  int iVar1;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar2;
  
  iVar1 = X509_NAME_get_index_by_OBJ(name,obj,-1);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ne = X509_NAME_get_entry(name,iVar1);
    pAVar2 = X509_NAME_ENTRY_get_data(ne);
    if (buf == (char *)0x0) {
      return pAVar2->length;
    }
    iVar1 = 0;
    if (0 < len) {
      iVar1 = pAVar2->length;
      if (len <= pAVar2->length) {
        iVar1 = len + -1;
      }
      memcpy(buf,pAVar2->data,(long)iVar1);
      buf[iVar1] = '\0';
    }
  }
  return iVar1;
}



int X509_NAME_get_text_by_NID(X509_NAME *name,int nid,char *buf,int len)

{
  int iVar1;
  ASN1_OBJECT *obj;
  
  obj = OBJ_nid2obj(nid);
  if (obj != (ASN1_OBJECT *)0x0) {
    iVar1 = X509_NAME_get_text_by_OBJ(name,obj,buf,len);
    return iVar1;
  }
  return -1;
}



undefined4 X509_NAME_ENTRY_set(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


