
/* DirAccessUnix::current_is_dir() const */

DirAccessUnix __thiscall DirAccessUnix::current_is_dir(DirAccessUnix *this)

{
  return this[0x198];
}



/* DirAccessUnix::current_is_hidden() const */

DirAccessUnix __thiscall DirAccessUnix::current_is_hidden(DirAccessUnix *this)

{
  return this[0x199];
}



/* DirAccessUnix::drives_are_shortcuts() */

undefined8 DirAccessUnix::drives_are_shortcuts(void)

{
  return 1;
}



/* DirAccessUnix::list_dir_end() */

void __thiscall DirAccessUnix::list_dir_end(DirAccessUnix *this)

{
  if (*(DIR **)(this + 400) != (DIR *)0x0) {
    closedir(*(DIR **)(this + 400));
  }
  *(undefined8 *)(this + 400) = 0;
  this[0x198] = (DirAccessUnix)0x0;
  return;
}



/* DirAccessUnix::is_hidden(String const&) */

undefined8 __thiscall DirAccessUnix::is_hidden(DirAccessUnix *this,String *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = String::operator!=(param_1,".");
  if (cVar1 != '\0') {
    cVar1 = String::operator!=(param_1,"..");
    if (cVar1 != '\0') {
      uVar2 = String::begins_with((char *)param_1);
      return uVar2;
    }
  }
  return 0;
}



/* DirAccessUnix::get_filesystem_type() const */

DirAccessUnix * __thiscall DirAccessUnix::get_filesystem_type(DirAccessUnix *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::get_space_left() */

long DirAccessUnix::get_space_left(void)

{
  long *plVar1;
  int iVar2;
  char *__file;
  long lVar3;
  long in_FS_OFFSET;
  long local_90;
  statvfs64 local_88;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  String::utf8();
  __file = (char *)CharString::get_data();
  iVar2 = statvfs64(__file,&local_88);
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_90 + -0x10),false);
    }
  }
  lVar3 = 0;
  if (iVar2 == 0) {
    lVar3 = local_88.f_bavail * local_88.f_frsize;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::list_dir_begin() */

byte __thiscall DirAccessUnix::list_dir_begin(DirAccessUnix *this)

{
  long *plVar1;
  long lVar2;
  char *__name;
  DIR *pDVar3;
  long in_FS_OFFSET;
  long local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x180) == list_dir_end) {
    if (*(DIR **)(this + 400) != (DIR *)0x0) {
      closedir(*(DIR **)(this + 400));
    }
    *(undefined8 *)(this + 400) = 0;
    this[0x198] = (DirAccessUnix)0x0;
  }
  else {
    (**(code **)(*(long *)this + 0x180))();
  }
  String::utf8();
  __name = (char *)CharString::get_data();
  pDVar3 = opendir(__name);
  *(DIR **)(this + 400) = pDVar3;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_28 + -0x10),false);
    }
    pDVar3 = *(DIR **)(this + 400);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(pDVar3 == (DIR *)0x0) & 0x13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::~DirAccessUnix() */

void __thiscall DirAccessUnix::~DirAccessUnix(DirAccessUnix *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106158;
  if (*(DIR **)(this + 400) != (DIR *)0x0) {
    closedir(*(DIR **)(this + 400));
  }
  this[0x198] = (DirAccessUnix)0x0;
  *(undefined8 *)(this + 400) = 0;
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      DirAccess::~DirAccess((DirAccess *)this);
      return;
    }
  }
  DirAccess::~DirAccess((DirAccess *)this);
  return;
}



/* DirAccessUnix::~DirAccessUnix() */

void __thiscall DirAccessUnix::~DirAccessUnix(DirAccessUnix *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106158;
  if (*(DIR **)(this + 400) != (DIR *)0x0) {
    closedir(*(DIR **)(this + 400));
  }
  this[0x198] = (DirAccessUnix)0x0;
  *(undefined8 *)(this + 400) = 0;
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  DirAccess::~DirAccess((DirAccess *)this);
  operator_delete(this,0x1a8);
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



/* DirAccessUnix::is_writable(String) */

ulong __thiscall DirAccessUnix::is_writable(DirAccessUnix *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *__name;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  cVar4 = String::is_relative_path();
  if (cVar4 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_40,this,1);
    String::path_join((String *)&local_38);
    lVar3 = local_38;
    lVar2 = *param_2;
    if (lVar2 == local_38) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
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
          lVar2 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *param_2 = local_38;
    }
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_38,this,param_2);
  lVar3 = local_38;
  lVar2 = *param_2;
  if (lVar2 == local_38) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
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
        lVar2 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *param_2 = local_38;
  }
  String::utf8();
  __name = (char *)CharString::get_data();
  iVar5 = access(__name,2);
  lVar2 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _global_unlock();
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)param_2 >> 8),iVar5 == 0) & 0xffffffff;
}



/* DirAccessUnix::is_readable(String) */

ulong __thiscall DirAccessUnix::is_readable(DirAccessUnix *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *__name;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  cVar4 = String::is_relative_path();
  if (cVar4 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_40,this,1);
    String::path_join((String *)&local_38);
    lVar3 = local_38;
    lVar2 = *param_2;
    if (lVar2 == local_38) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
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
          lVar2 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *param_2 = local_38;
    }
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_38,this,param_2);
  lVar3 = local_38;
  lVar2 = *param_2;
  if (lVar2 == local_38) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
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
        lVar2 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *param_2 = local_38;
  }
  String::utf8();
  __name = (char *)CharString::get_data();
  iVar5 = access(__name,4);
  lVar2 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _global_unlock();
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)param_2 >> 8),iVar5 == 0) & 0xffffffff;
}



/* DirAccessUnix::make_dir(String) */

undefined4 __thiscall DirAccessUnix::make_dir(DirAccessUnix *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *__path;
  int *piVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  cVar4 = String::is_relative_path();
  if (cVar4 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_40,this,1);
    String::path_join((String *)&local_38);
    lVar3 = local_38;
    lVar2 = *param_2;
    if (lVar2 == local_38) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
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
          lVar2 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *param_2 = local_38;
    }
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_38,this,param_2);
  lVar3 = local_38;
  lVar2 = *param_2;
  if (lVar2 == local_38) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
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
        lVar2 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *param_2 = local_38;
  }
  String::utf8();
  __path = (char *)CharString::get_data();
  iVar5 = mkdir(__path,0x1fd);
  lVar2 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar6 = __errno_location();
  uVar7 = 0;
  if ((iVar5 != 0) && (uVar7 = 0x20, *piVar6 != 0x11)) {
    uVar7 = 0x14;
  }
  _global_unlock();
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* DirAccessUnix::dir_exists(String) */

