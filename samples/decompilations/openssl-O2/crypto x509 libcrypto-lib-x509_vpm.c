
void str_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void str_copy(char *param_1)

{
  CRYPTO_strdup(param_1,"crypto/x509/x509_vpm.c",0x1c);
  return;
}



undefined8 int_x509_param_set_hosts(long param_1,int param_2,char *param_3,size_t param_4)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  
  if (param_4 == 0) {
    if ((param_3 == (char *)0x0) || (param_4 = strlen(param_3), param_4 == 0)) goto LAB_0010009d;
  }
  else {
    if (param_3 == (char *)0x0) {
LAB_0010009d:
      if (param_2 != 0) {
        return 1;
      }
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x38),0x100000);
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 1;
    }
    sVar4 = param_4 - 1;
    if (param_4 == 1) {
      sVar4 = 1;
    }
    pvVar2 = memchr(param_3,0,sVar4);
    if (pvVar2 != (void *)0x0) {
      return 0;
    }
  }
  sVar4 = param_4 - 1;
  if (param_3[param_4 - 1] == '\0') {
    if (param_2 == 0) {
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x38),0x100000);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    param_4 = sVar4;
    if (sVar4 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x38),0x100000);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  pvVar2 = (void *)CRYPTO_strndup(param_3,param_4,"crypto/x509/x509_vpm.c",0x3c);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(param_1 + 0x38) = lVar3;
      if (lVar3 == 0) {
        CRYPTO_free(pvVar2);
        return 0;
      }
    }
    iVar1 = OPENSSL_sk_push(lVar3,pvVar2);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(pvVar2);
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x38));
    if (iVar1 == 0) {
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 0;
    }
  }
  return 0;
}



undefined8 int_x509_param_set1(undefined8 *param_1,size_t *param_2,char *param_3,size_t param_4)

{
  void *__dest;
  
  if (param_3 == (char *)0x0) {
    __dest = (void *)0x0;
    param_4 = 0;
  }
  else {
    if (param_4 == 0) {
      param_4 = strlen(param_3);
    }
    __dest = CRYPTO_malloc((int)param_4 + 1,"crypto/x509/x509_vpm.c",0xf5);
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,param_3,param_4);
    *(undefined1 *)((long)__dest + param_4) = 0;
  }
  CRYPTO_free((void *)*param_1);
  *param_1 = __dest;
  *param_2 = param_4;
  return 1;
}



int param_cmp(EVP_PKEY *a,EVP_PKEY *b)

{
  int iVar1;
  
  iVar1 = strcmp((char *)**(undefined8 **)a,(char *)**(undefined8 **)b);
  return iVar1;
}



