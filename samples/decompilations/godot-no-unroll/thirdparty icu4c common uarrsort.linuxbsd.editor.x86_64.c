
int uprv_uint16Comparator_76_godot(undefined8 param_1,ushort *param_2,ushort *param_3)

{
  return (uint)*param_2 - (uint)*param_3;
}



int uprv_int32Comparator_76_godot(undefined8 param_1,int *param_2,int *param_3)

{
  return *param_2 - *param_3;
}



ulong uprv_uint32Comparator_76_godot(undefined8 param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_3 <= *param_2) {
    uVar1 = (ulong)(*param_2 != *param_3);
  }
  return uVar1;
}



uint uprv_stableBinarySearch_76_godot
               (long param_1,uint param_2,undefined8 param_3,int param_4,code *param_5,
               undefined8 param_6)

{
  uint unaff_1000004a;
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  bVar1 = false;
  if ((int)param_2 < 9) {
    if ((int)param_2 < 1) {
      return 0xffffffff;
    }
  }
  else {
    do {
      while( true ) {
        uVar3 = (int)(param_2 + uVar4) / 2;
        iVar2 = (*param_5)(param_6,param_3,(int)(param_4 * uVar3) + param_1);
        if (iVar2 == 0) break;
        param_2 = uVar3;
        if (-1 < iVar2) {
          uVar4 = uVar3;
          param_2 = unaff_1000004a;
        }
        unaff_1000004a = param_2;
        if ((int)(param_2 - uVar4) < 9) goto LAB_001000d6;
      }
      uVar4 = uVar3 + 1;
      bVar1 = true;
    } while (8 < (int)(param_2 - uVar4));
LAB_001000d6:
    if ((int)param_2 <= (int)uVar4) goto LAB_00100130;
  }
  param_1 = param_1 + (int)(param_4 * uVar4);
  do {
    iVar2 = (*param_5)(param_6,param_3,param_1);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else if (iVar2 < 0) break;
    uVar4 = uVar4 + 1;
    param_1 = param_1 + param_4;
  } while ((int)uVar4 < (int)param_2);
LAB_00100130:
  uVar3 = uVar4 - 1;
  if (!bVar1) {
    uVar3 = ~uVar4;
  }
  return uVar3;
}



/* doInsertionSort(char*, int, int, int (*)(void const*, void const*, void const*), void const*,
   void*) */

