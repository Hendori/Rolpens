
/* ures_loc_countLocales(UEnumeration*, UErrorCode*) */

undefined4 ures_loc_countLocales(UEnumeration *param_1,UErrorCode *param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 8) + 0x80);
  }
  return 0;
}



void ures_loc_resetLocales(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x7c) = 0xffffffff;
  }
  return;
}



/* ures_appendResPath(UResourceBundle*, char const*, int, UErrorCode*) */

void ures_appendResPath(UResourceBundle *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  int iVar1;
  UResourceBundle *pUVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x68);
  pUVar2 = *(UResourceBundle **)(param_1 + 0x20);
  if (pUVar2 == (UResourceBundle *)0x0) {
    pUVar2 = param_1 + 0x28;
    param_1[0x28] = (UResourceBundle)0x0;
    *(UResourceBundle **)(param_1 + 0x20) = pUVar2;
    *(int *)(param_1 + 0x68) = param_3;
    if (param_3 < 0x3f) goto LAB_00100093;
    lVar5 = (long)(param_3 + 1);
  }
  else {
    iVar4 = param_3 + iVar1;
    *(int *)(param_1 + 0x68) = iVar4;
    if (iVar4 < 0x3f) goto LAB_00100093;
    lVar5 = (long)(iVar4 + 1);
    if (pUVar2 != param_1 + 0x28) {
      pUVar2 = (UResourceBundle *)uprv_realloc_76_godot(pUVar2,lVar5);
      if (pUVar2 != (UResourceBundle *)0x0) {
        *(UResourceBundle **)(param_1 + 0x20) = pUVar2;
        goto LAB_00100093;
      }
      goto LAB_001000f8;
    }
  }
  lVar3 = uprv_malloc_76_godot(lVar5);
  *(long *)(param_1 + 0x20) = lVar3;
  if (lVar3 == 0) {
LAB_001000f8:
    *(undefined4 *)param_4 = 7;
    return;
  }
  pUVar2 = (UResourceBundle *)__strcpy_chk(lVar3,param_1 + 0x28,lVar5);
LAB_00100093:
  strcpy((char *)(pUVar2 + iVar1),param_2);
  return;
}



/* ures_toUTF8String(char16_t const*, int, char*, int*, signed char, UErrorCode*) */

undefined *
ures_toUTF8String(undefined8 param_1,ulong param_2,undefined *param_3,uint *param_4,char param_5,
                 int *param_6)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (0 < *param_6) {
    return (undefined *)0x0;
  }
  iVar3 = (int)param_2;
  if (param_4 == (uint *)0x0) {
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_0010017e;
  }
  else {
    uVar4 = *param_4;
    if (((int)uVar4 < 0) || ((0 < (int)uVar4 && (param_3 == (undefined *)0x0)))) {
      *param_6 = 1;
      return (undefined *)0x0;
    }
    if (iVar3 != 0) {
LAB_0010017e:
      if ((int)uVar4 < iVar3) {
        puVar1 = (undefined *)u_strToUTF8_76_godot(0,0,param_4,param_1,param_2 & 0xffffffff);
        return puVar1;
      }
      if (((param_5 == '\0') && (iVar3 < 0x2aaaaaab)) &&
         (uVar2 = iVar3 * 3 + 1, (int)uVar2 < (int)uVar4)) {
        param_3 = param_3 + (int)(uVar4 - uVar2);
        uVar4 = uVar2;
      }
      puVar1 = (undefined *)u_strToUTF8_76_godot(param_3,uVar4,param_4,param_1,param_2 & 0xffffffff)
      ;
      return puVar1;
    }
    *param_4 = 0;
    param_2 = (ulong)uVar4;
  }
  if (param_5 == '\0') {
    return &_LC0;
  }
  u_terminateChars_76_godot(param_3,param_2,0,param_6);
  return param_3;
}



/* getFallbackData(UResourceBundle const*, char const**, unsigned int*, UErrorCode*) */

undefined8 *
getFallbackData(UResourceBundle *param_1,char **param_2,uint *param_3,UErrorCode *param_4)

{
  char *__s1;
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  char *__s2;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0xffffffff;
  *param_3 = 0xffffffff;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(int *)(puVar4 + 0xe) == 0) {
      uVar3 = res_getTableItemByKey_76_godot
                        (puVar4 + 5,*(undefined4 *)(puVar4 + 9),&local_44,param_2);
      *param_3 = uVar3;
      if (param_1[0x70] != (UResourceBundle)0x0) {
        if (uVar3 != 0xffffffff) goto LAB_00100286;
        iVar2 = 1;
        goto LAB_0010023d;
      }
      if (uVar3 != 0xffffffff) goto LAB_00100286;
    }
    else {
      iVar2 = 0;
      if (param_1[0x70] != (UResourceBundle)0x0) {
LAB_0010023d:
        for (puVar1 = (undefined8 *)puVar4[2]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[2]) {
          if (*(int *)(puVar1 + 0xe) == 0) {
            iVar2 = iVar2 + 1;
            uVar3 = res_getTableItemByKey_76_godot
                              (puVar1 + 5,*(undefined4 *)(puVar1 + 9),&local_44,param_2);
            *param_3 = uVar3;
          }
          else {
            uVar3 = *param_3;
          }
          puVar4 = puVar1;
          if (uVar3 != 0xffffffff) goto LAB_0010025d;
        }
        if (*param_3 != 0xffffffff) {
LAB_0010025d:
          if (1 < iVar2) {
            __s2 = (char *)uloc_getDefault_76_godot();
            __s1 = (char *)*puVar4;
            iVar2 = strcmp(__s1,__s2);
            if ((iVar2 == 0) || (iVar2 = strcmp(__s1,"root"), iVar2 == 0)) {
              *(undefined4 *)param_4 = 0xffffff81;
            }
            else {
              *(undefined4 *)param_4 = 0xffffff80;
            }
          }
          goto LAB_00100286;
        }
      }
    }
  }
  *(undefined4 *)param_4 = 2;
  puVar4 = (undefined8 *)0x0;
LAB_00100286:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::GetAllChildrenSink::~GetAllChildrenSink() */

void __thiscall
(anonymous_namespace)::GetAllChildrenSink::~GetAllChildrenSink(GetAllChildrenSink *this)

{
  *(undefined ***)this = &PTR__GetAllChildrenSink_0010b0a8;
  icu_76_godot::ResourceSink::~ResourceSink((ResourceSink *)this);
  return;
}



/* (anonymous namespace)::GetAllChildrenSink::~GetAllChildrenSink() */

void __thiscall
(anonymous_namespace)::GetAllChildrenSink::~GetAllChildrenSink(GetAllChildrenSink *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__GetAllChildrenSink_0010b0a8;
  icu_76_godot::ResourceSink::~ResourceSink((ResourceSink *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* free_entry(UResourceDataEntry*) */

void free_entry(UResourceDataEntry *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  res_unload_76_godot(param_1 + 0x28);
  if ((*(UResourceDataEntry **)param_1 != (UResourceDataEntry *)0x0) &&
     (*(UResourceDataEntry **)param_1 != param_1 + 0x68)) {
    uprv_free_76_godot();
  }
  if (*(long *)(param_1 + 8) != 0) {
    uprv_free_76_godot();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x20) + 0x6c);
    *piVar1 = *piVar1 + -1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 0x18);
    } while (lVar2 != 0);
    piVar1 = (int *)(lVar3 + 0x6c);
    *piVar1 = *piVar1 + -1;
  }
  uprv_free_76_godot(param_1);
  return;
}



/* compareEntries(UElement, UElement) */

bool compareEntries(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  cVar3 = uhash_compareChars_76_godot(*param_1,*param_2);
  if (cVar3 == '\0') {
    return false;
  }
  cVar3 = uhash_compareChars_76_godot(uVar1,uVar2);
  return cVar3 != '\0';
}



/* hashEntry(UElement) */

int hashEntry(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[1];
  iVar2 = uhash_hashChars_76_godot(*param_1);
  iVar3 = uhash_hashChars_76_godot(uVar1);
  return iVar3 * 0x25 + iVar2;
}



/* init_entry(char const*, char const*, UErrorCode*) */

UResourceDataEntry * init_entry(char *param_1,char *param_2,UErrorCode *param_3)

{
  long lVar1;
  int iVar2;
  UResourceDataEntry *pUVar3;
  size_t sVar4;
  long lVar5;
  UResourceDataEntry *pUVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  byte bVar10;
  int local_120;
  int local_11c;
  char *local_118;
  char *local_110;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  long local_30;
  
  bVar10 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  local_38 = 0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (*(int *)param_3 < 1) {
    if (param_1 == (char *)0x0) {
      param_1 = (char *)uloc_getDefault_76_godot();
    }
    else if (*param_1 == '\0') {
      param_1 = "root";
    }
    local_118 = param_1;
    local_110 = param_2;
    pUVar3 = (UResourceDataEntry *)uhash_get_76_godot(cache,&local_118);
    if (pUVar3 != (UResourceDataEntry *)0x0) {
LAB_00100570:
      do {
        pUVar6 = pUVar3;
        pUVar3 = *(UResourceDataEntry **)(pUVar6 + 0x18);
      } while (*(UResourceDataEntry **)(pUVar6 + 0x18) != (UResourceDataEntry *)0x0);
      *(int *)(pUVar6 + 0x6c) = *(int *)(pUVar6 + 0x6c) + 1;
      if ((*(int *)(pUVar6 + 0x70) != 0) && (*(int *)param_3 < 1)) {
        *(int *)param_3 = *(int *)(pUVar6 + 0x70);
      }
      goto LAB_00100587;
    }
    pUVar3 = (UResourceDataEntry *)uprv_malloc_76_godot(0x78);
    if (pUVar3 == (UResourceDataEntry *)0x0) {
      *(undefined4 *)param_3 = 7;
      pUVar6 = (UResourceDataEntry *)0x0;
      goto LAB_00100587;
    }
    *(undefined8 *)pUVar3 = 0;
    *(undefined8 *)(pUVar3 + 0x70) = 0;
    puVar9 = (undefined8 *)((ulong)(pUVar3 + 8) & 0xfffffffffffffff8);
    for (uVar8 = (ulong)(((int)pUVar3 -
                         (int)(undefined8 *)((ulong)(pUVar3 + 8) & 0xfffffffffffffff8)) + 0x78U >> 3
                        ); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
    }
    sVar4 = strlen(param_1);
    if ((int)sVar4 < 3) {
      pUVar6 = pUVar3 + 0x68;
      *(UResourceDataEntry **)pUVar3 = pUVar6;
LAB_00100627:
      strcpy((char *)pUVar6,param_1);
      if (*(int *)param_3 < 1) {
        if (param_2 == (char *)0x0) {
          lVar5 = *(long *)(pUVar3 + 8);
        }
        else {
          lVar5 = uprv_strdup_76_godot(param_2);
          *(long *)(pUVar3 + 8) = lVar5;
          if (lVar5 == 0) {
            *(undefined4 *)param_3 = 7;
            uprv_free_76_godot(pUVar3,0);
            pUVar6 = (UResourceDataEntry *)0x0;
            goto LAB_00100587;
          }
        }
        pUVar6 = pUVar3 + 0x28;
        res_load_76_godot(pUVar6,lVar5,*(undefined8 *)pUVar3,param_3);
        if (*(int *)param_3 < 1) {
          if (pUVar3[0x62] == (UResourceDataEntry)0x0) {
LAB_001006f3:
            iVar2 = res_getResource_76_godot(pUVar6,"%%ALIAS");
            if (((iVar2 != -1) &&
                (lVar5 = res_getStringNoTrace_76_godot(pUVar6,iVar2,&local_120), lVar5 != 0)) &&
               (0 < local_120)) {
              u_UCharsToChars_76_godot(lVar5,local_98,local_120 + 1);
              uVar7 = init_entry(local_98,param_2,param_3);
              *(undefined8 *)(pUVar3 + 0x18) = uVar7;
            }
          }
          else {
            lVar5 = init_entry("pool",*(char **)(pUVar3 + 8),param_3);
            iVar2 = *(int *)param_3;
            if (iVar2 < 1) {
              if (((lVar5 != 0) && (*(int *)(lVar5 + 0x70) == 0)) &&
                 (*(char *)(lVar5 + 0x61) != '\0')) {
                lVar1 = *(long *)(lVar5 + 0x30);
                *(long *)(pUVar3 + 0x20) = lVar5;
                if (*(int *)(*(long *)(pUVar3 + 0x30) + 0x20) != *(int *)(lVar1 + 0x20)) {
                  *(undefined4 *)param_3 = 3;
                  *(undefined4 *)(pUVar3 + 0x70) = 3;
                  goto LAB_0010068b;
                }
                bVar10 = *(byte *)(lVar1 + 4);
                *(undefined8 *)(pUVar3 + 0x50) = *(undefined8 *)(lVar5 + 0x38);
                *(ulong *)(pUVar3 + 0x40) = lVar1 + 4 + (ulong)bVar10 * 4;
                goto LAB_001006f3;
              }
              *(undefined4 *)param_3 = 3;
              iVar2 = 3;
            }
            *(long *)(pUVar3 + 0x20) = lVar5;
            *(int *)(pUVar3 + 0x70) = iVar2;
          }
        }
        else {
          if (*(int *)param_3 == 7) goto LAB_001006d5;
          *(undefined4 *)param_3 = 0xffffff80;
          *(undefined4 *)(pUVar3 + 0x70) = 0xffffff80;
        }
LAB_0010068b:
        pUVar6 = (UResourceDataEntry *)uhash_get_76_godot(cache,pUVar3);
        if (pUVar6 == (UResourceDataEntry *)0x0) {
          local_11c = 0;
          uhash_put_76_godot(cache,pUVar3,pUVar3,&local_11c);
          if (0 < local_11c) {
            *(int *)param_3 = local_11c;
            free_entry(pUVar3);
            pUVar6 = (UResourceDataEntry *)0x0;
            goto LAB_00100587;
          }
        }
        else {
          free_entry(pUVar3);
          pUVar3 = pUVar6;
        }
        goto LAB_00100570;
      }
    }
    else {
      pUVar6 = (UResourceDataEntry *)uprv_malloc_76_godot((long)((int)sVar4 + 1));
      *(UResourceDataEntry **)pUVar3 = pUVar6;
      if (pUVar6 != (UResourceDataEntry *)0x0) goto LAB_00100627;
      *(undefined4 *)param_3 = 7;
    }
LAB_001006d5:
    uprv_free_76_godot(pUVar3);
  }
  pUVar6 = (UResourceDataEntry *)0x0;
LAB_00100587:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pUVar6;
}



/* createPath(char const*, int, char const*, int, char const*, icu_76_godot::CharString&,
   UErrorCode*) */

void createPath(char *param_1,int param_2,char *param_3,int param_4,char *param_5,
               CharString *param_6,UErrorCode *param_7)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  int local_58 [2];
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_6 + 0x38) = 0;
  **(undefined1 **)param_6 = 0;
  if ((param_4 < 1) ||
     (icu_76_godot::CharString::append
                ((char *)param_6,(int)param_3,(UErrorCode *)(ulong)(uint)param_4),
     0 < *(int *)param_7)) {
LAB_001008d8:
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_58,param_5);
    icu_76_godot::CharString::append((char *)param_6,local_58[0],(UErrorCode *)(ulong)local_50);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pcVar3 = param_3 + param_4;
  pcVar2 = param_1 + param_2;
  if (param_1 < pcVar2) {
    do {
      if (pcVar3 <= param_3) goto LAB_001008d8;
      if (param_1 < pcVar2) {
        do {
          if (*param_1 == '/') {
            param_1 = param_1 + (param_1 < pcVar2);
            break;
          }
          param_1 = param_1 + 1;
        } while (pcVar2 != param_1);
      }
      if (pcVar3 <= param_3) goto LAB_001008d8;
      while (*param_3 != '/') {
        param_3 = param_3 + 1;
        if (pcVar3 == param_3) goto LAB_001008d8;
      }
      if (pcVar3 <= param_3) goto LAB_001008d8;
      param_3 = param_3 + 1;
    } while (param_1 < pcVar2);
  }
LAB_00100998:
  while ((param_3 < pcVar3 && (cVar1 = *param_5, cVar1 != '\0'))) {
    if (param_3 < pcVar3) {
      do {
        if (*param_3 == '/') {
          param_3 = param_3 + (param_3 < pcVar3);
          if (cVar1 != '/') goto LAB_001009d8;
          goto LAB_001009ea;
        }
        param_3 = param_3 + 1;
      } while (pcVar3 != param_3);
    }
    do {
      if (cVar1 == '/') goto LAB_001009ea;
LAB_001009d8:
      cVar1 = param_5[1];
      param_5 = param_5 + 1;
    } while (cVar1 != '\0');
  }
  goto LAB_001008d8;
LAB_001009ea:
  param_5 = param_5 + 1;
  goto LAB_00100998;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ures_cleanup() */

undefined8 ures_cleanup(void)

