
/* hb_vector_size_t<unsigned long long, 64u> hb_bit_set_t::op_<._anon_134>(hb_vector_size_t<unsigned
   long long, 64u> const&, hb_vector_size_t<unsigned long long, 64u> const&) */

void __thiscall
hb_bit_set_t::op_<__anon_134>
          (hb_bit_set_t *this,hb_vector_size_t_conflict *param_1,hb_vector_size_t_conflict *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  do {
    uVar1 = *(ulong *)(param_1 + lVar3 + 8);
    uVar2 = *(ulong *)(param_2 + lVar3 + 8);
    lVar4 = lVar3 + 0x10;
    *(ulong *)(this + lVar3) = *(ulong *)(param_1 + lVar3) | *(ulong *)(param_2 + lVar3);
    *(ulong *)(this + lVar3 + 8) = uVar1 | uVar2;
    lVar3 = lVar4;
  } while (lVar4 != 0x40);
  return;
}



/* hb_vector_size_t<unsigned long long, 64u> hb_bit_set_t::op_<._anon_133>(hb_vector_size_t<unsigned
   long long, 64u> const&, hb_vector_size_t<unsigned long long, 64u> const&) */

void __thiscall
hb_bit_set_t::op_<__anon_133>
          (hb_bit_set_t *this,hb_vector_size_t_conflict *param_1,hb_vector_size_t_conflict *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  do {
    uVar1 = *(ulong *)(param_1 + lVar3 + 8);
    uVar2 = *(ulong *)(param_2 + lVar3 + 8);
    lVar4 = lVar3 + 0x10;
    *(ulong *)(this + lVar3) = *(ulong *)(param_1 + lVar3) & *(ulong *)(param_2 + lVar3);
    *(ulong *)(this + lVar3 + 8) = uVar1 & uVar2;
    lVar3 = lVar4;
  } while (lVar4 != 0x40);
  return;
}



/* hb_vector_size_t<unsigned long long, 64u> hb_bit_set_t::op_<._anon_135>(hb_vector_size_t<unsigned
   long long, 64u> const&, hb_vector_size_t<unsigned long long, 64u> const&) */

void __thiscall
hb_bit_set_t::op_<__anon_135>
          (hb_bit_set_t *this,hb_vector_size_t_conflict *param_1,hb_vector_size_t_conflict *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  do {
    uVar1 = *(ulong *)(param_1 + lVar3 + 8);
    uVar2 = *(ulong *)(param_2 + lVar3 + 8);
    lVar4 = lVar3 + 0x10;
    *(ulong *)(this + lVar3) = *(ulong *)(param_1 + lVar3) ^ *(ulong *)(param_2 + lVar3);
    *(ulong *)(this + lVar3 + 8) = uVar1 ^ uVar2;
    lVar3 = lVar4;
  } while (lVar4 != 0x40);
  return;
}



/* hb_vector_size_t<unsigned long long, 64u> hb_bit_set_t::op_<._anon_136>(hb_vector_size_t<unsigned
   long long, 64u> const&, hb_vector_size_t<unsigned long long, 64u> const&) */

void __thiscall
hb_bit_set_t::op_<__anon_136>
          (hb_bit_set_t *this,hb_vector_size_t_conflict *param_1,hb_vector_size_t_conflict *param_2)

{
  hb_vector_size_t_conflict *phVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  do {
    phVar1 = param_1 + lVar7;
    uVar2 = *(uint *)(phVar1 + 4);
    uVar3 = *(uint *)(phVar1 + 8);
    uVar4 = *(uint *)(phVar1 + 0xc);
    *(uint *)((long)&local_58 + lVar7) = *(uint *)phVar1 ^ 0xffffffff;
    *(uint *)((long)&local_58 + lVar7 + 4) = uVar2 ^ 0xffffffff;
    *(uint *)((long)&uStack_50 + lVar7) = uVar3 ^ 0xffffffff;
    *(uint *)((long)&uStack_50 + lVar7 + 4) = uVar4 ^ 0xffffffff;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  lVar7 = 0;
  do {
    uVar6 = *(ulong *)(param_2 + lVar7 + 8);
    uVar5 = *(ulong *)((long)&uStack_50 + lVar7);
    lVar8 = lVar7 + 0x10;
    *(ulong *)(this + lVar7) = *(ulong *)(param_2 + lVar7) & *(ulong *)((long)&local_58 + lVar7);
    *(ulong *)(this + lVar7 + 8) = uVar6 & uVar5;
    lVar7 = lVar8;
  } while (lVar8 != 0x40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_vector_size_t<unsigned long long, 64u> hb_bit_set_t::op_<._anon_137>(hb_vector_size_t<unsigned
   long long, 64u> const&, hb_vector_size_t<unsigned long long, 64u> const&) */

void __thiscall
hb_bit_set_t::op_<__anon_137>
          (hb_bit_set_t *this,hb_vector_size_t_conflict *param_1,hb_vector_size_t_conflict *param_2)

{
  hb_vector_size_t_conflict *phVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  do {
    phVar1 = param_2 + lVar7;
    uVar2 = *(uint *)(phVar1 + 4);
    uVar3 = *(uint *)(phVar1 + 8);
    uVar4 = *(uint *)(phVar1 + 0xc);
    *(uint *)((long)&local_58 + lVar7) = *(uint *)phVar1 ^ 0xffffffff;
    *(uint *)((long)&local_58 + lVar7 + 4) = uVar2 ^ 0xffffffff;
    *(uint *)((long)&uStack_50 + lVar7) = uVar3 ^ 0xffffffff;
    *(uint *)((long)&uStack_50 + lVar7 + 4) = uVar4 ^ 0xffffffff;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  lVar7 = 0;
  do {
    uVar6 = *(ulong *)(param_1 + lVar7 + 8);
    uVar5 = *(ulong *)((long)&uStack_50 + lVar7);
    lVar8 = lVar7 + 0x10;
    *(ulong *)(this + lVar7) = *(ulong *)(param_1 + lVar7) & *(ulong *)((long)&local_58 + lVar7);
    *(ulong *)(this + lVar7 + 8) = uVar6 & uVar5;
    lVar7 = lVar8;
  } while (lVar8 != 0x40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void hb_object_fini<hb_sparseset_t<hb_bit_set_invertible_t>
   >(hb_sparseset_t<hb_bit_set_invertible_t>*) */

void hb_object_fini<hb_sparseset_t<hb_bit_set_invertible_t>>(hb_sparseset_t *param_1)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  code *pcVar3;
  undefined8 uVar4;
  
  *(undefined4 *)param_1 = 0xffff2153;
  __mutex = *(pthread_mutex_t **)(param_1 + 8);
  if (__mutex == (pthread_mutex_t *)0x0) {
    return;
  }
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
          goto LAB_00100213;
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
LAB_00100213:
  pthread_mutex_destroy(__mutex);
  free(__mutex);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



undefined1  [16] hb_set_create(void)

{
  undefined8 extraout_RDX;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = (undefined4 *)calloc(1,0x48);
  if (auVar1._0_8_ != (undefined4 *)0x0) {
    *auVar1._0_8_ = 1;
    auVar1._0_8_[1] = 1;
    *(undefined8 *)(auVar1._0_8_ + 2) = 0;
    *(undefined1 *)(auVar1._0_8_ + 4) = 1;
    auVar1._0_8_[5] = 0;
    auVar1._0_8_[6] = 0;
    *(undefined8 *)(auVar1._0_8_ + 8) = 0;
    *(undefined8 *)(auVar1._0_8_ + 10) = 0;
    *(undefined8 *)(auVar1._0_8_ + 0xc) = 0;
    *(undefined8 *)(auVar1._0_8_ + 0xe) = 0;
    *(undefined1 *)(auVar1._0_8_ + 0x10) = 0;
    *auVar1._0_8_ = 1;
    auVar1._0_8_[1] = 1;
    *(undefined8 *)(auVar1._0_8_ + 2) = 0;
    auVar1._8_4_ = *auVar1._0_8_;
    auVar1._12_4_ = 0;
    return auVar1;
  }
  auVar2._8_8_ = extraout_RDX;
  auVar2._0_8_ = &_hb_NullPool;
  return auVar2;
}



undefined * hb_set_get_empty(void)

{
  return &_hb_NullPool;
}



int * hb_set_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



void hb_set_destroy(hb_sparseset_t *param_1)

{
  if (param_1 == (hb_sparseset_t *)0x0) {
    return;
  }
  if (*(int *)param_1 != 0) {
    LOCK();
    *(int *)param_1 = *(int *)param_1 + -1;
    UNLOCK();
    if (*(int *)param_1 == 0) {
      hb_object_fini<hb_sparseset_t<hb_bit_set_invertible_t>>(param_1);
      hb_object_fini<hb_sparseset_t<hb_bit_set_invertible_t>>(param_1);
      if (*(int *)(param_1 + 0x20) != 0) {
        free(*(void **)(param_1 + 0x28));
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        free(*(void **)(param_1 + 0x38));
        if (*(int *)(param_1 + 0x20) != 0) {
          free(*(void **)(param_1 + 0x28));
        }
      }
      free(param_1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_set_set_user_data(int *param_1,long param_2,long param_3,long param_4,int param_5)

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
      if (__mutex[1].__data.__lock != 0) goto LAB_00100708;
      uVar9 = 8;
LAB_0010069c:
      plVar6 = (long *)realloc(plVar6,uVar9 * 0x18);
      if (plVar6 == (long *)0x0) {
        if ((uint)__mutex[1].__data.__lock < (uint)uVar9) {
          __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
          goto LAB_00100708;
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
          goto LAB_001004b5;
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
        if (uVar5 <= uVar1) goto LAB_00100663;
        do {
          uVar8 = (int)(uVar9 >> 1) + 8 + (int)uVar9;
          uVar9 = (ulong)uVar8;
        } while (uVar8 < uVar5);
        if (uVar8 < 0xaaaaaab) goto LAB_0010069c;
        __mutex[1].__data.__lock = ~uVar1;
      }
LAB_00100708:
      uVar11 = __hb_CrapPool;
      _memmove = _malloc;
      plVar10 = (long *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _malloc = uVar11;
      goto LAB_0010067a;
    }
  }
LAB_00100663:
  *(uint *)((long)__mutex + 0x2c) = uVar5;
  plVar10 = plVar6 + uVar7 * 3;
  *plVar10 = param_2;
  plVar10[1] = param_3;
  plVar10[2] = param_4;
LAB_0010067a:
  pthread_mutex_unlock(__mutex);
LAB_001004b5:
  return -1 < __mutex[1].__data.__lock && plVar10 != (long *)0x0;
}



long hb_set_get_user_data(int *param_1,long param_2)

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



undefined1 hb_set_allocation_successful(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



undefined4 * hb_set_copy(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  long lVar9;
  void *pvVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  
  puVar8 = (undefined4 *)calloc(1,0x48);
  puVar11 = (undefined4 *)&_hb_NullPool;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 1;
    puVar8[1] = 1;
    *(undefined8 *)(puVar8 + 2) = 0;
    *(undefined1 *)(puVar8 + 4) = 1;
    puVar8[5] = 0;
    puVar8[6] = 0;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined8 *)(puVar8 + 10) = 0;
    *(undefined8 *)(puVar8 + 0xc) = 0;
    *(undefined8 *)(puVar8 + 0xe) = 0;
    *(undefined1 *)(puVar8 + 0x10) = 0;
    *puVar8 = 1;
    puVar8[1] = 1;
    *(undefined8 *)(puVar8 + 2) = 0;
    puVar11 = puVar8;
  }
  if (*(char *)(puVar11 + 4) == '\0') {
    return (undefined4 *)&_hb_NullPool;
  }
  cVar6 = hb_bit_set_t::resize((hb_bit_set_t *)(puVar11 + 4),*(uint *)(param_1 + 0x34),false,false);
  if (cVar6 == '\0') goto LAB_001009ed;
  puVar11[5] = *(undefined4 *)(param_1 + 0x14);
  uVar7 = puVar11[8];
  if ((int)uVar7 < 0) {
    uVar7 = ~uVar7;
    puVar11[8] = uVar7;
  }
  puVar11[9] = 0;
  uVar12 = *(uint *)(param_1 + 0x24);
  if (uVar7 < uVar12) {
    if (uVar12 < 0x20000000) {
      pvVar10 = *(void **)(puVar11 + 10);
LAB_00100ae4:
      pvVar10 = realloc(pvVar10,(ulong)uVar12 << 3);
      if (pvVar10 != (void *)0x0) goto LAB_00100af9;
      uVar7 = puVar11[8];
      if (uVar12 <= uVar7) {
        if (-1 < (int)uVar7) {
          uVar12 = *(uint *)(param_1 + 0x24);
          goto LAB_00100a67;
        }
        goto LAB_00100a1a;
      }
    }
    puVar11[8] = ~uVar7;
  }
  else {
    if (uVar12 < uVar7 >> 2) {
      pvVar10 = *(void **)(puVar11 + 10);
      if (uVar12 != 0) goto LAB_00100ae4;
      free(pvVar10);
      pvVar10 = (void *)0x0;
LAB_00100af9:
      puVar11[8] = uVar12;
      uVar12 = *(uint *)(param_1 + 0x24);
      *(void **)(puVar11 + 10) = pvVar10;
    }
LAB_00100a67:
    lVar3 = *(long *)(param_1 + 0x28);
    puVar11[9] = uVar12;
    if (uVar12 != 0) {
      lVar4 = *(long *)(puVar11 + 10);
      lVar9 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        lVar9 = lVar9 + 8;
      } while ((ulong)uVar12 << 3 != lVar9);
    }
  }
LAB_00100a1a:
  uVar7 = puVar11[0xc];
  if ((int)uVar7 < 0) {
    uVar7 = ~uVar7;
    puVar11[0xc] = uVar7;
  }
  puVar11[0xd] = 0;
  uVar12 = *(uint *)(param_1 + 0x34);
  uVar13 = (ulong)uVar12;
  if (uVar7 < uVar12) {
    if (uVar12 < 0x38e38e4) {
      pvVar10 = *(void **)(puVar11 + 0xe);
LAB_00100aad:
      pvVar10 = realloc(pvVar10,(ulong)uVar12 * 0x48);
      if (pvVar10 != (void *)0x0) {
LAB_00100ac6:
        puVar11[0xc] = uVar12;
        uVar13 = (ulong)*(uint *)(param_1 + 0x34);
        *(void **)(puVar11 + 0xe) = pvVar10;
        goto LAB_0010098b;
      }
      uVar7 = puVar11[0xc];
      if (uVar12 <= uVar7) {
        if ((int)uVar7 < 0) goto LAB_001009ed;
        uVar13 = (ulong)*(uint *)(param_1 + 0x34);
        goto LAB_0010098b;
      }
    }
  }
  else {
    if (uVar7 >> 2 <= uVar12) {
LAB_0010098b:
      lVar3 = *(long *)(param_1 + 0x38);
      puVar11[0xd] = (int)uVar13;
      if ((int)uVar13 != 0) {
        lVar4 = *(long *)(puVar11 + 0xe);
        lVar9 = 0;
        do {
          uVar5 = ((undefined8 *)(lVar3 + lVar9))[1];
          *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          ((undefined8 *)(lVar4 + lVar9))[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar9);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar9);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar9);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar9);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar9);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar9);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar4 + 0x40 + lVar9) = *(undefined8 *)(lVar3 + 0x40 + lVar9);
          lVar9 = lVar9 + 0x48;
        } while (uVar13 * 0x48 != lVar9);
      }
      goto LAB_001009ed;
    }
    if (uVar12 < 0x38e38e4) {
      pvVar10 = *(void **)(puVar11 + 0xe);
      if (uVar12 != 0) goto LAB_00100aad;
      free(pvVar10);
      pvVar10 = (void *)0x0;
      goto LAB_00100ac6;
    }
  }
  puVar11[0xc] = ~uVar7;
LAB_001009ed:
  if (*(char *)(puVar11 + 4) != '\0') {
    *(undefined1 *)(puVar11 + 0x10) = *(undefined1 *)(param_1 + 0x40);
  }
  return puVar11;
}



void hb_set_clear(long param_1)

{
  hb_bit_set_t::resize((hb_bit_set_t *)(param_1 + 0x10),0,true,false);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



bool hb_set_is_empty(long param_1)

{
  hb_bit_set_t *this;
  char cVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uint local_2c;
  uint local_28;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0xffffffff;
  if (*(char *)(param_1 + 0x40) == '\0') {
    hb_bit_set_t::next((hb_bit_set_t *)(param_1 + 0x10),&local_2c);
    bVar4 = local_2c == 0xffffffff;
  }
  else {
    this = (hb_bit_set_t *)(param_1 + 0x10);
    local_28 = 0xffffffff;
    bVar4 = false;
    hb_bit_set_t::next(this,&local_28);
    if (local_28 == 0) {
      local_28 = 0xffffffff;
      local_24 = 0xffffffff;
      cVar1 = hb_bit_set_t::next(this,&local_24);
      uVar2 = local_24;
      if (cVar1 != '\0') {
        do {
          local_28 = uVar2;
          cVar1 = hb_bit_set_t::next(this,&local_24);
          uVar3 = uVar2 + 1;
          if (cVar1 == '\0') {
            bVar4 = uVar2 == 0xfffffffe;
            goto LAB_00100bd3;
          }
          uVar2 = uVar3;
        } while (local_24 == uVar3);
        bVar4 = uVar3 == 0xffffffff;
      }
    }
  }
LAB_00100bd3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



byte hb_set_has(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_2 >> 9;
  if ((*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x24)) &&
     (puVar1 = (uint *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x18) * 8),
     uVar8 == *puVar1)) {
    lVar6 = *(long *)(param_1 + 0x38) + (ulong)puVar1[1] * 0x48;
LAB_00100d27:
    if (lVar6 != 0) {
      return (1L << ((byte)param_2 & 0x3f) & *(ulong *)(lVar6 + 8 + (ulong)(param_2 >> 6 & 7) * 8))
             != 0 ^ *(byte *)(param_1 + 0x40);
    }
  }
  else {
    iVar7 = 0;
    iVar5 = *(uint *)(param_1 + 0x24) - 1;
    if (-1 < iVar5) {
      do {
        while( true ) {
          uVar3 = (uint)(iVar7 + iVar5) >> 1;
          uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar3 * 8);
          if (-1 < (int)(uVar8 - uVar2)) break;
          iVar5 = uVar3 - 1;
          if (iVar5 < iVar7) goto LAB_00100cf5;
        }
        if (uVar8 == uVar2) {
          *(uint *)(param_1 + 0x18) = uVar3;
          puVar4 = &_hb_NullPool;
          if (uVar3 < *(uint *)(param_1 + 0x24)) {
            puVar4 = (undefined *)(*(long *)(param_1 + 0x28) + (ulong)uVar3 * 8);
          }
          lVar6 = *(long *)(param_1 + 0x38) + (ulong)*(uint *)(puVar4 + 4) * 0x48;
          goto LAB_00100d27;
        }
        iVar7 = uVar3 + 1;
      } while (iVar7 <= iVar5);
    }
  }
LAB_00100cf5:
  return *(byte *)(param_1 + 0x40);
}



