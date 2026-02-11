
undefined8 get_string_ptr_internal(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  if ((param_2 == (undefined8 *)0x0) || (param_1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x681,"get_string_ptr_internal");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    if (*(int *)(param_1 + 8) == param_4) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_1 + 0x18);
      }
      *param_2 = *(undefined8 *)(param_1 + 0x10);
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/params.c",0x685,"get_string_ptr_internal");
    ERR_set_error(0xf,0x81,0);
  }
  return 0;
}



undefined8
copy_integer(void *param_1,ulong param_2,void *param_3,ulong param_4,byte param_5,int param_6)

{
  byte *pbVar1;
  
  if (param_4 < param_2) {
    memset((void *)((long)param_1 + param_4),(uint)param_5,param_2 - param_4);
    memcpy(param_1,param_3,param_4);
  }
  else {
    if (param_2 != param_4) {
      pbVar1 = (byte *)((long)param_3 + param_2);
      do {
        if (param_5 != *pbVar1) goto LAB_001000ed;
        pbVar1 = pbVar1 + 1;
      } while (pbVar1 != (byte *)((long)param_3 + param_4));
    }
    if ((param_6 != 0) && ((char)(param_5 ^ *(byte *)((long)param_3 + (param_2 - 1))) < '\0')) {
LAB_001000ed:
      ERR_new();
      ERR_set_debug("crypto/params.c",0x9b,"copy_integer");
      ERR_set_error(0xf,0x7e,0);
      return 0;
    }
    memcpy(param_1,param_3,param_2);
  }
  return 1;
}



undefined8 general_get_int(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0xc9,"general_get_int");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    if (*(int *)(param_1 + 8) == 1) {
      uVar2 = copy_integer(param_2,param_3,lVar1,*(long *)(param_1 + 0x18),
                           (int)*(char *)(lVar1 + -1 + *(long *)(param_1 + 0x18)) >> 0x1f & 0xff,1);
      return uVar2;
    }
    if (*(int *)(param_1 + 8) == 2) {
      uVar2 = copy_integer(param_2,param_3,lVar1,*(undefined8 *)(param_1 + 0x18),0,1);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/params.c",0xd0,"general_get_int");
    ERR_set_error(0xf,0x7c,0);
  }
  return 0;
}



undefined8 general_set_uint(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x20) = param_3;
    return 1;
  }
  uVar1 = 1;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) != 2) {
      ERR_new();
      ERR_set_debug("crypto/params.c",0x105,"general_set_uint");
      ERR_set_error(0xf,0x7c,0);
      uVar1 = 0;
      goto LAB_001002ba;
    }
    uVar1 = 0;
  }
  uVar1 = copy_integer(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_2,param_3,0,
                       uVar1);
  if ((int)uVar1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    return uVar1;
  }
LAB_001002ba:
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return uVar1;
}



undefined8 get_string_internal(long param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5)

{
  ulong __n;
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((param_4 == (ulong *)0x0 && param_2 == (long *)0x0) || (param_1 == 0)) {
    ERR_new();
    uVar2 = 0x538;
  }
  else {
    if (*(int *)(param_1 + 8) != param_5) {
      ERR_new();
      ERR_set_debug("crypto/params.c",0x53c,"get_string_internal");
      ERR_set_error(0xf,0x81,0);
      return 0;
    }
    __n = *(ulong *)(param_1 + 0x18);
    if (param_4 != (ulong *)0x0) {
      *param_4 = __n;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      if (param_2 != (long *)0x0) {
        if (*param_2 == 0) {
          uVar3 = (param_5 == 4 || __n == 0) + __n;
          pvVar1 = CRYPTO_malloc((int)uVar3,"crypto/params.c",0x553);
          if (pvVar1 == (void *)0x0) {
            return 0;
          }
          *param_2 = (long)pvVar1;
          *param_3 = uVar3;
        }
        else {
          uVar3 = *param_3;
        }
        if (uVar3 < __n) {
          ERR_new();
          ERR_set_debug("crypto/params.c",0x55c,"get_string_internal");
          ERR_set_error(0xf,0x74,0);
          return 0;
        }
        memcpy((void *)*param_2,*(void **)(param_1 + 0x10),__n);
      }
      return 1;
    }
    ERR_new();
    uVar2 = 0x54b;
  }
  ERR_set_debug("crypto/params.c",uVar2,"get_string_internal");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 unsigned_from_signed(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (-1 < *(char *)(param_3 + -1 + param_4)) {
    uVar1 = copy_integer();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/params.c",0xb8,"unsigned_from_signed");
  ERR_set_error(0xf,0x7d,0);
  return 0;
}



undefined8 general_get_uint(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0xec,"general_get_uint");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    if (*(int *)(param_1 + 8) == 1) {
      uVar2 = unsigned_from_signed(param_2,param_3,lVar1,*(undefined8 *)(param_1 + 0x18));
      return uVar2;
    }
    if (*(int *)(param_1 + 8) == 2) {
      uVar2 = copy_integer(param_2,param_3,lVar1,*(undefined8 *)(param_1 + 0x18),0,0);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/params.c",0xf3,"general_get_uint");
    ERR_set_error(0xf,0x7c,0);
  }
  return 0;
}



undefined8 set_string_internal_constprop_0(long param_1,void *param_2,ulong param_3,int param_4)

{
  if (*(int *)(param_1 + 8) != param_4) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x58d,"set_string_internal");
    ERR_set_error(0xf,0x81,0);
    return 0;
  }
  *(ulong *)(param_1 + 0x20) = param_3;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    if (*(ulong *)(param_1 + 0x18) < param_3) {
      ERR_new();
      ERR_set_debug("crypto/params.c",0x594,"set_string_internal");
      ERR_set_error(0xf,0x74,0);
      return 0;
    }
    memcpy(*(void **)(param_1 + 0x10),param_2,param_3);
    if ((param_4 == 4) && (param_3 < *(ulong *)(param_1 + 0x18))) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + param_3) = 0;
    }
  }
  return 1;
}



