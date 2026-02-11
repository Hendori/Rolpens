
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



/* EditorFileServer::~EditorFileServer() */

void __thiscall EditorFileServer::~EditorFileServer(EditorFileServer *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00108608;
  if (this[0x18c] != (EditorFileServer)0x0) {
    TCPServer::stop();
    this[0x18c] = (EditorFileServer)0x0;
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x178) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x178);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        Object::~Object((Object *)this);
        return;
      }
    }
  }
  Object::~Object((Object *)this);
  return;
}



/* EditorFileServer::~EditorFileServer() */

void __thiscall EditorFileServer::~EditorFileServer(EditorFileServer *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00108608;
  if (this[0x18c] != (EditorFileServer)0x0) {
    TCPServer::stop();
    this[0x18c] = (EditorFileServer)0x0;
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x178) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x178);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  Object::~Object((Object *)this);
  operator_delete(this,400);
  return;
}



/* EditorFileServer::start() */

void __thiscall EditorFileServer::start(EditorFileServer *this)

{
  long *plVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x18c] != (EditorFileServer)0x0) {
    TCPServer::stop();
    this[0x18c] = (EditorFileServer)0x0;
  }
  local_60 = 0;
  local_58 = "filesystem/file_server/port";
  local_50 = 0x1b;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  iVar7 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x188) = iVar7;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
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
  local_60 = 0;
  local_58 = "filesystem/file_server/password";
  local_50 = 0x1f;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  Variant::operator_cast_to_String((Variant *)&local_58);
  pcVar6 = local_58;
  pcVar3 = *(char **)(this + 0x180);
  if (pcVar3 == local_58) {
    if (pcVar3 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(pcVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
        cVar2 = Variant::needs_deinit[local_48[0]];
        goto joined_r0x00100460;
      }
    }
  }
  else {
    if (pcVar3 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(pcVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar4 = *(long *)(this + 0x180);
        *(undefined8 *)(this + 0x180) = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    *(char **)(this + 0x180) = local_58;
  }
  cVar2 = Variant::needs_deinit[local_48[0]];
joined_r0x00100460:
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
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
  uVar5 = *(undefined8 *)(this + 0x178);
  local_58 = &_LC6;
  local_60 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  IPAddress::IPAddress((IPAddress *)local_48,(String *)&local_60);
  iVar7 = TCPServer::listen((ushort)uVar5,(IPAddress *)(ulong)*(ushort *)(this + 0x188));
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
  if (iVar7 == 0) {
    this[0x18c] = (EditorFileServer)0x1;
  }
  else {
    itos((long)&local_60);
    operator+((char *)&local_58,(String *)"EditorFileServer: Unable to listen on port ");
    _err_print_error("start","editor/debugger/editor_file_server.cpp",0x100,
                     "Condition \"err != OK\" is true.",(Variant *)&local_58,0);
    pcVar3 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileServer::is_active() const */

EditorFileServer __thiscall EditorFileServer::is_active(EditorFileServer *this)

{
  return this[0x18c];
}



/* EditorFileServer::stop() */

void __thiscall EditorFileServer::stop(EditorFileServer *this)

{
  if (this[0x18c] == (EditorFileServer)0x0) {
    return;
  }
  TCPServer::stop();
  this[0x18c] = (EditorFileServer)0x0;
  return;
}



/* EditorFileServer::EditorFileServer() */

void __thiscall EditorFileServer::EditorFileServer(EditorFileServer *this)

{
  char cVar1;
  TCPServer *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  Object::Object((Object *)this);
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00108608;
  this[0x18c] = (EditorFileServer)0x0;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  this_00 = (TCPServer *)operator_new(0x188,"");
  TCPServer::TCPServer(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)(this + 0x178);
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)(this + 0x178) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (TCPServer *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)(this + 0x178);
    pOVar2 = pOVar3;
    if (this_00 == (TCPServer *)pOVar3) goto LAB_001006fe;
    *(TCPServer **)(this + 0x178) = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)(this + 0x178) = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001006fe;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (TCPServer *)0x0) {
    return;
  }
LAB_001006fe:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* EditorFileServer::_scan_files_changed(EditorFileSystemDirectory*, Vector<String> const&,
   HashMap<String, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, unsigned long> > >&, HashMap<String, unsigned long,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, unsigned long> > >&) */

void __thiscall
EditorFileServer::_scan_files_changed
          (EditorFileServer *this,EditorFileSystemDirectory *param_1,Vector *param_2,
          HashMap *param_3,HashMap *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  RefCounted *this_00;
  EditorFileSystemDirectory *pEVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  RefCounted *pRVar11;
  RefCounted *pRVar12;
  String *this_01;
  long in_FS_OFFSET;
  bool bVar13;
  byte bVar14;
  int local_104;
  char *local_b0;
  long *local_a8;
  long local_a0;
  char *local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  bVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_104 = 0;
  do {
    iVar5 = EditorFileSystemDirectory::get_file_count();
    if (iVar5 <= local_104) {
      iVar9 = 0;
      iVar5 = EditorFileSystemDirectory::get_subdir_count();
      if (0 < iVar5) {
        do {
          iVar9 = iVar9 + 1;
          pEVar6 = (EditorFileSystemDirectory *)EditorFileSystemDirectory::get_subdir((int)param_1);
          _scan_files_changed(this,pEVar6,param_2,param_3,param_4);
          iVar5 = EditorFileSystemDirectory::get_subdir_count();
        } while (iVar9 < iVar5);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    EditorFileSystemDirectory::get_file_path((int)(String *)&local_b0);
    local_88 = ".import";
    local_90 = 0;
    local_80 = 7;
    String::parse_latin1((StrRange *)&local_90);
    String::operator+((String *)&local_88,(String *)&local_b0);
    cVar4 = FileAccess::exists((String *)&local_88);
    pcVar3 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar8 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    if (cVar4 == '\0') {
      local_90 = EditorFileSystemDirectory::get_file_modified_time((int)param_1);
      local_88 = (char *)0x0;
      plVar1 = (long *)(local_b0 + -0x10);
      if (local_b0 != (char *)0x0) {
        do {
          lVar8 = *plVar1;
          if (lVar8 == 0) goto LAB_00101246;
          LOCK();
          lVar7 = *plVar1;
          bVar13 = lVar8 == lVar7;
          if (bVar13) {
            *plVar1 = lVar8 + 1;
            lVar7 = lVar8;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar7 != -1) {
          local_88 = local_b0;
        }
      }
LAB_00101246:
      _add_file((String *)&local_88,(StrRange *)&local_90,param_3,param_4);
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
    }
    else {
      pRVar12 = (RefCounted *)0x0;
      this_00 = (RefCounted *)operator_new(0x1b0,"");
      pRVar11 = this_00;
      for (lVar8 = 0x36; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined8 *)pRVar11 = 0;
        pRVar11 = pRVar11 + (ulong)bVar14 * -0x10 + 8;
      }
      RefCounted::RefCounted(this_00);
      *(undefined ***)this_00 = &PTR__initialize_classv_001084a8;
      uVar2 = _LC25;
      *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
      *(undefined8 *)(this_00 + 0x1a8) = uVar2;
      *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
      postinitialize_handler((Object *)this_00);
      cVar4 = RefCounted::init_ref();
      if (cVar4 != '\0') {
        cVar4 = RefCounted::reference();
        if (cVar4 != '\0') {
          pRVar12 = this_00;
        }
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)this_00), cVar4 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
      }
      local_90 = 0;
      local_88 = ".import";
      local_80 = 7;
      String::parse_latin1((StrRange *)&local_90);
      String::operator+((String *)&local_88,(String *)&local_b0);
      iVar5 = ConfigFile::load((String *)pRVar12);
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar8 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (iVar5 == 0) {
        local_90 = 0;
        local_88 = ".import";
        local_80 = 7;
        String::parse_latin1((StrRange *)&local_90);
        String::operator+((String *)&local_88,(String *)&local_b0);
        local_98 = (char *)FileAccess::get_modified_time((String *)&local_88);
        pcVar3 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar8 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        local_90 = 0;
        local_88 = ".import";
        local_80 = 7;
        String::parse_latin1((StrRange *)&local_90);
        String::operator+((String *)&local_88,(String *)&local_b0);
        _add_file((String *)&local_88,(Variant *)&local_98,param_3,param_4);
        pcVar3 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar8 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        local_90 = 0;
        local_88 = "remap";
        local_80 = 5;
        String::parse_latin1((StrRange *)&local_90);
        cVar4 = ConfigFile::has_section((String *)pRVar12);
        lVar8 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        if (cVar4 == '\0') goto LAB_001010ce;
        local_88 = "remap";
        local_a8 = (long *)0x0;
        local_90 = 0;
        local_80 = 5;
        String::parse_latin1((StrRange *)&local_90);
        ConfigFile::get_section_keys((String *)pRVar12,(List *)&local_90);
        lVar8 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        if ((local_a8 != (long *)0x0) && (this_01 = (String *)*local_a8, this_01 != (String *)0x0))
        {
LAB_0010156d:
          cVar4 = String::operator==(this_01,"path");
          if (cVar4 == '\0') {
            cVar4 = String::begins_with((char *)this_01);
            if (cVar4 == '\0') goto LAB_00101560;
            String::get_slice((char *)&local_a0,(int)this_01);
            lVar8 = *(long *)(param_2 + 8);
            if ((lVar8 != 0) && (lVar7 = *(long *)(lVar8 + -8), lVar7 != 0)) {
              lVar10 = 0;
              while (lVar10 < lVar7) {
                cVar4 = String::operator==((String *)(lVar8 + lVar10 * 8),(String *)&local_a0);
                if (cVar4 != '\0') {
                  local_88 = "remap";
                  local_70 = (undefined1  [16])0x0;
                  local_78 = 0;
                  local_90 = 0;
                  local_80 = 5;
                  String::parse_latin1((StrRange *)&local_90);
                  ConfigFile::get_value((String *)local_58,(String *)pRVar12,(Variant *)&local_90);
                  Variant::operator_cast_to_String((Variant *)&local_98);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar8 = local_90;
                  if (local_90 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_90 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_90 = 0;
                      Memory::free_static((void *)(lVar8 + -0x10),false);
                    }
                  }
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                    Variant::_clear_internal();
                  }
                  local_90 = FileAccess::get_modified_time((String *)&local_98);
                  local_88 = (char *)0x0;
                  plVar1 = (long *)(local_98 + -0x10);
                  if (local_98 == (char *)0x0) goto LAB_001017e8;
                  goto LAB_001017c2;
                }
                lVar8 = *(long *)(param_2 + 8);
                lVar10 = lVar10 + 1;
                if (lVar8 == 0) break;
                lVar7 = *(long *)(lVar8 + -8);
              }
            }
            goto LAB_001015f2;
          }
          local_88 = "remap";
          local_70 = (undefined1  [16])0x0;
          local_78 = 0;
          local_90 = 0;
          local_80 = 5;
          String::parse_latin1((StrRange *)&local_90);
          ConfigFile::get_value((String *)local_58,(String *)pRVar12,(Variant *)&local_90);
          Variant::operator_cast_to_String((Variant *)&local_98);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = local_90;
          if (local_90 != 0) {
            LOCK();
            plVar1 = (long *)(local_90 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90 = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          local_90 = FileAccess::get_modified_time((String *)&local_98);
          local_88 = (char *)0x0;
          plVar1 = (long *)(local_98 + -0x10);
          if (local_98 != (char *)0x0) {
            do {
              lVar8 = *plVar1;
              if (lVar8 == 0) goto LAB_001014e8;
              LOCK();
              lVar7 = *plVar1;
              bVar13 = lVar8 == lVar7;
              if (bVar13) {
                *plVar1 = lVar8 + 1;
                lVar7 = lVar8;
              }
              UNLOCK();
            } while (!bVar13);
            if (lVar7 != -1) {
              local_88 = local_98;
            }
          }
LAB_001014e8:
          _add_file((String *)&local_88,(StrRange *)&local_90,param_3,param_4);
          pcVar3 = local_88;
          if (local_88 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
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
          goto LAB_00101560;
        }
LAB_00101647:
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_a8);
        cVar4 = RefCounted::unreference();
      }
      else {
        _err_print_error("_scan_files_changed","editor/debugger/editor_file_server.cpp",0x3e,
                         "Condition \"err != OK\" is true. Continuing.",0,0);
LAB_001010ce:
        cVar4 = RefCounted::unreference();
      }
      if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar12), cVar4 != '\0')) {
        (**(code **)(*(long *)pRVar12 + 0x140))(pRVar12);
        Memory::free_static(pRVar12,false);
      }
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
    local_104 = local_104 + 1;
  } while( true );
  while( true ) {
    LOCK();
    lVar7 = *plVar1;
    bVar13 = lVar8 == lVar7;
    if (bVar13) {
      *plVar1 = lVar8 + 1;
      lVar7 = lVar8;
    }
    UNLOCK();
    if (bVar13) break;
LAB_001017c2:
    lVar8 = *plVar1;
    if (lVar8 == 0) goto LAB_001017e8;
  }
  if (lVar7 != -1) {
    local_88 = local_98;
  }
