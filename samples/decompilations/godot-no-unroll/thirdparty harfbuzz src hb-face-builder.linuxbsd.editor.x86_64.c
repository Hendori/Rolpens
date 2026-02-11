
/* compare_entries(void const*, void const*) */

uint compare_entries(void *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *(uint *)((long)param_1 + 0x10) < *(uint *)((long)param_2 + 0x10);
  if ((*(uint *)((long)param_1 + 0x10) == *(uint *)((long)param_2 + 0x10)) &&
     (uVar2 = *(uint *)(*(long *)((long)param_2 + 8) + 0x18),
     uVar1 = *(uint *)(*(long *)((long)param_1 + 8) + 0x18), bVar3 = uVar1 < uVar2, uVar1 == uVar2))
  {
                    /* WARNING: Load size is inaccurate */
    uVar2 = 0xffffffff;
                    /* WARNING: Load size is inaccurate */
    if (*param_2 <= *param_1) {
      uVar2 = (uint)(*param_1 != *param_2);
    }
    return uVar2;
  }
  return -(uint)bVar3 | 1;
}



/* fasthash64(void const*, unsigned long, unsigned long) [clone .constprop.0] */

ulong fasthash64(void *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  puVar3 = (ulong *)((param_2 & 0xfffffffffffffff8) + (long)param_1);
  uVar1 = param_2 * -0x77fcaa0de192e69b ^ 0xf437ffe6;
  if (((ulong)param_1 & 7) == 0) {
    if ((ulong *)param_1 != puVar3) {
      do {
                    /* WARNING: Load size is inaccurate */
        uVar2 = *param_1;
        param_1 = (void *)((long)param_1 + 8);
        uVar2 = (uVar2 >> 0x17 ^ uVar2) * 0x2127599bf4325c37;
        uVar1 = (uVar2 ^ uVar2 >> 0x2f ^ uVar1) * -0x77fcaa0de192e69b;
      } while (puVar3 != (ulong *)param_1);
    }
  }
  else if ((ulong *)param_1 != puVar3) {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar2 = *param_1;
      param_1 = (void *)((long)param_1 + 8);
      uVar2 = (uVar2 >> 0x17 ^ uVar2) * 0x2127599bf4325c37;
      uVar1 = (uVar2 ^ uVar2 >> 0x2f ^ uVar1) * -0x77fcaa0de192e69b;
    } while (puVar3 != (ulong *)param_1);
  }
  switch((uint)param_2 & 7) {
  case 0:
    goto switchD_001000e0_caseD_0;
  case 1:
    uVar2 = 0;
    goto LAB_00100121;
  case 2:
    uVar2 = 0;
    goto LAB_00100116;
  case 3:
    uVar2 = 0;
    goto LAB_0010010b;
  case 4:
    uVar2 = 0;
    goto LAB_00100100;
  case 5:
    uVar2 = 0;
    goto LAB_001000f5;
  case 6:
    uVar2 = 0;
    break;
  case 7:
    uVar2 = (ulong)*(byte *)((long)puVar3 + 6) << 0x30;
  }
  uVar2 = (ulong)*(byte *)((long)puVar3 + 5) << 0x28 ^ uVar2;
LAB_001000f5:
  uVar2 = (ulong)*(byte *)((long)puVar3 + 4) << 0x20 ^ uVar2;
LAB_00100100:
  uVar2 = (ulong)*(byte *)((long)puVar3 + 3) << 0x18 ^ uVar2;
LAB_0010010b:
  uVar2 = (ulong)*(byte *)((long)puVar3 + 2) << 0x10 ^ uVar2;
LAB_00100116:
  uVar2 = (ulong)*(byte *)((long)puVar3 + 1) << 8 ^ uVar2;
LAB_00100121:
  uVar2 = (uVar2 >> 0x17 ^ (byte)*puVar3 ^ uVar2) * 0x2127599bf4325c37;
  uVar1 = (uVar2 ^ uVar1 ^ uVar2 >> 0x2f) * -0x77fcaa0de192e69b;
switchD_001000e0_caseD_0:
  uVar1 = (uVar1 >> 0x17 ^ uVar1) * 0x2127599bf4325c37;
  return uVar1 >> 0x2f ^ uVar1;
}



/* void hb_object_fini<hb_hashmap_t<unsigned int, face_table_info_t, false> >(hb_hashmap_t<unsigned
   int, face_table_info_t, false>*) */

void hb_object_fini<hb_hashmap_t<unsigned_int,face_table_info_t,false>>(hb_hashmap_t *param_1)

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
          goto LAB_001002d3;
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
LAB_001002d3:
  pthread_mutex_destroy(__mutex);
  free(__mutex);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* void sort_r_simple<>(void*, unsigned long, unsigned long, int (*)(void const*, void const*)) */

