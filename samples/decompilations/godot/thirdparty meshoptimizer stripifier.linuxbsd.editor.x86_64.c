
/* meshopt::findStripNext(unsigned int const (*) [3], unsigned int, unsigned int, unsigned int) */

int meshopt::findStripNext(unsigned_int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      iVar1 = (int)uVar2;
      if ((*(uint *)param_1 == param_3) && (*(uint *)(param_1 + 4) == param_4)) {
        return iVar1 * 4 + 2;
      }
      if ((*(uint *)(param_1 + 4) == param_3) && (*(uint *)(param_1 + 8) == param_4)) {
        return iVar1 << 2;
      }
      if ((*(uint *)(param_1 + 8) == param_3) && (*(uint *)param_1 == param_4)) {
        return iVar1 * 4 + 1;
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 0xc;
    } while (param_2 != uVar2);
  }
  return -1;
}



long meshopt_stripify(uint *param_1,uint *param_2,ulong param_3,size_t param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *__s;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  unsigned_int *puVar14;
  byte bVar15;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  uint local_1a0;
  uint local_19c;
  long local_198;
  unsigned_int local_168 [4];
  uint auStack_164 [23];
  void *local_108;
  undefined8 local_100 [23];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar20 = local_100;
  for (lVar12 = 0x17; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  puVar14 = local_168;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined8 *)puVar14 = 0;
    puVar14 = puVar14 + 8;
  }
  __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(param_4);
  local_48 = 1;
  local_108 = __s;
  memset(__s,0,param_4);
  if (param_3 == 0) {
    local_198 = 0;
  }
  else {
    puVar10 = param_2;
    do {
      uVar24 = *puVar10;
      puVar10 = puVar10 + 1;
      *(char *)((long)__s + (ulong)uVar24) = *(char *)((long)__s + (ulong)uVar24) + '\x01';
    } while (puVar10 != param_2 + param_3);
    local_1a0 = 0;
    uVar17 = 0;
    uVar22 = 0;
    uVar24 = 0;
    local_198 = 0;
    uVar9 = 0xffffffff;
    bVar3 = false;
    do {
      bVar25 = uVar17 < param_3;
      if ((uVar24 < 8) && (bVar25)) {
        lVar12 = (ulong)uVar24 * 3 - uVar17;
        do {
          *(undefined8 *)(local_168 + uVar17 * 4 + lVar12 * 4) = *(undefined8 *)(param_2 + uVar17);
          lVar19 = uVar17 + 2;
          uVar17 = uVar17 + 3;
          uVar5 = uVar24 + 1;
          bVar25 = uVar17 < param_3;
          auStack_164[(ulong)uVar24 * 3 + 1] = param_2[lVar19];
          uVar6 = uVar24;
          if (7 < uVar5) break;
          uVar24 = uVar5;
        } while (bVar25);
      }
      else {
        uVar6 = uVar24 - 1;
        uVar5 = uVar24;
      }
      uVar24 = uVar6;
      if ((int)uVar9 < 0) {
        uVar13 = (ulong)uVar5;
        if (uVar5 == 0) {
          lVar12 = 0x60;
          lVar19 = 0xc;
          puVar14 = local_168;
          uVar22 = uVar24;
        }
        else {
          uVar6 = 0;
          uVar21 = 0;
          uVar22 = 0xffffffff;
          puVar14 = local_168;
          do {
            bVar15 = *(byte *)((long)__s + (ulong)*(uint *)(puVar14 + 8));
            if (*(byte *)((long)__s + (ulong)*(uint *)(puVar14 + 4)) <
                *(byte *)((long)__s + (ulong)*(uint *)(puVar14 + 8))) {
              bVar15 = *(byte *)((long)__s + (ulong)*(uint *)(puVar14 + 4));
            }
            bVar2 = *(byte *)((long)__s + (ulong)*(uint *)puVar14);
            if (bVar15 <= *(byte *)((long)__s + (ulong)*(uint *)puVar14)) {
              bVar2 = bVar15;
            }
            if (bVar2 < uVar22) {
              uVar22 = (uint)bVar2;
              uVar6 = (uint)uVar21;
            }
            uVar21 = uVar21 + 1;
            puVar14 = puVar14 + 0xc;
          } while (uVar13 != uVar21);
          uVar13 = (ulong)uVar6;
          uVar11 = uVar13 * 0xc;
          lVar19 = (ulong)(uVar6 + 1) * 0xc;
          uVar21 = 0x60;
          if (0x5f < uVar11) {
            uVar21 = uVar11;
          }
          lVar12 = uVar21 + uVar13 * -0xc;
          puVar14 = local_168 + uVar11;
          uVar22 = uVar24 - uVar6;
        }
        uVar6 = *(uint *)(local_168 + uVar13 * 0xc);
        uVar5 = auStack_164[uVar13 * 3];
        uVar1 = auStack_164[uVar13 * 3 + 1];
        __memmove_chk(puVar14,local_168 + lVar19,(ulong)uVar22 * 0xc,lVar12);
        *(char *)((long)__s + (ulong)uVar6) = *(char *)((long)__s + (ulong)uVar6) + -1;
        *(char *)((long)__s + (ulong)uVar5) = *(char *)((long)__s + (ulong)uVar5) + -1;
        *(char *)((long)__s + (ulong)uVar1) = *(char *)((long)__s + (ulong)uVar1) + -1;
        uVar7 = meshopt::findStripNext(local_168,uVar24,uVar1,uVar5);
        uVar8 = meshopt::findStripNext(local_168,uVar24,uVar6,extraout_EDX);
        uVar18 = meshopt::findStripNext(local_168,uVar24,uVar5,extraout_EDX_00);
        if (uVar7 < 0x7fffffff) {
          uVar16 = uVar7;
          if (uVar8 <= uVar7) {
            uVar16 = uVar8;
          }
          if (uVar16 <= uVar18) goto LAB_00100620;
          uVar22 = uVar5;
          uVar23 = uVar6;
          uVar4 = uVar1;
          if (uVar7 != uVar18) goto joined_r0x00100675;
        }
        else {
          uVar16 = 0x7fffffff;
          if (uVar8 < 0x80000000) {
            uVar16 = uVar8;
          }
          if (uVar18 < uVar16) {
joined_r0x00100675:
            uVar22 = uVar1;
            uVar7 = uVar8;
            uVar23 = uVar5;
            uVar4 = uVar6;
            if (uVar8 != uVar18) {
              uVar22 = uVar6;
              uVar7 = uVar18;
              uVar23 = uVar1;
              uVar4 = uVar5;
            }
          }
          else {
LAB_00100620:
            uVar23 = uVar5;
            local_19c = uVar6;
            if ((uVar16 == uVar7) ||
               ((uVar22 = uVar1, uVar7 = uVar16, uVar4 = uVar6, uVar16 != uVar8 &&
                (uVar22 = uVar5, uVar23 = uVar6, uVar7 = uVar9, local_19c = uVar1, uVar4 = uVar1,
                uVar1 = uVar5, uVar16 == uVar18)))) {
              uVar22 = uVar23;
              uVar7 = uVar16;
              uVar23 = local_19c;
              uVar4 = uVar1;
            }
          }
        }
        local_19c = uVar23;
        uVar9 = uVar7;
        if (param_5 == 0) {
          if (local_198 == 0) {
            lVar19 = 8;
            lVar12 = 4;
            local_198 = 3;
            puVar10 = param_1;
          }
          else {
            lVar12 = local_198 * 4 + 0xc;
            param_1[local_198] = local_1a0;
            param_1[local_198 + 1] = local_19c;
            lVar19 = local_198 * 4 + 0x10;
            puVar10 = param_1 + local_198 + 2;
            local_198 = local_198 + 5;
          }
          uVar6 = uVar22;
          local_1a0 = uVar4;
          if (bVar3) {
            uVar6 = uVar4;
            local_1a0 = uVar22;
          }
          uVar22 = uVar6;
          bVar3 = (bool)(bVar3 ^ 1);
          *puVar10 = local_19c;
          *(uint *)((long)param_1 + lVar12) = uVar22;
          *(uint *)((long)param_1 + lVar19) = local_1a0;
        }
        else {
          if (local_198 == 0) {
            lVar19 = 8;
            lVar12 = 4;
            local_198 = 3;
            puVar10 = param_1;
          }
          else {
            lVar12 = local_198 * 4 + 8;
            param_1[local_198] = param_5;
            lVar19 = local_198 * 4 + 0xc;
            puVar10 = param_1 + local_198 + 1;
            local_198 = local_198 + 4;
          }
          bVar3 = true;
          *puVar10 = local_19c;
          *(uint *)((long)param_1 + lVar12) = uVar22;
          *(uint *)((long)param_1 + lVar19) = uVar4;
          local_1a0 = uVar4;
        }
      }
      else {
        uVar18 = (int)uVar9 >> 2;
        uVar13 = (ulong)uVar18;
        uVar6 = *(uint *)(local_168 + uVar13 * 0xc);
        uVar1 = auStack_164[uVar13 * 3];
        uVar7 = auStack_164[uVar13 * 3 + 1];
        uVar8 = auStack_164[uVar13 * 3 + (ulong)(uVar9 & 3) + -1];
        uVar21 = (long)(int)uVar18 * 0xc;
        uVar13 = 0x60;
        if (0x5f < uVar21) {
          uVar13 = uVar21;
        }
        __memmove_chk(local_168 + uVar21,local_168 + (ulong)(uVar18 + 1) * 0xc,
                      (ulong)((uVar5 - uVar18) - 1) * 0xc,uVar13 + (long)(int)uVar18 * -0xc);
        *(char *)((long)__s + (ulong)uVar6) = *(char *)((long)__s + (ulong)uVar6) + -1;
        *(char *)((long)__s + (ulong)uVar1) = *(char *)((long)__s + (ulong)uVar1) + -1;
        *(char *)((long)__s + (ulong)uVar7) = *(char *)((long)__s + (ulong)uVar7) + -1;
        if (bVar3) {
          uVar5 = meshopt::findStripNext(local_168,uVar24,local_1a0,uVar8);
          uVar9 = uVar8;
          uVar6 = uVar22;
        }
        else {
          uVar5 = meshopt::findStripNext(local_168,uVar24,uVar8,local_1a0);
          uVar9 = uVar22;
          uVar6 = uVar8;
        }
        if ((int)uVar5 < 0) {
          uVar9 = meshopt::findStripNext(local_168,uVar24,uVar9,uVar6);
          puVar10 = param_1 + local_198;
          if (-1 < (int)uVar9) {
            local_198 = local_198 + 2;
            *(ulong *)puVar10 = CONCAT44(uVar8,uVar22);
            local_1a0 = uVar8;
            goto LAB_001002ca;
          }
        }
        uVar9 = uVar5;
        bVar3 = (bool)(bVar3 ^ 1);
        param_1[local_198] = uVar8;
        local_198 = local_198 + 1;
        uVar22 = local_1a0;
        local_1a0 = uVar8;
      }
LAB_001002ca:
    } while ((uVar24 != 0) || (bVar25));
  }
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(__s);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_198;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long meshopt_stripifyBound(ulong param_1)

