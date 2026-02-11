
/* hb_unicode_combining_class_nil(hb_unicode_funcs_t*, unsigned int, void*) */

undefined8 hb_unicode_combining_class_nil(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  return 0;
}



/* hb_unicode_eastasian_width_nil(hb_unicode_funcs_t*, unsigned int, void*) */

undefined8 hb_unicode_eastasian_width_nil(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  return 1;
}



/* hb_unicode_general_category_nil(hb_unicode_funcs_t*, unsigned int, void*) */

undefined8 hb_unicode_general_category_nil(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  return 7;
}



/* hb_unicode_mirroring_nil(hb_unicode_funcs_t*, unsigned int, void*) */

uint hb_unicode_mirroring_nil(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  return param_2;
}



/* hb_unicode_script_nil(hb_unicode_funcs_t*, unsigned int, void*) */

undefined8 hb_unicode_script_nil(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  return 0x5a7a7a7a;
}



/* hb_unicode_compose_nil(hb_unicode_funcs_t*, unsigned int, unsigned int, unsigned int*, void*) */

undefined8
hb_unicode_compose_nil
          (hb_unicode_funcs_t *param_1,uint param_2,uint param_3,uint *param_4,void *param_5)

{
  return 0;
}



/* hb_unicode_decompose_nil(hb_unicode_funcs_t*, unsigned int, unsigned int*, unsigned int*, void*)
    */

undefined8
hb_unicode_decompose_nil
          (hb_unicode_funcs_t *param_1,uint param_2,uint *param_3,uint *param_4,void *param_5)

{
  return 0;
}



/* hb_unicode_decompose_compatibility_nil(hb_unicode_funcs_t*, unsigned int, unsigned int*, void*)
    */

undefined8
hb_unicode_decompose_compatibility_nil
          (hb_unicode_funcs_t *param_1,uint param_2,uint *param_3,void *param_4)

{
  return 0;
}



void hb_unicode_funcs_get_default(void)

{
  hb_ucd_get_unicode_funcs();
  return;
}



undefined4 * hb_unicode_funcs_create(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  
  puVar15 = (undefined4 *)calloc(1,0xd8);
  if (puVar15 != (undefined4 *)0x0) {
    *puVar15 = 1;
    puVar15[1] = 1;
    *(undefined8 *)(puVar15 + 2) = 0;
    if ((int *)param_1 == (int *)0x0) {
      param_1 = _hb_Null_hb_unicode_funcs_t;
    }
    if (*(int *)((long)param_1 + 4) != 0) {
      *(int *)((long)param_1 + 4) = 0;
    }
    if (*(int *)param_1 != 0) {
      LOCK();
      *(int *)param_1 = *(int *)param_1 + 1;
      UNLOCK();
    }
    uVar1 = *(undefined8 *)((long)param_1 + 0x18);
    uVar2 = *(undefined8 *)((long)param_1 + 0x20);
    uVar3 = *(undefined8 *)((long)param_1 + 0x28);
    uVar4 = *(undefined8 *)((long)param_1 + 0x30);
    *(undefined1 **)(puVar15 + 4) = param_1;
    uVar5 = *(undefined8 *)((long)param_1 + 0x38);
    uVar6 = *(undefined8 *)((long)param_1 + 0x40);
    uVar7 = *(undefined8 *)((long)param_1 + 0x48);
    uVar8 = *(undefined8 *)((long)param_1 + 0x50);
    uVar9 = *(undefined8 *)((long)param_1 + 0x58);
    uVar10 = *(undefined8 *)((long)param_1 + 0x60);
    uVar11 = *(undefined8 *)((long)param_1 + 0x68);
    uVar12 = *(undefined8 *)((long)param_1 + 0x70);
    *(undefined8 *)(puVar15 + 6) = uVar1;
    *(undefined8 *)(puVar15 + 8) = uVar2;
    uVar1 = *(undefined8 *)((long)param_1 + 0x78);
    uVar2 = *(undefined8 *)((long)param_1 + 0x80);
    uVar13 = *(undefined8 *)((long)param_1 + 0x88);
    uVar14 = *(undefined8 *)((long)param_1 + 0x90);
    *(undefined8 *)(puVar15 + 10) = uVar3;
    *(undefined8 *)(puVar15 + 0xc) = uVar4;
    *(undefined8 *)(puVar15 + 0xe) = uVar5;
    *(undefined8 *)(puVar15 + 0x10) = uVar6;
    *(undefined8 *)(puVar15 + 0x12) = uVar7;
    *(undefined8 *)(puVar15 + 0x14) = uVar8;
    *(undefined8 *)(puVar15 + 0x16) = uVar9;
    *(undefined8 *)(puVar15 + 0x18) = uVar10;
    *(undefined8 *)(puVar15 + 0x1a) = uVar11;
    *(undefined8 *)(puVar15 + 0x1c) = uVar12;
    *(undefined8 *)(puVar15 + 0x1e) = uVar1;
    *(undefined8 *)(puVar15 + 0x20) = uVar2;
    *(undefined8 *)(puVar15 + 0x22) = uVar13;
    *(undefined8 *)(puVar15 + 0x24) = uVar14;
    return puVar15;
  }
  return (undefined4 *)_hb_Null_hb_unicode_funcs_t;
}



