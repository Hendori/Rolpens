
/* (anonymous namespace)::cmpNameAndFeatures(void const*, void const*) */

ulong (anonymous_namespace)::cmpNameAndFeatures(void *param_1,void *param_2)

{
  ulong uVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = 0xffffffff;
  if (*param_2 <= *param_1) {
    uVar1 = (ulong)(*param_2 < *param_1);
  }
  return uVar1;
}



/* graphite2::FeatureRef::FeatureRef(graphite2::Face const&, unsigned short&, unsigned int, unsigned
   int, unsigned short, graphite2::FeatureRef::flags_t, graphite2::FeatureSetting*, unsigned short)
    */

void __thiscall
graphite2::FeatureRef::FeatureRef
          (FeatureRef *this,undefined8 param_1,ushort *param_2,uint param_3,undefined4 param_4,
          undefined2 param_5,undefined2 param_7,undefined8 param_8,undefined2 param_9)

{
  ushort uVar1;
  FeatureRef FVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_8;
  *(uint *)(this + 0x14) = param_3;
  param_3 = param_3 >> 1 | param_3;
  *(undefined2 *)(this + 0x1c) = param_5;
  uVar1 = *param_2;
  *(undefined4 *)(this + 0x18) = param_4;
  param_3 = param_3 | param_3 >> 2;
  param_3 = param_3 | param_3 >> 4;
  param_3 = param_3 | param_3 >> 8;
  param_3 = param_3 >> 0x10 | param_3;
  *(undefined2 *)(this + 0x1e) = param_9;
  *(undefined2 *)(this + 0x20) = param_7;
  uVar3 = param_3 - (param_3 >> 1 & 0x55555555);
  uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
  uVar4 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f) * 0x1010101;
  uVar3 = (int)((uVar4 >> 0x18) + (uint)uVar1) >> 5;
  this[0x23] = SUB41(uVar3,0);
  if ((uint)((int)(uint)uVar1 >> 5) < (uVar3 & 0xff)) {
    uVar1 = (ushort)((uVar3 & 0xff) << 5);
  }
  FVar2 = (FeatureRef)((byte)uVar1 & 0x1f);
  *param_2 = uVar1 + (byte)(uVar4 >> 0x18);
  this[0x22] = FVar2;
  *(uint *)(this + 0x10) = param_3 << (sbyte)FVar2;
  return;
}



/* graphite2::FeatureRef::~FeatureRef() */

void __thiscall graphite2::FeatureRef::~FeatureRef(FeatureRef *this)

{
  free(*(void **)(this + 8));
  return;
}



/* graphite2::SillMap::cloneFeatures(unsigned int) const */

undefined1 (*) [16] __thiscall graphite2::SillMap::cloneFeatures(SillMap *this,uint param_1)

