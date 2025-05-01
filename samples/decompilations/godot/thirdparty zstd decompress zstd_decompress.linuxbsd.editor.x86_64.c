
/* WARNING: Removing unreachable block (ram,0x00100087) */
/* WARNING: Removing unreachable block (ram,0x00100012) */

uint ZSTD_initDCtx_internal(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x75d8) = 0;
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar2 = *puVar1;
  *(undefined8 *)(param_1 + 0x74d8) = 0;
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x75fc) = 0;
  *(undefined8 *)(param_1 + 0x7620) = 0;
  *(undefined8 *)(param_1 + 0x7628) = 0;
  *(undefined8 *)(param_1 + 0x7648) = 0;
  *(undefined4 *)(param_1 + 0x761c) = 0;
  *(undefined4 *)(param_1 + 0x766c) = 0;
  *(undefined8 *)(param_1 + 0x176d8) = 0;
  *(undefined4 *)(param_1 + 0x75e0) = 1;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  if (6 < uVar2) {
    puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar2 = *puVar1;
    uVar3 = (uint)((~puVar1[1] & 0x108) == 0);
  }
  *(uint *)(param_1 + 0x75e4) = uVar3;
  *(undefined8 *)(param_1 + 0x7608) = 0;
  *(undefined8 *)(param_1 + 0x7638) = 0x8000001;
  *(undefined4 *)(param_1 + 0x7670) = 0;
  *(undefined8 *)(param_1 + 0x7598) = 0;
  *(undefined4 *)(param_1 + 0x7610) = 0;
  *(undefined8 *)(param_1 + 0x7614) = 0;
  return uVar2;
}



long ZSTD_frameHeaderSize_internal(long param_1,ulong param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = -0x48;
  uVar3 = (ulong)(-(uint)(param_3 == 0) & 4) + 1;
  if (uVar3 <= param_2) {
    bVar1 = *(byte *)(param_1 + -1 + uVar3);
    lVar2 = *(long *)(ZSTD_fcs_fieldSize + (ulong)(bVar1 >> 6) * 8) +
            *(long *)(ZSTD_did_fieldSize + (ulong)(bVar1 & 3) * 8) + uVar3 +
            (ulong)(~(uint)(bVar1 >> 5) & 1) +
            ((ulong)(bVar1 >> 6 == 0) & (ulong)(uint)(bVar1 >> 5));
  }
  return lVar2;
}



void ZSTD_DCtx_trace_end_part_0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0x290a;
  local_30 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  local_64 = param_4;
  if (*(long *)(param_1 + 0x75f0) != 0) {
    uVar1 = ZSTD_getDictID_fromDDict();
    local_60._0_4_ = uVar1;
    uVar2 = ZSTD_DDict_dictSize(*(undefined8 *)(param_1 + 0x75f0));
    local_60._4_4_ = *(undefined4 *)(param_1 + 0x75fc);
    local_60._8_8_ = uVar2;
  }
  local_50._8_8_ = param_3;
  local_50._0_8_ = param_2;
  local_30 = param_1;
  ZSTD_trace_decompress_end(*(undefined8 *)(param_1 + 0x176e0),&local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ZSTD_DDictHashSet_emplaceDDict(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ZSTD_getDictID_fromDDict(param_2);
  lVar8 = param_1[1];
  local_44 = iVar2;
  uVar4 = ZSTD_XXH64(&local_44,4,0);
  lVar7 = param_1[2];
  uVar1 = lVar8 - 1;
  uVar4 = uVar4 & uVar1;
  if (lVar7 == lVar8) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    lVar8 = uVar4 * 8;
    plVar5 = (long *)(*param_1 + lVar8);
    if (*plVar5 != 0) {
      do {
        iVar3 = ZSTD_getDictID_fromDDict();
        if (iVar3 == iVar2) {
          *(long *)(*param_1 + lVar8) = param_2;
          goto LAB_001002c0;
        }
        uVar4 = (uVar4 & uVar1) + 1;
        lVar8 = uVar4 * 8;
        plVar5 = (long *)(*param_1 + lVar8);
      } while (*plVar5 != 0);
      lVar7 = param_1[2];
    }
    *plVar5 = param_2;
    param_1[2] = lVar7 + 1;
LAB_001002c0:
    uVar6 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



void ZSTD_DCtx_selectFrameDDict_part_0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  plVar2 = *(long **)(param_1 + 0x7608);
  iVar1 = *(int *)(param_1 + 0x7504);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = plVar2[1];
  local_44 = iVar1;
  uVar5 = ZSTD_XXH64(&local_44,4,0);
  uVar5 = uVar5 & lVar3 - 1U;
  while( true ) {
    iVar4 = ZSTD_getDictID_fromDDict(*(undefined8 *)(*plVar2 + uVar5 * 8));
    if ((iVar4 == 0) || (iVar1 == iVar4)) break;
    uVar5 = (uVar5 & lVar3 - 1U) + 1;
  }
  lVar3 = *(long *)(*plVar2 + uVar5 * 8);
  if (lVar3 != 0) {
    ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
    *(undefined8 *)(param_1 + 0x75e8) = 0;
    *(long *)(param_1 + 0x75f0) = lVar3;
    *(undefined4 *)(param_1 + 0x75f8) = *(undefined4 *)(param_1 + 0x7504);
    *(undefined4 *)(param_1 + 0x7600) = 0xffffffff;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ZSTD_DCtx_refDDict_part_0(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *__ptr;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte bVar12;
  
  bVar12 = 0;
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  if (param_2 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x75f0) = param_2;
  *(undefined4 *)(param_1 + 0x7600) = 0xffffffff;
  if (*(int *)(param_1 + 0x7610) != 1) {
    return 0;
  }
  pcVar1 = *(code **)(param_1 + 0x75b8);
  __ptr = *(undefined8 **)(param_1 + 0x7608);
  uVar2 = *(undefined8 *)(param_1 + 0x75c0);
  pcVar3 = *(code **)(param_1 + 0x75b0);
  if (__ptr == (undefined8 *)0x0) {
    if (pcVar3 == (code *)0x0) {
      __ptr = (undefined8 *)malloc(0x18);
      if (__ptr == (undefined8 *)0x0) {
LAB_0010060e:
        *(undefined8 *)(param_1 + 0x7608) = 0;
        return 0xffffffffffffffc0;
      }
      pvVar5 = calloc(1,0x200);
      *__ptr = pvVar5;
      if (pvVar5 == (void *)0x0) {
        if (pcVar1 == (code *)0x0) {
          free(__ptr);
        }
        else {
          (*pcVar1)(uVar2,__ptr);
        }
        goto LAB_0010060e;
      }
    }
    else {
      __ptr = (undefined8 *)(*pcVar3)(uVar2,0x18);
      if (__ptr == (undefined8 *)0x0) goto LAB_0010060e;
      puVar9 = (undefined8 *)(*pcVar3)(uVar2,0x200);
      *puVar9 = 0;
      puVar9[0x3f] = 0;
      puVar11 = (undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
      for (uVar8 = (ulong)(((int)puVar9 -
                           (int)(undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8)) + 0x200U
                          >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
      }
      *__ptr = puVar9;
    }
    uVar2 = _UNK_00104848;
    __ptr[1] = __LC0;
    __ptr[2] = uVar2;
    *(undefined8 **)(param_1 + 0x7608) = __ptr;
  }
  else {
    uVar8 = __ptr[1];
    if (uVar8 <= (ulong)(__ptr[2] << 2)) {
      lVar4 = uVar8 * 2;
      if (pcVar3 == (code *)0x0) {
        pvVar6 = calloc(1,uVar8 << 4);
        pvVar5 = (void *)*__ptr;
        if (pvVar6 == (void *)0x0) {
          return 0xffffffffffffffc0;
        }
      }
      else {
        pvVar5 = (void *)(*pcVar3)(uVar2);
        pvVar6 = memset(pvVar5,0,uVar8 << 4);
        pvVar5 = (void *)*__ptr;
        uVar8 = __ptr[1];
      }
      __ptr[1] = lVar4;
      uVar10 = 0;
      *__ptr = pvVar6;
      __ptr[2] = 0;
      if (uVar8 == 0) {
        if (pvVar5 == (void *)0x0) goto LAB_00100533;
      }
      else {
        do {
          if ((*(long *)((long)pvVar5 + uVar10 * 8) != 0) &&
             (uVar7 = ZSTD_DDictHashSet_emplaceDDict(__ptr), 0xffffffffffffff88 < uVar7)) {
            return uVar7;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar8);
      }
      if (pcVar1 == (code *)0x0) {
        free(pvVar5);
      }
      else {
        (*pcVar1)(uVar2,pvVar5);
      }
    }
  }
LAB_00100533:
  uVar8 = ZSTD_DDictHashSet_emplaceDDict(__ptr,param_2);
  if (uVar8 < 0xffffffffffffff89) {
    return 0;
  }
  return uVar8;
}



long ZSTD_sizeof_DCtx(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = ZSTD_sizeof_DDict(*(undefined8 *)(param_1 + 0x75e8));
    return *(long *)(param_1 + 0x7648) + *(long *)(param_1 + 0x7628) + 0x176e8 + lVar1;
  }
  return 0;
}



undefined8 ZSTD_estimateDCtxSize(void)

{
  return 0x176e8;
}



/* WARNING: Removing unreachable block (ram,0x001007c5) */
/* WARNING: Removing unreachable block (ram,0x001006fd) */

undefined1  [16] ZSTD_initStaticDCtx(ulong param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  
  if (((param_1 & 7) == 0) && (0x176e7 < param_2)) {
    *(undefined8 *)(param_1 + 0x74d8) = 0;
    puVar1 = (uint *)cpuid_basic_info(0);
    uVar3 = *puVar1;
    uVar4 = puVar1[2];
    *(undefined8 *)(param_1 + 0x75fc) = 0;
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x7628) = 0;
    *(undefined8 *)(param_1 + 0x7648) = 0;
    *(undefined4 *)(param_1 + 0x761c) = 0;
    *(undefined4 *)(param_1 + 0x766c) = 0;
    *(undefined8 *)(param_1 + 0x176d8) = 0;
    *(undefined4 *)(param_1 + 0x75e0) = 1;
    *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
    if (6 < uVar3) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar4 = *(uint *)(lVar2 + 8);
      uVar6 = (uint)((~*(uint *)(lVar2 + 4) & 0x108) == 0);
    }
    *(uint *)(param_1 + 0x75e4) = uVar6;
    *(ulong *)(param_1 + 0x7620) = param_1 + 0x176e8;
    *(undefined8 *)(param_1 + 0x7608) = 0;
    *(undefined8 *)(param_1 + 0x7638) = 0x8000001;
    *(undefined4 *)(param_1 + 0x7670) = 0;
    *(undefined8 *)(param_1 + 0x7598) = 0;
    *(undefined4 *)(param_1 + 0x7610) = 0;
    *(undefined8 *)(param_1 + 0x7614) = 0;
    *(ulong *)(param_1 + 0x75d8) = param_2;
    auVar7._8_4_ = uVar4;
    auVar7._0_8_ = param_1;
    auVar7._12_4_ = 0;
    return auVar7;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3;
  return auVar5 << 0x40;
}



void * ZSTD_createDCtx_advanced(void)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 in_stack_00000008 [16];
  undefined8 in_stack_00000018;
  
  pcVar1 = in_stack_00000008._0_8_;
  pvVar2 = (void *)0x0;
  if ((pcVar1 == (code *)0x0) == (in_stack_00000008._8_8_ == 0)) {
    if (pcVar1 == (code *)0x0) {
      pvVar2 = malloc(0x176e8);
    }
    else {
      pvVar2 = (void *)(*pcVar1)(in_stack_00000018,0x176e8);
    }
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)((long)pvVar2 + 0x75c0) = in_stack_00000018;
      *(code **)((long)pvVar2 + 0x75b0) = pcVar1;
      *(long *)((long)pvVar2 + 0x75b8) = in_stack_00000008._8_8_;
      ZSTD_initDCtx_internal(pvVar2);
    }
  }
  return pvVar2;
}



/* WARNING: Removing unreachable block (ram,0x00100985) */
/* WARNING: Removing unreachable block (ram,0x00100925) */

void * ZSTD_createDCtx(void)

{
  uint *puVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  
  pvVar3 = malloc(0x176e8);
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)((long)pvVar3 + 0x75c0) = 0;
    *(undefined8 *)((long)pvVar3 + 0x75d8) = 0;
    *(undefined8 *)((long)pvVar3 + 0x74d8) = 0;
    *(undefined8 *)((long)pvVar3 + 0x75fc) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7620) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7628) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7648) = 0;
    *(undefined4 *)((long)pvVar3 + 0x761c) = 0;
    *(undefined4 *)((long)pvVar3 + 0x766c) = 0;
    *(undefined8 *)((long)pvVar3 + 0x176d8) = 0;
    *(undefined4 *)((long)pvVar3 + 0x75e0) = 1;
    *(undefined1 (*) [16])((long)pvVar3 + 0x75b0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)pvVar3 + 0x75e8) = (undefined1  [16])0x0;
    puVar1 = (uint *)cpuid_basic_info(0);
    uVar4 = 0;
    if (6 < *puVar1) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar4 = (uint)((~*(uint *)(lVar2 + 4) & 0x108) == 0);
    }
    *(uint *)((long)pvVar3 + 0x75e4) = uVar4;
    *(undefined8 *)((long)pvVar3 + 0x7608) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7638) = 0x8000001;
    *(undefined4 *)((long)pvVar3 + 0x7670) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7598) = 0;
    *(undefined4 *)((long)pvVar3 + 0x7610) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7614) = 0;
  }
  return pvVar3;
}



