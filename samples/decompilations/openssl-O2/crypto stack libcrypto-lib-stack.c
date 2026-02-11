
ulong internal_find(int *param_1,long param_2,uint param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  int *piVar6;
  long in_FS_OFFSET;
  long local_50;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  local_44 = 0;
  local_50 = param_2;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uVar3 = (ulong)iVar1;
    if (iVar1 != 0) {
      pcVar5 = *(code **)(param_1 + 6);
      piVar6 = &local_44;
      if (param_4 != (int *)0x0) {
        piVar6 = param_4;
      }
      if (pcVar5 == (code *)0x0) {
        if (0 < iVar1) {
          do {
            if (*(long *)(*(long *)(param_1 + 2) + uVar2 * 8) == param_2) {
              *piVar6 = 1;
              uVar2 = uVar2 & 0xffffffff;
              goto LAB_001000f9;
            }
            uVar2 = uVar2 + 1;
          } while (uVar3 != uVar2);
        }
LAB_00100172:
        *piVar6 = 0;
      }
      else if (param_2 != 0) {
        if (param_1[4] == 0) {
          uVar3 = 0;
          uVar2 = 0xffffffff;
          if (0 < iVar1) {
            while( true ) {
              iVar1 = (*pcVar5)(&local_50,*(long *)(param_1 + 2) + uVar3 * 8);
              if (iVar1 == 0) {
                if ((int)uVar2 == -1) {
                  uVar2 = uVar3 & 0xffffffff;
                }
                *piVar6 = *piVar6 + 1;
                if (param_4 == (int *)0x0) {
                  uVar2 = uVar3 & 0xffffffff;
                  goto LAB_001000f9;
                }
              }
              uVar3 = uVar3 + 1;
              if (*param_1 <= (int)uVar3) break;
              pcVar5 = *(code **)(param_1 + 6);
            }
            if ((int)uVar2 != -1) goto LAB_001000f9;
          }
          goto LAB_00100172;
        }
        if (param_4 == (int *)0x0) {
          uVar2 = ossl_bsearch(&local_50,*(undefined8 *)(param_1 + 2),uVar3,8,pcVar5,param_3);
          if (uVar2 != 0) {
LAB_001000ee:
            lVar4 = *(long *)(param_1 + 2);
            goto LAB_001000f2;
          }
        }
        else {
          uVar2 = ossl_bsearch(&local_50,*(undefined8 *)(param_1 + 2),uVar3,8,pcVar5,param_3 | 2);
          *piVar6 = 0;
          if (uVar2 != 0) {
            lVar4 = *(long *)(param_1 + 2);
            uVar3 = uVar2;
            if (uVar2 < (ulong)(lVar4 + (long)*param_1 * 8)) {
              do {
                iVar1 = (**(code **)(param_1 + 6))(&local_50,uVar3);
                if (iVar1 != 0) goto LAB_001000ee;
                *piVar6 = *piVar6 + 1;
                lVar4 = *(long *)(param_1 + 2);
                uVar3 = uVar3 + 8;
              } while (uVar3 < (ulong)(lVar4 + (long)*param_1 * 8));
            }
LAB_001000f2:
            uVar2 = (long)(uVar2 - lVar4) >> 3;
            goto LAB_001000f9;
          }
        }
      }
    }
  }
  uVar2 = 0xffffffff;
LAB_001000f9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 0xffffffff;
}