{
  size_t sVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  uint *puVar11;
  
  if ((param_1 != 0) && (*(ushort *)(this + 0x40) != 0)) {
    puVar11 = *(uint **)(this + 0x38);
    puVar5 = puVar11 + (ulong)*(ushort *)(this + 0x40) * 4;
    do {
      if (*puVar11 == param_1) {
        pauVar6 = (undefined1 (*) [16])malloc(0x20);
        plVar2 = *(long **)(puVar11 + 2);
        *(undefined8 *)pauVar6[1] = 0;
        lVar3 = plVar2[1];
        lVar4 = *plVar2;
        *pauVar6 = (undefined1  [16])0x0;
        uVar7 = (lVar3 - lVar4 >> 2) + 7;
        uVar8 = uVar7 & 0xfffffffffffffff8;
        if (uVar8 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          sVar1 = uVar8 * 4;
          if (uVar7 >> 0x3e != 0) goto graphite2_SillMap_cloneFeatures;
          pvVar9 = malloc(sVar1);
          *(void **)*pauVar6 = pvVar9;
          if (pvVar9 == (void *)0x0) goto graphite2_SillMap_cloneFeatures;
          *(void **)pauVar6[1] = (void *)(sVar1 + (long)pvVar9);
        }
        lVar10 = 0;
        *(long *)(*pauVar6 + 8) = (lVar3 - lVar4) + (long)pvVar9;
        if (lVar3 != lVar4) {
          do {
            *(undefined4 *)((long)pvVar9 + lVar10) = *(undefined4 *)(lVar4 + lVar10);
            lVar10 = lVar10 + 4;
          } while (lVar3 - lVar4 != lVar10);
        }
        *(long *)(pauVar6[1] + 8) = plVar2[3];
        return pauVar6;
      }
      puVar11 = puVar11 + 4;
    } while (puVar5 != puVar11);
  }
  pauVar6 = (undefined1 (*) [16])malloc(0x20);
  lVar3 = *(long *)(this + 0x20);
  lVar4 = *(long *)(this + 0x18);
  *(undefined8 *)pauVar6[1] = 0;
  *pauVar6 = (undefined1  [16])0x0;
  uVar7 = (lVar3 - lVar4 >> 2) + 7;
  uVar8 = uVar7 & 0xfffffffffffffff8;
  if (uVar8 != 0) {
    sVar1 = uVar8 * 4;
    if (uVar7 >> 0x3e == 0) {
      pvVar9 = malloc(sVar1);
      *(void **)*pauVar6 = pvVar9;
      if (pvVar9 != (void *)0x0) {
        *(void **)pauVar6[1] = (void *)(sVar1 + (long)pvVar9);
        goto LAB_0010024a;
      }
    }
graphite2_SillMap_cloneFeatures:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar9 = (void *)0x0;
LAB_0010024a:
  lVar10 = 0;
  *(long *)(*pauVar6 + 8) = (lVar3 - lVar4) + (long)pvVar9;
  if (lVar3 != lVar4) {
    do {
      *(undefined4 *)((long)pvVar9 + lVar10) = *(undefined4 *)(lVar4 + lVar10);
      lVar10 = lVar10 + 4;
    } while (lVar10 != lVar3 - lVar4);
  }
  *(undefined8 *)(pauVar6[1] + 8) = *(undefined8 *)(this + 0x30);
  return pauVar6;
}



/* graphite2::FeatureMap::findFeatureRef(unsigned int) const */

undefined8 __thiscall graphite2::FeatureMap::findFeatureRef(FeatureMap *this,uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = *(uint **)(this + 0x10);
  puVar2 = puVar1 + (ulong)*(ushort *)this * 4;
  while( true ) {
    if (puVar2 <= puVar1) {
      return 0;
    }
    if (*puVar1 == param_1) break;
    puVar1 = puVar1 + 4;
  }
  return *(undefined8 *)(puVar1 + 2);
}



/* graphite2::FeatureRef::applyValToFeature(unsigned int, graphite2::FeatureVal&) const */

undefined8 __thiscall
graphite2::FeatureRef::applyValToFeature(FeatureRef *this,uint param_1,FeatureVal *param_2)

{
  uint *puVar1;
  long lVar2;
  void *__ptr;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  size_t __size;
  void *__s;
  long lVar6;
  
  if (*(uint *)(this + 0x14) < param_1) {
    return 0;
  }
  if (*(long *)this == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(long *)this + 8;
    if (*(long *)(param_2 + 0x18) == 0) {
      *(long *)(param_2 + 0x18) = lVar2;
    }
    else if (*(long *)(param_2 + 0x18) != lVar2) {
      return 0;
    }
    __s = *(void **)(param_2 + 8);
    __ptr = *(void **)param_2;
    uVar5 = (ulong)(byte)this[0x23];
    lVar2 = (long)__s - (long)__ptr;
    uVar3 = lVar2 >> 2;
    if (uVar3 <= uVar5) {
      lVar6 = (uVar5 + 1) - uVar3;
      if (lVar6 < 0) {
        *(void **)(param_2 + 8) = (void *)((long)__s + lVar6 * 4);
      }
      else if (lVar6 != 0) {
        uVar5 = uVar5 + 8 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(param_2 + 0x10) - (long)__ptr >> 2) < uVar5) {
          __size = uVar5 * 4;
          __ptr = realloc(__ptr,__size);
          *(void **)param_2 = __ptr;
          if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          __s = (void *)((long)__ptr + lVar2);
          *(void **)(param_2 + 0x10) = (void *)(__size + (long)__ptr);
        }
        *(void **)(param_2 + 8) = (void *)((long)__s + lVar6 * 4);
        memset(__s,0,lVar6 * 4);
        uVar5 = (ulong)(byte)this[0x23];
      }
    }
    puVar1 = (uint *)((long)__ptr + uVar5 * 4);
    *puVar1 = ~*(uint *)(this + 0x10) & *puVar1 | param_1 << ((byte)this[0x22] & 0x1f);
    uVar4 = 1;
  }
  return uVar4;
}