void doInsertionSort(char *param_1,int param_2,int param_3,
                    _func_int_void_ptr_void_ptr_void_ptr *param_4,void *param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  char *__src;
  size_t __n;
  char *__src_00;
  int iVar3;
  int iVar4;
  
  if (1 < param_2) {
    __n = (size_t)param_3;
    __src_00 = param_1 + __n;
    iVar3 = 1;
    do {
      while( true ) {
        uVar1 = uprv_stableBinarySearch_76_godot(param_1,iVar3,__src_00,param_3,param_4,param_5);
        uVar2 = uVar1 + 1;
        if ((int)uVar1 < 0) {
          uVar2 = ~uVar1;
        }
        if (iVar3 <= (int)uVar2) break;
        memcpy(param_6,__src_00,__n);
        iVar4 = iVar3 + 1;
        __src = param_1 + (int)(uVar2 * param_3);
        memmove(__src + __n,__src,(long)(int)(iVar3 - uVar2) * __n);
        memcpy(__src,param_6,__n);
        __src_00 = __src_00 + __n;
        iVar3 = iVar4;
        if (param_2 == iVar4) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      __src_00 = __src_00 + __n;
    } while (param_2 != iVar3);
  }
  return;
}



/* subQuickSort(char*, int, int, int, int (*)(void const*, void const*, void const*), void const*,
   void*, void*) */

void subQuickSort(char *param_1,int param_2,int param_3,int param_4,
                 _func_int_void_ptr_void_ptr_void_ptr *param_5,void *param_6,void *param_7,
                 void *param_8)

{
  int iVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  char *pcVar4;
  char *local_78;
  int local_6c;
  char *local_68;
  int local_50;
  int local_48;
  int local_44;
  
  __n = (size_t)param_4;
  local_48 = param_2;
  local_44 = param_3;
LAB_0010029c:
  if (local_44 <= local_48 + 9) {
    doInsertionSort(param_1 + local_48 * param_4,local_44 - local_48,param_4,param_5,param_6,param_7
                   );
    return;
  }
  memcpy(param_7,param_1 + (long)((local_44 + local_48) / 2) * __n,__n);
  local_78 = param_1 + param_4 * local_48;
  local_68 = param_1 + (long)local_48 * __n;
  iVar3 = local_44;
  iVar2 = local_48;
  do {
    local_6c = iVar2 + 1;
    iVar1 = (*param_5)(param_6,local_78,param_7);
    if (-1 < iVar1) {
      pcVar4 = param_1 + param_4 * (iVar3 + -1);
      local_50 = iVar3;
      iVar3 = iVar3 + -1;
      while( true ) {
        iVar1 = (*param_5)(param_6,param_7,pcVar4);
        pcVar4 = pcVar4 + -param_4;
        if (-1 < iVar1) break;
        local_50 = iVar3;
        iVar3 = iVar3 + -1;
      }
      iVar1 = iVar3;
      if (local_50 <= iVar2) goto LAB_0010038c;
      if (iVar2 < iVar3) {
        memcpy(param_8,local_68,__n);
        memcpy(local_68,param_1 + (long)iVar3 * __n,__n);
        memcpy(param_1 + (long)iVar3 * __n,param_8,__n);
      }
      if (iVar3 <= local_6c) break;
    }
    local_78 = local_78 + __n;
    local_68 = local_68 + __n;
    iVar2 = local_6c;
  } while( true );
  iVar1 = local_50 + -2;
  iVar2 = local_6c;
  local_50 = iVar3;
LAB_0010038c:
  iVar3 = local_44 + -1;
  if (local_50 - local_48 < local_44 - iVar2) {
    if (local_48 < iVar1) {
      subQuickSort(param_1,local_48,local_50,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    if (iVar2 < iVar3) {
      subQuickSort(param_1,iVar2,local_44,param_4,param_5,param_6,param_7,param_8);
    }
    local_44 = local_50;
    iVar3 = iVar1;
    iVar2 = local_48;
  }
  local_48 = iVar2;
  if (iVar3 <= local_48) {
    return;
  }
  goto LAB_0010029c;
}



/* WARNING: Removing unreachable block (ram,0x00100610) */
/* quickSort(char*, int, int, int (*)(void const*, void const*, void const*), void const*,
   UErrorCode*) */

void quickSort(char *param_1,int param_2,int param_3,_func_int_void_ptr_void_ptr_void_ptr *param_4,
              void *param_5,UErrorCode *param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  undefined1 local_208 [456];
  long local_40;
  
  iVar1 = (int)((long)param_3 + 0x1fU >> 5);
  iVar2 = iVar1 * 2;
  puVar4 = local_208;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = false;
  if (0xe < iVar2) {
    puVar4 = (undefined1 *)uprv_malloc_76_godot((long)iVar2 << 5);
    if (puVar4 == (undefined1 *)0x0) {
      *(undefined4 *)param_6 = 7;
      goto LAB_001005ca;
    }
    bVar3 = true;
  }
  subQuickSort(param_1,0,param_2,param_3,param_4,param_5,puVar4,puVar4 + (long)iVar1 * 0x20);
  if (bVar3) {
    uprv_free_76_godot(puVar4);
  }
LAB_001005ca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010079d) */
/* WARNING: Removing unreachable block (ram,0x001007e9) */

void uprv_sortArray_76_godot
               (char *param_1,ulong param_2,int param_3,
               _func_int_void_ptr_void_ptr_void_ptr *param_4,void *param_5,char param_6,
               UErrorCode *param_7)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_108 [232];
  long local_20;
  
  iVar3 = (int)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_7 != (UErrorCode *)0x0) && (*(int *)param_7 < 1)) {
    if (((iVar3 < 1) || (param_1 != (char *)0x0)) &&
       ((0 < param_3 && (param_2 >> 0x1f & 1) == 0 &&
        (param_4 != (_func_int_void_ptr_void_ptr_void_ptr *)0x0)))) {
      if (1 < iVar3) {
        if ((8 < iVar3) && (param_6 == '\0')) {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            quickSort(param_1,iVar3,param_3,param_4,param_5,param_7);
            return;
          }
          goto LAB_001007eb;
        }
        puVar2 = local_108;
        bVar1 = false;
        if (0xff < (long)param_3 + 0x1fU) {
          puVar2 = (undefined1 *)uprv_malloc_76_godot((long)param_3 + 0x1fU & 0xffffffffffffffe0);
          if (puVar2 == (undefined1 *)0x0) {
            *(undefined4 *)param_7 = 7;
            goto LAB_00100689;
          }
          bVar1 = true;
        }
        doInsertionSort(param_1,iVar3,param_3,param_4,param_5,puVar2);
        if (bVar1) {
          uprv_free_76_godot(puVar2);
        }
      }
    }
    else {
      *(undefined4 *)param_7 = 1;
    }
  }
LAB_00100689:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001007eb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