LAB_001017e8:
  _add_file((String *)&local_88,(StrRange *)&local_90,param_3,param_4);
  pcVar3 = local_88;
  if (local_88 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
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
LAB_001015f2:
  lVar8 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
      this_01 = *(String **)(this_01 + 8);
      goto joined_r0x0010162c;
    }
  }
LAB_00101560:
  this_01 = *(String **)(this_01 + 8);
joined_r0x0010162c:
  if (this_01 == (String *)0x0) goto LAB_00101647;
  goto LAB_0010156d;
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



/* EditorFileServer::poll() */

void __thiscall EditorFileServer::poll(EditorFileServer *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  void *pvVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  size_t sVar22;
  EditorFileSystemDirectory *pEVar23;
  void *pvVar24;
  int iVar25;
  undefined4 uVar26;
  char *pcVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  long lVar34;
  long in_FS_OFFSET;
  bool bVar35;
  StrRange *local_198;
  String *local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  char *local_148;
  long local_140;
  EditorProgress local_138 [16];
  Vector local_128 [8];
  long local_120;
  long local_118;
  long local_110;
  ulong local_108;
  void *local_100;
  undefined8 local_f8;
  void *local_f0;
  long local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  char *local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  int local_88 [7];
  char local_6c;
  char local_6b;
  char local_6a;
  char local_69;
  char local_68 [32];
  undefined1 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0x18c] == (EditorFileServer)0x0) ||
     (cVar16 = TCPServer::is_connection_available(), cVar16 == '\0')) goto LAB_00101a65;
  TCPServer::take_connection();
  if (local_170 == (String *)0x0) {
    _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x75,
                     "Condition \"tcp_peer.is_null()\" is true.",0,0);
  }
  else {
    local_108 = 0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_b0._8_8_;
    local_b0 = auVar12 << 0x40;
    local_b8 = "";
    String::parse_latin1((StrRange *)&local_108);
    local_118 = 0;
    local_b8 = "Updating assets on target device:";
    local_b0._0_8_ = 0x21;
    String::parse_latin1((StrRange *)&local_118);
    TTR((String *)&local_f8,(String *)&local_118);
    local_b8 = "updating_remote_file_system";
    local_e8 = 0;
    local_b0._0_8_ = 0x1b;
    String::parse_latin1((StrRange *)&local_e8);
    EditorProgress::EditorProgress
              (local_138,(String *)&local_e8,(String *)&local_f8,0x69,false,false);
    lVar29 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar28 = (long *)(local_e8 + -0x10);
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (*plVar28 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar29 + -0x10),false);
      }
    }
    pcVar27 = local_f8;
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar28 = (long *)(local_f8 + -0x10);
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (*plVar28 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar27 + -0x10,false);
      }
    }
    lVar29 = local_118;
    if (local_118 != 0) {
      LOCK();
      plVar28 = (long *)(local_118 + -0x10);
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (*plVar28 == 0) {
        local_118 = 0;
        Memory::free_static((void *)(lVar29 + -0x10),false);
      }
    }
    uVar31 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar28 = (long *)(local_108 - 0x10);
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (*plVar28 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(uVar31 - 0x10),false);
      }
    }
    local_e8 = 0;
    local_b8 = "";
    local_b0._0_8_ = 0;
    String::parse_latin1((StrRange *)&local_e8);
    local_b8 = "Syncing headers";
    local_f8 = (char *)0x0;
    local_b0._0_8_ = 0xf;
    String::parse_latin1((StrRange *)&local_f8);
    TTR((String *)&local_b8,(String *)&local_f8);
    iVar25 = (int)(String *)&local_b8;
    EditorProgress::step((String *)local_138,iVar25,false);
    pcVar27 = local_b8;
    if (local_b8 != (char *)0x0) {
      LOCK();
      plVar28 = (long *)(local_b8 + -0x10);
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (*plVar28 == 0) {
        local_b8 = (char *)0x0;
        Memory::free_static(pcVar27 + -0x10,false);
      }
    }
    pcVar27 = local_f8;
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar28 = (long *)(local_f8 + -0x10);
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (*plVar28 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar27 + -0x10,false);
      }
    }
    lVar29 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar28 = (long *)(local_e8 + -0x10);
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (*plVar28 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar29 + -0x10),false);
      }
    }
    cVar16 = is_print_verbose_enabled();
    if (cVar16 != '\0') {
      Variant::Variant((Variant *)local_88,"EFS: Connecting taken!");
      stringify_variants((Variant *)&local_b8);
      __print_line((String *)&local_b8);
      pcVar27 = local_b8;
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar28 = (long *)(local_b8 + -0x10);
        *plVar28 = *plVar28 + -1;
        UNLOCK();
        if (*plVar28 == 0) {
          local_b8 = (char *)0x0;
          Memory::free_static(pcVar27 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    iVar17 = (**(code **)(*(long *)local_170 + 0x160))(local_170,&local_6c,4);
    if (iVar17 == 0) {
      if (local_6c == 'G') {
        if (local_6b == 'R') {
          if (local_6a == 'F') {
            if (local_69 == 'S') {
              iVar17 = StreamPeer::get_u32();
              if (iVar17 == 1) {
                iVar17 = (**(code **)(*(long *)local_170 + 0x160))(local_170,local_68,0x20);
                local_48 = 0;
                if (iVar17 == 0) {
                  cVar16 = is_print_verbose_enabled();
                  if (cVar16 != '\0') {
                    local_f8 = (char *)0x0;
                    sVar22 = strlen(local_68);
                    local_b0._0_8_ = sVar22;
                    local_b8 = local_68;
                    String::parse_latin1((StrRange *)&local_f8);
                    operator+((char *)&local_e8,(String *)"EFS: Got password: ");
                    Variant::Variant((Variant *)local_88,(String *)&local_e8);
                    stringify_variants((Variant *)&local_b8);
                    __print_line((String *)&local_b8);
                    if (local_b8 != (char *)0x0) {
                      LOCK();
                      plVar28 = (long *)(local_b8 + -0x10);
                      *plVar28 = *plVar28 + -1;
                      pcVar27 = local_b8;
                      UNLOCK();
                      if (*plVar28 == 0) {
                        local_b8 = (char *)0x0;
                        Memory::free_static(pcVar27 + -0x10,false);
                      }
                    }
                    if (Variant::needs_deinit[local_88[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    lVar29 = local_e8;
                    if (local_e8 != 0) {
                      LOCK();
                      plVar28 = (long *)(local_e8 + -0x10);
                      *plVar28 = *plVar28 + -1;
                      UNLOCK();
                      if (*plVar28 == 0) {
                        local_e8 = 0;
                        Memory::free_static((void *)(lVar29 + -0x10),false);
                      }
                    }
                    pcVar27 = local_f8;
                    if (local_f8 != (char *)0x0) {
                      LOCK();
                      plVar28 = (long *)(local_f8 + -0x10);
                      *plVar28 = *plVar28 + -1;
                      UNLOCK();
                      if (*plVar28 == 0) {
                        local_f8 = (char *)0x0;
                        Memory::free_static(pcVar27 + -0x10,false);
                      }
                    }
                  }
                  cVar16 = String::operator!=((String *)(this + 0x180),local_68);
                  if (cVar16 == '\0') {
                    uVar18 = StreamPeer::get_u32();
                    cVar16 = is_print_verbose_enabled();
                    if (cVar16 != '\0') {
                      itos((long)&local_f8);
                      operator+((char *)&local_e8,(String *)"EFS: Getting tags: ");
                      Variant::Variant((Variant *)local_88,(String *)&local_e8);
                      stringify_variants((Variant *)&local_b8);
                      __print_line((String *)&local_b8);
                      pcVar27 = local_b8;
                      if (local_b8 != (char *)0x0) {
                        LOCK();
                        plVar28 = (long *)(local_b8 + -0x10);
                        *plVar28 = *plVar28 + -1;
                        UNLOCK();
                        if (*plVar28 == 0) {
                          local_b8 = (char *)0x0;
                          Memory::free_static(pcVar27 + -0x10,false);
                        }
                      }
                      if (Variant::needs_deinit[local_88[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      lVar29 = local_e8;
                      if (local_e8 != 0) {
                        LOCK();
                        plVar28 = (long *)(local_e8 + -0x10);
                        *plVar28 = *plVar28 + -1;
                        UNLOCK();
                        if (*plVar28 == 0) {
                          local_e8 = 0;
                          Memory::free_static((void *)(lVar29 + -0x10),false);
                        }
                      }
                      pcVar27 = local_f8;
                      if (local_f8 != (char *)0x0) {
                        LOCK();
                        plVar28 = (long *)(local_f8 + -0x10);
                        *plVar28 = *plVar28 + -1;
                        UNLOCK();
                        if (*plVar28 == 0) {
                          local_f8 = (char *)0x0;
                          Memory::free_static(pcVar27 + -0x10,false);
                        }
                      }
                    }
                    iVar17 = StreamPeerTCP::get_status();
                    if (iVar17 == 2) {
                      local_120 = 0;
                      if (uVar18 != 0) {
                        uVar31 = 0;
                        do {
                          StreamPeer::get_utf8_string((int)&local_148);
                          cVar16 = is_print_verbose_enabled();
                          if (cVar16 != '\0') {
                            local_108 = 0;
                            local_b8 = ": ";
                            local_b0._0_8_ = 2;
                            String::parse_latin1((StrRange *)&local_108);
                            itos((long)&local_140);
                            operator+((char *)&local_118,(String *)"EFS: tag #");
                            String::operator+((String *)&local_f8,(String *)&local_118);
                            String::operator+((String *)&local_e8,(String *)&local_f8);
                            Variant::Variant((Variant *)local_88,(String *)&local_e8);
                            stringify_variants((Variant *)&local_b8);
                            __print_line((String *)&local_b8);
                            pcVar27 = local_b8;
                            if (local_b8 != (char *)0x0) {
                              LOCK();
                              plVar28 = (long *)(local_b8 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_b8 = (char *)0x0;
                                Memory::free_static(pcVar27 + -0x10,false);
                              }
                            }
                            if (Variant::needs_deinit[local_88[0]] != '\0') {
                              Variant::_clear_internal();
                            }
                            lVar29 = local_e8;
                            if (local_e8 != 0) {
                              LOCK();
                              plVar28 = (long *)(local_e8 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_e8 = 0;
                                Memory::free_static((void *)(lVar29 + -0x10),false);
                              }
                            }
                            pcVar27 = local_f8;
                            if (local_f8 != (char *)0x0) {
                              LOCK();
                              plVar28 = (long *)(local_f8 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_f8 = (char *)0x0;
                                Memory::free_static(pcVar27 + -0x10,false);
                              }
                            }
                            lVar29 = local_118;
                            if (local_118 != 0) {
                              LOCK();
                              plVar28 = (long *)(local_118 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_118 = 0;
                                Memory::free_static((void *)(lVar29 + -0x10),false);
                              }
                            }
                            lVar29 = local_140;
                            if (local_140 != 0) {
                              LOCK();
                              plVar28 = (long *)(local_140 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_140 = 0;
                                Memory::free_static((void *)(lVar29 + -0x10),false);
                              }
                            }
                            uVar32 = local_108;
                            if (local_108 != 0) {
                              LOCK();
                              plVar28 = (long *)(local_108 - 0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_108 = 0;
                                Memory::free_static((void *)(uVar32 - 0x10),false);
                              }
                            }
                          }
                          iVar17 = StreamPeerTCP::get_status();
                          if (iVar17 != 2) {
                            _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x96,
                                             "Condition \"tcp_peer->get_status() != StreamPeerTCP::STATUS_CONNECTED\" is true."
                                             ,0,0);
                            pcVar27 = local_148;
                            if (local_148 != (char *)0x0) {
                              LOCK();
                              plVar28 = (long *)(local_148 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_148 = (char *)0x0;
                                Memory::free_static(pcVar27 + -0x10,false);
                              }
                            }
                            goto LAB_0010235c;
                          }
                          local_b8 = (char *)0x0;
                          pcVar27 = local_148;
                          if (local_148 != (char *)0x0) {
                            plVar28 = (long *)(local_148 + -0x10);
                            do {
                              lVar29 = *plVar28;
                              if (lVar29 == 0) goto LAB_001022f0;
                              LOCK();
                              lVar34 = *plVar28;
                              bVar35 = lVar29 == lVar34;
                              if (bVar35) {
                                *plVar28 = lVar29 + 1;
                                lVar34 = lVar29;
                              }
                              UNLOCK();
                            } while (!bVar35);
                            if (lVar34 == -1) {
LAB_001022f0:
                              pcVar27 = (char *)0x0;
                            }
                            else {
                              local_b8 = local_148;
                            }
                          }
                          if (local_120 == 0) {
                            lVar29 = 1;
                          }
                          else {
                            lVar29 = *(long *)(local_120 + -8) + 1;
                          }
                          iVar17 = CowData<String>::resize<false>
                                             ((CowData<String> *)&local_120,lVar29);
                          if (iVar17 == 0) {
                            if (local_120 == 0) {
                              lVar34 = -1;
                              lVar29 = 0;
                            }
                            else {
                              lVar29 = *(long *)(local_120 + -8);
                              lVar34 = lVar29 + -1;
                              if (-1 < lVar34) {
                                CowData<String>::_copy_on_write((CowData<String> *)&local_120);
                                this_00 = (CowData<char32_t> *)(local_120 + lVar34 * 8);
                                if (*(char **)this_00 != pcVar27) {
                                  CowData<char32_t>::_ref(this_00,(CowData *)&local_b8);
                                }
                                goto LAB_00101fd5;
                              }
                            }
                            _err_print_index_error
                                      ("set","./core/templates/cowdata.h",0xcf,lVar34,lVar29,
                                       "p_index","size()","",false,false);
                          }
                          else {
                            _err_print_error("push_back","./core/templates/vector.h",0x142,
                                             "Condition \"err\" is true. Returning: true",0,0);
                          }
LAB_00101fd5:
                          if (pcVar27 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(pcVar27 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              Memory::free_static(local_b8 + -0x10,false);
                            }
                          }
                          pcVar27 = local_148;
                          if (local_148 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_148 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_148 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          uVar31 = uVar31 + 1;
                        } while (uVar31 != uVar18);
                      }
                      iVar17 = StreamPeer::get_32();
                      local_e0 = (undefined1  [16])0x0;
                      local_d0 = (undefined1  [16])0x0;
                      local_c0 = _LC25;
                      if (iVar17 == 0) {
LAB_00102600:
                        local_198 = (StrRange *)&local_140;
                        local_f8 = (char *)0x0;
                        local_b8 = "";
                        local_b0._0_8_ = 0;
                        String::parse_latin1((StrRange *)&local_f8);
                        local_b8 = "Scanning for local changes";
                        local_108 = 0;
                        local_b0._0_8_ = 0x1a;
                        String::parse_latin1((StrRange *)&local_108);
                        TTR((String *)&local_b8,(String *)&local_108);
                        EditorProgress::step((String *)local_138,iVar25,true);
                        pcVar27 = local_b8;
                        if (local_b8 != (char *)0x0) {
                          LOCK();
                          plVar28 = (long *)(local_b8 + -0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_b8 = (char *)0x0;
                            Memory::free_static(pcVar27 + -0x10,false);
                          }
                        }
                        uVar31 = local_108;
                        if (local_108 != 0) {
                          LOCK();
                          plVar28 = (long *)(local_108 + -0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_108 = 0;
                            Memory::free_static((void *)(uVar31 + -0x10),false);
                          }
                        }
                        lVar29 = (long)local_f8;
                        if (local_f8 != (char *)0x0) {
                          LOCK();
                          plVar28 = (long *)((long)local_f8 + -0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_f8 = (char *)0x0;
                            Memory::free_static((void *)(lVar29 + -0x10),false);
                          }
                        }
                        cVar16 = is_print_verbose_enabled();
                        if (cVar16 != '\0') {
                          Variant::Variant((Variant *)local_88,"EFS: Scanning changes:");
                          stringify_variants((Variant *)&local_b8);
                          __print_line((String *)&local_b8);
                          pcVar27 = local_b8;
                          if (local_b8 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_b8 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_b8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          if (Variant::needs_deinit[local_88[0]] != '\0') {
                            Variant::_clear_internal();
                          }
                        }
                        local_b0 = (undefined1  [16])0x0;
                        local_a0 = (undefined1  [16])0x0;
                        local_90 = _LC25;
                        pEVar23 = (EditorFileSystemDirectory *)EditorFileSystem::get_filesystem();
                        _scan_files_changed(this,pEVar23,local_128,(HashMap *)&local_b8,
                                            (HashMap *)&local_e8);
                        EditorExportPlatform::get_forced_export_files();
                        for (lVar29 = 0; (local_110 != 0 && (lVar29 < *(long *)(local_110 + -8)));
                            lVar29 = lVar29 + 1) {
                          _add_custom_file((String *)(local_110 + lVar29 * 8),(HashMap *)&local_b8,
                                           (HashMap *)&local_e8);
                        }
                        local_108 = 0;
                        local_f8 = "res://project.godot";
                        local_f0 = (void *)0x13;
                        String::parse_latin1((StrRange *)&local_108);
                        _add_custom_file((StrRange *)&local_108,(HashMap *)&local_b8,
                                         (HashMap *)&local_e8);
                        uVar31 = local_108;
                        if (local_108 != 0) {
                          LOCK();
                          plVar28 = (long *)(local_108 + -0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_108 = 0;
                            Memory::free_static((void *)(uVar31 + -0x10),false);
                          }
                        }
                        uVar31 = local_90;
                        for (puVar2 = (undefined8 *)local_d0._0_8_; local_90 = uVar31,
                            puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
                          local_f8 = (char *)0x0;
                          plVar28 = (long *)(puVar2[2] + -0x10);
                          if (puVar2[2] != 0) {
                            do {
                              lVar29 = *plVar28;
                              if (lVar29 == 0) goto LAB_0010289e;
                              LOCK();
                              lVar34 = *plVar28;
                              bVar35 = lVar29 == lVar34;
                              if (bVar35) {
                                *plVar28 = lVar29 + 1;
                                lVar34 = lVar29;
                              }
                              UNLOCK();
                            } while (!bVar35);
                            if (lVar34 != -1) {
                              local_f8 = (char *)puVar2[2];
                            }
                          }
LAB_0010289e:
                          local_f0 = (void *)puVar2[3];
                          if ((local_b0._0_8_ != 0) &&
                             (local_90._4_4_ = (uint)(uVar31 >> 0x20), bVar35 = local_90._4_4_ != 0,
                             bVar35)) {
                            uVar18 = *(uint *)(hash_table_size_primes + (uVar31 & 0xffffffff) * 4);
                            uVar32 = CONCAT44(0,uVar18);
                            lVar29 = *(long *)(hash_table_size_primes_inv +
                                              (uVar31 & 0xffffffff) * 8);
                            uVar19 = String::hash();
                            uVar21 = 1;
                            if (uVar19 != 0) {
                              uVar21 = uVar19;
                            }
                            auVar3._8_8_ = 0;
                            auVar3._0_8_ = (ulong)uVar21 * lVar29;
                            auVar7._8_8_ = 0;
                            auVar7._0_8_ = uVar32;
                            lVar34 = SUB168(auVar3 * auVar7,8);
                            uVar19 = *(uint *)(local_b0._8_8_ + lVar34 * 4);
                            iVar25 = SUB164(auVar3 * auVar7,8);
                            if (uVar19 != 0) {
                              uVar33 = 0;
                              lVar30 = local_b0._8_8_;
                              do {
                                if (uVar21 == uVar19) {
                                  cVar16 = String::operator==((String *)
                                                              (*(long *)(local_b0._0_8_ + lVar34 * 8
                                                                        ) + 0x10),
                                                              (String *)&local_f8);
                                  if (cVar16 != '\0') goto LAB_001029dc;
                                  lVar30 = local_b0._8_8_;
                                }
                                uVar33 = uVar33 + 1;
                                auVar4._8_8_ = 0;
                                auVar4._0_8_ = (ulong)(iVar25 + 1) * lVar29;
                                auVar8._8_8_ = 0;
                                auVar8._0_8_ = uVar32;
                                lVar34 = SUB168(auVar4 * auVar8,8);
                                uVar19 = *(uint *)(lVar30 + lVar34 * 4);
                                iVar25 = SUB164(auVar4 * auVar8,8);
                              } while ((uVar19 != 0) &&
                                      (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar19 * lVar29,
                                      auVar9._8_8_ = 0, auVar9._0_8_ = uVar32, auVar6._8_8_ = 0,
                                      auVar6._0_8_ = (ulong)((uVar18 + iVar25) -
                                                            SUB164(auVar5 * auVar9,8)) * lVar29,
                                      auVar10._8_8_ = 0, auVar10._0_8_ = uVar32,
                                      uVar33 <= SUB164(auVar6 * auVar10,8)));
                            }
                          }
                          local_140 = 0;
                          HashMap<String,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_long>>>
                          ::insert((StrRange *)&local_108,(ulong *)&local_b8,
                                   SUB81((String *)&local_f8,0));
LAB_001029dc:
                          pcVar27 = local_f8;
                          if (local_f8 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_f8 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_f8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          uVar31 = local_90;
                        }
                        StreamPeer::put_32((int)local_170);
                        cVar16 = is_print_verbose_enabled();
                        if (cVar16 != '\0') {
                          Variant::Variant((Variant *)local_88,"EFS: Sending list of changed files."
                                          );
                          stringify_variants((Variant *)&local_f8);
                          __print_line((String *)&local_f8);
                          pcVar27 = local_f8;
                          if (local_f8 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_f8 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_f8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          if (Variant::needs_deinit[local_88[0]] != '\0') {
                            Variant::_clear_internal();
                          }
                        }
                        local_108 = 0;
                        local_f8 = &_LC11;
                        local_f0 = (void *)0x0;
                        String::parse_latin1((StrRange *)&local_108);
                        local_f8 = "Sending list of changed files:";
                        local_140 = 0;
                        local_f0 = (void *)0x1e;
                        String::parse_latin1(local_198);
                        TTR((String *)&local_f8,(String *)local_198);
                        iVar25 = (int)(String *)&local_f8;
                        EditorProgress::step((String *)local_138,iVar25,true);
                        pcVar27 = local_f8;
                        if (local_f8 != (char *)0x0) {
                          LOCK();
                          plVar28 = (long *)(local_f8 + -0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_f8 = (char *)0x0;
                            Memory::free_static(pcVar27 + -0x10,false);
                          }
                        }
                        lVar29 = local_140;
                        if (local_140 != 0) {
                          LOCK();
                          plVar28 = (long *)(local_140 + -0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_140 = 0;
                            Memory::free_static((void *)(lVar29 + -0x10),false);
                          }
                        }
                        uVar31 = local_108;
                        if (local_108 != 0) {
                          LOCK();
                          plVar28 = (long *)(local_108 - 0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_108 = 0;
                            Memory::free_static((void *)(uVar31 - 0x10),false);
                          }
                        }
                        for (puVar2 = (undefined8 *)local_a0._0_8_; puVar2 != (undefined8 *)0x0;
                            puVar2 = (undefined8 *)*puVar2) {
                          local_f8 = (char *)0x0;
                          plVar28 = (long *)(puVar2[2] + -0x10);
                          if (puVar2[2] != 0) {
                            do {
                              lVar29 = *plVar28;
                              if (lVar29 == 0) goto LAB_00102bbe;
                              LOCK();
                              lVar34 = *plVar28;
                              bVar35 = lVar29 == lVar34;
                              if (bVar35) {
                                *plVar28 = lVar29 + 1;
                                lVar34 = lVar29;
                              }
                              UNLOCK();
                            } while (!bVar35);
                            if (lVar34 != -1) {
                              local_f8 = (char *)puVar2[2];
                            }
                          }
LAB_00102bbe:
                          local_f0 = (void *)puVar2[3];
                          StreamPeer::put_utf8_string(local_170);
                          StreamPeer::put_64((long)local_170);
                          pcVar27 = local_f8;
                          if (local_f8 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_f8 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_f8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                        }
                        cVar16 = is_print_verbose_enabled();
                        if (cVar16 != '\0') {
                          local_f8 = " files.";
                          local_140 = 0;
                          local_f0 = (void *)0x7;
                          String::parse_latin1(local_198);
                          itos((long)&local_150);
                          operator+((char *)&local_148,(String *)"EFS: Sending ");
                          String::operator+((String *)&local_108,(String *)&local_148);
                          Variant::Variant((Variant *)local_88,(String *)&local_108);
                          stringify_variants((Variant *)&local_f8);
                          __print_line((String *)&local_f8);
                          pcVar27 = local_f8;
                          if (local_f8 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_f8 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_f8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          if (Variant::needs_deinit[local_88[0]] != '\0') {
                            Variant::_clear_internal();
                          }
                          uVar31 = local_108;
                          if (local_108 != 0) {
                            LOCK();
                            plVar28 = (long *)(local_108 - 0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_108 = 0;
                              Memory::free_static((void *)(uVar31 - 0x10),false);
                            }
                          }
                          pcVar27 = local_148;
                          if (local_148 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_148 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_148 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          lVar29 = local_150;
                          if (local_150 != 0) {
                            LOCK();
                            plVar28 = (long *)(local_150 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_150 = 0;
                              Memory::free_static((void *)(lVar29 + -0x10),false);
                            }
                          }
                          lVar29 = local_140;
                          if (local_140 != 0) {
                            LOCK();
                            plVar28 = (long *)(local_140 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_140 = 0;
                              Memory::free_static((void *)(lVar29 + -0x10),false);
                            }
                          }
                        }
                        if ((long *)local_a0._0_8_ != (long *)0x0) {
                          uVar18 = 0;
                          plVar28 = (long *)local_a0._0_8_;
LAB_00102ccc:
                          local_108 = 0;
                          plVar1 = (long *)(plVar28[2] + -0x10);
                          if (plVar28[2] != 0) {
                            do {
                              lVar29 = *plVar1;
                              if (lVar29 == 0) goto LAB_00102d0a;
                              LOCK();
                              lVar34 = *plVar1;
                              bVar35 = lVar29 == lVar34;
                              if (bVar35) {
                                *plVar1 = lVar29 + 1;
                                lVar34 = lVar29;
                              }
                              UNLOCK();
                            } while (!bVar35);
                            if (lVar34 != -1) {
                              local_108 = plVar28[2];
                            }
                          }
LAB_00102d0a:
                          local_100 = (void *)plVar28[3];
                          uVar21 = uVar18 / local_90._4_4_;
                          String::get_file();
                          local_f8 = &_LC85;
                          local_150 = 0;
                          local_f0 = (void *)0x1;
                          String::parse_latin1((StrRange *)&local_150);
                          local_f8 = &_LC11;
                          local_160 = 0;
                          local_f0 = (void *)0x0;
                          String::parse_latin1((StrRange *)&local_160);
                          local_f8 = "Sending file:";
                          local_168 = 0;
                          local_f0 = (void *)0xd;
                          String::parse_latin1((StrRange *)&local_168);
                          TTR((String *)&local_158,(String *)&local_168);
                          String::operator+((String *)&local_148,(String *)&local_158);
                          String::operator+((String *)&local_f8,(String *)&local_148);
                          EditorProgress::step
                                    ((String *)local_138,iVar25,(bool)((char)uVar21 + '\x05'));
                          pcVar27 = local_f8;
                          if (local_f8 != (char *)0x0) {
                            LOCK();
                            plVar1 = (long *)(local_f8 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_f8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          pcVar27 = local_148;
                          if (local_148 != (char *)0x0) {
                            LOCK();
                            plVar1 = (long *)(local_148 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_148 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          lVar29 = local_158;
                          if (local_158 != 0) {
                            LOCK();
                            plVar1 = (long *)(local_158 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_158 = 0;
                              Memory::free_static((void *)(lVar29 + -0x10),false);
                            }
                          }
                          lVar29 = local_168;
                          if (local_168 != 0) {
                            LOCK();
                            plVar1 = (long *)(local_168 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_168 = 0;
                              Memory::free_static((void *)(lVar29 + -0x10),false);
                            }
                          }
                          lVar29 = local_160;
                          if (local_160 != 0) {
                            LOCK();
                            plVar1 = (long *)(local_160 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_160 = 0;
                              Memory::free_static((void *)(lVar29 + -0x10),false);
                            }
                          }
                          lVar29 = local_150;
                          if (local_150 != 0) {
                            LOCK();
                            plVar1 = (long *)(local_150 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_150 = 0;
                              Memory::free_static((void *)(lVar29 + -0x10),false);
                            }
                          }
                          lVar29 = local_140;
                          if (local_140 != 0) {
                            LOCK();
                            plVar1 = (long *)(local_140 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_140 = 0;
                              Memory::free_static((void *)(lVar29 + -0x10),false);
                            }
                          }
                          if (local_100 == (void *)0x0) goto LAB_00102c88;
                          operator+((char *)&local_f8,(String *)"res://");
                          cVar16 = FileAccess::exists((String *)&local_f8);
                          pcVar27 = local_f8;
                          if (cVar16 == '\0') {
                            if (local_f8 != (char *)0x0) {
                              LOCK();
                              plVar1 = (long *)(local_f8 + -0x10);
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                local_f8 = (char *)0x0;
                                Memory::free_static(pcVar27 + -0x10,false);
                              }
                            }
                            goto LAB_00102c88;
                          }
                          if (local_f8 != (char *)0x0) {
                            LOCK();
                            plVar1 = (long *)(local_f8 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_f8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          operator+((char *)local_198,(String *)"res://");
                          if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                            FileAccess::last_file_open_error();
                          }
                          FileAccess::get_file_as_bytes((String *)&local_f8,local_198);
                          lVar29 = local_140;
                          if (local_140 != 0) {
                            LOCK();
                            plVar1 = (long *)(local_140 + -0x10);
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (*plVar1 == 0) {
                              local_140 = 0;
                              Memory::free_static((void *)(lVar29 + -0x10),false);
                            }
                          }
                          StreamPeer::put_64((long)local_170);
                          if (local_f0 == (void *)0x0) {
                            uVar26 = 0;
                          }
                          else {
                            uVar26 = *(undefined4 *)((long)local_f0 + -8);
                          }
                          (**(code **)(*(long *)local_170 + 0x150))(local_170,local_f0,uVar26);
                          iVar17 = StreamPeerTCP::get_status();
                          pvVar24 = local_f0;
                          if (iVar17 == 2) {
                            if (local_f0 != (void *)0x0) {
                              LOCK();
                              plVar1 = (long *)((long)local_f0 + -0x10);
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                local_f0 = (void *)0x0;
                                Memory::free_static((void *)((long)pvVar24 + -0x10),false);
                              }
                            }
                            goto LAB_00102c88;
                          }
                          _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0xf1,
                                           "Condition \"tcp_peer->get_status() != StreamPeerTCP::STATUS_CONNECTED\" is true."
                                           ,0,0);
                          pvVar24 = local_f0;
                          if (local_f0 != (void *)0x0) {
                            LOCK();
                            plVar28 = (long *)((long)local_f0 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_f0 = (void *)0x0;
                              Memory::free_static((void *)((long)pvVar24 + -0x10),false);
                            }
                          }
                          uVar31 = local_108;
                          if (local_108 != 0) {
                            LOCK();
                            plVar28 = (long *)(local_108 - 0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_108 = 0;
                              Memory::free_static((void *)(uVar31 - 0x10),false);
                            }
                          }
                          CowData<String>::_unref((CowData<String> *)&local_110);
                          if ((void *)local_b0._0_8_ == (void *)0x0) goto LAB_00103be7;
                          pvVar24 = (void *)local_b0._0_8_;
                          if (local_90._4_4_ == 0) goto LAB_00104235;
                          uVar18 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
                          if (uVar18 == 0) {
                            local_90 = local_90 & 0xffffffff;
                            local_a0 = (undefined1  [16])0x0;
                            goto LAB_00104235;
                          }
                          lVar29 = 0;
                          do {
                            if (*(int *)(local_b0._8_8_ + lVar29) != 0) {
                              pvVar24 = *(void **)((long)pvVar24 + lVar29 * 2);
                              *(int *)(local_b0._8_8_ + lVar29) = 0;
                              if (*(long *)((long)pvVar24 + 0x10) != 0) {
                                LOCK();
                                plVar28 = (long *)(*(long *)((long)pvVar24 + 0x10) + -0x10);
                                *plVar28 = *plVar28 + -1;
                                UNLOCK();
                                if (*plVar28 == 0) {
                                  lVar34 = *(long *)((long)pvVar24 + 0x10);
                                  *(undefined8 *)((long)pvVar24 + 0x10) = 0;
                                  Memory::free_static((void *)(lVar34 + -0x10),false);
                                }
                              }
                              Memory::free_static(pvVar24,false);
                              *(undefined8 *)(local_b0._0_8_ + lVar29 * 2) = 0;
                              pvVar24 = (void *)local_b0._0_8_;
                            }
                            lVar29 = lVar29 + 4;
                          } while ((ulong)uVar18 * 4 - lVar29 != 0);
                          local_90 = local_90 & 0xffffffff;
                          local_a0 = (undefined1  [16])0x0;
                          if (pvVar24 != (void *)0x0) {
LAB_00104235:
                            Memory::free_static(pvVar24,false);
                            Memory::free_static((void *)local_b0._8_8_,false);
                          }
                          goto LAB_00103be7;
                        }
LAB_00103d14:
                        (**(code **)(*(long *)local_170 + 0x150))(local_170,&_LC84,4);
                        cVar16 = is_print_verbose_enabled();
                        if (cVar16 != '\0') {
                          Variant::Variant((Variant *)local_88,"EFS: Done.");
                          stringify_variants((Variant *)&local_f8);
                          __print_line((String *)&local_f8);
                          pcVar27 = local_f8;
                          if (local_f8 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_f8 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_f8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          if (Variant::needs_deinit[local_88[0]] != '\0') {
                            Variant::_clear_internal();
                          }
                        }
                        CowData<String>::_unref((CowData<String> *)&local_110);
                        if ((void *)local_b0._0_8_ != (void *)0x0) {
                          pvVar24 = (void *)local_b0._0_8_;
                          if (local_90._4_4_ != 0) {
                            uVar18 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4)
                            ;
                            if (uVar18 == 0) {
                              local_90 = local_90 & 0xffffffff;
                              local_a0 = (undefined1  [16])0x0;
                            }
                            else {
                              lVar29 = 0;
                              do {
                                if (*(int *)(local_b0._8_8_ + lVar29) != 0) {
                                  pvVar24 = *(void **)((long)pvVar24 + lVar29 * 2);
                                  *(int *)(local_b0._8_8_ + lVar29) = 0;
                                  if (*(long *)((long)pvVar24 + 0x10) != 0) {
                                    LOCK();
                                    plVar28 = (long *)(*(long *)((long)pvVar24 + 0x10) + -0x10);
                                    *plVar28 = *plVar28 + -1;
                                    UNLOCK();
                                    if (*plVar28 == 0) {
                                      lVar34 = *(long *)((long)pvVar24 + 0x10);
                                      *(undefined8 *)((long)pvVar24 + 0x10) = 0;
                                      Memory::free_static((void *)(lVar34 + -0x10),false);
                                    }
                                  }
                                  Memory::free_static(pvVar24,false);
                                  *(undefined8 *)(local_b0._0_8_ + lVar29 * 2) = 0;
                                  pvVar24 = (void *)local_b0._0_8_;
                                }
                                lVar29 = lVar29 + 4;
                              } while (lVar29 != (ulong)uVar18 * 4);
                              local_90 = local_90 & 0xffffffff;
                              local_a0 = (undefined1  [16])0x0;
                              if (pvVar24 == (void *)0x0) goto LAB_00103e1f;
                            }
                          }
                          Memory::free_static(pvVar24,false);
                          Memory::free_static((void *)local_b0._8_8_,false);
                        }
LAB_00103e1f:
                        if ((void *)local_e0._0_8_ != (void *)0x0) {
                          pvVar24 = (void *)local_e0._0_8_;
                          if (local_c0._4_4_ != 0) {
                            uVar18 = *(uint *)(hash_table_size_primes + (local_c0 & 0xffffffff) * 4)
                            ;
                            if (uVar18 == 0) {
                              local_c0 = local_c0 & 0xffffffff;
                              local_d0 = (undefined1  [16])0x0;
                            }
                            else {
                              lVar29 = 0;
                              do {
                                if (*(int *)(local_e0._8_8_ + lVar29) != 0) {
                                  pvVar24 = *(void **)((long)pvVar24 + lVar29 * 2);
                                  *(int *)(local_e0._8_8_ + lVar29) = 0;
                                  if (*(long *)((long)pvVar24 + 0x10) != 0) {
                                    LOCK();
                                    plVar28 = (long *)(*(long *)((long)pvVar24 + 0x10) + -0x10);
                                    *plVar28 = *plVar28 + -1;
                                    UNLOCK();
                                    if (*plVar28 == 0) {
                                      lVar34 = *(long *)((long)pvVar24 + 0x10);
                                      *(undefined8 *)((long)pvVar24 + 0x10) = 0;
                                      Memory::free_static((void *)(lVar34 + -0x10),false);
                                    }
                                  }
                                  Memory::free_static(pvVar24,false);
                                  *(undefined8 *)(local_e0._0_8_ + lVar29 * 2) = 0;
                                  pvVar24 = (void *)local_e0._0_8_;
                                }
                                lVar29 = lVar29 + 4;
                              } while (lVar29 != (ulong)uVar18 * 4);
                              local_c0 = local_c0 & 0xffffffff;
                              local_d0 = (undefined1  [16])0x0;
                              if (pvVar24 == (void *)0x0) goto LAB_0010235c;
                            }
                          }
                          Memory::free_static(pvVar24,false);
                          Memory::free_static((void *)local_e0._8_8_,false);
                        }
                      }
                      else {
                        local_f8 = (char *)0x0;
                        local_b8 = "";
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = local_b0._8_8_;
                        local_b0 = auVar13 << 0x40;
                        String::parse_latin1((StrRange *)&local_f8);
                        local_b8 = "Getting remote file system";
                        local_108 = 0;
                        local_b0._0_8_ = 0x1a;
                        String::parse_latin1((StrRange *)&local_108);
                        TTR((String *)&local_b8,(String *)&local_108);
                        EditorProgress::step((String *)local_138,iVar25,true);
                        pcVar27 = local_b8;
                        if (local_b8 != (char *)0x0) {
                          LOCK();
                          plVar28 = (long *)(local_b8 + -0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_b8 = (char *)0x0;
                            Memory::free_static(pcVar27 + -0x10,false);
                          }
                        }
                        uVar31 = local_108;
                        if (local_108 != 0) {
                          LOCK();
                          plVar28 = (long *)(local_108 - 0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_108 = 0;
                            Memory::free_static((void *)(uVar31 - 0x10),false);
                          }
                        }
                        pcVar27 = local_f8;
                        if (local_f8 != (char *)0x0) {
                          LOCK();
                          plVar28 = (long *)(local_f8 + -0x10);
                          *plVar28 = *plVar28 + -1;
                          UNLOCK();
                          if (*plVar28 == 0) {
                            local_f8 = (char *)0x0;
                            Memory::free_static(pcVar27 + -0x10,false);
                          }
                        }
                        uVar18 = StreamPeer::get_32();
                        cVar16 = is_print_verbose_enabled();
                        if (cVar16 != '\0') {
                          String::humanize_size((ulong)&local_108);
                          local_140 = 0;
                          local_b8 = " decompressed: ";
                          local_b0._0_8_ = 0xf;
                          String::parse_latin1((StrRange *)&local_140);
                          String::humanize_size((ulong)&local_150);
                          operator+((char *)&local_148,
                                    (String *)"EFS: Getting file buffer: compressed - ");
                          String::operator+((String *)&local_118,(String *)&local_148);
                          String::operator+((String *)&local_f8,(String *)&local_118);
                          Variant::Variant((Variant *)local_88,(String *)&local_f8);
                          stringify_variants((Variant *)&local_b8);
                          __print_line((String *)&local_b8);
                          pcVar27 = local_b8;
                          if (local_b8 != (char *)0x0) {
                            LOCK();
                            plVar28 = (long *)(local_b8 + -0x10);
                            *plVar28 = *plVar28 + -1;
                            UNLOCK();
                            if (*plVar28 == 0) {
                              local_b8 = (char *)0x0;
                              Memory::free_static(pcVar27 + -0x10,false);
                            }
                          }
                          if (Variant::needs_deinit[local_88[0]] != '\0') {
                            Variant::_clear_internal();
                          }
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                        }
                        iVar20 = StreamPeerTCP::get_status();
                        if (iVar20 == 2) {
                          if (uVar18 < 0x6400001) {
                            local_108 = 0;
                            local_100 = (void *)0x0;
                            if (uVar18 != 0) {
                              uVar21 = uVar18 - 1 | uVar18 - 1 >> 1;
                              uVar21 = uVar21 | uVar21 >> 2;
                              uVar21 = uVar21 >> 4 | uVar21;
                              uVar21 = uVar21 >> 8 | uVar21;
                              uVar21 = (uVar21 | uVar21 >> 0x10) + 1;
                              local_108 = (ulong)uVar21 << 0x20;
                              pvVar24 = (void *)Memory::realloc_static
                                                          ((void *)0x0,(ulong)uVar21,false);
                              local_100 = pvVar24;
                              if (pvVar24 == (void *)0x0) goto LAB_001045f1;
                              local_108 = CONCAT44(local_108._4_4_,uVar18);
                            }
                            uVar21 = iVar17 - 1U >> 1 | iVar17 - 1U;
                            uVar21 = uVar21 | uVar21 >> 2;
                            uVar21 = uVar21 | uVar21 >> 4;
                            uVar21 = uVar21 | uVar21 >> 8;
                            uVar21 = (uVar21 | uVar21 >> 0x10) + 1;
                            local_f8 = (char *)CONCAT44(uVar21,(undefined4)local_f8);
                            pvVar24 = (void *)Memory::realloc_static
                                                        ((void *)0x0,(ulong)uVar21,false);
                            pvVar15 = local_100;
                            local_f0 = pvVar24;
                            if (pvVar24 == (void *)0x0) {
LAB_001045f1:
                              _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                                               "FATAL: Condition \"!data\" is true.","Out of memory"
                                               ,0,0,pvVar24);
                              _err_flush_stdout();
                    /* WARNING: Does not return */
                              pcVar11 = (code *)invalidInstructionException();
                              (*pcVar11)();
                            }
                            local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar17);
                            iVar17 = (**(code **)(*(long *)local_170 + 0x160))
                                               (local_170,local_100,uVar18);
                            local_118 = 0;
                            auVar14._8_8_ = 0;
                            auVar14._0_8_ = local_b0._8_8_;
                            local_b0 = auVar14 << 0x40;
                            local_b8 = "";
                            String::parse_latin1((StrRange *)&local_118);
                            local_140 = 0;
                            local_b8 = "Decompressing remote file system";
                            local_b0._0_8_ = 0x20;
                            String::parse_latin1((StrRange *)&local_140);
                            TTR((String *)&local_b8,(String *)&local_140);
                            EditorProgress::step((String *)local_138,iVar25,true);
                            pcVar27 = local_b8;
                            if (local_b8 != (char *)0x0) {
                              LOCK();
                              plVar28 = (long *)(local_b8 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_b8 = (char *)0x0;
                                Memory::free_static(pcVar27 + -0x10,false);
                              }
                            }
                            lVar29 = local_140;
                            if (local_140 != 0) {
                              LOCK();
                              plVar28 = (long *)(local_140 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_140 = 0;
                                Memory::free_static((void *)(lVar29 + -0x10),false);
                              }
                            }
                            lVar29 = local_118;
                            if (local_118 != 0) {
                              LOCK();
                              plVar28 = (long *)(local_118 + -0x10);
                              *plVar28 = *plVar28 + -1;
                              UNLOCK();
                              if (*plVar28 == 0) {
                                local_118 = 0;
                                Memory::free_static((void *)(lVar29 + -0x10),false);
                              }
                            }
                            pvVar24 = local_f0;
                            if (iVar17 == 0) {
                              Compression::decompress
                                        (local_f0,(ulong)local_f8 & 0xffffffff,pvVar15,
                                         local_108 & 0xffffffff);
                              String::utf8((char *)&local_150,(int)pvVar24);
                              String::split((char *)&local_b8,
                                            SUB81((CowData<char32_t> *)&local_150,0),0x106a65);
                              cVar16 = is_print_verbose_enabled();
                              if (cVar16 != '\0') {
                                itos((long)&local_148);
                                operator+((char *)&local_140,
                                          (String *)"EFS: Total cached files received: ");
                                Variant::Variant((Variant *)local_88,(String *)&local_140);
                                stringify_variants((Variant *)&local_118);
                                __print_line((String *)&local_118);
                                lVar29 = local_118;
                                if (local_118 != 0) {
                                  LOCK();
                                  plVar28 = (long *)(local_118 + -0x10);
                                  *plVar28 = *plVar28 + -1;
                                  UNLOCK();
                                  if (*plVar28 == 0) {
                                    local_118 = 0;
                                    Memory::free_static((void *)(lVar29 + -0x10),false);
                                  }
                                }
                                if (Variant::needs_deinit[local_88[0]] != '\0') {
                                  Variant::_clear_internal();
                                }
                                lVar29 = local_140;
                                if (local_140 != 0) {
                                  LOCK();
                                  plVar28 = (long *)(local_140 + -0x10);
                                  *plVar28 = *plVar28 + -1;
                                  UNLOCK();
                                  if (*plVar28 == 0) {
                                    local_140 = 0;
                                    Memory::free_static((void *)(lVar29 + -0x10),false);
                                  }
                                }
                                pcVar27 = local_148;
                                if (local_148 != (char *)0x0) {
                                  LOCK();
                                  plVar28 = (long *)(local_148 + -0x10);
                                  *plVar28 = *plVar28 + -1;
                                  UNLOCK();
                                  if (*plVar28 == 0) {
                                    local_148 = (char *)0x0;
                                    Memory::free_static(pcVar27 + -0x10,false);
                                  }
                                }
                              }
                              if (local_b0._0_8_ != 0) {
                                lVar29 = 0;
                                do {
                                  if (*(long *)(local_b0._0_8_ + -8) <= lVar29) break;
                                  iVar17 = String::get_slice_count
                                                     ((char *)(local_b0._0_8_ + lVar29 * 8));
                                  if (iVar17 == 2) {
                                    if (local_b0._0_8_ != 0) {
                                      lVar34 = *(long *)(local_b0._0_8_ + -8);
                                      if (lVar34 <= lVar29) goto LAB_00103f15;
                                      iVar17 = (int)(lVar29 * 8);
                                      String::get_slice((char *)&local_148,local_b0._0_4_ + iVar17);
                                      if (local_b0._0_8_ != 0) {
                                        lVar34 = *(long *)(local_b0._0_8_ + -8);
                                        if (lVar34 <= lVar29) goto LAB_00103f15;
                                        String::get_slice((char *)&local_118,local_b0._0_4_ + iVar17
                                                         );
                                        local_140 = String::to_int();
                                        lVar34 = local_118;
                                        if (local_118 != 0) {
                                          LOCK();
                                          plVar28 = (long *)(local_118 + -0x10);
                                          *plVar28 = *plVar28 + -1;
                                          UNLOCK();
                                          if (*plVar28 == 0) {
                                            local_118 = 0;
                                            Memory::free_static((void *)(lVar34 + -0x10),false);
                                          }
                                        }
                                        HashMap<String,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_long>>>
                                        ::insert((StrRange *)&local_118,(ulong *)&local_e8,
                                                 SUB81(&local_148,0));
                                        pcVar27 = local_148;
                                        if (local_148 != (char *)0x0) {
                                          LOCK();
                                          plVar28 = (long *)(local_148 + -0x10);
                                          *plVar28 = *plVar28 + -1;
                                          UNLOCK();
                                          if (*plVar28 == 0) {
                                            local_148 = (char *)0x0;
                                            Memory::free_static(pcVar27 + -0x10,false);
                                          }
                                        }
                                        goto LAB_00103930;
                                      }
                                    }
                                    lVar34 = 0;
LAB_00103f15:
                                    _err_print_index_error
                                              ("get","./core/templates/cowdata.h",0xdb,lVar29,lVar34
                                               ,"p_index","size()","",false,true);
                                    _err_flush_stdout();
                    /* WARNING: Does not return */
                                    pcVar11 = (code *)invalidInstructionException();
                                    (*pcVar11)();
                                  }
LAB_00103930:
                                  lVar29 = lVar29 + 1;
                                } while (local_b0._0_8_ != 0);
                              }
                              CowData<String>::_unref((CowData<String> *)local_b0);
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
                              if ((pvVar24 != (void *)0x0) && (local_f0 != (void *)0x0)) {
                                Memory::free_static(local_f0,false);
                              }
                              if ((pvVar15 != (void *)0x0) && (local_100 != (void *)0x0)) {
                                Memory::free_static(local_100,false);
                              }
                              goto LAB_00102600;
                            }
                            _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0xaf,
                                             "Condition \"err != OK\" is true.",0,0);
                            if ((pvVar24 != (void *)0x0) &&
                               (LocalVector<unsigned_char,unsigned_int,false,false>::resize
                                          ((LocalVector<unsigned_char,unsigned_int,false,false> *)
                                           &local_f8,0), local_f0 != (void *)0x0)) {
                              Memory::free_static(local_f0,false);
                            }
                            if ((pvVar15 != (void *)0x0) &&
                               (LocalVector<unsigned_char,unsigned_int,false,false>::resize
                                          ((LocalVector<unsigned_char,unsigned_int,false,false> *)
                                           &local_108,0), local_100 != (void *)0x0)) {
                              Memory::free_static(local_100,false);
                            }
                          }
                          else {
                            _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0xa5,
                                             "Condition \"file_buffer_size > 100 * 1024 * 1024\" is true."
                                             ,0,0);
                          }
                        }
                        else {
                          _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0xa4,
                                           "Condition \"tcp_peer->get_status() != StreamPeerTCP::STATUS_CONNECTED\" is true."
                                           ,0,0);
                        }
LAB_00103be7:
                        if ((void *)local_e0._0_8_ != (void *)0x0) {
                          pvVar24 = (void *)local_e0._0_8_;
                          if (local_c0._4_4_ != 0) {
                            uVar18 = *(uint *)(hash_table_size_primes + (local_c0 & 0xffffffff) * 4)
                            ;
                            if (uVar18 == 0) {
                              local_c0 = local_c0 & 0xffffffff;
                              local_d0 = (undefined1  [16])0x0;
                            }
                            else {
                              lVar29 = 0;
                              do {
                                if (*(int *)(local_e0._8_8_ + lVar29) != 0) {
                                  pvVar24 = *(void **)((long)pvVar24 + lVar29 * 2);
                                  *(int *)(local_e0._8_8_ + lVar29) = 0;
                                  if (*(long *)((long)pvVar24 + 0x10) != 0) {
                                    LOCK();
                                    plVar28 = (long *)(*(long *)((long)pvVar24 + 0x10) + -0x10);
                                    *plVar28 = *plVar28 + -1;
                                    UNLOCK();
                                    if (*plVar28 == 0) {
                                      lVar34 = *(long *)((long)pvVar24 + 0x10);
                                      *(undefined8 *)((long)pvVar24 + 0x10) = 0;
                                      Memory::free_static((void *)(lVar34 + -0x10),false);
                                    }
                                  }
                                  Memory::free_static(pvVar24,false);
                                  *(undefined8 *)(local_e0._0_8_ + lVar29 * 2) = 0;
                                  pvVar24 = (void *)local_e0._0_8_;
                                }
                                lVar29 = lVar29 + 4;
                              } while (lVar29 != (ulong)uVar18 * 4);
                              local_c0 = local_c0 & 0xffffffff;
                              local_d0 = (undefined1  [16])0x0;
                              if (pvVar24 == (void *)0x0) goto LAB_0010235c;
                            }
                          }
                          Memory::free_static(pvVar24,false);
                          Memory::free_static((void *)local_e0._8_8_,false);
                        }
                      }
LAB_0010235c:
                      CowData<String>::_unref((CowData<String> *)&local_120);
                    }
                    else {
                      _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x91,
                                       "Condition \"tcp_peer->get_status() != StreamPeerTCP::STATUS_CONNECTED\" is true."
                                       ,0,0);
                    }
                  }
                  else {
                    _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x8c,
                                     "Condition \"password != cpassword\" is true.",
                                     "Client disconnected because password mismatch.",0,0);
                  }
                }
                else {
                  _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x8a,
                                   "Condition \"err != OK\" is true.",0,0);
                }
              }
              else {
                _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x85,
                                 "Condition \"protocol_version != 1\" is true.",0,0);
              }
            }
            else {
              _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x82,
                               "Condition \"header[3] != \'S\'\" is true.",0,0);
            }
          }
          else {
            _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x81,
                             "Condition \"header[2] != \'F\'\" is true.",0,0);
          }
        }
        else {
          _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x80,
                           "Condition \"header[1] != \'R\'\" is true.",0,0);
        }
      }
      else {
        _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x7f,
                         "Condition \"header[0] != \'G\'\" is true.",0,0);
      }
    }
    else {
      _err_print_error(&_LC45,"editor/debugger/editor_file_server.cpp",0x7e,
                       "Condition \"err != OK\" is true.",0,0);
    }
    EditorProgress::~EditorProgress(local_138);
  }
  if (((local_170 != (String *)0x0) && (cVar16 = RefCounted::unreference(), cVar16 != '\0')) &&
     (cVar16 = predelete_handler((Object *)local_170), cVar16 != '\0')) {
    (**(code **)(*(long *)local_170 + 0x140))(local_170);
    Memory::free_static(local_170,false);
  }
LAB_00101a65:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00102c88:
  uVar31 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(uVar31 - 0x10),false);
    }
  }
  plVar28 = (long *)*plVar28;
  uVar18 = uVar18 + 100;
  if (plVar28 == (long *)0x0) goto LAB_00103d14;
  goto LAB_00102ccc;
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
  return (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorFileServer::is_class_ptr(void*) const */

uint __thiscall EditorFileServer::is_class_ptr(EditorFileServer *this,void *param_1)

{
  return (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* EditorFileServer::_getv(StringName const&, Variant&) const */

undefined8 EditorFileServer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileServer::_setv(StringName const&, Variant const&) */

undefined8 EditorFileServer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileServer::_validate_propertyv(PropertyInfo&) const */

void EditorFileServer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorFileServer::_property_can_revertv(StringName const&) const */

undefined8 EditorFileServer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorFileServer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorFileServer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileServer::_notificationv(int, bool) */

void EditorFileServer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108348;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108348;
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
LAB_001048e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001048e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010494e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010494e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorFileServer::_get_class_namev() const */

undefined8 * EditorFileServer::_get_class_namev(void)

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
LAB_001049d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001049d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorFileServer");
      goto LAB_00104a3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorFileServer");
LAB_00104a3e:
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
LAB_00104ab3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104ab3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00104b1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00104b1e:
  return &_get_class_namev()::_class_name_static;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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



/* EditorFileServer::get_class() const */

void EditorFileServer::get_class(void)

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



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
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
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00104f54;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104f54:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* EditorFileServer::_initialize_classv() */

void EditorFileServer::_initialize_classv(void)

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
    local_38 = "EditorFileServer";
    local_50 = 0;
    local_30 = 0x10;
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
        initialize_class()::initialized = '\x01';
        goto LAB_00105015;
      }
    }
    initialize_class()::initialized = '\x01';
  }
