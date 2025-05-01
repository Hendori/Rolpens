
int x509_object_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*param_2;
  iVar3 = *piVar1;
  if (iVar3 - *piVar2 == 0) {
    if (iVar3 == 1) {
      iVar3 = X509_subject_name_cmp(*(X509 **)(piVar1 + 2),*(X509 **)(piVar2 + 2));
      return iVar3;
    }
    if (iVar3 == 2) {
      iVar3 = X509_CRL_cmp(*(X509_CRL **)(piVar1 + 2),*(X509_CRL **)(piVar2 + 2));
      return iVar3;
    }
  }
  return iVar3 - *piVar2;
}



undefined8 x509_object_idx_cnt(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_2a8 [2];
  undefined1 *local_2a0;
  undefined1 local_298 [24];
  undefined8 local_280;
  undefined1 local_198 [72];
  undefined8 local_150;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2a8[0] = param_2;
  if (param_2 == 1) {
    local_2a0 = local_198;
    local_150 = param_3;
  }
  else {
    uVar1 = 0xffffffff;
    if (param_2 != 2) goto LAB_00100096;
    local_2a0 = local_298;
    local_280 = param_3;
  }
  uVar1 = OPENSSL_sk_find_all(param_1,local_2a8,param_4);
LAB_00100096:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void X509_OBJECT_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      X509_free(*(X509 **)(param_1 + 2));
    }
    else if (*param_1 == 2) {
      X509_CRL_free(*(X509_CRL **)(param_1 + 2));
    }
  }
  CRYPTO_free(param_1);
  return;
}



X509_LOOKUP * X509_LOOKUP_new(X509_LOOKUP_METHOD *method)

{
  int iVar1;
  X509_LOOKUP *ctx;
  
  ctx = (X509_LOOKUP *)CRYPTO_zalloc(0x20,"crypto/x509/x509_lu.c",0x14);
  if (ctx != (X509_LOOKUP *)0x0) {
    ctx->method = method;
    if (method->new_item == (_func_1834 *)0x0) {
      return ctx;
    }
    iVar1 = (*method->new_item)(ctx);
    if (iVar1 != 0) {
      return ctx;
    }
    CRYPTO_free(ctx);
  }
  return (X509_LOOKUP *)0x0;
}



void X509_LOOKUP_free(X509_LOOKUP *ctx)

{
  _func_1835 *p_Var1;
  
  if (ctx != (X509_LOOKUP *)0x0) {
    if ((ctx->method != (X509_LOOKUP_METHOD *)0x0) &&
       (p_Var1 = ctx->method->free, p_Var1 != (_func_1835 *)0x0)) {
      (*p_Var1)(ctx);
    }
    CRYPTO_free(ctx);
    return;
  }
  return;
}



void X509_STORE_lock(long param_1)

{
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x98));
  return;
}



void X509_STORE_unlock(long param_1)

{
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x98));
  return;
}



int X509_LOOKUP_init(X509_LOOKUP *ctx)

{
  _func_1836 *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (ctx->method == (X509_LOOKUP_METHOD *)0x0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = ctx->method->init;
  if (UNRECOVERED_JUMPTABLE != (_func_1836 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx);
    return iVar1;
  }
  return 1;
}



int X509_LOOKUP_shutdown(X509_LOOKUP *ctx)

{
  _func_1837 *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (ctx->method == (X509_LOOKUP_METHOD *)0x0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = ctx->method->shutdown;
  if (UNRECOVERED_JUMPTABLE != (_func_1837 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx);
    return iVar1;
  }
  return 1;
}



undefined8 X509_LOOKUP_ctrl_ex(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if (*(code **)(lVar1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001002c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x58))();
    return uVar2;
  }
  if (*(code **)(lVar1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001002d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x28))();
    return uVar2;
  }
  return 1;
}



int X509_LOOKUP_ctrl(X509_LOOKUP *ctx,int cmd,char *argc,long argl,char **ret)

{
  int iVar1;
  
  iVar1 = X509_LOOKUP_ctrl_ex();
  return iVar1;
}



undefined8 X509_LOOKUP_by_subject_ex(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 4) == 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x50);
    if (*(code **)(lVar1 + 0x30) == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 0x30))();
      return uVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00100336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0;
}