undefined8 general_set_int(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    *(long *)(param_1 + 0x20) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 8) == 1) {
    uVar2 = copy_integer(lVar1,*(undefined8 *)(param_1 + 0x18),param_2,param_3,
                         (int)*(char *)(param_2 + -1 + param_3) >> 0x1f & 0xff,1);
  }
  else {
    if (*(int *)(param_1 + 8) != 2) {
      ERR_new();
      ERR_set_debug("crypto/params.c",0xe2,"general_set_int");
      ERR_set_error(0xf,0x7c,0);
      uVar2 = 0;
      goto LAB_001006e8;
    }
    uVar2 = unsigned_from_signed(lVar1,*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  }
  if ((int)uVar2 != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    return uVar2;
  }
LAB_001006e8:
  *(long *)(param_1 + 0x20) = param_3;
  return uVar2;
}



long * OSSL_PARAM_locate(long *param_1,char *param_2)

{
  int iVar1;
  long *__s2;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (param_2 != (char *)0x0) {
    __s2 = (long *)*param_1;
    if (__s2 == (long *)0x0) {
      __s2 = (long *)0x0;
    }
    else {
      do {
        iVar1 = strcmp(param_2,(char *)__s2);
        if (iVar1 == 0) {
          return param_1;
        }
        __s2 = (long *)param_1[5];
        param_1 = param_1 + 5;
      } while (__s2 != (long *)0x0);
    }
    return __s2;
  }
  return (long *)0x0;
}



void OSSL_PARAM_locate_const(void)

{
  OSSL_PARAM_locate();
  return;
}



bool setbuf_fromparams(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    iVar1 = WPACKET_init_null(auStack_68,0);
  }
  else {
    iVar1 = WPACKET_init_static_len(auStack_68,param_3,*param_4,0);
  }
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    if (param_1 != 0) {
      do {
        if ((*(int *)(param_1 + 8) != 5) ||
           (((*(long *)(param_1 + 0x10) != 0 && (*(long *)(param_1 + 0x18) != 0)) &&
            (iVar1 = WPACKET_memcpy(auStack_68), iVar1 == 0)))) goto LAB_00100870;
        param_1 = OSSL_PARAM_locate_const(param_1 + 0x28,param_2);
      } while (param_1 != 0);
    }
    iVar1 = WPACKET_get_total_written(auStack_68,param_4);
    if (iVar1 == 0) {
LAB_00100870:
      bVar2 = false;
    }
    else {
      iVar1 = WPACKET_finish(auStack_68);
      bVar2 = iVar1 != 0;
    }
    WPACKET_cleanup(auStack_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool OSSL_PARAM_modified(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(long *)(param_1 + 0x20) != -1;
  }
  return bVar1;
}



