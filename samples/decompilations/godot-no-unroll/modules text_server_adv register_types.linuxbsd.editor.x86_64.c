
/* uninitialize_text_server_adv_module(ModuleInitializationLevel) */

void uninitialize_text_server_adv_module(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x001000af) */
/* WARNING: Removing unreachable block (ram,0x001000bc) */
/* WARNING: Removing unreachable block (ram,0x001000d3) */
/* initialize_text_server_adv_module(ModuleInitializationLevel) */

void initialize_text_server_adv_module(int param_1)

{
  long lVar1;
  Ref *pRVar2;
  char cVar3;
  TextServerAdvanced *this;
  Object *pOVar4;
  TextServerAdvanced *pTVar5;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 1) &&
     (ClassDB::register_class<TextServerAdvanced>(false), pRVar2 = TextServerManager::singleton,
     TextServerManager::singleton != (Ref *)0x0)) {
    this = (TextServerAdvanced *)operator_new(0x18f0,"");
    TextServerAdvanced::TextServerAdvanced(this);
    postinitialize_handler((Object *)this);
    cVar3 = RefCounted::init_ref();
    if (cVar3 != '\0') {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') &&
           (cVar3 = predelete_handler((Object *)this), pTVar5 = this, cVar3 != '\0')) {
LAB_001001f0:
          (**(code **)(*(long *)this + 0x140))(this);
          Memory::free_static(this,false);
          this = pTVar5;
          if (pTVar5 == (TextServerAdvanced *)0x0) goto LAB_0010009b;
        }
        local_28 = (Object *)0x0;
        pOVar4 = (Object *)__dynamic_cast(this,&Object::typeinfo,&TextServer::typeinfo,0);
        if ((pOVar4 != (Object *)0x0) &&
           (cVar3 = RefCounted::reference(), local_28 = pOVar4, cVar3 == '\0')) {
          local_28 = (Object *)0x0;
        }
        TextServerManager::add_interface(pRVar2);
        if (((local_28 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_28), cVar3 != '\0')) {
          (**(code **)(*(long *)local_28 + 0x140))(local_28);
          Memory::free_static(local_28,false);
          if (this == (TextServerAdvanced *)0x0) goto LAB_00100031;
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this), cVar3 != '\0')) {
          (**(code **)(*(long *)this + 0x140))(this);
          if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(this,false);
            return;
          }
          goto LAB_00100239;
        }
        goto LAB_00100031;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)this);
        pTVar5 = (TextServerAdvanced *)0x0;
        if (cVar3 != '\0') goto LAB_001001f0;
      }
    }
LAB_0010009b:
    TextServerManager::add_interface(pRVar2);
  }
LAB_00100031:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100239:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object* ClassDB::creator<TextServerAdvanced>(bool) */

Object * ClassDB::creator<TextServerAdvanced>(bool param_1)

{
  TextServerAdvanced *this;
  
  this = (TextServerAdvanced *)operator_new(0x18f0,"");
  TextServerAdvanced::TextServerAdvanced(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<TextServerAdvanced>(bool) */

void ClassDB::register_class<TextServerAdvanced>(bool param_1)

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
  if (TextServerAdvanced::initialize_class()::initialized == '\0') {
    if (TextServerExtension::initialize_class()::initialized == '\0') {
      if (TextServer::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00102010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_58 = "RefCounted";
        local_68 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "TextServer";
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
        TextServer::_bind_methods();
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
          TextServer::_bind_compatibility_methods();
        }
        TextServer::initialize_class()::initialized = '\x01';
      }
      local_58 = "TextServer";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "TextServerExtension";
      local_70 = 0;
      local_50 = 0x13;
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
      if ((code *)PTR__bind_methods_00102008 != TextServer::_bind_methods) {
        TextServerExtension::_bind_methods();
      }
      TextServerExtension::initialize_class()::initialized = '\x01';
    }
    local_58 = "TextServerExtension";
    local_68 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "TextServerAdvanced";
    local_50 = 0x12;
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
    TextServerAdvanced::initialize_class()::initialized = '\x01';
  }
  local_58 = "TextServerAdvanced";
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0010109c != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)_get_empty_hash * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)_get_empty_hash * 8);
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
        if ((uVar13 == uVar17) &&
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
            goto LAB_001008af;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_001008af;
          goto LAB_00100885;
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
LAB_00100885:
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
LAB_001008af:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<TextServerAdvanced>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &TextServerAdvanced::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010098f;
        goto LAB_001008f7;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010098f:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_001008f7:
  _global_unlock();
  return;
}


