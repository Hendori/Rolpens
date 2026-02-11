
/* void hb_object_fini<hb_hashmap_t<unsigned int, unsigned int, true> >(hb_hashmap_t<unsigned int,
   unsigned int, true>*) */

void hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(hb_hashmap_t *param_1)

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
          goto LAB_001000a3;
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
LAB_001000a3:
  pthread_mutex_destroy(__mutex);
  free(__mutex);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_subset_input_t::hb_subset_input_t() */

void __thiscall hb_subset_input_t::hb_subset_input_t(hb_subset_input_t *this)

{
  byte *pbVar1;
  char cVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  hb_subset_input_t *phVar7;
  hb_subset_input_t *phVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  hb_subset_input_t *phVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  byte bVar16;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_168;
  long local_40;
  
  bVar16 = 0;
  phVar14 = this + 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 1;
  *(undefined4 *)(this + 0x5c) = 1;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x68] = (hb_subset_input_t)0x1;
  *(undefined2 *)(this + 0x6a) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined1 (*) [16])(this + 0x6c) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x88) = 1;
  *(undefined4 *)(this + 0x8c) = 1;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (hb_subset_input_t)0x1;
  *(undefined2 *)(this + 0x9a) = 0;
  *(undefined1 (*) [16])(this + 0x9c) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xb0) = 0;
  phVar7 = phVar14;
  do {
    lVar3 = hb_set_create();
    phVar8 = phVar7 + 8;
    hb_set_destroy(*(long *)phVar7);
    *(long *)phVar7 = lVar3;
    hb_set_destroy(0);
    phVar7 = phVar8;
  } while (this + 0x50 != phVar8);
  cVar2 = *(char *)(*(long *)phVar14 + 0x10);
  do {
    if (cVar2 == '\0') {
LAB_00100213:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    phVar14 = phVar14 + 8;
    if (this + 0x50 == phVar14) {
      if (this[0x68] != (hb_subset_input_t)0x0) {
        *(undefined4 *)(this + 0x50) = 0;
        hb_set_add_range(*(undefined8 *)(this + 0x30),0,6);
        hb_set_add(*(undefined8 *)(this + 0x38),0x409);
        lVar3 = *(long *)(this + 0x28);
        local_178 = 0x53696c6c;
        local_1b8 = __LC1;
        uStack_1b0 = _UNK_00102318;
        local_1a8 = __LC2;
        uStack_1a0 = _UNK_00102328;
        local_198 = __LC3;
        uStack_190 = _UNK_00102338;
        local_188 = __LC4;
        uStack_180 = _UNK_00102348;
        if (*(char *)(lVar3 + 0x40) == '\0') {
          if (*(char *)(lVar3 + 0x10) != '\0') {
            puVar15 = &local_1b8;
            iVar13 = 0x11;
            uVar6 = 0x6d6f7278;
            *(undefined4 *)(lVar3 + 0x14) = 0xffffffff;
            while( true ) {
              uVar9 = uVar6 >> 9;
              puVar4 = (undefined4 *)
                       hb_bit_set_t::page_for((hb_bit_set_t *)(lVar3 + 0x10),uVar6,true);
              if (puVar4 == (undefined4 *)0x0) break;
              uVar10 = uVar6 & 0xfffffe00;
              if (uVar6 != 0xffffffff) goto LAB_001003c9;
              while( true ) {
                iVar13 = iVar13 + -1;
                if (iVar13 == 0) goto LAB_001003ea;
                uVar6 = *(uint *)((long)puVar15 + 4);
                puVar15 = (undefined8 *)((long)puVar15 + 4);
                if ((uVar6 < uVar10) || ((uVar9 + 1) * 0x200 <= uVar6)) break;
LAB_001003c9:
                *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) |
                     1L << ((byte)uVar6 & 0x3f);
                *puVar4 = 0xffffffff;
              }
            }
          }
        }
        else if (*(char *)(lVar3 + 0x10) != '\0') {
          puVar15 = &local_1b8;
          iVar13 = 0x11;
          uVar6 = 0x6d6f7278;
          *(undefined4 *)(lVar3 + 0x14) = 0xffffffff;
          do {
            puVar4 = (undefined4 *)
                     hb_bit_set_t::page_for((hb_bit_set_t *)(lVar3 + 0x10),uVar6,false);
            uVar9 = uVar6 & 0xfffffe00;
            do {
              if ((uVar6 != 0xffffffff) && (puVar4 != (undefined4 *)0x0)) {
                *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) &
                     ~(1L << ((byte)uVar6 & 0x3f));
                *puVar4 = 0xffffffff;
              }
              iVar13 = iVar13 + -1;
              if (iVar13 == 0) goto LAB_001003ea;
              uVar6 = *(uint *)((long)puVar15 + 4);
              puVar15 = (undefined8 *)((long)puVar15 + 4);
            } while ((uVar9 <= uVar6) && (uVar6 < uVar9 + 0x200));
          } while( true );
        }
LAB_001003ea:
        lVar3 = *(long *)(this + 0x20);
        local_1c8 = 0x44534947;
        local_1d8 = __LC5;
        uStack_1d0 = _UNK_00102358;
        if (*(char *)(lVar3 + 0x40) == '\0') {
          if (*(char *)(lVar3 + 0x10) != '\0') {
            puVar15 = &local_1d8;
            iVar13 = 5;
            uVar6 = 0x67617370;
            *(undefined4 *)(lVar3 + 0x14) = 0xffffffff;
            while( true ) {
              uVar9 = uVar6 >> 9;
              puVar4 = (undefined4 *)
                       hb_bit_set_t::page_for((hb_bit_set_t *)(lVar3 + 0x10),uVar6,true);
              if (puVar4 == (undefined4 *)0x0) break;
              uVar10 = uVar6 & 0xfffffe00;
              if (uVar6 != 0xffffffff) goto LAB_00100527;
              while( true ) {
                iVar13 = iVar13 + -1;
                if (iVar13 == 0) goto LAB_00100548;
                uVar6 = *(uint *)((long)puVar15 + 4);
                puVar15 = (undefined8 *)((long)puVar15 + 4);
                if ((uVar6 < uVar10) || ((uVar9 + 1) * 0x200 <= uVar6)) break;
LAB_00100527:
                *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) |
                     1L << ((byte)uVar6 & 0x3f);
                *puVar4 = 0xffffffff;
              }
            }
          }
        }
        else if (*(char *)(lVar3 + 0x10) != '\0') {
          puVar15 = &local_1d8;
          iVar13 = 5;
          uVar6 = 0x67617370;
          *(undefined4 *)(lVar3 + 0x14) = 0xffffffff;
          do {
            puVar4 = (undefined4 *)
                     hb_bit_set_t::page_for((hb_bit_set_t *)(lVar3 + 0x10),uVar6,false);
            uVar9 = uVar6 & 0xfffffe00;
            do {
              if ((uVar6 != 0xffffffff) && (puVar4 != (undefined4 *)0x0)) {
                *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) &
                     ~(1L << ((byte)uVar6 & 0x3f));
                *puVar4 = 0xffffffff;
              }
              iVar13 = iVar13 + -1;
              if (iVar13 == 0) goto LAB_00100548;
              uVar6 = *(uint *)((long)puVar15 + 4);
              puVar15 = (undefined8 *)((long)puVar15 + 4);
            } while ((uVar9 <= uVar6) && (uVar6 < uVar9 + 0x200));
          } while( true );
        }