undefined1 * hb_unicode_funcs_get_empty(void)

{
  return _hb_Null_hb_unicode_funcs_t;
}



int * hb_unicode_funcs_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



void hb_unicode_funcs_destroy(int *param_1)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  code *pcVar3;
  undefined8 uVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      *param_1 = -0xdead;
      __mutex = *(pthread_mutex_t **)(param_1 + 2);
      if (__mutex != (pthread_mutex_t *)0x0) {
        if (*(int *)((long)__mutex + 0x2c) != 0) {
          do {
            pthread_mutex_lock(__mutex);
            iVar2 = *(int *)((long)__mutex + 0x2c);
            while( true ) {
              if (iVar2 == 0) {
                if (__mutex[1].__data.__lock != 0) {
                  free(*(void **)((long)__mutex + 0x30));
                }
                __mutex[1].__align = 0;
                *(undefined8 *)((long)__mutex + 0x30) = 0;
                pthread_mutex_unlock(__mutex);
                goto LAB_00100308;
              }
              lVar1 = *(long *)((long)__mutex + 0x30) + (ulong)(iVar2 - 1U) * 0x18;
              pcVar3 = *(code **)(lVar1 + 0x10);
              uVar4 = *(undefined8 *)(lVar1 + 8);
              *(uint *)((long)__mutex + 0x2c) = iVar2 - 1U;
              pthread_mutex_unlock(__mutex);
              if (pcVar3 == (code *)0x0) break;
              (*pcVar3)(uVar4);
              pthread_mutex_lock(__mutex);
              iVar2 = *(int *)((long)__mutex + 0x2c);
            }
          } while( true );
        }
        if (__mutex[1].__data.__lock != 0) {
          free(*(void **)((long)__mutex + 0x30));
        }
        __mutex[1].__align = 0;
        *(undefined8 *)((long)__mutex + 0x30) = 0;
LAB_00100308:
        pthread_mutex_destroy(__mutex);
        free(__mutex);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))(*(undefined8 *)(param_1 + 0x16));
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(code **)(param_1 + 0x2a) != (code *)0x0) {
        (**(code **)(param_1 + 0x2a))(*(undefined8 *)(param_1 + 0x1a));
      }
      if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
        (**(code **)(param_1 + 0x2c))(*(undefined8 *)(param_1 + 0x1c));
      }
      if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
        (**(code **)(param_1 + 0x2e))(*(undefined8 *)(param_1 + 0x1e));
      }
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x20));
      }
      if (*(code **)(param_1 + 0x32) != (code *)0x0) {
        (**(code **)(param_1 + 0x32))(*(undefined8 *)(param_1 + 0x22));
      }
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))(*(undefined8 *)(param_1 + 0x24));
      }
      hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 4));
      free(param_1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_unicode_funcs_set_user_data(int *param_1,long param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  pthread_mutex_t *__mutex;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return false;
  }
  plVar6 = (long *)(param_1 + 2);
  while (__mutex = (pthread_mutex_t *)*plVar6, __mutex == (pthread_mutex_t *)0x0) {
    __mutex = (pthread_mutex_t *)calloc(1,0x38);
    if (__mutex == (pthread_mutex_t *)0x0) {
      return false;
    }
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    __mutex[1].__align = 0;
    *(undefined8 *)((long)__mutex + 0x30) = 0;
    LOCK();
    lVar2 = *plVar6;
    if (lVar2 == 0) {
      *plVar6 = (long)__mutex;
    }
    UNLOCK();
    if (lVar2 == 0) break;
    if (*(int *)((long)__mutex + 0x2c) == 0) {
      if (__mutex[1].__data.__lock != 0) {
        free(*(void **)((long)__mutex + 0x30));
      }
      __mutex[1].__align = 0;
      *(undefined8 *)((long)__mutex + 0x30) = 0;
    }
    else {
      while( true ) {
        pthread_mutex_lock(__mutex);
        if (*(int *)((long)__mutex + 0x2c) == 0) break;
        uVar8 = *(int *)((long)__mutex + 0x2c) - 1;
        lVar2 = *(long *)((long)__mutex + 0x30) + (ulong)uVar8 * 0x18;
        uVar11 = *(undefined8 *)(lVar2 + 8);
        pcVar3 = *(code **)(lVar2 + 0x10);
        *(uint *)((long)__mutex + 0x2c) = uVar8;
        pthread_mutex_unlock(__mutex);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar11);
        }
      }
      if (__mutex[1].__data.__lock != 0) {
        free(*(void **)((long)__mutex + 0x30));
      }
      __mutex[1].__align = 0;
      *(undefined8 *)((long)__mutex + 0x30) = 0;
      pthread_mutex_unlock(__mutex);
    }
    pthread_mutex_destroy(__mutex);
    free(__mutex);
  }
  if (param_2 == 0) {
    return false;
  }
  if ((param_5 != 0) && (param_3 == 0 && param_4 == 0)) {
    pthread_mutex_lock(__mutex);
    uVar8 = *(uint *)((long)__mutex + 0x2c);
    plVar6 = *(long **)((long)__mutex + 0x30);
    if (uVar8 != 0) {
      uVar5 = 0;
      plVar10 = plVar6;
      do {
        if (param_2 == *plVar10) {
          plVar10 = plVar6 + (ulong)uVar5 * 3;
          if (plVar10 != (long *)0x0) {
            lVar2 = plVar10[1];
            pcVar3 = (code *)plVar10[2];
            plVar6 = plVar6 + (ulong)(uVar8 - 1) * 3;
            lVar4 = plVar6[1];
            *plVar10 = *plVar6;
            plVar10[1] = lVar4;
            plVar10[2] = plVar6[2];
            *(uint *)((long)__mutex + 0x2c) = uVar8 - 1;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 == (code *)0x0) {
              return true;
            }
            (*pcVar3)(lVar2);
            return true;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        plVar10 = plVar10 + 3;
      } while (uVar8 != uVar5);
    }
    pthread_mutex_unlock(__mutex);
    return true;
  }
  pthread_mutex_lock(__mutex);
  uVar8 = *(uint *)((long)__mutex + 0x2c);
  uVar7 = (ulong)uVar8;
  plVar6 = *(long **)((long)__mutex + 0x30);
  if (uVar8 == 0) {
    uVar5 = 1;
    if (__mutex[1].__data.__lock < 1) {
      if (__mutex[1].__data.__lock != 0) goto LAB_00100698;
      uVar9 = 8;
LAB_0010062c:
      plVar6 = (long *)realloc(plVar6,uVar9 * 0x18);
      if (plVar6 == (long *)0x0) {
        if ((uint)__mutex[1].__data.__lock < (uint)uVar9) {
          __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
          goto LAB_00100698;
        }
        uVar7 = (ulong)*(uint *)((long)__mutex + 0x2c);
        plVar6 = *(long **)((long)__mutex + 0x30);
        uVar5 = *(uint *)((long)__mutex + 0x2c) + 1;
      }
      else {
        uVar5 = *(uint *)((long)__mutex + 0x2c);
        uVar7 = (ulong)uVar5;
        *(long **)((long)__mutex + 0x30) = plVar6;
        __mutex[1].__data.__lock = (uint)uVar9;
        uVar5 = uVar5 + 1;
      }
    }
  }
  else {
    uVar5 = 0;
    plVar10 = plVar6;
    do {
      if (param_2 == *plVar10) {
        plVar10 = plVar6 + (ulong)uVar5 * 3;
        if (plVar10 != (long *)0x0) {
          if (param_5 == 0) {
            plVar10 = (long *)0x0;
            pthread_mutex_unlock(__mutex);
          }
          else {
            lVar2 = plVar10[1];
            pcVar3 = (code *)plVar10[2];
            *plVar10 = param_2;
            plVar10[1] = param_3;
            plVar10[2] = param_4;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(lVar2);
            }
          }
          goto LAB_00100445;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      plVar10 = plVar10 + 3;
    } while (uVar8 != uVar5);
    uVar1 = __mutex[1].__data.__lock;
    uVar5 = uVar8 + 1;
    if ((int)uVar1 <= (int)uVar8) {
      if (-1 < (int)uVar1) {
        uVar9 = (ulong)uVar1;
        if (uVar5 <= uVar1) goto LAB_001005f3;
        do {
          uVar8 = (int)(uVar9 >> 1) + 8 + (int)uVar9;
          uVar9 = (ulong)uVar8;
        } while (uVar8 < uVar5);
        if (uVar8 < 0xaaaaaab) goto LAB_0010062c;
        __mutex[1].__data.__lock = ~uVar1;
      }
LAB_00100698:
      uVar11 = __hb_CrapPool;
      _DAT_00102058 = _DAT_00102050;
      plVar10 = (long *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _DAT_00102050 = uVar11;
      goto LAB_0010060a;
    }
  }
LAB_001005f3:
  *(uint *)((long)__mutex + 0x2c) = uVar5;
  plVar10 = plVar6 + uVar7 * 3;
  *plVar10 = param_2;
  plVar10[1] = param_3;
  plVar10[2] = param_4;
LAB_0010060a:
  pthread_mutex_unlock(__mutex);
LAB_00100445:
  return -1 < __mutex[1].__data.__lock && plVar10 != (long *)0x0;
}



long hb_unicode_funcs_get_user_data(int *param_1,long param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  long *plVar3;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (__mutex = *(pthread_mutex_t **)(param_1 + 2), __mutex != (pthread_mutex_t *)0x0)) {
    pthread_mutex_lock(__mutex);
    if (*(uint *)((long)__mutex + 0x2c) != 0) {
      uVar2 = 0;
      plVar3 = *(long **)((long)__mutex + 0x30);
      do {
        if (param_2 == *plVar3) {
          plVar3 = *(long **)((long)__mutex + 0x30) + (ulong)uVar2 * 3;
          if (plVar3 != (long *)0x0) {
            lVar1 = plVar3[1];
            pthread_mutex_unlock(__mutex);
            return lVar1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 3;
      } while (*(uint *)((long)__mutex + 0x2c) != uVar2);
    }
    pthread_mutex_unlock(__mutex);
  }
  return 0;
}



void hb_unicode_funcs_make_immutable(long param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



bool hb_unicode_funcs_is_immutable(long param_1)

{
  return *(int *)(param_1 + 4) == 0;
}



undefined1 * hb_unicode_funcs_get_parent(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = _hb_Null_hb_unicode_funcs_t;
  }
  return puVar1;
}



void hb_unicode_funcs_set_combining_class_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001008c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      lVar1 = *(long *)(param_1 + 0x10);
      param_3 = *(undefined8 *)(lVar1 + 0x58);
      if (*(code **)(param_1 + 0x98) != (code *)0x0) {
        (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0x58));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      param_2 = *(long *)(lVar1 + 0x18);
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    else if (*(code **)(param_1 + 0x98) != (code *)0x0) {
      (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0x58));
    }
    *(long *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x58) = param_3;
    *(code **)(param_1 + 0x98) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



void hb_unicode_funcs_set_eastasian_width_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      lVar1 = *(long *)(param_1 + 0x10);
      param_3 = *(undefined8 *)(lVar1 + 0x60);
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x60));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      param_2 = *(long *)(lVar1 + 0x20);
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    else if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x60));
    }
    *(long *)(param_1 + 0x20) = param_2;
    *(undefined8 *)(param_1 + 0x60) = param_3;
    *(code **)(param_1 + 0xa0) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



