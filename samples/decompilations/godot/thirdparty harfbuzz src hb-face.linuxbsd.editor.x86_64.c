
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
          goto LAB_001000c3;
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
LAB_001000c3:
  pthread_mutex_destroy(__mutex);
  free(__mutex);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* hb_bit_set_t::add_range(unsigned int, unsigned int) [clone .isra.0] */

void __thiscall hb_bit_set_t::add_range(hb_bit_set_t *this,uint param_1,uint param_2)

{
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
  
  if (*this == (hb_bit_set_t)0x0) {
    return;
  }
  if ((param_1 <= param_2 && param_1 != 0xffffffff) && (param_2 != 0xffffffff)) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    uVar11 = param_2 >> 9;
    if (param_1 >> 9 == uVar11) {
      puVar6 = (undefined4 *)page_for(this,param_1,true);
      if (puVar6 != (undefined4 *)0x0) {
        uVar9 = (ulong)(param_1 >> 6 & 7);
        uVar8 = (ulong)(param_2 >> 6 & 7);
        puVar1 = puVar6 + uVar9 * 2 + 2;
        lVar7 = 1L << ((byte)param_1 & 0x3f);
        lVar4 = (1L << ((byte)param_2 & 0x3f)) * 2;
        if (puVar1 == puVar6 + uVar8 * 2 + 2) {
          *(ulong *)(puVar6 + uVar9 * 2 + 2) = lVar4 - lVar7 | *(ulong *)(puVar6 + uVar9 * 2 + 2);
        }
        else {
          iVar3 = (int)(puVar1 + 2);
          iVar2 = (int)(puVar6 + uVar8 * 2 + 2);
          *(ulong *)(puVar6 + uVar9 * 2 + 2) = -lVar7 | *(ulong *)(puVar6 + uVar9 * 2 + 2);
          if (iVar2 != iVar3) {
            memset(puVar1 + 2,0xff,(ulong)(uint)(iVar2 - iVar3));
          }
          *(ulong *)(puVar6 + uVar8 * 2 + 2) = *(ulong *)(puVar6 + uVar8 * 2 + 2) | lVar4 - 1U;
        }
        *puVar6 = 0xffffffff;
        return;
      }
    }
    else {
      puVar6 = (undefined4 *)page_for(this,param_1,true);
      if (puVar6 != (undefined4 *)0x0) {
        uVar10 = (param_1 >> 9) + 1;
        uVar5 = param_1 >> 6 & 7;
        puVar1 = puVar6 + (ulong)(uVar5 + 1) * 2;
        *(ulong *)(puVar6 + (ulong)uVar5 * 2 + 2) =
             -(1L << ((byte)param_1 & 0x3f)) | *(ulong *)(puVar6 + (ulong)uVar5 * 2 + 2);
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
            puVar6 = (undefined4 *)page_for(this,uVar5,true);
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
        puVar6 = (undefined4 *)page_for(this,param_2,true);
        if (puVar6 != (undefined4 *)0x0) {
          uVar8 = (ulong)(param_2 >> 6 & 7);
          uVar9 = (1L << ((byte)param_2 & 0x3f)) * 2 - 1;
          if (uVar8 == 0) {
            *(ulong *)(puVar6 + 2) = *(ulong *)(puVar6 + 2) | uVar9;
          }
          else {
            *(undefined8 *)(puVar6 + 2) = 0xffffffffffffffff;
            if (uVar8 != 1) {
              memset(puVar6 + 4,0xff,uVar8 * 8 - 8 & 0xffffffff);
            }
            *(ulong *)(puVar6 + uVar8 * 2 + 2) = *(ulong *)(puVar6 + uVar8 * 2 + 2) | uVar9;
          }
          *puVar6 = 0xffffffff;
          return;
        }
      }
    }
  }
  return;
}



uint hb_face_count(long param_1)

{
  OpenTypeFontFile *this;
  char cVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  ushort uVar8;
  uint uVar9;
  int *piVar10;
  long in_FS_OFFSET;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  int local_4c;
  long local_48;
  undefined4 local_40;
  undefined2 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar2 = 0;
    goto LAB_0010076a;
  }
  local_50 = '\0';
  local_3c = 0;
  local_58 = 0;
  local_40 = 0x10000;
  lVar4 = hb_blob_reference();
  lVar5 = hb_blob_reference(lVar4);
  local_48 = lVar5;
  while( true ) {
    local_60 = *(uint *)(lVar5 + 0x18);
    this = *(OpenTypeFontFile **)(lVar5 + 0x10);
    local_5c = local_60 * 0x40;
    if (local_60 >> 0x1a == 0) {
      if (0x3fffffff < local_5c) {
        local_5c = 0x3fffffff;
      }
      if (local_5c < 0x4000) {
        local_5c = 0x4000;
      }
    }
    else {
      local_5c = 0x3fffffff;
    }
    local_70._8_8_ = this + local_60;
    local_70._0_8_ = this;
    local_4c = 0;
    local_78[0] = 0;
    local_54 = 0;
    if (this == (OpenTypeFontFile *)0x0) {
      hb_blob_destroy(lVar5);
      goto LAB_00100703;
    }
    cVar1 = OT::OpenTypeFontFile::sanitize(this,(hb_sanitize_context_t *)local_78);
    lVar5 = local_48;
    if (cVar1 != '\0') {
      if (local_4c == 0) {
        hb_blob_destroy(local_48);
      }
      else {
        local_4c = 0;
        cVar1 = OT::OpenTypeFontFile::sanitize(this,(hb_sanitize_context_t *)local_78);
        if (local_4c != 0) {
          hb_blob_destroy(local_48);
          goto LAB_001007c8;
        }
        hb_blob_destroy(local_48);
        local_48 = 0;
        local_60 = 0;
        local_70 = (undefined1  [16])0x0;
        if (cVar1 == '\0') goto LAB_001007c8;
      }
      hb_blob_make_immutable(lVar4);
      goto LAB_00100703;
    }
    if ((local_4c == 0) || (local_50 != '\0')) break;
    local_70._0_8_ = hb_blob_get_data_writable(lVar4);
    local_70._8_8_ = (ulong)*(uint *)(lVar4 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) break;
    local_50 = '\x01';
  }
  hb_blob_destroy(lVar5);
LAB_001007c8:
  hb_blob_destroy(lVar4);
  lVar4 = hb_blob_get_empty();
LAB_00100703:
  puVar7 = (uint *)&_hb_NullPool;
  if (3 < *(uint *)(lVar4 + 0x18)) {
    puVar7 = *(uint **)(lVar4 + 0x10);
  }
  uVar3 = *puVar7;
  uVar2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if (uVar3 == 0x65757274) {
    uVar2 = 1;
    goto LAB_00100762;
  }
  if (uVar2 < 0x74727566) {
    if (uVar3 == 0x10000) {
      uVar2 = puVar7[1];
      lVar5 = 2;
      uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar8 = *(ushort *)((long)puVar7 + (ulong)uVar3 + 0x18);
      uVar6 = (ulong)(ushort)(uVar8 << 8 | uVar8 >> 8);
      uVar8 = *(ushort *)((long)puVar7 + uVar6 + uVar3);
      uVar8 = uVar8 << 8 | uVar8 >> 8;
      uVar9 = (uint)uVar8;
      uVar2 = 0;
      while( true ) {
        piVar10 = (int *)&_hb_NullPool;
        if (uVar2 <= uVar8) {
          piVar10 = (int *)((long)puVar7 + uVar6 + lVar5 + (ulong)uVar3);
        }
        if (*piVar10 == 0x746e6673) {
          uVar2 = (ushort)(*(ushort *)(piVar10 + 1) << 8 | *(ushort *)(piVar10 + 1) >> 8) + 1;
          goto LAB_00100762;
        }
        lVar5 = lVar5 + 8;
        if (uVar2 == uVar9) break;
        uVar8 = *(ushort *)((long)puVar7 + (ulong)uVar3 + 0x18);
        uVar6 = (ulong)(ushort)(uVar8 << 8 | uVar8 >> 8);
        uVar8 = *(ushort *)((long)puVar7 + uVar6 + uVar3);
        uVar8 = uVar8 << 8 | uVar8 >> 8;
        uVar2 = uVar2 + 1;
      }
    }
    else if ((0xff < uVar2) && ((uVar2 = 1, uVar3 == 0x100 || (uVar3 == 0x4f54544f))))
    goto LAB_00100762;
LAB_00100760:
    uVar2 = 0;
  }
  else if (uVar3 == 0x66637474) {
    if (1 < (ushort)((ushort)puVar7[1] << 8 | (ushort)puVar7[1] >> 8) - 1) goto LAB_00100760;
    uVar2 = puVar7[2];
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  else {
    uVar2 = 1;
    if (uVar3 != 0x31707974) goto LAB_00100760;
  }
LAB_00100762:
  hb_blob_destroy(lVar4);
LAB_0010076a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined4 * hb_face_create_for_tables(long param_1,undefined8 param_2,code *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)calloc(1,0x1c0);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined1 (*) [16])(puVar1 + 0x16) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x1e) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x22) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x26) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x2a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x2e) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x32) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x36) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x3a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x3e) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x42) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x46) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x4a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x4e) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x52) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x56) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x5a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x5e) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x62) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x66) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 0x6a) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar1 + 0x1a) = 0;
      *(undefined8 *)(puVar1 + 0x6e) = 0;
      *puVar1 = 1;
      puVar1[1] = 1;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(long *)(puVar1 + 8) = param_1;
      *(undefined8 *)(puVar1 + 10) = param_2;
      *(code **)(puVar1 + 0xc) = param_3;
      puVar1[6] = 0xffffffff;
      *(undefined4 **)(puVar1 + 0x14) = puVar1;
      hb_ot_face_t::init0((hb_face_t *)(puVar1 + 0x1c));
      return puVar1;
    }
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_2);
  }
  return (undefined4 *)_hb_Null_hb_face_t;
}



undefined1 * hb_face_create(long param_1,undefined4 param_2)

{
  OpenTypeFontFile *this;
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  int local_4c;
  long local_48;
  undefined4 local_40;
  undefined2 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    param_1 = hb_blob_get_empty();
  }
  local_50 = '\0';
  local_3c = 0;
  local_58 = 0;
  local_40 = 0x10000;
  lVar2 = hb_blob_reference(param_1);
  lVar3 = hb_blob_reference(lVar2);
  local_48 = lVar3;
  while( true ) {
    local_60 = *(uint *)(lVar3 + 0x18);
    this = *(OpenTypeFontFile **)(lVar3 + 0x10);
    local_5c = local_60 * 0x40;
    if (local_60 >> 0x1a == 0) {
      if (0x3fffffff < local_5c) {
        local_5c = 0x3fffffff;
      }
      if (local_5c < 0x4000) {
        local_5c = 0x4000;
      }
    }
    else {
      local_5c = 0x3fffffff;
    }
    local_70._8_8_ = this + local_60;
    local_70._0_8_ = this;
    local_4c = 0;
    local_78[0] = 0;
    local_54 = 0;
    if (this == (OpenTypeFontFile *)0x0) {
      hb_blob_destroy(lVar3);
      goto LAB_00100bab;
    }
    cVar1 = OT::OpenTypeFontFile::sanitize(this,(hb_sanitize_context_t *)local_78);
    lVar3 = local_48;
    if (cVar1 != '\0') {
      if (local_4c == 0) {
        hb_blob_destroy(local_48);
      }
      else {
        local_4c = 0;
        cVar1 = OT::OpenTypeFontFile::sanitize(this,(hb_sanitize_context_t *)local_78);
        if (local_4c != 0) {
          hb_blob_destroy(local_48);
          goto LAB_00100c48;
        }
        hb_blob_destroy(local_48);
        local_48 = 0;
        local_60 = 0;
        local_70 = (undefined1  [16])0x0;
        if (cVar1 == '\0') goto LAB_00100c48;
      }
      hb_blob_make_immutable(lVar2);
      goto LAB_00100bab;
    }
    if ((local_4c == 0) || (local_50 != '\0')) break;
    local_70._0_8_ = hb_blob_get_data_writable(lVar2,0);
    local_70._8_8_ = (ulong)*(uint *)(lVar2 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) break;
    local_50 = '\x01';
  }
  hb_blob_destroy(lVar3);
LAB_00100c48:
  hb_blob_destroy(lVar2);
  lVar2 = hb_blob_get_empty();
LAB_00100bab:
  plVar4 = (long *)calloc(1,0x10);
  if (plVar4 == (long *)0x0) {
    puVar5 = _hb_Null_hb_face_t;
    hb_blob_destroy(lVar2);
  }
  else {
    *plVar4 = lVar2;
    *(short *)(plVar4 + 1) = (short)param_2;
    puVar5 = (undefined1 *)
             hb_face_create_for_tables(_hb_face_for_data_reference_table,plVar4,0x100000);
    if (*(code **)(puVar5 + 0x48) != (code *)0x0) {
      (**(code **)(puVar5 + 0x48))(*(undefined8 *)(puVar5 + 0x40));
    }
    *(long **)(puVar5 + 0x40) = plVar4;
    *(code **)(puVar5 + 0x38) = _hb_face_for_data_get_table_tags;
    *(undefined8 *)(puVar5 + 0x48) = 0;
    *(undefined4 *)(puVar5 + 0x10) = param_2;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



long hb_face_create_or_fail(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = hb_face_count();
  if (param_2 < uVar1) {
    lVar2 = hb_face_create(param_1,param_2);
    if (*(int *)(lVar2 + 4) != 0) {
      return lVar2;
    }
  }
  return 0;
}



long hb_face_create_from_file_or_fail(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = hb_blob_create_from_file_or_fail();
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = hb_face_count(lVar2);
  if (param_2 < uVar1) {
    lVar3 = hb_face_create(lVar2,param_2);
    if (*(int *)(lVar3 + 4) != 0) goto LAB_00100d99;
  }
  lVar3 = 0;
LAB_00100d99:
  hb_blob_destroy(lVar2);
  return lVar3;
}



undefined1 * hb_face_get_empty(void)

{
  return _hb_Null_hb_face_t;
}



int * hb_face_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



void hb_face_destroy(hb_sparseset_t *param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (param_1 == (hb_sparseset_t *)0x0) {
    return;
  }
  if (*(int *)param_1 != 0) {
    LOCK();
    *(int *)param_1 = *(int *)param_1 + -1;
    UNLOCK();
    if (*(int *)param_1 == 0) {
      hb_object_fini<hb_sparseset_t<hb_bit_set_invertible_t>>(param_1);
      __ptr = *(undefined8 **)(param_1 + 0x1b8);
      while (__ptr != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)__ptr[1];
        hb_shape_plan_destroy(*__ptr);
        free(__ptr);
        __ptr = puVar1;
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        _hb_graphite2_shaper_face_data_destroy();
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (*(long *)(param_1 + 0x60) != 0) {
        _hb_ot_shaper_face_data_destroy();
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (*(long *)(param_1 + 0x68) != 0) {
        _hb_fallback_shaper_face_data_destroy();
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
      hb_ot_face_t::fini();
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x40));
      }
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x28));
      }
      free(param_1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_face_set_user_data(int *param_1,long param_2,long param_3,long param_4,int param_5)

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
      if (__mutex[1].__data.__lock != 0) goto LAB_00101218;
      uVar9 = 8;
LAB_001011ac:
      plVar6 = (long *)realloc(plVar6,uVar9 * 0x18);
      if (plVar6 == (long *)0x0) {
        if ((uint)__mutex[1].__data.__lock < (uint)uVar9) {
          __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
          goto LAB_00101218;
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
          goto LAB_00100fc5;
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
        if (uVar5 <= uVar1) goto LAB_00101173;
        do {
          uVar8 = (int)(uVar9 >> 1) + 8 + (int)uVar9;
          uVar9 = (ulong)uVar8;
        } while (uVar8 < uVar5);
        if (uVar8 < 0xaaaaaab) goto LAB_001011ac;
        __mutex[1].__data.__lock = ~uVar1;
      }
LAB_00101218:
      uVar11 = __hb_CrapPool;
      ___stack_chk_fail = _malloc;
      plVar10 = (long *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _malloc = uVar11;
      goto LAB_0010118a;
    }
  }
LAB_00101173:
  *(uint *)((long)__mutex + 0x2c) = uVar5;
  plVar10 = plVar6 + uVar7 * 3;
  *plVar10 = param_2;
  plVar10[1] = param_3;
  plVar10[2] = param_4;
LAB_0010118a:
  pthread_mutex_unlock(__mutex);
LAB_00100fc5:
  return -1 < __mutex[1].__data.__lock && plVar10 != (long *)0x0;
}



long hb_face_get_user_data(int *param_1,long param_2)

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



void hb_face_make_immutable(long param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



bool hb_face_is_immutable(long param_1)

{
  return *(int *)(param_1 + 4) == 0;
}



void hb_face_reference_table(long param_1,int param_2)

{
  long lVar1;
  
  if (((param_2 != 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) &&
     (lVar1 = (**(code **)(param_1 + 0x20))(param_1,param_2,*(undefined8 *)(param_1 + 0x28)),
     lVar1 != 0)) {
    return;
  }
  hb_blob_get_empty();
  return;
}



void hb_face_reference_blob(long param_1)

{
  long lVar1;
  
  if ((*(code **)(param_1 + 0x20) != (code *)0x0) &&
     (lVar1 = (**(code **)(param_1 + 0x20))(param_1,0,*(undefined8 *)(param_1 + 0x28)), lVar1 != 0))
  {
    return;
  }
  hb_blob_get_empty();
  return;
}



void hb_face_set_index(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return;
}



undefined4 hb_face_get_index(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



void hb_face_set_upem(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



void hb_face_get_upem(long param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    return;
  }
  hb_face_t::load_upem();
  return;
}



void hb_face_set_glyph_count(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



void hb_face_get_glyph_count(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    return;
  }
  hb_face_t::load_num_glyphs();
  return;
}



void hb_face_set_get_table_tags_func
               (long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  if ((param_4 != (code *)0x0) && (*(int *)(param_1 + 4) == 0)) {
    (*param_4)(param_3);
  }
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(code **)(param_1 + 0x48) = param_4;
  return;
}



undefined8 hb_face_get_table_tags(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x38))();
    return uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}



void hb_face_collect_variation_unicodes(long param_1,uint param_2,long param_3)

{
  hb_bit_set_t *this;
  undefined4 *puVar1;
  long *plVar2;
  hb_face_t *phVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  accelerator_t *this_00;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  uint *puVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  undefined *puVar26;
  long lVar27;
  byte local_60;
  
  plVar2 = (long *)(param_1 + 0x88);
  do {
    while( true ) {
      this_00 = (accelerator_t *)*plVar2;
      if (this_00 != (accelerator_t *)0x0) goto LAB_00101591;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_00101d36;
      this_00 = (accelerator_t *)calloc(1,0x58);
      if (this_00 == (accelerator_t *)0x0) break;
      OT::cmap::accelerator_t::accelerator_t(this_00,phVar3);
      LOCK();
      lVar27 = *plVar2;
      if (lVar27 == 0) {
        *plVar2 = (long)this_00;
      }
      UNLOCK();
      if (lVar27 == 0) goto LAB_00101591;
      if (this_00 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)(this_00 + 0x50));
        free(this_00);
      }
    }
    LOCK();
    lVar27 = *plVar2;
    if (lVar27 == 0) {
      *plVar2 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar27 != 0);
LAB_00101d36:
  this_00 = (accelerator_t *)&_hb_NullPool;
LAB_00101591:
  puVar26 = *(undefined **)(this_00 + 8);
  pbVar16 = &_hb_NullPool;
  if (puVar26 == (undefined *)0x0) {
    puVar26 = &_hb_NullPool;
  }
  uVar6 = *(uint *)(puVar26 + 6);
  iVar19 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) - 1;
  if (-1 < iVar19) {
    iVar21 = 0;
    do {
      while( true ) {
        uVar12 = (uint)(iVar21 + iVar19) >> 1;
        pbVar16 = puVar26 + (ulong)uVar12 * 0xb + 10;
        uVar6 = (uint)*pbVar16 * 0x10000 + (uint)pbVar16[1] * 0x100 + (uint)pbVar16[2];
        if (param_2 < uVar6) break;
        if (param_2 == uVar6) goto LAB_00101603;
        iVar21 = uVar12 + 1;
        if (iVar19 < iVar21) goto LAB_001015fc;
      }
      iVar19 = uVar12 - 1;
    } while (iVar21 <= iVar19);
LAB_001015fc:
    pbVar16 = &_hb_NullPool;
  }