LAB_00100548:
        lVar3 = *(long *)(this + 0x40);
        puVar15 = &local_168;
        puVar11 = &DAT_00101e60;
        puVar12 = puVar15;
        for (lVar5 = 0x24; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (ulong)bVar16 * -2 + 1;
          puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
        }
        if (*(char *)(lVar3 + 0x40) == '\0') {
          if (*(char *)(lVar3 + 0x10) != '\0') {
            *(undefined4 *)(lVar3 + 0x14) = 0xffffffff;
            iVar13 = 0x48;
            uVar6 = 0x7276726e;
            while( true ) {
              uVar9 = uVar6 >> 9;
              puVar4 = (undefined4 *)
                       hb_bit_set_t::page_for((hb_bit_set_t *)(lVar3 + 0x10),uVar6,true);
              if (puVar4 == (undefined4 *)0x0) break;
              uVar10 = uVar6 & 0xfffffe00;
              if (uVar6 != 0xffffffff) goto LAB_00100687;
              while( true ) {
                iVar13 = iVar13 + -1;
                if (iVar13 == 0) goto LAB_001006aa;
                uVar6 = *(uint *)((long)puVar15 + 4);
                puVar15 = (undefined8 *)((long)puVar15 + 4);
                if ((uVar6 < uVar10) || ((uVar9 + 1) * 0x200 <= uVar6)) break;
LAB_00100687:
                *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) |
                     1L << ((byte)uVar6 & 0x3f);
                *puVar4 = 0xffffffff;
              }
            }
          }
        }
        else if (*(char *)(lVar3 + 0x10) != '\0') {
          *(undefined4 *)(lVar3 + 0x14) = 0xffffffff;
          iVar13 = 0x48;
          uVar6 = 0x7276726e;
          do {
            puVar4 = (undefined4 *)
                     hb_bit_set_t::page_for((hb_bit_set_t *)(lVar3 + 0x10),uVar6,false);
            uVar9 = uVar6 & 0xfffffe00;
            do {
              if ((uVar6 != 0xffffffff) && (puVar4 != (undefined4 *)0x0)) {
                *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) &
                     ~(1L << ((byte)uVar6 & 0x3f));
                *puVar4 = 0xffffffff;
              }
              iVar13 = iVar13 + -1;
              if (iVar13 == 0) goto LAB_001006aa;
              uVar6 = *(uint *)((long)puVar15 + 4);
              puVar15 = (undefined8 *)((long)puVar15 + 4);
            } while ((uVar9 <= uVar6) && (uVar6 < uVar9 + 0x200));
          } while( true );
        }
LAB_001006aa:
        if (*(char *)(*(long *)(this + 0x48) + 0x10) != '\0') {
          pbVar1 = (byte *)(*(long *)(this + 0x48) + 0x40);
          *pbVar1 = *pbVar1 ^ 1;
        }
      }
      goto LAB_00100213;
    }
    cVar2 = *(char *)(*(long *)phVar14 + 0x10);
  } while( true );
}



int * hb_subset_input_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



void hb_subset_input_destroy(hb_hashmap_t *param_1)

{
  if (param_1 == (hb_hashmap_t *)0x0) {
    return;
  }
  if (*(int *)param_1 != 0) {
    LOCK();
    *(int *)param_1 = *(int *)param_1 + -1;
    UNLOCK();
    if (*(int *)param_1 == 0) {
      hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(param_1);
      hb_set_destroy(*(undefined8 *)(param_1 + 0x48));
      hb_set_destroy(*(undefined8 *)(param_1 + 0x40));
      hb_set_destroy(*(undefined8 *)(param_1 + 0x38));
      hb_set_destroy(*(undefined8 *)(param_1 + 0x30));
      hb_set_destroy(*(undefined8 *)(param_1 + 0x28));
      hb_set_destroy(*(undefined8 *)(param_1 + 0x20));
      hb_set_destroy(*(undefined8 *)(param_1 + 0x18));
      hb_set_destroy(*(undefined8 *)(param_1 + 0x10));
      hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(param_1 + 0x88);
      if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
        free(*(void **)(param_1 + 0xb0));
      }
      hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(param_1 + 0x58);
      if (*(void **)(param_1 + 0x80) != (void *)0x0) {
        free(*(void **)(param_1 + 0x80));
      }
      free(param_1);
      return;
    }
  }
  return;
}



hb_subset_input_t * hb_subset_input_create_or_fail(void)