{
  UResourceDataEntry *pUVar1;
  bool bVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (cache != 0) {
    umtx_lock_76_godot(resbMutex);
    if (cache != 0) {
      do {
        local_34 = 0xffffffff;
        bVar2 = false;
        while (lVar3 = uhash_nextElement_76_godot(cache,&local_34), lVar3 != 0) {
          pUVar1 = *(UResourceDataEntry **)(lVar3 + 8);
          if (*(int *)(pUVar1 + 0x6c) == 0) {
            bVar2 = true;
            uhash_removeElement_76_godot(cache,lVar3);
            free_entry(pUVar1);
          }
        }
      } while (bVar2);
    }
    umtx_unlock_76_godot(resbMutex);
    uhash_close_76_godot(cache);
    cache = 0;
  }
  LOCK();
  gCacheInitOnce = 0;
  UNLOCK();
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* loadParentsExceptRoot(UResourceDataEntry*&, char*, int, signed char, char*, UErrorCode*) [clone
   .part.0] [clone .constprop.0] */

undefined1 loadParentsExceptRoot(long *param_1,char *param_2,undefined8 param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined1 uVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    lVar3 = *param_1;
    lVar1 = *(long *)(lVar3 + 0x10);
    while( true ) {
      if (((lVar1 != 0) || (*(char *)(lVar3 + 0x60) != '\0')) ||
         (iVar2 = res_getResource_76_godot(lVar3 + 0x28,"%%ParentIsRoot"), iVar2 != -1))
      goto LAB_00100c08;
      iVar2 = res_getResource_76_godot(*param_1 + 0x28,"%%Parent");
      if (iVar2 != -1) {
        local_44 = 0;
        lVar3 = res_getStringNoTrace_76_godot(*param_1 + 0x28,iVar2,(UErrorCode *)&local_44);
        if ((lVar3 != 0) && (local_44 - 1U < 0x9c)) {
          u_UCharsToChars_76_godot(lVar3,param_2,local_44 + 1);
          iVar2 = strcmp(param_2,"root");
          if (iVar2 == 0) goto LAB_00100c08;
        }
      }
      local_44 = 0;
      lVar3 = init_entry(param_2,*(char **)(*param_1 + 8),(UErrorCode *)&local_44);
      if (0 < local_44) {
        *param_4 = local_44;
        uVar5 = 0;
        goto LAB_00100c0e;
      }
      *(long *)(*param_1 + 0x10) = lVar3;
      *param_1 = lVar3;
      pcVar4 = strrchr(param_2,0x5f);
      if (pcVar4 == (char *)0x0) break;
      *pcVar4 = '\0';
      lVar3 = *param_1;
      lVar1 = *(long *)(lVar3 + 0x10);
    }
    if ((*param_2 == '\0') || (pcVar4 = strstr("nb nn",param_2), pcVar4 == (char *)0x0)) {
LAB_00100c08:
      uVar5 = 1;
LAB_00100c0e:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* ures_closeBundle(UResourceBundle*, signed char) */

void ures_closeBundle(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    umtx_lock_76_godot(resbMutex);
    do {
      plVar1 = (long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x6c) = *(int *)(lVar2 + 0x6c) + -1;
      lVar2 = *plVar1;
    } while (*plVar1 != 0);
    umtx_unlock_76_godot(resbMutex);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uprv_free_76_godot();
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x20) != param_1 + 0x28)) {
    uprv_free_76_godot();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (((*(int *)(param_1 + 0x74) == 0x12c9b17) && (*(int *)(param_1 + 0x78) == 0x12bb38b)) &&
     ((param_2 & 1) != 0)) {
    uprv_free_76_godot(param_1);
    return;
  }
  return;
}



/* ures_loc_closeLocales(UEnumeration*) */

void ures_loc_closeLocales(UEnumeration *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  ures_closeBundle(lVar1 + 0x88,1);
  ures_closeBundle(lVar1,1);
  uprv_free_76_godot(lVar1);
  uprv_free_76_godot(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100eb7) */
/* WARNING: Removing unreachable block (ram,0x00100ff0) */
/* getDefaultScript(icu_76_godot::CharString const&, icu_76_godot::CharString const&) */

CharString * getDefaultScript(CharString *param_1,CharString *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *in_RDX;
  int *piVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  int local_98 [2];
  uint local_90;
  char *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::StringPiece::StringPiece((StringPiece *)local_98,"Latn");
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(CharString **)param_1 = param_1 + 0xd;
  *(undefined4 *)(param_1 + 8) = 0x28;
  *(undefined4 *)(param_1 + 0x38) = 0;
  icu_76_godot::CharString::append((char *)param_1,local_98[0],(UErrorCode *)(ulong)local_90);
  if (*(int *)(in_RDX + 7) != 0) {
    local_88 = (char *)((long)&local_7c + 1);
    local_80 = 0x28;
    local_50 = 0;
    local_7c = 0;
    pcVar3 = (char *)icu_76_godot::CharString::append
                               ((char *)&local_88,(int)*(undefined8 *)param_2,
                                (UErrorCode *)(ulong)*(uint *)(param_2 + 0x38));
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_98,"_");
    pcVar3 = (char *)icu_76_godot::CharString::append
                               (pcVar3,local_98[0],(UErrorCode *)(ulong)local_90);
    icu_76_godot::CharString::append(pcVar3,(int)*in_RDX,(UErrorCode *)(ulong)*(uint *)(in_RDX + 7))
    ;
    pcVar3 = local_88;
    puVar5 = defaultScriptTable;
    piVar1 = (int *)&DAT_00109db8;
    while (piVar4 = piVar1, puVar5 < piVar4) {
      piVar1 = (int *)((long)puVar5 + ((long)piVar4 - (long)puVar5 >> 4) * 2 * 4);
      iVar2 = strcmp(pcVar3,dsLocaleIDChars + *piVar1);
      if (iVar2 == 0) {
        iVar2 = piVar1[1];
        if ((char)local_7c != '\0') {
          uprv_free_76_godot(pcVar3);
        }
        goto LAB_00100fae;
      }
      if (-1 < iVar2) {
        puVar5 = (undefined1 *)(piVar1 + 2);
        piVar1 = piVar4;
      }
    }
    if ((char)local_7c != '\0') {
      uprv_free_76_godot(pcVar3);
    }
  }
  pcVar3 = *(char **)param_2;
  puVar5 = defaultScriptTable;
  piVar1 = (int *)&DAT_00109db8;
LAB_00100f95:
  piVar4 = piVar1;
  if (puVar5 < piVar4) {
    piVar1 = (int *)((long)puVar5 + ((long)piVar4 - (long)puVar5 >> 4) * 2 * 4);
    iVar2 = strcmp(pcVar3,dsLocaleIDChars + *piVar1);
    if (iVar2 != 0) {
      if (-1 < iVar2) {
        puVar5 = (undefined1 *)(piVar1 + 2);
        piVar1 = piVar4;
      }
      goto LAB_00100f95;
    }
    iVar2 = piVar1[1];
LAB_00100fae:
    *(undefined4 *)(param_1 + 0x38) = 0;
    **(undefined1 **)param_1 = 0;
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_98,scriptCodeChars + iVar2);
    icu_76_godot::CharString::append((char *)param_1,local_98[0],(UErrorCode *)(ulong)local_90);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ures_initStackObject_76_godot(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x10] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x88U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* icu_76_godot::StackUResourceBundle::StackUResourceBundle() */

void __thiscall icu_76_godot::StackUResourceBundle::StackUResourceBundle(StackUResourceBundle *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x80) = 0;
  puVar2 = (undefined8 *)((ulong)(this + 8) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 8) & 0xfffffffffffffff8)) +
                       0x88U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* icu_76_godot::StackUResourceBundle::~StackUResourceBundle() */

void __thiscall
icu_76_godot::StackUResourceBundle::~StackUResourceBundle(StackUResourceBundle *this)

{
  ures_closeBundle(this,1);
  return;
}



void ures_close_76_godot(undefined8 param_1)

{
  ures_closeBundle(param_1,1);
  return;
}



UResourceBundle *
ures_copyResb_76_godot(UResourceBundle *param_1,UResourceBundle *param_2,UErrorCode *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *pcVar19;
  bool bVar20;
  
  if (0 < *(int *)param_3 || param_1 == param_2) {
    return param_1;
  }
  if (param_2 == (UResourceBundle *)0x0) {
    return param_1;
  }
  if (param_1 == (UResourceBundle *)0x0) {
    param_1 = (UResourceBundle *)uprv_malloc_76_godot(0x88);
    if (param_1 == (UResourceBundle *)0x0) {
      *(undefined4 *)param_3 = 7;
      return (UResourceBundle *)0x0;
    }
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    uVar10 = *(undefined8 *)(param_2 + 0x40);
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    uVar12 = *(undefined8 *)(param_2 + 0x50);
    uVar13 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    uVar14 = *(undefined8 *)(param_2 + 0x68);
    uVar15 = *(undefined8 *)(param_2 + 0x70);
    uVar16 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    pcVar19 = *(char **)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    *(undefined8 *)(param_1 + 0x40) = uVar10;
    *(undefined8 *)(param_1 + 0x48) = uVar11;
    *(undefined8 *)(param_1 + 0x50) = uVar12;
    *(undefined8 *)(param_1 + 0x58) = uVar13;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    *(undefined8 *)(param_1 + 0x68) = uVar14;
    *(undefined8 *)(param_1 + 0x70) = uVar15;
    *(undefined8 *)(param_1 + 0x78) = uVar16;
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (pcVar19 != (char *)0x0) {
      ures_appendResPath(param_1,pcVar19,*(int *)(param_2 + 0x68),param_3);
    }
    uVar18 = 0x12bb38b;
    uVar17 = 0x12c9b17;
    goto LAB_001011b5;
  }
  if (*(int *)(param_1 + 0x74) == 0x12c9b17) {
    bVar20 = *(int *)(param_1 + 0x78) != 0x12bb38b;
    ures_closeBundle(param_1,0);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    pcVar19 = *(char **)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (pcVar19 != (char *)0x0) goto LAB_00101194;
LAB_001011a2:
    uVar18 = 0x12bb38b;
    uVar17 = 0x12c9b17;
    if (!bVar20) goto LAB_001011b5;
  }
  else {
    bVar20 = true;
    ures_closeBundle(param_1,0);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    pcVar19 = *(char **)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (pcVar19 != (char *)0x0) {
LAB_00101194:
      ures_appendResPath(param_1,pcVar19,*(int *)(param_2 + 0x68),param_3);
      goto LAB_001011a2;
    }
  }
  uVar18 = 0;
  uVar17 = 0;
LAB_001011b5:
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x78) = uVar18;
  *(undefined4 *)(param_1 + 0x74) = uVar17;
  if (lVar2 == 0) {
    return param_1;
  }
  umtx_lock_76_godot(resbMutex);
  lVar3 = *(long *)(lVar2 + 0x10);
  *(int *)(lVar2 + 0x6c) = *(int *)(lVar2 + 0x6c) + 1;
  for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
    *(int *)(lVar3 + 0x6c) = *(int *)(lVar3 + 0x6c) + 1;
  }
  umtx_unlock_76_godot(resbMutex);
  return param_1;
}



long ures_getString_76_godot(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (*param_3 < 1) {
    if (param_1 != 0) {
      lVar1 = res_getStringNoTrace_76_godot
                        (*(long *)(param_1 + 8) + 0x28,*(undefined4 *)(param_1 + 0x6c),param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      *param_3 = 0x11;
      return 0;
    }
    *param_3 = 1;
  }
  return 0;
}



void ures_getUTF8String_76_godot
               (long param_1,undefined8 param_2,undefined8 param_3,char param_4,int *param_5)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if (param_1 != 0) {
      lVar1 = res_getStringNoTrace_76_godot
                        (*(long *)(param_1 + 8) + 0x28,*(undefined4 *)(param_1 + 0x6c),&local_34);
      if (lVar1 == 0) {
        *param_5 = 0x11;
      }
      goto LAB_00101418;
    }
    *param_5 = 1;
  }
  lVar1 = 0;
LAB_00101418:
  ures_toUTF8String(lVar1,local_34,param_2,param_3,(int)param_4,param_5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ures_getBinary_76_godot(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (*param_3 < 1) {
    if (param_1 != 0) {
      lVar1 = res_getBinaryNoTrace_76_godot
                        (*(long *)(param_1 + 8) + 0x28,*(undefined4 *)(param_1 + 0x6c),param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      *param_3 = 0x11;
      return 0;
    }
    *param_3 = 1;
  }
  return 0;
}



long ures_getIntVector_76_godot(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (*param_3 < 1) {
    if (param_1 != 0) {
      lVar1 = res_getIntVectorNoTrace_76_godot
                        (*(long *)(param_1 + 8) + 0x28,*(undefined4 *)(param_1 + 0x6c),param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      *param_3 = 0x11;
      return 0;
    }
    *param_3 = 1;
  }
  return 0;
}



int ures_getInt_76_godot(long param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (param_1 == 0) {
      *param_2 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x6c) >> 0x1c == 7) {
        return (int)(*(uint *)(param_1 + 0x6c) << 4) >> 4;
      }
      *param_2 = 0x11;
    }
  }
  return -1;
}



uint ures_getUInt_76_godot(long param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (param_1 == 0) {
      *param_2 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x6c) >> 0x1c == 7) {
        return *(uint *)(param_1 + 0x6c) & 0xfffffff;
      }
      *param_2 = 0x11;
    }
  }
  return 0xffffffff;
}



undefined8 ures_getType_76_godot(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = res_getPublicType_76_godot(*(undefined4 *)(param_1 + 0x6c));
    return uVar1;
  }
  return 0xffffffff;
}



undefined8 ures_getKey_76_godot(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined4 ures_getSize_76_godot(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x80);
  }
  return 0;
}



void ures_resetIterator_76_godot(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  }
  return;
}



undefined4 ures_hasNext_76_godot(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x80) + -1;
    return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(param_1 + 0x7c) < iVar1);
  }
  return 0;
}



undefined8 ures_getLocaleInternal_76_godot(long param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (param_1 != 0) {
      return **(undefined8 **)(param_1 + 8);
    }
    *param_2 = 1;
  }
  return 0;
}



undefined8 ures_getLocale_76_godot(long param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (param_1 != 0) {
      return **(undefined8 **)(param_1 + 8);
    }
    *param_2 = 1;
  }
  return 0;
}



undefined8 ures_getLocaleByType_76_godot(long param_1,int param_2,int *param_3)

{
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_1 != 0) {
      if (param_2 == 0) {
        return **(undefined8 **)(param_1 + 8);
      }
      if (param_2 == 1) {
        return **(undefined8 **)(param_1 + 0x18);
      }
    }
    *param_3 = 1;
  }
  return 0;
}



undefined8 ures_getName_76_godot(long param_1)

{
  if (param_1 != 0) {
    return **(undefined8 **)(param_1 + 8);
  }
  return 0;
}



/* findFirstExisting(char const*, char*, char const*, UResOpenType, signed char*, signed char*,
   signed char*, UErrorCode*) */

undefined8 *
findFirstExisting(char *param_1,char *param_2,char *param_3,int param_4,undefined8 param_5,
                 char *param_6,undefined8 param_7,UErrorCode *param_8)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  char cVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  int local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  uint local_2c0;
  int local_2b0;
  long local_2a8;
  undefined4 local_2a0;
  undefined2 local_29c;
  uint local_270;
  void *local_268;
  undefined4 local_260;
  undefined2 local_25c;
  uint local_230;
  long local_228;
  undefined4 local_220;
  undefined2 local_21c;
  uint local_1f0;
  char *local_1e8;
  undefined4 local_1e0;
  undefined2 local_1dc;
  int local_1b0;
  long local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined4 local_170;
  long local_168;
  undefined4 local_160;
  undefined2 local_15c;
  uint local_130;
  void *local_128;
  char local_11c;
  uint local_f0;
  char local_e8 [168];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_6 = '\x01';
  __strcpy_chk(local_e8,param_2,0x9d);