int X509_LOOKUP_by_subject(X509_LOOKUP *ctx,int type,X509_NAME *name,X509_OBJECT *ret)

{
  int iVar1;
  
  iVar1 = X509_LOOKUP_by_subject_ex();
  return iVar1;
}



int X509_LOOKUP_by_issuer_serial
              (X509_LOOKUP *ctx,int type,X509_NAME *name,ASN1_INTEGER *serial,X509_OBJECT *ret)

{
  _func_1840 *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if ((ctx->method != (X509_LOOKUP_METHOD *)0x0) &&
     (UNRECOVERED_JUMPTABLE = ctx->method->get_by_issuer_serial,
     UNRECOVERED_JUMPTABLE != (_func_1840 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx,type,name,serial,ret);
    return iVar1;
  }
  return 0;
}



int X509_LOOKUP_by_fingerprint(X509_LOOKUP *ctx,int type,uchar *bytes,int len,X509_OBJECT *ret)

{
  _func_1841 *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if ((ctx->method != (X509_LOOKUP_METHOD *)0x0) &&
     (UNRECOVERED_JUMPTABLE = ctx->method->get_by_fingerprint,
     UNRECOVERED_JUMPTABLE != (_func_1841 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001003b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx,type,bytes,len,ret);
    return iVar1;
  }
  return 0;
}



int X509_LOOKUP_by_alias(X509_LOOKUP *ctx,int type,char *str,int len,X509_OBJECT *ret)

{
  _func_1842 *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if ((ctx->method != (X509_LOOKUP_METHOD *)0x0) &&
     (UNRECOVERED_JUMPTABLE = ctx->method->get_by_alias, UNRECOVERED_JUMPTABLE != (_func_1842 *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x001003e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx,type,str,len,ret);
    return iVar1;
  }
  return 0;
}



undefined8 X509_LOOKUP_set_method_data(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_get_method_data(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 X509_LOOKUP_get_store(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_STORE * X509_STORE_new(void)

{
  int iVar1;
  X509_STORE *obj;
  stack_st_X509_OBJECT *psVar2;
  stack_st_X509_LOOKUP *psVar3;
  X509_VERIFY_PARAM *pXVar4;
  undefined8 uVar5;
  
  obj = (X509_STORE *)CRYPTO_zalloc(0xa0,"crypto/x509/x509_lu.c",0xb8);
  if (obj == (X509_STORE *)0x0) {
    return (X509_STORE *)0x0;
  }
  psVar2 = (stack_st_X509_OBJECT *)OPENSSL_sk_new(0x100000);
  obj->objs = psVar2;
  if (psVar2 == (stack_st_X509_OBJECT *)0x0) {
    ERR_new();
    uVar5 = 0xbd;
  }
  else {
    obj->cache = 1;
    psVar3 = (stack_st_X509_LOOKUP *)OPENSSL_sk_new_null();
    obj->get_cert_methods = psVar3;
    if (psVar3 == (stack_st_X509_LOOKUP *)0x0) {
      ERR_new();
      uVar5 = 0xc2;
    }
    else {
      pXVar4 = X509_VERIFY_PARAM_new();
      obj->param = pXVar4;
      if (pXVar4 == (X509_VERIFY_PARAM *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x509_lu.c",199,"X509_STORE_new");
        ERR_set_error(0xb,0x8000b,0);
        goto LAB_00100514;
      }
      iVar1 = CRYPTO_new_ex_data(4,obj,(CRYPTO_EX_DATA *)&(obj->ex_data).dummy);
      if (iVar1 == 0) {
        ERR_new();
        uVar5 = 0xcb;
      }
      else {
        psVar2 = (stack_st_X509_OBJECT *)CRYPTO_THREAD_lock_new();
        obj[1].objs = psVar2;
        if (psVar2 != (stack_st_X509_OBJECT *)0x0) {
          LOCK();
          obj[1].cache = 1;
          UNLOCK();
          return obj;
        }
        ERR_new();
        uVar5 = 0xd1;
      }
    }
  }
  ERR_set_debug("crypto/x509/x509_lu.c",uVar5,"X509_STORE_new");
  ERR_set_error(0xb,0x8000f,0);
LAB_00100514:
  X509_VERIFY_PARAM_free(obj->param);
  OPENSSL_sk_free(obj->objs);
  OPENSSL_sk_free(obj->get_cert_methods);
  CRYPTO_THREAD_lock_free(obj[1].objs);
  CRYPTO_free(obj);
  return (X509_STORE *)0x0;
}



void X509_STORE_free(X509_STORE *v)

{
  X509_STORE *pXVar1;
  stack_st_X509_LOOKUP *psVar2;
  int iVar3;
  X509_LOOKUP *ctx;
  int iVar4;
  
  if (v == (X509_STORE *)0x0) {
    return;
  }
  LOCK();
  pXVar1 = v + 1;
  iVar4 = pXVar1->cache;
  pXVar1->cache = pXVar1->cache + -1;
  UNLOCK();
  if ((iVar4 != 1) && (0 < iVar4 + -1)) {
    return;
  }
  psVar2 = v->get_cert_methods;
  iVar4 = 0;
  while( true ) {
    iVar3 = OPENSSL_sk_num(psVar2);
    if (iVar3 <= iVar4) break;
    ctx = (X509_LOOKUP *)OPENSSL_sk_value(psVar2,iVar4);
    X509_LOOKUP_shutdown(ctx);
    X509_LOOKUP_free(ctx);
    iVar4 = iVar4 + 1;
  }
  OPENSSL_sk_free(psVar2);
  OPENSSL_sk_pop_free(v->objs,X509_OBJECT_free);
  CRYPTO_free_ex_data(4,v,(CRYPTO_EX_DATA *)&(v->ex_data).dummy);
  X509_VERIFY_PARAM_free(v->param);
  CRYPTO_THREAD_lock_free(v[1].objs);
  CRYPTO_free(v);
  return;
}



bool X509_STORE_up_ref(long param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x90);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



X509_LOOKUP * X509_STORE_add_lookup(X509_STORE *v,X509_LOOKUP_METHOD *m)

{
  stack_st_X509_LOOKUP *psVar1;
  int iVar2;
  int iVar3;
  X509_LOOKUP *pXVar4;
  
  iVar3 = 0;
  psVar1 = v->get_cert_methods;
  while( true ) {
    iVar2 = OPENSSL_sk_num(psVar1);
    if (iVar2 <= iVar3) {
      pXVar4 = X509_LOOKUP_new(m);
      if (pXVar4 == (X509_LOOKUP *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x509_lu.c",0x11c,"X509_STORE_add_lookup");
        ERR_set_error(0xb,0x8000b,0);
      }
      else {
        pXVar4->store_ctx = v;
        iVar3 = OPENSSL_sk_push(v->get_cert_methods,pXVar4);
        if (iVar3 != 0) {
          return pXVar4;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/x509_lu.c",0x124,"X509_STORE_add_lookup");
        ERR_set_error(0xb,0x8000f,0);
        X509_LOOKUP_free(pXVar4);
      }
      return (X509_LOOKUP *)0x0;
    }
    pXVar4 = (X509_LOOKUP *)OPENSSL_sk_value(psVar1,iVar3);
    if (pXVar4->method == m) break;
    iVar3 = iVar3 + 1;
  }
  return pXVar4;
}



void X509_OBJECT_up_ref_count(X509_OBJECT *a)

{
  if (a->type == 1) {
    X509_up_ref((a->data).ptr);
    return;
  }
  if (a->type != 2) {
    return;
  }
  X509_CRL_up_ref((a->data).ptr);
  return;
}



undefined8 X509_OBJECT_get0_X509(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 1)) {
    return *(undefined8 *)(param_1 + 2);
  }
  return 0;
}



undefined8 X509_OBJECT_get0_X509_CRL(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 2)) {
    return *(undefined8 *)(param_1 + 2);
  }
  return 0;
}



undefined4 X509_OBJECT_get_type(undefined4 *param_1)

{
  return *param_1;
}



void X509_OBJECT_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x10,"crypto/x509/x509_lu.c",0x1e2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



X509_OBJECT * x509_object_dup(int *param_1)

{
  X509_OBJECT *a;
  
  a = (X509_OBJECT *)X509_OBJECT_new();
  if (a != (X509_OBJECT *)0x0) {
    a->type = *param_1;
    a->data = *(_union_381 *)(param_1 + 2);
    X509_OBJECT_up_ref_count(a);
  }
  return a;
}



undefined8 X509_OBJECT_set1_X509(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = X509_up_ref(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*param_1 == 1) {
    X509_free(*(X509 **)(param_1 + 2));
  }
  else if (*param_1 == 2) {
    X509_CRL_free(*(X509_CRL **)(param_1 + 2));
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  return 1;
}



undefined8 X509_OBJECT_set1_X509_CRL(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = X509_CRL_up_ref(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*param_1 == 1) {
    X509_free(*(X509 **)(param_1 + 2));
  }
  else if (*param_1 == 2) {
    X509_CRL_free(*(X509_CRL **)(param_1 + 2));
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_2;
  return 1;
}



int X509_OBJECT_idx_by_subject(stack_st_X509_OBJECT *h,int type,X509_NAME *name)

{
  int iVar1;
  
  iVar1 = x509_object_idx_cnt();
  return iVar1;
}



X509_OBJECT * X509_OBJECT_retrieve_by_subject(stack_st_X509_OBJECT *h,int type,X509_NAME *name)

{
  int iVar1;
  X509_OBJECT *pXVar2;
  
  iVar1 = X509_OBJECT_idx_by_subject(h,type,name);
  if (iVar1 != -1) {
    pXVar2 = (X509_OBJECT *)OPENSSL_sk_value(h,iVar1);
    return pXVar2;
  }
  return (X509_OBJECT *)0x0;
}



undefined8
ossl_x509_store_ctx_get_by_subject(long *param_1,int param_2,X509_NAME *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  X509_OBJECT *pXVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  X509_OBJECT *local_60;
  X509_OBJECT local_58;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    local_58.type = 0;
    local_58.data.ptr = (char *)0x0;
    iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar1 + 0x98));
    if (iVar2 != 0) {
      iVar2 = OPENSSL_sk_is_sorted(*(undefined8 *)(lVar1 + 8));
      if (iVar2 == 0) {
        X509_STORE_unlock(lVar1);
        iVar2 = X509_STORE_lock(lVar1);
        if (iVar2 == 0) goto LAB_00100a87;
        OPENSSL_sk_sort(*(undefined8 *)(lVar1 + 8));
      }
      pXVar4 = X509_OBJECT_retrieve_by_subject
                         (*(stack_st_X509_OBJECT **)(lVar1 + 8),param_2,param_3);
      X509_STORE_unlock(lVar1);
      if ((pXVar4 == (X509_OBJECT *)0x0) || (local_60 = pXVar4, param_2 == 2)) {
        local_60 = &local_58;
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x10)), iVar2 < iVar3;
            iVar2 = iVar2 + 1) {
          lVar6 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x10),iVar2);
          if (*(int *)(lVar6 + 4) == 0) {
            if (*(long *)(lVar6 + 8) == 0) goto LAB_00100bb8;
            iVar3 = X509_LOOKUP_by_subject_ex
                              (lVar6,param_2,param_3,local_60,param_1[0x21],param_1[0x22]);
            if (iVar3 != 0) goto LAB_00100b04;
          }
        }
        local_60 = pXVar4;
        if (pXVar4 == (X509_OBJECT *)0x0) goto LAB_00100a87;
      }
LAB_00100b04:
      if (param_4 != (int *)0x0) {
        X509_OBJECT_up_ref_count(local_60);
        if (extraout_EAX == 0) {
LAB_00100bb8:
          uVar5 = 0xffffffff;
          goto LAB_00100a89;
        }
        *param_4 = local_60->type;
        *(_union_381 *)(param_4 + 2) = local_60->data;
      }
      uVar5 = 1;
      goto LAB_00100a89;
    }
  }
