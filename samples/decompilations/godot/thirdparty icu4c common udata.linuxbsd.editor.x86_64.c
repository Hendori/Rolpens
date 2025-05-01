
/* checkDataItem(DataHeader const*, signed char (*)(void*, char const*, char const*, UDataInfo
   const*), void*, char const*, char const*, UErrorCode*, UErrorCode*) */

long checkDataItem(DataHeader *param_1,
                  _func_signed_void_ptr_char_ptr_char_ptr_UDataInfo_ptr *param_2,void *param_3,
                  char *param_4,char *param_5,UErrorCode *param_6,UErrorCode *param_7)

{
  char cVar1;
  long lVar2;
  
  if (0 < *(int *)param_7) {
    return 0;
  }
  if ((*(short *)(param_1 + 2) == 0x27da) &&
     ((param_2 == (_func_signed_void_ptr_char_ptr_char_ptr_UDataInfo_ptr *)0x0 ||
      (cVar1 = (*param_2)(param_3,param_4,param_5,(UDataInfo *)(param_1 + 4)), cVar1 != '\0')))) {
    lVar2 = UDataMemory_createNewInstance_76_godot(param_7);
    if (*(int *)param_7 < 1) {
      *(DataHeader **)(lVar2 + 8) = param_1;
      return lVar2;
    }
  }
  else {
    *(undefined4 *)param_6 = 3;
  }
  return 0;
}



/* DataCacheElement_deleter(void*) */

void DataCacheElement_deleter(void *param_1)

{
  udata_close_76_godot(*(undefined8 *)((long)param_1 + 8));
                    /* WARNING: Load size is inaccurate */
  uprv_free_76_godot(*param_1);
  uprv_free_76_godot(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* udata_cleanup() */

undefined8 udata_cleanup(void)

{
  code *pcVar1;
  code *pcVar2;
  
  if (gCommonDataCache != 0) {
    uhash_close_76_godot();
    gCommonDataCache = 0;
  }
  LOCK();
  gCommonDataCacheInitOnce = 0;
  UNLOCK();
  pcVar1 = (code *)&gCommonICUDataArray;
  do {
    if (*(long *)pcVar1 == 0) break;
    udata_close_76_godot();
    pcVar2 = pcVar1 + 8;
    *(long *)pcVar1 = 0;
    pcVar1 = pcVar2;
  } while (pcVar2 != icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray);
  LOCK();
  gHaveTriedToLoadCommonData = 0;
  UNLOCK();
  return 1;
}



/* setCommonICUData(UDataMemory*, signed char, UErrorCode*) [clone .isra.0] */

void setCommonICUData(long param_1,char param_2,int *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = UDataMemory_createNewInstance_76_godot(param_3);
  if (0 < *param_3) {
    return;
  }
  UDatamemory_assign_76_godot(uVar1,param_1);
  umtx_lock_76_godot(0);
  lVar2 = 0;
  while( true ) {
    if ((&gCommonICUDataArray)[lVar2] == 0) {
      (&gCommonICUDataArray)[(int)lVar2] = uVar1;
      umtx_unlock_76_godot(0);
      ucln_common_registerCleanup_76_godot(0x17,udata_cleanup);
      return;
    }
    if (*(long *)((&gCommonICUDataArray)[lVar2] + 8) == *(long *)(param_1 + 8)) break;
    lVar2 = lVar2 + 1;
    if (lVar2 == 10) {
      umtx_unlock_76_godot(0);
      if (param_2 != '\0') {
        *param_3 = -0x7f;
      }
LAB_001001a0:
      uprv_free_76_godot(uVar1);
      return;
    }
  }
  umtx_unlock_76_godot(0);
  goto LAB_001001a0;
}



/* udata_findCachedData(char const*, UErrorCode&) */

undefined8 udata_findCachedData(char *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  
  if (0 < *(int *)param_2) {
    return 0;
  }
  if ((gCommonDataCacheInitOnce == 2) ||
     (cVar2 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gCommonDataCacheInitOnce),
     cVar2 == '\0')) {
    if (0 < DAT_00101c2c) {
      *(int *)param_2 = DAT_00101c2c;
      return 0;
    }
  }
  else {
    gCommonDataCache =
         uhash_open_76_godot(&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,0,param_2);
    iVar3 = *(int *)param_2;
    if (iVar3 < 1) {
      uhash_setValueDeleter_76_godot(gCommonDataCache,DataCacheElement_deleter);
      ucln_common_registerCleanup_76_godot(0x17,udata_cleanup);
      iVar3 = *(int *)param_2;
    }
    DAT_00101c2c = iVar3;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gCommonDataCacheInitOnce);
  }
  uVar1 = gCommonDataCache;
  if (*(int *)param_2 < 1) {
    pcVar4 = strrchr(param_1,0x2f);
    if (pcVar4 != (char *)0x0) {
      param_1 = pcVar4 + 1;
    }
    umtx_lock_76_godot(0);
    lVar5 = uhash_get_76_godot(uVar1,param_1);
    umtx_unlock_76_godot(0);
    if (lVar5 != 0) {
      return *(undefined8 *)(lVar5 + 8);
    }
  }
  return 0;
}



