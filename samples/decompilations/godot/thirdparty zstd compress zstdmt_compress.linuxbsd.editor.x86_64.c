
uint ZSTDMT_computeTargetJobLog(long param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x60) == 1) {
    iVar2 = ZSTD_cycleLog(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
    if (iVar2 + 3U < 0x15) {
      return 0x15;
    }
    iVar2 = ZSTD_cycleLog(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
    uVar1 = iVar2 + 3;
  }
  else {
    uVar1 = *(int *)(param_1 + 4) + 2;
    if (uVar1 < 0x14) {
      uVar1 = 0x14;
    }
  }
  if (0x1e < uVar1) {
    uVar1 = 0x1e;
  }
  return uVar1;
}



void ZSTDMT_releaseAllJobResources(long param_1)

{
  uint uVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  
  bVar10 = 0;
  uVar9 = 0;
  lVar5 = *(long *)(param_1 + 8);
  do {
    lVar8 = (ulong)uVar9 * 0x170;
    puVar6 = (undefined8 *)(lVar5 + lVar8);
    __ptr = (void *)puVar6[7];
    uVar2 = puVar6[2];
    if (__ptr != (void *)0x0) {
      lVar5 = *(long *)(param_1 + 0x10);
      uVar3 = puVar6[8];
      uVar1 = *(uint *)(lVar5 + 0x14);
      if (uVar1 < *(uint *)(lVar5 + 0x10)) {
        puVar7 = (undefined8 *)((ulong)uVar1 * 0x10 + *(long *)(lVar5 + 0x30));
        *(uint *)(lVar5 + 0x14) = uVar1 + 1;
        *puVar7 = __ptr;
        puVar7[1] = uVar3;
      }
      else if (*(code **)(lVar5 + 0x20) == (code *)0x0) {
        free(__ptr);
        puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + lVar8);
      }
      else {
        (**(code **)(lVar5 + 0x20))(*(undefined8 *)(lVar5 + 0x28));
        puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + lVar8);
      }
    }
    *puVar6 = 0;
    uVar9 = uVar9 + 1;
    puVar6[0x2d] = 0;
    uVar4 = (ulong)(((int)puVar6 - (int)(undefined8 *)((ulong)(puVar6 + 1) & 0xfffffffffffffff8)) +
                    0x170U >> 3);
    puVar6 = (undefined8 *)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar10 * -2 + 1;
    }
    lVar5 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar5 + 0x10 + lVar8) = uVar2;
  } while (uVar9 <= *(uint *)(param_1 + 0xb20));
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0xb30) = 1;
  *(undefined1 (*) [16])(param_1 + 0x130) = (undefined1  [16])0x0;
  return;
}



void ZSTDMT_waitForLdmComplete(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  
  if (*(int *)(param_1 + 0x88) != 1) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0xae0);
  bVar8 = param_2 == 0;
  uVar7 = (ulong)*(uint *)(param_1 + 0xafc) + *(long *)(param_1 + 0xaf0);
  uVar3 = param_3 + param_2;
  uVar6 = (*(uint *)(param_1 + 0xaf8) - *(uint *)(param_1 + 0xafc)) + uVar7;
  bVar9 = uVar3 == param_2;
  uVar5 = (ulong)*(uint *)(param_1 + 0xaf8) + *(long *)(param_1 + 0xae8);
  bVar2 = uVar5 == 0 || bVar8;
  bVar4 = uVar1 == uVar5 || bVar9;
  if (uVar7 == 0 || bVar8) goto LAB_00100235;
  do {
    while (uVar7 == uVar6 || bVar9) {
      if (bVar2) {
        return;
      }
      if (bVar4) {
        return;
      }
LAB_00100225:
      if (uVar3 <= uVar5 || uVar1 <= param_2) {
        return;
      }
    }
    do {
    } while (param_2 < uVar6 && uVar7 < uVar3);
LAB_00100235:
    if ((bVar2) || (bVar4)) {
      return;
    }
    do {
      do {
        if (uVar3 <= uVar5 || uVar1 <= param_2) {
          return;
        }
      } while (uVar7 == 0 || bVar8);
      if (uVar7 == uVar6 || bVar9) goto LAB_00100225;
    } while (param_2 >= uVar6 || uVar7 >= uVar3);
  } while( true );
}



void ZSTDMT_releaseBuffer(long param_1,void *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 < *(uint *)(param_1 + 0x10)) {
    puVar2 = (undefined8 *)((ulong)uVar1 * 0x10 + *(long *)(param_1 + 0x30));
    *(uint *)(param_1 + 0x14) = uVar1 + 1;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    return;
  }
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010029d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  free(param_2);
  return;
}



void ZSTDMT_freeCCtxPool(void *param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  void *__ptr;
  undefined8 uVar3;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  __ptr = *(void **)((long)param_1 + 0x28);
  if (__ptr != (void *)0x0) {
    if (*(int *)((long)param_1 + 4) < 1) {
      UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x18);
      uVar3 = *(undefined8 *)((long)param_1 + 0x20);
    }
    else {
      lVar2 = 0;
      do {
        lVar1 = lVar2 * 8;
        lVar2 = lVar2 + 1;
        ZSTD_freeCCtx(*(undefined8 *)((long)__ptr + lVar1));
        __ptr = *(void **)((long)param_1 + 0x28);
      } while ((int)lVar2 < *(int *)((long)param_1 + 4));
      UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x18);
      uVar3 = *(undefined8 *)((long)param_1 + 0x20);
      if (__ptr == (void *)0x0) goto joined_r0x00100333;
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)(uVar3);
      UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x18);
      uVar3 = *(undefined8 *)((long)param_1 + 0x20);
      goto joined_r0x00100333;
    }
    free(__ptr);
  }
  UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x18);
  uVar3 = *(undefined8 *)((long)param_1 + 0x20);
joined_r0x00100333:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1);
  return;
}



void ZSTDMT_freeBufferPool(void *param_1)

{
  void *__ptr;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  void *__ptr_00;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  __ptr_00 = *(void **)((long)param_1 + 0x30);
  uVar1 = *(undefined8 *)((long)param_1 + 0x28);
  UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x20);
  if (__ptr_00 != (void *)0x0) {
    if (*(int *)((long)param_1 + 0x10) != 0) {
      lVar2 = 0;
LAB_001003aa:
      do {
        __ptr = *(void **)((long)__ptr_00 + lVar2 * 0x10);
        if (__ptr != (void *)0x0) {
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            lVar2 = lVar2 + 1;
            free(__ptr);
            __ptr_00 = *(void **)((long)param_1 + 0x30);
            UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x20);
            uVar1 = *(undefined8 *)((long)param_1 + 0x28);
            if (*(uint *)((long)param_1 + 0x10) <= (uint)lVar2) break;
            goto LAB_001003aa;
          }
          (*UNRECOVERED_JUMPTABLE)(uVar1);
          __ptr_00 = *(void **)((long)param_1 + 0x30);
          UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x20);
          uVar1 = *(undefined8 *)((long)param_1 + 0x28);
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)((long)param_1 + 0x10));
      if (__ptr_00 == (void *)0x0) goto LAB_001003fa;
    }
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      free(__ptr_00);
      UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x20);
      uVar1 = *(undefined8 *)((long)param_1 + 0x28);
    }
    else {
      (*UNRECOVERED_JUMPTABLE)(uVar1,__ptr_00);
      UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x20);
      uVar1 = *(undefined8 *)((long)param_1 + 0x28);
    }
  }
LAB_001003fa:
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010040b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  free(param_1);
  return;
}



undefined1 (*) [16] ZSTDMT_expandBufferPool(undefined1 (*param_1) [16],uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  void *pvVar6;
  
  if (param_1 == (undefined1 (*) [16])0x0) {
    return (undefined1 (*) [16])0x0;
  }
  if (param_2 <= *(uint *)param_1[1]) {
    return param_1;
  }
  pcVar3 = *(code **)(param_1[1] + 8);
  uVar4 = *(undefined8 *)param_1[2];
  uVar1 = *(undefined8 *)(param_1[2] + 8);
  uVar2 = *(undefined8 *)(*param_1 + 8);
  ZSTDMT_freeBufferPool();
  if (pcVar3 == (code *)0x0) {
    pauVar5 = (undefined1 (*) [16])calloc(1,0x38);
    if (pauVar5 != (undefined1 (*) [16])0x0) {
      pvVar6 = calloc(1,(ulong)param_2 << 4);
      *(void **)pauVar5[3] = pvVar6;
      if (pvVar6 != (void *)0x0) goto LAB_001004d6;
      ZSTDMT_freeBufferPool(pauVar5);
    }
    pauVar5 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar5 = (undefined1 (*) [16])(*pcVar3)(uVar1);
    *pauVar5 = (undefined1  [16])0x0;
    pauVar5[1] = (undefined1  [16])0x0;
    pauVar5[2] = (undefined1  [16])0x0;
    *(undefined8 *)pauVar5[3] = 0;
    pvVar6 = (void *)(*pcVar3)(uVar1);
    pvVar6 = memset(pvVar6,0,(ulong)param_2 << 4);
    *(void **)pauVar5[3] = pvVar6;
LAB_001004d6:
    *(uint *)pauVar5[1] = param_2;
    *(undefined4 *)(pauVar5[1] + 4) = 0;
    *(undefined8 *)(pauVar5[2] + 8) = uVar1;
    *(undefined8 *)(*pauVar5 + 8) = uVar2;
    *(code **)(pauVar5[1] + 8) = pcVar3;
    *(undefined8 *)pauVar5[2] = uVar4;
  }
  return pauVar5;
}