undefined8 ZSTD_freeDCtx(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  void *__ptr;
  long *__ptr_00;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (*(long *)((long)param_1 + 0x75d8) != 0) {
    return 0xffffffffffffffc0;
  }
  pcVar1 = *(code **)((long)param_1 + 0x75b8);
  uVar2 = *(undefined8 *)((long)param_1 + 0x75c0);
  ZSTD_freeDDict(*(undefined8 *)((long)param_1 + 0x75e8));
  *(undefined4 *)((long)param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])((long)param_1 + 0x75e8) = (undefined1  [16])0x0;
  if (*(void **)((long)param_1 + 0x7620) == (void *)0x0) {
    __ptr_00 = *(long **)((long)param_1 + 0x7608);
    if (__ptr_00 == (long *)0x0) {
      if (pcVar1 == (code *)0x0) goto LAB_00100a8d;
      goto LAB_00100a50;
    }
    __ptr = (void *)*__ptr_00;
    if (__ptr == (void *)0x0) {
      if (pcVar1 != (code *)0x0) goto LAB_00100a3d;
      goto LAB_00100ad8;
    }
    if (pcVar1 == (code *)0x0) goto LAB_00100ad0;
LAB_00100a38:
    (*pcVar1)(uVar2);
  }
  else {
    if (pcVar1 == (code *)0x0) {
      free(*(void **)((long)param_1 + 0x7620));
      __ptr_00 = *(long **)((long)param_1 + 0x7608);
      *(undefined8 *)((long)param_1 + 0x7620) = 0;
      if (__ptr_00 == (long *)0x0) goto LAB_00100a8d;
      __ptr = (void *)*__ptr_00;
      if (__ptr != (void *)0x0) {
LAB_00100ad0:
        free(__ptr);
      }
LAB_00100ad8:
      free(__ptr_00);
LAB_00100a8d:
      free(param_1);
      return 0;
    }
    (*pcVar1)(uVar2);
    __ptr_00 = *(long **)((long)param_1 + 0x7608);
    *(undefined8 *)((long)param_1 + 0x7620) = 0;
    if (__ptr_00 == (long *)0x0) goto LAB_00100a50;
    if (*__ptr_00 != 0) goto LAB_00100a38;
  }
LAB_00100a3d:
  (*pcVar1)(uVar2,__ptr_00);
  *(undefined8 *)((long)param_1 + 0x7608) = 0;
LAB_00100a50:
  (*pcVar1)(uVar2,param_1);
  return 0;
}



void ZSTD_copyDCtx(void *param_1,void *param_2)

{
  memcpy(param_1,param_2,0x7620);
  return;
}



bool ZSTD_isFrame(uint *param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (3 < param_2) {
    bVar1 = true;
    if (*param_1 != 0xfd2fb528) {
      bVar1 = (*param_1 & 0xfffffff0) == 0x184d2a50;
    }
  }
  return bVar1;
}



bool ZSTD_isSkippableFrame(uint *param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (3 < param_2) {
    bVar1 = (*param_1 & 0xfffffff0) == 0x184d2a50;
  }
  return bVar1;
}



long ZSTD_frameHeaderSize(long param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = -0x48;
  if (4 < param_2) {
    bVar1 = *(byte *)(param_1 + 4);
    lVar2 = *(long *)(ZSTD_fcs_fieldSize + (ulong)(bVar1 >> 6) * 8) +
            *(long *)(ZSTD_did_fieldSize + (ulong)(bVar1 & 3) * 8) + 5 +
            (ulong)(~(uint)(bVar1 >> 5) & 1) +
            ((ulong)(bVar1 >> 6 == 0) & (ulong)(uint)(bVar1 >> 5));
  }
  return lVar2;
}



ulong ZSTD_getFrameHeader_advanced
                (undefined1 (*param_1) [16],uint *param_2,size_t param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  void *__dest;
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (param_3 != 0) {
      if (param_2 == (uint *)0x0) goto LAB_00100df0;
      if (4 < param_3) {
        lVar8 = 5;
        *param_1 = (undefined1  [16])0x0;
        param_1[1] = (undefined1  [16])0x0;
        param_1[2] = (undefined1  [16])0x0;
        goto LAB_00100c0c;
      }
      local_24 = 0xfd2fb528;
      __dest = memcpy(&local_24,param_2,param_3);
      if (local_24 != 0xfd2fb528) {
        local_24 = 0x184d2a50;
        memcpy(__dest,param_2,param_3);
        if ((local_24 & 0xfffffff0) != 0x184d2a50) goto LAB_00100cc0;
      }
    }
    uVar3 = 5;
    goto LAB_00100c48;
  }
  uVar3 = 1;
  if (param_3 == 0) goto LAB_00100c48;
  if (param_2 == (uint *)0x0) {
LAB_00100df0:
    uVar3 = 0xffffffffffffffff;
    goto LAB_00100c48;
  }
  lVar8 = 1;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  if (param_4 != 1) {
LAB_00100c0c:
    if (*param_2 != 0xfd2fb528) {
      if ((*param_2 & 0xfffffff0) == 0x184d2a50) {
        uVar3 = 8;
        if (7 < param_3) {
          uVar7 = param_2[1];
          *(undefined4 *)(param_1[1] + 4) = 1;
          *(ulong *)*param_1 = (ulong)uVar7;
          uVar3 = 0;
        }
        goto LAB_00100c48;
      }
LAB_00100cc0:
      uVar3 = 0xfffffffffffffff6;
      goto LAB_00100c48;
    }
  }
  uVar3 = ZSTD_frameHeaderSize_internal(param_2,param_3,param_4);
  if (param_3 < uVar3) goto LAB_00100c48;
  *(int *)(param_1[1] + 8) = (int)uVar3;
  bVar2 = *(byte *)((long)param_2 + lVar8 + -1);
  uVar3 = 0xfffffffffffffff2;
  bVar6 = bVar2 >> 5 & 1;
  if ((bVar2 & 8) != 0) goto LAB_00100c48;
  if (bVar6 == 0) {
    pbVar1 = (byte *)((long)param_2 + lVar8);
    lVar8 = lVar8 + 1;
    uVar3 = 0xfffffffffffffff0;
    bVar4 = (*pbVar1 >> 3) + 10;
    if (0x1f < bVar4) goto LAB_00100c48;
    uVar3 = 1L << bVar4;
    uVar3 = (uVar3 >> 3) * (ulong)(*pbVar1 & 7) + uVar3;
  }
  else {
    uVar3 = 0;
  }
  bVar4 = bVar2 & 3;
  if (bVar4 == 2) {
    uVar7 = (uint)*(ushort *)((long)param_2 + lVar8);
    lVar8 = lVar8 + 2;
  }
  else if (bVar4 == 3) {
    uVar7 = *(uint *)((long)param_2 + lVar8);
    lVar8 = lVar8 + 4;
  }
  else {
    uVar7 = 0;
    if (bVar4 == 1) {
      uVar7 = (uint)*(byte *)((long)param_2 + lVar8);
      lVar8 = lVar8 + 1;
    }
  }
  bVar4 = bVar2 >> 6;
  if (bVar4 == 2) {
    uVar5 = (ulong)*(uint *)((long)param_2 + lVar8);
LAB_00100e37:
    if (bVar6 != 0) {
      uVar3 = uVar5;
    }
  }
  else {
    if (bVar4 == 3) {
      uVar5 = *(ulong *)((long)param_2 + lVar8);
      goto LAB_00100e37;
    }
    if (bVar4 == 1) {
      uVar5 = (ulong)*(ushort *)((long)param_2 + lVar8) + 0x100;
      goto LAB_00100e37;
    }
    uVar5 = 0xffffffffffffffff;
    if (bVar6 != 0) {
      uVar5 = (ulong)*(byte *)((long)param_2 + lVar8);
      uVar3 = uVar5;
    }
  }
  *(ulong *)*param_1 = uVar5;
  *(ulong *)(*param_1 + 8) = uVar3;
  if (0x20000 < uVar3) {
    uVar3 = 0x20000;
  }
  *(uint *)(param_1[1] + 0xc) = uVar7;
  *(int *)param_1[1] = (int)uVar3;
  uVar3 = 0;
  *(uint *)param_1[2] = bVar2 >> 2 & 1;
LAB_00100c48:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



long * ZSTD_findFrameSizeInfo(long *param_1,uint *param_2,ulong param_3,int param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_a4 [4];
  int local_a0;
  undefined1 local_98 [16];
  long local_88;
  long local_78 [2];
  uint local_68;
  uint local_60;
  int local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  if (((param_4 == 0) && (7 < param_3)) && ((*param_2 & 0xfffffff0) == 0x184d2a50)) {
    uVar2 = 0xfffffffffffffff2;
    if ((param_2[1] < 0xfffffff8) && (uVar2 = (ulong)param_2[1] + 8, param_3 < uVar2)) {
      uVar2 = 0xffffffffffffffb8;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    local_98 = auVar1 << 0x40;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = uVar2;
    goto LAB_00100f88;
  }
  uVar2 = ZSTD_getFrameHeader_advanced(local_78,param_2,param_3);
  if (0xffffffffffffff88 < uVar2) {
    *param_1 = 0;
    param_1[1] = uVar2;
    param_1[2] = -2;
    goto LAB_00100f88;
  }
  if (uVar2 == 0) {
    lVar4 = (long)param_2 + (ulong)local_60;
    param_3 = param_3 - local_60;
    lVar3 = 0;
    do {
      uVar2 = ZSTD_getcBlockSize(lVar4,param_3,local_a4);
      if (0xffffffffffffff88 < uVar2) {
LAB_00100f37:
        *param_1 = 0;
        param_1[1] = uVar2;
        param_1[2] = -2;
        goto LAB_00100f88;
      }
      if (param_3 < uVar2 + 3) {
        uVar2 = 0xffffffffffffffb8;
        goto LAB_00100f37;
      }
      lVar4 = lVar4 + uVar2 + 3;
      lVar3 = lVar3 + 1;
      param_3 = (param_3 - 3) - uVar2;
    } while (local_a0 == 0);
    if (local_58 != 0) {
      if (param_3 < 4) goto LAB_00100f70;
      lVar4 = lVar4 + 4;
    }
    local_98._8_8_ = lVar4 - (long)param_2;
    local_98._0_8_ = lVar3;
    if (local_78[0] == -1) {
      local_78[0] = (ulong)local_68 * lVar3;
    }
    param_1[2] = local_78[0];
    *param_1 = lVar3;
    param_1[1] = lVar4 - (long)param_2;
    local_88 = local_78[0];
  }
  else {
LAB_00100f70:
    *param_1 = 0;
    param_1[1] = -0x48;
    param_1[2] = -2;
  }
LAB_00100f88:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



ulong ZSTD_decodeFrameHeader(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = ZSTD_getFrameHeader_advanced
                    (param_1 + 0x74e8,param_2,param_3,*(undefined4 *)(param_1 + 0x7598));
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 != 0) {
      return 0xffffffffffffffb8;
    }
    if (((*(int *)(param_1 + 0x7610) == 1) && (*(long *)(param_1 + 0x7608) != 0)) &&
       (*(long *)(param_1 + 0x75f0) != 0)) {
      ZSTD_DCtx_selectFrameDDict_part_0(param_1);
    }
    if ((*(int *)(param_1 + 0x7504) == 0) ||
       (*(int *)(param_1 + 0x7504) == *(int *)(param_1 + 0x75f8))) {
      if ((*(int *)(param_1 + 0x7508) == 0) || (*(int *)(param_1 + 0x759c) != 0)) {
        *(undefined4 *)(param_1 + 0x75a0) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x75a0) = 1;
        ZSTD_XXH64_reset(param_1 + 0x7538,0);
      }
      *(long *)(param_1 + 0x7518) = *(long *)(param_1 + 0x7518) + param_3;
    }
    else {
      uVar1 = 0xffffffffffffffe0;
    }
  }
  return uVar1;
}