void hb_set_add(long param_1,uint param_2)

{
  hb_bit_set_t *this;
  byte bVar1;
  undefined4 *puVar2;
  
  this = (hb_bit_set_t *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x40) == '\0') {
    if ((param_2 != 0xffffffff) && (*this == (hb_bit_set_t)0x1)) {
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      puVar2 = (undefined4 *)hb_bit_set_t::page_for(this,param_2,true);
      if (puVar2 != (undefined4 *)0x0) {
        *(ulong *)(puVar2 + (ulong)(param_2 >> 6 & 7) * 2 + 2) =
             *(ulong *)(puVar2 + (ulong)(param_2 >> 6 & 7) * 2 + 2) | 1L << ((byte)param_2 & 0x3f);
        *puVar2 = 0xffffffff;
      }
    }
  }
  else if (*this != (hb_bit_set_t)0x0) {
    puVar2 = (undefined4 *)hb_bit_set_t::page_for(this,param_2,false);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      bVar1 = (byte)param_2 & 0x3f;
      *(ulong *)(puVar2 + (ulong)(param_2 >> 6 & 7) * 2 + 2) =
           *(ulong *)(puVar2 + (ulong)(param_2 >> 6 & 7) * 2 + 2) &
           (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      *puVar2 = 0xffffffff;
    }
  }
  return;
}



void hb_set_add_sorted_array(long param_1,uint *param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x10) ^ 1;
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (bVar1 == 0 && param_3 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      uVar4 = *param_2;
      uVar5 = uVar4;
      while( true ) {
        uVar6 = uVar4 >> 9;
        puVar2 = (undefined4 *)hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar4,true);
        if ((puVar2 == (undefined4 *)0x0) || (uVar4 < uVar5)) break;
        uVar5 = uVar4;
        if (uVar4 == 0xffffffff) goto LAB_00100f4b;
        while( true ) {
          *(ulong *)(puVar2 + (ulong)(uVar4 >> 6 & 7) * 2 + 2) =
               *(ulong *)(puVar2 + (ulong)(uVar4 >> 6 & 7) * 2 + 2) | 1L << ((byte)uVar4 & 0x3f);
          *puVar2 = 0xffffffff;
          uVar5 = uVar4;
LAB_00100f4b:
          param_3 = param_3 + -1;
          if (param_3 == 0) {
            return;
          }
          uVar4 = param_2[1];
          param_2 = param_2 + 1;
          if ((uVar6 + 1) * 0x200 <= uVar4) break;
          if (uVar4 < uVar5) {
            return;
          }
        }
      }
    }
  }
  else if (bVar1 == 0 && param_3 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    uVar4 = *param_2;
    uVar5 = uVar4;
    do {
      puVar2 = (undefined4 *)hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar4,false);
      uVar3 = uVar4 & 0xfffffe00;
      uVar6 = uVar5;
      do {
        uVar5 = uVar4;
        if (uVar5 < uVar6) {
          return;
        }
        if ((puVar2 != (undefined4 *)0x0) && (uVar5 != 0xffffffff)) {
          *(ulong *)(puVar2 + (ulong)(uVar5 >> 6 & 7) * 2 + 2) =
               *(ulong *)(puVar2 + (ulong)(uVar5 >> 6 & 7) * 2 + 2) | 1L << ((byte)uVar5 & 0x3f);
          *puVar2 = 0xffffffff;
        }
        param_3 = param_3 + -1;
        if (param_3 == 0) {
          return;
        }
        uVar4 = param_2[1];
        param_2 = param_2 + 1;
        uVar6 = uVar5;
      } while (uVar4 < uVar3 + 0x200);
    } while( true );
  }
  return;
}



void hb_set_add_range(long param_1,uint param_2,uint param_3)

{
  hb_bit_set_t *this;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    hb_bit_set_t::del_range((hb_bit_set_t *)(param_1 + 0x10),param_2,param_3);
    return;
  }
  if (((*(char *)(param_1 + 0x10) != '\0') && (param_2 <= param_3 && param_2 != 0xffffffff)) &&
     (param_3 != 0xffffffff)) {
    this = (hb_bit_set_t *)(param_1 + 0x10);
    uVar11 = param_3 >> 9;
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    if (param_2 >> 9 == uVar11) {
      puVar6 = (undefined4 *)hb_bit_set_t::page_for(this,param_2,true);
      if (puVar6 != (undefined4 *)0x0) {
        uVar8 = (ulong)(param_2 >> 6 & 7);
        uVar9 = (ulong)(param_3 >> 6 & 7);
        puVar1 = puVar6 + uVar8 * 2 + 2;
        lVar7 = 1L << ((byte)param_2 & 0x3f);
        lVar4 = (1L << ((byte)param_3 & 0x3f)) * 2;
        if (puVar1 == puVar6 + uVar9 * 2 + 2) {
          *(ulong *)(puVar6 + uVar8 * 2 + 2) = lVar4 - lVar7 | *(ulong *)(puVar6 + uVar8 * 2 + 2);
        }
        else {
          iVar3 = (int)(puVar1 + 2);
          iVar2 = (int)(puVar6 + uVar9 * 2 + 2);
          *(ulong *)(puVar6 + uVar8 * 2 + 2) = -lVar7 | *(ulong *)(puVar6 + uVar8 * 2 + 2);
          if (iVar2 != iVar3) {
            memset(puVar1 + 2,0xff,(ulong)(uint)(iVar2 - iVar3));
          }
          *(ulong *)(puVar6 + uVar9 * 2 + 2) = *(ulong *)(puVar6 + uVar9 * 2 + 2) | lVar4 - 1U;
        }
        *puVar6 = 0xffffffff;
        return;
      }
    }
    else {
      puVar6 = (undefined4 *)hb_bit_set_t::page_for(this,param_2,true);
      if (puVar6 != (undefined4 *)0x0) {
        uVar10 = (param_2 >> 9) + 1;
        uVar5 = param_2 >> 6 & 7;
        puVar1 = puVar6 + (ulong)(uVar5 + 1) * 2;
        *(ulong *)(puVar6 + (ulong)uVar5 * 2 + 2) =
             -(1L << ((byte)param_2 & 0x3f)) | *(ulong *)(puVar6 + (ulong)uVar5 * 2 + 2);
        if (puVar1 != puVar6 + 0x10) {
          iVar3 = (int)(puVar1 + 2);
          iVar2 = (int)(puVar6 + 0x10);
          if (iVar2 != iVar3) {
            memset(puVar1 + 2,0xff,(ulong)(uint)(iVar2 - iVar3));
          }
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        }
        *puVar6 = 0xffffffff;
        uVar5 = uVar10 * 0x200;
        if (uVar10 < uVar11) {
          do {
            puVar6 = (undefined4 *)hb_bit_set_t::page_for(this,uVar5,true);
            if (puVar6 == (undefined4 *)0x0) {
              return;
            }
            uVar5 = uVar5 + 0x200;
            *puVar6 = 0x200;
            puVar6[2] = 0xffffffff;
            puVar6[3] = 0xffffffff;
            puVar6[4] = 0xffffffff;
            puVar6[5] = 0xffffffff;
            puVar6[6] = 0xffffffff;
            puVar6[7] = 0xffffffff;
            puVar6[8] = 0xffffffff;
            puVar6[9] = 0xffffffff;
            puVar6[10] = 0xffffffff;
            puVar6[0xb] = 0xffffffff;
            puVar6[0xc] = 0xffffffff;
            puVar6[0xd] = 0xffffffff;
            puVar6[0xe] = 0xffffffff;
            puVar6[0xf] = 0xffffffff;
            puVar6[0x10] = 0xffffffff;
            puVar6[0x11] = 0xffffffff;
          } while (uVar5 != uVar11 << 9);
        }
        puVar6 = (undefined4 *)hb_bit_set_t::page_for(this,param_3,true);
        if (puVar6 != (undefined4 *)0x0) {
          uVar9 = (ulong)(param_3 >> 6 & 7);
          uVar8 = (1L << ((byte)param_3 & 0x3f)) * 2 - 1;
          if (uVar9 == 0) {
            *(ulong *)(puVar6 + 2) = *(ulong *)(puVar6 + 2) | uVar8;
          }
          else {
            *(undefined8 *)(puVar6 + 2) = 0xffffffffffffffff;
            if (uVar9 != 1) {
              memset(puVar6 + 4,0xff,uVar9 * 8 - 8 & 0xffffffff);
            }
            *(ulong *)(puVar6 + uVar9 * 2 + 2) = *(ulong *)(puVar6 + uVar9 * 2 + 2) | uVar8;
          }
          *puVar6 = 0xffffffff;
          return;
        }
      }
    }
  }
  return;
}



void hb_set_del(long param_1,uint param_2)

{
  hb_bit_set_t *this;
  byte bVar1;
  undefined4 *puVar2;
  
  this = (hb_bit_set_t *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*this != (hb_bit_set_t)0x0) {
      puVar2 = (undefined4 *)hb_bit_set_t::page_for(this,param_2,false);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
        bVar1 = (byte)param_2 & 0x3f;
        *(ulong *)(puVar2 + (ulong)(param_2 >> 6 & 7) * 2 + 2) =
             *(ulong *)(puVar2 + (ulong)(param_2 >> 6 & 7) * 2 + 2) &
             (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
        *puVar2 = 0xffffffff;
      }
    }
  }
  else if ((param_2 != 0xffffffff) && (*this == (hb_bit_set_t)0x1)) {
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    puVar2 = (undefined4 *)hb_bit_set_t::page_for(this,param_2,true);
    if (puVar2 != (undefined4 *)0x0) {
      *(ulong *)(puVar2 + (ulong)(param_2 >> 6 & 7) * 2 + 2) =
           *(ulong *)(puVar2 + (ulong)(param_2 >> 6 & 7) * 2 + 2) | 1L << ((byte)param_2 & 0x3f);
      *puVar2 = 0xffffffff;
    }
  }
  return;
}



void hb_set_del_range(long param_1,uint param_2,uint param_3)

