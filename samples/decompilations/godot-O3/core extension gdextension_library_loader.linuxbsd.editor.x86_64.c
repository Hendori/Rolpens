
/* GDExtensionLibraryLoader::is_library_open() const */

bool __thiscall GDExtensionLibraryLoader::is_library_open(GDExtensionLibraryLoader *this)

{
  return *(long *)(this + 0x188) != 0;
}



/* GDExtensionLibraryLoader::has_library_changed() const */

bool __thiscall GDExtensionLibraryLoader::has_library_changed(GDExtensionLibraryLoader *this)

{
  long lVar1;
  
  lVar1 = FileAccess::get_modified_time((String *)(this + 0x180));
  if (lVar1 != *(long *)(this + 0x1e8)) {
    return true;
  }
  lVar1 = FileAccess::get_modified_time((String *)(this + 400));
  return *(long *)(this + 0x1f0) != lVar1;
}



/* GDExtensionLibraryLoader::library_exists() const */

void __thiscall GDExtensionLibraryLoader::library_exists(GDExtensionLibraryLoader *this)

{
  FileAccess::exists((String *)(this + 0x180));
  return;
}



/* std::_Function_handler<bool (String), GDExtensionLibraryLoader::parse_gdextension_file(String
   const&)::{lambda(String const&)#1}>::_M_invoke(std::_Any_data const&, String&&) */