bool __thiscall DirAccessUnix::dir_exists(DirAccessUnix *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  char *__file;
  long lVar5;
  stat64 *psVar6;
  long in_FS_OFFSET;
  byte bVar7;
  long local_d8;
  long local_d0;
  stat64 local_c8;
  long local_30;
  
  bVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  cVar3 = String::is_relative_path();
  if (cVar3 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_d8,this,1);
    String::path_join((String *)&local_d0);
    lVar2 = local_d0;
    lVar5 = *param_2;
    if (lVar5 == local_d0) {
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar5 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      *param_2 = local_d0;
    }
    lVar5 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_d0,this,param_2);
  lVar2 = local_d0;
  lVar5 = *param_2;
  if (lVar5 == local_d0) {
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar5 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    *param_2 = local_d0;
  }
  psVar6 = &local_c8;
  for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
    psVar6->st_dev = 0;
    psVar6 = (stat64 *)((long)psVar6 + ((ulong)bVar7 * -2 + 1) * 8);
  }
  String::utf8();
  __file = (char *)CharString::get_data();
  iVar4 = stat64(__file,&local_c8);
  lVar5 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  _global_unlock();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4 == 0 && (local_c8.st_mode & 0xf000) == 0x4000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::is_case_sensitive(String const&) const */

uint __thiscall DirAccessUnix::is_case_sensitive(DirAccessUnix *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  int __fd;
  int iVar6;
  long lVar7;
  char *__file;
  uint uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  ulong local_48;
  long local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00100d75;
      LOCK();
      lVar7 = *plVar1;
      bVar9 = lVar2 == lVar7;
      if (bVar9) {
        *plVar1 = lVar2 + 1;
        lVar7 = lVar2;
      }
      UNLOCK();
    } while (!bVar9);
    if (lVar7 != -1) {
      local_48 = *(ulong *)param_1;
    }
  }
LAB_00100d75:
  cVar5 = String::is_absolute_path();
  if (cVar5 == '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_40,this,1);
    String::path_join((String *)&local_38);
    uVar4 = local_38;
    uVar3 = local_48;
    if (local_48 == local_38) {
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(uVar4 - 0x10),false);
        }
      }
    }
    else {
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(uVar3 - 0x10),false);
        }
      }
      local_48 = local_38;
    }
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_38,this,&local_48);
  uVar4 = local_38;
  uVar3 = local_48;
  if (local_48 == local_38) {
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(uVar4 - 0x10),false);
      }
    }
  }
  else {
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(uVar3 - 0x10),false);
      }
    }
    local_48 = local_38;
  }
  String::utf8();
  __file = (char *)CharString::get_data();
  __fd = open64(__file,0x800);
  uVar3 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(uVar3 - 0x10),false);
    }
  }
  if (__fd != 0) {
    local_38 = 0;
    iVar6 = ioctl(__fd,0x80086601,(String *)&local_38);
    if (-1 < iVar6) {
      close(__fd);
      uVar8 = ((uint)(local_38 >> 0x1e) ^ 1) & 1;
      goto LAB_00100e90;
    }
    close(__fd);
  }
  uVar8 = 1;
LAB_00100e90:
  uVar3 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(uVar3 - 0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::get_current_dir(bool) const */

DirAccessUnix * __thiscall DirAccessUnix::get_current_dir(DirAccessUnix *this,bool param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  undefined7 in_register_00000031;
  long *plVar5;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar5 = (long *)CONCAT71(in_register_00000031,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::_get_root_path();
  if (local_70 == 0) {
    *(undefined8 *)this = 0;
    if (plVar5[0x34] == 0) goto LAB_001010b5;
LAB_0010107b:
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)(plVar5 + 0x34));
LAB_0010108a:
    if (local_70 == 0) goto LAB_001010b5;
  }
  else {
    if (1 < *(uint *)(local_70 + -8)) {
      local_60 = 0;
      local_58 = &_LC3;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      String::replace_first((String *)&local_68,(String *)(plVar5 + 0x34));
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      cVar4 = String::begins_with((char *)&local_68);
      if (cVar4 == '\0') {
        (**(code **)(*plVar5 + 0x150))((String *)&local_58,plVar5);
        String::operator+((String *)this,(String *)&local_58);
      }
      else {
        String::substr((int)(String *)&local_58,(int)(String *)&local_68);
        (**(code **)(*plVar5 + 0x150))((StrRange *)&local_60,plVar5);
        String::operator+((String *)this,(String *)&local_60);
        lVar2 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar5 = (long *)(local_60 + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
      }
      puVar3 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar5 = (long *)(local_58 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
        }
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar5 = (long *)(local_68 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      goto LAB_0010108a;
    }
    *(undefined8 *)this = 0;
    if (plVar5[0x34] != 0) goto LAB_0010107b;
  }
  LOCK();
  plVar5 = (long *)(local_70 + -0x10);
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    Memory::free_static((void *)(local_70 + -0x10),false);
  }
LAB_001010b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::file_exists(String) */

bool __thiscall DirAccessUnix::file_exists(DirAccessUnix *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  char *__file;
  long lVar5;
  stat64 *psVar6;
  long in_FS_OFFSET;
  byte bVar7;
  long local_c0;
  stat64 local_b8;
  long local_20;
  
  bVar7 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  cVar3 = String::is_relative_path();
  if (cVar3 != '\0') {
    String::path_join((String *)&local_c0);
    lVar2 = local_c0;
    lVar5 = *param_2;
    if (lVar5 == local_c0) {
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar5 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      *param_2 = local_c0;
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_c0,this,param_2);
  lVar2 = local_c0;
  lVar5 = *param_2;
  if (lVar5 == local_c0) {
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar5 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    *param_2 = local_c0;
  }
  psVar6 = &local_b8;
  for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
    psVar6->st_dev = 0;
    psVar6 = (stat64 *)((long)psVar6 + ((ulong)bVar7 * -2 + 1) * 8);
  }
  String::utf8();
  __file = (char *)CharString::get_data();
  iVar4 = stat64(__file,&local_b8);
  lVar5 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  _global_unlock();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4 == 0 && (local_b8.st_mode & 0xf000) != 0x4000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::get_modified_time(String) */

__time_t __thiscall DirAccessUnix::get_modified_time(DirAccessUnix *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  char *__file;
  long lVar5;
  stat64 *psVar6;
  long in_FS_OFFSET;
  byte bVar7;
  long local_c0;
  stat64 local_b8;
  long local_20;
  
  bVar7 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::is_relative_path();
  if (cVar3 != '\0') {
    String::path_join((String *)&local_c0);
    lVar2 = local_c0;
    lVar5 = *param_2;
    if (lVar5 == local_c0) {
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar5 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      *param_2 = local_c0;
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_c0,this,param_2);
  lVar2 = local_c0;
  lVar5 = *param_2;
  if (lVar5 == local_c0) {
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar5 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    *param_2 = local_c0;
  }
  psVar6 = &local_b8;
  for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
    psVar6->st_dev = 0;
    psVar6 = (stat64 *)((long)psVar6 + ((ulong)bVar7 * -2 + 1) * 8);
  }
  String::utf8();
  __file = (char *)CharString::get_data();
  iVar4 = stat64(__file,&local_b8);
  lVar5 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (iVar4 != 0) {
    _err_print_error("get_modified_time","drivers/unix/dir_access_unix.cpp",0x88,
                     "Method/function failed. Returning: 0",0,0);
    local_b8.st_mtim.tv_sec = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b8.st_mtim.tv_sec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::create_link(String, String) */

bool __thiscall DirAccessUnix::create_link(DirAccessUnix *this,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *__to;
  char *__from;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = String::is_relative_path();
  if (cVar4 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_40,this,1);
    String::path_join((String *)&local_38);
    lVar3 = local_38;
    lVar2 = *param_3;
    if (lVar2 == local_38) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
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
          lVar2 = *param_3;
          *param_3 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *param_3 = local_38;
    }
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x158))(&local_38,this,param_2);
  lVar3 = local_38;
  lVar2 = *param_2;
  if (lVar2 == local_38) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
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
        lVar2 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *param_2 = local_38;
  }
  (**(code **)(*(long *)this + 0x158))(&local_38,this,param_3);
  lVar3 = local_38;
  lVar2 = *param_3;
  if (lVar2 == local_38) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
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
        lVar2 = *param_3;
        *param_3 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *param_3 = local_38;
  }
  String::utf8();
  __to = (char *)CharString::get_data();
  String::utf8();
  __from = (char *)CharString::get_data();
  iVar5 = symlink(__from,__to);
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5 != 0;
}