void sort_r_simple<>(void *param_1,ulong param_2,ulong param_3,_func_int_void_ptr_void_ptr *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_40;
  
  local_58 = (undefined1 *)((long)param_1 + param_3 * param_2);
  local_40 = (undefined1 *)param_1;
  puVar9 = (undefined1 *)param_1;
  if (param_2 < 10) {
joined_r0x001006d8:
    do {
      do {
        param_1 = (void *)((long)param_1 + param_3);
        if (local_58 <= param_1) {
          return;
        }
        puVar7 = (undefined1 *)param_1;
      } while (param_1 <= puVar9);
      do {
        puVar13 = puVar7 + -param_3;
        iVar2 = (*param_4)(puVar13,puVar7);
        if (iVar2 < 1) break;
        puVar12 = puVar13;
        puVar6 = puVar7;
        if (puVar13 < puVar7) {
          do {
            uVar1 = *puVar12;
            puVar4 = puVar12 + 1;
            *puVar12 = *puVar6;
            *puVar6 = uVar1;
            puVar12 = puVar4;
            puVar6 = puVar6 + 1;
          } while (puVar4 != puVar7);
        }
        puVar7 = puVar13;
      } while (puVar9 < puVar13);
    } while( true );
  }
LAB_00100381:
  uVar5 = (param_2 - 1) * param_3;
  puVar9 = local_40 + param_3;
  puVar7 = local_40 + (param_2 >> 1) * param_3;
  puVar6 = local_40 + uVar5;
  puVar13 = puVar6 + -param_3;
  iVar2 = (*param_4)(puVar9,puVar7);
  puVar12 = puVar7;
  if (iVar2 < 1) {
    puVar12 = puVar9;
    puVar9 = puVar7;
  }
  iVar2 = (*param_4)(puVar9,puVar13);
  if ((0 < iVar2) && (iVar2 = (*param_4)(puVar12,puVar13), puVar9 = puVar13, 0 < iVar2)) {
    puVar9 = puVar12;
  }
  if ((puVar9 != puVar6) && (puVar7 = puVar9 + param_3, puVar13 = puVar6, puVar9 < puVar7)) {
    do {
      uVar1 = *puVar9;
      puVar12 = puVar9 + 1;
      *puVar9 = *puVar13;
      *puVar13 = uVar1;
      puVar13 = puVar13 + 1;
      puVar9 = puVar12;
    } while (puVar7 != puVar12);
  }
  puVar9 = puVar6;
  puVar7 = local_40;
  puVar13 = local_40;
  local_50 = puVar6;
  if (local_40 < puVar6) {
LAB_00100433:
    do {
      iVar2 = (*param_4)(puVar13,puVar6);
      if (0 < iVar2) {
        puVar12 = puVar9;
        if (puVar13 < puVar9) {
          do {
            puVar9 = puVar12 + -param_3;
            iVar2 = (*param_4)(puVar9,puVar6);
            if (iVar2 == 0) {
              local_50 = local_50 + -param_3;
              if ((puVar9 < local_50) && (puVar4 = puVar9, puVar11 = local_50, puVar9 < puVar12)) {
                do {
                  uVar1 = *puVar4;
                  puVar3 = puVar4 + 1;
                  *puVar4 = *puVar11;
                  *puVar11 = uVar1;
                  puVar4 = puVar3;
                  puVar11 = puVar11 + 1;
                } while (puVar3 != puVar12);
              }
            }
            else if (iVar2 < 0) goto code_r0x001005ea;
            puVar12 = puVar9;
            if (puVar9 <= puVar13) break;
          } while( true );
        }
        break;
      }
      puVar12 = puVar7;
      if (((iVar2 == 0) && (puVar12 = puVar7 + param_3, puVar7 < puVar13)) &&
         (puVar4 = puVar13, puVar7 < puVar12)) {
        do {
          uVar1 = *puVar7;
          puVar11 = puVar7 + 1;
          *puVar7 = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          puVar7 = puVar11;
        } while (puVar11 != puVar12);
      }
      puVar7 = puVar12;
      puVar13 = puVar13 + param_3;
    } while (puVar13 < puVar9);
    goto LAB_0010048a;
  }
  sort_r_simple<>(local_40,uVar5 / param_3,param_3,param_4);
  param_1 = local_58;
  puVar9 = local_58;
  goto joined_r0x001006d8;
code_r0x001005ea:
  puVar12 = puVar13 + param_3;
  if ((puVar13 < puVar9) && (puVar4 = puVar9, puVar13 < puVar12)) {
    do {
      uVar1 = *puVar13;
      puVar11 = puVar13 + 1;
      *puVar13 = *puVar4;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
      puVar13 = puVar11;
    } while (puVar11 != puVar12);
  }
  puVar13 = puVar12;
  if (puVar9 <= puVar12) goto LAB_0010048a;
  goto LAB_00100433;
LAB_0010048a:
  uVar5 = (long)puVar9 - (long)puVar7;
  uVar8 = (long)local_50 - (long)puVar9;
  uVar10 = (long)local_58 - (long)local_50;
  param_1 = local_58 + -uVar8;
  if ((puVar7 != local_40) && (uVar5 != 0)) {
    puVar13 = local_40 + uVar5;
    if (uVar5 < (ulong)((long)puVar7 - (long)local_40)) {
      puVar12 = local_40;
      if (local_40 < puVar13) {
        do {
          uVar1 = *puVar12;
          puVar6 = puVar12 + 1;
          *puVar12 = *puVar7;
          *puVar7 = uVar1;
          puVar12 = puVar6;
          puVar7 = puVar7 + 1;
        } while (puVar6 != puVar13);
      }
    }
    else {
      puVar12 = local_40;
      if (local_40 < puVar7) {
        do {
          uVar1 = *puVar12;
          puVar6 = puVar12 + 1;
          *puVar12 = *puVar13;
          *puVar13 = uVar1;
          puVar13 = puVar13 + 1;
          puVar12 = puVar6;
        } while (puVar7 != puVar6);
      }
    }
  }
  if (uVar8 != 0 && uVar10 != 0) {
    puVar7 = puVar9 + uVar10;
    if (uVar10 < uVar8) {
      if (puVar9 < puVar7) {
        do {
          uVar1 = *puVar9;
          puVar13 = puVar9 + 1;
          *puVar9 = *local_50;
          *local_50 = uVar1;
          local_50 = local_50 + 1;
          puVar9 = puVar13;
        } while (puVar13 != puVar7);
      }
    }
    else if (puVar9 < local_50) {
      do {
        uVar1 = *puVar9;
        puVar13 = puVar9 + 1;
        *puVar9 = *puVar7;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar13;
      } while (puVar13 != local_50);
    }
  }
  sort_r_simple<>(local_40,uVar5 / param_3,param_3,param_4);
  param_2 = uVar8 / param_3;
  local_58 = (undefined1 *)((long)param_1 + param_2 * param_3);
  local_40 = (undefined1 *)param_1;
  puVar9 = (undefined1 *)param_1;
  if (param_2 < 10) goto joined_r0x001006d8;
  goto LAB_00100381;
}