LAB_001017b0:
  do {
    puVar5 = (undefined8 *)init_entry(param_2,param_1,param_8);
    if (0 < *(int *)param_8) {
LAB_00101954:
      puVar5 = (undefined8 *)0x0;
LAB_00101924:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return puVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    sVar6 = strlen(param_2);
    iVar3 = strncmp(param_2,param_3,sVar6);
    *(bool *)param_7 = iVar3 == 0;
    iVar3 = *(int *)(puVar5 + 0xe);
    if (iVar3 == 0) {
      strcpy(param_2,(char *)*puVar5);
      iVar4 = strcmp(param_2,"root");
      *(bool *)param_5 = iVar4 == 0;
      pcVar7 = strrchr(param_2,0x5f);
      if (pcVar7 == (char *)0x0) {
        *param_6 = '\0';
        goto LAB_00101924;
      }
      *pcVar7 = '\0';
      *param_6 = '\x01';
      if (*param_2 != '\0') goto LAB_00101924;
    }
    else {
      *(int *)((long)puVar5 + 0x6c) = *(int *)((long)puVar5 + 0x6c) + -1;
      *(undefined4 *)param_8 = 0xffffff80;
      iVar4 = strcmp(param_2,"root");
      *(bool *)param_5 = iVar4 == 0;
      sVar6 = strlen(param_2);
      if ((sVar6 == 0) || (param_2[sVar6 - 1] == '_')) {
LAB_0010188e:
        pcVar7 = strrchr(param_2,0x5f);
        if (pcVar7 == (char *)0x0) {
          *param_6 = '\0';
          goto LAB_00101954;
        }
        *pcVar7 = '\0';
        *param_6 = '\x01';
      }
      else {
        local_2cc = 0;
        icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink
                  ((CheckedArrayByteSink *)&local_2c8,(char *)0x0,0);
        ulocimp_getSubtags_76_godot
                  (param_2,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)&local_2c8,
                   (char **)0x0,(UErrorCode *)&local_2cc);
        iVar4 = local_2b0;
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink
                  ((CheckedArrayByteSink *)&local_2c8);
        if (iVar4 != 0) goto LAB_0010188e;
        local_2a8 = (long)&local_29c + 1;
        local_268 = (void *)((long)&local_25c + 1);
        local_228 = (long)&local_21c + 1;
        local_29c = 0;
        local_25c = 0;
        local_21c = 0;
        local_2d0 = 0;
        local_2a0 = 0x28;
        local_270 = 0;
        local_260 = 0x28;
        local_230 = 0;
        local_220 = 0x28;
        local_1f0 = 0;
        ulocimp_getSubtags_76_godot
                  (param_2,(CharString *)&local_2a8,(CharString *)&local_268,
                   (CharString *)&local_228,(CharString *)0x0,(char **)0x0,(UErrorCode *)&local_2d0)
        ;
        if (local_2d0 < 1) {
          if (param_4 == 0) {
            puVar10 = parentLocaleTable;
            piVar2 = (int *)&DAT_00107830;
            while (piVar8 = piVar2, puVar10 < piVar8) {
              piVar2 = (int *)((long)puVar10 + ((long)piVar8 - (long)puVar10 >> 4) * 2 * 4);
              iVar4 = strcmp(param_2,"az_Arab" + *piVar2);
              if (iVar4 == 0) {
                cVar9 = '\x01';
                strcpy(param_2,"az_Arab" + piVar2[1]);
                goto LAB_00101aab;
              }
              if (-1 < iVar4) {
                puVar10 = (undefined1 *)(piVar2 + 2);
                piVar2 = piVar8;
              }
            }
          }
          local_1e8 = (char *)((long)&local_1dc + 1);
          local_1e0 = 0x28;
          local_1dc = 0;
          local_1b0 = 0;
          if (local_230 == 0) {
            if (local_1f0 == 0) {
              cVar9 = '\0';
              goto LAB_00101aab;
            }
            local_1a8 = (long)&local_19c + 1;
            local_168 = (long)&local_15c + 1;
            local_2cc = 0;
            local_15c = 0;
            local_1a0 = 0x28;
            local_170 = 0;
            local_19c = 0;
            local_160 = 0x28;
            local_130 = 0;
            ulocimp_getSubtags_76_godot
                      (local_e8,(CharString *)&local_1a8,(CharString *)&local_168,(CharString *)0x0,
                       (CharString *)0x0,(char **)0x0,(UErrorCode *)&local_2cc);
            if (local_130 == 0) {
              pcVar7 = (char *)icu_76_godot::CharString::append
                                         ((char *)&local_1e8,(int)local_2a8,
                                          (UErrorCode *)(ulong)local_270);
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_2c8,"_");
              pcVar7 = (char *)icu_76_godot::CharString::append
                                         (pcVar7,(int)local_2c8,(UErrorCode *)(ulong)local_2c0);
              getDefaultScript((CharString *)&local_128,(CharString *)&local_2a8);
              icu_76_godot::CharString::append(pcVar7,(int)local_128,(UErrorCode *)(ulong)local_f0);
              if (local_11c != '\0') {
                uprv_free_76_godot(local_128);
              }
            }
            else {
              pcVar7 = (char *)icu_76_godot::CharString::append
                                         ((char *)&local_1e8,(int)local_2a8,
                                          (UErrorCode *)(ulong)local_270);
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_2c8,"_");
              pcVar7 = (char *)icu_76_godot::CharString::append
                                         (pcVar7,(int)local_2c8,(UErrorCode *)(ulong)local_2c0);
              icu_76_godot::CharString::append(pcVar7,(int)local_168,(UErrorCode *)(ulong)local_130)
              ;
            }
            if ((char)local_15c != '\0') {
              uprv_free_76_godot(local_168);
            }
            if ((char)local_19c != '\0') {
              uprv_free_76_godot(local_1a8);
            }
LAB_00101b20:
            if ((0 < local_2d0) || (local_1b0 == 0)) goto LAB_00101b37;
            cVar9 = '\x01';
            strcpy(param_2,local_1e8);
          }
          else {
            if (local_1f0 != 0) {
              getDefaultScript((CharString *)&local_128,(CharString *)&local_2a8);
              cVar9 = local_11c;
              pvVar1 = local_128;
              if ((local_f0 == local_230) &&
                 ((local_f0 == 0 ||
                  (iVar4 = memcmp(local_128,local_268,(long)(int)local_f0), iVar4 == 0)))) {
                if (cVar9 != '\0') {
                  uprv_free_76_godot(local_128);
                }
                pcVar7 = (char *)icu_76_godot::CharString::append
                                           ((char *)&local_1e8,(int)local_2a8,
                                            (UErrorCode *)(ulong)local_270);
                icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_2c8,"_");
                pcVar7 = (char *)icu_76_godot::CharString::append
                                           (pcVar7,(int)local_2c8,(UErrorCode *)(ulong)local_2c0);
                icu_76_godot::CharString::append
                          (pcVar7,(int)local_228,(UErrorCode *)(ulong)local_1f0);
              }
              else {
                if (cVar9 != '\0') {
                  uprv_free_76_godot(pvVar1);
                }
                pcVar7 = (char *)icu_76_godot::CharString::append
                                           ((char *)&local_1e8,(int)local_2a8,
                                            (UErrorCode *)(ulong)local_270);
                icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_2c8,"_");
                pcVar7 = (char *)icu_76_godot::CharString::append
                                           (pcVar7,(int)local_2c8,(UErrorCode *)(ulong)local_2c0);
                icu_76_godot::CharString::append
                          (pcVar7,(int)local_268,(UErrorCode *)(ulong)local_230);
              }
              goto LAB_00101b20;
            }
            if (param_4 != 0) {
LAB_00101b04:
              icu_76_godot::CharString::append
                        ((char *)&local_1e8,(int)local_2a8,(UErrorCode *)(ulong)local_270);
              goto LAB_00101b20;
            }
            local_168 = (long)&local_15c + 1;
            local_160 = 0x28;
            local_130 = 0;
            local_15c = 0;
            getDefaultScript((CharString *)&local_128,(CharString *)&local_2a8);
            cVar9 = local_11c;
            pvVar1 = local_128;
            if (local_f0 == local_230) {
              if (local_f0 == 0) {
                if (local_11c != '\0') {
                  uprv_free_76_godot(local_128);
                }
                if ((char)local_15c != '\0') {
                  uprv_free_76_godot(local_168);
                }
              }
              else {
                iVar4 = memcmp(local_128,local_268,(long)(int)local_f0);
                if (cVar9 != '\0') {
                  uprv_free_76_godot(pvVar1);
                }
                if ((char)local_15c != '\0') {
                  uprv_free_76_godot(local_168);
                }
                if (iVar4 != 0) goto LAB_00101b37;
              }
              goto LAB_00101b04;
            }
            if (local_11c != '\0') {
              uprv_free_76_godot(local_128);
            }
            if ((char)local_15c != '\0') {
              uprv_free_76_godot(local_168);
            }
LAB_00101b37:
            cVar9 = '\0';
          }
          if ((char)local_1dc != '\0') {
            uprv_free_76_godot(local_1e8);
          }
LAB_00101aab:
          if ((char)local_21c == '\0') goto LAB_00101ab9;
LAB_00101bf6:
          uprv_free_76_godot(local_228);
          if ((char)local_25c != '\0') goto LAB_00101c11;
LAB_00101ac7:
        }
        else {
          cVar9 = '\0';
          pcVar7 = strrchr(param_2,0x5f);
          if (pcVar7 == (char *)0x0) goto LAB_00101aab;
          *pcVar7 = '\0';
          cVar9 = '\x01';
          if ((char)local_21c != '\0') goto LAB_00101bf6;
LAB_00101ab9:
          if ((char)local_25c == '\0') goto LAB_00101ac7;
LAB_00101c11:
          uprv_free_76_godot(local_268);
        }
        if ((char)local_29c != '\0') {
          uprv_free_76_godot(local_2a8);
        }
        *param_6 = cVar9;
        if (cVar9 == '\0') {
          puVar5 = (undefined8 *)0x0;
          goto LAB_00101924;
        }
      }
      if (*param_2 != '\0') goto LAB_001017b0;
      puVar5 = (undefined8 *)0x0;
    }
    builtin_strncpy(param_2,"und",4);
    if ((*param_6 == '\0') || (iVar3 == 0)) goto LAB_00101924;
  } while( true );
}



/* ures_openWithType(UResourceBundle*, char const*, char const*, UResOpenType, UErrorCode*) */

undefined8 *
ures_openWithType(undefined8 *param_1,char *param_2,UErrorCode *param_3,int param_4,
                 UErrorCode *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  size_t sVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  byte bVar14;
  char local_19b;
  char local_19a;
  char local_199;
  int local_198;
  int local_194;
  undefined8 *local_190;
  char *local_188;
  char local_17c;
  undefined1 local_148 [96];
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_4c;
  long local_40;
  
  bVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_5 < 1) {
    if (param_4 == 2) {
      if ((gCacheInitOnce == 2) ||
         (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gCacheInitOnce), cVar1 == '\0'))
      {
        if (0 < DAT_00106cdc) {
          *(int *)param_5 = DAT_00106cdc;
          goto LAB_00102200;
        }
      }
      else {
        cache = uhash_open_76_godot(hashEntry,compareEntries,0);
        ucln_common_registerCleanup_76_godot(0x1b,ures_cleanup);
        DAT_00106cdc = *(int *)param_5;
        icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gCacheInitOnce);
      }
      if (0 < *(int *)param_5) goto LAB_00102200;
      if (param_3 == (UErrorCode *)0x0) {
        param_3 = (UErrorCode *)uloc_getDefault_76_godot();
      }
      else if (*param_3 == (UErrorCode)0x0) {
        param_3 = (UErrorCode *)&_LC1;
      }
      umtx_lock_76_godot(resbMutex);
      puVar5 = (undefined8 *)init_entry((char *)param_3,param_2,param_5);
      if (0 < *(int *)param_5) {
LAB_0010253a:
        umtx_unlock_76_godot(resbMutex);
        iVar3 = *(int *)param_5;
joined_r0x001027f1:
        if (0 < iVar3) goto LAB_00102200;
        goto LAB_0010254d;
      }
      if (*(int *)(puVar5 + 0xe) != 0) {
        *(int *)((long)puVar5 + 0x6c) = *(int *)((long)puVar5 + 0x6c) + -1;
        umtx_unlock_76_godot(resbMutex);
        iVar3 = *(int *)param_5;
        goto joined_r0x001027f1;
      }
      local_190 = puVar5;
      iVar3 = strcmp((char *)param_3,"root");
      lVar11 = puVar5[2];
      if (iVar3 == 0) {
joined_r0x00102993:
        for (; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
LAB_00102760:
          *(int *)(lVar11 + 0x6c) = *(int *)(lVar11 + 0x6c) + 1;
        }
LAB_0010276d:
        umtx_unlock_76_godot(resbMutex);
        goto LAB_001023cc;
      }
      if (lVar11 != 0) goto LAB_00102760;
      if (*(char *)(puVar5 + 0xc) == '\0') {
        sVar7 = strlen((char *)param_3);
        if (sVar7 < 0x9d) {
          uVar9 = sVar7 + 1;
          pcVar6 = (char *)&local_e8;
          if (7 < (uint)uVar9) {
            for (uVar10 = uVar9 >> 3 & 0x1fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined8 *)pcVar6 = *(undefined8 *)param_3;
              param_3 = param_3 + (ulong)bVar14 * -0x10 + 8;
              pcVar6 = pcVar6 + (ulong)bVar14 * -0x10 + 8;
            }
          }
          lVar11 = 0;
          if ((uVar9 & 4) != 0) {
            *(undefined4 *)pcVar6 = *(undefined4 *)param_3;
            lVar11 = 4;
          }
          if ((uVar9 & 2) != 0) {
            *(undefined2 *)(pcVar6 + lVar11) = *(undefined2 *)(param_3 + lVar11);
            lVar11 = lVar11 + 2;
          }
          if ((uVar9 & 1) != 0) {
            *(UErrorCode *)(pcVar6 + lVar11) = param_3[lVar11];
          }
          pcVar6 = strrchr((char *)&local_e8,0x5f);
          if (pcVar6 == (char *)0x0) {
LAB_00102a12:
            iVar3 = strcmp((char *)*puVar5,"root");
            if (iVar3 != 0) {
              puVar12 = puVar5;
              if (puVar5[2] == 0) goto LAB_00102a33;
              goto LAB_0010297b;
            }
          }
          else {
            *pcVar6 = '\0';
            iVar3 = strcmp((char *)&local_e8,"root");
            if (iVar3 == 0) goto LAB_00102a12;
            cVar1 = loadParentsExceptRoot(&local_190,&local_e8,0);
            puVar12 = local_190;
            if ((((cVar1 != '\0') && (iVar3 = strcmp((char *)*local_190,"root"), iVar3 != 0)) &&
                (puVar12[2] == 0)) && (*(int *)param_5 < 1)) {
LAB_00102a33:
              local_194 = 0;
              puVar8 = (undefined8 *)init_entry("root",(char *)puVar12[1],(UErrorCode *)&local_194);
              if (local_194 < 1) {
                puVar12[2] = puVar8;
                local_190 = puVar8;
              }
              else {
                *(int *)param_5 = local_194;
              }
            }
LAB_0010297b:
            if (0 < *(int *)param_5) goto LAB_0010253a;
          }
          lVar11 = local_190[2];
          goto joined_r0x00102993;
        }
        goto LAB_0010276d;
      }
      umtx_unlock_76_godot(resbMutex);
      if (0 < *(int *)param_5) goto LAB_00102200;