/* udata_cacheDataItem(char const*, UDataMemory*, UErrorCode*) */

long udata_cacheDataItem(char *param_1,UDataMemory *param_2,UErrorCode *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  char *__s;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if (*(int *)param_3 < 1) {
    if (gCommonDataCacheInitOnce == 2) {
LAB_0010035c:
      if (0 < DAT_00101c2c) {
        *(int *)param_3 = DAT_00101c2c;
        lVar5 = 0;
        goto LAB_001004a8;
      }
    }
    else {
      cVar2 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gCommonDataCacheInitOnce);
      if (cVar2 == '\0') goto LAB_0010035c;
      gCommonDataCache =
           uhash_open_76_godot(&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,0,param_3);
      iVar3 = *(int *)param_3;
      if (iVar3 < 1) {
        uhash_setValueDeleter_76_godot(gCommonDataCache,DataCacheElement_deleter);
        ucln_common_registerCleanup_76_godot(0x17,udata_cleanup);
        iVar3 = *(int *)param_3;
      }
      DAT_00101c2c = iVar3;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gCommonDataCacheInitOnce);
    }
    uVar1 = gCommonDataCache;
    if (*(int *)param_3 < 1) {
      plVar4 = (long *)uprv_malloc_76_godot(0x10);
      if (plVar4 == (long *)0x0) {
        *(undefined4 *)param_3 = 7;
        lVar5 = 0;
        goto LAB_001004a8;
      }
      lVar5 = UDataMemory_createNewInstance_76_godot(param_3);
      plVar4[1] = lVar5;
      if (*(int *)param_3 < 1) {
        UDatamemory_assign_76_godot(lVar5,param_2);
        pcVar6 = strrchr(param_1,0x2f);
        __s = pcVar6 + 1;
        if (pcVar6 == (char *)0x0) {
          __s = param_1;
        }
        sVar7 = strlen(__s);
        lVar8 = (long)((int)sVar7 + 1);
        lVar5 = uprv_malloc_76_godot(lVar8);
        *plVar4 = lVar5;
        if (lVar5 != 0) {
          __strcpy_chk(lVar5,__s,lVar8);
          umtx_lock_76_godot(0);
          lVar5 = uhash_get_76_godot(uVar1,param_1);
          if (lVar5 == 0) {
            uhash_put_76_godot(uVar1,*plVar4,plVar4,&local_44);
            umtx_unlock_76_godot(0);
            if ((0 < local_44) || (local_44 == -0x7f)) {
              *(int *)param_3 = local_44;
              uprv_free_76_godot(*plVar4);
              uprv_free_76_godot(plVar4[1]);
              uprv_free_76_godot(plVar4);
              lVar5 = 0;
              goto LAB_001004a8;
            }
          }
          else {
            local_44 = -0x7f;
            umtx_unlock_76_godot(0);
            if ((0 < local_44) || (local_44 == -0x7f)) {
              *(int *)param_3 = local_44;
              uprv_free_76_godot(*plVar4);
              uprv_free_76_godot(plVar4[1]);
              uprv_free_76_godot(plVar4);
              lVar5 = *(long *)(lVar5 + 8);
              goto LAB_001004a8;
            }
          }
          lVar5 = plVar4[1];
          goto LAB_001004a8;
        }
        *(undefined4 *)param_3 = 7;
        uprv_free_76_godot(plVar4[1]);
      }
      uprv_free_76_godot(plVar4);
      lVar5 = 0;
      goto LAB_001004a8;
    }
  }
  lVar5 = 0;
LAB_001004a8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UDataPathIterator::UDataPathIterator(char const*, char const*, char const*, char
   const*, signed char, UErrorCode*) */

void __thiscall
icu_76_godot::UDataPathIterator::UDataPathIterator
          (UDataPathIterator *this,long param_1,char *param_2,char *param_3,char *param_4,
          UDataPathIterator param_6)