LAB_00105015:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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
    if ((code *)PTR__bind_methods_0010b008 != Object::_bind_methods) {
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
LAB_00105488:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105488;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001054a6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001054a6:
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



/* EditorFileServer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void EditorFileServer::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "EditorFileServer";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorFileServer";
  local_98 = 0;
  local_70 = 0x10;
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
LAB_00105878:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105878;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105896;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105896:
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
  StringName::StringName((StringName *)&local_78,"EditorFileServer",false);
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
LAB_00105c78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105c78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105c95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105c95:
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
            if (lVar5 == 0) goto LAB_00105fbf;
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
LAB_00105fbf:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00106073;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00106123;
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
LAB_00106123:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00106073;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00106073:
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
            if (lVar4 == 0) goto LAB_0010624f;
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
LAB_0010624f:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00106303;
  }
  cVar5 = String::operator==((String *)param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106303:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileServer::is_class(String const&) const */

undefined8 __thiscall EditorFileServer::is_class(EditorFileServer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001063cf;
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
LAB_001063cf:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00106483;
  }
  cVar6 = String::operator==((String *)param_1,"EditorFileServer");
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
              if (lVar5 == 0) goto LAB_00106533;
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
LAB_00106533:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00106483;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00106483:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  if (initialize_class()::initialized != '\0') goto LAB_0010675b;
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
LAB_0010686a:
      if ((code *)PTR__bind_methods_0010b018 != RefCounted::_bind_methods) {
LAB_0010687a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010686a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010b018 != RefCounted::_bind_methods) goto LAB_0010687a;
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
  if ((code *)PTR__bind_methods_0010b010 != RefCounted::_bind_methods) {
    ConfigFile::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0010675b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, unsigned long> > >::insert(String const&, unsigned
   long const&, bool) */

String * HashMap<String,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_long>>>
         ::insert(String *param_1,ulong *param_2,bool param_3)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  char cVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  void *__s_00;
  undefined8 *puVar32;
  void *pvVar33;
  undefined8 *in_RCX;
  int iVar34;
  undefined7 in_register_00000011;
  String *pSVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  uint *puVar40;
  ulong uVar41;
  uint uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  undefined8 uVar45;
  uint uVar46;
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  long in_FS_OFFSET;
  undefined1 (*pauStack_c0) [16];
  long local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar35 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[5] * 4);
  if (param_2[1] == 0) {
    uVar38 = (ulong)uVar37;
    uVar30 = uVar38 * 4;
    uVar41 = uVar38 * 8;
    uVar31 = Memory::alloc_static(uVar30,false);
    param_2[2] = uVar31;
    pvVar33 = (void *)Memory::alloc_static(uVar41,false);
    param_2[1] = (ulong)pvVar33;
    if (uVar37 != 0) {
      pvVar2 = (void *)param_2[2];
      if ((pvVar2 < (void *)((long)pvVar33 + uVar41)) && (pvVar33 < (void *)((long)pvVar2 + uVar30))
         ) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar30 * 4) = 0;
          *(undefined8 *)((long)pvVar33 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar38 != uVar30);
      }
      else {
        memset(pvVar2,0,uVar30);
        memset(pvVar33,0,uVar41);
      }
      goto LAB_00107198;
    }
    iVar34 = *(int *)((long)param_2 + 0x2c);
    if (pvVar33 == (void *)0x0) goto LAB_001071a7;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_001075e8;
