
int ext_cmp(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



void ext_list_free(void *param_1)

{
  if ((*(byte *)((long)param_1 + 4) & 1) == 0) {
    return;
  }
  CRYPTO_free(param_1);
  return;
}



int ext_cmp_BSEARCH_CMP_FN(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



int X509V3_EXT_add(X509V3_EXT_METHOD *ext)

{
  int iVar1;
  undefined8 uVar2;
  
  if (ext_list == 0) {
    ext_list = OPENSSL_sk_new(0x100000);
    if (ext_list == 0) {
      ERR_new(0);
      uVar2 = 0x1d;
      goto LAB_001000c1;
    }
  }
  iVar1 = OPENSSL_sk_push(ext_list,ext);
  if (iVar1 != 0) {
    return 1;
  }
  ERR_new();
  uVar2 = 0x21;
LAB_001000c1:
  ERR_set_debug("crypto/x509/v3_lib.c",uVar2,"X509V3_EXT_add");
  ERR_set_error(0x22,0x8000f,0);
  return 0;
}



X509V3_EXT_METHOD * X509V3_EXT_get_nid(int nid)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  X509V3_EXT_METHOD *pXVar3;
  long in_FS_OFFSET;
  int *local_80;
  int local_78 [26];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = local_78;
  if (-1 < nid) {
    local_78[0] = nid;
    puVar2 = (undefined8 *)OBJ_bsearch_(&local_80,&standard_exts,0x49,8,ext_cmp_BSEARCH_CMP_FN);
    if (puVar2 != (undefined8 *)0x0) {
      pXVar3 = (X509V3_EXT_METHOD *)*puVar2;
      goto LAB_00100145;
    }
    if (ext_list != 0) {
      OPENSSL_sk_sort();
      uVar1 = OPENSSL_sk_find(ext_list,local_78);
      pXVar3 = (X509V3_EXT_METHOD *)OPENSSL_sk_value(ext_list,uVar1);
      goto LAB_00100145;
    }
  }
  pXVar3 = (X509V3_EXT_METHOD *)0x0;
LAB_00100145:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



X509V3_EXT_METHOD * X509V3_EXT_get(X509_EXTENSION *ext)

{
  int nid;
  ASN1_OBJECT *o;
  X509V3_EXT_METHOD *pXVar1;
  
  o = X509_EXTENSION_get_object(ext);
  nid = OBJ_obj2nid(o);
  if (nid != 0) {
    pXVar1 = X509V3_EXT_get_nid(nid);
    return pXVar1;
  }
  return (X509V3_EXT_METHOD *)0x0;
}



int X509V3_EXT_add_list(X509V3_EXT_METHOD *extlist)

{
  int iVar1;
  
  if (extlist->ext_nid == -1) {
    return 1;
  }
  do {
    iVar1 = X509V3_EXT_add(extlist);
    if (iVar1 == 0) {
      return 0;
    }
    extlist = extlist + 1;
  } while (extlist->ext_nid != -1);
  return 1;
}



int X509V3_EXT_add_alias(int nid_to,int nid_from)

{
  void *pvVar1;
  ASN1_ITEM_EXP *pAVar2;
  X509V3_EXT_FREE pXVar3;
  X509V3_EXT_I2D pXVar4;
  X509V3_EXT_S2I pXVar5;
  X509V3_EXT_V2I pXVar6;
  X509V3_EXT_R2I pXVar7;
  int iVar8;
  X509V3_EXT_METHOD *pXVar9;
  X509V3_EXT_METHOD *ext;
  
  pXVar9 = X509V3_EXT_get_nid(nid_from);
  if (pXVar9 == (X509V3_EXT_METHOD *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_lib.c",0x5f,"X509V3_EXT_add_alias");
    ERR_set_error(0x22,0x66,0);
  }
  else {
    ext = (X509V3_EXT_METHOD *)CRYPTO_malloc(0x68,"crypto/x509/v3_lib.c",0x62);
    if (ext != (X509V3_EXT_METHOD *)0x0) {
      iVar8 = pXVar9->ext_flags;
      pAVar2 = pXVar9->it;
      ext->ext_nid = pXVar9->ext_nid;
      ext->ext_flags = iVar8;
      ext->it = pAVar2;
      pXVar3 = pXVar9->ext_free;
      ext->ext_new = pXVar9->ext_new;
      ext->ext_free = pXVar3;
      pXVar4 = pXVar9->i2d;
      ext->d2i = pXVar9->d2i;
      ext->i2d = pXVar4;
      pXVar5 = pXVar9->s2i;
      ext->i2s = pXVar9->i2s;
      ext->s2i = pXVar5;
      pXVar6 = pXVar9->v2i;
      ext->i2v = pXVar9->i2v;
      ext->v2i = pXVar6;
      pXVar7 = pXVar9->r2i;
      ext->i2r = pXVar9->i2r;
      ext->r2i = pXVar7;
      pvVar1 = pXVar9->usr_data;
      ext->ext_flags = ext->ext_flags | 1;
      ext->usr_data = pvVar1;
      ext->ext_nid = nid_to;
      iVar8 = X509V3_EXT_add(ext);
      return iVar8;
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void X509V3_EXT_cleanup(void)

{
  OPENSSL_sk_pop_free(ext_list,ext_list_free);
  ext_list = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int X509V3_add_standard_extensions(void)

{
  return 1;
}



void * X509V3_EXT_d2i(X509_EXTENSION *ext)

{
  int iVar1;
  X509V3_EXT_METHOD *pXVar2;
  ASN1_OCTET_STRING *x;
  ASN1_ITEM *it;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pXVar2 = X509V3_EXT_get(ext);
  if (pXVar2 != (X509V3_EXT_METHOD *)0x0) {
    x = X509_EXTENSION_get_data(ext);
    local_28 = (uchar *)ASN1_STRING_get0_data(x);
    iVar1 = ASN1_STRING_length(x);
    if (pXVar2->it == (ASN1_ITEM_EXP *)0x0) {
      pXVar2 = (X509V3_EXT_METHOD *)(*pXVar2->d2i)((void *)0x0,&local_28,(long)iVar1);
    }
    else {
      it = (ASN1_ITEM *)(*(code *)pXVar2->it)();
      pXVar2 = (X509V3_EXT_METHOD *)ASN1_item_d2i((ASN1_VALUE **)0x0,&local_28,(long)iVar1,it);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * X509V3_get_d2i(stack_st_X509_EXTENSION *x,int nid,int *crit,int *idx)

{
  int iVar1;
  X509_EXTENSION *ex;
  ASN1_OBJECT *o;
  void *pvVar2;
  int iVar3;
  X509_EXTENSION *ex_00;
  bool bVar4;
  
  if (x != (stack_st_X509_EXTENSION *)0x0) {
    iVar3 = 0;
    if ((idx != (int *)0x0) && (iVar3 = *idx + 1, iVar3 < 0)) {
      iVar3 = 0;
    }
    ex_00 = (X509_EXTENSION *)0x0;
    for (; iVar1 = OPENSSL_sk_num(x), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      ex = (X509_EXTENSION *)OPENSSL_sk_value(x,iVar3);
      o = X509_EXTENSION_get_object(ex);
      iVar1 = OBJ_obj2nid(o);
      if (iVar1 == nid) {
        if (idx != (int *)0x0) {
          *idx = iVar3;
          ex_00 = ex;
          if (ex != (X509_EXTENSION *)0x0) goto joined_r0x001004c3;
          goto LAB_00100485;
        }
        bVar4 = ex_00 != (X509_EXTENSION *)0x0;
        ex_00 = ex;
        if (bVar4) {
          if (crit == (int *)0x0) {
            return (void *)0x0;
          }
          *crit = -2;
          return (void *)0x0;
        }
      }
    }
    if (ex_00 != (X509_EXTENSION *)0x0) {
joined_r0x001004c3:
      if (crit != (int *)0x0) {
        iVar3 = X509_EXTENSION_get_critical(ex_00);
        *crit = iVar3;
      }
      pvVar2 = X509V3_EXT_d2i(ex_00);
      return pvVar2;
    }
  }
  if (idx != (int *)0x0) {
LAB_00100485:
    *idx = -1;
  }
  if (crit != (int *)0x0) {
    *crit = -1;
  }
  return (void *)0x0;
}



int X509V3_add1_i2d(stack_st_X509_EXTENSION **x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  undefined4 uVar2;
  X509_EXTENSION *pXVar3;
  X509_EXTENSION *a;
  long lVar4;
  stack_st_X509_EXTENSION *psVar5;
  ulong uVar6;
  
  uVar6 = (ulong)((uint)flags & 0xf);
  if (uVar6 != 1) {
    iVar1 = X509v3_get_ext_by_NID(*x,nid,-1);
    if (-1 < iVar1) {
      if (uVar6 == 4) {
        return 1;
      }
      if (uVar6 == 0) {
        uVar2 = 0x91;
LAB_00100606:
        if ((flags & 0x10) != 0) {
          return 0;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/v3_lib.c",0x12f,__func___0);
        ERR_set_error(0x22,uVar2,0);
        return 0;
      }
      if (uVar6 == 5) {
        pXVar3 = (X509_EXTENSION *)OPENSSL_sk_delete(*x,iVar1);
        if (pXVar3 == (X509_EXTENSION *)0x0) {
          return -1;
        }
        X509_EXTENSION_free(pXVar3);
        return 1;
      }
      pXVar3 = X509V3_EXT_i2d(nid,crit,value);
      if (pXVar3 != (X509_EXTENSION *)0x0) {
        a = (X509_EXTENSION *)OPENSSL_sk_value(*x,iVar1);
        X509_EXTENSION_free(a);
        lVar4 = OPENSSL_sk_set(*x,iVar1,pXVar3);
        if (lVar4 == 0) {
          return -1;
        }
        return 1;
      }
      goto LAB_001006a0;
    }
    uVar2 = 0x66;
    if ((uVar6 - 3 & 0xfffffffffffffffd) == 0) goto LAB_00100606;
  }
  pXVar3 = X509V3_EXT_i2d(nid,crit,value);
  if (pXVar3 != (X509_EXTENSION *)0x0) {
    psVar5 = *x;
    if (((psVar5 != (stack_st_X509_EXTENSION *)0x0) ||
        (psVar5 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null(),
        psVar5 != (stack_st_X509_EXTENSION *)0x0)) &&
       (iVar1 = OPENSSL_sk_push(psVar5,pXVar3), iVar1 != 0)) {
      *x = psVar5;
      return 1;
    }
    if (*x != psVar5) {
      OPENSSL_sk_free(psVar5);
    }
    X509_EXTENSION_free(pXVar3);
    return -1;
  }
LAB_001006a0:
  ERR_new();
  ERR_set_debug("crypto/x509/v3_lib.c",0x10f,__func___0);
  ERR_set_error(0x22,0x90,0);
  return 0;
}


