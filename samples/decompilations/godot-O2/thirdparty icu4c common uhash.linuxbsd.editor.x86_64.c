
UHashtable *
uhash_open_76_godot(undefined8 param_1,undefined8 param_2,undefined8 param_3,UErrorCode *param_4)

{
  int iVar1;
  UHashtable *pUVar2;
  
  if (*(int *)param_4 < 1) {
    pUVar2 = (UHashtable *)uprv_malloc_76_godot(0x50);
    if (pUVar2 == (UHashtable *)0x0) {
      *(undefined4 *)param_4 = 7;
      return (UHashtable *)0x0;
    }
    if (*(int *)param_4 < 1) {
      *(undefined8 *)(pUVar2 + 8) = param_1;
      *(undefined8 *)(pUVar2 + 0x10) = param_2;
      *(undefined8 *)(pUVar2 + 0x18) = param_3;
      pUVar2[0x49] = (UHashtable)0x0;
      *(undefined8 *)(pUVar2 + 0x40) = 0x3f000000;
      *(undefined1 (*) [16])(pUVar2 + 0x20) = (undefined1  [16])0x0;
      _uhash_allocate(pUVar2,4,param_4);
      iVar1 = *(int *)param_4;
      pUVar2[0x49] = (UHashtable)0x1;
      if (iVar1 < 1) {
        return pUVar2;
      }
    }
    else {
      pUVar2[0x49] = (UHashtable)0x1;
    }
    uprv_free_76_godot(pUVar2);
  }
  return (UHashtable *)0x0;
}



UHashtable *
uhash_openSize_76_godot
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,UErrorCode *param_5)

{
  UHashtable *pUVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    if (param_4 <= (int)(&PRIMES)[lVar3]) {
      iVar2 = (int)lVar3;
      goto LAB_001005d5;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x1c);
  iVar2 = 0x1c;
LAB_001005d5:
  if (*(int *)param_5 < 1) {
    pUVar1 = (UHashtable *)uprv_malloc_76_godot(0x50);
    if (pUVar1 == (UHashtable *)0x0) {
      *(undefined4 *)param_5 = 7;
      return (UHashtable *)0x0;
    }
    if (*(int *)param_5 < 1) {
      *(undefined8 *)(pUVar1 + 8) = param_1;
      *(undefined8 *)(pUVar1 + 0x10) = param_2;
      *(undefined8 *)(pUVar1 + 0x18) = param_3;
      pUVar1[0x49] = (UHashtable)0x0;
      *(undefined8 *)(pUVar1 + 0x40) = 0x3f000000;
      *(undefined1 (*) [16])(pUVar1 + 0x20) = (undefined1  [16])0x0;
      _uhash_allocate(pUVar1,iVar2,param_5);
      iVar2 = *(int *)param_5;
      pUVar1[0x49] = (UHashtable)0x1;
      if (iVar2 < 1) {
        return pUVar1;
      }
    }
    else {
      pUVar1[0x49] = (UHashtable)0x1;
    }
    uprv_free_76_godot(pUVar1);
  }
  return (UHashtable *)0x0;
}



UHashtable *
uhash_init_76_godot(UHashtable *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   UErrorCode *param_5)

{
  if (0 < *(int *)param_5) {
    return (UHashtable *)0x0;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  param_1[0x49] = (UHashtable)0x0;
  *(undefined8 *)(param_1 + 0x40) = 0x3f000000;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  _uhash_allocate(param_1,4,param_5);
  if (*(int *)param_5 < 1) {
    return param_1;
  }
  return (UHashtable *)0x0;
}



UHashtable *
uhash_initSize_76_godot
          (UHashtable *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
          UErrorCode *param_6)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (param_5 <= (int)(&PRIMES)[lVar1]) goto LAB_00100730;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1c);
  lVar1 = 0x1c;
