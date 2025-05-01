
void NameValueParserStartElt(long param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  *(undefined4 *)(param_1 + 0x54) = 1;
  uVar1 = 0x3f;
  if ((int)param_3 < 0x40) {
    uVar1 = param_3;
  }
  uVar2 = (ulong)(int)uVar1;
  if (uVar2 < 8) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 != 0) && (*(undefined1 *)(param_1 + 8) = *(undefined1 *)param_2, (uVar1 & 2) != 0))
      {
        *(undefined2 *)(param_1 + 6 + uVar2) = *(undefined2 *)((long)param_2 + (uVar2 - 2));
      }
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 4 + uVar2) = *(undefined4 *)((long)param_2 + (uVar2 - 4));
    }
  }
  else {
    uVar6 = param_1 + 0x10U & 0xfffffffffffffff8;
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + uVar2) = *(undefined8 *)((long)param_2 + (uVar2 - 8));
    lVar4 = (param_1 + 8) - uVar6;
    uVar5 = lVar4 + uVar2 & 0xfffffffffffffff8;
    if (7 < uVar5) {
      uVar3 = 0;
      do {
        *(undefined8 *)(uVar6 + uVar3) = *(undefined8 *)((long)param_2 + (uVar3 - lVar4));
        uVar3 = uVar3 + 8;
      } while (uVar3 < uVar5);
    }
  }
  *(undefined1 *)(param_1 + 8 + uVar2) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



void NameValueParserGetData(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  iVar1 = strcmp((char *)(param_1 + 8),"NewPortListing");
  if (iVar1 == 0) {
    free(*(void **)(param_1 + 0x48));
    pvVar2 = malloc((long)(param_3 + 1));
    *(void **)(param_1 + 0x48) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      lVar3 = __memcpy_chk(pvVar2,param_2,(long)param_3,(long)(param_3 + 1));
      *(int *)(param_1 + 0x50) = param_3;
      *(undefined1 *)(lVar3 + param_3) = 0;
      return;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x58) = param_2;
    *(int *)(param_1 + 0x60) = param_3;
  }
  return;
}



void NameValueParserEndElt(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*(int *)((long)param_1 + 0x54) == 0) {
    return;
  }
  iVar3 = strcmp((char *)(param_1 + 1),"NewPortListing");
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    lVar5 = (long)iVar3;
    puVar4 = (undefined8 *)malloc(200);
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    strncpy((char *)(puVar4 + 1),(char *)(param_1 + 1),0x3f);
    lVar1 = param_1[0xb];
    *(undefined1 *)((long)puVar4 + 0x47) = 0;
    if (lVar1 == 0) {
      *(undefined1 *)(puVar4 + 9) = 0;
    }
    else {
      if (0x7f < iVar3) {
        lVar5 = 0x7f;
      }
      __memcpy_chk(puVar4 + 9,lVar1,lVar5,0x80);
      *(undefined1 *)((long)puVar4 + lVar5 + 0x48) = 0;
    }
    uVar2 = *param_1;
    *param_1 = puVar4;
    *puVar4 = uVar2;
  }
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  return;
}



void ParseNameValue(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_58 [3];
  undefined4 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  code *pcStack_28;
  code *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  param_3[0xc] = 0;
  puVar2 = (undefined8 *)((ulong)(param_3 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_3 -
                       (int)(undefined8 *)((ulong)(param_3 + 1) & 0xfffffffffffffff8)) + 0x68U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20 = NameValueParserGetData;
  local_18 = 0;
  local_30 = 0x100000;
  pcStack_28 = NameValueParserEndElt;
  local_58[0] = param_1;
  local_40 = param_2;
  local_38 = param_3;
  parsexml(local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ClearNameValueList(undefined8 *param_1)

{
  undefined8 *__ptr;
  
  if ((void *)param_1[9] != (void *)0x0) {
    free((void *)param_1[9]);
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  while (__ptr = (undefined8 *)*param_1, __ptr != (undefined8 *)0x0) {
    *param_1 = *__ptr;
    free(__ptr);
  }
  return;
}



long * GetValueFromNameValueList(long *param_1,char *param_2)

{
  int iVar1;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    while (iVar1 = strcmp((char *)(param_1 + 1),param_2), iVar1 != 0) {
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    param_1 = param_1 + 9;
  }
  return param_1;
}