LAB_001071cd:
    uVar37 = (uint)param_2[5];
    if (uVar37 == 0x1c) {
      pauStack_c0 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00107597;
    }
    uVar30 = (ulong)(uVar37 + 1);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    uVar29 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    if (uVar37 + 1 < 2) {
      uVar30 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar30 * 4);
    uVar38 = (ulong)uVar37;
    *(int *)(param_2 + 5) = (int)uVar30;
    pvVar33 = (void *)param_2[1];
    uVar30 = uVar38 * 4;
    uVar41 = uVar38 * 8;
    pvVar2 = (void *)param_2[2];
    uVar31 = Memory::alloc_static(uVar30,false);
    param_2[2] = uVar31;
    __s_00 = (void *)Memory::alloc_static(uVar41,false);
    param_2[1] = (ulong)__s_00;
    if (uVar37 != 0) {
      __s = (void *)param_2[2];
      if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar30))) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)__s + uVar30 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar38);
      }
      else {
        memset(__s,0,uVar30);
        memset(__s_00,0,uVar41);
      }
    }
    if (uVar29 != 0) {
      uVar30 = 0;
      do {
        uVar37 = *(uint *)((long)pvVar2 + uVar30 * 4);
        if (uVar37 != 0) {
          uVar41 = param_2[2];
          uVar43 = 0;
          uVar42 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[5] * 4);
          uVar31 = CONCAT44(0,uVar42);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[5] * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar37 * lVar3;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar31;
          lVar36 = SUB168(auVar4 * auVar16,8);
          puVar40 = (uint *)(uVar41 + lVar36 * 4);
          iVar34 = SUB164(auVar4 * auVar16,8);
          uVar44 = *puVar40;
          uVar45 = *(undefined8 *)((long)pvVar33 + uVar30 * 8);
          while (uVar44 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar44 * lVar3;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar31;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar42 + iVar34) - SUB164(auVar5 * auVar17,8)) * lVar3;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar31;
            uVar46 = SUB164(auVar6 * auVar18,8);
            uVar39 = uVar45;
            if (uVar46 < uVar43) {
              *puVar40 = uVar37;
              puVar32 = (undefined8 *)((long)__s_00 + lVar36 * 8);
              uVar39 = *puVar32;
              *puVar32 = uVar45;
              uVar37 = uVar44;
              uVar43 = uVar46;
            }
            uVar43 = uVar43 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar34 + 1) * lVar3;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar31;
            lVar36 = SUB168(auVar7 * auVar19,8);
            puVar40 = (uint *)(uVar41 + lVar36 * 4);
            iVar34 = SUB164(auVar7 * auVar19,8);
            uVar45 = uVar39;
            uVar44 = *puVar40;
          }
          *(undefined8 *)((long)__s_00 + lVar36 * 8) = uVar45;
          *puVar40 = uVar37;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar30 = uVar30 + 1;
      } while (uVar29 != uVar30);
      Memory::free_static(pvVar33,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
LAB_00107198:
    iVar34 = *(int *)((long)param_2 + 0x2c);
    if (iVar34 != 0) {
LAB_001075e8:
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[5] * 4);
      uVar41 = CONCAT44(0,uVar29);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[5] * 8);
      uVar44 = String::hash();
      uVar30 = param_2[2];
      uVar42 = 1;
      if (uVar44 != 0) {
        uVar42 = uVar44;
      }
      uVar46 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar3;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar41;
      lVar36 = SUB168(auVar12 * auVar24,8);
      uVar44 = *(uint *)(uVar30 + lVar36 * 4);
      uVar43 = SUB164(auVar12 * auVar24,8);
      if (uVar44 != 0) {
        do {
          if (uVar42 == uVar44) {
            cVar28 = String::operator==((String *)(*(long *)(param_2[1] + lVar36 * 8) + 0x10),
                                        pSVar35);
            if (cVar28 != '\0') {
              pauStack_c0 = *(undefined1 (**) [16])(param_2[1] + (ulong)uVar43 * 8);
              *(undefined8 *)(pauStack_c0[1] + 8) = *in_RCX;
              goto LAB_00107597;
            }
            uVar30 = param_2[2];
          }
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar43 + 1) * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar41;
          lVar36 = SUB168(auVar13 * auVar25,8);
          uVar44 = *(uint *)(uVar30 + lVar36 * 4);
          uVar43 = SUB164(auVar13 * auVar25,8);
        } while ((uVar44 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar44 * lVar3, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar41, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar29 + uVar43) - SUB164(auVar14 * auVar26,8)) * lVar3,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar41, uVar46 <= SUB164(auVar15 * auVar27,8)));
      }
      iVar34 = *(int *)((long)param_2 + 0x2c);
    }