LAB_00100a87:
  uVar5 = 0;
LAB_00100a89:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



bool X509_STORE_CTX_get_by_subject(void)

{
  int iVar1;
  
  iVar1 = ossl_x509_store_ctx_get_by_subject();
  return 0 < iVar1;
}



long X509_STORE_CTX_get_obj_by_subject(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = X509_OBJECT_new();
  if (lVar2 != 0) {
    iVar1 = X509_STORE_CTX_get_by_subject(param_1,param_2,param_3,lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
    X509_OBJECT_free(lVar2);
  }
  return 0;
}



undefined8 X509_STORE_get0_objects(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 X509_STORE_get1_objects(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_lu.c",0x25b,"X509_STORE_get1_objects");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x98));
    if (iVar1 != 0) {
      uVar2 = OPENSSL_sk_deep_copy(*(undefined8 *)(param_1 + 8),x509_object_dup,X509_OBJECT_free);
      X509_STORE_unlock(param_1);
      return uVar2;
    }
  }
  return 0;
}



long X509_STORE_get1_all_certs(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_lu.c",0x26f,"X509_STORE_get1_all_certs");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    lVar3 = OPENSSL_sk_new_null();
    if (lVar3 != 0) {
      iVar1 = X509_STORE_lock(param_1);
      if (iVar1 != 0) {
        iVar1 = 0;
        OPENSSL_sk_sort(*(undefined8 *)(param_1 + 8));
        uVar4 = X509_STORE_get0_objects(param_1);
        do {
          iVar2 = OPENSSL_sk_num(uVar4);
          if (iVar2 <= iVar1) {
            X509_STORE_unlock(param_1);
            return lVar3;
          }
          uVar5 = OPENSSL_sk_value(uVar4,iVar1);
          lVar6 = X509_OBJECT_get0_X509(uVar5);
          if (lVar6 != 0) {
            iVar2 = X509_add_cert(lVar3,lVar6,1);
            if (iVar2 == 0) {
              X509_STORE_unlock(param_1);
              break;
            }
          }
          iVar1 = iVar1 + 1;
        } while( true );
      }
      OSSL_STACK_OF_X509_free(lVar3);
    }
  }
  return 0;
}