void std::
     _Function_handler<bool(String),GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::{lambda(String_const&)#1}>
     ::_M_invoke(_Any_data *param_1,String *param_2)

{
  String *pSVar1;
  
  pSVar1 = (String *)OS::get_singleton();
  OS::has_feature(pSVar1);
  return;
}



/* std::_Function_handler<bool (String), GDExtensionLibraryLoader::parse_gdextension_file(String
   const&)::{lambda(String const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<bool(String),GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::{lambda(String_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::
                {lambda(String_const&)#2}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<bool (String), GDExtensionLibraryLoader::parse_gdextension_file(String
   const&)::{lambda(String const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<bool(String),GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::{lambda(String_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::
                {lambda(String_const&)#1}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* GDExtensionLibraryLoader::close_library() */

void __thiscall GDExtensionLibraryLoader::close_library(GDExtensionLibraryLoader *this)

{
  long *plVar1;
  
  plVar1 = (long *)OS::get_singleton();
  if (*(code **)(*plVar1 + 0xb8) == OS::close_dynamic_library) {
    *(undefined8 *)(this + 0x188) = 0;
    return;
  }
  (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(this + 0x188));
  *(undefined8 *)(this + 0x188) = 0;
  return;
}



/* std::_Function_handler<bool (String), GDExtensionLibraryLoader::parse_gdextension_file(String
   const&)::{lambda(String const&)#2}>::_M_invoke(std::_Any_data const&, String&&) */

void std::
     _Function_handler<bool(String),GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::{lambda(String_const&)#2}>
     ::_M_invoke(_Any_data *param_1,String *param_2)

{
  String *pSVar1;
  
  pSVar1 = (String *)OS::get_singleton();
  OS::has_feature(pSVar1);
  return;
}



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



/* GDExtensionLibraryLoader::initialize(void (*(*)(char const*))(), Ref<GDExtension> const&,
   GDExtensionInitialization*) */

int __thiscall
GDExtensionLibraryLoader::initialize
          (GDExtensionLibraryLoader *this,_func_void *param_1,Ref *param_2,
          GDExtensionInitialization *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  GDExtensionLibraryLoader GVar4;
  char cVar5;
  int iVar6;
  CowData<char32_t> *this_00;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  code *local_68;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  lVar1 = *(long *)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  GVar4 = this[0x1a1];
  if (GVar4 != (GDExtensionLibraryLoader)0x0) {
    lVar8 = Engine::get_singleton();
    GVar4 = *(GDExtensionLibraryLoader *)(lVar8 + 0xc2);
  }
  *(GDExtensionLibraryLoader *)(lVar1 + 0x248) = GVar4;
  for (puVar2 = *(undefined8 **)(this + 0x1d0); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    this_00 = (CowData<char32_t> *)
              HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
              ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                            *)(*(long *)param_2 + 0x2c8),(String *)(puVar2 + 2));
    if (*(long *)this_00 != puVar2[3]) {
      CowData<char32_t>::_ref(this_00,(CowData *)(puVar2 + 3));
    }
  }
  local_68 = (code *)0x0;
  iVar6 = 2;
  plVar7 = (long *)OS::get_singleton();
  if ((*(code **)(*plVar7 + 0xc0) == OS::get_dynamic_library_symbol_handle) ||
     (iVar6 = (**(code **)(*plVar7 + 0xc0))
                        (plVar7,*(undefined8 *)(this + 0x188),this + 0x198,&local_68,0), iVar6 != 0)
     ) {
    local_50 = 0;
    plVar7 = (long *)(*(long *)(this + 400) + -0x10);
    if (*(long *)(this + 400) != 0) {
      do {
        lVar1 = *plVar7;
        if (lVar1 == 0) goto LAB_001002e0;
        LOCK();
        lVar8 = *plVar7;
        bVar9 = lVar1 == lVar8;
        if (bVar9) {
          *plVar7 = lVar1 + 1;
          lVar8 = lVar1;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar8 != -1) {
        local_50 = *(long *)(this + 400);
      }
    }
LAB_001002e0:
    local_58 = 0;
    plVar7 = (long *)(*(long *)(this + 0x198) + -0x10);
    if (*(long *)(this + 0x198) != 0) {
      do {
        lVar1 = *plVar7;
        if (lVar1 == 0) goto LAB_00100320;
        LOCK();
        lVar8 = *plVar7;
        bVar9 = lVar1 == lVar8;
        if (bVar9) {
          *plVar7 = lVar1 + 1;
          lVar8 = lVar1;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar8 != -1) {
        local_58 = *(long *)(this + 0x198);
      }
    }
LAB_00100320:
    local_60 = 0;
    local_40 = 0x35;
    local_48 = "GDExtension entry point \'%s\' not found in library %s.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<String,String>(&local_48,(StrRange *)&local_60,&local_58,&local_50);
    _err_print_error("initialize","core/extension/gdextension_library_loader.cpp",0xde,&local_48,0,0
                    );
    pcVar3 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar7 = (long *)(local_48 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar1 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar7 = (long *)(local_60 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    lVar1 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar7 = (long *)(local_58 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    lVar1 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar7 = (long *)(local_50 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    cVar5 = (*local_68)(param_1,*(undefined8 *)param_2,param_3);
    if (cVar5 == '\0') {
      local_50 = 0;
      plVar7 = (long *)(*(long *)(this + 0x198) + -0x10);
      if (*(long *)(this + 0x198) != 0) {
        do {
          lVar1 = *plVar7;
          if (lVar1 == 0) goto LAB_00100493;
          LOCK();
          lVar8 = *plVar7;
          bVar9 = lVar1 == lVar8;
          if (bVar9) {
            *plVar7 = lVar1 + 1;
            lVar8 = lVar1;
          }
          UNLOCK();
        } while (!bVar9);
        if (lVar8 != -1) {
          local_50 = *(long *)(this + 0x198);
        }
      }
LAB_00100493:
      local_58 = 0;
      local_40 = 0x3b;
      local_48 = "GDExtension initialization function \'%s\' returned an error.";
      String::parse_latin1((StrRange *)&local_58);
      vformat<String>(&local_48,(StrRange *)&local_58,&local_50);
      _err_print_error("initialize","core/extension/gdextension_library_loader.cpp",0xe9,&local_48,0
                       ,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_48 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar1 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar7 = (long *)(local_50 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          iVar6 = 1;
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
          goto LAB_001003e8;
        }
      }
      iVar6 = 1;
    }
  }
LAB_001003e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* GDExtensionLibraryLoader::find_extension_library(String const&, Ref<ConfigFile>,
   std::function<bool (String)>, Vector<String>*) */

GDExtensionLibraryLoader * __thiscall
GDExtensionLibraryLoader::find_extension_library
          (GDExtensionLibraryLoader *this,String *param_1,undefined8 *param_3,long param_4,
          Vector<String> *param_5)

{
  long *plVar1;
  String *pSVar2;
  String *pSVar3;
  String *pSVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  String *pSVar9;
  List<String,DefaultAllocator> *this_00;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  StrRange *local_168;
  StrRange *local_160;
  String *local_140;
  long *local_120;
  String *local_118;
  long local_110;
  long local_108;
  String *local_100;
  String *local_f8;
  String *local_f0;
  Object *local_e8;
  String *local_e0;
  String *local_d8;
  String *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  String *local_98;
  long local_90;
  String *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  pSVar9 = (String *)*param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (String *)0x107c36;
  local_160 = (StrRange *)&local_98;
  local_98 = (String *)0x0;
  local_80 = 9;
  String::parse_latin1(local_160);
  cVar5 = ConfigFile::has_section(pSVar9);
  pSVar9 = local_98;
  if (local_98 != (String *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = (String *)0x0;
      Memory::free_static((void *)((long)pSVar9 + -0x10),false);
    }
  }
  pSVar9 = (String *)*param_3;
  local_140 = param_1;
  if (cVar5 != '\0') {
    local_88 = (String *)0x107c36;
    local_120 = (long *)0x0;
    local_98 = (String *)0x0;
    local_80 = 9;
    String::parse_latin1(local_160);
    ConfigFile::get_section_keys(pSVar9,(List *)local_160);
    pSVar9 = local_98;
    if (local_98 != (String *)0x0) {
      LOCK();
      pSVar2 = local_98 + -0x10;
      *(long *)pSVar2 = *(long *)pSVar2 + -1;
      UNLOCK();
      if (*(long *)pSVar2 == 0) {
        local_98 = (String *)0x0;
        Memory::free_static(pSVar9 + -0x10,false);
      }
    }
    local_118 = (String *)0x0;
    local_b0 = 0;
    if (local_120 != (long *)0x0) {
      lVar11 = *local_120;
      if (lVar11 != 0) {
        pSVar9 = (String *)&local_108;
        this_00 = (List<String,DefaultAllocator> *)&local_120;
        do {
          lVar10 = 0;
          String::split((char *)&local_a8,SUB81(lVar11,0),0x10656f);
          while (local_a0 != 0) {
            lVar8 = *(long *)(local_a0 + -8);
            if (lVar8 <= lVar10) {
              if (local_b0 != 0) goto LAB_00100b6b;
              lVar10 = 0;
              goto LAB_00100b6f;
            }
            String::strip_edges(SUB81(&local_110,0),(bool)((char)local_a0 + (char)lVar10 * '\b'));
            local_108 = 0;
            plVar1 = (long *)(local_110 + -0x10);
            if (local_110 != 0) {
              do {
                lVar8 = *plVar1;
                if (lVar8 == 0) goto LAB_00100acd;
                LOCK();
                lVar7 = *plVar1;
                bVar12 = lVar8 == lVar7;
                if (bVar12) {
                  *plVar1 = lVar8 + 1;
                  lVar7 = lVar8;
                }
                UNLOCK();
              } while (!bVar12);
              if (lVar7 != -1) {
                local_108 = local_110;
              }
            }
LAB_00100acd:
            if (*(long *)(param_4 + 0x10) == 0) goto LAB_001021ab;
            uVar6 = (**(code **)(param_4 + 0x18))(param_4);
            lVar8 = local_108;
            this_00 = (List<String,DefaultAllocator> *)(ulong)uVar6;
            if (local_108 != 0) {
              LOCK();
              plVar1 = (long *)(local_108 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_108 = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            lVar8 = local_110;
            if ((char)uVar6 == '\0') {
              if (local_110 != 0) {
                LOCK();
                plVar1 = (long *)(local_110 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_110 = 0;
                  Memory::free_static((void *)(lVar8 + -0x10),false);
                }
              }
              goto LAB_00100b80;
            }
            if (local_110 != 0) {
              LOCK();
              plVar1 = (long *)(local_110 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_110 = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            lVar10 = lVar10 + 1;
          }
          lVar8 = 0;
          if (local_b0 != 0) {
LAB_00100b6b:
            lVar10 = *(long *)(local_b0 + -8);
LAB_00100b6f:
            if (lVar10 < lVar8) {
              local_70 = (undefined1  [16])0x0;
              pSVar2 = (String *)*param_3;
              local_88 = (String *)0x107c36;
              local_78 = 0;
              local_98 = (String *)0x0;
              local_80 = 9;
              String::parse_latin1(local_160);
              ConfigFile::get_value((String *)local_58,pSVar2,(Variant *)local_160);
              Variant::operator_cast_to_String((Variant *)&local_88);
              pSVar3 = local_88;
              pSVar2 = local_118;
              if (local_118 == local_88) {
                if (local_118 != (String *)0x0) {
                  LOCK();
                  pSVar2 = local_118 + -0x10;
                  *(long *)pSVar2 = *(long *)pSVar2 + -1;
                  UNLOCK();
                  if (*(long *)pSVar2 == 0) {
                    local_88 = (String *)0x0;
                    Memory::free_static(pSVar3 + -0x10,false);
                  }
                }
              }
              else {
                if (local_118 != (String *)0x0) {
                  LOCK();
                  local_118 = local_118 + -0x10;
                  *(long *)local_118 = *(long *)local_118 + -1;
                  UNLOCK();
                  if (*(long *)local_118 == 0) {
                    local_118 = (String *)0x0;
                    Memory::free_static(pSVar2 + -0x10,false);
                  }
                }
                local_118 = local_88;
              }
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              pSVar2 = local_98;
              if (local_98 != (String *)0x0) {
                LOCK();
                pSVar3 = local_98 + -0x10;
                *(long *)pSVar3 = *(long *)pSVar3 + -1;
                UNLOCK();
                if (*(long *)pSVar3 == 0) {
                  local_98 = (String *)0x0;
                  Memory::free_static(pSVar2 + -0x10,false);
                }
              }
              if (Variant::needs_deinit[(int)local_78] != '\0') {
                Variant::_clear_internal();
              }
              if (local_b0 != local_a0) {
                CowData<String>::_ref((CowData<String> *)&local_b0,(CowData *)&local_a0);
              }
            }
          }
LAB_00100b80:
          this_00 = (List<String,DefaultAllocator> *)&local_a0;
          CowData<String>::_unref((CowData<String> *)this_00);
          lVar11 = *(long *)(lVar11 + 8);
        } while (lVar11 != 0);
        if ((local_118 != (String *)0x0) && (1 < *(uint *)(local_118 + -8))) {
          cVar5 = String::is_relative_path();
          if (cVar5 != '\0') {
            String::get_base_dir();
            String::path_join((String *)&local_88);
            pSVar2 = local_88;
            pSVar9 = local_118;
            if (local_118 == local_88) {
              if (local_118 != (String *)0x0) {
                LOCK();
                pSVar9 = local_118 + -0x10;
                *(long *)pSVar9 = *(long *)pSVar9 + -1;
                UNLOCK();
                if (*(long *)pSVar9 == 0) {
                  local_88 = (String *)0x0;
                  Memory::free_static(pSVar2 + -0x10,false);
                }
              }
            }
            else {
              if (local_118 != (String *)0x0) {
                LOCK();
                local_118 = local_118 + -0x10;
                *(long *)local_118 = *(long *)local_118 + -1;
                UNLOCK();
                if (*(long *)local_118 == 0) {
                  local_118 = (String *)0x0;
                  Memory::free_static(pSVar9 + -0x10,false);
                }
              }
              local_118 = local_88;
            }
            pSVar9 = local_98;
            if (local_98 != (String *)0x0) {
              LOCK();
              pSVar2 = local_98 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_98 = (String *)0x0;
                Memory::free_static(pSVar9 + -0x10,false);
              }
            }
          }
          if (param_5 != (Vector<String> *)0x0) {
            local_80 = 0;
            if (local_b0 != 0) {
              CowData<String>::_ref((CowData<String> *)&local_80,(CowData *)&local_b0);
            }
            Vector<String>::append_array(param_5);
            CowData<String>::_unref((CowData<String> *)&local_80);
          }
          pSVar9 = local_118;
          local_118 = (String *)0x0;
          *(String **)this = pSVar9;
          CowData<String>::_unref((CowData<String> *)&local_b0);
          pSVar9 = local_118;
          if (local_118 != (String *)0x0) {
            LOCK();
            pSVar2 = local_118 + -0x10;
            *(long *)pSVar2 = *(long *)pSVar2 + -1;
            UNLOCK();
            if (*(long *)pSVar2 == 0) {
              local_118 = (String *)0x0;
              Memory::free_static(pSVar9 + -0x10,false);
            }
          }
          List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_120);
          goto LAB_0010094d;
        }
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_b0);
    pSVar9 = local_118;
    if (local_118 != (String *)0x0) {
      LOCK();
      pSVar2 = local_118 + -0x10;
      *(long *)pSVar2 = *(long *)pSVar2 + -1;
      UNLOCK();
      if (*(long *)pSVar2 == 0) {
        local_118 = (String *)0x0;
        Memory::free_static(pSVar9 + -0x10,false);
      }
    }
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_120);
    pSVar9 = (String *)*param_3;
  }
  local_168 = (StrRange *)&local_a8;
  local_98 = (String *)0x0;
  local_88 = (String *)0x107c40;
  local_80 = 0x19;
  String::parse_latin1(local_160);
  local_a8 = 0;
  local_88 = (String *)0x107c5a;
  local_80 = 0xd;
  String::parse_latin1(local_168);
  cVar5 = ConfigFile::has_section_key(pSVar9,(String *)local_168);
  lVar11 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  pSVar9 = local_98;
  if (local_98 != (String *)0x0) {
    LOCK();
    pSVar2 = local_98 + -0x10;
    *(long *)pSVar2 = *(long *)pSVar2 + -1;
    UNLOCK();
    if (*(long *)pSVar2 == 0) {
      local_98 = (String *)0x0;
      Memory::free_static(pSVar9 + -0x10,false);
    }
  }
  if (cVar5 != '\0') {
    local_88 = (String *)0x107c40;
    local_70 = (undefined1  [16])0x0;
    pSVar9 = (String *)*param_3;
    local_78 = 0;
    local_98 = (String *)0x0;
    local_80 = 0x19;
    String::parse_latin1(local_160);
    local_88 = (String *)0x107c5a;
    local_a8 = 0;
    local_80 = 0xd;
    String::parse_latin1(local_168);
    ConfigFile::get_value((String *)local_58,pSVar9,(Variant *)local_168);
    Variant::operator_cast_to_String((Variant *)&local_88);
    pSVar9 = local_88;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar11 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    pSVar2 = local_98;
    if (local_98 != (String *)0x0) {
      LOCK();
      pSVar3 = local_98 + -0x10;
      *(long *)pSVar3 = *(long *)pSVar3 + -1;
      UNLOCK();
      if (*(long *)pSVar3 == 0) {
        local_98 = (String *)0x0;
        Memory::free_static(pSVar2 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if (pSVar9 != (String *)0x0) {
      if (((int)*(undefined8 *)(pSVar9 + -8) == 0) || ((int)*(undefined8 *)(pSVar9 + -8) == 1)) {
        this_00 = (List<String,DefaultAllocator> *)(pSVar9 + -0x10);
        *(undefined8 *)this = 0;
      }
      else {
        local_100 = (String *)0x0;
        this_00 = (List<String,DefaultAllocator> *)(pSVar9 + -0x10);
        do {
          lVar11 = *(long *)this_00;
          if (lVar11 == 0) goto LAB_00100e19;
          LOCK();
          lVar10 = *(long *)this_00;
          bVar12 = lVar11 == lVar10;
          if (bVar12) {
            *(long *)this_00 = lVar11 + 1;
            lVar10 = lVar11;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar10 != -1) {
          local_100 = pSVar9;
        }
LAB_00100e19:
        cVar5 = String::is_relative_path();
        if (cVar5 != '\0') {
          String::get_base_dir();
          String::path_join((String *)&local_88);
          pSVar3 = local_88;
          pSVar2 = local_100;
          if (local_100 == local_88) {
            if (local_100 != (String *)0x0) {
              LOCK();
              pSVar2 = local_100 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_88 = (String *)0x0;
                Memory::free_static(pSVar3 + -0x10,false);
              }
            }
          }
          else {
            if (local_100 != (String *)0x0) {
              LOCK();
              local_100 = local_100 + -0x10;
              *(long *)local_100 = *(long *)local_100 + -1;
              UNLOCK();
              if (*(long *)local_100 == 0) {
                local_100 = (String *)0x0;
                Memory::free_static(pSVar2 + -0x10,false);
              }
            }
            local_100 = local_88;
          }
          pSVar2 = local_98;
          if (local_98 != (String *)0x0) {
            LOCK();
            pSVar3 = local_98 + -0x10;
            *(long *)pSVar3 = *(long *)pSVar3 + -1;
            UNLOCK();
            if (*(long *)pSVar3 == 0) {
              local_98 = (String *)0x0;
              Memory::free_static(pSVar2 + -0x10,false);
            }
          }
        }
        local_f8 = (String *)0x0;
        local_f0 = (String *)0x0;
        cVar5 = DirAccess::dir_exists_absolute((String *)&local_100);
        if (cVar5 != '\0') {
          pSVar2 = local_f0;
          if (local_f8 != local_100) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_100);
            pSVar2 = local_f0;
          }
LAB_00100e78:
          local_f0 = pSVar2;
          local_168 = (StrRange *)&local_a8;
          DirAccess::open((String *)&local_e8,(Error *)&local_f8);
          if (local_e8 != (Object *)0x0) {
            local_140 = (String *)&local_d8;
            local_e0 = (String *)0x0;
            local_90 = 0;
            (**(code **)(*(long *)local_e8 + 0x160))();
            DirAccess::_get_next();
            local_160 = (StrRange *)&local_f0;
LAB_00100ef0:
            cVar5 = String::operator!=(local_140,"");
            if (cVar5 != '\0') {
              do {
                cVar5 = (**(code **)(*(long *)local_e8 + 0x170))();
                if ((cVar5 == '\0') && (cVar5 = String::begins_with(local_140), cVar5 != '\0')) {
                  String::trim_prefix((String *)&local_d0);
                  String::get_extension();
                  String::trim_suffix((String *)&local_88);
                  pSVar2 = local_88;
                  pSVar9 = local_d0;
                  if (local_d0 == local_88) {
                    if (local_d0 != (String *)0x0) {
                      LOCK();
                      pSVar9 = local_d0 + -0x10;
                      *(long *)pSVar9 = *(long *)pSVar9 + -1;
                      UNLOCK();
                      if (*(long *)pSVar9 == 0) {
                        local_88 = (String *)0x0;
                        Memory::free_static(pSVar2 + -0x10,false);
                      }
                    }
                  }
                  else {
                    if (local_d0 != (String *)0x0) {
                      LOCK();
                      local_d0 = local_d0 + -0x10;
                      *(long *)local_d0 = *(long *)local_d0 + -1;
                      UNLOCK();
                      if (*(long *)local_d0 == 0) {
                        local_d0 = (String *)0x0;
                        Memory::free_static(pSVar9 + -0x10,false);
                      }
                    }
                    local_d0 = local_88;
                  }
                  lVar11 = local_a8;
                  if (local_a8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_a8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_a8 = 0;
                      Memory::free_static((void *)(lVar11 + -0x10),false);
                    }
                  }
                  lVar11 = 0;
                  String::split((char *)&local_88,SUB81((String *)&local_d0,0),0x10656f);
                  pSVar9 = local_140;
                  if (local_80 == 0) {
                    if ((local_90 != 0) && (*(long *)(local_90 + -8) < 0)) {
LAB_00101323:
                      CowData<String>::_ref((CowData<String> *)&local_90,(CowData *)&local_80);
LAB_0010133b:
                      if (local_e0 != local_d8) {
                        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)local_140)
                        ;
                      }
                    }
                  }
                  else {
                    do {
                      lVar10 = *(long *)(local_80 + -8);
                      if (lVar10 <= lVar11) {
                        if (local_90 != 0) goto LAB_00101310;
                        if (lVar10 < 1) goto LAB_0010135d;
                        goto LAB_00101323;
                      }
                      String::strip_edges(SUB81(&local_c8,0),
                                          (bool)((char)local_80 + (char)lVar11 * '\b'));
                      local_c0 = 0;
                      plVar1 = (long *)(local_c8 + -0x10);
                      if (local_c8 != 0) {
                        do {
                          lVar10 = *plVar1;
                          if (lVar10 == 0) goto LAB_00101251;
                          LOCK();
                          lVar8 = *plVar1;
                          bVar12 = lVar10 == lVar8;
                          if (bVar12) {
                            *plVar1 = lVar10 + 1;
                            lVar8 = lVar10;
                          }
                          UNLOCK();
                        } while (!bVar12);
                        if (lVar8 != -1) {
                          local_c0 = local_c8;
                        }
                      }
LAB_00101251:
                      if (*(long *)(param_4 + 0x10) == 0) goto LAB_001021ab;
                      uVar6 = (**(code **)(param_4 + 0x18))(param_4);
                      lVar10 = local_c0;
                      if (local_c0 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_c0 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_c0 = 0;
                          Memory::free_static((void *)(lVar10 + -0x10),false);
                        }
                      }
                      lVar10 = local_c8;
                      if ((char)uVar6 == '\0') {
                        if (local_c8 != 0) {
                          LOCK();
                          plVar1 = (long *)(local_c8 + -0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            local_c8 = 0;
                            Memory::free_static((void *)(lVar10 + -0x10),false);
                          }
                        }
                        goto LAB_0010135d;
                      }
                      if (local_c8 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_c8 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_c8 = 0;
                          Memory::free_static((void *)(lVar10 + -0x10),false);
                        }
                      }
                      lVar11 = lVar11 + 1;
                      pSVar9 = (String *)(ulong)uVar6;
                    } while (local_80 != 0);
                    lVar10 = 0;
                    if (local_90 != 0) {
LAB_00101310:
                      if (*(long *)(local_90 + -8) < lVar10) {
                        if (local_80 != local_90) goto LAB_00101323;
                        goto LAB_0010133b;
                      }
                    }
                  }
LAB_0010135d:
                  CowData<String>::_unref((CowData<String> *)&local_80);
                  pSVar9 = local_d0;
                  if (local_d0 != (String *)0x0) {
                    LOCK();
                    pSVar2 = local_d0 + -0x10;
                    *(long *)pSVar2 = *(long *)pSVar2 + -1;
                    UNLOCK();
                    if (*(long *)pSVar2 == 0) {
                      local_d0 = (String *)0x0;
                      Memory::free_static(pSVar9 + -0x10,false);
                    }
                  }
                }
                DirAccess::_get_next();
                pSVar2 = local_88;
                pSVar9 = local_d8;
                if (local_d8 == local_88) goto LAB_001010a0;
                if (local_d8 != (String *)0x0) {
                  LOCK();
                  local_d8 = local_d8 + -0x10;
                  *(long *)local_d8 = *(long *)local_d8 + -1;
                  UNLOCK();
                  if (*(long *)local_d8 == 0) {
                    local_d8 = (String *)0x0;
                    Memory::free_static(pSVar9 + -0x10,false);
                  }
                }
                local_d8 = local_88;
                cVar5 = String::operator!=(local_140,"");
                if (cVar5 == '\0') break;
              } while( true );
            }
            pSVar9 = local_d8;
            if ((local_e0 != (String *)0x0) && (1 < *(uint *)(local_e0 + -8))) {
              String::path_join((String *)local_168);
              if (param_5 != (Vector<String> *)0x0) {
                local_80 = 0;
                if (local_90 != 0) {
                  CowData<String>::_ref((CowData<String> *)&local_80,(CowData *)&local_90);
                }
                Vector<String>::append_array(param_5);
                CowData<String>::_unref((CowData<String> *)&local_80);
              }
              pSVar9 = local_d8;
              *(long *)this = local_a8;
              if (local_d8 != (String *)0x0) {
                LOCK();
                pSVar2 = local_d8 + -0x10;
                *(long *)pSVar2 = *(long *)pSVar2 + -1;
                UNLOCK();
                if (*(long *)pSVar2 == 0) {
                  local_d8 = (String *)0x0;
                  Memory::free_static(pSVar9 + -0x10,false);
                }
              }
              CowData<String>::_unref((CowData<String> *)&local_90);
              pSVar9 = local_e0;
              if (local_e0 != (String *)0x0) {
                LOCK();
                pSVar2 = local_e0 + -0x10;
                *(long *)pSVar2 = *(long *)pSVar2 + -1;
                UNLOCK();
                if (*(long *)pSVar2 == 0) {
                  local_e0 = (String *)0x0;
                  Memory::free_static(pSVar9 + -0x10,false);
                }
              }
              goto LAB_001016f4;
            }
            if (local_d8 != (String *)0x0) {
              LOCK();
              pSVar2 = local_d8 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_d8 = (String *)0x0;
                Memory::free_static(pSVar9 + -0x10,false);
              }
            }
            CowData<String>::_unref((CowData<String> *)&local_90);
            pSVar9 = local_e0;
            if (local_e0 != (String *)0x0) {
              LOCK();
              pSVar2 = local_e0 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_e0 = (String *)0x0;
                Memory::free_static(pSVar9 + -0x10,false);
              }
            }
            if (((local_e8 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0'))
               && (cVar5 = predelete_handler(local_e8), cVar5 != '\0')) {
              (**(code **)(*(long *)local_e8 + 0x140))(local_e8);
              Memory::free_static(local_e8,false);
            }
            pSVar9 = local_f0;
            if (local_f0 != (String *)0x0) {
              LOCK();
              pSVar2 = local_f0 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_f0 = (String *)0x0;
                Memory::free_static(pSVar9 + -0x10,false);
              }
            }
            pSVar9 = local_f8;
            if (local_f8 != (String *)0x0) {
              LOCK();
              pSVar2 = local_f8 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_f8 = (String *)0x0;
                Memory::free_static(pSVar9 + -0x10,false);
              }
            }
            pSVar9 = local_100;
            if (local_100 != (String *)0x0) {
              LOCK();
              pSVar2 = local_100 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_100 = (String *)0x0;
                Memory::free_static(pSVar9 + -0x10,false);
              }
            }
            *(undefined8 *)this = 0;
            goto LAB_00100dd0;
          }
          local_98 = (String *)0x0;
          do {
            lVar11 = *(long *)this_00;
            if (lVar11 == 0) goto LAB_00101fe9;
            LOCK();
            lVar10 = *(long *)this_00;
            bVar12 = lVar11 == lVar10;
            if (bVar12) {
              *(long *)this_00 = lVar11 + 1;
              lVar10 = lVar11;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar10 != -1) {
            local_98 = pSVar9;
          }
LAB_00101fe9:
          local_a8 = 0;
          plVar1 = (long *)(*(long *)local_140 + -0x10);
          if (*(long *)local_140 != 0) {
            do {
              lVar11 = *plVar1;
              if (lVar11 == 0) goto LAB_0010202f;
              LOCK();
              lVar10 = *plVar1;
              bVar12 = lVar11 == lVar10;
              if (bVar12) {
                *plVar1 = lVar11 + 1;
                lVar10 = lVar11;
              }
              UNLOCK();
            } while (!bVar12);
            if (lVar10 != -1) {
              local_a8 = *(long *)local_140;
            }
          }
LAB_0010202f:
          local_b8 = 0;
          local_88 = (String *)0x1078d0;
          local_80 = 0x78;
          String::parse_latin1((StrRange *)&local_b8);
          vformat<String,String>((String *)&local_88,(StrRange *)&local_b8,local_168,local_160);
          _err_print_error("find_extension_library","core/extension/gdextension_library_loader.cpp",
                           0x87,"Condition \"dir.is_null()\" is true. Returning: String()",
                           (String *)&local_88,0,0);
          pSVar9 = local_88;
          if (local_88 != (String *)0x0) {
            LOCK();
            pSVar2 = local_88 + -0x10;
            *(long *)pSVar2 = *(long *)pSVar2 + -1;
            UNLOCK();
            if (*(long *)pSVar2 == 0) {
              local_88 = (String *)0x0;
              Memory::free_static(pSVar9 + -0x10,false);
            }
          }
          lVar11 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          if (local_98 != (String *)0x0) {
            LOCK();
            pSVar9 = local_98 + -0x10;
            *(long *)pSVar9 = *(long *)pSVar9 + -1;
            pSVar2 = local_98;
            UNLOCK();
            if (*(long *)pSVar9 == 0) {
              local_98 = (String *)0x0;
              Memory::free_static(pSVar2 + -0x10,false);
            }
          }
          *(undefined8 *)this = 0;
LAB_001016f4:
          if (((local_e8 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_e8), cVar5 != '\0')) {
            (**(code **)(*(long *)local_e8 + 0x140))(local_e8);
            Memory::free_static(local_e8,false);
          }
          goto LAB_0010170e;
        }
        String::get_base_dir();
        cVar5 = DirAccess::dir_exists_absolute((String *)&local_88);
        pSVar2 = local_88;
        if (local_88 != (String *)0x0) {
          LOCK();
          pSVar3 = local_88 + -0x10;
          *(long *)pSVar3 = *(long *)pSVar3 + -1;
          UNLOCK();
          if (*(long *)pSVar3 == 0) {
            local_88 = (String *)0x0;
            Memory::free_static(pSVar2 + -0x10,false);
          }
        }
        if (cVar5 != '\0') {
          String::get_base_dir();
          pSVar3 = local_88;
          pSVar2 = local_f8;
          if (local_f8 == local_88) {
            if (local_f8 != (String *)0x0) {
              LOCK();
              pSVar2 = local_f8 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_88 = (String *)0x0;
                Memory::free_static(pSVar3 + -0x10,false);
              }
            }
          }
          else {
            if (local_f8 != (String *)0x0) {
              LOCK();
              local_f8 = local_f8 + -0x10;
              *(long *)local_f8 = *(long *)local_f8 + -1;
              UNLOCK();
              if (*(long *)local_f8 == 0) {
                local_f8 = (String *)0x0;
                Memory::free_static(pSVar2 + -0x10,false);
              }
            }
            local_f8 = local_88;
          }
          String::get_file();
          pSVar4 = local_88;
          pSVar3 = local_f0;
          if (local_f0 == local_88) {
            pSVar2 = local_f0;
            if (local_f0 != (String *)0x0) {
              LOCK();
              pSVar3 = local_f0 + -0x10;
              *(long *)pSVar3 = *(long *)pSVar3 + -1;
              UNLOCK();
              if (*(long *)pSVar3 == 0) {
                local_88 = (String *)0x0;
                Memory::free_static(pSVar4 + -0x10,false);
                pSVar2 = local_f0;
              }
            }
          }
          else {
            pSVar2 = local_88;
            if (local_f0 != (String *)0x0) {
              LOCK();
              local_f0 = local_f0 + -0x10;
              *(long *)local_f0 = *(long *)local_f0 + -1;
              UNLOCK();
              pSVar2 = local_88;
              if (*(long *)local_f0 == 0) {
                local_f0 = (String *)0x0;
                Memory::free_static(pSVar3 + -0x10,false);
                pSVar2 = local_88;
              }
            }
          }
          goto LAB_00100e78;
        }
        local_98 = (String *)0x0;
        do {
          lVar11 = *(long *)this_00;
          if (lVar11 == 0) goto LAB_0010198c;
          LOCK();
          lVar10 = *(long *)this_00;
          bVar12 = lVar11 == lVar10;
          if (bVar12) {
            *(long *)this_00 = lVar11 + 1;
            lVar10 = lVar11;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar10 != -1) {
          local_98 = pSVar9;
        }
LAB_0010198c:
        local_a8 = 0;
        plVar1 = (long *)(*(long *)param_1 + -0x10);
        if (*(long *)param_1 != 0) {
          do {
            lVar11 = *plVar1;
            if (lVar11 == 0) goto LAB_001019d2;
            LOCK();
            lVar10 = *plVar1;
            bVar12 = lVar11 == lVar10;
            if (bVar12) {
              *plVar1 = lVar11 + 1;
              lVar10 = lVar11;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar10 != -1) {
            local_a8 = *(long *)param_1;
          }
        }
LAB_001019d2:
        local_b8 = 0;
        local_88 = (String *)0x107820;
        local_80 = 0x78;
        String::parse_latin1((StrRange *)&local_b8);
        vformat<String,String>((String *)&local_88,(StrRange *)&local_b8,local_168,local_160);
        _err_print_error("find_extension_library","core/extension/gdextension_library_loader.cpp",
                         0x82,"Method/function failed. Returning: String()",(String *)&local_88,0,0)
        ;
        pSVar9 = local_88;
        if (local_88 != (String *)0x0) {
          LOCK();
          pSVar2 = local_88 + -0x10;
          *(long *)pSVar2 = *(long *)pSVar2 + -1;
          UNLOCK();
          if (*(long *)pSVar2 == 0) {
            local_88 = (String *)0x0;
            Memory::free_static(pSVar9 + -0x10,false);
          }
        }
        lVar11 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        pSVar9 = local_98;
        if (local_98 != (String *)0x0) {
          LOCK();
          pSVar2 = local_98 + -0x10;
          *(long *)pSVar2 = *(long *)pSVar2 + -1;
          UNLOCK();
          if (*(long *)pSVar2 == 0) {
            local_98 = (String *)0x0;
            Memory::free_static(pSVar9 + -0x10,false);
          }
        }
        *(undefined8 *)this = 0;
LAB_0010170e:
        pSVar9 = local_f0;
        if (local_f0 != (String *)0x0) {
          LOCK();
          pSVar2 = local_f0 + -0x10;
          *(long *)pSVar2 = *(long *)pSVar2 + -1;
          UNLOCK();
          if (*(long *)pSVar2 == 0) {
            local_f0 = (String *)0x0;
            Memory::free_static(pSVar9 + -0x10,false);
          }
        }
        pSVar9 = local_f8;
        if (local_f8 != (String *)0x0) {
          LOCK();
          pSVar2 = local_f8 + -0x10;
          *(long *)pSVar2 = *(long *)pSVar2 + -1;
          UNLOCK();
          if (*(long *)pSVar2 == 0) {
            local_f8 = (String *)0x0;
            Memory::free_static(pSVar9 + -0x10,false);
          }
        }
        pSVar9 = local_100;
        if (local_100 != (String *)0x0) {
          LOCK();
          pSVar2 = local_100 + -0x10;
          *(long *)pSVar2 = *(long *)pSVar2 + -1;
          UNLOCK();
          if (*(long *)pSVar2 == 0) {
            local_100 = (String *)0x0;
            Memory::free_static(pSVar9 + -0x10,false);
          }
        }
      }
LAB_00100dd0:
      LOCK();
      *(long *)this_00 = *(long *)this_00 + -1;
      UNLOCK();
      if (*(long *)this_00 == 0) {
        Memory::free_static(this_00,false);
      }
      goto LAB_0010094d;
    }
  }
  *(undefined8 *)this = 0;
LAB_0010094d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
LAB_001021ab:
  std::__throw_bad_function_call();
  pSVar2 = local_f0;
  goto LAB_00100e78;
LAB_001010a0:
  if (local_d8 != (String *)0x0) {
    LOCK();
    pSVar9 = local_d8 + -0x10;
    *(long *)pSVar9 = *(long *)pSVar9 + -1;
    UNLOCK();
    if (*(long *)pSVar9 == 0) {
      local_88 = (String *)0x0;
      Memory::free_static(pSVar2 + -0x10,false);
    }
  }
  goto LAB_00100ef0;
}



/* CowData<SharedObject>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<SharedObject>::_copy_on_write(CowData<SharedObject> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData *pCVar4;
  long lVar5;
  ulong uVar6;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x20 != 0) {
    uVar6 = lVar1 * 0x20 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar5 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  this_00 = (CowData<char32_t> *)(puVar3 + 2);
  if (lVar1 != 0) {
    do {
      pCVar4 = (CowData *)(lVar5 * 0x20 + *(long *)this);
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar4 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar4);
      }
      *(undefined8 *)(this_00 + 0x10) = 0;
      if (*(long *)(pCVar4 + 0x10) != 0) {
        CowData<String>::_ref((CowData<String> *)(this_00 + 0x10),pCVar4 + 0x10);
      }
      *(undefined8 *)(this_00 + 0x18) = 0;
      if (*(long *)(pCVar4 + 0x18) != 0) {
        CowData<char32_t>::_ref(this_00 + 0x18,pCVar4 + 0x18);
      }
      lVar5 = lVar5 + 1;
      this_00 = this_00 + 0x20;
    } while (lVar1 != lVar5);
  }
  _unref(this);
  *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
  return;
}



/* GDExtensionLibraryLoader::find_extension_dependencies(String const&, Ref<ConfigFile>,
   std::function<bool (String)>) */

GDExtensionLibraryLoader * __thiscall
GDExtensionLibraryLoader::find_extension_dependencies
          (GDExtensionLibraryLoader *this,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  String *pSVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  CowData<char32_t> *this_00;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_120;
  long *local_d0;
  Variant local_c8 [8];
  char *local_c0;
  long local_b8;
  char *local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  pSVar2 = (String *)*param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  local_98 = "dependencies";
  local_a8 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_a8);
  cVar5 = ConfigFile::has_section(pSVar2);
  lVar7 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (cVar5 == '\0') goto LAB_00102429;
  pSVar2 = (String *)*param_3;
  local_98 = "dependencies";
  local_d0 = (long *)0x0;
  local_a8 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_a8);
  ConfigFile::get_section_keys(pSVar2,(List *)&local_a8);
  lVar7 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if ((local_d0 != (long *)0x0) && (local_120 = *local_d0, local_120 != 0)) {
LAB_0010252e:
    String::split((char *)&local_a8,SUB81(local_120,0),0x10656f);
    if (local_a0 != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(local_a0 + -8) <= lVar7) break;
        String::strip_edges(SUB81((StrRange *)&local_b0,0),
                            (bool)((char)local_a0 + (char)lVar7 * '\b'));
        local_98 = (char *)0x0;
        plVar1 = (long *)(local_b0 + -0x10);
        if (local_b0 != (char *)0x0) {
          do {
            lVar9 = *plVar1;
            if (lVar9 == 0) goto LAB_001025c0;
            LOCK();
            lVar8 = *plVar1;
            bVar10 = lVar9 == lVar8;
            if (bVar10) {
              *plVar1 = lVar9 + 1;
              lVar8 = lVar9;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar8 != -1) {
            local_98 = local_b0;
          }
        }
LAB_001025c0:
        if (*(long *)(param_4 + 0x10) == 0) {
          std::__throw_bad_function_call();
          goto LAB_00102be9;
        }
        cVar5 = (**(code **)(param_4 + 0x18))(param_4);
        pcVar3 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        pcVar3 = local_b0;
        if (cVar5 == '\0') goto LAB_00102a78;
        if (local_b0 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar7 = lVar7 + 1;
        if (local_a0 == 0) break;
      } while( true );
    }
    local_70 = (undefined1  [16])0x0;
    pSVar2 = (String *)*param_3;
    local_98 = "dependencies";
    local_78 = 0;
    local_b0 = (char *)0x0;
    local_90 = 0xc;
    String::parse_latin1((StrRange *)&local_b0);
    ConfigFile::get_value((String *)local_58,pSVar2,(Variant *)&local_b0);
    Variant::operator_cast_to_Dictionary(local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pcVar3 = local_b0;
    if (local_b0 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    lVar7 = Dictionary::next(local_c8);
    if (lVar7 == 0) goto LAB_00102a50;
    goto LAB_00102960;
  }
  goto LAB_00102a64;
LAB_00102a78:
  if (local_b0 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_a0);
  local_120 = *(long *)(local_120 + 8);
  if (local_120 == 0) goto LAB_00102a64;
  goto LAB_0010252e;
LAB_00102960:
  do {
    Variant::operator_cast_to_String((Variant *)&local_c0);
    Dictionary::operator[](local_c8);
    Variant::operator_cast_to_String((Variant *)&local_b8);
    cVar5 = String::is_relative_path();
    if (cVar5 != '\0') {
      String::get_base_dir();
      String::path_join((String *)&local_98);
      pcVar4 = local_98;
      pcVar3 = local_c0;
      if (local_c0 == local_98) {
        if (local_c0 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
      }
      else {
        if (local_c0 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        local_c0 = local_98;
      }
      pcVar3 = local_b0;
      if (local_b0 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
    }
    local_98 = (char *)0x0;
    if (local_c0 != (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_c0);
    }
    local_88 = 0;
    if (local_a0 != 0) {
      CowData<String>::_ref((CowData<String> *)&local_88,(CowData *)&local_a0);
    }
    local_80 = 0;
    lVar7 = local_b8;
    if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_b8);
      lVar7 = local_80;
    }
    if (*(long *)(this + 8) == 0) {
      lVar9 = 1;
    }
    else {
      lVar9 = *(long *)(*(long *)(this + 8) + -8) + 1;
    }
    iVar6 = CowData<SharedObject>::resize<false>((CowData<SharedObject> *)(this + 8),lVar9);
    if (iVar6 == 0) {
      if (*(long *)(this + 8) == 0) {
        lVar8 = -1;
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(*(long *)(this + 8) + -8);
        lVar8 = lVar9 + -1;
        if (-1 < lVar8) {
          CowData<SharedObject>::_copy_on_write((CowData<SharedObject> *)(this + 8));
          this_00 = (CowData<char32_t> *)(lVar8 * 0x20 + *(long *)(this + 8));
          if (*(char **)this_00 != local_98) {
            CowData<char32_t>::_ref(this_00,(CowData *)&local_98);
          }
          if (*(long *)(this_00 + 0x10) != local_88) {
            CowData<String>::_ref((CowData<String> *)(this_00 + 0x10),(CowData *)&local_88);
          }
          if (lVar7 != *(long *)(this_00 + 0x18)) {
            CowData<char32_t>::_ref(this_00 + 0x18,(CowData *)&local_80);
          }
          goto LAB_001028a1;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar9,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_001028a1:
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 + -0x10),false);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_88);
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_98 + -0x10,false);
      }
    }
    lVar7 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    pcVar3 = local_c0;
    if (local_c0 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar7 = Dictionary::next(local_c8);
  } while (lVar7 != 0);
LAB_00102a50:
  Dictionary::~Dictionary((Dictionary *)local_c8);
  CowData<String>::_unref((CowData<String> *)&local_a0);
LAB_00102a64:
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_d0);
LAB_00102429:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_00102be9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionLibraryLoader::parse_gdextension_file(String const&) */

int __thiscall
GDExtensionLibraryLoader::parse_gdextension_file(GDExtensionLibraryLoader *this,String *param_1)

{
  long *plVar1;
  String *pSVar2;
  long *plVar3;
  Object *pOVar4;
  String *pSVar5;
  uint uVar6;
  char cVar7;
  GDExtensionLibraryLoader GVar8;
  int iVar9;
  RefCounted *this_00;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  CowData<char32_t> *this_01;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  String *pSVar17;
  RefCounted *pRVar18;
  RefCounted *pRVar19;
  long in_FS_OFFSET;
  bool bVar20;
  byte bVar21;
  int local_124;
  ulong local_108;
  long *local_e8;
  long local_e0;
  long *local_d8;
  long *local_d0;
  String *local_c8;
  long local_c0;
  long *local_b8;
  undefined8 local_b0;
  ulong local_a8;
  uint local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x180),(CowData *)param_1);
  }
  pRVar18 = (RefCounted *)0x0;
  this_00 = (RefCounted *)operator_new(0x1b0,"");
  pRVar19 = this_00;
  for (lVar14 = 0x36; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined8 *)pRVar19 = 0;
    pRVar19 = pRVar19 + (ulong)bVar21 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_001096e0;
  *(undefined8 *)(this_00 + 0x1a8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar7 = RefCounted::init_ref();
  if (cVar7 != '\0') {
    cVar7 = RefCounted::reference();
    if (cVar7 != '\0') {
      pRVar18 = this_00;
    }
    cVar7 = RefCounted::unreference();
    if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)this_00), cVar7 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
  }
  local_124 = ConfigFile::load((String *)pRVar18);
  local_c8 = (String *)0x0;
  if (local_124 == 0) {
    local_b0 = 0xc;
    local_b8 = (long *)0x107ccb;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = (long *)0x107c5a;
    local_d0 = (long *)0x0;
    local_b0 = 0xd;
    String::parse_latin1((StrRange *)&local_d0);
    cVar7 = ConfigFile::has_section_key((String *)pRVar18,(String *)&local_d0);
    plVar12 = local_d0;
    if (local_d0 != (long *)0x0) {
      LOCK();
      plVar3 = (long *)((long)local_d0 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_d0 = (long *)0x0;
        Memory::free_static((void *)((long)plVar12 + -0x10),false);
      }
    }
    pSVar17 = local_c8;
    if (local_c8 == (String *)0x0) {
LAB_00102e8a:
      if (cVar7 != '\0') goto LAB_00102e92;
LAB_0010352a:
      local_c8 = (String *)0x0;
      plVar12 = (long *)(*(long *)param_1 + -0x10);
      if (*(long *)param_1 != 0) {
        do {
          lVar14 = *plVar12;
          if (lVar14 == 0) goto LAB_00103560;
          LOCK();
          lVar11 = *plVar12;
          bVar20 = lVar14 == lVar11;
          if (bVar20) {
            *plVar12 = lVar14 + 1;
            lVar11 = lVar14;
          }
          UNLOCK();
        } while (!bVar20);
        if (lVar11 != -1) {
          local_c8 = *(String **)param_1;
        }
      }
LAB_00103560:
      local_d0 = (long *)0x0;
      local_b8 = (long *)0x1079f0;
      local_b0 = 0x55;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<String>((Variant *)&local_b8,(StrRange *)&local_d0,(StrRange *)&local_c8);
      uVar16 = 0x118;
LAB_00103360:
      _err_print_error("parse_gdextension_file","core/extension/gdextension_library_loader.cpp",
                       uVar16,(Variant *)&local_b8,0,0);
      plVar12 = local_b8;
      if (local_b8 != (long *)0x0) {
        LOCK();
        plVar3 = local_b8 + -2;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_b8 = (long *)0x0;
          Memory::free_static(plVar12 + -2,false);
        }
      }
      plVar12 = local_d0;
      if (local_d0 != (long *)0x0) {
        LOCK();
        plVar3 = local_d0 + -2;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d0 = (long *)0x0;
          Memory::free_static(plVar12 + -2,false);
        }
      }
      pSVar17 = local_c8;
      if (local_c8 != (String *)0x0) {
        LOCK();
        pSVar2 = local_c8 + -0x10;
        *(long *)pSVar2 = *(long *)pSVar2 + -1;
        UNLOCK();
        if (*(long *)pSVar2 == 0) {
          local_c8 = (String *)0x0;
          Memory::free_static(pSVar17 + -0x10,false);
        }
      }
    }
    else {
      LOCK();
      local_c8 = local_c8 + -0x10;
      *(long *)local_c8 = *(long *)local_c8 + -1;
      UNLOCK();
      if (*(long *)local_c8 != 0) goto LAB_00102e8a;
      local_c8 = (String *)0x0;
      Memory::free_static(pSVar17 + -0x10,false);
      if (cVar7 == '\0') goto LAB_0010352a;
LAB_00102e92:
      local_80 = (undefined1  [16])0x0;
      local_b8 = (long *)0x107ccb;
      local_88 = 0;
      local_c8 = (String *)0x0;
      local_b0 = 0xc;
      String::parse_latin1((StrRange *)&local_c8);
      local_b8 = (long *)0x107c5a;
      local_d0 = (long *)0x0;
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)&local_d0);
      ConfigFile::get_value((String *)local_68,(String *)pRVar18,(Variant *)&local_d0);
      Variant::operator_cast_to_String((Variant *)&local_b8);
      plVar3 = local_b8;
      plVar12 = *(long **)(this + 0x198);
      if (plVar12 == local_b8) {
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar12 = plVar12 + -2;
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_b8 = (long *)0x0;
            Memory::free_static(plVar3 + -2,false);
          }
        }
      }
      else {
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar12 = plVar12 + -2;
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            lVar14 = *(long *)(this + 0x198);
            *(undefined8 *)(this + 0x198) = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        *(long **)(this + 0x198) = local_b8;
      }
      if (Variant::needs_deinit[(int)local_68._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      plVar12 = local_d0;
      if (local_d0 != (long *)0x0) {
        LOCK();
        plVar3 = (long *)((long)local_d0 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d0 = (long *)0x0;
          Memory::free_static((void *)((long)plVar12 + -0x10),false);
        }
      }
      pSVar17 = local_c8;
      if (local_c8 != (String *)0x0) {
        LOCK();
        pSVar2 = local_c8 + -0x10;
        *(long *)pSVar2 = *(long *)pSVar2 + -1;
        UNLOCK();
        if (*(long *)pSVar2 == 0) {
          local_c8 = (String *)0x0;
          Memory::free_static(pSVar17 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[(int)local_88] != '\0') {
        Variant::_clear_internal();
      }
      local_a8 = 0;
      local_b8 = (long *)0x107cd8;
      local_a0 = 0;
      local_c8 = (String *)0x0;
      local_b0 = 0x15;
      String::parse_latin1((StrRange *)&local_c8);
      local_b8 = (long *)0x107c5a;
      local_d0 = (long *)0x0;
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)&local_d0);
      cVar7 = ConfigFile::has_section_key((String *)pRVar18,(String *)&local_d0);
      plVar12 = local_d0;
      if (local_d0 != (long *)0x0) {
        LOCK();
        plVar3 = (long *)((long)local_d0 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d0 = (long *)0x0;
          Memory::free_static((void *)((long)plVar12 + -0x10),false);
        }
      }
      pSVar17 = local_c8;
      if (local_c8 != (String *)0x0) {
        LOCK();
        local_c8 = local_c8 + -0x10;
        *(long *)local_c8 = *(long *)local_c8 + -1;
        UNLOCK();
        if (*(long *)local_c8 == 0) {
          local_c8 = (String *)0x0;
          Memory::free_static(pSVar17 + -0x10,false);
        }
      }
      if (cVar7 == '\0') {
        local_c8 = (String *)0x0;
        plVar12 = (long *)(*(long *)param_1 + -0x10);
        if (*(long *)param_1 != 0) {
          do {
            lVar14 = *plVar12;
            if (lVar14 == 0) goto LAB_00103640;
            LOCK();
            lVar11 = *plVar12;
            bVar20 = lVar14 == lVar11;
            if (bVar20) {
              *plVar12 = lVar14 + 1;
              lVar11 = lVar14;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar11 != -1) {
            local_c8 = *(String **)param_1;
          }
        }
LAB_00103640:
        local_d0 = (long *)0x0;
        local_b8 = (long *)0x107a48;
        local_b0 = 0x5e;
        String::parse_latin1((StrRange *)&local_d0);
        vformat<String>((Variant *)&local_b8,(StrRange *)&local_d0,(StrRange *)&local_c8);
        uVar16 = 299;
        goto LAB_00103360;
      }
      local_80 = (undefined1  [16])0x0;
      local_b8 = (long *)0x107cd8;
      local_88 = 0;
      local_c8 = (String *)0x0;
      local_b0 = 0x15;
      String::parse_latin1((StrRange *)&local_c8);
      local_b8 = (long *)0x107c5a;
      local_d0 = (long *)0x0;
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)&local_d0);
      ConfigFile::get_value((String *)local_68,(String *)pRVar18,(Variant *)&local_d0);
      Variant::operator_cast_to_String((Variant *)&local_d8);
      if (Variant::needs_deinit[(int)local_68._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      plVar12 = local_d0;
      if (local_d0 != (long *)0x0) {
        LOCK();
        plVar3 = (long *)((long)local_d0 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d0 = (long *)0x0;
          Memory::free_static((void *)((long)plVar12 + -0x10),false);
        }
      }
      pSVar17 = local_c8;
      if (local_c8 != (String *)0x0) {
        LOCK();
        pSVar2 = local_c8 + -0x10;
        *(long *)pSVar2 = *(long *)pSVar2 + -1;
        UNLOCK();
        if (*(long *)pSVar2 == 0) {
          local_c8 = (String *)0x0;
          Memory::free_static(pSVar17 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[(int)local_88] != '\0') {
        Variant::_clear_internal();
      }
      local_c8 = (String *)0x0;
      local_b8 = (long *)&_LC8;
      local_b0 = 1;
      String::parse_latin1((StrRange *)&local_c8);
      String::split_ints((String *)&local_b8,SUB81((Variant *)&local_d8,0));
      pSVar17 = local_c8;
      if (local_c8 != (String *)0x0) {
        LOCK();
        pSVar2 = local_c8 + -0x10;
        *(long *)pSVar2 = *(long *)pSVar2 + -1;
        UNLOCK();
        if (*(long *)pSVar2 == 0) {
          local_c8 = (String *)0x0;
          Memory::free_static(pSVar17 + -0x10,false);
        }
      }
      lVar14 = local_b0;
      if (local_b0 == 0) {
        local_108 = 0;
        uVar15 = 0;
        if (local_d8 != (long *)0x0) goto LAB_00103294;
LAB_0010373c:
        uVar6 = local_a0;
        local_c8 = (String *)0x0;
        plVar12 = (long *)(*(long *)param_1 + -0x10);
        if (*(long *)param_1 != 0) {
          do {
            lVar14 = *plVar12;
            if (lVar14 == 0) goto LAB_00103772;
            LOCK();
            lVar11 = *plVar12;
            bVar20 = lVar14 == lVar11;
            if (bVar20) {
              *plVar12 = lVar14 + 1;
              lVar11 = lVar14;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar11 != -1) {
            local_c8 = *(String **)param_1;
          }
        }
LAB_00103772:
        local_b8 = (long *)0x107aa8;
        local_d0 = (long *)0x0;
        local_b0 = 0x49;
        String::parse_latin1((StrRange *)&local_d0);
        vformat<unsigned_int,unsigned_int,unsigned_int,String>
                  ((Variant *)&local_b8,(StrRange *)&local_d0,uVar15,local_108,uVar6,
                   (StrRange *)&local_c8);
        uVar16 = 0x130;
        goto LAB_00103360;
      }
      lVar11 = *(long *)(local_b0 + -8);
      lVar10 = 1;
      if (0 < lVar11) {
        do {
          iVar9 = *(int *)(local_b0 + -4 + lVar10 * 4);
          if (-1 < iVar9) {
            *(int *)((long)&local_b0 + lVar10 * 4 + 4) = iVar9;
          }
          iVar9 = (int)lVar10;
          bVar20 = lVar10 < lVar11;
          lVar10 = lVar10 + 1;
        } while (iVar9 != 3 && bVar20);
      }
      LOCK();
      plVar12 = (long *)(local_b0 + -0x10);
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
      local_108 = local_a8 >> 0x20;
      uVar15 = local_a8 & 0xffffffff;
      if (local_d8 != (long *)0x0) {
LAB_00103294:
        plVar3 = local_d8;
        LOCK();
        plVar12 = local_d8 + -2;
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_d8 = (long *)0x0;
          Memory::free_static(plVar3 + -2,false);
        }
      }
      uVar6 = local_a0;
      if ((uint)uVar15 < 4) goto LAB_0010373c;
      if ((uint)uVar15 != 4) {
LAB_001032cf:
        local_c8 = (String *)0x0;
        plVar12 = (long *)(*(long *)param_1 + -0x10);
        if (*(long *)param_1 != 0) {
          do {
            lVar14 = *plVar12;
            if (lVar14 == 0) goto LAB_00103305;
            LOCK();
            lVar11 = *plVar12;
            bVar20 = lVar14 == lVar11;
            if (bVar20) {
              *plVar12 = lVar14 + 1;
              lVar11 = lVar14;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar11 != -1) {
            local_c8 = *(String **)param_1;
          }
        }
LAB_00103305:
        local_b8 = (long *)0x107af8;
        local_d0 = (long *)0x0;
        local_b0 = 0x44;
        String::parse_latin1((StrRange *)&local_d0);
        vformat<unsigned_int,unsigned_int,unsigned_int,String>
                  ((Variant *)&local_b8,(StrRange *)&local_d0,uVar15,local_108,uVar6,
                   (StrRange *)&local_c8);
        uVar16 = 0x13e;
        goto LAB_00103360;
      }
      if ((uint)local_108 == 0) goto LAB_0010373c;
      if ((uint)local_108 == 4) {
        bVar20 = local_a0 < 2;
      }
      else {
        bVar20 = (uint)local_108 < 4;
      }
      if (!bVar20) goto LAB_001032cf;
      local_c8 = (String *)0x0;
      local_b8 = (long *)0x107cee;
      local_b0 = 0x15;
      String::parse_latin1((StrRange *)&local_c8);
      local_b8 = (long *)0x107c5a;
      local_d0 = (long *)0x0;
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)&local_d0);
      cVar7 = ConfigFile::has_section_key((String *)pRVar18,(String *)&local_d0);
      plVar12 = local_d0;
      if (local_d0 != (long *)0x0) {
        LOCK();
        plVar3 = (long *)((long)local_d0 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d0 = (long *)0x0;
          Memory::free_static((void *)((long)plVar12 + -0x10),false);
        }
      }
      pSVar17 = local_c8;
      if (local_c8 != (String *)0x0) {
        LOCK();
        local_c8 = local_c8 + -0x10;
        *(long *)local_c8 = *(long *)local_c8 + -1;
        UNLOCK();
        if (*(long *)local_c8 == 0) {
          local_c8 = (String *)0x0;
          Memory::free_static(pSVar17 + -0x10,false);
        }
      }
      if (cVar7 == '\0') {
LAB_00103d55:
        pcStack_50 = std::
                     _Function_handler<bool(String),GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::{lambda(String_const&)#1}>
                     ::_M_invoke;
        local_58 = std::
                   _Function_handler<bool(String),GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::{lambda(String_const&)#1}>
                   ::_M_manager;
        local_68 = (undefined1  [16])0x0;
        local_c8 = (String *)pRVar18;
        cVar7 = RefCounted::reference();
        if (cVar7 == '\0') {
          local_c8 = (String *)0x0;
        }
        find_extension_library
                  ((GDExtensionLibraryLoader *)&local_b8,param_1,(StrRange *)&local_c8,
                   (String *)local_68,0);
        plVar12 = *(long **)(this + 400);
        if (plVar12 == local_b8) {
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar12 = plVar12 + -2;
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
              Memory::free_static(local_b8 + -2,false);
            }
          }
        }
        else {
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar12 = plVar12 + -2;
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
              lVar14 = *(long *)(this + 400);
              *(undefined8 *)(this + 400) = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          *(long **)(this + 400) = local_b8;
        }
        pSVar17 = local_c8;
        if (((local_c8 != (String *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
           (cVar7 = predelete_handler((Object *)pSVar17), cVar7 != '\0')) {
          (**(code **)(*(long *)pSVar17 + 0x140))();
          Memory::free_static(pSVar17,false);
        }
        if (local_58 != (code *)0x0) {
          (*local_58)((String *)local_68,(String *)local_68,3);
        }
        if ((*(long *)(this + 400) == 0) || (*(uint *)(*(long *)(this + 400) + -8) < 2)) {
          Engine::get_singleton();
          Engine::get_architecture_name();
          local_b8 = (long *)&_LC8;
          local_d0 = (long *)0x0;
          local_b0 = 1;
          String::parse_latin1((StrRange *)&local_d0);
          plVar12 = (long *)OS::get_singleton();
          (**(code **)(*plVar12 + 0x188))(&local_e0,plVar12);
          String::to_lower();
          String::operator+((String *)&local_b8,(String *)&local_d8);
          String::operator+((String *)&local_e8,(String *)&local_b8);
          plVar12 = local_b8;
          if (local_b8 != (long *)0x0) {
            LOCK();
            plVar3 = local_b8 + -2;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_b8 = (long *)0x0;
              Memory::free_static(plVar12 + -2,false);
            }
          }
          plVar12 = local_d8;
          if (local_d8 != (long *)0x0) {
            LOCK();
            plVar3 = local_d8 + -2;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_d8 = (long *)0x0;
              Memory::free_static(plVar12 + -2,false);
            }
          }
          lVar14 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar12 = (long *)(local_e0 + -0x10);
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          plVar12 = local_d0;
          if (local_d0 != (long *)0x0) {
            LOCK();
            plVar3 = (long *)((long)local_d0 + -0x10);
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_d0 = (long *)0x0;
              Memory::free_static((void *)((long)plVar12 + -0x10),false);
            }
          }
          pSVar17 = local_c8;
          if (local_c8 != (String *)0x0) {
            LOCK();
            pOVar4 = (Object *)(local_c8 + -0x10);
            *(long *)pOVar4 = *(long *)pOVar4 + -1;
            UNLOCK();
            if (*(long *)pOVar4 == 0) {
              local_c8 = (String *)0x0;
              Memory::free_static((Object *)(pSVar17 + -0x10),false);
            }
          }
          local_c8 = (String *)0x0;
          plVar12 = (long *)(*(long *)param_1 + -0x10);
          if (*(long *)param_1 != 0) {
            do {
              lVar14 = *plVar12;
              if (lVar14 == 0) goto LAB_00103fb5;
              LOCK();
              lVar11 = *plVar12;
              bVar20 = lVar14 == lVar11;
              if (bVar20) {
                *plVar12 = lVar14 + 1;
                lVar11 = lVar14;
              }
              UNLOCK();
            } while (!bVar20);
            if (lVar11 != -1) {
              local_c8 = *(String **)param_1;
            }
          }
LAB_00103fb5:
          local_d0 = (long *)0x0;
          plVar12 = local_e8 + -2;
          if (local_e8 != (long *)0x0) {
            do {
              lVar14 = *plVar12;
              if (lVar14 == 0) goto LAB_00103fef;
              LOCK();
              lVar11 = *plVar12;
              bVar20 = lVar14 == lVar11;
              if (bVar20) {
                *plVar12 = lVar14 + 1;
                lVar11 = lVar14;
              }
              UNLOCK();
            } while (!bVar20);
            if (lVar11 != -1) {
              local_d0 = local_e8;
            }
          }
LAB_00103fef:
          local_d8 = (long *)0x0;
          local_b8 = (long *)0x107b88;
          local_b0 = 0x5b;
          String::parse_latin1((StrRange *)&local_d8);
          vformat<String,String>
                    ((Variant *)&local_b8,(Variant *)&local_d8,(StrRange *)&local_d0,
                     (StrRange *)&local_c8);
          _err_print_error("parse_gdextension_file","core/extension/gdextension_library_loader.cpp",
                           0x167,(Variant *)&local_b8,0,0);
          plVar12 = local_b8;
          if (local_b8 != (long *)0x0) {
            LOCK();
            plVar3 = local_b8 + -2;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_b8 = (long *)0x0;
              Memory::free_static(plVar12 + -2,false);
            }
          }
          plVar12 = local_d8;
          if (local_d8 != (long *)0x0) {
            LOCK();
            plVar3 = local_d8 + -2;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_d8 = (long *)0x0;
              Memory::free_static(plVar12 + -2,false);
            }
          }
          plVar12 = local_d0;
          if (local_d0 != (long *)0x0) {
            LOCK();
            plVar3 = local_d0 + -2;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_d0 = (long *)0x0;
              Memory::free_static(plVar12 + -2,false);
            }
          }
          pSVar17 = local_c8;
          if (local_c8 != (String *)0x0) {
            LOCK();
            pSVar2 = local_c8 + -0x10;
            *(long *)pSVar2 = *(long *)pSVar2 + -1;
            UNLOCK();
            if (*(long *)pSVar2 == 0) {
              local_c8 = (String *)0x0;
              Memory::free_static(pSVar17 + -0x10,false);
            }
          }
          plVar12 = local_e8;
          if (local_e8 != (long *)0x0) {
            LOCK();
            plVar3 = local_e8 + -2;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_e8 = (long *)0x0;
              Memory::free_static(plVar12 + -2,false);
            }
          }
          local_124 = 7;
        }
        else {
          pSVar17 = (String *)(this + 400);
          GVar8 = (GDExtensionLibraryLoader)String::ends_with((char *)pSVar17);
          if (GVar8 == (GDExtensionLibraryLoader)0x0) {
            GVar8 = (GDExtensionLibraryLoader)String::ends_with((char *)pSVar17);
          }
          this[0x1a0] = GVar8;
          cVar7 = String::is_resource_file();
          if ((cVar7 == '\0') && (cVar7 = String::is_absolute_path(), cVar7 == '\0')) {
            String::get_base_dir();
            String::path_join((String *)&local_b8);
            plVar3 = local_b8;
            plVar12 = *(long **)(this + 400);
            if (plVar12 == local_b8) {
              if (plVar12 != (long *)0x0) {
                LOCK();
                plVar12 = plVar12 + -2;
                *plVar12 = *plVar12 + -1;
                UNLOCK();
                if (*plVar12 == 0) {
                  local_b8 = (long *)0x0;
                  Memory::free_static(plVar3 + -2,false);
                }
              }
            }
            else {
              if (plVar12 != (long *)0x0) {
                LOCK();
                plVar12 = plVar12 + -2;
                *plVar12 = *plVar12 + -1;
                UNLOCK();
                if (*plVar12 == 0) {
                  lVar14 = *(long *)(this + 400);
                  *(undefined8 *)(this + 400) = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              *(long **)(this + 400) = local_b8;
            }
            pSVar2 = local_c8;
            if (local_c8 != (String *)0x0) {
              LOCK();
              pOVar4 = (Object *)(local_c8 + -0x10);
              *(long *)pOVar4 = *(long *)pOVar4 + -1;
              UNLOCK();
              if (*(long *)pOVar4 == 0) {
                local_c8 = (String *)0x0;
                Memory::free_static((Object *)(pSVar2 + -0x10),false);
              }
            }
          }
          Variant::Variant((Variant *)&local_88,false);
          local_b8 = (long *)0x107d14;
          local_c8 = (String *)0x0;
          local_b0 = 10;
          String::parse_latin1((StrRange *)&local_c8);
          local_b8 = (long *)0x107c5a;
          local_d0 = (long *)0x0;
          local_b0 = 0xd;
          String::parse_latin1((StrRange *)&local_d0);
          ConfigFile::get_value((String *)local_68,(String *)pRVar18,(Variant *)&local_d0);
          GVar8 = (GDExtensionLibraryLoader)Variant::operator_cast_to_bool((Variant *)local_68);
          this[0x1a1] = GVar8;
          if (Variant::needs_deinit[(int)local_68._0_4_] != '\0') {
            Variant::_clear_internal();
          }
          plVar12 = local_d0;
          if (local_d0 != (long *)0x0) {
            LOCK();
            plVar3 = local_d0 + -2;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_d0 = (long *)0x0;
              Memory::free_static(plVar12 + -2,false);
            }
          }
          pSVar2 = local_c8;
          if (local_c8 != (String *)0x0) {
            LOCK();
            pSVar5 = local_c8 + -0x10;
            *(long *)pSVar5 = *(long *)pSVar5 + -1;
            UNLOCK();
            if (*(long *)pSVar5 == 0) {
              local_c8 = (String *)0x0;
              Memory::free_static(pSVar2 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[(int)local_88] != '\0') {
            Variant::_clear_internal();
          }
          uVar16 = FileAccess::get_modified_time(pSVar17);
          uVar13 = FileAccess::get_modified_time((String *)(this + 0x180));
          *(undefined8 *)(this + 0x1e8) = uVar13;
          *(undefined8 *)(this + 0x1f0) = uVar16;
          local_68 = (undefined1  [16])0x0;
          local_58 = std::
                     _Function_handler<bool(String),GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::{lambda(String_const&)#2}>
                     ::_M_manager;
          pcStack_50 = std::
                       _Function_handler<bool(String),GDExtensionLibraryLoader::parse_gdextension_file(String_const&)::{lambda(String_const&)#2}>
                       ::_M_invoke;
          local_c8 = (String *)pRVar18;
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            local_c8 = (String *)0x0;
            find_extension_dependencies
                      ((GDExtensionLibraryLoader *)&local_b8,param_1,(StrRange *)&local_c8,
                       (String *)local_68);
            lVar14 = local_b0;
            if (local_b0 == *(long *)(this + 0x1b0)) {
              CowData<SharedObject>::_unref((CowData<SharedObject> *)&local_b0);
            }
            else {
              CowData<SharedObject>::_unref((CowData<SharedObject> *)(this + 0x1b0));
              local_b0 = 0;
              *(long *)(this + 0x1b0) = lVar14;
              CowData<SharedObject>::_unref((CowData<SharedObject> *)&local_b0);
            }
          }
          else {
            find_extension_dependencies
                      ((GDExtensionLibraryLoader *)&local_b8,param_1,(StrRange *)&local_c8,
                       (String *)local_68);
            lVar14 = local_b0;
            if (*(long *)(this + 0x1b0) != local_b0) {
              CowData<SharedObject>::_unref((CowData<SharedObject> *)(this + 0x1b0));
              local_b0 = 0;
              *(long *)(this + 0x1b0) = lVar14;
            }
            CowData<SharedObject>::_unref((CowData<SharedObject> *)&local_b0);
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)pRVar18), cVar7 != '\0')) {
              (**(code **)(*(long *)pRVar18 + 0x140))(pRVar18);
              Memory::free_static(pRVar18,false);
            }
          }
          if (local_58 != (code *)0x0) {
            (*local_58)((String *)local_68,(String *)local_68,3);
          }
          local_c8 = (String *)0x0;
          local_b8 = (long *)0x107d1f;
          local_b0 = 5;
          String::parse_latin1((StrRange *)&local_c8);
          cVar7 = ConfigFile::has_section((String *)pRVar18);
          pSVar17 = local_c8;
          if (local_c8 != (String *)0x0) {
            LOCK();
            pSVar2 = local_c8 + -0x10;
            *(long *)pSVar2 = *(long *)pSVar2 + -1;
            UNLOCK();
            if (*(long *)pSVar2 == 0) {
              local_c8 = (String *)0x0;
              Memory::free_static(pSVar17 + -0x10,false);
            }
          }
          if (cVar7 != '\0') {
            local_d8 = (long *)0x0;
            local_b8 = (long *)0x107d1f;
            local_c8 = (String *)0x0;
            local_b0 = 5;
            String::parse_latin1((StrRange *)&local_c8);
            ConfigFile::get_section_keys((String *)pRVar18,(List *)&local_c8);
            pSVar17 = local_c8;
            if (local_c8 != (String *)0x0) {
              LOCK();
              pSVar2 = local_c8 + -0x10;
              *(long *)pSVar2 = *(long *)pSVar2 + -1;
              UNLOCK();
              if (*(long *)pSVar2 == 0) {
                local_c8 = (String *)0x0;
                Memory::free_static(pSVar17 + -0x10,false);
              }
            }
            if ((local_d8 != (long *)0x0) &&
               (pSVar17 = (String *)*local_d8, pSVar17 != (String *)0x0)) {
              do {
                local_b8 = (long *)0x107d1f;
                local_80 = (undefined1  [16])0x0;
                local_88 = 0;
                local_c8 = (String *)0x0;
                local_b0 = 5;
                String::parse_latin1((StrRange *)&local_c8);
                ConfigFile::get_value((String *)local_68,(String *)pRVar18,(Variant *)&local_c8);
                Variant::operator_cast_to_String((Variant *)&local_d0);
                if (Variant::needs_deinit[(int)local_68._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                pSVar2 = local_c8;
                if (local_c8 != (String *)0x0) {
                  LOCK();
                  pSVar5 = local_c8 + -0x10;
                  *(long *)pSVar5 = *(long *)pSVar5 + -1;
                  UNLOCK();
                  if (*(long *)pSVar5 == 0) {
                    local_c8 = (String *)0x0;
                    Memory::free_static(pSVar2 + -0x10,false);
                  }
                }
                if (Variant::needs_deinit[(int)local_88] != '\0') {
                  Variant::_clear_internal();
                }
                cVar7 = String::is_relative_path();
                if (cVar7 != '\0') {
                  String::get_base_dir();
                  String::path_join((String *)&local_b8);
                  plVar3 = local_b8;
                  plVar12 = local_d0;
                  if (local_d0 == local_b8) {
                    if (local_d0 != (long *)0x0) {
                      LOCK();
                      plVar12 = local_d0 + -2;
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_b8 = (long *)0x0;
                        Memory::free_static(plVar3 + -2,false);
                      }
                    }
                  }
                  else {
                    if (local_d0 != (long *)0x0) {
                      LOCK();
                      local_d0 = local_d0 + -2;
                      *local_d0 = *local_d0 + -1;
                      UNLOCK();
                      if (*local_d0 == 0) {
                        local_d0 = (long *)0x0;
                        Memory::free_static(plVar12 + -2,false);
                      }
                    }
                    local_d0 = local_b8;
                  }
                  pSVar2 = local_c8;
                  if (local_c8 != (String *)0x0) {
                    LOCK();
                    pSVar5 = local_c8 + -0x10;
                    *(long *)pSVar5 = *(long *)pSVar5 + -1;
                    UNLOCK();
                    if (*(long *)pSVar5 == 0) {
                      local_c8 = (String *)0x0;
                      Memory::free_static(pSVar2 + -0x10,false);
                    }
                  }
                }
                this_01 = (CowData<char32_t> *)
                          HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)(this + 0x1b8),pSVar17);
                if (*(long **)this_01 != local_d0) {
                  CowData<char32_t>::_ref(this_01,(CowData *)&local_d0);
                }
                plVar12 = local_d0;
                if (local_d0 != (long *)0x0) {
                  LOCK();
                  plVar3 = local_d0 + -2;
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                    local_d0 = (long *)0x0;
                    Memory::free_static(plVar12 + -2,false);
                  }
                }
                pSVar17 = *(String **)(pSVar17 + 8);
              } while (pSVar17 != (String *)0x0);
            }
            List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_d8);
          }
        }
        goto LAB_00102db8;
      }
      local_80 = (undefined1  [16])0x0;
      local_b8 = (long *)0x107cee;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_c8 = (String *)0x0;
      local_b0 = 0x15;
      String::parse_latin1((StrRange *)&local_c8);
      local_b8 = (long *)0x107c5a;
      local_d0 = (long *)0x0;
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)&local_d0);
      ConfigFile::get_value((String *)local_68,(String *)pRVar18,(Variant *)&local_d0);
      Variant::operator_cast_to_String((Variant *)&local_e8);
      if (Variant::needs_deinit[(int)local_68._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      plVar12 = local_d0;
      if (local_d0 != (long *)0x0) {
        LOCK();
        plVar3 = (long *)((long)local_d0 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d0 = (long *)0x0;
          Memory::free_static((void *)((long)plVar12 + -0x10),false);
        }
      }
      pSVar17 = local_c8;
      if (local_c8 != (String *)0x0) {
        LOCK();
        pSVar2 = local_c8 + -0x10;
        *(long *)pSVar2 = *(long *)pSVar2 + -1;
        UNLOCK();
        if (*(long *)pSVar2 == 0) {
          local_c8 = (String *)0x0;
          Memory::free_static(pSVar17 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[(int)local_88] != '\0') {
        Variant::_clear_internal();
      }
      local_d0 = (long *)0x0;
      local_b8 = (long *)&_LC8;
      local_b0 = 1;
      String::parse_latin1((StrRange *)&local_d0);
      String::split_ints((String *)&local_c8,SUB81((Variant *)&local_e8,0));
      plVar12 = local_d0;
      if (local_d0 != (long *)0x0) {
        LOCK();
        plVar3 = (long *)((long)local_d0 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d0 = (long *)0x0;
          Memory::free_static((void *)((long)plVar12 + -0x10),false);
        }
      }
      lVar14 = local_c0;
      lVar11 = 0;
      if (local_c0 != 0) {
        do {
          while ((lVar11 < *(long *)(local_c0 + -8) &&
                 (iVar9 = *(int *)(local_c0 + lVar11 * 4), -1 < iVar9))) {
            *(int *)((long)&local_98 + lVar11 * 4) = iVar9;
            lVar11 = lVar11 + 1;
            if (lVar11 == 3) goto LAB_00103cdb;
          }
          *(undefined4 *)((long)&local_98 + lVar11 * 4) = 9999;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
LAB_00103cdb:
        if ((uint)local_98 == 4) goto LAB_001047b0;
        if ((uint)local_98 < 5) goto LAB_00103ac8;
LAB_00103cef:
        LOCK();
        plVar12 = (long *)(local_c0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
LAB_00103d10:
        plVar12 = local_e8;
        if (local_e8 != (long *)0x0) {
          LOCK();
          plVar3 = local_e8 + -2;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_e8 = (long *)0x0;
            Memory::free_static(plVar12 + -2,false);
          }
        }
        goto LAB_00103d55;
      }
      do {
        *(undefined4 *)((long)&local_98 + lVar11 * 4) = 9999;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      if ((uint)local_98 != 4) {
        if ((uint)local_98 < 5) goto LAB_00103ac8;
        goto LAB_00103d10;
      }
LAB_001047b0:
      if (local_98._4_4_ == 4) {
        if (local_90 != 0) goto LAB_001047c4;
      }
      else if (4 < local_98._4_4_) {
LAB_001047c4:
        if (local_c0 != 0) goto LAB_00103cef;
        goto LAB_00103d10;
      }
LAB_00103ac8:
      local_d0 = (long *)0x0;
      plVar12 = (long *)(*(long *)param_1 + -0x10);
      if (*(long *)param_1 != 0) {
        do {
          lVar14 = *plVar12;
          if (lVar14 == 0) goto LAB_00103afe;
          LOCK();
          lVar11 = *plVar12;
          bVar20 = lVar14 == lVar11;
          if (bVar20) {
            *plVar12 = lVar14 + 1;
            lVar11 = lVar14;
          }
          UNLOCK();
        } while (!bVar20);
        if (lVar11 != -1) {
          local_d0 = *(long **)param_1;
        }
      }
LAB_00103afe:
      local_d8 = (long *)0x0;
      plVar12 = local_e8 + -2;
      if (local_e8 != (long *)0x0) {
        do {
          lVar14 = *plVar12;
          if (lVar14 == 0) goto LAB_00103b38;
          LOCK();
          lVar11 = *plVar12;
          bVar20 = lVar14 == lVar11;
          if (bVar20) {
            *plVar12 = lVar14 + 1;
            lVar11 = lVar14;
          }
          UNLOCK();
        } while (!bVar20);
        if (lVar11 != -1) {
          local_d8 = local_e8;
        }
      }
LAB_00103b38:
      local_e0 = 0;
      local_b8 = (long *)0x107b40;
      local_b0 = 0x40;
      String::parse_latin1((StrRange *)&local_e0);
      vformat<String,String>
                ((Variant *)&local_b8,(StrRange *)&local_e0,(Variant *)&local_d8,
                 (StrRange *)&local_d0);
      _err_print_error("parse_gdextension_file","core/extension/gdextension_library_loader.cpp",
                       0x15e,(Variant *)&local_b8,0,0);
      plVar12 = local_b8;
      if (local_b8 != (long *)0x0) {
        LOCK();
        plVar3 = local_b8 + -2;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_b8 = (long *)0x0;
          Memory::free_static(plVar12 + -2,false);
        }
      }
      lVar14 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar12 = (long *)(local_e0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      plVar12 = local_d8;
      if (local_d8 != (long *)0x0) {
        LOCK();
        plVar3 = local_d8 + -2;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d8 = (long *)0x0;
          Memory::free_static(plVar12 + -2,false);
        }
      }
      plVar12 = local_d0;
      if (local_d0 != (long *)0x0) {
        LOCK();
        plVar3 = local_d0 + -2;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_d0 = (long *)0x0;
          Memory::free_static(plVar12 + -2,false);
        }
      }
      lVar14 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar12 = (long *)(local_c0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      plVar12 = local_e8;
      if (local_e8 != (long *)0x0) {
        LOCK();
        plVar3 = local_e8 + -2;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_e8 = (long *)0x0;
          Memory::free_static(plVar12 + -2,false);
        }
      }
    }
    local_124 = 0x1e;
  }
  else {
    plVar12 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar14 = *plVar12;
        if (lVar14 == 0) goto LAB_00102d12;
        LOCK();
        lVar11 = *plVar12;
        bVar20 = lVar14 == lVar11;
        if (bVar20) {
          *plVar12 = lVar14 + 1;
          lVar11 = lVar14;
        }
        UNLOCK();
      } while (!bVar20);
      if (lVar11 != -1) {
        local_c8 = *(String **)param_1;
      }
    }
LAB_00102d12:
    local_d0 = (long *)0x0;
    local_b0 = 0x33;
    local_b8 = (long *)0x1079b8;
    String::parse_latin1((StrRange *)&local_d0);
    vformat<String>(&local_b8,(StrRange *)&local_d0,&local_c8);
    _err_print_error("parse_gdextension_file","core/extension/gdextension_library_loader.cpp",0x113,
                     &local_b8,0,0);
    plVar3 = local_b8;
    plVar12 = local_d0;
    if (local_b8 != (long *)0x0) {
      LOCK();
      plVar1 = local_b8 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = (long *)0x0;
        Memory::free_static(plVar3 + -2,false);
        plVar12 = local_d0;
      }
    }
    local_d0 = plVar12;
    pSVar17 = local_c8;
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar3 = plVar12 + -2;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_d0 = (long *)0x0;
        Memory::free_static(plVar12 + -2,false);
        pSVar17 = local_c8;
      }
    }
    local_c8 = pSVar17;
    if (pSVar17 != (String *)0x0) {
      LOCK();
      pSVar2 = pSVar17 + -0x10;
      *(long *)pSVar2 = *(long *)pSVar2 + -1;
      UNLOCK();
      if (*(long *)pSVar2 == 0) {
        local_c8 = (String *)0x0;
        Memory::free_static(pSVar17 + -0x10,false);
        cVar7 = RefCounted::unreference();
        goto joined_r0x00102dc2;
      }
    }
  }
