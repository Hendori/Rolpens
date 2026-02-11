
/* zipio_free(void*, void*) */

void zipio_free(void *param_1,void *param_2)

{
  Memory::free_static(param_2,false);
  return;
}



/* zipio_read(void*, void*, void*, unsigned long) */

undefined8 zipio_read(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_1 == (void *)0x0) {
    _err_print_error("zipio_read","core/io/zip_io.cpp",0x67,"Parameter \"fa\" is null.",0,0);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    plVar1 = *param_1;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_3,param_4);
      return uVar2;
    }
    _err_print_error("zipio_read","core/io/zip_io.cpp",0x68,
                     "Condition \"fa->is_null()\" is true. Returning: 0",0,0);
  }
  return 0;
}



/* zipio_write(void*, void*, void const*, unsigned long) */

ulong zipio_write(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  long *plVar1;
  
  if (param_1 == (void *)0x0) {
    _err_print_error("zipio_write","core/io/zip_io.cpp",0x6f,"Parameter \"fa\" is null.",0,0);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    plVar1 = *param_1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x2d0))(plVar1,param_3,param_4);
      return param_4;
    }
    _err_print_error("zipio_write","core/io/zip_io.cpp",0x70,
                     "Condition \"fa->is_null()\" is true. Returning: 0",0,0);
  }
  return 0;
}



/* zipio_tell(void*, void*) */

undefined8 zipio_tell(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (void *)0x0) {
    _err_print_error("zipio_tell","core/io/zip_io.cpp",0x78,"Parameter \"fa\" is null.",0,0);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if (*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(**param_1 + 0x1c8))();
      return uVar1;
    }
    _err_print_error("zipio_tell","core/io/zip_io.cpp",0x79,
                     "Condition \"fa->is_null()\" is true. Returning: 0",0,0);
  }
  return 0;
}



/* zipio_seek(void*, void*, unsigned long, int) */

undefined8 zipio_seek(void *param_1,void *param_2,ulong param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    plVar2 = *param_1;
    if (plVar2 == (long *)0x0) {
      _err_print_error("zipio_seek","core/io/zip_io.cpp",0x81,
                       "Condition \"fa->is_null()\" is true. Returning: 0",0,0);
    }
    else {
      if (param_4 == 1) {
        lVar1 = (**(code **)(*plVar2 + 0x1c8))();
                    /* WARNING: Load size is inaccurate */
        plVar2 = *param_1;
        param_3 = param_3 + lVar1;
      }
      else if (param_4 == 2) {
        lVar1 = (**(code **)(*plVar2 + 0x1d0))();
                    /* WARNING: Load size is inaccurate */
        plVar2 = *param_1;
        param_3 = param_3 + lVar1;
      }
      (**(code **)(*plVar2 + 0x1b8))(plVar2,param_3);
    }
    return 0;
  }
  _err_print_error("zipio_seek","core/io/zip_io.cpp",0x80,"Parameter \"fa\" is null.",0,0);
  return 0;
}



/* zipio_testerror(void*, void*) */

bool zipio_testerror(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    if (*param_1 == (long *)0x0) {
      _err_print_error("zipio_testerror","core/io/zip_io.cpp",0x9f,
                       "Condition \"fa->is_null()\" is true. Returning: 0",0,0);
      bVar2 = false;
    }
    else {
      iVar1 = (**(code **)(**param_1 + 0x250))();
      bVar2 = iVar1 != 0;
    }
    return bVar2;
  }
  _err_print_error("zipio_testerror","core/io/zip_io.cpp",0x9e,"Parameter \"fa\" is null.",0,0);
  return true;
}



/* zipio_alloc(void*, unsigned int, unsigned int) */

void zipio_alloc(void *param_1,uint param_2,uint param_3)

{
  void *__s;
  
  __s = (void *)Memory::alloc_static((ulong)param_2 * (ulong)param_3,false);
  memset(__s,0,(ulong)param_2 * (ulong)param_3 & 0xffffffff);
  return;
}



/* LocalVector<char, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<char,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* zipio_close(void*, void*) */

undefined8 zipio_close(void *param_1,void *param_2)

{
  Object *pOVar1;
  char cVar2;
  
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    if (*param_1 == 0) {
      _err_print_error("zipio_close","core/io/zip_io.cpp",0x96,
                       "Condition \"fa->is_null()\" is true. Returning: 0",0,0);
    }
    else {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
        pOVar1 = *param_1;
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      *(undefined8 *)param_1 = 0;
    }
    return 0;
  }
  _err_print_error("zipio_close","core/io/zip_io.cpp",0x95,"Parameter \"fa\" is null.",0,0);
  return 0;
}