{
  hb_bit_set_t *phVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  bVar7 = (byte)param_3;
  bVar8 = (byte)param_2;
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (((*(char *)(param_1 + 0x10) != '\0') && (param_2 <= param_3 && param_2 != 0xffffffff)) &&
       (param_3 != 0xffffffff)) {
      phVar1 = (hb_bit_set_t *)(param_1 + 0x10);
      uVar14 = param_3 >> 9;
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      if (param_2 >> 9 == uVar14) {
        puVar5 = (undefined4 *)hb_bit_set_t::page_for(phVar1,param_2,true);
        if (puVar5 != (undefined4 *)0x0) {
          uVar10 = (ulong)(param_2 >> 6 & 7);
          uVar6 = (ulong)(param_3 >> 6 & 7);
          puVar11 = puVar5 + uVar10 * 2 + 2;
          lVar9 = 1L << (bVar8 & 0x3f);
          lVar13 = (1L << (bVar7 & 0x3f)) * 2;
          if (puVar11 == puVar5 + uVar6 * 2 + 2) {
            *(ulong *)(puVar5 + uVar10 * 2 + 2) =
                 lVar13 - lVar9 | *(ulong *)(puVar5 + uVar10 * 2 + 2);
          }
          else {
            iVar3 = (int)(puVar11 + 2);
            iVar12 = (int)(puVar5 + uVar6 * 2 + 2);
            *(ulong *)(puVar5 + uVar10 * 2 + 2) = -lVar9 | *(ulong *)(puVar5 + uVar10 * 2 + 2);
            if (iVar12 != iVar3) {
              memset(puVar11 + 2,0xff,(ulong)(uint)(iVar12 - iVar3));
            }
            *(ulong *)(puVar5 + uVar6 * 2 + 2) = *(ulong *)(puVar5 + uVar6 * 2 + 2) | lVar13 - 1U;
          }
          *puVar5 = 0xffffffff;
        }
      }
      else {
        puVar5 = (undefined4 *)hb_bit_set_t::page_for(phVar1,param_2,true);
        if (puVar5 != (undefined4 *)0x0) {
          uVar18 = (param_2 >> 9) + 1;
          uVar17 = param_2 >> 6 & 7;
          puVar11 = puVar5 + (ulong)(uVar17 + 1) * 2;
          *(ulong *)(puVar5 + (ulong)uVar17 * 2 + 2) =
               -(1L << (bVar8 & 0x3f)) | *(ulong *)(puVar5 + (ulong)uVar17 * 2 + 2);
          if (puVar11 != puVar5 + 0x10) {
            iVar3 = (int)(puVar11 + 2);
            iVar12 = (int)(puVar5 + 0x10);
            if (iVar12 != iVar3) {
              memset(puVar11 + 2,0xff,(ulong)(uint)(iVar12 - iVar3));
            }
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          }
          *puVar5 = 0xffffffff;
          uVar17 = uVar18 * 0x200;
          if (uVar18 < uVar14) {
            do {
              puVar5 = (undefined4 *)hb_bit_set_t::page_for(phVar1,uVar17,true);
              if (puVar5 == (undefined4 *)0x0) {
                return;
              }
              uVar17 = uVar17 + 0x200;
              *puVar5 = 0x200;
              puVar5[2] = 0xffffffff;
              puVar5[3] = 0xffffffff;
              puVar5[4] = 0xffffffff;
              puVar5[5] = 0xffffffff;
              puVar5[6] = 0xffffffff;
              puVar5[7] = 0xffffffff;
              puVar5[8] = 0xffffffff;
              puVar5[9] = 0xffffffff;
              puVar5[10] = 0xffffffff;
              puVar5[0xb] = 0xffffffff;
              puVar5[0xc] = 0xffffffff;
              puVar5[0xd] = 0xffffffff;
              puVar5[0xe] = 0xffffffff;
              puVar5[0xf] = 0xffffffff;
              puVar5[0x10] = 0xffffffff;
              puVar5[0x11] = 0xffffffff;
            } while (uVar14 << 9 != uVar17);
          }
          puVar5 = (undefined4 *)hb_bit_set_t::page_for(phVar1,param_3,true);
          if (puVar5 != (undefined4 *)0x0) {
            uVar6 = (ulong)(param_3 >> 6 & 7);
            uVar10 = (1L << (bVar7 & 0x3f)) * 2 - 1;
            if (uVar6 == 0) {
              *(ulong *)(puVar5 + 2) = *(ulong *)(puVar5 + 2) | uVar10;
            }
            else {
              *(undefined8 *)(puVar5 + 2) = 0xffffffffffffffff;
              if (uVar6 != 1) {
                memset(puVar5 + 4,0xff,uVar6 * 8 - 8 & 0xffffffff);
              }
              *(ulong *)(puVar5 + uVar6 * 2 + 2) = *(ulong *)(puVar5 + uVar6 * 2 + 2) | uVar10;
            }
            *puVar5 = 0xffffffff;
          }
        }
      }
    }
    return;
  }
  phVar1 = (hb_bit_set_t *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  if (param_3 < param_2) {
    return;
  }
  if (param_2 == 0xffffffff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  uVar14 = param_3 >> 9;
  uVar17 = param_2 >> 9;
  iVar12 = (uVar17 + 1) - (uint)((param_2 & 0x1ff) == 0);
  if (param_3 + 1 == (uVar14 + 1) * 0x200) {
    uVar18 = uVar17;
    if (uVar14 <= uVar17) {
      uVar18 = uVar14;
    }
    uVar16 = uVar14;
    if (iVar12 <= (int)uVar18) goto LAB_001013d1;
LAB_00101402:
    puVar5 = (undefined4 *)hb_bit_set_t::page_for(phVar1,param_2,false);
    if (puVar5 != (undefined4 *)0x0) {
      bVar8 = bVar8 & 0x3f;
      uVar6 = (ulong)(param_2 >> 6 & 7);
      uVar10 = *(ulong *)(puVar5 + uVar6 * 2 + 2);
      puVar11 = puVar5 + uVar6 * 2 + 2;
      if (uVar17 == uVar14) {
        uVar15 = (ulong)(param_3 >> 6 & 7);
        lVar13 = 1L << (bVar7 & 0x3f);
        if (puVar11 == puVar5 + uVar15 * 2 + 2) {
          *(ulong *)(puVar5 + uVar6 * 2 + 2) = (1L << bVar8) + -1 + lVar13 * -2 & uVar10;
        }
        else {
          *(ulong *)(puVar5 + uVar6 * 2 + 2) = ~(-1L << bVar8) & uVar10;
          iVar4 = (int)(puVar11 + 2);
          iVar3 = (int)(puVar5 + uVar15 * 2 + 2);
          if (iVar3 != iVar4) {
            memset(puVar11 + 2,0,(ulong)(uint)(iVar3 - iVar4));
          }
          *(ulong *)(puVar5 + uVar15 * 2 + 2) = *(ulong *)(puVar5 + uVar15 * 2 + 2) & lVar13 * -2;
        }
        *puVar5 = 0xffffffff;
        goto LAB_001013d1;
      }
      puVar2 = puVar5 + 0x10;
      *(ulong *)(puVar5 + uVar6 * 2 + 2) = ~(-1L << bVar8) & uVar10;
      if (puVar11 != puVar2) {
        puVar11 = puVar11 + 2;
        if ((int)puVar2 != (int)puVar11) {
          memset(puVar11,0,(long)puVar2 - (long)puVar11 & 0xffffffff);
        }
        *(undefined8 *)(puVar5 + 0x10) = 0;
      }
      *puVar5 = 0xffffffff;
    }
  }
  else {
    uVar16 = uVar14 - 1;
    uVar18 = uVar17;
    if ((int)uVar16 <= (int)uVar17) {
      uVar18 = uVar16;
    }
    if ((int)uVar18 < iVar12) goto LAB_00101402;
  }
  if ((((int)uVar16 < (int)uVar14) && (uVar17 != uVar14)) &&
     (puVar5 = (undefined4 *)hb_bit_set_t::page_for(phVar1,param_3,false),
     puVar5 != (undefined4 *)0x0)) {
    uVar6 = (ulong)(param_3 >> 6 & 7);
    uVar10 = (1L << (bVar7 & 0x3f)) * -2;
    if (uVar6 == 0) {
      *(ulong *)(puVar5 + 2) = *(ulong *)(puVar5 + 2) & uVar10;
    }
    else {
      *(undefined8 *)(puVar5 + 2) = 0;
      if (uVar6 != 1) {
        memset(puVar5 + 4,0,uVar6 * 8 - 8 & 0xffffffff);
      }
      *(ulong *)(puVar5 + uVar6 * 2 + 2) = *(ulong *)(puVar5 + uVar6 * 2 + 2) & uVar10;
    }
    *puVar5 = 0xffffffff;
  }
LAB_001013d1:
  hb_bit_set_t::del_pages(phVar1,iVar12,uVar16);
  return;
}



undefined1 hb_set_is_equal(long param_1,long param_2)

{
  hb_bit_set_t *this;
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  hb_bit_set_t *phVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long in_FS_OFFSET;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  int local_88;
  uint local_70;
  uint local_6c;
  hb_bit_set_t *local_68;
  undefined8 local_60;
  hb_bit_set_t *local_58;
  uint local_50;
  int local_4c;
  long local_40;
  
  phVar8 = (hb_bit_set_t *)(param_1 + 0x10);
  this = (hb_bit_set_t *)(param_2 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x40) == *(char *)(param_2 + 0x40)) {
    uVar2 = hb_bit_set_t::is_equal(phVar8,this);
  }
  else {
    local_98._0_4_ = *(int *)(param_1 + 0x14);
    local_60 = _LC0;
    local_68 = phVar8;
    if (*(char *)(param_1 + 0x40) == '\0') {
      if ((int)local_98 == -1) {
        if (*(uint *)(param_1 + 0x34) == 0) {
          iVar11 = 1;
          local_90._0_4_ = 0;
        }
        else {
          local_90._0_4_ = 0;
          puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
          local_98 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
          puVar9 = puVar10 + (ulong)*(uint *)(param_1 + 0x34) * 9;
          do {
            iVar11 = *(int *)(puVar10 + -9);
            if (iVar11 == -1) {
              iVar11 = 0;
              puVar5 = local_98;
              do {
                iVar4 = __popcountdi2(*puVar5);
                iVar11 = iVar11 + iVar4;
                puVar5 = puVar5 + 1;
              } while (puVar5 != puVar10);
              *(int *)(puVar10 + -9) = iVar11;
            }
            puVar10 = puVar10 + 9;
            local_90._0_4_ = (int)local_90 + iVar11;
            local_98 = local_98 + 9;
          } while (puVar10 != puVar9);
          iVar11 = (int)local_90 + 1;
        }
        *(int *)(param_1 + 0x14) = (int)local_90;
        local_60._4_4_ = iVar11;
      }
      else {
        local_60._4_4_ = (int)local_98 + 1;
        local_60._0_4_ = (uint)_LC0;
      }
      hb_bit_set_t::next(phVar8,(uint *)&local_60);
      local_a0._0_4_ = (uint)local_60;
      local_98._0_4_ = local_60._4_4_;
      phVar8 = local_68;
    }
    else {
      if ((int)local_98 == -1) {
        if (*(uint *)(param_1 + 0x34) == 0) {
          local_98._0_4_ = 0;
          local_90._0_4_ = 0;
        }
        else {
          local_90._0_4_ = 0;
          local_98 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
          local_a0 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
          puVar10 = local_a0 + (ulong)*(uint *)(param_1 + 0x34) * 9;
          do {
            iVar11 = *(int *)(local_a0 + -9);
            if (iVar11 == -1) {
              iVar11 = 0;
              puVar9 = local_98;
              do {
                uVar1 = *puVar9;
                puVar9 = puVar9 + 1;
                iVar4 = __popcountdi2(uVar1);
                iVar11 = iVar11 + iVar4;
              } while (local_a0 != puVar9);
              *(int *)(local_a0 + -9) = iVar11;
            }
            local_a0 = local_a0 + 9;
            local_90._0_4_ = (int)local_90 + iVar11;
            local_98 = local_98 + 9;
          } while (puVar10 != local_a0);
          local_98._0_4_ = -(int)local_90;
        }
        *(int *)(param_1 + 0x14) = (int)local_90;
      }
      else {
        local_98._0_4_ = -(int)local_98;
      }
      local_70 = 0xffffffff;
      local_60 = CONCAT44((int)local_98,(uint)local_60);
      hb_bit_set_t::next(phVar8,&local_70);
      local_a0._0_4_ = local_70;
      if (local_70 == 0) {
        local_70 = 0xffffffff;
        local_6c = 0xffffffff;
        cVar3 = hb_bit_set_t::next(phVar8,&local_6c);
        if (cVar3 != '\0') {
          local_a0._0_4_ = local_6c;
          do {
            local_70 = (uint)local_a0;
            cVar3 = hb_bit_set_t::next(phVar8,&local_6c);
            local_a0._0_4_ = (uint)local_a0 + 1;
            if (cVar3 == '\0') break;
          } while (local_6c == (uint)local_a0);
        }
      }
      else {
        local_a0._0_4_ = 0;
      }
    }
    iVar11 = *(int *)(param_2 + 0x14);
    local_60 = _LC0;
    local_68 = this;
    if (*(char *)(param_2 + 0x40) == '\0') {
      if (iVar11 == -1) {
        if (*(uint *)(param_2 + 0x34) == 0) {
          iVar11 = 1;
          local_88 = 0;
        }
        else {
          local_88 = 0;
          local_90 = (undefined8 *)(*(long *)(param_2 + 0x38) + 8);
          puVar9 = (undefined8 *)(*(long *)(param_2 + 0x38) + 0x48);
          puVar10 = puVar9 + (ulong)*(uint *)(param_2 + 0x34) * 9;
          do {
            iVar11 = *(int *)(puVar9 + -9);
            if (iVar11 == -1) {
              iVar11 = 0;
              puVar5 = local_90;
              do {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                iVar4 = __popcountdi2(uVar1);
                iVar11 = iVar11 + iVar4;
              } while (puVar9 != puVar5);
              *(int *)(puVar9 + -9) = iVar11;
            }
            local_88 = local_88 + iVar11;
            puVar9 = puVar9 + 9;
            local_90 = local_90 + 9;
          } while (puVar10 != puVar9);
          iVar11 = local_88 + 1;
        }
        *(int *)(param_2 + 0x14) = local_88;
        local_60._4_4_ = iVar11;
      }
      else {
        local_60._4_4_ = iVar11 + 1;
        local_60._0_4_ = (uint)_LC0;
      }
      hb_bit_set_t::next(this,(uint *)&local_60);
      local_58 = local_68;
      local_50 = (uint)local_60;
      iVar11 = local_60._4_4_;
    }
    else {
      if (iVar11 == -1) {
        if (*(uint *)(param_2 + 0x34) == 0) {
          iVar11 = 0;
          local_88 = 0;
        }
        else {
          local_88 = 0;
          puVar10 = (undefined8 *)(*(long *)(param_2 + 0x38) + 0x48);
          local_90 = (undefined8 *)(*(long *)(param_2 + 0x38) + 8);
          puVar9 = puVar10 + (ulong)*(uint *)(param_2 + 0x34) * 9;
          do {
            iVar11 = *(int *)(puVar10 + -9);
            if (iVar11 == -1) {
              iVar11 = 0;
              puVar5 = local_90;
              do {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                iVar4 = __popcountdi2(uVar1);
                iVar11 = iVar11 + iVar4;
              } while (puVar5 != puVar10);
              *(int *)(puVar10 + -9) = iVar11;
            }
            puVar10 = puVar10 + 9;
            local_88 = local_88 + iVar11;
            local_90 = local_90 + 9;
          } while (puVar10 != puVar9);
          iVar11 = -local_88;
        }
        *(int *)(param_2 + 0x14) = local_88;
      }
      else {
        iVar11 = -iVar11;
      }
      local_60 = CONCAT44(iVar11,(uint)local_60);
      local_70 = 0xffffffff;
      hb_bit_set_t::next(this,&local_70);
      local_50 = local_70;
      local_58 = this;
      if (local_70 == 0) {
        local_70 = 0xffffffff;
        local_6c = 0xffffffff;
        cVar3 = hb_bit_set_t::next(this,&local_6c);
        uVar7 = local_6c;
        if (cVar3 != '\0') {
          do {
            uVar6 = uVar7 + 1;
            local_70 = uVar7;
            cVar3 = hb_bit_set_t::next(this,&local_6c);
            local_50 = uVar6;
            if (cVar3 == '\0') break;
            uVar7 = uVar6;
          } while (uVar6 == local_6c);
        }
      }
      else {
        local_50 = 0;
      }
    }
    local_4c = iVar11 + -1 + (uint)(iVar11 == 0);
    local_60 = CONCAT44((int)local_98 + -1 + (uint)((int)local_98 == 0),(uint)local_a0);
    local_68 = phVar8;
LAB_00101b30:
    if ((uint)local_a0 != 0xffffffff) {
      do {
        phVar8 = local_68;
        if (local_50 == 0xffffffff) break;
        if (local_50 != (uint)local_a0) {
          uVar2 = 0;
          goto LAB_001017e1;
        }
        if (local_68[0x30] == (hb_bit_set_t)0x0) {
          hb_bit_set_t::next(local_68,(uint *)&local_60);
        }
        else {
          if ((uint)local_a0 == 0xfffffffe) {
            uVar7 = 0xffffffff;
          }
          else {
            local_70 = (uint)local_a0;
            uVar7 = (uint)local_a0 + 1;
            hb_bit_set_t::next(local_68,&local_70);
            if (local_70 <= uVar7) {
              local_6c = (uint)local_a0;
              uVar7 = 0;
              cVar3 = hb_bit_set_t::next(phVar8,&local_6c);
              uVar6 = local_6c;
              if (cVar3 != '\0') {
                do {
                  local_70 = uVar6;
                  uVar7 = local_70 + 1;
                  cVar3 = hb_bit_set_t::next(phVar8,&local_6c);
                  if (cVar3 == '\0') break;
                  uVar6 = uVar7;
                } while (uVar7 == local_6c);
              }
            }
          }
          local_60 = CONCAT44(local_60._4_4_,uVar7);
        }
        uVar7 = local_50;
        phVar8 = local_58;
        if (local_60._4_4_ != 0) {
          local_60 = CONCAT44(local_60._4_4_ + -1,(uint)local_60);
        }
        if (local_58[0x30] == (hb_bit_set_t)0x0) {
          hb_bit_set_t::next(local_58,&local_50);
          uVar6 = local_50;
        }
        else if (local_50 == 0xfffffffe) {
          uVar6 = 0xffffffff;
        }
        else {
          local_70 = local_50;
          uVar6 = local_50 + 1;
          hb_bit_set_t::next(local_58,&local_70);
          if (local_70 <= uVar6) {
            local_6c = uVar7;
            cVar3 = hb_bit_set_t::next(phVar8,&local_6c);
            uVar6 = 0;
            uVar7 = local_6c;
            if (cVar3 != '\0') {
              do {
                local_70 = uVar7;
                uVar6 = local_70 + 1;
                cVar3 = hb_bit_set_t::next(phVar8,&local_6c);
                if (cVar3 == '\0') break;
                uVar7 = uVar6;
              } while (local_6c == uVar6);
            }
          }
        }
        local_50 = uVar6;
        local_a0._0_4_ = (uint)local_60;
        if (local_4c == 0) goto LAB_00101b30;
        local_4c = local_4c + -1;
        if ((uint)local_60 == 0xffffffff) break;
      } while( true );
    }
    uVar2 = 1;
  }
LAB_001017e1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



uint hb_set_hash(long param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  int *piVar10;
  
  piVar10 = *(int **)(param_1 + 0x28);
  piVar1 = piVar10 + (ulong)*(uint *)(param_1 + 0x24) * 2;
  if (piVar10 == piVar1) {
    return (uint)*(byte *)(param_1 + 0x40);
  }
  uVar9 = 0;
  do {
    piVar2 = (int *)(*(long *)(param_1 + 0x38) + (ulong)(uint)piVar10[1] * 0x48);
    if (*piVar2 == -1) {
      plVar8 = (long *)(piVar2 + 2);
      do {
        if (*plVar8 != 0) goto LAB_00101f13;
        plVar8 = plVar8 + 1;
      } while (plVar8 != (long *)(piVar2 + 0x12));
    }
    else if (*piVar2 != 0) {
LAB_00101f13:
      puVar4 = (ulong *)(piVar2 + 2);
      uVar5 = 0xd57c876f71a6a6;
      if (((ulong)puVar4 & 7) == 0) {
        do {
          uVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          uVar6 = (uVar6 >> 0x17 ^ uVar6) * 0x2127599bf4325c37;
          uVar5 = (uVar6 ^ uVar6 >> 0x2f ^ uVar5) * -0x77fcaa0de192e69b;
        } while (puVar4 != (ulong *)(piVar2 + 0x12));
      }
      else {
        do {
          uVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          uVar6 = (uVar6 >> 0x17 ^ uVar6) * 0x2127599bf4325c37;
          uVar5 = (uVar6 ^ uVar6 >> 0x2f ^ uVar5) * -0x77fcaa0de192e69b;
        } while (puVar4 != (ulong *)(piVar2 + 0x12));
      }
      lVar7 = (uVar5 >> 0x17 ^ uVar5) * 0x2127599bf4325c37;
      uVar3 = (uint)((ulong)lVar7 >> 0x20);
      uVar9 = (*piVar10 * -0x61c8864f + uVar9 * 0x1f + (uVar3 >> 0xf ^ (uint)lVar7)) - uVar3;
    }
    piVar10 = piVar10 + 2;
    if (piVar10 == piVar1) {
      return *(byte *)(param_1 + 0x40) ^ uVar9;
    }
  } while( true );
}



undefined1 hb_set_is_subset(long param_1,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x40) == *(char *)(param_2 + 0x40)) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar5 = hb_bit_set_t::is_subset
                        ((hb_bit_set_t *)(param_1 + 0x10),(hb_bit_set_t *)(param_2 + 0x10));
    }
    else {
      uVar5 = hb_bit_set_t::is_subset
                        ((hb_bit_set_t *)(param_2 + 0x10),(hb_bit_set_t *)(param_1 + 0x10));
    }
  }
  else {
    local_50 = _LC0;
    if (*(int *)(param_1 + 0x14) == -1) {
      if (*(uint *)(param_1 + 0x34) == 0) {
        iVar6 = 1;
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        puVar15 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
        puVar2 = puVar11 + (ulong)*(uint *)(param_1 + 0x34) * 9;
        do {
          iVar6 = *(int *)(puVar11 + -9);
          if (iVar6 == -1) {
            iVar6 = 0;
            puVar16 = puVar15;
            do {
              uVar4 = *puVar16;
              puVar16 = puVar16 + 1;
              iVar8 = __popcountdi2(uVar4);
              iVar6 = iVar6 + iVar8;
            } while (puVar11 != puVar16);
            *(int *)(puVar11 + -9) = iVar6;
          }
          iVar12 = iVar12 + iVar6;
          puVar15 = puVar15 + 9;
          puVar11 = puVar11 + 9;
        } while (puVar2 != puVar11);
        iVar6 = iVar12 + 1;
      }
      *(int *)(param_1 + 0x14) = iVar12;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x14) + 1;
    }
    local_50._4_4_ = iVar6;
    hb_bit_set_t::next((hb_bit_set_t *)(param_1 + 0x10),(uint *)&local_50);
    local_50 = CONCAT44(local_50._4_4_ + -1 + (uint)(local_50._4_4_ == 0),(uint)local_50);
    uVar9 = (uint)local_50;
    local_48 = param_2 + 0x10;
    while (uVar9 != 0xffffffff) {
      uVar14 = uVar9 >> 9;
      if ((*(uint *)(local_48 + 0x14) <= *(uint *)(local_48 + 8)) ||
         (puVar1 = (uint *)(*(long *)(local_48 + 0x18) + (ulong)*(uint *)(local_48 + 8) * 8),
         uVar14 != *puVar1)) {
        iVar12 = *(uint *)(local_48 + 0x14) - 1;
        if (-1 < iVar12) {
          iVar6 = 0;
          while( true ) {
            while( true ) {
              uVar7 = (uint)(iVar6 + iVar12) >> 1;
              uVar3 = *(uint *)(*(long *)(local_48 + 0x18) + (ulong)uVar7 * 8);
              if (-1 < (int)(uVar14 - uVar3)) break;
              iVar12 = uVar7 - 1;
              if (iVar12 < iVar6) goto LAB_00102165;
            }
            if (uVar14 == uVar3) break;
            iVar6 = uVar7 + 1;
            if (iVar12 < iVar6) goto LAB_00102165;
          }
          *(uint *)(local_48 + 8) = uVar7;
          puVar10 = &_hb_NullPool;
          if (uVar7 < *(uint *)(local_48 + 0x14)) {
            puVar10 = (undefined *)(*(long *)(local_48 + 0x18) + (ulong)uVar7 * 8);
          }
          lVar13 = *(long *)(local_48 + 0x28) + (ulong)*(uint *)(puVar10 + 4) * 0x48;
          goto LAB_00102193;
        }
LAB_00102165:
        uVar5 = 0;
        goto LAB_00102056;
      }
      lVar13 = *(long *)(local_48 + 0x28) + (ulong)puVar1[1] * 0x48;
LAB_00102193:
      if ((lVar13 == 0) ||
         ((1L << ((byte)uVar9 & 0x3f) & *(ulong *)(lVar13 + 8 + (ulong)(uVar9 >> 6 & 7) * 8)) == 0))
      goto LAB_00102165;
      hb_bit_set_t::next((hb_bit_set_t *)(param_1 + 0x10),(uint *)&local_50);
      if (local_50._4_4_ != 0) {
        local_50 = CONCAT44(local_50._4_4_ + -1,(uint)local_50);
      }
      uVar9 = (uint)local_50;
    }
    uVar5 = 1;
  }