LAB_00102db8:
  cVar7 = RefCounted::unreference();
joined_r0x00102dc2:
  if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)pRVar18), cVar7 != '\0')) {
    (**(code **)(*(long *)pRVar18 + 0x140))(pRVar18);
    Memory::free_static(pRVar18,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_124;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionLibraryLoader::open_library(String const&) */

int __thiscall
GDExtensionLibraryLoader::open_library(GDExtensionLibraryLoader *this,String *param_1)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [8];
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_88;
  long local_80;
  undefined1 local_78 [8];
  long local_70;
  undefined1 local_68 [8];
  GDExtensionLibraryLoader *pGStack_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = parse_gdextension_file(this,param_1);
  if (iVar5 != 0) goto LAB_001049f0;
  ProjectSettings::get_singleton();
  ProjectSettings::globalize_path((String *)&local_88);
  local_70 = 0;
  if (*(long *)(this + 0x1b0) != 0) {
    CowData<SharedObject>::_copy_on_write((CowData<SharedObject> *)(this + 0x1b0));
    lVar7 = *(long *)(this + 0x1b0);
    CowData<SharedObject>::_copy_on_write((CowData<SharedObject> *)(this + 0x1b0));
    lVar9 = *(long *)(this + 0x1b0);
    if (lVar9 != 0) {
      lVar9 = lVar9 + *(long *)(lVar9 + -8) * 0x20;
    }
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x20) {
      ProjectSettings::get_singleton();
      ProjectSettings::globalize_path((String *)local_68);
      if (local_70 == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = *(long *)(local_70 + -8) + 1;
      }
      iVar5 = CowData<String>::resize<false>((CowData<String> *)&local_70,lVar8);
      if (iVar5 == 0) {
        if (local_70 == 0) {
          lVar10 = -1;
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(local_70 + -8);
          lVar10 = lVar8 + -1;
          if (-1 < lVar10) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_70);
            this_00 = (CowData<char32_t> *)(local_70 + lVar10 * 8);
            if ((undefined1  [8])*(long *)this_00 != local_68) {
              CowData<char32_t>::_ref(this_00,(CowData *)local_68);
            }
            goto LAB_00104b20;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_00104b20:
      if (local_68 != (undefined1  [8])0x0) {
        LOCK();
        plVar6 = (long *)((long)local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          auVar4 = local_68;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = pGStack_60;
          _local_68 = auVar3 << 0x40;
          Memory::free_static((void *)((long)auVar4 + -0x10),false);
        }
      }
    }
  }
  local_58._0_16_ = (undefined1  [16])0x0;
  stack0xffffffffffffff99 = SUB1615((undefined1  [16])0x0,1);
  local_68[0] = 1;
  pGStack_60 = this + 400;
  lVar7 = Engine::get_singleton();
  local_58[0] = *(undefined1 *)(lVar7 + 0xc0);
  local_58._8_8_ = local_78;
  plVar6 = (long *)OS::get_singleton();
  pcVar2 = *(code **)(*plVar6 + 0xb0);
  if ((this[0x1a0] == (GDExtensionLibraryLoader)0x0) && (local_80 = 0, local_88 != 0)) {
    plVar1 = (long *)(local_88 + -0x10);
    do {
      lVar7 = *plVar1;
      if (lVar7 == 0) goto LAB_00104c1a;
      LOCK();
      lVar9 = *plVar1;
      bVar11 = lVar7 == lVar9;
      if (bVar11) {
        *plVar1 = lVar7 + 1;
        lVar9 = lVar7;
      }
      UNLOCK();
    } while (!bVar11);
    if (lVar9 != -1) {
      local_80 = local_88;
    }
LAB_00104c1a:
    if (pcVar2 == OS::open_dynamic_library) {
      iVar5 = 2;
    }
    else {
LAB_00104bc3:
      iVar5 = (*pcVar2)(plVar6,&local_80,this + 0x188,local_68);
    }
    lVar7 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar6 = (long *)(local_80 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    local_80 = 0;
    iVar5 = 2;
    if (pcVar2 != OS::open_dynamic_library) goto LAB_00104bc3;
  }
  CowData<String>::_unref((CowData<String> *)&local_70);
  lVar7 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar6 = (long *)(local_88 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_001049f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1099,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1099,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x1099,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1099,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1099,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* OS::open_dynamic_library(String const&, void*&, OS::GDExtensionData*) */

undefined8 OS::open_dynamic_library(String *param_1,void **param_2,GDExtensionData *param_3)

{
  return 2;
}



/* OS::close_dynamic_library(void*) */

undefined8 OS::close_dynamic_library(void *param_1)

{
  return 2;
}



/* OS::get_dynamic_library_symbol_handle(void*, String const&, void*&, bool) */

undefined8
OS::get_dynamic_library_symbol_handle(void *param_1,String *param_2,void **param_3,bool param_4)

{
  return 2;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00109580;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00109580;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00104f93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104f93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_00104ffe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_00104ffe:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00105073:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105073;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001050de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001050de:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001055d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001055d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001055f6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001055f6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfigFile";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001059d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001059d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001059f5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001059f5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00105e1b;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_00105f2a:
      if ((code *)PTR__bind_methods_0010c010 != RefCounted::_bind_methods) {
LAB_00105f3a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00105f2a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010c010 != RefCounted::_bind_methods) goto LAB_00105f3a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ConfigFile";
  local_70 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_0010c008 != RefCounted::_bind_methods) {
    ConfigFile::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00105e1b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010601f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010601f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001060d3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00106183;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00106183:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001060d3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001060d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001062af;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001062af:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00106363;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106363:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* WARNING: Removing unreachable block (ram,0x00106708) */
/* WARNING: Removing unreachable block (ram,0x00106838) */
/* WARNING: Removing unreachable block (ram,0x00106a00) */
/* WARNING: Removing unreachable block (ram,0x00106844) */
/* WARNING: Removing unreachable block (ram,0x0010684e) */
/* WARNING: Removing unreachable block (ram,0x001069e0) */
/* WARNING: Removing unreachable block (ram,0x0010685a) */
/* WARNING: Removing unreachable block (ram,0x00106864) */
/* WARNING: Removing unreachable block (ram,0x001069c0) */
/* WARNING: Removing unreachable block (ram,0x00106870) */
/* WARNING: Removing unreachable block (ram,0x0010687a) */
/* WARNING: Removing unreachable block (ram,0x001069a0) */
/* WARNING: Removing unreachable block (ram,0x00106886) */
/* WARNING: Removing unreachable block (ram,0x00106890) */
/* WARNING: Removing unreachable block (ram,0x00106980) */
/* WARNING: Removing unreachable block (ram,0x0010689c) */
/* WARNING: Removing unreachable block (ram,0x001068a6) */
/* WARNING: Removing unreachable block (ram,0x00106960) */
/* WARNING: Removing unreachable block (ram,0x001068b2) */
/* WARNING: Removing unreachable block (ram,0x001068bc) */
/* WARNING: Removing unreachable block (ram,0x00106940) */
/* WARNING: Removing unreachable block (ram,0x001068c4) */
/* WARNING: Removing unreachable block (ram,0x001068da) */
/* WARNING: Removing unreachable block (ram,0x001068e6) */
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



/* WARNING: Removing unreachable block (ram,0x00106b80) */
/* WARNING: Removing unreachable block (ram,0x00106cb0) */
/* WARNING: Removing unreachable block (ram,0x00106e29) */
/* WARNING: Removing unreachable block (ram,0x00106cbc) */
/* WARNING: Removing unreachable block (ram,0x00106cc6) */
/* WARNING: Removing unreachable block (ram,0x00106e0b) */
/* WARNING: Removing unreachable block (ram,0x00106cd2) */
/* WARNING: Removing unreachable block (ram,0x00106cdc) */
/* WARNING: Removing unreachable block (ram,0x00106ded) */
/* WARNING: Removing unreachable block (ram,0x00106ce8) */
/* WARNING: Removing unreachable block (ram,0x00106cf2) */
/* WARNING: Removing unreachable block (ram,0x00106dcf) */
/* WARNING: Removing unreachable block (ram,0x00106cfe) */
/* WARNING: Removing unreachable block (ram,0x00106d08) */
/* WARNING: Removing unreachable block (ram,0x00106db1) */
/* WARNING: Removing unreachable block (ram,0x00106d14) */
/* WARNING: Removing unreachable block (ram,0x00106d1e) */
/* WARNING: Removing unreachable block (ram,0x00106d93) */
/* WARNING: Removing unreachable block (ram,0x00106d26) */
/* WARNING: Removing unreachable block (ram,0x00106d30) */
/* WARNING: Removing unreachable block (ram,0x00106d78) */
/* WARNING: Removing unreachable block (ram,0x00106d38) */
/* WARNING: Removing unreachable block (ram,0x00106d4e) */
/* WARNING: Removing unreachable block (ram,0x00106d5a) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
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
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char cVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  void *__s_00;
  undefined8 *puVar40;
  void *pvVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  undefined8 uVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined1 (*local_a0) [16];
  long local_70;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_001075c4:
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    pvVar41 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar41;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar41 + uVar51)) && (pvVar41 < (void *)((long)pvVar2 + uVar38))
         ) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar38 * 4) = 0;
          *(undefined8 *)((long)pvVar41 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar45 != uVar38);
      }
      else {
        memset(pvVar2,0,uVar38);
        memset(pvVar41,0,uVar51);
      }
LAB_001074a4:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_001074b0:
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar50 = String::hash();
        uVar38 = CONCAT44(0,uVar36);
        lVar53 = *(long *)(this + 0x10);
        uVar37 = 1;
        if (uVar50 != 0) {
          uVar37 = uVar50;
        }
        uVar54 = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar37 * lVar48;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar38;
        lVar43 = SUB168(auVar15 * auVar31,8);
        uVar50 = *(uint *)(lVar53 + lVar43 * 4);
        uVar49 = SUB164(auVar15 * auVar31,8);
        if (uVar50 != 0) {
          do {
            if (uVar50 == uVar37) {
              cVar35 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar43 * 8) + 0x10),
                                          param_1);
              if (cVar35 != '\0') {
                local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                if (*(long *)(local_a0[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(local_a0[1] + 8),(CowData *)&local_70);
                  local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                }
                goto LAB_00107370;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar49 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar38;
            lVar43 = SUB168(auVar16 * auVar32,8);
            uVar50 = *(uint *)(lVar53 + lVar43 * 4);
            uVar49 = SUB164(auVar16 * auVar32,8);
          } while ((uVar50 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar50 * lVar48, auVar33._8_8_ = 0,
                  auVar33._0_8_ = uVar38, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar36 + uVar49) - SUB164(auVar17 * auVar33,8)) * lVar48,
                  auVar34._8_8_ = 0, auVar34._0_8_ = uVar38, uVar54 <= SUB164(auVar18 * auVar34,8)))
          ;
        }
        iVar42 = *(int *)(this + 0x2c);
      }
      uVar45 = (ulong)uVar55;
      goto LAB_00106f70;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_00106f70;
    if (*(int *)(this + 0x2c) != 0) goto LAB_001074b0;
LAB_00106f96:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_00107370;
    }
    uVar38 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar38 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    uVar45 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar38;
    pvVar41 = *(void **)(this + 8);
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar45);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar36 != 0) {
      uVar38 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar38 * 4);
        if (uVar55 != 0) {
          lVar48 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar55 * lVar53;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar51;
          lVar43 = SUB168(auVar3 * auVar19,8);
          puVar46 = (uint *)(lVar48 + lVar43 * 4);
          iVar42 = SUB164(auVar3 * auVar19,8);
          uVar50 = *puVar46;
          uVar39 = *(undefined8 *)((long)pvVar41 + uVar38 * 8);
          while (uVar50 != 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar50 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar51;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((iVar42 + uVar37) - SUB164(auVar4 * auVar20,8)) * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar51;
            uVar54 = SUB164(auVar5 * auVar21,8);
            uVar47 = uVar39;
            if (uVar54 < uVar49) {
              *puVar46 = uVar55;
              puVar40 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar47 = *puVar40;
              *puVar40 = uVar39;
              uVar55 = uVar50;
              uVar49 = uVar54;
            }
            uVar49 = uVar49 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar42 + 1) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar51;
            lVar43 = SUB168(auVar6 * auVar22,8);
            puVar46 = (uint *)(lVar48 + lVar43 * 4);
            iVar42 = SUB164(auVar6 * auVar22,8);
            uVar39 = uVar47;
            uVar50 = *puVar46;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar39;
          *puVar46 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar38 = uVar38 + 1;
      } while (uVar36 != uVar38);
      Memory::free_static(pvVar41,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar38 = CONCAT44(0,uVar55);
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar36 = 1;
      if (uVar37 != 0) {
        uVar36 = uVar37;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar43 = SUB168(auVar11 * auVar27,8);
      uVar37 = *(uint *)(lVar53 + lVar43 * 4);
      uVar50 = SUB164(auVar11 * auVar27,8);
      if (uVar37 == 0) {
        lVar52 = *(long *)(this + 8);
      }
      else {
        lVar52 = *(long *)(this + 8);
        uVar49 = 0;
        do {
          if (uVar36 == uVar37) {
            cVar35 = String::operator==((String *)(*(long *)(lVar52 + lVar43 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
              goto LAB_00107370;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar52 = *(long *)(this + 8);
          }
          uVar49 = uVar49 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar50 + 1) * lVar48;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar38;
          lVar43 = SUB168(auVar12 * auVar28,8);
          uVar37 = *(uint *)(lVar53 + lVar43 * 4);
          uVar50 = SUB164(auVar12 * auVar28,8);
        } while ((uVar37 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar37 * lVar48, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar38, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar50 + uVar55) - SUB164(auVar13 * auVar29,8)) * lVar48,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar38, uVar49 <= SUB164(auVar14 * auVar30,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar52 == 0) goto LAB_001075c4;
      goto LAB_001074a4;
    }
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    iVar42 = 0;
LAB_00106f70:
    if ((float)uVar45 * __LC14 < (float)(iVar42 + 1)) goto LAB_00106f96;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_00107675:
    lVar48 = 0;
    *(undefined8 *)(local_a0[1] + 8) = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_0010723a;
LAB_00107691:
    *(undefined1 (**) [16])(this + 0x18) = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar48 = local_58[0];
    uVar39 = local_68._0_8_;
    uVar47 = local_68._8_8_;
    local_58[1] = 0;
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *(undefined8 *)*local_a0 = uVar39;
    *(undefined8 *)(*local_a0 + 8) = uVar47;
    if (lVar48 == 0) goto LAB_00107675;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 1),(CowData *)local_58);
    *(undefined8 *)(local_a0[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58[0] + -0x10),false);
    }
    puVar40 = *(undefined8 **)(this + 0x20);
    lVar48 = local_70;
    if (puVar40 == (undefined8 *)0x0) goto LAB_00107691;
LAB_0010723a:
    *puVar40 = local_a0;
    *(undefined8 **)(*local_a0 + 8) = puVar40;
  }
  *(undefined1 (**) [16])(this + 0x20) = local_a0;
  uVar36 = String::hash();
  lVar53 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar36 != 0) {
    uVar55 = uVar36;
  }
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar36);
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar55 * lVar43;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar38;
  lVar44 = SUB168(auVar7 * auVar23,8);
  lVar52 = *(long *)(this + 8);
  puVar46 = (uint *)(lVar53 + lVar44 * 4);
  iVar42 = SUB164(auVar7 * auVar23,8);
  uVar37 = *puVar46;
  pauVar57 = local_a0;
  if (uVar37 != 0) {
    uVar50 = 0;
    pauVar56 = local_a0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar37 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar42) - SUB164(auVar8 * auVar24,8)) * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      uVar49 = SUB164(auVar9 * auVar25,8);
      pauVar57 = pauVar56;
      if (uVar49 < uVar50) {
        *puVar46 = uVar55;
        puVar40 = (undefined8 *)(lVar52 + lVar44 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar40;
        *puVar40 = pauVar56;
        uVar50 = uVar49;
        uVar55 = uVar37;
      }
      uVar50 = uVar50 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar42 + 1) * lVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      lVar44 = SUB168(auVar10 * auVar26,8);
      puVar46 = (uint *)(lVar53 + lVar44 * 4);
      iVar42 = SUB164(auVar10 * auVar26,8);
      uVar37 = *puVar46;
      pauVar56 = pauVar57;
    } while (uVar37 != 0);
  }
  *(undefined1 (**) [16])(lVar52 + lVar44 * 8) = pauVar57;
  *puVar46 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar48 != 0) {
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_00107370:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00107ea0) */
/* WARNING: Removing unreachable block (ram,0x00107fd0) */
/* WARNING: Removing unreachable block (ram,0x00108148) */
/* WARNING: Removing unreachable block (ram,0x00107fdc) */
/* WARNING: Removing unreachable block (ram,0x00107fe6) */
/* WARNING: Removing unreachable block (ram,0x0010812a) */
/* WARNING: Removing unreachable block (ram,0x00107ff2) */
/* WARNING: Removing unreachable block (ram,0x00107ffc) */
/* WARNING: Removing unreachable block (ram,0x0010810c) */
/* WARNING: Removing unreachable block (ram,0x00108008) */
/* WARNING: Removing unreachable block (ram,0x00108012) */
/* WARNING: Removing unreachable block (ram,0x001080ee) */
/* WARNING: Removing unreachable block (ram,0x0010801e) */
/* WARNING: Removing unreachable block (ram,0x00108028) */
/* WARNING: Removing unreachable block (ram,0x001080d0) */
/* WARNING: Removing unreachable block (ram,0x00108034) */
/* WARNING: Removing unreachable block (ram,0x0010803e) */
/* WARNING: Removing unreachable block (ram,0x001080b2) */
/* WARNING: Removing unreachable block (ram,0x00108046) */
/* WARNING: Removing unreachable block (ram,0x00108050) */
/* WARNING: Removing unreachable block (ram,0x00108097) */
/* WARNING: Removing unreachable block (ram,0x00108058) */
/* WARNING: Removing unreachable block (ram,0x0010806d) */
/* WARNING: Removing unreachable block (ram,0x00108079) */
/* String vformat<unsigned int, unsigned int, unsigned int, String>(String const&, unsigned int
   const, unsigned int const, unsigned int const, String const) */

undefined8 *
vformat<unsigned_int,unsigned_int,unsigned_int,String>
          (undefined8 *param_1,bool *param_2,uint param_3,uint param_4,uint param_5,String *param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  iVar2 = 0;
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<SharedObject>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<SharedObject>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001085d0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_001085d0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001084a9:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001084a9;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00108626;
  }
  if (lVar10 == lVar7) {
LAB_0010854f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00108626:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010853a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010854f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010853a:
  puVar9[-1] = param_1;
  return 0;
}



/* Vector<String>::append_array(Vector<String>) */

void __thiscall Vector<String>::append_array(Vector<String> *this,long param_2)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar6 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar6;
    }
    CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar6 = lVar6 << 3;
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar7 = 0;
LAB_00108708:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar3 + -8);
        if (lVar7 <= lVar5) goto LAB_00108708;
        pCVar1 = (CowData *)(lVar3 + lVar5 * 8);
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        if (*(long *)(*(long *)(this + 8) + lVar6) != *(long *)pCVar1) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(*(long *)(this + 8) + lVar6),pCVar1);
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar5 != lVar2);
    }
  }
  return;
}



