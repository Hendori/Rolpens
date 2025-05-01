
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */

void __thiscall
List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)this_00;
  return;
}



/* CrashHandler::CrashHandler() */

void __thiscall CrashHandler::CrashHandler(CrashHandler *this)

{
  *this = (CrashHandler)0x0;
  return;
}



/* CrashHandler::~CrashHandler() */

void __thiscall CrashHandler::~CrashHandler(CrashHandler *this)

{
  if (*this != (CrashHandler)0x0) {
    return;
  }
  signal(0xb,(__sighandler_t)0x0);
  signal(8,(__sighandler_t)0x0);
  signal(4,(__sighandler_t)0x0);
  return;
}



/* CrashHandler::disable() */

void __thiscall CrashHandler::disable(CrashHandler *this)

{
  if (*this != (CrashHandler)0x0) {
    return;
  }
  signal(0xb,(__sighandler_t)0x0);
  signal(8,(__sighandler_t)0x0);
  signal(4,(__sighandler_t)0x0);
  *this = (CrashHandler)0x1;
  return;
}



/* CrashHandler::initialize() */

void CrashHandler::initialize(void)

{
  signal(0xb,handle_crash);
  signal(8,handle_crash);
  signal(4,handle_crash);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* handle_crash(int) */

void handle_crash(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  bool *pbVar11;
  void *__ptr;
  CowData<char32_t> *this;
  long lVar12;
  void *__ptr_00;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined1 local_cdc [4];
  String local_cd8 [8];
  long local_cd0;
  undefined1 (*local_cc8) [16];
  undefined8 local_cc0;
  long local_cb8;
  long local_cb0;
  undefined8 local_ca8;
  size_t local_ca0;
  char *local_c98;
  undefined8 local_c90;
  char *local_c88;
  size_t local_c80;
  char *local_c78;
  int local_c68 [8];
  undefined8 local_c48 [256];
  char local_448 [1032];
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  signal(0xb,(__sighandler_t)0x0);
  signal(8,(__sighandler_t)0x0);
  signal(4,(__sighandler_t)0x0);
  lVar8 = OS::get_singleton();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar9 = (long *)OS::get_singleton();
  cVar5 = (**(code **)(*plVar9 + 0x220))();
  if (cVar5 != '\0') {
    _Exit(0);
  }
  iVar6 = backtrace(local_c48,0x100);
  uVar10 = (ulong)iVar6;
  plVar9 = (long *)OS::get_singleton();
  (**(code **)(*plVar9 + 0x100))(local_cd8);
  local_cd0 = 0;
  pbVar11 = (bool *)ProjectSettings::get_singleton();
  if (pbVar11 != (bool *)0x0) {
    StringName::StringName((StringName *)&local_c98,"debug/settings/crash_handler/message",false);
    Object::get((StringName *)local_c68,pbVar11);
    Variant::operator_cast_to_String((Variant *)&local_c88);
    if (local_c88 != (char *)0x0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_cd0);
      local_cd0 = (long)local_c88;
      local_c88 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
    if (Variant::needs_deinit[local_c68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  plVar9 = (long *)OS::get_singleton();
  lVar8 = (**(code **)(*plVar9 + 0x1d0))(plVar9);
  if (lVar8 != 0) {
    plVar9 = (long *)OS::get_singleton();
    iVar7 = (**(code **)(*plVar9 + 0x1d0))(plVar9);
    Object::notification(iVar7,true);
  }
  local_c88 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_c88,
             "\n================================================================");
  print_error((String *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
  local_c98 = (char *)0x0;
  String::parse_latin1((String *)&local_c98,"%s: Program crashed with signal %d");
  vformat<char_const*,int>((String *)&local_c88,(char *)&local_c98,0x102521);
  print_error((String *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c98);
  local_c88 = (char *)0x0;
  String::parse_latin1((String *)&local_c88,_VERSION_HASH);
  if ((local_c88 == (char *)0x0) || (uVar2 = *(undefined8 *)(local_c88 + -8), (int)uVar2 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
    if ((int)uVar2 != 1) {
      local_c98 = (char *)0x0;
      String::parse_latin1((String *)&local_c98,"Engine version: %s (%s)");
      vformat<char_const*,char_const*>
                ((String *)&local_c88,(char *)&local_c98,"Godot Engine v4.4.1.stable.custom_build");
      goto LAB_001004a3;
    }
  }
  local_c98 = (char *)0x0;
  String::parse_latin1((String *)&local_c98,"Engine version: %s");
  vformat<char_const*>((String *)&local_c88,(char *)&local_c98);
LAB_001004a3:
  print_error((String *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c98);
  local_c98 = (char *)0x0;
  if (local_cd0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c98,(CowData *)&local_cd0);
  }
  local_ca8 = 0;
  String::parse_latin1((String *)&local_ca8,"Dumping the backtrace. %s");
  vformat<String>((String *)&local_c88,(String *)&local_ca8,(StringName *)&local_c98);
  print_error((String *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_ca8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c98);
  __ptr = (void *)backtrace_symbols(local_c48,iVar6);
  if (__ptr != (void *)0x0) {
    local_cc8 = (undefined1 (*) [16])0x0;
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        __snprintf_chk(local_448,0x400,2,0x400);
        local_c98 = (char *)0x0;
        local_c80 = strlen(local_448);
        local_c88 = local_448;
        String::parse_latin1((StrRange *)&local_c98);
        if (local_cc8 == (undefined1 (*) [16])0x0) {
          local_cc8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)local_cc8[1] = 0;
          *local_cc8 = (undefined1  [16])0x0;
        }
        this = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
        if (local_c98 != (char *)0x0) {
          CowData<char32_t>::_ref(this,(CowData *)&local_c98);
        }
        pcVar4 = local_c98;
        lVar8 = *(long *)(*local_cc8 + 8);
        *(undefined8 *)(this + 8) = 0;
        *(undefined1 (**) [16])(this + 0x18) = local_cc8;
        *(long *)(this + 0x10) = lVar8;
        if (lVar8 != 0) {
          *(CowData<char32_t> **)(lVar8 + 8) = this;
        }
        lVar8 = *(long *)*local_cc8;
        *(CowData<char32_t> **)(*local_cc8 + 8) = this;
        if (lVar8 == 0) {
          *(CowData<char32_t> **)*local_cc8 = this;
        }
        *(int *)local_cc8[1] = *(int *)local_cc8[1] + 1;
        if (local_c98 != (char *)0x0) {
          LOCK();
          plVar9 = (long *)(local_c98 + -0x10);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            local_c98 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
    local_c88 = (char *)0x0;
    String::parse_latin1((String *)&local_c88,"-e");
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_cc8,(String *)&local_c88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
    List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator> *)&local_cc8,local_cd8);
    local_cc0 = 0;
    String::parse_latin1((String *)&local_cc0,"");
    plVar9 = (long *)OS::get_singleton();
    pcVar3 = *(code **)(*plVar9 + 0x108);
    local_c88 = (char *)0x0;
    String::parse_latin1((String *)&local_c88,"addr2line");
    iVar6 = (*pcVar3)(plVar9,(String *)&local_c88,(List<String,DefaultAllocator> *)&local_cc8,
                      (String *)&local_cc0,local_cdc,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
    local_ca0 = 0;
    if (iVar6 == 0) {
      String::substr((int)(StringName *)&local_c98,(int)(String *)&local_cc0);
      String::split((char *)&local_c88,SUB81((StringName *)&local_c98,0),0x102584);
      if (local_c80 != 0) {
        CowData<String>::_unref((CowData<String> *)&local_ca0);
        local_ca0 = local_c80;
        local_c80 = 0;
      }
      CowData<String>::_unref((CowData<String> *)&local_c80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c98);
    }
    if (1 < uVar10) {
      uVar13 = 1;
      do {
        snprintf(local_448,0x400,"%s",*(undefined8 *)((long)__ptr + uVar13 * 8));
        iVar7 = dladdr(local_c48[uVar13]);
        if (((iVar7 != 0) && (local_c78 != (char *)0x0)) && (*local_c78 == '_')) {
          local_c98 = (char *)((ulong)local_c98 & 0xffffffff00000000);
          __ptr_00 = (void *)__cxa_demangle(local_c78,0,0,(StringName *)&local_c98);
          if ((int)local_c98 == 0) {
            if (__ptr_00 != (void *)0x0) {
              snprintf(local_448,0x400,"%s",__ptr_00);
LAB_00100a6c:
              free(__ptr_00);
            }
          }
          else if (__ptr_00 != (void *)0x0) goto LAB_00100a6c;
        }
        if (iVar6 == 0) {
          if (local_ca0 == 0) {
            lVar8 = 0;
LAB_00100a7c:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar8,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar8 = *(long *)(local_ca0 - 8);
          if (lVar8 <= (long)uVar13) goto LAB_00100a7c;
          local_cb8 = 0;
          plVar1 = (long *)(local_ca0 + uVar13 * 8);
          lVar8 = *plVar1;
          plVar9 = (long *)(lVar8 + -0x10);
          if (lVar8 != 0) {
            do {
              lVar8 = *plVar9;
              if (lVar8 == 0) goto LAB_001008b0;
              LOCK();
              lVar12 = *plVar9;
              bVar14 = lVar8 == lVar12;
              if (bVar14) {
                *plVar9 = lVar8 + 1;
                lVar12 = lVar8;
              }
              UNLOCK();
            } while (!bVar14);
            if (lVar12 != -1) {
              local_cb8 = *plVar1;
            }
          }
        }
        else {
          local_cb8 = 0;
          local_c98 = "";
          local_c90 = 0;
          String::parse_latin1((StrRange *)&local_cb8);
        }
LAB_001008b0:
        local_cb0 = 0;
        local_c98 = "[%d] %s (%s)";
        local_c90 = 0xc;
        String::parse_latin1((StrRange *)&local_cb0);
        vformat<long,char*,String>((StringName *)&local_c98,(StrRange *)&local_cb0,uVar13,local_448)
        ;
        print_error((String *)&local_c98);
        pcVar4 = local_c98;
        if (local_c98 != (char *)0x0) {
          LOCK();
          plVar9 = (long *)(local_c98 + -0x10);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            local_c98 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar8 = local_cb0;
        if (local_cb0 != 0) {
          LOCK();
          plVar9 = (long *)(local_cb0 + -0x10);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            local_cb0 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_cb8;
        if (local_cb8 != 0) {
          LOCK();
          plVar9 = (long *)(local_cb8 + -0x10);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            local_cb8 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
    free(__ptr);
    CowData<String>::_unref((CowData<String> *)&local_ca0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_cc0);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_cc8);
  }
  local_c88 = (char *)0x0;
  String::parse_latin1((String *)&local_c88,"-- END OF BACKTRACE --");
  print_error((String *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
  local_c88 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_c88,"================================================================"
            );
  print_error((String *)&local_c88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c88);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[3] == plVar5) {
      lVar4 = plVar2[1];
      lVar3 = plVar2[2];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = plVar2[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100f90) */
/* WARNING: Removing unreachable block (ram,0x001010c0) */
/* WARNING: Removing unreachable block (ram,0x00101239) */
/* WARNING: Removing unreachable block (ram,0x001010cc) */
/* WARNING: Removing unreachable block (ram,0x001010d6) */
/* WARNING: Removing unreachable block (ram,0x0010121b) */
/* WARNING: Removing unreachable block (ram,0x001010e2) */
/* WARNING: Removing unreachable block (ram,0x001010ec) */
/* WARNING: Removing unreachable block (ram,0x001011fd) */
/* WARNING: Removing unreachable block (ram,0x001010f8) */
/* WARNING: Removing unreachable block (ram,0x00101102) */
/* WARNING: Removing unreachable block (ram,0x001011df) */
/* WARNING: Removing unreachable block (ram,0x0010110e) */
/* WARNING: Removing unreachable block (ram,0x00101118) */
/* WARNING: Removing unreachable block (ram,0x001011c1) */
/* WARNING: Removing unreachable block (ram,0x00101124) */
/* WARNING: Removing unreachable block (ram,0x0010112e) */
/* WARNING: Removing unreachable block (ram,0x001011a3) */
/* WARNING: Removing unreachable block (ram,0x00101136) */
/* WARNING: Removing unreachable block (ram,0x00101140) */
/* WARNING: Removing unreachable block (ram,0x00101188) */
/* WARNING: Removing unreachable block (ram,0x00101148) */
/* WARNING: Removing unreachable block (ram,0x0010115e) */
/* WARNING: Removing unreachable block (ram,0x0010116a) */
/* String vformat<char const*, int>(String const&, char const* const, int const) */

String * vformat<char_const*,int>(String *param_1,char *param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000014;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,(char *)CONCAT44(in_register_00000014,param_3));
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)param_2);
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101378) */
/* WARNING: Removing unreachable block (ram,0x001014a8) */
/* WARNING: Removing unreachable block (ram,0x00101670) */
/* WARNING: Removing unreachable block (ram,0x001014b4) */
/* WARNING: Removing unreachable block (ram,0x001014be) */
/* WARNING: Removing unreachable block (ram,0x00101650) */
/* WARNING: Removing unreachable block (ram,0x001014ca) */
/* WARNING: Removing unreachable block (ram,0x001014d4) */
/* WARNING: Removing unreachable block (ram,0x00101630) */
/* WARNING: Removing unreachable block (ram,0x001014e0) */
/* WARNING: Removing unreachable block (ram,0x001014ea) */
/* WARNING: Removing unreachable block (ram,0x00101610) */
/* WARNING: Removing unreachable block (ram,0x001014f6) */
/* WARNING: Removing unreachable block (ram,0x00101500) */
/* WARNING: Removing unreachable block (ram,0x001015f0) */
/* WARNING: Removing unreachable block (ram,0x0010150c) */
/* WARNING: Removing unreachable block (ram,0x00101516) */
/* WARNING: Removing unreachable block (ram,0x001015d0) */
/* WARNING: Removing unreachable block (ram,0x00101522) */
/* WARNING: Removing unreachable block (ram,0x0010152c) */
/* WARNING: Removing unreachable block (ram,0x001015b0) */
/* WARNING: Removing unreachable block (ram,0x00101534) */
/* WARNING: Removing unreachable block (ram,0x0010154a) */
/* WARNING: Removing unreachable block (ram,0x00101556) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001017f0) */
/* WARNING: Removing unreachable block (ram,0x00101920) */
/* WARNING: Removing unreachable block (ram,0x00101a99) */
/* WARNING: Removing unreachable block (ram,0x0010192c) */
/* WARNING: Removing unreachable block (ram,0x00101936) */
/* WARNING: Removing unreachable block (ram,0x00101a7b) */
/* WARNING: Removing unreachable block (ram,0x00101942) */
/* WARNING: Removing unreachable block (ram,0x0010194c) */
/* WARNING: Removing unreachable block (ram,0x00101a5d) */
/* WARNING: Removing unreachable block (ram,0x00101958) */
/* WARNING: Removing unreachable block (ram,0x00101962) */
/* WARNING: Removing unreachable block (ram,0x00101a3f) */
/* WARNING: Removing unreachable block (ram,0x0010196e) */
/* WARNING: Removing unreachable block (ram,0x00101978) */
/* WARNING: Removing unreachable block (ram,0x00101a21) */
/* WARNING: Removing unreachable block (ram,0x00101984) */
/* WARNING: Removing unreachable block (ram,0x0010198e) */
/* WARNING: Removing unreachable block (ram,0x00101a03) */
/* WARNING: Removing unreachable block (ram,0x00101996) */
/* WARNING: Removing unreachable block (ram,0x001019a0) */
/* WARNING: Removing unreachable block (ram,0x001019e8) */
/* WARNING: Removing unreachable block (ram,0x001019a8) */
/* WARNING: Removing unreachable block (ram,0x001019be) */
/* WARNING: Removing unreachable block (ram,0x001019ca) */
/* String vformat<char const*, char const*>(String const&, char const* const, char const* const) */

String * vformat<char_const*,char_const*>(String *param_1,char *param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_RCX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)param_2);
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101bd8) */
/* WARNING: Removing unreachable block (ram,0x00101d08) */
/* WARNING: Removing unreachable block (ram,0x00101ed0) */
/* WARNING: Removing unreachable block (ram,0x00101d14) */
/* WARNING: Removing unreachable block (ram,0x00101d1e) */
/* WARNING: Removing unreachable block (ram,0x00101eb0) */
/* WARNING: Removing unreachable block (ram,0x00101d2a) */
/* WARNING: Removing unreachable block (ram,0x00101d34) */
/* WARNING: Removing unreachable block (ram,0x00101e90) */
/* WARNING: Removing unreachable block (ram,0x00101d40) */
/* WARNING: Removing unreachable block (ram,0x00101d4a) */
/* WARNING: Removing unreachable block (ram,0x00101e70) */
/* WARNING: Removing unreachable block (ram,0x00101d56) */
/* WARNING: Removing unreachable block (ram,0x00101d60) */
/* WARNING: Removing unreachable block (ram,0x00101e50) */
/* WARNING: Removing unreachable block (ram,0x00101d6c) */
/* WARNING: Removing unreachable block (ram,0x00101d76) */
/* WARNING: Removing unreachable block (ram,0x00101e30) */
/* WARNING: Removing unreachable block (ram,0x00101d82) */
/* WARNING: Removing unreachable block (ram,0x00101d8c) */
/* WARNING: Removing unreachable block (ram,0x00101e10) */
/* WARNING: Removing unreachable block (ram,0x00101d94) */
/* WARNING: Removing unreachable block (ram,0x00101daa) */
/* WARNING: Removing unreachable block (ram,0x00101db6) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00102058) */
/* WARNING: Removing unreachable block (ram,0x00102188) */
/* WARNING: Removing unreachable block (ram,0x00102300) */
/* WARNING: Removing unreachable block (ram,0x00102194) */
/* WARNING: Removing unreachable block (ram,0x0010219e) */
/* WARNING: Removing unreachable block (ram,0x001022e2) */
/* WARNING: Removing unreachable block (ram,0x001021aa) */
/* WARNING: Removing unreachable block (ram,0x001021b4) */
/* WARNING: Removing unreachable block (ram,0x001022c4) */
/* WARNING: Removing unreachable block (ram,0x001021c0) */
/* WARNING: Removing unreachable block (ram,0x001021ca) */
/* WARNING: Removing unreachable block (ram,0x001022a6) */
/* WARNING: Removing unreachable block (ram,0x001021d6) */
/* WARNING: Removing unreachable block (ram,0x001021e0) */
/* WARNING: Removing unreachable block (ram,0x00102288) */
/* WARNING: Removing unreachable block (ram,0x001021ec) */
/* WARNING: Removing unreachable block (ram,0x001021f6) */
/* WARNING: Removing unreachable block (ram,0x0010226a) */
/* WARNING: Removing unreachable block (ram,0x001021fe) */
/* WARNING: Removing unreachable block (ram,0x00102208) */
/* WARNING: Removing unreachable block (ram,0x0010224f) */
/* WARNING: Removing unreachable block (ram,0x00102210) */
/* WARNING: Removing unreachable block (ram,0x00102225) */
/* WARNING: Removing unreachable block (ram,0x00102231) */
/* String vformat<long, char*, String>(String const&, long const, char* const, String const) */

undefined8 *
vformat<long,char*,String>
          (undefined8 *param_1,bool *param_2,long param_3,char *param_4,String *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* handle_crash(int) [clone .cold] */

void handle_crash(int param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