/* DirAccessUnix::get_next() */

void DirAccessUnix::get_next(void)

{
  long *plVar1;
  uchar uVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  dirent64 *pdVar8;
  char *__file;
  long lVar9;
  long *in_RSI;
  StrRange *in_RDI;
  stat64 *psVar10;
  long in_FS_OFFSET;
  byte bVar11;
  undefined8 local_e8;
  long local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  stat64 local_c8;
  long local_30;
  
  bVar11 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((DIR *)in_RSI[0x32] != (DIR *)0x0) {
    pdVar8 = readdir64((DIR *)in_RSI[0x32]);
    if (pdVar8 != (dirent64 *)0x0) {
      pcVar3 = *(code **)(*in_RSI + 0x240);
      if (pcVar3 == fix_unicode_name) {
        String::utf8((char *)&local_e8,(int)pdVar8 + 0x13);
      }
      else {
        (*pcVar3)(&local_e8);
      }
      uVar2 = pdVar8->d_type;
      if ((uVar2 == '\0') || (uVar2 == '\n')) {
        String::path_join((String *)&local_e0);
        psVar10 = &local_c8;
        for (lVar9 = 0x12; lVar9 != 0; lVar9 = lVar9 + -1) {
          psVar10->st_dev = 0;
          psVar10 = (stat64 *)((long)psVar10 + ((ulong)bVar11 * -2 + 1) * 8);
        }
        String::utf8();
        __file = (char *)CharString::get_data();
        iVar7 = stat64(__file,&local_c8);
        puVar4 = local_d8;
        if (local_d8 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_d8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d8 = (undefined *)0x0;
            Memory::free_static(puVar4 + -0x10,false);
          }
        }
        lVar9 = local_e0;
        *(bool *)(in_RSI + 0x33) = iVar7 == 0 && (local_c8.st_mode & 0xf000) == 0x4000;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
      }
      else {
        *(bool *)(in_RSI + 0x33) = uVar2 == '\x04';
      }
      if (*(code **)(*in_RSI + 0x248) == is_hidden) {
        cVar5 = String::operator!=((String *)&local_e8,".");
        if ((cVar5 == '\0') || (cVar5 = String::operator!=((String *)&local_e8,".."), cVar5 == '\0')
           ) {
          uVar6 = 0;
        }
        else {
          uVar6 = String::begins_with((char *)&local_e8);
        }
      }
      else {
        uVar6 = (**(code **)(*in_RSI + 0x248))();
      }
      *(undefined1 *)((long)in_RSI + 0x199) = uVar6;
      *(undefined8 *)in_RDI = local_e8;
      goto LAB_00101b14;
    }
    pcVar3 = *(code **)(*in_RSI + 0x180);
    if (pcVar3 == list_dir_end) {
      if ((DIR *)in_RSI[0x32] != (DIR *)0x0) {
        closedir((DIR *)in_RSI[0x32]);
      }
      in_RSI[0x32] = 0;
      *(undefined1 *)(in_RSI + 0x33) = 0;
    }
    else {
      (*pcVar3)();
    }
  }
  *(undefined8 *)in_RDI = 0;
  local_d8 = &_LC3;
  local_d0 = 0;
  String::parse_latin1(in_RDI);
LAB_00101b14:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::change_dir(String) */

