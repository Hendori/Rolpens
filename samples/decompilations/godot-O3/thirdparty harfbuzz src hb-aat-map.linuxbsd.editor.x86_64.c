
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
joined_r0x00100398:
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
LAB_00100041:
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
LAB_001000f3:
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
            else if (iVar2 < 0) goto code_r0x001002aa;
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
    goto LAB_0010014a;
  }
  sort_r_simple<>(local_40,uVar5 / param_3,param_3,param_4);
  param_1 = local_58;
  puVar9 = local_58;
  goto joined_r0x00100398;
code_r0x001002aa:
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
  if (puVar9 <= puVar12) goto LAB_0010014a;
  goto LAB_001000f3;
LAB_0010014a:
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
  if (param_2 < 10) goto joined_r0x00100398;
  goto LAB_00100041;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_aat_map_builder_t::compile(hb_aat_map_t&) */

void __thiscall hb_aat_map_builder_t::compile(hb_aat_map_builder_t *this,hb_aat_map_t *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  void *pvVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  int *piVar21;
  long in_FS_OFFSET;
  undefined8 uVar22;
  uint local_60;
  undefined8 local_58;
  int *local_50;
  long local_40;
  
  uVar20 = *(uint *)(this + 0x2c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = (int *)0x0;
  if (uVar20 != 0) {
    lVar16 = 0;
    do {
      while( true ) {
        lVar14 = lVar16 * 0x18;
        puVar18 = (undefined8 *)(*(long *)(this + 0x30) + lVar14);
        if (*(int *)(puVar18 + 2) != *(int *)((long)puVar18 + 0x14)) break;
        uVar20 = *(uint *)(this + 0x2c);
        lVar16 = lVar16 + 1;
        if (uVar20 <= (uint)lVar16) goto LAB_00100582;
      }
      puVar6 = (undefined4 *)
               hb_vector_t<hb_aat_map_builder_t::feature_event_t,false>::push
                         ((hb_vector_t<hb_aat_map_builder_t::feature_event_t,false> *)&local_58);
      if ((uint)lVar16 < *(uint *)(this + 0x2c)) {
        puVar13 = (undefined *)(*(long *)(this + 0x30) + lVar14);
      }
      else {
        _free = _hb_aat_layout_compile_map;
        _hb_aat_layout_compile_map = __hb_CrapPool;
        puVar13 = &_hb_CrapPool;
        __hb_CrapPool = __hb_NullPool;
      }
      uVar2 = *(undefined4 *)(puVar13 + 0x10);
      uVar22 = *puVar18;
      uVar3 = puVar18[1];
      *(undefined1 *)(puVar6 + 1) = 1;
      *puVar6 = uVar2;
      *(undefined8 *)(puVar6 + 2) = uVar22;
      *(undefined8 *)(puVar6 + 4) = uVar3;
      puVar6 = (undefined4 *)
               hb_vector_t<hb_aat_map_builder_t::feature_event_t,false>::push
                         ((hb_vector_t<hb_aat_map_builder_t::feature_event_t,false> *)&local_58);
      uVar20 = *(uint *)(this + 0x2c);
      if ((uint)lVar16 < uVar20) {
        puVar13 = (undefined *)(lVar14 + *(long *)(this + 0x30));
      }
      else {
        uVar22 = __hb_CrapPool;
        _free = _hb_aat_layout_compile_map;
        puVar13 = &_hb_CrapPool;
        __hb_CrapPool = __hb_NullPool;
        _hb_aat_layout_compile_map = uVar22;
      }
      uVar2 = *(undefined4 *)(puVar13 + 0x14);
      uVar22 = *puVar18;
      uVar3 = puVar18[1];
      lVar16 = lVar16 + 1;
      *(undefined1 *)(puVar6 + 1) = 0;
      *puVar6 = uVar2;
      *(undefined8 *)(puVar6 + 2) = uVar22;
      *(undefined8 *)(puVar6 + 4) = uVar3;
    } while ((uint)lVar16 < uVar20);
LAB_00100582:
    if (local_58._4_4_ != 0) {
      sort_r_simple<>(local_50,(ulong)local_58._4_4_,0x18,feature_event_t::cmp);
      uVar20 = *(uint *)(this + 0x2c);
    }
  }
  puVar6 = (undefined4 *)
           hb_vector_t<hb_aat_map_builder_t::feature_event_t,false>::push
                     ((hb_vector_t<hb_aat_map_builder_t::feature_event_t,false> *)&local_58);
  *puVar6 = 0xffffffff;
  *(undefined1 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 4) = 0;
  puVar6[5] = uVar20 + 1;
  if (local_58._4_4_ == 0) {
    local_60 = 0;
    piVar10 = (int *)0x0;
    lVar16 = *(long *)(param_1 + 8);
    lVar14 = (ulong)*(uint *)(param_1 + 4) * 0x10 + lVar16;
    if (lVar14 == lVar16) goto LAB_0010075b;
LAB_00100708:
    uVar2 = __hb_CrapPool;
    do {
      if (*(int *)(lVar16 + 4) == 0) {
        __hb_CrapPool = __hb_NullPool;
        puVar13 = &_hb_CrapPool;
        _hb_aat_layout_compile_map = CONCAT44(hb_aat_layout_compile_map_4,uVar2);
      }
      else {
        puVar13 = (undefined *)(*(long *)(lVar16 + 8) + (ulong)(*(int *)(lVar16 + 4) - 1) * 0xc);
      }
      lVar16 = lVar16 + 0x10;
      *(undefined4 *)(puVar13 + 8) = 0xffffffff;
    } while (lVar16 != lVar14);
  }
  else {
    uVar19 = 0;
    local_60 = 0;
    iVar15 = 0;
    piVar1 = local_50 + (ulong)local_58._4_4_ * 6;
    piVar17 = (int *)0x0;
    piVar21 = local_50;
LAB_00100600:
    do {
      iVar5 = *piVar21;
      uVar20 = (uint)uVar19;
      if (iVar5 != iVar15) {
        uVar4 = *(uint *)(this + 0x38);
        if ((int)uVar4 < 0) {
          uVar4 = ~uVar4;
          *(uint *)(this + 0x38) = uVar4;
        }
        *(undefined4 *)(this + 0x3c) = 0;
        if (uVar4 < uVar20) {
          if (uVar20 < 0x10000000) {
            pvVar8 = *(void **)(this + 0x40);
LAB_001007d9:
            pvVar8 = realloc(pvVar8,uVar19 << 4);
            if (pvVar8 == (void *)0x0) {
              uVar4 = *(uint *)(this + 0x38);
              if (uVar4 < uVar20) {
                uVar12 = *(uint *)(this + 0x3c);
                *(uint *)(this + 0x38) = ~uVar4;
                iVar5 = *piVar21;
              }
              else {
                if (-1 < (int)uVar4) goto LAB_00100803;
                iVar5 = *piVar21;
                uVar12 = *(uint *)(this + 0x3c);
              }
              uVar7 = (ulong)uVar12;
              *(int *)(this + 0x48) = iVar15;
              *(int *)(this + 0x4c) = iVar5 + -1;
              if (uVar12 == 0) goto LAB_00100651;
            }
            else {
              *(void **)(this + 0x40) = pvVar8;
              *(uint *)(this + 0x38) = uVar20;
LAB_00100803:
              *(uint *)(this + 0x3c) = uVar20;
LAB_00100807:
              memcpy(*(void **)(this + 0x40),piVar17,uVar19 << 4);
              iVar5 = *piVar21;
              *(int *)(this + 0x48) = iVar15;
              *(int *)(this + 0x4c) = iVar5 + -1;
              uVar7 = uVar19;
            }
            sort_r_simple<>(*(void **)(this + 0x40),uVar7,0x10,feature_info_t::cmp);
            uVar4 = *(uint *)(this + 0x3c);
            if (1 < uVar4) {
              pvVar8 = *(void **)(this + 0x40);
              uVar12 = 0;
              piVar10 = (int *)((long)pvVar8 + 0x10);
              do {
                piVar9 = (int *)((ulong)uVar12 * 0x10 + (long)pvVar8);
                if (uVar4 <= uVar12) {
                  _hb_aat_layout_compile_map = __hb_CrapPool;
                  piVar9 = (int *)&_hb_CrapPool;
                  __hb_CrapPool = __hb_NullPool;
                }
                uVar22 = __hb_CrapPool;
                if (*piVar10 == *piVar9) {
                  if ((char)piVar10[2] == '\0') {
                    if (uVar4 <= uVar12) {
                      _hb_aat_layout_compile_map = __hb_CrapPool;
                      __hb_CrapPool = __hb_NullPool;
                    }
                    uVar22 = __hb_CrapPool;
                    if (1 < (uint)(piVar10[1] ^ piVar9[1])) goto joined_r0x00100876;
                  }
                }
                else {
joined_r0x00100876:
                  puVar18 = (undefined8 *)((ulong)(uVar12 + 1) * 0x10 + (long)pvVar8);
                  __hb_CrapPool = uVar22;
                  if (uVar4 <= uVar12 + 1) {
                    __hb_CrapPool = __hb_NullPool;
                    puVar18 = (undefined8 *)&_hb_CrapPool;
                    _hb_aat_layout_compile_map = uVar22;
                  }
                  uVar12 = uVar12 + 1;
                  uVar22 = *(undefined8 *)(piVar10 + 2);
                  *puVar18 = *(undefined8 *)piVar10;
                  puVar18[1] = uVar22;
                }
                piVar10 = piVar10 + 4;
              } while ((int *)((long)pvVar8 + (ulong)(uVar4 - 2) * 0x10 + 0x20) != piVar10);
              uVar12 = uVar12 + 1;
              uVar11 = 0;
              if (-1 < (int)uVar12) {
                uVar11 = uVar12;
              }
              if (uVar11 < uVar4) {
                uVar4 = *(uint *)(this + 0x38);
                *(uint *)(this + 0x3c) = uVar11;
                if (-1 < (int)uVar4) {
                  if (uVar4 < uVar11) {
                    if ((int)uVar12 < 0x10000000) {
LAB_00100951:
                      pvVar8 = realloc(pvVar8,(long)(int)uVar11 << 4);
                      if (pvVar8 != (void *)0x0) {
LAB_00100966:
                        *(void **)(this + 0x40) = pvVar8;
                        *(uint *)(this + 0x38) = uVar11;
                        goto LAB_00100651;
                      }
                      uVar4 = *(uint *)(this + 0x38);
                      if (uVar11 <= uVar4) goto LAB_00100651;
                    }
                  }
                  else {
                    if (uVar4 >> 2 <= uVar11) goto LAB_00100651;
                    if ((int)uVar12 < 0x10000000) {
                      if (0 < (int)uVar12) goto LAB_00100951;
                      free(pvVar8);
                      pvVar8 = (void *)0x0;
                      goto LAB_00100966;
                    }
                  }
                  *(uint *)(this + 0x38) = ~uVar4;
                }
              }
            }
          }
          else {
LAB_00100640:
            *(int *)(this + 0x48) = iVar15;
            *(uint *)(this + 0x38) = ~uVar4;
            *(int *)(this + 0x4c) = iVar5 + -1;
          }
        }
        else {
          if (uVar20 < uVar4 >> 2) {
            if (0xfffffff < uVar20) goto LAB_00100640;
            pvVar8 = *(void **)(this + 0x40);
            if (uVar20 != 0) goto LAB_001007d9;
            free(pvVar8);
            *(undefined8 *)(this + 0x38) = 0;
            *(undefined8 *)(this + 0x40) = 0;
          }
          else {
            *(uint *)(this + 0x3c) = uVar20;
            if (uVar20 != 0) goto LAB_00100807;
          }
          iVar5 = *piVar21;
          *(int *)(this + 0x48) = iVar15;
          *(int *)(this + 0x4c) = iVar5 + -1;
        }
LAB_00100651:
        hb_aat_layout_compile_map(this,param_1);
        iVar15 = *piVar21;
      }
      piVar10 = piVar17;
      if ((char)piVar21[1] != '\0') {
        uVar12 = uVar20 + 1;
        uVar4 = local_60;
        if ((int)local_60 <= (int)uVar20) {
          uVar22 = __hb_NullPool;
          uVar3 = __hb_CrapPool;
          if ((int)local_60 < 0) goto joined_r0x00100a3a;
          if (local_60 < uVar12) {
            do {
              uVar4 = (uVar4 >> 1) + 8 + uVar4;
            } while (uVar4 < uVar12);
            if ((0xfffffff < uVar4) ||
               (piVar10 = (int *)realloc(piVar17,(ulong)uVar4 << 4), piVar10 == (int *)0x0)) {
              local_60 = ~local_60;
              uVar22 = __hb_NullPool;
              uVar3 = __hb_CrapPool;
              goto joined_r0x00100a3a;
            }
          }
        }
        local_60 = uVar4;
        piVar17 = piVar21 + 2;
        uVar22 = *(undefined8 *)(piVar21 + 4);
        piVar21 = piVar21 + 6;
        *(undefined8 *)(piVar10 + uVar19 * 4) = *(undefined8 *)piVar17;
        *(undefined8 *)(piVar10 + uVar19 * 4 + 2) = uVar22;
        uVar19 = (ulong)uVar12;
        piVar17 = piVar10;
        if (piVar1 == piVar21) break;
        goto LAB_00100600;
      }
      uVar22 = __hb_CrapPool;
      uVar3 = _hb_aat_layout_compile_map;
      if (uVar20 != 0) {
        uVar7 = 0;
        do {
          if ((piVar21[2] == *piVar10) && (piVar21[3] == piVar10[1])) {
            if (piVar17 + uVar7 * 4 != (int *)0x0) {
              uVar7 = (long)(uVar7 * 0x10) >> 4;
              uVar4 = (uint)uVar7;
              if (uVar4 < uVar20) {
                uVar4 = uVar4 + 1;
                if (uVar4 < uVar20) {
                  uVar19 = (ulong)(uVar20 - 1);
                  piVar10 = piVar17 + (ulong)uVar4 * 4;
                  do {
                    uVar22 = *(undefined8 *)piVar10;
                    uVar3 = *(undefined8 *)(piVar10 + 2);
                    uVar4 = (int)uVar7 + 1;
                    piVar10 = piVar10 + 4;
                    *(undefined8 *)(piVar17 + uVar7 * 4) = uVar22;
                    *(undefined8 *)(piVar17 + uVar7 * 4 + 2) = uVar3;
                    uVar7 = (ulong)uVar4;
                    uVar22 = __hb_CrapPool;
                    uVar3 = _hb_aat_layout_compile_map;
                  } while (uVar20 - 1 != uVar4);
                }
                else {
                  uVar19 = (ulong)(uVar20 - 1);
                }
              }
            }
            break;
          }
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar4;
          piVar10 = piVar10 + 4;
        } while (uVar20 != uVar4);
      }
joined_r0x00100a3a:
      _hb_aat_layout_compile_map = uVar3;
      __hb_CrapPool = uVar22;
      piVar21 = piVar21 + 6;
      piVar10 = piVar17;
    } while (piVar1 != piVar21);
    lVar16 = *(long *)(param_1 + 8);
    lVar14 = (ulong)*(uint *)(param_1 + 4) * 0x10 + lVar16;
    if (lVar14 != lVar16) goto LAB_00100708;
  }
  if (local_60 != 0) {
    free(piVar10);
  }
LAB_0010075b:
  if ((int)local_58 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_aat_map_builder_t::add_feature(hb_feature_t const&) */

void __thiscall hb_aat_map_builder_t::add_feature(hb_aat_map_builder_t *this,hb_feature_t *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  hb_face_t *phVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined *puVar17;
  ushort *puVar18;
  
  lVar7 = *(long *)this;
  plVar1 = (long *)(lVar7 + 0x180);
LAB_00100c02:
  lVar9 = *plVar1;
  if (lVar9 == 0) {
    phVar4 = *(hb_face_t **)(lVar7 + 0x70);
    if (phVar4 == (hb_face_t *)0x0) {
      lVar9 = hb_blob_get_empty();
    }
    else {
      lVar9 = hb_table_lazy_loader_t<AAT::feat,34u,false>::create(phVar4);
      if (lVar9 == 0) {
        lVar9 = hb_blob_get_empty();
        LOCK();
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          *plVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto code_r0x00101003;
      }
      else {
        LOCK();
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          *plVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto LAB_00100e7c;
      }
    }
  }
  puVar18 = (ushort *)&_hb_NullPool;
  if (0xb < *(uint *)(lVar9 + 0x18)) {
    puVar18 = *(ushort **)(lVar9 + 0x10);
  }
  if ((uint)(ushort)(*puVar18 << 8 | *puVar18 >> 8) * 0x10000 +
      (uint)(ushort)(puVar18[1] << 8 | puVar18[1] >> 8) != 0) {
    if (*(uint *)param_1 == 0x61616c74) {
      lVar7 = *(long *)this;
      plVar1 = (long *)(lVar7 + 0x180);
LAB_00100d22:
      lVar9 = *plVar1;
      if (lVar9 == 0) {
        phVar4 = *(hb_face_t **)(lVar7 + 0x70);
        if (phVar4 == (hb_face_t *)0x0) {
          lVar9 = hb_blob_get_empty();
        }
        else {
          lVar9 = hb_table_lazy_loader_t<AAT::feat,34u,false>::create(phVar4);
          if (lVar9 == 0) {
            lVar9 = hb_blob_get_empty();
            LOCK();
            lVar10 = *plVar1;
            if (lVar10 == 0) {
              *plVar1 = lVar9;
            }
            UNLOCK();
            if (lVar10 != 0) goto code_r0x001010d6;
          }
          else {
            LOCK();
            lVar10 = *plVar1;
            if (lVar10 == 0) {
              *plVar1 = lVar9;
            }
            UNLOCK();
            if (lVar10 != 0) goto LAB_00100fbc;
          }
        }
      }
      puVar18 = (ushort *)&_hb_NullPool;
      puVar17 = &_hb_NullPool;
      if (0xb < *(uint *)(lVar9 + 0x18)) {
        puVar17 = *(undefined **)(lVar9 + 0x10);
      }
      uVar5 = *(ushort *)(puVar17 + 4) << 8 | *(ushort *)(puVar17 + 4) >> 8;
      iVar16 = uVar5 - 1;
      if (uVar5 != 0) {
        iVar12 = 0;
        do {
          while( true ) {
            uVar15 = (uint)(iVar12 + iVar16) >> 1;
            puVar18 = (ushort *)(puVar17 + (ulong)uVar15 * 0xc + 0xc);
            uVar6 = (uint)(ushort)(*puVar18 << 8 | *puVar18 >> 8);
            if (-1 < (int)(0x11 - uVar6)) break;
            iVar16 = uVar15 - 1;
            if (iVar16 < iVar12) goto LAB_00100d9e;
          }
          if (uVar6 == 0x11) goto LAB_00100da5;
          iVar12 = uVar15 + 1;
        } while (iVar12 <= iVar16);
LAB_00100d9e:
        puVar18 = (ushort *)&_hb_NullPool;
      }
LAB_00100da5:
      if (puVar18[1] != 0) {
        puVar8 = (undefined4 *)
                 hb_vector_t<hb_aat_map_builder_t::feature_range_t,true>::push
                           ((hb_vector_t<hb_aat_map_builder_t::feature_range_t,true> *)(this + 0x28)
                           );
        uVar14 = *(undefined4 *)(param_1 + 0xc);
        uVar2 = *(undefined4 *)(param_1 + 8);
        uVar3 = *(undefined4 *)(this + 0x2c);
        *puVar8 = 0x11;
        puVar8[5] = uVar14;
        uVar14 = *(undefined4 *)(param_1 + 4);
        *(undefined1 *)(puVar8 + 2) = 1;
        puVar8[1] = uVar14;
        *(ulong *)(puVar8 + 3) = CONCAT44(uVar2,uVar3);
      }
    }
    else {
      lVar7 = hb_aat_layout_find_feature_mapping(*(uint *)param_1);
      if (lVar7 != 0) {
        lVar9 = *(long *)this;
        plVar1 = (long *)(lVar9 + 0x180);
LAB_00100c6b:
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          phVar4 = *(hb_face_t **)(lVar9 + 0x70);
          if (phVar4 == (hb_face_t *)0x0) {
            lVar10 = hb_blob_get_empty();
          }
          else {
            lVar10 = hb_table_lazy_loader_t<AAT::feat,34u,false>::create(phVar4);
            if (lVar10 == 0) {
              lVar10 = hb_blob_get_empty();
              LOCK();
              lVar11 = *plVar1;
              if (lVar11 == 0) {
                *plVar1 = lVar10;
              }
              UNLOCK();
              if (lVar11 != 0) goto code_r0x001010ad;
            }
            else {
              LOCK();
              lVar11 = *plVar1;
              if (lVar11 == 0) {
                *plVar1 = lVar10;
              }
              UNLOCK();
              if (lVar11 != 0) goto LAB_00100f64;
            }
          }
        }
        puVar18 = (ushort *)&_hb_NullPool;
        uVar6 = *(uint *)(lVar7 + 4);
        puVar17 = &_hb_NullPool;
        if (0xb < *(uint *)(lVar10 + 0x18)) {
          puVar17 = *(undefined **)(lVar10 + 0x10);
        }
        uVar5 = *(ushort *)(puVar17 + 4) << 8 | *(ushort *)(puVar17 + 4) >> 8;
        iVar16 = uVar5 - 1;
        if (uVar5 != 0) {
          iVar12 = 0;
          do {
            while( true ) {
              uVar13 = (uint)(iVar12 + iVar16) >> 1;
              puVar18 = (ushort *)(puVar17 + (ulong)uVar13 * 0xc + 0xc);
              uVar15 = (uint)(ushort)(*puVar18 << 8 | *puVar18 >> 8);
              if (-1 < (int)(uVar6 - uVar15)) break;
              iVar16 = uVar13 - 1;
              if (iVar16 < iVar12) goto LAB_00100ce0;
            }
            if (uVar6 == uVar15) goto LAB_00100ce7;
            iVar12 = uVar13 + 1;
          } while (iVar12 <= iVar16);
LAB_00100ce0:
          puVar18 = (ushort *)&_hb_NullPool;
        }
LAB_00100ce7:
        if (puVar18[1] != 0) {
LAB_00100dfb:
          puVar8 = (undefined4 *)
                   hb_vector_t<hb_aat_map_builder_t::feature_range_t,true>::push
                             ((hb_vector_t<hb_aat_map_builder_t::feature_range_t,true> *)
                              (this + 0x28));
          *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_1 + 8);
          iVar16 = *(int *)(param_1 + 4);
          *puVar8 = *(undefined4 *)(lVar7 + 4);
          uVar14 = *(undefined4 *)(lVar7 + 0xc);
          if (iVar16 != 0) {
            uVar14 = *(undefined4 *)(lVar7 + 8);
          }
          puVar8[1] = uVar14;
          puVar8[3] = *(undefined4 *)(this + 0x2c);
          *(byte *)(puVar8 + 2) = (byte)puVar18[4] >> 7;
          return;
        }
        if ((uVar6 == 0x25) && (*(int *)(lVar7 + 8) == 1)) {
          lVar9 = *(long *)this;
          plVar1 = (long *)(lVar9 + 0x180);
LAB_00100eaa:
          lVar10 = *plVar1;
          if (lVar10 == 0) {
            phVar4 = *(hb_face_t **)(lVar9 + 0x70);
            if (phVar4 == (hb_face_t *)0x0) {
              lVar10 = hb_blob_get_empty();
            }
            else {
              lVar10 = hb_table_lazy_loader_t<AAT::feat,34u,false>::create(phVar4);
              if (lVar10 == 0) {
                lVar10 = hb_blob_get_empty();
                LOCK();
                lVar11 = *plVar1;
                if (lVar11 == 0) {
                  *plVar1 = lVar10;
                }
                UNLOCK();
                if (lVar11 != 0) goto code_r0x00101115;
              }
              else {
                LOCK();
                lVar11 = *plVar1;
                if (lVar11 == 0) {
                  *plVar1 = lVar10;
                }
                UNLOCK();
                if (lVar11 != 0) goto LAB_0010104e;
              }
            }
          }
          puVar18 = (ushort *)&_hb_NullPool;
          puVar17 = &_hb_NullPool;
          if (0xb < *(uint *)(lVar10 + 0x18)) {
            puVar17 = *(undefined **)(lVar10 + 0x10);
          }
          uVar5 = *(ushort *)(puVar17 + 4) << 8 | *(ushort *)(puVar17 + 4) >> 8;
          iVar16 = uVar5 - 1;
          if (uVar5 != 0) {
            iVar12 = 0;
            do {
              uVar15 = (uint)(iVar12 + iVar16) >> 1;
              puVar18 = (ushort *)(puVar17 + (ulong)uVar15 * 0xc + 0xc);
              uVar6 = (uint)(ushort)(*puVar18 << 8 | *puVar18 >> 8);
              if ((int)(3 - uVar6) < 0) {
                iVar16 = uVar15 - 1;
              }
              else {
                if (uVar6 == 3) goto LAB_00100dee;
                iVar12 = uVar15 + 1;
              }
            } while (iVar12 <= iVar16);
            puVar18 = (ushort *)&_hb_NullPool;
          }
LAB_00100dee:
          if (puVar18[1] != 0) goto LAB_00100dfb;
        }
      }
    }
  }
  return;
code_r0x00101003:
  if (lVar9 != 0) {
LAB_00100e7c:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_00100c02;
code_r0x001010d6:
  if (lVar9 != 0) {
LAB_00100fbc:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_00100d22;
code_r0x001010ad:
  if (lVar10 != 0) {
LAB_00100f64:
    lVar11 = hb_blob_get_empty();
    if (lVar10 != lVar11) {
      hb_blob_destroy(lVar10);
    }
  }
  goto LAB_00100c6b;
code_r0x00101115:
  if (lVar10 != 0) {
LAB_0010104e:
    lVar11 = hb_blob_get_empty();
    if (lVar10 != lVar11) {
      hb_blob_destroy(lVar10);
    }
  }
  goto LAB_00100eaa;
}



/* hb_aat_map_builder_t::feature_info_t::cmp(void const*, void const*) */

uint hb_aat_map_builder_t::feature_info_t::cmp(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *param_2;
                    /* WARNING: Load size is inaccurate */
  iVar2 = *param_1;
  bVar6 = SBORROW4(iVar2,iVar1);
  iVar4 = iVar2 - iVar1;
  if (iVar2 != iVar1) {
LAB_00101172:
    bVar6 = bVar6 == iVar4 < 0;
    return (bVar6 - 1) + (uint)bVar6;
  }
  if (*(char *)((long)param_1 + 8) == '\0') {
    uVar5 = *(uint *)((long)param_1 + 4);
    uVar3 = *(uint *)((long)param_2 + 4);
    if (1 < (uVar5 ^ uVar3)) {
      bVar6 = SBORROW4(uVar5,uVar3);
      iVar4 = uVar5 - uVar3;
      goto LAB_00101172;
    }
  }
  uVar5 = 0xffffffff;
  if (*(uint *)((long)param_2 + 0xc) <= *(uint *)((long)param_1 + 0xc)) {
    uVar5 = (uint)(*(uint *)((long)param_2 + 0xc) < *(uint *)((long)param_1 + 0xc));
  }
  return uVar5;
}



/* hb_aat_map_builder_t::feature_event_t::cmp(void const*, void const*) */

uint hb_aat_map_builder_t::feature_event_t::cmp(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if (*param_2 <= *param_1) {
    if (*param_1 != *param_2) {
      return 1;
    }
    if (*(byte *)((long)param_2 + 4) <= *(byte *)((long)param_1 + 4)) {
      if (*(byte *)((long)param_1 + 4) != *(byte *)((long)param_2 + 4)) {
        return 1;
      }
      iVar1 = *(int *)((long)param_2 + 8);
      iVar2 = *(int *)((long)param_1 + 8);
      bVar6 = SBORROW4(iVar2,iVar1);
      iVar5 = iVar2 - iVar1;
      if (iVar2 == iVar1) {
        if (*(char *)((long)param_1 + 0x10) == '\0') {
          uVar3 = *(uint *)((long)param_1 + 0xc);
          uVar4 = *(uint *)((long)param_2 + 0xc);
          if (1 < (uVar3 ^ uVar4)) {
            bVar6 = SBORROW4(uVar3,uVar4);
            iVar5 = uVar3 - uVar4;
            goto LAB_001011e2;
          }
        }
        if (*(uint *)((long)param_1 + 0x14) < *(uint *)((long)param_2 + 0x14)) {
          return 0xffffffff;
        }
        return (uint)(*(uint *)((long)param_2 + 0x14) < *(uint *)((long)param_1 + 0x14));
      }
LAB_001011e2:
      bVar6 = bVar6 == iVar5 < 0;
      return (bVar6 - 1) + (uint)bVar6;
    }
  }
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_vector_t<hb_aat_map_builder_t::feature_range_t, true>::push() */

undefined * __thiscall
hb_vector_t<hb_aat_map_builder_t::feature_range_t,true>::push
          (hb_vector_t<hb_aat_map_builder_t::feature_range_t,true> *this)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = _hb_aat_layout_compile_map;
  uVar2 = __hb_CrapPool;
  uVar5 = *(uint *)this;
  uVar1 = *(uint *)(this + 4);
  if ((int)uVar5 < 0) {
    __hb_CrapPool = __hb_NullPool;
    _hb_aat_layout_compile_map = uVar2;
    _free = uVar3;
    return &_hb_CrapPool;
  }
  uVar6 = uVar1 + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  uVar7 = uVar5;
  if (uVar5 < uVar6) {
    do {
      uVar7 = (uVar7 >> 1) + 8 + uVar7;
    } while (uVar7 < uVar6);
    if (0xaaaaaaa < uVar7) {
LAB_00101298:
      *(uint *)this = ~uVar5;
      uVar2 = __hb_CrapPool;
      _free = _hb_aat_layout_compile_map;
      __hb_CrapPool = __hb_NullPool;
      _hb_aat_layout_compile_map = uVar2;
      return &_hb_CrapPool;
    }
    pvVar4 = realloc(*(void **)(this + 8),(ulong)uVar7 * 0x18);
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + 8) = pvVar4;
      uVar1 = *(uint *)(this + 4);
      *(uint *)this = uVar7;
      goto LAB_0010121d;
    }
    uVar5 = *(uint *)this;
    if (uVar5 < uVar7) goto LAB_00101298;
    uVar1 = *(uint *)(this + 4);
  }
  pvVar4 = *(void **)(this + 8);
LAB_0010121d:
  if (uVar1 < uVar6) {
    uVar5 = (uVar6 - uVar1) * 0x18;
    if (uVar5 != 0) {
      memset((void *)((long)pvVar4 + (ulong)uVar1 * 0x18),0,(ulong)uVar5);
      pvVar4 = *(void **)(this + 8);
    }
  }
  *(uint *)(this + 4) = uVar6;
  return (undefined *)((long)pvVar4 + (ulong)(uVar6 - 1) * 0x18);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_vector_t<hb_aat_map_builder_t::feature_event_t, false>::push() */

undefined * __thiscall
hb_vector_t<hb_aat_map_builder_t::feature_event_t,false>::push
          (hb_vector_t<hb_aat_map_builder_t::feature_event_t,false> *this)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = _hb_aat_layout_compile_map;
  uVar2 = __hb_CrapPool;
  uVar5 = *(uint *)this;
  uVar1 = *(uint *)(this + 4);
  if ((int)uVar5 < 0) {
    __hb_CrapPool = __hb_NullPool;
    _hb_aat_layout_compile_map = uVar2;
    _free = uVar3;
    return &_hb_CrapPool;
  }
  uVar6 = uVar1 + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  uVar7 = uVar5;
  if (uVar5 < uVar6) {
    do {
      uVar7 = (uVar7 >> 1) + 8 + uVar7;
    } while (uVar7 < uVar6);
    if (0xaaaaaaa < uVar7) {
LAB_00101388:
      *(uint *)this = ~uVar5;
      uVar2 = __hb_CrapPool;
      _free = _hb_aat_layout_compile_map;
      __hb_CrapPool = __hb_NullPool;
      _hb_aat_layout_compile_map = uVar2;
      return &_hb_CrapPool;
    }
    pvVar4 = realloc(*(void **)(this + 8),(ulong)uVar7 * 0x18);
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + 8) = pvVar4;
      uVar1 = *(uint *)(this + 4);
      *(uint *)this = uVar7;
      goto LAB_0010130d;
    }
    uVar5 = *(uint *)this;
    if (uVar5 < uVar7) goto LAB_00101388;
    uVar1 = *(uint *)(this + 4);
  }
  pvVar4 = *(void **)(this + 8);