void ZSTDMT_getBuffer(long param_1)

{
  ulong __size;
  ulong uVar1;
  void *__ptr;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  __size = *(ulong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_001005f0:
    pcVar2 = *(code **)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar3 = *(int *)(param_1 + 0x14) - 1;
    *(uint *)(param_1 + 0x14) = uVar3;
    puVar4 = (undefined8 *)((ulong)uVar3 * 0x10 + *(long *)(param_1 + 0x30));
    uVar1 = puVar4[1];
    __ptr = (void *)*puVar4;
    puVar4[1] = 0;
    *puVar4 = 0;
    if ((uVar1 >> 3 <= __size) && (__size <= uVar1)) {
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (__ptr != (void *)0x0) {
      if (*(code **)(param_1 + 0x20) == (code *)0x0) {
        free(__ptr);
        goto LAB_001005f0;
      }
      (**(code **)(param_1 + 0x20))(uVar5,__ptr);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
    }
    pcVar2 = *(code **)(param_1 + 0x18);
  }
  if (pcVar2 == (code *)0x0) {
    malloc(__size);
  }
  else {
    (*pcVar2)(uVar5,__size);
  }
  return;
}



void ZSTDMT_compressionJob(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined1 auVar16 [16];
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined1 local_140 [16];
  long local_130;
  ulong local_128;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  ulong local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  ulong uStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  
  local_118 = param_1[0xf];
  lStack_110 = param_1[0x10];
  local_f8 = param_1[0x13];
  lStack_f0 = param_1[0x14];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = param_1[0x15];
  lStack_e0 = param_1[0x16];
  local_d8 = param_1[0x17];
  uStack_d0 = param_1[0x18];
  local_c8 = param_1[0x19];
  lStack_c0 = param_1[0x1a];
  local_108 = param_1[0x11];
  lStack_100 = param_1[0x12];
  local_b8 = param_1[0x1b];
  lStack_b0 = param_1[0x1c];
  local_a8 = param_1[0x1d];
  lStack_a0 = param_1[0x1e];
  local_98 = param_1[0x1f];
  lStack_90 = param_1[0x20];
  local_48 = param_1[0x29];
  lVar3 = param_1[3];
  local_88 = param_1[0x21];
  lStack_80 = param_1[0x22];
  local_78 = param_1[0x23];
  lStack_70 = param_1[0x24];
  local_68 = param_1[0x25];
  lStack_60 = param_1[0x26];
  local_58 = param_1[0x27];
  lStack_50 = param_1[0x28];
  if (*(int *)(lVar3 + 8) == 0) {
    lVar3 = ZSTD_createCCtx_advanced();
    uVar8 = *(ulong *)(param_1[5] + 8);
    if (uVar8 == 0) goto LAB_0010073e;
LAB_00100a53:
    auVar16 = ZSTDMT_getBuffer();
    local_158 = auVar16._0_8_;
    uVar8 = auVar16._8_8_ / 0xc;
    local_150 = uVar8 * 0xc;
  }
  else {
    lVar15 = param_1[5];
    iVar1 = *(int *)(lVar3 + 8) + -1;
    *(int *)(lVar3 + 8) = iVar1;
    uVar8 = *(ulong *)(lVar15 + 8);
    lVar3 = *(long *)(*(long *)(lVar3 + 0x28) + (long)iVar1 * 8);
    if (uVar8 != 0) goto LAB_00100a53;
LAB_0010073e:
    local_150 = 0;
    local_158 = 0;
  }
  auVar16 = *(undefined1 (*) [16])(param_1 + 7);
  if (lVar3 == 0) {
LAB_00100a08:
    uVar10 = *(uint *)(param_1 + 0xd);
LAB_00100a0b:
    uVar2 = 0xffffffffffffffc0;
  }
  else {
    if (*(long *)*(undefined1 (*) [16])(param_1 + 7) == 0) {
      auVar16 = ZSTDMT_getBuffer(param_1[4]);
      if (auVar16._0_8_ == 0) goto LAB_00100a08;
      *(undefined1 (*) [16])(param_1 + 7) = auVar16;
    }
    lVar15 = auVar16._0_8_;
    uVar10 = *(uint *)(param_1 + 0xd);
    if (((int)local_b8 == 1) && (local_158 == 0)) goto LAB_00100a0b;
    if (uVar10 != 0) {
      local_f8 = local_f8 & 0xffffffff;
    }
    lVar13 = param_1[0x2a];
    local_b8 = CONCAT44(local_b8._4_4_,2);
    uStack_d0 = uStack_d0 & 0xffffffff;
    if (lVar13 == 0) {
      if (*(int *)((long)param_1 + 0x6c) == 0) {
        local_160 = param_1[0xc];
      }
      else {
        local_160 = param_1[0x2b];
      }
      uVar2 = ZSTD_CCtxParams_setParameter(&local_118,1000,*(int *)((long)param_1 + 0x6c) == 0);
      if ((uVar2 < 0xffffffffffffff89) &&
         ((*(int *)((long)param_1 + 0x6c) != 0 ||
          (uVar2 = ZSTD_CCtxParams_setParameter(&local_118,0x3f4,0), uVar2 < 0xffffffffffffff89))))
      {
        lVar7 = param_1[10];
        lVar12 = param_1[9];
        lVar13 = 0;
        uVar5 = 1;
        goto LAB_001007ca;
      }
    }
    else {
      local_160 = param_1[0x2b];
      uVar5 = 0;
      lVar7 = 0;
      lVar12 = 0;
LAB_001007ca:
      uVar2 = ZSTD_compressBegin_advanced_internal
                        (lVar3,lVar12,lVar7,uVar5,0,lVar13,&local_118,local_160);
      if (uVar2 < 0xffffffffffffff89) {
        lVar13 = param_1[6];
        local_140 = (undefined1  [16])0x0;
        local_130 = 0;
        local_148 = local_158;
        uVar10 = *(uint *)(lVar13 + 0x978);
        do {
        } while (uVar10 < *(uint *)(param_1 + 0xd));
        local_128 = uVar8;
        if (*(uint *)(param_1 + 0xd) == uVar10) {
          uVar8 = param_1[0xb];
          lVar7 = param_1[0xc];
          if (*(int *)(lVar13 + 0x68) == 1) {
            if (lVar7 != 0) {
              uVar10 = *(uint *)(lVar13 + 0xf8);
              uVar2 = (ulong)uVar10;
              if (*(ulong *)(lVar13 + 0xe0) == uVar8) {
                lVar12 = *(long *)(lVar13 + 0xf0);
                uVar2 = (ulong)*(uint *)(lVar13 + 0xfc);
              }
              else {
                lVar12 = *(long *)(lVar13 + 0xe8);
                uVar9 = *(ulong *)(lVar13 + 0xe0) - lVar12;
                uVar6 = (uint)uVar9;
                uVar11 = uVar6 - uVar10;
                *(ulong *)(lVar13 + 0xf8) = CONCAT44(uVar10,uVar6);
                *(ulong *)(lVar13 + 0xe8) = uVar8 - uVar9;
                *(long *)(lVar13 + 0xf0) = lVar12;
                uVar10 = uVar6;
                if (uVar11 < 8) {
                  *(uint *)(lVar13 + 0xfc) = uVar6;
                  uVar2 = uVar9 & 0xffffffff;
                }
              }
              uVar9 = uVar8 + lVar7;
              *(ulong *)(lVar13 + 0xe0) = uVar9;
              if ((uVar2 + lVar12 < uVar9) && (uVar8 < lVar12 + (ulong)uVar10)) {
                if ((long)(uVar9 - lVar12) <= (long)(ulong)uVar10) {
                  uVar10 = (uint)(uVar9 - lVar12);
                }
                *(uint *)(lVar13 + 0xfc) = uVar10;
              }
            }
            ZSTD_ldm_generateSequences(lVar13 + 0xe0,&local_148,lVar13 + 0x68,uVar8);
            *(undefined8 *)(lVar13 + 0x9a8) = *(undefined8 *)(lVar13 + 0x100);
            *(undefined8 *)(lVar13 + 0x988) = *(undefined8 *)(lVar13 + 0xe0);
            *(undefined8 *)(lVar13 + 0x990) = *(undefined8 *)(lVar13 + 0xe8);
            *(undefined8 *)(lVar13 + 0x998) = *(undefined8 *)(lVar13 + 0xf0);
            *(undefined8 *)(lVar13 + 0x9a0) = *(undefined8 *)(lVar13 + 0xf8);
          }
          if ((*(int *)(lVar13 + 0x2c) != 0) && (lVar7 != 0)) {
            ZSTD_XXH64_update(lVar13 + 0x920,uVar8,lVar7);
          }
          *(int *)(lVar13 + 0x978) = *(int *)(lVar13 + 0x978) + 1;
          if (local_130 == 0) goto LAB_0010082f;
          ZSTD_referenceExternalSequences(lVar3,local_148);
          iVar1 = *(int *)((long)param_1 + 0x6c);
          lVar13 = param_1[0xb];
        }
        else {
          *(uint *)(lVar13 + 0x978) = uVar10 + 1;
LAB_0010082f:
          iVar1 = *(int *)((long)param_1 + 0x6c);
          lVar13 = param_1[0xb];
        }
        if (iVar1 == 0) {
          uVar2 = ZSTD_compressContinue_public(lVar3,lVar15,auVar16._8_8_,lVar13,0);
          if (0xffffffffffffff88 < uVar2) goto LAB_001008c6;
          ZSTD_invalidateRepCodes(lVar3);
          lVar13 = param_1[0xb];
        }
        uVar8 = param_1[0xc];
        lVar7 = lVar15 + auVar16._8_8_;
        iVar1 = (int)(uVar8 + 0x7ffff >> 0x13);
        if (iVar1 < 2) {
          iVar4 = (int)param_1[0xe];
          if (0 < iVar1 || iVar4 != 0) goto LAB_00100b8f;
          uVar2 = 0;
        }
        else {
          lVar14 = 0x80000;
          lVar12 = ((ulong)(iVar1 - 2) + 1) * 0x80000 + lVar13;
          do {
            uVar2 = ZSTD_compressContinue_public(lVar3,lVar15,lVar7 - lVar15,lVar13,0x80000);
            if (0xffffffffffffff88 < uVar2) goto LAB_001008c6;
            lVar13 = lVar13 + 0x80000;
            *param_1 = lVar14;
            lVar15 = lVar15 + uVar2;
            lVar14 = lVar14 + 0x80000;
            param_1[1] = param_1[1] + uVar2;
          } while (lVar13 != lVar12);
          iVar4 = (int)param_1[0xe];
          uVar8 = param_1[0xc];
          lVar13 = lVar12;
LAB_00100b8f:
          uVar10 = (uint)uVar8 & 0x7ffff;
          if (((uVar8 & 0x7ffff) == 0) && (0x7ffff < uVar8)) {
            uVar10 = 0x80000;
          }
          if (iVar4 == 0) {
            uVar2 = ZSTD_compressContinue_public(lVar3,lVar15,lVar7 - lVar15,lVar13,uVar10);
          }
          else {
            uVar2 = ZSTD_compressEnd_public();
          }
          if (0xffffffffffffff88 < uVar2) goto LAB_001008c6;
        }
        ZSTD_CCtx_trace(lVar3,0);
        uVar10 = *(uint *)(param_1 + 0xd);
        goto LAB_001008d0;
      }
    }
LAB_001008c6:
    uVar10 = *(uint *)(param_1 + 0xd);
  }
  param_1[1] = uVar2;
  uVar2 = 0;
LAB_001008d0:
  lVar15 = param_1[6];
  if (*(uint *)(lVar15 + 0x978) <= uVar10) {
    *(uint *)(lVar15 + 0x978) = uVar10 + 1;
    iVar1 = (int)*(undefined8 *)(lVar15 + 0x988) - (int)*(undefined8 *)(lVar15 + 0x990);
    *(ulong *)(lVar15 + 0x9a0) = CONCAT44(iVar1,iVar1);
  }
  ZSTDMT_releaseBuffer(param_1[5],local_158,local_150);
  if (lVar3 != 0) {
    lVar15 = param_1[3];
    iVar1 = *(int *)(lVar15 + 8);
    if (iVar1 < *(int *)(lVar15 + 4)) {
      *(int *)(lVar15 + 8) = iVar1 + 1;
      *(long *)(*(long *)(lVar15 + 0x28) + (long)iVar1 * 8) = lVar3;
    }
    else {
      ZSTD_freeCCtx(lVar3);
    }
  }
  *param_1 = param_1[0xc];
  param_1[1] = uVar2 + param_1[1];
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 ZSTDMT_createCCtx_advanced(void)

{
  return 0;
}



undefined8 ZSTDMT_freeCCtx(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  void *__ptr;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x16f) & 1) == 0) {
    POOL_free(*param_1);
  }
  ZSTDMT_releaseAllJobResources(param_1);
  if ((void *)param_1[1] != (void *)0x0) {
    if ((code *)param_1[0x16b] == (code *)0x0) {
      free((void *)param_1[1]);
    }
    else {
      (*(code *)param_1[0x16b])(param_1[0x16c]);
    }
  }
  ZSTDMT_freeBufferPool(param_1[2]);
  ZSTDMT_freeCCtxPool(param_1[3]);
  ZSTDMT_freeBufferPool(param_1[4]);
  pcVar1 = (code *)param_1[0x40];
  uVar2 = param_1[0x41];
  if ((void *)param_1[0x4c] == (void *)0x0) {
    __ptr = (void *)param_1[0x4e];
    if (__ptr == (void *)0x0) goto LAB_00100e03;
    if (pcVar1 == (code *)0x0) goto LAB_00100e98;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      free((void *)param_1[0x4c]);
      __ptr = (void *)param_1[0x4e];
      if (__ptr == (void *)0x0) goto LAB_00100e03;
LAB_00100e98:
      free(__ptr);
      goto LAB_00100e03;
    }
    (*pcVar1)(uVar2);
    if (param_1[0x4e] == 0) goto LAB_00100e03;
  }
  (*pcVar1)(uVar2);
