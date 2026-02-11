
undefined * hb_blob_get_empty(void)

{
  return &_hb_NullPool;
}



int * hb_blob_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



void hb_blob_destroy(int *param_1)

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
                goto LAB_00100118;
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
LAB_00100118:
        pthread_mutex_destroy(__mutex);
        free(__mutex);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if (*(code **)(param_1 + 10) != (code *)0x0) {
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      }
      free(param_1);
      return;
    }
  }
  return;
}



undefined4 * hb_blob_create_sub_blob(int *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined4 *)&_hb_NullPool;
    if ((param_1 != (int *)0x0) &&
       (puVar3 = (undefined4 *)&_hb_NullPool, param_2 < (uint)param_1[6])) {
      if (param_1[1] != 0) {
        param_1[1] = 0;
      }
      if (*param_1 != 0) {
        LOCK();
        *param_1 = *param_1 + 1;
        UNLOCK();
      }
      lVar1 = *(long *)(param_1 + 4);
      uVar2 = param_1[6] - param_2;
      if ((((uVar2 < param_3) && (param_3 = uVar2, uVar2 == 0)) || ((int)param_3 < 0)) ||
         (puVar3 = (undefined4 *)calloc(1,0x30), puVar3 == (undefined4 *)0x0)) {
        hb_blob_destroy(param_1);
        puVar3 = (undefined4 *)&_hb_NullPool;
      }
      else {
        *puVar3 = 1;
        puVar3[1] = 1;
        *(undefined8 *)(puVar3 + 2) = 0;
        *(ulong *)(puVar3 + 4) = lVar1 + (ulong)param_2;
        puVar3[7] = 1;
        puVar3[6] = param_3;
        *(int **)(puVar3 + 8) = param_1;
        *(code **)(puVar3 + 10) = _hb_blob_destroy;
      }
    }
    return puVar3;
  }
  return (undefined4 *)&_hb_NullPool;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_blob_set_user_data(int *param_1,long param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  pthread_mutex_t *__mutex;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return false;
  }
  plVar7 = (long *)(param_1 + 2);
  while (__mutex = (pthread_mutex_t *)*plVar7, __mutex == (pthread_mutex_t *)0x0) {
    __mutex = (pthread_mutex_t *)calloc(1,0x38);
    if (__mutex == (pthread_mutex_t *)0x0) {
      return false;
    }
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    __mutex[1].__align = 0;
    *(undefined8 *)((long)__mutex + 0x30) = 0;
    LOCK();
    lVar2 = *plVar7;
    if (lVar2 == 0) {
      *plVar7 = (long)__mutex;
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
        uVar9 = *(int *)((long)__mutex + 0x2c) - 1;
        lVar2 = *(long *)((long)__mutex + 0x30) + (ulong)uVar9 * 0x18;
        uVar4 = *(undefined8 *)(lVar2 + 8);
        pcVar3 = *(code **)(lVar2 + 0x10);
        *(uint *)((long)__mutex + 0x2c) = uVar9;
        pthread_mutex_unlock(__mutex);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar4);
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
    uVar9 = *(uint *)((long)__mutex + 0x2c);
    plVar7 = *(long **)((long)__mutex + 0x30);
    if (uVar9 != 0) {
      uVar6 = 0;
      plVar11 = plVar7;
      do {
        if (param_2 == *plVar11) {
          plVar11 = plVar7 + (ulong)uVar6 * 3;
          if (plVar11 != (long *)0x0) {
            lVar2 = plVar11[1];
            pcVar3 = (code *)plVar11[2];
            plVar7 = plVar7 + (ulong)(uVar9 - 1) * 3;
            lVar5 = plVar7[1];
            *plVar11 = *plVar7;
            plVar11[1] = lVar5;
            plVar11[2] = plVar7[2];
            *(uint *)((long)__mutex + 0x2c) = uVar9 - 1;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 == (code *)0x0) {
              return true;
            }
            (*pcVar3)(lVar2);
            return true;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        plVar11 = plVar11 + 3;
      } while (uVar9 != uVar6);
    }
    pthread_mutex_unlock(__mutex);
    return true;
  }
  pthread_mutex_lock(__mutex);
  uVar9 = *(uint *)((long)__mutex + 0x2c);
  uVar8 = (ulong)uVar9;
  plVar7 = *(long **)((long)__mutex + 0x30);
  if (uVar9 == 0) {
    uVar6 = 1;
    if (__mutex[1].__data.__lock < 1) {
      if (__mutex[1].__data.__lock != 0) goto LAB_001005a8;
      uVar10 = 8;
LAB_0010053c:
      plVar7 = (long *)realloc(plVar7,uVar10 * 0x18);
      if (plVar7 == (long *)0x0) {
        if ((uint)__mutex[1].__data.__lock < (uint)uVar10) {
          __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
          goto LAB_001005a8;
        }
        uVar8 = (ulong)*(uint *)((long)__mutex + 0x2c);
        plVar7 = *(long **)((long)__mutex + 0x30);
        uVar6 = *(uint *)((long)__mutex + 0x2c) + 1;
      }
      else {
        uVar6 = *(uint *)((long)__mutex + 0x2c);
        uVar8 = (ulong)uVar6;
        *(long **)((long)__mutex + 0x30) = plVar7;
        __mutex[1].__data.__lock = (uint)uVar10;
        uVar6 = uVar6 + 1;
      }
    }
  }
  else {
    uVar6 = 0;
    plVar11 = plVar7;
    do {
      if (param_2 == *plVar11) {
        plVar11 = plVar7 + (ulong)uVar6 * 3;
        if (plVar11 != (long *)0x0) {
          if (param_5 == 0) {
            plVar11 = (long *)0x0;
            pthread_mutex_unlock(__mutex);
          }
          else {
            lVar2 = plVar11[1];
            pcVar3 = (code *)plVar11[2];
            *plVar11 = param_2;
            plVar11[1] = param_3;
            plVar11[2] = param_4;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(lVar2);
            }
          }
          goto LAB_00100355;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      plVar11 = plVar11 + 3;
    } while (uVar9 != uVar6);
    uVar1 = __mutex[1].__data.__lock;
    uVar6 = uVar9 + 1;
    if ((int)uVar1 <= (int)uVar9) {
      if (-1 < (int)uVar1) {
        uVar10 = (ulong)uVar1;
        if (uVar6 <= uVar1) goto LAB_00100503;
        do {
          uVar9 = (int)(uVar10 >> 1) + 8 + (int)uVar10;
          uVar10 = (ulong)uVar9;
        } while (uVar9 < uVar6);
        if (uVar9 < 0xaaaaaab) goto LAB_0010053c;
        __mutex[1].__data.__lock = ~uVar1;
      }
LAB_001005a8:
      __hb_CrapPool = __hb_NullPool;
      _malloc = _free;
      ___memcpy_chk = _pthread_mutex_lock;
      plVar11 = (long *)&_hb_CrapPool;
      goto LAB_0010051a;
    }
  }
LAB_00100503:
  *(uint *)((long)__mutex + 0x2c) = uVar6;
  plVar11 = plVar7 + uVar8 * 3;
  *plVar11 = param_2;
  plVar11[1] = param_3;
  plVar11[2] = param_4;
LAB_0010051a:
  pthread_mutex_unlock(__mutex);
LAB_00100355:
  return -1 < __mutex[1].__data.__lock && plVar11 != (long *)0x0;
}



long hb_blob_get_user_data(int *param_1,long param_2)

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



void hb_blob_make_immutable(long param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



bool hb_blob_is_immutable(long param_1)

{
  return *(int *)(param_1 + 4) == 0;
}



undefined4 hb_blob_get_length(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



undefined8 hb_blob_get_data(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  return *(undefined8 *)(param_1 + 0x10);
}



/* hb_blob_t::try_make_writable_inplace_unix() */

undefined8 hb_blob_t::try_make_writable_inplace_unix(void)

{
  return 0;
}



/* hb_blob_t::try_make_writable_inplace() */

undefined8 __thiscall hb_blob_t::try_make_writable_inplace(hb_blob_t *this)

{
  *(undefined4 *)(this + 0x1c) = 1;
  return 0;
}



/* hb_blob_t::try_make_writable() */

undefined8 __thiscall hb_blob_t::try_make_writable(hb_blob_t *this)

{
  void *pvVar1;
  ulong __size;
  
  if (*(uint *)(this + 0x18) == 0) {
    *(undefined4 *)(this + 0x1c) = 2;
  }
  else if (*(int *)(this + 0x1c) != 2) {
    if (*(int *)(this + 0x1c) == 3) {
      *(undefined4 *)(this + 0x1c) = 1;
    }
    __size = (ulong)*(uint *)(this + 0x18);
    pvVar1 = malloc(__size);
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    __memcpy_chk(pvVar1,*(undefined8 *)(this + 0x10),__size,__size);
    if (*(code **)(this + 0x28) != (code *)0x0) {
      (**(code **)(this + 0x28))(*(undefined8 *)(this + 0x20));
    }
    *(undefined4 *)(this + 0x1c) = 2;
    *(void **)(this + 0x10) = pvVar1;
    *(void **)(this + 0x20) = pvVar1;
    *(code **)(this + 0x28) = free;
  }
  return 1;
}



undefined8 hb_blob_get_data_writable(hb_blob_t *param_1,undefined4 *param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    cVar1 = hb_blob_t::try_make_writable(param_1);
    if (cVar1 != '\0') {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(param_1 + 0x18);
      }
      return *(undefined8 *)(param_1 + 0x10);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}



hb_blob_t *
hb_blob_create_or_fail(undefined8 param_1,int param_2,int param_3,undefined8 param_4,code *param_5)

{
  char cVar1;
  hb_blob_t *this;
  
  if ((param_2 < 0) || (this = (hb_blob_t *)calloc(1,0x30), this == (hb_blob_t *)0x0)) {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_4);
      return (hb_blob_t *)0x0;
    }
  }
  else {
    *(undefined4 *)this = 1;
    *(undefined4 *)(this + 4) = 1;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = param_1;
    *(int *)(this + 0x18) = param_2;
    *(int *)(this + 0x1c) = param_3;
    *(undefined8 *)(this + 0x20) = param_4;
    *(code **)(this + 0x28) = param_5;
    if (param_3 != 0) {
      return this;
    }
    *(undefined4 *)(this + 0x1c) = 1;
    cVar1 = hb_blob_t::try_make_writable(this);
    if (cVar1 != '\0') {
      return this;
    }
    hb_blob_destroy(this);
  }
  return (hb_blob_t *)0x0;
}



undefined *
hb_blob_create(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_4);
    }
  }
  else {
    puVar1 = (undefined *)hb_blob_create_or_fail();
    if (puVar1 != (undefined *)0x0) {
      return puVar1;
    }
  }
  return &_hb_NullPool;
}