/* graphite2::FeatureMap::readFeats(graphite2::Face const&) */

undefined8 __thiscall graphite2::FeatureMap::readFeats(FeatureMap *this,Face *param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *__base;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulong *puVar8;
  FeatureRef *pFVar9;
  FeatureRef *pFVar10;
  void *__ptr;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  FeatureRef *pFVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  ushort *puVar23;
  ushort uVar24;
  uint uVar25;
  ushort *puVar26;
  ushort uVar27;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  byte bVar32;
  uint local_c8;
  ushort local_6a;
  Table local_68 [8];
  uint *local_60;
  ulong local_58;
  long local_40;
  ulong uVar28;
  
  bVar32 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  graphite2::Face::Table::Table(local_68,param_1,0x46656174,0xffffffff);
  if (local_60 == (uint *)0x0) {
LAB_00100908:
    uVar22 = 1;
  }
  else {
    if (0xb < local_58) {
      uVar7 = *local_60;
      uVar27 = (ushort)local_60[1] << 8 | (ushort)local_60[1] >> 8;
      uVar28 = (ulong)uVar27;
      *(ushort *)this = uVar27;
      if (uVar28 == 0) goto LAB_00100908;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      if (0xffff < uVar7) {
        puVar21 = local_60 + 3;
        if (puVar21 + uVar28 * 4 <= (uint *)((long)local_60 + local_58)) {
          puVar8 = (ulong *)malloc(uVar28 * 0x28 + 8);
          pFVar15 = (FeatureRef *)(puVar8 + 1);
          *puVar8 = uVar28;
          pFVar9 = pFVar15;
          do {
            *(undefined4 *)(pFVar9 + 0x18) = 0;
            pFVar10 = pFVar9 + 0x28;
            *(undefined1 (*) [16])pFVar9 = (undefined1  [16])0x0;
            *(undefined8 *)(pFVar9 + 0x10) = 0;
            *(undefined4 *)(pFVar9 + 0x1c) = 0;
            *(undefined2 *)(pFVar9 + 0x20) = 0;
            *(undefined2 *)(pFVar9 + 0x22) = 0;
            pFVar9 = pFVar10;
          } while ((FeatureRef *)(puVar8 + uVar28 * 5 + 1) != pFVar10);
          *(FeatureRef **)(this + 8) = pFVar15;
          __ptr = malloc(uVar28 * 2);
          if (__ptr != (void *)0x0) {
            local_6a = 0;
            lVar29 = 0;
            pFVar9 = pFVar15;
            do {
              if (uVar7 < 0x20000) {
                uVar6 = *(ushort *)((long)puVar21 + 2) << 8 | *(ushort *)((long)puVar21 + 2) >> 8;
                puVar20 = puVar21 + 1;
                uVar25 = (uint)(ushort)((ushort)*puVar21 << 8 | (ushort)*puVar21 >> 8);
              }
              else {
                uVar25 = *puVar21;
                uVar6 = (ushort)puVar21[1] << 8 | (ushort)puVar21[1] >> 8;
                puVar20 = puVar21 + 2;
                uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                         uVar25 << 0x18;
              }
              uVar31 = (ulong)uVar6;
              uVar2 = *puVar20;
              uVar4 = puVar20[1];
              puVar21 = puVar20 + 2;
              uVar6 = *(ushort *)((long)puVar20 + 6);
              uVar16 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                              uVar2 << 0x18);
              if ((local_58 < uVar16) || (local_58 < uVar31 * 4 + uVar16)) {
LAB_001007a0:
                free(__ptr);
                goto LAB_001004b9;
              }
              if (uVar31 == 0) {
                uVar5 = 0;
                uVar16 = 0xffffffff;
                puVar11 = (ushort *)0x0;
              }
              else {
                puVar11 = (ushort *)malloc(uVar31 * 4);
                if (puVar11 == (ushort *)0x0) goto LAB_001007a0;
                puVar12 = (ushort *)((long)local_60 + uVar16);
                if (uVar31 == 0) {
                  uVar16 = 0;
                }
                else {
                  puVar26 = puVar12 + uVar31 * 2;
                  uVar5 = 0;
                  puVar23 = puVar11;
                  do {
                    uVar24 = *puVar12;
                    puVar1 = puVar12 + 1;
                    puVar12 = puVar12 + 2;
                    uVar24 = uVar24 << 8 | uVar24 >> 8;
                    *puVar23 = *puVar1 << 8 | *puVar1 >> 8;
                    puVar23[1] = uVar24;
                    if (uVar5 < uVar24) {
                      uVar5 = uVar24;
                    }
                    puVar23 = puVar23 + 2;
                  } while (puVar26 != puVar12);
                  uVar16 = (ulong)uVar5;
                }
                uVar5 = puVar11[1];
              }
              *(ushort *)((long)__ptr + lVar29 * 2) = uVar5;
              lVar29 = lVar29 + 1;
              FeatureRef::FeatureRef
                        (pFVar9,param_1,&local_6a,uVar16,uVar25,uVar6 << 8 | uVar6 >> 8,
                         (ushort)uVar4 << 8 | (ushort)uVar4 >> 8,puVar11,uVar31);
              local_c8 = (uint)uVar27;
              pFVar9 = pFVar9 + 0x28;
            } while (local_c8 != (uint)lVar29);
            *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
            uVar7 = (local_6a >> 5) + 1;
            uVar16 = (ulong)(uVar7 * 4 + 0x1c & 0x7fe0);
            puVar13 = (undefined8 *)malloc(uVar16);
            *(undefined8 **)(this + 0x18) = puVar13;
            if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar31 = (ulong)uVar7 * 4;
            *(undefined1 **)(this + 0x28) = (undefined1 *)(uVar16 + (long)puVar13);
            *(undefined4 **)(this + 0x20) = (undefined4 *)((long)puVar13 + uVar31);
            uVar7 = (uint)uVar31;
            if (uVar7 < 8) {
              if ((uVar31 & 4) == 0) {
                if (uVar7 != 0) {
                  *(undefined1 *)puVar13 = 0;
                }
              }
              else {
                *(undefined4 *)puVar13 = 0;
                *(undefined4 *)((long)puVar13 + (uVar31 - 4)) = 0;
              }
            }
            else {
              *(undefined8 *)((long)puVar13 + (uVar31 - 8)) = 0;
              for (uVar16 = (ulong)(uVar7 - 1 >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar13 = 0;
                puVar13 = puVar13 + (ulong)bVar32 * -2 + 1;
              }
            }
            *(FeatureMap **)(this + 0x30) = this;
            puVar14 = (undefined4 *)malloc(uVar28 * 0x10);
            puVar19 = puVar14;
            do {
              *puVar19 = 0;
              puVar17 = puVar19 + 4;
              *(undefined8 *)(puVar19 + 2) = 0;
              puVar19 = puVar17;
            } while (puVar14 + uVar28 * 4 != puVar17);
            *(undefined4 **)(this + 0x10) = puVar14;
            if (puVar14 != (undefined4 *)0x0) {
              lVar29 = 0;
              do {
                lVar30 = lVar29 * 0x28;
                FeatureRef::applyValToFeature
                          (pFVar15 + lVar30,(uint)*(ushort *)((long)__ptr + lVar29 * 2),
                           (FeatureVal *)(this + 0x18));
                pFVar15 = *(FeatureRef **)(this + 8);
                __base = *(void **)(this + 0x10);
                lVar18 = lVar29 * 0x10;
                lVar29 = lVar29 + 1;
                puVar19 = (undefined4 *)(lVar18 + (long)__base);
                uVar3 = *(undefined4 *)(pFVar15 + lVar30 + 0x18);
                *(FeatureRef **)(puVar19 + 2) = pFVar15 + lVar30;
                *puVar19 = uVar3;
                uVar27 = *(ushort *)this;
              } while ((int)lVar29 < (int)(uint)uVar27);
              free(__ptr);
              qsort(__base,(ulong)(uint)uVar27,0x10,(anonymous_namespace)::cmpNameAndFeatures);
              goto LAB_00100908;
            }
            free(__ptr);
          }
          goto LAB_001004b9;
        }
      }
      *(undefined2 *)this = 0;
    }
LAB_001004b9:
    uVar22 = 0;
  }
  graphite2::Face::Table::release();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
}