/* zipio_open(void*, char const*, int) */

void * zipio_open(void *param_1,char *param_2,int param_3)

{
  long *plVar1;
  Object *pOVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (void *)0x0) {
    _err_print_error("zipio_open","core/io/zip_io.cpp",0x4d,"Parameter \"fa\" is null.",0,0);
    param_1 = (void *)0x0;
    goto LAB_00100500;
  }
  local_30 = 0;
  String::parse_utf8((char *)&local_30,(int)param_2,true);
  uVar3 = param_3 & 3;
  if ((param_3 & 8U) != 0) {
    uVar3 = 7;
  }
  FileAccess::open((String *)&local_28,(int)&local_30,(Error *)(ulong)uVar3);
                    /* WARNING: Load size is inaccurate */
  pOVar2 = *param_1;
  pOVar6 = pOVar2;
  if (local_28 == pOVar2) {
LAB_001004d2:
    if (((pOVar6 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_28), cVar5 != '\0')) {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
    }
                    /* WARNING: Load size is inaccurate */
    if (*param_1 == 0) goto LAB_00100525;
  }
  else {
    *(Object **)param_1 = local_28;
    if (local_28 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)param_1 = 0;
      }
      pOVar6 = local_28;
      if (pOVar2 != (Object *)0x0) goto LAB_001004bd;
      goto LAB_001004d2;
    }
    if (pOVar2 != (Object *)0x0) {
LAB_001004bd:
      cVar5 = RefCounted::unreference();
      pOVar6 = local_28;
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar2), pOVar6 = local_28, cVar5 != '\0'))
      {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
        pOVar6 = local_28;
      }
      goto LAB_001004d2;
    }
LAB_00100525:
    param_1 = (void *)0x0;
  }
  lVar4 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
LAB_00100500:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* godot_unzip_get_current_file_info(void*, unz_file_info64_s&, String&) */

ulong godot_unzip_get_current_file_info(void *param_1,unz_file_info64_s *param_2,String *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  long in_FS_OFFSET;
  undefined1 local_4028 [16384];
  
  puVar3 = &stack0xffffffffffffffd8;
  do {
    puVar9 = puVar3;
    *(undefined8 *)(puVar9 + -0x1000) = *(undefined8 *)(puVar9 + -0x1000);
    puVar3 = puVar9 + -0x1000;
  } while (puVar9 + -0x1000 != local_4028);
  *(undefined8 *)(puVar9 + 0x2ff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar9 + -0x1038) = 0;
  *(undefined8 *)(puVar9 + -0x1040) = 0;
  *(undefined8 *)(puVar9 + -0x1048) = 0x100661;
  iVar4 = unzGetCurrentFileInfo64(param_1,param_2,puVar9 + -0x1010,0x4000,0,0);
  uVar7 = *(ulong *)(param_2 + 0x40);
  if ((iVar4 == 0) && (uVar7 < 0x4001)) {
    *(undefined8 *)(puVar9 + -0x1038) = 0x10068e;
    String::utf8(puVar9 + -0x1018,(int)(puVar9 + -0x1010));
    lVar2 = *(long *)param_3;
    lVar8 = *(long *)(puVar9 + -0x1018);
    if (lVar2 == lVar8) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(puVar9 + -0x1018);
          *(undefined8 *)(puVar9 + -0x1018) = 0;
          *(undefined8 *)(puVar9 + -0x1038) = 0x100706;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)param_3;
          *(undefined8 *)param_3 = 0;
          *(undefined8 *)(puVar9 + -0x1038) = 0x100727;
          Memory::free_static((void *)(lVar2 + -0x10),false);
          lVar8 = *(long *)(puVar9 + -0x1018);
        }
        else {
          lVar8 = *(long *)(puVar9 + -0x1018);
        }
      }
      *(long *)param_3 = lVar8;
    }