LAB_001023df:
      if (param_1 == (undefined8 *)0x0) {
        param_1 = (undefined8 *)uprv_malloc_76_godot(0x88);
        if (param_1 == (undefined8 *)0x0) {
          umtx_lock_76_godot(resbMutex);
          do {
            puVar12 = puVar5 + 2;
            *(int *)((long)puVar5 + 0x6c) = *(int *)((long)puVar5 + 0x6c) + -1;
            puVar5 = (undefined8 *)*puVar12;
          } while ((undefined8 *)*puVar12 != (undefined8 *)0x0);
          umtx_unlock_76_godot(resbMutex);
          *(undefined4 *)param_5 = 7;
          goto LAB_00102200;
        }
        *param_1 = 0;
        param_1[0x10] = 0;
        puVar12 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
        for (uVar9 = (ulong)(((int)param_1 -
                             (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x88U
                            >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar12 = 0;
          puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        }
LAB_0010270b:
        *(undefined8 *)((long)param_1 + 0x74) = _LC9;
      }
      else if (*(int *)((long)param_1 + 0x74) == 0x12c9b17) {
        iVar3 = *(int *)(param_1 + 0xf);
        ures_closeBundle(param_1,0);
        *param_1 = 0;
        param_1[0x10] = 0;
        puVar12 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
        for (uVar9 = (ulong)(((int)param_1 -
                             (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x88U
                            >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar12 = 0;
          puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        }
        if (iVar3 == 0x12bb38b) goto LAB_0010270b;
      }
      else {
        ures_closeBundle(param_1,0);
        *param_1 = 0;
        param_1[0x10] = 0;
        puVar12 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
        for (uVar9 = (ulong)(((int)param_1 -
                             (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x88U
                            >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar12 = 0;
          puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        }
      }
      param_1[1] = puVar5;
      bVar13 = false;
      param_1[3] = puVar5;
      if (param_4 != 2) {
        bVar13 = *(char *)(puVar5 + 0xc) == '\0';
      }
      *(bool *)(param_1 + 0xe) = bVar13;
      *(undefined1 *)((long)param_1 + 0x71) = 1;
      *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(puVar5 + 9);
      uVar2 = res_countArrayItems_76_godot(puVar5 + 5);
      *(undefined4 *)((long)param_1 + 0x7c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      goto LAB_00102203;
    }
    ulocimp_getBaseName_76_godot((char *)&local_188,param_3);
    pcVar6 = local_188;
    if (0 < *(int *)param_5) {
      *(undefined4 *)param_5 = 1;
      if (local_17c != '\0') {
        uprv_free_76_godot(local_188);
      }
      goto LAB_00102200;
    }
    local_198 = 0;
    local_190 = (undefined8 *)0x0;
    local_19b = '\0';
    local_19a = '\0';
    local_199 = '\x01';
    if ((gCacheInitOnce == 2) ||
       (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gCacheInitOnce), cVar1 == '\0')) {
      if (DAT_00106cdc < 1) goto LAB_001022a7;
      *(int *)param_5 = DAT_00106cdc;
    }
    else {
      cache = uhash_open_76_godot(hashEntry,compareEntries,0,param_5);
      ucln_common_registerCleanup_76_godot(0x1b,ures_cleanup);
      DAT_00106cdc = *(int *)param_5;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gCacheInitOnce);
LAB_001022a7:
      if (*(int *)param_5 < 1) {
        strncpy((char *)&local_e8,pcVar6,0x9c);
        local_4c = 0;
        uVar4 = uloc_getDefault_76_godot();
        umtx_lock_76_godot(resbMutex);
        puVar5 = (undefined8 *)
                 findFirstExisting(param_2,&local_e8,uVar4,param_4,&local_19a,&local_199,&local_19b,
                                   &local_198);
        if (local_198 == 7) {
LAB_001026b0:
          *(undefined4 *)param_5 = 7;
          goto LAB_001026b6;
        }
        if (puVar5 == (undefined8 *)0x0) {
          if ((param_4 != 1) && (local_19b == '\0' && local_19a == '\0')) {
            __strcpy_chk(&local_e8,uVar4,0x9d);
            puVar5 = (undefined8 *)
                     findFirstExisting(param_2,&local_e8,uVar4,0,&local_19a,&local_199,&local_19b,
                                       &local_198);
            if (local_198 == 7) goto LAB_001026b0;
            local_198 = -0x7f;
            if (puVar5 != (undefined8 *)0x0) {
              local_19b = '\x01';
              goto joined_r0x00102607;
            }
          }
          local_e4 = 0;
          local_e8 = 0x746f6f72;
          puVar5 = (undefined8 *)
                   findFirstExisting(param_2,&local_e8,uVar4,param_4,&local_19a,&local_199,
                                     &local_19b,&local_198);
          if (local_198 == 7) goto LAB_001026b0;
          if (puVar5 == (undefined8 *)0x0) {
            *(undefined4 *)param_5 = 2;
            goto LAB_001026b6;
          }
          local_198 = -0x7f;
          local_190 = puVar5;
          goto LAB_0010266f;
        }
joined_r0x00102607:
        local_190 = puVar5;
        if ((local_199 == '\0') &&
           ((puVar12 = puVar5, cVar1 = local_19a, (char)local_e8 == '\0' ||
            (pcVar6 = strstr("nb nn",(char *)&local_e8), puVar12 = local_190, cVar1 = local_19a,
            pcVar6 == (char *)0x0)))) {
joined_r0x00102391:
          local_190 = puVar12;
          if (cVar1 != '\0') goto LAB_001023a0;
          iVar3 = strcmp((char *)*puVar12,"root");
          if (((iVar3 == 0) || (puVar12[2] != 0)) || (*(char *)(puVar5 + 0xc) != '\0')) {
LAB_0010266f:
            if (local_19a == '\0') {
              puVar12 = (undefined8 *)local_190[2];
              while (puVar8 = puVar12, puVar8 != (undefined8 *)0x0) {
                *(int *)((long)puVar8 + 0x6c) = *(int *)((long)puVar8 + 0x6c) + 1;
                local_190 = puVar8;
                puVar12 = (undefined8 *)puVar8[2];
              }
            }
            goto LAB_001023a0;
          }
          if (*(int *)param_5 < 1) {
            local_194 = 0;
            puVar8 = (undefined8 *)init_entry("root",(char *)puVar12[1],(UErrorCode *)&local_194);
            if (local_194 < 1) {
              puVar12[2] = puVar8;
              local_190 = puVar8;
              goto LAB_0010266f;
            }
            *(int *)param_5 = local_194;
          }
LAB_001026b6:
          puVar5 = (undefined8 *)0x0;
        }
        else {
          if (local_19a == '\0') {
            if (0 < *(int *)param_5) goto LAB_001026b6;
            cVar1 = loadParentsExceptRoot(&local_190,&local_e8,local_148,param_5);
            puVar12 = local_190;
            goto joined_r0x00102391;
          }
LAB_001023a0:
          if (0 < *(int *)param_5) goto LAB_001026b6;
          if (local_198 != 0) {
            *(int *)param_5 = local_198;
          }
        }
        umtx_unlock_76_godot(resbMutex);
        if (local_17c != '\0') {
          uprv_free_76_godot(local_188);
        }
LAB_001023cc:
        if (*(int *)param_5 < 1) {
          if (puVar5 != (undefined8 *)0x0) goto LAB_001023df;
          goto LAB_0010254d;
        }
        goto LAB_00102200;
      }
    }
    if ((local_17c != '\0') && (uprv_free_76_godot(local_188), *(int *)param_5 < 1)) {
LAB_0010254d:
      *(undefined4 *)param_5 = 2;
    }
  }
LAB_00102200:
  param_1 = (undefined8 *)0x0;
LAB_00102203:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ures_open_76_godot(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ures_openWithType(0,param_1,param_2,0,param_3);
  return;
}



void ures_openNoDefault_76_godot(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ures_openWithType(0,param_1,param_2,1,param_3);
  return;
}



void ures_openDirect_76_godot(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ures_openWithType(0,param_1,param_2,2,param_3);
  return;
}



/* (anonymous namespace)::getAliasTargetAsResourceBundle(ResourceData const&, unsigned int, char
   const*, int, UResourceDataEntry*, char const*, int, UResourceBundle*, UErrorCode*) */

UResourceBundle *
(anonymous_namespace)::getAliasTargetAsResourceBundle
          (ResourceData *param_1,uint param_2,char *param_3,int param_4,UResourceDataEntry *param_5,
          char *param_6,int param_7,UResourceBundle *param_8,UErrorCode *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 in_register_00000034;
  UResourceBundle *pUVar8;
  UResourceDataEntry *pUVar9;
  long in_FS_OFFSET;
  bool bVar10;
  StringPiece *local_108;
  UResourceBundle *local_f8;
  uint local_e4;
  char *local_e0;
  undefined8 local_d8;
  uint local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_90;
  char *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_9) goto LAB_00102b4c;
  local_e4 = 0;
  iVar1 = res_getAlias_76_godot(param_1,CONCAT44(in_register_00000034,param_2),&local_e4);
  if ((int)local_e4 < 1) {
    *(undefined4 *)param_9 = 1;
    goto LAB_00102b4c;
  }
  local_c0 = 0x28;
  local_c8 = (char *)((long)&local_bc + 1);
  local_bc = 0;
  local_90 = 0;
  icu_76_godot::CharString::appendInvariantChars
            ((wchar16 *)&local_c8,iVar1,(UErrorCode *)(ulong)local_e4);
  pcVar6 = local_c8;
  pUVar8 = (UResourceBundle *)0x0;
  if (*(int *)param_9 < 1) {
    if (*local_c8 == '/') {
      pUVar8 = (UResourceBundle *)(local_c8 + 1);
      pcVar6 = strchr((char *)pUVar8,0x2f);
      if (pcVar6 == (char *)0x0) {
        iVar1 = strcmp((char *)pUVar8,"LOCALE");
        if (iVar1 != 0) {
          pcVar6 = "";
          iVar1 = strcmp((char *)pUVar8,"ICUDATA");
          if (iVar1 == 0) {
            pUVar8 = (UResourceBundle *)0x0;
          }
          pcVar4 = (char *)0x0;
          goto LAB_00102c1f;
        }
        local_f8 = (UResourceBundle *)0x0;
        pUVar9 = param_5;
        goto LAB_00102c72;
      }
      *pcVar6 = '\0';
      pcVar6 = pcVar6 + 1;
      iVar1 = strcmp((char *)pUVar8,"LOCALE");
      if (iVar1 != 0) {
        iVar1 = strcmp((char *)pUVar8,"ICUDATA");
        if (iVar1 == 0) {
          pUVar8 = (UResourceBundle *)0x0;
        }
        pcVar4 = (char *)0x0;
        pcVar7 = strchr(pcVar6,0x2f);
        if (pcVar7 != (char *)0x0) {
          *pcVar7 = '\0';
          pcVar4 = pcVar7 + 1;
        }
        goto LAB_00102c1f;
      }
      local_f8 = (UResourceBundle *)0x0;
      pUVar9 = param_5;
LAB_00102d1c:
      local_108 = (StringPiece *)&local_d8;
      local_e0 = (char *)0x0;
      icu_76_godot::StringPiece::StringPiece(local_108,pcVar6);
      local_88 = (char *)((long)&local_7c + 1);
      local_80 = 0x28;
      local_50 = 0;
      local_7c = 0;
      icu_76_godot::CharString::append
                ((char *)&local_88,(int)local_d8,(UErrorCode *)(ulong)local_d0);
      iVar1 = *(int *)param_9;
      if (iVar1 < 1) {
        pcVar4 = (char *)0x0;
        local_d8 = local_88;
        do {
          iVar2 = *(int *)(pUVar9 + 0x48);
          if (*local_d8 != '\0') {
            if (0 < iVar1) goto LAB_001030d8;
            do {
              uVar3 = res_findResource_76_godot(pUVar9 + 0x28,iVar2,local_108,&local_e0);
              if (uVar3 == 0xffffffff) {
                iVar1 = *(int *)param_9;
                bVar10 = false;
                goto LAB_00102ec4;
              }
              param_8 = (UResourceBundle *)
                        init_resb_result(pUVar9,uVar3,local_e0,-1,param_5,pcVar4,param_7 + 1,param_8
                                         ,param_9);
              iVar1 = *(int *)param_9;
              if (0 < iVar1) goto LAB_001030d8;
              if ((local_e0 == (char *)0x0) || (iVar2 = strcmp(pcVar6,local_e0), iVar2 != 0)) {
                if ((*(UResourceBundle **)(param_8 + 0x20) != (UResourceBundle *)0x0) &&
                   (*(UResourceBundle **)(param_8 + 0x20) != param_8 + 0x28)) {
                  uprv_free_76_godot();
                }
                *(undefined8 *)(param_8 + 0x20) = 0;
                *(undefined4 *)(param_8 + 0x68) = 0;
                sVar5 = strlen(pcVar6);
                ures_appendResPath(param_8,pcVar6,(int)sVar5,param_9);
                if (*(char *)(*(long *)(param_8 + 0x20) + -1 + (long)*(int *)(param_8 + 0x68)) !=
                    '/') {
                  ures_appendResPath(param_8,"/",1,param_9);
                }
                iVar1 = *(int *)param_9;
                if (0 < iVar1) goto LAB_001030d8;
              }
              iVar2 = *(int *)(param_8 + 0x6c);
              pUVar9 = *(UResourceDataEntry **)(param_8 + 8);
              pcVar4 = *(char **)(param_8 + 0x20);
            } while (*local_d8 != '\0');
          }
          bVar10 = iVar2 != -1;
LAB_00102ec4:
          if ((0 < iVar1) || (bVar10)) goto LAB_001030d8;
          pUVar9 = *(UResourceDataEntry **)(pUVar9 + 0x10);
          if (pUVar9 == (UResourceDataEntry *)0x0) goto LAB_001030cb;
          local_d8 = local_88;
          strcpy(local_88,pcVar6);
          iVar1 = *(int *)param_9;
        } while( true );
      }
      if ((char)local_7c != '\0') {
        uprv_free_76_godot(local_88);
      }
LAB_00102cc2:
      param_8 = (UResourceBundle *)0x0;
    }
    else {
      pcVar4 = strchr(local_c8,0x2f);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x0;
        pUVar8 = *(UResourceBundle **)(param_5 + 8);
      }
      else {
        *pcVar4 = '\0';
        pcVar4 = pcVar4 + 1;
        pUVar8 = *(UResourceBundle **)(param_5 + 8);
      }
LAB_00102c1f:
      local_d8 = (char *)((ulong)local_d8._4_4_ << 0x20);
      local_f8 = (UResourceBundle *)ures_openWithType(0,pUVar8,pcVar6,2,&local_d8);
      if ((int)local_d8 < 1) {
        pcVar6 = pcVar4;
        pUVar9 = *(UResourceDataEntry **)(local_f8 + 8);
        if (pcVar4 != (char *)0x0) goto LAB_00102d1c;
LAB_00102c72:
        local_e0 = (char *)0x0;
        uVar3 = *(uint *)(pUVar9 + 0x48);
        if (param_6 != (char *)0x0) {
          local_90 = 0;
          *local_c8 = '\0';
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_d8,param_6);
          icu_76_godot::CharString::append
                    ((char *)&local_c8,(int)local_d8,(UErrorCode *)(ulong)local_d0);
          if (0 < *(int *)param_9) goto LAB_00102cc2;
          local_d8 = local_c8;
          uVar3 = res_findResource_76_godot(pUVar9 + 0x28,uVar3,(StringPiece *)&local_d8,&local_e0);
        }
        if (param_3 == (char *)0x0) {
          if (param_4 != -1) {
            if ((0x34UL >> (uVar3 >> 0x1c) & 1) == 0) {
              uVar3 = res_getArrayItem_76_godot(pUVar9 + 0x28,uVar3,param_4);
            }
            else {
              uVar3 = res_getTableItemByIndex_76_godot(pUVar9 + 0x28,uVar3,param_4,&local_d8);
            }
          }
        }
        else {
          local_90 = 0;
          *local_c8 = '\0';
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_d8,param_3);
          icu_76_godot::CharString::append
                    ((char *)&local_c8,(int)local_d8,(UErrorCode *)(ulong)local_d0);
          if (0 < *(int *)param_9) goto LAB_00102cc2;
          local_d8 = local_c8;
          uVar3 = res_findResource_76_godot(pUVar9 + 0x28,uVar3,(StringPiece *)&local_d8,&local_e0);
        }
        if (uVar3 == 0xffffffff) {
          *(undefined4 *)param_9 = 2;
        }
        else {
          param_8 = (UResourceBundle *)
                    init_resb_result(pUVar9,uVar3,local_e0,-1,param_5,(char *)0x0,param_7 + 1,
                                     param_8,param_9);
        }
        goto LAB_001030a9;
      }
      *(int *)param_9 = (int)local_d8;
    }
    goto LAB_00102cc8;
  }
  goto LAB_00102cdf;
LAB_001030cb:
  *(undefined4 *)param_9 = 2;
LAB_001030d8:
  if ((char)local_7c != '\0') {
    uprv_free_76_godot(local_88);
  }
LAB_001030a9:
  pUVar8 = param_8;
  if (param_8 != local_f8) {
LAB_00102cc8:
    pUVar8 = param_8;
    if (local_f8 != (UResourceBundle *)0x0) {
      ures_closeBundle(local_f8,1);
    }
  }
LAB_00102cdf:
  param_8 = pUVar8;
  if ((char)local_bc != '\0') {
    uprv_free_76_godot(local_c8);
  }
LAB_00102b4c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_8;
}



/* (anonymous namespace)::init_resb_result(UResourceDataEntry*, unsigned int, char const*, int,
   UResourceDataEntry*, char const*, int, UResourceBundle*, UErrorCode*) */

UResourceBundle *
(anonymous_namespace)::init_resb_result
          (UResourceDataEntry *param_1,uint param_2,char *param_3,int param_4,
          UResourceDataEntry *param_5,char *param_6,int param_7,UResourceBundle *param_8,
          UErrorCode *param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  UResourceBundle *pUVar7;
  UResourceBundle *__s;
  long in_FS_OFFSET;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_9 != (UErrorCode *)0x0) && (*(int *)param_9 < 1)) {
    if (param_5 == (UResourceDataEntry *)0x0) {
      uVar3 = 1;
LAB_00103505:
      *(undefined4 *)param_9 = uVar3;
      param_8 = (UResourceBundle *)0x0;
    }
    else if (param_2 >> 0x1c == 3) {
      if (param_7 < 0x100) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          pUVar7 = (UResourceBundle *)
                   getAliasTargetAsResourceBundle
                             ((ResourceData *)(param_1 + 0x28),param_2,param_3,param_4,param_5,
                              param_6,param_7,param_8,param_9);
          return pUVar7;
        }
        goto LAB_00103510;
      }
      *(undefined4 *)param_9 = 0x18;
    }
    else {
      if (param_8 == (UResourceBundle *)0x0) {
        param_8 = (UResourceBundle *)uprv_malloc_76_godot(0x88);
        uVar2 = _LC9;
        if (param_8 == (UResourceBundle *)0x0) {
          uVar3 = 7;
          goto LAB_00103505;
        }
        *(undefined8 *)(param_8 + 0x20) = 0;
        *(undefined4 *)(param_8 + 0x68) = 0;
        *(undefined8 *)(param_8 + 0x74) = uVar2;
      }
      else {
        lVar5 = *(long *)(param_8 + 8);
        if (lVar5 != 0) {
          umtx_lock_76_godot();
          do {
            plVar1 = (long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x6c) = *(int *)(lVar5 + 0x6c) + -1;
            lVar5 = *plVar1;
          } while (*plVar1 != 0);
          umtx_unlock_76_godot(resbMutex);
        }
        if (*(long *)(param_8 + 0x10) != 0) {
          uprv_free_76_godot();
        }
        pUVar7 = *(UResourceBundle **)(param_8 + 0x20);
        if (pUVar7 != (UResourceBundle *)param_6) {
          if ((pUVar7 != (UResourceBundle *)0x0) && (pUVar7 != param_8 + 0x28)) {
            uprv_free_76_godot();
          }
          *(undefined8 *)(param_8 + 0x20) = 0;
          *(undefined4 *)(param_8 + 0x68) = 0;
        }
      }
      *(UResourceDataEntry **)(param_8 + 8) = param_1;
      umtx_lock_76_godot(resbMutex);
      lVar5 = *(long *)(param_1 + 0x10);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
        *(int *)(lVar5 + 0x6c) = *(int *)(lVar5 + 0x6c) + 1;
      }
      umtx_unlock_76_godot(resbMutex);
      *(char **)param_8 = param_3;
      *(undefined2 *)(param_8 + 0x70) = 0;
      *(undefined4 *)(param_8 + 0x7c) = 0xffffffff;
      *(UResourceDataEntry **)(param_8 + 0x18) = param_5;
      if (*(char **)(param_8 + 0x20) != param_6) {
        sVar6 = strlen(param_6);
        ures_appendResPath(param_8,param_6,(int)sVar6,param_9);
      }
      if (param_3 == (char *)0x0) {
        if (-1 < param_4) {
          param_3 = local_148;
          iVar4 = T_CString_integerToString_76_godot(param_3,param_4,10);
          goto LAB_00103371;
        }
LAB_001033a2:
        pUVar7 = *(UResourceBundle **)(param_8 + 0x20);
      }
      else {
        sVar6 = strlen(param_3);
        iVar4 = (int)sVar6;
LAB_00103371:
        ures_appendResPath(param_8,param_3,iVar4,param_9);
        pUVar7 = *(UResourceBundle **)(param_8 + 0x20);
        if (pUVar7[(long)*(int *)(param_8 + 0x68) + -1] != (UResourceBundle)0x2f) {
          ures_appendResPath(param_8,"/",1,param_9);
          goto LAB_001033a2;
        }
      }
      __s = param_8 + 0x28;
      sVar6 = 0x40;
      if (__s == pUVar7) {
        sVar6 = 0x40 - (long)*(int *)(param_8 + 0x68);
        __s = pUVar7 + *(int *)(param_8 + 0x68);
      }
      memset(__s,0,sVar6);
      *(uint *)(param_8 + 0x6c) = param_2;
      *(undefined8 *)(param_8 + 0x10) = 0;
      uVar3 = res_countArrayItems_76_godot(*(long *)(param_8 + 8) + 0x28,param_2);
      *(undefined4 *)(param_8 + 0x80) = uVar3;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_8;
  }
