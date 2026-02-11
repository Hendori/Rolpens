
void UDataMemory_init_76_godot(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[3] = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined4 *)param_1[3] = 0xffffffff;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  return;
}



void UDatamemory_assign_76_godot(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *(undefined1 *)(param_1 + 3);
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  *(undefined1 *)(param_1 + 3) = uVar1;
  param_1[6] = uVar2;
  return;
}



undefined1 (*) [16] UDataMemory_createNewInstance_76_godot(int *param_1)

{
  undefined1 (*pauVar1) [16];
  
  if (0 < *param_1) {
    return (undefined1 (*) [16])0x0;
  }
  pauVar1 = (undefined1 (*) [16])uprv_malloc_76_godot(0x38);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    *(undefined8 *)pauVar1[3] = 0;
    pauVar1[1] = (undefined1  [16])0x0;
    *(undefined4 *)pauVar1[3] = 0xffffffff;
    pauVar1[1][8] = 1;
    *pauVar1 = (undefined1  [16])0x0;
    pauVar1[2] = (undefined1  [16])0x0;
    return pauVar1;
  }
  *param_1 = 7;
  return (undefined1 (*) [16])0x0;
}



long UDataMemory_normalizeDataPointer_76_godot(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if (*(short *)(param_1 + 2) != 0x27da) {
    return param_1 + 8;
  }
  return param_1;
}



void UDataMemory_setData_76_godot(long param_1,long param_2)

{
  if ((param_2 != 0) && (*(short *)(param_2 + 2) != 0x27da)) {
    param_2 = param_2 + 8;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



void udata_close_76_godot(undefined1 (*param_1) [16])

{
  if (param_1 == (undefined1 (*) [16])0x0) {
    return;
  }
  uprv_unmapFile_76_godot();
  if (param_1[1][8] != '\0') {
    uprv_free_76_godot(param_1);
    return;
  }
  *(undefined8 *)param_1[3] = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined4 *)param_1[3] = 0xffffffff;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  return;
}



long udata_getMemory_76_godot(long param_1)

{
  ushort uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      uVar1 = udata_getHeaderSize_76_godot(lVar2);
      lVar2 = lVar2 + (ulong)uVar1;
    }
  }
  return lVar2;
}



int udata_getLength_76_godot(long param_1)

{
  int iVar1;
  ushort uVar2;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (-1 < iVar1) {
      uVar2 = udata_getHeaderSize_76_godot(*(long *)(param_1 + 8));
      return iVar1 - (uint)uVar2;
    }
    return -1;
  }
  return -1;
}



undefined8 udata_getRawMemory_76_godot(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



bool UDataMemory_isLoaded_76_godot(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}