{
  char *pcVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined2 *)(this + 0x3c) = 0;
  *(UDataPathIterator **)(this + 0x30) = this + 0x3d;
  *(UDataPathIterator **)(this + 0x70) = this + 0x7d;
  *(undefined2 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x38) = 0x28;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x78) = 0x28;
  *(undefined4 *)(this + 0xa8) = 0;
  *(UDataPathIterator **)(this + 0xb0) = this + 0xbd;
  *(undefined4 *)(this + 0xb8) = 0x28;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined2 *)(this + 0xbc) = 0;
  if (param_1 == 0) {
    param_1 = u_getDataDirectory_76_godot();
  }
  *(long *)this = param_1;
  if (param_2 != (char *)0x0) {
    pcVar1 = (char *)icu_76_godot::CharString::append((char)this + -0x50,(UErrorCode *)0x2f);
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_58,param_2);
    icu_76_godot::CharString::append(pcVar1,(int)local_58,(UErrorCode *)(ulong)local_50);
  }
  pcVar1 = strrchr(param_3,0x2f);
  if (pcVar1 == (char *)0x0) {
    *(char **)(this + 0x10) = param_3;
    sVar2 = strlen(param_3);
    *(int *)(this + 0x28) = (int)sVar2;
  }
  else {
    pcVar1 = pcVar1 + 1;
    *(char **)(this + 0x10) = pcVar1;
    sVar2 = strlen(pcVar1);
    *(int *)(this + 0x28) = (int)sVar2;
    if (param_3 != pcVar1) {
      icu_76_godot::CharString::append
                ((char *)(this + 0x30),(int)param_3,
                 (UErrorCode *)(ulong)(uint)((int)pcVar1 - (int)param_3));
      *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x30);
      goto joined_r0x00100749;
    }
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
joined_r0x00100749:
  if (param_4 == (char *)0x0) {
    param_4 = "";
  }
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_58,param_4);
  *(undefined8 *)(this + 0x18) = local_58;
  *(uint *)(this + 0x20) = local_50;
  this[0xf0] = param_6;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::UDataPathIterator::next(UErrorCode*) */

char * __thiscall icu_76_godot::UDataPathIterator::next(UDataPathIterator *this,UErrorCode *param_1)

{
  UErrorCode *pUVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  uint uVar9;
  
  if (*(int *)param_1 < 1) {
    do {
      pcVar4 = *(char **)(this + 8);
      if (pcVar4 == (char *)0x0) {
        return (char *)0x0;
      }
      if (pcVar4 == *(char **)(this + 0x30)) {
        *(undefined8 *)(this + 8) = *(undefined8 *)this;
        sVar8 = strlen(pcVar4);
        uVar9 = (uint)sVar8;
      }
      else {
        pcVar6 = strchr(pcVar4,0x3a);
        *(char **)(this + 8) = pcVar6;
        if (pcVar6 == (char *)0x0) {
          sVar8 = strlen(pcVar4);
          uVar9 = (uint)sVar8;
        }
        else {
          *(char **)(this + 8) = pcVar6 + 1;
          uVar9 = (int)pcVar6 - (int)pcVar4;
        }
      }
      if (uVar9 != 0) {
        pUVar1 = (UErrorCode *)(this + 0x70);
        *(undefined4 *)(this + 0xa8) = 0;
        **(undefined1 **)(this + 0x70) = 0;
        icu_76_godot::CharString::append((char *)pUVar1,(int)pcVar4,(UErrorCode *)(ulong)uVar9);
        pcVar4 = *(char **)(this + 0x70);
        pcVar7 = strrchr(pcVar4,0x2f);
        pcVar6 = pcVar7 + 1;
        if (pcVar7 == (char *)0x0) {
          pcVar6 = pcVar4;
        }
        if (this[0xf0] == (UDataPathIterator)0x0) {
          if (pcVar4[(int)(uVar9 - 1)] == '/') goto LAB_00100962;
          if ((int)uVar9 < 4) goto LAB_0010093d;
          pcVar7 = pcVar4 + (long)(int)uVar9 + -4;
LAB_001008df:
          iVar5 = strncmp(pcVar7,".dat",4);
          if (iVar5 == 0) goto LAB_001008f3;
        }
        else {
          if (3 < (int)uVar9) {
            pcVar7 = pcVar4 + (long)(int)uVar9 + -4;
            iVar5 = strncmp(pcVar7,*(char **)(this + 0x18),4);
            if (iVar5 == 0) {
              uVar3 = *(uint *)(this + 0x28);
              iVar5 = strncmp(pcVar6,*(char **)(this + 0x10),(ulong)uVar3);
              if (iVar5 != 0) goto LAB_00100a08;
              sVar8 = strlen(pcVar6);
              if (sVar8 == uVar3 + 4) {
                return pcVar4;
              }
              cVar2 = pcVar4[(int)(uVar9 - 1)];
            }
            else {
LAB_00100a08:
              cVar2 = pcVar4[(int)(uVar9 - 1)];
            }
            if (cVar2 == '/') goto LAB_00100962;
            goto LAB_001008df;
          }
          if (pcVar4[(int)(uVar9 - 1)] == '/') goto LAB_00100962;
        }
LAB_0010093d:
        iVar5 = *(int *)(this + 0xe8);
        if (((iVar5 < (int)uVar9) && (iVar5 != 0)) &&
           (iVar5 = strcmp(pcVar4 + ((long)(int)uVar9 - (long)iVar5),*(char **)(this + 0xb0)),
           iVar5 == 0)) {
          icu_76_godot::CharString::truncate((int)pUVar1);
        }
        icu_76_godot::CharString::append((char)pUVar1,(UErrorCode *)0x2f);
LAB_00100962:
        icu_76_godot::CharString::append
                  ((char *)pUVar1,(int)*(undefined8 *)(this + 0xb0) + 1,
                   (UErrorCode *)(ulong)(*(int *)(this + 0xe8) - 1));
        uVar9 = *(uint *)(this + 0x20);
        if (uVar9 != 0) {
          if (4 < (int)uVar9) {
            icu_76_godot::CharString::ensureEndsWithFileSeparator(pUVar1);
            uVar9 = *(uint *)(this + 0x20);
          }
          icu_76_godot::CharString::append
                    ((char *)pUVar1,(int)*(undefined8 *)(this + 0x18),(UErrorCode *)(ulong)uVar9);
        }
        return *(char **)(this + 0x70);
      }
LAB_001008f3:
    } while (*(long *)this != 0);
  }
  return (char *)0x0;
}