LAB_00102056:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void hb_set_set(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  cVar6 = hb_bit_set_t::resize
                    ((hb_bit_set_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x34),false,false);
  if (cVar6 == '\0') goto LAB_0010238d;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(uint *)(param_1 + 0x20);
  if ((int)uVar7 < 0) {
    uVar7 = ~uVar7;
    *(uint *)(param_1 + 0x20) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar10 = *(uint *)(param_2 + 0x24);
  if (uVar7 < uVar10) {
    if (uVar10 < 0x20000000) {
      pvVar9 = *(void **)(param_1 + 0x28);
LAB_00102484:
      pvVar9 = realloc(pvVar9,(ulong)uVar10 << 3);
      if (pvVar9 != (void *)0x0) goto LAB_00102499;
      uVar7 = *(uint *)(param_1 + 0x20);
      if (uVar10 <= uVar7) {
        if (-1 < (int)uVar7) {
          uVar10 = *(uint *)(param_2 + 0x24);
          goto LAB_00102407;
        }
        goto LAB_001023b2;
      }
    }
    *(uint *)(param_1 + 0x20) = ~uVar7;
  }
  else {
    if (uVar10 < uVar7 >> 2) {
      pvVar9 = *(void **)(param_1 + 0x28);
      if (uVar10 != 0) goto LAB_00102484;
      free(pvVar9);
      pvVar9 = (void *)0x0;
LAB_00102499:
      *(uint *)(param_1 + 0x20) = uVar10;
      uVar10 = *(uint *)(param_2 + 0x24);
      *(void **)(param_1 + 0x28) = pvVar9;
    }
LAB_00102407:
    lVar3 = *(long *)(param_2 + 0x28);
    *(uint *)(param_1 + 0x24) = uVar10;
    if (uVar10 != 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      lVar8 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
        lVar8 = lVar8 + 8;
      } while ((ulong)uVar10 << 3 != lVar8);
    }
  }
LAB_001023b2:
  uVar7 = *(uint *)(param_1 + 0x30);
  if ((int)uVar7 < 0) {
    uVar7 = ~uVar7;
    *(uint *)(param_1 + 0x30) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar10 = *(uint *)(param_2 + 0x34);
  uVar11 = (ulong)uVar10;
  if (uVar7 < uVar10) {
    if (uVar10 < 0x38e38e4) {
      pvVar9 = *(void **)(param_1 + 0x38);
LAB_0010244d:
      pvVar9 = realloc(pvVar9,(ulong)uVar10 * 0x48);
      if (pvVar9 != (void *)0x0) {
LAB_00102466:
        *(uint *)(param_1 + 0x30) = uVar10;
        uVar11 = (ulong)*(uint *)(param_2 + 0x34);
        *(void **)(param_1 + 0x38) = pvVar9;
        goto LAB_0010232e;
      }
      uVar7 = *(uint *)(param_1 + 0x30);
      if (uVar10 <= uVar7) {
        if ((int)uVar7 < 0) goto LAB_0010238d;
        uVar11 = (ulong)*(uint *)(param_2 + 0x34);
        goto LAB_0010232e;
      }
    }
  }
  else {
    if (uVar7 >> 2 <= uVar10) {
LAB_0010232e:
      lVar3 = *(long *)(param_2 + 0x38);
      *(int *)(param_1 + 0x34) = (int)uVar11;
      if ((int)uVar11 != 0) {
        lVar4 = *(long *)(param_1 + 0x38);
        lVar8 = 0;
        do {
          uVar5 = ((undefined8 *)(lVar3 + lVar8))[1];
          *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
          ((undefined8 *)(lVar4 + lVar8))[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar8);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar8);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar8);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar4 + 0x40 + lVar8) = *(undefined8 *)(lVar3 + 0x40 + lVar8);
          lVar8 = lVar8 + 0x48;
        } while (lVar8 != uVar11 * 0x48);
      }
      goto LAB_0010238d;
    }
    if (uVar10 < 0x38e38e4) {
      pvVar9 = *(void **)(param_1 + 0x38);
      if (uVar10 != 0) goto LAB_0010244d;
      free(pvVar9);
      pvVar9 = (void *)0x0;
      goto LAB_00102466;
    }
  }
  *(uint *)(param_1 + 0x30) = ~uVar7;
LAB_0010238d:
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  }
  return;
}



void hb_set_union(long param_1,long param_2)

{
  hb_bit_set_t *phVar1;
  hb_bit_set_t *this;
  char cVar2;
  
  phVar1 = (hb_bit_set_t *)(param_2 + 0x10);
  this = (hb_bit_set_t *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 0x40);
  if (cVar2 == *(char *)(param_2 + 0x40)) {
    if (cVar2 == '\0') {
      hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_134>,true,true,phVar1);
    }
    else {
      hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_133>,false,false,phVar1);
    }
  }
  else if (cVar2 == '\0') {
    hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_136>,false,true,phVar1);
  }
  else {
    hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_137>,true,false,phVar1);
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    cVar2 = *(char *)(param_1 + 0x40);
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_2 + 0x40);
    }
    *(char *)(param_1 + 0x40) = cVar2;
  }
  return;
}



void hb_set_intersect(long param_1,long param_2)

{
  hb_bit_set_t *phVar1;
  hb_bit_set_t *this;
  char cVar2;
  
  phVar1 = (hb_bit_set_t *)(param_2 + 0x10);
  this = (hb_bit_set_t *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 0x40);
  if (cVar2 == *(char *)(param_2 + 0x40)) {
    if (cVar2 == '\0') {
      hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_133>,false,false,phVar1);
    }
    else {
      hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_134>,true,true,phVar1);
    }
  }
  else if (cVar2 == '\0') {
    hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_137>,true,false,phVar1);
  }
  else {
    hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_136>,false,true,phVar1);
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    cVar2 = *(char *)(param_1 + 0x40);
    if (cVar2 != '\0') {
      cVar2 = *(char *)(param_2 + 0x40);
    }
    *(char *)(param_1 + 0x40) = cVar2;
  }
  return;
}



void hb_set_subtract(long param_1,long param_2)

{
  hb_bit_set_t *phVar1;
  hb_bit_set_t *this;
  char cVar2;
  byte bVar3;
  
  phVar1 = (hb_bit_set_t *)(param_2 + 0x10);
  this = (hb_bit_set_t *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 0x40);
  if (cVar2 == *(char *)(param_2 + 0x40)) {
    if (cVar2 == '\0') {
      hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_137>,true,false,phVar1);
    }
    else {
      hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_136>,false,true,phVar1);
    }
  }
  else if (cVar2 == '\0') {
    hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_133>,false,false,phVar1);
  }
  else {
    hb_bit_set_t::process_(this,hb_bit_set_t::op_<__anon_134>,true,true,phVar1);
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    bVar3 = *(byte *)(param_1 + 0x40);
    if (bVar3 != 0) {
      bVar3 = *(byte *)(param_2 + 0x40) ^ 1;
    }
    *(byte *)(param_1 + 0x40) = bVar3;
  }
  return;
}



void hb_set_symmetric_difference(long param_1,long param_2)

{
  hb_bit_set_t::process_
            ((hb_bit_set_t *)(param_1 + 0x10),hb_bit_set_t::op_<__anon_135>,true,true,
             (hb_bit_set_t *)(param_2 + 0x10));
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ *(byte *)(param_2 + 0x40);
  }
  return;
}



void hb_set_invert(long param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ 1;
  }
  return;
}



undefined1 hb_set_is_inverted(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



ulong hb_set_get_population(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar8 = (ulong)uVar5;
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (uVar5 == 0xffffffff) {
      uVar8 = (ulong)*(uint *)(param_1 + 0x34);
      if (*(uint *)(param_1 + 0x34) != 0) {
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        puVar4 = puVar9 + uVar8 * 9;
        uVar8 = 0;
        do {
          iVar10 = *(int *)(puVar9 + -9);
          if (iVar10 == -1) {
            iVar10 = 0;
            puVar3 = puVar7;
            do {
              uVar1 = *puVar3;
              puVar3 = puVar3 + 1;
              iVar2 = __popcountdi2(uVar1);
              iVar10 = iVar10 + iVar2;
            } while (puVar3 != puVar9);
            *(int *)(puVar9 + -9) = iVar10;
          }
          puVar9 = puVar9 + 9;
          uVar8 = (ulong)(uint)((int)uVar8 + iVar10);
          puVar7 = puVar7 + 9;
        } while (puVar9 != puVar4);
      }
      *(int *)(param_1 + 0x14) = (int)uVar8;
    }
  }
  else if (uVar5 == 0xffffffff) {
    uVar5 = *(uint *)(param_1 + 0x34);
    uVar6 = (ulong)uVar5;
    if (uVar5 != 0) {
      uVar5 = 0;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
      puVar7 = puVar4 + uVar6 * 9;
      do {
        iVar10 = *(int *)(puVar4 + -9);
        if (iVar10 == -1) {
          iVar10 = 0;
          puVar3 = puVar9;
          do {
            uVar1 = *puVar3;
            puVar3 = puVar3 + 1;
            iVar2 = __popcountdi2(uVar1);
            iVar10 = iVar10 + iVar2;
          } while (puVar4 != puVar3);
          *(int *)(puVar4 + -9) = iVar10;
        }
        uVar5 = uVar5 + iVar10;
        puVar9 = puVar9 + 9;
        puVar4 = puVar4 + 9;
      } while (puVar7 != puVar4);
      uVar8 = (ulong)~uVar5;
    }
    *(uint *)(param_1 + 0x14) = uVar5;
  }
  else {
    uVar8 = (ulong)~uVar5;
  }
  return uVar8;
}



uint hb_set_get_min(long param_1)