LAB_00100e03:
  ZSTD_freeCDict(param_1[0x16d]);
  if ((void *)param_1[0x28] != (void *)0x0) {
    if ((code *)param_1[0x16b] == (code *)0x0) {
      free((void *)param_1[0x28]);
    }
    else {
      (*(code *)param_1[0x16b])(param_1[0x16c]);
    }
  }
  if ((code *)param_1[0x16b] == (code *)0x0) {
    free(param_1);
  }
  else {
    (*(code *)param_1[0x16b])(param_1[0x16c],param_1);
  }
  return 0;
}



long ZSTDMT_sizeof_CCtx(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar6 = POOL_sizeof(*param_1);
    uVar2 = *(uint *)(param_1[2] + 0x10);
    if (uVar2 == 0) {
      lVar10 = 0;
    }
    else {
      lVar7 = *(long *)(param_1[2] + 0x30);
      lVar10 = 0;
      lVar9 = (ulong)uVar2 * 0x10 + lVar7;
      do {
        lVar10 = lVar10 + *(long *)(lVar7 + 8);
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar9);
    }
    iVar3 = *(int *)(param_1 + 0x164);
    lVar7 = param_1[3];
    uVar4 = *(uint *)(lVar7 + 4);
    if (uVar4 == 0) {
      lVar9 = 0;
    }
    else {
      lVar11 = 0;
      lVar9 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x28) + lVar11);
        lVar11 = lVar11 + 8;
        lVar8 = ZSTD_sizeof_CCtx(*puVar1);
        lVar9 = lVar9 + lVar8;
      } while ((ulong)uVar4 << 3 != lVar11);
    }
    uVar5 = *(uint *)(param_1[4] + 0x10);
    if (uVar5 == 0) {
      lVar7 = 0;
    }
    else {
      lVar11 = *(long *)(param_1[4] + 0x30);
      lVar7 = 0;
      lVar8 = (ulong)uVar5 * 0x10 + lVar11;
      do {
        lVar7 = lVar7 + *(long *)(lVar11 + 8);
        lVar11 = lVar11 + 0x10;
      } while (lVar8 != lVar11);
    }
    lVar11 = ZSTD_sizeof_CDict(param_1[0x16d]);
    return (ulong)(iVar3 + 1) * 0x170 + 0xc20 + param_1[0x29] + (long)(int)uVar4 * 8 +
           ((ulong)uVar2 + (ulong)uVar5) * 0x10 + lVar6 + lVar10 + lVar9 + lVar7 + lVar11;
  }
  return 0;
}