LAB_001071a7:
    if ((float)uVar37 * __LC17 < (float)(iVar34 + 1)) goto LAB_001071cd;
  }
  local_58 = 0;
  if (*(long *)pSVar35 == 0) {
    uVar45 = *in_RCX;
    pauStack_c0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauStack_c0[1] = 0;
    *pauStack_c0 = (undefined1  [16])0x0;
LAB_00107779:
    puVar32 = (undefined8 *)param_2[4];
    *(undefined8 *)(pauStack_c0[1] + 8) = uVar45;
    if (puVar32 != (undefined8 *)0x0) goto LAB_00107489;
LAB_0010778a:
    param_2[3] = (ulong)pauStack_c0;
    param_2[4] = (ulong)pauStack_c0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar35);
    lVar3 = local_58;
    uVar45 = *in_RCX;
    local_50 = uVar45;
    pauStack_c0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauStack_c0[1] = 0;
    *(undefined8 *)*pauStack_c0 = 0;
    *(undefined8 *)(*pauStack_c0 + 8) = 0;
    if (lVar3 == 0) goto LAB_00107779;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauStack_c0 + 1),(CowData *)&local_58);
    *(undefined8 *)(pauStack_c0[1] + 8) = uVar45;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58 + -0x10),false);
    }
    puVar32 = (undefined8 *)param_2[4];
    if (puVar32 == (undefined8 *)0x0) goto LAB_0010778a;