{
  hb_bit_set_t *this;
  char cVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  uint local_2c;
  uint local_28;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0xffffffff;
  if (*(char *)(param_1 + 0x40) == '\0') {
    hb_bit_set_t::next((hb_bit_set_t *)(param_1 + 0x10),&local_2c);
    uVar2 = local_2c;
  }
  else {
    this = (hb_bit_set_t *)(param_1 + 0x10);
    local_28 = 0xffffffff;
    hb_bit_set_t::next(this,&local_28);
    if (local_28 == 0) {
      local_28 = 0xffffffff;
      local_24 = 0xffffffff;
      cVar1 = hb_bit_set_t::next(this,&local_24);
      uVar2 = 0;
      uVar3 = local_24;
      if (cVar1 != '\0') {
        do {
          uVar2 = uVar3 + 1;
          local_28 = uVar3;
          cVar1 = hb_bit_set_t::next(this,&local_24);
          if (cVar1 == '\0') break;
          uVar3 = uVar2;
        } while (uVar2 == local_24);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



uint hb_set_get_max(long param_1)

{
  hb_bit_set_t *this;
  char cVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  uint local_2c;
  uint local_28;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0xffffffff;
  if (*(char *)(param_1 + 0x40) == '\0') {
    hb_bit_set_t::previous((hb_bit_set_t *)(param_1 + 0x10),&local_2c);
    uVar3 = local_2c;
  }
  else {
    this = (hb_bit_set_t *)(param_1 + 0x10);
    local_28 = 0xffffffff;
    hb_bit_set_t::previous(this,&local_28);
    if (local_28 == 0xfffffffe) {
      local_28 = 0xffffffff;
      local_24 = 0xffffffff;
      cVar1 = hb_bit_set_t::previous(this,&local_24);
      uVar3 = 0xfffffffe;
      uVar2 = local_24;
      if (cVar1 != '\0') {
        do {
          uVar3 = uVar2 - 1;
          local_28 = uVar2;
          cVar1 = hb_bit_set_t::previous(this,&local_24);
          if (cVar1 == '\0') break;
          uVar2 = uVar3;
        } while (uVar3 == local_24);
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined1 hb_set_next(long param_1,uint *param_2)

{
  hb_bit_set_t *this;
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_38;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar1 = hb_bit_set_t::next((hb_bit_set_t *)(param_1 + 0x10),param_2);
  }
  else {
    uVar4 = *param_2;
    if (uVar4 == 0xfffffffe) {
      uVar3 = 0xffffffff;
      uVar1 = false;
    }
    else {
      this = (hb_bit_set_t *)(param_1 + 0x10);
      uVar3 = uVar4 + 1;
      uVar1 = true;
      local_38 = uVar4;
      hb_bit_set_t::next(this,&local_38);
      if (local_38 <= uVar3) {
        uVar3 = 0;
        local_34 = uVar4;
        cVar2 = hb_bit_set_t::next(this,&local_34);
        uVar4 = local_34;
        if (cVar2 != '\0') {
          do {
            local_38 = uVar4;
            cVar2 = hb_bit_set_t::next(this,&local_34);
            uVar3 = uVar4 + 1;
            if (cVar2 == '\0') {
              uVar1 = uVar4 != 0xfffffffe;
              goto LAB_00102b20;
            }
            uVar4 = uVar3;
          } while (uVar3 == local_34);
          uVar1 = uVar3 != 0xffffffff;
        }
      }
    }
LAB_00102b20:
    *param_2 = uVar3;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined1 hb_set_previous(long param_1,uint *param_2)

{
  hb_bit_set_t *this;
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_38;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar1 = hb_bit_set_t::previous((hb_bit_set_t *)(param_1 + 0x10),param_2);
  }
  else {
    uVar3 = *param_2;
    if (uVar3 == 0) {
      *param_2 = 0xffffffff;
      uVar1 = 0;
    }
    else {
      this = (hb_bit_set_t *)(param_1 + 0x10);
      local_38 = uVar3;
      hb_bit_set_t::previous(this,&local_38);
      if ((local_38 < uVar3 - 1) || (local_38 == 0xffffffff)) {
        *param_2 = uVar3 - 1;
        uVar1 = 1;
      }
      else {
        local_34 = uVar3;
        cVar2 = hb_bit_set_t::previous(this,&local_34);
        uVar3 = local_34;
        if (cVar2 == '\0') {
          uVar1 = true;
          uVar4 = 0xfffffffe;
        }
        else {
          do {
            local_38 = uVar3;
            cVar2 = hb_bit_set_t::previous(this,&local_34);
            uVar4 = uVar3 - 1;
            if (cVar2 == '\0') {
              uVar1 = uVar3 != 0;
              goto LAB_00102c88;
            }
            uVar3 = uVar4;
          } while (local_34 == uVar4);
          uVar1 = uVar4 != 0xffffffff;
        }
LAB_00102c88:
        *param_2 = uVar4;
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined8 hb_set_next_range(long param_1,uint *param_2,uint *param_3)

{
  hb_bit_set_t *this;
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_38;
  uint local_34;
  long local_30;
  
  uVar2 = *param_3;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_34 = uVar2;
    cVar1 = hb_bit_set_t::next((hb_bit_set_t *)(param_1 + 0x10),&local_34);
    if (cVar1 == '\0') {
LAB_00102df8:
      *param_2 = 0xffffffff;
      uVar3 = 0;
      *param_3 = 0xffffffff;
      goto LAB_00102d61;
    }
    *param_2 = local_34;
    uVar2 = local_34;
    do {
      *param_3 = uVar2;
      cVar1 = hb_bit_set_t::next((hb_bit_set_t *)(param_1 + 0x10),&local_34);
      if (cVar1 == '\0') break;
      uVar2 = *param_3 + 1;
    } while (uVar2 == local_34);
  }
  else {
    if (uVar2 == 0xfffffffe) goto LAB_00102df8;
    this = (hb_bit_set_t *)(param_1 + 0x10);
    uVar4 = uVar2 + 1;
    local_38 = uVar2;
    hb_bit_set_t::next(this,&local_38);
    if (uVar4 < local_38) {
      *param_3 = uVar4;
    }
    else {
      local_34 = uVar2;
      cVar1 = hb_bit_set_t::next(this,&local_34);
      uVar2 = local_34;
      if (cVar1 == '\0') {
        *param_3 = 0;
        uVar4 = 0;
      }
      else {
        do {
          uVar4 = uVar2 + 1;
          local_38 = uVar2;
          cVar1 = hb_bit_set_t::next(this,&local_34);
          if (cVar1 == '\0') break;
          uVar2 = uVar4;
        } while (local_34 == uVar4);
        *param_3 = uVar4;
        if (uVar4 == 0xffffffff) goto LAB_00102df8;
      }
    }
    *param_2 = uVar4;
    hb_bit_set_t::next(this,param_3);
    *param_3 = *param_3 - 1;
  }
  uVar3 = 1;
LAB_00102d61:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 hb_set_previous_range(long param_1,uint *param_2,uint *param_3)

{
  hb_bit_set_t *this;
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_38;
  uint local_34;
  long local_30;
  
  uVar3 = *param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_34 = uVar3;
    cVar1 = hb_bit_set_t::previous((hb_bit_set_t *)(param_1 + 0x10),&local_34);
    if (cVar1 == '\0') {
LAB_00102f60:
      *param_2 = 0xffffffff;
      uVar2 = 0;
      *param_3 = 0xffffffff;
      goto LAB_00102ec1;
    }
    *param_2 = local_34;
    *param_3 = local_34;
    while ((cVar1 = hb_bit_set_t::previous((hb_bit_set_t *)(param_1 + 0x10),&local_34),
           cVar1 != '\0' && (*param_2 - 1 == local_34))) {
      *param_2 = *param_2 - 1;
    }
  }
  else {
    if (uVar3 == 0) goto LAB_00102f60;
    this = (hb_bit_set_t *)(param_1 + 0x10);
    uVar4 = uVar3 - 1;
    local_38 = uVar3;
    hb_bit_set_t::previous(this,&local_38);
    if ((local_38 < uVar4) || (local_38 == 0xffffffff)) {
      *param_2 = uVar4;
    }
    else {
      local_34 = uVar3;
      cVar1 = hb_bit_set_t::previous(this,&local_34);
      uVar3 = local_34;
      if (cVar1 == '\0') {
        *param_2 = 0xfffffffe;
        uVar4 = 0xfffffffe;
      }
      else {
        do {
          uVar4 = uVar3 - 1;
          local_38 = uVar3;
          cVar1 = hb_bit_set_t::previous(this,&local_34);
          if (cVar1 == '\0') break;
          uVar3 = uVar4;
        } while (uVar4 == local_34);
        *param_2 = uVar4;
        if (uVar4 == 0xffffffff) goto LAB_00102f60;
      }
    }
    *param_3 = uVar4;
    hb_bit_set_t::previous(this,param_2);
    *param_2 = *param_2 + 1;
  }
  uVar2 = 1;
LAB_00102ec1:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void hb_set_next_many(long param_1,uint param_2,uint *param_3,uint param_4)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    hb_bit_set_t::next_many_inverted((hb_bit_set_t *)(param_1 + 0x10),param_2,param_3,param_4);
    return;
  }
  hb_bit_set_t::next_many((hb_bit_set_t *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}



/* hb_bit_set_t::resize(unsigned int, bool, bool) */

hb_bit_set_t __thiscall
hb_bit_set_t::resize(hb_bit_set_t *this,uint param_1,bool param_2,bool param_3)

{
  hb_bit_set_t hVar1;
  void *pvVar2;
  hb_bit_set_t hVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  hVar1 = *this;
  if (hVar1 == (hb_bit_set_t)0x0) {
    return (hb_bit_set_t)0x0;
  }
  uVar4 = *(uint *)(this + 0x24);
  uVar7 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0x20);
  hVar3 = (hb_bit_set_t)(param_1 == 1 && uVar4 == 0);
  if (param_1 != 1 || uVar4 != 0) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    if ((int)uVar5 < 0) goto LAB_001030fc;
    hVar3 = (hb_bit_set_t)param_3;
    if (param_3) {
      uVar8 = param_1;
      if (param_1 <= uVar4) {
        uVar8 = uVar4;
      }
      if (uVar5 < uVar8) {
        if (uVar8 < 0x38e38e4) goto LAB_00103289;
      }
      else {
        if (uVar5 >> 2 <= uVar8) goto LAB_00103043;
        if (uVar8 < 0x38e38e4) {
          pvVar2 = *(void **)(this + 0x28);
          if (uVar8 != 0) goto LAB_00103290;
          free(pvVar2);
          uVar8 = 0;
          pvVar2 = (void *)0x0;
          goto LAB_001032ac;
        }
      }
    }
    else {
      uVar8 = uVar5;
      if (param_1 <= uVar5) goto LAB_00103043;
      do {
        uVar8 = (uVar8 >> 1) + 8 + uVar8;
      } while (uVar8 < param_1);
      if (uVar8 < 0x38e38e4) {
        pvVar2 = *(void **)(this + 0x28);
        goto LAB_00103290;
      }
    }
LAB_001030f7:
    *(uint *)(this + 0x20) = ~uVar5;
    goto LAB_001030fc;
  }
  if ((int)uVar5 < 0) goto LAB_001030fc;
  if (uVar5 == 0) {
    param_1 = 1;
    uVar8 = 1;
LAB_00103289:
    pvVar2 = *(void **)(this + 0x28);
    param_3 = (bool)hVar1;
LAB_00103290:
    pvVar2 = realloc(pvVar2,(ulong)uVar8 * 0x48);
    if (pvVar2 == (void *)0x0) {
      uVar5 = *(uint *)(this + 0x20);
      if (uVar5 < uVar8) goto LAB_001030f7;
    }
    else {
LAB_001032ac:
      *(void **)(this + 0x28) = pvVar2;
      *(uint *)(this + 0x20) = uVar8;
    }
    uVar7 = (ulong)*(uint *)(this + 0x24);
    hVar3 = (hb_bit_set_t)param_3;
  }
  else {
    if (7 < uVar5) {
      pvVar2 = *(void **)(this + 0x28);
      uVar8 = 1;
      param_1 = 1;
      param_3 = (bool)hVar3;
      goto LAB_00103290;
    }
    uVar7 = 0;
    param_1 = 1;
  }
LAB_00103043:
  if (((uint)uVar7 < param_1) && (param_2)) {
    uVar4 = (param_1 - (uint)uVar7) * 0x48;
    if (uVar4 != 0) {
      memset((void *)(*(long *)(this + 0x28) + uVar7 * 0x48),0,(ulong)uVar4);
    }
  }
  uVar4 = *(uint *)(this + 0x10);
  *(uint *)(this + 0x24) = param_1;
  if (-1 < (int)uVar4) {
    if (hVar3 == (hb_bit_set_t)0x0) {
      uVar5 = uVar4;
      if (uVar4 < param_1) {
        do {
          uVar5 = (uVar5 >> 1) + 8 + uVar5;
        } while (uVar5 < param_1);
        if (uVar5 < 0x20000000) {
          pvVar2 = *(void **)(this + 0x18);
          uVar7 = (ulong)uVar5;
          goto LAB_001032f4;
        }
        *(uint *)(this + 0x10) = ~uVar4;
        uVar5 = *(uint *)(this + 0x20);
        if ((int)uVar5 < 0) goto LAB_001030fc;
        uVar7 = (ulong)uVar5;
        uVar4 = 0;
        if (-1 < (int)*(uint *)(this + 0x14)) {
          uVar4 = *(uint *)(this + 0x14);
        }
        goto LAB_0010316b;
      }
    }
    else {
      uVar8 = *(uint *)(this + 0x14);
      uVar6 = (ulong)uVar8;
      uVar5 = param_1;
      if (param_1 <= uVar8) {
        uVar5 = uVar8;
      }
      uVar7 = (ulong)uVar5;
      if (uVar4 < uVar5) {
        if (0x1fffffff < uVar5) {
          *(uint *)(this + 0x10) = ~uVar4;
          uVar5 = *(uint *)(this + 0x20);
          if ((int)uVar5 < 0) goto LAB_001030fc;
          uVar6 = 0;
          if (-1 < (int)uVar8) {
            uVar6 = (ulong)uVar8;
          }
          goto LAB_001031f6;
        }
        pvVar2 = *(void **)(this + 0x18);
LAB_001032f4:
        uVar4 = (uint)uVar7;
        pvVar2 = realloc(pvVar2,uVar7 << 3);
        if (pvVar2 == (void *)0x0) {
          uVar5 = *(uint *)(this + 0x14);
          uVar6 = (ulong)uVar5;
          if (uVar4 <= *(uint *)(this + 0x10)) goto LAB_0010310f;
          *(uint *)(this + 0x10) = ~*(uint *)(this + 0x10);
          goto LAB_00103353;
        }
      }
      else {
        if (uVar4 >> 2 <= uVar5) goto LAB_0010310f;
        pvVar2 = *(void **)(this + 0x18);
        if (uVar5 != 0) goto LAB_001032f4;
        free(pvVar2);
        uVar4 = 0;
        pvVar2 = (void *)0x0;
      }
      *(void **)(this + 0x18) = pvVar2;
      *(uint *)(this + 0x10) = uVar4;
    }
    uVar6 = (ulong)*(uint *)(this + 0x14);
LAB_0010310f:
    if (((uint)uVar6 < param_1) && (param_2)) {
      uVar4 = (param_1 - (uint)uVar6) * 8;
      if (uVar4 != 0) {
        memset((void *)(*(long *)(this + 0x18) + uVar6 * 8),0,(ulong)uVar4);
      }
    }
    *(uint *)(this + 0x14) = param_1;
    return hVar1;
  }
  uVar5 = *(uint *)(this + 0x14);
LAB_00103353:
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar6 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0x20);
  if ((int)uVar5 < 0) goto LAB_001030fc;
  uVar7 = (ulong)uVar5;
  if (hVar3 == (hb_bit_set_t)0x0) {
LAB_0010316b:
    uVar6 = uVar7;
    if (uVar5 < uVar4) {
      do {
        uVar8 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
        uVar6 = (ulong)uVar8;
      } while (uVar8 < uVar4);
      goto LAB_00103180;
    }
LAB_001031b4:
    uVar8 = *(uint *)(this + 0x24);
  }
  else {
LAB_001031f6:
    uVar8 = *(uint *)(this + 0x24);
    uVar4 = (uint)uVar6;
    if (uVar4 <= uVar8) {
      uVar6 = (ulong)uVar8;
    }
    uVar9 = (uint)uVar6;
    if (uVar5 < uVar9) {
LAB_00103180:
      if (0x38e38e3 < (uint)uVar6) goto LAB_001030f7;
      pvVar2 = *(void **)(this + 0x28);
LAB_00103191:
      uVar8 = (uint)uVar6;
      pvVar2 = realloc(pvVar2,uVar6 * 0x48);
      if (pvVar2 == (void *)0x0) {
        uVar5 = *(uint *)(this + 0x20);
        if (uVar5 < uVar8) goto LAB_001030f7;
      }
      else {
LAB_001031ad:
        *(void **)(this + 0x28) = pvVar2;
        *(uint *)(this + 0x20) = uVar8;
      }
      goto LAB_001031b4;
    }
    if (uVar9 < uVar5 >> 2) {
      if (0x38e38e3 < uVar9) goto LAB_001030f7;
      pvVar2 = *(void **)(this + 0x28);
      if (uVar9 != 0) goto LAB_00103191;
      free(pvVar2);
      uVar8 = 0;
      pvVar2 = (void *)0x0;
      goto LAB_001031ad;
    }
  }
  if ((uVar8 < uVar4) && (param_2)) {
    uVar5 = (uVar4 - uVar8) * 0x48;
    if (uVar5 != 0) {
      memset((void *)(*(long *)(this + 0x28) + (ulong)uVar8 * 0x48),0,(ulong)uVar5);
    }
  }
  *(uint *)(this + 0x24) = uVar4;
LAB_001030fc:
  *this = (hb_bit_set_t)0x0;
  return (hb_bit_set_t)0x0;
}



/* hb_bit_set_t::is_equal(hb_bit_set_t const&) const */

undefined8 __thiscall hb_bit_set_t::is_equal(hb_bit_set_t *this,hb_bit_set_t *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  
  if (((*(int *)(this + 4) != -1) && (*(int *)(param_1 + 4) != -1)) &&
     (*(int *)(this + 4) != *(int *)(param_1 + 4))) {
    return 0;
  }
  uVar3 = *(uint *)(this + 0x24);
  uVar4 = *(uint *)(param_1 + 0x24);
  if ((uVar3 == 0) || (uVar4 == 0)) {
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = 0;
    uVar7 = 0;
    do {
      uVar8 = (uint)uVar9;
      piVar10 = (int *)(*(long *)(this + 0x18) + (ulong)uVar7 * 8);
      piVar2 = (int *)(*(long *)(this + 0x28) + (ulong)(uint)piVar10[1] * 0x48);
      if (*piVar2 == -1) {
        plVar5 = (long *)(piVar2 + 2);
        do {
          if (*plVar5 != 0) goto LAB_00103474;
          plVar5 = plVar5 + 1;
        } while (plVar5 != (long *)(piVar2 + 0x12));
LAB_001034e7:
        uVar7 = uVar7 + 1;
      }
      else {
        if (*piVar2 == 0) goto LAB_001034e7;
LAB_00103474:
        piVar11 = (int *)(*(long *)(param_1 + 0x18) + uVar9 * 8);
        piVar1 = (int *)(*(long *)(param_1 + 0x28) + (ulong)(uint)piVar11[1] * 0x48);
        if (*piVar1 == -1) {
          plVar5 = (long *)(piVar1 + 2);
          do {
            if (*plVar5 != 0) goto LAB_00103593;
            plVar5 = plVar5 + 1;
          } while (plVar5 != (long *)(piVar1 + 0x12));
        }
        else if (*piVar1 != 0) {
LAB_00103593:
          if (*(uint *)(this + 0x14) <= uVar7) {
            piVar10 = (int *)&_hb_NullPool;
          }
          if (*(uint *)(param_1 + 0x14) <= uVar8) {
            piVar11 = (int *)&_hb_NullPool;
          }
          if (*piVar10 != *piVar11) {
            return 0;
          }
          lVar6 = 8;
          do {
            if (*(long *)((long)piVar2 + lVar6) != *(long *)((long)piVar1 + lVar6)) {
              return 0;
            }
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0x48);
          uVar7 = uVar7 + 1;
        }
        uVar8 = uVar8 + 1;
        uVar9 = (ulong)uVar8;
      }
      if (uVar3 <= uVar7) goto LAB_001034ef;
      uVar8 = (uint)uVar9;
    } while (uVar8 < uVar4);
  }
  if (uVar7 < uVar3) {
    lVar6 = *(long *)(this + 0x18) + (ulong)uVar7 * 8;
    do {
      piVar10 = (int *)(*(long *)(this + 0x28) + (ulong)*(uint *)(lVar6 + 4) * 0x48);
      if (*piVar10 == -1) {
        plVar5 = (long *)(piVar10 + 2);
        do {
          if (*plVar5 != 0) {
            return 0;
          }
          plVar5 = plVar5 + 1;
        } while ((long *)(piVar10 + 0x12) != plVar5);
      }
      else if (*piVar10 != 0) {
        return 0;
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != *(long *)(this + 0x18) + 8 + ((ulong)uVar7 + (ulong)((uVar3 - 1) - uVar7)) * 8
            );
  }
LAB_001034ef:
  if (uVar8 < uVar4) {
    lVar6 = *(long *)(param_1 + 0x18) + (ulong)uVar8 * 8;
    do {
      piVar10 = (int *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(lVar6 + 4) * 0x48);
      if (*piVar10 == -1) {
        plVar5 = (long *)(piVar10 + 2);
        do {
          if (*plVar5 != 0) {
            return 0;
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != (long *)(piVar10 + 0x12));
      }
      else if (*piVar10 != 0) {
        return 0;
      }
      lVar6 = lVar6 + 8;
    } while (*(long *)(param_1 + 0x18) + 8 + ((ulong)((uVar4 - 1) - uVar8) + (ulong)uVar8) * 8 !=
             lVar6);
  }
  return 1;
}



/* hb_bit_set_t::is_subset(hb_bit_set_t const&) const */

undefined8 __thiscall hb_bit_set_t::is_subset(hb_bit_set_t *this,hb_bit_set_t *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  long in_FS_OFFSET;
  ulong local_b8 [9];
  ulong local_70;
  ulong local_68 [9];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(this + 4) == 0xffffffff) || (*(uint *)(this + 4) <= *(uint *)(param_1 + 4))) {
    uVar3 = *(uint *)(this + 0x14);
    if (uVar3 == 0) {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      lVar11 = 0;
      uVar8 = 0;
      uVar9 = 0;
      do {
        if (lVar11 == (ulong)*(uint *)(param_1 + 0x14) << 3) break;
        puVar1 = (uint *)(*(long *)(this + 0x18) + uVar9 * 8);
        puVar12 = (uint *)(*(long *)(param_1 + 0x18) + lVar11);
        uVar7 = *puVar1;
        puVar4 = (ulong *)((ulong)puVar1[1] * 0x48 + *(long *)(this + 0x28));
        local_b8[0] = *puVar4;
        local_b8[1] = puVar4[1];
        local_b8[2] = puVar4[2];
        local_b8[3] = puVar4[3];
        local_b8[8] = puVar4[8];
        local_b8[4] = puVar4[4];
        local_b8[5] = puVar4[5];
        local_b8[6] = puVar4[6];
        local_b8[7] = puVar4[7];
        if (uVar7 < *puVar12) {
          if ((uint)local_b8[0] == 0xffffffff) {
            puVar4 = local_b8 + 1;
            do {
              if (*puVar4 != 0) goto LAB_00103870;
              puVar4 = puVar4 + 1;
            } while (puVar4 != &local_70);
          }
          else if ((uint)local_b8[0] != 0) goto LAB_00103870;
          puVar4 = (ulong *)(*(long *)(param_1 + 0x28) + (ulong)puVar12[1] * 0x48);
          local_68[0] = *puVar4;
          local_68[1] = puVar4[1];
          local_68[2] = puVar4[2];
          local_68[3] = puVar4[3];
          local_68[4] = puVar4[4];
          local_68[5] = puVar4[5];
          local_68[6] = puVar4[6];
          local_68[7] = puVar4[7];
          local_68[8] = puVar4[8];
LAB_0010377d:
          lVar10 = 8;
          do {
            if ((~*(ulong *)((long)local_68 + lVar10) & *(ulong *)((long)local_b8 + lVar10)) != 0)
            goto LAB_00103870;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0x48);
          uVar8 = (ulong)((int)uVar8 + 1);
          uVar9 = uVar8;
        }
        else if (uVar7 <= *puVar12) {
          puVar4 = (ulong *)(*(long *)(param_1 + 0x28) + (ulong)puVar12[1] * 0x48);
          local_68[0] = *puVar4;
          local_68[1] = puVar4[1];
          local_68[2] = puVar4[2];
          local_68[3] = puVar4[3];
          local_68[8] = puVar4[8];
          local_68[4] = puVar4[4];
          local_68[5] = puVar4[5];
          local_68[6] = puVar4[6];
          local_68[7] = puVar4[7];
          if (((uint)local_b8[0] == 0xffffffff) || ((uint)local_b8[0] <= (uint)*puVar4))
          goto LAB_0010377d;
          goto LAB_00103870;
        }
        lVar11 = lVar11 + 8;
      } while ((uint)uVar8 < uVar3);
    }
    lVar11 = uVar9 * 8;
    uVar7 = (uint)uVar8;
    while (uVar7 < uVar3) {
      piVar2 = (int *)(*(long *)(this + 0x28) +
                      (ulong)*(uint *)(*(long *)(this + 0x18) + 4 + lVar11) * 0x48);
      if (*piVar2 == -1) {
        plVar6 = (long *)(piVar2 + 2);
        do {
          if (*plVar6 != 0) goto LAB_00103870;
          plVar6 = plVar6 + 1;
        } while (plVar6 != (long *)(piVar2 + 0x12));
      }
      else if (*piVar2 != 0) goto LAB_00103870;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar7;
      lVar11 = lVar11 + 8;
    }
    uVar5 = 1;
  }
  else {
LAB_00103870:
    uVar5 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_bit_set_t::compact(hb_vector_t<unsigned int, false>&, unsigned int) */

void __thiscall hb_bit_set_t::compact(hb_bit_set_t *this,hb_vector_t *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *__s;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  
  __s = *(uint **)(param_1 + 8);
  if (*(uint *)(param_1 + 4) != 0) {
    __s = (uint *)memset(__s,0xff,(ulong)*(uint *)(param_1 + 4) * 4);
  }
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      uVar5 = (uint)uVar6;
      if (uVar5 < *(uint *)(this + 0x14)) {
        puVar9 = (undefined *)(*(long *)(this + 0x18) + uVar6 * 8);
      }
      else {
        __hb_CrapPool = CONCAT44(_DAT_0010603c,__hb_NullPool);
        puVar9 = &_hb_CrapPool;
      }
      puVar7 = __s + *(uint *)(puVar9 + 4);
      if (*(uint *)(param_1 + 4) <= *(uint *)(puVar9 + 4)) {
        puVar7 = (uint *)&_hb_CrapPool;
        __hb_CrapPool = CONCAT44(_DAT_00106044,__hb_NullPool);
      }
      uVar6 = uVar6 + 1;
      *puVar7 = uVar5;
    } while (uVar6 != param_2);
  }
  if (*(uint *)(this + 0x24) != 0) {
    puVar7 = __s + *(uint *)(this + 0x24);
    lVar10 = 0;
    uVar5 = 0;
    uVar6 = 0;
    do {
      uVar11 = (uint)uVar6;
      if (uVar5 < *(uint *)(param_1 + 4)) {
        uVar8 = (ulong)*__s;
        if (*__s != 0xffffffff) {
          puVar12 = __s;
          if (uVar11 < uVar5) {
LAB_001039a7:
            lVar3 = *(long *)(this + 0x28);
            uVar4 = ((undefined8 *)(lVar3 + lVar10))[1];
            puVar1 = (undefined8 *)(lVar3 + uVar6 * 0x48);
            *puVar1 = *(undefined8 *)(lVar3 + lVar10);
            puVar1[1] = uVar4;
            puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar10);
            uVar4 = puVar2[1];
            puVar1[2] = *puVar2;
            puVar1[3] = uVar4;
            puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar10);
            uVar4 = puVar2[1];
            puVar1[4] = *puVar2;
            puVar1[5] = uVar4;
            puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar10);
            uVar4 = puVar2[1];
            puVar1[6] = *puVar2;
            puVar1[7] = uVar4;
            puVar1[8] = *(undefined8 *)(lVar3 + 0x40 + lVar10);
            uVar8 = (ulong)*puVar12;
          }
LAB_001039ec:
          if ((uint)uVar8 < *(uint *)(this + 0x14)) {
            puVar9 = (undefined *)(*(long *)(this + 0x18) + uVar8 * 8);
          }
          else {
            __hb_CrapPool = CONCAT44(_DAT_0010603c,__hb_NullPool);
            puVar9 = &_hb_CrapPool;
          }
          *(uint *)(puVar9 + 4) = uVar11;
          uVar6 = (ulong)(uVar11 + 1);
        }
      }
      else {
        uVar8 = (ulong)__hb_NullPool;
        if (__hb_NullPool != 0xffffffff) {
          if (uVar11 < uVar5) {
            puVar12 = (uint *)&_hb_NullPool;
            goto LAB_001039a7;
          }
          goto LAB_001039ec;
        }
      }
      __s = __s + 1;
      uVar5 = uVar5 + 1;
      lVar10 = lVar10 + 0x48;
    } while (puVar7 != __s);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_bit_set_t::del_pages(int, int) */

void __thiscall hb_bit_set_t::del_pages(hb_bit_set_t *this,int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  void *__s;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_48 [2];
  void *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 <= param_2) {
    iVar8 = *(int *)(this + 0x24);
    local_48[0] = 0;
    local_48[1] = 0;
    local_40 = (void *)0x0;
    if (iVar8 < 1) {
      uVar5 = *(uint *)(this + 0x14);
      local_48[0] = 0;
      local_48[1] = 0;
      iVar8 = 0;
      if (uVar5 == 0) {
        compact(this,(hb_vector_t *)local_48,0);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          resize(this,0,true,false);
          return;
        }
        goto LAB_00103c9c;
      }
LAB_00103b15:
      piVar1 = *(int **)(this + 0x18);
      uVar7 = 0;
      piVar3 = piVar1;
      do {
        while( true ) {
          uVar6 = (uint)uVar7;
          if ((param_1 <= *piVar3) && (*piVar3 <= param_2)) break;
          piVar4 = piVar1 + uVar7 * 2;
          if (uVar5 <= uVar6) {
            __hb_CrapPool = __hb_NullPool;
            piVar4 = (int *)&_hb_CrapPool;
          }
          uVar2 = *(undefined8 *)piVar3;
          piVar3 = piVar3 + 2;
          uVar7 = (ulong)(uVar6 + 1);
          *(undefined8 *)piVar4 = uVar2;
          uVar6 = uVar6 + 1;
          if (piVar1 + (ulong)uVar5 * 2 == piVar3) goto LAB_00103b6a;
        }
        piVar3 = piVar3 + 2;
      } while (piVar1 + (ulong)uVar5 * 2 != piVar3);
LAB_00103b6a:
      compact(this,(hb_vector_t *)local_48,uVar6);
      resize(this,uVar6,true,false);
      if (iVar8 != 0) {
LAB_00103b93:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          free(local_40);
          return;
        }
        goto LAB_00103c9c;
      }
    }
    else {
      if (iVar8 < 0x40000000) {
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        __s = malloc((long)iVar8 << 2);
        if (__s != (void *)0x0) {
          local_48[0] = iVar8;
          local_40 = __s;
          memset(__s,0,(ulong)(uint)(iVar8 * 4));
          uVar5 = *(uint *)(this + 0x14);
          local_48[1] = iVar8;
          if (uVar5 != 0) goto LAB_00103b15;
          compact(this,(hb_vector_t *)local_48,0);
          resize(this,0,true,false);
          goto LAB_00103b93;
        }
      }
      *this = (hb_bit_set_t)0x0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103c9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_bit_set_t::process_(hb_vector_size_t<unsigned long long, 64u> (*)(hb_vector_size_t<unsigned
   long long, 64u> const&, hb_vector_size_t<unsigned long long, 64u> const&), bool, bool,
   hb_bit_set_t const&) */

void __thiscall
hb_bit_set_t::process_
          (hb_bit_set_t *this,
          _func_hb_vector_size_t_hb_vector_size_t_ptr_hb_vector_size_t_ptr *param_1,bool param_2,
          bool param_3,hb_bit_set_t *param_4)

{
  hb_bit_set_t hVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  void *__s;
  uint *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  long in_FS_OFFSET;
  hb_bit_set_t hVar27;
  bool bVar28;
  uint local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  hVar1 = *this;
  if (hVar1 == (hb_bit_set_t)0x0) {
LAB_00104100:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    *(undefined4 *)(this + 4) = 0xffffffff;
    uVar9 = *(uint *)(this + 0x24);
    local_98 = 0;
    uVar15 = *(uint *)(param_4 + 0x24);
    local_90 = (void *)0x0;
    if (param_2) {
      hVar27 = (hb_bit_set_t)(uVar15 != 0);
      if ((uVar9 == 0) || (local_a0 = 0, !(bool)hVar27)) {
        uVar14 = 0;
        local_a0 = 0;
        uVar21 = uVar9;
      }
      else {
LAB_00103d47:
        uVar17 = *(uint *)(this + 0x14);
        uVar2 = *(uint *)(param_4 + 0x14);
        uVar25 = 0;
        uVar14 = 0;
        uVar8 = 0;
        uVar21 = 0;
        do {
          if (uVar8 < uVar17) {
            puVar19 = (uint *)(*(long *)(this + 0x18) + (ulong)uVar8 * 8);
          }
          else {
            __hb_CrapPool = __hb_NullPool;
            puVar19 = (uint *)&_hb_CrapPool;
          }
          uVar18 = *puVar19;
          puVar11 = (uint *)&_hb_NullPool;
          if (uVar14 < uVar2) {
            puVar11 = (uint *)(*(long *)(param_4 + 0x18) + (ulong)uVar14 * 8);
          }
          uVar16 = *puVar11;
          if (uVar18 == uVar16) {
            if (!param_2) {
              if (uVar25 < uVar8) {
                if (uVar17 <= uVar8) {
                  __hb_CrapPool = __hb_NullPool;
                }
                if (uVar25 < uVar17) {
                  puVar13 = (undefined8 *)(*(long *)(this + 0x18) + (ulong)uVar25 * 8);
                }
                else {
                  __hb_CrapPool = __hb_NullPool;
                  puVar13 = (undefined8 *)&_hb_CrapPool;
                }
                *puVar13 = *(undefined8 *)puVar19;
              }
              uVar25 = uVar25 + 1;
            }
            uVar8 = uVar8 + 1;
            uVar21 = uVar21 + 1;
            uVar14 = uVar14 + 1;
          }
          else {
            if (uVar17 <= uVar8) {
              __hb_CrapPool = __hb_NullPool;
              uVar18 = *puVar19;
              uVar16 = *puVar11;
            }
            if (uVar18 < uVar16) {
              uVar21 = (uVar21 + 1) - (uint)!param_2;
              uVar8 = uVar8 + 1;
            }
            else {
              uVar21 = (uVar21 + 1) - (uint)!param_3;
              uVar14 = uVar14 + 1;
            }
          }
        } while ((uVar8 < uVar9) && (uVar14 < uVar15));
        hVar27 = hVar1;
        if (!param_2) goto LAB_00103e0d;
        uVar21 = (uVar21 + uVar9) - uVar8;
        hVar27 = (hb_bit_set_t)param_2;
      }
      if (param_3) {
        uVar21 = (uVar15 + uVar21) - uVar14;
      }
LAB_00103e30:
      uVar22 = (ulong)uVar21;
      cVar7 = resize(this,uVar21,true,false);
      if (cVar7 != '\0') {
        uVar14 = uVar9;
        if ((uVar9 != 0) && (hVar27 != (hb_bit_set_t)0x0)) {
          uVar23 = (ulong)uVar9;
          lVar20 = *(long *)(this + 0x18);
          do {
            uVar14 = (uint)uVar23;
            uVar25 = uVar9 - 1;
            uVar17 = uVar15 - 1;
            puVar19 = (uint *)(lVar20 + (ulong)uVar25 * 8);
            puVar11 = (uint *)(*(long *)(param_4 + 0x18) + (ulong)uVar17 * 8);
            uVar2 = *puVar11;
            iVar26 = (int)uVar22;
            if (*puVar19 == uVar2) {
              uVar22 = (ulong)(iVar26 - 1);
              *(undefined8 *)(lVar20 + uVar22 * 8) = *(undefined8 *)puVar19;
              (*param_1)((hb_vector_size_t_conflict *)&local_88,
                         (hb_vector_size_t_conflict *)
                         (*(long *)(this + 0x28) + 8 + (ulong)puVar19[1] * 0x48),
                         (hb_vector_size_t_conflict *)
                         (*(long *)(param_4 + 0x28) + 8 + (ulong)puVar11[1] * 0x48));
              lVar20 = *(long *)(this + 0x18);
              puVar12 = (undefined4 *)
                        (*(long *)(this + 0x28) + (ulong)*(uint *)(lVar20 + 4 + uVar22 * 8) * 0x48);
              *(undefined8 *)(puVar12 + 2) = local_88;
              *(undefined8 *)(puVar12 + 4) = uStack_80;
              *(undefined8 *)(puVar12 + 6) = local_78;
              *(undefined8 *)(puVar12 + 8) = uStack_70;
              *puVar12 = 0xffffffff;
              *(undefined8 *)(puVar12 + 10) = local_68;
              *(undefined8 *)(puVar12 + 0xc) = uStack_60;
              *(undefined8 *)(puVar12 + 0xe) = local_58;
              *(undefined8 *)(puVar12 + 0x10) = uStack_50;
              uVar9 = uVar25;
              uVar15 = uVar17;
            }
            else {
              uVar24 = uVar23;
              if (uVar2 < *puVar19) {
                uVar9 = uVar25;
                uVar17 = uVar15;
                if (param_2) {
                  uVar22 = (ulong)(iVar26 - 1);
                  *(undefined8 *)(lVar20 + uVar22 * 8) = *(undefined8 *)puVar19;
                }
              }
              else if (param_3) {
                uVar22 = (ulong)(iVar26 - 1);
                lVar3 = *(long *)(this + 0x28);
                *(ulong *)(lVar20 + uVar22 * 8) = CONCAT44(uVar14,uVar2);
                uVar24 = (ulong)(uVar14 + 1);
                puVar13 = (undefined8 *)(lVar3 + uVar23 * 0x48);
                puVar10 = (undefined8 *)(*(long *)(param_4 + 0x28) + (ulong)puVar11[1] * 0x48);
                uVar6 = puVar10[1];
                *puVar13 = *puVar10;
                puVar13[1] = uVar6;
                uVar6 = puVar10[3];
                puVar13[2] = puVar10[2];
                puVar13[3] = uVar6;
                uVar6 = puVar10[5];
                puVar13[4] = puVar10[4];
                puVar13[5] = uVar6;
                uVar6 = puVar10[7];
                puVar13[6] = puVar10[6];
                puVar13[7] = uVar6;
                puVar13[8] = puVar10[8];
              }
              uVar14 = (uint)uVar24;
              uVar23 = uVar24;
              uVar15 = uVar17;
            }
          } while ((uVar9 != 0) && (uVar14 = (uint)uVar23, uVar15 != 0));
        }
        if ((param_2) && (uVar9 != 0)) {
          puVar13 = *(undefined8 **)(this + 0x18);
          iVar26 = (int)uVar22;
          puVar10 = puVar13 + (uVar9 - 1);
          do {
            uVar22 = (ulong)((int)uVar22 - 1);
            puVar13[uVar22] = *puVar10;
            bVar28 = puVar13 != puVar10;
            puVar10 = puVar10 + -1;
          } while (bVar28);
          uVar22 = (ulong)(iVar26 - uVar9);
        }
        if ((param_3) && (uVar15 != 0)) {
          iVar26 = (int)uVar22;
          lVar20 = *(long *)(this + 0x18);
          lVar3 = *(long *)(param_4 + 0x28);
          lVar4 = *(long *)(this + 0x28);
          puVar12 = (undefined4 *)(*(long *)(param_4 + 0x18) + (ulong)(uVar15 - 1) * 8);
          do {
            iVar5 = (int)uVar22;
            uVar25 = iVar5 - 1;
            uVar22 = (ulong)uVar25;
            uVar9 = (uVar14 + iVar26) - iVar5;
            puVar13 = (undefined8 *)(lVar4 + (ulong)uVar9 * 0x48);
            *(ulong *)(lVar20 + uVar22 * 8) = CONCAT44(uVar9,*puVar12);
            puVar10 = (undefined8 *)(lVar3 + (ulong)(uint)puVar12[1] * 0x48);
            uVar6 = puVar10[1];
            *puVar13 = *puVar10;
            puVar13[1] = uVar6;
            uVar6 = puVar10[3];
            puVar13[2] = puVar10[2];
            puVar13[3] = uVar6;
            uVar6 = puVar10[5];
            puVar13[4] = puVar10[4];
            puVar13[5] = uVar6;
            uVar6 = puVar10[7];
            puVar13[6] = puVar10[6];
            puVar13[7] = uVar6;
            puVar13[8] = puVar10[8];
            puVar12 = puVar12 + -2;
          } while (uVar25 != iVar26 - uVar15);
        }
        resize(this,uVar21,true,false);
      }
      if (local_a0 == 0) goto LAB_00104100;
    }
    else {
      uVar21 = 0;
      if (-1 < (int)uVar9) {
        uVar21 = uVar9;
      }
      if ((int)uVar9 < 1) {
        local_a0 = 0;
LAB_00104208:
        hVar27 = (hb_bit_set_t)(uVar15 != 0);
        local_98 = CONCAT44(uVar21,(undefined4)local_98);
        if ((uVar9 != 0) && ((bool)hVar27)) goto LAB_00103d47;
        uVar14 = 0;
        uVar21 = 0;
        uVar25 = 0;
LAB_00103e0d:
        uVar9 = uVar25;
        if (param_3) {
          uVar21 = (uVar15 + uVar21) - uVar14;
        }
        compact(this,(hb_vector_t *)&local_98,uVar9);
        goto LAB_00103e30;
      }
      if (((int)uVar9 < 0x40000000) && (__s = malloc((long)(int)uVar21 << 2), __s != (void *)0x0)) {
        local_98 = CONCAT44(local_98._4_4_,uVar21);
        local_90 = __s;
        memset(__s,0,(ulong)(uVar21 * 4));
        local_a0 = uVar21;
        goto LAB_00104208;
      }
      *this = (hb_bit_set_t)0x0;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      free(local_90);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_bit_set_t::next(unsigned int*) const */

undefined8 __thiscall hb_bit_set_t::next(hb_bit_set_t *this,uint *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  
  uVar3 = *param_1;
  if (uVar3 == 0xffffffff) {
    uVar3 = *(uint *)(this + 0x24);
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        piVar15 = (int *)&_hb_NullPool;
        if ((uint)uVar8 < *(uint *)(this + 0x14)) {
          piVar15 = (int *)(*(long *)(this + 0x18) + uVar8 * 8);
        }
        piVar11 = (int *)&_hb_NullPool;
        if ((uint)piVar15[1] < uVar3) {
          piVar11 = (int *)(*(long *)(this + 0x28) + (ulong)(uint)piVar15[1] * 0x48);
        }
        if (*piVar11 == -1) {
          plVar6 = (long *)(piVar11 + 2);
          do {
            if (*plVar6 != 0) goto LAB_0010447f;
            plVar6 = plVar6 + 1;
          } while (plVar6 != (long *)(piVar11 + 0x12));
        }
        else if (*piVar11 != 0) {
LAB_0010447f:
          uVar8 = 0;
          goto LAB_00104487;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    uVar7 = 0;
    uVar3 = 0xffffffff;
LAB_0010451a:
    *param_1 = uVar3;
    return uVar7;
  }
  lVar5 = *(long *)(this + 0x18);
  uVar9 = *(uint *)(this + 8);
  uVar2 = *(uint *)(this + 0x14);
  uVar16 = uVar3 >> 9;
  if (uVar9 < uVar2) {
    puVar13 = (uint *)(lVar5 + (ulong)uVar9 * 8);
    if (*puVar13 != uVar16) {
      if (-1 < (int)(uVar2 - 1)) goto LAB_001044b1;
      uVar9 = 0;
      goto LAB_001044e4;
    }
    lVar14 = *(long *)(this + 0x28);
LAB_0010430a:
    uVar2 = uVar3 + 1 & 0x1ff;
    if (uVar2 != 0) {
      uVar4 = (ulong)(uVar2 >> 6);
      lVar1 = lVar14 + (ulong)puVar13[1] * 0x48;
      uVar8 = -(1L << ((byte)(uVar3 + 1) & 0x3f)) & *(ulong *)(lVar1 + 8 + uVar4 * 8);
      while( true ) {
        if (uVar8 != 0) {
          iVar12 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            iVar12 = iVar12 + 1;
          }
          uVar3 = (int)uVar4 * 0x40 + iVar12;
          *param_1 = uVar3;
          *param_1 = uVar3 + *puVar13 * 0x200;
          return 1;
        }
        uVar4 = uVar4 + 1;
        if ((int)uVar4 == 8) break;
        uVar8 = *(ulong *)(lVar1 + 8 + uVar4 * 8);
      }
    }
    *param_1 = 0xffffffff;
    uVar9 = uVar9 + 1;
  }
  else {
    if ((int)(uVar2 - 1) < 0) {
      uVar9 = 0;
    }
    else {
LAB_001044b1:
      iVar12 = uVar2 - 1;
      uVar9 = 0;
      do {
        while( true ) {
          uVar10 = iVar12 + uVar9 >> 1;
          uVar3 = *(uint *)(lVar5 + (ulong)uVar10 * 8);
          if ((int)(uVar16 - uVar3) < 0) break;
          uVar9 = uVar10;
          if ((uVar16 == uVar3) || (uVar9 = uVar10 + 1, iVar12 < (int)uVar9)) goto LAB_001044db;
        }
        iVar12 = uVar10 - 1;
      } while ((int)uVar9 <= iVar12);
    }
LAB_001044db:
    if (uVar2 <= uVar9) goto LAB_001043c8;
LAB_001044e4:
    *(uint *)(this + 8) = uVar9;
    puVar13 = (uint *)(lVar5 + (ulong)uVar9 * 8);
    lVar14 = *(long *)(this + 0x28);
    if (*puVar13 == uVar16) {
      uVar3 = *param_1;
      goto LAB_0010430a;
    }
  }
  if (uVar9 < *(uint *)(this + 0x14)) {
    piVar15 = (int *)(lVar5 + (ulong)uVar9 * 8);
    do {
      lVar5 = 0;
      do {
        uVar8 = *(ulong *)(lVar14 + (ulong)(uint)piVar15[1] * 0x48 + 8 + lVar5 * 8);
        if (uVar8 != 0) {
          iVar12 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            iVar12 = iVar12 + 1;
          }
          *param_1 = (int)lVar5 * 0x40 + *piVar15 * 0x200 + iVar12;
          *(uint *)(this + 8) = uVar9;
          return 1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      uVar9 = uVar9 + 1;
      piVar15 = piVar15 + 2;
    } while (uVar9 != *(uint *)(this + 0x14));
  }
LAB_001043c8:
  *param_1 = 0xffffffff;
  return 0;
LAB_00104487:
  uVar4 = *(ulong *)(piVar11 + uVar8 * 2 + 2);
  if (uVar4 != 0) {
    iVar12 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
      iVar12 = iVar12 + 1;
    }
    uVar3 = (int)uVar8 * 0x40;
    uVar8 = (ulong)uVar3;
    iVar12 = uVar3 + iVar12;
LAB_0010449f:
    uVar3 = iVar12 + *piVar15 * 0x200;
    uVar7 = CONCAT71((int7)(uVar8 >> 8),uVar3 != 0xffffffff);
    goto LAB_0010451a;
  }
  uVar8 = uVar8 + 1;
  iVar12 = -1;
  if (uVar8 == 8) goto LAB_0010449f;
  goto LAB_00104487;
}



/* hb_bit_set_t::previous(unsigned int*) const */

undefined4 __thiscall hb_bit_set_t::previous(hb_bit_set_t *this,uint *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined *puVar12;
  ulong uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  bool bVar18;
  
  uVar5 = *param_1;
  if (uVar5 == 0xffffffff) {
    uVar5 = *(uint *)(this + 0x24) - 1;
    if (-1 < (int)uVar5) {
      lVar6 = (ulong)uVar5 << 3;
      do {
        piVar17 = (int *)&_hb_NullPool;
        if (uVar5 < *(uint *)(this + 0x14)) {
          piVar17 = (int *)(*(long *)(this + 0x18) + lVar6);
        }
        piVar10 = (int *)&_hb_NullPool;
        if ((uint)piVar17[1] < *(uint *)(this + 0x24)) {
          piVar10 = (int *)(*(long *)(this + 0x28) + (ulong)(uint)piVar17[1] * 0x48);
        }
        if (*piVar10 == -1) {
          plVar8 = (long *)(piVar10 + 2);
          do {
            if (*plVar8 != 0) goto LAB_0010477f;
            plVar8 = plVar8 + 1;
          } while (plVar8 != (long *)(piVar10 + 0x12));
        }
        else if (*piVar10 != 0) {
LAB_0010477f:
          lVar6 = 7;
          uVar5 = *piVar17 * 0x200;
          goto LAB_00104796;
        }
        uVar5 = uVar5 - 1;
        lVar6 = lVar6 + -8;
      } while (uVar5 != 0xffffffff);
    }
    goto LAB_001046e8;
  }
  uVar16 = *(uint *)(this + 0x14);
  puVar1 = *(uint **)(this + 0x18);
  uVar11 = uVar5 >> 9;
  iVar14 = uVar16 - 1;
  if (iVar14 < 0) {
    if ((uVar16 == 0) || (*puVar1 != uVar11)) goto LAB_001046e8;
    uVar9 = 0;
    puVar15 = puVar1;
LAB_0010461d:
    puVar12 = &_hb_NullPool;
    if (puVar15[1] < *(uint *)(this + 0x24)) {
      puVar12 = (undefined *)(*(long *)(this + 0x28) + (ulong)puVar15[1] * 0x48);
    }
    uVar16 = uVar5 - 1 & 0x1ff;
    if (uVar16 != 0x1ff) {
      uVar11 = uVar16 >> 6;
      uVar13 = 0xffffffffffffffff;
      uVar5 = uVar5 - 1 & 0x3f;
      if (uVar5 != 0x3f) {
        uVar13 = (1L << ((char)uVar5 + 1U & 0x3f)) - 1;
      }
      uVar13 = uVar13 & *(ulong *)(puVar12 + (ulong)uVar11 * 8 + 8);
      if (uVar13 == 0) {
        if (uVar16 >> 6 == 0) goto LAB_001047c1;
        uVar7 = (ulong)(uVar11 - 1);
        puVar12 = puVar12 + uVar7 * 8;
        while( true ) {
          uVar13 = *(ulong *)(puVar12 + 8);
          uVar11 = (uint)uVar7;
          if (uVar13 != 0) break;
          puVar12 = puVar12 + -8;
          if (uVar11 == 0) goto LAB_001047c1;
          uVar7 = (ulong)(uVar11 - 1);
        }
      }
      lVar6 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar5 = (uVar11 * 0x40 + 0x3f) - ((uint)lVar6 ^ 0x3f);
      *param_1 = uVar5;
      uVar5 = *puVar15 * 0x200 + uVar5;
      goto LAB_001046d9;
    }
LAB_001047c1:
    *param_1 = 0xffffffff;
  }
  else {
    uVar9 = 0;
    do {
      while( true ) {
        uVar3 = iVar14 + uVar9 >> 1;
        if ((int)(uVar11 - puVar1[(ulong)uVar3 * 2]) < 0) break;
        uVar9 = uVar3;
        if ((uVar11 == puVar1[(ulong)uVar3 * 2]) || (uVar9 = uVar3 + 1, iVar14 < (int)uVar9))
        goto joined_r0x001046f5;
      }
      iVar14 = uVar3 - 1;
    } while ((int)uVar9 <= iVar14);
joined_r0x001046f5:
    if ((uVar9 < uVar16) &&
       (puVar15 = puVar1 + (ulong)uVar9 * 2, puVar1[(ulong)uVar9 * 2] == uVar11)) goto LAB_0010461d;
  }
  if (-1 < (int)(uVar9 - 1)) {
    lVar6 = 7;
LAB_001045d0:
    uVar13 = *(ulong *)(*(long *)(this + 0x28) + (ulong)(puVar1 + (ulong)(uVar9 - 1) * 2)[1] * 0x48
                        + 8 + lVar6 * 8);
    if (uVar13 == 0) goto code_r0x001045da;
    lVar2 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar14 = ((int)lVar6 * 0x40 + 0x3f) - ((uint)lVar2 ^ 0x3f);
    goto LAB_001045e2;
  }
LAB_001046e8:
  *param_1 = 0xffffffff;
  return 0;
code_r0x001045da:
  bVar18 = lVar6 == 0;
  lVar6 = lVar6 + -1;
  if (bVar18) goto code_r0x001045e0;
  goto LAB_001045d0;
code_r0x001045e0:
  iVar14 = 0;
LAB_001045e2:
  uVar5 = puVar1[(ulong)(uVar9 - 1) * 2] * 0x200 + iVar14;
  uVar4 = 1;
  goto LAB_001045ef;
  while (bVar18 = lVar6 != 0, lVar6 = lVar6 + -1, bVar18) {
LAB_00104796:
    uVar13 = *(ulong *)(piVar10 + lVar6 * 2 + 2);
    if (uVar13 != 0) {
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar14 = (int)lVar6 * 0x40;
      uVar5 = (uVar5 + 0x3f + iVar14) - ((uint)lVar2 ^ 0x3f);
      uVar4 = CONCAT31((int3)((uint)iVar14 >> 8),uVar5 != 0xffffffff);
      goto LAB_001045ef;
    }
  }
LAB_001046d9:
  uVar4 = 1;
LAB_001045ef:
  *param_1 = uVar5;
  return uVar4;
}



/* hb_bit_set_t::next_many(unsigned int, unsigned int*, unsigned int) const */

uint __thiscall hb_bit_set_t::next_many(hb_bit_set_t *this,uint param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  
  if (param_1 == 0xffffffff) {
    uVar9 = *(uint *)(this + 0x14);
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(this + 8);
    uVar9 = *(uint *)(this + 0x14);
    uVar2 = param_1 >> 9;
    if (uVar4 < uVar9) {
      if (*(uint *)(*(long *)(this + 0x18) + (ulong)uVar4 * 8) != uVar2) {
        if (-1 < (int)(uVar9 - 1)) goto LAB_0010494d;
        uVar4 = 0;
      }
    }
    else {
      if ((int)(uVar9 - 1) < 0) {
        uVar4 = 0;
      }
      else {
LAB_0010494d:
        iVar10 = uVar9 - 1;
        uVar6 = 0;
        do {
          uVar4 = iVar10 + uVar6 >> 1;
          uVar7 = *(uint *)(*(long *)(this + 0x18) + (ulong)uVar4 * 8);
          if ((int)(uVar2 - uVar7) < 0) {
            iVar10 = uVar4 - 1;
            uVar4 = uVar6;
          }
          else {
            if (uVar2 == uVar7) break;
            uVar4 = uVar4 + 1;
          }
          uVar6 = uVar4;
        } while ((int)uVar4 <= iVar10);
      }
      if (uVar9 <= uVar4) {
        return 0;
      }
    }
    uVar2 = param_1 + 1 & 0x1ff;
    uVar3 = (ulong)uVar2;
    if (uVar2 != 0) goto LAB_00104820;
    uVar4 = uVar4 + 1;
  }
  if (uVar9 <= uVar4) {
    return 0;
  }
  uVar3 = 0;
LAB_00104820:
  if (param_3 != 0) {
    piVar8 = (int *)(*(long *)(this + 0x18) + (ulong)uVar4 * 8);
    uVar9 = param_3;
    do {
      iVar10 = *piVar8;
      puVar5 = &_hb_NullPool;
      if ((uint)piVar8[1] < *(uint *)(this + 0x24)) {
        puVar5 = (undefined *)(*(long *)(this + 0x28) + (ulong)(uint)piVar8[1] * 0x48);
      }
      uVar2 = (uint)uVar3 & 0x3f;
      uVar3 = uVar3 >> 6;
      uVar6 = 0;
      puVar12 = param_2;
      while( true ) {
        uVar1 = *(ulong *)(puVar5 + uVar3 * 8 + 8);
        puVar11 = puVar12;
        if (uVar9 <= uVar6) break;
        do {
          puVar12 = puVar11;
          if ((uVar1 >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
            uVar6 = uVar6 + 1;
            puVar12 = puVar11 + 1;
            *puVar11 = uVar2 | (int)uVar3 << 6 | iVar10 << 9;
          }
          uVar2 = uVar2 + 1;
        } while ((uVar2 < 0x40) && (puVar11 = puVar12, uVar6 < uVar9));
        uVar7 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar7;
        uVar2 = 0;
        if ((7 < uVar7) || (uVar6 >= uVar9)) break;
      }
      uVar9 = uVar9 - uVar6;
      param_2 = param_2 + uVar6;
      uVar4 = uVar4 + 1;
      if (*(uint *)(this + 0x14) <= uVar4) {
        return param_3 - uVar9;
      }
      piVar8 = piVar8 + 2;
      uVar3 = 0;
    } while (uVar9 != 0);
  }
  return param_3;
}



/* hb_bit_set_t::next_many_inverted(unsigned int, unsigned int*, unsigned int) const */

uint __thiscall
hb_bit_set_t::next_many_inverted(hb_bit_set_t *this,uint param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  
  uVar2 = param_1 + 1;
  uVar3 = param_3;
  if (param_1 == 0xffffffff) {
    uVar5 = *(uint *)(this + 0x14);
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)(this + 8);
    uVar7 = param_1 >> 9;
    uVar5 = *(uint *)(this + 0x14);
    if (uVar12 < uVar5) {
      if (*(uint *)(*(long *)(this + 0x18) + (ulong)uVar12 * 8) != uVar7) {
        if (-1 < (int)(uVar5 - 1)) goto LAB_00104b87;
        uVar12 = 0;
      }
    }
    else {
      if ((int)(uVar5 - 1) < 0) {
        uVar12 = 0;
      }
      else {
LAB_00104b87:
        iVar9 = uVar5 - 1;
        uVar6 = 0;
        do {
          uVar12 = iVar9 + uVar6 >> 1;
          uVar11 = *(uint *)(*(long *)(this + 0x18) + (ulong)uVar12 * 8);
          if ((int)(uVar7 - uVar11) < 0) {
            iVar9 = uVar12 - 1;
            uVar12 = uVar6;
          }
          else {
            if (uVar7 == uVar11) break;
            uVar12 = uVar12 + 1;
          }
          uVar6 = uVar12;
        } while ((int)uVar12 <= iVar9);
      }
      if (uVar5 <= uVar12) {
        if (uVar2 != 0xffffffff) {
          if (param_3 == 0) {
            return 0;
          }
          while( true ) {
            *param_2 = uVar2;
            uVar2 = uVar2 + 1;
            param_2 = param_2 + 1;
            uVar3 = uVar3 - 1;
            if (uVar2 == 0xffffffff) break;
            if (uVar3 == 0) {
              return param_3;
            }
          }
        }
        return param_3 - uVar3;
      }
    }
    uVar7 = uVar2 & 0x1ff;
    if (uVar7 != 0) goto LAB_001049d8;
    uVar12 = uVar12 + 1;
  }
  uVar7 = 0;
  if (uVar5 <= uVar12) {
LAB_00104b14:
    do {
      if (uVar3 == 0) {
        return param_3;
      }
      uVar12 = uVar2 + 1;
      uVar3 = uVar3 - 1;
      *param_2 = uVar2;
      param_2 = param_2 + 1;
      uVar2 = uVar12;
    } while (uVar12 != 0xffffffff);
    return param_3 - uVar3;
  }
LAB_001049d8:
  if (param_3 != 0) {
    piVar13 = (int *)(*(long *)(this + 0x18) + (ulong)uVar12 * 8);
    do {
      uVar5 = uVar3;
      iVar9 = *piVar13;
      puVar10 = &_hb_NullPool;
      if ((uint)piVar13[1] < *(uint *)(this + 0x24)) {
        puVar10 = (undefined *)(*(long *)(this + 0x28) + (ulong)(uint)piVar13[1] * 0x48);
      }
      uVar8 = (ulong)(uVar7 & 0x3f);
      uVar7 = uVar7 >> 6;
      uVar6 = 0;
      puVar4 = param_2;
      while( true ) {
        uVar1 = *(ulong *)(puVar10 + (ulong)uVar7 * 8 + 8);
        if (uVar5 <= uVar6) break;
        do {
          bVar14 = uVar6 < uVar5;
          uVar3 = (uint)uVar8;
          if ((uVar1 >> (uVar8 & 0x3f) & 1) != 0) {
            uVar11 = uVar7 << 6 | iVar9 << 9 | uVar3;
            while ((uVar2 < uVar11 && (bVar14))) {
              uVar6 = uVar6 + 1;
              *puVar4 = uVar2;
              uVar2 = uVar2 + 1;
              bVar14 = uVar6 < uVar5;
              puVar4 = puVar4 + 1;
            }
            uVar2 = uVar11 + 1;
          }
        } while ((uVar3 + 1 < 0x40) && (uVar8 = (ulong)(uVar3 + 1), bVar14));
        uVar7 = uVar7 + 1;
        uVar8 = 0;
        if ((7 < uVar7) || (!bVar14)) break;
      }
      param_2 = param_2 + uVar6;
      uVar3 = uVar5 - uVar6;
      uVar12 = uVar12 + 1;
      if (*(uint *)(this + 0x14) <= uVar12) {
        if (uVar2 != 0xffffffff) goto LAB_00104b14;
        goto LAB_00104b43;
      }
      piVar13 = piVar13 + 2;
      uVar7 = 0;
    } while (uVar3 != 0);
    if (uVar2 == 0xffffffff) {
LAB_00104b43:
      param_3 = param_3 + (uVar6 - uVar5);
    }
  }
  return param_3;
}



/* hb_bit_set_t::page_for(unsigned int, bool) */

long __thiscall hb_bit_set_t::page_for(hb_bit_set_t *this,uint param_1,bool param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  
  uVar9 = param_1 >> 9;
  if ((*(uint *)(this + 8) < *(uint *)(this + 0x14)) &&
     (puVar1 = (uint *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 8) * 8), *puVar1 == uVar9))
  {
    return *(long *)(this + 0x28) + (ulong)puVar1[1] * 0x48;
  }
  uVar4 = *(uint *)(this + 0x24);
  iVar10 = *(uint *)(this + 0x14) - 1;
  if (iVar10 < 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      while( true ) {
        uVar7 = iVar10 + uVar8 >> 1;
        lVar11 = (ulong)uVar7 * 8;
        uVar3 = *(uint *)(*(long *)(this + 0x18) + (ulong)uVar7 * 8);
        if (-1 < (int)(uVar9 - uVar3)) break;
        iVar10 = uVar7 - 1;
        if (iVar10 < (int)uVar8) goto LAB_00104c8c;
      }
      if (uVar9 == uVar3) goto LAB_00104d25;
      uVar8 = uVar7 + 1;
    } while ((int)uVar8 <= iVar10);
  }
LAB_00104c8c:
  if (param_2) {
    cVar6 = resize(this,uVar4 + 1,true,false);
    if (cVar6 != '\0') {
      lVar11 = (ulong)uVar8 * 8;
      puVar2 = (undefined4 *)(*(long *)(this + 0x28) + (ulong)uVar4 * 0x48);
      *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
      lVar5 = *(long *)(this + 0x18);
      *puVar2 = 0;
      memmove((void *)(lVar5 + 8 + lVar11),(void *)(lVar5 + lVar11),
              (ulong)((~uVar8 + *(int *)(this + 0x14)) * 8));
      *(ulong *)(*(long *)(this + 0x18) + (ulong)uVar8 * 8) = CONCAT44(uVar4,uVar9);
      uVar7 = uVar8;
LAB_00104d25:
      *(uint *)(this + 8) = uVar7;
      return *(long *)(this + 0x28) + (ulong)*(uint *)(*(long *)(this + 0x18) + 4 + lVar11) * 0x48;
    }
  }
  return 0;
}



/* hb_bit_set_t::del_range(unsigned int, unsigned int) */

void __thiscall hb_bit_set_t::del_range(hb_bit_set_t *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  
  if (*this == (hb_bit_set_t)0x0) {
    return;
  }
  if ((param_2 < param_1) || (param_1 == 0xffffffff)) {
    return;
  }
  *(undefined4 *)(this + 4) = 0xffffffff;
  uVar10 = param_1 >> 9;
  uVar14 = param_2 >> 9;
  iVar11 = (uVar10 + 1) - (uint)((param_1 & 0x1ff) == 0);
  if (param_2 + 1 == (uVar14 + 1) * 0x200) {
    uVar4 = uVar10;
    if (uVar14 <= uVar10) {
      uVar4 = uVar14;
    }
    uVar8 = uVar14;
    if ((iVar11 <= (int)uVar4) ||
       (puVar5 = (undefined4 *)page_for(this,param_1,false), puVar5 == (undefined4 *)0x0))
    goto LAB_00104e9d;
LAB_00104f07:
    bVar7 = (byte)param_1 & 0x3f;
    uVar6 = (ulong)(param_1 >> 6 & 7);
    uVar13 = *(ulong *)(puVar5 + uVar6 * 2 + 2);
    puVar9 = puVar5 + uVar6 * 2 + 2;
    if (uVar10 == uVar14) {
      uVar15 = (ulong)(param_2 >> 6 & 7);
      lVar12 = 1L << ((byte)param_2 & 0x3f);
      if (puVar5 + uVar15 * 2 + 2 == puVar9) {
        *(ulong *)(puVar5 + uVar6 * 2 + 2) = (1L << bVar7) + -1 + lVar12 * -2 & uVar13;
      }
      else {
        *(ulong *)(puVar5 + uVar6 * 2 + 2) = ~(-1L << bVar7) & uVar13;
        iVar3 = (int)(puVar9 + 2);
        iVar2 = (int)(puVar5 + uVar15 * 2 + 2);
        if (iVar2 != iVar3) {
          memset(puVar9 + 2,0,(ulong)(uint)(iVar2 - iVar3));
        }
        *(ulong *)(puVar5 + uVar15 * 2 + 2) = *(ulong *)(puVar5 + uVar15 * 2 + 2) & lVar12 * -2;
      }
      *puVar5 = 0xffffffff;
      goto LAB_00104e9d;
    }
    puVar1 = puVar5 + 0x10;
    *(ulong *)(puVar5 + uVar6 * 2 + 2) = ~(-1L << bVar7) & uVar13;
    if (puVar1 != puVar9) {
      puVar9 = puVar9 + 2;
      if ((int)puVar1 != (int)puVar9) {
        memset(puVar9,0,(long)puVar1 - (long)puVar9 & 0xffffffff);
      }
      *(undefined8 *)(puVar5 + 0x10) = 0;
    }
    *puVar5 = 0xffffffff;
  }
  else {
    uVar8 = uVar14 - 1;
    uVar4 = uVar10;
    if ((int)uVar8 <= (int)uVar10) {
      uVar4 = uVar8;
    }
    if (((int)uVar4 < iVar11) &&
       (puVar5 = (undefined4 *)page_for(this,param_1,false), puVar5 != (undefined4 *)0x0))
    goto LAB_00104f07;
  }
  if ((((int)uVar8 < (int)uVar14) && (uVar10 != uVar14)) &&
     (puVar5 = (undefined4 *)page_for(this,param_2,false), puVar5 != (undefined4 *)0x0)) {
    uVar6 = (ulong)(param_2 >> 6 & 7);
    uVar13 = (1L << ((byte)param_2 & 0x3f)) * -2;
    if (uVar6 == 0) {
      *(ulong *)(puVar5 + 2) = *(ulong *)(puVar5 + 2) & uVar13;
    }
    else {
      *(undefined8 *)(puVar5 + 2) = 0;
      if (uVar6 != 1) {
        memset(puVar5 + 4,0,uVar6 * 8 - 8 & 0xffffffff);
      }
      *(ulong *)(puVar5 + uVar6 * 2 + 2) = *(ulong *)(puVar5 + uVar6 * 2 + 2) & uVar13;
    }
    *puVar5 = 0xffffffff;
  }
LAB_00104e9d:
  del_pages(this,iVar11,uVar8);
  return;
}