void ZSTDMT_updateCParams_whileCompressing(long param_1,long param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  long local_20;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x2c);
  ZSTD_getCParamsFromCCtxParams(&local_48,param_2,0xffffffffffffffff,0,0);
  *(ulong *)(param_1 + 0x2c) = CONCAT44(uStack_44,uVar1);
  *(ulong *)(param_1 + 0x34) = CONCAT44(uStack_3c,uStack_40);
  *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_38,uStack_3c);
  *(undefined8 *)(param_1 + 0x40) = uStack_34;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  local_48 = uVar1;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * ZSTDMT_getFrameProgression(long *param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  iVar1 = *(int *)(param_2 + 0xb28);
  lVar5 = *(long *)(param_2 + 0xb40);
  uVar3 = *(uint *)(param_2 + 0xb24);
  lVar8 = *(long *)(param_2 + 0xb48);
  uVar7 = *(int *)(param_2 + 0x110) + iVar1;
  lVar6 = *(long *)(param_2 + 0x138) + lVar5;
  lVar9 = lVar8;
  if (uVar3 < uVar7) {
    iVar4 = 0;
    do {
      puVar2 = (ulong *)((ulong)(*(uint *)(param_2 + 0xb20) & uVar3) * 0x170 +
                        *(long *)(param_2 + 8));
      if (puVar2[1] < 0xffffffffffffff89) {
        lVar8 = lVar8 + puVar2[1];
        lVar9 = lVar9 + puVar2[0x2c];
      }
      lVar6 = lVar6 + puVar2[0xc];
      lVar5 = lVar5 + *puVar2;
      iVar4 = iVar4 + (uint)(*puVar2 < puVar2[0xc]);
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    iVar4 = 0;
  }
  *param_1 = lVar6;
  param_1[1] = lVar5;
  param_1[2] = lVar8;
  param_1[3] = lVar9;
  param_1[4] = CONCAT44(iVar4,iVar1);
  return param_1;
}



long ZSTDMT_toFlushNow(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(uint *)(param_1 + 0xb28) != *(uint *)(param_1 + 0xb24)) {
    lVar2 = (ulong)(*(uint *)(param_1 + 0xb24) & *(uint *)(param_1 + 0xb20)) * 0x170 +
            *(long *)(param_1 + 8);
    uVar1 = *(ulong *)(lVar2 + 8);
    if (uVar1 < 0xffffffffffffff89) {
      lVar3 = uVar1 - *(long *)(lVar2 + 0x160);
    }
  }
  return lVar3;
}