/* doLoadFromIndividualFiles(char const*, char const*, char const*, char const*, char const*, char
   const*, signed char (*)(void*, char const*, char const*, UDataInfo const*), void*, UErrorCode*,
   UErrorCode*) */

long doLoadFromIndividualFiles
               (char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6,
               _func_signed_void_ptr_char_ptr_char_ptr_UDataInfo_ptr *param_7,void *param_8,
               UErrorCode *param_9,UErrorCode *param_10)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 local_178 [8];
  DataHeader *local_170;
  undefined8 local_158;
  undefined8 uStack_150;
  UDataPathIterator local_138 [48];
  undefined8 local_108;
  char local_fc;
  undefined8 local_c8;
  char local_bc;
  undefined8 local_88;
  char local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UDataPathIterator::UDataPathIterator
            (local_138,param_2,param_1,param_4,param_3,0,param_10);
  while (lVar2 = icu_76_godot::UDataPathIterator::next(local_138,param_10), lVar2 != 0) {
    cVar1 = uprv_mapFile_76_godot(local_178,lVar2,param_10);
    if (cVar1 != '\0') {
      lVar2 = checkDataItem(local_170,param_7,param_8,param_5,param_6,param_9,param_10);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x20) = local_158;
        *(undefined8 *)(lVar2 + 0x28) = uStack_150;
        goto LAB_00100ae4;
      }
      udata_close_76_godot(local_178);
      if (0 < *(int *)param_10) break;
      *(undefined4 *)param_9 = 3;
    }
  }
  lVar2 = 0;