LAB_001006b2:
    uVar7 = 0;
  }
  else if ((int)uVar7 == 0) {
    *(undefined8 *)(puVar9 + -0x1038) = 0;
    *(undefined8 *)(puVar9 + -0x1040) = 0;
    pvVar6 = (void *)0x0;
    *(undefined8 *)(puVar9 + -0x1048) = 0x1007cc;
    uVar7 = unzGetCurrentFileInfo64(param_1,param_2,0,0,0,0);
    if ((int)uVar7 == 0) {
LAB_001007d6:
      *(undefined8 *)(puVar9 + -0x1038) = 0x1007e6;
      String::utf8(puVar9 + -0x1018,(int)pvVar6);
      lVar2 = *(long *)param_3;
      lVar8 = *(long *)(puVar9 + -0x1018);
      if (lVar2 == lVar8) {
        if (lVar2 != 0) {
          LOCK();
          plVar1 = (long *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *(long *)(puVar9 + -0x1018);
            *(undefined8 *)(puVar9 + -0x1018) = 0;
            *(undefined8 *)(puVar9 + -0x1038) = 0x100866;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
      }
      else {
        if (lVar2 != 0) {
          LOCK();
          plVar1 = (long *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *(long *)param_3;
            *(undefined8 *)param_3 = 0;
            *(undefined8 *)(puVar9 + -0x1038) = 0x100818;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
          lVar8 = *(long *)(puVar9 + -0x1018);
        }
        *(long *)param_3 = lVar8;
      }
      if (pvVar6 != (void *)0x0) {
        *(undefined8 *)(puVar9 + -0x1038) = 0x100834;
        Memory::free_static(pvVar6,false);
      }
      goto LAB_001006b2;
    }
  }
  else {
    uVar5 = (int)uVar7 - 1;
    uVar10 = 0;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 >> 4 | uVar5;
    uVar5 = uVar5 >> 8 | uVar5;
    *(undefined8 *)(puVar9 + -0x1038) = 0x100768;
    pvVar6 = (void *)Memory::realloc_static((void *)0x0,(ulong)((uVar5 | uVar5 >> 0x10) + 1),false);
    if (pvVar6 == (void *)0x0) {
      *(undefined8 *)(puVar9 + -0x1038) = 0x10086d;
      LocalVector<char,unsigned_int,false,false>::resize(uVar10);
      goto LAB_0010086d;
    }
    *(undefined8 *)(puVar9 + -0x1038) = 0;
    *(undefined8 *)(puVar9 + -0x1040) = 0;
    *(undefined8 *)(puVar9 + -0x1048) = 0x10078f;
    iVar4 = unzGetCurrentFileInfo64(param_1,param_2,pvVar6,uVar7 & 0xffffffff,0,0);
    *(int *)(puVar9 + -0x1024) = iVar4;
    if (iVar4 == 0) goto LAB_001007d6;
    *(undefined8 *)(puVar9 + -0x1038) = 0x1007a3;
    Memory::free_static(pvVar6,false);
    uVar7 = (ulong)*(uint *)(puVar9 + -0x1024);
  }
  if (*(long *)(puVar9 + 0x2ff8) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_0010086d:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x1038) = &UNK_00100872;
  __stack_chk_fail();
}



/* godot_unzip_locate_file(void*, String const&, bool) */

int godot_unzip_locate_file(void *param_1,String *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_d0;
  unz_file_info64_s local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = unzGoToFirstFile();
  if (iVar4 == 0) {
    do {
      local_d0 = 0;
      iVar4 = godot_unzip_get_current_file_info(param_1,local_c8,(String *)&local_d0);
      if (iVar4 != 0) {
LAB_00100938:
        lVar2 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar1 = (long *)(local_d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        break;
      }
      if (param_3) {
        cVar3 = String::operator==(param_2,(String *)&local_d0);
        if (cVar3 != '\0') goto LAB_00100938;
      }
      else {
        cVar3 = String::nocasecmp_to(param_2);
        if (cVar3 == '\0') goto LAB_00100938;
      }
      iVar4 = unzGoToNextFile(param_1);
      lVar2 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    } while (iVar4 == 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* zipio_create_io(Ref<FileAccess>*) */

void zipio_create_io(Ref *param_1)

{
  undefined8 in_RSI;
  
  *(undefined8 *)(param_1 + 0x38) = in_RSI;
  *(code **)param_1 = zipio_open;
  *(code **)(param_1 + 8) = zipio_read;
  *(code **)(param_1 + 0x10) = zipio_write;
  *(code **)(param_1 + 0x18) = zipio_tell;
  *(code **)(param_1 + 0x20) = zipio_seek;
  *(code **)(param_1 + 0x28) = zipio_close;
  *(code **)(param_1 + 0x30) = zipio_testerror;
  *(code **)(param_1 + 0x40) = zipio_alloc;
  *(undefined8 *)(param_1 + 0x48) = 0x100000;
  return;
}