LAB_00101603:
  uVar6 = *(uint *)(pbVar16 + 3);
  puVar25 = (uint *)&_hb_NullPool;
  if (uVar6 != 0) {
    puVar25 = (uint *)(puVar26 +
                      (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18));
  }
  uVar6 = *puVar25;
  lVar27 = 0;
  uVar12 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  this = (hb_bit_set_t *)(param_3 + 0x10);
  if (uVar6 != 0) {
    do {
      while( true ) {
        uVar14 = (uint)(byte)puVar25[lVar27 + 1] * 0x10000 +
                 (uint)*(byte *)((long)puVar25 + lVar27 * 4 + 5) * 0x100 +
                 (uint)*(byte *)((long)puVar25 + lVar27 * 4 + 6);
        uVar6 = *(byte *)((long)puVar25 + lVar27 * 4 + 7) + uVar14;
        if (0x10ffff < uVar6) {
          uVar6 = 0x10ffff;
        }
        bVar5 = *(byte *)(param_3 + 0x10) ^ 1;
        bVar11 = (byte)uVar6;
        local_60 = (byte)uVar14;
        if (*(char *)(param_3 + 0x40) == '\0') break;
        if (bVar5 == 0 && uVar6 >= uVar14) {
          *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
          uVar23 = uVar6 >> 9;
          uVar7 = uVar14 >> 9;
          iVar19 = (uVar7 + 1) - (uint)((uVar14 & 0x1ff) == 0);
          if (uVar6 + 1 == (uVar23 + 1) * 0x200) {
            uVar8 = uVar7;
            if (uVar23 <= uVar7) {
              uVar8 = uVar23;
            }
            uVar13 = uVar23;
            if ((int)uVar8 < iVar19) goto LAB_00101b62;
          }
          else {
            uVar13 = uVar23 - 1;
            uVar8 = uVar13;
            if ((int)uVar7 < (int)uVar13) {
              uVar8 = uVar7;
            }
            if ((int)uVar8 < iVar19) {
LAB_00101b62:
              puVar9 = (undefined4 *)hb_bit_set_t::page_for(this,uVar14,false);
              if (puVar9 != (undefined4 *)0x0) {
                local_60 = local_60 & 0x3f;
                uVar20 = (ulong)(uVar14 >> 6 & 7);
                uVar18 = *(ulong *)(puVar9 + uVar20 * 2 + 2);
                puVar10 = puVar9 + uVar20 * 2 + 2;
                if (uVar7 == uVar23) {
                  uVar15 = (ulong)(uVar6 >> 6 & 7);
                  lVar24 = 1L << (bVar11 & 0x3f);
                  if (puVar10 == puVar9 + uVar15 * 2 + 2) {
                    *(ulong *)(puVar9 + uVar20 * 2 + 2) =
                         (1L << local_60) + -1 + lVar24 * -2 & uVar18;
                  }
                  else {
                    *(ulong *)(puVar9 + uVar20 * 2 + 2) = ~(-1L << local_60) & uVar18;
                    iVar4 = (int)(puVar10 + 2);
                    iVar21 = (int)(puVar9 + uVar15 * 2 + 2);
                    if (iVar21 != iVar4) {
                      memset(puVar10 + 2,0,(ulong)(uint)(iVar21 - iVar4));
                    }
                    *(ulong *)(puVar9 + uVar15 * 2 + 2) =
                         *(ulong *)(puVar9 + uVar15 * 2 + 2) & lVar24 * -2;
                  }
                  *puVar9 = 0xffffffff;
                  goto LAB_00101aca;
                }
                puVar1 = puVar9 + 0x10;
                *(ulong *)(puVar9 + uVar20 * 2 + 2) = ~(-1L << local_60) & uVar18;
                if (puVar10 != puVar1) {
                  puVar10 = puVar10 + 2;
                  if ((int)puVar1 != (int)puVar10) {
                    memset(puVar10,0,(long)puVar1 - (long)puVar10 & 0xffffffff);
                  }
                  *(undefined8 *)(puVar9 + 0x10) = 0;
                }
                *puVar9 = 0xffffffff;
              }
            }
            if ((((int)uVar13 < (int)uVar23) && (uVar7 != uVar23)) &&
               (puVar9 = (undefined4 *)hb_bit_set_t::page_for(this,uVar6,false),
               puVar9 != (undefined4 *)0x0)) {
              uVar20 = (ulong)(uVar6 >> 6 & 7);
              uVar18 = (1L << (bVar11 & 0x3f)) * -2;
              if (uVar20 == 0) {
                *(ulong *)(puVar9 + 2) = *(ulong *)(puVar9 + 2) & uVar18;
              }
              else {
                *(undefined8 *)(puVar9 + 2) = 0;
                if (uVar20 != 1) {
                  memset(puVar9 + 4,0,uVar20 * 8 - 8 & 0xffffffff);
                }
                *(ulong *)(puVar9 + uVar20 * 2 + 2) = *(ulong *)(puVar9 + uVar20 * 2 + 2) & uVar18;
              }
              *puVar9 = 0xffffffff;
            }
          }
LAB_00101aca:
          hb_bit_set_t::del_pages(this,iVar19,uVar13);
        }
joined_r0x00101ae0:
        iVar19 = (int)lVar27;
        lVar27 = lVar27 + 1;
        if (uVar12 <= iVar19 + 1U) goto LAB_001017de;
      }
      if (bVar5 != 0 || uVar6 < uVar14) goto joined_r0x00101ae0;
      *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
      uVar23 = uVar6 >> 9;
      if (uVar14 >> 9 == uVar23) {
        puVar9 = (undefined4 *)hb_bit_set_t::page_for(this,uVar14,true);
        if (puVar9 != (undefined4 *)0x0) {
          uVar18 = (ulong)(uVar14 >> 6 & 7);
          uVar20 = (ulong)(uVar6 >> 6 & 7);
          puVar10 = puVar9 + uVar18 * 2 + 2;
          lVar22 = 1L << (local_60 & 0x3f);
          lVar24 = (1L << (bVar11 & 0x3f)) * 2;
          if (puVar10 == puVar9 + uVar20 * 2 + 2) {
            *(ulong *)(puVar9 + uVar18 * 2 + 2) =
                 lVar24 - lVar22 | *(ulong *)(puVar9 + uVar18 * 2 + 2);
          }
          else {
            *(ulong *)(puVar9 + uVar18 * 2 + 2) = -lVar22 | *(ulong *)(puVar9 + uVar18 * 2 + 2);
            iVar21 = (int)(puVar10 + 2);
            iVar19 = (int)(puVar9 + uVar20 * 2 + 2);
            if (iVar19 != iVar21) {
              memset(puVar10 + 2,0xff,(ulong)(uint)(iVar19 - iVar21));
            }
            *(ulong *)(puVar9 + uVar20 * 2 + 2) = *(ulong *)(puVar9 + uVar20 * 2 + 2) | lVar24 - 1U;
          }
          *puVar9 = 0xffffffff;
        }
        goto joined_r0x00101ae0;
      }
      puVar9 = (undefined4 *)hb_bit_set_t::page_for(this,uVar14,true);
      if (puVar9 == (undefined4 *)0x0) goto joined_r0x00101ae0;
      uVar7 = uVar14 >> 6 & 7;
      uVar14 = (uVar14 >> 9) + 1;
      puVar10 = puVar9 + (ulong)(uVar7 + 1) * 2;
      *(ulong *)(puVar9 + (ulong)uVar7 * 2 + 2) =
           -(1L << (local_60 & 0x3f)) | *(ulong *)(puVar9 + (ulong)uVar7 * 2 + 2);
      if (puVar10 != puVar9 + 0x10) {
        iVar21 = (int)(puVar10 + 2);
        iVar19 = (int)(puVar9 + 0x10);
        if (iVar19 != iVar21) {
          memset(puVar10 + 2,0xff,(ulong)(uint)(iVar19 - iVar21));
        }
        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
      }
      *puVar9 = 0xffffffff;
      uVar7 = uVar14 * 0x200;
      if (uVar14 < uVar23) {
        do {
          puVar9 = (undefined4 *)hb_bit_set_t::page_for(this,uVar7,true);
          if (puVar9 == (undefined4 *)0x0) goto joined_r0x00101ae0;
          uVar7 = uVar7 + 0x200;
          *puVar9 = 0x200;
          puVar9[2] = 0xffffffff;
          puVar9[3] = 0xffffffff;
          puVar9[4] = 0xffffffff;
          puVar9[5] = 0xffffffff;
          puVar9[6] = 0xffffffff;
          puVar9[7] = 0xffffffff;
          puVar9[8] = 0xffffffff;
          puVar9[9] = 0xffffffff;
          puVar9[10] = 0xffffffff;
          puVar9[0xb] = 0xffffffff;
          puVar9[0xc] = 0xffffffff;
          puVar9[0xd] = 0xffffffff;
          puVar9[0xe] = 0xffffffff;
          puVar9[0xf] = 0xffffffff;
          puVar9[0x10] = 0xffffffff;
          puVar9[0x11] = 0xffffffff;
        } while (uVar7 != uVar23 * 0x200);
      }
      puVar9 = (undefined4 *)hb_bit_set_t::page_for(this,uVar6,true);
      if (puVar9 == (undefined4 *)0x0) goto joined_r0x00101ae0;
      uVar20 = (ulong)(uVar6 >> 6 & 7);
      uVar18 = (1L << (bVar11 & 0x3f)) * 2 - 1;
      if (uVar20 == 0) {
        *(ulong *)(puVar9 + 2) = *(ulong *)(puVar9 + 2) | uVar18;
      }
      else {
        *(undefined8 *)(puVar9 + 2) = 0xffffffffffffffff;
        if (uVar20 != 1) {
          memset(puVar9 + 4,0xff,uVar20 * 8 - 8 & 0xffffffff);
        }
        *(ulong *)(puVar9 + uVar20 * 2 + 2) = *(ulong *)(puVar9 + uVar20 * 2 + 2) | uVar18;
      }
      lVar27 = lVar27 + 1;
      *puVar9 = 0xffffffff;
    } while ((uint)lVar27 < uVar12);
  }
LAB_001017de:
  uVar6 = *(uint *)(pbVar16 + 7);
  puVar25 = (uint *)&_hb_NullPool;
  if (uVar6 != 0) {
    puVar25 = (uint *)(puVar26 +
                      (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18));
  }
  uVar6 = *puVar25;
  puVar25 = puVar25 + 1;
  puVar17 = (uint *)((ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                            uVar6 << 0x18) * 5 + (long)puVar25);
  if (uVar6 != 0) {
    do {
      uVar6 = (uint)(byte)*puVar25 * 0x10000 + (uint)*(byte *)((long)puVar25 + 1) * 0x100 +
              (uint)*(byte *)((long)puVar25 + 2);
      if (*(char *)(param_3 + 0x40) == '\0') {
        if (*(char *)(param_3 + 0x10) != '\0') {
          *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
          puVar9 = (undefined4 *)hb_bit_set_t::page_for((hb_bit_set_t *)(param_3 + 0x10),uVar6,true)
          ;
          if (puVar9 != (undefined4 *)0x0) {
            *(ulong *)(puVar9 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                 *(ulong *)(puVar9 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) | 1L << ((byte)uVar6 & 0x3f);
            *puVar9 = 0xffffffff;
          }
        }
      }
      else if ((*(char *)(param_3 + 0x10) != '\0') &&
              (puVar9 = (undefined4 *)
                        hb_bit_set_t::page_for((hb_bit_set_t *)(param_3 + 0x10),uVar6,false),
              puVar9 != (undefined4 *)0x0)) {
        *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
        bVar5 = (byte)uVar6 & 0x3f;
        *(ulong *)(puVar9 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
             *(ulong *)(puVar9 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) &
             (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
        *puVar9 = 0xffffffff;
      }
      puVar25 = (uint *)((long)puVar25 + 5);
    } while (puVar25 != puVar17);
  }
  return;
}



void hb_face_collect_unicodes(long param_1,hb_set_t *param_2)

{
  long *plVar1;
  long lVar2;
  hb_face_t *phVar3;
  uint uVar4;
  accelerator_t *this;
  CmapSubtable *this_00;
  
  plVar1 = (long *)(param_1 + 0x88);
  do {
    while( true ) {
      this = (accelerator_t *)*plVar1;
      if (this != (accelerator_t *)0x0) goto LAB_00101d9b;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_00101e62;
      this = (accelerator_t *)calloc(1,0x58);
      if (this == (accelerator_t *)0x0) break;
      OT::cmap::accelerator_t::accelerator_t(this,phVar3);
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)this;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_00101d9b;
      if (this != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)(this + 0x50));
        free(this);
      }
    }
    LOCK();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar2 != 0);
LAB_00101e62:
  this = (accelerator_t *)&_hb_NullPool;
LAB_00101d9b:
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 == 0xffffffff) {
    uVar4 = hb_face_t::load_num_glyphs();
  }
  this_00 = *(CmapSubtable **)this;
  if (this_00 == (CmapSubtable *)0x0) {
    this_00 = (CmapSubtable *)&_hb_NullPool;
  }
  OT::CmapSubtable::collect_unicodes(this_00,param_2,uVar4);
  return;
}



void hb_face_collect_variation_selectors(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  hb_face_t *phVar3;
  byte bVar4;
  undefined4 *puVar5;
  accelerator_t *this;
  uint uVar6;
  byte *pbVar7;
  undefined *puVar8;
  byte *pbVar9;
  
  plVar1 = (long *)(param_1 + 0x88);
  do {
    while( true ) {
      this = (accelerator_t *)*plVar1;
      if (this != (accelerator_t *)0x0) goto LAB_00101e9f;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_0010201d;
      this = (accelerator_t *)calloc(1,0x58);
      if (this == (accelerator_t *)0x0) break;
      OT::cmap::accelerator_t::accelerator_t(this,phVar3);
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)this;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_00101e9f;
      if (this != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)(this + 0x50));
        free(this);
      }
    }
    LOCK();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar2 != 0);
LAB_0010201d:
  this = (accelerator_t *)&_hb_NullPool;
LAB_00101e9f:
  puVar8 = *(undefined **)(this + 8);
  if (puVar8 == (undefined *)0x0) {
    puVar8 = &_hb_NullPool;
  }
  uVar6 = *(uint *)(puVar8 + 6);
  pbVar9 = puVar8 + 10;
  pbVar7 = pbVar9 + (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                           uVar6 << 0x18) * 0xb;
  if (uVar6 != 0) {
    do {
      uVar6 = (uint)*pbVar9 * 0x10000 + (uint)pbVar9[1] * 0x100 + (uint)pbVar9[2];
      if (*(char *)(param_2 + 0x40) == '\0') {
        if (*(char *)(param_2 + 0x10) != '\0') {
          *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
          puVar5 = (undefined4 *)hb_bit_set_t::page_for((hb_bit_set_t *)(param_2 + 0x10),uVar6,true)
          ;
          if (puVar5 != (undefined4 *)0x0) {
            *(ulong *)(puVar5 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                 *(ulong *)(puVar5 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) | 1L << ((byte)uVar6 & 0x3f);
            *puVar5 = 0xffffffff;
          }
        }
      }
      else if ((*(char *)(param_2 + 0x10) != '\0') &&
              (puVar5 = (undefined4 *)
                        hb_bit_set_t::page_for((hb_bit_set_t *)(param_2 + 0x10),uVar6,false),
              puVar5 != (undefined4 *)0x0)) {
        *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
        bVar4 = (byte)uVar6 & 0x3f;
        *(ulong *)(puVar5 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
             *(ulong *)(puVar5 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) &
             (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
        *puVar5 = 0xffffffff;
      }
      pbVar9 = pbVar9 + 0xb;
    } while (pbVar9 != pbVar7);
  }
  return;
}



void hb_face_collect_nominal_glyph_mapping(long param_1,hb_map_t *param_2,hb_set_t *param_3)

{
  long *plVar1;
  long lVar2;
  hb_face_t *phVar3;
  uint uVar4;
  accelerator_t *this;
  CmapSubtable *this_00;
  long in_FS_OFFSET;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 1;
  local_48 = 0;
  local_88 = 1;
  local_84 = 1;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  if (param_3 == (hb_set_t *)0x0) {
    param_3 = (hb_set_t *)&local_88;
  }
  plVar1 = (long *)(param_1 + 0x88);
  do {
    while( true ) {
      this = (accelerator_t *)*plVar1;
      if (this != (accelerator_t *)0x0) goto LAB_001020df;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_00102249;
      this = (accelerator_t *)calloc(1,0x58);
      if (this == (accelerator_t *)0x0) break;
      OT::cmap::accelerator_t::accelerator_t(this,phVar3);
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)this;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_001020df;
      if (this != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)(this + 0x50));
        free(this);
      }
    }
    LOCK();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar2 != 0);
LAB_00102249:
  this = (accelerator_t *)&_hb_NullPool;
LAB_001020df:
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 == 0xffffffff) {
    uVar4 = hb_face_t::load_num_glyphs();
  }
  this_00 = *(CmapSubtable **)this;
  if (this_00 == (CmapSubtable *)0x0) {
    this_00 = (CmapSubtable *)&_hb_NullPool;
  }
  OT::CmapSubtable::collect_mapping(this_00,param_3,param_2,uVar4);
  hb_object_fini<hb_sparseset_t<hb_bit_set_invertible_t>>((hb_sparseset_t *)&local_88);
  if ((int)local_68 != 0) {
    free(local_60);
  }
  local_68 = local_68 & 0xffffffff00000000;
  local_60 = (void *)0x0;
  if ((int)local_58 != 0) {
    free(local_50);
    if ((int)local_68 != 0) {
      free(local_60);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtableFormat12>(void const*, unsigned int,
   unsigned int*) */

bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtableFormat12>
               (void *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  uVar4 = *(uint *)((long)param_1 + 0xc);
  iVar3 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) - 1;
  if (-1 < iVar3) {
    iVar6 = 0;
    do {
      uVar2 = (uint)(iVar6 + iVar3) >> 1;
      puVar5 = (uint *)((long)param_1 + (ulong)uVar2 * 0xc + 0x10);
      uVar4 = *puVar5;
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      if (param_2 < uVar4) {
        iVar3 = uVar2 - 1;
      }
      else {
        uVar1 = puVar5[1];
        if (param_2 <=
            (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18))
        goto LAB_00102485;
        iVar6 = uVar2 + 1;
      }
    } while (iVar6 <= iVar3);
  }
  uVar4 = __hb_Null_OT_CmapSubtableLongGroup >> 0x18 |
          (__hb_Null_OT_CmapSubtableLongGroup & 0xff0000) >> 8 |
          (__hb_Null_OT_CmapSubtableLongGroup & 0xff00) << 8 |
          __hb_Null_OT_CmapSubtableLongGroup << 0x18;
  if (uVar4 <= (_DAT_0010a02c >> 0x18 | (_DAT_0010a02c & 0xff0000) >> 8 |
                (_DAT_0010a02c & 0xff00) << 8 | _DAT_0010a02c << 0x18)) {
    puVar5 = (uint *)&_hb_Null_OT_CmapSubtableLongGroup;
LAB_00102485:
    uVar2 = puVar5[2];
    uVar4 = ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
            param_2) - uVar4;
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return true;
    }
  }
  return false;
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
    if ((int)uVar5 < 0) goto LAB_001025fc;
    hVar3 = (hb_bit_set_t)param_3;
    if (param_3) {
      uVar8 = param_1;
      if (param_1 <= uVar4) {
        uVar8 = uVar4;
      }
      if (uVar5 < uVar8) {
        if (uVar8 < 0x38e38e4) goto LAB_00102789;
      }
      else {
        if (uVar5 >> 2 <= uVar8) goto LAB_00102543;
        if (uVar8 < 0x38e38e4) {
          pvVar2 = *(void **)(this + 0x28);
          if (uVar8 != 0) goto LAB_00102790;
          free(pvVar2);
          uVar8 = 0;
          pvVar2 = (void *)0x0;
          goto LAB_001027ac;
        }
      }
    }
    else {
      uVar8 = uVar5;
      if (param_1 <= uVar5) goto LAB_00102543;
      do {
        uVar8 = (uVar8 >> 1) + 8 + uVar8;
      } while (uVar8 < param_1);
      if (uVar8 < 0x38e38e4) {
        pvVar2 = *(void **)(this + 0x28);
        goto LAB_00102790;
      }
    }
LAB_001025f7:
    *(uint *)(this + 0x20) = ~uVar5;
    goto LAB_001025fc;
  }
  if ((int)uVar5 < 0) goto LAB_001025fc;
  if (uVar5 == 0) {
    param_1 = 1;
    uVar8 = 1;
LAB_00102789:
    pvVar2 = *(void **)(this + 0x28);
    param_3 = (bool)hVar1;
LAB_00102790:
    pvVar2 = realloc(pvVar2,(ulong)uVar8 * 0x48);
    if (pvVar2 == (void *)0x0) {
      uVar5 = *(uint *)(this + 0x20);
      if (uVar5 < uVar8) goto LAB_001025f7;
    }
    else {
LAB_001027ac:
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
      goto LAB_00102790;
    }
    uVar7 = 0;
    param_1 = 1;
  }
LAB_00102543:
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
          goto LAB_001027f4;
        }
        *(uint *)(this + 0x10) = ~uVar4;
        uVar5 = *(uint *)(this + 0x20);
        if ((int)uVar5 < 0) goto LAB_001025fc;
        uVar7 = (ulong)uVar5;
        uVar4 = 0;
        if (-1 < (int)*(uint *)(this + 0x14)) {
          uVar4 = *(uint *)(this + 0x14);
        }
        goto LAB_0010266b;
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
          if ((int)uVar5 < 0) goto LAB_001025fc;
          uVar6 = 0;
          if (-1 < (int)uVar8) {
            uVar6 = (ulong)uVar8;
          }
          goto LAB_001026f6;
        }
        pvVar2 = *(void **)(this + 0x18);
LAB_001027f4:
        uVar4 = (uint)uVar7;
        pvVar2 = realloc(pvVar2,uVar7 << 3);
        if (pvVar2 == (void *)0x0) {
          uVar5 = *(uint *)(this + 0x14);
          uVar6 = (ulong)uVar5;
          if (uVar4 <= *(uint *)(this + 0x10)) goto LAB_0010260f;
          *(uint *)(this + 0x10) = ~*(uint *)(this + 0x10);
          goto LAB_00102853;
        }
      }
      else {
        if (uVar4 >> 2 <= uVar5) goto LAB_0010260f;
        pvVar2 = *(void **)(this + 0x18);
        if (uVar5 != 0) goto LAB_001027f4;
        free(pvVar2);
        uVar4 = 0;
        pvVar2 = (void *)0x0;
      }
      *(void **)(this + 0x18) = pvVar2;
      *(uint *)(this + 0x10) = uVar4;
    }
    uVar6 = (ulong)*(uint *)(this + 0x14);
LAB_0010260f:
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
LAB_00102853:
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar6 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0x20);
  if ((int)uVar5 < 0) goto LAB_001025fc;
  uVar7 = (ulong)uVar5;
  if (hVar3 == (hb_bit_set_t)0x0) {
LAB_0010266b:
    uVar6 = uVar7;
    if (uVar5 < uVar4) {
      do {
        uVar8 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
        uVar6 = (ulong)uVar8;
      } while (uVar8 < uVar4);
      goto LAB_00102680;
    }
LAB_001026b4:
    uVar8 = *(uint *)(this + 0x24);
  }
  else {
LAB_001026f6:
    uVar8 = *(uint *)(this + 0x24);
    uVar4 = (uint)uVar6;
    if (uVar4 <= uVar8) {
      uVar6 = (ulong)uVar8;
    }
    uVar9 = (uint)uVar6;
    if (uVar5 < uVar9) {
LAB_00102680:
      if (0x38e38e3 < (uint)uVar6) goto LAB_001025f7;
      pvVar2 = *(void **)(this + 0x28);
LAB_00102691:
      uVar8 = (uint)uVar6;
      pvVar2 = realloc(pvVar2,uVar6 * 0x48);
      if (pvVar2 == (void *)0x0) {
        uVar5 = *(uint *)(this + 0x20);
        if (uVar5 < uVar8) goto LAB_001025f7;
      }
      else {
LAB_001026ad:
        *(void **)(this + 0x28) = pvVar2;
        *(uint *)(this + 0x20) = uVar8;
      }
      goto LAB_001026b4;
    }
    if (uVar9 < uVar5 >> 2) {
      if (0x38e38e3 < uVar9) goto LAB_001025f7;
      pvVar2 = *(void **)(this + 0x28);
      if (uVar9 != 0) goto LAB_00102691;
      free(pvVar2);
      uVar8 = 0;
      pvVar2 = (void *)0x0;
      goto LAB_001026ad;
    }
  }
  if ((uVar8 < uVar4) && (param_2)) {
    uVar5 = (uVar4 - uVar8) * 0x48;
    if (uVar5 != 0) {
      memset((void *)(*(long *)(this + 0x28) + (ulong)uVar8 * 0x48),0,(ulong)uVar5);
    }
  }
  *(uint *)(this + 0x24) = uVar4;
LAB_001025fc:
  *this = (hb_bit_set_t)0x0;
  return (hb_bit_set_t)0x0;
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
        __hb_CrapPool = CONCAT44(_DAT_0010a044,__hb_NullPool);
        puVar9 = &_hb_CrapPool;
      }
      puVar7 = __s + *(uint *)(puVar9 + 4);
      if (*(uint *)(param_1 + 4) <= *(uint *)(puVar9 + 4)) {
        puVar7 = (uint *)&_hb_CrapPool;
        __hb_CrapPool = CONCAT44(_DAT_0010a04c,__hb_NullPool);
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
LAB_001029b7:
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
LAB_001029fc:
          if ((uint)uVar8 < *(uint *)(this + 0x14)) {
            puVar9 = (undefined *)(*(long *)(this + 0x18) + uVar8 * 8);
          }
          else {
            __hb_CrapPool = CONCAT44(_DAT_0010a044,__hb_NullPool);
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
            goto LAB_001029b7;
          }
          goto LAB_001029fc;
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
        goto LAB_00102cac;
      }
LAB_00102b25:
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
          if (piVar1 + (ulong)uVar5 * 2 == piVar3) goto LAB_00102b7a;
        }
        piVar3 = piVar3 + 2;
      } while (piVar1 + (ulong)uVar5 * 2 != piVar3);