long X509_STORE_CTX_get1_certs(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  lVar5 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar5 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar5 = OPENSSL_sk_new_null();
      return lVar5;
    }
    goto LAB_00100fa9;
  }
  iVar1 = X509_STORE_lock(lVar5);
  if (iVar1 == 0) goto LAB_00100ee0;
  OPENSSL_sk_sort(*(undefined8 *)(lVar5 + 8));
  iVar1 = x509_object_idx_cnt(*(undefined8 *)(lVar5 + 8),1,param_2,&local_34);
  if (iVar1 < 0) {
    X509_STORE_unlock(lVar5);
    iVar1 = ossl_x509_store_ctx_get_by_subject(param_1,1,param_2,0);
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        lVar3 = OPENSSL_sk_new_null();
        goto LAB_00100ee3;
      }
    }
    else {
      iVar1 = X509_STORE_lock(lVar5);
      if (iVar1 != 0) {
        OPENSSL_sk_sort(*(undefined8 *)(lVar5 + 8));
        iVar1 = x509_object_idx_cnt(*(undefined8 *)(lVar5 + 8),1,param_2,&local_34);
        goto LAB_00100e6f;
      }
    }
LAB_00100ee0:
    lVar3 = 0;
  }
  else {
LAB_00100e6f:
    lVar3 = OPENSSL_sk_new_null();
    if (((-1 < iVar1) && (lVar3 != 0)) && (0 < local_34)) {
      iVar6 = 0;
      do {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar1 + iVar6);
        iVar2 = X509_add_cert(lVar3,*(undefined8 *)(lVar4 + 8),1);
        if (iVar2 == 0) {
          X509_STORE_unlock(lVar5);
          OSSL_STACK_OF_X509_free(lVar3);
          goto LAB_00100ee0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_34);
    }
    X509_STORE_unlock(lVar5);
  }