LAB_00100730:
  if (*(int *)param_6 < 1) {
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = param_3;
    *(undefined8 *)(param_1 + 0x18) = param_4;
    param_1[0x49] = (UHashtable)0x0;
    *(undefined8 *)(param_1 + 0x40) = 0x3f000000;
    *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
    _uhash_allocate(param_1,(int)lVar1,param_6);
    if (*(int *)param_6 < 1) {
      return param_1;
    }
  }
  return (UHashtable *)0x0;
}



void uhash_close_76_godot(long *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    if ((param_1[4] != 0) || (param_1[5] != 0)) {
      iVar1 = *(int *)((long)param_1 + 0x34);
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          piVar3 = (int *)(lVar4 + (long)iVar2 * 0x18);
          while (*piVar3 < 0) {
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 6;
            if (iVar1 == iVar2) goto LAB_00100830;
          }
          if (((code *)param_1[4] != (code *)0x0) && (*(long *)(piVar3 + 4) != 0)) {
            (*(code *)param_1[4])();
          }
          if (((code *)param_1[5] != (code *)0x0) && (*(long *)(piVar3 + 2) != 0)) {
            (*(code *)param_1[5])();
          }
          iVar1 = *(int *)((long)param_1 + 0x34);
          iVar2 = iVar2 + 1;
          lVar4 = *param_1;
        } while (iVar2 < iVar1);
      }
    }
LAB_00100830:
    uprv_free_76_godot();
    *param_1 = 0;
  }
  if (*(char *)((long)param_1 + 0x49) != '\0') {
    uprv_free_76_godot(param_1);
    return;
  }
  return;
}



undefined8 uhash_setKeyHasher_76_godot(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_2;
  return uVar1;
}



undefined8 uhash_setKeyComparator_76_godot(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return uVar1;
}



undefined8 uhash_setValueComparator_76_godot(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return uVar1;
}



undefined8 uhash_setKeyDeleter_76_godot(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return uVar1;
}



undefined8 uhash_setValueDeleter_76_godot(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return uVar1;
}



void uhash_setResizePolicy_76_godot(UHashtable *param_1,int param_2)

{
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  fVar1 = (float)*(undefined8 *)(RESIZE_POLICY_RATIO_TABLE + (long)(param_2 * 2) * 4);
  fVar2 = (float)((ulong)*(undefined8 *)(RESIZE_POLICY_RATIO_TABLE + (long)(param_2 * 2) * 4) >>
                 0x20);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar1,fVar2);
  *(ulong *)(param_1 + 0x38) =
       CONCAT44((int)((float)*(int *)(param_1 + 0x34) * fVar1),
                (int)((float)*(int *)(param_1 + 0x34) * fVar2));
  _uhash_rehash(param_1,(UErrorCode *)&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uhash_count_76_godot(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



undefined8 uhash_get_76_godot(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  lVar2 = _uhash_find(param_1,param_2,uVar1);
  return *(undefined8 *)(lVar2 + 8);
}



undefined8 uhash_iget_76_godot(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  lVar2 = _uhash_find(param_1,param_2,uVar1);
  return *(undefined8 *)(lVar2 + 8);
}



undefined4 uhash_geti_76_godot(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  lVar2 = _uhash_find(param_1,param_2,uVar1);
  return *(undefined4 *)(lVar2 + 8);
}



undefined4 uhash_igeti_76_godot(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  lVar2 = _uhash_find(param_1,param_2,uVar1);
  return *(undefined4 *)(lVar2 + 8);
}



undefined4 uhash_getiAndFound_76_godot(long param_1,undefined8 param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  puVar2 = (undefined4 *)_uhash_find(param_1,param_2,uVar1);
  *param_3 = (byte)~(byte)((uint)*puVar2 >> 0x18) >> 7;
  return puVar2[2];
}



undefined4 uhash_igetiAndFound_76_godot(long param_1,undefined4 param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  puVar2 = (undefined4 *)_uhash_find(param_1,param_2,uVar1);
  *param_3 = (byte)~(byte)((uint)*puVar2 >> 0x18) >> 7;
  return puVar2[2];
}



void uhash_put_76_godot(void)

{
  _uhash_put();
  return;
}



void uhash_iput_76_godot(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  _uhash_put(param_1,param_2,param_3,2,param_4);
  return;
}



void uhash_puti_76_godot(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4
                        )

{
  _uhash_put(param_1,param_2,param_3,1,param_4);
  return;
}



void uhash_iputi_76_godot
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  _uhash_put(param_1,param_2,param_3,0,param_4);
  return;
}



void uhash_putiAllowZero_76_godot
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  _uhash_put(param_1,param_2,param_3,5,param_4);
  return;
}