LAB_00102b7a:
      compact(this,(hb_vector_t *)local_48,uVar6);
      resize(this,uVar6,true,false);
      if (iVar8 != 0) {
LAB_00102ba3:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          free(local_40);
          return;
        }
        goto LAB_00102cac;
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
          if (uVar5 != 0) goto LAB_00102b25;
          compact(this,(hb_vector_t *)local_48,0);
          resize(this,0,true,false);
          goto LAB_00102ba3;
        }
      }
      *this = (hb_bit_set_t)0x0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102cac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (iVar10 < (int)uVar8) goto LAB_00102d3c;
      }
      if (uVar9 == uVar3) goto LAB_00102dd5;
      uVar8 = uVar7 + 1;
    } while ((int)uVar8 <= iVar10);
  }
LAB_00102d3c:
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
LAB_00102dd5:
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
    goto LAB_00102f4d;
LAB_00102fb7:
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
      goto LAB_00102f4d;
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
    goto LAB_00102fb7;
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
LAB_00102f4d:
  del_pages(this,iVar11,uVar8);
  return;
}



/* OT::ResourceMap::sanitize(hb_sanitize_context_t*, void const*) const */

undefined8 __thiscall
OT::ResourceMap::sanitize(ResourceMap *this,hb_sanitize_context_t *param_1,void *param_2)

{
  long lVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ResourceMap *pRVar7;
  ResourceMap *pRVar8;
  ResourceMap *pRVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  ResourceMap *pRVar13;
  uint uVar14;
  ResourceMap *pRVar15;
  
  if ((this + (0x1c - *(long *)(param_1 + 8)) <= (ResourceMap *)(ulong)*(uint *)(param_1 + 0x18)) &&
     (uVar3 = *(ushort *)(this + 0x18),
     this + (0x1a - *(long *)(param_1 + 8)) <= (ResourceMap *)(ulong)*(uint *)(param_1 + 0x18))) {
    pRVar8 = this + (ushort)(*(ushort *)(this + 0x18) << 8 | *(ushort *)(this + 0x18) >> 8);
    pRVar7 = pRVar8 + 2;
    if (((ulong)((long)pRVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
       ((((ulong)((long)pRVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18) &&
         (uVar14 = (uint)(ushort)(*(ushort *)pRVar8 << 8 | *(ushort *)pRVar8 >> 8) * 8 + 8,
         uVar14 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pRVar7))) &&
        (iVar6 = *(int *)(param_1 + 0x1c) - uVar14, *(int *)(param_1 + 0x1c) = iVar6, 0 < iVar6))))
    {
      uVar4 = *(ushort *)pRVar8;
      pRVar7 = pRVar8 + 10;
      if ((ulong)((long)pRVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
        do {
          iVar6 = 0;
          if (*(int *)(pRVar7 + -8) == 0x746e6673) {
            iVar6 = (ushort)(*(ushort *)(pRVar7 + -4) << 8 | *(ushort *)(pRVar7 + -4) >> 8) + 1;
          }
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pRVar7 - *(long *)(param_1 + 8))) {
            return 0;
          }
          pRVar9 = this + (ulong)(ushort)(*(ushort *)(pRVar7 + -2) << 8 |
                                         *(ushort *)(pRVar7 + -2) >> 8) +
                          (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8);
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pRVar9 - *(long *)(param_1 + 8))) {
            return 0;
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pRVar9) < (uint)(iVar6 * 0xc)) {
            return 0;
          }
          iVar11 = *(int *)(param_1 + 0x1c) + iVar6 * -0xc;
          *(int *)(param_1 + 0x1c) = iVar11;
          if (iVar11 < 1) {
            return 0;
          }
          if (iVar6 != 0) {
            lVar12 = *(long *)(param_1 + 8);
            pRVar13 = (ResourceMap *)(ulong)*(uint *)(param_1 + 0x18);
            pRVar15 = pRVar9 + 0xc;
            do {
              if (pRVar13 < pRVar15 + -lVar12) {
                return 0;
              }
              if (pRVar13 < pRVar15 + (-4 - lVar12)) {
                return 0;
              }
              puVar10 = (uint *)((long)(int)((uint)(byte)pRVar15[-7] * 0x10000 +
                                             (uint)(byte)pRVar15[-6] * 0x100 +
                                            (uint)(byte)pRVar15[-5]) + (long)param_2);
              puVar2 = puVar10 + 1;
              if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_1 + 8)))
              {
                return 0;
              }
              uVar14 = *puVar10;
              if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_1 + 8)))
              {
                return 0;
              }
              uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                       uVar14 << 0x18;
              if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar2) < uVar14) {
                return 0;
              }
              iVar11 = *(int *)(param_1 + 0x1c) - uVar14;
              *(int *)(param_1 + 0x1c) = iVar11;
              if (iVar11 < 1) {
                return 0;
              }
              iVar11 = (uint)(byte)pRVar15[-7] * 0x10000 + (uint)(byte)pRVar15[-6] * 0x100 +
                       (uint)(byte)pRVar15[-5];
              lVar1 = (long)param_2 + (long)iVar11 + 0x10;
              if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)(lVar1 - *(long *)(param_1 + 8))) {
                return 0;
              }
              lVar12 = *(long *)(param_1 + 8);
              pRVar13 = (ResourceMap *)(ulong)*(uint *)(param_1 + 0x18);
              uVar5 = *(ushort *)((long)param_2 + (long)iVar11 + 8);
              if (pRVar13 < (ResourceMap *)(lVar1 - lVar12)) {
                return 0;
              }
              uVar14 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
              if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)lVar1) < uVar14 * 0x10) {
                return 0;
              }
              iVar11 = *(int *)(param_1 + 0x1c) + uVar14 * -0x10;
              *(int *)(param_1 + 0x1c) = iVar11;
              if (iVar11 < 1) {
                return 0;
              }
              pRVar15 = pRVar15 + 0xc;
            } while (pRVar9 + (ulong)(iVar6 + 1) * 0xc != pRVar15);
          }
          pRVar7 = pRVar7 + 8;
          if (pRVar7 == pRVar8 + (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) * 8 + 0x12) {
            return 1;
          }
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pRVar7 - *(long *)(param_1 + 8))) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}



/* OT::OpenTypeFontFile::get_face(unsigned int, unsigned int*) const */

OpenTypeFontFile * __thiscall
OT::OpenTypeFontFile::get_face(OpenTypeFontFile *this,uint param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  OpenTypeFontFile *pOVar5;
  uint uVar6;
  long lVar7;
  
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  uVar2 = *(uint *)this;
  uVar4 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (uVar2 == 0x65757274) {
    return this;
  }
  if (uVar4 < 0x74727566) {
    if (uVar2 == 0x10000) {
      uVar2 = *(uint *)(this + 4);
      lVar7 = 2;
      uVar6 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar1 = (ulong)(ushort)(*(ushort *)(this + (ulong)uVar6 + 0x18) << 8 |
                             *(ushort *)(this + (ulong)uVar6 + 0x18) >> 8);
      uVar3 = *(ushort *)(this + uVar1 + uVar6) << 8 | *(ushort *)(this + uVar1 + uVar6) >> 8;
      uVar4 = (uint)uVar3;
      uVar2 = 0;
      while( true ) {
        pOVar5 = (OpenTypeFontFile *)&_hb_NullPool;
        if (uVar2 <= uVar3) {
          pOVar5 = this + uVar1 + lVar7 + (ulong)uVar6;
        }
        if ((*(int *)pOVar5 == 0x746e6673) &&
           (param_1 < (ushort)(*(ushort *)(pOVar5 + 4) << 8 | *(ushort *)(pOVar5 + 4) >> 8) + 1))
        break;
        lVar7 = lVar7 + 8;
        if (uVar2 == uVar4) {
          pOVar5 = (OpenTypeFontFile *)&_hb_NullPool;
LAB_0010359f:
          if (param_2 != (uint *)0x0) {
            *param_2 = (int)pOVar5 - (int)this;
          }
          return pOVar5;
        }
        uVar1 = (ulong)(ushort)(*(ushort *)(this + (ulong)uVar6 + 0x18) << 8 |
                               *(ushort *)(this + (ulong)uVar6 + 0x18) >> 8);
        uVar3 = *(ushort *)(this + uVar1 + uVar6) << 8 | *(ushort *)(this + uVar1 + uVar6) >> 8;
        uVar2 = uVar2 + 1;
      }
      lVar7 = (ulong)param_1 * 0xc +
              (ulong)(ushort)(*(ushort *)(this + (ulong)uVar6 + 0x18) << 8 |
                             *(ushort *)(this + (ulong)uVar6 + 0x18) >> 8) +
              (ulong)(ushort)(*(ushort *)(pOVar5 + 6) << 8 | *(ushort *)(pOVar5 + 6) >> 8) +
              (ulong)uVar6;
      pOVar5 = this + (long)(int)((uint)(byte)this[lVar7 + 5] * 0x10000 +
                                  (uint)(byte)this[lVar7 + 6] * 0x100 + 0x100 +
                                 (uint)(byte)this[lVar7 + 7]) + 4;
      goto LAB_0010359f;
    }
    if (0xff < uVar4) {
      if (uVar2 == 0x100) {
        return this;
      }
      if (uVar2 == 0x4f54544f) {
        return this;
      }
    }
  }
  else if (uVar2 == 0x66637474) {
    if ((ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) - 1 < 2) {
      uVar2 = *(uint *)(this + 8);
      pOVar5 = (OpenTypeFontFile *)&_hb_NullPool;
      if (param_1 < (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                    )) {
        pOVar5 = this + (ulong)param_1 * 4 + 0xc;
      }
      uVar2 = *(uint *)pOVar5;
      if (uVar2 != 0) {
        return this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18);
      }
    }
  }
  else if (uVar2 == 0x31707974) {
    return this;
  }
  return (OpenTypeFontFile *)&_hb_NullPool;
}



/* OT::OpenTypeFontFile::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::OpenTypeFontFile::sanitize(OpenTypeFontFile *this,hb_sanitize_context_t *param_1)

{
  OpenTypeFontFile *pOVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  OpenTypeFontFile *pOVar8;
  uint uVar9;
  
  if ((OpenTypeFontFile *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar9 = *(uint *)this;
  uVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  if (uVar9 != 0x65757274) {
    if (uVar5 < 0x74727566) {
      if (uVar9 == 0x10000) {
        if ((OpenTypeFontFile *)(ulong)*(uint *)(param_1 + 0x18) <
            this + (0x10 - *(long *)(param_1 + 8))) {
          return 0;
        }
        if ((OpenTypeFontFile *)(ulong)*(uint *)(param_1 + 0x18) <
            this + (4 - *(long *)(param_1 + 8))) {
          return 0;
        }
        uVar9 = *(uint *)this;
        uVar5 = *(uint *)(this + 8);
        pOVar8 = this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                        uVar9 << 0x18);
        if ((OpenTypeFontFile *)(ulong)*(uint *)(param_1 + 0x18) < pOVar8 + -*(long *)(param_1 + 8))
        {
          return 0;
        }
        uVar9 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pOVar8) < uVar9) {
          return 0;
        }
        iVar7 = *(int *)(param_1 + 0x1c) - uVar9;
        *(int *)(param_1 + 0x1c) = iVar7;
        if (iVar7 < 1) {
          return 0;
        }
        if ((OpenTypeFontFile *)(ulong)*(uint *)(param_1 + 0x18) <
            this + (8 - *(long *)(param_1 + 8))) {
          return 0;
        }
        uVar9 = *(uint *)(this + 4);
        uVar3 = ResourceMap::sanitize
                          ((ResourceMap *)
                           (this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8
                                   | uVar9 << 0x18)),param_1,pOVar8);
        return uVar3;
      }
      if (uVar5 < 0x100) {
        return 1;
      }
      if ((uVar9 != 0x100) && (uVar9 != 0x4f54544f)) {
        return 1;
      }
    }
    else {
      if (uVar9 == 0x66637474) {
        if ((OpenTypeFontFile *)(ulong)*(uint *)(param_1 + 0x18) <
            this + (8 - *(long *)(param_1 + 8))) {
          return 0;
        }
        if (1 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) - 1) {
          return 1;
        }
        pOVar8 = this + 0xc;
        if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pOVar8 - *(long *)(param_1 + 8))) {
          return 0;
        }
        uVar9 = *(uint *)(this + 8);
        uVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        bVar2 = (uVar9 << 0x18) >> 0x1e != 0;
        uVar9 = (uint)bVar2;
        if (bVar2) {
          return 0;
        }
        if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pOVar8 - *(long *)(param_1 + 8))) {
          return 0;
        }
        if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pOVar8) < uVar5 * 4) {
          return 0;
        }
        iVar7 = *(int *)(param_1 + 0x1c) + uVar5 * -4;
        *(int *)(param_1 + 0x1c) = iVar7;
        if (iVar7 < 1) {
          return 0;
        }
        uVar5 = *(uint *)(this + 8);
        if (uVar5 == 0) {
          return 1;
        }
        pOVar8 = this + 0x10;
        do {
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pOVar8 - *(long *)(param_1 + 8))) {
            return 0;
          }
          uVar6 = *(uint *)(pOVar8 + -4);
          if (uVar6 != 0) {
            uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
            pOVar1 = this + (ulong)uVar6 + 0xc;
            if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pOVar1 - *(long *)(param_1 + 8))
                  ) || ((ulong)*(uint *)(param_1 + 0x18) <
                        (ulong)((long)pOVar1 - *(long *)(param_1 + 8)))) ||
                (uVar6 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar6 + 4) << 8 |
                                       *(ushort *)(this + (ulong)uVar6 + 4) >> 8),
                (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pOVar1) < uVar6 * 0x10)) ||
               (iVar7 = *(int *)(param_1 + 0x1c) + uVar6 * -0x10, *(int *)(param_1 + 0x1c) = iVar7,
               iVar7 < 1)) {
              if (0x1f < *(uint *)(param_1 + 0x2c)) {
                return 0;
              }
              *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
              if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
                return 0;
              }
              *(undefined4 *)(pOVar8 + -4) = 0;
            }
          }
          uVar9 = uVar9 + 1;
          pOVar8 = pOVar8 + 4;
          if ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) <=
              uVar9) {
            return 1;
          }
        } while( true );
      }
      if (uVar9 != 0x31707974) {
        return 1;
      }
    }
  }
  pOVar8 = this + 0xc;
  if (((ulong)((long)pOVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
     ((ulong)((long)pOVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    lVar4 = (ulong)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) << 4;
    uVar9 = (uint)lVar4;
    if (uVar9 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pOVar8)) {
      iVar7 = *(int *)(param_1 + 0x1c) - uVar9;
      *(int *)(param_1 + 0x1c) = iVar7;
      return CONCAT71((int7)((ulong)lVar4 >> 8),0 < iVar7);
    }
  }
  return 0;
}



/* OT::CmapSubtableFormat4::accelerator_t::get_glyph(unsigned int, unsigned int*) const */

undefined8 __thiscall
OT::CmapSubtableFormat4::accelerator_t::get_glyph(accelerator_t *this,uint param_1,uint *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  
  iVar3 = *(int *)(this + 0x28);
  iVar8 = iVar3 + -1;
  if (-1 < iVar8) {
    iVar4 = 0;
    do {
      uVar6 = (uint)(iVar4 + iVar8) >> 1;
      puVar1 = (ushort *)(*(long *)this + (ulong)(uVar6 * 2));
      uVar5 = *puVar1;
      if ((ushort)(uVar5 << 8 | uVar5 >> 8) < param_1) {
        iVar4 = uVar6 + 1;
      }
      else {
        uVar5 = puVar1[iVar3 + 1];
        if ((ushort)(uVar5 << 8 | uVar5 >> 8) <= param_1) {
          lVar7 = (long)(ulong)(uVar6 * 2) >> 1;
          uVar5 = *(ushort *)(*(long *)(this + 0x18) + lVar7 * 2);
          uVar5 = uVar5 << 8 | uVar5 >> 8;
          if (uVar5 == 0) {
            uVar5 = *(ushort *)(*(long *)(this + 0x10) + lVar7 * 2);
            uVar6 = (ushort)(uVar5 << 8 | uVar5 >> 8) + param_1;
          }
          else {
            uVar2 = *(ushort *)(*(long *)(this + 8) + lVar7 * 2);
            uVar6 = ((param_1 - iVar3) + (int)lVar7 + (uint)(uVar5 >> 1)) -
                    (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
            if (*(uint *)(this + 0x2c) <= uVar6) {
              return 0;
            }
            uVar5 = *(ushort *)(*(long *)(this + 0x20) + (ulong)uVar6 * 2);
            uVar5 = uVar5 << 8 | uVar5 >> 8;
            if (uVar5 == 0) {
              return 0;
            }
            uVar2 = *(ushort *)(*(long *)(this + 0x10) + lVar7 * 2);
            uVar6 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8) + (uint)uVar5;
          }
          if ((uVar6 & 0xffff) == 0) {
            return 0;
          }
          *param_2 = uVar6 & 0xffff;
          return 1;
        }
        iVar8 = uVar6 - 1;
      }
    } while (iVar4 <= iVar8);
  }
  return 0;
}



/* OT::CmapSubtableFormat4::accelerator_t::get_glyph_func(void const*, unsigned int, unsigned int*)
    */

void OT::CmapSubtableFormat4::accelerator_t::get_glyph_func
               (void *param_1,uint param_2,uint *param_3)

{
  get_glyph((accelerator_t *)param_1,param_2,param_3);
  return;
}



/* OT::CmapSubtableFormat4::accelerator_t::collect_unicodes(hb_set_t*) const */

void __thiscall
OT::CmapSubtableFormat4::accelerator_t::collect_unicodes(accelerator_t *this,hb_set_t *param_1)

