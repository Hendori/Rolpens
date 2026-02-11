
void dummy_new(void)

{
  return;
}



undefined8 dummy_dup(void)

{
  return 1;
}



int ex_callback_compare(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if (lVar3 == lVar4) {
    return 0;
  }
  if (lVar3 != 0) {
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x10);
      iVar5 = 0;
      iVar2 = *(int *)(lVar3 + 0x10);
      if (iVar2 != iVar1) {
        iVar5 = ((iVar2 <= iVar1) - 1) + (uint)(iVar2 <= iVar1);
      }
      return iVar5;
    }
    return -1;
  }
  return 1;
}



void cleanup_cb(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void dummy_free(void)

{
  return;
}



bool ossl_do_ex_data_init(void)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  plVar1 = (long *)ossl_lib_ctx_get_ex_data_global();
  bVar3 = false;
  if (plVar1 != (long *)0x0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    bVar3 = lVar2 != 0;
    *plVar1 = lVar2;
  }
  return bVar3;
}



void ossl_crypto_cleanup_all_ex_data_int(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_ex_data_global();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1 + 1;
    do {
      puVar3 = puVar2 + 1;
      OPENSSL_sk_pop_free(*puVar2,cleanup_cb);
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != puVar1 + 0x13);
    CRYPTO_THREAD_lock_free(*puVar1);
    *puVar1 = 0;
  }
  return;
}



undefined4 ossl_crypto_free_ex_index_ex(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  plVar2 = (long *)ossl_lib_ctx_get_ex_data_global();
  if (plVar2 != (long *)0x0) {
    if (param_2 < 0x12) {
      if ((*plVar2 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(), iVar1 != 0)) {
        if ((param_3 < 0) ||
           ((iVar1 = OPENSSL_sk_num(plVar2[(long)(int)param_2 + 1]), iVar1 <= param_3 ||
            (lVar3 = OPENSSL_sk_value(plVar2[(long)(int)param_2 + 1],param_3), lVar3 == 0)))) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
          *(code **)(lVar3 + 0x28) = dummy_dup;
          *(undefined8 *)(lVar3 + 0x18) = 0x100000;
          *(code **)(lVar3 + 0x20) = dummy_free;
        }
        CRYPTO_THREAD_unlock(*plVar2);
        return uVar4;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/ex_data.c",0x25,"get_and_lock");
      ERR_set_error(0xf,0x80106,0);
    }
  }
  return 0;
}



void CRYPTO_free_ex_index(undefined4 param_1,undefined4 param_2)

{
  ossl_crypto_free_ex_index_ex(0,param_1,param_2);
  return;
}



int ossl_crypto_get_ex_new_index_ex
              (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 *ptr;
  long lVar3;
  
  plVar2 = (long *)ossl_lib_ctx_get_ex_data_global();
  if (plVar2 == (long *)0x0) {
    return -1;
  }
  if (0x11 < param_2) {
    ERR_new();
    ERR_set_debug("crypto/ex_data.c",0x25,"get_and_lock");
    ERR_set_error(0xf,0x80106,0);
    return -1;
  }
  if (*plVar2 == 0) {
    return -1;
  }
  iVar1 = CRYPTO_THREAD_write_lock();
  if (iVar1 == 0) {
    return -1;
  }
  if (plVar2[(long)(int)param_2 + 1] == 0) {
    lVar3 = OPENSSL_sk_new_null();
    plVar2[(long)(int)param_2 + 1] = lVar3;
    if (lVar3 != 0) {
      iVar1 = OPENSSL_sk_push(lVar3,0);
      if (iVar1 != 0) goto LAB_001002b7;
      lVar3 = plVar2[(long)(int)param_2 + 1];
    }
    OPENSSL_sk_free(lVar3);
    plVar2[(long)(int)param_2 + 1] = 0;
    ERR_new();
    ERR_set_debug("crypto/ex_data.c",0xb0,"ossl_crypto_get_ex_new_index_ex");
    ERR_set_error(0xf,0x8000f,0);
  }
  else {
LAB_001002b7:
    ptr = (undefined8 *)CRYPTO_malloc(0x30,"crypto/ex_data.c",0xb5);
    if (ptr != (undefined8 *)0x0) {
      *ptr = param_3;
      lVar3 = plVar2[(long)(int)param_2 + 1];
      ptr[1] = param_4;
      ptr[5] = param_6;
      ptr[3] = param_5;
      ptr[4] = param_7;
      *(undefined4 *)(ptr + 2) = param_8;
      iVar1 = OPENSSL_sk_push(lVar3,0);
      if (iVar1 != 0) {
        iVar1 = OPENSSL_sk_num(plVar2[(long)(int)param_2 + 1]);
        iVar1 = iVar1 + -1;
        OPENSSL_sk_set(plVar2[(long)(int)param_2 + 1],iVar1,ptr);
        goto LAB_0010032e;
      }
      ERR_new();
      ERR_set_debug("crypto/ex_data.c",0xc0,"ossl_crypto_get_ex_new_index_ex");
      ERR_set_error(0xf,0x8000f,0);
      CRYPTO_free(ptr);
    }
  }
  iVar1 = -1;
LAB_0010032e:
  CRYPTO_THREAD_unlock(*plVar2);
  return iVar1;
}