undefined8
ZSTDMT_initCStream_internal
          (undefined8 *param_1,ulong param_2,long param_3,int param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14,undefined8 param_15,undefined8 param_16,ulong param_17,
          undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
          undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
          code *param_26,code *param_27,undefined8 param_28,undefined8 param_29,undefined8 param_30,
          undefined8 param_31,undefined8 param_32,undefined8 param_33)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong *puVar12;
  undefined1 (*pauVar13) [16];
  undefined8 *__s;
  size_t sVar14;
  size_t __size;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  undefined4 uVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  
  iVar5 = param_16._4_4_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_16._4_4_ == *(int *)((long)param_1 + 0x74)) {
LAB_0010121f:
    if (param_17 - 1 < 0x7ffff) {
      iVar5 = *(int *)(param_1 + 0x166);
      param_17 = 0x80000;
    }
    else {
      if (0x40000000 < param_17) {
        param_17 = 0x40000000;
      }
      iVar5 = *(int *)(param_1 + 0x166);
    }
    if (iVar5 == 0) {
      uVar6 = *(uint *)((long)param_1 + 0xb24);
      if (uVar6 < *(uint *)(param_1 + 0x165)) {
        do {
          puVar12 = (ulong *)((ulong)(uVar6 & *(uint *)(param_1 + 0x164)) * 0x170 + param_1[1]);
          do {
          } while (*puVar12 < puVar12[0xc]);
          uVar6 = uVar6 + 1;
          *(uint *)((long)param_1 + 0xb24) = uVar6;
        } while (uVar6 != *(uint *)(param_1 + 0x165));
      }
      ZSTDMT_releaseAllJobResources(param_1);
      *(undefined4 *)(param_1 + 0x166) = 1;
    }
    param_1[0x167] = param_6;
    param_1[5] = CONCAT44(param_7._4_4_,(undefined4)param_7);
    param_1[6] = CONCAT44(param_8._4_4_,(undefined4)param_8);
    param_1[7] = CONCAT44(param_9._4_4_,(undefined4)param_9);
    param_1[8] = CONCAT44(param_10._4_4_,(undefined4)param_10);
    param_1[9] = param_11;
    param_1[10] = param_12;
    param_1[0xb] = param_13;
    param_1[0xc] = param_14;
    param_1[0xd] = param_15;
    param_1[0xe] = CONCAT44(param_16._4_4_,(undefined4)param_16);
    param_1[0xf] = param_17;
    param_1[0x10] = CONCAT44(param_18._4_4_,(int)param_18);
    param_1[0x1f] = param_33;
    param_1[0x11] = CONCAT44(param_19._4_4_,(int)param_19);
    param_1[0x12] = param_20;
    param_1[0x13] = param_21;
    param_1[0x14] = param_22;
    param_1[0x15] = param_23;
    param_1[0x16] = param_24;
    param_1[0x17] = param_25;
    param_1[0x18] = param_26;
    param_1[0x19] = param_27;
    param_1[0x1a] = param_28;
    param_1[0x1b] = param_29;
    param_1[0x1c] = param_30;
    param_1[0x1d] = param_31;
    param_1[0x1e] = param_32;
    if (param_2 == 0) {
      ZSTD_freeCDict(param_1[0x16d]);
      param_1[0x16d] = 0;
      param_1[0x16e] = param_5;
    }
    else {
      ZSTD_freeCDict(param_1[0x16d]);
      lVar8 = ZSTD_createCDict_advanced(param_2,param_3,0);
      param_1[0x16d] = lVar8;
      param_1[0x16e] = lVar8;
      if (lVar8 == 0) goto LAB_00101f50;
    }
    uVar6 = param_7._4_4_;
    iVar5 = (int)param_18;
    iVar7 = (int)param_19;
    if ((int)param_18 == 0) {
      if (param_10._4_4_ - 5U < 5) {
        iVar5 = *(int *)(CSWTCH_61 + (ulong)(param_10._4_4_ - 5U) * 4);
        goto LAB_001013e4;
      }
      iVar5 = 3;
LAB_00101afa:
      iVar18 = param_7._4_4_ - iVar5;
      if ((int)param_19 == 1) {
LAB_00101ece:
        iVar7 = ZSTDMT_computeTargetJobLog(&param_7);
        if (iVar7 - 2U <= uVar6) {
          iVar7 = ZSTDMT_computeTargetJobLog(&param_7);
          uVar6 = iVar7 - 2;
        }
        iVar18 = uVar6 - iVar5;
        iVar7 = 1;
      }
      uVar16 = 1L << ((byte)iVar18 & 0x3f);
      if (iVar18 == 0) {
        uVar16 = 0;
      }
    }
    else {
LAB_001013e4:
      iVar5 = 9 - iVar5;
      if (iVar5 < 8) goto LAB_00101afa;
      uVar16 = 0;
      if ((int)param_19 == 1) goto LAB_00101ece;
    }
    param_1[0x20] = param_17;
    param_1[0x21] = uVar16;
    uVar23 = param_17;
    if (param_17 == 0) {
      bVar4 = ZSTDMT_computeTargetJobLog(&param_7);
      uVar16 = param_1[0x21];
      uVar23 = 1L << (bVar4 & 0x3f);
      param_1[0x20] = uVar23;
    }
    if (param_18._4_4_ != 0) {
      lVar8 = 1;
      uVar19 = 0x1f;
      param_1[0x161] = 0;
      iVar5 = 0x1f;
      uVar6 = (uint)(uVar23 >> 10);
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar18 = 5;
      param_1[0x162] = (1L << ((char)iVar5 + 10U & 0x3f)) + -1;
      lVar9 = -0x30e44323485a9b9d;
      do {
        if ((uVar19 & 1) != 0) {
          lVar8 = lVar8 * lVar9;
        }
        lVar9 = lVar9 * lVar9;
        uVar19 = uVar19 >> 1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      param_1[0x163] = lVar8;
    }
    if (uVar23 < uVar16) {
      param_1[0x20] = uVar16;
      uVar23 = uVar16;
    }
    uVar10 = ZSTD_compressBound(uVar23);
    uVar16 = 0;
    iVar5 = *(int *)(param_1 + 0x11);
    *(undefined8 *)(param_1[2] + 8) = uVar10;
    if (iVar5 == 1) {
      uVar16 = (ulong)(uint)(1 << ((byte)*(undefined4 *)((long)param_1 + 0x2c) & 0x1f));
    }
    uVar23 = param_1[0x20];
    iVar5 = 1;
    if (0 < *(int *)((long)param_1 + 0x74)) {
      iVar5 = *(int *)((long)param_1 + 0x74);
    }
    uVar19 = (long)iVar5 * uVar23;
    if ((long)iVar5 * uVar23 < uVar16) {
      uVar19 = uVar16;
    }
    uVar19 = uVar19 + (3 - (ulong)(param_1[0x21] == 0)) * uVar23;
    if ((ulong)param_1[0x29] < uVar19) {
      if ((void *)param_1[0x28] != (void *)0x0) {
        if ((code *)param_1[0x16b] == (code *)0x0) {
          free((void *)param_1[0x28]);
        }
        else {
          (*(code *)param_1[0x16b])(param_1[0x16c]);
        }
      }
      if ((code *)param_1[0x16a] == (code *)0x0) {
        pvVar11 = malloc(uVar19);
      }
      else {
        pvVar11 = (void *)(*(code *)param_1[0x16a])(param_1[0x16c],uVar19);
      }
      param_1[0x28] = pvVar11;
      if (pvVar11 == (void *)0x0) {
        param_1[0x29] = 0;
        goto LAB_00101f50;
      }
      param_1[0x29] = uVar19;
      uVar23 = param_1[0x20];
    }
    uStack_118 = (code *)CONCAT44(param_7._4_4_,(undefined4)param_7);
    uStack_110 = CONCAT44(param_8._4_4_,(undefined4)param_8);
    uStack_108 = CONCAT44(param_9._4_4_,(undefined4)param_9);
    uStack_100 = CONCAT44(param_10._4_4_,(undefined4)param_10);
    lVar8 = param_1[4];
    *(undefined1 (*) [16])((long)param_1 + 0xb24) = (undefined1  [16])0x0;
    uStack_d0 = CONCAT44(param_16._4_4_,(undefined4)param_16);
    uStack_c0 = CONCAT44(param_18._4_4_,(int)param_18);
    auStack_b8._4_4_ = param_19._4_4_;
    auStack_b8._0_4_ = (int)param_19;
    uStack_f8 = param_11;
    uStack_f0 = param_12;
    uStack_e8 = param_13;
    uStack_e0 = param_14;
    uStack_d8 = param_15;
    param_1[0x2a] = 0;
    param_1[0x25] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x168) = (undefined1  [16])0x0;
    uStack_c8 = param_17;
    auStack_b8._8_8_ = param_20;
    uStack_a8 = param_21;
    uStack_a0 = param_22;
    uStack_98 = param_23;
    uStack_90 = param_24;
    uStack_88 = param_25;
    pcStack_80 = param_26;
    pcStack_78 = param_27;
    uStack_70 = param_28;
    uStack_68 = param_29;
    uStack_60 = param_30;
    uStack_58 = param_31;
    uStack_50 = param_32;
    uStack_48 = param_33;
    if (iVar7 == 1) {
      ZSTD_ldm_adjustParameters(auStack_b8,(long)&uStack_118 + 4);
    }
    else {
      uStack_a8 = 0;
      auStack_b8 = (undefined1  [16])0x0;
    }
    *(undefined4 *)(param_1 + 0x15a) = 0;
    if (uStack_f8._4_4_ == 0) {
      pcVar1 = pcStack_80;
      pcVar3 = pcStack_78;
      uVar10 = uStack_70;
    }
    else {
      ZSTD_XXH64_reset(param_1 + 0x14f,0);
      pcVar1 = pcStack_80;
      pcVar3 = pcStack_78;
      uVar10 = uStack_70;
    }
    pcStack_80 = pcVar1;
    pcStack_78 = pcVar3;
    uStack_70 = uVar10;
    if (auStack_b8._0_4_ == 1) {
      uVar22 = auStack_b8._4_4_;
      sVar14 = 8L << (auStack_b8[4] & 0x3f);
      uVar21 = auStack_b8._4_4_ - auStack_b8._8_4_;
      uVar6 = *(int *)((long)param_1 + 0x1c4) - *(int *)(param_1 + 0x39);
      __size = 1L << ((byte)uVar21 & 0x3f);
      lVar9 = ZSTD_ldm_getMaxNbSeq(uVar23);
      uVar2 = _LC1;
      *(long *)(lVar8 + 8) = lVar9 * 0xc;
      param_1[0x4b] = 0;
      pvVar11 = (void *)param_1[0x4c];
      param_1[0x49] = &_LC0;
      param_1[0x4a] = uVar2;
      param_1[0x47] = CSWTCH_61;
      param_1[0x48] = &_LC0;
      if (pvVar11 != (void *)0x0) {
        if (*(uint *)((long)param_1 + 0x1c4) < (uint)uVar22) {
          if (pcVar3 == (code *)0x0) {
            free(pvVar11);
          }
          else {
            (*pcVar3)(uVar10);
          }
          goto LAB_00101cd8;
        }
        if ((void *)param_1[0x4e] != (void *)0x0) {
          pvVar15 = pvVar11;
          if (uVar6 < uVar21) {
            if (pcVar3 == (code *)0x0) {
              free((void *)param_1[0x4e]);
              goto LAB_00101d2f;
            }
            goto LAB_00101d20;
          }
          goto joined_r0x00101d61;
        }
LAB_00101d2f:
        if (pcVar1 == (code *)0x0) goto LAB_00101fb3;
        goto LAB_00101d38;
      }
LAB_00101cd8:
      if (pcVar1 == (code *)0x0) {
        pvVar11 = malloc(sVar14);
        param_1[0x4c] = pvVar11;
        if ((void *)param_1[0x4e] != (void *)0x0) {
          pvVar15 = pvVar11;
          if (uVar21 <= uVar6) goto joined_r0x00101d61;
          if (pcVar3 != (code *)0x0) goto LAB_00101d20;
          free((void *)param_1[0x4e]);
        }
LAB_00101fb3:
        pvVar15 = malloc(__size);
LAB_00101d45:
        pvVar11 = (void *)param_1[0x4c];
        param_1[0x4e] = pvVar15;
        if (pvVar11 == (void *)0x0) goto LAB_00101f50;
      }
      else {
        pvVar11 = (void *)(*pcVar1)(uVar10,sVar14);
        param_1[0x4c] = pvVar11;
        if ((void *)param_1[0x4e] == (void *)0x0) {
LAB_00101d38:
          pvVar15 = (void *)(*pcVar1)(uVar10);
          goto LAB_00101d45;
        }
        pvVar15 = pvVar11;
        if (uVar6 < uVar21) {
          if (pcVar3 != (code *)0x0) {
LAB_00101d20:
            (*pcVar3)(uVar10);
            goto LAB_00101d2f;
          }
          free((void *)param_1[0x4e]);
          goto LAB_00101d38;
        }
      }
joined_r0x00101d61:
      if (pvVar15 == (void *)0x0) goto LAB_00101f50;
      memset(pvVar11,0,sVar14);
      memset((void *)param_1[0x4e],0,__size);
      *(undefined4 *)(param_1 + 0x4d) = 0;
      if ((param_3 != 0) && (param_4 == 1)) {
        uVar6 = *(uint *)(param_1 + 0x4a);
        uVar16 = (ulong)uVar6;
        uVar19 = param_3 + param_2;
        if (param_2 == param_1[0x47]) {
          lVar8 = param_1[0x49];
          uVar17 = (ulong)*(uint *)((long)param_1 + 0x254);
        }
        else {
          lVar8 = param_1[0x48];
          uVar20 = param_1[0x47] - lVar8;
          iVar5 = (int)uVar20;
          param_1[0x4a] = CONCAT44(uVar6,iVar5);
          param_1[0x48] = param_2 - uVar20;
          param_1[0x49] = lVar8;
          uVar17 = uVar16;
          uVar16 = uVar20 & 0xffffffff;
          if (iVar5 - uVar6 < 8) {
            *(int *)((long)param_1 + 0x254) = iVar5;
            uVar17 = uVar20 & 0xffffffff;
          }
        }
        param_1[0x47] = uVar19;
        if ((uVar17 + lVar8 < uVar19) && (param_2 < lVar8 + uVar16)) {
          uVar22 = (undefined4)uVar16;
          if ((long)(uVar19 - lVar8) <= (long)uVar16) {
            uVar22 = (undefined4)(uVar19 - lVar8);
          }
          *(undefined4 *)((long)param_1 + 0x254) = uVar22;
        }
        ZSTD_ldm_fillHashTable(param_1 + 0x47,param_2,uVar19,auStack_b8);
        iVar5 = 0;
        if ((int)uStack_e8 == 0) {
          iVar5 = (int)uVar19 - *(int *)(param_1 + 0x48);
        }
        *(int *)(param_1 + 0x4d) = iVar5;
      }
      param_1[0x160] = param_1[0x4b];
      param_1[0x15c] = param_1[0x47];
      param_1[0x15d] = param_1[0x48];
      param_1[0x15e] = param_1[0x49];
      param_1[0x15f] = param_1[0x4a];
    }
    param_1[0x2c] = uStack_118;
    param_1[0x2d] = uStack_110;
    param_1[0x2e] = uStack_108;
    param_1[0x2f] = uStack_100;
    param_1[0x36] = uStack_c8;
    param_1[0x37] = uStack_c0;
    param_1[0x30] = uStack_f8;
    param_1[0x31] = uStack_f0;
    param_1[0x32] = uStack_e8;
    param_1[0x33] = uStack_e0;
    param_1[0x34] = uStack_d8;
    param_1[0x35] = uStack_d0;
    param_1[0x36] = uVar23 & 0xffffffff;
    param_1[0x46] = uStack_48;
    uVar10 = 0;
    param_1[0x38] = auStack_b8._0_8_;
    param_1[0x39] = auStack_b8._8_8_;
    param_1[0x3a] = uStack_a8;
    param_1[0x3b] = uStack_a0;
    param_1[0x3c] = uStack_98;
    param_1[0x3d] = uStack_90;
    param_1[0x3e] = uStack_88;
    param_1[0x3f] = pcStack_80;
    param_1[0x40] = pcStack_78;
    param_1[0x41] = uStack_70;
    param_1[0x42] = uStack_68;
    param_1[0x43] = uStack_60;
    param_1[0x44] = uStack_58;
    param_1[0x45] = uStack_50;
  }
  else {
    iVar7 = POOL_resize(*param_1,param_16._4_4_);
    if (iVar7 == 0) {
      uVar6 = iVar5 + 2;
      if (*(int *)(param_1 + 0x164) + 1U < uVar6) {
        uVar10 = param_1[0x16c];
        if ((void *)param_1[1] != (void *)0x0) {
          if ((code *)param_1[0x16b] == (code *)0x0) {
            free((void *)param_1[1]);
            uVar10 = param_1[0x16c];
          }
          else {
            (*(code *)param_1[0x16b])(uVar10);
            uVar10 = param_1[0x16c];
          }
        }
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        *(undefined4 *)(param_1 + 0x164) = 0;
        uVar6 = 1 << ((char)iVar7 + 1U & 0x1f);
        sVar14 = (ulong)uVar6 * 0x170;
        if ((code *)param_1[0x16a] == (code *)0x0) {
          pvVar11 = calloc(1,sVar14);
          if (pvVar11 == (void *)0x0) {
            param_1[1] = 0;
            goto LAB_00101f50;
          }
        }
        else {
          pvVar11 = (void *)(*(code *)param_1[0x16a])(uVar10);
          pvVar11 = memset(pvVar11,0,sVar14);
        }
        param_1[1] = pvVar11;
        *(uint *)(param_1 + 0x164) = uVar6 - 1;
      }
      lVar8 = ZSTDMT_expandBufferPool(param_1[2],iVar5 * 2 + 3);
      param_1[2] = lVar8;
      if ((lVar8 != 0) && (lVar8 = param_1[3], lVar8 != 0)) {
        if (*(int *)(lVar8 + 4) < iVar5) {
          pcVar1 = *(code **)(lVar8 + 0x10);
          uVar2 = *(undefined8 *)(lVar8 + 0x18);
          uVar10 = *(undefined8 *)(lVar8 + 0x20);
          ZSTDMT_freeCCtxPool();
          uStack_118 = pcVar1;
          uStack_110 = uVar2;
          uStack_108 = uVar10;
          if (pcVar1 == (code *)0x0) {
            pauVar13 = (undefined1 (*) [16])calloc(1,0x30);
            if (pauVar13 == (undefined1 (*) [16])0x0) {
              param_1[3] = 0;
            }
            else {
              *(int *)(*pauVar13 + 4) = iVar5;
              __s = (undefined8 *)calloc(1,(long)iVar5 << 3);
              *(undefined8 **)(pauVar13[2] + 8) = __s;
              if (__s != (undefined8 *)0x0) goto LAB_00101a56;
              ZSTDMT_freeCCtxPool(pauVar13);
              param_1[3] = 0;
            }
          }
          else {
            pauVar13 = (undefined1 (*) [16])(*pcVar1)(uVar10);
            *pauVar13 = (undefined1  [16])0x0;
            pauVar13[1] = (undefined1  [16])0x0;
            pauVar13[2] = (undefined1  [16])0x0;
            *(int *)(*pauVar13 + 4) = iVar5;
            __s = (undefined8 *)(*pcVar1)(uVar10);
            memset(__s,0,(long)iVar5 * 8);
            *(undefined8 **)(pauVar13[2] + 8) = __s;
LAB_00101a56:
            *(code **)pauVar13[1] = uStack_118;
            *(undefined8 *)(pauVar13[1] + 8) = uStack_110;
            *(undefined8 *)pauVar13[2] = uStack_108;
            uVar10 = ZSTD_createCCtx_advanced();
            *__s = uVar10;
            if (**(long **)(pauVar13[2] + 8) != 0) {
              *(undefined4 *)(*pauVar13 + 8) = 1;
              param_1[3] = pauVar13;
              goto LAB_00101ab1;
            }
            ZSTDMT_freeCCtxPool(pauVar13);
            param_1[3] = 0;
          }
        }
        else {
LAB_00101ab1:
          lVar8 = ZSTDMT_expandBufferPool(param_1[4],iVar5);
          param_1[4] = lVar8;
          if (lVar8 != 0) {
            ZSTD_CCtxParams_setParameter(param_1 + 5,400,iVar5);
            goto LAB_0010121f;
          }
        }
      }
    }
LAB_00101f50:
    uVar10 = 0xffffffffffffffc0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ZSTDMT_nextInputSizeHint(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x100) - *(long *)(param_1 + 0x138);
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}