LAB_00100ae4:
  if (local_7c != '\0') {
    uprv_free_76_godot(local_88);
  }
  if (local_bc != '\0') {
    uprv_free_76_godot(local_c8);
  }
  if (local_fc != '\0') {
    uprv_free_76_godot(local_108);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



/* openCommonData(char const*, int, UErrorCode*) */

long openCommonData(char *param_1,int param_2,UErrorCode *param_3)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  UDataMemory aUStack_1b8 [64];
  undefined1 local_178 [64];
  UDataPathIterator local_138 [48];
  undefined8 local_108;
  char local_fc;
  undefined8 local_c8;
  char local_bc;
  undefined8 local_88;
  char local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    UDataMemory_init_76_godot(aUStack_1b8);
    if (param_2 < 0) {
      pcVar2 = strrchr(param_1,0x2f);
      pcVar7 = pcVar2 + 1;
      if (pcVar2 == (char *)0x0) {
        pcVar7 = param_1;
      }
      if (*pcVar7 == '\0') {
        if (*(int *)param_3 < 1) {
          *(undefined4 *)param_3 = 4;
        }
      }
      else {
        lVar3 = udata_findCachedData(pcVar7,param_3);
        if (lVar3 != 0) goto LAB_00100cc1;
        if (*(int *)param_3 < 1) {
          uVar5 = u_getDataDirectory_76_godot();
          icu_76_godot::UDataPathIterator::UDataPathIterator(local_138,uVar5,pcVar7,param_1,&_LC1,1)
          ;
          while ((cVar1 = UDataMemory_isLoaded_76_godot(aUStack_1b8), cVar1 == '\0' &&
                 (lVar6 = icu_76_godot::UDataPathIterator::next(local_138,param_3), lVar6 != 0))) {
            uprv_mapFile_76_godot(aUStack_1b8,lVar6,param_3);
          }
          if (*(int *)param_3 < 1) {
            cVar1 = UDataMemory_isLoaded_76_godot(aUStack_1b8);
            if (cVar1 == '\0') {
              *(undefined4 *)param_3 = 4;
            }
            else {
              udata_checkCommonData_76_godot(aUStack_1b8,param_3);
              lVar3 = udata_cacheDataItem(pcVar7,aUStack_1b8,param_3);
            }
          }
          if (local_7c != '\0') {
            uprv_free_76_godot(local_88);
          }
          if (local_bc != '\0') {
            uprv_free_76_godot(local_c8);
          }
          if (local_fc != '\0') {
            uprv_free_76_godot(local_108);
          }
          goto LAB_00100cc1;
        }
      }
    }
    else if (param_2 < 10) {
      umtx_lock_76_godot(0);
      lVar3 = (&gCommonICUDataArray)[param_2];
      if (lVar3 == 0) {
        if (param_2 != 0) {
          plVar4 = &gCommonICUDataArray;
          do {
            if (*(undefined **)(*plVar4 + 8) == &icudt_godot76_dat) goto LAB_00100c7b;
            plVar4 = plVar4 + 1;
          } while (plVar4 != &gCommonICUDataArray + param_2);
        }
        umtx_unlock_76_godot(0);
        UDataMemory_init_76_godot(local_178);
        UDataMemory_setData_76_godot(local_178,&icudt_godot76_dat);
        udata_checkCommonData_76_godot(local_178,param_3);
        setCommonICUData(local_178,0,param_3);
        umtx_lock_76_godot(0);
        lVar3 = (&gCommonICUDataArray)[param_2];
        umtx_unlock_76_godot(0);
      }
      else {
LAB_00100c7b:
        umtx_unlock_76_godot(0);
      }
      goto LAB_00100cc1;
    }
  }
  lVar3 = 0;
LAB_00100cc1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



/* doLoadFromCommonData(signed char, char const*, char const*, char const*, char const*, char
   const*, char const*, char const*, signed char (*)(void*, char const*, char const*, UDataInfo
   const*), void*, UErrorCode*, UErrorCode*) [clone .isra.0] */

long doLoadFromCommonData
               (char param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5,
               _func_signed_void_ptr_char_ptr_char_ptr_UDataInfo_ptr *param_6,void *param_7,
               UErrorCode *param_8,UErrorCode *param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  DataHeader *pDVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined4 local_78 [8];
  undefined1 local_58 [16];
  long local_40;
  
  bVar1 = false;
  iVar6 = (int)(char)(param_1 + -1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while( true ) {
      puVar2 = (undefined8 *)openCommonData(param_3,iVar6,param_8);
      if (*(int *)param_8 < 1) break;
      if (*(int *)param_8 == 7) goto LAB_00101128;
      if (param_1 == '\0') goto LAB_00101010;
      if (puVar2 == (undefined8 *)0x0) goto LAB_00101045;
LAB_00100f91:
      iVar6 = iVar6 + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      pDVar3 = (DataHeader *)(**(code **)*puVar2)(puVar2,param_2,local_78,param_8);
      if (pDVar3 != (DataHeader *)0x0) {
        lVar4 = checkDataItem(pDVar3,param_6,param_7,param_4,param_5,param_8,param_9);
        if (0 < *(int *)param_9) goto LAB_00101010;
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x30) = local_78[0];
          goto LAB_00101012;
        }
      }
      if (*(int *)param_8 == 7) {
LAB_00101128:
        *(undefined4 *)param_9 = 7;
      }
      else if (param_1 != '\0') goto LAB_00100f91;
      goto LAB_00101010;
    }
    if (param_1 == '\0') {
LAB_00101010:
      lVar4 = 0;
LAB_00101012:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return lVar4;
    }