void uhash_iputiAllowZero_76_godot
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  _uhash_put(param_1,param_2,param_3,4,param_4);
  return;
}



void uhash_remove_76_godot(void)

{
  _uhash_remove();
  return;
}



void uhash_iremove_76_godot(undefined8 param_1,undefined4 param_2)

{
  _uhash_remove(param_1,param_2);
  return;
}



void uhash_removei_76_godot(void)

{
  _uhash_remove();
  return;
}



void uhash_iremovei_76_godot(undefined8 param_1,undefined4 param_2)

{
  _uhash_remove(param_1,param_2);
  return;
}



uint uhash_containsKey_76_godot(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  puVar2 = (uint *)_uhash_find(param_1,param_2,uVar1);
  return ~*puVar2 >> 0x1f;
}



uint uhash_icontainsKey_76_godot(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  puVar2 = (uint *)_uhash_find(param_1,param_2,uVar1);
  return ~*puVar2 >> 0x1f;
}



int * uhash_find_76_godot(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  piVar2 = (int *)_uhash_find(param_1,param_2,uVar1);
  if (*piVar2 < 0) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



int * uhash_nextElement_76_godot(long *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2 + 1;
  if (iVar2 < *(int *)((long)param_1 + 0x34)) {
    piVar1 = (int *)(*param_1 + (long)iVar2 * 0x18);
    do {
      if (-1 < *piVar1) {
        *param_2 = iVar2;
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 6;
    } while (*(int *)((long)param_1 + 0x34) != iVar2);
  }
  return (int *)0x0;
}



long uhash_removeElement_76_godot(long param_1,int *param_2)

{
  long lVar1;
  
  if (-1 < *param_2) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    lVar1 = *(long *)(param_2 + 2);
    if ((*(code **)(param_1 + 0x20) != (code *)0x0) && (*(long *)(param_2 + 4) != 0)) {
      (**(code **)(param_1 + 0x20))();
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      if (lVar1 != 0) {
        (**(code **)(param_1 + 0x28))(lVar1);
      }
      lVar1 = 0;
    }
    *param_2 = -0x80000000;
    *(undefined1 (*) [16])(param_2 + 2) = (undefined1  [16])0x0;
    return lVar1;
  }
  return 0;
}



void uhash_removeAll_76_godot(long *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((int)param_1[6] == 0) {
    return;
  }
  iVar2 = 0;
  iVar1 = *(int *)((long)param_1 + 0x34);
  if (0 < iVar1) {
    do {
      piVar3 = (int *)(*param_1 + (long)iVar2 * 0x18);
      while (*piVar3 < 0) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
        if (iVar2 == iVar1) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      uhash_removeElement_76_godot(param_1);
      iVar1 = *(int *)((long)param_1 + 0x34);
    } while (iVar2 < iVar1);
  }
  return;
}



undefined8 uhash_hashUChars_76_godot(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = u_strlen_76_godot();
    uVar2 = ustr_hashUCharsN_76_godot(param_1,uVar1);
    return uVar2;
  }
  return 0;
}