undefined8 hb_face_builder_create(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)calloc(1,0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    *(undefined2 *)((long)puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined1 (*) [16])(puVar1 + 5) = (undefined1  [16])0x0;
    uVar2 = hb_face_create_for_tables
                      (_hb_face_builder_reference_table,puVar1,_hb_face_builder_data_destroy);
    hb_face_set_get_table_tags_func(uVar2,_hb_face_builder_get_table_tags,puVar1,0);
    return uVar2;
  }
  uVar2 = hb_face_get_empty();
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hb_face_builder_sort_tables(long param_1,int *param_2)

{
  item_t iVar1;
  int iVar2;
  item_t *piVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  item_t *piVar12;
  item_t *piVar13;
  
  if (*(code **)(param_1 + 0x30) != _hb_face_builder_data_destroy) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  piVar3 = *(item_t **)(lVar7 + 0x28);
  piVar12 = piVar3;
  if (*(int *)(lVar7 + 0x1c) - 1U < 0xfffffffe) {
    uVar10 = *(int *)(lVar7 + 0x1c) + 1;
    do {
      cVar5 = hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::is_real(piVar12);
      if (cVar5 != '\0') {
        piVar13 = piVar12 + (ulong)uVar10 * 0x18;
        break;
      }
      piVar12 = piVar12 + 0x18;
      uVar10 = uVar10 - 1;
      piVar13 = piVar12;
    } while (uVar10 != 0);
  }
  else {
    uVar10 = 0;
    piVar13 = piVar3;
  }
LAB_00100c06:
  if (piVar12 == piVar13) goto LAB_00100c41;
  do {
    uVar4 = _realloc;
    if (uVar10 == 0) {
      do {
        _realloc = __hb_CrapPool;
        __hb_CrapPool = __hb_NullPool;
        _calloc = uVar4;
        lVar7 = hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::get_value
                          ((item_t *)&_hb_CrapPool);
        *(undefined4 *)(lVar7 + 8) = 0xffffffff;
      } while( true );
    }
    while( true ) {
      lVar6 = hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::get_value(piVar12);
      *(undefined4 *)(lVar6 + 8) = 0xffffffff;
      do {
        piVar12 = piVar12 + 0x18;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_00100c06;
        cVar5 = hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::is_real(piVar12);
      } while (cVar5 == '\0');
      if (piVar12 != piVar13) break;
LAB_00100c41:
      if (uVar10 == 0) {
        iVar2 = *param_2;
        iVar11 = 0;
        goto joined_r0x00100c4e;
      }
    }
  } while( true );
joined_r0x00100c4e:
  if (iVar2 == 0) {
    return;
  }
  if (piVar3 != (item_t *)0x0) {
    uVar9 = (ulong)(iVar2 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(lVar7 + 0x20);
    piVar12 = piVar3 + uVar9 * 0x18;
    iVar1 = piVar12[4];
    if (((byte)iVar1 & 2) != 0) {
      iVar8 = 0;
      do {
        if (*(int *)piVar12 == iVar2) {
          if (((byte)iVar1 & 1) != 0) {
            *(int *)(piVar12 + 0x10) = iVar11;
            iVar11 = iVar11 + 1;
          }
          break;
        }
        iVar8 = iVar8 + 1;
        uVar9 = (ulong)((int)uVar9 + iVar8 & *(uint *)(lVar7 + 0x1c));
        piVar12 = piVar3 + uVar9 * 0x18;
        iVar1 = piVar12[4];
      } while (((byte)iVar1 & 2) != 0);
    }
  }
  iVar2 = param_2[1];
  param_2 = param_2 + 1;
  goto joined_r0x00100c4e;
}



undefined8 hb_face_builder_add_table(long param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  hb_hashmap_t<unsigned_int,face_table_info_t,false> *this;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  if (*(code **)(param_1 + 0x30) != _hb_face_builder_data_destroy) {
    return 0;
  }
  if (param_2 == -1) {
    return 0;
  }
  this = *(hb_hashmap_t<unsigned_int,face_table_info_t,false> **)(param_1 + 0x28);
  lVar3 = *(long *)(this + 0x28);
  piVar9 = (int *)&_hb_NullPool;
  if (lVar3 != 0) {
    uVar10 = (ulong)(param_2 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(this + 0x20);
    piVar6 = (int *)(lVar3 + uVar10 * 0x18);
    bVar1 = *(byte *)(piVar6 + 1);
    if ((bVar1 & 2) != 0) {
      iVar13 = 0;
      do {
        if (*piVar6 == param_2) {
          piVar9 = (int *)&_hb_NullPool;
          if ((bVar1 & 1) != 0) {
            piVar9 = piVar6 + 2;
          }
          goto LAB_00100e07;
        }
        iVar13 = iVar13 + 1;
        uVar10 = (ulong)((int)uVar10 + iVar13 & *(uint *)(this + 0x1c));
        piVar6 = (int *)(lVar3 + uVar10 * 0x18);
        bVar1 = *(byte *)(piVar6 + 1);
      } while ((bVar1 & 2) != 0);
      piVar9 = (int *)&_hb_NullPool;
    }
  }
LAB_00100e07:
  uVar4 = *(undefined8 *)piVar9;
  uVar7 = hb_blob_reference();
  if (this[0x10] == (hb_hashmap_t<unsigned_int,face_table_info_t,false>)0x0) {
LAB_00100f30:
    hb_blob_destroy(param_3);
    return 0;
  }
  uVar11 = *(uint *)(this + 0x18);
  if (*(uint *)(this + 0x1c) <= (uVar11 >> 1) + uVar11) {
    cVar5 = hb_hashmap_t<unsigned_int,face_table_info_t,false>::alloc(this,0);
    if (cVar5 == '\0') goto LAB_00100f30;
    uVar11 = *(uint *)(this + 0x18);
  }
  lVar3 = *(long *)(this + 0x28);
  iVar13 = *(int *)(this + 0x14);
  uVar10 = (ulong)(param_2 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(this + 0x20);
  lVar8 = uVar10 * 0x18;
  piVar9 = (int *)(lVar3 + lVar8);
  bVar1 = *(byte *)(piVar9 + 1);
  if ((bVar1 & 2) == 0) {
    *piVar9 = param_2;
    *(undefined8 *)(piVar9 + 2) = uVar7;
    piVar9[4] = -1;
    piVar9[1] = param_2 * 0x78dde6c4 + 3;
    *(uint *)(this + 0x18) = uVar11 + 1;
    *(int *)(this + 0x14) = iVar13 + 1;
    goto LAB_00100f00;
  }
  uVar12 = 0;
  uVar14 = 0xffffffff;
  do {
    if (*piVar9 == param_2) {
      if (uVar14 == 0xffffffff) goto LAB_00100eb9;
      goto LAB_00100eae;
    }
    if (((bVar1 & 1) == 0) && (uVar14 == 0xffffffff)) {
      uVar14 = (uint)uVar10;
    }
    uVar12 = uVar12 + 1;
    uVar10 = (ulong)((uint)uVar10 + uVar12 & *(uint *)(this + 0x1c));
    lVar8 = uVar10 * 0x18;
    piVar9 = (int *)(lVar3 + lVar8);
    bVar1 = *(byte *)(piVar9 + 1);
  } while ((bVar1 & 2) != 0);
  if (uVar14 == 0xffffffff) {
LAB_00100f5a:
    uVar11 = uVar11 + 1;
  }
  else {
LAB_00100eae:
    lVar8 = (ulong)uVar14 * 0x18;
LAB_00100eb9:
    piVar9 = (int *)(lVar3 + lVar8);
    if ((*(byte *)(piVar9 + 1) & 2) == 0) goto LAB_00100f5a;
    iVar13 = iVar13 - (*(byte *)(piVar9 + 1) & 1);
  }
  uVar2 = *(ushort *)(this + 0x12);
  *piVar9 = param_2;
  *(undefined8 *)(piVar9 + 2) = uVar7;
  piVar9[4] = -1;
  piVar9[1] = param_2 * 0x78dde6c4 + 3;
  *(uint *)(this + 0x18) = uVar11;
  *(int *)(this + 0x14) = iVar13 + 1;
  if ((uVar2 < uVar12) && (*(uint *)(this + 0x1c) < uVar11 << 3)) {
    hb_hashmap_t<unsigned_int,face_table_info_t,false>::alloc(this,*(uint *)(this + 0x1c) - 8);
  }
LAB_00100f00:
  hb_blob_destroy(uVar4);
  return 1;
}



/* hb_hashmap_t<unsigned int, face_table_info_t, false>::item_t::get_pair() const */

void hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::get_pair(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *in_RSI;
  undefined4 *in_RDI;
  
  uVar2 = *(undefined8 *)(in_RSI + 2);
  uVar1 = in_RSI[4];
  *in_RDI = *in_RSI;
  *(undefined8 *)(in_RDI + 2) = uVar2;
  in_RDI[4] = uVar1;
  return;
}



/* hb_hashmap_t<unsigned int, face_table_info_t, false>::item_t::get_value() */

item_t * __thiscall
hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::get_value(item_t *this)

{
  return this + 8;
}



/* hb_hashmap_t<unsigned int, face_table_info_t, false>::item_t::is_real() const */

byte __thiscall hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::is_real(item_t *this)

{
  return (byte)this[4] & 1;
}



/* hb_hashmap_t<unsigned int, face_table_info_t, false>::item_t::get_key() */

item_t * __thiscall
hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::get_key(item_t *this)

{
  return this;
}



/* OT::TableRecord::cmp(void const*, void const*) */

int OT::TableRecord::cmp(void *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_1;
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_2;
  iVar3 = 1;
  if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) <=
      (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)) {
    iVar3 = -(uint)(uVar1 != uVar2);
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_serialize_context_t::resolve_links() */

void __thiscall hb_serialize_context_t::resolve_links(hb_serialize_context_t *this)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  byte bVar12;
  uint *puVar13;
  long *plVar14;
  
  if (*(int *)(this + 0x2c) == 0) {
    if (*(int *)(this + 0x54) != 0) {
      plVar14 = (long *)(*(long *)(this + 0x58) + 8);
      plVar1 = plVar14 + (*(int *)(this + 0x54) - 1);
      if (plVar1 != plVar14) {
        do {
          plVar4 = (long *)*plVar14;
          puVar5 = (uint *)plVar4[3];
          puVar2 = puVar5 + (ulong)*(uint *)((long)plVar4 + 0x14) * 3;
          for (; puVar2 != puVar5; puVar5 = puVar5 + 3) {
            if (puVar5[2] < *(uint *)(this + 0x54)) {
              plVar11 = (long *)(*(long *)(this + 0x58) + (ulong)puVar5[2] * 8);
            }
            else {
              plVar11 = (long *)&_hb_CrapPool;
              __hb_CrapPool = __hb_NullPool;
            }
            puVar6 = (undefined8 *)*plVar11;
            if (puVar6 == (undefined8 *)0x0) {
              *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
              return;
            }
            bVar3 = (byte)*puVar5;
            bVar12 = bVar3 >> 4 & 3;
            if (bVar12 == 1) {
              iVar8 = (int)*puVar6 - (int)plVar4[1];
            }
            else if (bVar12 == 2) {
              iVar8 = ((int)*(undefined8 *)(this + 8) - (int)*(undefined8 *)this) +
                      ((int)*puVar6 - (int)*(undefined8 *)(this + 0x10));
            }
            else {
              iVar8 = 0;
              if (bVar12 == 0) {
                iVar8 = (int)*puVar6 - (int)*plVar4;
              }
            }
            bVar12 = bVar3 & 7;
            uVar9 = iVar8 - (*puVar5 >> 6);
            puVar13 = (uint *)((ulong)puVar5[1] + *plVar4);
            uVar7 = (ushort)uVar9;
            if ((bVar3 & 8) == 0) {
              if (bVar12 != 4) {
                if (bVar12 != 3) {
                  *(ushort *)puVar13 = uVar7 << 8 | uVar7 >> 8;
                  uVar10 = (ulong)(ushort)((uVar7 >> 8) << 8 | uVar7 & 0xff);
                  goto joined_r0x00102597;
                }
                *(char *)puVar13 = (char)(uVar9 >> 0x10);
                *(ushort *)((long)puVar13 + 1) = uVar7 << 8 | uVar7 >> 8;
                if (uVar9 < 0x1000000) goto joined_r0x001025a4;
                goto LAB_00102599;
              }
              *puVar13 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                         uVar9 * 0x1000000;
            }
            else {
              if (bVar12 == 4) {
                uVar10 = (ulong)(int)uVar9;
                *puVar13 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                           uVar9 * 0x1000000;
              }
              else {
                *(ushort *)puVar13 = uVar7 << 8 | uVar7 >> 8;
                uVar10 = (ulong)(short)((uVar7 >> 8) << 8 | uVar7 & 0xff);
              }
joined_r0x00102597:
              if (uVar10 != uVar9) {
LAB_00102599:
                *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
              }
            }
joined_r0x001025a4:
          }
          plVar14 = plVar14 + 1;
          if (plVar1 == plVar14) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_serialize_context_t::merge_virtual_links(hb_serialize_context_t::object_t const*, unsigned
   int) */

void __thiscall
hb_serialize_context_t::merge_virtual_links
          (hb_serialize_context_t *this,object_t *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  if (param_2 < *(uint *)(this + 0x54)) {
    plVar6 = (long *)(*(long *)(this + 0x58) + (ulong)param_2 * 8);
  }
  else {
    __hb_CrapPool = __hb_NullPool;
    plVar6 = (long *)&_hb_CrapPool;
  }
  lVar3 = *plVar6;
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (undefined8 *)((long)puVar9 + (ulong)*(uint *)(param_1 + 0x24) * 0xc);
  do {
    if (puVar1 == puVar9) {
      return;
    }
    uVar10 = *(uint *)(lVar3 + 0x24);
    uVar8 = (ulong)uVar10;
    uVar4 = *(uint *)(lVar3 + 0x20);
    uVar7 = uVar10 + 1;
    if ((int)uVar10 < (int)uVar4) {
LAB_0010276d:
      pvVar5 = *(void **)(lVar3 + 0x28);
LAB_00102771:
      *(uint *)(lVar3 + 0x24) = uVar7;
      puVar2 = (undefined8 *)((long)pvVar5 + uVar8 * 0xc);
      *puVar2 = *puVar9;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
    }
    else {
      if (-1 < (int)uVar4) {
        uVar10 = uVar4;
        if (uVar7 <= uVar4) goto LAB_0010276d;
        do {
          uVar10 = uVar10 + 8 + (uVar10 >> 1);
        } while (uVar10 < uVar7);
        if (0x15555555 < uVar10) {
LAB_00102812:
          *(uint *)(lVar3 + 0x20) = ~uVar4;
          goto LAB_00102817;
        }
        pvVar5 = realloc(*(void **)(lVar3 + 0x28),(ulong)uVar10 * 0xc);
        if (pvVar5 == (void *)0x0) {
          uVar4 = *(uint *)(lVar3 + 0x20);
          if (uVar4 < uVar10) goto LAB_00102812;
          uVar8 = (ulong)*(uint *)(lVar3 + 0x24);
          pvVar5 = *(void **)(lVar3 + 0x28);
          uVar7 = *(uint *)(lVar3 + 0x24) + 1;
        }
        else {
          uVar8 = (ulong)*(uint *)(lVar3 + 0x24);
          *(void **)(lVar3 + 0x28) = pvVar5;
          *(uint *)(lVar3 + 0x20) = uVar10;
          uVar7 = *(uint *)(lVar3 + 0x24) + 1;
        }
        goto LAB_00102771;
      }
LAB_00102817:
      __hb_CrapPool = (undefined4)__hb_NullPool;
      _realloc = __hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
    }
    puVar9 = (undefined8 *)((long)puVar9 + 0xc);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_hashmap_t<hb_serialize_context_t::object_t const*, unsigned int, false>::alloc(unsigned int)
    */

hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> __thiscall
hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc
          (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *this,
          uint param_1)

{
  byte bVar1;
  int iVar2;
  long *__ptr;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> hVar18;
  uint uVar19;
  size_t __size;
  short sVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  long *local_118;
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
  
  hVar18 = this[0x10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (hVar18 == (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0) {
LAB_00102cf7:
    hVar18 = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
  }
  else {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_00102c6b;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar12 = param_1 * 2 + 8;
    uVar13 = (ulong)uVar12;
    if (uVar12 == 0) {
      pvVar8 = malloc(0x10);
      if (pvVar8 == (void *)0x0) goto LAB_00102cf2;
      iVar16 = 0;
      sVar20 = 0;
      iVar9 = 0x10;
      __size = 0x10;
LAB_001028e6:
      pvVar8 = (void *)__memset_chk(pvVar8,0,iVar9,__size);
    }
    else {
      iVar9 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      uVar12 = iVar9 + 1;
      uVar13 = (ulong)uVar12;
      uVar15 = 1 << ((byte)uVar12 & 0x1f);
      __size = (ulong)uVar15 << 4;
      pvVar8 = malloc(__size);
      if (pvVar8 == (void *)0x0) {
LAB_00102cf2:
        this[0x10] = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
        goto LAB_00102cf7;
      }
      sVar20 = (short)uVar12 * 2;
      iVar16 = uVar15 - 1;
      iVar9 = 0x10 << ((byte)uVar12 & 0x1f);
      if (iVar9 != 0) goto LAB_001028e6;
    }
    uStack_c0 = _UNK_00103288;
    uStack_c8 = __LC0;
    iVar9 = *(int *)(this + 0x1c);
    *(undefined8 *)(this + 0x14) = 0;
    *(int *)(this + 0x1c) = iVar16;
    __ptr = *(long **)(this + 0x28);
    uVar12 = (iVar9 + 1) - (uint)(iVar9 == 0);
    uStack_b8 = __LC1;
    uStack_b0 = _UNK_00103298;
    uStack_a8 = __LC2;
    uStack_a0 = _UNK_001032a8;
    uStack_98 = __LC3;
    uStack_90 = _UNK_001032b8;
    uStack_88 = __LC4;
    uStack_80 = _UNK_001032c8;
    uStack_78 = __LC5;
    uStack_70 = _UNK_001032d8;
    uStack_68 = __LC6;
    uStack_60 = _UNK_001032e8;
    uStack_58 = __LC7;
    uStack_50 = _UNK_001032f8;
    if ((int)uVar13 == 0x20) {
      uVar10 = 0x7fffffff;
    }
    else {
      uVar10 = *(undefined4 *)((long)&uStack_c8 + uVar13 * 4);
    }
    *(undefined4 *)(this + 0x20) = uVar10;
    *(short *)(this + 0x12) = sVar20;
    *(void **)(this + 0x28) = pvVar8;
    if (uVar12 != 0) {
      local_118 = __ptr;
      do {
        if (((*(byte *)(local_118 + 1) & 1) != 0) &&
           (uVar15 = *(uint *)(local_118 + 1) >> 2,
           this[0x10] !=
           (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0)) {
          uVar17 = *(uint *)(this + 0x18);
          if (*(uint *)(this + 0x1c) <= (uVar17 >> 1) + uVar17) {
            cVar6 = alloc(this,0);
            if (cVar6 == '\0') goto LAB_001029d0;
            uVar17 = *(uint *)(this + 0x18);
          }
          lVar3 = *(long *)(this + 0x28);
          iVar9 = *(int *)(this + 0x14);
          uVar13 = (ulong)uVar15 % (ulong)*(uint *)(this + 0x20);
          puVar4 = (undefined8 *)*local_118;
          plVar14 = (long *)(uVar13 * 0x10 + lVar3);
          bVar1 = *(byte *)(plVar14 + 1);
          if ((bVar1 & 2) == 0) {
            *plVar14 = (long)puVar4;
            *(undefined4 *)((long)plVar14 + 0xc) = *(undefined4 *)((long)local_118 + 0xc);
            *(uint *)(plVar14 + 1) = uVar15 * 4 + 3;
            *(uint *)(this + 0x18) = uVar17 + 1;
            *(int *)(this + 0x14) = iVar9 + 1;
          }
          else {
            uVar19 = 0;
            uVar21 = 0xffffffff;
            do {
              if (uVar15 == *(uint *)(plVar14 + 1) >> 2) {
                puVar5 = (undefined8 *)*plVar14;
                uVar11 = puVar5[1] - (long)*puVar5;
                if (uVar11 == puVar4[1] - (long)*puVar4) {
                  iVar16 = *(int *)((long)puVar5 + 0x14);
                  iVar2 = *(int *)((long)puVar4 + 0x14);
                  if ((iVar16 == iVar2) &&
                     (((int)uVar11 == 0 ||
                      (iVar7 = memcmp((void *)*puVar5,(void *)*puVar4,uVar11 & 0xffffffff),
                      iVar7 == 0)))) {
                    if ((iVar2 * 0xc == iVar16 * 0xc) &&
                       (((iVar2 * 3 & 0x3fffffffU) == 0 ||
                        (iVar16 = memcmp((void *)puVar5[3],(void *)puVar4[3],
                                         (ulong)(uint)(iVar2 * 0xc)), iVar16 == 0)))) {
                      if ((int)uVar21 == -1) goto LAB_00102b90;
                      goto LAB_00102b86;
                    }
                  }
                }
              }
              if (((int)uVar21 == -1) && ((bVar1 & 1) == 0)) {
                uVar21 = uVar13;
              }
              uVar19 = uVar19 + 1;
              uVar13 = (ulong)((int)uVar13 + uVar19 & *(uint *)(this + 0x1c));
              plVar14 = (long *)(uVar13 * 0x10 + lVar3);
              bVar1 = *(byte *)(plVar14 + 1);
            } while ((bVar1 & 2) != 0);
            if ((int)uVar21 == -1) {
LAB_00102c48:
              uVar17 = uVar17 + 1;
            }
            else {
LAB_00102b86:
              plVar14 = (long *)(uVar21 * 0x10 + lVar3);
LAB_00102b90:
              if ((*(byte *)(plVar14 + 1) & 2) == 0) goto LAB_00102c48;
              iVar9 = iVar9 - (*(byte *)(plVar14 + 1) & 1);
              *(uint *)(this + 0x18) = uVar17 - 1;
              *(int *)(this + 0x14) = iVar9;
            }
            *plVar14 = (long)puVar4;
            *(undefined4 *)((long)plVar14 + 0xc) = *(undefined4 *)((long)local_118 + 0xc);
            *(uint *)(plVar14 + 1) = uVar15 * 4 + 3;
            *(int *)(this + 0x14) = iVar9 + 1;
            *(uint *)(this + 0x18) = uVar17;
            if ((*(ushort *)(this + 0x12) < uVar19) && (*(uint *)(this + 0x1c) < uVar17 * 8)) {
              alloc(this,*(uint *)(this + 0x1c) - 8);
            }
          }
        }
LAB_001029d0:
        local_118 = local_118 + 2;
      } while (__ptr + (ulong)uVar12 * 2 != local_118);
    }
    free(__ptr);
  }
LAB_00102c6b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hVar18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_hashmap_t<unsigned int, face_table_info_t, false>::alloc(unsigned int) */

hb_hashmap_t<unsigned_int,face_table_info_t,false> __thiscall
hb_hashmap_t<unsigned_int,face_table_info_t,false>::alloc
          (hb_hashmap_t<unsigned_int,face_table_info_t,false> *this,uint param_1)

{
  byte bVar1;
  int *__ptr;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  void *pvVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  hb_hashmap_t<unsigned_int,face_table_info_t,false> hVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  size_t __size;
  uint uVar18;
  int iVar19;
  short sVar20;
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
  
  hVar12 = this[0x10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (hVar12 == (hb_hashmap_t<unsigned_int,face_table_info_t,false>)0x0) {
LAB_001030ae:
    hVar12 = (hb_hashmap_t<unsigned_int,face_table_info_t,false>)0x0;
  }
  else {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_0010300d;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar16 = param_1 * 2 + 8;
    uVar11 = (ulong)uVar16;
    if (uVar16 == 0) {
      pvVar6 = malloc(0x18);
      if (pvVar6 == (void *)0x0) goto LAB_001030aa;
      iVar19 = 0;
      sVar20 = 0;
      iVar9 = 0x18;
      __size = 0x18;
LAB_00102dd9:
      pvVar6 = (void *)__memset_chk(pvVar6,0,iVar9,__size);
    }
    else {
      iVar9 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      uVar16 = iVar9 + 1;
      uVar11 = (ulong)uVar16;
      uVar18 = 1 << ((byte)uVar16 & 0x1f);
      __size = (ulong)uVar18 * 0x18;
      pvVar6 = malloc(__size);
      if (pvVar6 == (void *)0x0) {
LAB_001030aa:
        this[0x10] = (hb_hashmap_t<unsigned_int,face_table_info_t,false>)0x0;
        goto LAB_001030ae;
      }
      sVar20 = (short)uVar16 * 2;
      iVar19 = uVar18 - 1;
      iVar9 = 0x18 << ((byte)uVar16 & 0x1f);
      if (iVar9 != 0) goto LAB_00102dd9;
    }
    uStack_c0 = _UNK_00103288;
    uStack_c8 = __LC0;
    iVar9 = *(int *)(this + 0x1c);
    *(undefined8 *)(this + 0x14) = 0;
    *(int *)(this + 0x1c) = iVar19;
    __ptr = *(int **)(this + 0x28);
    uVar16 = (iVar9 + 1) - (uint)(iVar9 == 0);
    uStack_b8 = __LC1;
    uStack_b0 = _UNK_00103298;
    uStack_a8 = __LC2;
    uStack_a0 = _UNK_001032a8;
    uStack_98 = __LC3;
    uStack_90 = _UNK_001032b8;
    uStack_88 = __LC4;
    uStack_80 = _UNK_001032c8;
    uStack_78 = __LC5;
    uStack_70 = _UNK_001032d8;
    uStack_68 = __LC6;
    uStack_60 = _UNK_001032e8;
    uStack_58 = __LC7;
    uStack_50 = _UNK_001032f8;
    if ((int)uVar11 == 0x20) {
      uVar10 = 0x7fffffff;
    }
    else {
      uVar10 = *(undefined4 *)((long)&uStack_c8 + uVar11 * 4);
    }
    *(undefined4 *)(this + 0x20) = uVar10;
    *(short *)(this + 0x12) = sVar20;
    *(void **)(this + 0x28) = pvVar6;
    if (uVar16 != 0) {
      piVar17 = __ptr;
      do {
        if (((*(byte *)(piVar17 + 1) & 1) != 0) &&
           (uVar18 = (uint)piVar17[1] >> 2,
           this[0x10] != (hb_hashmap_t<unsigned_int,face_table_info_t,false>)0x0)) {
          uVar15 = *(uint *)(this + 0x18);
          if (*(uint *)(this + 0x1c) <= (uVar15 >> 1) + uVar15) {
            cVar5 = alloc(this,0);
            if (cVar5 == '\0') goto LAB_00102ea0;
            uVar15 = *(uint *)(this + 0x18);
          }
          lVar2 = *(long *)(this + 0x28);
          iVar19 = *piVar17;
          uVar11 = (ulong)uVar18 % (ulong)*(uint *)(this + 0x20);
          iVar9 = *(int *)(this + 0x14);
          lVar7 = uVar11 * 0x18;
          piVar8 = (int *)(lVar2 + lVar7);
          bVar1 = *(byte *)(piVar8 + 1);
          if ((bVar1 & 2) == 0) {
            uVar3 = *(undefined8 *)(piVar17 + 2);
            uVar4 = *(undefined8 *)(piVar17 + 4);
            *piVar8 = iVar19;
            piVar8[1] = uVar18 * 4 + 3;
            *(undefined8 *)(piVar8 + 2) = uVar3;
            *(undefined8 *)(piVar8 + 4) = uVar4;
            *(uint *)(this + 0x18) = uVar15 + 1;
            *(int *)(this + 0x14) = iVar9 + 1;
          }
          else {
            uVar13 = 0;
            uVar14 = 0xffffffff;
            do {
              if (*piVar8 == iVar19) {
                if (uVar14 == 0xffffffff) goto LAB_00102f5f;
                goto LAB_00102f54;
              }
              if (((bVar1 & 1) == 0) && (uVar14 == 0xffffffff)) {
                uVar14 = (uint)uVar11;
              }
              uVar13 = uVar13 + 1;
              uVar11 = (ulong)((uint)uVar11 + uVar13 & *(uint *)(this + 0x1c));
              lVar7 = uVar11 * 0x18;
              piVar8 = (int *)(lVar2 + lVar7);
              bVar1 = *(byte *)(piVar8 + 1);
            } while ((bVar1 & 2) != 0);
            if (uVar14 == 0xffffffff) {
LAB_0010304d:
              uVar15 = uVar15 + 1;
            }
            else {
LAB_00102f54:
              lVar7 = (ulong)uVar14 * 0x18;
LAB_00102f5f:
              piVar8 = (int *)(lVar7 + lVar2);
              if ((*(byte *)(piVar8 + 1) & 2) == 0) goto LAB_0010304d;
              iVar9 = iVar9 - (*(byte *)(piVar8 + 1) & 1);
              *(uint *)(this + 0x18) = uVar15 - 1;
              *(int *)(this + 0x14) = iVar9;
              iVar19 = *piVar17;
            }
            uVar3 = *(undefined8 *)(piVar17 + 2);
            uVar4 = *(undefined8 *)(piVar17 + 4);
            *piVar8 = iVar19;
            piVar8[1] = uVar18 * 4 + 3;
            *(undefined8 *)(piVar8 + 2) = uVar3;
            *(undefined8 *)(piVar8 + 4) = uVar4;
            *(uint *)(this + 0x18) = uVar15;
            *(int *)(this + 0x14) = iVar9 + 1;
            if ((*(ushort *)(this + 0x12) < uVar13) && (*(uint *)(this + 0x1c) < uVar15 << 3)) {
              alloc(this,*(uint *)(this + 0x1c) - 8);
            }
          }
        }
LAB_00102ea0:
        piVar17 = piVar17 + 6;
      } while (__ptr + (ulong)uVar16 * 6 != piVar17);
    }
    free(__ptr);
  }
LAB_0010300d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hVar12;
}



/* OT::ArrayOf<OT::TableRecord, OT::BinSearchHeader<OT::IntType<unsigned short, 2u> >
   >::serialize(hb_serialize_context_t*, unsigned int, bool) */

bool __thiscall
OT::ArrayOf<OT::TableRecord,OT::BinSearchHeader<OT::IntType<unsigned_short,2u>>>::serialize
          (ArrayOf<OT::TableRecord,OT::BinSearchHeader<OT::IntType<unsigned_short,2u>>> *this,
          hb_serialize_context_t *param_1,uint param_2,bool param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  void *pvVar7;
  ArrayOf<OT::TableRecord,OT::BinSearchHeader<OT::IntType<unsigned_short,2u>>> *pAVar8;
  ulong uVar9;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return false;
  }
  pAVar8 = this + 8;
  pvVar7 = *(void **)(param_1 + 8);
  uVar9 = (long)pAVar8 - (long)pvVar7;
  if ((uVar9 < 0x80000000) &&
     (pAVar8 <= *(ArrayOf<OT::TableRecord,OT::BinSearchHeader<OT::IntType<unsigned_short,2u>>> **)
                 (param_1 + 0x10))) {
    if ((int)uVar9 != 0) {
      memset(pvVar7,0,uVar9);
      pvVar7 = *(void **)(param_1 + 8);
      pAVar8 = (ArrayOf<OT::TableRecord,OT::BinSearchHeader<OT::IntType<unsigned_short,2u>>> *)
               ((long)pvVar7 + uVar9);
    }
    *(ArrayOf<OT::TableRecord,OT::BinSearchHeader<OT::IntType<unsigned_short,2u>>> **)(param_1 + 8)
         = pAVar8;
    if (pvVar7 == (void *)0x0) {
      return false;
    }
    uVar5 = (ushort)param_2;
    if (param_2 == 0) {
      uVar6 = 0;
      uVar9 = 0x1000;
      uVar3 = 0;
    }
    else {
      iVar1 = 0x1f;
      if (param_2 != 0) {
        for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar4 = 0x10 << ((byte)iVar1 & 0x1f);
      uVar6 = (ushort)iVar1 << 8 | (ushort)iVar1 >> 8;
      uVar3 = 0;
      uVar2 = (ushort)uVar4;
      uVar9 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
      if ((uVar4 & 0xffff) < param_2 << 4) {
        uVar2 = (short)(param_2 << 4) - uVar2;
        uVar3 = uVar2 * 0x100 | uVar2 >> 8;
      }
    }
    *(ulong *)this =
         ((ulong)CONCAT22(uVar3,uVar6) << 0x10 | uVar9) << 0x10 |
         (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8);
    if ((ushort)((uVar5 >> 8) << 8 | uVar5 & 0xff) != param_2) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
      return false;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return false;
    }
    pvVar7 = *(void **)(param_1 + 8);
    pAVar8 = this + (param_2 * 0x10 + 8);
    uVar9 = (long)pAVar8 - (long)pvVar7;
    if ((uVar9 < 0x80000000) &&
       (pAVar8 <= *(ArrayOf<OT::TableRecord,OT::BinSearchHeader<OT::IntType<unsigned_short,2u>>> **)
                   (param_1 + 0x10))) {
      if ((param_3) && ((int)uVar9 != 0)) {
        memset(pvVar7,0,uVar9);
        pvVar7 = *(void **)(param_1 + 8);
        *(ulong *)(param_1 + 8) = (long)pvVar7 + uVar9;
      }
      else {
        *(ArrayOf<OT::TableRecord,OT::BinSearchHeader<OT::IntType<unsigned_short,2u>>> **)
         (param_1 + 8) = pAVar8;
      }
      return pvVar7 != (void *)0x0;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 4;
  return false;
}