{
  hb_bit_set_t *phVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  undefined4 *puVar19;
  long lVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  byte local_70;
  uint local_4c;
  
  local_4c = *(uint *)(this + 0x28);
  if (local_4c != 0) {
    lVar26 = *(long *)(this + 8);
    uVar18 = local_4c - 1;
    if ((*(short *)(lVar26 + (ulong)uVar18 * 2) != -1) || (local_4c = uVar18, uVar18 != 0)) {
      lVar20 = 0;
      do {
        uVar3 = *(ushort *)(lVar26 + lVar20 * 2);
        uVar17 = uVar3 << 8 | uVar3 >> 8;
        uVar4 = *(ushort *)(*(long *)this + lVar20 * 2);
        uVar7 = uVar4 << 8 | uVar4 >> 8;
        uVar8 = *(ushort *)(*(long *)(this + 0x18) + lVar20 * 2);
        uVar8 = uVar8 << 8 | uVar8 >> 8;
        uVar18 = (uint)uVar7;
        local_70 = (byte)uVar4;
        bVar14 = (byte)(uVar4 >> 8);
        if (param_1[0x40] == (hb_set_t)0x0) {
          if ((param_1[0x10] != (hb_set_t)0x1) || (uVar18 < uVar17)) goto LAB_00103b96;
          phVar1 = (hb_bit_set_t *)(param_1 + 0x10);
          bVar21 = local_70 >> 1;
          *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
          uVar23 = (uint)(byte)((byte)uVar3 >> 1);
          bVar15 = (byte)(uVar3 >> 8);
          if (uVar23 == bVar21) {
            puVar11 = (undefined4 *)hb_bit_set_t::page_for(phVar1,(uint)uVar17,true);
            if (puVar11 == (undefined4 *)0x0) goto LAB_00103b96;
            uVar24 = (ulong)(uVar17 >> 6 & 7);
            uVar13 = (ulong)(uVar7 >> 6 & 7);
            puVar19 = puVar11 + uVar13 * 2 + 2;
            lVar26 = (1L << (bVar14 & 0x3f)) * 2;
            lVar12 = 1L << (bVar15 & 0x3f);
            if (puVar11 + uVar24 * 2 + 2 == puVar19) {
              *(ulong *)(puVar11 + uVar24 * 2 + 2) =
                   lVar26 - lVar12 | *(ulong *)(puVar11 + uVar24 * 2 + 2);
            }
            else {
              *(ulong *)(puVar11 + uVar24 * 2 + 2) = -lVar12 | *(ulong *)(puVar11 + uVar24 * 2 + 2);
              puVar2 = puVar11 + uVar24 * 2 + 2 + 2;
              if ((int)puVar19 != (int)puVar2) {
                memset(puVar2,0xff,(long)puVar19 - (long)puVar2 & 0xffffffff);
              }
              *(ulong *)(puVar11 + uVar13 * 2 + 2) =
                   *(ulong *)(puVar11 + uVar13 * 2 + 2) | lVar26 - 1U;
            }
            *puVar11 = 0xffffffff;
            if (uVar8 != 0) goto LAB_00103baa;
            goto LAB_00103e3f;
          }
          puVar11 = (undefined4 *)hb_bit_set_t::page_for(phVar1,(uint)uVar17,true);
          if (puVar11 == (undefined4 *)0x0) goto LAB_00103b96;
          uVar23 = uVar23 + 1;
          uVar9 = uVar17 >> 6 & 7;
          puVar19 = puVar11 + (ulong)(uVar9 + 1) * 2;
          *(ulong *)(puVar11 + (ulong)uVar9 * 2 + 2) =
               -(1L << (bVar15 & 0x3f)) | *(ulong *)(puVar11 + (ulong)uVar9 * 2 + 2);
          if (puVar19 != puVar11 + 0x10) {
            iVar5 = (int)(puVar19 + 2);
            iVar22 = (int)(puVar11 + 0x10);
            if (iVar22 != iVar5) {
              memset(puVar19 + 2,0xff,(ulong)(uint)(iVar22 - iVar5));
            }
            *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
          }
          *puVar11 = 0xffffffff;
          if (uVar23 < bVar21) {
            do {
              puVar11 = (undefined4 *)hb_bit_set_t::page_for(phVar1,uVar23 << 9,true);
              if (puVar11 == (undefined4 *)0x0) goto LAB_00103b96;
              uVar23 = uVar23 + 1;
              *puVar11 = 0x200;
              puVar11[2] = 0xffffffff;
              puVar11[3] = 0xffffffff;
              puVar11[4] = 0xffffffff;
              puVar11[5] = 0xffffffff;
              puVar11[6] = 0xffffffff;
              puVar11[7] = 0xffffffff;
              puVar11[8] = 0xffffffff;
              puVar11[9] = 0xffffffff;
              puVar11[10] = 0xffffffff;
              puVar11[0xb] = 0xffffffff;
              puVar11[0xc] = 0xffffffff;
              puVar11[0xd] = 0xffffffff;
              puVar11[0xe] = 0xffffffff;
              puVar11[0xf] = 0xffffffff;
              puVar11[0x10] = 0xffffffff;
              puVar11[0x11] = 0xffffffff;
            } while (uVar23 < bVar21);
          }
          puVar11 = (undefined4 *)hb_bit_set_t::page_for(phVar1,(uint)uVar7,true);
          if (puVar11 == (undefined4 *)0x0) goto LAB_00103b96;
          uVar13 = (ulong)(uVar7 >> 6 & 7);
          uVar24 = (1L << (bVar14 & 0x3f)) * 2 - 1;
          if (uVar13 == 0) {
            *(ulong *)(puVar11 + 2) = *(ulong *)(puVar11 + 2) | uVar24;
          }
          else {
            *(undefined8 *)(puVar11 + 2) = 0xffffffffffffffff;
            if (uVar13 != 1) {
              memset(puVar11 + 4,0xff,uVar13 * 8 - 8 & 0xffffffff);
            }
            *(ulong *)(puVar11 + uVar13 * 2 + 2) = *(ulong *)(puVar11 + uVar13 * 2 + 2) | uVar24;
          }
          *puVar11 = 0xffffffff;
          if (uVar8 != 0) goto LAB_00103ba1;
LAB_00103e48:
          uVar23 = (uint)uVar17;
          do {
            uVar3 = *(ushort *)(*(long *)(this + 0x10) + lVar20 * 2);
            if ((ushort)((uVar3 << 8 | uVar3 >> 8) + (short)uVar23) == 0) {
              if (param_1[0x40] == (hb_set_t)0x0) {
                if ((param_1[0x10] != (hb_set_t)0x0) &&
                   (puVar11 = (undefined4 *)
                              hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar23,false),
                   puVar11 != (undefined4 *)0x0)) {
                  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                  bVar14 = (byte)uVar23 & 0x3f;
                  *(ulong *)(puVar11 + (ulong)(uVar23 >> 6 & 7) * 2 + 2) =
                       *(ulong *)(puVar11 + (ulong)(uVar23 >> 6 & 7) * 2 + 2) &
                       (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
                  *puVar11 = 0xffffffff;
                }
              }
              else if (param_1[0x10] != (hb_set_t)0x0) {
                *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                puVar11 = (undefined4 *)
                          hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar23,true);
                if (puVar11 != (undefined4 *)0x0) {
                  *(ulong *)(puVar11 + (ulong)(uVar23 >> 6 & 7) * 2 + 2) =
                       *(ulong *)(puVar11 + (ulong)(uVar23 >> 6 & 7) * 2 + 2) |
                       1L << ((byte)uVar23 & 0x3f);
                  *puVar11 = 0xffffffff;
                }
              }
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 <= uVar18);
        }
        else {
          hb_bit_set_t::del_range((hb_bit_set_t *)(param_1 + 0x10),(uint)uVar17,(uint)uVar7);
LAB_00103b96:
          if (uVar8 == 0) {
LAB_00103e3f:
            if (uVar17 <= uVar18) goto LAB_00103e48;
          }
          else {
LAB_00103ba1:
            if (uVar17 <= uVar18) {
LAB_00103baa:
              uVar18 = (uint)uVar17;
LAB_00103bdb:
              do {
                uVar3 = *(ushort *)(*(long *)(this + 8) + lVar20 * 2);
                uVar23 = ((((uint)(uVar8 >> 1) + (int)lVar20) - *(int *)(this + 0x28)) + uVar18) -
                         (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
                uVar9 = (uint)uVar7;
                bVar15 = (byte)uVar18;
                if (*(uint *)(this + 0x2c) <= uVar23) {
                  if (param_1[0x40] == (hb_set_t)0x0) {
                    phVar1 = (hb_bit_set_t *)(param_1 + 0x10);
                    if (param_1[0x10] != (hb_set_t)0x0) {
                      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                      uVar9 = uVar18 >> 9;
                      local_70 = local_70 >> 1;
                      iVar22 = (uVar9 + 1) - (uint)((uVar18 & 0x1ff) == 0);
                      uVar23 = (uint)local_70;
                      if (uVar7 + 1 == (local_70 + 1) * 0x200) {
                        uVar10 = uVar9;
                        if (local_70 <= uVar9) {
                          uVar10 = uVar23;
                        }
                        uVar27 = uVar23;
                        uVar16 = (uint)local_70;
                        if ((int)uVar10 < iVar22) goto LAB_00104082;
                      }
                      else {
                        uVar27 = local_70 - 1;
                        uVar10 = uVar9;
                        if ((int)uVar27 <= (int)uVar9) {
                          uVar10 = uVar27;
                        }
                        if ((int)uVar10 < iVar22) {
LAB_00104082:
                          puVar11 = (undefined4 *)hb_bit_set_t::page_for(phVar1,uVar18,false);
                          if (puVar11 != (undefined4 *)0x0) {
                            bVar15 = bVar15 & 0x3f;
                            uVar13 = (ulong)(uVar18 >> 6 & 7);
                            uVar24 = *(ulong *)(puVar11 + uVar13 * 2 + 2);
                            puVar19 = puVar11 + uVar13 * 2 + 2;
                            if (uVar9 == local_70) {
                              uVar25 = (ulong)(uVar7 >> 6 & 7);
                              lVar26 = 1L << (bVar14 & 0x3f);
                              if (puVar11 + uVar25 * 2 + 2 == puVar19) {
                                *(ulong *)(puVar11 + uVar13 * 2 + 2) =
                                     ((1L << bVar15) + lVar26 * -2) - 1U & uVar24;
                              }
                              else {
                                *(ulong *)(puVar11 + uVar13 * 2 + 2) = ~(-1L << bVar15) & uVar24;
                                iVar6 = (int)(puVar19 + 2);
                                iVar5 = (int)(puVar11 + uVar25 * 2 + 2);
                                if (iVar5 != iVar6) {
                                  memset(puVar19 + 2,0,(ulong)(uint)(iVar5 - iVar6));
                                }
                                *(ulong *)(puVar11 + uVar25 * 2 + 2) =
                                     *(ulong *)(puVar11 + uVar25 * 2 + 2) & lVar26 * -2;
                              }
                              *puVar11 = 0xffffffff;
                              uVar16 = uVar27;
                              goto LAB_00103d33;
                            }
                            puVar2 = puVar11 + 0x10;
                            *(ulong *)(puVar11 + uVar13 * 2 + 2) = ~(-1L << bVar15) & uVar24;
                            if (puVar2 != puVar19) {
                              puVar19 = puVar19 + 2;
                              if ((int)puVar2 != (int)puVar19) {
                                memset(puVar19,0,(long)puVar2 - (long)puVar19 & 0xffffffff);
                              }
                              *(undefined8 *)(puVar11 + 0x10) = 0;
                            }
                            *puVar11 = 0xffffffff;
                          }
                        }
                        uVar16 = uVar27;
                        if ((((int)uVar27 < (int)uVar23) && (uVar9 != uVar23)) &&
                           (puVar11 = (undefined4 *)hb_bit_set_t::page_for(phVar1,(uint)uVar7,false)
                           , puVar11 != (undefined4 *)0x0)) {
                          uVar13 = (ulong)(uVar7 >> 6 & 7);
                          uVar24 = (1L << (bVar14 & 0x3f)) * -2;
                          if (uVar13 == 0) {
                            *(ulong *)(puVar11 + 2) = *(ulong *)(puVar11 + 2) & uVar24;
                          }
                          else {
                            *(undefined8 *)(puVar11 + 2) = 0;
                            if (uVar13 != 1) {
                              memset(puVar11 + 4,0,uVar13 * 8 - 8 & 0xffffffff);
                            }
                            *(ulong *)(puVar11 + uVar13 * 2 + 2) =
                                 *(ulong *)(puVar11 + uVar13 * 2 + 2) & uVar24;
                          }
                          *puVar11 = 0xffffffff;
                        }
                      }
LAB_00103d33:
                      hb_bit_set_t::del_pages(phVar1,iVar22,uVar16);
                    }
                  }
                  else {
                    hb_bit_set_t::add_range((hb_bit_set_t *)(param_1 + 0x10),uVar18,uVar9);
                  }
                  break;
                }
                if (*(short *)(*(long *)(this + 0x20) + (ulong)uVar23 * 2) == 0) {
                  if (param_1[0x40] == (hb_set_t)0x0) {
                    if ((param_1[0x10] != (hb_set_t)0x0) &&
                       (puVar11 = (undefined4 *)
                                  hb_bit_set_t::page_for
                                            ((hb_bit_set_t *)(param_1 + 0x10),uVar18,false),
                       puVar11 != (undefined4 *)0x0)) {
                      uVar23 = uVar18 + 1;
                      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                      *(ulong *)(puVar11 + (ulong)(uVar18 >> 6 & 7) * 2 + 2) =
                           *(ulong *)(puVar11 + (ulong)(uVar18 >> 6 & 7) * 2 + 2) &
                           (-2L << (bVar15 & 0x3f) | 0xfffffffffffffffeU >> 0x40 - (bVar15 & 0x3f));
                      *puVar11 = 0xffffffff;
                      uVar18 = uVar23;
                      if (uVar9 < uVar23) break;
                      goto LAB_00103bdb;
                    }
                  }
                  else if (param_1[0x10] != (hb_set_t)0x0) {
                    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                    puVar11 = (undefined4 *)
                              hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar18,true);
                    if (puVar11 != (undefined4 *)0x0) {
                      *(ulong *)(puVar11 + (ulong)(uVar18 >> 6 & 7) * 2 + 2) =
                           *(ulong *)(puVar11 + (ulong)(uVar18 >> 6 & 7) * 2 + 2) |
                           1L << (bVar15 & 0x3f);
                      *puVar11 = 0xffffffff;
                    }
                  }
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 <= uVar9);
            }
          }
        }
        if (local_4c <= (int)lVar20 + 1U) {
          return;
        }
        lVar20 = lVar20 + 1;
        lVar26 = *(long *)(this + 8);
      } while( true );
    }
  }
  return;
}



/* OT::VariationSelectorRecord::sanitize(hb_sanitize_context_t*, void const*) const */

undefined8 __thiscall
OT::VariationSelectorRecord::sanitize
          (VariationSelectorRecord *this,hb_sanitize_context_t *param_1,void *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  VariationSelectorRecord *pVVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  
  if ((VariationSelectorRecord *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (0xb - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((VariationSelectorRecord *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar3 = *(uint *)(this + 3);
  if (uVar3 == 0) {
    lVar7 = *(long *)(param_1 + 8);
    pVVar4 = (VariationSelectorRecord *)(ulong)*(uint *)(param_1 + 0x18);
  }
  else {
    puVar5 = (uint *)((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                             uVar3 << 0x18) + (long)param_2);
    puVar1 = puVar5 + 1;
    if ((ulong)((long)puVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar3 = *puVar5;
      uVar2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if ((uVar3 << 0x18) >> 0x1e == 0) {
        lVar7 = *(long *)(param_1 + 8);
        pVVar4 = (VariationSelectorRecord *)(ulong)*(uint *)(param_1 + 0x18);
        if ((((VariationSelectorRecord *)((long)puVar1 - lVar7) <= pVVar4) &&
            (uVar2 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar1))) &&
           (iVar6 = *(int *)(param_1 + 0x1c) + uVar2 * -4, *(int *)(param_1 + 0x1c) = iVar6,
           0 < iVar6)) goto LAB_00104332;
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 3) = 0;
    lVar7 = *(long *)(param_1 + 8);
    pVVar4 = (VariationSelectorRecord *)(ulong)*(uint *)(param_1 + 0x18);
  }
LAB_00104332:
  if (pVVar4 < this + (0xb - lVar7)) {
    return 0;
  }
  uVar3 = *(uint *)(this + 7);
  if (uVar3 != 0) {
    puVar5 = (uint *)((long)param_2 +
                     (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18));
    puVar1 = puVar5 + 1;
    if ((ulong)((long)puVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar3 = *puVar5;
      lVar7 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                     uVar3 << 0x18) * 5;
      uVar3 = (uint)lVar7;
      if ((((int)((ulong)lVar7 >> 0x20) == 0) &&
          ((ulong)((long)puVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
         ((uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar1) &&
          (iVar6 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar6, 0 < iVar6))))
      {
        return 1;
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 7) = 0;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::CmapSubtable::get_glyph(unsigned int, unsigned int*) const */

undefined8 __thiscall OT::CmapSubtable::get_glyph(CmapSubtable *this,uint param_1,uint *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  CmapSubtable *pCVar8;
  int iVar9;
  long in_FS_OFFSET;
  CmapSubtable *local_48;
  CmapSubtable *local_40;
  CmapSubtable *local_38;
  CmapSubtable *local_30;
  CmapSubtable *local_28;
  uint local_20;
  uint local_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    if ((0xff < param_1) ||
       (uVar4 = (uint)(byte)this[(ulong)param_1 + 6], this[(ulong)param_1 + 6] == (CmapSubtable)0x0)
       ) break;
    goto LAB_00104528;
  case 4:
    local_48 = this + 0xe;
    local_20 = (uint)((ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) >> 1);
    lVar7 = (ulong)(local_20 + 1) * 2;
    local_40 = local_48 + lVar7;
    lVar7 = lVar7 + -2;
    local_1c = ((ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) - 0x10) +
               local_20 * -8 >> 1;
    local_38 = local_40 + lVar7;
    local_30 = local_38 + lVar7;
    local_28 = local_30 + lVar7;
    uVar2 = CmapSubtableFormat4::accelerator_t::get_glyph
                      ((accelerator_t *)&local_48,param_1,param_2);
    goto LAB_001044f2;
  case 6:
    pCVar8 = (CmapSubtable *)&_hb_NullPool;
    uVar5 = param_1 - (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
    if (uVar5 < (ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8)) {
      pCVar8 = this + (ulong)uVar5 * 2 + 10;
    }
    goto LAB_001044d8;
  case 10:
    uVar5 = *(uint *)(this + 0xc);
    pCVar8 = (CmapSubtable *)&_hb_NullPool;
    uVar4 = param_1 - (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18);
    uVar5 = *(uint *)(this + 0x10);
    if (uVar4 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)) {
      pCVar8 = this + (ulong)uVar4 * 2 + 0x14;
    }
LAB_001044d8:
    uVar1 = *(ushort *)pCVar8 << 8 | *(ushort *)pCVar8 >> 8;
    uVar4 = (uint)uVar1;
    if (uVar1 != 0) {
LAB_00104528:
      *param_2 = uVar4;
      uVar2 = 1;
      goto LAB_001044f2;
    }
    break;
  case 0xc:
    uVar5 = *(uint *)(this + 0xc);
    iVar6 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) - 1;
    if (-1 < iVar6) {
      iVar9 = 0;
      do {
        uVar3 = (uint)(iVar9 + iVar6) >> 1;
        pCVar8 = this + (ulong)uVar3 * 0xc + 0x10;
        uVar5 = *(uint *)pCVar8;
        uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if (param_1 < uVar4) {
          iVar6 = uVar3 - 1;
        }
        else {
          uVar5 = *(uint *)(pCVar8 + 4);
          if (param_1 <=
              (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18))
          goto LAB_00104619;
          iVar9 = uVar3 + 1;
        }
      } while (iVar9 <= iVar6);
    }
    uVar4 = __hb_Null_OT_CmapSubtableLongGroup >> 0x18 |
            (__hb_Null_OT_CmapSubtableLongGroup & 0xff0000) >> 8 |
            (__hb_Null_OT_CmapSubtableLongGroup & 0xff00) << 8 |
            __hb_Null_OT_CmapSubtableLongGroup << 0x18;
    if (uVar4 <= (_DAT_0010a02c >> 0x18 | (_DAT_0010a02c & 0xff0000) >> 8 |
                  (_DAT_0010a02c & 0xff00) << 8 | _DAT_0010a02c << 0x18)) {
      pCVar8 = (CmapSubtable *)&_hb_Null_OT_CmapSubtableLongGroup;
LAB_00104619:
      uVar5 = *(uint *)(pCVar8 + 8);
      uVar4 = ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
              param_1) - uVar4;
      uVar5 = uVar4;
      goto joined_r0x00104681;
    }
    break;
  case 0xd:
    uVar5 = *(uint *)(this + 0xc);
    pCVar8 = (CmapSubtable *)&_hb_Null_OT_CmapSubtableLongGroup;
    iVar6 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) - 1;
    if (-1 < iVar6) {
      iVar9 = 0;
      do {
        uVar4 = (uint)(iVar9 + iVar6) >> 1;
        pCVar8 = this + (ulong)uVar4 * 0xc + 0x10;
        uVar5 = *(uint *)pCVar8;
        if (param_1 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18)) {
          iVar6 = uVar4 - 1;
        }
        else {
          uVar5 = *(uint *)(pCVar8 + 4);
          if (param_1 <=
              (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18))
          goto LAB_00104677;
          iVar9 = uVar4 + 1;
        }
      } while (iVar9 <= iVar6);
      pCVar8 = (CmapSubtable *)&_hb_Null_OT_CmapSubtableLongGroup;
    }
LAB_00104677:
    uVar5 = *(uint *)(pCVar8 + 8);
    uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
joined_r0x00104681:
    if (uVar5 != 0) goto LAB_00104528;
  }
  uVar2 = 0;
LAB_001044f2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool OT::cmap::accelerator_t::get_glyph_from_ascii<OT::CmapSubtable>(void const*, unsigned int,
   unsigned int*) */

bool OT::cmap::accelerator_t::get_glyph_from_ascii<OT::CmapSubtable>
               (void *param_1,uint param_2,uint *param_3)

{
  undefined1 uVar1;
  
  if (0x7f < param_2) {
    return false;
  }
  uVar1 = CmapSubtable::get_glyph((CmapSubtable *)param_1,param_2,param_3);
  return (bool)uVar1;
}



/* bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtable>(void const*, unsigned int,
   unsigned int*) */

bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtable>
               (void *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable *)param_1,param_2,param_3);
  return bVar1;
}



/* bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,
   &(_hb_arabic_pua_trad_map(unsigned int))>(void const*, unsigned int, unsigned int*) */

bool OT::cmap::accelerator_t::
     get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_trad_map(unsigned_int))>
               (void *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable *)param_1,param_2,param_3);
  if (((bVar1 == false) && (param_2 < 0xfefd)) &&
     (uVar2 = ((int)(uint)(byte)_hb_arabic_u8[(ulong)(param_2 >> 0xb) + 0x88] >>
               ((byte)(param_2 >> 8) & 4) & 0xfU) << 4 | param_2 >> 6 & 0xf,
     *(ushort *)
      (_hb_arabic_u16 +
      (ulong)((param_2 & 3) + 0x140 +
             (uint)(byte)_hb_arabic_u8
                         [(((int)(uint)(byte)_hb_arabic_u8[(ulong)(uVar2 >> 1) + 0xa8] >>
                            ((char)uVar2 * '\x04' & 4U) & 0xfU) << 4 | param_2 >> 2 & 0xf) + 0xd0] *
             4) * 2) != 0)) {
    bVar1 = (bool)CmapSubtable::get_glyph
                            ((CmapSubtable *)param_1,
                             (uint)*(ushort *)
                                    (_hb_arabic_u16 +
                                    (ulong)((param_2 & 3) + 0x140 +
                                           (uint)(byte)_hb_arabic_u8
                                                       [(((int)(uint)(byte)_hb_arabic_u8
                                                                           [(ulong)(uVar2 >> 1) +
                                                                            0xa8] >>
                                                          ((char)uVar2 * '\x04' & 4U) & 0xfU) << 4 |
                                                        param_2 >> 2 & 0xf) + 0xd0] * 4) * 2),
                             param_3);
    return bVar1;
  }
  return bVar1;
}



/* bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,
   &(_hb_arabic_pua_simp_map(unsigned int))>(void const*, unsigned int, unsigned int*) */

bool OT::cmap::accelerator_t::
     get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_simp_map(unsigned_int))>
               (void *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable *)param_1,param_2,param_3);
  if (((bVar1 == false) && (param_2 < 0xfefd)) &&
     (uVar2 = ((int)(uint)(byte)_hb_arabic_u8[param_2 >> 0xd] >> ((byte)(param_2 >> 10) & 6) & 3U)
              << 4 | param_2 >> 7 & 0xf,
     *(ushort *)
      (_hb_arabic_u16 +
      (ulong)((param_2 & 7) +
             (uint)(byte)_hb_arabic_u8
                         [(((int)(uint)(byte)_hb_arabic_u8[(ulong)(uVar2 >> 1) + 8] >>
                            ((char)uVar2 * '\x04' & 4U) & 0xfU) << 4 | param_2 >> 3 & 0xf) + 0x28] *
             8) * 2) != 0)) {
    bVar1 = (bool)CmapSubtable::get_glyph
                            ((CmapSubtable *)param_1,
                             (uint)*(ushort *)
                                    (_hb_arabic_u16 +
                                    (ulong)((param_2 & 7) +
                                           (uint)(byte)_hb_arabic_u8
                                                       [(((int)(uint)(byte)_hb_arabic_u8
                                                                           [(ulong)(uVar2 >> 1) + 8]
                                                          >> ((char)uVar2 * '\x04' & 4U) & 0xfU) <<
                                                         4 | param_2 >> 3 & 0xf) + 0x28] * 8) * 2),
                             param_3);
    return bVar1;
  }
  return bVar1;
}



/* bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,
   &OT::_hb_symbol_pua_map>(void const*, unsigned int, unsigned int*) */

bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>
               (void *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable *)param_1,param_2,param_3);
  if ((bVar1 == false) && (param_2 < 0x100)) {
    bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable *)param_1,param_2 + 0xf000,param_3);
    return bVar1;
  }
  return bVar1;
}



/* bool OT::cmap::accelerator_t::get_glyph_from_macroman<OT::CmapSubtable>(void const*, unsigned
   int, unsigned int*) */

bool OT::cmap::accelerator_t::get_glyph_from_macroman<OT::CmapSubtable>
               (void *param_1,uint param_2,uint *param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 < 0x80) &&
     (cVar2 = CmapSubtable::get_glyph((CmapSubtable *)param_1,param_2,param_3), cVar2 != '\0')) {
    return (bool)cVar2;
  }
  iVar5 = 0x7f;
  iVar4 = 0;
  do {
    uVar3 = (uint)(iVar4 + iVar5) >> 1;
    if ((ushort)param_2 < *(ushort *)(unicode_to_macroman(unsigned_int)::mapping + (ulong)uVar3 * 4)
       ) {
      iVar5 = uVar3 - 1;
    }
    else {
      if ((ushort)param_2 <=
          *(ushort *)(unicode_to_macroman(unsigned_int)::mapping + (ulong)uVar3 * 4)) {
        if (unicode_to_macroman(unsigned_int)::mapping[(ulong)uVar3 * 4 + 2] == 0) {
          return false;
        }
        uVar1 = CmapSubtable::get_glyph
                          ((CmapSubtable *)param_1,
                           (uint)(byte)unicode_to_macroman(unsigned_int)::mapping
                                       [(ulong)uVar3 * 4 + 2],param_3);
        return (bool)uVar1;
      }
      iVar4 = uVar3 + 1;
    }
  } while (iVar4 <= iVar5);
  return false;
}



