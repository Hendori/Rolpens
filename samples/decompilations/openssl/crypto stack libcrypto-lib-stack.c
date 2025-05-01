
void OPENSSL_sk_set_cmp_func(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(long *)(param_1 + 0x18) = param_2;
  return;
}



undefined8 OPENSSL_sk_reserve(int *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/stack/stack.c",0xf9,"OPENSSL_sk_reserve");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  if (-1 < param_2) {
    if (0x7fffffff - *param_1 < param_2) {
      ERR_new();
      ERR_set_debug("crypto/stack/stack.c",0xb8,"sk_reserve");
      ERR_set_error(0xf,0x72,0);
      return 0;
    }
    param_2 = param_2 + *param_1;
    if (param_2 < 4) {
      param_2 = 4;
    }
    if (*(void **)(param_1 + 2) == (void *)0x0) {
      lVar2 = CRYPTO_zalloc((long)param_2 << 3,"crypto/stack/stack.c",199);
      *(long *)(param_1 + 2) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      if (param_2 == param_1[5]) {
        return 1;
      }
      pvVar1 = CRYPTO_realloc(*(void **)(param_1 + 2),(int)((long)param_2 << 3),
                              "crypto/stack/stack.c",0xd9);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *(void **)(param_1 + 2) = pvVar1;
    }
    param_1[5] = param_2;
  }
  return 1;
}



int OPENSSL_sk_insert(int *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *addr;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/stack/stack.c",0x105,"OPENSSL_sk_insert");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    iVar7 = *param_1;
    if (iVar7 != 0x7fffffff) {
      addr = *(void **)(param_1 + 2);
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < 4) {
        iVar2 = 4;
      }
      if (addr == (void *)0x0) {
        addr = (void *)CRYPTO_zalloc((long)iVar2 << 3,"crypto/stack/stack.c",199);
        *(void **)(param_1 + 2) = addr;
        if (addr == (void *)0x0) {
          return 0;
        }
        param_1[5] = iVar2;
        iVar7 = *param_1;
      }
      else {
        iVar5 = param_1[5];
        if (iVar5 < iVar2) {
          do {
            lVar1 = (long)iVar5 * 8;
            bVar9 = (int)lVar1 != lVar1;
            uVar3 = (uint)bVar9;
            if (bVar9) {
              if (iVar5 < 8) {
                iVar7 = (int)((long)iVar5 * 3);
                if ((long)iVar7 == (long)iVar5 * 3) goto LAB_0010020f;
              }
              else {
                uVar3 = iVar5 / 5;
                iVar7 = iVar5 % 5;
                iVar5 = 8;
                iVar7 = iVar7 * 8;
LAB_0010020f:
                iVar4 = (int)((long)(int)uVar3 * (long)iVar5);
                if (((long)iVar4 == (long)(int)uVar3 * (long)iVar5) &&
                   (iVar5 = iVar4 + iVar7 / 5, !SCARRY4(iVar4,iVar7 / 5))) {
                  if (iVar5 != 0x7fffffff) goto LAB_001001d3;
                  break;
                }
              }
              ERR_new();
              pcVar6 = "sk_reserve";
              uVar8 = 0xd2;
              goto LAB_001002d9;
            }
            iVar5 = (int)lVar1 / 5;
LAB_001001d3:
          } while (iVar5 < iVar2);
          addr = CRYPTO_realloc(addr,(int)((long)iVar5 << 3),"crypto/stack/stack.c",0xd9);
          if (addr == (void *)0x0) {
            return 0;
          }
          *(void **)(param_1 + 2) = addr;
          iVar7 = *param_1;
          param_1[5] = iVar5;
        }
      }
      if ((param_3 < 0) || (iVar7 <= param_3)) {
        *(undefined8 *)((long)addr + (long)iVar7 * 8) = param_2;
      }
      else {
        lVar1 = (long)param_3 * 8;
        memmove((void *)((long)addr + lVar1 + 8),(void *)((long)addr + lVar1),
                (long)(iVar7 - param_3) << 3);
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_3 * 8) = param_2;
        iVar7 = *param_1;
      }
      param_1[4] = 0;
      *param_1 = iVar7 + 1;
      return iVar7 + 1;
    }
    ERR_new();
    pcVar6 = "OPENSSL_sk_insert";
    uVar8 = 0x109;
LAB_001002d9:
    ERR_set_debug("crypto/stack/stack.c",uVar8,pcVar6);
    ERR_set_error(0xf,0x72,0);
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
    } while (iVar1 != lVar3);
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