LAB_00107489:
    if (in_R8B == '\0') {
      *puVar32 = pauStack_c0;
      *(undefined8 **)(*pauStack_c0 + 8) = puVar32;
      param_2[4] = (ulong)pauStack_c0;
    }
    else {
      uVar30 = param_2[3];
      *(undefined1 (**) [16])(uVar30 + 8) = pauStack_c0;
      *(ulong *)*pauStack_c0 = uVar30;
      param_2[3] = (ulong)pauStack_c0;
    }
  }
  uVar29 = String::hash();
  uVar30 = param_2[2];
  uVar37 = 1;
  if (uVar29 != 0) {
    uVar37 = uVar29;
  }
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[5] * 8);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[5] * 4);
  uVar31 = CONCAT44(0,uVar29);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar37 * lVar3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar31;
  lVar36 = SUB168(auVar8 * auVar20,8);
  uVar41 = param_2[1];
  puVar40 = (uint *)(uVar30 + lVar36 * 4);
  iVar34 = SUB164(auVar8 * auVar20,8);
  uVar42 = *puVar40;
  pauVar48 = pauStack_c0;
  if (uVar42 != 0) {
    uVar44 = 0;
    pauVar47 = pauStack_c0;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar42 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar31;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar29 + iVar34) - SUB164(auVar9 * auVar21,8)) * lVar3;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar31;
      uVar43 = SUB164(auVar10 * auVar22,8);
      pauVar48 = pauVar47;
      if (uVar43 < uVar44) {
        *puVar40 = uVar37;
        puVar32 = (undefined8 *)(uVar41 + lVar36 * 8);
        pauVar48 = (undefined1 (*) [16])*puVar32;
        *puVar32 = pauVar47;
        uVar44 = uVar43;
        uVar37 = uVar42;
      }
      uVar44 = uVar44 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar34 + 1) * lVar3;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar36 = SUB168(auVar11 * auVar23,8);
      puVar40 = (uint *)(uVar30 + lVar36 * 4);
      iVar34 = SUB164(auVar11 * auVar23,8);
      uVar42 = *puVar40;
      pauVar47 = pauVar48;
    } while (uVar42 != 0);
  }
  *(undefined1 (**) [16])(uVar41 + lVar36 * 8) = pauVar48;
  *puVar40 = uVar37;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00107597:
  *(undefined1 (**) [16])param_1 = pauStack_c0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalVector<unsigned char, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<unsigned_char,unsigned_int,false,false>::resize
          (LocalVector<unsigned_char,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  
  if (*(uint *)this <= param_1) {
    if (param_1 <= *(uint *)this) {
      return;
    }
    if (*(uint *)(this + 4) < param_1) {
      uVar3 = param_1 - 1 | param_1 - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar3;
      lVar2 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar3,false);
      *(long *)(this + 8) = lVar2;
      if (lVar2 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  *(uint *)this = param_1;
  return;
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

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
LAB_00107e10:
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
  if (lVar10 == 0) goto LAB_00107e10;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00107ce9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00107ce9;
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
    goto LAB_00107e66;
  }
  if (lVar10 == lVar7) {
LAB_00107d8f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00107e66:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00107d7a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00107d8f;
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
LAB_00107d7a:
  puVar9[-1] = param_1;
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
        if (pvVar5 == (void *)0x0) goto LAB_00107f51;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_00107f51:
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
  
  *(undefined ***)this = &PTR__initialize_classv_001084a8;
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
        if (pvVar3 == (void *)0x0) goto LAB_00108081;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00108081:
  *(undefined ***)this = &PTR__initialize_classv_00108348;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001084a8;
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
        if (pvVar3 == (void *)0x0) goto LAB_00108171;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00108171:
  *(undefined ***)this = &PTR__initialize_classv_00108348;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* EditorFileServer::_scan_files_changed(EditorFileSystemDirectory*, Vector<String> const&,
   HashMap<String, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, unsigned long> > >&, HashMap<String, unsigned long,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, unsigned long> > >&) */

void EditorFileServer::_GLOBAL__sub_I__scan_files_changed(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    PopupMenu::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((StrRange *)&ENV_SCRIPT_ENCRYPTION_KEY);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

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


// This is taking way too long.