void hb_unicode_funcs_set_general_category_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      lVar1 = *(long *)(param_1 + 0x10);
      param_3 = *(undefined8 *)(lVar1 + 0x68);
      if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
        (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0x68));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      param_2 = *(long *)(lVar1 + 0x28);
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    else if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
      (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0x68));
    }
    *(long *)(param_1 + 0x28) = param_2;
    *(undefined8 *)(param_1 + 0x68) = param_3;
    *(code **)(param_1 + 0xa8) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



void hb_unicode_funcs_set_mirroring_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      lVar1 = *(long *)(param_1 + 0x10);
      param_3 = *(undefined8 *)(lVar1 + 0x70);
      if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
        (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 0x70));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      param_2 = *(long *)(lVar1 + 0x30);
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    else if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
      (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 0x70));
    }
    *(long *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x70) = param_3;
    *(code **)(param_1 + 0xb0) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



void hb_unicode_funcs_set_script_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      lVar1 = *(long *)(param_1 + 0x10);
      param_3 = *(undefined8 *)(lVar1 + 0x78);
      if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
        (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0x78));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      param_2 = *(long *)(lVar1 + 0x38);
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    else if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
      (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0x78));
    }
    *(long *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x78) = param_3;
    *(code **)(param_1 + 0xb8) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