ulong ZSTD_decompressContinue_part_0
                (long param_1,void *param_2,ulong param_3,uint *param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ZSTD_checkContinuity();
  lVar4 = *(long *)(param_1 + 0x7518) + param_5;
  *(long *)(param_1 + 0x7518) = lVar4;
  switch(*(undefined4 *)(param_1 + 0x752c)) {
  case 0:
    if ((*(int *)(param_1 + 0x7598) == 0) && ((*param_4 & 0xfffffff0) == 0x184d2a50)) {
      memcpy((void *)(param_1 + 0x176c4),param_4,param_5);
      *(undefined4 *)(param_1 + 0x752c) = 6;
      *(ulong *)(param_1 + 0x74e0) = 8 - param_5;
    }
    else {
      uVar3 = ZSTD_frameHeaderSize_internal(param_4,param_5);
      *(ulong *)(param_1 + 0x7590) = uVar3;
      if (0xffffffffffffff88 < uVar3) goto code_r0x00101230;
      memcpy((void *)(param_1 + 0x176c4),param_4,param_5);
      *(ulong *)(param_1 + 0x74e0) = uVar3 - param_5;
      *(undefined4 *)(param_1 + 0x752c) = 1;
    }
    break;
  case 1:
    memcpy((void *)(((param_1 + 0x176c4) - param_5) + *(long *)(param_1 + 0x7590)),param_4,param_5);
    uVar3 = ZSTD_decodeFrameHeader(param_1,param_1 + 0x176c4,*(undefined8 *)(param_1 + 0x7590));
    if (0xffffffffffffff88 < uVar3) goto code_r0x00101230;
LAB_001013fe:
    *(undefined8 *)(param_1 + 0x74e0) = 3;
    *(undefined4 *)(param_1 + 0x752c) = 2;
    break;
  case 2:
    uVar3 = ZSTD_getcBlockSize(param_4,3,&uStack_4c);
    if (0xffffffffffffff88 < uVar3) goto code_r0x00101230;
    if (*(uint *)(param_1 + 0x74f8) < uVar3) goto LAB_001014a0;
    *(ulong *)(param_1 + 0x74e0) = uVar3;
    *(undefined4 *)(param_1 + 0x7528) = uStack_4c;
    *(ulong *)(param_1 + 0x75d0) = (ulong)uStack_44;
    if (uVar3 != 0) {
      *(uint *)(param_1 + 0x752c) = 4 - (uint)(iStack_48 == 0);
      break;
    }
    if (iStack_48 == 0) goto LAB_001013fe;
    if (*(int *)(param_1 + 0x7508) != 0) {
      *(undefined8 *)(param_1 + 0x74e0) = 4;
      *(undefined4 *)(param_1 + 0x752c) = 5;
      break;
    }
    goto LAB_00101222;
  case 3:
  case 4:
    iVar1 = *(int *)(param_1 + 0x7528);
    if (iVar1 == 1) {
      param_5 = *(ulong *)(param_1 + 0x75d0);
      if (param_3 < param_5) {
        *(undefined8 *)(param_1 + 0x74e0) = 0;
LAB_00101605:
        uVar3 = FUN_00101230();
        return uVar3;
      }
      if (param_2 != (void *)0x0) {
        memset(param_2,(uint)(byte)*param_4,param_5);
        goto LAB_001014ed;
      }
      *(undefined8 *)(param_1 + 0x74e0) = 0;
      if (param_5 != 0) {
LAB_00101580:
        uVar3 = FUN_00101230();
        return uVar3;
      }
LAB_00101565:
      lVar4 = 0;
      param_5 = 0;
    }
    else {
      if (iVar1 == 2) {
        param_5 = ZSTD_decompressBlock_internal(param_1,param_2,param_3,param_4,param_5,1);
LAB_001014ed:
        *(undefined8 *)(param_1 + 0x74e0) = 0;
        if (0xffffffffffffff88 < param_5) {
          uVar3 = FUN_00101230();
          return uVar3;
        }
      }
      else {
        if (iVar1 != 0) goto LAB_001014a0;
        if (param_3 < param_5) goto LAB_00101605;
        if (param_2 == (void *)0x0) {
          if (param_5 != 0) goto LAB_00101580;
          goto LAB_00101565;
        }
        memmove(param_2,param_4,param_5);
        if (0xffffffffffffff88 < param_5) {
          uVar3 = FUN_00101230();
          return uVar3;
        }
        *(long *)(param_1 + 0x74e0) = *(long *)(param_1 + 0x74e0) - param_5;
      }
      lVar4 = (long)param_2 + param_5;
      if (*(uint *)(param_1 + 0x74f8) < param_5) goto LAB_001014a0;
    }
    *(long *)(param_1 + 0x7520) = *(long *)(param_1 + 0x7520) + param_5;
    if (*(int *)(param_1 + 0x75a0) != 0) {
      ZSTD_XXH64_update(param_1 + 0x7538,param_2,param_5);
    }
    *(long *)(param_1 + 0x74c0) = lVar4;
    uVar3 = param_5;
    if (*(long *)(param_1 + 0x74e0) == 0) {
      if (*(int *)(param_1 + 0x752c) != 4) {
        *(undefined4 *)(param_1 + 0x752c) = 2;
        *(undefined8 *)(param_1 + 0x74e0) = 3;
        uVar3 = FUN_00101230();
        return uVar3;
      }
      if ((*(long *)(param_1 + 0x74e8) == -1) ||
         (*(long *)(param_1 + 0x74e8) == *(long *)(param_1 + 0x7520))) {
        if (*(int *)(param_1 + 0x7508) == 0) {
          if ((*(long *)(param_1 + 0x176e0) != 0) && (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0)) {
            ZSTD_DCtx_trace_end_part_0
                      (param_1,*(undefined8 *)(param_1 + 0x7520),*(undefined8 *)(param_1 + 0x7518),1
                      );
          }
          *(undefined8 *)(param_1 + 0x74e0) = 0;
          *(undefined4 *)(param_1 + 0x752c) = 0;
          uVar3 = FUN_00101230();
          return uVar3;
        }
        *(undefined8 *)(param_1 + 0x74e0) = 4;
        *(undefined4 *)(param_1 + 0x752c) = 5;
        uVar3 = FUN_00101230();
        return uVar3;
      }
LAB_001014a0:
      uVar3 = FUN_00101230();
      return uVar3;
    }
    goto code_r0x00101230;
  case 5:
    if (*(int *)(param_1 + 0x75a0) != 0) {
      uVar2 = ZSTD_XXH64_digest(param_1 + 0x7538);
      uVar3 = 0xffffffffffffffea;
      if (*param_4 != uVar2) goto code_r0x00101230;
    }
    if ((*(long *)(param_1 + 0x176e0) != 0) && (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0)) {
      ZSTD_DCtx_trace_end_part_0(param_1,*(undefined8 *)(param_1 + 0x7520),lVar4,1);
    }
  case 7:
    *(undefined8 *)(param_1 + 0x74e0) = 0;
LAB_00101222:
    *(undefined4 *)(param_1 + 0x752c) = 0;
    break;
  case 6:
    memcpy((void *)((param_1 - param_5) + 0x176cc),param_4,param_5);
    *(undefined4 *)(param_1 + 0x752c) = 7;
    *(ulong *)(param_1 + 0x74e0) = (ulong)*(uint *)(param_1 + 0x176c8);
    break;
  default:
    uVar3 = FUN_00101230();
    return uVar3;
  }
  uVar3 = 0;
code_r0x00101230:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void FUN_00101230(void)

{
  long in_FS_OFFSET;
  long in_stack_00000028;
  
  if (in_stack_00000028 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong switchD_001011b4::caseD_0(void)

{
  ulong uVar1;
  long unaff_RBX;
  size_t unaff_RBP;
  uint *unaff_R14;
  long in_FS_OFFSET;
  long in_stack_00000028;
  
  if ((*(int *)(unaff_RBX + 0x7598) == 0) && ((*unaff_R14 & 0xfffffff0) == 0x184d2a50)) {
    memcpy((void *)(unaff_RBX + 0x176c4),unaff_R14,unaff_RBP);
    *(undefined4 *)(unaff_RBX + 0x752c) = 6;
    *(size_t *)(unaff_RBX + 0x74e0) = 8 - unaff_RBP;
  }
  else {
    uVar1 = ZSTD_frameHeaderSize_internal();
    *(ulong *)(unaff_RBX + 0x7590) = uVar1;
    if (0xffffffffffffff88 < uVar1) goto FUN_00101230;
    memcpy((void *)(unaff_RBX + 0x176c4),unaff_R14,unaff_RBP);
    *(ulong *)(unaff_RBX + 0x74e0) = uVar1 - unaff_RBP;
    *(undefined4 *)(unaff_RBX + 0x752c) = 1;
  }
  uVar1 = 0;
FUN_00101230:
  if (in_stack_00000028 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ZSTD_decompressContinueStream
                (long param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x752c);
  uVar3 = *(ulong *)(param_1 + 0x74e0);
  if (*(int *)(param_1 + 0x7670) == 0) {
    lVar4 = 0;
    if (((iVar1 != 7) &&
        (lVar4 = *(long *)(param_1 + 0x7648) - *(long *)(param_1 + 0x7650), iVar1 - 3U < 2)) &&
       (*(int *)(param_1 + 0x7528) == 0)) {
      if (param_5 < uVar3) {
        uVar3 = param_5;
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
    }
    uVar2 = 0xffffffffffffffb8;
    if ((param_5 != uVar3) ||
       (uVar2 = ZSTD_decompressContinue_part_0
                          (param_1,*(long *)(param_1 + 0x7650) + *(long *)(param_1 + 0x7640),lVar4,
                           param_4), 0xffffffffffffff88 < uVar2)) {
      return uVar2;
    }
    if ((uVar2 == 0) && (iVar1 != 7)) {
      *(undefined4 *)(param_1 + 0x761c) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x761c) = 4;
      *(ulong *)(param_1 + 0x7658) = uVar2 + *(long *)(param_1 + 0x7650);
    }
  }
  else {
    lVar4 = 0;
    if (((iVar1 != 7) && (lVar4 = param_3 - *param_2, iVar1 - 3U < 2)) &&
       (*(int *)(param_1 + 0x7528) == 0)) {
      if (param_5 < uVar3) {
        uVar3 = param_5;
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
    }
    if (param_5 != uVar3) {
      return 0xffffffffffffffb8;
    }
    uVar3 = ZSTD_decompressContinue_part_0(param_1,*param_2,lVar4,param_4);
    if (0xffffffffffffff88 < uVar3) {
      return uVar3;
    }
    *param_2 = *param_2 + uVar3;
    *(undefined4 *)(param_1 + 0x761c) = 2;
  }
  return 0;
}



void ZSTD_getFrameHeader(void)

{
  ZSTD_getFrameHeader_advanced();
  return;
}



undefined8 ZSTD_getFrameContentSize(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48 [2];
  int local_34;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = ZSTD_getFrameHeader_advanced(local_48,param_1,param_2,0);
  if (lVar1 == 0) {
    uVar2 = 0;
    if (local_34 != 1) {
      uVar2 = local_48[0];
    }
  }
  else {
    uVar2 = 0xfffffffffffffffe;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ZSTD_readSkippableFrame(void *param_1,ulong param_2,int *param_3,uint *param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = 0xffffffffffffffb8;
  if (7 < param_5) {
    uVar1 = *param_4;
    uVar3 = (ulong)param_4[1];
    uVar2 = uVar1 & 0xfffffff0;
    if (param_4[1] < 0xfffffff8) {
      if (param_5 < uVar3 + 8) {
        uVar3 = 0xffffffffffffffb8;
        if (uVar2 != 0x184d2a50) {
          uVar3 = 0xfffffffffffffff2;
        }
        return uVar3;
      }
      if (uVar2 != 0x184d2a50) {
        return 0xfffffffffffffff2;
      }
    }
    else {
      if (uVar2 != 0x184d2a50) {
        return 0xfffffffffffffff2;
      }
      if (param_5 < 0xfffffffffffffff2) {
        return 0xffffffffffffffb8;
      }
      uVar3 = 0xffffffffffffffea;
    }
    if (param_2 < uVar3) {
      return 0xffffffffffffffba;
    }
    if ((uVar3 != 0) && (param_1 != (void *)0x0)) {
      memcpy(param_1,param_4 + 2,uVar3);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = uVar1 + 0xe7b2d5b0;
      return uVar3;
    }
  }
  return uVar3;
}



ulong ZSTD_findDecompressedSize(uint *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_68;
  ulong local_60;
  int local_54;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 5) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if ((*param_1 & 0xfffffff0) == 0x184d2a50) {
        if (((param_2 < 8) || (0xfffffff7 < param_1[1])) ||
           (uVar1 = (ulong)param_1[1] + 8, param_2 < uVar1)) goto LAB_00101990;
      }
      else {
        lVar2 = ZSTD_getFrameHeader_advanced(&local_68,param_1,param_2,0);
        if (lVar2 != 0) goto LAB_00101990;
        if (local_54 != 1) {
          if (0xfffffffffffffffd < local_68) goto LAB_00101997;
          bVar4 = CARRY8(local_68,uVar3);
          uVar3 = local_68 + uVar3;
          if (bVar4) goto LAB_00101990;
        }
        ZSTD_findFrameSizeInfo(&local_68,param_1,param_2);
        uVar1 = local_60;
        if (0xffffffffffffff88 < local_60) goto LAB_00101990;
      }
      param_2 = param_2 - uVar1;
      param_1 = (uint *)((long)param_1 + uVar1);
    } while (4 < param_2);
  }
  local_68 = uVar3;
  if (param_2 != 0) {
LAB_00101990:
    local_68 = 0xfffffffffffffffe;
  }
LAB_00101997:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_68;
}



ulong ZSTD_getDecompressedSize(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_48 [2];
  int local_34;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = ZSTD_getFrameHeader_advanced(local_48,param_1,param_2,0);
  uVar2 = 0;
  if (((lVar1 == 0) && (local_34 != 1)) && (uVar2 = local_48[0], 0xfffffffffffffffd < local_48[0]))
  {
    uVar2 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ZSTD_findFrameCompressedSize(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ZSTD_findFrameSizeInfo(auStack_28,param_1,param_2,0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ZSTD_decompressBound(long param_1,long param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  ulong local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    do {
      ZSTD_findFrameSizeInfo(auStack_48,param_1,param_2,0);
      if ((local_38 == -2) || (0xffffffffffffff88 < local_40)) {
        lVar1 = -2;
        break;
      }
      param_1 = param_1 + local_40;
      lVar1 = lVar1 + local_38;
      param_2 = param_2 - local_40;
    } while (param_2 != 0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ZSTD_decompressionMargin(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_98;
  ulong local_90;
  long local_88;
  undefined1 local_78 [16];
  uint local_68;
  int local_64;
  uint local_60;
  int local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    lVar4 = 0;
    do {
      while( true ) {
        ZSTD_findFrameSizeInfo(&local_98,param_1,param_2,0);
        lVar2 = local_88;
        uVar1 = local_90;
        uVar3 = ZSTD_getFrameHeader_advanced(local_78,param_1,param_2);
        if (0xffffffffffffff88 < uVar3) goto LAB_00101c4b;
        if ((0xffffffffffffff88 < uVar1) || (lVar2 == -2)) {
          uVar3 = 0xffffffffffffffec;
          goto LAB_00101c4b;
        }
        if (local_64 == 0) break;
        lVar4 = lVar4 + uVar1;
        param_1 = param_1 + uVar1;
        param_2 = param_2 - uVar1;
        if (param_2 == 0) goto LAB_00101c47;
      }
      lVar4 = lVar4 + local_98 * 3 + (ulong)local_60 + (ulong)(local_58 != 0) * 4;
      if ((uint)uVar5 < local_68) {
        uVar5 = (ulong)local_68;
      }
      param_1 = param_1 + uVar1;
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
LAB_00101c47:
    uVar3 = uVar5 + lVar4;
  }
LAB_00101c4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ZSTD_insertBlock(long param_1,long param_2,long param_3)

{
  ZSTD_checkContinuity();
  *(long *)(param_1 + 0x74c0) = param_2 + param_3;
  return param_3;
}



undefined8 ZSTD_nextSrcSizeToDecompress(long param_1)

{
  return *(undefined8 *)(param_1 + 0x74e0);
}



undefined4 ZSTD_nextInputType(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = *(int *)(param_1 + 0x752c) - 2;
  if (uVar1 < 6) {
    uVar2 = *(undefined4 *)(CSWTCH_158 + (ulong)uVar1 * 4);
  }
  return uVar2;
}



undefined8 ZSTD_decompressContinue(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong in_R8;
  
  uVar1 = *(ulong *)(param_1 + 0x74e0);
  if ((*(int *)(param_1 + 0x752c) - 3U < 2) && (*(int *)(param_1 + 0x7528) == 0)) {
    if (in_R8 < uVar1) {
      uVar1 = in_R8;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
  }
  if (in_R8 != uVar1) {
    return 0xffffffffffffffb8;
  }
  uVar2 = ZSTD_decompressContinue_part_0();
  return uVar2;
}



long ZSTD_loadDEntropy(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  uint local_c0;
  uint local_bc;
  undefined1 local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (8 < param_3) {
    uVar4 = HUF_readDTableX2_wksp(param_1 + 0x2818,param_2 + 8,param_3 - 8,param_1,0x2818,0);
    if (uVar4 < 0xffffffffffffff89) {
      puVar6 = (uint *)(param_3 + param_2);
      lVar8 = param_2 + 8 + uVar4;
      local_c0 = 0x1f;
      uVar4 = FSE_readNCount(local_b8,&local_c0,&local_bc,lVar8,(long)puVar6 - lVar8);
      if (((uVar4 < 0xffffffffffffff89) && (local_c0 < 0x20)) && (local_bc < 9)) {
        lVar2 = param_1 + 0x6828;
        ZSTD_buildFSETable(param_1 + 0x1008,local_b8,local_c0,OF_base,OF_bits,local_bc,lVar2,0x274,0
                          );
        local_c0 = 0x34;
        lVar8 = lVar8 + uVar4;
        uVar4 = FSE_readNCount(local_b8,&local_c0,&local_bc,lVar8,(long)puVar6 - lVar8);
        if (uVar4 < 0xffffffffffffff89) {
          if ((local_c0 < 0x35) && (local_bc < 10)) {
            ZSTD_buildFSETable(param_1 + 0x1810,local_b8,local_c0,ML_base,ML_bits,local_bc,lVar2,
                               0x274,0);
            local_c0 = 0x23;
            lVar8 = lVar8 + uVar4;
            uVar4 = FSE_readNCount(local_b8,&local_c0,&local_bc,lVar8,(long)puVar6 - lVar8);
            if ((uVar4 < 0xffffffffffffff89) && ((local_c0 < 0x24 && (local_bc < 10)))) {
              ZSTD_buildFSETable(param_1,local_b8,local_c0,LL_base,LL_bits,local_bc,lVar2,0x274,0);
              puVar5 = (uint *)(lVar8 + uVar4);
              puVar1 = puVar5 + 3;
              if (puVar1 <= puVar6) {
                puVar7 = (uint *)(param_1 + 0x681c);
                do {
                  uVar3 = *puVar5;
                  puVar5 = puVar5 + 1;
                  if ((uVar3 == 0) || ((ulong)((long)puVar6 - (long)puVar1) < (ulong)uVar3))
                  goto LAB_00101fb8;
                  *puVar7 = uVar3;
                  puVar7 = puVar7 + 1;
                } while (puVar1 != puVar5);
                param_2 = (long)puVar1 - param_2;
                goto LAB_00101fbf;
              }
            }
          }
        }
      }
    }
  }
LAB_00101fb8:
  param_2 = -0x1e;
LAB_00101fbf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ZSTD_decompressBegin(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (PTR_ZSTD_trace_decompress_begin_00107008 != (undefined *)0x0) {
    lVar2 = ZSTD_trace_decompress_begin();
  }
  param_1[0x2edc] = lVar2;
  *(undefined1 (*) [16])(param_1 + 0xea3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe9a) = (undefined1  [16])0x0;
  lVar1 = _UNK_00104858;
  lVar2 = __LC3;
  param_1[0xe9c] = (ulong)(-(uint)((int)param_1[0xeb3] == 0) & 4) + 1;
  *(undefined8 *)((long)param_1 + 0x683c) = 0x400000001;
  *param_1 = (long)(param_1 + 4);
  param_1[1] = (long)(param_1 + 0x306);
  param_1[2] = (long)(param_1 + 0x205);
  param_1[3] = (long)(param_1 + 0x507);
  *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
  *(undefined4 *)(param_1 + 0xebf) = 0;
  *(undefined4 *)(param_1 + 0xebc) = 1;
  *(undefined4 *)((long)param_1 + 0x6844) = 8;
  param_1[0xea5] = lVar2;
  param_1[0xea6] = lVar1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ZSTD_decompressBegin_usingDict(long *param_1,int *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if (PTR_ZSTD_trace_decompress_begin_00107008 != (undefined *)0x0) {
    lVar2 = ZSTD_trace_decompress_begin();
  }
  param_1[0x2edc] = lVar2;
  *(undefined1 (*) [16])(param_1 + 0xea3) = (undefined1  [16])0x0;
  *param_1 = (long)(param_1 + 4);
  *(undefined1 (*) [16])(param_1 + 0xe98) = (undefined1  [16])0x0;
  param_1[0xe9c] = (ulong)(-(uint)((int)param_1[0xeb3] == 0) & 4) + 1;
  *(undefined8 *)((long)param_1 + 0x683c) = 0x400000001;
  param_1[1] = (long)(param_1 + 0x306);
  *(undefined1 (*) [16])(param_1 + 0xe9a) = (undefined1  [16])0x0;
  lVar1 = _UNK_00104858;
  lVar2 = __LC3;
  param_1[2] = (long)(param_1 + 0x205);
  *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
  *(undefined4 *)(param_1 + 0xebf) = 0;
  *(undefined4 *)(param_1 + 0xebc) = 1;
  *(undefined4 *)((long)param_1 + 0x6844) = 8;
  param_1[3] = (long)(param_1 + 0x507);
  param_1[0xea5] = lVar2;
  param_1[0xea6] = lVar1;
  if ((param_2 != (int *)0x0) && (param_3 != 0)) {
    if ((param_3 < 8) || (*param_2 != -0x13cf5bc9)) {
      param_1[0xe9a] = (long)param_2;
      param_1[0xe99] = (long)param_2;
      param_1[0xe98] = param_3 + (long)param_2;
    }
    else {
      *(int *)(param_1 + 0xebf) = param_2[1];
      uVar3 = ZSTD_loadDEntropy(param_1 + 4,param_2,param_3);
      if (0xffffffffffffff88 < uVar3) {
        return 0xffffffffffffffe2;
      }
      param_1[0xea6] = _LC4;
      lVar2 = param_1[0xe98];
      param_1[0xe98] = (long)param_2 + param_3;
      param_1[0xe9b] = lVar2;
      lVar1 = param_1[0xe99];
      param_1[0xe99] = uVar3 + (long)param_2;
      param_1[0xe9a] = (uVar3 + (long)param_2) - (lVar2 - lVar1);
    }
  }
  return 0;
}



ulong ZSTD_decompressBegin_usingDDict(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    uVar3 = ZSTD_decompressBegin();
    if (uVar3 < 0xffffffffffffff89) {
      uVar3 = 0;
    }
  }
  else {
    lVar1 = ZSTD_DDict_dictContent(param_2);
    lVar2 = ZSTD_DDict_dictSize(param_2);
    *(uint *)(param_1 + 0x75fc) = (uint)(*(long *)(param_1 + 0x74d8) != lVar1 + lVar2);
    uVar3 = ZSTD_decompressBegin(param_1);
    if (uVar3 < 0xffffffffffffff89) {
      ZSTD_copyDDictParameters(param_1,param_2);
      uVar3 = 0;
    }
  }
  return uVar3;
}



ulong ZSTD_decompressMultiFrame
                (long param_1,void *param_2,long param_3,uint *param_4,ulong param_5,
                undefined8 param_6,undefined8 param_7,long param_8)

{
  void *__src;
  void *pvVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *__s;
  void *pvVar12;
  long in_FS_OFFSET;
  undefined8 local_88;
  int local_4c;
  int local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_6;
  if (param_8 != 0) {
    local_88 = ZSTD_DDict_dictContent(param_8);
    param_7 = ZSTD_DDict_dictSize(param_8);
  }
  bVar2 = false;
  pvVar12 = param_2;
LAB_00102330:
  while (*(int *)(param_1 + 0x7598) == 0) {
    if (param_5 < 5) {
      if (param_5 == 0) goto LAB_00102835;
      goto LAB_001024dc;
    }
    if ((*param_4 & 0xfffffff0) != 0x184d2a50) goto LAB_00102347;
    if (param_5 < 8) goto LAB_001024dc;
    if (0xfffffff7 < param_4[1]) {
      uVar5 = 0xfffffffffffffff2;
      goto LAB_00102494;
    }
    uVar5 = (ulong)param_4[1] + 8;
    if (param_5 < uVar5) goto LAB_001024dc;
    param_4 = (uint *)((long)param_4 + uVar5);
    param_5 = param_5 - uVar5;
  }
  if (param_5 == 0) {
LAB_00102835:
    uVar5 = (long)pvVar12 - (long)param_2;
    goto LAB_00102494;
  }
LAB_00102347:
  if (param_8 == 0) {
    uVar5 = ZSTD_decompressBegin_usingDict(param_1,local_88,param_7);
  }
  else {
    uVar5 = ZSTD_decompressBegin_usingDDict(param_1,param_8);
  }
  if (0xffffffffffffff88 < uVar5) goto LAB_00102494;
  ZSTD_checkContinuity(param_1,pvVar12,param_3);
  if (*(int *)(param_1 + 0x7598) == 0) {
    if (8 < param_5) {
      uVar10 = 5;
LAB_00102398:
      uVar6 = ZSTD_frameHeaderSize_internal(param_4,uVar10);
      uVar5 = uVar6;
      if (uVar6 < 0xffffffffffffff89) {
        if (param_5 < uVar6 + 3) goto LAB_001024d0;
        uVar5 = ZSTD_decodeFrameHeader(param_1,param_4,uVar6);
        if (uVar5 < 0xffffffffffffff89) {
          uVar4 = *(uint *)(param_1 + 0x7618);
          puVar8 = (uint *)((long)param_4 + uVar6);
          param_5 = param_5 - uVar6;
          if (uVar4 != 0) {
            uVar7 = *(uint *)(param_1 + 0x74f8);
            if (uVar4 < *(uint *)(param_1 + 0x74f8)) {
              uVar7 = uVar4;
            }
            *(uint *)(param_1 + 0x74f8) = uVar7;
          }
          pvVar1 = (void *)((long)pvVar12 + param_3);
          __s = pvVar12;
          do {
            uVar6 = ZSTD_getcBlockSize(puVar8,param_5,&local_4c);
            uVar5 = uVar6;
            if (0xffffffffffffff88 < uVar6) goto LAB_00102483;
            __src = (void *)((long)puVar8 + 3);
            if (param_5 - 3 < uVar6) {
              uVar5 = 0xffffffffffffffb8;
              goto LAB_00102483;
            }
            pvVar9 = __s;
            if ((__s <= __src) && (__src < pvVar1)) {
              pvVar11 = __src;
              if (local_4c == 1) goto LAB_00102542;
LAB_0010246b:
              if (local_4c == 2) {
                uVar5 = ZSTD_decompressBlock_internal
                                  (param_1,__s,(long)pvVar11 - (long)__s,__src,uVar6,0);
                if (uVar5 < 0xffffffffffffff89) goto LAB_00102575;
              }
              else if (local_4c == 0) {
                if (uVar6 <= (ulong)((long)pvVar1 - (long)__s)) {
                  if (__s != (void *)0x0) {
                    memmove(__s,__src,uVar6);
                    pvVar9 = (void *)((long)__s + uVar6);
                    if (*(int *)(param_1 + 0x75a0) == 0) goto LAB_0010258b;
                    goto LAB_00102760;
                  }
                  if (uVar6 == 0) {
                    if (*(int *)(param_1 + 0x75a0) != 0) {
                      pvVar9 = (void *)0x0;
                      uVar5 = 0;
                      goto LAB_00102760;
                    }
                    goto LAB_0010258b;
                  }
                  goto LAB_00102810;
                }
LAB_001027c0:
                uVar5 = 0xffffffffffffffba;
              }
              else {
                uVar5 = 0xffffffffffffffec;
              }
              goto LAB_00102483;
            }
            pvVar11 = pvVar1;
            if (local_4c != 1) goto LAB_0010246b;
LAB_00102542:
            uVar5 = (ulong)local_44;
            if ((ulong)((long)pvVar11 - (long)__s) < uVar5) goto LAB_001027c0;
            if (__s == (void *)0x0) {
              if (uVar5 != 0) {
LAB_00102810:
                uVar5 = 0xffffffffffffffb6;
                goto LAB_00102483;
              }
              if (*(int *)(param_1 + 0x75a0) != 0) {
                pvVar9 = (void *)0x0;
                goto LAB_00102760;
              }
            }
            else {
              memset(__s,(uint)*(byte *)((long)puVar8 + 3),uVar5);
LAB_00102575:
              pvVar9 = (void *)((long)__s + uVar5);
              if (*(int *)(param_1 + 0x75a0) != 0) {
LAB_00102760:
                ZSTD_XXH64_update(param_1 + 0x7538,__s,uVar5);
              }
            }
LAB_0010258b:
            puVar8 = (uint *)((long)__src + uVar6);
            param_5 = (param_5 - 3) - uVar6;
            __s = pvVar9;
          } while (local_48 == 0);
          if ((*(long *)(param_1 + 0x74e8) == -1) ||
             (*(long *)(param_1 + 0x74e8) == (long)pvVar9 - (long)pvVar12)) {
            if (*(int *)(param_1 + 0x7508) != 0) {
              if ((param_5 < 4) ||
                 ((*(int *)(param_1 + 0x759c) == 0 &&
                  (uVar4 = ZSTD_XXH64_digest(param_1 + 0x7538), *puVar8 != uVar4)))) {
                iVar3 = ZSTD_getErrorCode(0xffffffffffffffea);
                if ((iVar3 != 10) || (!bVar2)) {
                  uVar5 = 0xffffffffffffffea;
                  goto LAB_00102494;
                }
LAB_001024dc:
                uVar5 = 0xffffffffffffffb8;
LAB_00102494:
                if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return uVar5;
              }
              puVar8 = puVar8 + 1;
              param_5 = param_5 - 4;
            }
            uVar5 = (long)pvVar9 - (long)pvVar12;
            if ((*(long *)(param_1 + 0x176e0) != 0) && (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0))
            {
              ZSTD_DCtx_trace_end_part_0(param_1,uVar5,(long)puVar8 - (long)param_4,0);
            }
            iVar3 = ZSTD_getErrorCode(uVar5);
            if ((iVar3 == 10) && (bVar2)) goto LAB_001024dc;
            if (0xffffffffffffff88 < uVar5) goto LAB_00102494;
            bVar2 = true;
            param_3 = param_3 - uVar5;
            param_4 = puVar8;
            pvVar12 = pvVar9;
            goto LAB_00102330;
          }
          uVar5 = 0xffffffffffffffec;
          iVar3 = ZSTD_getErrorCode(0xffffffffffffffec);
        }
        else {
          iVar3 = ZSTD_getErrorCode(uVar5);
        }
      }
      else {
LAB_00102483:
        iVar3 = ZSTD_getErrorCode(uVar5);
      }
      if ((iVar3 != 10) || (!bVar2)) goto LAB_00102494;
      goto LAB_001024dc;
    }
  }
  else if (4 < param_5) {
    uVar10 = 1;
    goto LAB_00102398;
  }
LAB_001024d0:
  ZSTD_getErrorCode(0xffffffffffffffb8);
  goto LAB_001024dc;
}



void ZSTD_decompress_usingDict(void)

{
  ZSTD_decompressMultiFrame();
  return;
}



void ZSTD_decompressDCtx(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x7600) != -1) {
    if (*(int *)(param_1 + 0x7600) != 1) {
      ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x7600) = 0;
      *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
      goto LAB_00102971;
    }
    *(undefined4 *)(param_1 + 0x7600) = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x75f0);
LAB_00102971:
  ZSTD_decompressMultiFrame(param_1,param_2,param_3,param_4,param_5,0,0,uVar1);
  return;
}



undefined1  [16]
ZSTD_decompress(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  pvVar1 = malloc(0x176e8);
  if (pvVar1 == (void *)0x0) {
    auVar4._8_8_ = extraout_RDX;
    auVar4._0_8_ = 0xffffffffffffffc0;
    return auVar4;
  }
  *(undefined8 *)((long)pvVar1 + 0x75c0) = 0;
  *(undefined1 (*) [16])((long)pvVar1 + 0x75b0) = (undefined1  [16])0x0;
  ZSTD_initDCtx_internal(pvVar1);
  if (*(int *)((long)pvVar1 + 0x7600) != -1) {
    if (*(int *)((long)pvVar1 + 0x7600) != 1) {
      ZSTD_freeDDict(*(undefined8 *)((long)pvVar1 + 0x75e8));
      uVar2 = 0;
      *(undefined4 *)((long)pvVar1 + 0x7600) = 0;
      *(undefined1 (*) [16])((long)pvVar1 + 0x75e8) = (undefined1  [16])0x0;
      goto LAB_00102a29;
    }
    *(undefined4 *)((long)pvVar1 + 0x7600) = 0;
  }
  uVar2 = *(undefined8 *)((long)pvVar1 + 0x75f0);
LAB_00102a29:
  auVar3._0_8_ = ZSTD_decompressMultiFrame(pvVar1,param_1,param_2,param_3,param_4,0,0);
  ZSTD_freeDCtx(pvVar1);
  auVar3._8_8_ = uVar2;
  return auVar3;
}



int ZSTD_getDictID_fromDict(int *param_1,ulong param_2)

{
  if ((7 < param_2) && (*param_1 == -0x13cf5bc9)) {
    return param_1[1];
  }
  return 0;
}



undefined4 ZSTD_getDictID_fromFrame(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  uVar2 = ZSTD_getFrameHeader_advanced(local_48,param_1,param_2,0);
  uVar1 = 0;
  if (uVar2 < 0xffffffffffffff89) {
    uVar1 = local_38._12_4_;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ZSTD_decompress_usingDDict(void)

{
  ZSTD_decompressMultiFrame();
  return;
}



/* WARNING: Removing unreachable block (ram,0x00102c35) */
/* WARNING: Removing unreachable block (ram,0x00102bd5) */

void * ZSTD_createDStream(void)

{
  uint *puVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  
  pvVar3 = malloc(0x176e8);
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)((long)pvVar3 + 0x75c0) = 0;
    *(undefined8 *)((long)pvVar3 + 0x75d8) = 0;
    *(undefined8 *)((long)pvVar3 + 0x74d8) = 0;
    *(undefined8 *)((long)pvVar3 + 0x75fc) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7620) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7628) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7648) = 0;
    *(undefined4 *)((long)pvVar3 + 0x761c) = 0;
    *(undefined4 *)((long)pvVar3 + 0x766c) = 0;
    *(undefined8 *)((long)pvVar3 + 0x176d8) = 0;
    *(undefined4 *)((long)pvVar3 + 0x75e0) = 1;
    *(undefined1 (*) [16])((long)pvVar3 + 0x75b0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)pvVar3 + 0x75e8) = (undefined1  [16])0x0;
    puVar1 = (uint *)cpuid_basic_info(0);
    uVar4 = 0;
    if (6 < *puVar1) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar4 = (uint)((~*(uint *)(lVar2 + 4) & 0x108) == 0);
    }
    *(uint *)((long)pvVar3 + 0x75e4) = uVar4;
    *(undefined8 *)((long)pvVar3 + 0x7608) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7638) = 0x8000001;
    *(undefined4 *)((long)pvVar3 + 0x7670) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7598) = 0;
    *(undefined4 *)((long)pvVar3 + 0x7610) = 0;
    *(undefined8 *)((long)pvVar3 + 0x7614) = 0;
  }
  return pvVar3;
}



void ZSTD_initStaticDStream(void)

{
  ZSTD_initStaticDCtx();
  return;
}



void * ZSTD_createDStream_advanced(void)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 in_stack_00000008 [16];
  undefined8 in_stack_00000018;
  
  pcVar1 = in_stack_00000008._0_8_;
  pvVar2 = (void *)0x0;
  if ((pcVar1 == (code *)0x0) == (in_stack_00000008._8_8_ == 0)) {
    if (pcVar1 == (code *)0x0) {
      pvVar2 = malloc(0x176e8);
    }
    else {
      pvVar2 = (void *)(*pcVar1)(in_stack_00000018,0x176e8);
    }
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)((long)pvVar2 + 0x75c0) = in_stack_00000018;
      *(code **)((long)pvVar2 + 0x75b0) = pcVar1;
      *(long *)((long)pvVar2 + 0x75b8) = in_stack_00000008._8_8_;
      ZSTD_initDCtx_internal(pvVar2);
    }
  }
  return pvVar2;
}