LAB_0010130d:
  if (uVar1 < uVar6) {
    uVar5 = (uVar6 - uVar1) * 0x18;
    if (uVar5 != 0) {
      memset((void *)((long)pvVar4 + (ulong)uVar1 * 0x18),0,(ulong)uVar5);
      pvVar4 = *(void **)(this + 8);
    }
  }
  *(uint *)(this + 4) = uVar6;
  return (undefined *)((long)pvVar4 + (ulong)(uVar6 - 1) * 0x18);
}



/* hb_table_lazy_loader_t<AAT::feat, 34u, false>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<AAT::feat,34u,false>::create(hb_face_t *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  short *psVar9;
  ulong uVar10;
  
  hb_face_get_glyph_count();
  uVar6 = hb_face_reference_table(param_1,0x66656174);
  lVar7 = hb_blob_reference(uVar6);
  uVar1 = *(uint *)(lVar7 + 0x18);
  uVar10 = (ulong)uVar1;
  psVar2 = *(short **)(lVar7 + 0x10);
  if (uVar1 >> 0x1a == 0) {
    uVar5 = uVar1 << 6;
    if (0x3fffffff < uVar1 << 6) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 < 0x4000) {
      uVar5 = 0x4000;
    }
  }
  else {
    uVar5 = 0x3fffffff;
  }
  if (psVar2 == (short *)0x0) {
    hb_blob_destroy(lVar7);
    return uVar6;
  }
  if ((0xb < uVar10) && (*psVar2 == 0x100)) {
    uVar4 = psVar2[2] << 8 | (ushort)psVar2[2] >> 8;
    iVar8 = (uint)uVar4 + (uint)uVar4 * 2;
    if (((uint)(iVar8 * 4) <= uVar1 - 0xc) && (iVar8 = uVar5 + iVar8 * -4, 0 < iVar8)) {
      if (uVar4 != 0) {
        psVar9 = psVar2 + 0xc;
        do {
          if (uVar10 < (ulong)((long)psVar9 - (long)psVar2)) goto LAB_001014cc;
          uVar5 = *(uint *)(psVar9 + -4);
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          if (((uVar10 < uVar5) ||
              (uVar3 = (uint)(ushort)(psVar9[-5] << 8 | (ushort)psVar9[-5] >> 8),
              uVar1 - uVar5 < uVar3 * 4)) || (iVar8 = iVar8 + uVar3 * -4, iVar8 < 1))
          goto LAB_001014cc;
          psVar9 = psVar9 + 6;
        } while (psVar2 + (ulong)(uVar4 - 1) * 6 + 0x12 != psVar9);
      }
      hb_blob_destroy(lVar7);
      hb_blob_make_immutable(uVar6);
      return uVar6;
    }
  }
LAB_001014cc:
  hb_blob_destroy(lVar7);
  hb_blob_destroy(uVar6);
  uVar6 = hb_blob_get_empty();
  return uVar6;
}