{
  hb_subset_input_t *this;
  hb_subset_input_t *phVar1;
  
  this = (hb_subset_input_t *)calloc(1,0xb8);
  if (this != (hb_subset_input_t *)0x0) {
    hb_subset_input_t::hb_subset_input_t(this);
    phVar1 = this + 0x10;
    *(undefined4 *)this = 1;
    *(undefined4 *)(this + 4) = 1;
    *(undefined8 *)(this + 8) = 0;
    do {
      if (*(char *)(*(long *)phVar1 + 0x10) == '\0') goto LAB_0010081a;
      phVar1 = phVar1 + 8;
    } while (this + 0x50 != phVar1);
    if (this[0x68] != (hb_subset_input_t)0x0) {
      return this;
    }
LAB_0010081a:
    hb_subset_input_destroy(this);
  }
  return (hb_subset_input_t *)0x0;
}



undefined8 hb_subset_input_unicode_set(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 hb_subset_input_glyph_set(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 hb_subset_input_set(long param_1,uint param_2)

{
  if (param_2 < 8) {
    return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
  }
  __hb_CrapPool = __hb_NullPool;
  return __hb_NullPool;
}



undefined4 hb_subset_input_get_flags(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



void hb_subset_input_set_flags(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_subset_input_set_user_data(int *param_1,long param_2,long param_3,long param_4,int param_5)

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
      if (__mutex[1].__data.__lock != 0) goto LAB_00100be8;
      uVar9 = 8;
LAB_00100b7c:
      plVar6 = (long *)realloc(plVar6,uVar9 * 0x18);
      if (plVar6 == (long *)0x0) {
        if ((uint)__mutex[1].__data.__lock < (uint)uVar9) {
          __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
          goto LAB_00100be8;
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
          goto LAB_00100995;
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
        if (uVar5 <= uVar1) goto LAB_00100b43;
        do {
          uVar8 = (int)(uVar9 >> 1) + 8 + (int)uVar9;
          uVar9 = (ulong)uVar8;
        } while (uVar8 < uVar5);
        if (uVar8 < 0xaaaaaab) goto LAB_00100b7c;
        __mutex[1].__data.__lock = ~uVar1;
      }
LAB_00100be8:
      uVar11 = __hb_CrapPool;
      _hb_set_clear = _pthread_mutex_init;
      plVar10 = (long *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _pthread_mutex_init = uVar11;
      goto LAB_00100b5a;
    }
  }
LAB_00100b43:
  *(uint *)((long)__mutex + 0x2c) = uVar5;
  plVar10 = plVar6 + uVar7 * 3;
  *plVar10 = param_2;
  plVar10[1] = param_3;
  plVar10[2] = param_4;
LAB_00100b5a:
  pthread_mutex_unlock(__mutex);
LAB_00100995:
  return -1 < __mutex[1].__data.__lock && plVar10 != (long *)0x0;
}



long hb_subset_input_get_user_data(int *param_1,long param_2)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hb_subset_input_keep_everything(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  puVar3 = (uint *)&local_48;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = __LC8;
  uStack_40 = _UNK_00102368;
  local_38 = _LC9;
  do {
    puVar2 = (undefined8 *)(param_1 + 0x10 + (ulong)*puVar3 * 8);
    if (7 < *puVar3) {
      __hb_CrapPool = __hb_NullPool;
      puVar2 = (undefined8 *)&_hb_CrapPool;
    }
    uVar1 = *puVar2;
    puVar3 = puVar3 + 1;
    hb_set_clear(uVar1);
    hb_set_invert(uVar1);
  } while ((uint *)&local_30 != puVar3);
  hb_set_clear(*(undefined8 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x50) = 0x1e8;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool hb_subset_input_get_axis_range
               (long param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  byte bVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 == 0) {
    return false;
  }
  uVar5 = (ulong)(param_2 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x78);
  piVar3 = (int *)(uVar5 * 0x20 + lVar2);
  bVar1 = *(byte *)(piVar3 + 1);
  if ((bVar1 & 2) != 0) {
    iVar4 = 0;
    do {
      if (*piVar3 == param_2) {
        bVar6 = (bVar1 & 1) != 0;
        if (bVar6) {
          *param_3 = (float)*(double *)(piVar3 + 2);
          *param_5 = (float)*(double *)(piVar3 + 4);
          *param_4 = (float)*(double *)(piVar3 + 6);
        }
        return bVar6;
      }
      iVar4 = iVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + iVar4 & *(uint *)(param_1 + 0x74));
      piVar3 = (int *)(uVar5 * 0x20 + lVar2);
      bVar1 = *(byte *)(piVar3 + 1);
    } while ((bVar1 & 2) != 0);
  }
  return false;
}



long hb_subset_preprocess(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = hb_subset_input_create_or_fail();
  if (lVar1 != 0) {
    hb_subset_input_keep_everything(lVar1);
    *(undefined2 *)(lVar1 + 0x54) = 0x101;
    lVar2 = hb_subset_or_fail(param_1,lVar1);
    hb_subset_input_destroy(lVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  lVar1 = hb_face_reference(param_1);
  return lVar1;
}



long hb_subset_input_old_to_new_glyph_mapping(long param_1)

{
  return param_1 + 0x88;
}



undefined8
hb_subset_input_set_axis_range
          (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,int param_6)

{
  float fVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  uint uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float local_5c;
  undefined1 local_58 [16];
  float local_48;
  float local_44;
  float local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = hb_ot_var_find_axis_info(param_5,param_6,local_58);
  if (iVar5 != 0) {
    if (NAN(param_1)) {
      param_1 = local_48;
    }
    local_5c = param_1;
    if (NAN(param_2)) {
      param_2 = local_40;
    }
    if (NAN(param_3)) {
      param_3 = local_44;
    }
    if (param_1 <= param_2) {
      pfVar6 = &local_5c;
      if (param_1 < local_48) {
        pfVar6 = &local_48;
        param_1 = local_48;
      }
      fVar1 = local_40;
      if (param_1 <= local_40) {
        fVar1 = *pfVar6;
      }
      fVar14 = (float)((uint)param_2 & -(uint)(local_48 <= param_2) |
                      ~-(uint)(local_48 <= param_2) & (uint)local_48);
      uVar12 = -(uint)(local_40 < fVar14);
      fVar15 = (float)((uint)local_40 & uVar12 | ~uVar12 & (uint)fVar14);
      fVar14 = (float)((uint)param_3 & -(uint)(fVar1 <= param_3) |
                      ~-(uint)(fVar1 <= param_3) & (uint)fVar1);
      uVar12 = -(uint)(fVar14 <= fVar15);
      dVar13 = (double)(float)((uint)fVar14 & uVar12 | ~uVar12 & (uint)fVar15);
      if (*(char *)(param_4 + 0x68) != '\0') {
        uVar12 = *(uint *)(param_4 + 0x70);
        if (*(uint *)(param_4 + 0x74) <= (uVar12 >> 1) + uVar12) {
          cVar4 = hb_hashmap_t<unsigned_int,Triple,false>::alloc
                            ((hb_hashmap_t<unsigned_int,Triple,false> *)(param_4 + 0x58),0);
          if (cVar4 == '\0') goto LAB_00101160;
          uVar12 = *(uint *)(param_4 + 0x70);
        }
        lVar3 = *(long *)(param_4 + 0x80);
        iVar5 = *(int *)(param_4 + 0x6c);
        uVar10 = (ulong)(param_6 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_4 + 0x78);
        piVar7 = (int *)(uVar10 * 0x20 + lVar3);
        bVar2 = *(byte *)(piVar7 + 1);
        if ((bVar2 & 2) == 0) {
          *piVar7 = param_6;
          piVar7[1] = param_6 * 0x78dde6c4 + 3;
          *(double *)(piVar7 + 2) = (double)fVar1;
          *(double *)(piVar7 + 4) = dVar13;
          *(double *)(piVar7 + 6) = (double)fVar15;
          *(uint *)(param_4 + 0x70) = uVar12 + 1;
          *(int *)(param_4 + 0x6c) = iVar5 + 1;
        }
        else {
          uVar9 = 0;
          uVar11 = 0xffffffff;
          do {
            if (*piVar7 == param_6) {
              if (uVar11 == 0xffffffff) goto LAB_00101118;
              goto LAB_0010110e;
            }
            if ((uVar11 == 0xffffffff) && ((bVar2 & 1) == 0)) {
              uVar11 = (uint)uVar10;
            }
            uVar9 = uVar9 + 1;
            uVar10 = (ulong)((uint)uVar10 + uVar9 & *(uint *)(param_4 + 0x74));
            piVar7 = (int *)(uVar10 * 0x20 + lVar3);
            bVar2 = *(byte *)(piVar7 + 1);
          } while ((bVar2 & 2) != 0);
          if (uVar11 == 0xffffffff) {
LAB_0010119a:
            uVar12 = uVar12 + 1;
          }
          else {
LAB_0010110e:
            piVar7 = (int *)((ulong)uVar11 * 0x20 + lVar3);
LAB_00101118:
            if ((*(byte *)(piVar7 + 1) & 2) == 0) goto LAB_0010119a;
            iVar5 = iVar5 - (*(byte *)(piVar7 + 1) & 1);
          }
          *piVar7 = param_6;
          piVar7[1] = param_6 * 0x78dde6c4 + 3;
          *(double *)(piVar7 + 2) = (double)fVar1;
          *(double *)(piVar7 + 4) = dVar13;
          *(double *)(piVar7 + 6) = (double)fVar15;
          *(uint *)(param_4 + 0x70) = uVar12;
          *(int *)(param_4 + 0x6c) = iVar5 + 1;
          if ((*(ushort *)(param_4 + 0x6a) < uVar9) && (*(uint *)(param_4 + 0x74) < uVar12 << 3)) {
            hb_hashmap_t<unsigned_int,Triple,false>::alloc
                      ((hb_hashmap_t<unsigned_int,Triple,false> *)(param_4 + 0x58),
                       *(uint *)(param_4 + 0x74) - 8);
          }
        }
        uVar8 = 1;
        goto LAB_00101162;
      }
    }
  }
LAB_00101160:
  uVar8 = 0;
LAB_00101162:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8 hb_subset_input_pin_all_axes_to_default(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  void *__ptr;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  long in_FS_OFFSET;
  double dVar14;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = hb_ot_var_get_axis_count(param_2);
  if ((local_44 == 0) || (__ptr = calloc((ulong)local_44,0x20), __ptr == (void *)0x0)) {
LAB_00101258:
    uVar6 = 0;
  }
  else {
    hb_ot_var_get_axis_infos(param_2,0,&local_44);
    piVar13 = (int *)((long)__ptr + 4);
    if (local_44 != 0) {
      uVar9 = 0;
      do {
        iVar2 = *piVar13;
        dVar14 = (double)(float)piVar13[4];
        if (*(char *)(param_1 + 0x68) == '\0') {
LAB_00101400:
          free(__ptr);
          goto LAB_00101258;
        }
        uVar11 = *(uint *)(param_1 + 0x70);
        if (*(uint *)(param_1 + 0x74) <= (uVar11 >> 1) + uVar11) {
          cVar4 = hb_hashmap_t<unsigned_int,Triple,false>::alloc
                            ((hb_hashmap_t<unsigned_int,Triple,false> *)(param_1 + 0x58),0);
          if (cVar4 == '\0') goto LAB_00101400;
          uVar11 = *(uint *)(param_1 + 0x70);
        }
        lVar3 = *(long *)(param_1 + 0x80);
        iVar12 = *(int *)(param_1 + 0x6c);
        uVar8 = (ulong)(iVar2 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x78);
        piVar5 = (int *)(uVar8 * 0x20 + lVar3);
        bVar1 = *(byte *)(piVar5 + 1);
        if ((bVar1 & 2) == 0) {
          *piVar5 = iVar2;
          piVar5[1] = iVar2 * 0x78dde6c4 + 3;
          *(double *)(piVar5 + 2) = dVar14;
          *(double *)(piVar5 + 4) = dVar14;
          *(double *)(piVar5 + 6) = dVar14;
          *(uint *)(param_1 + 0x70) = uVar11 + 1;
          *(int *)(param_1 + 0x6c) = iVar12 + 1;
        }
        else {
          uVar7 = 0;
          uVar10 = 0xffffffff;
          do {
            if (iVar2 == *piVar5) {
              if ((int)uVar10 == -1) goto LAB_00101387;
              goto LAB_0010137e;
            }
            if (((int)uVar10 == -1) && ((bVar1 & 1) == 0)) {
              uVar10 = uVar8;
            }
            uVar7 = uVar7 + 1;
            uVar8 = (ulong)((int)uVar8 + uVar7 & *(uint *)(param_1 + 0x74));
            piVar5 = (int *)(uVar8 * 0x20 + lVar3);
            bVar1 = *(byte *)(piVar5 + 1);
          } while ((bVar1 & 2) != 0);
          if ((int)uVar10 == -1) {
LAB_001013f5:
            uVar11 = uVar11 + 1;
          }
          else {
LAB_0010137e:
            piVar5 = (int *)(uVar10 * 0x20 + lVar3);
LAB_00101387:
            if ((*(byte *)(piVar5 + 1) & 2) == 0) goto LAB_001013f5;
            iVar12 = iVar12 - (*(byte *)(piVar5 + 1) & 1);
          }
          *piVar5 = iVar2;
          piVar5[1] = iVar2 * 0x78dde6c4 + 3;
          *(double *)(piVar5 + 2) = dVar14;
          *(double *)(piVar5 + 4) = dVar14;
          *(double *)(piVar5 + 6) = dVar14;
          *(uint *)(param_1 + 0x70) = uVar11;
          *(int *)(param_1 + 0x6c) = iVar12 + 1;
          if ((*(ushort *)(param_1 + 0x6a) < uVar7) && (*(uint *)(param_1 + 0x74) < uVar11 << 3)) {
            hb_hashmap_t<unsigned_int,Triple,false>::alloc
                      ((hb_hashmap_t<unsigned_int,Triple,false> *)(param_1 + 0x58),
                       *(uint *)(param_1 + 0x74) - 8);
          }
        }
        uVar9 = uVar9 + 1;
        piVar13 = piVar13 + 8;
      } while (uVar9 < local_44);
    }
    free(__ptr);
    uVar6 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8
hb_subset_input_pin_axis_location(float param_1,long param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long in_FS_OFFSET;
  ulong uVar11;
  double dVar12;
  undefined1 local_58 [16];
  float local_48;
  float local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = hb_ot_var_find_axis_info(param_3,param_4,local_58);
  if ((int)uVar4 == 0) goto LAB_001015f0;
  if (local_48 <= param_1) {
    dVar12 = (double)param_1;
  }
  else {
    dVar12 = (double)local_48;
  }
  uVar11 = -(ulong)((double)local_40 < dVar12);
  uVar11 = (ulong)(double)local_40 & uVar11 | ~uVar11 & (ulong)dVar12;
  if (*(char *)(param_2 + 0x68) == '\0') {
LAB_00101630:
    uVar4 = 0;
    goto LAB_001015f0;
  }
  uVar8 = *(uint *)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x74) <= (uVar8 >> 1) + uVar8) {
    cVar3 = hb_hashmap_t<unsigned_int,Triple,false>::alloc
                      ((hb_hashmap_t<unsigned_int,Triple,false> *)(param_2 + 0x58),0);
    if (cVar3 == '\0') goto LAB_00101630;
    uVar8 = *(uint *)(param_2 + 0x70);
  }
  lVar2 = *(long *)(param_2 + 0x80);
  iVar10 = *(int *)(param_2 + 0x6c);
  uVar7 = (ulong)(param_4 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_2 + 0x78);
  piVar5 = (int *)(uVar7 * 0x20 + lVar2);
  bVar1 = *(byte *)(piVar5 + 1);
  if ((bVar1 & 2) == 0) {
    *piVar5 = param_4;
    piVar5[1] = param_4 * 0x78dde6c4 + 3;
    *(ulong *)(piVar5 + 2) = uVar11;
    *(ulong *)(piVar5 + 4) = uVar11;
    *(ulong *)(piVar5 + 6) = uVar11;
    *(uint *)(param_2 + 0x70) = uVar8 + 1;
    *(int *)(param_2 + 0x6c) = iVar10 + 1;
  }
  else {
    uVar6 = 0;
    uVar9 = 0xffffffff;
    do {
      if (*piVar5 == param_4) {
        if (uVar9 != 0xffffffff) goto LAB_001015a6;
        goto LAB_001015b0;
      }
      if ((uVar9 == 0xffffffff) && ((bVar1 & 1) == 0)) {
        uVar9 = (uint)uVar7;
      }
      uVar6 = uVar6 + 1;
      uVar7 = (ulong)((uint)uVar7 + uVar6 & *(uint *)(param_2 + 0x74));
      piVar5 = (int *)(uVar7 * 0x20 + lVar2);
      bVar1 = *(byte *)(piVar5 + 1);
    } while ((bVar1 & 2) != 0);
    if (uVar9 == 0xffffffff) {
LAB_0010162a:
      uVar8 = uVar8 + 1;
    }
    else {
LAB_001015a6:
      piVar5 = (int *)((ulong)uVar9 * 0x20 + lVar2);
LAB_001015b0:
      if ((*(byte *)(piVar5 + 1) & 2) == 0) goto LAB_0010162a;
      iVar10 = iVar10 - (*(byte *)(piVar5 + 1) & 1);
    }
    *piVar5 = param_4;
    piVar5[1] = param_4 * 0x78dde6c4 + 3;
    *(ulong *)(piVar5 + 2) = uVar11;
    *(ulong *)(piVar5 + 4) = uVar11;
    *(ulong *)(piVar5 + 6) = uVar11;
    *(uint *)(param_2 + 0x70) = uVar8;
    *(int *)(param_2 + 0x6c) = iVar10 + 1;
    if ((*(ushort *)(param_2 + 0x6a) < uVar6) && (*(uint *)(param_2 + 0x74) < uVar8 << 3)) {
      hb_hashmap_t<unsigned_int,Triple,false>::alloc
                ((hb_hashmap_t<unsigned_int,Triple,false> *)(param_2 + 0x58),
                 *(uint *)(param_2 + 0x74) - 8);
    }
  }
  uVar4 = 1;
LAB_001015f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 hb_subset_input_pin_axis_to_default(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long in_FS_OFFSET;
  double dVar11;
  undefined1 local_58 [20];
  float local_44;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = hb_ot_var_find_axis_info(param_2,param_3,local_58);
  if ((int)uVar4 == 0) goto LAB_001016f6;
  dVar11 = (double)local_44;
  if (*(char *)(param_1 + 0x68) == '\0') {
LAB_00101820:
    uVar4 = 0;
    goto LAB_001016f6;
  }
  uVar8 = *(uint *)(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x74) <= (uVar8 >> 1) + uVar8) {
    cVar3 = hb_hashmap_t<unsigned_int,Triple,false>::alloc
                      ((hb_hashmap_t<unsigned_int,Triple,false> *)(param_1 + 0x58),0);
    if (cVar3 == '\0') goto LAB_00101820;
    uVar8 = *(uint *)(param_1 + 0x70);
  }
  lVar2 = *(long *)(param_1 + 0x80);
  iVar10 = *(int *)(param_1 + 0x6c);
  uVar7 = (ulong)(param_3 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x78);
  piVar5 = (int *)(uVar7 * 0x20 + lVar2);
  bVar1 = *(byte *)(piVar5 + 1);
  if ((bVar1 & 2) == 0) {
    *piVar5 = param_3;
    piVar5[1] = param_3 * 0x78dde6c4 + 3;
    *(double *)(piVar5 + 2) = dVar11;
    *(double *)(piVar5 + 4) = dVar11;
    *(double *)(piVar5 + 6) = dVar11;
    *(uint *)(param_1 + 0x70) = uVar8 + 1;
    *(int *)(param_1 + 0x6c) = iVar10 + 1;
  }
  else {
    uVar6 = 0;
    uVar9 = 0xffffffff;
    do {
      if (*piVar5 == param_3) {
        if (uVar9 != 0xffffffff) goto LAB_001017c2;
        goto LAB_001017cc;
      }
      if ((uVar9 == 0xffffffff) && ((bVar1 & 1) == 0)) {
        uVar9 = (uint)uVar7;
      }
      uVar6 = uVar6 + 1;
      uVar7 = (ulong)((uint)uVar7 + uVar6 & *(uint *)(param_1 + 0x74));
      piVar5 = (int *)(uVar7 * 0x20 + lVar2);
      bVar1 = *(byte *)(piVar5 + 1);
    } while ((bVar1 & 2) != 0);
    if (uVar9 == 0xffffffff) {
LAB_00101816:
      uVar8 = uVar8 + 1;
    }
    else {
LAB_001017c2:
      piVar5 = (int *)((ulong)uVar9 * 0x20 + lVar2);
LAB_001017cc:
      if ((*(byte *)(piVar5 + 1) & 2) == 0) goto LAB_00101816;
      iVar10 = iVar10 - (*(byte *)(piVar5 + 1) & 1);
    }
    *piVar5 = param_3;
    piVar5[1] = param_3 * 0x78dde6c4 + 3;
    *(double *)(piVar5 + 2) = dVar11;
    *(double *)(piVar5 + 4) = dVar11;
    *(double *)(piVar5 + 6) = dVar11;
    *(uint *)(param_1 + 0x70) = uVar8;
    *(int *)(param_1 + 0x6c) = iVar10 + 1;
    if ((*(ushort *)(param_1 + 0x6a) < uVar6) && (*(uint *)(param_1 + 0x74) < uVar8 << 3)) {
      hb_hashmap_t<unsigned_int,Triple,false>::alloc
                ((hb_hashmap_t<unsigned_int,Triple,false> *)(param_1 + 0x58),
                 *(uint *)(param_1 + 0x74) - 8);
    }
  }
  uVar4 = 1;
LAB_001016f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((int)uVar5 < 0) goto LAB_001019cc;
    hVar3 = (hb_bit_set_t)param_3;
    if (param_3) {
      uVar8 = param_1;
      if (param_1 <= uVar4) {
        uVar8 = uVar4;
      }
      if (uVar5 < uVar8) {
        if (uVar8 < 0x38e38e4) goto LAB_00101b59;
      }
      else {
        if (uVar5 >> 2 <= uVar8) goto LAB_00101913;
        if (uVar8 < 0x38e38e4) {
          pvVar2 = *(void **)(this + 0x28);
          if (uVar8 != 0) goto LAB_00101b60;
          free(pvVar2);
          uVar8 = 0;
          pvVar2 = (void *)0x0;
          goto LAB_00101b7c;
        }
      }
    }
    else {
      uVar8 = uVar5;
      if (param_1 <= uVar5) goto LAB_00101913;
      do {
        uVar8 = (uVar8 >> 1) + 8 + uVar8;
      } while (uVar8 < param_1);
      if (uVar8 < 0x38e38e4) {
        pvVar2 = *(void **)(this + 0x28);
        goto LAB_00101b60;
      }
    }
LAB_001019c7:
    *(uint *)(this + 0x20) = ~uVar5;
    goto LAB_001019cc;
  }
  if ((int)uVar5 < 0) goto LAB_001019cc;
  if (uVar5 == 0) {
    param_1 = 1;
    uVar8 = 1;
LAB_00101b59:
    pvVar2 = *(void **)(this + 0x28);
    param_3 = (bool)hVar1;
LAB_00101b60:
    pvVar2 = realloc(pvVar2,(ulong)uVar8 * 0x48);
    if (pvVar2 == (void *)0x0) {
      uVar5 = *(uint *)(this + 0x20);
      if (uVar5 < uVar8) goto LAB_001019c7;
    }
    else {
LAB_00101b7c:
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
      goto LAB_00101b60;
    }
    uVar7 = 0;
    param_1 = 1;
  }
LAB_00101913:
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
          goto LAB_00101bc4;
        }
        *(uint *)(this + 0x10) = ~uVar4;
        uVar5 = *(uint *)(this + 0x20);
        if ((int)uVar5 < 0) goto LAB_001019cc;
        uVar7 = (ulong)uVar5;
        uVar4 = 0;
        if (-1 < (int)*(uint *)(this + 0x14)) {
          uVar4 = *(uint *)(this + 0x14);
        }
        goto LAB_00101a3b;
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
          if ((int)uVar5 < 0) goto LAB_001019cc;
          uVar6 = 0;
          if (-1 < (int)uVar8) {
            uVar6 = (ulong)uVar8;
          }
          goto LAB_00101ac6;
        }
        pvVar2 = *(void **)(this + 0x18);
LAB_00101bc4:
        uVar4 = (uint)uVar7;
        pvVar2 = realloc(pvVar2,uVar7 << 3);
        if (pvVar2 == (void *)0x0) {
          uVar5 = *(uint *)(this + 0x14);
          uVar6 = (ulong)uVar5;
          if (uVar4 <= *(uint *)(this + 0x10)) goto LAB_001019df;
          *(uint *)(this + 0x10) = ~*(uint *)(this + 0x10);
          goto LAB_00101c23;
        }
      }
      else {
        if (uVar4 >> 2 <= uVar5) goto LAB_001019df;
        pvVar2 = *(void **)(this + 0x18);
        if (uVar5 != 0) goto LAB_00101bc4;
        free(pvVar2);
        uVar4 = 0;
        pvVar2 = (void *)0x0;
      }
      *(void **)(this + 0x18) = pvVar2;
      *(uint *)(this + 0x10) = uVar4;
    }
    uVar6 = (ulong)*(uint *)(this + 0x14);
LAB_001019df:
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
LAB_00101c23:
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar6 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0x20);
  if ((int)uVar5 < 0) goto LAB_001019cc;
  uVar7 = (ulong)uVar5;
  if (hVar3 == (hb_bit_set_t)0x0) {
LAB_00101a3b:
    uVar6 = uVar7;
    if (uVar5 < uVar4) {
      do {
        uVar8 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
        uVar6 = (ulong)uVar8;
      } while (uVar8 < uVar4);
      goto LAB_00101a50;
    }
LAB_00101a84:
    uVar8 = *(uint *)(this + 0x24);
  }
  else {
LAB_00101ac6:
    uVar8 = *(uint *)(this + 0x24);
    uVar4 = (uint)uVar6;
    if (uVar4 <= uVar8) {
      uVar6 = (ulong)uVar8;
    }
    uVar9 = (uint)uVar6;
    if (uVar5 < uVar9) {
LAB_00101a50:
      if (0x38e38e3 < (uint)uVar6) goto LAB_001019c7;
      pvVar2 = *(void **)(this + 0x28);
LAB_00101a61:
      uVar8 = (uint)uVar6;
      pvVar2 = realloc(pvVar2,uVar6 * 0x48);
      if (pvVar2 == (void *)0x0) {
        uVar5 = *(uint *)(this + 0x20);
        if (uVar5 < uVar8) goto LAB_001019c7;
      }
      else {
LAB_00101a7d:
        *(void **)(this + 0x28) = pvVar2;
        *(uint *)(this + 0x20) = uVar8;
      }
      goto LAB_00101a84;
    }
    if (uVar9 < uVar5 >> 2) {
      if (0x38e38e3 < uVar9) goto LAB_001019c7;
      pvVar2 = *(void **)(this + 0x28);
      if (uVar9 != 0) goto LAB_00101a61;
      free(pvVar2);
      uVar8 = 0;
      pvVar2 = (void *)0x0;
      goto LAB_00101a7d;
    }
  }
  if ((uVar8 < uVar4) && (param_2)) {
    uVar5 = (uVar4 - uVar8) * 0x48;
    if (uVar5 != 0) {
      memset((void *)(*(long *)(this + 0x28) + (ulong)uVar8 * 0x48),0,(ulong)uVar5);
    }
  }
  *(uint *)(this + 0x24) = uVar4;
LAB_001019cc:
  *this = (hb_bit_set_t)0x0;
  return (hb_bit_set_t)0x0;
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
        if (iVar10 < (int)uVar8) goto LAB_00101d5c;
      }
      if (uVar9 == uVar3) goto LAB_00101df5;
      uVar8 = uVar7 + 1;
    } while ((int)uVar8 <= iVar10);
  }