void ZSTD_freeDStream(void)

{
  ZSTD_freeDCtx();
  return;
}



undefined8 ZSTD_DStreamInSize(void)

{
  return 0x20003;
}



undefined8 ZSTD_DStreamOutSize(void)

{
  return 0x20000;
}



undefined8
ZSTD_DCtx_loadDictionary_advanced
          (long param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x761c) != 0) {
    return 0xffffffffffffffc4;
  }
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = ZSTD_createDDict_advanced(param_2,param_3,param_4,param_5);
    *(long *)(param_1 + 0x75e8) = lVar1;
    if (lVar1 == 0) {
      return 0xffffffffffffffc0;
    }
    *(long *)(param_1 + 0x75f0) = lVar1;
    *(undefined4 *)(param_1 + 0x7600) = 0xffffffff;
  }
  return 0;
}



undefined8
ZSTD_DCtx_loadDictionary_byReference
          (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x761c) != 0) {
    return 0xffffffffffffffc4;
  }
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = ZSTD_createDDict_advanced
                      (param_2,param_3,1,0,param_5,param_6,*(undefined8 *)(param_1 + 0x75b0),
                       *(undefined8 *)(param_1 + 0x75b8),*(undefined8 *)(param_1 + 0x75c0));
    *(long *)(param_1 + 0x75e8) = lVar1;
    if (lVar1 == 0) {
      return 0xffffffffffffffc0;
    }
    *(long *)(param_1 + 0x75f0) = lVar1;
    *(undefined4 *)(param_1 + 0x7600) = 0xffffffff;
  }
  return 0;
}