undefined8 uhash_hashChars_76_godot(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    uVar2 = ustr_hashCharsN_76_godot(param_1,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}



undefined8 uhash_hashIChars_76_godot(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    uVar2 = ustr_hashICharsN_76_godot(param_1,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}



undefined8 uhash_hashIStringView_76_godot(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = ustr_hashICharsN_76_godot(*(undefined8 *)(param_1 + 2),*param_1);
    return uVar1;
  }
  return 0;
}



undefined8 uhash_equals_76_godot(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  
  if (param_1 == param_2) {
    return 1;
  }
  if ((((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) || (param_1[2] != param_2[2])) ||
     (((param_2[3] != param_1[3] || (param_1[3] == 0)) ||
      (iVar1 = (int)param_1[6], iVar1 != (int)param_2[6])))) {
    return 0;
  }
  if (0 < iVar1) {
    iVar9 = -1;
    iVar10 = 0;
    do {
      iVar9 = iVar9 + 1;
      if (*(int *)((long)param_1 + 0x34) <= iVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      piVar6 = (int *)(*param_1 + (long)iVar9 * 0x18);
      while (*piVar6 < 0) {
        iVar9 = iVar9 + 1;
        piVar6 = piVar6 + 6;
        if (iVar9 == *(int *)((long)param_1 + 0x34)) {
          uVar8 = uhash_equals_76_godot_cold();
          return uVar8;
        }
      }
      uVar8 = *(undefined8 *)(piVar6 + 4);
      uVar2 = *(undefined8 *)(piVar6 + 2);
      uVar5 = (*(code *)param_2[1])(uVar8);
      lVar7 = _uhash_find(param_2,uVar8,uVar5);
      cVar4 = (*(code *)param_1[3])(uVar2,*(undefined8 *)(lVar7 + 8));
      if (cVar4 == '\0') {
        return 0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar1 != iVar10);
  }
  return 1;
}



ulong uhash_compareUChars_76_godot(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  ushort *puVar3;
  ushort uVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    uVar2 = (ulong)*param_1;
    if (*param_1 == 0) {
      uVar4 = *param_2;
    }
    else {
      while (puVar3 = param_2, uVar4 = *puVar3, uVar4 == (ushort)uVar2) {
        puVar1 = param_1 + 1;
        uVar2 = (ulong)*puVar1;
        param_1 = param_1 + 1;
        param_2 = puVar3 + 1;
        if (*puVar1 == 0) {
          return (ulong)(puVar3[1] == 0);
        }
      }
    }
    return CONCAT71((int7)(uVar2 >> 8),(ushort)uVar2 == uVar4);
  }
  return 0;
}



bool uhash_compareChars_76_godot(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  
  if (param_1 == param_2) {
    return true;
  }
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      cVar3 = *param_2;
    }
    else {
      while (pcVar2 = param_2, cVar3 = *pcVar2, cVar3 == cVar1) {
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
        param_2 = pcVar2 + 1;
        if (cVar1 == '\0') {
          return pcVar2[1] == '\0';
        }
      }
    }
    return cVar1 == cVar3;
  }
  return false;
}



bool uhash_compareIChars_76_godot(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  if (param_1 == param_2) {
    return true;
  }
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    return false;
  }
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
LAB_001010e6:
      return *param_2 == cVar1;
    }
    cVar1 = uprv_asciitolower_76_godot();
    cVar2 = uprv_asciitolower_76_godot((int)*param_2);
    if (cVar1 != cVar2) {
      cVar1 = *param_1;
      goto LAB_001010e6;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while( true );
}



undefined8 uhash_compareIStringView_76_godot(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (((param_1 != (ulong *)0x0) && (param_2 != (ulong *)0x0)) && (*param_2 == *param_1)) {
    if (*param_1 != 0) {
      uVar3 = 0;
      do {
        cVar1 = uprv_asciitolower_76_godot((int)*(char *)(param_1[1] + uVar3));
        cVar2 = uprv_asciitolower_76_godot((int)*(char *)(param_2[1] + uVar3));
        if (cVar1 != cVar2) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
    return 1;
  }
  return 0;
}



undefined4 uhash_hashLong_76_godot(undefined4 param_1)

{
  return param_1;
}



bool uhash_compareLong_76_godot(int param_1,int param_2)

{
  return param_1 == param_2;
}



void uhash_equals_76_godot_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