LAB_00100ee3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
LAB_00100fa9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 X509_STORE_CTX_get1_crls(long *param_1,undefined8 param_2)

{
  long lVar1;
  X509_CRL *a;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  lVar1 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_x509_store_ctx_get_by_subject(param_1,2,param_2,0);
  if (-1 < iVar2) {
    uVar4 = OPENSSL_sk_new_null();
    if (iVar2 == 0) goto LAB_00100ffb;
    iVar2 = X509_STORE_lock(lVar1);
    if (iVar2 != 0) {
      OPENSSL_sk_sort(*(undefined8 *)(lVar1 + 8));
      iVar2 = x509_object_idx_cnt(*(undefined8 *)(lVar1 + 8),2,param_2,&local_34);
      if ((-1 < iVar2) && (iVar6 = 0, 0 < local_34)) {
        do {
          lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 8),iVar2 + iVar6);
          a = *(X509_CRL **)(lVar5 + 8);
          iVar3 = X509_CRL_up_ref(a);
          if (iVar3 == 0) {
            X509_STORE_unlock(lVar1);
            OPENSSL_sk_pop_free(uVar4,X509_CRL_free);
            goto LAB_001010b8;
          }
          iVar3 = OPENSSL_sk_push(uVar4,a);
          if (iVar3 == 0) {
            X509_STORE_unlock(lVar1);
            X509_CRL_free(a);
            OPENSSL_sk_pop_free(uVar4,X509_CRL_free);
            goto LAB_001010b8;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_34);
      }
      X509_STORE_unlock(lVar1);
      goto LAB_00100ffb;
    }
    OPENSSL_sk_free(uVar4);
  }