/* graphite2::SillMap::readSill(graphite2::Face const&) */

undefined8 __thiscall graphite2::SillMap::readSill(SillMap *this,Face *param_1)

{
  ulong *puVar1;
  size_t __size;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  ulong *puVar7;
  FeatureVal *pFVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  ushort uVar24;
  ushort uVar25;
  long in_FS_OFFSET;
  Table local_68 [8];
  int *local_60;
  ulong local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  graphite2::Face::Table::Table(local_68,param_1,0x53696c6c,0xffffffff);
  uVar9 = local_58;
  piVar5 = local_60;
  if (local_60 != (int *)0x0) {
    if ((local_58 < 0xc) || (*local_60 != 0x100)) {
LAB_001009b7:
      uVar18 = 0;
      goto LAB_001009b9;
    }
    uVar2 = *(ushort *)(local_60 + 1);
    uVar24 = uVar2 << 8 | uVar2 >> 8;
    uVar10 = (ulong)uVar24;
    *(ushort *)(this + 0x40) = uVar24;
    puVar7 = (ulong *)malloc(uVar10 * 0x10 + 8);
    puVar1 = puVar7 + 1;
    *puVar7 = uVar10;
    if (uVar10 == 0) {
      *(ulong **)(this + 0x38) = puVar1;
      if (*(short *)this != 0) {
LAB_00100a7b:
        if (uVar2 != 0) {
          lVar19 = 0;
          do {
            uVar6 = piVar5[lVar19 * 2 + 3];
            uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
            uVar2 = *(ushort *)(piVar5 + lVar19 * 2 + 4);
            uVar24 = *(ushort *)((long)piVar5 + lVar19 * 8 + 0x12);
            uVar25 = uVar2 << 8 | uVar2 >> 8;
            uVar24 = uVar24 << 8 | uVar24 >> 8;
            if ((uVar9 < (uint)uVar24 + (uint)uVar25 * 8) && (uVar25 != 0)) goto LAB_001009b7;
            pFVar8 = (FeatureVal *)malloc(0x20);
            lVar20 = *(long *)(this + 0x20);
            lVar4 = *(long *)(this + 0x18);
            *(undefined8 *)(pFVar8 + 0x10) = 0;
            *(undefined1 (*) [16])pFVar8 = (undefined1  [16])0x0;
            uVar9 = (lVar20 - lVar4 >> 2) + 7;
            uVar10 = uVar9 & 0xfffffffffffffff8;
            if (uVar10 == 0) {
              pvVar11 = (void *)0x0;
            }
            else {
              __size = uVar10 * 4;
              if (uVar9 >> 0x3e != 0) {
graphite2_SillMap_readSill:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pvVar11 = malloc(__size);
              *(void **)pFVar8 = pvVar11;
              if (pvVar11 == (void *)0x0) goto graphite2_SillMap_readSill;
              *(void **)(pFVar8 + 0x10) = (void *)((long)pvVar11 + __size);
            }
            lVar12 = 0;
            *(long *)(pFVar8 + 8) = (lVar20 - lVar4) + (long)pvVar11;
            if (lVar20 != lVar4) {
              do {
                *(undefined4 *)((long)pvVar11 + lVar12) = *(undefined4 *)(lVar4 + lVar12);
                lVar12 = lVar12 + 4;
              } while (lVar20 - lVar4 != lVar12);
            }
            puVar21 = (uint *)((ulong)uVar24 + (long)local_60);
            *(undefined8 *)(pFVar8 + 0x18) = *(undefined8 *)(this + 0x30);
            puVar14 = *(uint **)(this + 0x10);
            if (uVar2 == 0) {
              puVar17 = puVar14 + (ulong)*(ushort *)this * 4;
            }
            else {
              uVar9 = (ulong)*(ushort *)this;
              puVar22 = puVar21;
              do {
                uVar3 = *puVar22;
                puVar23 = puVar22 + 2;
                puVar17 = puVar14 + uVar9 * 4;
                for (puVar13 = puVar14; puVar13 < puVar17; puVar13 = puVar13 + 4) {
                  if (*puVar13 ==
                      (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18)) {
                    if (*(FeatureRef **)(puVar13 + 2) != (FeatureRef *)0x0) {
                      FeatureRef::applyValToFeature
                                (*(FeatureRef **)(puVar13 + 2),
                                 (uint)(ushort)((ushort)puVar22[1] << 8 | (ushort)puVar22[1] >> 8),
                                 pFVar8);
                      uVar9 = (ulong)*(ushort *)this;
                      puVar14 = *(uint **)(this + 0x10);
                      puVar17 = puVar14 + uVar9 * 4;
                    }
                    break;
                  }
                }
                puVar22 = puVar23;
              } while (puVar23 != puVar21 + (ulong)uVar25 * 2);
            }
            for (; puVar14 < puVar17; puVar14 = puVar14 + 4) {
              if (*puVar14 == 1) {
                if (*(FeatureRef **)(puVar14 + 2) != (FeatureRef *)0x0) {
                  FeatureRef::applyValToFeature(*(FeatureRef **)(puVar14 + 2),uVar6,pFVar8);
                }
                break;
              }
            }
            lVar20 = lVar19 + 1;
            puVar14 = (uint *)(lVar19 * 0x10 + *(long *)(this + 0x38));
            *puVar14 = uVar6;
            *(FeatureVal **)(puVar14 + 2) = pFVar8;
            uVar9 = local_58;
            lVar19 = lVar20;
          } while ((int)lVar20 < (int)(uint)*(ushort *)(this + 0x40));
        }
        goto LAB_00100cb9;
      }
    }
    else {
      puVar15 = puVar1;
      do {
        *(undefined4 *)puVar15 = 0;
        puVar16 = puVar15 + 2;
        puVar15[1] = 0;
        puVar15 = puVar16;
      } while (puVar7 + uVar10 * 2 + 1 != puVar16);
      *(ulong **)(this + 0x38) = puVar1;
      if (*(short *)this != 0) {
        if ((ulong)uVar24 * 8 + 0xc <= uVar9) goto LAB_00100a7b;
        goto LAB_001009b7;
      }
    }
    *(undefined2 *)(this + 0x40) = 0;
  }
LAB_00100cb9:
  uVar18 = 1;
LAB_001009b9:
  graphite2::Face::Table::release();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}



/* graphite2::SillMap::readFace(graphite2::Face const&) */

undefined8 __thiscall graphite2::SillMap::readFace(SillMap *this,Face *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FeatureMap::readFeats((FeatureMap *)this,param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = readSill(this,param_1);
  return uVar2;
}



/* graphite2::FeatureRef::getFeatureVal(graphite2::FeatureVal const&) const */

uint __thiscall graphite2::FeatureRef::getFeatureVal(FeatureRef *this,FeatureVal *param_1)

{
  if ((((ulong)(byte)this[0x23] < (ulong)(*(long *)(param_1 + 8) - *(long *)param_1 >> 2)) &&
      (*(long *)this != 0)) && (*(long *)(param_1 + 0x18) == *(long *)this + 8)) {
    return (*(uint *)(*(long *)param_1 + (ulong)(byte)this[0x23] * 4) & *(uint *)(this + 0x10)) >>
           ((byte)this[0x22] & 0x1f);
  }
  return 0;
}



/* graphite2::SillMap::cloneFeatures(unsigned int) const [clone .cold] */

void graphite2::SillMap::cloneFeatures(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* graphite2::FeatureRef::applyValToFeature(unsigned int, graphite2::FeatureVal&) const [clone
   .cold] */

void graphite2::FeatureRef::applyValToFeature(uint param_1,FeatureVal *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* graphite2::FeatureMap::readFeats(graphite2::Face const&) [clone .cold] */

void graphite2::FeatureMap::readFeats(Face *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* graphite2::SillMap::readSill(graphite2::Face const&) [clone .cold] */

void graphite2::SillMap::readSill(Face *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


