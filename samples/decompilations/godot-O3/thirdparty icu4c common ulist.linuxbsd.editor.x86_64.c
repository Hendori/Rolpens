
undefined1 (*) [16] ulist_createEmptyList_76_godot(int *param_1)

{
  undefined1 (*pauVar1) [16];
  
  if (0 < *param_1) {
    return (undefined1 (*) [16])0x0;
  }
  pauVar1 = (undefined1 (*) [16])uprv_malloc_76_godot(0x20);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    *(undefined8 *)pauVar1[1] = 0;
    *(undefined4 *)(pauVar1[1] + 8) = 0;
    *pauVar1 = (undefined1  [16])0x0;
    return pauVar1;
  }
  *param_1 = 7;
  return (undefined1 (*) [16])0x0;
}



void ulist_addItemEndList_76_godot(long param_1,long param_2,char param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((*param_4 < 1) && (param_1 != 0)) && (param_2 != 0)) {
    plVar3 = (long *)uprv_malloc_76_godot(0x20);
    if (plVar3 == (long *)0x0) {
      if (param_3 != '\0') {
        uprv_free_76_godot(param_2);
      }
      *param_4 = 7;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x18);
      *plVar3 = param_2;
      *(char *)(plVar3 + 3) = param_3;
      if (iVar1 == 0) {
        *(long **)(param_1 + 8) = plVar3;
        *(undefined1 (*) [16])(plVar3 + 1) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x10);
        plVar3[1] = 0;
        plVar3[2] = lVar2;
        *(long **)(lVar2 + 8) = plVar3;
      }
      *(long **)(param_1 + 0x10) = plVar3;
      *(int *)(param_1 + 0x18) = iVar1 + 1;
    }
  }
  else if (param_3 != '\0') {
    uprv_free_76_godot(param_2);
    return;
  }
  return;
}



void ulist_addItemBeginList_76_godot(long param_1,long param_2,char param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((*param_4 < 1) && (param_1 != 0)) && (param_2 != 0)) {
    plVar3 = (long *)uprv_malloc_76_godot(0x20);
    if (plVar3 == (long *)0x0) {
      if (param_3 != '\0') {
        uprv_free_76_godot(param_2);
      }
      *param_4 = 7;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x18);
      *plVar3 = param_2;
      *(char *)(plVar3 + 3) = param_3;
      if (iVar1 == 0) {
        *(undefined1 (*) [16])(plVar3 + 1) = (undefined1  [16])0x0;
        *(long **)(param_1 + 8) = plVar3;
        *(long **)(param_1 + 0x10) = plVar3;
      }
      else {
        lVar2 = *(long *)(param_1 + 8);
        plVar3[2] = 0;
        plVar3[1] = lVar2;
        *(long **)(lVar2 + 0x10) = plVar3;
        *(long **)(param_1 + 8) = plVar3;
      }
      *(int *)(param_1 + 0x18) = iVar1 + 1;
    }
  }
  else if (param_3 != '\0') {
    uprv_free_76_godot(param_2);
    return;
  }
  return;
}



undefined8 ulist_containsString_76_godot(long param_1,void *param_2,int param_3)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  while( true ) {
    __s = (char *)*puVar3;
    sVar2 = strlen(__s);
    if ((param_3 == (int)sVar2) && (iVar1 = memcmp(param_2,__s,(long)param_3), iVar1 == 0)) break;
    puVar3 = (undefined8 *)puVar3[1];
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
  }
  return 1;
}



undefined8 ulist_removeString_76_godot(undefined8 *param_1,char *param_2)

{
  char *__s2;
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  puVar5 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
    while( true ) {
      __s2 = (char *)*puVar5;
      iVar3 = strcmp(param_2,__s2);
      puVar1 = (undefined8 *)puVar5[1];
      if (iVar3 == 0) break;
      puVar5 = puVar1;
      if (puVar1 == (undefined8 *)0x0) {
        return 0;
      }
    }
    lVar2 = puVar5[2];
    if (lVar2 == 0) {
      param_1[1] = puVar1;
    }
    else {
      *(undefined8 **)(lVar2 + 8) = puVar1;
    }
    if (puVar1 == (undefined8 *)0x0) {
      param_1[2] = lVar2;
    }
    else {
      puVar1[2] = lVar2;
    }
    if (puVar5 == (undefined8 *)*param_1) {
      *param_1 = puVar1;
    }
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
    if (*(char *)(puVar5 + 3) != '\0') {
      uprv_free_76_godot(__s2);
    }
    uprv_free_76_godot(puVar5);
    uVar4 = 1;
  }
  return uVar4;
}



undefined8 * ulist_getNext_76_godot(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == (long *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      *param_1 = puVar2[1];
      return puVar1;
    }
  }
  return puVar2;
}



undefined4 ulist_getListSize_76_godot(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x18);
  }
  return 0xffffffff;
}



void ulist_resetList_76_godot(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_1[1];
  }
  return;
}



void ulist_deleteList_76_godot(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar2 = puVar1, puVar1 != (undefined8 *)0x0) {
    while (puVar1 = (undefined8 *)puVar2[1], *(char *)(puVar2 + 3) == '\0') {
      uprv_free_76_godot(puVar2);
      puVar2 = puVar1;
      if (puVar1 == (undefined8 *)0x0) goto LAB_00100400;
    }
    uprv_free_76_godot(*puVar2);
    uprv_free_76_godot(puVar2);
  }
LAB_00100400:
  uprv_free_76_godot(param_1);
  return;
}



void ulist_close_keyword_values_iterator_76_godot(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    while (puVar3 = puVar2, puVar2 != (undefined8 *)0x0) {
      while (puVar2 = (undefined8 *)puVar3[1], *(char *)(puVar3 + 3) == '\0') {
        uprv_free_76_godot(puVar3);
        puVar3 = puVar2;
        if (puVar2 == (undefined8 *)0x0) goto LAB_00100480;
      }
      uprv_free_76_godot(*puVar3);
      uprv_free_76_godot(puVar3);
    }
LAB_00100480:
    uprv_free_76_godot(lVar1);
  }
  uprv_free_76_godot(param_1);
  return;
}



undefined4 ulist_count_keyword_values_76_godot(long param_1,int *param_2)

{
  if ((*param_2 < 1) && (*(long *)(param_1 + 8) != 0)) {
    return *(undefined4 *)(*(long *)(param_1 + 8) + 0x18);
  }
  return 0xffffffff;
}



long * ulist_next_keyword_value_76_godot(long param_1,undefined4 *param_2,int *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long *__s;
  
  __s = (long *)0x0;
  if ((*param_3 < 1) && (__s = *(long **)(param_1 + 8), __s != (long *)0x0)) {
    puVar1 = (undefined8 *)*__s;
    if (puVar1 == (undefined8 *)0x0) {
      __s = (long *)0x0;
    }
    else {
      *__s = puVar1[1];
      __s = (long *)*puVar1;
      if ((__s != (long *)0x0) && (param_2 != (undefined4 *)0x0)) {
        sVar2 = strlen((char *)__s);
        *param_2 = (int)sVar2;
      }
    }
  }
  return __s;
}



void ulist_reset_keyword_values_iterator_76_godot(long param_1,int *param_2)

{
  undefined8 *puVar1;
  
  if ((*param_2 < 1) && (puVar1 = *(undefined8 **)(param_1 + 8), puVar1 != (undefined8 *)0x0)) {
    *puVar1 = puVar1[1];
  }
  return;
}



undefined8 ulist_getListFromEnum_76_godot(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


