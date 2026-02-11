
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* new_navigation_server_3d() */

GodotNavigationServer3D * new_navigation_server_3d(void)

{
  GodotNavigationServer3D *this;
  
  this = (GodotNavigationServer3D *)operator_new(0x550,"");
  GodotNavigationServer3D::GodotNavigationServer3D(this);
  postinitialize_handler((Object *)this);
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* new_navigation_server_2d() */

GodotNavigationServer2D * new_navigation_server_2d(void)

{
  GodotNavigationServer2D *this;
  
  this = (GodotNavigationServer2D *)operator_new(0x180,"");
  GodotNavigationServer2D::GodotNavigationServer2D(this);
  postinitialize_handler((Object *)this);
  return this;
}



/* uninitialize_navigation_module(ModuleInitializationLevel) */

void uninitialize_navigation_module(int param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = _nav_mesh_generator;
  if (param_1 != 1) {
    return;
  }
  if (_nav_mesh_generator != (Object *)0x0) {
    cVar2 = predelete_handler(_nav_mesh_generator);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
      return;
    }
  }
  return;
}



/* initialize_navigation_module(ModuleInitializationLevel) */

void initialize_navigation_module(int param_1)

{
  NavigationMeshGenerator *this;
  Singleton *pSVar1;
  Object *pOVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  long local_58 [2];
  long local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    NavigationServer3DManager::set_default_server(new_navigation_server_3d);
    NavigationServer2DManager::set_default_server(new_navigation_server_2d);
    this = (NavigationMeshGenerator *)operator_new(0x178,"");
    NavigationMeshGenerator::NavigationMeshGenerator(this);
    postinitialize_handler((Object *)this);
    _nav_mesh_generator = this;
    ClassDB::register_class<NavigationMeshGenerator>(false);
    pSVar1 = (Singleton *)Engine::get_singleton();
    local_60 = 0;
    pOVar2 = (Object *)NavigationMeshGenerator::get_singleton();
    StringName::StringName((StringName *)&local_68,"NavigationMeshGenerator",false);
    Engine::Singleton::Singleton
              ((Singleton *)local_58,(StringName *)&local_68,pOVar2,(StringName *)&local_60);
    Engine::add_singleton(pSVar1);
    if (StringName::configured != '\0') {
      if (local_48 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001000de;
      }
      if (local_58[0] != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001000de;
      }
      if (local_68 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001000de;
      }
      if (local_60 != 0) {
        StringName::unref();
      }
    }
  }
  else if (param_1 == 3) {
    lVar3 = (long)(int)EditorPlugins::creation_func_count;
    if (0x7f < (int)EditorPlugins::creation_func_count) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("add_create_func","./editor/plugins/editor_plugin.h",0x127,
                         "Condition \"creation_func_count >= MAX_CREATE_FUNCS\" is true.",0,0);
        return;
      }
      goto LAB_00100291;
    }
    EditorPlugins::creation_func_count._0_4_ = (int)EditorPlugins::creation_func_count + 1;
    *(code **)(&EditorPlugins::creation_funcs + lVar3 * 8) =
         EditorPlugins::creator<NavigationMeshEditorPlugin>;
  }
LAB_001000de:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100291:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Object* ClassDB::creator<NavigationMeshGenerator>(bool) */

Object * ClassDB::creator<NavigationMeshGenerator>(bool param_1)

{
  NavigationMeshGenerator *this;
  
  this = (NavigationMeshGenerator *)operator_new(0x178,"");
  NavigationMeshGenerator::NavigationMeshGenerator(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* EditorPlugin* EditorPlugins::creator<NavigationMeshEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<NavigationMeshEditorPlugin>(void)

{
  NavigationMeshEditorPlugin *this;
  
  this = (NavigationMeshEditorPlugin *)operator_new(0x668,"");
  NavigationMeshEditorPlugin::NavigationMeshEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<NavigationMeshGenerator>(bool) */

void ClassDB::register_class<NavigationMeshGenerator>(bool param_1)

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
  if (NavigationMeshGenerator::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "NavigationMeshGenerator";
    local_50 = 0x17;
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      NavigationMeshGenerator::_bind_methods();
    }
    NavigationMeshGenerator::initialize_class()::initialized = '\x01';
  }
  local_58 = "NavigationMeshGenerator";
  local_60 = 0;
  local_50 = 0x17;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((_unref != 0) && (_DAT_00101094 != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__add_class2 * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__add_class2 * 8);
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
    uVar17 = *(uint *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar13 == uVar17) && (*(char **)(*(long *)(_unref + lVar15 * 8) + 0x10) == local_58)) {
          puVar16 = (undefined4 *)(*(long *)(_unref + (ulong)uVar14 * 8) + 0x18);
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
            goto LAB_0010056f;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_0010056f;
          goto LAB_00100545;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 4);
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
LAB_00100545:
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
LAB_0010056f:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<NavigationMeshGenerator>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &NavigationMeshGenerator::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100767;
        goto LAB_001005b7;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100767:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_001005b7:
  _global_unlock();
  return;
}