int CRYPTO_get_ex_new_index
              (int class_index,long argl,void *argp,undefined1 *new_func,undefined1 *dup_func,
              undefined1 *free_func)

{
  int iVar1;
  
  iVar1 = ossl_crypto_get_ex_new_index_ex(0,class_index,argl,argp,new_func,dup_func,free_func,0);
  return iVar1;
}



undefined8
ossl_crypto_alloc_ex_data_intern
          (uint param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)ossl_lib_ctx_get_ex_data_global(*param_3);
  if (plVar2 != (long *)0x0) {
    if (param_1 < 0x12) {
      if ((*plVar2 != 0) && (iVar1 = CRYPTO_THREAD_read_lock(), iVar1 != 0)) {
        puVar3 = (undefined8 *)OPENSSL_sk_value(plVar2[(long)(int)param_1 + 1],param_4);
        CRYPTO_THREAD_unlock(*plVar2);
        if ((code *)puVar3[3] != (code *)0x0) {
          (*(code *)puVar3[3])(param_2,0,param_3,param_4,*puVar3,puVar3[1]);
          return 1;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/ex_data.c",0x25,"get_and_lock");
      ERR_set_error(0xf,0x80106,0);
    }
  }
  return 0;
}



int CRYPTO_set_ex_data(CRYPTO_EX_DATA *ad,int idx,void *val)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)&ad->dummy == 0) {
    lVar4 = OPENSSL_sk_new_null();
    *(long *)&ad->dummy = lVar4;
    if (lVar4 == 0) {
      ERR_new(0);
      uVar5 = 0x1db;
      goto LAB_001005b0;
    }
  }
  iVar1 = OPENSSL_sk_num();
  while( true ) {
    if (idx < iVar1) {
      pvVar3 = (void *)OPENSSL_sk_set(*(undefined8 *)&ad->dummy,idx,val);
      if (val != pvVar3) {
        ERR_new();
        ERR_set_debug("crypto/ex_data.c",0x1e8,"CRYPTO_set_ex_data");
        ERR_set_error(0xf,0x80106,0);
        return 0;
      }
      return 1;
    }
    iVar2 = OPENSSL_sk_push(*(undefined8 *)&ad->dummy,0);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
  }
  ERR_new();
  uVar5 = 0x1e2;
LAB_001005b0:
  ERR_set_debug("crypto/ex_data.c",uVar5,"CRYPTO_set_ex_data");
  ERR_set_error(0xf,0x8000f,0);
  return 0;
}



void * CRYPTO_get_ex_data(CRYPTO_EX_DATA *ad,int idx)

{
  int iVar1;
  void *pvVar2;
  
  if (*(long *)&ad->dummy != 0) {
    iVar1 = OPENSSL_sk_num();
    if (idx < iVar1) {
      pvVar2 = (void *)OPENSSL_sk_value(*(undefined8 *)&ad->dummy,idx);
      return pvVar2;
    }
  }
  return (void *)0x0;
}