ulong OPENSSL_sk_find(int *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      pcVar4 = *(code **)(param_1 + 6);
      if (pcVar4 == (code *)0x0) {
        if (0 < iVar1) {
          uVar3 = 0;
          do {
            if (param_2 == *(long *)(*(long *)(param_1 + 2) + uVar3 * 8)) goto LAB_00100534;
            uVar3 = uVar3 + 1;
          } while (uVar3 != (long)iVar1);
        }
      }
      else if (param_2 != 0) {
        if (param_1[4] == 0) {
          if (0 < iVar1) {
            uVar3 = 0;
            while( true ) {
              iVar1 = (*pcVar4)(&local_28,*(long *)(param_1 + 2) + uVar3 * 8);
              if (iVar1 == 0) break;
              uVar3 = uVar3 + 1;
              if (*param_1 <= (int)uVar3) goto LAB_0010057f;
              pcVar4 = *(code **)(param_1 + 6);
            }
            uVar3 = uVar3 & 0xffffffff;
            goto LAB_00100534;
          }
        }
        else {
          lVar2 = ossl_bsearch(&local_28,*(undefined8 *)(param_1 + 2),(long)iVar1,8,pcVar4,2);
          if (lVar2 != 0) {
            uVar3 = lVar2 - *(long *)(param_1 + 2) >> 3;
            goto LAB_00100534;
          }
        }
      }
    }
  }
LAB_0010057f:
  uVar3 = 0xffffffff;
LAB_00100534:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong OPENSSL_sk_find_ex(int *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      pcVar4 = *(code **)(param_1 + 6);
      if (pcVar4 == (code *)0x0) {
        if (0 < iVar1) {
          uVar3 = 0;
          do {
            if (param_2 == *(long *)(*(long *)(param_1 + 2) + uVar3 * 8)) goto LAB_00100634;
            uVar3 = uVar3 + 1;
          } while (uVar3 != (long)iVar1);
        }
      }
      else if (param_2 != 0) {
        if (param_1[4] == 0) {
          if (0 < iVar1) {
            uVar3 = 0;
            while( true ) {
              iVar1 = (*pcVar4)(&local_28,*(long *)(param_1 + 2) + uVar3 * 8);
              if (iVar1 == 0) break;
              uVar3 = uVar3 + 1;
              if (*param_1 <= (int)uVar3) goto LAB_0010067f;
              pcVar4 = *(code **)(param_1 + 6);
            }
            uVar3 = uVar3 & 0xffffffff;
            goto LAB_00100634;
          }
        }
        else {
          lVar2 = ossl_bsearch(&local_28,*(undefined8 *)(param_1 + 2),(long)iVar1,8,pcVar4,1);
          if (lVar2 != 0) {
            uVar3 = lVar2 - *(long *)(param_1 + 2) >> 3;
            goto LAB_00100634;
          }
        }
      }
    }
  }
LAB_0010067f:
  uVar3 = 0xffffffff;
LAB_00100634:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong OPENSSL_sk_find_all(int *param_1,long param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  int *piVar6;
  long in_FS_OFFSET;
  int local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  local_3c = 0;
  local_38 = param_2;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      pcVar4 = *(code **)(param_1 + 6);
      piVar6 = &local_3c;
      if (param_3 != (int *)0x0) {
        piVar6 = param_3;
      }
      if (pcVar4 == (code *)0x0) {
        if (0 < iVar1) {
          do {
            if (param_2 == *(long *)(*(long *)(param_1 + 2) + uVar5 * 8)) {
              *piVar6 = 1;
              uVar5 = uVar5 & 0xffffffff;
              goto LAB_00100760;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != (long)iVar1);
        }
LAB_00100810:
        *piVar6 = 0;
      }
      else if (param_2 != 0) {
        if (param_1[4] == 0) {
          if (0 < iVar1) {
            if (param_3 == (int *)0x0) {
              uVar5 = 0;
              while (iVar1 = (*pcVar4)(&local_38,*(long *)(param_1 + 2) + uVar5 * 8), iVar1 != 0) {
                uVar5 = uVar5 + 1;
                if (*param_1 <= (int)uVar5) goto LAB_00100810;
                pcVar4 = *(code **)(param_1 + 6);
              }
              *piVar6 = *piVar6 + 1;
              goto LAB_00100760;
            }
            uVar3 = 0;
            uVar5 = 0xffffffff;
            while( true ) {
              iVar1 = (*pcVar4)(&local_38,*(long *)(param_1 + 2) + uVar3 * 8);
              if (iVar1 == 0) {
                if ((int)uVar5 == -1) {
                  uVar5 = uVar3 & 0xffffffff;
                }
                *piVar6 = *piVar6 + 1;
              }
              uVar3 = uVar3 + 1;
              if (*param_1 <= (int)uVar3) break;
              pcVar4 = *(code **)(param_1 + 6);
            }
            if ((int)uVar5 != -1) goto LAB_00100760;
          }
          goto LAB_00100810;
        }
        uVar5 = ossl_bsearch(&local_38,*(undefined8 *)(param_1 + 2),(long)iVar1,8,pcVar4,2);
        if (param_3 == (int *)0x0) {
          if (uVar5 != 0) {
LAB_001007fe:
            lVar2 = *(long *)(param_1 + 2);
            goto LAB_00100802;
          }
        }
        else {
          *piVar6 = 0;
          if (uVar5 != 0) {
            lVar2 = *(long *)(param_1 + 2);
            uVar3 = uVar5;
            if (uVar5 < (ulong)(lVar2 + (long)*param_1 * 8)) {
              do {
                iVar1 = (**(code **)(param_1 + 6))(&local_38,uVar3);
                if (iVar1 != 0) goto LAB_001007fe;
                *piVar6 = *piVar6 + 1;
                lVar2 = *(long *)(param_1 + 2);
                uVar3 = uVar3 + 8;
              } while (uVar3 < (ulong)(lVar2 + (long)*param_1 * 8));
            }
LAB_00100802:
            uVar5 = (long)(uVar5 - lVar2) >> 3;
            goto LAB_00100760;
          }
        }
      }
    }
  }
  uVar5 = 0xffffffff;