LAB_00101045:
    if (bVar1) goto LAB_00101010;
    if (gHaveTriedToLoadCommonData == 0) {
      lVar4 = openCommonData("icudt76l",-1,param_8);
      UDataMemory_init_76_godot(local_78);
      if (lVar4 != 0) {
        UDatamemory_assign_76_godot(local_78,lVar4);
        local_58 = (undefined1  [16])0x0;
        setCommonICUData(local_78,0,param_8);
      }
      gHaveTriedToLoadCommonData = 1;
    }
    lVar4 = udata_findCachedData("icudt76l",param_8);
    if ((0 < *(int *)param_8) || (lVar4 == 0)) goto LAB_00101010;
    umtx_lock_76_godot(0);
    pcVar5 = (code *)&gCommonICUDataArray;
    while ((*(long *)pcVar5 == 0 || (*(long *)(*(long *)pcVar5 + 8) != *(long *)(lVar4 + 8)))) {
      pcVar5 = pcVar5 + 8;
      if (pcVar5 == icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray) {
        umtx_unlock_76_godot(0);
        goto LAB_00101010;
      }
    }
    bVar1 = true;
    umtx_unlock_76_godot(0);
  } while( true );
}



/* doOpenChoice(char const*, char const*, char const*, signed char (*)(void*, char const*, char
   const*, UDataInfo const*), void*, UErrorCode*) */