undefined8
ZSTD_DCtx_loadDictionary
          (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x761c) != 0) {
    return 0xffffffffffffffc4;
  }
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = ZSTD_createDDict_advanced
                      (param_2,param_3,0,0,param_5,param_6,*(undefined8 *)(param_1 + 0x75b0),
                       *(undefined8 *)(param_1 + 0x75b8),*(undefined8 *)(param_1 + 0x75c0));
    *(long *)(param_1 + 0x75e8) = lVar1;
    if (lVar1 == 0) {
      return 0xffffffffffffffc0;
    }
    *(long *)(param_1 + 0x75f0) = lVar1;
    *(undefined4 *)(param_1 + 0x7600) = 0xffffffff;
  }
  return 0;
}



undefined8 ZSTD_DCtx_refPrefix_advanced(long param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x761c) != 0) {
    return 0xffffffffffffffc4;
  }
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = ZSTD_createDDict_advanced(param_2,param_3,1,param_4);
    *(long *)(param_1 + 0x75e8) = lVar1;
    if (lVar1 == 0) {
      return 0xffffffffffffffc0;
    }
    *(long *)(param_1 + 0x75f0) = lVar1;
  }
  *(undefined4 *)(param_1 + 0x7600) = 1;
  return 0;
}



undefined8
ZSTD_DCtx_refPrefix(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x761c) != 0) {
    return 0xffffffffffffffc4;
  }
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = ZSTD_createDDict_advanced
                      (param_2,param_3,1,1,param_5,param_6,*(undefined8 *)(param_1 + 0x75b0),
                       *(undefined8 *)(param_1 + 0x75b8),*(undefined8 *)(param_1 + 0x75c0));
    *(long *)(param_1 + 0x75e8) = lVar1;
    if (lVar1 == 0) {
      return 0xffffffffffffffc0;
    }
    *(long *)(param_1 + 0x75f0) = lVar1;
  }
  *(undefined4 *)(param_1 + 0x7600) = 1;
  return 0;
}