undefined * hb_blob_copy_writable_or_fail(long param_1)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return (undefined *)0x0;
  }
  puVar1 = (undefined *)
           hb_blob_create_or_fail(*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x18),0,0,0);
  if ((puVar1 == (undefined *)0x0) || (puVar1 == &_hb_NullPool)) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



undefined8 hb_blob_create_from_file_or_fail(char *param_1)

{
  int iVar1;
  void *pvVar2;
  FILE *__stream;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __size;
  ulong uVar7;
  void *__ptr;
  
  pvVar2 = malloc(0x20000);
  if (pvVar2 != (void *)0x0) {
    __stream = fopen64(param_1,"rb");
    __ptr = pvVar2;
    if (__stream != (FILE *)0x0) {
      __size = 0x20000;
      uVar6 = 0;
LAB_00100a37:
      iVar1 = feof(__stream);
      __ptr = pvVar2;
      do {
        if (iVar1 != 0) {
          fclose(__stream);
          uVar4 = hb_blob_create_or_fail(__ptr,uVar6 & 0xffffffff,2,__ptr,free);
          return uVar4;
        }
        uVar5 = __size - uVar6;
        pvVar2 = __ptr;
        if (uVar5 < 0x2000) {
          __size = __size * 2;
          if ((__size < 0x20000001) && (pvVar2 = realloc(__ptr,__size), pvVar2 != (void *)0x0)) {
            uVar5 = __size - uVar6;
            goto LAB_00100a7b;
          }
LAB_00100af0:
          fclose(__stream);
          break;
        }
LAB_00100a7b:
        uVar7 = __size;
        if (__size <= uVar6) {
          uVar7 = uVar6;
        }
        lVar3 = __fread_chk((long)pvVar2 + uVar6,uVar7 - uVar6,1,uVar5,__stream);
        iVar1 = ferror(__stream);
        if (iVar1 == 4) goto LAB_00100a37;
        __ptr = pvVar2;
        if (iVar1 != 0) goto LAB_00100af0;
        uVar6 = uVar6 + lVar3;
        iVar1 = feof(__stream);
      } while( true );
    }
    free(__ptr);
  }
  return 0;
}



undefined * hb_blob_create_from_file(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)hb_blob_create_from_file_or_fail();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &_hb_NullPool;
  }
  return puVar1;
}


