
/* uninitialize_mobile_vr_module(ModuleInitializationLevel) */

void uninitialize_mobile_vr_module(int param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  Ref *pRVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 2) && (mobile_vr != (Object *)0x0)) {
    cVar2 = (**(code **)(*(long *)mobile_vr + 0x160))();
    if (cVar2 != '\0') {
      (**(code **)(*(long *)mobile_vr + 0x170))();
    }
    lVar3 = XRServer::get_singleton();
    if (lVar3 != 0) {
      pRVar4 = (Ref *)XRServer::get_singleton();
      local_18 = (Object *)0x0;
      if (mobile_vr != (Object *)0x0) {
        pOVar5 = (Object *)__dynamic_cast(mobile_vr,&Object::typeinfo,&XRInterface::typeinfo,0);
        if (pOVar5 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          local_18 = pOVar5;
          if (cVar2 == '\0') {
            local_18 = (Object *)0x0;
          }
        }
      }
      XRServer::remove_interface(pRVar4);
      if (local_18 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_18);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_18 + 0x140))(local_18);
            Memory::free_static(local_18,false);
          }
        }
      }
    }
    if (mobile_vr != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar5 = mobile_vr;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(mobile_vr);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    mobile_vr = (Object *)0x0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* initialize_mobile_vr_module(ModuleInitializationLevel) */

void initialize_mobile_vr_module(int param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  MobileVRInterface *this;
  Ref *pRVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 2) goto LAB_00100191;
  ClassDB::register_class<MobileVRInterface>(false);
  lVar3 = XRServer::get_singleton();
  if (lVar3 == 0) goto LAB_00100191;
  this = (MobileVRInterface *)operator_new(0x448,"");
  MobileVRInterface::MobileVRInterface(this);
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  pOVar5 = (Object *)mobile_vr;
  if (cVar2 == '\0') {
    if (mobile_vr != (MobileVRInterface *)0x0) {
      mobile_vr = (MobileVRInterface *)0x0;
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        this = (MobileVRInterface *)0x0;
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') goto LAB_00100352;
      }
    }
  }
  else {
    pOVar6 = (Object *)mobile_vr;
    if (this != mobile_vr) {
      mobile_vr = this;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        mobile_vr = (MobileVRInterface *)0x0;
      }
      pOVar6 = (Object *)this;
      if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
LAB_00100352:
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
        pOVar6 = (Object *)this;
        if (this == (MobileVRInterface *)0x0) goto LAB_0010021c;
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_0010021c:
  pRVar4 = (Ref *)XRServer::get_singleton();
  local_28 = (Object *)0x0;
  if (((mobile_vr != (MobileVRInterface *)0x0) &&
      (pOVar5 = (Object *)__dynamic_cast(mobile_vr,&Object::typeinfo,&XRInterface::typeinfo,0),
      pOVar5 != (Object *)0x0)) &&
     (cVar2 = RefCounted::reference(), local_28 = pOVar5, cVar2 == '\0')) {
    local_28 = (Object *)0x0;
  }
  XRServer::add_interface(pRVar4);
  if (((local_28 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_28), cVar2 != '\0')) {
    (**(code **)(*(long *)local_28 + 0x140))(local_28);
    Memory::free_static(local_28,false);
  }
LAB_00100191:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Object* ClassDB::creator<MobileVRInterface>(bool) */

Object * ClassDB::creator<MobileVRInterface>(bool param_1)

{
  MobileVRInterface *this;
  
  this = (MobileVRInterface *)operator_new(0x448,"");
  MobileVRInterface::MobileVRInterface(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Ref<MobileVRInterface>::~Ref() */

void __thiscall Ref<MobileVRInterface>::~Ref(Ref<MobileVRInterface> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<MobileVRInterface>(bool) */

void ClassDB::register_class<MobileVRInterface>(bool param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (MobileVRInterface::initialize_class()::initialized == '\0') {
    if (XRInterface::initialize_class()::initialized == '\0') {
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
        lVar3 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar3 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_00102008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "XRInterface";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar3 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar3 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      XRInterface::_bind_methods();
      XRInterface::initialize_class()::initialized = '\x01';
    }
    local_58 = "XRInterface";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "MobileVRInterface";
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != XRInterface::_bind_methods) {
      MobileVRInterface::_bind_methods();
    }
    MobileVRInterface::initialize_class()::initialized = '\x01';
  }
  local_58 = "MobileVRInterface";
  local_60 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_001010dc != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__err_print_error * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__err_print_error * 8);
    if (local_58 == (char *)0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(local_58 + 0x20);
    }
    lVar12 = local_60;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 8) +
                      0x10) == local_58)) {
          puVar16 = (undefined4 *)
                    (*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) +
                              (ulong)uVar14 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            goto LAB_001008ef;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_001008ef;
          goto LAB_001008c5;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  lVar3 = local_60;
  if (StringName::configured == '\0') {
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
  }
  else {
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
    puVar16 = (undefined4 *)0x0;
    if (local_60 != 0) {
LAB_001008c5:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      if (puVar16 != (undefined4 *)0x0) {
LAB_001008ef:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<MobileVRInterface>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &MobileVRInterface::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100b17;
        goto LAB_00100937;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100b17:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00100937:
  _global_unlock();
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<MobileVRInterface>::~Ref() */

void __thiscall Ref<MobileVRInterface>::~Ref(Ref<MobileVRInterface> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


