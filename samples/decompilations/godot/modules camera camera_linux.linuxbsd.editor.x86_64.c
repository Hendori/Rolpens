
/* CameraLinux::~CameraLinux() */

void __thiscall CameraLinux::~CameraLinux(CameraLinux *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00101820;
  this[0x1b0] = (CameraLinux)0x1;
  Thread::wait_to_finish();
  Thread::~Thread((Thread *)(this + 0x1b8));
  CameraServer::~CameraServer((CameraServer *)this);
  return;
}



/* CameraLinux::~CameraLinux() */

void __thiscall CameraLinux::~CameraLinux(CameraLinux *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00101820;
  this[0x1b0] = (CameraLinux)0x1;
  Thread::wait_to_finish();
  Thread::~Thread((Thread *)(this + 0x1b8));
  CameraServer::~CameraServer((CameraServer *)this);
  operator_delete(this,0x1f0);
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



/* CameraLinux::_has_device(String const&) */

char __thiscall CameraLinux::_has_device(CameraLinux *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  lVar7 = *(long *)(this + 0x1a8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 != 0) {
    lVar6 = 0;
    while (lVar6 < *(long *)(lVar7 + -8)) {
      lVar2 = *(long *)(lVar7 + lVar6 * 8);
      if (lVar2 != 0) {
        pOVar5 = (Object *)__dynamic_cast(lVar2,&Object::typeinfo,&CameraFeedLinux::typeinfo,0);
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 != '\0') {
            CameraFeedLinux::get_device_name();
            cVar3 = String::operator==((String *)&local_48,param_1);
            lVar7 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            if (cVar3 != '\0') {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                cVar4 = predelete_handler(pOVar5);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
              }
              goto LAB_00100252;
            }
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              cVar3 = predelete_handler(pOVar5);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          lVar7 = *(long *)(this + 0x1a8);
        }
      }
      lVar6 = lVar6 + 1;
      if (lVar7 == 0) break;
    }
  }
  cVar3 = '\0';
LAB_00100252:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraLinux::_open_device(String const&) */