LAB_001010b8:
  uVar4 = 0;
LAB_00100ffb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



X509_OBJECT * X509_OBJECT_retrieve_match(stack_st_X509_OBJECT *h,X509_OBJECT *x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  X509_OBJECT *pXVar5;
  
  iVar1 = OPENSSL_sk_find();
  if (-1 < iVar1) {
    if (1 < x->type - 1U) {
      pXVar5 = (X509_OBJECT *)OPENSSL_sk_value(h,iVar1);
      return pXVar5;
    }
    iVar2 = OPENSSL_sk_num(h);
    if (iVar1 < iVar2) {
      do {
        pXVar5 = (X509_OBJECT *)OPENSSL_sk_value(h,iVar1);
        iVar3 = pXVar5->type;
        iVar4 = x->type;
        if (iVar3 != iVar4) {
          return (X509_OBJECT *)0x0;
        }
        if (iVar3 == 1) {
          iVar3 = X509_subject_name_cmp((pXVar5->data).x509,(x->data).x509);
LAB_00101178:
          if (iVar3 != 0) {
            return (X509_OBJECT *)0x0;
          }
          iVar4 = x->type;
          if (iVar4 != 1) goto LAB_00101185;
          iVar3 = X509_cmp((pXVar5->data).x509,(x->data).x509);
        }
        else {
          if (iVar3 == 2) {
            iVar3 = X509_CRL_cmp((pXVar5->data).crl,(x->data).crl);
            goto LAB_00101178;
          }
LAB_00101185:
          if (iVar4 != 2) {
            return pXVar5;
          }
          iVar3 = X509_CRL_match((pXVar5->data).crl,(x->data).crl);
        }
        if (iVar3 == 0) {
          return pXVar5;
        }
        iVar1 = iVar1 + 1;
      } while (iVar2 != iVar1);
    }
  }
  return (X509_OBJECT *)0x0;
}



int X509_STORE_add_crl(X509_STORE *ctx,X509_CRL *x)

{
  int extraout_EAX;
  int iVar1;
  X509_OBJECT *a;
  X509_OBJECT *pXVar2;
  
  if (x != (X509_CRL *)0x0) {
    a = (X509_OBJECT *)X509_OBJECT_new();
    if (a != (X509_OBJECT *)0x0) {
      a->type = 2;
      (a->data).crl = x;
      X509_OBJECT_up_ref_count(a);
      if (extraout_EAX != 0) {
        iVar1 = X509_STORE_lock(ctx);
        if (iVar1 != 0) {
          pXVar2 = X509_OBJECT_retrieve_match(ctx->objs,a);
          if (pXVar2 == (X509_OBJECT *)0x0) {
            iVar1 = OPENSSL_sk_push(ctx->objs,a);
            X509_STORE_unlock(ctx);
            if (iVar1 == 0) {
              X509_OBJECT_free(a);
              goto LAB_0010128e;
            }
          }
          else {
            X509_STORE_unlock(ctx);
            X509_OBJECT_free(a);
          }
          return 1;
        }
      }
      a->type = 0;
      X509_OBJECT_free(a);
    }
  }
LAB_0010128e:
  ERR_new();
  ERR_set_debug("crypto/x509/x509_lu.c",0x1ba,"X509_STORE_add_crl");
  ERR_set_error(0xb,0x8000b,0);
  return 0;
}