long doOpenChoice(char *param_1,char *param_2,char *param_3,
                 _func_signed_void_ptr_char_ptr_char_ptr_UDataInfo_ptr *param_4,void *param_5,
                 UErrorCode *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  char cVar7;
  long in_FS_OFFSET;
  bool local_191;
  int local_16c;
  int local_168 [2];
  uint local_160;
  int local_158 [2];
  uint local_150;
  long local_148;
  undefined4 local_140;
  undefined2 local_13c;
  int local_110;
  long local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  uint local_90;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_16c = 0;
  local_191 = true;
  if (((param_1 != (char *)0x0) && (iVar2 = strcmp(param_1,"ICUDATA"), iVar2 != 0)) &&
     (iVar2 = strncmp(param_1,"icudt76l-",9), iVar2 != 0)) {
    iVar2 = strncmp(param_1,"ICUDATA-",8);
    local_191 = iVar2 == 0;
  }
  local_148 = (long)&local_13c + 1;
  local_108 = (long)&local_fc + 1;
  local_c8 = (char *)((long)&local_bc + 1);
  local_88 = (long)&local_7c + 1;
  local_7c = 0;
  local_140 = 0x28;
  local_110 = 0;
  local_13c = 0;
  local_100 = 0x28;
  local_d0 = 0;
  local_fc = 0;
  local_c0 = 0x28;
  local_90 = 0;
  local_bc = 0;
  local_80 = 0x28;
  local_50 = 0;
  pcVar5 = "icudt76l";
  if (param_1 == (char *)0x0) {
LAB_001012d8:
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_158,pcVar5);
    icu_76_godot::CharString::append((char *)&local_c8,local_158[0],(UErrorCode *)(ulong)local_150);
LAB_001012f4:
    iVar2 = (int)local_c8;
  }
  else {
    pcVar3 = strrchr(param_1,0x2f);
    pcVar4 = strchr(param_1,0x2f);
    cVar1 = uprv_pathIsAbsolute_76_godot(param_1);
    pcVar5 = param_1;
    if ((pcVar3 != pcVar4) || (cVar1 != '\0')) {
      if (pcVar3 != (char *)0x0) {
        pcVar5 = pcVar3 + 1;
      }
      goto LAB_001012d8;
    }
    pcVar3 = strchr(param_1,0x2d);
    if (pcVar3 == (char *)0x0) {
      if (local_191 != false) goto LAB_001018c8;
      goto LAB_001012d8;
    }
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_158,pcVar3 + 1);
    icu_76_godot::CharString::append((char *)&local_88,local_158[0],(UErrorCode *)(ulong)local_150);
    if (local_191 != false) {
LAB_001018c8:
      pcVar5 = "icudt76l";
      goto LAB_001012d8;
    }
    icu_76_godot::CharString::append
              ((char *)&local_c8,(int)param_1,
               (UErrorCode *)(ulong)(uint)((int)pcVar3 - (int)param_1));
    if (pcVar4 != (char *)0x0) goto LAB_001012f4;
    iVar2 = (int)local_c8;
    param_1 = local_c8;
  }
  icu_76_godot::CharString::append((char *)&local_148,iVar2,(UErrorCode *)(ulong)local_90);
  icu_76_godot::CharString::append((char *)&local_108,(int)local_c8,(UErrorCode *)(ulong)local_90);
  iVar2 = local_110;
  cVar1 = (char)&local_148;
  cVar7 = (char)&local_108;
  if (local_50 != 0) {
    pcVar5 = (char *)icu_76_godot::CharString::append(cVar1,(UErrorCode *)0x2f);
    icu_76_godot::CharString::append(pcVar5,(int)local_88,(UErrorCode *)(ulong)local_50);
    pcVar5 = (char *)icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x2f);
    icu_76_godot::CharString::append(pcVar5,(int)local_88,(UErrorCode *)(ulong)local_50);
  }
  pcVar5 = (char *)icu_76_godot::CharString::append(cVar1,(UErrorCode *)0x2f);
  icu_76_godot::StringPiece::StringPiece((StringPiece *)local_158,param_3);
  icu_76_godot::CharString::append(pcVar5,local_158[0],(UErrorCode *)(ulong)local_150);
  pcVar5 = (char *)icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x2f);
  icu_76_godot::StringPiece::StringPiece((StringPiece *)local_158,param_3);
  icu_76_godot::CharString::append(pcVar5,local_158[0],(UErrorCode *)(ulong)local_150);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_168,".");
    pcVar5 = (char *)icu_76_godot::CharString::append
                               ((char *)&local_148,local_168[0],(UErrorCode *)(ulong)local_160);
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_158,param_2);
    icu_76_godot::CharString::append(pcVar5,local_158[0],(UErrorCode *)(ulong)local_150);
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_168,".");
    pcVar5 = (char *)icu_76_godot::CharString::append
                               ((char *)&local_108,local_168[0],(UErrorCode *)(ulong)local_160);
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_158,param_2);
    icu_76_godot::CharString::append(pcVar5,local_158[0],(UErrorCode *)(ulong)local_150);
  }
  pcVar5 = (char *)(local_108 + 1 + (long)iVar2);
  if (param_1 == (char *)0x0) {
    param_1 = "icudt76l";
  }
  pcVar3 = (char *)u_getDataDirectory_76_godot();
  if ((((local_191 == false) || (iVar2 = strcmp(param_2,"res"), iVar2 != 0)) ||
      ((iVar2 = strcmp(param_3,"zoneinfo64"), iVar2 != 0 &&
       (((iVar2 = strcmp(param_3,"timezoneTypes"), iVar2 != 0 &&
         (iVar2 = strcmp(param_3,"windowsZones"), iVar2 != 0)) &&
        (iVar2 = strcmp(param_3,"metaZones"), iVar2 != 0)))))) ||
     (pcVar4 = (char *)u_getTimeZoneFilesDirectory_76_godot(param_6), *pcVar4 == '\0')) {
LAB_00101412:
    if (gDataFileAccess == 2) {
      lVar6 = doLoadFromCommonData
                        (local_191,local_148,param_1,param_2,param_3,param_4,param_5,&local_16c,
                         param_6);
      if (lVar6 != 0) goto LAB_00101480;
      if (0 < *(int *)param_6) goto LAB_00101758;
      if ((gDataFileAccess & 0xfffffffd) != 0) goto LAB_001016fc;
      if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) || (local_191 == false)) goto LAB_00101445;
      if (gDataFileAccess != 2) goto LAB_00101685;
LAB_00101752:
      if (0 < *(int *)param_6) goto LAB_00101758;
    }
    else {
      if ((gDataFileAccess & 0xfffffffd) != 0) {
LAB_001016fc:
        if (gDataFileAccess < 2) goto LAB_00101685;
        if (gDataFileAccess != 3) goto LAB_00101752;
LAB_00101715:
        lVar6 = doLoadFromCommonData
                          (local_191,local_148,param_1,param_2,param_3,param_4,param_5,&local_16c,
                           param_6);
        if (lVar6 != 0) goto LAB_00101480;
        goto LAB_00101752;
      }
      if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) || (local_191 == false)) {
LAB_00101445:
        lVar6 = doLoadFromIndividualFiles
                          (local_c8,pcVar3,pcVar5,param_1,param_2,param_3,param_4,param_5,
                           (UErrorCode *)&local_16c,param_6);
        if (lVar6 != 0) goto LAB_00101480;
        if (0 < *(int *)param_6) goto LAB_00101758;
        goto LAB_001016fc;
      }
