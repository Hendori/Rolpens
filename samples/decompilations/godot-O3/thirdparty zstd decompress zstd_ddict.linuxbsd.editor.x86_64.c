
undefined8
ZSTD_initDDict_internal(undefined8 *param_1,void *param_2,ulong param_3,int param_4,int param_5)

{
  int *piVar1;
  void *__dest;
  ulong uVar2;
  
  if ((param_4 == 1) || (param_2 == (void *)0x0)) {
    *param_1 = 0;
    param_1[1] = param_2;
    if (param_2 == (void *)0x0) {
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 0x506) = 0xc00000c;
      *(undefined8 *)((long)param_1 + 0x6ab4) = 0;
      goto joined_r0x00100099;
    }
  }
  else {
    if (param_3 == 0) {
      *param_1 = 0;
      param_1[1] = param_2;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 0x506) = 0xc00000c;
      *(undefined8 *)((long)param_1 + 0x6ab4) = 0;
joined_r0x00100099:
      if (param_5 == 1) {
        return 0;
      }
      goto LAB_0010009b;
    }
    if ((code *)param_1[0xd58] == (code *)0x0) {
      __dest = malloc(param_3);
    }
    else {
      __dest = (void *)(*(code *)param_1[0xd58])(param_1[0xd5a],param_3);
    }
    *param_1 = __dest;
    param_1[1] = __dest;
    if (__dest == (void *)0x0) {
      return 0xffffffffffffffc0;
    }
    memcpy(__dest,param_2,param_3);
  }
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 0x506) = 0xc00000c;
  *(undefined8 *)((long)param_1 + 0x6ab4) = 0;
  if (param_5 == 1) {
    return 0;
  }
  if ((7 < param_3) && (piVar1 = (int *)param_1[1], *piVar1 == -0x13cf5bc9)) {
    *(int *)((long)param_1 + 0x6ab4) = piVar1[1];
    uVar2 = ZSTD_loadDEntropy(param_1 + 3,piVar1,param_3);
    if (uVar2 < 0xffffffffffffff89) {
      *(undefined4 *)(param_1 + 0xd57) = 1;
      return 0;
    }
    return 0xffffffffffffffe2;
  }
LAB_0010009b:
  if (param_5 != 2) {
    return 0;
  }
  return 0xffffffffffffffe2;
}



void ZSTD_freeDDict_part_0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)param_1[0xd59];
  uVar1 = param_1[0xd5a];
  if ((void *)*param_1 == (void *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      free(param_1);
      return;
    }
  }
  else {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      free((void *)*param_1);
      free(param_1);
      return;
    }
    (*UNRECOVERED_JUMPTABLE)(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x001001c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}



undefined8 ZSTD_DDict_dictContent(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 ZSTD_DDict_dictSize(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void ZSTD_copyDDictParameters(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xebf) = *(undefined4 *)(param_2 + 0x6ab4);
  lVar3 = lVar1 + *(long *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x6ab8);
  param_1[0xe98] = lVar3;
  param_1[0xe99] = lVar1;
  param_1[0xe9a] = lVar1;
  param_1[0xe9b] = lVar3;
  if (iVar2 != 0) {
    *param_1 = param_2 + 0x18;
    param_1[1] = param_2 + 0x1828;
    param_1[2] = param_2 + 0x1020;
    param_1[3] = param_2 + 0x2830;
    *(undefined8 *)((long)param_1 + 0x683c) = *(undefined8 *)(param_2 + 0x6834);
    *(undefined4 *)((long)param_1 + 0x6844) = *(undefined4 *)(param_2 + 0x683c);
    iVar2 = 1;
  }
  param_1[0xea6] = CONCAT44(iVar2,iVar2);
  return;
}



void * ZSTD_createDDict_advanced
                 (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,code *param_7,long param_8,undefined8 param_9
                 )

{
  void *pvVar1;
  ulong uVar2;
  
  if ((param_7 == (code *)0x0) == (param_8 == 0)) {
    if (param_7 == (code *)0x0) {
      pvVar1 = malloc(0x6ad8);
    }
    else {
      pvVar1 = (void *)(*param_7)(param_9,0x6ad8);
    }
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((long)pvVar1 + 0x6ad0) = param_9;
      *(code **)((long)pvVar1 + 0x6ac0) = param_7;
      *(long *)((long)pvVar1 + 0x6ac8) = param_8;
      uVar2 = ZSTD_initDDict_internal(pvVar1,param_1,param_2,param_3,param_4);
      if (uVar2 < 0xffffffffffffff89) {
        return pvVar1;
      }
      ZSTD_freeDDict_part_0(pvVar1);
    }
  }
  return (void *)0x0;
}



void * ZSTD_createDDict(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  pvVar1 = malloc(0x6ad8);
  if (pvVar1 != (void *)0x0) {
    *(undefined1 (*) [16])((long)pvVar1 + 0x6ac0) = (undefined1  [16])0x0;
    *(undefined8 *)((long)pvVar1 + 0x6ad0) = 0;
    uVar2 = ZSTD_initDDict_internal(pvVar1,param_1,param_2,0,0);
    if (uVar2 < 0xffffffffffffff89) {
      return pvVar1;
    }
    ZSTD_freeDDict_part_0(pvVar1);
  }
  return (void *)0x0;
}



void * ZSTD_createDDict_byReference(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  pvVar1 = malloc(0x6ad8);
  if (pvVar1 != (void *)0x0) {
    *(undefined1 (*) [16])((long)pvVar1 + 0x6ac0) = (undefined1  [16])0x0;
    *(undefined8 *)((long)pvVar1 + 0x6ad0) = 0;
    uVar2 = ZSTD_initDDict_internal(pvVar1,param_1,param_2,1,0);
    if (uVar2 < 0xffffffffffffff89) {
      return pvVar1;
    }
    ZSTD_freeDDict_part_0(pvVar1);
  }
  return (void *)0x0;
}



ulong ZSTD_initStaticDDict
                (ulong param_1,ulong param_2,void *param_3,size_t param_4,int param_5,
                undefined4 param_6)

{
  ulong uVar1;
  bool bVar2;
  
  bVar2 = (param_1 & 7) != 0;
  if (param_5 == 1) {
    if (param_2 < 0x6ad8) {
      return 0;
    }
    if (bVar2) {
      return 0;
    }
  }
  else {
    if (param_2 < param_4 + 0x6ad8) {
      return 0;
    }
    if (bVar2) {
      return 0;
    }
    if (param_5 == 0) {
      param_3 = memcpy((void *)(param_1 + 0x6ad8),param_3,param_4);
    }
  }
  uVar1 = ZSTD_initDDict_internal(param_1,param_3,param_4,1,param_6);
  if (0xffffffffffffff88 < uVar1) {
    return 0;
  }
  return param_1;
}



undefined8 ZSTD_freeDDict(long param_1)

{
  if (param_1 != 0) {
    ZSTD_freeDDict_part_0();
    return 0;
  }
  return 0;
}



long ZSTD_estimateDDictSize(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x6ad8;
  if (param_2 != 1) {
    lVar1 = param_1 + 0x6ad8;
  }
  return lVar1;
}



long ZSTD_sizeof_DDict(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    return param_1[2] + 0x6ad8;
  }
  return 0x6ad8;
}



undefined4 ZSTD_getDictID_fromDDict(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x6ab4);
  }
  return 0;
}