undefined8 __thiscall DirAccessUnix::change_dir(DirAccessUnix *this,CowData *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  int iVar10;
  long in_FS_OFFSET;
  long local_870;
  undefined *local_868;
  undefined *local_860;
  char *local_858;
  size_t local_850;
  char local_848 [2056];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  (**(code **)(*(long *)this + 0x158))((String *)&local_858,this,param_2);
  pcVar6 = local_858;
  puVar8 = *(undefined **)param_2;
  if (puVar8 == local_858) {
    if (puVar8 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_858 = (undefined *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
  }
  else {
    if (puVar8 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)param_2;
        *(undefined8 *)param_2 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(char **)param_2 = local_858;
  }
  local_870 = 0;
  pcVar6 = getcwd(local_848,0x800);
  if (pcVar6 == (char *)0x0) {
    uVar9 = 0x2f;
    _err_print_error("change_dir","drivers/unix/dir_access_unix.cpp",0x158,
                     "Parameter \"getcwd(real_current_dir_name, 2048)\" is null.",0,0);
    goto LAB_00101eab;
  }
  iVar10 = (int)local_848;
  iVar5 = String::parse_utf8((char *)&local_870,iVar10,true);
  if (iVar5 != 0) {
    local_850 = strlen(local_848);
    local_858 = local_848;
    String::parse_latin1((StrRange *)&local_870);
  }
  local_868 = (undefined *)0x0;
  local_858 = "";
  local_850 = 0;
  String::parse_latin1((StrRange *)&local_868);
  cVar4 = String::is_relative_path();
  if (cVar4 == '\0') {
    if (local_868 != *(undefined **)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_868,param_2);
    }
  }
  else {
    String::path_join((String *)&local_860);
    String::simplify_path();
    pcVar6 = local_858;
    puVar8 = local_860;
    if (local_860 == local_858) {
      pcVar7 = local_858;
      if (local_858 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_858 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        pcVar7 = local_860;
        if (*plVar1 == 0) {
          local_858 = (undefined *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
          pcVar7 = local_860;
        }
      }
    }
    else {
      if (local_860 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_860 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_860 = (undefined *)0x0;
          Memory::free_static(puVar8 + -0x10,false);
        }
      }
      local_860 = local_858;
      pcVar7 = local_858;
    }
    puVar8 = local_868;
    if (pcVar7 != local_868) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_868,(CowData *)&local_860);
      puVar8 = local_860;
    }
    puVar3 = local_860;
    if (puVar8 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_860 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
  }
  String::utf8();
  pcVar6 = (char *)CharString::get_data();
  iVar5 = chdir(pcVar6);
  pcVar6 = local_858;
  if (local_858 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_858 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_858 = (undefined *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
    }
  }
  uVar9 = 0x1f;
  if (iVar5 == 0) {
    DirAccess::_get_root_path();
    if (((local_860 == (undefined *)0x0) || (*(uint *)(local_860 + -8) < 2)) ||
       (cVar4 = String::begins_with((String *)&local_868), cVar4 != '\0')) {
LAB_00101e0b:
      if (*(undefined **)(this + 0x1a0) != local_868) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1a0),(CowData *)&local_868);
      }
      String::utf8();
      pcVar6 = (char *)CharString::get_data();
      iVar5 = chdir(pcVar6);
      pcVar6 = local_858;
      if (local_858 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_858 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_858 = (undefined *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      uVar9 = 0;
      if (iVar5 != 0) {
        _err_print_error("change_dir","drivers/unix/dir_access_unix.cpp",0x179,
                         "Condition \"chdir(prev_dir.utf8().get_data()) != 0\" is true. Returning: ERR_BUG"
                         ,0,0);
        goto LAB_001021e5;
      }
    }
    else {
      pcVar6 = getcwd(local_848,0x800);
      if (pcVar6 != (char *)0x0) {
        local_858 = (undefined *)0x0;
        String::parse_utf8((char *)&local_858,iVar10,true);
        cVar4 = String::begins_with((String *)&local_858);
        if ((cVar4 == '\0') && (local_868 != *(undefined **)(this + 0x1a0))) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_868,(CowData *)(this + 0x1a0));
        }
        pcVar6 = local_858;
        if (local_858 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_858 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_858 = (undefined *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
        goto LAB_00101e0b;
      }
      _err_print_error("change_dir","drivers/unix/dir_access_unix.cpp",0x16e,
                       "Parameter \"getcwd(real_current_dir_name, 2048)\" is null.",0,0);
LAB_001021e5:
      uVar9 = 0x2f;
    }
    puVar8 = local_860;
    if (local_860 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_860 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_860 = (undefined *)0x0;
        Memory::free_static(puVar8 + -0x10,false);
      }
    }
  }
  puVar8 = local_868;
  if (local_868 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_868 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_868 = (undefined *)0x0;
      Memory::free_static(puVar8 + -0x10,false);
    }
  }