int CameraLinux::_open_device(String *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_c0;
  stat64 local_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::ascii(SUB81(&local_c0,0));
  pcVar4 = (char *)CharString::get_data();
  iVar3 = stat64(pcVar4,&local_b8);
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (iVar3 != -1) {
    if ((local_b8.st_mode & 0xf000) == 0x2000) {
      String::ascii(SUB81(&local_c0,0));
      pcVar4 = (char *)CharString::get_data();
      iVar3 = open64(pcVar4,0x802,0);
      lVar2 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      iVar3 = -1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraLinux::_is_active(String const&) */

bool CameraLinux::_is_active(String *param_1)

{
  int __fd;
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 auStack_88 [104];
  long local_20;
  
  bVar2 = false;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __fd = _open_device(param_1);
  if (__fd != -1) {
    iVar1 = ioctl(__fd,0x80685600,auStack_88);
    bVar2 = iVar1 != -1;
  }
  close(__fd);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraLinux::_is_video_capture_device(int) */

ulong __thiscall CameraLinux::_is_video_capture_device(CameraLinux *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 extraout_RDX;
  ulong uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined1 auStack_158 [84];
  uint local_104;
  undefined4 local_e8;
  undefined1 local_e4 [196];
  undefined8 local_20;
  long local_10;
  
  bVar5 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ioctl(param_1,0x80685600,auStack_158);
  uVar3 = 0;
  if ((iVar1 != -1) && ((~local_104 & 0x4000001) == 0)) {
    local_e4._0_8_ = 0;
    local_20 = 0;
    puVar4 = (undefined8 *)(local_e4 + 4);
    for (lVar2 = 0x19; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    local_e8 = 1;
    iVar1 = ioctl(param_1,0xc0d05604,&local_e8);
    uVar3 = CONCAT71((int7)((ulong)extraout_RDX >> 8),iVar1 != -1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001005dd) */
/* WARNING: Removing unreachable block (ram,0x001005ea) */
/* CameraLinux::_add_device(String const&) */

void __thiscall CameraLinux::_add_device(CameraLinux *this,String *param_1)

{
  long lVar1;
  char cVar2;
  int __fd;
  CameraFeedLinux *this_00;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __fd = _open_device((String *)this);
  if ((__fd != -1) && (cVar2 = _is_video_capture_device(this,__fd), cVar2 != '\0')) {
    this_00 = (CameraFeedLinux *)operator_new(0x248,"");
    CameraFeedLinux::CameraFeedLinux(this_00,param_1);
    postinitialize_handler((Object *)this_00);
    cVar2 = RefCounted::init_ref();
    local_38 = (Object *)0x0;
    if (cVar2 == '\0') {
      CameraServer::add_feed((Ref *)this);
    }
    else {
      pOVar3 = (Object *)__dynamic_cast(this_00,&Object::typeinfo,&CameraFeed::typeinfo,0);
      if ((pOVar3 != (Object *)0x0) &&
         (cVar2 = RefCounted::reference(), local_38 = pOVar3, cVar2 == '\0')) {
        local_38 = (Object *)0x0;
      }
      CameraServer::add_feed((Ref *)this);
      if (((local_38 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
        if (this_00 == (CameraFeedLinux *)0x0) goto LAB_00100550;
      }
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this_00), cVar2 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
    }
  }
LAB_00100550:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    close(__fd);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraLinux::_update_devices() */

void __thiscall CameraLinux::_update_devices(CameraLinux *this)

{
  long *plVar1;
  char *__s1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  Object *pOVar7;
  Object *pOVar8;
  DIR *__dirp;
  dirent64 *pdVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  Object *local_b8;
  size_t local_b0;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (this[0x1b0] != (CameraLinux)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00100b4c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x1c8));
    if (iVar4 != 0) {
      std::__throw_system_error(iVar4);
      goto LAB_00100b4c;
    }
    lVar6 = *(long *)(this + 0x1a8);
    if ((lVar6 != 0) && (uVar11 = *(int *)(lVar6 + -8) - 1, -1 < (int)uVar11)) {
      uVar12 = (ulong)uVar11;
      do {
        if (lVar6 == 0) {
          lVar10 = 0;
LAB_00100acb:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar10,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar10 = *(long *)(lVar6 + -8);
        if (lVar10 <= (long)uVar12) goto LAB_00100acb;
        lVar6 = *(long *)(lVar6 + uVar12 * 8);
        if (((lVar6 != 0) &&
            (pOVar7 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&CameraFeedLinux::typeinfo,0)
            , pOVar7 != (Object *)0x0)) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
          CameraFeedLinux::get_device_name();
          iVar4 = _open_device((String *)this);
          if (iVar4 == -1) {
            close(-1);
LAB_00100854:
            local_b8 = (Object *)0x0;
            pOVar8 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&CameraFeed::typeinfo,0);
            if ((pOVar8 != (Object *)0x0) &&
               (local_b8 = pOVar8, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
              local_b8 = (Object *)0x0;
            }
            CameraServer::remove_feed((Ref *)this);
            if (((local_b8 != (Object *)0x0) &&
                (cVar3 = RefCounted::unreference(), pOVar8 = local_b8, cVar3 != '\0')) &&
               (cVar3 = predelete_handler(local_b8), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))();
              Memory::free_static(pOVar8,false);
            }
          }
          else {
            iVar5 = ioctl(iVar4,0x80685600,local_a8);
            if (iVar5 == -1) {
              close(iVar4);
              goto LAB_00100854;
            }
            close(iVar4);
          }
          lVar6 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
        if ((int)uVar12 + -1 < 0) break;
        uVar12 = uVar12 - 1;
        lVar6 = *(long *)(this + 0x1a8);
      } while( true );
    }
    __dirp = opendir((char *)((long)&DAT_001017cf + 5));
    if (__dirp != (DIR *)0x0) {
LAB_00100950:
      pdVar9 = readdir64(__dirp);
      if (pdVar9 != (dirent64 *)0x0) {
        while( true ) {
          __s1 = pdVar9->d_name;
          iVar4 = strncmp(__s1,"video",5);
          if (iVar4 != 0) break;
          local_c0 = 0;
          local_b0 = strlen(__s1);
          local_b8 = (Object *)__s1;
          String::parse_latin1((StrRange *)&local_c0);
          local_b8 = (Object *)0x1017df;
          local_c8 = 0;
          local_b0 = 5;
          String::parse_latin1((StrRange *)&local_c8);
          String::operator+((String *)&local_b8,(String *)&local_c8);
          lVar6 = local_c8;
          if (local_c8 != 0) {
            LOCK();
            plVar1 = (long *)(local_c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c8 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar6 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          cVar3 = _has_device(this,(String *)&local_b8);
          if (cVar3 == '\0') {
            _add_device(this,(String *)&local_b8);
          }
          pOVar7 = local_b8;
          if (local_b8 == (Object *)0x0) break;
          LOCK();
          pOVar8 = local_b8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 != 0) break;
          local_b8 = (Object *)0x0;
          Memory::free_static(pOVar7 + -0x10,false);
          pdVar9 = readdir64(__dirp);
          if (pdVar9 == (dirent64 *)0x0) goto LAB_00100a90;
        }
        goto LAB_00100950;
      }
    }
LAB_00100a90:
    closedir(__dirp);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1c8));
    usleep(1000000);
  } while( true );
}



/* CameraLinux::camera_thread_func(void*) */

void CameraLinux::camera_thread_func(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _update_devices((CameraLinux *)param_1);
    return;
  }
  return;
}



/* CameraLinux::_can_query_format(int, int) */

undefined8 __thiscall CameraLinux::_can_query_format(CameraLinux *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_var;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  int local_e8 [2];
  undefined8 auStack_e0 [24];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stack0xffffffffffffff1c = 0;
  local_20 = 0;
  puVar3 = auStack_e0;
  for (lVar2 = 0x19; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_e8[0] = param_2;
  iVar1 = ioctl(param_1,0xc0d05604,local_e8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != -1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraLinux::CameraLinux() */

void __thiscall CameraLinux::CameraLinux(CameraLinux *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  CameraServer::CameraServer((CameraServer *)this);
  *(undefined ***)this = &PTR__initialize_classv_00101820;
  this[0x1b0] = (CameraLinux)0x0;
  Thread::Thread((Thread *)(this + 0x1b8));
  *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1d8) = 1;
  *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
  Thread::start((_func_void_void_ptr *)(this + 0x1b8),camera_thread_func,(Settings *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* CameraServer::is_class_ptr(void*) const */

uint __thiscall CameraServer::is_class_ptr(CameraServer *this,void *param_1)

{
  return (uint)CONCAT71(0x1019,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1019,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* CameraServer::_getv(StringName const&, Variant&) const */

undefined8 CameraServer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraServer::_setv(StringName const&, Variant const&) */

undefined8 CameraServer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraServer::_validate_propertyv(PropertyInfo&) const */

void CameraServer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CameraServer::_property_can_revertv(StringName const&) const */

undefined8 CameraServer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CameraServer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CameraServer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraServer::_notificationv(int, bool) */

void CameraServer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CameraServer::_get_class_namev() const */

undefined8 * CameraServer::_get_class_namev(void)

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
LAB_00100e03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100e03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CameraServer");
      goto LAB_00100e6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CameraServer");
LAB_00100e6e:
  return &_get_class_namev()::_class_name_static;
}



/* CameraServer::get_class() const */

void CameraServer::get_class(void)

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



/* CameraServer::is_class(String const&) const */

undefined8 __thiscall CameraServer::is_class(CameraServer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00100fff;
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
LAB_00100fff:
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
    if (cVar6 != '\0') goto LAB_001010b3;
  }
  cVar6 = String::operator==(param_1,"CameraServer");
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
              if (lVar5 == 0) goto LAB_00101163;
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
LAB_00101163:
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
      if (cVar6 != '\0') goto LAB_001010b3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001010b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraServer::_initialize_classv() */

void CameraServer::_initialize_classv(void)

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
    local_38 = "CameraServer";
    local_50 = 0;
    local_30 = 0xc;
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
      CameraServer::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraServer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void CameraServer::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "CameraServer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CameraServer";
  local_98 = 0;
  local_70 = 0xc;
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
LAB_00101528:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101528;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101546;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101546:
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
  StringName::StringName((StringName *)&local_78,"CameraServer",false);
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



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