long ZSTD_initDStream_usingDict
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x761c) = 0;
  *(undefined4 *)(param_1 + 0x766c) = 0;
  *(undefined4 *)(param_1 + 0x75e0) = 1;
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = ZSTD_createDDict_advanced
                      (param_2,param_3,0,0,param_5,param_6,*(undefined8 *)(param_1 + 0x75b0),
                       *(undefined8 *)(param_1 + 0x75b8),*(undefined8 *)(param_1 + 0x75c0));
    *(long *)(param_1 + 0x75e8) = lVar1;
    if (lVar1 == 0) {
      return -0x40;
    }
    *(long *)(param_1 + 0x75f0) = lVar1;
    *(undefined4 *)(param_1 + 0x7600) = 0xffffffff;
  }
  return (ulong)(-(uint)(*(int *)(param_1 + 0x7598) == 0) & 4) + 1;
}



char ZSTD_initDStream(long param_1)

{
  *(undefined4 *)(param_1 + 0x761c) = 0;
  *(undefined4 *)(param_1 + 0x766c) = 0;
  *(undefined4 *)(param_1 + 0x75e0) = 1;
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  return (-(*(int *)(param_1 + 0x7598) == 0) & 4U) + 1;
}



ulong ZSTD_initDStream_usingDDict(long param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x761c) = 0;
  *(undefined4 *)(param_1 + 0x766c) = 0;
  *(undefined4 *)(param_1 + 0x75e0) = 1;
  uVar1 = ZSTD_DCtx_refDDict_part_0();
  if (uVar1 < 0xffffffffffffff89) {
    uVar1 = (ulong)(-(uint)(*(int *)(param_1 + 0x7598) == 0) & 4) + 1;
  }
  return uVar1;
}



char ZSTD_resetDStream(long param_1)

{
  *(undefined4 *)(param_1 + 0x761c) = 0;
  *(undefined4 *)(param_1 + 0x766c) = 0;
  *(undefined4 *)(param_1 + 0x75e0) = 1;
  return (-(*(int *)(param_1 + 0x7598) == 0) & 4U) + 1;
}



undefined8 ZSTD_DCtx_refDDict(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x761c) == 0) {
    uVar1 = ZSTD_DCtx_refDDict_part_0();
    return uVar1;
  }
  return 0xffffffffffffffc4;
}



