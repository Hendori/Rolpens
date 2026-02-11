
/* hb_draw_move_to_nil(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */

void hb_draw_move_to_nil(hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,
                        float param_4,float param_5,void *param_6)

{
  return;
}



/* hb_draw_quadratic_to_nil(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float, float,
   void*) */

void hb_draw_quadratic_to_nil
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,float param_6,float param_7,void *param_8)

{
                    /* WARNING: Could not recover jumptable at 0x00100063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))
            ((param_4 + param_4 + *(float *)(param_3 + 0xc)) * _LC0,
             (param_5 + param_5 + *(float *)(param_3 + 0x10)) * _LC0,
             (param_4 + param_4 + param_6) * _LC0,(param_5 + param_5 + param_7) * _LC0);
  return;
}



/* hb_draw_cubic_to_nil(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float, float,
   float, float, void*) */

void hb_draw_cubic_to_nil
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,float param_6,float param_7,float param_8,float param_9,void *param_10)

{
  return;
}



/* hb_draw_close_path_nil(hb_draw_funcs_t*, void*, hb_draw_state_t*, void*) */

void hb_draw_close_path_nil
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,void *param_4)

{
  return;
}



/* hb_draw_line_to_nil(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */

void hb_draw_line_to_nil(hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,
                        float param_4,float param_5,void *param_6)

{
  return;
}



void hb_draw_funcs_set_move_to_func
               (hb_draw_funcs_t *param_1,long param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long *plVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_draw_funcs_set_preamble
                    (param_1,param_2 == 0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) &&
       (pcVar1 = (code *)**(undefined8 **)(param_1 + 0x40), pcVar1 != (code *)0x0)) {
      plVar5 = *(long **)(param_1 + 0x38);
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)*plVar5;
      }
      (*pcVar1)(plVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_draw_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == 0) {
        param_2 = 0x100000;
      }
      *(long *)(param_1 + 0x10) = param_2;
      if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x38) = pvVar3;
      }
      if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x40) = p_Var2;
      }
    }
  }
  return;
}



void hb_draw_funcs_set_line_to_func
               (hb_draw_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_draw_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x40) + 8), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 8);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_draw_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_draw_line_to_nil;
      }
      *(code **)(param_1 + 0x18) = param_2;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(void **)(*(long *)(param_1 + 0x38) + 8) = pvVar3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x40) + 8) = p_Var2;
      }
    }
  }
  return;
}



void hb_draw_funcs_set_quadratic_to_func
               (hb_draw_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_draw_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x40) + 0x10), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x10);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_draw_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_draw_quadratic_to_nil;
      }
      *(code **)(param_1 + 0x20) = param_2;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(void **)(*(long *)(param_1 + 0x38) + 0x10) = pvVar3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x40) + 0x10) = p_Var2;
      }
    }
  }
  return;
}



void hb_draw_funcs_set_cubic_to_func
               (hb_draw_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_draw_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x40) + 0x18), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x18);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_draw_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_draw_cubic_to_nil;
      }
      *(code **)(param_1 + 0x28) = param_2;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(void **)(*(long *)(param_1 + 0x38) + 0x18) = pvVar3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x40) + 0x18) = p_Var2;
      }
    }
  }
  return;
}



void hb_draw_funcs_set_close_path_func
               (hb_draw_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_draw_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x40) + 0x20), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x20);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_draw_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_draw_close_path_nil;
      }
      *(code **)(param_1 + 0x30) = param_2;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(void **)(*(long *)(param_1 + 0x38) + 0x20) = pvVar3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x40) + 0x20) = p_Var2;
      }
    }
  }
  return;
}



undefined4 * hb_draw_funcs_create(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)calloc(1,0x48);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 1;
    puVar5[1] = 1;
    *(undefined8 *)(puVar5 + 2) = 0;
    uVar4 = _hb_Null_hb_draw_funcs_t._48_8_;
    uVar3 = _hb_Null_hb_draw_funcs_t._40_8_;
    uVar2 = _hb_Null_hb_draw_funcs_t._32_8_;
    uVar1 = _hb_Null_hb_draw_funcs_t._24_8_;
    *(undefined8 *)(puVar5 + 4) = _hb_Null_hb_draw_funcs_t._16_8_;
    *(undefined8 *)(puVar5 + 6) = uVar1;
    *(undefined8 *)(puVar5 + 0xc) = uVar4;
    *(undefined8 *)(puVar5 + 8) = uVar2;
    *(undefined8 *)(puVar5 + 10) = uVar3;
    return puVar5;
  }
  return (undefined4 *)_hb_Null_hb_draw_funcs_t;
}