LAB_00103510:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



UResourceBundle *
ures_getNextResource_76_godot(long param_1,UResourceBundle *param_2,UErrorCode *param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (char *)0x0;
  if ((param_3 != (UErrorCode *)0x0) && (*(int *)param_3 < 1)) {
    if (param_1 == 0) {
      *(undefined4 *)param_3 = 1;
    }
    else if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x80) + -1) {
      *(undefined4 *)param_3 = 8;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x7c) + 1;
      *(int *)(param_1 + 0x7c) = iVar3;
      uVar2 = 1L << (byte)((uint)*(undefined4 *)(param_1 + 0x6c) >> 0x1c);
      if ((uVar2 & 0x40c3) == 0) {
        if ((uVar2 & 0x34) == 0) {
          if ((uVar2 & 0x300) == 0) goto LAB_001035f3;
          uVar1 = res_getArrayItem_76_godot(*(long *)(param_1 + 8) + 0x28);
        }
        else {
          uVar1 = res_getTableItemByIndex_76_godot
                            (*(long *)(param_1 + 8) + 0x28,*(undefined4 *)(param_1 + 0x6c),iVar3,
                             &local_28);
        }
        param_2 = (UResourceBundle *)
                  (anonymous_namespace)::init_resb_result
                            (*(UResourceDataEntry **)(param_1 + 8),uVar1,local_28,
                             *(int *)(param_1 + 0x7c),*(UResourceDataEntry **)(param_1 + 0x18),
                             *(char **)(param_1 + 0x20),0,param_2,param_3);
      }
      else {
        param_2 = (UResourceBundle *)ures_copyResb_76_godot(param_2,param_1,param_3);
      }
    }
  }
LAB_001035f3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}



char * ures_loc_nextLocale(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  char *__s;
  size_t sVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x7c) < *(int *)(lVar1 + 0x80) + -1)) {
    puVar3 = (undefined8 *)ures_getNextResource_76_godot(lVar1,lVar1 + 0x88);
    if (puVar3 != (undefined8 *)0x0) {
      __s = (char *)*puVar3;
      sVar4 = strlen(__s);
      uVar2 = (undefined4)sVar4;
      goto LAB_0010369c;
    }
  }
  uVar2 = 0;
  __s = (char *)0x0;
LAB_0010369c:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
  }
  return __s;
}



UResourceBundle *
ures_getByIndex_76_godot(long param_1,int param_2,UResourceBundle *param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (char *)0x0;
  if ((param_4 != (UErrorCode *)0x0) && (*(int *)param_4 < 1)) {
    if (param_1 == 0) {
      *(undefined4 *)param_4 = 1;
    }
    else if ((param_2 < 0) || (*(int *)(param_1 + 0x80) <= param_2)) {
      *(undefined4 *)param_4 = 2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x6c);
      uVar3 = 1L << (byte)((uint)uVar1 >> 0x1c);
      if ((uVar3 & 0x40c3) == 0) {
        if ((uVar3 & 0x34) == 0) {
          if ((uVar3 & 0x300) == 0) goto LAB_00103770;
          uVar2 = res_getArrayItem_76_godot(*(long *)(param_1 + 8) + 0x28,uVar1,param_2);
        }
        else {
          uVar2 = res_getTableItemByIndex_76_godot
                            (*(long *)(param_1 + 8) + 0x28,uVar1,param_2,&local_38);
        }
        param_3 = (UResourceBundle *)
                  (anonymous_namespace)::init_resb_result
                            (*(UResourceDataEntry **)(param_1 + 8),uVar2,local_38,param_2,
                             *(UResourceDataEntry **)(param_1 + 0x18),*(char **)(param_1 + 0x20),0,
                             param_3,param_4);
      }
      else {
        param_3 = (UResourceBundle *)ures_copyResb_76_godot(param_3,param_1,param_4);
      }
    }
  }
LAB_00103770:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* ures_getStringWithAlias(UResourceBundle const*, unsigned int, int, int*, UErrorCode*) */

long ures_getStringWithAlias
               (UResourceBundle *param_1,uint param_2,int param_3,int *param_4,UErrorCode *param_5)

{
  long lVar1;
  long lVar2;
  undefined4 in_register_00000034;
  
  if (param_2 >> 0x1c != 3) {
    lVar1 = res_getStringNoTrace_76_godot
                      (*(long *)(param_1 + 8) + 0x28,CONCAT44(in_register_00000034,param_2),param_4)
    ;
    return lVar1;
  }
  lVar1 = ures_getByIndex_76_godot(param_1,param_3,0,param_5);
  if ((param_5 != (UErrorCode *)0x0) && (*(int *)param_5 < 1)) {
    if (lVar1 != 0) {
      lVar2 = res_getStringNoTrace_76_godot
                        (*(long *)(lVar1 + 8) + 0x28,*(undefined4 *)(lVar1 + 0x6c),param_4);
      if (lVar2 == 0) {
        *(undefined4 *)param_5 = 0x11;
      }
      goto LAB_00103860;
    }
    *(undefined4 *)param_5 = 1;
  }
  lVar2 = 0;
LAB_00103860:
  ures_closeBundle(lVar1,1);
  return lVar2;
}