undefined8 ZSTD_DCtx_setMaxWindowSize(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffc4;
  if ((*(int *)(param_1 + 0x761c) == 0) &&
     (uVar1 = 0xffffffffffffffd6, param_2 - 0x400U < 0x7ffffc01)) {
    *(long *)(param_1 + 0x7638) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 ZSTD_DCtx_setFormat(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffc4;
  if ((*(int *)(param_1 + 0x761c) == 0) && (uVar1 = 0xffffffffffffffd6, param_2 < 2)) {
    *(uint *)(param_1 + 0x7598) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined1  [16] ZSTD_dParam_getBounds(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (0x3ec < param_1) {
    bVar4 = param_1 != 0x3ed;
    uVar2 = 0xffffffffffffffd8;
    if (!bVar4) {
      uVar2 = 0;
    }
    uVar3 = 0x400;
    if (bVar4) {
      uVar3 = 0;
    }
    lVar1 = 0;
    if (!bVar4) {
      lVar1 = 0x20000;
    }
    auVar5._8_8_ = (ulong)uVar3 | lVar1 << 0x20;
    auVar5._0_8_ = uVar2;
    return auVar5;
  }
  if (999 < param_1) {
    return ZEXT816(0x100000000) << 0x40;
  }
  bVar4 = param_1 != 100;
  uVar2 = 0xffffffffffffffd8;
  if (!bVar4) {
    uVar2 = 0;
  }
  uVar3 = 10;
  if (bVar4) {
    uVar3 = 0;
  }
  lVar1 = 0;
  if (!bVar4) {
    lVar1 = 0x1f;
  }
  auVar6._8_8_ = (ulong)uVar3 | lVar1 << 0x20;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



undefined8 ZSTD_DCtx_getParameter(long param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 100) {
    iVar1 = 0x1f;
    if (*(uint *)(param_1 + 0x7638) != 0) {
      for (; *(uint *)(param_1 + 0x7638) >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    *param_3 = iVar1;
  }
  else {
    if (5 < param_2 - 1000U) {
      return 0xffffffffffffffd8;
    }
    switch(param_2) {
    case 0x3e9:
      *param_3 = *(int *)(param_1 + 0x7670);
      break;
    case 0x3ea:
      *param_3 = *(int *)(param_1 + 0x759c);
      break;
    case 0x3eb:
      *param_3 = *(int *)(param_1 + 0x7610);
      break;
    case 0x3ec:
      *param_3 = *(int *)(param_1 + 0x7614);
      break;
    case 0x3ed:
      *param_3 = *(int *)(param_1 + 0x7618);
      return 0;
    default:
      *param_3 = *(int *)(param_1 + 0x7598);
    }
  }
  return 0;
}



undefined8 ZSTD_DCtx_setParameter(long param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0xffffffffffffffc4;
  if (*(int *)(param_1 + 0x761c) == 0) {
    if (param_2 == 100) {
      if (param_3 == 0) {
        lVar2 = 0x8000000;
      }
      else {
        if (0x15 < param_3 - 10) {
          return 0xffffffffffffffd6;
        }
        lVar2 = 1L << ((byte)param_3 & 0x3f);
      }
      *(long *)(param_1 + 0x7638) = lVar2;
      uVar1 = 0;
    }
    else if (param_2 - 1000U < 6) {
      switch(param_2) {
      case 0x3e9:
        uVar1 = 0xffffffffffffffd6;
        if (param_3 < 2) {
          *(uint *)(param_1 + 0x7670) = param_3;
          uVar1 = 0;
        }
        break;
      case 0x3ea:
        uVar1 = 0xffffffffffffffd6;
        if (param_3 < 2) {
          *(uint *)(param_1 + 0x759c) = param_3;
          uVar1 = 0;
        }
        break;
      case 0x3eb:
        uVar1 = 0xffffffffffffffd6;
        if ((param_3 < 2) && (uVar1 = 0xffffffffffffffd8, *(long *)(param_1 + 0x75d8) == 0)) {
          *(uint *)(param_1 + 0x7610) = param_3;
          uVar1 = 0;
        }
        break;
      case 0x3ec:
        uVar1 = 0xffffffffffffffd6;
        if (param_3 < 2) {
          *(uint *)(param_1 + 0x7614) = param_3;
          uVar1 = 0;
        }
        break;
      case 0x3ed:
        if ((param_3 == 0) || (uVar1 = 0xffffffffffffffd6, param_3 - 0x400 < 0x1fc01)) {
          *(uint *)(param_1 + 0x7618) = param_3;
          uVar1 = 0;
        }
        break;
      default:
        uVar1 = 0xffffffffffffffd6;
        if (param_3 < 2) {
          *(uint *)(param_1 + 0x7598) = param_3;
          uVar1 = 0;
        }
      }
    }
    else {
      uVar1 = 0xffffffffffffffd8;
    }
  }
  return uVar1;
}



undefined8 ZSTD_DCtx_reset(long param_1,uint param_2)

{
  if ((param_2 & 0xfffffffd) == 1) {
    *(undefined4 *)(param_1 + 0x761c) = 0;
    *(undefined4 *)(param_1 + 0x766c) = 0;
    *(undefined4 *)(param_1 + 0x75e0) = 1;
    if (1 < param_2 - 2) {
      return 0;
    }
  }
  else {
    if (1 < param_2 - 2) {
      return 0;
    }
    if (*(int *)(param_1 + 0x761c) != 0) {
      return 0xffffffffffffffc4;
    }
  }
  ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
  *(undefined4 *)(param_1 + 0x7600) = 0;
  *(undefined8 *)(param_1 + 0x7638) = 0x8000001;
  *(undefined4 *)(param_1 + 0x7670) = 0;
  *(undefined8 *)(param_1 + 0x7598) = 0;
  *(undefined4 *)(param_1 + 0x7610) = 0;
  *(undefined8 *)(param_1 + 0x7614) = 0;
  *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
  return 0;
}



long ZSTD_sizeof_DStream(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = ZSTD_sizeof_DDict(*(undefined8 *)(param_1 + 0x75e8));
    return *(long *)(param_1 + 0x7648) + *(long *)(param_1 + 0x7628) + 0x176e8 + lVar1;
  }
  return 0;
}



ulong ZSTD_decodingBufferSize_min(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0x20000;
  if (param_1 < 0x20001) {
    uVar1 = param_1;
  }
  uVar1 = param_1 + 0x40 + uVar1 * 2;
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  return uVar1;
}



long ZSTD_estimateDStreamSize(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0x20000;
  if (param_1 < 0x20001) {
    uVar1 = param_1;
  }
  return uVar1 * 3 + 0x17728 + param_1;
}



ulong ZSTD_estimateDStreamSize_fromFrame(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  ulong local_40;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ZSTD_getFrameHeader_advanced(auStack_48,param_1,param_2,0);
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 == 0) {
      uVar1 = 0xfffffffffffffff0;
      if (local_40 < 0x80000001) {
        uVar1 = 0x20000;
        if (local_40 < 0x20001) {
          uVar1 = local_40;
        }
        uVar1 = local_40 + 0x17728 + uVar1 * 3;
      }
    }
    else {
      uVar1 = 0xffffffffffffffb8;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ZSTD_decompressStream(long param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  void *__src;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  void *pvVar20;
  long in_FS_OFFSET;
  void *local_60;
  undefined1 local_58 [8];
  ulong local_50;
  long local_40;
  
  lVar15 = *param_2;
  uVar13 = param_2[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  pvVar1 = (void *)(lVar15 + uVar13);
  uVar18 = param_2[1];
  uVar9 = 0xffffffffffffffb8;
  local_60 = pvVar1;
  if (uVar4 <= uVar3) {
    if (uVar18 < uVar13) {
LAB_00103fb0:
      uVar9 = 0xffffffffffffffba;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x761c);
      if (((*(int *)(param_1 + 0x7670) != 1) || (iVar6 == 0)) ||
         ((uVar13 == *(ulong *)(param_1 + 0x7688) && lVar15 == *(long *)(param_1 + 0x7678) &&
          (uVar18 == *(ulong *)(param_1 + 0x7680))))) {
        pvVar2 = (void *)(*param_3 + uVar4);
        pvVar17 = (void *)(lVar15 + uVar18);
        pvVar20 = (void *)(*param_3 + uVar3);
        __src = pvVar2;
LAB_00103901:
        do {
          pvVar11 = local_60;
          switch(iVar6) {
          case 0:
            uVar12 = 0;
            *(undefined4 *)(param_1 + 0x761c) = 1;
            *(undefined1 (*) [16])(param_1 + 0x7650) = (undefined1  [16])0x0;
            *(undefined8 *)(param_1 + 0x7630) = 0;
            lVar15 = *param_2;
            lVar16 = param_2[1];
            *(undefined8 *)(param_1 + 0x7660) = 0;
            *(long *)(param_1 + 0x7678) = lVar15;
            *(long *)(param_1 + 0x7680) = lVar16;
            lVar15 = param_2[2];
            *(undefined4 *)(param_1 + 0x7668) = 0;
            *(long *)(param_1 + 0x7688) = lVar15;
            break;
          case 1:
            uVar12 = *(undefined8 *)(param_1 + 0x7660);
            break;
          case 2:
            goto switchD_00103912_caseD_2;
          case 3:
            iVar6 = *(int *)(param_1 + 0x752c);
            uVar9 = *(ulong *)(param_1 + 0x74e0);
            goto LAB_0010397d;
          case 4:
            lVar15 = *(long *)(param_1 + 0x7650);
            uVar13 = *(long *)(param_1 + 0x7658) - lVar15;
            uVar18 = (long)pvVar17 - (long)local_60;
            uVar9 = uVar13;
            if (uVar18 <= uVar13) {
              uVar9 = uVar18;
            }
            if (uVar9 == 0) {
              if (local_60 != (void *)0x0) goto LAB_00103c2d;
            }
            else {
              memcpy(local_60,(void *)(lVar15 + *(long *)(param_1 + 0x7640)),uVar9);
              lVar15 = *(long *)(param_1 + 0x7650);
LAB_00103c2d:
              local_60 = (void *)((long)pvVar11 + uVar9);
            }
            *(ulong *)(param_1 + 0x7650) = uVar9 + lVar15;
            if (uVar13 <= uVar18) {
              *(undefined4 *)(param_1 + 0x761c) = 2;
              if ((*(ulong *)(param_1 + 0x7648) < *(ulong *)(param_1 + 0x74e8)) &&
                 (*(ulong *)(param_1 + 0x7648) < (ulong)*(uint *)(param_1 + 0x74f8) + uVar9 + lVar15
                 )) {
                *(undefined1 (*) [16])(param_1 + 0x7650) = (undefined1  [16])0x0;
              }
              goto switchD_00103912_caseD_2;
            }
            goto LAB_00103c5b;
          default:
            goto ZSTD_decompressStream_cold;
          }
          lVar15 = param_1 + 0x176c4;
          uVar13 = ZSTD_getFrameHeader_advanced
                             (param_1 + 0x74e8,lVar15,uVar12,*(undefined4 *)(param_1 + 0x7598));
          if (((*(int *)(param_1 + 0x7610) != 0) && (*(long *)(param_1 + 0x7608) != 0)) &&
             (*(long *)(param_1 + 0x75f0) != 0)) {
            ZSTD_DCtx_selectFrameDDict_part_0(param_1);
          }
          pvVar11 = local_60;
          uVar9 = uVar13;
          if (0xffffffffffffff88 < uVar13) goto LAB_0010393a;
          if (uVar13 == 0) {
            uVar9 = *(ulong *)(param_1 + 0x74e8);
            if (uVar9 == 0xffffffffffffffff) {
LAB_00103f78:
              if (((*(int *)(param_1 + 0x7670) == 1) && (*(int *)(param_1 + 0x74fc) != 1)) &&
                 (uVar9 = *(ulong *)(param_1 + 0x74e8), uVar9 != 0xffffffffffffffff)) {
LAB_00103d31:
                if ((ulong)((long)pvVar17 - (long)local_60) < uVar9) goto LAB_00103fb0;
              }
LAB_00103d44:
              if (*(int *)(param_1 + 0x7600) == -1) {
LAB_00103fca:
                uVar12 = *(undefined8 *)(param_1 + 0x75f0);
              }
              else {
                if (*(int *)(param_1 + 0x7600) == 1) {
                  *(undefined4 *)(param_1 + 0x7600) = 0;
                  goto LAB_00103fca;
                }
                ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
                uVar12 = 0;
                *(undefined4 *)(param_1 + 0x7600) = 0;
                *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
              }
              uVar9 = ZSTD_decompressBegin_usingDDict(param_1,uVar12);
              if (0xffffffffffffff88 < uVar9) goto LAB_0010393a;
              if ((*(int *)(param_1 + 0x7598) == 0) &&
                 ((*(uint *)(param_1 + 0x176c4) & 0xfffffff0) == 0x184d2a50)) {
                uVar9 = (ulong)*(uint *)(param_1 + 0x176c8);
                uVar7 = 7;
              }
              else {
                uVar9 = ZSTD_decodeFrameHeader(param_1,lVar15,*(undefined8 *)(param_1 + 0x7660));
                if (0xffffffffffffff88 < uVar9) goto LAB_0010393a;
                uVar9 = 3;
                uVar7 = 2;
              }
              *(undefined4 *)(param_1 + 0x752c) = uVar7;
              uVar13 = *(ulong *)(param_1 + 0x74f0);
              *(ulong *)(param_1 + 0x74e0) = uVar9;
              if (uVar13 < 0x400) {
                uVar13 = 0x400;
              }
              *(ulong *)(param_1 + 0x74f0) = uVar13;
              if (*(ulong *)(param_1 + 0x7638) < uVar13) {
                uVar9 = 0xfffffffffffffff0;
                goto LAB_0010393a;
              }
              uVar8 = *(uint *)(param_1 + 0x7618);
              uVar9 = (ulong)*(uint *)(param_1 + 0x74f8);
              if (uVar8 != 0) {
                if (uVar8 < *(uint *)(param_1 + 0x74f8)) {
                  uVar9 = (ulong)uVar8;
                }
                *(int *)(param_1 + 0x74f8) = (int)uVar9;
              }
              uVar18 = 4;
              if (3 < (uint)uVar9) {
                uVar18 = uVar9;
              }
              uVar19 = 0;
              uVar14 = uVar18;
              if (*(int *)(param_1 + 0x7670) == 0) {
                uVar14 = 0x20000;
                if (uVar13 < 0x20001) {
                  uVar14 = uVar13;
                }
                if (uVar9 < uVar14) {
                  uVar14 = uVar9;
                }
                uVar19 = uVar13 + 0x40 + uVar14 * 2;
                if (*(ulong *)(param_1 + 0x74e8) < uVar19) {
                  uVar19 = *(ulong *)(param_1 + 0x74e8);
                }
                uVar14 = uVar18 + uVar19;
              }
              uVar9 = *(ulong *)(param_1 + 0x7648);
              uVar13 = *(ulong *)(param_1 + 0x7628);
              if (uVar13 + uVar9 < uVar14 * 3) {
                *(undefined8 *)(param_1 + 0x176d8) = 0;
                if (uVar9 < uVar19 || uVar13 < uVar18) goto LAB_00103ece;
              }
              else {
                uVar10 = *(long *)(param_1 + 0x176d8) + 1;
                *(ulong *)(param_1 + 0x176d8) = uVar10;
                if ((uVar9 < uVar19 || uVar13 < uVar18) || (0x7f < uVar10)) {
LAB_00103ece:
                  if (*(long *)(param_1 + 0x75d8) == 0) {
                    uVar12 = *(undefined8 *)(param_1 + 0x75c0);
                    if (*(void **)(param_1 + 0x7620) != (void *)0x0) {
                      if (*(code **)(param_1 + 0x75b8) == (code *)0x0) {
                        free(*(void **)(param_1 + 0x7620));
                        uVar12 = *(undefined8 *)(param_1 + 0x75c0);
                      }
                      else {
                        (**(code **)(param_1 + 0x75b8))(uVar12);
                        uVar12 = *(undefined8 *)(param_1 + 0x75c0);
                      }
                    }
                    *(undefined8 *)(param_1 + 0x7628) = 0;
                    *(undefined8 *)(param_1 + 0x7648) = 0;
                    if (*(code **)(param_1 + 0x75b0) == (code *)0x0) {
                      pvVar11 = malloc(uVar14);
                    }
                    else {
                      pvVar11 = (void *)(**(code **)(param_1 + 0x75b0))(uVar12,uVar14);
                    }
                    *(void **)(param_1 + 0x7620) = pvVar11;
                    if (pvVar11 == (void *)0x0) goto LAB_001040fb;
                  }
                  else {
                    if (*(long *)(param_1 + 0x75d8) - 0x176e8U < uVar14) {
LAB_001040fb:
                      uVar9 = 0xffffffffffffffc0;
                      goto LAB_0010393a;
                    }
                    pvVar11 = *(void **)(param_1 + 0x7620);
                  }
                  *(ulong *)(param_1 + 0x7628) = uVar18;
                  *(ulong *)(param_1 + 0x7640) = (long)pvVar11 + uVar18;
                  *(ulong *)(param_1 + 0x7648) = uVar19;
                }
              }
              *(undefined4 *)(param_1 + 0x761c) = 2;
switchD_00103912_caseD_2:
              iVar6 = *(int *)(param_1 + 0x752c);
              uVar9 = *(ulong *)(param_1 + 0x74e0);
              uVar13 = (long)pvVar20 - (long)__src;
              if ((iVar6 - 3U < 2) && (*(int *)(param_1 + 0x7528) == 0)) {
                uVar18 = uVar13;
                if (uVar9 <= uVar13) {
                  uVar18 = uVar9;
                }
                if (uVar18 == 0) {
                  uVar18 = 1;
                }
              }
              else {
                uVar18 = uVar9;
                if (uVar9 == 0) {
                  *(undefined4 *)(param_1 + 0x761c) = 0;
                  goto LAB_00103c5b;
                }
              }
              if (uVar18 <= uVar13) {
                uVar9 = ZSTD_decompressContinueStream(param_1,&local_60,pvVar17,__src,uVar18);
                if (0xffffffffffffff88 < uVar9) goto LAB_0010393a;
                iVar6 = *(int *)(param_1 + 0x761c);
                __src = (void *)((long)__src + uVar18);
                goto LAB_00103901;
              }
              if (__src != pvVar20) {
                *(undefined4 *)(param_1 + 0x761c) = 3;
LAB_0010397d:
                lVar15 = *(long *)(param_1 + 0x7630);
                uVar13 = uVar9 - lVar15;
                if (iVar6 == 7) {
                  uVar18 = (long)pvVar20 - (long)__src;
                  if (uVar13 < (ulong)((long)pvVar20 - (long)__src)) {
                    uVar18 = uVar13;
                  }
                  if (uVar18 != 0) {
                    __src = (void *)((long)__src + uVar18);
                    *(ulong *)(param_1 + 0x7630) = lVar15 + uVar18;
                  }
                }
                else {
                  if ((ulong)(*(long *)(param_1 + 0x7628) - lVar15) < uVar13) {
                    uVar9 = 0xffffffffffffffec;
                    goto LAB_0010393a;
                  }
                  uVar18 = (long)pvVar20 - (long)__src;
                  if (uVar13 < (ulong)((long)pvVar20 - (long)__src)) {
                    uVar18 = uVar13;
                  }
                  if (uVar18 != 0) {
                    memcpy((void *)(lVar15 + *(long *)(param_1 + 0x7620)),__src,uVar18);
                    __src = (void *)((long)__src + uVar18);
                    *(ulong *)(param_1 + 0x7630) = *(long *)(param_1 + 0x7630) + uVar18;
                  }
                }
                if (uVar13 <= uVar18) {
                  *(undefined8 *)(param_1 + 0x7630) = 0;
                  uVar9 = ZSTD_decompressContinueStream
                                    (param_1,&local_60,pvVar17,*(undefined8 *)(param_1 + 0x7620),
                                     uVar9);
                  if (0xffffffffffffff88 < uVar9) goto LAB_0010393a;
                  iVar6 = *(int *)(param_1 + 0x761c);
                  goto LAB_00103901;
                }
              }
            }
            else {
              if (*(int *)(param_1 + 0x74fc) == 1) goto LAB_00103d44;
              uVar13 = (long)pvVar17 - (long)local_60;
              if (uVar13 < uVar9) {
                if (*(int *)(param_1 + 0x7670) == 1) goto LAB_00103d31;
                goto LAB_00103d44;
              }
              ZSTD_findFrameSizeInfo
                        (local_58,pvVar2,uVar3 - uVar4,*(undefined4 *)(param_1 + 0x7598));
              if (uVar3 - uVar4 < local_50) goto LAB_00103f78;
              if (*(int *)(param_1 + 0x7600) == -1) {
LAB_0010441c:
                uVar12 = *(undefined8 *)(param_1 + 0x75f0);
              }
              else {
                if (*(int *)(param_1 + 0x7600) == 1) {
                  *(undefined4 *)(param_1 + 0x7600) = 0;
                  goto LAB_0010441c;
                }
                ZSTD_freeDDict(*(undefined8 *)(param_1 + 0x75e8));
                *(undefined4 *)(param_1 + 0x7600) = 0;
                uVar12 = 0;
                *(undefined1 (*) [16])(param_1 + 0x75e8) = (undefined1  [16])0x0;
              }
              uVar9 = ZSTD_decompressMultiFrame(param_1,pvVar11,uVar13,pvVar2,local_50,0,0,uVar12);
              if (0xffffffffffffff88 < uVar9) goto LAB_0010393a;
              __src = (void *)((long)pvVar2 + local_50);
              if (pvVar11 != (void *)0x0) {
                pvVar11 = (void *)((long)pvVar11 + uVar9);
              }
              *(undefined8 *)(param_1 + 0x74e0) = 0;
              *(undefined4 *)(param_1 + 0x761c) = 0;
              local_60 = pvVar11;
            }
LAB_00103c5b:
            lVar16 = *param_2;
            lVar5 = param_2[1];
            uVar13 = (long)__src - *param_3;
            lVar15 = *param_2;
            param_3[2] = uVar13;
            param_2[2] = (long)local_60 - lVar15;
            *(long *)(param_1 + 0x7678) = lVar16;
            *(long *)(param_1 + 0x7680) = lVar5;
            *(long *)(param_1 + 0x7688) = param_2[2];
            if ((pvVar1 == local_60) && (__src == pvVar2)) {
              iVar6 = *(int *)(param_1 + 0x766c) + 1;
              *(int *)(param_1 + 0x766c) = iVar6;
              if (0xf < iVar6) {
                if (pvVar17 == local_60) {
                  uVar9 = 0xffffffffffffffb0;
                  goto LAB_0010393a;
                }
                if (__src == pvVar20) {
                  uVar9 = 0xffffffffffffffae;
                  goto LAB_0010393a;
                }
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x766c) = 0;
            }
            if (*(long *)(param_1 + 0x74e0) != 0) {
              lVar15 = 0;
              uVar8 = *(int *)(param_1 + 0x752c) - 2;
              if (uVar8 < 6) {
                lVar15 = (ulong)(*(int *)(CSWTCH_158 + (ulong)uVar8 * 4) == 2) * 3;
              }
              uVar9 = (*(long *)(param_1 + 0x74e0) - *(long *)(param_1 + 0x7630)) + lVar15;
              goto LAB_0010393a;
            }
            if (*(long *)(param_1 + 0x7658) == *(long *)(param_1 + 0x7650)) {
              uVar9 = 0;
              if (*(int *)(param_1 + 0x7668) == 0) goto LAB_0010393a;
              if (uVar13 < (ulong)param_3[1]) {
                param_3[2] = uVar13 + 1;
                goto LAB_0010393a;
              }
              *(undefined4 *)(param_1 + 0x761c) = 2;
            }
            else if (*(int *)(param_1 + 0x7668) == 0) {
              param_3[2] = uVar13 - 1;
              *(undefined4 *)(param_1 + 0x7668) = 1;
            }
            uVar9 = 1;
            goto LAB_0010393a;
          }
          lVar16 = *(long *)(param_1 + 0x7660);
          uVar18 = (long)pvVar20 - (long)__src;
          uVar9 = uVar13 - lVar16;
          if (uVar18 < uVar9) {
            if (uVar18 != 0) {
              memcpy((void *)(lVar15 + lVar16),__src,uVar18);
              lVar16 = uVar18 + *(long *)(param_1 + 0x7660);
              *(long *)(param_1 + 0x7660) = lVar16;
            }
            iVar6 = *(int *)(param_1 + 0x7598);
            param_3[2] = param_3[1];
            uVar9 = ZSTD_getFrameHeader_advanced(param_1 + 0x74e8,lVar15,lVar16,iVar6);
            if (uVar9 < 0xffffffffffffff89) {
              uVar9 = (ulong)(-(uint)(iVar6 == 0) & 4) + 2;
              if (uVar9 < uVar13) {
                uVar9 = uVar13;
              }
              uVar9 = (uVar9 - lVar16) + 3;
            }
            goto LAB_0010393a;
          }
          memcpy((void *)(lVar16 + lVar15),__src,uVar9);
          __src = (void *)((long)__src + uVar9);
          *(ulong *)(param_1 + 0x7660) = uVar13;
          iVar6 = *(int *)(param_1 + 0x761c);
        } while( true );
      }
      uVar9 = 0xffffffffffffff98;
    }
  }
LAB_0010393a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
ZSTD_decompressStream_cold:
  uVar9 = 0xffffffffffffffff;
  goto LAB_0010393a;
}



void ZSTD_decompressStream_simpleArgs
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = *param_4;
  uStack_28 = *param_7;
  local_58 = param_2;
  local_50 = param_3;
  local_38 = param_5;
  local_30 = param_6;
  ZSTD_decompressStream(param_1,&local_58,&local_38);
  *param_4 = uStack_48;
  *param_7 = uStack_28;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ZSTD_decompressContinue_part_0_cold(void)

{
  FUN_00101230();
  return;
}



undefined8 ZSTD_decompressStream_cold(void)

{
  long in_FS_OFFSET;
  long in_stack_00000088;
  
  if (in_stack_00000088 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0xffffffffffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