void OSSL_PARAM_set_all_unmodified(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  for (; *param_1 != 0; param_1 = param_1 + 5) {
    param_1[4] = -1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_int(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001034f8;
  uVar1 = __LC1;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_uint(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001034f8;
  uVar1 = __LC1;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_long(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00103508;
  uVar1 = __LC2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_ulong(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00103508;
  uVar1 = __LC2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OSSL_PARAM_get_int32(long param_1,undefined4 *param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  undefined8 uVar5;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    ERR_new();
    uVar5 = 0x18b;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 1) {
        if (*(long *)(param_1 + 0x18) == 4) {
          *param_2 = *(undefined4 *)pdVar3;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 8) {
LAB_00100bc8:
          uVar5 = general_get_int(param_1,param_2,4);
          return uVar5;
        }
        if ((long)*pdVar3 + 0x80000000U >> 0x20 == 0) {
          *param_2 = SUB84(*pdVar3,0);
          return 1;
        }
        ERR_new();
        uVar5 = 0x1a2;
      }
      else if (iVar2 == 2) {
        if (*(long *)(param_1 + 0x18) == 4) {
          dVar4 = (double)(ulong)*(uint *)pdVar3;
          if (-1 < (int)*(uint *)pdVar3) goto LAB_00100a8c;
          ERR_new();
          uVar5 = 0x1b4;
        }
        else {
          if (*(long *)(param_1 + 0x18) != 8) goto LAB_00100bc8;
          dVar4 = *pdVar3;
          if ((ulong)dVar4 < 0x80000000) goto LAB_00100a8c;
          ERR_new();
          uVar5 = 0x1bc;
        }
      }
      else {
        if (iVar2 != 3) {
          ERR_new();
          ERR_set_debug("crypto/params.c",0x1d4,"OSSL_PARAM_get_int32");
          ERR_set_error(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) != 8) {
          ERR_new();
          ERR_set_debug("crypto/params.c",0x1d0,"OSSL_PARAM_get_int32");
          ERR_set_error(0xf,0x82,0);
          return 0;
        }
        dVar1 = *pdVar3;
        if (((__LC3 <= dVar1) && (dVar1 <= _LC4)) &&
           (dVar4 = (double)(ulong)(uint)(int)dVar1, (double)(int)dVar1 == dVar1)) {
LAB_00100a8c:
          *param_2 = SUB84(dVar4,0);
          return 1;
        }
        ERR_new();
        uVar5 = 0x1cd;
      }
      ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_get_int32");
      ERR_set_error(0xf,0x7e,0);
      return 0;
    }
    ERR_new();
    uVar5 = 400;
  }
  ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_get_int32");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



void OSSL_PARAM_get_int(void)

{
  OSSL_PARAM_get_int32();
  return;
}



undefined8 OSSL_PARAM_set_int32(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int local_c [3];
  
  local_c[0] = param_2;
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x1db,"OSSL_PARAM_set_int32");
    ERR_set_error(0xf,0xc0102,0);
LAB_00100d60:
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (iVar1 == 1) {
      plVar2 = *(long **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 4;
      if (plVar2 != (long *)0x0) {
        if (*(long *)(param_1 + 0x18) == 4) {
          *(int *)plVar2 = param_2;
        }
        else {
          if (*(long *)(param_1 + 0x18) != 8) {
LAB_00100d1a:
            uVar3 = general_set_int(param_1,local_c,4);
            return uVar3;
          }
          *(undefined8 *)(param_1 + 0x20) = 8;
          *plVar2 = (long)param_2;
        }
      }
    }
    else if (iVar1 == 2) {
      if (param_2 < 0) goto LAB_00100d30;
      plVar2 = *(long **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 4;
      if (plVar2 != (long *)0x0) {
        if (*(long *)(param_1 + 0x18) == 4) {
          *(int *)plVar2 = param_2;
        }
        else {
          if (*(long *)(param_1 + 0x18) != 8) goto LAB_00100d1a;
          *(undefined8 *)(param_1 + 0x20) = 8;
          *plVar2 = (long)param_2;
        }
      }
    }
    else {
      if (iVar1 != 3) {
LAB_00100d30:
        ERR_new();
        ERR_set_debug("crypto/params.c",0x218,"OSSL_PARAM_set_int32");
        ERR_set_error(0xf,0x81,0);
        goto LAB_00100d60;
      }
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (*(double **)(param_1 + 0x10) != (double *)0x0) {
        if (*(long *)(param_1 + 0x18) != 8) {
          ERR_new();
          ERR_set_debug("crypto/params.c",0x214,"OSSL_PARAM_set_int32");
          ERR_set_error(0xf,0x82,0);
          goto LAB_00100d60;
        }
        **(double **)(param_1 + 0x10) = (double)param_2;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



void OSSL_PARAM_set_int(void)

{
  OSSL_PARAM_set_int32();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_int32(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001034f8;
  uVar1 = __LC1;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



undefined8 OSSL_PARAM_get_uint32(long param_1,undefined4 *param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  undefined8 uVar5;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    ERR_new();
    uVar5 = 0x225;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 2) {
        if (*(long *)(param_1 + 0x18) == 4) {
          *param_2 = *(undefined4 *)pdVar3;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 8) {
LAB_00101098:
          uVar5 = general_get_uint(param_1,param_2,4);
          return uVar5;
        }
        dVar4 = *pdVar3;
        if ((ulong)dVar4 >> 0x20 != 0) {
          ERR_new();
          uVar5 = 0x23c;
LAB_0010106e:
          ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_get_uint32");
          ERR_set_error(0xf,0x7e,0);
          return 0;
        }
      }
      else if (iVar2 == 1) {
        if (*(long *)(param_1 + 0x18) == 4) {
          dVar4 = (double)(ulong)*(uint *)pdVar3;
          if ((int)*(uint *)pdVar3 < 0) {
            ERR_new();
            uVar5 = 0x24d;
LAB_001010eb:
            ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_get_uint32");
            ERR_set_error(0xf,0x7d,0);
            return 0;
          }
        }
        else {
          if (*(long *)(param_1 + 0x18) != 8) goto LAB_00101098;
          dVar4 = *pdVar3;
          if ((ulong)dVar4 >> 0x20 != 0) {
            if (-1 < (long)dVar4) {
              ERR_new();
              uVar5 = 600;
              goto LAB_0010106e;
            }
            ERR_new();
            uVar5 = 0x256;
            goto LAB_001010eb;
          }
        }
      }
      else {
        if (iVar2 != 3) {
          ERR_new();
          ERR_set_debug("crypto/params.c",0x26f,"OSSL_PARAM_get_uint32");
          ERR_set_error(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) != 8) {
          ERR_new();
          ERR_set_debug("crypto/params.c",0x26b,"OSSL_PARAM_get_uint32");
          ERR_set_error(0xf,0x82,0);
          return 0;
        }
        dVar1 = *pdVar3;
        if (((dVar1 < 0.0) || (_LC6 < dVar1)) ||
           (dVar4 = (double)(long)dVar1, (double)((ulong)dVar4 & 0xffffffff) != dVar1)) {
          ERR_new();
          ERR_set_debug("crypto/params.c",0x268,"OSSL_PARAM_get_uint32");
          ERR_set_error(0xf,0x7b,0);
          return 0;
        }
      }
      *param_2 = SUB84(dVar4,0);
      return 1;
    }
    ERR_new();
    uVar5 = 0x22a;
  }
  ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_get_uint32");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



void OSSL_PARAM_get_uint(void)

{
  OSSL_PARAM_get_uint32();
  return;
}



undefined8 OSSL_PARAM_set_uint32(long param_1,uint param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_c [3];
  
  local_c[0] = param_2;
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x276,"OSSL_PARAM_set_uint32");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 2) {
    puVar2 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar2 == (ulong *)0x0) {
      return 1;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 4) {
      *(uint *)puVar2 = param_2;
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 3) {
        ERR_new();
        ERR_set_debug("crypto/params.c",0x2b6,"OSSL_PARAM_set_uint32");
        ERR_set_error(0xf,0x81,0);
        return 0;
      }
      if (*(double **)(param_1 + 0x10) != (double *)0x0) {
        if (*(long *)(param_1 + 0x18) != 8) {
          ERR_new();
          ERR_set_debug("crypto/params.c",0x2b2,"OSSL_PARAM_set_uint32");
          ERR_set_error(0xf,0x82,0);
          return 0;
        }
        **(double **)(param_1 + 0x10) = (double)param_2;
      }
      *(undefined8 *)(param_1 + 0x20) = 8;
      return 1;
    }
    puVar2 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar2 == (ulong *)0x0) {
      return 1;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 4) {
      if (-1 < (int)param_2) {
        *(uint *)puVar2 = param_2;
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/params.c",0x296,"OSSL_PARAM_set_uint32");
      ERR_set_error(0xf,0x7e,0);
      return 0;
    }
  }
  if (lVar4 == 8) {
    *(undefined8 *)(param_1 + 0x20) = 8;
    *puVar2 = (ulong)param_2;
    return 1;
  }
  uVar3 = general_set_uint(param_1,local_c,4);
  return uVar3;
}



void OSSL_PARAM_set_uint(void)

{
  OSSL_PARAM_set_uint32();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_uint32(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001034f8;
  uVar1 = __LC1;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OSSL_PARAM_get_int64(long param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  undefined8 uVar5;
  
  if ((param_2 == (double *)0x0) || (param_1 == 0)) {
    ERR_new();
    uVar5 = 0x2c3;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 1) {
        if (*(long *)(param_1 + 0x18) == 4) {
          *param_2 = (double)(long)*(int *)pdVar3;
        }
        else {
          if (*(long *)(param_1 + 0x18) != 8) goto LAB_00101588;
          *param_2 = *pdVar3;
        }
      }
      else {
        if (iVar2 == 2) {
          if (*(long *)(param_1 + 0x18) == 4) {
            *param_2 = (double)(ulong)*(uint *)pdVar3;
            return 1;
          }
          if (*(long *)(param_1 + 0x18) != 8) {
LAB_00101588:
            uVar5 = general_get_int(param_1,param_2,8);
            return uVar5;
          }
          dVar4 = *pdVar3;
          if ((long)dVar4 < 0) {
            ERR_new();
            ERR_set_debug("crypto/params.c",0x2e6,"OSSL_PARAM_get_int64");
            ERR_set_error(0xf,0x7e,0);
            return 0;
          }
        }
        else {
          if (iVar2 != 3) {
            ERR_new();
            ERR_set_debug("crypto/params.c",0x304,"OSSL_PARAM_get_int64");
            ERR_set_error(0xf,0x81,0);
            return 0;
          }
          if (*(long *)(param_1 + 0x18) != 8) {
            ERR_new();
            ERR_set_debug("crypto/params.c",0x300,"OSSL_PARAM_get_int64");
            ERR_set_error(0xf,0x82,0);
            return 0;
          }
          dVar1 = *pdVar3;
          if (((dVar1 < __LC7) || (_LC8 <= dVar1)) ||
             (dVar4 = (double)(long)dVar1, (double)(long)dVar4 != dVar1)) {
            ERR_new();
            ERR_set_debug("crypto/params.c",0x2fd,"OSSL_PARAM_get_int64");
            ERR_set_error(0xf,0x7b,0);
            return 0;
          }
        }
        *param_2 = dVar4;
      }
      return 1;
    }
    ERR_new();
    uVar5 = 0x2c8;
  }
  ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_get_int64");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



void OSSL_PARAM_get_long(void)

{
  OSSL_PARAM_get_int64();
  return;
}



undefined8 OSSL_PARAM_set_int64(long param_1,ulong param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_10 [2];
  
  local_10[0] = param_2;
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x30b,"OSSL_PARAM_set_int64");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 1) {
    puVar2 = *(ulong **)(param_1 + 0x10);
    if (puVar2 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 4) {
        if (param_2 + 0x80000000 >> 0x20 == 0) {
          *(undefined8 *)(param_1 + 0x20) = 4;
          *(int *)puVar2 = (int)param_2;
          return 1;
        }
        ERR_new();
        uVar4 = 0x31c;
LAB_001018a1:
        ERR_set_debug("crypto/params.c",uVar4,"OSSL_PARAM_set_int64");
        ERR_set_error(0xf,0x7e,0);
        return 0;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        *puVar2 = param_2;
        return 1;
      }
LAB_001016df:
      uVar4 = general_set_int(param_1,local_10,8);
      return uVar4;
    }
  }
  else if (iVar1 == 2) {
    if ((long)param_2 < 0) goto LAB_001016f8;
    puVar2 = *(ulong **)(param_1 + 0x10);
    if (puVar2 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 4) {
        if ((long)param_2 < 0x100000000) {
          *(undefined8 *)(param_1 + 0x20) = 4;
          *(int *)puVar2 = (int)param_2;
          return 1;
        }
        ERR_new();
        uVar4 = 0x332;
        goto LAB_001018a1;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        *puVar2 = param_2;
        return 1;
      }
      goto LAB_001016df;
    }
  }
  else {
    if (iVar1 != 3) {
LAB_001016f8:
      ERR_new();
      ERR_set_debug("crypto/params.c",0x352,"OSSL_PARAM_set_int64");
      ERR_set_error(0xf,0x81,0);
      return 0;
    }
    if (*(double **)(param_1 + 0x10) != (double *)0x0) {
      if (*(long *)(param_1 + 0x18) != 8) {
        ERR_new();
        ERR_set_debug("crypto/params.c",0x34e,"OSSL_PARAM_set_int64");
        ERR_set_error(0xf,0x82,0);
        return 0;
      }
      uVar3 = -param_2;
      if (0 < (long)param_2) {
        uVar3 = param_2;
      }
      if (uVar3 >> 0x35 == 0) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        **(double **)(param_1 + 0x10) = (double)(long)param_2;
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/params.c",0x34b,"OSSL_PARAM_set_int64");
      ERR_set_error(0xf,0x7b,0);
      return 0;
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 8;
  return 1;
}



void OSSL_PARAM_set_long(void)

{
  OSSL_PARAM_set_int64();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_int64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00103508;
  uVar1 = __LC2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



undefined8 OSSL_PARAM_get_uint64(long param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  undefined8 uVar5;
  
  if ((param_2 == (double *)0x0) || (param_1 == 0)) {
    ERR_new();
    uVar5 = 0x35e;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 2) {
        if (iVar2 != 1) {
          if (iVar2 != 3) {
            ERR_new();
            ERR_set_debug("crypto/params.c",0x3a5,"OSSL_PARAM_get_uint64");
            ERR_set_error(0xf,0x81,0);
            return 0;
          }
          if (*(long *)(param_1 + 0x18) != 8) {
            ERR_new();
            ERR_set_debug("crypto/params.c",0x3a1,"OSSL_PARAM_get_uint64");
            ERR_set_error(0xf,0x82,0);
            return 0;
          }
          dVar1 = *pdVar3;
          if ((0.0 <= dVar1) && (dVar1 < _LC9)) {
            if (_LC8 <= dVar1) {
              dVar4 = -(double)(long)(dVar1 - _LC8);
            }
            else {
              dVar4 = (double)(long)dVar1;
            }
            if ((double)(ulong)dVar4 == dVar1) goto LAB_001019dd;
          }
          ERR_new();
          ERR_set_debug("crypto/params.c",0x39e,"OSSL_PARAM_get_uint64");
          ERR_set_error(0xf,0x7b,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 4) {
          dVar4 = (double)(long)*(int *)pdVar3;
          if (*(int *)pdVar3 < 0) {
            ERR_new();
            uVar5 = 0x37f;
LAB_00101b54:
            ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_get_uint64");
            ERR_set_error(0xf,0x7d,0);
            return 0;
          }
        }
        else {
          if (*(long *)(param_1 + 0x18) != 8) goto LAB_00101ad0;
          dVar4 = *pdVar3;
          if ((long)dVar4 < 0) {
            ERR_new();
            uVar5 = 0x387;
            goto LAB_00101b54;
          }
        }
LAB_001019dd:
        *param_2 = dVar4;
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 4) {
        *param_2 = (double)(ulong)*(uint *)pdVar3;
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        *param_2 = *pdVar3;
        return 1;
      }
LAB_00101ad0:
      uVar5 = general_get_uint(param_1,param_2,8);
      return uVar5;
    }
    ERR_new();
    uVar5 = 0x363;
  }
  ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_get_uint64");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



void OSSL_PARAM_get_ulong(void)

{
  OSSL_PARAM_get_uint64();
  return;
}



undefined8 OSSL_PARAM_set_uint64(long param_1,ulong param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong local_10 [2];
  
  local_10[0] = param_2;
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x3ac,"OSSL_PARAM_set_uint64");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 2) {
    puVar2 = *(ulong **)(param_1 + 0x10);
    if (puVar2 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) != 4) {
        if (*(long *)(param_1 + 0x18) == 8) {
          *(undefined8 *)(param_1 + 0x20) = 8;
          *puVar2 = param_2;
          return 1;
        }
LAB_00101da0:
        uVar3 = general_set_uint(param_1,local_10,8);
        return uVar3;
      }
      if (param_2 >> 0x20 != 0) {
        ERR_new();
        uVar3 = 0x3be;
        goto LAB_00101e13;
      }
LAB_00101d12:
      *(undefined8 *)(param_1 + 0x20) = 4;
      *(int *)puVar2 = (int)param_2;
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 3) {
        ERR_new();
        ERR_set_debug("crypto/params.c",0x3f1,"OSSL_PARAM_set_uint64");
        ERR_set_error(0xf,0x81,0);
        return 0;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        if (param_2 >> 0x35 == 0) {
          *(undefined8 *)(param_1 + 0x20) = 8;
          **(double **)(param_1 + 0x10) = (double)(long)param_2;
          return 1;
        }
        ERR_new();
        ERR_set_debug("crypto/params.c",0x3ea,"OSSL_PARAM_set_uint64");
        ERR_set_error(0xf,0x7b,0);
        return 0;
      }
      ERR_new();
      ERR_set_debug("crypto/params.c",0x3ed,"OSSL_PARAM_set_uint64");
      ERR_set_error(0xf,0x82,0);
      return 0;
    }
    puVar2 = *(ulong **)(param_1 + 0x10);
    if (puVar2 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 4) {
        if (param_2 < 0x80000000) goto LAB_00101d12;
        ERR_new();
        uVar3 = 0x3d4;
      }
      else {
        if (*(long *)(param_1 + 0x18) != 8) goto LAB_00101da0;
        if (-1 < (long)param_2) {
          *(undefined8 *)(param_1 + 0x20) = 8;
          *puVar2 = param_2;
          return 1;
        }
        ERR_new();
        uVar3 = 0x3dc;
      }
LAB_00101e13:
      ERR_set_debug("crypto/params.c",uVar3,"OSSL_PARAM_set_uint64");
      ERR_set_error(0xf,0x7e,0);
      return 0;
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 8;
  return 1;
}