undefined1 * hb_draw_funcs_get_empty(void)

{
  return _hb_Null_hb_draw_funcs_t;
}



int * hb_draw_funcs_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



void hb_draw_funcs_destroy(int *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *__ptr;
  
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
            iVar1 = *(int *)((long)__mutex + 0x2c);
            while( true ) {
              if (iVar1 == 0) {
                if (__mutex[1].__data.__lock != 0) {
                  free(*(void **)((long)__mutex + 0x30));
                }
                __mutex[1].__align = 0;
                *(undefined8 *)((long)__mutex + 0x30) = 0;
                pthread_mutex_unlock(__mutex);
                goto LAB_00100710;
              }
              lVar5 = *(long *)((long)__mutex + 0x30) + (ulong)(iVar1 - 1U) * 0x18;
              pcVar2 = *(code **)(lVar5 + 0x10);
              uVar3 = *(undefined8 *)(lVar5 + 8);
              *(uint *)((long)__mutex + 0x2c) = iVar1 - 1U;
              pthread_mutex_unlock(__mutex);
              if (pcVar2 == (code *)0x0) break;
              (*pcVar2)(uVar3);
              pthread_mutex_lock(__mutex);
              iVar1 = *(int *)((long)__mutex + 0x2c);
            }
          } while( true );
        }
        if (__mutex[1].__data.__lock != 0) {
          free(*(void **)((long)__mutex + 0x30));
        }
        __mutex[1].__align = 0;
        *(undefined8 *)((long)__mutex + 0x30) = 0;
LAB_00100710:
        pthread_mutex_destroy(__mutex);
        free(__mutex);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      __ptr = *(undefined8 **)(param_1 + 0x10);
      if (__ptr != (undefined8 *)0x0) {
        if ((code *)*__ptr != (code *)0x0) {
          plVar4 = *(long **)(param_1 + 0xe);
          if (plVar4 != (long *)0x0) {
            plVar4 = (long *)*plVar4;
          }
          (*(code *)*__ptr)(plVar4);
          __ptr = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)__ptr[1] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0xe);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 8);
          }
          (*(code *)__ptr[1])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)__ptr[2] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0xe);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x10);
          }
          (*(code *)__ptr[2])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)__ptr[3] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0xe);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x18);
          }
          (*(code *)__ptr[3])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)__ptr[4] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0xe);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x20);
          }
          (*(code *)__ptr[4])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x10);
        }
      }
      free(__ptr);
      free(*(void **)(param_1 + 0xe));
      free(param_1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_draw_funcs_set_user_data(int *param_1,long param_2,long param_3,long param_4,int param_5)

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
      if (__mutex[1].__data.__lock != 0) goto LAB_00100a98;
      uVar9 = 8;
LAB_00100a2c:
      plVar6 = (long *)realloc(plVar6,uVar9 * 0x18);
      if (plVar6 == (long *)0x0) {
        if ((uint)__mutex[1].__data.__lock < (uint)uVar9) {
          __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
          goto LAB_00100a98;
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
          goto LAB_00100845;
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
        if (uVar5 <= uVar1) goto LAB_001009f3;
        do {
          uVar8 = (int)(uVar9 >> 1) + 8 + (int)uVar9;
          uVar9 = (ulong)uVar8;
        } while (uVar8 < uVar5);
        if (uVar8 < 0xaaaaaab) goto LAB_00100a2c;
        __mutex[1].__data.__lock = ~uVar1;
      }
LAB_00100a98:
      uVar11 = __hb_CrapPool;
      _DAT_00102050 = _DAT_00102048;
      plVar10 = (long *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _DAT_00102048 = uVar11;
      goto LAB_00100a0a;
    }
  }
LAB_001009f3:
  *(uint *)((long)__mutex + 0x2c) = uVar5;
  plVar10 = plVar6 + uVar7 * 3;
  *plVar10 = param_2;
  plVar10[1] = param_3;
  plVar10[2] = param_4;
LAB_00100a0a:
  pthread_mutex_unlock(__mutex);
LAB_00100845:
  return -1 < __mutex[1].__data.__lock && plVar10 != (long *)0x0;
}