LAB_00100760:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 0xffffffff;
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
LAB_00100acf:
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
        goto LAB_00100acf;
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
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  
  piVar5 = (int *)CRYPTO_malloc(0x20,"crypto/stack/stack.c",0x59);
  if (piVar5 == (int *)0x0) {
LAB_00100c09:
    piVar9 = (int *)0x0;
    OPENSSL_sk_free(piVar5);
  }
  else {
    if (param_1 == (int *)0x0) {
      *piVar5 = 0;
      piVar5[4] = 0;
      piVar5[6] = 0;
      piVar5[7] = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 2);
      uVar3 = *(undefined8 *)(param_1 + 4);
      uVar4 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)piVar5 = *(undefined8 *)param_1;
      *(undefined8 *)(piVar5 + 2) = uVar2;
      *(undefined8 *)(piVar5 + 4) = uVar3;
      *(undefined8 *)(piVar5 + 6) = uVar4;
      iVar8 = *param_1;
      lVar6 = (long)iVar8;
      if (iVar8 != 0) {
        if (iVar8 < 4) {
          lVar6 = 4;
        }
        piVar5[5] = (int)lVar6;
        lVar6 = CRYPTO_zalloc(lVar6 * 8,"crypto/stack/stack.c",0x6d);
        *(long *)(piVar5 + 2) = lVar6;
        if (lVar6 != 0) {
          iVar8 = *piVar5;
          if (iVar8 < 1) {
            return piVar5;
          }
          lVar6 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + lVar6 * 8) != 0) {
              lVar1 = *(long *)(piVar5 + 2);
              lVar7 = (*param_2)();
              *(long *)(lVar6 * 8 + lVar1) = lVar7;
              if (lVar7 == 0) {
                iVar8 = (int)lVar6;
                if (iVar8 != 0) {
                  lVar6 = (long)(int)(iVar8 - 1U) << 3;
                  do {
                    if (*(long *)(*(long *)(piVar5 + 2) + lVar6) != 0) {
                      (*param_3)();
                    }
                    lVar6 = lVar6 + -8;
                  } while (((long)iVar8 - (ulong)(iVar8 - 1U)) * 8 + -0x10 != lVar6);
                }
                break;
              }
              iVar8 = *piVar5;
            }
            lVar6 = lVar6 + 1;
            if (iVar8 <= (int)lVar6) {
              return piVar5;
            }
          } while( true );
        }
        goto LAB_00100c09;
      }
    }
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5[5] = 0;
    piVar9 = piVar5;
  }
  return piVar9;
}



int * OPENSSL_sk_new_reserve(undefined8 param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  
  piVar1 = (int *)CRYPTO_zalloc(0x20,"crypto/stack/stack.c",0xe4);
  if (piVar1 != (int *)0x0) {
    *(undefined8 *)(piVar1 + 6) = param_1;
    if (param_2 < 1) {
      return piVar1;
    }
    if (0x7fffffff - *piVar1 < param_2) {
      ERR_new();
      ERR_set_debug("crypto/stack/stack.c",0xb8,"sk_reserve");
      ERR_set_error(0xf,0x72,0);
    }
    else {
      param_2 = param_2 + *piVar1;
      if (param_2 < 4) {
        param_2 = 4;
      }
      if (*(void **)(piVar1 + 2) == (void *)0x0) {
        lVar3 = CRYPTO_zalloc((long)param_2 << 3,"crypto/stack/stack.c",199);
        *(long *)(piVar1 + 2) = lVar3;
        if (lVar3 != 0) goto LAB_00100cc4;
      }
      else {
        if (param_2 == piVar1[5]) {
          return piVar1;
        }
        pvVar2 = CRYPTO_realloc(*(void **)(piVar1 + 2),(int)((long)param_2 << 3),
                                "crypto/stack/stack.c",0xd9);
        if (pvVar2 != (void *)0x0) {
          *(void **)(piVar1 + 2) = pvVar2;
LAB_00100cc4:
          piVar1[5] = param_2;
          return piVar1;
        }
      }
    }
    OPENSSL_sk_free(piVar1);
  }
  return (int *)0x0;
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
  int iVar1;
  long lVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  lVar2 = 0;
  if (0 < iVar1) {
    do {
      while (*(long *)(*(long *)(param_1 + 2) + lVar2 * 8) == 0) {
        lVar2 = lVar2 + 1;
        if (iVar1 <= (int)lVar2) goto LAB_00100d93;
      }
      (*param_2)();
      iVar1 = *param_1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < iVar1);
  }
LAB_00100d93:
  OPENSSL_sk_free(param_1);
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