/* OT::CmapSubtable::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::CmapSubtable::sanitize(CmapSubtable *this,hb_sanitize_context_t *param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  CmapSubtable *pCVar7;
  uint uVar8;
  bool bVar9;
  
  if ((CmapSubtable *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    return (ulong)CONCAT31((int3)(*(uint *)(param_1 + 0x18) >> 8),
                           this + (0x106 - *(long *)(param_1 + 8)) <=
                           (CmapSubtable *)(ulong)*(uint *)(param_1 + 0x18));
  default:
    return 1;
  case 4:
    if ((CmapSubtable *)(ulong)*(uint *)(param_1 + 0x18) < this + (0xe - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)this - *(long *)(param_1 + 8))) {
      uVar4 = *(long *)(param_1 + 0x10) - (long)this;
    }
    else {
      uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      uVar4 = *(long *)(param_1 + 0x10) - (long)this;
      if (((uint)uVar2 <= (uint)uVar4) &&
         (iVar6 = *(int *)(param_1 + 0x1c) - (uint)uVar2, *(int *)(param_1 + 0x1c) = iVar6,
         0 < iVar6)) goto LAB_00104c4e;
    }
    if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
       param_1[0x28] == (hb_sanitize_context_t)0x0)) {
      return 0;
    }
    if (0xffff < uVar4) {
      uVar4 = 0xffff;
    }
    uVar2 = (ushort)uVar4;
    *(ushort *)(this + 2) = uVar2 << 8 | uVar2 >> 8;
    uVar2 = (uVar2 >> 8) << 8 | uVar2 & 0xff;
LAB_00104c4e:
    uVar3 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) * 4 + 0x10;
    return (ulong)CONCAT31((int3)(uVar3 >> 8),uVar3 <= uVar2);
  case 6:
    pCVar7 = this + 10;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = (uint)(ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8) * 2;
    uVar5 = (ulong)uVar3;
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7) < uVar3) {
      return 0;
    }
    break;
  case 10:
    pCVar7 = this + 0x14;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if ((int)uVar3 < 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if (uVar3 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7)) {
      iVar6 = *(int *)(param_1 + 0x1c) + uVar3 * -2;
      *(int *)(param_1 + 0x1c) = iVar6;
      return (ulong)CONCAT31((int3)((uint)iVar6 >> 8),0 < iVar6);
    }
    return 0;
  case 0xc:
  case 0xd:
    pCVar7 = this + 0x10;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(uint *)(this + 0xc);
    uVar4 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
            * 0xc;
    uVar5 = uVar4 & 0xffffffff;
    if ((int)(uVar4 >> 0x20) != 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7) < (uint)uVar4) {
      return 0;
    }
    break;
  case 0xe:
    pCVar7 = this + 10;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(uint *)(this + 6);
    lVar1 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
            * 0xb;
    bVar9 = (int)((ulong)lVar1 >> 0x20) != 0;
    uVar3 = (uint)lVar1;
    uVar8 = (uint)bVar9;
    if (bVar9) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7)) {
      iVar6 = *(int *)(param_1 + 0x1c) - uVar3;
      *(int *)(param_1 + 0x1c) = iVar6;
      if (iVar6 < 1) {
        return 0;
      }
      uVar3 = *(uint *)(this + 6);
      if (uVar3 == 0) {
        return 1;
      }
      do {
        uVar4 = VariationSelectorRecord::sanitize((VariationSelectorRecord *)pCVar7,param_1,this);
        if ((char)uVar4 == '\0') {
          return uVar4;
        }
        uVar8 = uVar8 + 1;
        pCVar7 = (CmapSubtable *)((VariationSelectorRecord *)pCVar7 + 0xb);
      } while (uVar8 < (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18));
      return 1;
    }
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x1c) - (int)uVar5;
  *(int *)(param_1 + 0x1c) = iVar6;
  return CONCAT71((int7)(uVar5 >> 8),0 < iVar6);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cmap::find_subtable(unsigned int, unsigned int) const */

cmap * __thiscall OT::cmap::find_subtable(cmap *this,uint param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  cmap *pcVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  uVar1 = (ushort)param_1;
  pcVar4 = (cmap *)&_hb_NullPool;
  uVar7 = (ushort)param_2;
  uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar2 == 0) {
LAB_00104d45:
    uVar3 = *(uint *)(pcVar4 + 4);
    if (*(uint *)(pcVar4 + 4) == 0) {
      return (cmap *)0x0;
    }
  }
  else {
    iVar5 = 0;
    iVar6 = uVar2 - 1;
    do {
      while( true ) {
        uVar3 = (uint)(iVar5 + iVar6) >> 1;
        pcVar4 = this + (ulong)uVar3 * 8 + 4;
        uVar2 = *(ushort *)pcVar4;
        if ((ushort)((uVar1 >> 8) << 8 | uVar1 & 0xff) < (ushort)(uVar2 << 8 | uVar2 >> 8)) break;
        if ((ushort)(uVar1 << 8 | uVar1 >> 8) == uVar2) {
          if (uVar7 == 0xffff) goto LAB_00104d45;
          uVar2 = *(ushort *)(pcVar4 + 2);
          if ((ushort)((uVar7 >> 8) << 8 | uVar7 & 0xff) < (ushort)(uVar2 << 8 | uVar2 >> 8)) break;
          if ((ushort)(uVar7 << 8 | uVar7 >> 8) == uVar2) goto LAB_00104d45;
        }
        iVar5 = uVar3 + 1;
        if (iVar6 < iVar5) goto LAB_00104d69;
      }
      iVar6 = uVar3 - 1;
    } while (iVar5 <= iVar6);
LAB_00104d69:
    uVar3 = _DAT_0010a044;
    if (_DAT_0010a044 == 0) {
      return (cmap *)0x0;
    }
  }
  return this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cmap::find_best_subtable(bool*, bool*, bool*) const */

cmap * __thiscall OT::cmap::find_best_subtable(cmap *this,bool *param_1,bool *param_2,bool *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  cmap *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != (bool *)0x0) {
    *param_1 = false;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = false;
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
  uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  iVar7 = uVar1 - 1;
  uVar3 = _DAT_0010a044;
  if (uVar1 == 0) {
    if (_DAT_0010a044 == 0) {
LAB_00104ff9:
      pcVar4 = (cmap *)find_subtable(this,0,2);
      if (pcVar4 != (cmap *)0x0) {
        return pcVar4;
      }
      pcVar4 = (cmap *)find_subtable(this,0,1);
      if (pcVar4 != (cmap *)0x0) {
        return pcVar4;
      }
      pcVar4 = (cmap *)find_subtable(this,0,0);
      if (pcVar4 != (cmap *)0x0) {
        return pcVar4;
      }
      pcVar4 = (cmap *)find_subtable(this,1,0);
      if (pcVar4 != (cmap *)0x0) {
        if (param_2 != (bool *)0x0) {
          *param_2 = true;
        }
        if (param_3 == (bool *)0x0) {
          return pcVar4;
        }
        *param_3 = true;
        return pcVar4;
      }
      pcVar4 = (cmap *)find_subtable(this,1,0xffff);
      if (pcVar4 == (cmap *)0x0) {
        return (cmap *)&_hb_NullPool;
      }
      if (param_2 == (bool *)0x0) {
        return pcVar4;
      }
      *param_2 = true;
      return pcVar4;
    }
  }
  else {
    iVar5 = 0;
    iVar6 = iVar7;
    do {
      while( true ) {
        uVar2 = (uint)(iVar5 + iVar6) >> 1;
        pcVar4 = this + (ulong)uVar2 * 8 + 4;
        uVar1 = *(ushort *)pcVar4;
        if ((ushort)(uVar1 << 8 | uVar1 >> 8) < 4) break;
LAB_00104dd8:
        iVar6 = uVar2 - 1;
        if (iVar6 < iVar5) goto joined_r0x00104e43;
      }
      if (uVar1 == 0x300) {
        if (*(ushort *)(pcVar4 + 2) != 0) goto LAB_00104dd8;
        uVar3 = *(uint *)(pcVar4 + 4);
        break;
      }
      iVar5 = uVar2 + 1;
    } while (iVar5 <= iVar6);
joined_r0x00104e43:
    if (uVar3 == 0) {
      iVar5 = 0;
      iVar6 = iVar7;
      do {
        while( true ) {
          uVar3 = (uint)(iVar5 + iVar6) >> 1;
          pcVar4 = this + (ulong)uVar3 * 8 + 4;
          uVar1 = *(ushort *)pcVar4;
          if (3 < (ushort)(uVar1 << 8 | uVar1 >> 8)) break;
          if (uVar1 == 0x300) {
            uVar1 = *(ushort *)(pcVar4 + 2);
            if (10 < (ushort)(uVar1 << 8 | uVar1 >> 8)) break;
            if (uVar1 == 0xa00) goto LAB_00104ea1;
          }
          iVar5 = uVar3 + 1;
          if (iVar6 < iVar5) goto LAB_00105083;
        }
        iVar6 = uVar3 - 1;
      } while (iVar5 <= iVar6);
LAB_00105083:
      pcVar4 = (cmap *)&_hb_NullPool;
LAB_00104ea1:
      uVar3 = *(uint *)(pcVar4 + 4);
      if (uVar3 == 0) {
        iVar5 = 0;
        iVar6 = iVar7;
        do {
          uVar3 = (uint)(iVar5 + iVar6) >> 1;
          pcVar4 = this + (ulong)uVar3 * 8 + 4;
          if ((*(short *)pcVar4 == 0) &&
             (uVar1 = *(ushort *)(pcVar4 + 2), (ushort)(uVar1 << 8 | uVar1 >> 8) < 7)) {
            if (uVar1 == 0x600) goto LAB_00104ef2;
            iVar5 = uVar3 + 1;
          }
          else {
            iVar6 = uVar3 - 1;
          }
        } while (iVar5 <= iVar6);
        pcVar4 = (cmap *)&_hb_NullPool;
LAB_00104ef2:
        uVar3 = *(uint *)(pcVar4 + 4);
        if (uVar3 == 0) {
          iVar5 = 0;
          iVar6 = iVar7;
          do {
            uVar3 = (uint)(iVar5 + iVar6) >> 1;
            pcVar4 = this + (ulong)uVar3 * 8 + 4;
            if ((*(short *)pcVar4 == 0) &&
               (uVar1 = *(ushort *)(pcVar4 + 2), (ushort)(uVar1 << 8 | uVar1 >> 8) < 5)) {
              if (uVar1 == 0x400) goto LAB_00104f42;
              iVar5 = uVar3 + 1;
            }
            else {
              iVar6 = uVar3 - 1;
            }
          } while (iVar5 <= iVar6);
          pcVar4 = (cmap *)&_hb_NullPool;
LAB_00104f42:
          uVar3 = *(uint *)(pcVar4 + 4);
          if (uVar3 == 0) {
            iVar5 = 0;
            iVar6 = iVar7;
            do {
              uVar3 = (uint)(iVar5 + iVar6) >> 1;
              pcVar4 = this + (ulong)uVar3 * 8 + 4;
              uVar1 = *(ushort *)pcVar4;
              if ((ushort)(uVar1 << 8 | uVar1 >> 8) < 4) {
                if (uVar1 == 0x300) {
                  uVar1 = *(ushort *)(pcVar4 + 2);
                  if (1 < (ushort)(uVar1 << 8 | uVar1 >> 8)) goto LAB_00104f54;
                  if (uVar1 == 0x100) goto LAB_00104fa5;
                }
                iVar5 = uVar3 + 1;
              }
              else {
LAB_00104f54:
                iVar6 = uVar3 - 1;
              }
            } while (iVar5 <= iVar6);
            pcVar4 = (cmap *)&_hb_NullPool;
LAB_00104fa5:
            uVar3 = *(uint *)(pcVar4 + 4);
            if (uVar3 == 0) {
              iVar5 = 0;
              do {
                uVar3 = (uint)(iVar5 + iVar7) >> 1;
                pcVar4 = this + (ulong)uVar3 * 8 + 4;
                if ((*(short *)pcVar4 == 0) &&
                   (uVar1 = *(ushort *)(pcVar4 + 2), (ushort)(uVar1 << 8 | uVar1 >> 8) < 4)) {
                  if (uVar1 == 0x300) goto LAB_00104fee;
                  iVar5 = uVar3 + 1;
                }
                else {
                  iVar7 = uVar3 - 1;
                }
              } while (iVar5 <= iVar7);
              pcVar4 = (cmap *)&_hb_NullPool;
LAB_00104fee:
              uVar3 = *(uint *)(pcVar4 + 4);
              if (uVar3 == 0) goto LAB_00104ff9;
            }
          }
        }
      }
      goto LAB_00104e1a;
    }
  }
  if (param_1 != (bool *)0x0) {
    *param_1 = true;
  }
LAB_00104e1a:
  return this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
}



/* OT::cmap::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::cmap::sanitize(cmap *this,hb_sanitize_context_t *param_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  cmap *pcVar5;
  
  pcVar5 = this + 4;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pcVar5 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((((*(short *)this != 0) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pcVar5 - *(long *)(param_1 + 8)))) ||
      ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pcVar5 - *(long *)(param_1 + 8)))) ||
     ((uVar1 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pcVar5) < uVar1 * 8 ||
      (iVar4 = *(int *)(param_1 + 0x1c) + uVar1 * -8, *(int *)(param_1 + 0x1c) = iVar4, iVar4 < 1)))
     ) {
    return 0;
  }
  uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar3 != 0) {
    pcVar5 = this + 0xc;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pcVar5 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar1 = *(uint *)(pcVar5 + -4);
      if ((uVar1 != 0) &&
         (cVar2 = CmapSubtable::sanitize
                            ((CmapSubtable *)
                             (this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                      (uVar1 & 0xff00) << 8 | uVar1 << 0x18)),param_1),
         cVar2 == '\0')) {
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined4 *)(pcVar5 + -4) = 0;
      }
      pcVar5 = pcVar5 + 8;
    } while (pcVar5 != this + (ulong)(uVar3 - 1) * 8 + 0x14);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_hashmap_t<unsigned int, unsigned int, true>::alloc(unsigned int) */

hb_hashmap_t<unsigned_int,unsigned_int,true> __thiscall
hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *this,uint param_1)

{
  byte bVar1;
  int *__ptr;
  long lVar2;
  char cVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  hb_hashmap_t<unsigned_int,unsigned_int,true> hVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  size_t __size;
  uint uVar16;
  int iVar17;
  short sVar18;
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
  
  hVar10 = this[0x10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (hVar10 == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
LAB_001055a3:
    hVar10 = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
  }
  else {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_0010550d;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar14 = param_1 * 2 + 8;
    uVar9 = (ulong)uVar14;
    if (uVar14 == 0) {
      pvVar4 = malloc(0xc);
      if (pvVar4 == (void *)0x0) goto LAB_0010559f;
      iVar17 = 0;
      sVar18 = 0;
      iVar7 = 0xc;
      __size = 0xc;
LAB_001052e9:
      pvVar4 = (void *)__memset_chk(pvVar4,0,iVar7,__size);
    }
    else {
      iVar7 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      uVar14 = iVar7 + 1;
      uVar9 = (ulong)uVar14;
      uVar16 = 1 << ((byte)uVar14 & 0x1f);
      __size = (ulong)uVar16 * 0xc;
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
LAB_0010559f:
        this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
        goto LAB_001055a3;
      }
      sVar18 = (short)uVar14 * 2;
      iVar17 = uVar16 - 1;
      iVar7 = 0xc << ((byte)uVar14 & 0x1f);
      if (iVar7 != 0) goto LAB_001052e9;
    }
    uStack_c0 = _UNK_00108918;
    uStack_c8 = __LC0;
    iVar7 = *(int *)(this + 0x1c);
    *(undefined8 *)(this + 0x14) = 0;
    *(int *)(this + 0x1c) = iVar17;
    __ptr = *(int **)(this + 0x28);
    uVar14 = (iVar7 + 1) - (uint)(iVar7 == 0);
    uStack_b8 = __LC1;
    uStack_b0 = _UNK_00108928;
    uStack_a8 = __LC2;
    uStack_a0 = _UNK_00108938;
    uStack_98 = __LC3;
    uStack_90 = _UNK_00108948;
    uStack_88 = __LC4;
    uStack_80 = _UNK_00108958;
    uStack_78 = __LC5;
    uStack_70 = _UNK_00108968;
    uStack_68 = __LC6;
    uStack_60 = _UNK_00108978;
    uStack_58 = __LC7;
    uStack_50 = _UNK_00108988;
    if ((int)uVar9 == 0x20) {
      uVar8 = 0x7fffffff;
    }
    else {
      uVar8 = *(undefined4 *)((long)&uStack_c8 + uVar9 * 4);
    }
    *(undefined4 *)(this + 0x20) = uVar8;
    *(short *)(this + 0x12) = sVar18;
    *(void **)(this + 0x28) = pvVar4;
    if (uVar14 != 0) {
      piVar15 = __ptr;
      do {
        if (((*(byte *)(piVar15 + 1) & 1) != 0) &&
           (uVar16 = (uint)piVar15[1] >> 2,
           this[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0)) {
          uVar13 = *(uint *)(this + 0x18);
          if (*(uint *)(this + 0x1c) <= (uVar13 >> 1) + uVar13) {
            cVar3 = alloc(this,0);
            if (cVar3 == '\0') goto LAB_001053b0;
            uVar13 = *(uint *)(this + 0x18);
          }
          lVar2 = *(long *)(this + 0x28);
          iVar17 = *piVar15;
          uVar9 = (ulong)uVar16 % (ulong)*(uint *)(this + 0x20);
          iVar7 = *(int *)(this + 0x14);
          lVar5 = uVar9 * 0xc;
          piVar6 = (int *)(lVar2 + lVar5);
          bVar1 = *(byte *)(piVar6 + 1);
          if ((bVar1 & 2) == 0) {
            *piVar6 = iVar17;
            piVar6[2] = piVar15[2];
            piVar6[1] = uVar16 * 4 + 3;
            *(uint *)(this + 0x18) = uVar13 + 1;
            *(int *)(this + 0x14) = iVar7 + 1;
          }
          else {
            uVar11 = 0;
            uVar12 = 0xffffffff;
            do {
              if (*piVar6 == iVar17) {
                if (uVar12 == 0xffffffff) goto LAB_0010546f;
                goto LAB_00105464;
              }
              if (((bVar1 & 1) == 0) && (uVar12 == 0xffffffff)) {
                uVar12 = (uint)uVar9;
              }
              uVar11 = uVar11 + 1;
              uVar9 = (ulong)((uint)uVar9 + uVar11 & *(uint *)(this + 0x1c));
              lVar5 = uVar9 * 0xc;
              piVar6 = (int *)(lVar2 + lVar5);
              bVar1 = *(byte *)(piVar6 + 1);
            } while ((bVar1 & 2) != 0);
            if (uVar12 == 0xffffffff) {
LAB_0010554a:
              uVar13 = uVar13 + 1;
            }
            else {
LAB_00105464:
              lVar5 = (ulong)uVar12 * 0xc;
LAB_0010546f:
              piVar6 = (int *)(lVar2 + lVar5);
              if ((*(byte *)(piVar6 + 1) & 2) == 0) goto LAB_0010554a;
              iVar7 = iVar7 - (*(byte *)(piVar6 + 1) & 1);
              *(uint *)(this + 0x18) = uVar13 - 1;
              *(int *)(this + 0x14) = iVar7;
              iVar17 = *piVar15;
            }
            *piVar6 = iVar17;
            iVar17 = piVar15[2];
            piVar6[1] = uVar16 * 4 + 3;
            piVar6[2] = iVar17;
            *(uint *)(this + 0x18) = uVar13;
            *(int *)(this + 0x14) = iVar7 + 1;
            if ((*(ushort *)(this + 0x12) < uVar11) && (*(uint *)(this + 0x1c) < uVar13 << 3)) {
              alloc(this,*(uint *)(this + 0x1c) - 8);
            }
          }
        }
LAB_001053b0:
        piVar15 = piVar15 + 3;
      } while (__ptr + (ulong)uVar14 * 3 != piVar15);
    }
    free(__ptr);
  }
LAB_0010550d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hVar10;
}



/* OT::CmapSubtableFormat4::accelerator_t::collect_mapping(hb_set_t*, hb_map_t*) const */

void __thiscall
OT::CmapSubtableFormat4::accelerator_t::collect_mapping
          (accelerator_t *this,hb_set_t *param_1,hb_map_t *param_2)

{
  hb_bit_set_t *this_00;
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ushort uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  uVar2 = *(uint *)(this + 0x28);
  if (uVar2 == 0) {
    return;
  }
  uVar10 = uVar2 - 1;
  lVar7 = *(long *)(this + 8);
  if ((*(short *)(lVar7 + (ulong)uVar10 * 2) == -1) && (uVar2 = uVar10, uVar10 == 0)) {
    return;
  }
  this_00 = (hb_bit_set_t *)(param_1 + 0x10);
  lVar15 = 0;
  do {
    uVar5 = *(ushort *)(lVar7 + lVar15 * 2);
    uVar12 = uVar5 << 8 | uVar5 >> 8;
    uVar5 = *(ushort *)(*(long *)this + lVar15 * 2);
    uVar11 = (ulong)uVar12;
    uVar10 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
    uVar5 = *(ushort *)(*(long *)(this + 0x18) + lVar15 * 2);
    uVar5 = uVar5 << 8 | uVar5 >> 8;
    uVar21 = (uint)uVar12;
    if (uVar5 == 0) {
      if (uVar12 <= uVar10) {
        uVar21 = uVar21 * -0x61c8864f;
        do {
          uVar5 = *(ushort *)(*(long *)(this + 0x10) + lVar15 * 2);
          uVar6 = (uint)uVar11;
          uVar14 = (ushort)(uVar5 << 8 | uVar5 >> 8) + uVar6 & 0xffff;
          if (uVar14 != 0) {
            if (param_1[0x40] == (hb_set_t)0x0) {
              if (param_1[0x10] != (hb_set_t)0x0) {
                *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                puVar8 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar6,true);
                if (puVar8 != (undefined4 *)0x0) {
                  *(ulong *)(puVar8 + (ulong)((uint)(uVar11 >> 6) & 7) * 2 + 2) =
                       *(ulong *)(puVar8 + (ulong)((uint)(uVar11 >> 6) & 7) * 2 + 2) |
                       1L << ((byte)uVar11 & 0x3f);
                  *puVar8 = 0xffffffff;
                }
              }
            }
            else if ((param_1[0x10] != (hb_set_t)0x0) &&
                    (puVar8 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar6,false),
                    puVar8 != (undefined4 *)0x0)) {
              *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
              bVar3 = (byte)uVar11 & 0x3f;
              *(ulong *)(puVar8 + (ulong)((uint)(uVar11 >> 6) & 7) * 2 + 2) =
                   *(ulong *)(puVar8 + (ulong)((uint)(uVar11 >> 6) & 7) * 2 + 2) &
                   (-2L << bVar3 | 0xfffffffffffffffeU >> 0x40 - bVar3);
              *puVar8 = 0xffffffff;
            }
            if (param_2[0x10] != (hb_map_t)0x0) {
              uVar19 = *(uint *)(param_2 + 0x18);
              if (*(uint *)(param_2 + 0x1c) <= (uVar19 >> 1) + uVar19) {
                cVar4 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                                  ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,0);
                if (cVar4 == '\0') goto LAB_001059c8;
                uVar19 = *(uint *)(param_2 + 0x18);
              }
              lVar7 = *(long *)(param_2 + 0x28);
              iVar20 = *(int *)(param_2 + 0x14);
              uVar11 = (ulong)(uVar21 & 0x3fffffff) % (ulong)*(uint *)(param_2 + 0x20);
              lVar9 = uVar11 * 0xc;
              puVar16 = (uint *)(lVar7 + lVar9);
              bVar3 = (byte)puVar16[1];
              if ((bVar3 & 2) == 0) {
                *puVar16 = uVar6;
                puVar16[2] = uVar14;
                puVar16[1] = uVar21 * 4 + 3;
                *(uint *)(param_2 + 0x18) = uVar19 + 1;
                *(int *)(param_2 + 0x14) = iVar20 + 1;
              }
              else {
                uVar17 = 0;
                uVar18 = 0xffffffff;
                do {
                  if (*puVar16 == uVar6) {
                    if (uVar18 == 0xffffffff) goto LAB_0010598d;
                    goto LAB_00105983;
                  }
                  if ((uVar18 == 0xffffffff) && ((bVar3 & 1) == 0)) {
                    uVar18 = (uint)uVar11;
                  }
                  uVar17 = uVar17 + 1;
                  uVar11 = (ulong)((uint)uVar11 + uVar17 & *(uint *)(param_2 + 0x1c));
                  lVar9 = uVar11 * 0xc;
                  puVar16 = (uint *)(lVar7 + lVar9);
                  bVar3 = (byte)puVar16[1];
                } while ((bVar3 & 2) != 0);
                if (uVar18 == 0xffffffff) {
LAB_00105a09:
                  uVar19 = uVar19 + 1;
                }
                else {
LAB_00105983:
                  lVar9 = (ulong)uVar18 * 0xc;
LAB_0010598d:
                  puVar16 = (uint *)(lVar7 + lVar9);
                  if (((byte)puVar16[1] & 2) == 0) goto LAB_00105a09;
                  iVar20 = iVar20 - ((byte)puVar16[1] & 1);
                }
                *puVar16 = uVar6;
                puVar16[1] = uVar21 * 4 + 3;
                uVar5 = *(ushort *)(param_2 + 0x12);
                puVar16[2] = uVar14;
                *(uint *)(param_2 + 0x18) = uVar19;
                *(int *)(param_2 + 0x14) = iVar20 + 1;
                if ((uVar5 < uVar17) && (*(uint *)(param_2 + 0x1c) < uVar19 << 3)) {
                  hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                             *(uint *)(param_2 + 0x1c) - 8);
                }
              }
            }
          }
LAB_001059c8:
          uVar11 = (ulong)(uVar6 + 1);
          uVar21 = uVar21 + 0x9e3779b1;
        } while (uVar6 + 1 <= uVar10);
      }
    }
    else if (uVar21 <= uVar10) {
      uVar21 = uVar21 * -0x61c8864f;
      uVar13 = uVar11;
      while( true ) {
        uVar14 = (uint)uVar13;
        uVar6 = ((((uint)(uVar5 >> 1) + (int)lVar15) - *(int *)(this + 0x28)) + uVar14) -
                (int)uVar11;
        if (*(uint *)(this + 0x2c) <= uVar6) break;
        uVar12 = *(ushort *)(*(long *)(this + 0x20) + (ulong)uVar6 * 2);
        uVar12 = uVar12 << 8 | uVar12 >> 8;
        if (uVar12 != 0) {
          if (param_1[0x40] == (hb_set_t)0x0) {
            if (param_1[0x10] != (hb_set_t)0x0) {
              *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
              puVar8 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar14,true);
              if (puVar8 != (undefined4 *)0x0) {
                *(ulong *)(puVar8 + (ulong)((uint)(uVar13 >> 6) & 7) * 2 + 2) =
                     *(ulong *)(puVar8 + (ulong)((uint)(uVar13 >> 6) & 7) * 2 + 2) |
                     1L << ((byte)uVar13 & 0x3f);
                *puVar8 = 0xffffffff;
              }
            }
          }
          else if ((param_1[0x10] != (hb_set_t)0x0) &&
                  (puVar8 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar14,false),
                  puVar8 != (undefined4 *)0x0)) {
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            bVar3 = (byte)uVar13 & 0x3f;
            *(ulong *)(puVar8 + (ulong)((uint)(uVar13 >> 6) & 7) * 2 + 2) =
                 *(ulong *)(puVar8 + (ulong)((uint)(uVar13 >> 6) & 7) * 2 + 2) &
                 (-2L << bVar3 | 0xfffffffffffffffeU >> 0x40 - bVar3);
            *puVar8 = 0xffffffff;
          }
          if (param_2[0x10] != (hb_map_t)0x0) {
            uVar6 = *(uint *)(param_2 + 0x18);
            if (*(uint *)(param_2 + 0x1c) <= (uVar6 >> 1) + uVar6) {
              cVar4 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                                ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,0);
              if (cVar4 == '\0') goto LAB_00105801;
              uVar6 = *(uint *)(param_2 + 0x18);
            }
            lVar7 = *(long *)(param_2 + 0x28);
            iVar20 = *(int *)(param_2 + 0x14);
            uVar11 = (ulong)(uVar21 & 0x3fffffff) % (ulong)*(uint *)(param_2 + 0x20);
            lVar9 = uVar11 * 0xc;
            puVar16 = (uint *)(lVar7 + lVar9);
            bVar3 = (byte)puVar16[1];
            if ((bVar3 & 2) == 0) {
              *puVar16 = uVar14;
              puVar16[2] = (uint)uVar12;
              puVar16[1] = uVar21 * 4 + 3;
              *(uint *)(param_2 + 0x18) = uVar6 + 1;
              *(int *)(param_2 + 0x14) = iVar20 + 1;
            }
            else {
              uVar18 = 0;
              uVar19 = 0xffffffff;
              do {
                if (*puVar16 == uVar14) {
                  if (uVar19 == 0xffffffff) goto LAB_001057c5;
                  goto LAB_001057bb;
                }
                if (((bVar3 & 1) == 0) && (uVar19 == 0xffffffff)) {
                  uVar19 = (uint)uVar11;
                }
                uVar18 = uVar18 + 1;
                uVar11 = (ulong)((uint)uVar11 + uVar18 & *(uint *)(param_2 + 0x1c));
                lVar9 = uVar11 * 0xc;
                puVar16 = (uint *)(lVar7 + lVar9);
                bVar3 = (byte)puVar16[1];
              } while ((bVar3 & 2) != 0);
              if (uVar19 == 0xffffffff) {
LAB_00105835:
                uVar6 = uVar6 + 1;
              }
              else {
LAB_001057bb:
                lVar9 = (ulong)uVar19 * 0xc;
LAB_001057c5:
                puVar16 = (uint *)(lVar7 + lVar9);
                if (((byte)puVar16[1] & 2) == 0) goto LAB_00105835;
                iVar20 = iVar20 - ((byte)puVar16[1] & 1);
              }
              *puVar16 = uVar14;
              puVar16[1] = uVar21 * 4 + 3;
              uVar1 = *(ushort *)(param_2 + 0x12);
              puVar16[2] = (uint)uVar12;
              *(uint *)(param_2 + 0x18) = uVar6;
              *(int *)(param_2 + 0x14) = iVar20 + 1;
              if ((uVar1 < uVar18) && (*(uint *)(param_2 + 0x1c) < uVar6 << 3)) {
                hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                          ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                           *(uint *)(param_2 + 0x1c) - 8);
              }
            }
          }
        }