void hb_unicode_funcs_set_compose_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      lVar1 = *(long *)(param_1 + 0x10);
      param_3 = *(undefined8 *)(lVar1 + 0x80);
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
        (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 0x80));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      param_2 = *(long *)(lVar1 + 0x40);
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    else if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
      (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 0x80));
    }
    *(long *)(param_1 + 0x40) = param_2;
    *(undefined8 *)(param_1 + 0x80) = param_3;
    *(code **)(param_1 + 0xc0) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



void hb_unicode_funcs_set_decompose_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      lVar1 = *(long *)(param_1 + 0x10);
      param_3 = *(undefined8 *)(lVar1 + 0x88);
      if (*(code **)(param_1 + 200) != (code *)0x0) {
        (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 0x88));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      param_2 = *(long *)(lVar1 + 0x48);
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    else if (*(code **)(param_1 + 200) != (code *)0x0) {
      (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 0x88));
    }
    *(long *)(param_1 + 0x48) = param_2;
    *(undefined8 *)(param_1 + 0x88) = param_3;
    *(code **)(param_1 + 200) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



void hb_unicode_funcs_set_decompose_compatibility_func
               (long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_3);
      }
      lVar1 = *(long *)(param_1 + 0x10);
      param_3 = *(undefined8 *)(lVar1 + 0x90);
      if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
        (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 0x90));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      param_2 = *(long *)(lVar1 + 0x50);
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    else if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
      (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 0x90));
    }
    *(long *)(param_1 + 0x50) = param_2;
    *(undefined8 *)(param_1 + 0x90) = param_3;
    *(code **)(param_1 + 0xd0) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



void hb_unicode_combining_class(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00100dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_1,param_2,*(undefined8 *)(param_1 + 0x58));
  return;
}



void hb_unicode_eastasian_width(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00100de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(param_1,param_2,*(undefined8 *)(param_1 + 0x60));
  return;
}



void hb_unicode_general_category(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00100df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(param_1,param_2,*(undefined8 *)(param_1 + 0x68));
  return;
}



void hb_unicode_mirroring(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00100e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1,param_2,*(undefined8 *)(param_1 + 0x70));
  return;
}



void hb_unicode_script(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00100e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,*(undefined8 *)(param_1 + 0x78));
  return;
}



undefined8 hb_unicode_compose(long param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100e3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))();
    return uVar1;
  }
  return 0;
}



void hb_unicode_decompose(long param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  *param_3 = param_2;
  *param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00100e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



ulong hb_unicode_decompose_compatibility(long param_1,int param_2,int *param_3)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x50))();
  if (((int)uVar1 == 1) && (param_2 == *param_3)) {
    *param_3 = 0;
    uVar1 = 0;
  }
  else {
    param_3[uVar1 & 0xffffffff] = 0;
  }
  return uVar1;
}