undefined8 sk_reserve(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  bool bVar8;
  
  if (0x7fffffff - *param_1 < param_2) {
    ERR_new();
    uVar7 = 0xb8;
LAB_00100321:
    ERR_set_debug("crypto/stack/stack.c",uVar7,"sk_reserve");
    ERR_set_error(0xf,0x72,0);
    return 0;
  }
  param_2 = *param_1 + param_2;
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (*(void **)(param_1 + 2) == (void *)0x0) {
    lVar4 = CRYPTO_zalloc((long)param_2 << 3,"crypto/stack/stack.c",199);
    *(long *)(param_1 + 2) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = param_1[5];
    if (param_3 == 0) {
      if (param_2 <= iVar2) {
        return 1;
      }
      do {
        while( true ) {
          lVar4 = (long)iVar2 * 8;
          bVar8 = (int)lVar4 != lVar4;
          uVar6 = (uint)bVar8;
          if (!bVar8) break;
          if (iVar2 < 8) {
            iVar5 = (int)((long)iVar2 * 3);
            if ((long)iVar5 == (long)iVar2 * 3) goto LAB_001002a5;
LAB_001002dd:
            ERR_new();
            uVar7 = 0xd2;
            goto LAB_00100321;
          }
          uVar6 = iVar2 / 5;
          iVar5 = (iVar2 % 5) * 8;
          iVar2 = 8;
LAB_001002a5:
          iVar1 = (int)((long)iVar2 * (long)(int)uVar6);
          if (((long)iVar1 != (long)iVar2 * (long)(int)uVar6) ||
             (iVar2 = iVar1 + iVar5 / 5, SCARRY4(iVar1,iVar5 / 5))) goto LAB_001002dd;
          iVar5 = iVar2;
          if ((iVar2 == 0x7fffffff) || (param_2 <= iVar2)) goto LAB_0010022e;
        }
        iVar2 = (int)lVar4 / 5;
        iVar5 = iVar2;
      } while (iVar2 < param_2);
    }
    else {
      iVar5 = param_2;
      if (param_2 == iVar2) {
        return 1;
      }
    }
LAB_0010022e:
    param_2 = iVar5;
    pvVar3 = CRYPTO_realloc(*(void **)(param_1 + 2),(int)((long)param_2 << 3),"crypto/stack/stack.c"
                            ,0xd9);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  param_1[5] = param_2;
  return 1;
}



void OPENSSL_sk_set_cmp_func(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(long *)(param_1 + 0x18) = param_2;
  return;
}



undefined8 OPENSSL_sk_reserve(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/stack/stack.c",0xf9,"OPENSSL_sk_reserve");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  if (-1 < (int)param_2) {
    uVar1 = sk_reserve(param_1,param_2,1);
    return uVar1;
  }
  return 1;
}



int OPENSSL_sk_insert(int *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/stack/stack.c",0x105,"OPENSSL_sk_insert");
    ERR_set_error(0xf,0xc0102,0);
  }
  else if (*param_1 == 0x7fffffff) {
    ERR_new();
    ERR_set_debug("crypto/stack/stack.c",0x109,"OPENSSL_sk_insert");
    ERR_set_error(0xf,0x72,0);
  }
  else {
    iVar3 = sk_reserve(param_1,1,0);
    if (iVar3 != 0) {
      iVar3 = *param_1;
      lVar2 = *(long *)(param_1 + 2);
      if ((param_3 < iVar3) && (-1 < param_3)) {
        lVar1 = (long)param_3 * 8;
        memmove((void *)(lVar2 + 8 + lVar1),(void *)(lVar2 + lVar1),(long)(iVar3 - param_3) << 3);
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_3 * 8) = param_2;
        iVar3 = *param_1;
      }
      else {
        *(undefined8 *)(lVar2 + (long)iVar3 * 8) = param_2;
      }
      param_1[4] = 0;
      *param_1 = iVar3 + 1;
      return iVar3 + 1;
    }
  }
  return 0;
}



long OPENSSL_sk_delete_ptr(int *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *__dest;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, 0 < iVar1)) {
    lVar3 = 0;
    __dest = *(long **)(param_1 + 2);
    do {
      lVar2 = *__dest;
      if (lVar2 == param_2) {
        iVar4 = iVar1 + -1;
        if ((int)lVar3 != iVar4) {
          memmove(__dest,*(long **)(param_1 + 2) + lVar3 + 1,(long)((iVar1 - (int)lVar3) + -1) << 3)
          ;
          iVar4 = *param_1 + -1;
        }
        *param_1 = iVar4;
        return lVar2;
      }
      lVar3 = lVar3 + 1;
      __dest = __dest + 1;
    } while (lVar3 != iVar1);
  }
  return 0;
}