LAB_00105801:
        uVar13 = (ulong)(uVar14 + 1);
        uVar21 = uVar21 + 0x9e3779b1;
        if (uVar10 < uVar14 + 1) break;
        uVar12 = *(ushort *)(*(long *)(this + 8) + lVar15 * 2);
        uVar11 = (ulong)(ushort)(uVar12 << 8 | uVar12 >> 8);
      }
    }
    if (uVar2 <= (int)lVar15 + 1U) {
      return;
    }
    lVar15 = lVar15 + 1;
    lVar7 = *(long *)(this + 8);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::CmapSubtableLongSegmented<OT::CmapSubtableFormat12>::collect_unicodes(hb_set_t*, unsigned
   int) const */

void __thiscall
OT::CmapSubtableLongSegmented<OT::CmapSubtableFormat12>::collect_unicodes
          (CmapSubtableLongSegmented<OT::CmapSubtableFormat12> *this,hb_set_t *param_1,uint param_2)

{
  hb_bit_set_t *this_00;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  CmapSubtableLongSegmented<OT::CmapSubtableFormat12> *pCVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  CmapSubtableLongSegmented<OT::CmapSubtableFormat12> *pCVar15;
  ulong uVar16;
  
  if (*(int *)(this + 0xc) != 0) {
    pCVar15 = this + 0x10;
    uVar12 = 0;
    do {
      uVar13 = *(uint *)pCVar15;
      uVar11 = *(uint *)(this + 0xc);
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
      if (uVar12 < (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18)) {
        uVar11 = *(uint *)(pCVar15 + 4);
        uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
        ;
        if (0x10ffff < uVar11) {
          uVar11 = 0x10ffff;
        }
        uVar5 = *(uint *)(this + 0xc);
        if ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) <=
            uVar12) goto LAB_00105dee;
        uVar5 = *(uint *)(pCVar15 + 8);
        if (*(uint *)(pCVar15 + 8) != 0) goto LAB_00105e00;
        uVar5 = *(uint *)(this + 0xc);
        pCVar10 = pCVar15;
        if ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) <=
            uVar12) goto LAB_00105f37;
LAB_00105bff:
        uVar5 = *(uint *)pCVar10;
        uVar6 = *(uint *)(pCVar10 + 4);
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if ((uVar5 <= (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18)) &&
           (uVar6 = *(uint *)(pCVar10 + 8),
           (uVar11 - uVar5) +
           (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) != 0))
        {
          uVar13 = uVar13 + 1;
          uVar5 = 1;
          goto LAB_00105c29;
        }
      }
      else {
        uVar11 = _DAT_0010a02c >> 0x18 | (_DAT_0010a02c & 0xff0000) >> 8 |
                 (_DAT_0010a02c & 0xff00) << 8 | _DAT_0010a02c << 0x18;
        if (0x10ffff < uVar11) {
          uVar11 = 0x10ffff;
        }
LAB_00105dee:
        uVar5 = _realloc;
        if (_realloc == 0) {
LAB_00105f37:
          pCVar10 = (CmapSubtableLongSegmented<OT::CmapSubtableFormat12> *)
                    &_hb_Null_OT_CmapSubtableLongGroup;
          goto LAB_00105bff;
        }
LAB_00105e00:
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
LAB_00105c29:
        if (uVar5 < param_2) {
          if (param_2 <= (uVar5 + uVar11) - uVar13) {
            uVar11 = (uVar13 + param_2) - uVar5;
          }
          if (0x10ffff < uVar11) {
            uVar11 = 0x10ffff;
          }
          if (param_1[0x40] == (hb_set_t)0x0) {
            this_00 = (hb_bit_set_t *)(param_1 + 0x10);
            if (((param_1[0x10] != (hb_set_t)0x0) && (uVar13 <= uVar11)) && (uVar13 != 0xffffffff))
            {
              *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
              uVar5 = uVar11 >> 9;
              if (uVar13 >> 9 == uVar5) {
                puVar7 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar13,true);
                if (puVar7 != (undefined4 *)0x0) {
                  uVar16 = (ulong)(uVar11 >> 6 & 7);
                  uVar9 = (ulong)(uVar13 >> 6 & 7);
                  puVar1 = puVar7 + uVar9 * 2 + 2;
                  lVar8 = 1L << ((byte)uVar13 & 0x3f);
                  lVar4 = (1L << ((byte)uVar11 & 0x3f)) * 2;
                  if (puVar1 == puVar7 + uVar16 * 2 + 2) {
                    *(ulong *)(puVar7 + uVar9 * 2 + 2) =
                         lVar4 - lVar8 | *(ulong *)(puVar7 + uVar9 * 2 + 2);
                  }
                  else {
                    *(ulong *)(puVar7 + uVar9 * 2 + 2) = -lVar8 | *(ulong *)(puVar7 + uVar9 * 2 + 2)
                    ;
                    iVar3 = (int)(puVar1 + 2);
                    iVar2 = (int)(puVar7 + uVar16 * 2 + 2);
                    if (iVar2 != iVar3) {
                      memset(puVar1 + 2,0xff,(ulong)(uint)(iVar2 - iVar3));
                    }
                    *(ulong *)(puVar7 + uVar16 * 2 + 2) =
                         *(ulong *)(puVar7 + uVar16 * 2 + 2) | lVar4 - 1U;
                  }
LAB_00105ea1:
                  *puVar7 = 0xffffffff;
                }
              }
              else {
                puVar7 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar13,true);
                if (puVar7 != (undefined4 *)0x0) {
                  uVar14 = (uVar13 >> 9) + 1;
                  uVar6 = uVar13 >> 6 & 7;
                  puVar1 = puVar7 + (ulong)(uVar6 + 1) * 2;
                  *(ulong *)(puVar7 + (ulong)uVar6 * 2 + 2) =
                       -(1L << ((byte)uVar13 & 0x3f)) | *(ulong *)(puVar7 + (ulong)uVar6 * 2 + 2);
                  if (puVar1 != puVar7 + 0x10) {
                    iVar3 = (int)(puVar1 + 2);
                    iVar2 = (int)(puVar7 + 0x10);
                    if (iVar2 != iVar3) {
                      memset(puVar1 + 2,0xff,(ulong)(uint)(iVar2 - iVar3));
                    }
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  }
                  *puVar7 = 0xffffffff;
                  uVar13 = uVar14 * 0x200;
                  if (uVar14 < uVar5) {
                    do {
                      puVar7 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar13,true);
                      if (puVar7 == (undefined4 *)0x0) goto LAB_00105db8;
                      *puVar7 = 0x200;
                      uVar13 = uVar13 + 0x200;
                      puVar7[2] = 0xffffffff;
                      puVar7[3] = 0xffffffff;
                      puVar7[4] = 0xffffffff;
                      puVar7[5] = 0xffffffff;
                      puVar7[6] = 0xffffffff;
                      puVar7[7] = 0xffffffff;
                      puVar7[8] = 0xffffffff;
                      puVar7[9] = 0xffffffff;
                      puVar7[10] = 0xffffffff;
                      puVar7[0xb] = 0xffffffff;
                      puVar7[0xc] = 0xffffffff;
                      puVar7[0xd] = 0xffffffff;
                      puVar7[0xe] = 0xffffffff;
                      puVar7[0xf] = 0xffffffff;
                      puVar7[0x10] = 0xffffffff;
                      puVar7[0x11] = 0xffffffff;
                    } while (uVar13 != uVar5 << 9);
                  }
                  puVar7 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar11,true);
                  if (puVar7 != (undefined4 *)0x0) {
                    uVar16 = (ulong)(uVar11 >> 6 & 7);
                    uVar9 = (1L << ((byte)uVar11 & 0x3f)) * 2 - 1;
                    if (uVar16 == 0) {
                      *(ulong *)(puVar7 + 2) = *(ulong *)(puVar7 + 2) | uVar9;
                    }
                    else {
                      *(undefined8 *)(puVar7 + 2) = 0xffffffffffffffff;
                      if (uVar16 != 1) {
                        memset(puVar7 + 4,0xff,uVar16 * 8 - 8 & 0xffffffff);
                      }
                      *(ulong *)(puVar7 + uVar16 * 2 + 2) =
                           *(ulong *)(puVar7 + uVar16 * 2 + 2) | uVar9;
                    }
                    goto LAB_00105ea1;
                  }
                }
              }
            }
          }
          else {
            hb_bit_set_t::del_range((hb_bit_set_t *)(param_1 + 0x10),uVar13,uVar11);
          }
        }
      }
LAB_00105db8:
      uVar13 = *(uint *)(this + 0xc);
      uVar12 = uVar12 + 1;
      pCVar15 = pCVar15 + 0xc;
    } while (uVar12 < (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::CmapSubtable::collect_unicodes(hb_set_t*, unsigned int) const */

void __thiscall
OT::CmapSubtable::collect_unicodes(CmapSubtable *this,hb_set_t *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  CmapSubtable *pCVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  CmapSubtable *pCVar12;
  long in_FS_OFFSET;
  CmapSubtable *local_78;
  CmapSubtable *local_70;
  CmapSubtable *local_68;
  CmapSubtable *local_60;
  CmapSubtable *local_58;
  uint local_50;
  uint local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    uVar9 = 0;
    do {
      if (this[uVar9 + 6] != (CmapSubtable)0x0) {
        if (param_1[0x40] == (hb_set_t)0x0) {
          if (param_1[0x10] != (hb_set_t)0x0) {
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            puVar4 = (undefined4 *)
                     hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),(uint)uVar9,true);
            if (puVar4 != (undefined4 *)0x0) {
              *(ulong *)(puVar4 + (uVar9 >> 6 & 0x3ffffff) * 2 + 2) =
                   *(ulong *)(puVar4 + (uVar9 >> 6 & 0x3ffffff) * 2 + 2) |
                   1L << ((byte)uVar9 & 0x3f);
              *puVar4 = 0xffffffff;
            }
          }
        }
        else if ((param_1[0x10] != (hb_set_t)0x0) &&
                (puVar4 = (undefined4 *)
                          hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),(uint)uVar9,false)
                , puVar4 != (undefined4 *)0x0)) {
          *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
          bVar1 = (byte)uVar9 & 0x3f;
          *(ulong *)(puVar4 + (uVar9 >> 6 & 0x3ffffff) * 2 + 2) =
               *(ulong *)(puVar4 + (uVar9 >> 6 & 0x3ffffff) * 2 + 2) &
               (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
          *puVar4 = 0xffffffff;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x100);
    break;
  case 4:
    local_78 = this + 0xe;
    local_50 = (uint)((ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) >> 1);
    lVar5 = (ulong)(local_50 + 1) * 2;
    local_70 = local_78 + lVar5;
    lVar5 = lVar5 + -2;
    local_68 = local_70 + lVar5;
    local_60 = local_68 + lVar5;
    local_58 = local_60 + lVar5;
    local_4c = ((ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) - 0x10) +
               local_50 * -8 >> 1;
    CmapSubtableFormat4::accelerator_t::collect_unicodes((accelerator_t *)&local_78,param_1);
    break;
  case 6:
    uVar2 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
    uVar6 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
    uVar11 = (uint)uVar2;
    if (uVar11 != 0) {
      pCVar12 = this + 10;
      uVar10 = 0;
      while( true ) {
        pCVar8 = (CmapSubtable *)&_hb_NullPool;
        if (uVar10 < uVar2) {
          pCVar8 = pCVar12;
        }
        if (*(short *)pCVar8 != 0) {
          if (param_1[0x40] == (hb_set_t)0x0) {
            if (param_1[0x10] != (hb_set_t)0x0) {
              *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
              puVar4 = (undefined4 *)
                       hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar6,true);
              if (puVar4 != (undefined4 *)0x0) {
                *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) |
                     1L << ((byte)uVar6 & 0x3f);
                *puVar4 = 0xffffffff;
              }
            }
          }
          else if ((param_1[0x10] != (hb_set_t)0x0) &&
                  (puVar4 = (undefined4 *)
                            hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar6,false),
                  puVar4 != (undefined4 *)0x0)) {
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            bVar1 = (byte)uVar6 & 0x3f;
            *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                 *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) &
                 (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
            *puVar4 = 0xffffffff;
          }
        }
        uVar10 = uVar10 + 1;
        uVar6 = uVar6 + 1;
        pCVar12 = pCVar12 + 2;
        if (uVar11 == uVar10) break;
        uVar2 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
      }
    }
    break;
  case 10:
    uVar11 = *(uint *)(this + 0x10);
    uVar6 = *(uint *)(this + 0xc);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar10 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    if (uVar11 != 0) {
      pCVar12 = this + 0x14;
      uVar3 = 0;
      uVar11 = uVar10;
      while( true ) {
        pCVar8 = (CmapSubtable *)&_hb_NullPool;
        if (uVar3 < uVar11) {
          pCVar8 = pCVar12;
        }
        if (*(short *)pCVar8 != 0) {
          if (param_1[0x40] == (hb_set_t)0x0) {
            if ((uVar6 != 0xffffffff) && (param_1[0x10] == (hb_set_t)0x1)) {
              *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
              puVar4 = (undefined4 *)
                       hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar6,true);
              if (puVar4 != (undefined4 *)0x0) {
                *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) |
                     1L << ((byte)uVar6 & 0x3f);
                *puVar4 = 0xffffffff;
              }
            }
          }
          else if ((param_1[0x10] != (hb_set_t)0x0) &&
                  (puVar4 = (undefined4 *)
                            hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar6,false),
                  puVar4 != (undefined4 *)0x0)) {
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            bVar1 = (byte)uVar6 & 0x3f;
            *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) =
                 *(ulong *)(puVar4 + (ulong)(uVar6 >> 6 & 7) * 2 + 2) &
                 (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
            *puVar4 = 0xffffffff;
          }
        }
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 + 1;
        pCVar12 = pCVar12 + 2;
        if (uVar10 <= uVar3) break;
        uVar11 = *(uint *)(this + 0x10);
        uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
        ;
      }
    }
    break;
  case 0xc:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CmapSubtableLongSegmented<OT::CmapSubtableFormat12>::collect_unicodes
                ((CmapSubtableLongSegmented<OT::CmapSubtableFormat12> *)this,param_1,param_2);
      return;
    }
    goto LAB_0010644f;
  case 0xd:
    if (*(int *)(this + 0xc) != 0) {
      pCVar12 = this + 0x10;
      uVar11 = 0;
      do {
        uVar6 = *(uint *)(this + 0xc);
        uVar10 = *(uint *)pCVar12;
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        if (uVar11 < (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                     uVar6 << 0x18)) {
          uVar6 = *(uint *)(pCVar12 + 4);
          uVar3 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          if (0x10ffff < uVar3) {
            uVar3 = 0x10ffff;
          }
          uVar6 = *(uint *)(this + 0xc);
          if ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) <=
              uVar11) goto LAB_00106379;
          uVar6 = *(uint *)(pCVar12 + 8);
          if (uVar6 != 0) {
            uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
            goto LAB_00106042;
          }
          uVar6 = *(uint *)(this + 0xc);
          uVar7 = _realloc;
          if (uVar11 < (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                       uVar6 << 0x18)) {
            uVar7 = *(uint *)(pCVar12 + 8);
          }
          if (uVar7 != 0) {
            uVar10 = uVar10 + 1;
            uVar6 = 1;
            goto LAB_00106042;
          }
LAB_00106076:
          uVar6 = *(uint *)(this + 0xc);
        }
        else {
          uVar3 = _DAT_0010a02c >> 0x18 | (_DAT_0010a02c & 0xff0000) >> 8 |
                  (_DAT_0010a02c & 0xff00) << 8 | _DAT_0010a02c << 0x18;
          if (0x10ffff < uVar3) {
            uVar3 = 0x10ffff;
          }
LAB_00106379:
          if (_realloc != 0) {
            uVar6 = _realloc >> 0x18 | (_realloc & 0xff0000) >> 8 | (_realloc & 0xff00) << 8 |
                    _realloc << 0x18;
LAB_00106042:
            if (uVar6 < param_2) {
              if (param_2 <= (uVar3 + uVar6) - uVar10) {
                uVar3 = (param_2 + uVar10) - uVar6;
              }
              uVar6 = 0x10ffff;
              if (uVar3 < 0x110000) {
                uVar6 = uVar3;
              }
              if (param_1[0x40] != (hb_set_t)0x0) {
                hb_bit_set_t::del_range((hb_bit_set_t *)(param_1 + 0x10),uVar10,uVar6);
                uVar6 = *(uint *)(this + 0xc);
                goto LAB_00106079;
              }
              hb_bit_set_t::add_range((hb_bit_set_t *)(param_1 + 0x10),uVar10,uVar6);
            }
            goto LAB_00106076;
          }
        }