long hb_draw_funcs_get_user_data(int *param_1,long param_2)

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



void hb_draw_funcs_make_immutable(long param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



bool hb_draw_funcs_is_immutable(long param_1)

{
  return *(int *)(param_1 + 4) == 0;
}



void hb_draw_move_to(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                    int *param_5)

{
  long lVar1;
  
  if (*param_5 != 0) {
    if (((float)param_5[1] != (float)param_5[3]) || ((float)param_5[2] != (float)param_5[4])) {
      (**(code **)(param_3 + 0x18))();
    }
    lVar1 = *(long *)(param_3 + 0x38);
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    (**(code **)(param_3 + 0x30))(param_3,param_4,param_5,lVar1);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    *(ulong *)(param_5 + 3) = CONCAT44(param_2,param_1);
    return;
  }
  *(ulong *)(param_5 + 3) = CONCAT44(param_2,param_1);
  return;
}



void hb_draw_line_to(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                    int *param_5)

{
  long lVar1;
  long *plVar2;
  
  if (*param_5 == 0) {
    plVar2 = *(long **)(param_3 + 0x38);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
    }
    (**(code **)(param_3 + 0x10))(param_5[3],param_5[4],param_3,param_4,param_5,plVar2);
    *param_5 = 1;
    *(undefined8 *)(param_5 + 1) = *(undefined8 *)(param_5 + 3);
  }
  lVar1 = *(long *)(param_3 + 0x38);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  (**(code **)(param_3 + 0x18))(param_1,param_2,param_3,param_4,param_5,lVar1);
  *(ulong *)(param_5 + 3) = CONCAT44(param_2,param_1);
  return;
}



void hb_draw_quadratic_to
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,int *param_7)

{
  long lVar1;
  long *plVar2;
  
  if (*param_7 == 0) {
    plVar2 = *(long **)(param_5 + 0x38);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
    }
    (**(code **)(param_5 + 0x10))(param_7[3],param_7[4],param_5,param_6,param_7,plVar2);
    *param_7 = 1;
    *(undefined8 *)(param_7 + 1) = *(undefined8 *)(param_7 + 3);
  }
  lVar1 = *(long *)(param_5 + 0x38);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  (**(code **)(param_5 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar1);
  *(ulong *)(param_7 + 3) = CONCAT44(param_4,param_3);
  return;
}



void hb_draw_cubic_to(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                     int *param_9)

{
  long lVar1;
  long *plVar2;
  
  if (*param_9 == 0) {
    plVar2 = *(long **)(param_7 + 0x38);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
    }
    (**(code **)(param_7 + 0x10))(param_9[3],param_9[4],param_7,param_8,param_9,plVar2);
    *param_9 = 1;
    *(undefined8 *)(param_9 + 1) = *(undefined8 *)(param_9 + 3);
  }
  lVar1 = *(long *)(param_7 + 0x38);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
  }
  (**(code **)(param_7 + 0x28))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,lVar1);
  *(ulong *)(param_9 + 3) = CONCAT44(param_6,param_5);
  return;
}



void hb_draw_close_path(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  
  if (*param_3 != 0) {
    if (((float)param_3[1] != (float)param_3[3]) || ((float)param_3[2] != (float)param_3[4])) {
      lVar1 = *(long *)(param_1 + 0x38);
      if (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 8);
      }
      (**(code **)(param_1 + 0x18))(param_1,param_2,param_3,lVar1);
    }
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    (**(code **)(param_1 + 0x30))(param_1,param_2,param_3,lVar1);
  }
  *param_3 = 0;
  *(undefined1 (*) [16])(param_3 + 1) = (undefined1  [16])0x0;
  return;
}