ulong ZSTDMT_compressStream_generic(undefined8 *param_1,long *param_2,long *param_3,int param_4)

{
  void *pvVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  ulong *puVar25;
  undefined8 uVar26;
  void *pvVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  size_t __n;
  long lVar31;
  uint uVar32;
  byte *__src;
  byte *pbVar33;
  long lVar34;
  ulong uVar35;
  bool bVar36;
  bool bVar37;
  undefined1 (*pauVar39) [16];
  ulong uVar40;
  void *pvVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  ulong local_60;
  byte *local_58;
  uint uVar38;
  
  bVar37 = *(int *)((long)param_1 + 0xb2c) != 0 && param_4 == 0;
  uVar38 = (uint)bVar37;
  if (bVar37) {
    return 0xffffffffffffffc4;
  }
  uVar24 = param_3[1];
  uVar30 = param_3[2];
  if (*(int *)(param_1 + 0x22) == 0) {
    if (uVar30 < uVar24) {
      pvVar27 = (void *)param_1[0x25];
      if (pvVar27 == (void *)0x0) {
        uVar23 = *(uint *)((long)param_1 + 0xb24);
        if (uVar23 < *(uint *)(param_1 + 0x165)) {
          uVar32 = *(uint *)(param_1 + 0x164);
          lVar31 = param_1[1];
          uVar28 = uVar23;
          do {
            puVar25 = (ulong *)((ulong)(uVar28 & uVar32) * 0x170 + lVar31);
            local_60 = puVar25[0xc];
            if (*puVar25 < local_60) {
              if (puVar25[10] == 0) {
                pvVar41 = (void *)puVar25[0xb];
              }
              else {
                pvVar41 = (void *)puVar25[9];
                local_60 = puVar25[10];
              }
              __n = param_1[0x2a];
              bVar37 = pvVar41 == (void *)0x0;
              pvVar27 = (void *)param_1[0x28];
              uVar30 = param_1[0x20];
              if (uVar30 <= param_1[0x29] - __n) goto LAB_00102b0e;
              __n = param_1[0x24];
              bVar36 = pvVar27 == (void *)0x0 || bVar37;
              if (bVar36) goto LAB_00102d7b;
              pvVar1 = (void *)((long)pvVar27 + __n);
              if (pvVar1 == pvVar27) {
                bVar37 = false;
                goto LAB_00102d7b;
              }
              bVar42 = pvVar27 < (void *)(local_60 + (long)pvVar41);
              bVar37 = pvVar41 < pvVar1 && bVar42;
              if (pvVar41 >= pvVar1 || !bVar42) goto LAB_00102d7b;
              bVar37 = false;
              uVar28 = (uint)bVar36;
              if (param_4 != 2) goto LAB_0010247b;
              bVar37 = false;
              goto LAB_00102916;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < *(uint *)(param_1 + 0x165));
        }
        __n = param_1[0x2a];
        uVar30 = param_1[0x20];
        pvVar41 = (void *)0x0;
        if (param_1[0x29] - __n < uVar30) {
          local_60 = 0;
          pvVar27 = (void *)param_1[0x28];
          bVar37 = true;
          __n = param_1[0x24];
LAB_00102d7b:
          ZSTDMT_waitForLdmComplete(param_1,pvVar27);
          pvVar27 = memmove(pvVar27,(void *)param_1[0x23],__n);
          param_1[0x23] = pvVar27;
          pvVar27 = (void *)param_1[0x28];
          param_1[0x2a] = __n;
        }
        else {
          local_60 = 0;
          pvVar27 = (void *)param_1[0x28];
          bVar37 = true;
        }
LAB_00102b0e:
        pvVar27 = (void *)((long)pvVar27 + __n);
        if ((pvVar27 == (void *)0x0) || (bVar37)) {
LAB_00102c81:
          ZSTDMT_waitForLdmComplete(param_1,pvVar27,uVar30);
          param_1[0x27] = 0;
          param_1[0x25] = pvVar27;
          param_1[0x26] = uVar30;
        }
        else {
          if ((pvVar27 == (void *)((long)pvVar27 + uVar30)) ||
             ((((void *)(local_60 + (long)pvVar41) == pvVar41 ||
               ((void *)(local_60 + (long)pvVar41) <= pvVar27)) ||
              ((void *)((long)pvVar27 + uVar30) <= pvVar41)))) goto LAB_00102c81;
          pvVar27 = (void *)param_1[0x25];
        }
        uVar24 = param_3[1];
        uVar30 = param_3[2];
        if (pvVar27 != (void *)0x0) goto LAB_00102169;
        iVar22 = *(int *)(param_1 + 0x22);
        uVar23 = *(uint *)((long)param_1 + 0xb24);
        bVar37 = false;
      }
      else {
LAB_00102169:
        uVar40 = param_1[0x27];
        uVar24 = uVar24 - uVar30;
        __src = (byte *)(*param_3 + uVar30);
        uVar30 = param_1[0x20] - uVar40;
        if (uVar24 < param_1[0x20] - uVar40) {
          uVar30 = uVar24;
        }
        if (((*(int *)((long)param_1 + 0x84) == 0) || (uVar24 + uVar40 < 0x20000)) ||
           (uVar40 + uVar30 < 0x20)) {
LAB_00102818:
          bVar37 = uVar30 != 0;
          uVar29 = uVar30;
        }
        else if (uVar40 < 0x20000) {
          uVar29 = 0x20000 - uVar40;
          if (uVar29 < 0x20) {
            uVar35 = 0;
            local_58 = (byte *)((long)pvVar27 + (uVar40 - 0x20));
            uVar24 = 0;
            do {
              lVar31 = uVar35 + 0x1ffe0;
              uVar35 = uVar35 + 1;
              uVar24 = uVar24 * -0x30e44323485a9b9d + 10 + (ulong)*(byte *)((long)pvVar27 + lVar31);
            } while (uVar35 < uVar40 - 0x1ffe0);
            pbVar33 = __src;
            do {
              bVar2 = *pbVar33;
              pbVar33 = pbVar33 + 1;
              uVar24 = uVar24 * -0x30e44323485a9b9d + 10 + (ulong)bVar2;
            } while (pbVar33 != __src + uVar29);
          }
          else {
            local_58 = __src + (0x1ffe0 - uVar40);
            uVar24 = 0;
            pbVar33 = local_58;
            do {
              bVar2 = *pbVar33;
              pbVar33 = pbVar33 + 1;
              uVar24 = uVar24 * -0x30e44323485a9b9d + 10 + (ulong)bVar2;
            } while (pbVar33 != __src + (0x20000 - uVar40));
          }
LAB_00102234:
          if (uVar30 <= uVar29) goto LAB_00102818;
          do {
            if (uVar29 < 0x20) {
              bVar2 = local_58[uVar29];
            }
            else {
              bVar2 = __src[uVar29 - 0x20];
            }
            pbVar33 = __src + uVar29;
            uVar29 = uVar29 + 1;
            uVar24 = (uVar24 - ((ulong)bVar2 + 10) * param_1[0x163]) * -0x30e44323485a9b9d + 10 +
                     (ulong)*pbVar33;
            if ((~uVar24 & param_1[0x162]) == 0) {
              bVar37 = true;
              goto LAB_00102bdb;
            }
          } while (uVar29 < uVar30);
          bVar37 = true;
          uVar29 = uVar30;
        }
        else {
          local_58 = (byte *)((long)pvVar27 + (uVar40 - 0x20));
          uVar24 = 0;
          pbVar33 = local_58;
          do {
            bVar2 = *pbVar33;
            pbVar33 = pbVar33 + 1;
            uVar24 = uVar24 * -0x30e44323485a9b9d + 10 + (ulong)bVar2;
          } while (pbVar33 != local_58 + 0x20);
          if ((param_1[0x162] & ~uVar24) != 0) {
            uVar29 = 0;
            goto LAB_00102234;
          }
          bVar37 = false;
          uVar29 = 0;
LAB_00102bdb:
          if (param_4 == 0) {
            param_4 = 1;
          }
        }
        memcpy((void *)((long)pvVar27 + uVar40),__src,uVar29);
        iVar22 = *(int *)(param_1 + 0x22);
        uVar23 = *(uint *)((long)param_1 + 0xb24);
        uVar30 = param_3[2] + uVar29;
        param_3[2] = uVar30;
        param_1[0x27] = param_1[0x27] + uVar29;
        uVar24 = param_3[1];
      }
      if ((uVar24 <= uVar30) || (param_4 != 2)) {
        uVar32 = *(uint *)(param_1 + 0x164);
        if (iVar22 != 0) goto LAB_001022cd;
        lVar31 = param_1[1];
        uVar28 = (uint)(param_4 == 2);
        goto LAB_0010247b;
      }
      if (iVar22 != 0) goto LAB_00102809;
      uVar32 = *(uint *)(param_1 + 0x164);
      lVar31 = param_1[1];
LAB_00102916:
      uVar30 = param_1[0x27];
      param_4 = 1;
      iVar22 = 1;
      if ((uVar30 < (ulong)param_1[0x20]) && (uVar30 == 0)) goto LAB_0010230a;
LAB_001024a8:
      param_4 = iVar22;
      uVar28 = *(uint *)(param_1 + 0x165);
      if (uVar28 <= uVar32 + uVar23) {
        lVar34 = param_1[0x25];
        uVar26 = param_1[0x23];
        uVar3 = param_1[0x24];
        pauVar39 = (undefined1 (*) [16])((ulong)(uVar32 & uVar28) * 0x170 + lVar31);
        *pauVar39 = (undefined1  [16])0x0;
        uVar4 = param_1[5];
        uVar5 = param_1[6];
        uVar6 = param_1[7];
        uVar7 = param_1[8];
        uVar8 = param_1[9];
        uVar9 = param_1[10];
        uVar10 = param_1[0xb];
        uVar11 = param_1[0xc];
        *(undefined8 *)(pauVar39[4] + 8) = uVar26;
        *(undefined8 *)pauVar39[5] = uVar3;
        uVar13 = param_1[0xd];
        uVar14 = param_1[0xe];
        uVar15 = param_1[0xf];
        uVar16 = param_1[0x10];
        *(long *)(pauVar39[5] + 8) = lVar34;
        *(undefined8 *)(pauVar39[7] + 8) = uVar4;
        *(undefined8 *)pauVar39[8] = uVar5;
        uVar17 = param_1[0x11];
        uVar18 = param_1[0x12];
        *(undefined8 *)(pauVar39[8] + 8) = uVar6;
        *(undefined8 *)pauVar39[9] = uVar7;
        uVar19 = param_1[0x13];
        uVar20 = param_1[0x14];
        *(undefined8 *)(pauVar39[9] + 8) = uVar8;
        *(undefined8 *)pauVar39[10] = uVar9;
        uVar26 = param_1[0x15];
        uVar3 = param_1[0x16];
        *(undefined8 *)(pauVar39[10] + 8) = uVar10;
        *(undefined8 *)pauVar39[0xb] = uVar11;
        uVar4 = param_1[0x17];
        uVar5 = param_1[0x18];
        *(undefined8 *)(pauVar39[0xb] + 8) = uVar13;
        *(undefined8 *)pauVar39[0xc] = uVar14;
        uVar6 = param_1[0x19];
        uVar7 = param_1[0x1a];
        *(undefined8 *)(pauVar39[0xc] + 8) = uVar15;
        *(undefined8 *)pauVar39[0xd] = uVar16;
        uVar8 = param_1[0x1b];
        uVar9 = param_1[0x1c];
        *(undefined8 *)(pauVar39[0xd] + 8) = uVar17;
        *(undefined8 *)pauVar39[0xe] = uVar18;
        uVar10 = param_1[0x1d];
        uVar11 = param_1[0x1e];
        *(ulong *)pauVar39[6] = uVar30;
        *(undefined8 *)(pauVar39[0xe] + 8) = uVar19;
        *(undefined8 *)pauVar39[0xf] = uVar20;
        *(undefined8 *)(pauVar39[0xf] + 8) = uVar26;
        *(undefined8 *)pauVar39[0x10] = uVar3;
        *(undefined8 *)(pauVar39[0x10] + 8) = uVar4;
        *(undefined8 *)pauVar39[0x11] = uVar5;
        *(undefined8 *)(pauVar39[0x11] + 8) = uVar6;
        *(undefined8 *)pauVar39[0x12] = uVar7;
        *(undefined8 *)(pauVar39[0x12] + 8) = uVar8;
        *(undefined8 *)pauVar39[0x13] = uVar9;
        *(undefined8 *)(pauVar39[0x13] + 8) = uVar10;
        *(undefined8 *)pauVar39[0x14] = uVar11;
        *(undefined8 *)(pauVar39[0x14] + 8) = param_1[0x1f];
        uVar26 = 0;
        if (uVar28 == 0) {
          uVar26 = param_1[0x16e];
        }
        *(undefined8 *)pauVar39[0x15] = uVar26;
        uVar26 = param_1[0x167];
        *(undefined8 *)(pauVar39[3] + 8) = 0;
        *(undefined8 *)(pauVar39[0x15] + 8) = uVar26;
        *(undefined8 *)pauVar39[4] = 0;
        uVar26 = param_1[2];
        *(undefined8 *)(pauVar39[1] + 8) = param_1[3];
        *(undefined8 *)pauVar39[2] = uVar26;
        *(undefined8 *)(pauVar39[2] + 8) = param_1[4];
        *(undefined8 **)pauVar39[3] = param_1 + 0x2b;
        bVar36 = uVar28 != 0;
        *(uint *)pauVar39[7] = uVar38;
        *(ulong *)(pauVar39[6] + 8) = (ulong)CONCAT14(uVar28 == 0,uVar28);
        iVar22 = *(int *)((long)param_1 + 0x4c);
        *(undefined8 *)pauVar39[0x16] = 0;
        *(uint *)(pauVar39[0x16] + 8) =
             (uint)(iVar22 != 0) & (uint)CONCAT71((int7)((ulong)lVar31 >> 8),bVar36) & uVar38;
        param_1[0x2a] = param_1[0x2a] + uVar30;
        param_1[0x25] = 0;
        *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
        if (param_4 == 2) {
          param_1[0x23] = 0;
          param_1[0x24] = 0;
          *(undefined4 *)((long)param_1 + 0xb2c) = 1;
          if (uVar28 == 0) {
            *(undefined4 *)((long)param_1 + 0x4c) = 0;
          }
          else if (uVar30 == 0) goto LAB_00102949;
        }
        else {
          uVar24 = param_1[0x21];
          if (uVar30 <= (ulong)param_1[0x21]) {
            uVar24 = uVar30;
          }
          param_1[0x24] = uVar24;
          param_1[0x23] = lVar34 + (uVar30 - uVar24);
          if ((uVar30 == 0) && (bVar36)) {
LAB_00102949:
            auVar43 = ZSTDMT_getBuffer(uVar26);
            *(undefined1 (*) [16])(pauVar39[3] + 8) = auVar43;
            uVar26 = 0xffffffffffffffc0;
            if (auVar43._0_8_ != 0) {
              *(undefined8 *)(pauVar39[5] + 8) = 0;
              *(undefined8 *)pauVar39[6] = 0;
              uVar26 = ZSTD_writeLastEmptyBlock(auVar43._0_8_,*(undefined8 *)pauVar39[4]);
            }
            uVar32 = *(uint *)(param_1 + 0x164);
            lVar31 = param_1[1];
            *(undefined8 *)(*pauVar39 + 8) = uVar26;
            *(int *)(param_1 + 0x165) = *(int *)(param_1 + 0x165) + 1;
            uVar23 = *(uint *)((long)param_1 + 0xb24);
            goto LAB_0010230a;
          }
        }
LAB_001026b7:
        iVar22 = POOL_tryAdd(*param_1,ZSTDMT_compressionJob,pauVar39);
        if (iVar22 == 0) {
          *(undefined4 *)(param_1 + 0x22) = 1;
          uVar23 = *(uint *)((long)param_1 + 0xb24);
          uVar32 = *(uint *)(param_1 + 0x164);
          goto LAB_00102306;
        }
        *(int *)(param_1 + 0x165) = *(int *)(param_1 + 0x165) + 1;
        uVar23 = *(uint *)((long)param_1 + 0xb24);
        *(undefined4 *)(param_1 + 0x22) = 0;
        uVar32 = *(uint *)(param_1 + 0x164);
        lVar31 = param_1[1];
      }
    }
    else {
      uVar23 = *(uint *)((long)param_1 + 0xb24);
      uVar32 = *(uint *)(param_1 + 0x164);
      lVar31 = param_1[1];
      bVar37 = false;
      uVar28 = (uint)(param_4 == 2);
LAB_0010247b:
      uVar38 = uVar28;
      uVar30 = param_1[0x27];
      if ((ulong)param_1[0x20] <= uVar30) {
LAB_001024a0:
        uVar38 = (uint)(param_4 == 2);
        iVar22 = param_4;
        goto LAB_001024a8;
      }
      if (param_4 != 0) {
        if (uVar30 != 0) goto LAB_001024a0;
        if (((char)uVar38 != '\0') && (param_4 = 2, *(int *)((long)param_1 + 0xb2c) == 0)) {
          iVar22 = 2;
          goto LAB_001024a8;
        }
      }
    }
  }
  else {
    uVar23 = *(uint *)((long)param_1 + 0xb24);
    bVar37 = false;
    if ((param_4 == 2) && (uVar30 < uVar24)) {
LAB_00102809:
      param_4 = 1;
    }
    uVar32 = *(uint *)(param_1 + 0x164);
LAB_001022cd:
    if (*(uint *)(param_1 + 0x165) <= uVar32 + uVar23) {
      pauVar39 = (undefined1 (*) [16])
                 ((ulong)(*(uint *)(param_1 + 0x165) & uVar32) * 0x170 + param_1[1]);
      goto LAB_001026b7;
    }
LAB_00102306:
    lVar31 = param_1[1];
  }
LAB_0010230a:
  lVar34 = (ulong)(uVar23 & uVar32) * 0x170;
  puVar25 = (ulong *)(lVar31 + lVar34);
  uVar30 = *puVar25;
  uVar24 = puVar25[1];
  uVar40 = puVar25[0xc];
  if (!bVar37) {
    if (uVar23 < *(uint *)(param_1 + 0x165)) {
      do {
        if (puVar25[0x2c] != uVar24) {
          if (uVar24 < 0xffffffffffffff89) goto LAB_0010236a;
          uVar38 = *(uint *)(param_1 + 0x165);
          goto LAB_001028be;
        }
      } while (uVar30 != uVar40);
      if (uVar24 < 0xffffffffffffff89) goto LAB_001023b9;
LAB_001028b0:
      uVar38 = *(uint *)(param_1 + 0x165);
      if (uVar23 < uVar38) {
LAB_001028be:
        uVar23 = uVar23 + 1;
        while( true ) {
          do {
          } while (uVar30 < uVar40);
          *(uint *)((long)param_1 + 0xb24) = uVar23;
          if (uVar38 == uVar23) break;
          puVar25 = (ulong *)((ulong)(uVar23 & uVar32) * 0x170 + lVar31);
          uVar30 = *puVar25;
          uVar40 = puVar25[0xc];
          uVar23 = uVar23 + 1;
        }
      }
    }
    else if (uVar24 < 0xffffffffffffff89) goto LAB_0010236a;
    ZSTDMT_releaseAllJobResources(param_1);
    goto LAB_00102387;
  }
  if (0xffffffffffffff88 < uVar24) goto LAB_001028b0;
LAB_0010236a:
  if (uVar30 == uVar40) {
LAB_001023b9:
    if ((int)puVar25[0x2d] != 0) {
      uVar21 = ZSTD_XXH64_digest(param_1 + 0x14f);
      *(undefined4 *)(puVar25[7] + uVar24) = uVar21;
      uVar24 = uVar24 + 4;
      puVar25[1] = uVar24;
      *(undefined4 *)(puVar25 + 0x2d) = 0;
LAB_0010240d:
      lVar31 = param_2[2];
      uVar29 = puVar25[0x2c];
      uVar35 = param_2[1] - lVar31;
      if (uVar24 - uVar29 < (ulong)(param_2[1] - lVar31)) {
        uVar35 = uVar24 - uVar29;
      }
      if (uVar35 != 0) {
        memcpy((void *)(lVar31 + *param_2),(void *)(uVar29 + puVar25[7]),uVar35);
        lVar31 = param_2[2];
        puVar25 = (ulong *)(param_1[1] + lVar34);
        uVar29 = puVar25[0x2c];
      }
      uVar29 = uVar35 + uVar29;
      param_2[2] = lVar31 + uVar35;
      puVar25[0x2c] = uVar29;
      if (uVar30 == uVar40) {
        if (uVar29 == uVar24) {
          ZSTDMT_releaseBuffer(param_1[2],puVar25[7],puVar25[8]);
          lVar31 = param_1[0x168];
          lVar12 = param_1[0x169];
          lVar34 = lVar34 + param_1[1];
          uVar23 = *(int *)((long)param_1 + 0xb24) + 1;
          uVar29 = *(ulong *)(lVar34 + 0x160);
          *(undefined8 *)(lVar34 + 0x38) = 0;
          *(undefined8 *)(lVar34 + 0x40) = 0;
          *(undefined8 *)(lVar34 + 8) = 0;
          *(uint *)((long)param_1 + 0xb24) = uVar23;
          param_1[0x168] = uVar30 + lVar31;
          param_1[0x169] = uVar24 + lVar12;
          if (uVar24 <= uVar29) goto LAB_0010273c;
        }
        else if (uVar24 <= uVar29) goto LAB_00102736;
      }
      else if (uVar24 <= uVar29) goto LAB_00102378;
      uVar24 = uVar24 - uVar29;
      goto LAB_00102387;
    }
    if (uVar24 != 0) goto LAB_0010240d;
LAB_0010273c:
    if (((*(uint *)(param_1 + 0x165) <= uVar23) && (*(int *)(param_1 + 0x22) == 0)) &&
       (param_1[0x27] == 0)) {
      *(int *)(param_1 + 0x166) = *(int *)((long)param_1 + 0xb2c);
      uVar24 = 0;
      if (param_4 == 2) {
        uVar24 = (ulong)(*(int *)((long)param_1 + 0xb2c) == 0);
      }
      goto LAB_00102387;
    }
  }
  else {
    if (uVar24 != 0) goto LAB_0010240d;
LAB_00102378:
    if (uVar40 <= uVar30) {
LAB_00102736:
      uVar23 = *(uint *)((long)param_1 + 0xb24);
      goto LAB_0010273c;
    }
  }
  uVar24 = 1;
LAB_00102387:
  if (((ulong)param_3[2] < (ulong)param_3[1]) && (uVar24 == 0)) {
    uVar24 = 1;
  }
  return uVar24;
}