undefined8 OPENSSL_sk_delete(int *param_1,int param_2)

{
  undefined8 *__dest;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 != (int *)0x0) && (-1 < param_2)) {
    iVar1 = *param_1;
    uVar3 = 0;
    if (param_2 < iVar1) {
      iVar2 = iVar1 + -1;
      __dest = (undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
      uVar3 = *__dest;
      if (param_2 != iVar2) {
        memmove(__dest,(void *)(*(long *)(param_1 + 2) + 8 + (long)param_2 * 8),
                (long)((iVar1 - param_2) + -1) << 3);
        iVar2 = *param_1 + -1;
      }
      *param_1 = iVar2;
    }
    return uVar3;
  }
  return 0;
}



void OPENSSL_sk_find(undefined8 param_1,undefined8 param_2)

{
  internal_find(param_1,param_2,2,0);
  return;
}



void OPENSSL_sk_find_ex(undefined8 param_1,undefined8 param_2)

{
  internal_find(param_1,param_2,1,0);
  return;
}



void OPENSSL_sk_find_all(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  internal_find(param_1,param_2,2,param_3);
  return;
}



undefined8 OPENSSL_sk_push(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = OPENSSL_sk_insert(param_1,param_2,*param_1);
    return uVar1;
  }
  return 0;
}



void OPENSSL_sk_unshift(undefined8 param_1,undefined8 param_2)

{
  OPENSSL_sk_insert(param_1,param_2,0);
  return;
}



undefined8 OPENSSL_sk_shift(int *param_1)

{
  undefined8 *__dest;
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *param_1;
    uVar2 = 0;
    if (iVar1 != 0) {
      __dest = *(undefined8 **)(param_1 + 2);
      uVar2 = *__dest;
      if (iVar1 != 1) {
        memmove(__dest,__dest + 1,(long)(iVar1 + -1) << 3);
        iVar1 = *param_1;
      }
      *param_1 = iVar1 + -1;
    }
  }
  return uVar2;
}



undefined8 OPENSSL_sk_pop(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*param_1 != 0) {
      iVar1 = *param_1 + -1;
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
      *param_1 = iVar1;
    }
  }
  return uVar2;
}



void OPENSSL_sk_zero(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  memset(*(void **)(param_1 + 2),0,(long)*param_1 << 3);
  *param_1 = 0;
  return;
}



void OPENSSL_sk_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * OPENSSL_sk_dup(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *__dest;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)CRYPTO_malloc(0x20,"crypto/stack/stack.c",0x33);
  if (puVar4 == (undefined8 *)0x0) {
LAB_0010089f:
    puVar5 = (undefined8 *)0x0;
    OPENSSL_sk_free(puVar4);
  }
  else {
    if (param_1 == (int *)0x0) {
      *(undefined4 *)puVar4 = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4[3] = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 4);
      uVar3 = *(undefined8 *)(param_1 + 6);
      *puVar4 = *(undefined8 *)param_1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      if (*param_1 != 0) {
        __dest = CRYPTO_malloc((int)((long)param_1[5] << 3),"crypto/stack/stack.c",0x47);
        puVar4[1] = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,*(void **)(param_1 + 2),(long)*param_1 << 3);
          return puVar4;
        }
        goto LAB_0010089f;
      }
    }
    puVar4[1] = 0;
    *(undefined4 *)((long)puVar4 + 0x14) = 0;
    puVar5 = puVar4;
  }
  return puVar5;
}