/* CowData<SharedObject>::_unref() */

void __thiscall CowData<SharedObject>::_unref(CowData<SharedObject> *this)

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
          if (plVar6[3] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[3] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[3];
              plVar6[3] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)(plVar6 + 2));
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
          plVar6 = plVar6 + 4;
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



/* GDExtensionLibraryLoader::~GDExtensionLibraryLoader() */

void __thiscall GDExtensionLibraryLoader::~GDExtensionLibraryLoader(GDExtensionLibraryLoader *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00109840;
  pvVar5 = *(void **)(this + 0x1c0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1c8) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x1c0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00108989;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
LAB_00108989:
  CowData<SharedObject>::_unref((CowData<SharedObject> *)(this + 0x1b0));
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00109580;
  Object::~Object((Object *)this);
  return;
}



/* GDExtensionLibraryLoader::~GDExtensionLibraryLoader() */

void __thiscall GDExtensionLibraryLoader::~GDExtensionLibraryLoader(GDExtensionLibraryLoader *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00109840;
  pvVar5 = *(void **)(this + 0x1c0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1c8) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x1c0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00108bb9;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
LAB_00108bb9:
  CowData<SharedObject>::_unref((CowData<SharedObject> *)(this + 0x1b0));
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00109580;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* CowData<SharedObject>::_realloc(long) */

undefined8 __thiscall CowData<SharedObject>::_realloc(CowData<SharedObject> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<SharedObject>::resize<false>(long) */

undefined8 __thiscall CowData<SharedObject>::resize<false>(CowData<SharedObject> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar8 * 0x20;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_00109020:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x20 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_00109020;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (lVar8 = *(long *)this, lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar12) {
        if (lVar11 != lVar9) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      plVar7 = (long *)(lVar8 + uVar12 * 0x20);
      if (plVar7[3] != 0) {
        LOCK();
        plVar1 = (long *)(plVar7[3] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar7[3];
          plVar7[3] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      CowData<String>::_unref((CowData<String> *)(plVar7 + 2));
      if (*plVar7 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *plVar7;
          *plVar7 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_00109076;
  }
  if (lVar11 == lVar9) {
LAB_00108f93:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_00109076:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar8 = puVar6[-1];
    if (param_1 <= lVar8) goto LAB_00108eac;
  }
  else {
    if (lVar8 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00108f93;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar8 = 0;
  }
  puVar3 = puVar6 + lVar8 * 4;
  do {
    *puVar3 = 0;
    puVar4 = puVar3 + 4;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    puVar3 = puVar4;
  } while (puVar4 != puVar6 + param_1 * 4);
LAB_00108eac:
  puVar6[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00109161;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_00109161:
  if (*(long *)(param_1 + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001096e0;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00109291;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00109291:
  *(undefined ***)this = &PTR__initialize_classv_00109580;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001096e0;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00109381;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00109381:
  *(undefined ***)this = &PTR__initialize_classv_00109580;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDExtensionLibraryLoader::~GDExtensionLibraryLoader() */

void __thiscall GDExtensionLibraryLoader::~GDExtensionLibraryLoader(GDExtensionLibraryLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