LAB_00101d5c:
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
LAB_00101df5:
      *(uint *)(this + 8) = uVar7;
      return *(long *)(this + 0x28) + (ulong)*(uint *)(*(long *)(this + 0x18) + 4 + lVar11) * 0x48;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_hashmap_t<unsigned int, Triple, false>::alloc(unsigned int) */

hb_hashmap_t<unsigned_int,Triple,false> __thiscall
hb_hashmap_t<unsigned_int,Triple,false>::alloc
          (hb_hashmap_t<unsigned_int,Triple,false> *this,uint param_1)

{
  byte bVar1;
  int *__ptr;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  hb_hashmap_t<unsigned_int,Triple,false> hVar14;
  uint uVar15;
  size_t __size;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_40;
  
  hVar14 = this[0x10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (hVar14 != (hb_hashmap_t<unsigned_int,Triple,false>)0x0) {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_00102248;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar19 = param_1 * 2 + 8;
    if (uVar19 == 0) {
      __size = 0x20;
      uVar20 = 1;
      uVar19 = 0;
    }
    else {
      iVar17 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      uVar19 = iVar17 + 1;
      uVar20 = 1 << ((byte)uVar19 & 0x1f);
      __size = (ulong)uVar20 << 5;
    }
    puVar7 = (undefined4 *)malloc(__size);
    puVar11 = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      do {
        *puVar11 = 0;
        puVar12 = puVar11 + 8;
        puVar11[1] = 0;
        *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
        *(undefined8 *)(puVar11 + 6) = 0;
        puVar11 = puVar12;
      } while (puVar12 != (undefined4 *)((long)puVar7 + __size));
      __ptr = *(int **)(this + 0x28);
      *(undefined8 *)(this + 0x14) = 0;
      uStack_b0 = _UNK_00102388;
      uStack_b8 = __LC13;
      uStack_c8 = __LC12;
      uStack_c0 = _UNK_00102378;
      uVar10 = (*(int *)(this + 0x1c) + 1) - (uint)(*(int *)(this + 0x1c) == 0);
      *(uint *)(this + 0x1c) = uVar20 - 1;
      uStack_a8 = __LC14;
      uStack_a0 = _UNK_00102398;
      uStack_98 = __LC15;
      uStack_90 = _UNK_001023a8;
      uStack_88 = __LC16;
      uStack_80 = _UNK_001023b8;
      uStack_78 = __LC17;
      uStack_70 = _UNK_001023c8;
      uStack_68 = __LC18;
      uStack_60 = _UNK_001023d8;
      uStack_58 = __LC19;
      uStack_50 = _UNK_001023e8;
      if (uVar19 == 0x20) {
        uVar8 = 0x7fffffff;
      }
      else {
        uVar8 = *(undefined4 *)((long)&uStack_c8 + (ulong)uVar19 * 4);
      }
      *(undefined4 *)(this + 0x20) = uVar8;
      *(short *)(this + 0x12) = (short)uVar19 * 2;
      *(undefined4 **)(this + 0x28) = puVar7;
      if (uVar10 != 0) {
        piVar18 = __ptr;
        do {
          if (((*(byte *)(piVar18 + 1) & 1) != 0) &&
             (uVar19 = (uint)piVar18[1] >> 2,
             this[0x10] != (hb_hashmap_t<unsigned_int,Triple,false>)0x0)) {
            uVar20 = *(uint *)(this + 0x18);
            if (*(uint *)(this + 0x1c) <= (uVar20 >> 1) + uVar20) {
              cVar5 = alloc(this,0);
              if (cVar5 == '\0') goto LAB_001020f0;
              uVar20 = *(uint *)(this + 0x18);
            }
            lVar2 = *(long *)(this + 0x28);
            iVar16 = *piVar18;
            uVar13 = (ulong)uVar19 % (ulong)*(uint *)(this + 0x20);
            iVar17 = *(int *)(this + 0x14);
            piVar9 = (int *)(uVar13 * 0x20 + lVar2);
            bVar1 = *(byte *)(piVar9 + 1);
            if ((bVar1 & 2) == 0) {
              uVar3 = *(undefined8 *)(piVar18 + 2);
              uVar4 = *(undefined8 *)(piVar18 + 4);
              *piVar9 = iVar16;
              *(undefined8 *)(piVar9 + 2) = uVar3;
              *(undefined8 *)(piVar9 + 4) = uVar4;
              uVar3 = *(undefined8 *)(piVar18 + 6);
              piVar9[1] = uVar19 * 4 + 3;
              *(undefined8 *)(piVar9 + 6) = uVar3;
              *(uint *)(this + 0x18) = uVar20 + 1;
              *(int *)(this + 0x14) = iVar17 + 1;
            }
            else {
              uVar15 = 0;
              uVar6 = 0xffffffff;
              do {
                if (*piVar9 == iVar16) {
                  if (uVar6 == 0xffffffff) goto LAB_0010219e;
                  goto LAB_00102195;
                }
                if ((uVar6 == 0xffffffff) && ((bVar1 & 1) == 0)) {
                  uVar6 = (uint)uVar13;
                }
                uVar15 = uVar15 + 1;
                uVar13 = (ulong)((uint)uVar13 + uVar15 & *(uint *)(this + 0x1c));
                piVar9 = (int *)(uVar13 * 0x20 + lVar2);
                bVar1 = *(byte *)(piVar9 + 1);
              } while ((bVar1 & 2) != 0);
              if (uVar6 == 0xffffffff) {
LAB_00102281:
                uVar20 = uVar20 + 1;
              }
              else {
LAB_00102195:
                piVar9 = (int *)((ulong)uVar6 * 0x20 + lVar2);
LAB_0010219e:
                if ((*(byte *)(piVar9 + 1) & 2) == 0) goto LAB_00102281;
                iVar17 = iVar17 - (*(byte *)(piVar9 + 1) & 1);
                *(uint *)(this + 0x18) = uVar20 - 1;
                *(int *)(this + 0x14) = iVar17;
                iVar16 = *piVar18;
              }
              uVar3 = *(undefined8 *)(piVar18 + 2);
              uVar4 = *(undefined8 *)(piVar18 + 4);
              *piVar9 = iVar16;
              *(undefined8 *)(piVar9 + 2) = uVar3;
              *(undefined8 *)(piVar9 + 4) = uVar4;
              uVar3 = *(undefined8 *)(piVar18 + 6);
              piVar9[1] = uVar19 * 4 + 3;
              *(undefined8 *)(piVar9 + 6) = uVar3;
              *(uint *)(this + 0x18) = uVar20;
              *(int *)(this + 0x14) = iVar17 + 1;
              if ((*(ushort *)(this + 0x12) < uVar15) && (*(uint *)(this + 0x1c) < uVar20 << 3)) {
                alloc(this,*(uint *)(this + 0x1c) - 8);
              }
            }
          }
LAB_001020f0:
          piVar18 = piVar18 + 8;
        } while (piVar18 != __ptr + (ulong)uVar10 * 8);
      }
      free(__ptr);
      goto LAB_00102248;
    }
    this[0x10] = (hb_hashmap_t<unsigned_int,Triple,false>)0x0;
  }
  hVar14 = (hb_hashmap_t<unsigned_int,Triple,false>)0x0;
LAB_00102248:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hVar14;
}