LAB_00106079:
        uVar11 = uVar11 + 1;
        pCVar12 = pCVar12 + 0xc;
      } while (uVar11 < (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010644f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OT::CmapSubtableLongSegmented<OT::CmapSubtableFormat12>::collect_mapping(hb_set_t*, hb_map_t*,
   unsigned int) const */

void __thiscall
OT::CmapSubtableLongSegmented<OT::CmapSubtableFormat12>::collect_mapping
          (CmapSubtableLongSegmented<OT::CmapSubtableFormat12> *this,hb_set_t *param_1,
          hb_map_t *param_2,uint param_3)

{
  hb_bit_set_t *this_00;
  undefined4 *__s;
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  CmapSubtableLongSegmented<OT::CmapSubtableFormat12> *pCVar21;
  uint local_64;
  
  uVar3 = *(uint *)(this + 0xc);
  local_64 = 0;
  if (uVar3 != 0) {
    pCVar21 = this + 0x10;
    uVar12 = 0;
    do {
      uVar15 = *(uint *)(pCVar21 + 4);
      uVar16 = *(uint *)pCVar21;
      uVar7 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      uVar15 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
      uVar16 = 0x10ffff;
      if (uVar7 < 0x110000) {
        uVar16 = uVar7;
      }
      if ((uVar15 <= uVar16) && (uVar12 <= uVar15)) {
        uVar12 = *(uint *)(pCVar21 + 8);
        if (uVar12 == 0) {
          uVar15 = uVar15 + 1;
          uVar7 = 1;
        }
        else {
          uVar7 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                  uVar12 << 0x18;
        }
        uVar12 = uVar16;
        if (uVar7 < param_3) {
          uVar5 = (uVar15 + param_3) - uVar7;
          if ((uVar16 + uVar7) - uVar15 < param_3) {
            uVar5 = uVar16;
          }
          hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                    ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                     (uVar5 - uVar15) + 1 + *(int *)(param_2 + 0x14));
          if (param_1[0x40] == (hb_set_t)0x0) {
            if (param_1[0x10] == (hb_set_t)0x0) goto LAB_001068b0;
            if (uVar5 < uVar15) goto LAB_001067ed;
            if (uVar5 == 0xffffffff) goto LAB_001068b0;
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            this_00 = (hb_bit_set_t *)(param_1 + 0x10);
            uVar16 = uVar5 >> 9;
            if (uVar15 >> 9 == uVar16) {
              puVar9 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar15,true);
              if (puVar9 != (undefined4 *)0x0) {
                uVar13 = (ulong)(uVar15 >> 6 & 7);
                uVar19 = (ulong)(uVar5 >> 6 & 7);
                puVar1 = puVar9 + uVar19 * 2 + 2;
                lVar10 = 1L << ((byte)uVar15 & 0x3f);
                lVar4 = (1L << ((byte)uVar5 & 0x3f)) * 2;
                if (puVar9 + uVar13 * 2 + 2 == puVar1) {
                  *(ulong *)(puVar9 + uVar13 * 2 + 2) =
                       lVar4 - lVar10 | *(ulong *)(puVar9 + uVar13 * 2 + 2);
                }
                else {
                  *(ulong *)(puVar9 + uVar13 * 2 + 2) =
                       -lVar10 | *(ulong *)(puVar9 + uVar13 * 2 + 2);
                  __s = puVar9 + uVar13 * 2 + 2 + 2;
                  if ((int)puVar1 != (int)__s) {
                    memset(__s,0xff,(long)puVar1 - (long)__s & 0xffffffff);
                  }
                  *(ulong *)(puVar9 + uVar19 * 2 + 2) =
                       *(ulong *)(puVar9 + uVar19 * 2 + 2) | lVar4 - 1U;
                }
LAB_00106973:
                *puVar9 = 0xffffffff;
              }
            }
            else {
              puVar9 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar15,true);
              if (puVar9 != (undefined4 *)0x0) {
                uVar8 = uVar15 >> 6 & 7;
                uVar17 = (uVar15 >> 9) + 1;
                puVar1 = puVar9 + (ulong)(uVar8 + 1) * 2;
                *(ulong *)(puVar9 + (ulong)uVar8 * 2 + 2) =
                     -(1L << ((byte)uVar15 & 0x3f)) | *(ulong *)(puVar9 + (ulong)uVar8 * 2 + 2);
                if (puVar1 != puVar9 + 0x10) {
                  iVar18 = (int)(puVar1 + 2);
                  iVar20 = (int)(puVar9 + 0x10);
                  if (iVar20 != iVar18) {
                    memset(puVar1 + 2,0xff,(ulong)(uint)(iVar20 - iVar18));
                  }
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                }
                *puVar9 = 0xffffffff;
                uVar8 = uVar17 * 0x200;
                if (uVar17 < uVar16) {
                  do {
                    puVar9 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar8,true);
                    if (puVar9 == (undefined4 *)0x0) goto LAB_001066d6;
                    uVar8 = uVar8 + 0x200;
                    *puVar9 = 0x200;
                    puVar9[2] = 0xffffffff;
                    puVar9[3] = 0xffffffff;
                    puVar9[4] = 0xffffffff;
                    puVar9[5] = 0xffffffff;
                    puVar9[6] = 0xffffffff;
                    puVar9[7] = 0xffffffff;
                    puVar9[8] = 0xffffffff;
                    puVar9[9] = 0xffffffff;
                    puVar9[10] = 0xffffffff;
                    puVar9[0xb] = 0xffffffff;
                    puVar9[0xc] = 0xffffffff;
                    puVar9[0xd] = 0xffffffff;
                    puVar9[0xe] = 0xffffffff;
                    puVar9[0xf] = 0xffffffff;
                    puVar9[0x10] = 0xffffffff;
                    puVar9[0x11] = 0xffffffff;
                  } while (uVar8 != uVar16 * 0x200);
                }
                puVar9 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar5,true);
                if (puVar9 != (undefined4 *)0x0) {
                  uVar19 = (ulong)(uVar5 >> 6 & 7);
                  uVar13 = (1L << ((byte)uVar5 & 0x3f)) * 2 - 1;
                  if (uVar19 == 0) {
                    *(ulong *)(puVar9 + 2) = *(ulong *)(puVar9 + 2) | uVar13;
                  }
                  else {
                    *(undefined8 *)(puVar9 + 2) = 0xffffffffffffffff;
                    if (uVar19 != 1) {
                      memset(puVar9 + 4,0xff,uVar19 * 8 - 8 & 0xffffffff);
                    }
                    *(ulong *)(puVar9 + uVar19 * 2 + 2) =
                         *(ulong *)(puVar9 + uVar19 * 2 + 2) | uVar13;
                  }
                  goto LAB_00106973;
                }
              }
            }
          }
          else {
            hb_bit_set_t::del_range((hb_bit_set_t *)(param_1 + 0x10),uVar15,uVar5);
LAB_001068b0:
            if (uVar5 < uVar15) goto LAB_001067ed;
          }
LAB_001066d6:
          uVar16 = uVar15 * -0x61c8864f;
          iVar20 = uVar7 - uVar15;
          do {
            uVar7 = uVar15 + iVar20;
            if (param_2[0x10] != (hb_map_t)0x0) {
              uVar8 = *(uint *)(param_2 + 0x18);
              if (*(uint *)(param_2 + 0x1c) <= (uVar8 >> 1) + uVar8) {
                cVar6 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                                  ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,0);
                if (cVar6 == '\0') goto LAB_001067d1;
                uVar8 = *(uint *)(param_2 + 0x18);
              }
              lVar4 = *(long *)(param_2 + 0x28);
              iVar18 = *(int *)(param_2 + 0x14);
              uVar13 = (ulong)(uVar16 & 0x3fffffff) % (ulong)*(uint *)(param_2 + 0x20);
              lVar10 = uVar13 * 0xc;
              puVar11 = (uint *)(lVar4 + lVar10);
              bVar2 = (byte)puVar11[1];
              if ((bVar2 & 2) == 0) {
                *puVar11 = uVar15;
                puVar11[2] = uVar7;
                puVar11[1] = uVar16 * 4 + 3;
                *(uint *)(param_2 + 0x18) = uVar8 + 1;
                *(int *)(param_2 + 0x14) = iVar18 + 1;
              }
              else {
                uVar14 = 0;
                uVar17 = 0xffffffff;
                do {
                  if (uVar15 == *puVar11) {
                    if (uVar17 == 0xffffffff) goto LAB_00106796;
                    goto LAB_0010678b;
                  }
                  if ((uVar17 == 0xffffffff) && ((bVar2 & 1) == 0)) {
                    uVar17 = (uint)uVar13;
                  }
                  uVar14 = uVar14 + 1;
                  uVar13 = (ulong)((uint)uVar13 + uVar14 & *(uint *)(param_2 + 0x1c));
                  lVar10 = uVar13 * 0xc;
                  puVar11 = (uint *)(lVar4 + lVar10);
                  bVar2 = (byte)puVar11[1];
                } while ((bVar2 & 2) != 0);
                if (uVar17 == 0xffffffff) {
LAB_00106825:
                  uVar8 = uVar8 + 1;
                }
                else {
LAB_0010678b:
                  lVar10 = (ulong)uVar17 * 0xc;
LAB_00106796:
                  puVar11 = (uint *)(lVar10 + lVar4);
                  if (((byte)puVar11[1] & 2) == 0) goto LAB_00106825;
                  iVar18 = iVar18 - ((byte)puVar11[1] & 1);
                }
                *puVar11 = uVar15;
                puVar11[2] = uVar7;
                puVar11[1] = uVar16 * 4 + 3;
                *(uint *)(param_2 + 0x18) = uVar8;
                *(int *)(param_2 + 0x14) = iVar18 + 1;
                if ((*(ushort *)(param_2 + 0x12) < uVar14) &&
                   (*(uint *)(param_2 + 0x1c) < uVar8 << 3)) {
                  hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                             *(uint *)(param_2 + 0x1c) - 8);
                }
              }
            }
LAB_001067d1:
            uVar15 = uVar15 + 1;
            uVar16 = uVar16 + 0x9e3779b1;
          } while (uVar15 <= uVar5);
        }
      }
LAB_001067ed:
      local_64 = local_64 + 1;
      pCVar21 = pCVar21 + 0xc;
    } while (local_64 <
             (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
  }
  return;
}



/* OT::CmapSubtableLongSegmented<OT::CmapSubtableFormat13>::collect_mapping(hb_set_t*, hb_map_t*,
   unsigned int) const */

void __thiscall
OT::CmapSubtableLongSegmented<OT::CmapSubtableFormat13>::collect_mapping
          (CmapSubtableLongSegmented<OT::CmapSubtableFormat13> *this,hb_set_t *param_1,
          hb_map_t *param_2,uint param_3)

{
  hb_bit_set_t *this_00;
  undefined4 *__s;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  CmapSubtableLongSegmented<OT::CmapSubtableFormat13> *pCVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint local_70;
  
  uVar2 = *(uint *)(this + 0xc);
  local_70 = 0;
  if (uVar2 != 0) {
    pCVar18 = this + 0x10;
    uVar13 = 0;
    do {
      uVar21 = *(uint *)(pCVar18 + 4);
      uVar8 = *(uint *)pCVar18;
      uVar7 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      uVar21 = 0x10ffff;
      if (uVar7 < 0x110000) {
        uVar21 = uVar7;
      }
      uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8;
      uVar15 = uVar7 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      if ((uVar15 <= uVar21) && (uVar13 <= uVar15)) {
        uVar3 = *(uint *)(pCVar18 + 8);
        uVar20 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        uVar13 = uVar21;
        if ((uVar20 < param_3) && (uVar3 != 0)) {
          uVar3 = (param_3 + uVar15) - uVar20;
          if ((uVar21 - uVar15) + uVar20 < param_3) {
            uVar3 = uVar21;
          }
          hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                    ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                     (uVar3 - uVar15) + 1 + *(int *)(param_2 + 0x14));
          if (param_1[0x40] == (hb_set_t)0x0) {
            if (((param_1[0x10] == (hb_set_t)0x0) || (uVar3 < uVar15 || uVar8 == 0xffffffff)) ||
               (uVar3 == 0xffffffff)) goto LAB_00106e4d;
            this_00 = (hb_bit_set_t *)(param_1 + 0x10);
            uVar21 = uVar3 >> 9;
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            bVar12 = (byte)(uVar8 >> 0x18);
            if (uVar15 >> 9 == uVar21) {
              puVar9 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar15,true);
              if (puVar9 != (undefined4 *)0x0) {
                uVar14 = (ulong)((uVar7 & 0x1c0) >> 6);
                uVar19 = (ulong)(uVar3 >> 6 & 7);
                puVar1 = puVar9 + uVar19 * 2 + 2;
                lVar4 = (1L << ((byte)uVar3 & 0x3f)) * 2;
                lVar10 = 1L << (bVar12 & 0x3f);
                if (puVar9 + uVar14 * 2 + 2 == puVar1) {
                  *(ulong *)(puVar9 + uVar14 * 2 + 2) =
                       lVar4 - lVar10 | *(ulong *)(puVar9 + uVar14 * 2 + 2);
                }
                else {
                  *(ulong *)(puVar9 + uVar14 * 2 + 2) =
                       -lVar10 | *(ulong *)(puVar9 + uVar14 * 2 + 2);
                  __s = puVar9 + uVar14 * 2 + 2 + 2;
                  if ((int)puVar1 != (int)__s) {
                    memset(__s,0xff,(long)puVar1 - (long)__s & 0xffffffff);
                  }
                  *(ulong *)(puVar9 + uVar19 * 2 + 2) =
                       *(ulong *)(puVar9 + uVar19 * 2 + 2) | lVar4 - 1U;
                }
LAB_00106f14:
                *puVar9 = 0xffffffff;
              }
            }
            else {
              puVar9 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar15,true);
              if (puVar9 != (undefined4 *)0x0) {
                uVar8 = (uVar7 & 0x1c0) >> 6;
                uVar7 = (uVar15 >> 9) + 1;
                puVar1 = puVar9 + (ulong)(uVar8 + 1) * 2;
                *(ulong *)(puVar9 + (ulong)uVar8 * 2 + 2) =
                     -(1L << (bVar12 & 0x3f)) | *(ulong *)(puVar9 + (ulong)uVar8 * 2 + 2);
                if (puVar1 != puVar9 + 0x10) {
                  iVar5 = (int)(puVar1 + 2);
                  iVar17 = (int)(puVar9 + 0x10);
                  if (iVar17 != iVar5) {
                    memset(puVar1 + 2,0xff,(ulong)(uint)(iVar17 - iVar5));
                  }
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                }
                *puVar9 = 0xffffffff;
                uVar8 = uVar7 * 0x200;
                if (uVar7 < uVar21) {
                  do {
                    puVar9 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar8,true);
                    if (puVar9 == (undefined4 *)0x0) goto LAB_00106c97;
                    uVar8 = uVar8 + 0x200;
                    *puVar9 = 0x200;
                    puVar9[2] = 0xffffffff;
                    puVar9[3] = 0xffffffff;
                    puVar9[4] = 0xffffffff;
                    puVar9[5] = 0xffffffff;
                    puVar9[6] = 0xffffffff;
                    puVar9[7] = 0xffffffff;
                    puVar9[8] = 0xffffffff;
                    puVar9[9] = 0xffffffff;
                    puVar9[10] = 0xffffffff;
                    puVar9[0xb] = 0xffffffff;
                    puVar9[0xc] = 0xffffffff;
                    puVar9[0xd] = 0xffffffff;
                    puVar9[0xe] = 0xffffffff;
                    puVar9[0xf] = 0xffffffff;
                    puVar9[0x10] = 0xffffffff;
                    puVar9[0x11] = 0xffffffff;
                  } while (uVar8 != uVar21 * 0x200);
                }
                puVar9 = (undefined4 *)hb_bit_set_t::page_for(this_00,uVar3,true);
                if (puVar9 != (undefined4 *)0x0) {
                  uVar19 = (ulong)(uVar3 >> 6 & 7);
                  uVar14 = (1L << ((byte)uVar3 & 0x3f)) * 2 - 1;
                  if (uVar19 == 0) {
                    *(ulong *)(puVar9 + 2) = *(ulong *)(puVar9 + 2) | uVar14;
                  }
                  else {
                    *(undefined8 *)(puVar9 + 2) = 0xffffffffffffffff;
                    if (uVar19 != 1) {
                      memset(puVar9 + 4,0xff,uVar19 * 8 - 8 & 0xffffffff);
                    }
                    *(ulong *)(puVar9 + uVar19 * 2 + 2) =
                         *(ulong *)(puVar9 + uVar19 * 2 + 2) | uVar14;
                  }
                  goto LAB_00106f14;
                }
              }
            }
          }
          else {
            hb_bit_set_t::del_range((hb_bit_set_t *)(param_1 + 0x10),uVar15,uVar3);
LAB_00106e4d:
            if (uVar3 < uVar15) goto LAB_00106d9d;
          }
LAB_00106c97:
          uVar21 = uVar15 * -0x61c8864f;
          do {
            if (param_2[0x10] != (hb_map_t)0x0) {
              uVar8 = *(uint *)(param_2 + 0x18);
              if (*(uint *)(param_2 + 0x1c) <= (uVar8 >> 1) + uVar8) {
                cVar6 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                                  ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,0);
                if (cVar6 == '\0') goto LAB_00106d83;
                uVar8 = *(uint *)(param_2 + 0x18);
              }
              lVar4 = *(long *)(param_2 + 0x28);
              iVar17 = *(int *)(param_2 + 0x14);
              uVar14 = (ulong)(uVar21 & 0x3fffffff) % (ulong)*(uint *)(param_2 + 0x20);
              lVar10 = uVar14 * 0xc;
              puVar11 = (uint *)(lVar4 + lVar10);
              bVar12 = (byte)puVar11[1];
              if ((bVar12 & 2) == 0) {
                *puVar11 = uVar15;
                puVar11[2] = uVar20;
                puVar11[1] = uVar21 * 4 + 3;
                *(uint *)(param_2 + 0x18) = uVar8 + 1;
                *(int *)(param_2 + 0x14) = iVar17 + 1;
              }
              else {
                uVar16 = 0;
                uVar7 = 0xffffffff;
                do {
                  if (uVar15 == *puVar11) {
                    if (uVar7 == 0xffffffff) goto LAB_00106d49;
                    goto LAB_00106d3e;
                  }
                  if (((bVar12 & 1) == 0) && (uVar7 == 0xffffffff)) {
                    uVar7 = (uint)uVar14;
                  }
                  uVar16 = uVar16 + 1;
                  uVar14 = (ulong)((uint)uVar14 + uVar16 & *(uint *)(param_2 + 0x1c));
                  lVar10 = uVar14 * 0xc;
                  puVar11 = (uint *)(lVar4 + lVar10);
                  bVar12 = (byte)puVar11[1];
                } while ((bVar12 & 2) != 0);
                if (uVar7 == 0xffffffff) {
LAB_00106dd5:
                  uVar8 = uVar8 + 1;
                }
                else {
LAB_00106d3e:
                  lVar10 = (ulong)uVar7 * 0xc;
LAB_00106d49:
                  puVar11 = (uint *)(lVar10 + lVar4);
                  if (((byte)puVar11[1] & 2) == 0) goto LAB_00106dd5;
                  iVar17 = iVar17 - ((byte)puVar11[1] & 1);
                }
                *puVar11 = uVar15;
                puVar11[2] = uVar20;
                puVar11[1] = uVar21 * 4 + 3;
                *(uint *)(param_2 + 0x18) = uVar8;
                *(int *)(param_2 + 0x14) = iVar17 + 1;
                if ((*(ushort *)(param_2 + 0x12) < uVar16) &&
                   (*(uint *)(param_2 + 0x1c) < uVar8 << 3)) {
                  hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                             *(uint *)(param_2 + 0x1c) - 8);
                }
              }
            }
LAB_00106d83:
            uVar15 = uVar15 + 1;
            uVar21 = uVar21 + 0x9e3779b1;
          } while (uVar15 <= uVar3);
        }
      }