undefined8
ossl_crypto_new_ex_data_ex
          (stack_st_void *param_1,uint param_2,undefined8 param_3,CRYPTO_EX_DATA *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined1 *ptr;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 *local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)ossl_lib_ctx_get_ex_data_global();
  if (plVar4 == (long *)0x0) {
LAB_0010082c:
    uVar5 = 0;
    goto LAB_001007d5;
  }
  if (0x11 < param_2) {
    ERR_new();
    ERR_set_debug("crypto/ex_data.c",0x25,"get_and_lock");
    ERR_set_error(0xf,0x80106,0);
    uVar5 = 0;
    goto LAB_001007d5;
  }
  if ((*plVar4 == 0) || (iVar3 = CRYPTO_THREAD_read_lock(), iVar3 == 0)) goto LAB_0010082c;
  param_4->sk = param_1;
  lVar1 = plVar4[(long)(int)param_2 + 1];
  *(undefined8 *)&param_4->dummy = 0;
  iVar3 = OPENSSL_sk_num(lVar1);
  if (iVar3 < 1) {
    ptr = (undefined1 *)0x0;
    CRYPTO_THREAD_unlock(*plVar4);
LAB_0010083b:
    CRYPTO_free(ptr);
  }
  else {
    if (iVar3 < 10) {
      ptr = local_98;
    }
    else {
      ptr = (undefined1 *)CRYPTO_malloc(iVar3 * 8,"crypto/ex_data.c",0xf3);
      if (ptr == (undefined1 *)0x0) {
        CRYPTO_THREAD_unlock(*plVar4);
        goto LAB_0010082c;
      }
    }
    local_a0 = local_98;
    uVar7 = 0;
    do {
      uVar5 = OPENSSL_sk_value(plVar4[(long)(int)param_2 + 1],uVar7 & 0xffffffff);
      *(undefined8 *)(ptr + uVar7 * 8) = uVar5;
      uVar7 = uVar7 + 1;
    } while (uVar7 != (long)iVar3);
    uVar7 = 0;
    CRYPTO_THREAD_unlock(*plVar4);
    do {
      if ((*(long *)(ptr + uVar7 * 8) != 0) && (*(long *)(*(long *)(ptr + uVar7 * 8) + 0x18) != 0))
      {
        pvVar6 = CRYPTO_get_ex_data(param_4,(int)uVar7);
        puVar2 = *(undefined8 **)(ptr + uVar7 * 8);
        (*(code *)puVar2[3])(param_3,pvVar6,param_4,uVar7 & 0xffffffff,*puVar2,puVar2[1]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != (long)iVar3);
    if (ptr != local_a0) goto LAB_0010083b;
  }
  uVar5 = 1;
LAB_001007d5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int CRYPTO_new_ex_data(int class_index,void *obj,CRYPTO_EX_DATA *ad)

{
  int iVar1;
  
  iVar1 = ossl_crypto_new_ex_data_ex(0,class_index,obj,ad);
  return iVar1;
}



int CRYPTO_dup_ex_data(int class_index,CRYPTO_EX_DATA *to,CRYPTO_EX_DATA *from)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  void *val;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 *local_c8;
  ulong local_c0;
  undefined1 *local_b0;
  void *local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)&from->dummy;
  uVar3 = 1;
  to->sk = from->sk;
  if (lVar2 == 0) goto LAB_00100aa0;
  plVar6 = (long *)ossl_lib_ctx_get_ex_data_global();
  if (plVar6 != (long *)0x0) {
    if (0x11 < (uint)class_index) {
      ERR_new();
      ERR_set_debug("crypto/ex_data.c",0x25,"get_and_lock");
      ERR_set_error(0xf,0x80106,0);
      uVar3 = 0;
      goto LAB_00100aa0;
    }
    if ((*plVar6 != 0) && (iVar4 = CRYPTO_THREAD_read_lock(), iVar4 != 0)) {
      iVar5 = OPENSSL_sk_num(plVar6[(long)class_index + 1]);
      iVar4 = OPENSSL_sk_num(*(undefined8 *)&from->dummy);
      if (iVar5 <= iVar4) {
        iVar4 = iVar5;
      }
      if (iVar4 < 1) {
        CRYPTO_THREAD_unlock(*plVar6);
        uVar3 = (uint)(iVar4 == 0);
        goto LAB_00100aa0;
      }
      if (iVar4 < 10) {
        local_c8 = local_98;
      }
      else {
        local_c8 = (undefined1 *)CRYPTO_malloc(iVar4 * 8,"crypto/ex_data.c",0x131);
        if (local_c8 == (undefined1 *)0x0) {
          CRYPTO_THREAD_unlock(*plVar6);
          goto LAB_00100b25;
        }
      }
      local_b0 = local_98;
      local_c0 = (ulong)iVar4;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        uVar7 = OPENSSL_sk_value(plVar6[(long)class_index + 1],uVar8 & 0xffffffff);
        *(undefined8 *)(local_c8 + uVar8 * 8) = uVar7;
        uVar9 = uVar8 + 1;
      } while (local_c0 != uVar8 + 1);
      CRYPTO_THREAD_unlock(*plVar6);
      val = CRYPTO_get_ex_data(to,iVar4 + -1);
      iVar4 = CRYPTO_set_ex_data(to,iVar4 + -1,val);
      uVar9 = 0;
      if (iVar4 == 0) {
LAB_00100ae8:
        uVar3 = 0;
      }
      else {
        do {
          local_a0 = CRYPTO_get_ex_data(from,(int)uVar9);
          puVar1 = *(undefined8 **)(local_c8 + uVar9 * 8);
          if (((puVar1 != (undefined8 *)0x0) && ((code *)puVar1[5] != (code *)0x0)) &&
             (iVar4 = (*(code *)puVar1[5])(to,from,&local_a0,uVar9 & 0xffffffff,*puVar1,puVar1[1]),
             iVar4 == 0)) goto LAB_00100ae8;
          CRYPTO_set_ex_data(to,(int)uVar9,local_a0);
          bVar10 = uVar9 != uVar8;
          uVar9 = uVar9 + 1;
        } while (bVar10);
        uVar3 = 1;
      }
      if (local_c8 != local_b0) {
        CRYPTO_free(local_c8);
      }
      goto LAB_00100aa0;
    }
  }