{
  return (param_1 / 3) * 5;
}



long meshopt_unstripify(long param_1,int *param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar4 = 0;
  lVar2 = 0;
  lVar5 = 0;
  do {
    while ((lVar3 = lVar2 + 1, param_4 != 0 && (*param_2 == param_4))) {
      param_2 = param_2 + 1;
      lVar2 = lVar3;
      lVar5 = lVar3;
      if (param_3 == lVar3) {
        return lVar4;
      }
    }
    if (1 < (ulong)(lVar2 - lVar5)) {
      uVar6 = *(undefined8 *)(param_2 + -2);
      iVar1 = *param_2;
      if ((lVar2 - lVar5 & 1U) != 0) {
        uVar6 = CONCAT44((int)uVar6,(int)((ulong)uVar6 >> 0x20));
      }
      iVar7 = (int)((ulong)uVar6 >> 0x20);
      if ((iVar7 != (int)uVar6 && iVar1 != (int)uVar6) && (iVar1 != iVar7)) {
        *(int *)(param_1 + 8 + lVar4 * 4) = iVar1;
        *(undefined8 *)(param_1 + lVar4 * 4) = uVar6;
        lVar4 = lVar4 + 3;
      }
    }
    param_2 = param_2 + 1;
    lVar2 = lVar3;
  } while (param_3 != lVar3);
  return lVar4;
}



long meshopt_unstripifyBound(long param_1)

{
  if (param_1 != 0) {
    param_1 = param_1 * 3 + -6;
  }
  return param_1;
}