LAB_00106d9d:
      local_70 = local_70 + 1;
      pCVar18 = pCVar18 + 0xc;
    } while (local_70 <
             (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::CmapSubtable::collect_mapping(hb_set_t*, hb_map_t*, unsigned int) const */

void __thiscall
OT::CmapSubtable::collect_mapping
          (CmapSubtable *this,hb_set_t *param_1,hb_map_t *param_2,uint param_3)

{
  CmapSubtable CVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  CmapSubtable *local_78;
  CmapSubtable *local_70;
  CmapSubtable *local_68;
  CmapSubtable *local_60;
  CmapSubtable *local_58;
  uint local_50;
  uint local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    uVar18 = 0;
    uVar15 = 0;
    do {
      CVar1 = this[uVar15 + 6];
      if (CVar1 != (CmapSubtable)0x0) {
        uVar9 = (uint)uVar15;
        if (param_1[0x40] == (hb_set_t)0x0) {
          if (param_1[0x10] != (hb_set_t)0x0) {
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            puVar6 = (undefined4 *)
                     hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar9,true);
            if (puVar6 != (undefined4 *)0x0) {
              *(ulong *)(puVar6 + (uVar15 >> 6 & 0x3ffffff) * 2 + 2) =
                   *(ulong *)(puVar6 + (uVar15 >> 6 & 0x3ffffff) * 2 + 2) |
                   1L << ((byte)uVar15 & 0x3f);
              *puVar6 = 0xffffffff;
            }
          }
        }
        else if ((param_1[0x10] != (hb_set_t)0x0) &&
                (puVar6 = (undefined4 *)
                          hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar9,false),
                puVar6 != (undefined4 *)0x0)) {
          *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
          bVar2 = (byte)uVar15 & 0x3f;
          *(ulong *)(puVar6 + (uVar15 >> 6 & 0x3ffffff) * 2 + 2) =
               *(ulong *)(puVar6 + (uVar15 >> 6 & 0x3ffffff) * 2 + 2) &
               (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
          *puVar6 = 0xffffffff;
        }
        if (param_2[0x10] != (hb_map_t)0x0) {
          uVar20 = *(uint *)(param_2 + 0x18);
          if (*(uint *)(param_2 + 0x1c) <= (uVar20 >> 1) + uVar20) {
            cVar3 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                              ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,0);
            if (cVar3 == '\0') goto LAB_00107130;
            uVar20 = *(uint *)(param_2 + 0x18);
          }
          lVar16 = *(long *)(param_2 + 0x28);
          iVar14 = *(int *)(param_2 + 0x14);
          uVar17 = (ulong)(uVar18 & 0x3fffffff) % (ulong)*(uint *)(param_2 + 0x20);
          lVar8 = uVar17 * 0xc;
          puVar5 = (uint *)(lVar16 + lVar8);
          bVar2 = (byte)puVar5[1];
          if ((bVar2 & 2) == 0) {
            *puVar5 = uVar9;
            puVar5[2] = (uint)(byte)CVar1;
            puVar5[1] = uVar18 * 4 + 3;
            *(uint *)(param_2 + 0x18) = uVar20 + 1;
            *(int *)(param_2 + 0x14) = iVar14 + 1;
          }
          else {
            uVar12 = 0;
            uVar13 = 0xffffffff;
            do {
              if (*puVar5 == uVar9) {
                if (uVar13 != 0xffffffff) goto LAB_0010724b;
                goto LAB_00107255;
              }
              if ((uVar13 == 0xffffffff) && ((bVar2 & 1) == 0)) {
                uVar13 = (uint)uVar17;
              }
              uVar12 = uVar12 + 1;
              uVar17 = (ulong)((uint)uVar17 + uVar12 & *(uint *)(param_2 + 0x1c));
              lVar8 = uVar17 * 0xc;
              puVar5 = (uint *)(lVar16 + lVar8);
              bVar2 = (byte)puVar5[1];
            } while ((bVar2 & 2) != 0);
            if (uVar13 == 0xffffffff) {
LAB_00107724:
              uVar20 = uVar20 + 1;
            }
            else {
LAB_0010724b:
              lVar8 = (ulong)uVar13 * 0xc;
LAB_00107255:
              puVar5 = (uint *)(lVar8 + lVar16);
              if (((byte)puVar5[1] & 2) == 0) goto LAB_00107724;
              iVar14 = iVar14 - ((byte)puVar5[1] & 1);
            }
            *puVar5 = uVar9;
            puVar5[2] = (uint)(byte)CVar1;
            puVar5[1] = uVar18 * 4 + 3;
            *(uint *)(param_2 + 0x18) = uVar20;
            *(int *)(param_2 + 0x14) = iVar14 + 1;
            if ((*(ushort *)(param_2 + 0x12) < uVar12) && (*(uint *)(param_2 + 0x1c) < uVar20 << 3))
            {
              hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                        ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                         *(uint *)(param_2 + 0x1c) - 8);
            }
          }
        }
      }
LAB_00107130:
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + 0x9e3779b1;
    } while (uVar15 != 0x100);
    break;
  case 4:
    local_78 = this + 0xe;
    local_50 = (uint)((ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) >> 1);
    lVar16 = (ulong)(local_50 + 1) * 2;
    local_70 = local_78 + lVar16;
    lVar16 = lVar16 + -2;
    local_68 = local_70 + lVar16;
    local_60 = local_68 + lVar16;
    local_58 = local_60 + lVar16;
    local_4c = ((ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) - 0x10) +
               local_50 * -8 >> 1;
    CmapSubtableFormat4::accelerator_t::collect_mapping((accelerator_t *)&local_78,param_1,param_2);
    break;
  case 6:
    uVar4 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
    uVar19 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
    uVar15 = (ulong)uVar19;
    if (uVar4 != 0) {
      uVar17 = 0;
      uVar18 = (uint)uVar19 * -0x61c8864f;
      if (uVar4 == 0) goto LAB_001076ce;
LAB_00107530:
      if (*(short *)(this + uVar17 * 2 + 10) == 0) goto LAB_001076a0;
      uVar19 = __hb_NullPool;
      if ((uint)uVar17 < (uint)(ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8)) {
        uVar19 = *(ushort *)(this + uVar17 * 2 + 10);
      }
      do {
        uVar9 = (uint)uVar15;
        if (param_1[0x40] == (hb_set_t)0x0) {
          if (param_1[0x10] != (hb_set_t)0x0) {
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            puVar6 = (undefined4 *)
                     hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar9,true);
            if (puVar6 != (undefined4 *)0x0) {
              *(ulong *)(puVar6 + (ulong)((uint)(uVar15 >> 6) & 7) * 2 + 2) =
                   *(ulong *)(puVar6 + (ulong)((uint)(uVar15 >> 6) & 7) * 2 + 2) |
                   1L << ((byte)uVar15 & 0x3f);
              *puVar6 = 0xffffffff;
            }
          }
        }
        else if ((param_1[0x10] != (hb_set_t)0x0) &&
                (puVar6 = (undefined4 *)
                          hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar9,false),
                puVar6 != (undefined4 *)0x0)) {
          *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
          bVar2 = (byte)uVar15 & 0x3f;
          *(ulong *)(puVar6 + (ulong)((uint)(uVar15 >> 6) & 7) * 2 + 2) =
               *(ulong *)(puVar6 + (ulong)((uint)(uVar15 >> 6) & 7) * 2 + 2) &
               (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
          *puVar6 = 0xffffffff;
        }
        if (param_2[0x10] != (hb_map_t)0x0) {
          uVar20 = *(uint *)(param_2 + 0x18);
          if (*(uint *)(param_2 + 0x1c) <= (uVar20 >> 1) + uVar20) {
            cVar3 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                              ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,0);
            if (cVar3 == '\0') goto LAB_001076a0;
            uVar20 = *(uint *)(param_2 + 0x18);
          }
          lVar16 = *(long *)(param_2 + 0x28);
          iVar14 = *(int *)(param_2 + 0x14);
          uVar10 = (ulong)(uVar18 & 0x3fffffff) % (ulong)*(uint *)(param_2 + 0x20);
          lVar8 = uVar10 * 0xc;
          puVar5 = (uint *)(lVar16 + lVar8);
          bVar2 = (byte)puVar5[1];
          if ((bVar2 & 2) == 0) {
            *puVar5 = uVar9;
            puVar5[2] = (uint)(ushort)(uVar19 << 8 | uVar19 >> 8);
            puVar5[1] = uVar18 * 4 + 3;
            *(uint *)(param_2 + 0x18) = uVar20 + 1;
            *(int *)(param_2 + 0x14) = iVar14 + 1;
          }
          else {
            uVar12 = 0;
            uVar13 = 0xffffffff;
            do {
              if (*puVar5 == uVar9) {
                if (uVar13 != 0xffffffff) goto LAB_0010764b;
                goto LAB_00107655;
              }
              if ((uVar13 == 0xffffffff) && ((bVar2 & 1) == 0)) {
                uVar13 = (uint)uVar10;
              }
              uVar12 = uVar12 + 1;
              uVar10 = (ulong)((uint)uVar10 + uVar12 & *(uint *)(param_2 + 0x1c));
              lVar8 = uVar10 * 0xc;
              puVar5 = (uint *)(lVar16 + lVar8);
              bVar2 = (byte)puVar5[1];
            } while ((bVar2 & 2) != 0);
            if (uVar13 == 0xffffffff) {
LAB_001076f1:
              uVar20 = uVar20 + 1;
            }
            else {
LAB_0010764b:
              lVar8 = (ulong)uVar13 * 0xc;
LAB_00107655:
              puVar5 = (uint *)(lVar16 + lVar8);
              if (((byte)puVar5[1] & 2) == 0) goto LAB_001076f1;
              iVar14 = iVar14 - ((byte)puVar5[1] & 1);
            }
            *puVar5 = uVar9;
            puVar5[2] = (uint)(ushort)(uVar19 << 8 | uVar19 >> 8);
            puVar5[1] = uVar18 * 4 + 3;
            *(uint *)(param_2 + 0x18) = uVar20;
            *(int *)(param_2 + 0x14) = iVar14 + 1;
            if ((*(ushort *)(param_2 + 0x12) < uVar12) && (*(uint *)(param_2 + 0x1c) < uVar20 << 3))
            {
              hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                        ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                         *(uint *)(param_2 + 0x1c) - 8);
            }
          }
        }
LAB_001076a0:
        do {
          uVar18 = uVar18 + 0x9e3779b1;
          uVar15 = (ulong)((int)uVar15 + 1);
          if (uVar4 - 1 == uVar17) goto switchD_0010702f_caseD_1;
          uVar17 = uVar17 + 1;
          if ((uint)uVar17 < (uint)(ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8)
             ) goto LAB_00107530;
LAB_001076ce:
          uVar19 = __hb_NullPool;
        } while (__hb_NullPool == 0);
      } while( true );
    }
    break;
  case 10:
    uVar18 = *(uint *)(this + 0x10);
    uVar9 = *(uint *)(this + 0xc);
    uVar20 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    if (uVar18 != 0) {
      lVar16 = 0;
      uVar18 = uVar20 * -0x61c8864f;
      if (uVar9 == 0) goto LAB_00107492;
LAB_001072f8:
      if (*(short *)(this + lVar16 * 2 + 0x14) == 0) goto LAB_00107468;
      uVar13 = *(uint *)(this + 0x10);
      uVar4 = __hb_NullPool;
      if ((uint)lVar16 <
          (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18)) {
        uVar4 = *(ushort *)(this + lVar16 * 2 + 0x14);
      }
      do {
        if (param_1[0x40] == (hb_set_t)0x0) {
          if ((uVar20 != 0xffffffff) && (param_1[0x10] == (hb_set_t)0x1)) {
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            puVar6 = (undefined4 *)
                     hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar20,true);
            if (puVar6 != (undefined4 *)0x0) {
              *(ulong *)(puVar6 + (ulong)(uVar20 >> 6 & 7) * 2 + 2) =
                   *(ulong *)(puVar6 + (ulong)(uVar20 >> 6 & 7) * 2 + 2) |
                   1L << ((byte)uVar20 & 0x3f);
              *puVar6 = 0xffffffff;
            }
          }
        }
        else if ((param_1[0x10] != (hb_set_t)0x0) &&
                (puVar6 = (undefined4 *)
                          hb_bit_set_t::page_for((hb_bit_set_t *)(param_1 + 0x10),uVar20,false),
                puVar6 != (undefined4 *)0x0)) {
          *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
          bVar2 = (byte)uVar20 & 0x3f;
          *(ulong *)(puVar6 + (ulong)(uVar20 >> 6 & 7) * 2 + 2) =
               *(ulong *)(puVar6 + (ulong)(uVar20 >> 6 & 7) * 2 + 2) &
               (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
          *puVar6 = 0xffffffff;
        }
        if (param_2[0x10] != (hb_map_t)0x0) {
          uVar13 = *(uint *)(param_2 + 0x18);
          if (*(uint *)(param_2 + 0x1c) <= (uVar13 >> 1) + uVar13) {
            cVar3 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                              ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,0);
            if (cVar3 == '\0') goto LAB_00107468;
            uVar13 = *(uint *)(param_2 + 0x18);
          }
          lVar8 = *(long *)(param_2 + 0x28);
          iVar14 = *(int *)(param_2 + 0x14);
          uVar15 = (ulong)(uVar18 & 0x3fffffff) % (ulong)*(uint *)(param_2 + 0x20);
          lVar7 = uVar15 * 0xc;
          puVar5 = (uint *)(lVar8 + lVar7);
          bVar2 = (byte)puVar5[1];
          if ((bVar2 & 2) == 0) {
            *puVar5 = uVar20;
            puVar5[2] = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
            puVar5[1] = uVar18 * 4 + 3;
            *(uint *)(param_2 + 0x18) = uVar13 + 1;
            *(int *)(param_2 + 0x14) = iVar14 + 1;
          }
          else {
            uVar11 = 0;
            uVar12 = 0xffffffff;
            do {
              if (uVar20 == *puVar5) {
                if (uVar12 != 0xffffffff) goto LAB_00107413;
                goto LAB_0010741d;
              }
              if ((uVar12 == 0xffffffff) && ((bVar2 & 1) == 0)) {
                uVar12 = (uint)uVar15;
              }
              uVar11 = uVar11 + 1;
              uVar15 = (ulong)((uint)uVar15 + uVar11 & *(uint *)(param_2 + 0x1c));
              lVar7 = uVar15 * 0xc;
              puVar5 = (uint *)(lVar8 + lVar7);
              bVar2 = (byte)puVar5[1];
            } while ((bVar2 & 2) != 0);
            if (uVar12 == 0xffffffff) {
LAB_00107709:
              uVar13 = uVar13 + 1;
            }
            else {
LAB_00107413:
              lVar7 = (ulong)uVar12 * 0xc;
LAB_0010741d:
              puVar5 = (uint *)(lVar8 + lVar7);
              if (((byte)puVar5[1] & 2) == 0) goto LAB_00107709;
              iVar14 = iVar14 - ((byte)puVar5[1] & 1);
            }
            *puVar5 = uVar20;
            puVar5[2] = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
            puVar5[1] = uVar18 * 4 + 3;
            *(uint *)(param_2 + 0x18) = uVar13;
            *(int *)(param_2 + 0x14) = iVar14 + 1;
            if ((*(ushort *)(param_2 + 0x12) < uVar11) && (*(uint *)(param_2 + 0x1c) < uVar13 << 3))
            {
              hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                        ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)param_2,
                         *(uint *)(param_2 + 0x1c) - 8);
            }
          }
        }
LAB_00107468:
        do {
          lVar16 = lVar16 + 1;
          uVar18 = uVar18 + 0x9e3779b1;
          uVar20 = uVar20 + 1;
          if (uVar9 <= (uint)lVar16) goto switchD_0010702f_caseD_1;
          uVar13 = *(uint *)(this + 0x10);
          if ((uint)lVar16 <
              (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18))
          goto LAB_001072f8;
LAB_00107492:
          uVar4 = __hb_NullPool;
        } while (__hb_NullPool == 0);
      } while( true );
    }
    break;
  case 0xc:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CmapSubtableLongSegmented<OT::CmapSubtableFormat12>::collect_mapping
                ((CmapSubtableLongSegmented<OT::CmapSubtableFormat12> *)this,param_1,param_2,param_3
                );
      return;
    }
    goto LAB_0010793f;
  case 0xd:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CmapSubtableLongSegmented<OT::CmapSubtableFormat13>::collect_mapping
                ((CmapSubtableLongSegmented<OT::CmapSubtableFormat13> *)this,param_1,param_2,param_3
                );
      return;
    }
    goto LAB_0010793f;
  }
switchD_0010702f_caseD_1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010793f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_table_lazy_loader_t<OT::OS2, 6u, true>::create(hb_face_t*) */

long hb_table_lazy_loader_t<OT::OS2,6u,true>::create(hb_face_t *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (lVar2 = (**(code **)(param_1 + 0x20))(param_1,0x4f532f32,*(undefined8 *)(param_1 + 0x28)),
     lVar2 == 0)) {
    lVar2 = hb_blob_get_empty();
  }
  lVar3 = hb_blob_reference(lVar2);
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (*(ushort **)(lVar3 + 0x10) == (ushort *)0x0) {
    hb_blob_destroy(lVar3);
    return lVar2;
  }
  if ((0x4d < uVar1) &&
     ((uVar4 = **(ushort **)(lVar3 + 0x10), uVar4 = uVar4 << 8 | uVar4 >> 8, uVar4 == 0 ||
      ((0x55 < uVar1 && ((uVar4 == 1 || ((0x5f < uVar1 && ((uVar4 < 5 || (99 < uVar1)))))))))))) {
    hb_blob_destroy(lVar3);
    hb_blob_make_immutable(lVar2);
    return lVar2;
  }
  hb_blob_destroy(lVar3);
  hb_blob_destroy(lVar2);
  lVar2 = hb_blob_get_empty();
  return lVar2;
}



/* OT::cmap::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::cmap::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  hb_face_t *phVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  cmap *pcVar7;
  short *psVar8;
  code *pcVar9;
  short *psVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined1 uVar14;
  short sVar15;
  cmap *pcVar16;
  int iVar17;
  long in_FS_OFFSET;
  bool local_8a;
  bool local_89;
  ulong local_88;
  cmap *local_80;
  cmap *pcStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  long local_58;
  int local_50;
  undefined2 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x10000;
  local_4c = 0;
  local_80 = (cmap *)0x0;
  pcStack_78 = (cmap *)0x0;
  iVar17 = *(int *)(param_1 + 0x18);
  if (iVar17 == -1) {
    iVar17 = hb_face_t::load_num_glyphs();
  }
  local_4c = CONCAT11(local_4c._1_1_,1);
  local_50 = iVar17;
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (puVar5 = (undefined *)
               (**(code **)(param_1 + 0x20))(param_1,0x636d6170,*(undefined8 *)(param_1 + 0x28)),
     puVar5 == (undefined *)0x0)) {
    puVar5 = (undefined *)hb_blob_get_empty();
  }
  lVar6 = hb_blob_reference(puVar5);
  uVar14 = 0;
  local_58 = lVar6;
  do {
    local_70._0_4_ = *(uint *)(lVar6 + 0x18);
    pcVar7 = *(cmap **)(lVar6 + 0x10);
    local_60 = CONCAT71(local_60._1_7_,uVar14);
    pcStack_78 = pcVar7 + (uint)local_70;
    local_70._4_4_ = (uint)local_70 * 0x40;
    if ((uint)local_70 >> 0x1a == 0) {
      if (0x3fffffff < local_70._4_4_) {
        local_70._4_4_ = 0x3fffffff;
      }
      if (local_70._4_4_ < 0x4000) {
        local_70._4_4_ = 0x4000;
      }
    }
    else {
      local_70._4_4_ = 0x3fffffff;
    }
    local_60 = local_60 & 0xffffffff;
    local_88 = local_88 & 0xffffffff00000000;
    local_68 = local_68 & 0xffffffff;
    local_80 = pcVar7;
    if (pcVar7 == (cmap *)0x0) {
      hb_blob_destroy(lVar6);
      goto LAB_00107bfa;
    }
    cVar2 = sanitize(pcVar7,(hb_sanitize_context_t *)&local_88);
    lVar6 = local_58;
    if (cVar2 != '\0') {
      if (local_60._4_4_ == 0) {
        hb_blob_destroy(local_58);
      }
      else {
        local_60 = local_60 & 0xffffffff;
        cVar2 = sanitize(pcVar7,(hb_sanitize_context_t *)&local_88);
        if (local_60._4_4_ != 0) {
          hb_blob_destroy(local_58);
          goto LAB_00107dc8;
        }
        hb_blob_destroy(local_58);
        local_58 = 0;
        local_70._0_4_ = 0;
        local_80 = (cmap *)0x0;
        pcStack_78 = (cmap *)0x0;
        if (cVar2 == '\0') goto LAB_00107dc8;
      }
      hb_blob_make_immutable(puVar5);
      goto LAB_00107bfa;
    }
    if ((local_60._4_4_ == 0) || ((char)local_60 != '\0')) break;
    local_80 = (cmap *)hb_blob_get_data_writable(puVar5,0);
    pcStack_78 = local_80 + *(uint *)(puVar5 + 0x18);
    uVar14 = 1;
  } while (local_80 != (cmap *)0x0);
  hb_blob_destroy(lVar6);
LAB_00107dc8:
  hb_blob_destroy(puVar5);
  puVar5 = (undefined *)hb_blob_get_empty();
LAB_00107bfa:
  *(undefined **)(this + 0x50) = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  pcVar7 = (cmap *)&_hb_NullPool;
  if (3 < *(uint *)(puVar5 + 0x18)) {
    pcVar7 = *(cmap **)(puVar5 + 0x10);
  }
  psVar8 = (short *)find_best_subtable(pcVar7,&local_8a,&local_89,(bool *)&local_88);
  *(undefined **)(this + 8) = &_hb_NullPool;
  pcVar16 = (cmap *)&_hb_NullPool;
  *(short **)this = psVar8;
  uVar3 = *(ushort *)(pcVar7 + 2) << 8 | *(ushort *)(pcVar7 + 2) >> 8;
  iVar17 = uVar3 - 1;
  if (uVar3 != 0) {
    iVar12 = 0;
    do {
      while( true ) {
        uVar4 = (uint)(iVar12 + iVar17) >> 1;
        pcVar16 = pcVar7 + (ulong)uVar4 * 8 + 4;
        if ((*(short *)pcVar16 != 0) ||
           (uVar3 = *(ushort *)(pcVar16 + 2), 5 < (ushort)(uVar3 << 8 | uVar3 >> 8))) break;
        if (uVar3 == 0x500) goto LAB_00107c9a;
        iVar12 = uVar4 + 1;
        if (iVar17 < iVar12) goto LAB_00107d43;
      }
      iVar17 = uVar4 - 1;
    } while (iVar12 <= iVar17);
LAB_00107d43:
    pcVar16 = (cmap *)&_hb_NullPool;
  }
LAB_00107c9a:
  uVar4 = *(uint *)(pcVar16 + 4);
  if ((uVar4 != 0) &&
     (*(short *)(pcVar7 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18)) == 0xe00)) {
    *(cmap **)(this + 8) =
         pcVar7 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  }
  if (psVar8 == (short *)0x0) {
    psVar8 = (short *)&_hb_NullPool;
  }
  *(short **)(this + 0x18) = psVar8;
  if (local_8a == false) {
    pcVar9 = get_glyph_from_macroman<OT::CmapSubtable>;
    if ((local_88._0_1_ != (hb_sanitize_context_t)0x0) ||
       (pcVar9 = get_glyph_from_ascii<OT::CmapSubtable>, local_89 != false)) goto LAB_00107d0e;
    if (*psVar8 == 0x400) {
      uVar3 = psVar8[3];
      psVar10 = psVar8 + 7;
      *(short **)(this + 0x20) = psVar10;
      uVar4 = (uint)((ushort)(uVar3 << 8 | uVar3 >> 8) >> 1);
      uVar13 = (ulong)(uVar4 + 1);
      *(uint *)(this + 0x48) = uVar4;
      psVar10 = psVar10 + uVar13;
      *(short **)(this + 0x28) = psVar10;
      psVar10 = psVar10 + (uVar13 - 1);
      *(short **)(this + 0x30) = psVar10;
      *(short **)(this + 0x38) = psVar10 + (uVar13 - 1);
      *(short **)(this + 0x40) = psVar10 + (uVar13 - 1) + (uVar13 - 1);
      *(uint *)(this + 0x4c) =
           ((ushort)(psVar8[1] << 8 | (ushort)psVar8[1] >> 8) - 0x10) + uVar4 * -8 >> 1;
      *(accelerator_t **)(this + 0x18) = this + 0x20;
      pcVar9 = CmapSubtableFormat4::accelerator_t::get_glyph_func;
      goto LAB_00107d0e;
    }
    pcVar9 = get_glyph_from<OT::CmapSubtableFormat12>;
    if (*psVar8 == 0xc00) goto LAB_00107d0e;
  }
  else {
    phVar1 = param_1 + 0xa0;
LAB_00107e27:
    lVar6 = *(long *)phVar1;
    if (lVar6 == 0) {
      if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
        lVar6 = hb_blob_get_empty();
      }
      else {
        lVar6 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(param_1 + 0x70));
        if (lVar6 == 0) {
          lVar6 = hb_blob_get_empty();
          LOCK();
          lVar11 = *(long *)phVar1;
          if (lVar11 == 0) {
            *(long *)phVar1 = lVar6;
          }
          UNLOCK();
          if (lVar11 != 0) goto code_r0x00107f70;
        }
        else {
          LOCK();
          lVar11 = *(long *)phVar1;
          if (lVar11 == 0) {
            *(long *)phVar1 = lVar6;
          }
          UNLOCK();
          if (lVar11 != 0) goto LAB_00107f2d;
        }
      }
    }
    psVar8 = (short *)&_hb_NullPool;
    if (0x4d < *(uint *)(lVar6 + 0x18)) {
      psVar8 = *(short **)(lVar6 + 0x10);
    }
    pcVar9 = get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>;
    if (*psVar8 != 0) goto LAB_00107d0e;
    pcVar9 = get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_simp_map(unsigned_int))>;
    sVar15 = psVar8[0x1f] << 8;
    if (((sVar15 == -0x4e00) ||
        (pcVar9 = get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_trad_map(unsigned_int))>,
        sVar15 == -0x4d00)) ||
       (pcVar9 = get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>, sVar15 == 0))
    goto LAB_00107d0e;
  }
  pcVar9 = get_glyph_from<OT::CmapSubtable>;
LAB_00107d0e:
  *(code **)(this + 0x10) = pcVar9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00107f70:
  if (lVar6 != 0) {
LAB_00107f2d:
    lVar11 = hb_blob_get_empty();
    if (lVar6 != lVar11) {
      hb_blob_destroy(lVar6);
    }
  }
  goto LAB_00107e27;
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::cmap::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::cmap::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