void table_cmp_BSEARCH_CMP_FN(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void X509_VERIFY_PARAM_free(X509_VERIFY_PARAM *param)

{
  if (param != (X509_VERIFY_PARAM *)0x0) {
    OPENSSL_sk_pop_free(param->policies,ASN1_OBJECT_free);
    OPENSSL_sk_pop_free(param[1].name,0x100000);
    CRYPTO_free((void *)param[1].inh_flags);
    CRYPTO_free((void *)param[1].flags);
    CRYPTO_free(*(void **)&param[1].depth);
    CRYPTO_free(param);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_VERIFY_PARAM * X509_VERIFY_PARAM_new(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  X509_VERIFY_PARAM *pXVar4;
  
  pXVar4 = (X509_VERIFY_PARAM *)CRYPTO_zalloc(0x70,"crypto/x509/x509_vpm.c",0x56);
  uVar1 = _LC1;
  if (pXVar4 != (X509_VERIFY_PARAM *)0x0) {
    *(undefined4 *)&pXVar4->field_0x2c = 0xffffffff;
    uVar3 = _LC1;
    _LC1._0_4_ = (undefined4)uVar1;
    _LC1._4_4_ = SUB84(uVar1,4);
    uVar2 = _LC1._4_4_;
    pXVar4->trust = (undefined4)_LC1;
    _LC1 = uVar3;
    pXVar4->depth = uVar2;
  }
  return pXVar4;
}



int X509_VERIFY_PARAM_set1_name(X509_VERIFY_PARAM *param,char *name)

{
  char *pcVar1;
  
  CRYPTO_free(param->name);
  pcVar1 = CRYPTO_strdup(name,"crypto/x509/x509_vpm.c",0x108);
  param->name = pcVar1;
  return (int)(pcVar1 != (char *)0x0);
}



int X509_VERIFY_PARAM_set_flags(X509_VERIFY_PARAM *param,ulong flags)

{
  ulong uVar1;
  
  uVar1 = param->flags | flags;
  if ((flags & 0x780) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  param->flags = uVar1;
  return 1;
}



int X509_VERIFY_PARAM_clear_flags(X509_VERIFY_PARAM *param,ulong flags)

{
  param->flags = param->flags & ~flags;
  return 1;
}



ulong X509_VERIFY_PARAM_get_flags(X509_VERIFY_PARAM *param)

{
  return param->flags;
}



undefined4 X509_VERIFY_PARAM_get_inh_flags(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



undefined8 X509_VERIFY_PARAM_set_inh_flags(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return 1;
}



int X509_VERIFY_PARAM_set_purpose(X509_VERIFY_PARAM *param,int purpose)

{
  int iVar1;
  
  iVar1 = X509_PURPOSE_set(&param->purpose,purpose);
  return iVar1;
}



undefined4 X509_VERIFY_PARAM_get_purpose(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



int X509_VERIFY_PARAM_set_trust(X509_VERIFY_PARAM *param,int trust)

{
  int iVar1;
  
  iVar1 = X509_TRUST_set(&param->trust,trust);
  return iVar1;
}



void X509_VERIFY_PARAM_set_depth(X509_VERIFY_PARAM *param,int depth)

{
  param->depth = depth;
  return;
}



void X509_VERIFY_PARAM_set_auth_level(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



undefined8 X509_VERIFY_PARAM_get_time(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



void X509_VERIFY_PARAM_set_time(X509_VERIFY_PARAM *param,time_t t)

{
  param->flags = param->flags | 2;
  param->check_time = t;
  return;
}



int X509_VERIFY_PARAM_add0_policy(X509_VERIFY_PARAM *param,ASN1_OBJECT *policy)

{
  int iVar1;
  stack_st_ASN1_OBJECT *psVar2;
  
  psVar2 = param->policies;
  if (psVar2 == (stack_st_ASN1_OBJECT *)0x0) {
    psVar2 = (stack_st_ASN1_OBJECT *)OPENSSL_sk_new_null();
    param->policies = psVar2;
    if (psVar2 == (stack_st_ASN1_OBJECT *)0x0) {
      return 0;
    }
  }
  iVar1 = OPENSSL_sk_push(psVar2,policy);
  return (uint)(0 < iVar1);
}



int X509_VERIFY_PARAM_set1_policies(X509_VERIFY_PARAM *param,stack_st_ASN1_OBJECT *policies)

{
  int iVar1;
  stack_st_ASN1_OBJECT *psVar2;
  ASN1_OBJECT *pAVar3;
  int iVar4;
  
  if (param == (X509_VERIFY_PARAM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vpm.c",0x165,"X509_VERIFY_PARAM_set1_policies");
    ERR_set_error(0xb,0xc0102,0);
    return 0;
  }
  OPENSSL_sk_pop_free(param->policies,ASN1_OBJECT_free);
  if (policies == (stack_st_ASN1_OBJECT *)0x0) {
    param->policies = (stack_st_ASN1_OBJECT *)0x0;
  }
  else {
    psVar2 = (stack_st_ASN1_OBJECT *)OPENSSL_sk_new_null();
    iVar4 = 0;
    param->policies = psVar2;
    if (psVar2 == (stack_st_ASN1_OBJECT *)0x0) {
      return 0;
    }
    for (; iVar1 = OPENSSL_sk_num(policies), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      pAVar3 = (ASN1_OBJECT *)OPENSSL_sk_value(policies,iVar4);
      pAVar3 = OBJ_dup(pAVar3);
      if (pAVar3 == (ASN1_OBJECT *)0x0) {
        return 0;
      }
      iVar1 = OPENSSL_sk_push(param->policies,pAVar3);
      if (iVar1 == 0) {
        ASN1_OBJECT_free(pAVar3);
        return 0;
      }
    }
    param->flags = param->flags | 0x80;
  }
  return 1;
}



void X509_VERIFY_PARAM_get0_host(long param_1)

{
  OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x38));
  return;
}



void X509_VERIFY_PARAM_set1_host(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int_x509_param_set_hosts(param_1,0,param_2,param_3);
  return;
}



void X509_VERIFY_PARAM_add1_host(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int_x509_param_set_hosts(param_1,1,param_2,param_3);
  return;
}



void X509_VERIFY_PARAM_set_hostflags(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



undefined4 X509_VERIFY_PARAM_get_hostflags(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



undefined8 X509_VERIFY_PARAM_get0_peername(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



void X509_VERIFY_PARAM_move_peername(long param_1,long param_2)

{
  void *ptr;
  void *pvVar1;
  
  ptr = *(void **)(param_1 + 0x48);
  if (param_2 == 0) {
    if (ptr != (void *)0x0) {
      CRYPTO_free(ptr);
      *(undefined8 *)(param_1 + 0x48) = 0;
      return;
    }
  }
  else {
    pvVar1 = *(void **)(param_2 + 0x48);
    if (pvVar1 != ptr) {
      CRYPTO_free(ptr);
      *(void **)(param_1 + 0x48) = pvVar1;
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



undefined8 X509_VERIFY_PARAM_get0_email(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



void X509_VERIFY_PARAM_set1_email(long param_1,undefined8 param_2,undefined8 param_3)

{
  int_x509_param_set1(param_1 + 0x50,param_1 + 0x58,param_2,param_3);
  return;
}



undefined8 X509_VERIFY_PARAM_get1_ip_asc(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    uVar1 = ossl_ipaddr_to_asc(*(long *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_vpm.c",0x1c4,"int_X509_VERIFY_PARAM_get0_ip");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



undefined8 X509_VERIFY_PARAM_set1_ip(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (((param_3 & 0xfffffffffffffffb) != 0) && (param_3 != 0x10)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_vpm.c",0x1d8,"X509_VERIFY_PARAM_set1_ip");
    ERR_set_error(0xb,0x80106,0);
    return 0;
  }
  uVar1 = int_x509_param_set1(param_1 + 0x60,param_1 + 0x68,param_2);
  return uVar1;
}



int X509_VERIFY_PARAM_inherit(X509_VERIFY_PARAM *to,X509_VERIFY_PARAM *from)

{
  time_t tVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  stack_st_ASN1_OBJECT *policies;
  long lVar13;
  
  if (from == (X509_VERIFY_PARAM *)0x0) {
    return 1;
  }
  uVar8 = (uint)to->inh_flags | (uint)from->inh_flags;
  if ((uVar8 & 0x10) != 0) {
    *(undefined4 *)&to->inh_flags = 0;
  }
  if ((uVar8 & 8) != 0) {
    return 1;
  }
  iVar9 = from->purpose;
  iVar4 = from->trust;
  iVar5 = from->depth;
  iVar6 = *(int *)&from->field_0x2c;
  uVar12 = to->flags;
  if ((uVar8 & 2) == 0) {
    uVar10 = uVar8 & 1;
    iVar7 = iVar6;
    if (iVar9 == 0) {
      if (iVar4 == 0) {
        if (iVar5 != -1) {
          if (uVar10 == 0) goto LAB_00100980;
          goto LAB_00100bc9;
        }
        if (iVar6 == -1) goto LAB_00100999;
        if (uVar10 == 0) goto LAB_0010098f;
      }
      else {
        if (uVar10 == 0) {
LAB_00100961:
          if (to->trust == 0) {
            to->trust = iVar4;
          }
          goto joined_r0x00100abb;
        }
LAB_00100bc1:
        to->trust = iVar4;
LAB_00100bc4:
        if (iVar5 == -1) goto joined_r0x00100bcf;
LAB_00100bc9:
        to->depth = iVar5;
joined_r0x00100bcf:
        if (iVar7 == -1) goto LAB_00100999;
      }
      *(int *)&to->field_0x2c = iVar6;
    }
    else {
      if (uVar10 != 0) {
        to->purpose = iVar9;
        if (iVar4 != 0) goto LAB_00100bc1;
        goto LAB_00100bc4;
      }
      if (to->purpose == 0) {
        to->purpose = iVar9;
      }
      if (iVar4 != 0) goto LAB_00100961;
joined_r0x00100abb:
      if (iVar5 != -1) {
LAB_00100980:
        if (to->depth == -1) {
          to->depth = iVar5;
        }
      }
      if (iVar6 != -1) {
LAB_0010098f:
        iVar7 = *(int *)&to->field_0x2c;
        goto joined_r0x00100bcf;
      }
    }
LAB_00100999:
    if ((uVar12 & 2) == 0) {
      tVar1 = from->check_time;
      uVar12 = uVar12 & 0xfffffffffffffffd;
      to->flags = uVar12;
      to->check_time = tVar1;
    }
    if ((uVar8 & 4) == 0) {
      policies = from->policies;
      to->flags = uVar12 | from->flags;
      if (policies == (stack_st_ASN1_OBJECT *)0x0) goto LAB_00100b25;
LAB_001009d4:
      if (uVar10 != 0) {
        iVar9 = X509_VERIFY_PARAM_set1_policies(to,policies);
        if (iVar9 == 0) {
          return 0;
        }
        iVar9 = (int)from[1].check_time;
        if (iVar9 == 0) {
          if (from[1].name == (char *)0x0) goto LAB_00100c63;
LAB_00100a06:
          pcVar11 = to[1].name;
LAB_00100a0a:
          OPENSSL_sk_pop_free(pcVar11,0x100000);
          to[1].name = (char *)0x0;
          if (from[1].name != (char *)0x0) {
            pcVar11 = (char *)OPENSSL_sk_deep_copy(from[1].name,str_copy,0x100000);
            to[1].name = pcVar11;
            if (pcVar11 == (char *)0x0) {
              return 0;
            }
          }
          goto LAB_00100a46;
        }
LAB_001009f8:
        pcVar11 = from[1].name;
        *(int *)&to[1].check_time = iVar9;
        if (pcVar11 != (char *)0x0) goto LAB_00100a06;
LAB_00100c63:
        uVar12 = from[1].flags;
        if (uVar12 == 0) {
          lVar13 = *(long *)&from[1].depth;
          if (lVar13 == 0) {
            return 1;
          }
          goto LAB_00100aec;
        }
        goto LAB_00100a58;
      }
      if (to->policies != (stack_st_ASN1_OBJECT *)0x0) {
        pcVar11 = from[1].name;
        if ((int)from[1].check_time == 0) goto joined_r0x00100cd0;
LAB_00100b3d:
        if ((int)to[1].check_time == 0) {
          *(int *)&to[1].check_time = (int)from[1].check_time;
        }
        if (pcVar11 != (char *)0x0) goto LAB_00100b9b;
        if (from[1].flags != 0) goto LAB_00100b60;
        goto LAB_00100a6c;
      }
      iVar9 = X509_VERIFY_PARAM_set1_policies(to,policies);
      if (iVar9 == 0) {
        return 0;
      }
      if ((int)from[1].check_time != 0) {
LAB_00100b39:
        pcVar11 = from[1].name;
        goto LAB_00100b3d;
      }
      pcVar11 = from[1].name;
joined_r0x00100cd0:
      if (pcVar11 != (char *)0x0) {
LAB_00100b9b:
        pcVar11 = to[1].name;
LAB_00100b9f:
        if (pcVar11 == (char *)0x0) goto LAB_00100a0a;
      }
      if (from[1].flags != 0) goto LAB_00100b60;
LAB_00100b6b:
      if (*(long *)&from[1].depth == 0) {
        return 1;
      }
    }
    else {
      to->flags = 0;
      policies = from->policies;
      to->flags = from->flags;
      if (policies != (stack_st_ASN1_OBJECT *)0x0) goto LAB_001009d4;
LAB_00100b25:
      iVar9 = (int)from[1].check_time;
      if (iVar9 != 0) {
        if (uVar10 == 0) goto LAB_00100b39;
        goto LAB_001009f8;
      }
      if (from[1].name != (char *)0x0) {
        pcVar11 = to[1].name;
        if (uVar10 != 0) goto LAB_00100a0a;
        goto LAB_00100b9f;
      }
LAB_00100a46:
      uVar12 = from[1].flags;
      if (uVar12 != 0) {
        if (uVar10 == 0) {
LAB_00100b60:
          if (to[1].flags != 0) goto LAB_00100b6b;
          uVar12 = from[1].flags;
        }
LAB_00100a58:
        uVar2._0_4_ = from[1].purpose;
        uVar2._4_4_ = from[1].trust;
        iVar9 = X509_VERIFY_PARAM_set1_email(to,uVar12,uVar2);
        if (iVar9 == 0) {
          return 0;
        }
      }
LAB_00100a6c:
      lVar13 = *(long *)&from[1].depth;
      if (lVar13 == 0) {
        return 1;
      }
      if (uVar10 != 0) goto LAB_00100aec;
    }
    if (*(long *)&to[1].depth != 0) {
      return 1;
    }
  }
  else {
    tVar1 = from->check_time;
    to->purpose = iVar9;
    to->trust = iVar4;
    to->depth = iVar5;
    *(int *)&to->field_0x2c = iVar6;
    to->flags = uVar12 & 0xfffffffffffffffd;
    to->check_time = tVar1;
    if ((uVar8 & 4) == 0) {
      uVar12 = uVar12 & 0xfffffffffffffffd | from->flags;
    }
    else {
      to->flags = 0;
      uVar12 = from->flags;
    }
    to->flags = uVar12;
    iVar9 = X509_VERIFY_PARAM_set1_policies(to,from->policies);
    if (iVar9 == 0) {
      return 0;
    }
    *(int *)&to[1].check_time = (int)from[1].check_time;
    OPENSSL_sk_pop_free(to[1].name,0x100000);
    to[1].name = (char *)0x0;
    if (from[1].name != (char *)0x0) {
      pcVar11 = (char *)OPENSSL_sk_deep_copy(from[1].name,str_copy,0x100000);
      to[1].name = pcVar11;
      if (pcVar11 == (char *)0x0) {
        return 0;
      }
    }
    uVar3._0_4_ = from[1].purpose;
    uVar3._4_4_ = from[1].trust;
    iVar9 = X509_VERIFY_PARAM_set1_email(to,from[1].flags,uVar3);
    if (iVar9 == 0) {
      return 0;
    }
  }
  lVar13 = *(long *)&from[1].depth;
LAB_00100aec:
  iVar9 = X509_VERIFY_PARAM_set1_ip(to,lVar13,from[1].policies);
  return (int)(iVar9 != 0);
}



int X509_VERIFY_PARAM_set1(X509_VERIFY_PARAM *to,X509_VERIFY_PARAM *from)

{
  uint uVar1;
  int iVar2;
  
  if (to != (X509_VERIFY_PARAM *)0x0) {
    uVar1 = (uint)to->inh_flags;
    *(uint *)&to->inh_flags = uVar1 | 1;
    iVar2 = X509_VERIFY_PARAM_inherit(to,from);
    *(uint *)&to->inh_flags = uVar1;
    return iVar2;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_vpm.c",0xe2,"X509_VERIFY_PARAM_set1");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



undefined8 X509_VERIFY_PARAM_set1_ip_asc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_a2i_ipadd(auStack_38);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = X509_VERIFY_PARAM_set1_ip(param_1,auStack_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_VERIFY_PARAM_get_depth(X509_VERIFY_PARAM *param)

{
  return param->depth;
}



undefined4 X509_VERIFY_PARAM_get_auth_level(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



undefined8 X509_VERIFY_PARAM_get0_name(undefined8 *param_1)

{
  return *param_1;
}



int X509_VERIFY_PARAM_add0_table(X509_VERIFY_PARAM *param)

{
  int iVar1;
  X509_VERIFY_PARAM *param_00;
  
  if (param_table == 0) {
    param_table = OPENSSL_sk_new(param_cmp);
    if (param_table == 0) {
      return 0;
    }
  }
  else {
    iVar1 = OPENSSL_sk_find(param_table,param);
    if (-1 < iVar1) {
      param_00 = (X509_VERIFY_PARAM *)OPENSSL_sk_delete(param_table,iVar1);
      X509_VERIFY_PARAM_free(param_00);
    }
  }
  iVar1 = OPENSSL_sk_push(param_table,param);
  return (int)(0 < iVar1);
}



int X509_VERIFY_PARAM_get_count(void)

{
  int iVar1;
  
  if (param_table != 0) {
    iVar1 = OPENSSL_sk_num();
    return iVar1 + 6;
  }
  return 6;
}



undefined1 * X509_VERIFY_PARAM_get0(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 < 6) {
    return default_table + (long)param_1 * 0x70;
  }
  puVar1 = (undefined1 *)OPENSSL_sk_value(param_table,param_1 + -6);
  return puVar1;
}



X509_VERIFY_PARAM * X509_VERIFY_PARAM_lookup(char *name)

{
  int iVar1;
  X509_VERIFY_PARAM *pXVar2;
  long in_FS_OFFSET;
  char *local_88 [15];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = name;
  if (param_table != 0) {
    OPENSSL_sk_sort();
    iVar1 = OPENSSL_sk_find(param_table,local_88);
    if (-1 < iVar1) {
      pXVar2 = (X509_VERIFY_PARAM *)OPENSSL_sk_value(param_table,iVar1);
      goto LAB_00100f67;
    }
  }
  pXVar2 = (X509_VERIFY_PARAM *)OBJ_bsearch_(local_88,default_table,6,0x70,table_cmp_BSEARCH_CMP_FN)
  ;
LAB_00100f67:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void X509_VERIFY_PARAM_table_cleanup(void)

{
  OPENSSL_sk_pop_free(param_table,X509_VERIFY_PARAM_free);
  param_table = 0;
  return;
}