LAB_00100b25:
  uVar3 = 0;
LAB_00100aa0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void CRYPTO_free_ex_data(int class_index,void *obj,CRYPTO_EX_DATA *ad)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  size_t __nmemb;
  int iVar6;
  long *plVar7;
  long in_FS_OFFSET;
  long *local_108;
  long local_e8 [21];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)ossl_lib_ctx_get_ex_data_global(ad->sk);
  if (plVar3 == (long *)0x0) goto LAB_00100ced;
  if (0x11 < (uint)class_index) {
    ERR_new();
    ERR_set_debug("crypto/ex_data.c",0x25,"get_and_lock");
    ERR_set_error(0xf,0x80106,0);
    goto LAB_00100ced;
  }
  if ((*plVar3 == 0) || (iVar2 = CRYPTO_THREAD_read_lock(), iVar2 == 0)) goto LAB_00100ced;
  iVar2 = OPENSSL_sk_num(plVar3[(long)class_index + 1]);
  if (iVar2 < 1) {
    CRYPTO_THREAD_unlock(*plVar3);
LAB_00100d6a:
    local_108 = (long *)0x0;
  }
  else {
    __nmemb = (size_t)iVar2;
    local_108 = local_e8;
    if ((9 < iVar2) &&
       (local_108 = (long *)CRYPTO_malloc((int)(__nmemb << 4),"crypto/ex_data.c",0x185),
       local_108 == (long *)0x0)) {
      CRYPTO_THREAD_unlock(*plVar3);
      goto LAB_00100d6a;
    }
    iVar6 = 0;
    plVar7 = local_108;
    do {
      lVar4 = OPENSSL_sk_value(plVar3[(long)class_index + 1],iVar6);
      *(int *)(plVar7 + 1) = iVar6;
      iVar6 = iVar6 + 1;
      *plVar7 = lVar4;
      plVar7 = plVar7 + 2;
    } while (iVar6 != iVar2);
    CRYPTO_THREAD_unlock(*plVar3);
    qsort(local_108,__nmemb,0x10,ex_callback_compare);
    plVar3 = local_108;
    do {
      puVar1 = (undefined8 *)*plVar3;
      if ((puVar1 != (undefined8 *)0x0) && (puVar1[4] != 0)) {
        pvVar5 = CRYPTO_get_ex_data(ad,(int)plVar3[1]);
        (*(code *)puVar1[4])(obj,pvVar5,ad,(int)plVar3[1],*puVar1,puVar1[1]);
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != local_108 + __nmemb * 2);
    if (local_108 == local_e8) goto LAB_00100ced;
  }
  CRYPTO_free(local_108);
LAB_00100ced:
  OPENSSL_sk_free(*(undefined8 *)&ad->dummy);
  ad->sk = (stack_st_void *)0x0;
  ad->dummy = 0;
  *(undefined4 *)&ad->field_0xc = 0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8
CRYPTO_alloc_ex_data(undefined4 param_1,undefined8 param_2,CRYPTO_EX_DATA *param_3,int param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = CRYPTO_get_ex_data(param_3,param_4);
  if (pvVar1 != (void *)0x0) {
    return 1;
  }
  uVar2 = ossl_crypto_alloc_ex_data_intern(param_1,param_2,param_3,param_4);
  return uVar2;
}



undefined8 ossl_crypto_ex_data_get_ossl_lib_ctx(undefined8 *param_1)

{
  return *param_1;
}