int X509_STORE_add_cert(X509_STORE *ctx,X509 *x)

{
  int extraout_EAX;
  int iVar1;
  X509_OBJECT *a;
  X509_OBJECT *pXVar2;
  
  if (x != (X509 *)0x0) {
    a = (X509_OBJECT *)X509_OBJECT_new();
    if (a != (X509_OBJECT *)0x0) {
      a->type = 1;
      (a->data).x509 = x;
      X509_OBJECT_up_ref_count(a);
      if (extraout_EAX != 0) {
        iVar1 = X509_STORE_lock(ctx);
        if (iVar1 != 0) {
          pXVar2 = X509_OBJECT_retrieve_match(ctx->objs,a);
          if (pXVar2 == (X509_OBJECT *)0x0) {
            iVar1 = OPENSSL_sk_push(ctx->objs,a);
            X509_STORE_unlock(ctx);
            if (iVar1 == 0) {
              X509_OBJECT_free(a);
              goto LAB_0010136e;
            }
          }
          else {
            X509_STORE_unlock(ctx);
            X509_OBJECT_free(a);
          }
          return 1;
        }
      }
      a->type = 0;
      X509_OBJECT_free(a);
    }
  }
LAB_0010136e:
  ERR_new();
  ERR_set_debug("crypto/x509/x509_lu.c",0x1b1,"X509_STORE_add_cert");
  ERR_set_error(0xb,0x8000b,0);
  return 0;
}



int X509_STORE_set_flags(X509_STORE *ctx,ulong flags)

{
  int iVar1;
  
  iVar1 = X509_VERIFY_PARAM_set_flags(ctx->param,flags);
  return iVar1;
}



int X509_STORE_set_depth(X509_STORE *store,int depth)

{
  X509_VERIFY_PARAM_set_depth(store->param,depth);
  return 1;
}



int X509_STORE_set_purpose(X509_STORE *ctx,int purpose)

{
  int iVar1;
  
  iVar1 = X509_VERIFY_PARAM_set_purpose(ctx->param,purpose);
  return iVar1;
}



int X509_STORE_set_trust(X509_STORE *ctx,int trust)

{
  int iVar1;
  
  iVar1 = X509_VERIFY_PARAM_set_trust(ctx->param,trust);
  return iVar1;
}



int X509_STORE_set1_param(X509_STORE *ctx,X509_VERIFY_PARAM *pm)

{
  int iVar1;
  
  iVar1 = X509_VERIFY_PARAM_set1(ctx->param,pm);
  return iVar1;
}



undefined8 X509_STORE_get0_param(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



void X509_STORE_set_verify(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



undefined8 X509_STORE_get_verify(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



void X509_STORE_set_verify_cb(X509_STORE *ctx,verify_cb *verify_cb)

{
  ctx->verify_cb = (_func_1844 *)verify_cb;
  return;
}



undefined8 X509_STORE_get_verify_cb(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



void X509_STORE_set_get_issuer(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



undefined8 X509_STORE_get_get_issuer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



void X509_STORE_set_check_issued(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



undefined8 X509_STORE_get_check_issued(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



void X509_STORE_set_check_revocation(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}



undefined8 X509_STORE_get_check_revocation(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



void X509_STORE_set_get_crl(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



undefined8 X509_STORE_get_get_crl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



void X509_STORE_set_check_crl(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



undefined8 X509_STORE_get_check_crl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



void X509_STORE_set_cert_crl(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



undefined8 X509_STORE_get_cert_crl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



void X509_STORE_set_check_policy(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



undefined8 X509_STORE_get_check_policy(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



void X509_STORE_set_lookup_certs(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}



undefined8 X509_STORE_get_lookup_certs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



void X509_STORE_set_lookup_crls(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}



undefined8 X509_STORE_get_lookup_crls(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



void X509_STORE_set_cleanup(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}



undefined8 X509_STORE_get_cleanup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



void X509_STORE_set_ex_data(long param_1,int param_2,void *param_3)

{
  CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(param_1 + 0x80),param_2,param_3);
  return;
}



void X509_STORE_get_ex_data(long param_1,int param_2)

{
  CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(param_1 + 0x80),param_2);
  return;
}



undefined8 X509_STORE_CTX_get0_store(undefined8 *param_1)

{
  return *param_1;
}