LAB_00101eab:
  lVar2 = local_870;
  if (local_870 != 0) {
    LOCK();
    plVar1 = (long *)(local_870 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_870 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _global_unlock();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* DirAccessUnix::is_link(String) */

undefined4 __thiscall DirAccessUnix::is_link(DirAccessUnix *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *__file;
  long lVar6;
  stat64 *psVar7;
  long in_FS_OFFSET;
  byte bVar8;
  long local_d8;
  long local_d0;
  stat64 local_c8;
  long local_30;
  
  bVar8 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::is_relative_path();
  if (cVar3 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_d8,this,1);
    String::path_join((String *)&local_d0);
    lVar2 = local_d0;
    lVar6 = *param_2;
    if (lVar6 == local_d0) {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar6 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      *param_2 = local_d0;
    }
    lVar6 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_d0,this,param_2);
  lVar2 = local_d0;
  lVar6 = *param_2;
  if (lVar6 == local_d0) {
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    *param_2 = local_d0;
  }
  cVar3 = String::ends_with((char *)param_2);
  if (cVar3 != '\0') {
    String::left((int)(String *)&local_d0);
    lVar2 = local_d0;
    lVar6 = *param_2;
    if (lVar6 == local_d0) {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar6 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      *param_2 = local_d0;
    }
  }
  psVar7 = &local_c8;
  for (lVar6 = 0x12; lVar6 != 0; lVar6 = lVar6 + -1) {
    psVar7->st_dev = 0;
    psVar7 = (stat64 *)((long)psVar7 + ((ulong)bVar8 * -2 + 1) * 8);
  }
  String::utf8();
  __file = (char *)CharString::get_data();
  iVar4 = lstat64(__file,&local_c8);
  lVar6 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = CONCAT31((int3)((local_c8.st_mode & 0xf000) >> 8),(local_c8.st_mode & 0xf000) == 0xa000)
    ;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* DirAccessUnix::read_link(String) */

char * DirAccessUnix::read_link(char *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  ssize_t sVar5;
  long lVar6;
  long in_FS_OFFSET;
  byte bVar7;
  long local_148;
  long local_140;
  char local_138 [264];
  long local_30;
  
  bVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::is_relative_path();
  if (cVar3 != '\0') {
    (**(code **)(*param_2 + 0x1b0))(&local_148,param_2,1);
    String::path_join((String *)&local_140);
    lVar2 = local_140;
    lVar6 = *param_3;
    if (lVar6 == local_140) {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_140 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar6 = *param_3;
          *param_3 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      *param_3 = local_140;
    }
    lVar6 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  (**(code **)(*param_2 + 0x158))((String *)&local_140,param_2,param_3);
  lVar2 = local_140;
  lVar6 = *param_3;
  if (lVar6 == local_140) {
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *param_3;
        *param_3 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    *param_3 = local_140;
  }
  cVar3 = String::ends_with((char *)param_3);
  if (cVar3 != '\0') {
    String::left((int)(String *)&local_140);
    lVar2 = local_140;
    lVar6 = *param_3;
    if (lVar6 == local_140) {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_140 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar6 = *param_3;
          *param_3 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      *param_3 = local_140;
    }
  }
  pcVar4 = local_138;
  for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    pcVar4 = pcVar4 + (ulong)bVar7 * -0x10 + 8;
  }
  String::utf8();
  pcVar4 = (char *)CharString::get_data();
  sVar5 = readlink(pcVar4,local_138,0x100);
  lVar6 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  if (0 < sVar5) {
    String::parse_utf8(param_1,(int)local_138,SUB81(sVar5,0));
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* DirAccessUnix::remove(String) */

undefined8 __thiscall DirAccessUnix::remove(DirAccessUnix *this,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  stat64 *psVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte bVar11;
  long local_d8;
  long local_d0;
  stat64 local_c8;
  long local_30;
  
  bVar11 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::is_relative_path();
  if (cVar3 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_d8,this,1);
    String::path_join((String *)&local_d0);
    lVar7 = local_d0;
    lVar8 = *param_2;
    if (lVar8 == local_d0) {
      if (lVar8 != 0) {
        LOCK();
        plVar1 = (long *)(lVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
      if (lVar8 != 0) {
        LOCK();
        plVar1 = (long *)(lVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      *param_2 = local_d0;
    }
    lVar8 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_d0,this,param_2);
  lVar7 = local_d0;
  lVar8 = *param_2;
  if (lVar8 == local_d0) {
    if (lVar8 != 0) {
      LOCK();
      plVar1 = (long *)(lVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar8 != 0) {
      LOCK();
      plVar1 = (long *)(lVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar8 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    *param_2 = local_d0;
  }
  cVar3 = String::ends_with((char *)param_2);
  if (cVar3 != '\0') {
    String::left((int)(String *)&local_d0);
    lVar7 = local_d0;
    lVar8 = *param_2;
    if (lVar8 == local_d0) {
      if (lVar8 != 0) {
        LOCK();
        plVar1 = (long *)(lVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
      if (lVar8 != 0) {
        LOCK();
        plVar1 = (long *)(lVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      *param_2 = local_d0;
    }
  }
  psVar9 = &local_c8;
  for (lVar8 = 0x12; lVar8 != 0; lVar8 = lVar8 + -1) {
    psVar9->st_dev = 0;
    psVar9 = (stat64 *)((long)psVar9 + ((ulong)bVar11 * -2 + 1) * 8);
  }
  String::utf8();
  pcVar5 = (char *)CharString::get_data();
  iVar4 = lstat64(pcVar5,&local_c8);
  lVar8 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (iVar4 == 0) {
    if ((local_c8.st_mode & 0xf000) == 0x4000) {
      pcVar2 = *(code **)(*(long *)this + 0x210);
      local_d0 = 0;
      plVar1 = (long *)(*param_2 + -0x10);
      if (*param_2 != 0) {
        do {
          lVar8 = *plVar1;
          if (lVar8 == 0) goto LAB_00102ba1;
          LOCK();
          lVar7 = *plVar1;
          bVar10 = lVar8 == lVar7;
          if (bVar10) {
            *plVar1 = lVar8 + 1;
            lVar7 = lVar8;
          }
          UNLOCK();
        } while (!bVar10);
        if (lVar7 != -1) {
          local_d0 = *param_2;
        }
      }
LAB_00102ba1:
      cVar3 = (*pcVar2)(this);
      lVar8 = local_d0;
      if (cVar3 != '\0') {
        if (local_d0 != 0) {
          LOCK();
          plVar1 = (long *)(local_d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        goto LAB_00102966;
      }
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      String::utf8();
      pcVar5 = (char *)CharString::get_data();
      iVar4 = rmdir(pcVar5);
      lVar8 = local_d0;
    }
    else {
LAB_00102966:
      String::utf8();
      pcVar5 = (char *)CharString::get_data();
      iVar4 = unlink(pcVar5);
      lVar8 = local_d0;
    }
    local_d0 = lVar8;
    if (lVar8 != 0) {
      LOCK();
      plVar1 = (long *)(lVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    if (iVar4 == 0) {
      if (remove_notification_func != (code *)0x0) {
        (*remove_notification_func)(param_2);
      }
      uVar6 = 0;
      goto LAB_001029d5;
    }
  }
  uVar6 = 1;
LAB_001029d5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::rename(String, String) */

ulong __thiscall DirAccessUnix::rename(DirAccessUnix *this,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  char *__new;
  char *__old;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = String::is_relative_path();
  if (cVar4 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_50,this,1);
    String::path_join((String *)&local_48);
    lVar8 = local_48;
    lVar2 = *param_2;
    if (lVar2 == local_48) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
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
          lVar2 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *param_2 = local_48;
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
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_48,this,param_2);
  lVar8 = local_48;
  lVar2 = *param_2;
  if (lVar2 == local_48) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
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
        lVar2 = *param_2;
        *param_2 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *param_2 = local_48;
  }
  cVar4 = String::ends_with((char *)param_2);
  iVar5 = (int)(String *)&local_48;
  if (cVar4 != '\0') {
    String::left(iVar5);
    lVar8 = local_48;
    lVar2 = *param_2;
    if (lVar2 == local_48) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
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
          lVar2 = *param_2;
          *param_2 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *param_2 = local_48;
    }
  }
  cVar4 = String::is_relative_path();
  if (cVar4 != '\0') {
    (**(code **)(*(long *)this + 0x1b0))(&local_50,this,1);
    String::path_join((String *)&local_48);
    lVar8 = local_48;
    lVar2 = *param_3;
    if (lVar2 == local_48) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
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
          lVar2 = *param_3;
          *param_3 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *param_3 = local_48;
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
  }
  (**(code **)(*(long *)this + 0x158))((String *)&local_48,this,param_3);
  lVar8 = local_48;
  lVar2 = *param_3;
  if (lVar2 == local_48) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
        cVar4 = String::ends_with((char *)param_3);
        goto joined_r0x00102f3b;
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
        lVar2 = *param_3;
        *param_3 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *param_3 = local_48;
  }
  cVar4 = String::ends_with((char *)param_3);
joined_r0x00102f3b:
  if (cVar4 != '\0') {
    String::left(iVar5);
    lVar8 = local_48;
    lVar2 = *param_3;
    if (lVar2 == local_48) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
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
          lVar2 = *param_3;
          *param_3 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *param_3 = local_48;
    }
  }
  String::utf8();
  __new = (char *)CharString::get_data();
  String::utf8();
  __old = (char *)CharString::get_data();
  iVar5 = ::rename(__old,__new);
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
  if ((iVar5 == 0) || (piVar6 = __errno_location(), *piVar6 != 0x12)) {
    uVar7 = (ulong)(iVar5 != 0);
  }
  else {
    uVar7 = (**(code **)(*(long *)this + 0x1f8))(this,param_2,param_3,0xffffffff);
    if ((int)uVar7 == 0) {
      pcVar3 = *(code **)(*(long *)this + 0x208);
      local_48 = 0;
      plVar1 = (long *)(*param_2 + -0x10);
      if (*param_2 != 0) {
        do {
          lVar2 = *plVar1;
          if (lVar2 == 0) goto LAB_00103071;
          LOCK();
          lVar8 = *plVar1;
          bVar9 = lVar2 == lVar8;
          if (bVar9) {
            *plVar1 = lVar2 + 1;
            lVar8 = lVar2;
          }
          UNLOCK();
        } while (!bVar9);
        if (lVar8 != -1) {
          local_48 = *param_2;
        }
      }
LAB_00103071:
      uVar7 = (*pcVar3)(this);
      lVar2 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
          uVar7 = uVar7 & 0xffffffff;
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::DirAccessUnix() */

void __thiscall DirAccessUnix::DirAccessUnix(DirAccessUnix *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_848;
  char local_838 [2056];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00106158;
  *(undefined8 *)(this + 0x17c) = 2;
  *(undefined2 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  pcVar4 = getcwd(local_838,0x800);
  if (pcVar4 == (char *)0x0) {
    _err_print_error("DirAccessUnix","drivers/unix/dir_access_unix.cpp",0x22b,
                     "Parameter \"getcwd(real_current_dir_name, 2048)\" is null.",0,0);
  }
  else {
    iVar3 = String::parse_utf8((char *)(this + 0x1a0),(int)local_838,true);
    if (iVar3 != 0) {
      strlen(local_838);
      String::parse_latin1((StrRange *)(this + 0x1a0));
    }
    local_848 = 0;
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    if (*(long *)(this + 0x1a0) != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010334b;
        LOCK();
        lVar5 = *plVar1;
        bVar6 = lVar2 == lVar5;
        if (bVar6) {
          *plVar1 = lVar2 + 1;
          lVar5 = lVar2;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar5 != -1) {
        local_848 = *(long *)(this + 0x1a0);
      }
    }
LAB_0010334b:
    change_dir(this);
    if (local_848 != 0) {
      LOCK();
      plVar1 = (long *)(local_848 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_848 + -0x10),false);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DirAccessUnix::get_drive(int) */

CowData<char32_t> * DirAccessUnix::get_drive(int param_1)

{
  uint uVar1;
  uint in_EDX;
  CowData *pCVar2;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  long lVar3;
  long in_FS_OFFSET;
  long *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (long *)0x0;
  _get_drives((List *)&local_40);
  if ((int)in_EDX < 0) {
    if (local_40 == (long *)0x0) goto LAB_00103e60;
    lVar3 = (long)(int)local_40[2];
  }
  else {
    if (local_40 != (long *)0x0) {
      lVar3 = (long)(int)local_40[2];
      if ((int)local_40[2] <= (int)in_EDX) goto LAB_00103e63;
      pCVar2 = (CowData *)*local_40;
      if (in_EDX != 0) {
        uVar1 = 0;
        if ((in_EDX & 1) != 0) {
          pCVar2 = *(CowData **)(pCVar2 + 8);
          uVar1 = 1;
          if (in_EDX == 1) goto LAB_00103e1f;
        }
        do {
          uVar1 = uVar1 + 2;
          pCVar2 = *(CowData **)(*(long *)(pCVar2 + 8) + 8);
        } while (in_EDX != uVar1);
      }
LAB_00103e1f:
      *(undefined8 *)this = 0;
      if (*(long *)pCVar2 != 0) {
        CowData<char32_t>::_ref(this,pCVar2);
      }
      goto LAB_00103e35;
    }
LAB_00103e60:
    lVar3 = 0;
  }
LAB_00103e63:
  _err_print_index_error
            ("get_drive","drivers/unix/dir_access_unix.cpp",0x122,(long)(int)in_EDX,lVar3,"p_drive",
             "list.size()","",false,false);
  *(undefined8 *)this = 0;
  local_38 = &_LC3;
  local_30 = 0;
  String::parse_latin1((StrRange *)this);
LAB_00103e35:
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::get_drive_count() */

undefined4 DirAccessUnix::get_drive_count(void)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  uVar1 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  _get_drives((List *)&local_28);
  if (local_28 != 0) {
    uVar1 = *(undefined4 *)(local_28 + 0x10);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessUnix::get_current_drive() */

int __thiscall DirAccessUnix::get_current_drive(DirAccessUnix *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_5c;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x1b0))((List *)&local_48,this,1);
  String::to_lower();
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
  local_5c = 0;
  iVar5 = 0;
  iVar6 = -1;
  do {
    if (*(code **)(*(long *)this + 0x188) == get_drive_count) {
      local_48 = 0;
      _get_drives((List *)&local_48);
      if (local_48 == 0) {
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_48);
LAB_001040f8:
        lVar2 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_5c;
      }
      iVar4 = *(int *)(local_48 + 0x10);
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_48);
    }
    else {
      iVar4 = (**(code **)(*(long *)this + 0x188))(this);
    }
    if (iVar4 <= iVar5) goto LAB_001040f8;
    (**(code **)(*(long *)this + 400))((List *)&local_48,this,iVar5);
    String::to_lower();
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
    if (local_50 == 0) {
      if (iVar6 < 0) goto LAB_001040b7;
      goto LAB_00104001;
    }
    iVar4 = (int)*(undefined8 *)(local_50 + -8);
    if (iVar6 < (int)(iVar4 + -1 + (uint)(iVar4 == 0))) {
LAB_001040b7:
      cVar3 = String::begins_with((String *)&local_58);
      if (cVar3 == '\0') {
        if (local_50 != 0) goto LAB_00103fe0;
      }
      else {
        local_5c = iVar5;
        if (local_50 != 0) {
          iVar6 = (int)*(undefined8 *)(local_50 + -8);
          iVar6 = iVar6 + -1 + (uint)(iVar6 == 0);
          goto LAB_00103fe0;
        }
        iVar6 = 0;
      }
    }
    else {
LAB_00103fe0:
      lVar2 = local_50;
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
LAB_00104001:
    iVar5 = iVar5 + 1;
  } while( true );
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



/* DirAccess::is_class_ptr(void*) const */

uint __thiscall DirAccess::is_class_ptr(DirAccess *this,void *param_1)

{
  return (uint)CONCAT71(0x1063,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1063,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1063,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* DirAccess::_getv(StringName const&, Variant&) const */

undefined8 DirAccess::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DirAccess::_setv(StringName const&, Variant const&) */

undefined8 DirAccess::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DirAccess::_validate_propertyv(PropertyInfo&) const */

void DirAccess::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* DirAccess::_property_can_revertv(StringName const&) const */

undefined8 DirAccess::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DirAccess::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DirAccess::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DirAccess::_notificationv(int, bool) */

void DirAccess::_notificationv(int param_1,bool param_2)

{
  return;
}



/* DirAccess::is_bundle(String const&) const */

undefined8 DirAccess::is_bundle(String *param_1)

{
  return 0;
}



/* DirAccessUnix::fix_unicode_name(char const*) const */

char * DirAccessUnix::fix_unicode_name(char *param_1)

{
  long lVar1;
  int in_EDX;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  String::utf8(param_1,in_EDX);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccess::_get_class_namev() const */

undefined8 * DirAccess::_get_class_namev(void)

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
LAB_00104453:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104453;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DirAccess");
      goto LAB_001044be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DirAccess");
LAB_001044be:
  return &_get_class_namev()::_class_name_static;
}



/* SortArray<List<String, DefaultAllocator>::Element*, List<String,
   DefaultAllocator>::AuxiliaryComparator<Comparator<String> >, true>::introsort(long, long,
   List<String, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<String,DefaultAllocator>::Element*,List<String,DefaultAllocator>::AuxiliaryComparator<Comparator<String>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element **ppEVar1;
  String *pSVar2;
  Element *pEVar3;
  char cVar4;
  Element **ppEVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Element **ppEVar10;
  Element **ppEVar11;
  long lVar12;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_78 = param_2;
  if (param_4 != 0) {
    ppEVar11 = param_3 + param_1;
    local_68 = param_2;
    local_60 = param_4;
LAB_001045b1:
    local_60 = local_60 + -1;
    ppEVar1 = param_3 + (lVar9 >> 1) + param_1;
    ppEVar5 = param_3 + local_68 + -1;
    cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar1);
    if (cVar4 == '\0') {
      cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar5);
      ppEVar10 = ppEVar11;
      if (cVar4 != '\0') goto LAB_0010460d;
      cVar4 = String::operator<((String *)*ppEVar1,(String *)*ppEVar5);
    }
    else {
      cVar4 = String::operator<((String *)*ppEVar1,(String *)*ppEVar5);
      ppEVar10 = ppEVar1;
      if (cVar4 != '\0') goto LAB_0010460d;
      cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar5);
      ppEVar1 = ppEVar11;
    }
    ppEVar10 = ppEVar1;
    if (cVar4 != '\0') {
      ppEVar10 = ppEVar5;
    }
LAB_0010460d:
    pSVar2 = (String *)*ppEVar10;
    lVar9 = local_68;
    local_78 = param_1;
    do {
      cVar4 = String::operator<((String *)param_3[local_78],pSVar2);
      if (cVar4 == '\0') {
LAB_00104654:
        lVar9 = lVar9 + -1;
        ppEVar5 = param_3 + lVar9;
        while (cVar4 = String::operator<(pSVar2,(String *)*ppEVar5), cVar4 != '\0') {
          if (param_1 == lVar9) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar9 = lVar9 + -1;
          ppEVar5 = ppEVar5 + -1;
        }
        if (lVar9 <= local_78) goto LAB_001046c0;
        pEVar3 = param_3[local_78];
        param_3[local_78] = *ppEVar5;
        *ppEVar5 = pEVar3;
      }
      else if (local_68 + -1 == local_78) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_00104654;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_00104782:
  lVar7 = lVar9 + -2 >> 1;
  local_50 = param_3 + param_1 + lVar7;
  local_58 = lVar7 * 2 + 2;
  do {
    pSVar2 = (String *)*local_50;
    lVar6 = local_58;
    local_70 = lVar7;
    if (local_58 < lVar9) {
      do {
        cVar4 = String::operator<((String *)param_3[param_1 + lVar6],
                                  (String *)param_3[param_1 + lVar6 + -1]);
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar6 + -1;
        lVar12 = lVar6;
        if (cVar4 == '\0') {
          lVar12 = lVar6 + 1;
          lVar8 = lVar6;
          ppEVar11 = param_3 + param_1 + lVar6;
        }
        lVar6 = lVar12 * 2;
        param_3[local_70 + param_1] = *ppEVar11;
        local_70 = lVar8;
      } while (lVar6 < lVar9);
      ppEVar5 = ppEVar11;
      if (lVar6 == lVar9) {
LAB_00104a4d:
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar8;
        *ppEVar5 = *ppEVar11;
      }
      lVar6 = lVar8 + -1;
      if (lVar8 <= lVar7) goto LAB_00104a9e;
      do {
        lVar12 = lVar6 >> 1;
        ppEVar11 = param_3 + param_1 + lVar12;
        cVar4 = String::operator<((String *)*ppEVar11,pSVar2);
        if (cVar4 == '\0') {
          param_3[lVar8 + param_1] = (Element *)pSVar2;
          goto joined_r0x0010490d;
        }
        param_3[lVar8 + param_1] = *ppEVar11;
        lVar6 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
        lVar8 = lVar12;
      } while (lVar7 < lVar12);
      *ppEVar11 = (Element *)pSVar2;
joined_r0x0010490d:
      if (lVar7 == 0) goto LAB_0010490f;
    }
    else {
      ppEVar5 = local_50;
      ppEVar11 = local_50;
      if (local_58 == lVar9) goto LAB_00104a4d;
LAB_00104a9e:
      *ppEVar11 = (Element *)pSVar2;
    }
    local_50 = local_50 + -1;
    lVar7 = lVar7 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_001046c0:
  introsort(local_78,local_68,param_3,local_60);
  lVar9 = local_78 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_68 = local_78;
  if (local_60 == 0) goto LAB_00104782;
  goto LAB_001045b1;
LAB_0010490f:
  ppEVar11 = param_3 + param_1;
  local_68 = (local_78 + -1) - param_1;
LAB_00104930:
  do {
    pSVar2 = (String *)ppEVar11[local_68];
    ppEVar11[local_68] = *ppEVar11;
    if (local_68 < 3) {
      if (local_68 != 2) {
        *ppEVar11 = (Element *)pSVar2;
        return;
      }
      lVar9 = param_1 + 1;
      lVar7 = 0;
      *ppEVar11 = param_3[lVar9];
LAB_00104a11:
      while( true ) {
        ppEVar1 = param_3 + param_1 + lVar7;
        cVar4 = String::operator<((String *)*ppEVar1,pSVar2);
        ppEVar5 = param_3 + lVar9;
        if (cVar4 == '\0') break;
        *ppEVar5 = *ppEVar1;
        if (lVar7 == 0) {
          local_68 = local_68 + -1;
          *ppEVar1 = (Element *)pSVar2;
          goto LAB_00104930;
        }
        lVar9 = param_1 + lVar7;
        lVar7 = (lVar7 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar9 = 2;
      do {
        cVar4 = String::operator<((String *)param_3[param_1 + lVar9],
                                  (String *)param_3[param_1 + lVar9 + -1]);
        lVar6 = lVar9 + -1;
        lVar7 = lVar9;
        ppEVar5 = param_3 + param_1 + lVar9 + -1;
        if (cVar4 == '\0') {
          lVar7 = lVar9 + 1;
          lVar6 = lVar9;
          ppEVar5 = param_3 + param_1 + lVar9;
        }
        lVar9 = lVar7 * 2;
        param_3[local_78 + param_1] = *ppEVar5;
        local_78 = lVar6;
      } while (lVar9 < local_68);
      if (lVar9 == local_68) {
        lVar9 = local_68 + -1 + param_1;
        lVar7 = local_68 + -2 >> 1;
        *ppEVar5 = param_3[lVar9];
        goto LAB_00104a11;
      }
      lVar9 = param_1 + lVar6;
      lVar7 = (lVar6 + -1) / 2;
      if (0 < lVar6) goto LAB_00104a11;
    }
    local_68 = local_68 + -1;
    *ppEVar5 = (Element *)pSVar2;
  } while( true );
}



/* DirAccess::get_class() const */

void DirAccess::get_class(void)

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



/* DirAccess::_initialize_classv() */

void DirAccess::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00104d2b;
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
LAB_00104e3a:
      if ((code *)PTR__bind_methods_00108008 != RefCounted::_bind_methods) {
LAB_00104e4a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00104e3a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00108008 != RefCounted::_bind_methods) goto LAB_00104e4a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "DirAccess";
  local_70 = 0;
  local_50 = 9;
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    DirAccess::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00104d2b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DirAccess::is_class(String const&) const */

undefined8 __thiscall DirAccess::is_class(DirAccess *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00104f2f;
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
LAB_00104f2f:
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
    if (cVar6 != '\0') goto LAB_00104fe3;
  }
  cVar6 = String::operator==(param_1,"DirAccess");
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
              if (lVar5 == 0) goto LAB_001050bb;
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
LAB_001050bb:
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
      if (cVar6 != '\0') goto LAB_00104fe3;
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
                if (lVar5 == 0) goto LAB_0010519b;
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
LAB_0010519b:
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
        if (cVar6 != '\0') goto LAB_00104fe3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00105244;
    }
  }
LAB_00104fe3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105244:
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
LAB_00105498:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105498;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001054b6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001054b6:
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



/* DirAccess::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall DirAccess::_get_property_listv(DirAccess *this,List *param_1,bool param_2)

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
  local_78 = "DirAccess";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DirAccess";
  local_98 = 0;
  local_70 = 9;
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
LAB_00105898:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105898;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001058b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001058b5:
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
  StringName::StringName((StringName *)&local_78,"DirAccess",false);
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



/* void List<String, DefaultAllocator>::sort_custom<Comparator<String> >() */

void __thiscall
List<String,DefaultAllocator>::sort_custom<Comparator<String>>(List<String,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  Element *pEVar4;
  Element **__src;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  String *pSVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar4;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
        pEVar10 = *(Element **)(pEVar10 + 8)) {
      *ppEVar5 = pEVar10;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar7 = 0;
  pEVar10 = pEVar4;
  do {
    pEVar10 = (Element *)((long)pEVar10 >> 1);
    lVar7 = lVar7 + 1;
  } while (pEVar10 != (Element *)0x1);
  SortArray<List<String,DefaultAllocator>::Element*,List<String,DefaultAllocator>::AuxiliaryComparator<Comparator<String>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar7 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar10 = (Element *)0x1;
    pEVar11 = *__src;
    do {
      while( true ) {
        pSVar8 = (String *)__src[(long)pEVar10];
        ppEVar5 = __src + (long)pEVar10;
        cVar3 = String::operator<(pSVar8,(String *)pEVar11);
        if (cVar3 != '\0') break;
        while (cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]), cVar3 != '\0') {
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        pEVar10 = pEVar10 + 1;
        *ppEVar5 = (Element *)pSVar8;
        pSVar8 = (String *)*__src;
        pEVar11 = (Element *)pSVar8;
        if (pEVar4 == pEVar10) goto LAB_00106065;
      }
      __n = (long)pEVar10 * 8;
      pEVar10 = pEVar10 + 1;
      memmove(__src + 1,__src,__n);
      *__src = (Element *)pSVar8;
      pEVar11 = (Element *)pSVar8;
    } while (pEVar4 != pEVar10);
  }
  else {
    lVar7 = 1;
    do {
      while( true ) {
        lVar9 = lVar7;
        pSVar8 = (String *)__src[lVar9];
        cVar3 = String::operator<(pSVar8,(String *)*__src);
        if (cVar3 != '\0') break;
        ppEVar5 = __src + lVar9;
        while (cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]), cVar3 != '\0') {
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = (Element *)pSVar8;
        lVar7 = lVar9 + 1;
        if (lVar9 + 1 == 0x10) goto LAB_00105ee6;
      }
      memmove(__src + 1,__src,lVar9 * 8);
      *__src = (Element *)pSVar8;
      lVar7 = lVar9 + 1;
    } while (lVar9 + 1 != 0x10);
LAB_00105ee6:
    pEVar10 = (Element *)(lVar9 + 1);
    do {
      pSVar8 = (String *)__src[(long)pEVar10];
      ppEVar5 = __src + (long)pEVar10;
      pEVar11 = pEVar10;
      while( true ) {
        pEVar11 = pEVar11 + -1;
        cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]);
        if (cVar3 == '\0') break;
        if (pEVar11 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = (Element *)pSVar8;
      pEVar10 = pEVar10 + 1;
    } while (pEVar4 != pEVar10);
    pSVar8 = (String *)*__src;
  }
LAB_00106065:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pSVar8;
  *(undefined8 *)(pSVar8 + 0x10) = 0;
  *(Element **)(*__src + 8) = __src[1];
  pEVar10 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar10;
  *(Element **)(pEVar10 + 0x10) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (__src + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(__src,true);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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