void OSSL_PARAM_set_ulong(void)

{
  OSSL_PARAM_set_uint64();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_uint64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00103508;
  uVar1 = __LC2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



void OSSL_PARAM_get_size_t(void)

{
  OSSL_PARAM_get_uint64();
  return;
}



void OSSL_PARAM_set_size_t(void)

{
  OSSL_PARAM_set_uint64();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_size_t(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00103508;
  uVar1 = __LC2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



void OSSL_PARAM_get_time_t(void)

{
  OSSL_PARAM_get_int64();
  return;
}



void OSSL_PARAM_set_time_t(void)

{
  OSSL_PARAM_set_int64();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_time_t(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00103508;
  uVar1 = __LC2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



undefined8 OSSL_PARAM_get_BN(long param_1,long *param_2)

{
  long lVar1;
  
  if (((param_2 == (long *)0x0) || (param_1 == 0)) ||
     (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x43f,"OSSL_PARAM_get_BN");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  if (*(int *)(param_1 + 8) == 1) {
    lVar1 = BN_signed_native2bn(lVar1,*(undefined4 *)(param_1 + 0x18),*param_2);
  }
  else {
    if (*(int *)(param_1 + 8) != 2) {
      ERR_new();
      ERR_set_debug("crypto/params.c",1099,"OSSL_PARAM_get_BN");
      ERR_set_error(0xf,0x81,0);
      goto LAB_00102076;
    }
    lVar1 = BN_native2bn(lVar1,*(undefined4 *)(param_1 + 0x18),*param_2);
  }
  if (lVar1 != 0) {
    *param_2 = lVar1;
    return 1;
  }
LAB_00102076:
  ERR_new();
  ERR_set_debug("crypto/params.c",0x450,"OSSL_PARAM_get_BN");
  ERR_set_error(0xf,0x80003,0);
  return 0;
}



undefined8 OSSL_PARAM_set_BN(long param_1,BIGNUM *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    ERR_new();
    uVar5 = 0x45d;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_2 != (BIGNUM *)0x0) {
      if ((*(int *)(param_1 + 8) == 2) && (iVar3 = BN_is_negative(param_2), iVar3 != 0)) {
        ERR_new();
        uVar5 = 0x466;
LAB_00102158:
        ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_set_BN");
        ERR_set_error(0xf,0x81,0);
        return 0;
      }
      iVar1 = BN_num_bits(param_2);
      iVar3 = *(int *)(param_1 + 8);
      iVar2 = iVar1 + 0xe;
      if (-1 < iVar1 + 7) {
        iVar2 = iVar1 + 7;
      }
      uVar4 = (long)(iVar2 >> 3) + (ulong)(iVar3 == 1);
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        if (*(ulong *)(param_1 + 0x18) < uVar4) {
          *(ulong *)(param_1 + 0x20) = uVar4;
          ERR_new();
          ERR_set_debug("crypto/params.c",0x48d,"OSSL_PARAM_set_BN");
          ERR_set_error(0xf,0x74,0);
          return 0;
        }
        if (iVar3 == 1) {
          iVar3 = BN_signed_bn2native(param_2);
          if (iVar3 < 0) {
            ERR_new();
            uVar5 = 0x481;
LAB_0010222d:
            ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_set_BN");
            ERR_set_error(0xf,0x7f,0);
            return 0;
          }
        }
        else {
          if (iVar3 != 2) {
            ERR_new();
            uVar5 = 0x486;
            goto LAB_00102158;
          }
          iVar3 = BN_bn2nativepad(param_2);
          if (iVar3 < 0) {
            ERR_new();
            uVar5 = 0x47b;
            goto LAB_0010222d;
          }
        }
        uVar4 = *(ulong *)(param_1 + 0x18);
      }
      *(ulong *)(param_1 + 0x20) = uVar4;
      return 1;
    }
    ERR_new();
    uVar5 = 0x462;
  }
  ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_set_BN");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 *
OSSL_PARAM_construct_BN
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return param_1;
}



undefined8 OSSL_PARAM_get_double(long param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (((param_2 == (double *)0x0) || (param_1 == 0)) ||
     (pdVar2 = *(double **)(param_1 + 0x10), pdVar2 == (double *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x49f,"OSSL_PARAM_get_double");
    ERR_set_error(0xf,0xc0102,0);
LAB_00102359:
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 3) {
      if (*(long *)(param_1 + 0x18) != 8) {
        ERR_new();
        ERR_set_debug("crypto/params.c",0x4a9,"OSSL_PARAM_get_double");
        ERR_set_error(0xf,0x82,0);
        goto LAB_00102359;
      }
      *param_2 = *pdVar2;
    }
    else if (iVar1 == 2) {
      if (*(long *)(param_1 + 0x18) == 4) {
        *param_2 = (double)*(uint *)pdVar2;
      }
      else {
        if (*(long *)(param_1 + 0x18) != 8) goto LAB_00102329;
        if ((ulong)*pdVar2 >> 0x35 != 0) {
          ERR_new();
          uVar4 = 0x4b6;
LAB_001024b1:
          ERR_set_debug("crypto/params.c",uVar4,"OSSL_PARAM_get_double");
          ERR_set_error(0xf,0x7b,0);
          goto LAB_00102359;
        }
        *param_2 = (double)(long)*pdVar2;
      }
    }
    else {
      if (iVar1 != 1) {
LAB_00102329:
        ERR_new();
        ERR_set_debug("crypto/params.c",0x4c9,"OSSL_PARAM_get_double");
        ERR_set_error(0xf,0x81,0);
        goto LAB_00102359;
      }
      if (*(long *)(param_1 + 0x18) == 4) {
        *param_2 = (double)(int)*(uint *)pdVar2;
      }
      else {
        if (*(long *)(param_1 + 0x18) != 8) goto LAB_00102329;
        dVar3 = *pdVar2;
        dVar5 = (double)-(long)dVar3;
        if (0 < (long)dVar3) {
          dVar5 = dVar3;
        }
        if ((ulong)dVar5 >> 0x35 != 0) {
          ERR_new();
          uVar4 = 0x4c5;
          goto LAB_001024b1;
        }
        *param_2 = (double)(long)dVar3;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OSSL_PARAM_set_double(double param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x4d6,"OSSL_PARAM_set_double");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (iVar1 == 3) {
    if (*(double **)(param_2 + 0x10) != (double *)0x0) {
      if (*(long *)(param_2 + 0x18) != 8) {
        ERR_new();
        ERR_set_debug("crypto/params.c",0x4e6,"OSSL_PARAM_set_double");
        ERR_set_error(0xf,0x82,0);
        return 0;
      }
      *(undefined8 *)(param_2 + 0x20) = 8;
      **(double **)(param_2 + 0x10) = param_1;
      return 1;
    }
  }
  else if (iVar1 == 2) {
    puVar2 = *(ulong **)(param_2 + 0x10);
    if (puVar2 != (ulong *)0x0) {
      if (_LC8 <= param_1) {
        uVar4 = (long)(param_1 - _LC8) ^ 0x8000000000000000;
      }
      else {
        uVar4 = (ulong)param_1;
      }
      if ((double)uVar4 == param_1) {
        if (*(long *)(param_2 + 0x18) == 4) {
          if ((0.0 <= param_1) && (param_1 < _LC10)) {
            *(undefined8 *)(param_2 + 0x20) = 4;
            *(int *)puVar2 = (int)(long)param_1;
            return 1;
          }
          ERR_new();
          uVar5 = 0x4fc;
        }
        else {
          if (*(long *)(param_2 + 0x18) != 8) goto LAB_00102523;
          if ((0.0 <= param_1) && (param_1 < _LC9)) {
            *(undefined8 *)(param_2 + 0x20) = 8;
            *puVar2 = uVar4;
            return 1;
          }
          ERR_new();
          uVar5 = 0x504;
        }
        goto LAB_00102811;
      }
      ERR_new();
      uVar5 = 0x4f2;
LAB_001027a1:
      ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_set_double");
      ERR_set_error(0xf,0x7b,0);
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
LAB_00102523:
      ERR_new();
      ERR_set_debug("crypto/params.c",0x527,"OSSL_PARAM_set_double");
      ERR_set_error(0xf,0x81,0);
      return 0;
    }
    plVar3 = *(long **)(param_2 + 0x10);
    if (plVar3 != (long *)0x0) {
      if ((double)(long)param_1 == param_1) {
        if (*(long *)(param_2 + 0x18) == 4) {
          if ((__LC3 <= param_1) && (param_1 < _LC11)) {
            *(undefined8 *)(param_2 + 0x20) = 4;
            *(int *)plVar3 = (int)param_1;
            return 1;
          }
          ERR_new();
          uVar5 = 0x51b;
        }
        else {
          if (*(long *)(param_2 + 0x18) != 8) goto LAB_00102523;
          if ((__LC7 <= param_1) && (param_1 < _LC8)) {
            *(undefined8 *)(param_2 + 0x20) = 8;
            *plVar3 = (long)param_1;
            return 1;
          }
          ERR_new();
          uVar5 = 0x523;
        }
LAB_00102811:
        ERR_set_debug("crypto/params.c",uVar5,"OSSL_PARAM_set_double");
        ERR_set_error(0xf,0x7e,0);
        return 0;
      }
      ERR_new();
      uVar5 = 0x511;
      goto LAB_001027a1;
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 8;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * OSSL_PARAM_construct_double(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00103508;
  uVar1 = __LC2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



int OSSL_PARAM_get_utf8_string(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong local_30 [2];
  
  local_30[0] = param_3;
  iVar2 = get_string_internal(param_1,param_2,local_30,0,4);
  uVar1 = local_30[0];
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x18);
  if ((local_30[0] <= uVar3) &&
     (uVar3 = OPENSSL_strnlen(*(undefined8 *)(param_1 + 0x10)), uVar1 <= uVar3)) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x57a,"OSSL_PARAM_get_utf8_string");
    ERR_set_error(0xf,0x80,0);
    return 0;
  }
  *(undefined1 *)(*param_2 + uVar3) = 0;
  return iVar2;
}



void OSSL_PARAM_get_octet_string
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_10 [2];
  
  local_10[0] = param_3;
  get_string_internal(param_1,param_2,local_10,param_4,5);
  return;
}



undefined8 OSSL_PARAM_set_utf8_string(long param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    sVar1 = strlen(param_2);
    uVar2 = set_string_internal_constprop_0(param_1,param_2,sVar1,4);
    return uVar2;
  }
  ERR_new();
  ERR_set_debug("crypto/params.c",0x5a2,"OSSL_PARAM_set_utf8_string");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_set_octet_string(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar1 = set_string_internal_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/params.c",0x5ad,"OSSL_PARAM_set_octet_string");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 *
OSSL_PARAM_construct_utf8_string
          (undefined8 *param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  if ((param_3 != (char *)0x0) && (param_4 == 0)) {
    param_4 = strlen(param_3);
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return param_1;
}



undefined8 *
OSSL_PARAM_construct_octet_string
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return param_1;
}



undefined8 OSSL_PARAM_get_utf8_ptr(long param_1,undefined8 *param_2)

{
  if ((param_2 == (undefined8 *)0x0) || (param_1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x5c6,"get_ptr_internal");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    if (*(int *)(param_1 + 8) == 6) {
      *param_2 = **(undefined8 **)(param_1 + 0x10);
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/params.c",0x5ca,"get_ptr_internal");
    ERR_set_error(0xf,0x81,0);
  }
  return 0;
}



undefined8 OSSL_PARAM_get_octet_ptr(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if ((param_2 == (undefined8 *)0x0) || (param_1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x5c6,"get_ptr_internal");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    if (*(int *)(param_1 + 8) == 7) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_1 + 0x18);
      }
      *param_2 = **(undefined8 **)(param_1 + 0x10);
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/params.c",0x5ca,"get_ptr_internal");
    ERR_set_error(0xf,0x81,0);
  }
  return 0;
}



undefined8 OSSL_PARAM_set_utf8_ptr(long param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x5ee,"OSSL_PARAM_set_utf8_ptr");
    ERR_set_error(0xf,0xc0102,0);
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    sVar1 = 0;
    if (param_2 != (char *)0x0) {
      sVar1 = strlen(param_2);
    }
    if (*(int *)(param_1 + 8) == 6) {
      *(size_t *)(param_1 + 0x20) = sVar1;
      if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = param_2;
      }
      uVar2 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/params.c",0x5e2,"set_ptr_internal");
      ERR_set_error(0xf,0x81,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined8 OSSL_PARAM_set_octet_ptr(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/params.c",0x5fa,"OSSL_PARAM_set_octet_ptr");
    ERR_set_error(0xf,0xc0102,0);
    uVar1 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 8) == 7) {
      *(undefined8 *)(param_1 + 0x20) = param_3;
      if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = param_2;
      }
      uVar1 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/params.c",0x5e2,"set_ptr_internal");
      ERR_set_error(0xf,0x81,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}



undefined8 *
OSSL_PARAM_construct_utf8_ptr
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 6;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return param_1;
}



undefined8 *
OSSL_PARAM_construct_octet_ptr
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 7;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return param_1;
}



undefined8
ossl_param_get1_octet_string
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = OSSL_PARAM_locate_const();
  local_30 = 0;
  local_28 = 0;
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (((*(long *)(lVar1 + 0x10) == 0) || (*(long *)(lVar1 + 0x18) == 0)) ||
          (uVar2 = OSSL_PARAM_get_octet_string(lVar1,&local_30,0,&local_28), (int)uVar2 != 0)) {
    CRYPTO_clear_free(*param_3,*param_4,"crypto/params.c",0x625);
    *param_3 = local_30;
    *param_4 = local_28;
    uVar2 = 1;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8
ossl_param_get1_concat_octet_string
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const();
  local_48 = 0;
  uVar3 = 0xffffffff;
  if (lVar2 == 0) goto LAB_00103011;
  iVar1 = setbuf_fromparams(lVar2,param_2,0,&local_48);
  if ((iVar1 == 0) || ((param_5 != 0 && (param_5 < local_48)))) {
LAB_00103055:
    uVar3 = 0;
  }
  else {
    if (local_48 == 0) {
      pvVar4 = (void *)CRYPTO_zalloc(1,"crypto/params.c",0x65f);
      if (pvVar4 == (void *)0x0) goto LAB_00103055;
    }
    else {
      pvVar4 = CRYPTO_malloc((int)local_48,"crypto/params.c",0x665);
      if (pvVar4 == (void *)0x0) goto LAB_00103055;
      iVar1 = setbuf_fromparams(lVar2,param_2,pvVar4,&local_48);
      if (iVar1 == 0) {
        CRYPTO_clear_free(pvVar4,local_48,"crypto/params.c",0x66b);
        uVar3 = 0;
        goto LAB_00103011;
      }
    }
    CRYPTO_clear_free(*param_3,*param_4,"crypto/params.c",0x670);
    *param_3 = pvVar4;
    *param_4 = local_48;
    uVar3 = 1;
  }
LAB_00103011:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * OSSL_PARAM_construct_end(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  return param_1;
}



bool OSSL_PARAM_get_utf8_string_ptr(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  ERR_set_mark();
  iVar1 = OSSL_PARAM_get_utf8_ptr(param_1,param_2);
  ERR_pop_to_mark();
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = get_string_ptr_internal(param_1,param_2,0,4);
  return iVar1 != 0;
}



bool OSSL_PARAM_get_octet_string_ptr(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  ERR_set_mark();
  iVar1 = OSSL_PARAM_get_octet_ptr(param_1,param_2,param_3);
  ERR_pop_to_mark();
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = get_string_ptr_internal(param_1,param_2,param_3,5);
  return iVar1 != 0;
}