int * OPENSSL_sk_deep_copy(int *param_1,code *param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  
  piVar6 = (int *)CRYPTO_malloc(0x20,"crypto/stack/stack.c",0x59);
  if (piVar6 == (int *)0x0) {
LAB_001009d9:
    piVar9 = (int *)0x0;
    OPENSSL_sk_free(piVar6);
  }
  else {
    if (param_1 == (int *)0x0) {
      *piVar6 = 0;
      piVar6[4] = 0;
      piVar6[6] = 0;
      piVar6[7] = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar4 = *(undefined8 *)(param_1 + 4);
      uVar5 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)piVar6 = *(undefined8 *)param_1;
      *(undefined8 *)(piVar6 + 2) = uVar3;
      *(undefined8 *)(piVar6 + 4) = uVar4;
      *(undefined8 *)(piVar6 + 6) = uVar5;
      iVar1 = *param_1;
      lVar7 = (long)iVar1;
      if (iVar1 != 0) {
        if (iVar1 < 4) {
          lVar7 = 4;
        }
        piVar6[5] = (int)lVar7;
        lVar7 = CRYPTO_zalloc(lVar7 * 8,"crypto/stack/stack.c",0x6d);
        *(long *)(piVar6 + 2) = lVar7;
        if (lVar7 != 0) {
          if (*piVar6 < 1) {
            return piVar6;
          }
          lVar7 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + lVar7 * 8) != 0) {
              lVar2 = *(long *)(piVar6 + 2);
              lVar8 = (*param_2)();
              *(long *)(lVar7 * 8 + lVar2) = lVar8;
              if (lVar8 == 0) {
                iVar1 = (int)lVar7;
                if (iVar1 != 0) {
                  lVar7 = (long)(int)(iVar1 - 1U) << 3;
                  do {
                    if (*(long *)(*(long *)(piVar6 + 2) + lVar7) != 0) {
                      (*param_3)();
                    }
                    lVar7 = lVar7 + -8;
                  } while (lVar7 != ((long)iVar1 - (ulong)(iVar1 - 1U)) * 8 + -0x10);
                }
                break;
              }
            }
            lVar7 = lVar7 + 1;
            if (*piVar6 <= (int)lVar7) {
              return piVar6;
            }
          } while( true );
        }
        goto LAB_001009d9;
      }
    }
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[5] = 0;
    piVar9 = piVar6;
  }
  return piVar9;
}



long OPENSSL_sk_new_reserve(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CRYPTO_zalloc(0x20,"crypto/stack/stack.c",0xe4);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = param_1;
    if (param_2 < 1) {
      return lVar2;
    }
    iVar1 = sk_reserve(lVar2,param_2,1);
    if (iVar1 != 0) {
      return lVar2;
    }
    OPENSSL_sk_free(lVar2);
  }
  return 0;
}



void OPENSSL_sk_new_null(void)

{
  OPENSSL_sk_new_reserve(0,0);
  return;
}



void OPENSSL_sk_new(undefined8 param_1)

{
  OPENSSL_sk_new_reserve(param_1,0);
  return;
}



void OPENSSL_sk_pop_free(int *param_1,code *param_2)

{
  long lVar1;
  
  if (param_1 != (int *)0x0) {
    if (0 < *param_1) {
      lVar1 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 2) + lVar1 * 8) != 0) {
          (*param_2)();
        }
        lVar1 = lVar1 + 1;
      } while ((int)lVar1 < *param_1);
    }
    OPENSSL_sk_free(param_1);
    return;
  }
  return;
}



undefined4 OPENSSL_sk_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}



undefined8 OPENSSL_sk_value(int *param_1,int param_2)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
  }
  return 0;
}



undefined8 OPENSSL_sk_set(int *param_1,int param_2,undefined8 param_3)

{
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/stack/stack.c",0x1d2,"OPENSSL_sk_set");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    if ((-1 < param_2) && (param_2 < *param_1)) {
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8) = param_3;
      param_1[4] = 0;
      return *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
    }
    ERR_new();
    ERR_set_debug("crypto/stack/stack.c",0x1d6,"OPENSSL_sk_set");
    ERR_set_error(0xf,0x80106,&_LC1,param_2);
  }
  return 0;
}



void OPENSSL_sk_sort(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((param_1[4] == 0) && (*(__compar_fn_t *)(param_1 + 6) != (__compar_fn_t)0x0)) {
      if (*param_1 < 2) {
        param_1[4] = 1;
      }
      else {
        qsort(*(void **)(param_1 + 2),(long)*param_1,8,*(__compar_fn_t *)(param_1 + 6));
        param_1[4] = 1;
      }
    }
    return;
  }
  return;
}



undefined4 OPENSSL_sk_is_sorted(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}