LAB_00101685:
      lVar6 = doLoadFromCommonData
                        (local_191,local_148,param_1,param_2,param_3,param_4,param_5,&local_16c,
                         param_6);
      if (lVar6 != 0) goto LAB_00101480;
      if (0 < *(int *)param_6) goto LAB_00101758;
      if (gDataFileAccess == 3) goto LAB_00101715;
    }
    iVar2 = local_16c;
    if (local_16c < 1) {
      iVar2 = 4;
    }
    *(int *)param_6 = iVar2;
  }
  else {
    lVar6 = doLoadFromIndividualFiles
                      ("",pcVar4,pcVar5,"",param_2,param_3,param_4,param_5,(UErrorCode *)&local_16c,
                       param_6);
    if (lVar6 != 0) {
LAB_00101480:
      goto joined_r0x00101488;
    }
    if (*(int *)param_6 < 1) goto LAB_00101412;
  }
LAB_00101758:
  lVar6 = 0;
joined_r0x00101488:
  if ((char)local_7c == '\0') {
  }
  else {
    uprv_free_76_godot(local_88);
  }
  if ((char)local_bc == '\0') {
  }
  else {
    uprv_free_76_godot(local_c8);
  }
  if ((char)local_fc == '\0') {
  }
  else {
    uprv_free_76_godot(local_108);
  }
  if ((char)local_13c != '\0') {
    uprv_free_76_godot(local_148);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}



void udata_setCommonData_76_godot(long param_1,int *param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (param_1 == 0) {
      *param_2 = 1;
    }
    else {
      UDataMemory_init_76_godot(auStack_58);
      UDataMemory_setData_76_godot(auStack_58,param_1);
      udata_checkCommonData_76_godot(auStack_58,param_2);
      if (*param_2 < 1) {
        setCommonICUData(auStack_58,1,param_2);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void udata_setAppData_76_godot(char *param_1,long param_2,UErrorCode *param_3)

{
  long in_FS_OFFSET;
  UDataMemory aUStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != (UErrorCode *)0x0) && (*(int *)param_3 < 1)) {
    if (param_2 == 0) {
      *(undefined4 *)param_3 = 1;
    }
    else {
      UDataMemory_init_76_godot(aUStack_68);
      UDataMemory_setData_76_godot(aUStack_68,param_2);
      udata_checkCommonData_76_godot(aUStack_68,param_3);
      udata_cacheDataItem(param_1,aUStack_68,param_3);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 udata_open_76_godot(char *param_1,char *param_2,char *param_3,UErrorCode *param_4)

{
  undefined8 uVar1;
  
  if ((param_4 != (UErrorCode *)0x0) && (*(int *)param_4 < 1)) {
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      uVar1 = doOpenChoice(param_1,param_2,param_3,
                           (_func_signed_void_ptr_char_ptr_char_ptr_UDataInfo_ptr *)0x0,(void *)0x0,
                           param_4);
      return uVar1;
    }
    *(undefined4 *)param_4 = 1;
  }
  return 0;
}



undefined8
udata_openChoice_76_godot
          (char *param_1,char *param_2,char *param_3,
          _func_signed_void_ptr_char_ptr_char_ptr_UDataInfo_ptr *param_4,void *param_5,
          UErrorCode *param_6)

{
  undefined8 uVar1;
  
  if ((param_6 != (UErrorCode *)0x0) && (*(int *)param_6 < 1)) {
    if ((param_3 != (char *)0x0) &&
       ((*param_3 != '\0' &&
        (param_4 != (_func_signed_void_ptr_char_ptr_char_ptr_UDataInfo_ptr *)0x0)))) {
      uVar1 = doOpenChoice(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar1;
    }
    *(undefined4 *)param_6 = 1;
  }
  return 0;
}



void udata_getInfo_76_godot(long param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_2 == (ushort *)0x0) {
    return;
  }
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) {
    *param_2 = 0;
  }
  else {
    uVar3 = udata_getInfoSize_76_godot(lVar1 + 4);
    uVar2 = *param_2;
    if (uVar3 < *param_2) {
      *param_2 = uVar3;
      uVar2 = uVar3;
    }
    memcpy(param_2 + 1,(void *)(lVar1 + 6),(long)(int)(uVar2 - 2));
    if (*(char *)(lVar1 + 8) != '\0') {
      param_2[1] = *(ushort *)(lVar1 + 6) << 8 | *(ushort *)(lVar1 + 6) >> 8;
      return;
    }
  }
  return;
}



void udata_setFileAccess_76_godot(undefined4 param_1)

{
  gDataFileAccess = param_1;
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
LAB_00101f6f:
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
      goto LAB_00101f6f;
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