undefined8
ures_getNextString_76_godot(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_4 == (int *)0x0) {
    return 0;
  }
  if (*param_4 < 1) {
    if (param_1 == 0) {
      *param_4 = 1;
    }
    else if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x80) + -1) {
      *param_4 = 8;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x7c) + 1;
      *(int *)(param_1 + 0x7c) = iVar2;
      if (*(uint *)(param_1 + 0x6c) < 0xf0000000) {
                    /* WARNING: Could not recover jumptable at 0x001038ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&DAT_001071c0 +
                          *(int *)(&DAT_001071c0 + (ulong)(*(uint *)(param_1 + 0x6c) >> 0x1c) * 4)))
                          (&DAT_001071c0,param_3,iVar2,
                           &DAT_001071c0 +
                           *(int *)(&DAT_001071c0 + (ulong)(*(uint *)(param_1 + 0x6c) >> 0x1c) * 4))
        ;
        return uVar1;
      }
    }
  }
  return 0;
}



undefined8 ures_getStringByIndex_76_godot(long param_1,int param_2,undefined8 param_3,int *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if (param_1 == 0) {
      *param_4 = 1;
    }
    else if ((param_2 < 0) || (*(int *)(param_1 + 0x80) <= param_2)) {
      *param_4 = 2;
    }
    else {
      if (*(uint *)(param_1 + 0x6c) < 0xf0000000) {
                    /* WARNING: Could not recover jumptable at 0x00103a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&DAT_001071fc +
                          *(int *)(&DAT_001071fc + (ulong)(*(uint *)(param_1 + 0x6c) >> 0x1c) * 4)))
                          ();
        return uVar2;
      }
      *param_4 = 5;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ures_getUTF8StringByIndex_76_godot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ures_getStringByIndex_76_godot(param_1,param_2,&local_34,param_6);
  ures_toUTF8String(uVar1,local_34,param_3,param_4,(int)param_5,param_6);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



UResourceBundle *
ures_findSubResource_76_godot
          (UResourceBundle *param_1,char *param_2,UResourceBundle *param_3,UErrorCode *param_4)

{
  uint uVar1;
  UResourceBundle *pUVar2;
  long in_FS_OFFSET;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pUVar2 = param_3;
  local_50 = param_2;
  if ((param_4 != (UErrorCode *)0x0) && (*(int *)param_4 < 1)) {
    do {
      uVar1 = res_findResource_76_godot
                        (*(long *)(param_1 + 8) + 0x28,*(undefined4 *)(param_1 + 0x6c),&local_50,
                         &local_48);
      if (uVar1 == 0xffffffff) {
        *(undefined4 *)param_4 = 2;
        break;
      }
      param_1 = (UResourceBundle *)
                (anonymous_namespace)::init_resb_result
                          (*(UResourceDataEntry **)(param_1 + 8),uVar1,local_48,-1,
                           *(UResourceDataEntry **)(param_1 + 0x18),*(char **)(param_1 + 0x20),0,
                           param_3,param_4);
      pUVar2 = param_1;
    } while (*local_50 != '\0');
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pUVar2;
}



UResourceBundle *
ures_getByKeyWithFallback_76_godot
          (long param_1,char *param_2,UResourceBundle *param_3,UErrorCode *param_4)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  UResourceDataEntry *pUVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  size_t sVar11;
  UResourceDataEntry *pUVar12;
  char *pcVar13;
  undefined8 extraout_RDX;
  uint uVar14;
  undefined4 uVar15;
  long in_FS_OFFSET;
  UErrorCode *pUVar16;
  UResourceBundle *local_f0;
  char *local_d8;
  char *local_a8;
  char *local_a0;
  char *local_98;
  uint local_90;
  char *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == (UErrorCode *)0x0) || (0 < *(int *)param_4)) goto LAB_00103e18;
  if (param_1 == 0) {
    *(undefined4 *)param_4 = 1;
    goto LAB_00103e18;
  }
  uVar6 = *(uint *)(param_1 + 0x6c);
  uVar14 = uVar6 >> 0x1c;
  if ((0x34UL >> uVar14 & 1) == 0) {
    *(undefined4 *)param_4 = 0x11;
    local_f0 = (UResourceBundle *)0x0;
LAB_0010417c:
    ures_closeBundle(local_f0,1);
LAB_00103e18:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pcVar2 = *(char **)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 8);
  local_7c = 0;
  iVar1 = *(int *)(param_1 + 0x68);
  local_80 = 0x28;
  local_50 = 0;
  local_a8 = (char *)((ulong)local_a8 & 0xffffffff00000000);
  local_88 = (char *)((long)&local_7c + 1);
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,param_2);
  icu_76_godot::CharString::append((char *)&local_88,(int)local_98,(UErrorCode *)(ulong)local_90);
  if ((int)local_a8 < 1) {
    if (*local_88 == '\0') {
      if ((char)local_7c != '\0') {
LAB_0010423b:
        uprv_free_76_godot(local_88);
LAB_001041be:
        if (uVar6 == 0xffffffff) goto LAB_00103e70;
      }
      local_a8 = param_2;
      param_3 = (UResourceBundle *)
                (anonymous_namespace)::init_resb_result
                          (*(UResourceDataEntry **)(param_1 + 8),uVar6,param_2,-1,
                           *(UResourceDataEntry **)(param_1 + 0x18),*(char **)(param_1 + 0x20),0,
                           param_3,param_4);
      local_f0 = (UResourceBundle *)0x0;
      goto LAB_0010417c;
    }
    pcVar13 = local_88;
    do {
      if ((0x334UL >> (ulong)uVar14 & 1) == 0) break;
      pcVar10 = strchr(pcVar13,0x2f);
      if (pcVar10 == (char *)0x0) {
        sVar11 = strlen(pcVar13);
        pcVar10 = pcVar13 + sVar11;
      }
      else {
        *pcVar10 = '\0';
        pcVar10 = pcVar10 + 1;
      }
      local_98 = pcVar13;
      uVar6 = res_getTableItemByKey_76_godot(lVar3 + 0x28,uVar6,&local_a0,(StringPiece *)&local_98);
      uVar14 = uVar6 >> 0x1c;
      if (*pcVar10 == '\0') {
        if ((char)local_7c != '\0') goto LAB_0010423b;
        goto LAB_001041be;
      }
      pcVar13 = pcVar10;
    } while (uVar6 != 0xffffffff);
  }
  if ((char)local_7c != '\0') {
    uprv_free_76_godot(local_88);
  }
LAB_00103e70:
  local_d8 = *(char **)(param_1 + 0x20);
  pUVar12 = *(UResourceDataEntry **)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0x68);
  bVar5 = false;
  local_80 = 0x28;
  local_50 = 0;
  local_7c = 0;
  local_a0 = (char *)0x0;
  local_f0 = (UResourceBundle *)0x0;
  local_a8 = param_2;
  local_88 = (char *)((long)&local_7c + 1);
LAB_00103ee0:
  do {
    pUVar4 = *(UResourceDataEntry **)(pUVar12 + 0x10);
    if (pUVar4 == (UResourceDataEntry *)0x0) {
      if (bVar5) break;
      bVar5 = true;
      iVar7 = *(int *)(pUVar12 + 0x70);
      uVar15 = *(undefined4 *)(pUVar12 + 0x48);
    }
    else {
      iVar7 = *(int *)(pUVar4 + 0x70);
      uVar15 = *(undefined4 *)(pUVar4 + 0x48);
      pUVar12 = pUVar4;
    }
    if (iVar7 == 0) {
      pUVar16 = param_4;
      createPath(pcVar2,iVar1,local_d8,iVar9,param_2,(CharString *)&local_88,param_4);
      if (*(int *)param_4 < 1) {
        local_a0 = local_88;
        local_a8 = param_2;
LAB_00103f83:
        uVar6 = res_findResource_76_godot(pUVar12 + 0x28,uVar15,&local_a0,&local_a8);
        if (uVar6 >> 0x1c == 3) {
          if ((*local_a0 != '\0') &&
             (local_f0 = (UResourceBundle *)
                         (anonymous_namespace)::init_resb_result
                                   (pUVar12,uVar6,(char *)0x0,-1,
                                    *(UResourceDataEntry **)(param_1 + 0x18),
                                    *(char **)(param_1 + 0x20),0,local_f0,param_4),
             local_f0 != (UResourceBundle *)0x0)) {
            pUVar12 = *(UResourceDataEntry **)(local_f0 + 8);
            uVar15 = *(undefined4 *)(local_f0 + 0x6c);
            local_d8 = *(char **)(local_f0 + 0x20);
            iVar9 = *(int *)(local_f0 + 0x68);
            goto LAB_00103f79;
          }
          goto LAB_00103fad;
        }
        if (uVar6 != 0xffffffff) goto LAB_00103f79;
        goto LAB_00103ee0;
      }
      ures_closeBundle(local_f0,1,extraout_RDX,pUVar16);
      if ((char)local_7c != '\0') {
        uprv_free_76_godot(local_88);
      }
      goto LAB_00103e18;
    }
  } while( true );
  *(undefined4 *)param_4 = 2;
LAB_0010421c:
  if ((char)local_7c != '\0') {
    uprv_free_76_godot(local_88);
  }
  goto LAB_0010417c;
LAB_00103f79:
  if (*local_a0 != '\0') goto LAB_00103f83;
LAB_00103fad:
  pcVar10 = (char *)uloc_getDefault_76_godot();
  pcVar13 = *(char **)pUVar12;
  iVar7 = strcmp(pcVar13,pcVar10);
  iVar8 = -0x7f;
  if (iVar7 != 0) {
    iVar7 = strcmp(pcVar13,"root");
    iVar8 = (iVar7 == 0) - 0x80;
  }
  *(int *)param_4 = iVar8;
  param_3 = (UResourceBundle *)
            (anonymous_namespace)::init_resb_result
                      (pUVar12,uVar6,local_a8,-1,*(UResourceDataEntry **)(param_1 + 0x18),
                       *(char **)(param_1 + 0x20),0,param_3,param_4);
  if (local_d8 == (char *)0x0) {
    local_d8 = *(char **)(param_3 + 0x20);
    if (((local_d8 == (char *)0x0) || (pcVar13 = strchr(local_d8,0x2f), pcVar13 == (char *)0x0)) ||
       (pcVar13[1] == '\0')) {
      local_50 = 0;
      *local_88 = '\0';
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,param_2);
      icu_76_godot::CharString::append
                ((char *)&local_88,(int)local_98,(UErrorCode *)(ulong)local_90);
      goto LAB_00104088;
    }
    sVar11 = strlen(local_d8);
    iVar9 = (int)sVar11;
  }
  createPath(pcVar2,iVar1,local_d8,iVar9,param_2,(CharString *)&local_88,param_4);
LAB_00104088:
  if ((*(UResourceBundle **)(param_3 + 0x20) != (UResourceBundle *)0x0) &&
     (*(UResourceBundle **)(param_3 + 0x20) != param_3 + 0x28)) {
    uprv_free_76_godot();
  }
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined4 *)(param_3 + 0x68) = 0;
  ures_appendResPath(param_3,local_88,local_50,param_4);
  if (*(char *)(*(long *)(param_3 + 0x20) + -1 + (long)*(int *)(param_3 + 0x68)) != '/') {
    ures_appendResPath(param_3,"/",1,param_4);
  }
  goto LAB_0010421c;
}



short * ures_getStringByKeyWithFallback_76_godot
                  (undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  short *psVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  int local_bc;
  long local_b8 [13];
  undefined4 local_4c;
  long local_30;
  
  psVar1 = (short *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = local_b8;
  for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar3 = 0;
    plVar3 = plVar3 + 1;
  }
  ures_getByKeyWithFallback_76_godot(param_1,param_2,local_b8,param_4);
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    psVar1 = (short *)res_getStringNoTrace_76_godot(local_b8[1] + 0x28,local_4c,&local_bc);
    if (psVar1 == (short *)0x0) {
      *param_4 = 0x11;
    }
  }
  ures_closeBundle(local_b8,1);
  if (*param_4 < 1) {
    if ((((local_bc == 3) && (*psVar1 == 0x2205)) && (psVar1[1] == 0x2205)) && (psVar1[2] == 0x2205)
       ) {
      local_bc = 0;
      psVar1 = (short *)0x0;
      *param_4 = 2;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_bc;
    }
  }
  else {
    psVar1 = (short *)0x0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return psVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ures_getValueWithFallback_76_godot
               (long param_1,char *param_2,undefined8 param_3,long param_4,int *param_5)

{
  undefined8 uVar1;
  
  if (0 < *param_5) {
    return;
  }
  if (param_2 != (char *)0x0) {
    if ((*param_2 == '\0') || (param_1 = ures_getByKeyWithFallback_76_godot(), *param_5 < 1)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_4 + 8) = *(long *)(param_1 + 8) + 0x28;
      *(undefined8 *)(param_4 + 0x10) = uVar1;
      *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(param_1 + 0x6c);
    }
    return;
  }
  *param_5 = 1;
  return;
}



/* (anonymous namespace)::getAllItemsWithFallback(UResourceBundle const*,
   icu_76_godot::ResourceDataValue&, icu_76_godot::ResourceSink&, UErrorCode&) */

void (anonymous_namespace)::getAllItemsWithFallback
               (UResourceBundle *param_1,ResourceDataValue *param_2,ResourceSink *param_3,
               UErrorCode *param_4)

{
  undefined8 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  UResourceBundle *pUVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  byte bVar8;
  int local_15c;
  UResourceBundle local_158 [8];
  long local_150;
  undefined8 local_140;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_c8 [17];
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_2 + 8) = *(long *)(param_1 + 8) + 0x28;
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    uVar1 = *(undefined8 *)param_1;
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_3 + 0x18);
    if (lVar6 == 0) {
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x6c);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001046e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_3,uVar1,param_2,1,param_4);
        return;
      }
      goto LAB_00104718;
    }
    iVar2 = *(int *)(lVar6 + 0x70);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x6c);
    (*UNRECOVERED_JUMPTABLE)(param_3,uVar1,param_2,0 < iVar2,param_4);
    if (iVar2 < 1) {
      pUVar4 = local_158;
      for (lVar5 = 0x11; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined8 *)pUVar4 = 0;
        pUVar4 = pUVar4 + (ulong)bVar8 * -0x10 + 8;
      }
      local_140 = *(undefined8 *)(param_1 + 0x18);
      local_e8 = *(char *)(lVar6 + 0x60) == '\0';
      local_e7 = 1;
      local_ec = *(undefined4 *)(lVar6 + 0x48);
      local_150 = lVar6;
      local_d8 = res_countArrayItems_76_godot(lVar6 + 0x28);
      local_dc = 0xffffffff;
      umtx_lock_76_godot(resbMutex);
      lVar5 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x6c) = *(int *)(lVar6 + 0x6c) + 1;
      for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
        *(int *)(lVar5 + 0x6c) = *(int *)(lVar5 + 0x6c) + 1;
      }
      umtx_unlock_76_godot(resbMutex);
      pcVar3 = *(char **)(param_1 + 0x20);
      local_15c = 0;
      puVar7 = local_c8;
      for (lVar6 = 0x11; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
      }
      pUVar4 = local_158;
      if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) ||
         (pUVar4 = (UResourceBundle *)
                   ures_getByKeyWithFallback_76_godot(local_158,pcVar3,local_c8,&local_15c),
         local_15c < 1)) {
        getAllItemsWithFallback(pUVar4,param_2,param_3,param_4);
      }
      ures_closeBundle(local_c8,1);
      ures_closeBundle(local_158,1);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104718:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ures_getAllItemsWithFallback_76_godot
               (UResourceBundle *param_1,char *param_2,ResourceSink *param_3,UErrorCode *param_4)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8 [17];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    if (param_2 == (char *)0x0) {
      *(undefined4 *)param_4 = 1;
    }
    else {
      cVar1 = *param_2;
      puVar3 = local_b8;
      for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      if ((cVar1 == '\0') ||
         (param_1 = (UResourceBundle *)
                    ures_getByKeyWithFallback_76_godot(param_1,param_2,local_b8,param_4),
         *(int *)param_4 < 1)) {
        local_d8 = u_versionFromString_76_godot;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0xffffffff;
        (anonymous_namespace)::getAllItemsWithFallback
                  (param_1,(ResourceDataValue *)&local_d8,param_3,param_4);
        icu_76_godot::ResourceDataValue::~ResourceDataValue((ResourceDataValue *)&local_d8);
      }
      ures_closeBundle(local_b8,1);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ures_getAllChildrenWithFallback_76_godot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined **local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = &PTR__GetAllChildrenSink_0010b0a8;
  local_30 = param_3;
  ures_getAllItemsWithFallback_76_godot(param_1,param_2,&local_38);
  local_38 = &PTR__GetAllChildrenSink_0010b0a8;
  icu_76_godot::ResourceSink::~ResourceSink((ResourceSink *)&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



UResourceBundle *
ures_getByKey_76_godot
          (UResourceBundle *param_1,char *param_2,UResourceBundle *param_3,UErrorCode *param_4)

{
  UResourceDataEntry *pUVar1;
  long in_FS_OFFSET;
  uint local_40;
  undefined1 local_3c [4];
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0xffffffff;
  local_38 = param_2;
  if ((param_4 != (UErrorCode *)0x0) && (*(int *)param_4 < 1)) {
    if (param_1 == (UResourceBundle *)0x0) {
      *(undefined4 *)param_4 = 1;
    }
    else if ((0x34UL >> (*(uint *)(param_1 + 0x6c) >> 0x1c) & 1) == 0) {
      *(undefined4 *)param_4 = 0x11;
    }
    else {
      local_40 = res_getTableItemByKey_76_godot
                           (*(long *)(param_1 + 8) + 0x28,*(uint *)(param_1 + 0x6c),local_3c,
                            &local_38);
      if (local_40 == 0xffffffff) {
        local_38 = param_2;
        if ((param_1[0x70] == (UResourceBundle)0x0) ||
           (pUVar1 = (UResourceDataEntry *)getFallbackData(param_1,&local_38,&local_40,param_4),
           0 < *(int *)param_4)) {
          *(undefined4 *)param_4 = 2;
        }
        else {
          param_3 = (UResourceBundle *)
                    (anonymous_namespace)::init_resb_result
                              (pUVar1,local_40,local_38,-1,*(UResourceDataEntry **)(param_1 + 0x18),
                               *(char **)(param_1 + 0x20),0,param_3,param_4);
        }
      }
      else {
        param_3 = (UResourceBundle *)
                  (anonymous_namespace)::init_resb_result
                            (*(UResourceDataEntry **)(param_1 + 8),local_40,local_38,-1,
                             *(UResourceDataEntry **)(param_1 + 0x18),*(char **)(param_1 + 0x20),0,
                             param_3,param_4);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* WARNING: Type propagation algorithm not settling */

long ures_getStringByKey_76_godot
               (UResourceBundle *param_1,char *param_2,undefined8 param_3,UErrorCode *param_4)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  uint local_40 [2];
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40[0] = 0xffffffff;
  local_38 = param_2;
  if ((param_4 != (UErrorCode *)0x0) && (*(int *)param_4 < 1)) {
    if (param_1 == (UResourceBundle *)0x0) {
      *(undefined4 *)param_4 = 1;
    }
    else if ((0x34UL >> (*(uint *)(param_1 + 0x6c) >> 0x1c) & 1) == 0) {
      *(undefined4 *)param_4 = 0x11;
    }
    else {
      local_40[1] = 0;
      local_40[0] = res_getTableItemByKey_76_godot
                              (*(long *)(param_1 + 8) + 0x28,*(uint *)(param_1 + 0x6c),local_40 + 1,
                               &local_38);
      if (local_40[0] == 0xffffffff) {
        local_38 = param_2;
        if ((param_1[0x70] != (UResourceBundle)0x0) &&
           (lVar2 = getFallbackData(param_1,&local_38,local_40,param_4), *(int *)param_4 < 1)) {
          if (local_40[0] >> 0x1c == 3) goto LAB_00104b40;
          if ((0xffffffffffffffbeU >> (local_40[0] >> 0x1c) & 1) == 0) {
            lVar2 = res_getStringNoTrace_76_godot(lVar2 + 0x28,local_40[0],param_3);
            goto LAB_00104ac8;
          }
          goto LAB_00104ab6;
        }
        *(undefined4 *)param_4 = 2;
      }
      else {
        if (local_40[0] >> 0x1c == 3) {
LAB_00104b40:
          lVar1 = ures_getByKey_76_godot(param_1,param_2,0,param_4);
          if (*(int *)param_4 < 1) {
            if (lVar1 == 0) {
              *(undefined4 *)param_4 = 1;
              goto LAB_00104c16;
            }
            lVar2 = res_getStringNoTrace_76_godot
                              (*(long *)(lVar1 + 8) + 0x28,*(undefined4 *)(lVar1 + 0x6c),param_3);
            if (lVar2 == 0) {
              *(undefined4 *)param_4 = 0x11;
            }
          }
          else {
LAB_00104c16:
            lVar2 = 0;
          }
          ures_closeBundle(lVar1,1);
          goto LAB_00104ac8;
        }
        if ((0xffffffffffffffbeU >> (local_40[0] >> 0x1c) & 1) == 0) {
          lVar2 = res_getStringNoTrace_76_godot(*(long *)(param_1 + 8) + 0x28,local_40[0],param_3);
          goto LAB_00104ac8;
        }
LAB_00104ab6:
        *(undefined4 *)param_4 = 0x11;
      }
    }
  }
  lVar2 = 0;
LAB_00104ac8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



void ures_getUTF8StringByKey_76_godot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ures_getStringByKey_76_godot(param_1,param_2,&local_34,param_6);
  ures_toUTF8String(uVar1,local_34,param_3,param_4,(int)param_5,param_6);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined2 * ures_getVersionNumberInternal_76_godot(long param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    puVar2 = *(undefined2 **)(param_1 + 0x10);
    if (puVar2 != (undefined2 *)0x0) goto LAB_00104cd1;
    local_28 = 0;
    local_24 = 0;
    uVar1 = ures_getStringByKey_76_godot(param_1,"Version",&local_24,&local_28);
    lVar3 = (long)local_24;
    if (local_24 < 1) {
      lVar3 = 1;
    }
    puVar2 = (undefined2 *)uprv_malloc_76_godot((long)((int)lVar3 + 1));
    *(undefined2 **)(param_1 + 0x10) = puVar2;
    if (puVar2 != (undefined2 *)0x0) {
      if (local_24 < 1) {
        *puVar2 = 0x30;
      }
      else {
        u_UCharsToChars_76_godot(uVar1,puVar2);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar3) = 0;
        puVar2 = *(undefined2 **)(param_1 + 0x10);
      }
      goto LAB_00104cd1;
    }
  }
  puVar2 = (undefined2 *)0x0;
LAB_00104cd1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ures_getVersionNumber_76_godot(void)

{
  ures_getVersionNumberInternal_76_godot();
  return;
}



void ures_getVersion_76_godot(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ures_getVersionNumberInternal_76_godot();
    u_versionFromString_76_godot(param_2,uVar1);
    return;
  }
  return;
}



void ures_getVersionByKey_76_godot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ures_getStringByKey_76_godot(param_1,param_2,local_24);
  if (*param_4 < 1) {
    u_versionFromUString_76_godot(param_3,uVar1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ures_countArrayItems_76_godot(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_a8 [13];
  undefined4 local_3c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = local_a8;
  for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar3 = 0;
    plVar3 = plVar3 + 1;
  }
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_1 != 0) {
      ures_getByKey_76_godot(param_1,param_2,local_a8,param_3);
      if (*(long *)(local_a8[1] + 0x28) == 0) {
        *param_3 = 2;
        ures_closeBundle(local_a8,1);
        uVar1 = 0;
      }
      else {
        uVar1 = res_countArrayItems_76_godot(local_a8[1] + 0x28,local_3c);
        ures_closeBundle(local_a8,1);
      }
      goto LAB_00104eb2;
    }
    *param_3 = 1;
  }
  uVar1 = 0;
LAB_00104eb2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* getParentForFunctionalEquivalent(char const*, UResourceBundle*, UResourceBundle*,
   icu_76_godot::CharString&) */

void getParentForFunctionalEquivalent
               (char *param_1,UResourceBundle *param_2,UResourceBundle *param_3,CharString *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  char local_6c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_4 + 0x38) = 0;
  local_80 = 0;
  **(undefined1 **)param_4 = 0;
  if (param_2 == (UResourceBundle *)0x0) {
LAB_00104fdc:
    if ((local_80 < 1) && (*(int *)(param_4 + 0x38) != 0)) goto LAB_00104f8d;
  }
  else {
    ures_getByKey_76_godot(param_2,"%%Parent",param_3,&local_80);
    if (local_80 < 1) {
      lVar1 = res_getStringNoTrace_76_godot
                        (*(long *)(param_3 + 8) + 0x28,*(undefined4 *)(param_3 + 0x6c),&local_7c);
      if (lVar1 == 0) {
        local_80 = 0x11;
      }
      icu_76_godot::CharString::appendInvariantChars
                ((wchar16 *)param_4,(int)lVar1,(UErrorCode *)(ulong)local_7c);
      goto LAB_00104fdc;
    }
  }
  local_80 = 0;
  ulocimp_getParent_76_godot((char *)&local_78,(UErrorCode *)param_1);
  icu_76_godot::CharString::operator=(param_4,(CharString *)&local_78);
  if (local_6c != '\0') {
    uprv_free_76_godot(local_78);
  }
LAB_00104f8d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* (anonymous namespace)::GetAllChildrenSink::put(char const*, icu_76_godot::ResourceValue&, signed
   char, UErrorCode&) */

void __thiscall
(anonymous_namespace)::GetAllChildrenSink::put
          (GetAllChildrenSink *this,undefined8 param_1,long *param_2,char param_4,
          UErrorCode *param_5)

{
  UResourceDataEntry *pUVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  UResourceBundle *pUVar8;
  int iVar9;
  uint uVar10;
  long in_FS_OFFSET;
  byte bVar11;
  undefined8 local_1c0;
  long local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  uint local_1a0;
  code *local_198;
  ResourceData *local_190;
  UResourceDataEntry *local_188;
  uint local_180;
  undefined1 local_178 [48];
  undefined1 *local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_d0;
  UResourceBundle local_c8 [136];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c0 = param_1;
  (**(code **)(*param_2 + 0x58))(local_178,param_2,param_5);
  if (*(int *)param_5 < 1) {
    uVar10 = 0;
    while (cVar3 = icu_76_godot::ResourceTable::getKeyAndValue
                             ((int)local_178,(char **)(ulong)uVar10,(ResourceValue *)&local_1c0),
          cVar3 != '\0') {
      iVar4 = (**(code **)(*param_2 + 0x18))(param_2);
      if (iVar4 == 3) {
        uVar5 = *(uint *)(param_2 + 3);
        pUVar1 = (UResourceDataEntry *)param_2[2];
        pUVar8 = local_c8;
        for (lVar7 = 0x11; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined8 *)pUVar8 = 0;
          pUVar8 = pUVar8 + (ulong)bVar11 * -0x10 + 8;
        }
        lVar7 = getAliasTargetAsResourceBundle
                          ((ResourceData *)param_2[1],uVar5,(char *)0x0,-1,pUVar1,(char *)0x0,0,
                           local_c8,param_5);
        if (*(int *)param_5 < 1) {
          local_198 = u_versionFromString_76_godot;
          local_190 = (ResourceData *)(*(long *)(lVar7 + 8) + 0x28);
          local_188 = *(UResourceDataEntry **)(lVar7 + 0x18);
          local_180 = *(uint *)(lVar7 + 0x6c);
          iVar4 = icu_76_godot::ResourceDataValue::getType();
          iVar9 = (int)param_4;
          if (iVar4 == 2) {
            local_148 = (undefined1 *)((long)&local_13c + 1);
            local_13c = 0;
            local_140 = 0x28;
            local_110 = 0;
            icu_76_godot::StringPiece::StringPiece
                      ((StringPiece *)&local_1a8,*(char **)(lVar7 + 0x20));
            icu_76_godot::CharString::append
                      ((char *)&local_148,(int)local_1a8,(UErrorCode *)(ulong)local_1a0);
            uVar2 = local_1c0;
            (**(code **)(**(long **)(this + 8) + 0x18))
                      (*(long **)(this + 8),local_1c0,(ResourceDataValue *)&local_198,iVar9,param_5)
            ;
            lVar7 = *(long *)(lVar7 + 8);
            if (*(long *)(lVar7 + 0x10) != 0) {
              do {
                local_fc = 0;
                local_100 = 0x28;
                local_d0 = 0;
                local_108 = (long)&local_fc + 1;
                icu_76_godot::CharString::copyFrom
                          ((CharString *)&local_108,(UErrorCode *)&local_148);
                lVar7 = *(long *)(lVar7 + 0x10);
                local_1b8 = local_108;
                uVar5 = res_findResource_76_godot
                                  ((ResourceData *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x48),
                                   &local_1b8,local_1b0);
                if (uVar5 != 0xffffffff) {
                  local_190 = (ResourceData *)(lVar7 + 0x28);
                  local_180 = uVar5;
                  iVar4 = icu_76_godot::ResourceDataValue::getType();
                  if (iVar4 == 3) {
                    lVar6 = getAliasTargetAsResourceBundle
                                      (local_190,local_180,(char *)0x0,-1,local_188,(char *)0x0,0,
                                       local_c8,param_5);
                    local_110 = 0;
                    *local_148 = 0;
                    icu_76_godot::StringPiece::StringPiece
                              ((StringPiece *)&local_1a8,*(char **)(lVar6 + 0x20));
                    icu_76_godot::CharString::append
                              ((char *)&local_148,(int)local_1a8,(UErrorCode *)(ulong)local_1a0);
                    lVar7 = *(long *)(lVar6 + 8);
                    local_180 = *(uint *)(lVar6 + 0x6c);
                    local_190 = (ResourceData *)(lVar7 + 0x28);
                    iVar4 = icu_76_godot::ResourceDataValue::getType();
                  }
                  if (iVar4 != 2) {
                    *(undefined4 *)param_5 = 5;
                    if ((char)local_fc != '\0') {
                      uprv_free_76_godot(local_108);
                    }
                    if ((char)local_13c != '\0') {
                      uprv_free_76_godot(local_148);
                    }
                    icu_76_godot::ResourceDataValue::~ResourceDataValue
                              ((ResourceDataValue *)&local_198);
                    ures_closeBundle(local_c8,1);
                    goto LAB_00105140;
                  }
                  (**(code **)(**(long **)(this + 8) + 0x18))
                            (*(long **)(this + 8),uVar2,(ResourceDataValue *)&local_198,iVar9,
                             param_5);
                }
                if ((char)local_fc != '\0') {
                  uprv_free_76_godot(local_108);
                }
              } while (*(long *)(lVar7 + 0x10) != 0);
            }
            if ((char)local_13c != '\0') {
              uprv_free_76_godot(local_148);
            }
          }
          else {
            (**(code **)(**(long **)(this + 8) + 0x18))
                      (*(long **)(this + 8),local_1c0,(ResourceDataValue *)&local_198,iVar9,param_5)
            ;
          }
          icu_76_godot::ResourceDataValue::~ResourceDataValue((ResourceDataValue *)&local_198);
        }
        ures_closeBundle(local_c8,1);
        iVar4 = *(int *)param_5;
      }
      else {
        (**(code **)(**(long **)(this + 8) + 0x18))
                  (*(long **)(this + 8),local_1c0,param_2,(int)param_4,param_5);
        iVar4 = *(int *)param_5;
      }
      if (0 < iVar4) break;
      uVar10 = uVar10 + 1;
    }
  }
LAB_00105140:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ures_findResource_76_godot(char *param_1,undefined8 param_2,int *param_3)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *__s;
  char *__s_00;
  
  if (param_3 == (int *)0x0) {
    return param_2;
  }
  if (0 < *param_3) {
    return param_2;
  }
  sVar1 = strlen(param_1);
  lVar6 = (long)((int)sVar1 + 1);
  pcVar2 = (char *)uprv_malloc_76_godot(lVar6);
  if (pcVar2 == (char *)0x0) {
    *param_3 = 7;
    return param_2;
  }
  __memcpy_chk(pcVar2,param_1,lVar6,lVar6);
  __s = (char *)0x0;
  __s_00 = pcVar2;
  if (*pcVar2 == '/') {
    __s = pcVar2 + 1;
    pcVar3 = strchr(__s,0x2f);
    if (pcVar3 == (char *)0x0) {
      *param_3 = 1;
    }
    else {
      *pcVar3 = '\0';
      __s_00 = pcVar3 + 1;
    }
  }
  pcVar3 = strchr(__s_00,0x2f);
  if (pcVar3 == (char *)0x0) {
    uVar4 = ures_openWithType(0,__s,__s_00,0,param_3);
    if (*param_3 < 1) {
      uVar5 = ures_copyResb_76_godot(param_2,uVar4,param_3);
      goto LAB_00105606;
    }
  }
  else {
    *pcVar3 = '\0';
    uVar4 = ures_openWithType(0,__s,__s_00,0,param_3);
    if (*param_3 < 1) {
      uVar5 = ures_findSubResource_76_godot(uVar4,pcVar3 + 1,param_2,param_3);
LAB_00105606:
      ures_closeBundle(uVar4,1);
      uprv_free_76_godot(pcVar2);
      return uVar5;
    }
  }
  uprv_free_76_godot(pcVar2);
  return param_2;
}



undefined8 * ures_openAvailableLocales_76_godot(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (*param_2 < 1) {
    puVar5 = (undefined8 *)uprv_malloc_76_godot(0x110);
    puVar6 = (undefined8 *)uprv_malloc_76_godot(0x38);
    uVar4 = gLocalesEnum._40_8_;
    uVar3 = gLocalesEnum._32_8_;
    uVar2 = gLocalesEnum._24_8_;
    uVar1 = gLocalesEnum._16_8_;
    uVar7 = gLocalesEnum._8_8_;
    if ((puVar6 != (undefined8 *)0x0) && (puVar5 != (undefined8 *)0x0)) {
      *puVar6 = gLocalesEnum._0_8_;
      puVar6[1] = uVar7;
      puVar6[2] = uVar1;
      puVar6[3] = uVar2;
      puVar6[4] = uVar3;
      puVar6[5] = uVar4;
      puVar6[6] = gLocalesEnum._48_8_;
      *puVar5 = 0;
      puVar5[0x10] = 0;
      puVar9 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
      for (uVar8 = (ulong)(((int)puVar5 -
                           (int)(undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8)) + 0x88U >>
                          3); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
      }
      puVar5[0x11] = 0;
      puVar5[0x21] = 0;
      puVar9 = (undefined8 *)((ulong)(puVar5 + 0x12) & 0xfffffffffffffff8);
      for (uVar8 = (ulong)(((int)puVar5 -
                           (int)(undefined8 *)((ulong)(puVar5 + 0x12) & 0xfffffffffffffff8)) +
                           0x110U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
      }
      uVar7 = ures_openWithType(0,param_1,"res_index",2,param_2);
      ures_getByKey_76_godot(uVar7,"InstalledLocales",puVar5,param_2);
      if (*param_2 < 1) {
        puVar6[1] = puVar5;
        puVar5 = puVar6;
      }
      else {
        ures_closeBundle(puVar5,1);
        uprv_free_76_godot(puVar5);
        puVar5 = (undefined8 *)0x0;
        uprv_free_76_godot(puVar6);
      }
      ures_closeBundle(uVar7,1);
      return puVar5;
    }
    *param_2 = 7;
    uprv_free_76_godot(puVar6);
    uprv_free_76_godot(puVar5);
  }
  return (undefined8 *)0x0;
}



undefined4
ures_getFunctionalEquivalent_76_godot
          (undefined1 *param_1,undefined4 param_2,undefined8 param_3,char *param_4,char *param_5,
          UErrorCode *param_6,undefined1 *param_7,char param_8,int *param_9)

{
  UErrorCode *pUVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  UResourceBundle *pUVar8;
  size_t sVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  CharString *pCVar13;
  long in_FS_OFFSET;
  byte bVar14;
  UErrorCode *local_418;
  int local_3cc;
  undefined8 local_3c8;
  uint local_3c0;
  undefined8 local_3b8;
  uint local_3b0;
  uint local_3a8;
  undefined4 uStack_3a4;
  uint local_3a0;
  undefined1 *local_398;
  undefined4 local_390;
  undefined2 local_38c;
  uint local_360;
  long local_358;
  undefined4 local_350;
  undefined2 local_34c;
  int local_320;
  char *local_318;
  undefined4 local_310;
  undefined2 local_30c;
  uint local_2e0;
  UErrorCode *local_2d8;
  undefined4 local_2d0;
  undefined2 local_2cc;
  uint local_2a0;
  undefined1 *local_298;
  undefined4 local_290;
  undefined2 local_28c;
  int local_260;
  undefined1 *local_258;
  undefined4 local_250;
  undefined2 local_24c;
  uint local_220;
  undefined8 local_218;
  char local_20c;
  void *local_1d8;
  char local_1cc;
  int local_1a0;
  void *local_198;
  char local_18c;
  int local_160;
  UResourceBundle local_158 [144];
  undefined8 local_c8;
  char local_bc;
  long local_40;
  
  bVar14 = 0;
  local_418 = (UErrorCode *)param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_398 = (undefined1 *)((long)&local_38c + 1);
  local_390 = 0x28;
  local_358 = (long)&local_34c + 1;
  local_318 = (char *)((long)&local_30c + 1);
  local_360 = 0;
  local_38c = 0;
  local_350 = 0x28;
  local_320 = 0;
  local_34c = 0;
  local_2d8 = (UErrorCode *)((long)&local_2cc + 1);
  local_298 = (undefined1 *)((long)&local_28c + 1);
  local_30c = 0;
  uVar5 = 0;
  local_310 = 0x28;
  local_2e0 = 0;
  local_2d0 = 0x28;
  local_2a0 = 0;
  local_2cc = 0;
  local_290 = 0x28;
  local_260 = 0;
  local_28c = 0;
  local_3cc = 0;
  if (0 < *param_9) goto LAB_0010608a;
  local_258 = (undefined1 *)((long)&local_24c + 1);
  local_250 = 0x28;
  local_220 = 0;
  local_24c = 0;
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    sVar9 = strlen(param_5);
    ulocimp_getKeywordValue_76_godot((CharString *)&local_c8,param_6,sVar9,param_5,&local_3cc);
    icu_76_godot::CharString::operator=((CharString *)&local_258,(CharString *)&local_c8);
    if (local_bc != '\0') {
      uprv_free_76_godot(local_c8);
    }
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3a8,"default");
    puVar2 = local_258;
    if ((local_3a0 == local_220) &&
       ((local_220 == 0 ||
        (iVar4 = memcmp(local_258,(void *)CONCAT44(uStack_3a4,local_3a8),(long)(int)local_220),
        iVar4 == 0)))) {
      local_220 = 0;
      *puVar2 = 0;
    }
  }
  ulocimp_getBaseName_76_godot((char *)&local_218,param_6);
  pUVar8 = local_158;
  for (lVar11 = 0x11; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined8 *)pUVar8 = 0;
    pUVar8 = pUVar8 + (ulong)bVar14 * -0x10 + 8;
  }
  pCVar13 = (CharString *)&local_c8;
  for (lVar11 = 0x11; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined8 *)pCVar13 = 0;
    pCVar13 = pCVar13 + (ulong)bVar14 * -0x10 + 8;
  }
  icu_76_godot::CharString::copyFrom((CharString *)&local_2d8,(UErrorCode *)&local_218);
  icu_76_godot::CharString::copyFrom((CharString *)&local_318,(UErrorCode *)&local_218);
  if (param_7 != (undefined1 *)0x0) {
    uVar7 = ures_openAvailableLocales_76_godot(param_3,&local_3cc);
    pUVar1 = local_2d8;
    *param_7 = 1;
    if (local_3cc < 1) {
      do {
        pcVar10 = (char *)uenum_next_76_godot(uVar7,0,&local_3cc);
        if (pcVar10 == (char *)0x0) {
          uVar3 = 0;
          goto LAB_00106627;
        }
        iVar4 = strcmp(pcVar10,(char *)pUVar1);
      } while (iVar4 != 0);
      uVar3 = 1;
LAB_00106627:
      *param_7 = uVar3;
    }
    uenum_close_76_godot(uVar7);
  }
  if (local_3cc < 1) {
    while( true ) {
      local_3cc = 0;
      pUVar8 = (UResourceBundle *)ures_openWithType(0,param_3,local_2d8,0,&local_3cc);
      if (local_3cc + 0x80U < 2) {
        if (local_418 != (UErrorCode *)0x0) {
          *local_418 = (UErrorCode)0x0;
        }
      }
      else if (local_3cc < 1) {
        if ((((local_3cc == 0) && (ures_getByKey_76_godot(pUVar8,param_4,local_158), local_3cc == 0)
             ) && (iVar4 = ures_getStringByKey_76_godot(local_158,"default",&local_3a8),
                  local_3cc < 1)) && (local_3a8 != 0)) {
          local_360 = 0;
          *local_398 = 0;
          icu_76_godot::CharString::appendInvariantChars
                    ((wchar16 *)&local_398,iVar4,(UErrorCode *)(ulong)local_3a8);
          icu_76_godot::CharString::copyFrom((CharString *)&local_358,(UErrorCode *)&local_2d8);
          if (local_220 == 0) {
            icu_76_godot::CharString::append
                      ((char *)&local_258,(int)local_398,(UErrorCode *)(ulong)local_360);
          }
        }
      }
      else {
        *param_9 = local_3cc;
      }
      local_3cc = 0;
      if (pUVar8 != (UResourceBundle *)0x0) {
        local_2e0 = 0;
        *local_318 = '\0';
        icu_76_godot::StringPiece::StringPiece
                  ((StringPiece *)&local_3a8,(char *)**(undefined8 **)(pUVar8 + 0x18));
        icu_76_godot::CharString::append
                  ((char *)&local_318,local_3a8,(UErrorCode *)(ulong)local_3a0);
      }
      pcVar10 = local_318;
      if ((local_2e0 == local_2a0) &&
         ((local_2e0 == 0 || (iVar4 = memcmp(local_318,local_2d8,(long)(int)local_2e0), iVar4 == 0))
         )) {
        getParentForFunctionalEquivalent(pcVar10,pUVar8,local_158,(CharString *)&local_2d8);
      }
      else {
        icu_76_godot::CharString::copyFrom((CharString *)&local_2d8,(UErrorCode *)&local_318);
      }
      ures_closeBundle(pUVar8,1);
      if ((local_360 != 0) || (local_2e0 == 0)) break;
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3a8,"root");
      if (local_2e0 == local_3a0) {
        if ((local_2e0 == 0) ||
           (iVar4 = memcmp(local_318,(void *)CONCAT44(uStack_3a4,local_3a8),(long)(int)local_2e0),
           iVar4 == 0)) break;
        iVar4 = *param_9;
      }
      else {
        iVar4 = *param_9;
      }
      if (0 < iVar4) break;
      local_418 = (UErrorCode *)0x0;
    }
    icu_76_godot::CharString::copyFrom((CharString *)&local_2d8,(UErrorCode *)&local_218);
    icu_76_godot::CharString::copyFrom((CharString *)&local_318,(UErrorCode *)&local_218);
    do {
      pUVar8 = (UResourceBundle *)ures_openWithType(0,param_3,local_2d8,0,&local_3cc);
      if (local_3cc < 1) {
        if (((local_3cc == 0) &&
            (ures_getByKey_76_godot(pUVar8,param_4,local_158,&local_3cc), local_3cc == 0)) &&
           (ures_getByKey_76_godot(local_158,local_258,(CharString *)&local_c8,&local_3cc),
           local_3cc == 0)) {
          if (local_2a0 == 0) {
            local_260 = 0;
            *local_298 = 0;
            icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3a8,"root");
            icu_76_godot::CharString::append
                      ((char *)&local_298,local_3a8,(UErrorCode *)(ulong)local_3a0);
          }
          else {
            icu_76_godot::CharString::copyFrom((CharString *)&local_298,(UErrorCode *)&local_2d8);
          }
          local_418 = (UErrorCode *)&local_298;
          if (((local_260 < local_320) &&
              (iVar4 = ures_getStringByKey_76_godot(local_158,"default",&local_3a8,&local_3cc),
              local_3cc < 1)) && (local_3a8 != 0)) {
            local_360 = 0;
            *local_398 = 0;
            icu_76_godot::CharString::appendInvariantChars
                      ((wchar16 *)&local_398,iVar4,(UErrorCode *)(ulong)local_3a8);
            icu_76_godot::CharString::copyFrom((CharString *)&local_358,local_418);
          }
        }
      }
      else {
        *param_9 = local_3cc;
      }
      local_3cc = 0;
      if (((pUVar8 == (UResourceBundle *)0x0) || (iVar4 = strcmp(param_4,"collations"), iVar4 != 0))
         || ((pUVar1 = (UErrorCode *)**(undefined8 **)(pUVar8 + 0x18), pUVar1 == (UErrorCode *)0x0
             || ((*pUVar1 == (UErrorCode)0x0 || (iVar4 = strcmp((char *)pUVar1,"root"), iVar4 == 0))
                )))) {
LAB_00105c48:
        icu_76_godot::CharString::copyFrom((CharString *)&local_318,(UErrorCode *)&local_2d8);
      }
      else {
        ulocimp_getLanguage_76_godot((char *)&local_1d8,pUVar1);
        ulocimp_getLanguage_76_godot((char *)&local_198,local_2d8);
        if ((0 < local_3cc) ||
           ((local_1a0 == local_160 &&
            ((local_1a0 == 0 || (iVar4 = memcmp(local_1d8,local_198,(long)local_1a0), iVar4 == 0))))
           )) {
          if (local_18c != '\0') {
            uprv_free_76_godot(local_198);
          }
          if (local_1cc != '\0') {
            uprv_free_76_godot(local_1d8);
          }
          local_3cc = 0;
          goto LAB_00105c48;
        }
        local_2e0 = 0;
        *local_318 = '\0';
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3a8,(char *)pUVar1);
        icu_76_godot::CharString::append
                  ((char *)&local_318,local_3a8,(UErrorCode *)(ulong)local_3a0);
        if (local_18c != '\0') {
          uprv_free_76_godot(local_198);
        }
        if (local_1cc != '\0') {
          uprv_free_76_godot(local_1d8);
        }
        local_3cc = 0;
      }
      getParentForFunctionalEquivalent(local_318,pUVar8,local_158,(CharString *)&local_2d8);
      ures_closeBundle(pUVar8,1);
      puVar2 = local_258;
      local_3cc = 0;
      if (local_260 != 0) goto LAB_00105e40;
    } while ((local_2e0 != 0) && (*param_9 < 1));
    if (local_220 == local_360) {
      if (local_220 != 0) {
        iVar4 = memcmp(local_258,local_398,(long)(int)local_220);
        if (iVar4 != 0) goto LAB_00105cbc;
      }
LAB_00105e40:
      if (*param_9 < 1) {
        if (local_260 == 0) {
LAB_001064c0:
          *param_9 = 2;
          icu_76_godot::CharString::copyFrom((CharString *)&local_318,(UErrorCode *)&local_298);
          if (local_220 == 0) {
            if (param_8 == '\0') {
LAB_001064f5:
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3c8,"@");
              pcVar10 = (char *)icu_76_godot::CharString::append
                                          ((char *)&local_318,(int)local_3c8,
                                           (UErrorCode *)(ulong)local_3c0);
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3b8,param_5);
              pcVar10 = (char *)icu_76_godot::CharString::append
                                          (pcVar10,(int)local_3b8,(UErrorCode *)(ulong)local_3b0);
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3a8,"=");
              pcVar10 = (char *)icu_76_godot::CharString::append
                                          (pcVar10,local_3a8,(UErrorCode *)(ulong)local_3a0);
              icu_76_godot::CharString::append
                        (pcVar10,(int)local_398,(UErrorCode *)(ulong)local_360);
            }
            goto LAB_00105da0;
          }
        }
        else {
LAB_00105e60:
          puVar2 = local_258;
          if (param_8 == '\0') {
            icu_76_godot::CharString::copyFrom((CharString *)&local_318,(UErrorCode *)&local_298);
            if (local_220 == 0) goto LAB_001064f5;
          }
          else {
            if (((local_320 <= local_260) && (local_220 == local_360)) &&
               ((local_220 == 0 ||
                (iVar4 = memcmp(local_258,local_398,(long)(int)local_220), iVar4 == 0)))) {
              local_220 = 0;
              *puVar2 = 0;
            }
            icu_76_godot::CharString::copyFrom((CharString *)&local_318,(UErrorCode *)&local_298);
            if (local_220 == 0) goto LAB_00105da0;
          }
        }
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3c8,"@");
        pcVar10 = (char *)icu_76_godot::CharString::append
                                    ((char *)&local_318,(int)local_3c8,
                                     (UErrorCode *)(ulong)local_3c0);
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3b8,param_5);
        pcVar10 = (char *)icu_76_godot::CharString::append
                                    (pcVar10,(int)local_3b8,(UErrorCode *)(ulong)local_3b0);
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3a8,"=");
        pcVar10 = (char *)icu_76_godot::CharString::append
                                    (pcVar10,local_3a8,(UErrorCode *)(ulong)local_3a0);
        icu_76_godot::CharString::append(pcVar10,(int)local_258,(UErrorCode *)(ulong)local_220);
      }
    }
    else {
LAB_00105cbc:
      local_220 = 0;
      *puVar2 = 0;
      icu_76_godot::CharString::append
                ((char *)&local_258,(int)local_398,(UErrorCode *)(ulong)local_360);
      icu_76_godot::CharString::copyFrom((CharString *)&local_2d8,(UErrorCode *)&local_218);
      icu_76_godot::CharString::copyFrom((CharString *)&local_318,(UErrorCode *)&local_218);
      do {
        pUVar8 = (UResourceBundle *)ures_openWithType(0,param_3,local_2d8,0,&local_3cc);
        if (local_3cc < 1) {
          if (((local_3cc == 0) &&
              (ures_getByKey_76_godot(pUVar8,param_4,local_158,&local_3cc), local_3cc == 0)) &&
             (ures_getByKey_76_godot(local_158,local_258,(CharString *)&local_c8,&local_3cc),
             local_3cc == 0)) {
            if (local_2a0 == 0) {
              local_260 = 0;
              *local_298 = 0;
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3a8,"root");
              icu_76_godot::CharString::append
                        ((char *)&local_298,local_3a8,(UErrorCode *)(ulong)local_3a0);
            }
            else {
              icu_76_godot::CharString::copyFrom((CharString *)&local_298,(UErrorCode *)&local_2d8);
            }
            local_418 = (UErrorCode *)&local_298;
            if (((local_260 < local_320) &&
                (iVar4 = ures_getStringByKey_76_godot(local_158,"default",&local_3a8,&local_3cc),
                local_3cc < 1)) && (local_3a8 != 0)) {
              local_360 = 0;
              *local_398 = 0;
              icu_76_godot::CharString::appendInvariantChars
                        ((wchar16 *)&local_398,iVar4,(UErrorCode *)(ulong)local_3a8);
              icu_76_godot::CharString::copyFrom((CharString *)&local_358,local_418);
            }
          }
        }
        else {
          *param_9 = local_3cc;
        }
        local_3cc = 0;
        icu_76_godot::CharString::copyFrom((CharString *)&local_318,(UErrorCode *)&local_2d8);
        getParentForFunctionalEquivalent(local_318,pUVar8,local_158,(CharString *)&local_2d8);
        ures_closeBundle(pUVar8,1);
        local_3cc = 0;
        if (local_260 != 0) {
          if (*param_9 < 1) goto LAB_00105e60;
          break;
        }
        if (local_2e0 == 0) {
          if (*param_9 < 1) goto LAB_001064c0;
          break;
        }
      } while (*param_9 < 1);
    }
LAB_00105da0:
    ures_closeBundle(local_158,1);
    ures_closeBundle((CharString *)&local_c8,1);
    uVar12 = local_2e0;
    if (*param_9 < 1) {
      uVar6 = uprv_min_76_godot(local_2e0,param_2);
      if (0 < (int)uVar6) {
        icu_76_godot::CharString::extract
                  ((char *)&local_318,(int)param_1,(UErrorCode *)(ulong)uVar6);
      }
      if (uVar12 == 0) {
        *param_9 = 2;
      }
    }
    else {
      uVar12 = 0;
      *param_1 = 0;
    }
    uVar5 = u_terminateChars_76_godot(param_1,param_2,uVar12,param_9);
  }
  else {
    uVar5 = 0;
    *param_9 = local_3cc;
  }
  if (local_20c == '\0') {
  }
  else {
    uprv_free_76_godot(local_218);
  }
  if ((char)local_24c != '\0') {
    uprv_free_76_godot(local_258);
  }
  if ((char)local_28c != '\0') {
    uprv_free_76_godot(local_298);
  }
  if ((char)local_2cc != '\0') {
    uprv_free_76_godot(local_2d8);
  }
LAB_0010608a:
  if ((char)local_30c != '\0') {
    uprv_free_76_godot(local_318);
  }
  if ((char)local_34c == '\0') {
  }
  else {
    uprv_free_76_godot(local_358);
  }
  if ((char)local_38c != '\0') {
    uprv_free_76_godot(local_398);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ures_getKeywordValues_76_godot(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  int local_1988;
  int local_1984;
  undefined1 local_1970 [4];
  int local_196c;
  undefined8 local_1968 [18];
  undefined8 local_18d8 [18];
  undefined8 local_1848 [512];
  undefined2 local_848 [1028];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_1968;
  for (lVar7 = 0x11; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_18d8;
  for (lVar7 = 0x11; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar2 = ures_openAvailableLocales_76_godot(param_1,param_3);
  if (*param_3 < 1) {
    local_1988 = 0;
    local_848[0] = 0;
    local_1984 = 0;
    while (lVar7 = uenum_next_76_godot(uVar2,local_1970,param_3), lVar7 != 0) {
      local_196c = 0;
      lVar7 = ures_openWithType(0,param_1,lVar7,0,&local_196c);
      ures_getByKey_76_godot(lVar7,param_2,local_1968);
      if ((lVar7 != 0) && (local_196c < 1)) {
LAB_00106a68:
        do {
          puVar3 = (undefined8 *)ures_getNextResource_76_godot(local_1968,local_18d8,&local_196c);
          if ((puVar3 == (undefined8 *)0x0) || (0 < local_196c)) goto LAB_001069f8;
          __s1 = (char *)*puVar3;
        } while ((((__s1 == (char *)0x0) || (*__s1 == '\0')) ||
                 (iVar1 = strcmp(__s1,"default"), iVar1 == 0)) ||
                (iVar1 = strncmp(__s1,"private-",8), iVar1 == 0));
        if (local_1988 < 1) {
LAB_00106b28:
          sVar4 = strlen(__s1);
          iVar1 = local_1984 + (int)sVar4;
          if (iVar1 < 0x7fe) {
            uVar8 = (ulong)local_1984;
            uVar5 = 0x800;
            if (0x7ff < uVar8) {
              uVar5 = uVar8;
            }
            uVar6 = __strcpy_chk((long)local_848 + uVar8,__s1,uVar5 - uVar8);
            local_1848[local_1988] = uVar6;
            local_1984 = iVar1 + 1;
            local_1988 = local_1988 + 1;
            *(undefined1 *)((long)local_848 + (long)iVar1) = 0;
            goto LAB_00106a68;
          }
        }
        else {
          puVar9 = local_1848;
          puVar3 = puVar9 + local_1988;
          do {
            iVar1 = strcmp((char *)*puVar9,__s1);
            if (iVar1 == 0) goto LAB_00106a68;
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar3);
          if (local_1988 < 0x1ff) goto LAB_00106b28;
        }
        *param_3 = 1;
        goto LAB_00106a68;
      }
LAB_001069f8:
      ures_closeBundle(lVar7,1);
    }
    *(undefined1 *)((long)local_848 + (long)local_1984) = 0;
    ures_closeBundle(local_1968,1,0);
    ures_closeBundle(local_18d8,1);
    uenum_close_76_godot(uVar2);
    uVar2 = uloc_openKeywordList_76_godot(local_848,local_1984 + 1,param_3);
  }
  else {
    ures_closeBundle(local_1968,1);
    ures_closeBundle(local_18d8,1);
    uVar2 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void ures_openFillIn_76_godot(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  if ((*param_4 < 1) && (param_1 == 0)) {
    *param_4 = 1;
    return;
  }
  ures_openWithType();
  return;
}



void ures_openDirectFillIn_76_godot(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  if ((*param_4 < 1) && (param_1 == 0)) {
    *param_4 = 1;
    return;
  }
  ures_openWithType();
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,int param_1,int param_3)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  if ((0x28 < param_1) && (param_3 < 1)) {
    lVar1 = uprv_malloc_76_godot((long)param_1);
    if (lVar1 != 0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar1;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
    }
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  __src = *(MaybeStackArray **)param_1;
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  *(MaybeStackArray **)this = __src;
  *(int *)(this + 8) = iVar1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return;
  }
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return;
}



/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */

MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  __src = *(MaybeStackArray **)param_1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)this = __src;
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return this;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */

undefined4 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this)

{
  return *(undefined4 *)(this + 8);
}



/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this)

{
  return *(undefined8 *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this)

{
  return (long)*(int *)(this + 8) + *(long *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::aliasInstead
          (MaybeStackArray<char,40> *this,char *param_1,int param_2)

{
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      *(char **)this = param_1;
      *(int *)(this + 8) = param_2;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return;
    }
    uprv_free_76_godot(*(undefined8 *)this);
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    *(char **)this = param_1;
    *(int *)(this + 8) = param_2;
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::resize
          (MaybeStackArray<char,40> *this,int param_1,int param_2)

{
  MaybeStackArray<char,40> MVar1;
  long lVar2;
  
  if (0 < param_1) {
    lVar2 = uprv_malloc_76_godot((long)param_1);
    if (lVar2 != 0) {
      if (param_2 < 1) {
        MVar1 = this[0xc];
      }
      else {
        if (*(int *)(this + 8) < param_2) {
          param_2 = *(int *)(this + 8);
        }
        if (param_1 < param_2) {
          param_2 = param_1;
        }
        __memcpy_chk(lVar2,*(undefined8 *)this,(long)param_2,(long)param_1);
        MVar1 = this[0xc];
      }
      if (MVar1 != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar2;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      return lVar2;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::orphanOrClone
          (MaybeStackArray<char,40> *this,int param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uVar2 = *(undefined8 *)this;
LAB_0010705f:
    *param_2 = param_1;
    *(MaybeStackArray<char,40> **)this = this + 0xd;
    *(undefined4 *)(this + 8) = 0x28;
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    return uVar2;
  }
  if (0 < param_1) {
    if (*(int *)(this + 8) < param_1) {
      param_1 = *(int *)(this + 8);
    }
    lVar3 = (long)param_1;
    lVar1 = uprv_malloc_76_godot(lVar3);
    if (lVar1 != 0) {
      uVar2 = __memcpy_chk(lVar1,*(undefined8 *)this,lVar3,lVar3);
      goto LAB_0010705f;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::copyFrom
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1,UErrorCode *param_2)

{
  int iVar1;
  void *__src;
  void *__dest;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    __dest = (void *)uprv_malloc_76_godot((long)iVar1);
    if (__dest != (void *)0x0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(void **)this = __dest;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      __src = *(void **)param_1;
      *(int *)(this + 8) = iVar1;
      memcpy(__dest,__src,(long)iVar1);
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */

void __thiscall icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


