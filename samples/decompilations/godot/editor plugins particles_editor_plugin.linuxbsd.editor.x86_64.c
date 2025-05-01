
/* ParticlesEditorPlugin::handles(Object*) const */

void __thiscall ParticlesEditorPlugin::handles(ParticlesEditorPlugin *this,Object *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x58))(param_1,this + 0x670);
  return;
}



/* ParticlesEditorPlugin::_menu_callback(int) */

void __thiscall ParticlesEditorPlugin::_menu_callback(ParticlesEditorPlugin *this,int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_90;
  int local_88 [4];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0x2a8))();
    uVar2 = EditorUndoRedoManager::get_singleton();
    EditorUndoRedoManager::create_action(uVar2,this + 0x678,0,*(undefined8 *)(this + 0x680),0);
    SceneTreeDock::replace_node(SceneTreeDock::singleton,*(Node **)(this + 0x680));
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(uVar2,0));
      return;
    }
  }
  else {
    if (param_1 == 1) {
      plVar1 = *(long **)(this + 0x680);
      StringName::StringName((StringName *)&local_90,"restart",false);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      (**(code **)(*plVar1 + 0x68))((Variant *)local_38,plVar1,(StringName *)&local_90,0,0,local_88)
      ;
      if (local_88[0] == 0) {
        Variant::Variant((Variant *)local_78,(Variant *)local_38);
      }
      else {
        local_78[0] = 0;
        local_70 = (undefined1  [16])0x0;
      }
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticlesEditorPlugin::edit(Object*) */

void __thiscall ParticlesEditorPlugin::edit(ParticlesEditorPlugin *this,Object *param_1)

{
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
  }
  *(Object **)(this + 0x680) = param_1;
  return;
}



/* ParticlesEditorPlugin::make_visible(bool) */

void ParticlesEditorPlugin::make_visible(bool param_1)

{
  undefined7 in_register_00000039;
  
  CanvasItem::set_visible(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0x660),0));
  return;
}



/* GPUParticles2DEditorPlugin::_selection_changed() */

undefined8 __thiscall
GPUParticles2DEditorPlugin::_selection_changed(GPUParticles2DEditorPlugin *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  undefined8 uStack_38;
  
  plVar5 = (long *)EditorSelection::get_selected_node_list();
  if (((long *)*plVar5 == (long *)0x0) ||
     (puVar12 = *(undefined8 **)*plVar5, puVar12 == (undefined8 *)0x0)) {
    plVar5 = *(long **)(this + 0x6b8);
    if (plVar5 == (long *)0x0) {
      return uStack_38;
    }
    pauVar6 = (undefined1 (*) [16])0x0;
    if ((int)plVar5[2] == 0) {
      return uStack_38;
    }
LAB_00100345:
    puVar12 = (undefined8 *)*plVar5;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        GPUParticles2D::set_show_visibility_rect(SUB81(*puVar12,0));
        puVar12 = (undefined8 *)puVar12[1];
      } while (puVar12 != (undefined8 *)0x0);
      plVar5 = *(long **)(this + 0x6b8);
    }
    if (plVar5 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar5;
        if (pvVar1 == (void *)0x0) goto LAB_001003e5;
        if (plVar5 == *(long **)((long)pvVar1 + 0x18)) {
          lVar8 = *(long *)((long)pvVar1 + 8);
          lVar2 = *(long *)((long)pvVar1 + 0x10);
          *plVar5 = lVar8;
          if (pvVar1 == (void *)plVar5[1]) {
            plVar5[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = lVar8;
            lVar8 = *(long *)((long)pvVar1 + 8);
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x10) = lVar2;
          }
          Memory::free_static(pvVar1,false);
          *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar5 = *(long **)(this + 0x6b8);
      } while ((int)plVar5[2] != 0);
      Memory::free_static(plVar5,false);
      *(undefined8 *)(this + 0x6b8) = 0;
    }
LAB_001003e5:
    if (pauVar6 == (undefined1 (*) [16])0x0) {
      return uStack_38;
    }
LAB_001003ee:
    plVar5 = *(long **)*pauVar6;
    if (plVar5 == (long *)0x0) {
LAB_001005a8:
      if (*(int *)pauVar6[1] != 0) {
        uVar10 = _err_print_error("~List","./core/templates/list.h",0x316,
                                  "Condition \"_data->size_cache\" is true.",0,0);
        return uVar10;
      }
    }
    else {
      do {
        if ((*plVar5 != 0) &&
           (lVar8 = __dynamic_cast(*plVar5,&Object::typeinfo,&GPUParticles2D::typeinfo,0),
           lVar8 != 0)) {
          GPUParticles2D::set_show_visibility_rect(SUB81(lVar8,0));
          if (*(long *)(this + 0x6b8) == 0) {
            pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])(this + 0x6b8) = pauVar11;
            *(undefined4 *)pauVar11[1] = 0;
            *pauVar11 = (undefined1  [16])0x0;
          }
          plVar9 = (long *)operator_new(0x20,DefaultAllocator::alloc);
          plVar3 = *(long **)(this + 0x6b8);
          plVar9[1] = 0;
          lVar2 = plVar3[1];
          *plVar9 = lVar8;
          plVar9[3] = (long)plVar3;
          plVar9[2] = lVar2;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 8) = plVar9;
          }
          plVar3[1] = (long)plVar9;
          if (*plVar3 == 0) {
            *plVar3 = (long)plVar9;
          }
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        }
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != (long *)0x0);
      do {
        while( true ) {
          pvVar1 = *(void **)*pauVar6;
          if (pvVar1 == (void *)0x0) goto LAB_001005a8;
          if (*(undefined1 (**) [16])((long)pvVar1 + 0x18) == pauVar6) break;
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          if (*(int *)pauVar6[1] == 0) goto LAB_0010050f;
        }
        lVar8 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *(long *)*pauVar6 = lVar8;
        if (pvVar1 == *(void **)(*pauVar6 + 8)) {
          *(long *)(*pauVar6 + 8) = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar8;
          lVar8 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        pauVar11 = pauVar6 + 1;
        *(int *)*pauVar11 = *(int *)*pauVar11 + -1;
      } while (*(int *)*pauVar11 != 0);
    }
  }
  else {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
    do {
      puVar7 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
      uVar10 = *puVar12;
      puVar7[1] = 0;
      *puVar7 = uVar10;
      lVar8 = *(long *)(*pauVar6 + 8);
      puVar7[3] = pauVar6;
      puVar7[2] = lVar8;
      if (lVar8 != 0) {
        *(undefined8 **)(lVar8 + 8) = puVar7;
      }
      lVar8 = *(long *)*pauVar6;
      *(undefined8 **)(*pauVar6 + 8) = puVar7;
      if (lVar8 == 0) {
        *(undefined8 **)*pauVar6 = puVar7;
      }
      puVar12 = (undefined8 *)puVar12[1];
      iVar4 = *(int *)pauVar6[1] + 1;
      *(int *)pauVar6[1] = iVar4;
    } while (puVar12 != (undefined8 *)0x0);
    plVar5 = *(long **)(this + 0x6b8);
    if (plVar5 == (long *)0x0) {
      if (iVar4 != 0) goto LAB_001003ee;
    }
    else if (((int)plVar5[2] != 0) || (iVar4 != 0)) goto LAB_00100345;
    if (pauVar6 == (undefined1 (*) [16])0x0) {
      return uStack_38;
    }
    do {
      while( true ) {
        pvVar1 = *(void **)*pauVar6;
        if (pvVar1 == (void *)0x0) goto LAB_001005a8;
        if (pauVar6 != *(undefined1 (**) [16])((long)pvVar1 + 0x18)) break;
        lVar8 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *(long *)*pauVar6 = lVar8;
        if (pvVar1 == *(void **)(*pauVar6 + 8)) {
          *(long *)(*pauVar6 + 8) = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar8;
          lVar8 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        pauVar11 = pauVar6 + 1;
        *(int *)*pauVar11 = *(int *)*pauVar11 + -1;
        if (*(int *)*pauVar11 == 0) goto LAB_0010050f;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar6[1] != 0);
  }
LAB_0010050f:
  uVar10 = Memory::free_static(pauVar6,false);
  return uVar10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParticlesEditorPlugin::need_show_lifetime_dialog(SpinBox*) */

bool ParticlesEditorPlugin::need_show_lifetime_dialog(SpinBox *param_1)

{
  bool *pbVar1;
  long in_FS_OFFSET;
  double dVar2;
  double extraout_XMM0_Qa;
  double dVar3;
  long local_50;
  int local_48 [6];
  long local_30;
  
  pbVar1 = *(bool **)(param_1 + 0x680);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,"lifetime",false);
  Object::get((StringName *)local_48,pbVar1);
  dVar2 = Variant::operator_cast_to_double((Variant *)local_48);
  if ((double)((ulong)dVar2 & _LC23) < _LC20) {
    dVar2 = (double)((ulong)(double)(long)dVar2 | ~_LC23 & (ulong)dVar2);
  }
  dVar3 = _LC18;
  if (_LC18 <= dVar2 + _LC18) {
    dVar3 = dVar2 + _LC18;
  }
  Range::set_value(dVar3);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Range::get_value();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __LC22 <= extraout_XMM0_Qa;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles2DEditorPlugin::_notification(int) [clone .part.0] */

void GPUParticles2DEditorPlugin::_notification(int param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_50;
  GPUParticles2DEditorPlugin local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = *(long **)(EditorNode::singleton + 0x608);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<GPUParticles2DEditorPlugin>
            (local_48,(char *)CONCAT44(in_register_0000003c,param_1),
             (_func_void *)"&GPUParticles2DEditorPlugin::_selection_changed");
  StringName::StringName((StringName *)&local_50,"selection_changed",false);
  (*pcVar2)(plVar1,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles2DEditorPlugin::_notification(int) */

void __thiscall
GPUParticles2DEditorPlugin::_notification(GPUParticles2DEditorPlugin *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  _notification((int)this);
  return;
}



/* Particles2DEditorPlugin::_add_menu_options(PopupMenu*) */

void __thiscall
Particles2DEditorPlugin::_add_menu_options(Particles2DEditorPlugin *this,PopupMenu *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Load Emission Mask";
  local_58 = 0;
  local_40 = 0x12;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  PopupMenu::add_item(param_1,(String *)&local_48,100,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles2DEditorPlugin::_add_menu_options(PopupMenu*) */

void __thiscall
GPUParticles2DEditorPlugin::_add_menu_options(GPUParticles2DEditorPlugin *this,PopupMenu *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Particles2DEditorPlugin::_add_menu_options((Particles2DEditorPlugin *)this,param_1);
  local_48 = "";
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Generate Visibility Rect";
  local_58 = 0;
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  PopupMenu::add_item(param_1,(String *)&local_48,200,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles3DEditorPlugin::_add_menu_options(PopupMenu*) */

void __thiscall
Particles3DEditorPlugin::_add_menu_options(Particles3DEditorPlugin *this,PopupMenu *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "";
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Generate AABB";
  local_58 = 0;
  local_40 = 0xd;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  PopupMenu::add_item(param_1,(String *)&local_48,300,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = "";
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Create Emission Points From Node";
  local_58 = 0;
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  PopupMenu::add_item(param_1,(String *)&local_48,0x12d,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticles2DEditorPlugin::_generate_visibility_rect() */

void __thiscall
GPUParticles2DEditorPlugin::_generate_visibility_rect(GPUParticles2DEditorPlugin *this)

{
  float fVar1;
  char cVar2;
  StringName *pSVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  Object *pOVar7;
  float fVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  double local_110;
  float local_104;
  float local_fc;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  EditorProgress local_b8 [16];
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pSVar3 = *(StringName **)(this + 0x680);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar3 != (StringName *)0x0) {
    pSVar3 = (StringName *)__dynamic_cast(pSVar3,&Object::typeinfo,&GPUParticles2D::typeinfo,0);
  }
  dVar11 = (double)Range::get_value();
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"");
  local_d0 = 0;
  String::parse_latin1
            ((String *)&local_d0,"Generating Visibility Rect (Waiting for Particle Simulation)");
  TTR((String *)&local_c0,(String *)&local_d0);
  local_a8 = (char *)0x0;
  String::parse_latin1((String *)&local_a8,"gen_vrect");
  EditorProgress::EditorProgress
            (local_b8,(String *)&local_a8,(String *)&local_c0,(int)dVar11,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  cVar2 = GPUParticles2D::is_emitting();
  if (cVar2 == '\0') {
    GPUParticles2D::set_emitting(SUB81(pSVar3,0));
    plVar5 = (long *)OS::get_singleton();
    (**(code **)(*plVar5 + 0x1f8))(plVar5,1000);
    if (0.0 < dVar11) goto LAB_00100d51;
    local_128 = 0;
    uStack_120 = 0;
  }
  else {
    if (dVar11 <= 0.0) {
      local_128 = 0;
      uStack_120 = 0;
      goto LAB_00101094;
    }
LAB_00100d51:
    local_110 = 0.0;
    fVar10 = 0.0;
    local_fc = 0.0;
    local_104 = 0.0;
    local_128._0_4_ = 0.0;
    fVar1 = 0.0;
    do {
      plVar5 = (long *)OS::get_singleton();
      lVar6 = (**(code **)(*plVar5 + 0x208))(plVar5);
      local_c0 = 0;
      local_a8 = "";
      local_a0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_a8 = "Generating...";
      local_c8 = 0;
      local_a0 = 0xd;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String *)&local_a8,(String *)&local_c8);
      EditorProgress::step((String *)local_b8,(int)(String *)&local_a8,SUB41((int)fVar10,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      plVar5 = (long *)OS::get_singleton();
      (**(code **)(*plVar5 + 0x1f8))(plVar5,1000);
      auVar15 = GPUParticles2D::capture_rect();
      fVar12 = auVar15._8_4_;
      fVar8 = auVar15._12_4_;
      fVar13 = auVar15._0_4_;
      fVar10 = auVar15._4_4_;
      if (((fVar1 == 0.0) && (local_104 == 0.0)) && ((float)local_128 == 0.0)) {
        if (local_fc != 0.0) {
LAB_00100dd0:
          if (((local_fc < 0.0) || (fVar12 < 0.0)) || (fVar8 < 0.0)) goto LAB_00100fc9;
          goto LAB_00100df1;
        }
      }
      else {
        if (0.0 <= (float)local_128) goto LAB_00100dd0;
LAB_00100fc9:
        _err_print_error("merge","./core/math/rect2.h",0xa8,
                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                         ,0,0);
LAB_00100df1:
        fVar12 = fVar13 + fVar12;
        if (fVar1 <= fVar13) {
          fVar13 = fVar1;
        }
        fVar14 = fVar10;
        if (local_104 <= fVar10) {
          fVar14 = local_104;
        }
        fVar9 = fVar8 + fVar10;
        if (fVar8 + fVar10 <= local_fc + local_104) {
          fVar9 = local_fc + local_104;
        }
        if (fVar12 <= (float)local_128 + fVar1) {
          fVar12 = (float)local_128 + fVar1;
        }
        fVar12 = fVar12 - fVar13;
        fVar10 = fVar14;
        fVar8 = fVar9 - fVar14;
      }
      local_fc = fVar8;
      local_104 = fVar10;
      plVar5 = (long *)OS::get_singleton();
      lVar4 = (**(code **)(*plVar5 + 0x208))(plVar5);
      fVar10 = (float)((double)(ulong)(lVar4 - lVar6) / __LC39 + local_110);
      local_110 = (double)fVar10;
      local_128._0_4_ = fVar12;
      fVar1 = fVar13;
    } while (local_110 < dVar11);
    uStack_120 = CONCAT44(local_fc,fVar12);
    local_128 = CONCAT44(local_104,fVar13);
    if (cVar2 != '\0') goto LAB_00101094;
  }
  GPUParticles2D::set_emitting(SUB81(pSVar3,0));
LAB_00101094:
  pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"Generate Visibility Rect");
  TTR((String *)&local_a8,(String *)&local_c8);
  EditorUndoRedoManager::create_action(pOVar7,(String *)&local_a8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  StringName::StringName((StringName *)&local_a8,"set_visibility_rect",false);
  local_98._0_8_ = local_128;
  local_98._8_8_ = uStack_120;
  Variant::Variant((Variant *)local_78,(Rect2 *)local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar3,(Variant **)&local_a8,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  auVar15 = GPUParticles2D::get_visibility_rect();
  StringName::StringName((StringName *)&local_a8,"set_visibility_rect",false);
  local_98 = auVar15;
  Variant::Variant((Variant *)local_78,(Rect2 *)local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar3,(Variant **)&local_a8,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
  EditorProgress::~EditorProgress(local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Particles3DEditorPlugin::_generate_aabb() */

void __thiscall Particles3DEditorPlugin::_generate_aabb(Particles3DEditorPlugin *this)

{
  bool *pbVar1;
  StringName *pSVar2;
  bool bVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  double dVar9;
  double local_140;
  undefined8 *local_130;
  undefined8 local_f8;
  long local_f0;
  EditorProgress local_e8 [16];
  String local_d8 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined8 local_98 [4];
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar9 = (double)Range::get_value();
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"");
  local_f8 = 0;
  String::parse_latin1
            ((String *)&local_f8,"Generating Visibility AABB (Waiting for Particle Simulation)");
  TTR(local_d8,(String *)&local_f8);
  local_c8 = 0;
  uStack_c4 = 0;
  String::parse_latin1((String *)&local_c8,"gen_aabb");
  EditorProgress::EditorProgress(local_e8,(String *)&local_c8,local_d8,(int)dVar9,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  pbVar1 = *(bool **)(this + 0x680);
  StringName::StringName((StringName *)&local_c8,"emitting",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
    StringName::unref();
  }
  if (!bVar3) {
    pSVar2 = *(StringName **)(this + 0x680);
    Variant::Variant((Variant *)local_58,true);
    StringName::StringName((StringName *)&local_c8,"emitting",false);
    Object::set(pSVar2,(Variant *)&local_c8,(bool *)local_58);
    if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar5 = (long *)OS::get_singleton();
    (**(code **)(*plVar5 + 0x1f8))(plVar5,1000);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_a4 = 0;
  StringName::StringName((StringName *)&local_c8,"capture_aabb",false);
  Callable::Callable((Callable *)local_d8,*(Object **)(this + 0x680),(StringName *)&local_c8);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
    StringName::unref();
  }
  if (0.0 < dVar9) {
    local_140 = 0.0;
    do {
      plVar5 = (long *)OS::get_singleton();
      lVar6 = (**(code **)(*plVar5 + 0x208))(plVar5);
      local_f0 = 0;
      local_c0 = 0;
      uStack_bc = 0;
      local_c8 = 0x10d74f;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f0);
      local_c8 = 0x10aa99;
      uStack_c4 = 0;
      local_f8 = 0;
      local_c0 = 0xd;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      TTR((String *)&local_c8,(String *)&local_f8);
      EditorProgress::step((String *)local_e8,(int)(String *)&local_c8,SUB41((int)local_140,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      plVar5 = (long *)OS::get_singleton();
      (**(code **)(*plVar5 + 0x1f8))(plVar5);
      Variant::Variant((Variant *)local_58,0);
      local_78[0] = 0;
      local_c8 = 0;
      uStack_c4 = 0;
      local_c0 = 0;
      local_70 = (undefined1  [16])0x0;
      Callable::callp((Variant **)local_d8,0,(Variant *)0x0,(CallError *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::operator_cast_to_AABB((Variant *)local_98);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      cVar4 = AABB::operator==((AABB *)&local_b8,(StringName *)local_58);
      if (cVar4 == '\0') {
        AABB::merge_with((AABB *)&local_b8);
      }
      else {
        uStack_a8 = (undefined4)local_98[2];
        local_a4 = (undefined4)((ulong)local_98[2] >> 0x20);
        local_b8 = local_98[0];
        uStack_b0 = (undefined4)local_98[1];
        uStack_ac = (undefined4)((ulong)local_98[1] >> 0x20);
      }
      plVar5 = (long *)OS::get_singleton();
      lVar7 = (**(code **)(*plVar5 + 0x208))(plVar5);
      local_140 = (double)(ulong)(lVar7 - lVar6) / __LC39 + local_140;
    } while (local_140 < dVar9);
  }
  local_130 = &local_b8;
  if (!bVar3) {
    pSVar2 = *(StringName **)(this + 0x680);
    Variant::Variant((Variant *)local_58,false);
    StringName::StringName((StringName *)&local_c8,"emitting",false);
    Object::set(pSVar2,(Variant *)&local_c8,(bool *)local_58);
    if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  pOVar8 = (Object *)EditorUndoRedoManager::get_singleton();
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"");
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Generate Visibility AABB");
  TTR((String *)&local_c8,(String *)&local_f8);
  EditorUndoRedoManager::create_action(pOVar8,(String *)&local_c8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  Variant::Variant((Variant *)local_58,(AABB *)local_130);
  StringName::StringName((StringName *)&local_c8,"visibility_aabb",false);
  EditorUndoRedoManager::add_do_property(pOVar8,*(StringName **)(this + 0x680),(Variant *)&local_c8)
  ;
  if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pbVar1 = *(bool **)(this + 0x680);
  StringName::StringName((StringName *)&local_f0,"visibility_aabb",false);
  Object::get((StringName *)local_58,pbVar1);
  StringName::StringName((StringName *)&local_c8,"visibility_aabb",false);
  EditorUndoRedoManager::add_undo_property
            (pOVar8,*(StringName **)(this + 0x680),(Variant *)&local_c8);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar8,0));
  Callable::~Callable((Callable *)local_d8);
  EditorProgress::~EditorProgress(local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles3DEditorPlugin::_menu_callback(int) */

void __thiscall Particles3DEditorPlugin::_menu_callback(Particles3DEditorPlugin *this,int param_1)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 300) {
    cVar2 = ParticlesEditorPlugin::need_show_lifetime_dialog((SpinBox *)this);
    if (cVar2 == '\0') {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        _generate_aabb(this);
        return;
      }
      goto LAB_00101c30;
    }
    Window::popup_centered(*(Vector2i **)(this + 0x688));
  }
  else {
    if (param_1 != 0x12d) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        ParticlesEditorPlugin::_menu_callback((ParticlesEditorPlugin *)this,param_1);
        return;
      }
      goto LAB_00101c30;
    }
    cVar2 = (**(code **)(*(long *)this + 0x2b0))();
    if (cVar2 != '\0') {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        SceneTreeDialog::popup_scenetree_dialog(*(Node **)(this + 0x698),(Node *)0x0,false,true);
        return;
      }
      goto LAB_00101c30;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101c30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticlesEditorPlugin::ParticlesEditorPlugin() */

void __thiscall ParticlesEditorPlugin::ParticlesEditorPlugin(ParticlesEditorPlugin *this)

{
  code *pcVar1;
  undefined8 uVar2;
  BoxContainer *this_00;
  MenuButton *this_01;
  long *plVar3;
  CallableCustom *this_02;
  long in_FS_OFFSET;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = EditorProgress::EditorProgress;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (ParticlesEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (ParticlesEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x668) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x678) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00116910;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0x660) = this_00;
  CanvasItem::hide();
  this_01 = (MenuButton *)operator_new(0xc68,"");
  local_58[0] = 0;
  MenuButton::MenuButton(this_01,(String *)local_58);
  postinitialize_handler((Object *)this_01);
  *(MenuButton **)(this + 0x668) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0x668),0));
  Node::add_child(*(undefined8 *)(this + 0x660),*(undefined8 *)(this + 0x668),0);
  plVar3 = (long *)MenuButton::get_popup();
  pcVar1 = *(code **)(*plVar3 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_00118388;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar2;
  *(ParticlesEditorPlugin **)(this_02 + 0x28) = this;
  *(undefined8 *)(this_02 + 0x38) = 0x299;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "ParticlesEditorPlugin::_menu_callback";
  Callable::Callable((Callable *)local_58,this_02);
  (*pcVar1)(plVar3,SceneStringNames::singleton + 0x240,local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles2DEditorPlugin::_menu_callback(int) */

void __thiscall Particles2DEditorPlugin::_menu_callback(Particles2DEditorPlugin *this,int param_1)

{
  String *pSVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  String local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  String local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 100) {
    if (*(long *)(this + 0x680) != 0) {
      lVar4 = __dynamic_cast(*(long *)(this + 0x680),&Object::typeinfo,&GPUParticles2D::typeinfo,0);
      if (lVar4 != 0) {
        GPUParticles2D::get_process_material();
        pSVar1 = EditorNode::singleton;
        if (local_48 == (Object *)0x0) {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"");
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Warning!");
          TTR(local_70,(String *)&local_60);
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"");
          local_48 = (Object *)0x0;
          String::parse_latin1
                    ((String *)&local_48,"Loading emission mask requires ParticleProcessMaterial.");
          TTR(local_58,(String *)&local_48);
          EditorNode::show_warning(pSVar1,local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_001023d0;
        }
        cVar3 = RefCounted::unreference();
        pOVar2 = local_48;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_48);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorFileDialog::popup_file_dialog();
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    ParticlesEditorPlugin::_menu_callback((ParticlesEditorPlugin *)this,param_1);
    return;
  }
LAB_001023d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles2DEditorPlugin::_menu_callback(int) */

void __thiscall
GPUParticles2DEditorPlugin::_menu_callback(GPUParticles2DEditorPlugin *this,int param_1)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 200) {
    cVar2 = ParticlesEditorPlugin::need_show_lifetime_dialog((SpinBox *)this);
    if (cVar2 == '\0') {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        _generate_visibility_rect(this);
        return;
      }
    }
    else {
      Window::popup_centered(*(Vector2i **)(this + 0x6c0));
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    Particles2DEditorPlugin::_menu_callback((Particles2DEditorPlugin *)this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticlesEditorPlugin::_notification(int) [clone .part.0] */

void ParticlesEditorPlugin::_notification(int param_1)

{
  String *pSVar1;
  Object *pOVar2;
  char cVar3;
  Ref *pRVar4;
  undefined4 in_register_0000003c;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar5 = (long *)CONCAT44(in_register_0000003c,param_1);
  pSVar1 = (String *)(plVar5 + 0xce);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::ends_with((char *)pSVar1);
  if (cVar3 == '\0') {
    cVar3 = String::ends_with((char *)pSVar1);
    if (cVar3 != '\0') {
      EditorPlugin::add_control_to_container(plVar5,1,plVar5[0xcc]);
    }
  }
  else {
    EditorPlugin::add_control_to_container(plVar5,5,plVar5[0xcc]);
  }
  pRVar4 = (Ref *)plVar5[0xcd];
  StringName::StringName((StringName *)&local_50,pSVar1,false);
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar4);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Button::set_text((String *)plVar5[0xcd]);
  pRVar4 = (Ref *)MenuButton::get_popup();
  local_50 = 0;
  local_40 = 0x10;
  local_48 = (Object *)0x10ac5d;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = (Object *)0x10ac6e;
  local_58 = 0;
  local_40 = 0x1a;
  String::parse_latin1((StrRange *)&local_58);
  ED_SHORTCUT((StringName *)&local_48,&local_58,(StringName *)&local_50,0x10000052,0);
  PopupMenu::add_shortcut(pRVar4,(int)(StringName *)&local_48,true,false);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  (**(code **)(*plVar5 + 0x2a0))(plVar5,pRVar4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    PopupMenu::add_item(pRVar4,plVar5 + 0xcf,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticlesEditorPlugin::_notification(int) */

void __thiscall ParticlesEditorPlugin::_notification(ParticlesEditorPlugin *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  _notification((int)this);
  return;
}



/* GPUParticles3DEditorPlugin::_can_generate_points() const */

undefined8 __thiscall
GPUParticles3DEditorPlugin::_can_generate_points(GPUParticles3DEditorPlugin *this)

{
  String *pSVar1;
  char cVar2;
  Object *pOVar3;
  undefined8 uVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  String local_60 [8];
  String local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x680) != 0) {
    __dynamic_cast(*(long *)(this + 0x680),&Object::typeinfo,&GPUParticles3D::typeinfo,0);
  }
  GPUParticles3D::get_process_material();
  if (local_48 != (Object *)0x0) {
    pOVar3 = (Object *)
             __dynamic_cast(local_48,&Object::typeinfo,&ParticleProcessMaterial::typeinfo,0);
    if (pOVar3 == (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_48);
joined_r0x0010296b:
        if (cVar2 != '\0') {
LAB_00102819:
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
          if (pOVar3 != (Object *)0x0) goto LAB_001027bb;
        }
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        if (((local_48 != (Object *)0x0) &&
            (cVar2 = RefCounted::unreference(), pOVar5 = local_48, cVar2 != '\0')) &&
           (cVar2 = predelete_handler(local_48), cVar2 != '\0')) goto LAB_00102819;
LAB_001027bb:
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        uVar4 = 1;
        goto LAB_001027d0;
      }
      if ((local_48 != (Object *)0x0) &&
         (cVar2 = RefCounted::unreference(), pOVar5 = local_48, cVar2 != '\0')) {
        pOVar3 = (Object *)0x0;
        cVar2 = predelete_handler(local_48);
        goto joined_r0x0010296b;
      }
    }
  }
  pSVar1 = EditorNode::singleton;
  local_48 = (Object *)0x0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Warning!");
  TTR(local_58,(String *)&local_50);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"");
  local_70 = 0;
  String::parse_latin1
            ((String *)&local_70,
             "A processor material of type \'ParticleProcessMaterial\' is required.");
  TTR(local_60,(String *)&local_70);
  EditorNode::show_warning(pSVar1,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  uVar4 = 0;
LAB_001027d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

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



/* GPUParticles2DEditorPlugin::_convert_particles() */

CPUParticles2D * __thiscall
GPUParticles2DEditorPlugin::_convert_particles(GPUParticles2DEditorPlugin *this)

{
  code *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  CPUParticles2D *this_00;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  long local_30;
  
  plVar3 = *(long **)(this + 0x680);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)__dynamic_cast(plVar3,&Object::typeinfo,&GPUParticles2D::typeinfo,0);
  }
  this_00 = (CPUParticles2D *)operator_new(0x810,"");
  CPUParticles2D::CPUParticles2D(this_00);
  postinitialize_handler((Object *)this_00);
  CPUParticles2D::convert_from_particles((Node *)this_00);
  Node::get_name();
  if (local_58 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = 0;
    if (*(char **)(local_58 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(local_58 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_50,*(char **)(local_58 + 8));
    }
  }
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  (**(code **)(*plVar3 + 0x290))(local_48,plVar3);
  Node2D::set_transform((Transform2D *)this_00);
  CanvasItem::is_visible();
  CanvasItem::set_visible(SUB81(this_00,0));
  uVar2 = Node::get_process_mode();
  Node::set_process_mode(this_00,uVar2);
  pcVar1 = *(code **)(*(long *)this_00 + 0x278);
  uVar2 = CanvasItem::get_z_index();
  (*pcVar1)(this_00,uVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles2DEditorPlugin::_convert_particles() */

GPUParticles2D * __thiscall
CPUParticles2DEditorPlugin::_convert_particles(CPUParticles2DEditorPlugin *this)

{
  undefined4 uVar1;
  long *plVar2;
  GPUParticles2D *this_00;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  long local_30;
  
  plVar2 = *(long **)(this + 0x680);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)__dynamic_cast(plVar2,&Object::typeinfo,&CPUParticles2D::typeinfo,0);
  }
  this_00 = (GPUParticles2D *)operator_new(0x650,"");
  GPUParticles2D::GPUParticles2D(this_00);
  postinitialize_handler((Object *)this_00);
  GPUParticles2D::convert_from_particles((Node *)this_00);
  Node::get_name();
  if (local_58 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = 0;
    if (*(char **)(local_58 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(local_58 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_50,*(char **)(local_58 + 8));
    }
  }
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  (**(code **)(*plVar2 + 0x290))(local_48,plVar2);
  Node2D::set_transform((Transform2D *)this_00);
  CanvasItem::is_visible();
  CanvasItem::set_visible(SUB81(this_00,0));
  uVar1 = Node::get_process_mode();
  Node::set_process_mode(this_00,uVar1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3DEditorPlugin::_convert_particles() */

CPUParticles3D * __thiscall
GPUParticles3DEditorPlugin::_convert_particles(GPUParticles3DEditorPlugin *this)

{
  undefined4 uVar1;
  CPUParticles3D *this_00;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x680) != 0) {
    __dynamic_cast(*(long *)(this + 0x680),&Object::typeinfo,&GPUParticles3D::typeinfo,0);
  }
  this_00 = (CPUParticles3D *)operator_new(0x8d0,"");
  CPUParticles3D::CPUParticles3D(this_00);
  postinitialize_handler((Object *)this_00);
  CPUParticles3D::convert_from_particles((Node *)this_00);
  Node::get_name();
  if (local_78 == 0) {
    local_70[0] = 0;
  }
  else {
    local_70[0] = 0;
    if (*(char **)(local_78 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_70,(CowData *)(local_78 + 0x10));
    }
    else {
      String::parse_latin1((String *)local_70,*(char **)(local_78 + 8));
    }
  }
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  Node3D::get_transform();
  Node3D::set_transform((Transform3D *)this_00);
  Node3D::is_visible();
  Node3D::set_visible(SUB81(this_00,0));
  uVar1 = Node::get_process_mode();
  Node::set_process_mode(this_00,uVar1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles3DEditorPlugin::_convert_particles() */

GPUParticles3D * __thiscall
CPUParticles3DEditorPlugin::_convert_particles(CPUParticles3DEditorPlugin *this)

{
  undefined4 uVar1;
  GPUParticles3D *this_00;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x680) != 0) {
    __dynamic_cast(*(long *)(this + 0x680),&Object::typeinfo,&CPUParticles3D::typeinfo,0);
  }
  this_00 = (GPUParticles3D *)operator_new(0x708,"");
  GPUParticles3D::GPUParticles3D(this_00);
  postinitialize_handler((Object *)this_00);
  GPUParticles3D::convert_from_particles((Node *)this_00);
  Node::get_name();
  if (local_78 == 0) {
    local_70[0] = 0;
  }
  else {
    local_70[0] = 0;
    if (*(char **)(local_78 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_70,(CowData *)(local_78 + 0x10));
    }
    else {
      String::parse_latin1((String *)local_70,*(char **)(local_78 + 8));
    }
  }
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  Node3D::get_transform();
  Node3D::set_transform((Transform3D *)this_00);
  Node3D::is_visible();
  Node3D::set_visible(SUB81(this_00,0));
  uVar1 = Node::get_process_mode();
  Node::set_process_mode(this_00,uVar1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* Particles2DEditorPlugin::_file_selected(String const&) */

void __thiscall
Particles2DEditorPlugin::_file_selected(Particles2DEditorPlugin *this,String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x6b0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x6b0),(CowData *)param_1);
  }
  Window::popup_centered(*(Vector2i **)(this + 0x690));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles2DEditorPlugin::Particles2DEditorPlugin() */

void __thiscall Particles2DEditorPlugin::Particles2DEditorPlugin(Particles2DEditorPlugin *this)

{
  long lVar1;
  String *pSVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  EditorFileDialog *this_00;
  CallableCustom *pCVar6;
  ConfirmationDialog *this_01;
  BoxContainer *this_02;
  OptionButton *this_03;
  BoxContainer *this_04;
  CheckBox *pCVar7;
  int iVar8;
  long in_FS_OFFSET;
  long *local_70;
  String local_68 [8];
  long local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ParticlesEditorPlugin::ParticlesEditorPlugin((ParticlesEditorPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_00117588;
  *(undefined1 (*) [16])(this + 0x688) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x698) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6a8) = (undefined1  [16])0x0;
  this_00 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_00);
  postinitialize_handler((Object *)this_00);
  *(EditorFileDialog **)(this + 0x688) = this_00;
  local_70 = (long *)0x0;
  ImageLoader::get_recognized_extensions((List *)&local_70);
  if (local_70 != (long *)0x0) {
    for (lVar1 = *local_70; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      pSVar2 = *(String **)(this + 0x688);
      String::to_upper();
      operator+((char *)&local_60,(String *)&_LC90);
      EditorFileDialog::add_filter(pSVar2,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    }
  }
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0x688),0);
  Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),*(undefined8 *)(this + 0x688),0,0);
  plVar3 = *(long **)(this + 0x688);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC24;
  *(Particles2DEditorPlugin **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_00118418;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar5;
  *(code **)(pCVar6 + 0x38) = _file_selected;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "Particles2DEditorPlugin::_file_selected";
  Callable::Callable((Callable *)local_58,pCVar6);
  StringName::StringName((StringName *)&local_60,"file_selected",false);
  (*pcVar4)(plVar3,(StringName *)&local_60,(Callable *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  this_01 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_01);
  postinitialize_handler((Object *)this_01);
  *(ConfirmationDialog **)(this + 0x690) = this_01;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Load Emission Mask");
  TTR(local_68,(String *)&local_60);
  Window::set_title((String *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,true);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_00116c88;
  postinitialize_handler((Object *)this_02);
  Node::add_child(*(undefined8 *)(this + 0x690),this_02,0,0);
  this_03 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(this_03,(String *)local_58);
  postinitialize_handler((Object *)this_03);
  *(OptionButton **)(this + 0x698) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar2 = *(String **)(this + 0x698);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Solid Pixels");
  TTR(local_68,(String *)&local_60);
  iVar8 = (int)local_68;
  OptionButton::add_item(pSVar2,iVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar2 = *(String **)(this + 0x698);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Border Pixels");
  TTR(local_68,(String *)&local_60);
  OptionButton::add_item(pSVar2,iVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar2 = *(String **)(this + 0x698);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Directed Border Pixels");
  TTR(local_68,(String *)&local_60);
  OptionButton::add_item(pSVar2,iVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x698);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Emission Mask");
  TTR(local_68,(String *)&local_60);
  VBoxContainer::add_margin_child((String *)this_02,(Control *)local_68,SUB81(uVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  this_04 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_04,true);
  *(undefined ***)this_04 = &PTR__initialize_classv_00116c88;
  this_04[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)this_04);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Options");
  TTR(local_68,(String *)&local_60);
  VBoxContainer::add_margin_child((String *)this_02,(Control *)local_68,SUB81(this_04,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pCVar7 = (CheckBox *)operator_new(0xc60,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Centered");
  TTR(local_68,(String *)&local_60);
  CheckBox::CheckBox(pCVar7,local_68);
  postinitialize_handler((Object *)pCVar7);
  *(CheckBox **)(this + 0x6a0) = pCVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(this_04,*(undefined8 *)(this + 0x6a0),0,0);
  pCVar7 = (CheckBox *)operator_new(0xc60,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Capture Colors from Pixel");
  TTR(local_68,(String *)&local_60);
  CheckBox::CheckBox(pCVar7,local_68);
  postinitialize_handler((Object *)pCVar7);
  *(CheckBox **)(this + 0x6a8) = pCVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(this_04,*(undefined8 *)(this + 0x6a8),0);
  Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),*(undefined8 *)(this + 0x690),0);
  plVar3 = *(long **)(this + 0x690);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC24;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_001184a8;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar5;
  *(Particles2DEditorPlugin **)(pCVar6 + 0x28) = this;
  *(undefined8 *)(pCVar6 + 0x38) = 0x2b1;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "Particles2DEditorPlugin::_generate_emission_mask";
  Callable::Callable((Callable *)local_58,pCVar6);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x268,(Callable *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles2DEditorPlugin::GPUParticles2DEditorPlugin() */

void __thiscall
GPUParticles2DEditorPlugin::GPUParticles2DEditorPlugin(GPUParticles2DEditorPlugin *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  double dVar4;
  char *pcVar5;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  SpinBox *this_02;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Particles2DEditorPlugin::Particles2DEditorPlugin((Particles2DEditorPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_001172c0;
  *(undefined8 *)(this + 0x6c8) = 0;
  *(undefined1 (*) [16])(this + 0x6b8) = (undefined1  [16])0x0;
  local_58 = "GPUParticles2D";
  local_50 = 0xe;
  String::parse_latin1((StrRange *)(this + 0x670));
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Convert to CPUParticles2D";
  local_68 = 0;
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  if (*(char **)(this + 0x678) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
    pcVar5 = local_58;
    local_58 = (char *)0x0;
    *(char **)(this + 0x678) = pcVar5;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_00);
  postinitialize_handler((Object *)this_00);
  local_58 = "";
  *(ConfirmationDialog **)(this + 0x6c0) = this_00;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Generate Visibility Rect";
  local_68 = 0;
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Window::set_title((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_00116c88;
  postinitialize_handler((Object *)this_01);
  Node::add_child(*(undefined8 *)(this + 0x6c0),this_01,0,0);
  this_02 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(this_02);
  postinitialize_handler((Object *)this_02);
  dVar4 = _LC101;
  *(SpinBox **)(this + 0x6c8) = this_02;
  Range::set_min(dVar4);
  Range::set_max(_LC102);
  Range::set_value(_LC103);
  local_58 = "";
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0x6c8);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Generation Time (sec):";
  local_68 = 0;
  local_50 = 0x16;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  VBoxContainer::add_margin_child((String *)this_01,(Control *)&local_58,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),*(undefined8 *)(this + 0x6c0),0,0);
  plVar2 = *(long **)(this + 0x6c0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<GPUParticles2DEditorPlugin>
            ((GPUParticles2DEditorPlugin *)&local_58,(char *)this,
             (_func_void *)"&GPUParticles2DEditorPlugin::_generate_visibility_rect");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles2DEditorPlugin::CPUParticles2DEditorPlugin() */

void __thiscall
CPUParticles2DEditorPlugin::CPUParticles2DEditorPlugin(CPUParticles2DEditorPlugin *this)

{
  char *pcVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Particles2DEditorPlugin::Particles2DEditorPlugin((Particles2DEditorPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_00117850;
  local_48 = "CPUParticles2D";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)(this + 0x670));
  local_48 = "";
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Convert to GPUParticles2D";
  local_58 = 0;
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  if (*(char **)(this + 0x678) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
    pcVar1 = local_48;
    local_48 = (char *)0x0;
    *(char **)(this + 0x678) = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticlesEditorPlugin::initialize_class() [clone .part.0] */

void ParticlesEditorPlugin::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (EditorPlugin::initialize_class()::initialized == '\0') {
    if (Node::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Object");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Node");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)PTR__bind_methods_0011e010 != Node::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Node");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"EditorPlugin");
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Node::_bind_methods) {
      EditorPlugin::_bind_methods();
    }
    if ((code *)PTR__bind_compatibility_methods_0011e008 != Object::_bind_compatibility_methods) {
      EditorPlugin::_bind_compatibility_methods();
    }
    EditorPlugin::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorPlugin";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ParticlesEditorPlugin";
  local_70 = 0;
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 0xc;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */

void Vector<Vector3>::push_back(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3> *)(param_3 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_3 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_3 + 8) + lVar4 * 0xc);
        *puVar1 = param_1;
        *(undefined4 *)(puVar1 + 1) = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  int iVar1;
  CowData<Vector2> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  CowData<Vector2> *pCVar7;
  CowData<Vector2> *pCVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar9 = 0;
    pCVar2 = (CowData<Vector2> *)0x0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<Vector2> *)(lVar9 * 8);
    if (pCVar2 != (CowData<Vector2> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<Vector2> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar3 = param_1 * 8 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar8 = (CowData<Vector2> *)(uVar3 | uVar3 >> 0x20);
    pCVar7 = pCVar8 + 1;
    if (pCVar7 != (CowData<Vector2> *)0x0) {
      if (param_1 <= lVar9) {
        if ((pCVar7 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar7), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0011533c();
        return;
      }
      if (pCVar7 == pCVar2) {
LAB_001045cc:
        puVar10 = *(undefined8 **)this;
        if (puVar10 == (undefined8 *)0x0) {
          resize<false>((long)pCVar8);
          return;
        }
        lVar9 = puVar10[-1];
        if (param_1 <= lVar9) goto LAB_0010455d;
      }
      else {
        if (lVar9 != 0) {
          pCVar8 = this;
          iVar1 = _realloc(this,(long)pCVar7);
          if (iVar1 != 0) {
            return;
          }
          goto LAB_001045cc;
        }
        puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar8 + 0x11),false);
        if (puVar4 == (undefined8 *)0x0) {
          uVar6 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_00104642;
        }
        puVar10 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar10;
        lVar9 = 0;
      }
      memset(puVar10 + lVar9,0,(param_1 - lVar9) * 8);
LAB_0010455d:
      puVar10[-1] = param_1;
      return;
    }
  }
  uVar6 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00104642:
  _err_print_error("resize","./core/templates/cowdata.h",uVar6,pcVar5,0,0);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  size_t __n;
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar3 = 0x10;
  if (__n != 0) {
    uVar3 = __n - 1 | __n - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
  }
  puVar2 = (undefined8 *)Memory::alloc_static(uVar3,false);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = __n;
    memcpy(puVar2 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar2 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Particles3DEditorPlugin::Particles3DEditorPlugin() */

void __thiscall Particles3DEditorPlugin::Particles3DEditorPlugin(Particles3DEditorPlugin *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  String *pSVar4;
  double dVar5;
  int iVar6;
  ConfirmationDialog *pCVar7;
  BoxContainer *pBVar8;
  SpinBox *pSVar9;
  SceneTreeDialog *this_00;
  CallableCustom *this_01;
  OptionButton *this_02;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  String local_78 [8];
  long local_70;
  undefined8 local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ParticlesEditorPlugin::ParticlesEditorPlugin((ParticlesEditorPlugin *)this);
  *(undefined8 *)(this + 0x6c0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00117b18;
  *(undefined1 (*) [16])(this + 0x688) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x698) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6a8) = (undefined1  [16])0x0;
  pCVar7 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar7);
  postinitialize_handler((Object *)pCVar7);
  *(ConfirmationDialog **)(this + 0x688) = pCVar7;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"Generate Visibility AABB");
  TTR((String *)&local_70,(String *)&local_68);
  Window::set_title((String *)pCVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00116c88;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(*(undefined8 *)(this + 0x688),pBVar8,0,0);
  pSVar9 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar9);
  postinitialize_handler((Object *)pSVar9);
  dVar5 = _LC101;
  *(SpinBox **)(this + 0x690) = pSVar9;
  Range::set_min(dVar5);
  Range::set_max(_LC102);
  Range::set_value(_LC103);
  uVar1 = *(undefined8 *)(this + 0x690);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"Generation Time (sec):");
  TTR((String *)&local_70,(String *)&local_68);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)&local_70,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),*(undefined8 *)(this + 0x688),0,0);
  plVar2 = *(long **)(this + 0x688);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<Particles3DEditorPlugin>
            ((Particles3DEditorPlugin *)local_58,(char *)this,
             (_func_void *)"&Particles3DEditorPlugin::_generate_aabb");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  this_00 = (SceneTreeDialog *)operator_new(0xdf0,"");
  SceneTreeDialog::SceneTreeDialog(this_00);
  postinitialize_handler((Object *)this_00);
  *(SceneTreeDialog **)(this + 0x698) = this_00;
  local_60 = 0;
  StringName::StringName((StringName *)local_58,"MeshInstance3D",false);
  if (local_60 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = *(long *)(local_60 + -8) + 1;
  }
  iVar6 = CowData<StringName>::resize<false>((CowData<StringName> *)&local_60,lVar10);
  if (iVar6 == 0) {
    if (local_60 == 0) {
      lVar11 = -1;
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(local_60 + -8);
      lVar11 = lVar10 + -1;
      if (-1 < lVar11) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60);
        StringName::operator=((StringName *)(local_60 + lVar11 * 8),(StringName *)local_58);
        goto LAB_00104b9d;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar10,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00104b9d:
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  SceneTreeDialog::set_valid_types(*(Vector **)(this + 0x698));
  Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),*(undefined8 *)(this + 0x698),0,0);
  plVar2 = *(long **)(this + 0x698);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC24;
  *(Particles3DEditorPlugin **)(this_01 + 0x28) = this;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_00118658;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar1;
  *(code **)(this_01 + 0x38) = _node_selected;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "Particles3DEditorPlugin::_node_selected";
  Callable::Callable((Callable *)local_58,this_01);
  StringName::StringName((StringName *)&local_70,"selected",false);
  (*pcVar3)(plVar2,(String *)&local_70,(String *)local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  pCVar7 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar7);
  postinitialize_handler((Object *)pCVar7);
  *(ConfirmationDialog **)(this + 0x6a0) = pCVar7;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Create Emitter");
  TTR(local_78,(String *)&local_70);
  Window::set_title((String *)pCVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),*(undefined8 *)(this + 0x6a0),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00116c88;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(*(undefined8 *)(this + 0x6a0),pBVar8,0,0);
  pSVar9 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar9);
  postinitialize_handler((Object *)pSVar9);
  dVar5 = _LC18;
  *(SpinBox **)(this + 0x6a8) = pSVar9;
  Range::set_min(dVar5);
  Range::set_max(_LC145);
  Range::set_value(_LC146);
  uVar1 = *(undefined8 *)(this + 0x6a8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Emission Points:");
  TTR(local_78,(String *)&local_70);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_78,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  this_02 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(this_02,(String *)local_58);
  postinitialize_handler((Object *)this_02);
  *(OptionButton **)(this + 0x6b0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar4 = *(String **)(this + 0x6b0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Surface Points");
  TTR(local_78,(String *)&local_70);
  iVar6 = (int)local_78;
  OptionButton::add_item(pSVar4,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar4 = *(String **)(this + 0x6b0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Surface Points+Normal (Directed)");
  TTR(local_78,(String *)&local_70);
  OptionButton::add_item(pSVar4,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar4 = *(String **)(this + 0x6b0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Volume");
  TTR(local_78,(String *)&local_70);
  OptionButton::add_item(pSVar4,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar1 = *(undefined8 *)(this + 0x6b0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Emission Source:");
  TTR(local_78,(String *)&local_70);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_78,SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar1 = *(undefined8 *)(this + 0x6a0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Create");
  TTR(local_78,(String *)&local_70);
  AcceptDialog::set_ok_button_text(uVar1,local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar2 = *(long **)(this + 0x6a0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<Particles3DEditorPlugin>
            ((Particles3DEditorPlugin *)local_58,(char *)this,
             (_func_void *)"&Particles3DEditorPlugin::_generate_emission_points");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  CowData<StringName>::_unref((CowData<StringName> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3DEditorPlugin::GPUParticles3DEditorPlugin() */

void __thiscall
GPUParticles3DEditorPlugin::GPUParticles3DEditorPlugin(GPUParticles3DEditorPlugin *this)

{
  char *pcVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Particles3DEditorPlugin::Particles3DEditorPlugin((Particles3DEditorPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_00117de8;
  local_48 = "GPUParticles3D";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)(this + 0x670));
  local_48 = "";
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Convert to CPUParticles3D";
  local_58 = 0;
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  if (*(char **)(this + 0x678) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
    pcVar1 = local_48;
    local_48 = (char *)0x0;
    *(char **)(this + 0x678) = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles3DEditorPlugin::CPUParticles3DEditorPlugin() */

void __thiscall
CPUParticles3DEditorPlugin::CPUParticles3DEditorPlugin(CPUParticles3DEditorPlugin *this)

{
  char *pcVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Particles3DEditorPlugin::Particles3DEditorPlugin((Particles3DEditorPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_001180b8;
  local_48 = "CPUParticles3D";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)(this + 0x670));
  local_48 = "";
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Convert to GPUParticles3D";
  local_58 = 0;
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  if (*(char **)(this + 0x678) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
    pcVar1 = local_48;
    local_48 = (char *)0x0;
    *(char **)(this + 0x678) = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles3DEditorPlugin::_node_selected(NodePath const&) */

void Particles3DEditorPlugin::_node_selected(NodePath *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  code *pcVar3;
  bool *pbVar4;
  undefined8 uVar5;
  Vector2i *pVVar6;
  Object *pOVar7;
  char cVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *__dest;
  undefined8 *puVar13;
  char *pcVar14;
  ulong uVar15;
  int iVar16;
  size_t __n;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  long *local_170;
  String *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  undefined8 local_118;
  String local_110 [8];
  long local_108;
  CowData<char32_t> local_100 [8];
  String local_f8 [8];
  Object *local_f0;
  Object *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8 [6];
  undefined8 local_78 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = (long *)Node::get_node(param_1);
  if (plVar9 == (long *)0x0) goto LAB_00105718;
  pcVar3 = *(code **)(*plVar9 + 0x58);
  local_e8 = (Object *)0x0;
  String::parse_latin1((String *)&local_e8,"Node3D");
  cVar8 = (*pcVar3)(plVar9,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (cVar8 == '\0') {
    local_e8 = (Object *)0x0;
    local_168 = EditorNode::singleton;
    String::parse_latin1((String *)&local_e8,"");
    local_f0 = (Object *)0x0;
    String::parse_latin1((String *)&local_f0,"Warning!");
    TTR(local_f8,(String *)&local_f0);
    Node::get_name();
    local_118 = 0;
    String::parse_latin1((String *)&local_118,"");
    pcVar14 = "\"%s\" doesn\'t inherit from Node3D.";
  }
  else {
    lVar10 = __dynamic_cast(plVar9,&Object::typeinfo,&MeshInstance3D::typeinfo,0);
    if ((lVar10 == 0) || (MeshInstance3D::get_mesh(), local_e8 == (Object *)0x0)) {
      local_e8 = (Object *)0x0;
      local_168 = EditorNode::singleton;
      String::parse_latin1((String *)&local_e8,"");
      local_f0 = (Object *)0x0;
      String::parse_latin1((String *)&local_f0,"Warning!");
      TTR(local_f8,(String *)&local_f0);
      Node::get_name();
      local_118 = 0;
      String::parse_latin1((String *)&local_118,"");
      pcVar14 = "\"%s\" doesn\'t contain geometry.";
    }
    else {
      cVar8 = RefCounted::unreference();
      pOVar7 = local_e8;
      if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_e8), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      MeshInstance3D::get_mesh();
      Mesh::get_faces();
      if (*(long *)(param_1 + 0x6c0) != local_e0) {
        CowData<Face3>::_unref((CowData<Face3> *)(param_1 + 0x6c0));
        lVar10 = local_e0;
        local_e0 = 0;
        *(long *)(param_1 + 0x6c0) = lVar10;
      }
      CowData<Face3>::_unref((CowData<Face3> *)&local_e0);
      if (((local_f0 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar7 = local_f0, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_f0), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))();
        Memory::free_static(pOVar7,false);
      }
      if ((*(long *)(param_1 + 0x6c0) != 0) && (*(long *)(*(long *)(param_1 + 0x6c0) + -8) != 0)) {
        pbVar4 = *(bool **)(param_1 + 0x680);
        StringName::StringName((StringName *)&local_e8,"global_transform",false);
        Object::get((StringName *)local_78,pbVar4);
        Variant::operator_cast_to_Transform3D((Variant *)&local_d8);
        if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
          StringName::unref();
        }
        Node3D::get_global_transform();
        Transform3D::affine_inverse();
        Transform3D::operator*((Transform3D *)&local_158,(Transform3D *)local_a8);
        lVar10 = *(long *)(param_1 + 0x6c0);
        local_d8 = local_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        uStack_c0 = uStack_140;
        local_b8 = (float)local_138;
        fStack_b4 = (float)((ulong)local_138 >> 0x20);
        fStack_b0 = (float)uStack_130;
        fStack_ac = (float)((ulong)uStack_130 >> 0x20);
        if (lVar10 != 0) {
          uVar5 = *(undefined8 *)(lVar10 + -8);
          if (*(ulong *)(lVar10 + -0x10) < 2) {
LAB_001058ec:
            __dest = *(undefined8 **)(param_1 + 0x6c0);
          }
          else {
            if (*(long *)(param_1 + 0x6c0) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            lVar10 = *(long *)(*(long *)(param_1 + 0x6c0) + -8);
            uVar15 = 0x10;
            __n = lVar10 * 0x24;
            if (__n != 0) {
              uVar15 = __n - 1 | __n - 1 >> 1;
              uVar15 = uVar15 | uVar15 >> 2;
              uVar15 = uVar15 | uVar15 >> 4;
              uVar15 = uVar15 | uVar15 >> 8;
              uVar15 = uVar15 | uVar15 >> 0x10;
              uVar15 = (uVar15 | uVar15 >> 0x20) + 0x11;
            }
            puVar13 = (undefined8 *)Memory::alloc_static(uVar15,false);
            if (puVar13 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
              goto LAB_001058ec;
            }
            __dest = puVar13 + 2;
            *puVar13 = 1;
            puVar13[1] = lVar10;
            memcpy(__dest,*(void **)(param_1 + 0x6c0),__n);
            CowData<Face3>::_unref((CowData<Face3> *)(param_1 + 0x6c0));
            *(undefined8 **)(param_1 + 0x6c0) = __dest;
          }
          iVar16 = (int)uVar5;
          if (0 < iVar16) {
            puVar13 = (undefined8 *)((long)__dest + 0x24);
            puVar1 = (undefined8 *)((long)__dest + (ulong)(iVar16 - 1) * 0x24 + 0x48);
            puVar12 = __dest;
            do {
              do {
                fVar2 = *(float *)(__dest + 1);
                puVar11 = (undefined8 *)((long)__dest + 0xc);
                fVar17 = (float)*__dest;
                fVar18 = (float)((ulong)*__dest >> 0x20);
                *(float *)(__dest + 1) =
                     (float)uStack_c0 * fVar17 + uStack_c0._4_4_ * fVar18 + local_b8 * fVar2 +
                     fStack_ac;
                *__dest = CONCAT44((float)local_c8 * fVar18 +
                                   fVar17 * (float)((ulong)uStack_d0 >> 0x20) +
                                   (float)((ulong)local_c8 >> 0x20) * fVar2 + fStack_b0,
                                   local_d8._4_4_ * fVar18 + fVar17 * (float)local_d8 +
                                   (float)uStack_d0 * fVar2 + fStack_b4);
                __dest = puVar11;
              } while (puVar11 != puVar13);
              puVar13 = (undefined8 *)((long)puVar13 + 0x24);
              __dest = (undefined8 *)((long)puVar12 + 0x24);
              puVar12 = __dest;
            } while (puVar1 != puVar13);
          }
        }
        pVVar6 = *(Vector2i **)(param_1 + 0x6a0);
        local_a8[0] = _LC164;
        local_78[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)local_a8);
        Window::popup_centered(pVVar6);
        goto LAB_00105718;
      }
      local_e8 = (Object *)0x0;
      local_168 = EditorNode::singleton;
      String::parse_latin1((String *)&local_e8,"");
      local_f0 = (Object *)0x0;
      String::parse_latin1((String *)&local_f0,"Warning!");
      TTR(local_f8,(String *)&local_f0);
      Node::get_name();
      local_118 = 0;
      String::parse_latin1((String *)&local_118,"");
      pcVar14 = "\"%s\" doesn\'t contain face geometry.";
    }
  }
  local_170 = &local_108;
  local_120 = 0;
  String::parse_latin1((String *)&local_120,pcVar14);
  TTR(local_110,(String *)&local_120);
  vformat<StringName>(local_100,local_110,local_170);
  EditorNode::show_warning(local_168,(String *)local_100);
  CowData<char32_t>::_unref(local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00105718:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  int iVar2;
  ulong uVar3;
  CowData<unsigned_char> *pCVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  CowData<unsigned_char> *pCVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00105db6:
    lVar8 = 0;
    pCVar4 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    if (lVar8 == 0) goto LAB_00105db6;
    uVar3 = lVar8 - 1U | lVar8 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar4 = (CowData<unsigned_char> *)((uVar3 | uVar3 >> 0x20) + 1);
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  pCVar7 = (CowData<unsigned_char> *)(uVar3 | uVar3 >> 0x20);
  pCVar1 = pCVar7 + 1;
  if (param_1 <= lVar8) {
    if ((pCVar1 != pCVar4) && (iVar2 = _realloc(this,(long)pCVar1), iVar2 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00115372();
    return;
  }
  if (pCVar1 != pCVar4) {
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar7 + 0x11),false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8 **)this = puVar6;
      goto LAB_00105d0c;
    }
    pCVar7 = this;
    iVar2 = _realloc(this,(long)pCVar1);
    if (iVar2 != 0) {
      return;
    }
  }
  puVar6 = *(undefined8 **)this;
  if (puVar6 == (undefined8 *)0x0) {
    resize<false>((long)pCVar7);
    return;
  }
LAB_00105d0c:
  puVar6[-1] = param_1;
  return;
}



/* Particles2DEditorPlugin::_get_base_emission_mask(Vector<Vector2>&, Vector<Vector2>&,
   Vector<unsigned char>&, Vector2i&) */

void __thiscall
Particles2DEditorPlugin::_get_base_emission_mask
          (Particles2DEditorPlugin *this,Vector *param_1,Vector *param_2,Vector *param_3,
          Vector2i *param_4)

{
  CowData<unsigned_char> *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;
  code *pcVar7;
  Image *pIVar8;
  Object *pOVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  CowData<Vector2> *this_00;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  byte *pbVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 *puVar28;
  long in_FS_OFFSET;
  int iVar29;
  undefined8 local_128;
  int local_cc;
  Image *local_80;
  CowData<char32_t> local_78 [8];
  Image *local_70;
  Object *local_68;
  long local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (Image *)0x0;
  Ref<Image>::instantiate<>((Ref<Image> *)&local_80);
  pIVar8 = local_80;
  local_68 = (Object *)0x0;
  local_70 = (Image *)0x0;
  if (local_80 != (Image *)0x0) {
    local_70 = local_80;
    cVar10 = RefCounted::reference();
    if (cVar10 == '\0') {
      local_70 = (Image *)0x0;
    }
  }
  iVar11 = ImageLoader::load_image(this + 0x6b0,(String *)&local_70,(String *)&local_68,0);
  if ((local_70 != (Image *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
    memdelete<Image>(local_70);
  }
  if (((local_68 != (Object *)0x0) &&
      (cVar10 = RefCounted::unreference(), pOVar9 = local_68, cVar10 != '\0')) &&
     (cVar10 = predelete_handler(local_68), cVar10 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))();
    Memory::free_static(pOVar9,false);
  }
  if (iVar11 == 0) {
    cVar10 = Image::is_compressed();
    if (cVar10 != '\0') {
      Image::decompress();
    }
    Image::convert(pIVar8,5);
    iVar11 = Image::get_format();
    if (iVar11 == 5) {
      uVar13 = Image::get_size();
      iVar11 = (int)uVar13;
      iVar29 = (int)((ulong)uVar13 >> 0x20);
      if ((iVar29 == 0) || (iVar11 == 0)) {
        _err_print_error("_get_base_emission_mask","editor/plugins/particles_editor_plugin.cpp",0xa1
                         ,"Condition \"s.width == 0 || s.height == 0\" is true.",0,0);
      }
      else {
        iVar25 = iVar29 * iVar11;
        *(undefined8 *)param_4 = uVar13;
        this_00 = (CowData<Vector2> *)(param_1 + 8);
        CowData<Vector2>::resize<false>(this_00,(long)iVar25);
        iVar12 = OptionButton::get_selected();
        if (iVar12 == 2) {
          CowData<Vector2>::resize<false>((CowData<Vector2> *)(param_2 + 8),(long)iVar25);
        }
        cVar10 = BaseButton::is_pressed();
        if (cVar10 != '\0') {
          CowData<unsigned_char>::resize<false>
                    ((CowData<unsigned_char> *)(param_3 + 8),(long)(iVar25 * 4));
        }
        Image::get_data();
        if (iVar11 < 1) {
          lVar19 = 0;
        }
        else {
          iVar25 = iVar11 * 4;
          iVar3 = 0;
          iVar4 = 0;
          local_cc = iVar25;
          do {
            if (0 < iVar29) {
              puVar28 = (undefined1 *)(local_60[0] + iVar3 * 4);
              iVar26 = 0;
              uVar14 = 0xffffffffffffffff;
              iVar2 = iVar11 * -2;
              do {
                if (0x80 < (byte)puVar28[3]) {
                  if (iVar12 != 0) {
                    pbVar24 = (byte *)(local_60[0] + 3 + (long)(iVar2 * 4 + -4 + local_cc));
                    iVar17 = iVar3 + -1;
LAB_001063a0:
                    if ((-1 < iVar17 && iVar17 < iVar11) &&
                       (uVar16 = uVar14, pbVar21 = pbVar24,
                       (int)uVar14 < iVar29 && (uVar14 >> 0x1f & 1) == 0)) goto LAB_001063c0;
LAB_001063d8:
                    lVar15 = (long)iVar4;
                    lVar19 = *(long *)(param_1 + 8);
                    if (-1 < lVar15) {
                      if (lVar19 == 0) goto LAB_00106a9d;
                      if (*(long *)(lVar19 + -8) <= lVar15) goto LAB_00106ace;
                      CowData<Vector2>::_copy_on_write(this_00);
                      *(ulong *)(*(long *)(param_1 + 8) + lVar15 * 8) =
                           CONCAT44((float)iVar26,(float)iVar3);
                      if (iVar12 == 2) {
                        local_50 = 0;
                        iVar23 = -2;
                        iVar17 = iVar3 + -2;
                        iVar22 = iVar2 * 4 + -8 + iVar3 * 4;
                        do {
                          iVar18 = iVar26 + -2;
                          iVar27 = iVar22;
LAB_0010696e:
                          do {
                            if ((iVar26 != iVar18) || (iVar3 != iVar17)) {
                              if ((iVar18 < iVar29 &&
                                   -1 < (char)((byte)((uint)iVar18 >> 0x18) |
                                              (byte)((uint)iVar17 >> 0x18))) &&
                                 ((iVar17 < iVar11 &&
                                  (0x80 < *(byte *)(local_60[0] + 3 + (long)iVar27))))) {
                                iVar18 = iVar18 + 1;
                                iVar27 = iVar27 + iVar25;
                                if (iVar26 + 2 < iVar18) break;
                                goto LAB_0010696e;
                              }
                              local_48 = CONCAT44((float)(iVar18 - iVar26),(float)iVar23);
                              uVar13 = Vector2::normalized();
                              local_50 = CONCAT44((float)((ulong)local_50 >> 0x20) +
                                                  (float)((ulong)uVar13 >> 0x20),
                                                  (float)local_50 + (float)uVar13);
                            }
                            iVar18 = iVar18 + 1;
                            iVar27 = iVar27 + iVar25;
                          } while (iVar18 <= iVar26 + 2);
                          iVar17 = iVar17 + 1;
                          iVar23 = iVar23 + 1;
                          iVar22 = iVar22 + 4;
                        } while (iVar17 <= iVar3 + 2);
                        Vector2::normalize();
                        if (*(long *)(param_2 + 8) == 0) {
LAB_00106a9d:
                          lVar19 = 0;
                          goto LAB_0010667c;
                        }
                        lVar19 = *(long *)(*(long *)(param_2 + 8) + -8);
                        if (lVar19 <= lVar15) goto LAB_0010667c;
                        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(param_2 + 8));
                        *(undefined8 *)(*(long *)(param_2 + 8) + lVar15 * 8) = local_50;
                      }
                      if (cVar10 != '\0') {
                        uVar5 = *puVar28;
                        iVar17 = iVar4 * 4;
                        lVar15 = (long)iVar17;
                        if (*(long *)(param_3 + 8) != 0) {
                          lVar19 = *(long *)(*(long *)(param_3 + 8) + -8);
                          if (lVar19 <= lVar15) goto LAB_0010667c;
                          pCVar1 = (CowData<unsigned_char> *)(param_3 + 8);
                          CowData<unsigned_char>::_copy_on_write(pCVar1);
                          *(undefined1 *)(*(long *)(param_3 + 8) + lVar15) = uVar5;
                          uVar5 = puVar28[1];
                          lVar15 = (long)(iVar17 + 1);
                          if (*(long *)(param_3 + 8) != 0) {
                            lVar19 = *(long *)(*(long *)(param_3 + 8) + -8);
                            if (lVar19 <= lVar15) goto LAB_0010667c;
                            CowData<unsigned_char>::_copy_on_write(pCVar1);
                            *(undefined1 *)(*(long *)(param_3 + 8) + lVar15) = uVar5;
                            uVar5 = puVar28[2];
                            lVar15 = (long)(iVar17 + 2);
                            if (*(long *)(param_3 + 8) != 0) {
                              lVar19 = *(long *)(*(long *)(param_3 + 8) + -8);
                              if (lVar19 <= lVar15) goto LAB_0010667c;
                              lVar20 = (long)(iVar17 + 3);
                              CowData<unsigned_char>::_copy_on_write(pCVar1);
                              *(undefined1 *)(*(long *)(param_3 + 8) + lVar15) = uVar5;
                              uVar5 = puVar28[3];
                              lVar15 = lVar20;
                              if (*(long *)(param_3 + 8) == 0) {
                                lVar19 = 0;
                                goto LAB_0010667c;
                              }
                              lVar19 = *(long *)(*(long *)(param_3 + 8) + -8);
                              if (lVar19 <= lVar20) goto LAB_0010667c;
                              CowData<unsigned_char>::_copy_on_write(pCVar1);
                              *(undefined1 *)(*(long *)(param_3 + 8) + lVar20) = uVar5;
                              goto LAB_001065e2;
                            }
                          }
                        }
                        goto LAB_00106a9d;
                      }
LAB_001065e2:
                      iVar4 = iVar4 + 1;
                      goto LAB_0010630e;
                    }
                    if (lVar19 == 0) goto LAB_00106a9d;
LAB_00106ace:
                    lVar19 = *(long *)(lVar19 + -8);
                    goto LAB_0010667c;
                  }
                  if (cVar10 != '\0') {
                    uVar5 = *puVar28;
                    iVar17 = iVar4 * 4;
                    lVar19 = *(long *)(param_3 + 8);
                    lVar15 = (long)iVar17;
                    if (lVar15 < 0) {
                      if (lVar19 != 0) {
LAB_00106851:
                        lVar19 = *(long *)(lVar19 + -8);
                        goto LAB_0010667c;
                      }
                    }
                    else if (lVar19 != 0) {
                      if (*(long *)(lVar19 + -8) <= lVar15) goto LAB_00106851;
                      pCVar1 = (CowData<unsigned_char> *)(param_3 + 8);
                      CowData<unsigned_char>::_copy_on_write(pCVar1);
                      *(undefined1 *)(*(long *)(param_3 + 8) + lVar15) = uVar5;
                      uVar5 = puVar28[1];
                      lVar15 = (long)(iVar17 + 1);
                      if (*(long *)(param_3 + 8) != 0) {
                        lVar19 = *(long *)(*(long *)(param_3 + 8) + -8);
                        if (lVar19 <= lVar15) goto LAB_0010667c;
                        CowData<unsigned_char>::_copy_on_write(pCVar1);
                        *(undefined1 *)(*(long *)(param_3 + 8) + lVar15) = uVar5;
                        uVar5 = puVar28[2];
                        lVar15 = (long)(iVar17 + 2);
                        if (*(long *)(param_3 + 8) != 0) {
                          lVar19 = *(long *)(*(long *)(param_3 + 8) + -8);
                          if (lVar19 <= lVar15) goto LAB_0010667c;
                          CowData<unsigned_char>::_copy_on_write(pCVar1);
                          *(undefined1 *)(*(long *)(param_3 + 8) + lVar15) = uVar5;
                          uVar5 = puVar28[3];
                          lVar15 = (long)(iVar17 + 3);
                          if (*(long *)(param_3 + 8) == 0) {
                            lVar19 = 0;
                            goto LAB_0010667c;
                          }
                          lVar19 = *(long *)(*(long *)(param_3 + 8) + -8);
                          if (lVar19 <= lVar15) goto LAB_0010667c;
                          local_128 = CONCAT44((float)iVar26,(float)iVar3);
                          CowData<unsigned_char>::_copy_on_write(pCVar1);
                          *(undefined1 *)(*(long *)(param_3 + 8) + lVar15) = uVar5;
                          goto LAB_001062ba;
                        }
                      }
                    }
                    lVar19 = 0;
                    goto LAB_0010667c;
                  }
                  local_128 = CONCAT44((float)iVar26,(float)iVar3);
                  if (iVar4 < 0) {
                    lVar19 = *(long *)(param_1 + 8);
                    if (lVar19 == 0) goto LAB_0010683d;
                  }
                  else {
LAB_001062ba:
                    lVar19 = *(long *)(param_1 + 8);
                    if (lVar19 == 0) {
LAB_0010683d:
                      lVar15 = (long)iVar4;
                      lVar19 = 0;
                      goto LAB_0010667c;
                    }
                    if ((long)iVar4 < *(long *)(lVar19 + -8)) {
                      CowData<Vector2>::_copy_on_write(this_00);
                      *(undefined8 *)(*(long *)(param_1 + 8) + (long)iVar4 * 8) = local_128;
                      iVar4 = iVar4 + 1;
                      goto LAB_0010630e;
                    }
                  }
                  lVar15 = (long)iVar4;
                  lVar19 = *(long *)(lVar19 + -8);
LAB_0010667c:
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,lVar15,lVar19,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
LAB_0010630e:
                iVar26 = iVar26 + 1;
                iVar2 = iVar2 + iVar11;
                puVar28 = puVar28 + iVar25;
                uVar14 = uVar14 + 1;
              } while (iVar26 < iVar29);
            }
            iVar3 = iVar3 + 1;
            local_cc = local_cc + 4;
          } while (iVar3 != iVar11);
          lVar19 = (long)iVar4;
        }
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_60);
        CowData<Vector2>::resize<false>(this_00,lVar19);
        if (*(long *)(param_2 + 8) != 0) {
          CowData<Vector2>::resize<false>((CowData<Vector2> *)(param_2 + 8),lVar19);
        }
      }
    }
    else {
      _err_print_error("_get_base_emission_mask","editor/plugins/particles_editor_plugin.cpp",0x9f,
                       "Condition \"img->get_format() != Image::FORMAT_RGBA8\" is true.",0,0);
    }
  }
  else {
    local_70 = (Image *)0x0;
    String::parse_latin1((String *)&local_70,"\'.");
    operator+((char *)local_78,(String *)"Error loading image \'");
    String::operator+((String *)&local_68,(String *)local_78);
    _err_print_error("_get_base_emission_mask","editor/plugins/particles_editor_plugin.cpp",0x99,
                     "Condition \"err != OK\" is true.",(String *)&local_68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  Ref<Image>::unref((Ref<Image> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001063c0:
  while( true ) {
    if (*pbVar21 < 0x81) goto LAB_001063d8;
    if (iVar26 < (int)uVar16) break;
    uVar16 = uVar16 + 1;
    pbVar21 = pbVar21 + iVar25;
    if (iVar29 <= (int)uVar16) goto LAB_001063d8;
  }
  pbVar24 = pbVar24 + 4;
  bVar6 = iVar3 < iVar17;
  iVar17 = iVar17 + 1;
  if (bVar6) goto LAB_0010630e;
  goto LAB_001063a0;
}



/* GPUParticles2DEditorPlugin::_generate_emission_mask() */

void __thiscall
GPUParticles2DEditorPlugin::_generate_emission_mask(GPUParticles2DEditorPlugin *this)

{
  long lVar1;
  code *pcVar2;
  Object *pOVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  StringName *pSVar8;
  Object *pOVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long in_FS_OFFSET;
  bool bVar13;
  float fVar14;
  float fVar15;
  StringName *local_d8;
  undefined8 local_d0;
  Object *local_c8;
  Object *local_c0;
  Vector local_b8 [8];
  long local_b0;
  Vector local_a8 [8];
  long local_a0;
  Vector local_98 [8];
  long local_90;
  undefined8 local_88;
  long local_80;
  Object *local_78;
  long local_70 [2];
  int local_60 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x680) != 0) {
    __dynamic_cast(*(long *)(this + 0x680),&Object::typeinfo,&GPUParticles2D::typeinfo,0);
  }
  GPUParticles2D::get_process_material();
  local_d8 = (StringName *)0x0;
  if (local_78 == (Object *)0x0) {
LAB_001075d8:
    _err_print_error("_generate_emission_mask","editor/plugins/particles_editor_plugin.cpp",0x18e,
                     "Condition \"pm.is_null()\" is true.",0,0);
  }
  else {
    pSVar8 = (StringName *)
             __dynamic_cast(local_78,&Object::typeinfo,&ParticleProcessMaterial::typeinfo,0);
    if (pSVar8 == (StringName *)0x0) {
LAB_00106c3b:
      cVar5 = RefCounted::unreference();
      pOVar9 = local_78;
      pSVar8 = local_d8;
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_78), pSVar8 = local_d8, cVar5 != '\0')
         ) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    else {
      local_d8 = pSVar8;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_d8 = (StringName *)0x0;
      }
      pSVar8 = local_d8;
      if (local_78 != (Object *)0x0) goto LAB_00106c3b;
    }
    if (pSVar8 == (StringName *)0x0) goto LAB_001075d8;
    local_b0 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    Particles2DEditorPlugin::_get_base_emission_mask
              ((Particles2DEditorPlugin *)this,local_b8,local_a8,local_98,(Vector2i *)local_60);
    lVar4 = local_b0;
    if (local_b0 != 0) {
      pOVar9 = (Object *)EditorUndoRedoManager::get_singleton();
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_c0 = (Object *)0x0;
      String::parse_latin1((String *)&local_c0,"Load Emission Mask");
      TTR((String *)&local_78,(String *)&local_c0);
      EditorUndoRedoManager::create_action(pOVar9,(String *)&local_78,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_80 = 0;
      iVar12 = (int)*(undefined8 *)(lVar4 + -8);
      iVar6 = iVar12 + 0x7ff;
      if (-1 < iVar12) {
        iVar6 = iVar12;
      }
      iVar6 = (iVar6 >> 0xb) + 1;
      lVar1 = (long)(iVar6 * 0x1000) * 4;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_80,lVar1);
      cVar5 = BaseButton::is_pressed();
      if (cVar5 == '\0') {
        fVar14 = 0.0;
        fVar15 = 0.0;
      }
      else {
        fVar14 = (float)((double)-local_60[1] * _LC181);
        fVar15 = (float)((double)-local_60[0] * _LC181);
      }
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
      if (0 < iVar12) {
        lVar11 = *(long *)(lVar4 + -8);
        uVar10 = 0;
        do {
          if (lVar11 <= (long)uVar10) goto LAB_00106e25;
          *(float *)(local_80 + uVar10 * 8) = *(float *)(lVar4 + uVar10 * 8) + fVar15;
          *(float *)(local_80 + 4 + uVar10 * 8) = *(float *)(lVar4 + 4 + uVar10 * 8) + fVar14;
          bVar13 = uVar10 != iVar12 - 1;
          uVar10 = uVar10 + 1;
        } while (bVar13);
      }
      local_d0 = 0;
      Ref<Image>::instantiate<>((Ref<Image> *)&local_d0);
      Image::set_data(local_d0,0x800,iVar6,0,9,(String *)&local_88);
      ImageTexture::create_from_image((Ref *)&local_c0);
      Variant::Variant((Variant *)local_58,local_c0);
      StringName::StringName((StringName *)&local_78,"emission_point_texture",false);
      EditorUndoRedoManager::add_do_property(pOVar9,pSVar8,(Variant *)&local_78);
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (((local_c0 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar3 = local_c0, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_c0), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
      ParticleProcessMaterial::get_emission_point_texture();
      Variant::Variant((Variant *)local_58,local_c0);
      StringName::StringName((StringName *)&local_78,"emission_point_texture",false);
      EditorUndoRedoManager::add_undo_property(pOVar9,pSVar8,(Variant *)&local_78);
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c0);
      Variant::Variant((Variant *)local_58,iVar12);
      StringName::StringName((StringName *)&local_78,"emission_point_count",false);
      EditorUndoRedoManager::add_do_property(pOVar9,pSVar8,(Variant *)&local_78);
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar7 = ParticleProcessMaterial::get_emission_point_count();
      Variant::Variant((Variant *)local_58,iVar7);
      StringName::StringName((StringName *)&local_78,"emission_point_count",false);
      EditorUndoRedoManager::add_undo_property(pOVar9,pSVar8,(Variant *)&local_78);
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar5 = BaseButton::is_pressed();
      if (cVar5 != '\0') {
        local_70[0] = 0;
        CowData<unsigned_char>::resize<false>
                  ((CowData<unsigned_char> *)local_70,(long)(iVar6 * 0x2000));
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_70);
        if (0 < iVar12) {
          if (local_90 == 0) {
            uVar10 = 0;
            lVar11 = 0;
LAB_00106e25:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar10,lVar11,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar10 = 0;
          do {
            lVar11 = *(long *)(local_90 + -8);
            if (lVar11 <= (long)uVar10) goto LAB_00106e25;
            *(undefined1 *)(local_70[0] + uVar10) = *(undefined1 *)(local_90 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar12 * 4);
        }
        Ref<Image>::instantiate<>((Ref<Image> *)&local_d0);
        Image::set_data(local_d0,0x800,iVar6,0,5,(String *)&local_78);
        ImageTexture::create_from_image((Ref *)&local_c8);
        Variant::Variant((Variant *)local_58,local_c8);
        StringName::StringName((StringName *)&local_c0,"emission_color_texture",false);
        EditorUndoRedoManager::add_do_property(pOVar9,pSVar8,(Variant *)&local_c0);
        if ((StringName::configured != '\0') && (local_c0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Ref<ImageTexture>::unref((Ref<ImageTexture> *)&local_c8);
        ParticleProcessMaterial::get_emission_color_texture();
        Variant::Variant((Variant *)local_58,local_c8);
        StringName::StringName((StringName *)&local_c0,"emission_color_texture",false);
        EditorUndoRedoManager::add_undo_property(pOVar9,pSVar8,(Variant *)&local_c0);
        if ((StringName::configured != '\0') && (local_c0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_70);
      }
      lVar4 = local_a0;
      if ((local_a0 == 0) || (*(long *)(local_a0 + -8) == 0)) {
        Variant::Variant((Variant *)local_58,4);
        StringName::StringName((StringName *)&local_78,"emission_shape",false);
        EditorUndoRedoManager::add_do_property(pOVar9,pSVar8,(Variant *)&local_78);
        if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        iVar6 = ParticleProcessMaterial::get_emission_shape();
        Variant::Variant((Variant *)local_58,iVar6);
        StringName::StringName((StringName *)&local_78,"emission_shape",false);
        EditorUndoRedoManager::add_undo_property(pOVar9,pSVar8,(Variant *)&local_78);
        if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        Variant::Variant((Variant *)local_58,5);
        StringName::StringName((StringName *)&local_78,"emission_shape",false);
        EditorUndoRedoManager::add_do_property(pOVar9,pSVar8,(Variant *)&local_78);
        if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        iVar7 = ParticleProcessMaterial::get_emission_shape();
        Variant::Variant((Variant *)local_58,iVar7);
        StringName::StringName((StringName *)&local_78,"emission_shape",false);
        EditorUndoRedoManager::add_undo_property(pOVar9,pSVar8,(Variant *)&local_78);
        if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        ParticleProcessMaterial::set_emission_shape(pSVar8,5);
        local_70[0] = 0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_70,lVar1);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_70);
        if (0 < iVar12) {
          lVar11 = *(long *)(lVar4 + -8);
          uVar10 = 0;
          do {
            if (lVar11 <= (long)uVar10) goto LAB_00106e25;
            *(undefined4 *)(local_70[0] + uVar10 * 8) = *(undefined4 *)(lVar4 + uVar10 * 8);
            *(undefined4 *)(local_70[0] + 4 + uVar10 * 8) = *(undefined4 *)(lVar4 + 4 + uVar10 * 8);
            bVar13 = uVar10 != iVar12 - 1;
            uVar10 = uVar10 + 1;
          } while (bVar13);
        }
        Ref<Image>::instantiate<>((Ref<Image> *)&local_d0);
        Image::set_data(local_d0,0x800,iVar6,0,9,(String *)&local_78);
        ImageTexture::create_from_image((Ref *)&local_c8);
        Variant::Variant((Variant *)local_58,local_c8);
        StringName::StringName((StringName *)&local_c0,"emission_normal_texture",false);
        EditorUndoRedoManager::add_do_property(pOVar9,pSVar8,(Variant *)&local_c0);
        if ((StringName::configured != '\0') && (local_c0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Ref<ImageTexture>::unref((Ref<ImageTexture> *)&local_c8);
        ParticleProcessMaterial::get_emission_normal_texture();
        Variant::Variant((Variant *)local_58,local_c8);
        StringName::StringName((StringName *)&local_c0,"emission_normal_texture",false);
        EditorUndoRedoManager::add_undo_property(pOVar9,pSVar8,(Variant *)&local_c0);
        if ((StringName::configured != '\0') && (local_c0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_70);
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar9,0));
      Ref<Image>::unref((Ref<Image> *)&local_d0);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_80);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_90);
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
      Ref<ParticleProcessMaterial>::unref((Ref<ParticleProcessMaterial> *)&local_d8);
      goto LAB_0010724f;
    }
    _err_print_error("_generate_emission_mask","editor/plugins/particles_editor_plugin.cpp",0x196,
                     "Condition \"valid_positions.is_empty()\" is true.",
                     "No pixels with transparency > 128 in image...",0,0);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_90);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
  }
  Ref<ParticleProcessMaterial>::unref((Ref<ParticleProcessMaterial> *)&local_d8);
LAB_0010724f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPUParticles2DEditorPlugin::_generate_emission_mask() */

void __thiscall
CPUParticles2DEditorPlugin::_generate_emission_mask(CPUParticles2DEditorPlugin *this)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  StringName *pSVar9;
  Object *pOVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  size_t __n;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  CowData<Vector2> *local_f0;
  CowData<Vector2> *local_d0;
  long local_c0;
  Vector local_b8 [8];
  long local_b0;
  Vector local_a8 [8];
  long local_a0;
  Vector local_98 [8];
  long local_90;
  undefined8 local_88;
  undefined8 *local_80;
  long local_78;
  CowData<Vector2> local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pSVar9 = *(StringName **)(this + 0x680);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar9 != (StringName *)0x0) {
    pSVar9 = (StringName *)__dynamic_cast(pSVar9,&Object::typeinfo,&CPUParticles2D::typeinfo,0);
  }
  local_b0 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_60 = 0;
  Particles2DEditorPlugin::_get_base_emission_mask
            ((Particles2DEditorPlugin *)this,local_b8,local_a8,local_98,(Vector2i *)&local_60);
  lVar6 = local_b0;
  if (local_b0 == 0) {
    _err_print_error("_generate_emission_mask","editor/plugins/particles_editor_plugin.cpp",0x211,
                     "Condition \"valid_positions.is_empty()\" is true.",
                     "No pixels with transparency > 128 in image...",0,0);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_90);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
    goto LAB_00107c62;
  }
  pOVar10 = (Object *)EditorUndoRedoManager::get_singleton();
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Load Emission Mask");
  TTR((String *)&local_78,(String *)&local_c0);
  EditorUndoRedoManager::create_action(pOVar10,(String *)&local_78,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar3 = *(undefined8 *)(lVar6 + -8);
  cVar7 = BaseButton::is_pressed();
  if (cVar7 != '\0') {
    local_80 = (undefined8 *)0x0;
    iVar8 = (int)uVar3;
    lVar19 = (long)iVar8;
    if (lVar19 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      if (local_80 != (undefined8 *)0x0) goto LAB_00107d5c;
    }
    else if (lVar19 != 0) {
      uVar18 = lVar19 * 0x10 - 1;
      uVar18 = uVar18 | uVar18 >> 1;
      uVar18 = uVar18 | uVar18 >> 2;
      uVar18 = uVar18 | uVar18 >> 4;
      uVar18 = uVar18 | uVar18 >> 8;
      uVar18 = uVar18 | uVar18 >> 0x10;
      puVar12 = (undefined8 *)Memory::alloc_static((uVar18 | uVar18 >> 0x20) + 0x11,false);
      if (puVar12 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        if (local_80 == (undefined8 *)0x0) goto LAB_00107d7b;
      }
      else {
        local_80 = puVar12 + 2;
        *puVar12 = 1;
        uVar5 = _UNK_00118aa8;
        uVar3 = __LC189;
        puVar14 = puVar12;
        if ((lVar19 * 0x10 & 0x10U) == 0) goto LAB_00107d48;
        puVar12[2] = __LC189;
        puVar12[3] = uVar5;
        puVar14 = local_80;
        while (puVar12 + lVar19 * 2 != puVar14) {
LAB_00107d48:
          puVar14[2] = uVar3;
          puVar14[3] = uVar5;
          puVar14[4] = uVar3;
          puVar14[5] = uVar5;
          puVar14 = puVar14 + 4;
        }
        puVar12[1] = lVar19;
      }
LAB_00107d5c:
      if (1 < (ulong)local_80[-2]) {
        if (local_80 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar19 = local_80[-1];
        uVar18 = 0x10;
        __n = lVar19 * 0x10;
        if (__n != 0) {
          uVar18 = __n - 1 | __n - 1 >> 1;
          uVar18 = uVar18 | uVar18 >> 2;
          uVar18 = uVar18 | uVar18 >> 4;
          uVar18 = uVar18 | uVar18 >> 8;
          uVar18 = uVar18 | uVar18 >> 0x10;
          uVar18 = (uVar18 | uVar18 >> 0x20) + 0x11;
        }
        puVar12 = (undefined8 *)Memory::alloc_static(uVar18,false);
        if (puVar12 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          *puVar12 = 1;
          puVar12[1] = lVar19;
          memcpy(puVar12 + 2,local_80,__n);
          CowData<Color>::_unref((CowData<Color> *)&local_80);
          local_80 = puVar12 + 2;
        }
      }
      if (0 < iVar8) {
LAB_00107d7b:
        fVar20 = _LC190;
        if (local_90 == 0) {
          lVar11 = 0;
          lVar19 = 0;
        }
        else {
          lVar19 = *(long *)(local_90 + -8);
          lVar15 = 1;
          lVar16 = 2;
          lVar13 = 0;
          lVar17 = 3;
          lVar11 = 0;
          if (0 < lVar19) {
            do {
              lVar11 = lVar15;
              if (((lVar19 <= lVar15) || (lVar11 = lVar16, lVar19 <= lVar16)) ||
                 (bVar1 = *(byte *)(local_90 + 2 + lVar13), lVar11 = lVar17, lVar19 <= lVar17))
              break;
              lVar17 = lVar17 + 4;
              bVar2 = *(byte *)(local_90 + 3 + lVar13);
              lVar16 = lVar16 + 4;
              lVar15 = lVar15 + 4;
              puVar12 = (undefined8 *)((long)local_80 + lVar13 * 4);
              *puVar12 = CONCAT44((float)*(byte *)(local_90 + 1 + lVar13) / fVar20,
                                  (float)*(byte *)(local_90 + lVar13) / fVar20);
              puVar12[1] = CONCAT44((float)bVar2 / fVar20,(float)bVar1 / fVar20);
              lVar13 = lVar13 + 4;
              if (lVar13 == (ulong)(iVar8 - 1) * 4 + 4) goto LAB_001081a0;
              lVar11 = lVar13;
            } while (lVar13 < lVar19);
          }
        }
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar19,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
LAB_001081a0:
    Variant::Variant((Variant *)local_58,(Vector *)&local_88);
    StringName::StringName((StringName *)&local_78,"emission_colors",false);
    EditorUndoRedoManager::add_do_property(pOVar10,pSVar9,(Variant *)&local_78);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CPUParticles2D::get_emission_colors();
    Variant::Variant((Variant *)local_58,(Vector *)&local_78);
    StringName::StringName((StringName *)&local_c0,"emission_colors",false);
    EditorUndoRedoManager::add_undo_property(pOVar10,pSVar9,(Variant *)&local_c0);
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<Color>::_unref((CowData<Color> *)local_70);
    CowData<Color>::_unref((CowData<Color> *)&local_80);
  }
  lVar19 = local_a0;
  local_d0 = local_70;
  local_f0 = (CowData<Vector2> *)&local_80;
  if ((local_a0 == 0) || (*(long *)(local_a0 + -8) == 0)) {
    Variant::Variant((Variant *)local_58,4);
    StringName::StringName((StringName *)&local_78,"emission_shape",false);
    EditorUndoRedoManager::add_do_property(pOVar10,pSVar9,(Variant *)&local_78);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar8 = CPUParticles2D::get_emission_shape();
    Variant::Variant((Variant *)local_58,iVar8);
    StringName::StringName((StringName *)&local_78,"emission_shape",false);
    EditorUndoRedoManager::add_undo_property(pOVar10,pSVar9,(Variant *)&local_78);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    Variant::Variant((Variant *)local_58,5);
    StringName::StringName((StringName *)&local_78,"emission_shape",false);
    EditorUndoRedoManager::add_do_property(pOVar10,pSVar9,(Variant *)&local_78);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar8 = CPUParticles2D::get_emission_shape();
    Variant::Variant((Variant *)local_58,iVar8);
    StringName::StringName((StringName *)&local_78,"emission_shape",false);
    EditorUndoRedoManager::add_undo_property(pOVar10,pSVar9,(Variant *)&local_78);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_80 = (undefined8 *)0x0;
    CowData<Vector2>::resize<false>(local_f0,*(long *)(lVar19 + -8));
    CowData<Vector2>::_copy_on_write(local_f0);
    lVar11 = *(long *)(lVar19 + -8);
    lVar13 = 0;
    if (0 < lVar11) {
      do {
        *(undefined8 *)((long)local_80 + lVar13) = *(undefined8 *)(lVar19 + lVar13);
        lVar13 = lVar13 + 8;
      } while (lVar13 != lVar11 * 8);
    }
    Variant::Variant((Variant *)local_58,(Vector *)&local_88);
    StringName::StringName((StringName *)&local_78,"emission_normals",false);
    EditorUndoRedoManager::add_do_property(pOVar10,pSVar9,(Variant *)&local_78);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CPUParticles2D::get_emission_normals();
    Variant::Variant((Variant *)local_58,(Vector *)&local_78);
    StringName::StringName((StringName *)&local_c0,"emission_normals",false);
    EditorUndoRedoManager::add_undo_property(pOVar10,pSVar9,(Variant *)&local_c0);
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<Vector2>::_unref(local_d0);
    CowData<Vector2>::_unref(local_f0);
  }
  cVar7 = BaseButton::is_pressed();
  fVar20 = 0.0;
  fVar21 = 0.0;
  if (cVar7 != '\0') {
    fVar20 = (float)((double)-(int)local_60 * _LC181);
    fVar21 = (float)((double)-(int)((ulong)local_60 >> 0x20) * _LC181);
  }
  local_80 = (undefined8 *)0x0;
  CowData<Vector2>::resize<false>(local_f0,*(long *)(lVar6 + -8));
  CowData<Vector2>::_copy_on_write(local_f0);
  lVar19 = *(long *)(lVar6 + -8);
  lVar11 = 0;
  if (0 < lVar19) {
    do {
      *(ulong *)((long)local_80 + lVar11) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + lVar11) >> 0x20) + fVar21,
                    (float)*(undefined8 *)(lVar6 + lVar11) + fVar20);
      lVar11 = lVar11 + 8;
    } while (lVar19 * 8 - lVar11 != 0);
  }
  Variant::Variant((Variant *)local_58,(Vector *)&local_88);
  StringName::StringName((StringName *)&local_78,"emission_points",false);
  EditorUndoRedoManager::add_do_property(pOVar10,pSVar9,(Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CPUParticles2D::get_emission_points();
  Variant::Variant((Variant *)local_58,(Vector *)&local_78);
  StringName::StringName((StringName *)&local_c0,"emission_shape",false);
  EditorUndoRedoManager::add_undo_property(pOVar10,pSVar9,(Variant *)&local_c0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<Vector2>::_unref(local_d0);
  CowData<Vector2>::_unref(local_f0);
  EditorUndoRedoManager::commit_action(SUB81(pOVar10,0));
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_90);
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
LAB_00107c62:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Particles3DEditorPlugin::_generate(Vector<Vector3>&, Vector<Vector3>&) */

undefined8 __thiscall
Particles3DEditorPlugin::_generate(Particles3DEditorPlugin *this,Vector *param_1,Vector *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  String *pSVar5;
  Element *pEVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  Element *pEVar12;
  Element *pEVar13;
  Element *pEVar14;
  Element *pEVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  float *pfVar19;
  float *pfVar20;
  Element *pEVar21;
  long in_FS_OFFSET;
  bool bVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float local_138;
  float local_130;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  String local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  Element *local_a8;
  Element *pEStack_a0;
  int local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_84;
  float local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = OptionButton::get_selected();
  iVar9 = OptionButton::get_selected();
  pSVar5 = EditorNode::singleton;
  if (iVar9 < 2) {
    local_a8 = (Element *)0x0;
    pEStack_a0 = (Element *)&_GlobalNilClass::_nil;
    lVar11 = *(long *)(this + 0x6c0);
    local_98 = 0;
    if (lVar11 != 0) {
      lVar18 = 0;
      fVar28 = 0.0;
      do {
        if (*(long *)(lVar11 + -8) <= lVar18) break;
        fVar24 = (float)Face3::get_area();
        if (_LC200 <= (double)fVar24) {
          if (local_a8 == (Element *)0x0) {
            local_a8 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
            *(undefined8 *)(local_a8 + 0x30) = 0;
            *(undefined1 (*) [16])(local_a8 + 0x20) = (undefined1  [16])0x0;
            *(undefined4 *)local_a8 = 1;
            *(Element **)(local_a8 + 0x18) = pEStack_a0;
            *(Element **)(local_a8 + 8) = pEStack_a0;
            *(Element **)(local_a8 + 0x10) = pEStack_a0;
            pEVar21 = local_a8;
          }
          else {
            pEVar15 = *(Element **)(local_a8 + 0x10);
            pEVar12 = pEVar15;
            pEVar21 = local_a8;
            if (pEStack_a0 != pEVar15) {
              do {
                if (fVar28 < *(float *)(pEVar12 + 0x30)) {
                  pEVar12 = *(Element **)(pEVar12 + 0x10);
                }
                else {
                  if (fVar28 <= *(float *)(pEVar12 + 0x30)) goto LAB_00108e67;
                  pEVar12 = *(Element **)(pEVar12 + 8);
                }
              } while (pEVar12 != pEStack_a0);
              do {
                pEVar21 = pEVar15;
                if (fVar28 < *(float *)(pEVar21 + 0x30)) {
                  pEVar15 = *(Element **)(pEVar21 + 0x10);
                }
                else {
                  if (fVar28 <= *(float *)(pEVar21 + 0x30)) {
                    *(undefined4 *)(pEVar21 + 0x34) = 0;
                    fVar28 = fVar28 + fVar24;
                    *(int *)(pEVar21 + 0x34) = (int)lVar18;
                    goto LAB_00108e6f;
                  }
                  pEVar15 = *(Element **)(pEVar21 + 8);
                }
              } while (pEStack_a0 != pEVar15);
            }
          }
          pEVar12 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
          *(undefined1 (*) [16])(pEVar12 + 0x20) = (undefined1  [16])0x0;
          *(Element **)(pEVar12 + 0x18) = pEVar21;
          *(undefined4 *)pEVar12 = 0;
          *(float *)(pEVar12 + 0x30) = fVar28;
          *(Element **)(pEVar12 + 8) = pEStack_a0;
          *(Element **)(pEVar12 + 0x10) = pEStack_a0;
          *(undefined4 *)(pEVar12 + 0x34) = 0;
          if (local_a8 == pEVar21) {
            *(Element **)(pEVar21 + 0x10) = pEVar12;
            pEVar13 = pEVar21;
            pEVar15 = *(Element **)(pEVar12 + 0x10);
            if (*(Element **)(pEVar21 + 8) == pEVar12) goto LAB_00108dc8;
            pEVar14 = (Element *)0x0;
          }
          else {
            if (*(float *)(pEVar21 + 0x30) <= fVar28) {
              *(Element **)(pEVar21 + 8) = pEVar12;
              pEVar13 = pEVar21;
              pEVar6 = *(Element **)(pEVar12 + 8);
              pEVar15 = pEStack_a0;
              if (pEStack_a0 != *(Element **)(pEVar12 + 8)) {
                do {
                  pEVar14 = pEVar6;
                  pEVar6 = *(Element **)(pEVar14 + 0x10);
                } while (pEStack_a0 != *(Element **)(pEVar14 + 0x10));
                goto LAB_00108e07;
              }
LAB_00108dc8:
              do {
                pEVar14 = *(Element **)(pEVar13 + 0x18);
                bVar22 = pEVar13 == *(Element **)(pEVar14 + 8);
                pEVar13 = pEVar14;
              } while (bVar22);
            }
            else {
              *(Element **)(pEVar21 + 0x10) = pEVar12;
              pEVar15 = *(Element **)(pEVar12 + 0x10);
              pEVar14 = pEVar21;
              pEVar13 = pEVar21;
              if (*(Element **)(pEVar21 + 8) == pEVar12) goto LAB_00108dc8;
            }
            if (local_a8 == pEVar14) {
              pEVar14 = (Element *)0x0;
            }
          }
LAB_00108e07:
          *(Element **)(pEVar12 + 0x20) = pEVar14;
          if (pEStack_a0 == pEVar15) {
            pEVar15 = pEVar12;
            pEVar13 = pEVar21;
            if (pEVar12 == *(Element **)(pEVar21 + 0x10)) {
              do {
                pEVar21 = *(Element **)(pEVar13 + 0x18);
                bVar22 = pEVar13 == *(Element **)(pEVar21 + 0x10);
                pEVar15 = pEVar13;
                pEVar13 = pEVar21;
              } while (bVar22);
            }
            if (pEVar15 != local_a8) goto LAB_00108e24;
            *(undefined8 *)(pEVar12 + 0x28) = 0;
            if (pEVar14 != (Element *)0x0) goto LAB_00108e2d;
          }
          else {
            do {
              pEVar21 = pEVar15;
              pEVar15 = *(Element **)(pEVar21 + 8);
            } while (pEStack_a0 != *(Element **)(pEVar21 + 8));
LAB_00108e24:
            *(Element **)(pEVar12 + 0x28) = pEVar21;
            if (pEVar14 != (Element *)0x0) {
LAB_00108e2d:
              *(Element **)(pEVar14 + 0x28) = pEVar12;
              pEVar21 = *(Element **)(pEVar12 + 0x28);
              if (pEVar21 == (Element *)0x0) goto LAB_00108e3e;
            }
            *(Element **)(pEVar21 + 0x20) = pEVar12;
          }
LAB_00108e3e:
          local_98 = local_98 + 1;
          RBMap<float,int,Comparator<float>,DefaultAllocator>::_insert_rb_fix
                    ((RBMap<float,int,Comparator<float>,DefaultAllocator> *)&local_a8,pEVar12);
LAB_00108e67:
          *(int *)(pEVar12 + 0x34) = (int)lVar18;
          fVar28 = fVar28 + fVar24;
        }
LAB_00108e6f:
        lVar11 = *(long *)(this + 0x6c0);
        lVar18 = lVar18 + 1;
      } while (lVar11 != 0);
      if (local_98 != 0) {
        bVar22 = !NAN(fVar28);
        if (fVar28 != 0.0) {
          bVar22 = local_98 == 0;
        }
        if (!bVar22) {
          iVar9 = 0;
          dVar25 = (double)Range::get_value();
          if (0 < (int)dVar25) {
            do {
              fVar24 = (float)Math::random(0.0,fVar28);
              if ((local_a8 == (Element *)0x0) ||
                 (pEVar21 = *(Element **)(local_a8 + 0x10),
                 pEStack_a0 == *(Element **)(local_a8 + 0x10))) {
LAB_00109195:
                _err_print_error("_generate","editor/plugins/particles_editor_plugin.cpp",0x2d4,
                                 "Condition \"!E\" is true. Returning: false",0,0);
                goto LAB_00109106;
              }
              do {
                pEVar15 = pEVar21;
                fVar33 = *(float *)(pEVar15 + 0x30);
                if (fVar24 < fVar33) {
                  pEVar21 = *(Element **)(pEVar15 + 0x10);
                }
                else {
                  if (fVar24 <= fVar33) goto LAB_00108f56;
                  pEVar21 = *(Element **)(pEVar15 + 8);
                }
              } while (pEStack_a0 != pEVar21);
              if ((fVar24 < fVar33) &&
                 (pEVar15 = *(Element **)(pEVar15 + 0x28), pEVar15 == (Element *)0x0))
              goto LAB_00109195;
LAB_00108f56:
              lVar18 = (long)*(int *)(pEVar15 + 0x34);
              lVar11 = *(long *)(this + 0x6c0);
              if (*(int *)(pEVar15 + 0x34) < 0) {
                if (lVar11 == 0) goto LAB_001092bf;
LAB_0010923a:
                lVar11 = *(long *)(lVar11 + -8);
LAB_0010923e:
                _err_print_index_error
                          ("_generate","editor/plugins/particles_editor_plugin.cpp",0x2d6,lVar18,
                           lVar11,"index","geometry.size()","",false,false);
                goto LAB_00109106;
              }
              if (lVar11 == 0) {
LAB_001092bf:
                lVar11 = 0;
                goto LAB_0010923e;
              }
              if (*(long *)(lVar11 + -8) <= lVar18) goto LAB_0010923a;
              puVar1 = (undefined8 *)(lVar11 + lVar18 * 0x24);
              local_68 = *puVar1;
              uStack_60 = puVar1[1];
              local_58 = puVar1[2];
              uStack_50 = puVar1[3];
              local_48 = *(undefined4 *)(puVar1 + 4);
              auVar34 = Face3::get_random_point_inside();
              local_90 = auVar34._0_8_;
              local_88 = auVar34._8_4_;
              Vector<Vector3>::push_back(local_90,auVar34._8_8_ & 0xffffffff,param_1);
              if (iVar8 == 1) {
                auVar34 = Face3::get_plane(&local_68);
                local_70 = auVar34._8_8_;
                local_84 = auVar34._0_8_;
                local_7c = auVar34._8_4_;
                local_78 = local_84;
                Vector<Vector3>::push_back(param_2);
              }
              iVar9 = iVar9 + 1;
            } while ((int)dVar25 != iVar9);
          }
          RBMap<float,int,Comparator<float>,DefaultAllocator>::clear
                    ((RBMap<float,int,Comparator<float>,DefaultAllocator> *)&local_a8);
          if (local_a8 != (Element *)0x0) {
            Memory::free_static(local_a8,false);
          }
          goto LAB_00108b7c;
        }
      }
    }
    pSVar5 = EditorNode::singleton;
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"");
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"Warning!");
    TTR(local_c0,(String *)&local_b8);
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"");
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"The geometry\'s faces don\'t contain any area.");
    TTR((String *)&local_c8,(String *)&local_d8);
    EditorNode::show_warning(pSVar5,(String *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
LAB_00109106:
    RBMap<float,int,Comparator<float>,DefaultAllocator>::clear
              ((RBMap<float,int,Comparator<float>,DefaultAllocator> *)&local_a8);
    if (local_a8 != (Element *)0x0) {
      Memory::free_static(local_a8,false);
    }
  }
  else {
    pfVar4 = *(float **)(this + 0x6c0);
    if ((pfVar4 != (float *)0x0) && (uVar16 = (uint)*(undefined8 *)(pfVar4 + -2), uVar16 != 0)) {
      if ((int)uVar16 < 1) {
        fVar32 = 0.0;
        fVar30 = 0.0;
        fVar28 = 0.0;
        fVar31 = fVar30;
        fVar33 = fVar28;
        fVar24 = fVar28;
      }
      else {
        fVar32 = 0.0;
        fVar30 = 0.0;
        fVar28 = 0.0;
        uVar17 = 0;
        pfVar20 = pfVar4;
        fVar31 = fVar30;
        fVar33 = fVar28;
        fVar24 = fVar28;
        do {
          iVar8 = 0;
          pfVar19 = pfVar20;
          while( true ) {
            if (uVar17 == 0 && iVar8 == 0) {
              do {
                iVar8 = 1;
                pfVar19 = pfVar19 + 3;
                fVar28 = *pfVar4;
                fVar24 = pfVar4[1];
                fVar33 = pfVar4[2];
              } while ((uVar17 | 1) == 0);
            }
            if (((fVar30 < 0.0) || (fVar31 < 0.0)) || (fVar32 < 0.0)) {
              _err_print_error("expand_to","./core/math/aabb.h",0x158,
                               "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                               ,0,0);
            }
            fVar2 = *pfVar19;
            fVar3 = pfVar19[1];
            fVar30 = fVar30 + fVar28;
            iVar8 = iVar8 + 1;
            fVar27 = pfVar19[2];
            fVar23 = fVar2;
            if (fVar28 <= fVar2) {
              fVar23 = fVar28;
            }
            fVar28 = fVar23;
            if (fVar2 <= fVar30) {
              fVar2 = fVar30;
            }
            fVar23 = fVar3;
            if (fVar3 <= fVar31 + fVar24) {
              fVar23 = fVar31 + fVar24;
            }
            if (fVar24 <= fVar3) {
              fVar3 = fVar24;
            }
            fVar24 = fVar3;
            fVar30 = fVar2 - fVar28;
            fVar2 = fVar27;
            if (fVar27 <= fVar32 + fVar33) {
              fVar2 = fVar32 + fVar33;
            }
            if (fVar33 <= fVar27) {
              fVar27 = fVar33;
            }
            fVar33 = fVar27;
            fVar31 = fVar23 - fVar24;
            fVar32 = fVar2 - fVar33;
            if (iVar8 == 3) break;
            pfVar19 = pfVar19 + 3;
          }
          uVar17 = uVar17 + 1;
          pfVar20 = pfVar20 + 9;
        } while (uVar16 != uVar17);
      }
      dVar25 = (double)Range::get_value();
      if (0 < (int)dVar25) {
        iVar8 = 0;
        do {
          iVar9 = 5;
          do {
            local_90 = 0;
            local_88 = 0.0;
            uVar17 = Math::rand();
            *(undefined4 *)((long)&local_90 + (long)(int)(uVar17 % 3) * 4) = 0x3f800000;
            uVar17 = Math::rand();
            fVar26 = (float)uVar17 * __LC210;
            uVar17 = Math::rand();
            fVar29 = (float)uVar17 * __LC210;
            uVar17 = Math::rand();
            fVar27 = local_88;
            fVar2 = (float)local_90;
            fVar3 = local_90._4_4_;
            fVar23 = (float)uVar17 * __LC210 * (_LC167 - (float)local_90) * fVar30 + fVar28;
            fVar29 = fVar29 * (_LC167 - local_90._4_4_) * fVar31 + fVar24;
            fVar26 = fVar26 * (_LC167 - local_88) * fVar32 + fVar33;
            local_84 = CONCAT44(fVar29 - local_90._4_4_,fVar23 - (float)local_90);
            local_7c = fVar26 - local_88;
            local_78 = CONCAT44(fVar31 * local_90._4_4_ + fVar29 + local_90._4_4_,
                                fVar23 + fVar30 * (float)local_90 + (float)local_90);
            local_70 = CONCAT44(local_70._4_4_,fVar32 * local_88 + fVar26 + local_88);
            if (0 < (int)uVar16) {
              local_138 = _LC198;
              local_130 = _LC199;
              pfVar20 = pfVar4;
              do {
                local_68 = 0;
                uStack_60 = uStack_60 & 0xffffffff00000000;
                cVar7 = Face3::intersects_segment
                                  ((Vector3 *)pfVar20,(Vector3 *)&local_84,(Vector3 *)&local_78);
                fVar23 = local_138;
                if (cVar7 != '\0') {
                  fVar23 = ((float)local_68 - (float)local_84) * fVar2 +
                           (local_68._4_4_ - local_84._4_4_) * fVar3 +
                           ((float)uStack_60 - local_7c) * fVar27;
                  fVar26 = fVar23;
                  if (fVar23 <= local_130) {
                    fVar26 = local_130;
                  }
                  local_130 = fVar26;
                  if (local_138 <= fVar23) {
                    fVar23 = local_138;
                  }
                }
                local_138 = fVar23;
                pfVar20 = pfVar20 + 9;
              } while (pfVar20 != pfVar4 + (ulong)(uVar16 - 1) * 9 + 9);
              if (local_138 <= local_130) {
                uVar17 = Math::rand();
                local_138 = (float)uVar17 * __LC210 * (local_130 - local_138) + local_138;
                fVar27 = fVar27 * local_138 + local_7c;
                uStack_60 = CONCAT44(uStack_60._4_4_,fVar27);
                local_68 = CONCAT44(fVar3 * local_138 + local_84._4_4_,
                                    local_138 * fVar2 + (float)local_84);
                Vector<Vector3>::push_back(local_68,fVar27,param_1);
                break;
              }
            }
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          iVar8 = iVar8 + 1;
        } while ((int)dVar25 != iVar8);
      }
LAB_00108b7c:
      uVar10 = 1;
      goto LAB_001086e9;
    }
    local_a8 = (Element *)0x0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"Warning!");
    TTR((String *)&local_b8,(String *)&local_b0);
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"");
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"The geometry doesn\'t contain any faces.");
    TTR(local_c0,(String *)&local_d0);
    EditorNode::show_warning(pSVar5,local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  }
  uVar10 = 0;
LAB_001086e9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3DEditorPlugin::_generate_emission_points() */

void __thiscall
GPUParticles3DEditorPlugin::_generate_emission_points(GPUParticles3DEditorPlugin *this)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  Object *pOVar6;
  Object *pOVar7;
  undefined4 *puVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  int local_100;
  int local_fc;
  CowData<unsigned_char> *local_f0;
  size_t local_d8;
  Object *local_c8;
  Object *local_c0;
  Object *local_b8;
  Object *local_b0;
  Object *local_a8;
  Object *local_a0;
  Vector local_98 [8];
  undefined4 *local_90;
  Vector local_88 [8];
  undefined4 *local_80;
  undefined1 local_78 [8];
  void *local_70;
  Object *local_68;
  void *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x680) != 0) {
    __dynamic_cast(*(long *)(this + 0x680),&Object::typeinfo,&GPUParticles3D::typeinfo,0);
  }
  local_90 = (undefined4 *)0x0;
  local_80 = (undefined4 *)0x0;
  cVar2 = Particles3DEditorPlugin::_generate((Particles3DEditorPlugin *)this,local_98,local_88);
  puVar1 = local_90;
  if (cVar2 != '\0') {
    if (local_90 == (undefined4 *)0x0) {
      local_70 = (void *)0x0;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_70,0x6000);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
      memset(local_70,0,0x6000);
      local_fc = 1;
      local_100 = 0;
      local_d8 = 0x6000;
    }
    else {
      local_70 = (void *)0x0;
      local_100 = (int)*(undefined8 *)(local_90 + -2);
      iVar3 = local_100 + 0x7ff;
      if (-1 < local_100) {
        iVar3 = local_100;
      }
      local_fc = (iVar3 >> 0xb) + 1;
      local_d8 = (long)(local_fc * 0x1800) * 4;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_70,local_d8);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
      puVar4 = (undefined4 *)memset(local_70,0,local_d8);
      if (0 < local_100) {
        puVar8 = puVar1;
        do {
          puVar5 = puVar8 + 3;
          *puVar4 = *puVar8;
          puVar4[1] = puVar8[1];
          puVar4[2] = puVar8[2];
          puVar8 = puVar5;
          puVar4 = puVar4 + 3;
        } while (puVar5 != puVar1 + (ulong)(local_100 - 1) * 3 + 3);
      }
    }
    local_f0 = (CowData<unsigned_char> *)&local_70;
    pOVar6 = (Object *)operator_new(0x268,"");
    Image::Image((Image *)pOVar6,0x800,local_fc,0,10,local_78);
    postinitialize_handler(pOVar6);
    local_68 = (Object *)0x0;
    local_c8 = pOVar6;
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') {
      local_c8 = (Object *)0x0;
    }
    Ref<Image>::unref((Ref<Image> *)&local_68);
    ImageTexture::create_from_image((Ref *)&local_c0);
    GPUParticles3D::get_process_material();
    local_b8 = (Object *)0x0;
    if (local_68 != (Object *)0x0) {
      pOVar6 = (Object *)
               __dynamic_cast(local_68,&Object::typeinfo,&ParticleProcessMaterial::typeinfo,0);
      if (pOVar6 == (Object *)0x0) {
LAB_00109550:
        cVar2 = RefCounted::unreference();
        pOVar7 = local_68;
        pOVar6 = local_b8;
        if ((cVar2 != '\0') &&
           (cVar2 = predelete_handler(local_68), pOVar6 = local_b8, cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
      else {
        local_b8 = pOVar6;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_b8 = (Object *)0x0;
        }
        pOVar6 = local_b8;
        if (local_68 != (Object *)0x0) goto LAB_00109550;
      }
      if (pOVar6 != (Object *)0x0) {
        pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
        local_a0 = (Object *)0x0;
        String::parse_latin1((String *)&local_a0,"");
        local_a8 = (Object *)0x0;
        String::parse_latin1((String *)&local_a8,"Create Emission Points");
        TTR((String *)&local_68,(String *)&local_a8);
        EditorUndoRedoManager::create_action(pOVar7,(Ref<Image> *)&local_68,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        puVar1 = local_80;
        if ((local_80 == (undefined4 *)0x0) || (*(long *)(local_80 + -2) < 1)) {
          Variant::Variant((Variant *)local_58,4);
          StringName::StringName((StringName *)&local_68,"emission_shape",false);
          EditorUndoRedoManager::add_do_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_68);
          if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          iVar3 = ParticleProcessMaterial::get_emission_shape();
          Variant::Variant((Variant *)local_58,iVar3);
          StringName::StringName((StringName *)&local_68,"emission_shape",false);
          EditorUndoRedoManager::add_undo_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_68)
          ;
          if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          Variant::Variant((Variant *)local_58,5);
          StringName::StringName((StringName *)&local_68,"emission_shape",false);
          EditorUndoRedoManager::add_do_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_68);
          if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          iVar3 = ParticleProcessMaterial::get_emission_shape();
          Variant::Variant((Variant *)local_58,iVar3);
          StringName::StringName((StringName *)&local_68,"emission_shape",false);
          EditorUndoRedoManager::add_undo_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_68)
          ;
          if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_60 = (void *)0x0;
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,local_d8);
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
          puVar4 = (undefined4 *)memset(local_60,0,local_d8);
          if (0 < local_100) {
            puVar8 = puVar1;
            do {
              puVar5 = puVar8 + 3;
              *puVar4 = *puVar8;
              puVar4[1] = puVar8[1];
              puVar4[2] = puVar8[2];
              puVar8 = puVar5;
              puVar4 = puVar4 + 3;
            } while (puVar1 + (long)local_100 * 3 != puVar5);
          }
          pOVar9 = (Object *)operator_new(0x268,"");
          Image::Image((Image *)pOVar9,0x800,local_fc,0,10,(Ref<Image> *)&local_68);
          postinitialize_handler(pOVar9);
          local_b0 = pOVar9;
          cVar2 = RefCounted::init_ref();
          if (cVar2 == '\0') {
            local_b0 = (Object *)0x0;
            pOVar9 = (Object *)0x0;
          }
          Variant::Variant((Variant *)local_58,pOVar9);
          StringName::StringName((StringName *)&local_a0,"emission_normal_texture",false);
          EditorUndoRedoManager::add_do_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_a0);
          if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          ParticleProcessMaterial::get_emission_normal_texture();
          Variant::Variant((Variant *)local_58,local_a8);
          StringName::StringName((StringName *)&local_a0,"emission_normal_texture",false);
          EditorUndoRedoManager::add_undo_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_a0)
          ;
          if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
          Ref<Image>::unref((Ref<Image> *)&local_b0);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        }
        Variant::Variant((Variant *)local_58,local_100);
        StringName::StringName((StringName *)&local_68,"emission_point_count",false);
        EditorUndoRedoManager::add_do_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        iVar3 = ParticleProcessMaterial::get_emission_point_count();
        Variant::Variant((Variant *)local_58,iVar3);
        StringName::StringName((StringName *)&local_68,"emission_point_count",false);
        EditorUndoRedoManager::add_undo_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,local_c0);
        StringName::StringName((StringName *)&local_68,"emission_point_texture",false);
        EditorUndoRedoManager::add_do_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        ParticleProcessMaterial::get_emission_point_texture();
        Variant::Variant((Variant *)local_58,local_a0);
        StringName::StringName((StringName *)&local_68,"emission_point_texture",false);
        EditorUndoRedoManager::add_undo_property(pOVar7,(StringName *)pOVar6,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (((local_a0 != (Object *)0x0) &&
            (cVar2 = RefCounted::unreference(), pOVar9 = local_a0, cVar2 != '\0')) &&
           (cVar2 = predelete_handler(local_a0), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        if (((local_c0 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler(local_c0), cVar2 != '\0')) {
          (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
          Memory::free_static(local_c0,false);
        }
        Ref<Image>::unref((Ref<Image> *)&local_c8);
        CowData<unsigned_char>::_unref(local_f0);
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
        goto LAB_001098e0;
      }
    }
    _err_print_error("_generate_emission_points","editor/plugins/particles_editor_plugin.cpp",0x396,
                     "Condition \"mat.is_null()\" is true.",0,0);
    Ref<ParticleProcessMaterial>::unref((Ref<ParticleProcessMaterial> *)&local_b8);
    Ref<ImageTexture>::unref((Ref<ImageTexture> *)&local_c0);
    Ref<Image>::unref((Ref<Image> *)&local_c8);
    CowData<unsigned_char>::_unref(local_f0);
  }
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
LAB_001098e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CPUParticles3DEditorPlugin::_generate_emission_points() */

void __thiscall
CPUParticles3DEditorPlugin::_generate_emission_points(CPUParticles3DEditorPlugin *this)

{
  char cVar1;
  int iVar2;
  StringName *pSVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  CowData<Vector3> *local_a8;
  undefined8 local_98;
  long local_90;
  Vector local_88 [8];
  undefined8 local_80;
  Vector local_78 [8];
  long local_70;
  long local_68;
  CowData<Vector3> local_60 [8];
  int local_58 [6];
  long local_40;
  
  pSVar3 = *(StringName **)(this + 0x680);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar3 != (StringName *)0x0) {
    pSVar3 = (StringName *)__dynamic_cast(pSVar3,&Object::typeinfo,&CPUParticles3D::typeinfo,0);
  }
  local_80 = 0;
  local_70 = 0;
  cVar1 = Particles3DEditorPlugin::_generate((Particles3DEditorPlugin *)this,local_88,local_78);
  if (cVar1 != '\0') {
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Create Emission Points");
    TTR((String *)&local_68,(String *)&local_98);
    EditorUndoRedoManager::create_action(pOVar4,(String *)&local_68,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (local_70 == 0) {
      Variant::Variant((Variant *)local_58,4);
      StringName::StringName((StringName *)&local_68,"emission_shape",false);
      EditorUndoRedoManager::add_do_property(pOVar4,pSVar3,(Variant *)&local_68);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar2 = CPUParticles3D::get_emission_shape();
      Variant::Variant((Variant *)local_58,iVar2);
      StringName::StringName((StringName *)&local_68,"emission_shape",false);
      EditorUndoRedoManager::add_undo_property(pOVar4,pSVar3,(Variant *)&local_68);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      Variant::Variant((Variant *)local_58,5);
      StringName::StringName((StringName *)&local_68,"emission_shape",false);
      EditorUndoRedoManager::add_do_property(pOVar4,pSVar3,(Variant *)&local_68);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar2 = CPUParticles3D::get_emission_shape();
      Variant::Variant((Variant *)local_58,iVar2);
      StringName::StringName((StringName *)&local_68,"emission_shape",false);
      EditorUndoRedoManager::add_undo_property(pOVar4,pSVar3,(Variant *)&local_68);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_78);
      StringName::StringName((StringName *)&local_68,"emission_normals",false);
      EditorUndoRedoManager::add_do_property(pOVar4,pSVar3,(Variant *)&local_68);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CPUParticles3D::get_emission_normals();
      Variant::Variant((Variant *)local_58,(Vector *)&local_68);
      StringName::StringName((StringName *)&local_90,"emission_normals",false);
      EditorUndoRedoManager::add_undo_property(pOVar4,pSVar3,(Variant *)&local_90);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<Vector3>::_unref(local_60);
    }
    local_a8 = local_60;
    Variant::Variant((Variant *)local_58,local_88);
    StringName::StringName((StringName *)&local_68,"emission_points",false);
    EditorUndoRedoManager::add_do_property(pOVar4,pSVar3,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CPUParticles3D::get_emission_points();
    Variant::Variant((Variant *)local_58,(Vector *)&local_68);
    StringName::StringName((StringName *)&local_90,"emission_points",false);
    EditorUndoRedoManager::add_undo_property(pOVar4,pSVar3,(Variant *)&local_90);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<Vector3>::_unref(local_a8);
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
  }
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_70);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* ParticlesEditorPlugin::is_class_ptr(void*) const */

uint __thiscall ParticlesEditorPlugin::is_class_ptr(ParticlesEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ParticlesEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 ParticlesEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ParticlesEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 ParticlesEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ParticlesEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 ParticlesEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ParticlesEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ParticlesEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ParticlesEditorPlugin::_add_menu_options(PopupMenu*) */

void ParticlesEditorPlugin::_add_menu_options(PopupMenu *param_1)

{
  return;
}



/* Particles2DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall Particles2DEditorPlugin::is_class_ptr(Particles2DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1189,(undefined4 *)param_1 ==
                               &ParticlesEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Particles2DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 Particles2DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Particles2DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 Particles2DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Particles2DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 Particles2DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Particles2DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Particles2DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticles2DEditorPlugin::is_class_ptr(void*) const */

uint GPUParticles2DEditorPlugin::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1189,in_RSI == &Particles2DEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1188,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &ParticlesEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &EditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticles2DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 GPUParticles2DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticles2DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 GPUParticles2DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticles2DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 GPUParticles2DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GPUParticles2DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GPUParticles2DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CPUParticles2DEditorPlugin::is_class_ptr(void*) const */

uint CPUParticles2DEditorPlugin::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1189,in_RSI == &Particles2DEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1188,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &ParticlesEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &EditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CPUParticles2DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 CPUParticles2DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CPUParticles2DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 CPUParticles2DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CPUParticles2DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 CPUParticles2DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CPUParticles2DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CPUParticles2DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Particles3DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall Particles3DEditorPlugin::is_class_ptr(Particles3DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1189,(undefined4 *)param_1 ==
                               &ParticlesEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1188,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Particles3DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 Particles3DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Particles3DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 Particles3DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Particles3DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 Particles3DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Particles3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Particles3DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticles3DEditorPlugin::is_class_ptr(void*) const */

uint GPUParticles3DEditorPlugin::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1188,in_RSI == &Particles3DEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1188,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &ParticlesEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &EditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticles3DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 GPUParticles3DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticles3DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 GPUParticles3DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticles3DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 GPUParticles3DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GPUParticles3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GPUParticles3DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CPUParticles3DEditorPlugin::is_class_ptr(void*) const */

uint CPUParticles3DEditorPlugin::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1188,in_RSI == &Particles3DEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1188,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &ParticlesEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &EditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CPUParticles3DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 CPUParticles3DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CPUParticles3DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 CPUParticles3DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CPUParticles3DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 CPUParticles3DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CPUParticles3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CPUParticles3DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CPUParticles3DEditorPlugin::_can_generate_points() const */

undefined8 CPUParticles3DEditorPlugin::_can_generate_points(void)

{
  return 1;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void, NodePath
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GPUParticles2DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ParticlesEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticlesEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticlesEditorPlugin,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void, NodePath
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&>::get_argument_count
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GPUParticles2DEditorPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ParticlesEditorPlugin, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticlesEditorPlugin,void,int>::get_argument_count
          (CallableCustomMethodPointer<ParticlesEditorPlugin,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<ParticlesEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticlesEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticlesEditorPlugin,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GPUParticles2DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void, NodePath
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011e018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011e018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011e020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011e020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ParticlesEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void ParticlesEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011e028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* Particles2DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void Particles2DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011e028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* GPUParticles2DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void GPUParticles2DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011e028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CPUParticles2DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void CPUParticles2DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011e028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* Particles3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void Particles3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011e028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* GPUParticles3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void GPUParticles3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011e028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CPUParticles3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void CPUParticles3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011e028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010b33d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b33d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b33d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010b43d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b43d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b43d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ParticlesEditorPlugin, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticlesEditorPlugin,void,int>::get_object
          (CallableCustomMethodPointer<ParticlesEditorPlugin,void,int> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010b53d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b53d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b53d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void, NodePath const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&>::get_object
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010b63d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b63d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b63d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&>::get_object
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010b73d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b73d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b73d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GPUParticles2DEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010b83d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b83d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b83d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011e038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011e038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bb08) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bb78) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1188,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1188,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1188,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1188,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1189,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* RBMap<float, int, Comparator<float>, DefaultAllocator>::_cleanup_tree(RBMap<float, int,
   Comparator<float>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<float,int,Comparator<float>,DefaultAllocator>::_cleanup_tree
          (RBMap<float,int,Comparator<float>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c320;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c320:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c380;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c380:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c3e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c3e0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c450;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c450:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles3DEditorPlugin::_get_class_namev() const */

undefined8 * CPUParticles3DEditorPlugin::_get_class_namev(void)

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
LAB_0010cca3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cca3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CPUParticles3DEditorPlugin")
      ;
      goto LAB_0010cd0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CPUParticles3DEditorPlugin");
LAB_0010cd0e:
  return &_get_class_namev()::_class_name_static;
}



/* ParticlesEditorPlugin::_get_class_namev() const */

undefined8 * ParticlesEditorPlugin::_get_class_namev(void)

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
LAB_0010cd93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cd93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ParticlesEditorPlugin");
      goto LAB_0010cdfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ParticlesEditorPlugin");
LAB_0010cdfe:
  return &_get_class_namev()::_class_name_static;
}



/* Particles2DEditorPlugin::_get_class_namev() const */

undefined8 * Particles2DEditorPlugin::_get_class_namev(void)

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
LAB_0010ce83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ce83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Particles2DEditorPlugin");
      goto LAB_0010ceee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Particles2DEditorPlugin");
LAB_0010ceee:
  return &_get_class_namev()::_class_name_static;
}



/* CPUParticles2DEditorPlugin::_get_class_namev() const */

undefined8 * CPUParticles2DEditorPlugin::_get_class_namev(void)

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
LAB_0010cf73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cf73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CPUParticles2DEditorPlugin")
      ;
      goto LAB_0010cfde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CPUParticles2DEditorPlugin");
LAB_0010cfde:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_0010d063:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d063;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010d0ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010d0ce:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticles2DEditorPlugin::_get_class_namev() const */

undefined8 * GPUParticles2DEditorPlugin::_get_class_namev(void)

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
LAB_0010d153:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d153;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticles2DEditorPlugin")
      ;
      goto LAB_0010d1be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticles2DEditorPlugin");
LAB_0010d1be:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticles3DEditorPlugin::_get_class_namev() const */

undefined8 * GPUParticles3DEditorPlugin::_get_class_namev(void)

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
LAB_0010d243:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d243;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticles3DEditorPlugin")
      ;
      goto LAB_0010d2ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticles3DEditorPlugin");
LAB_0010d2ae:
  return &_get_class_namev()::_class_name_static;
}



/* Particles3DEditorPlugin::_get_class_namev() const */

undefined8 * Particles3DEditorPlugin::_get_class_namev(void)

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
LAB_0010d333:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d333;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Particles3DEditorPlugin");
      goto LAB_0010d39e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Particles3DEditorPlugin");
LAB_0010d39e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_0010d423:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d423;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010d48e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010d48e:
  return &_get_class_namev()::_class_name_static;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Container::_notification;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Container::_notification;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010d6d0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011e048 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_0011e048 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* Callable
   create_custom_callable_function_pointer<GPUParticles2DEditorPlugin>(GPUParticles2DEditorPlugin*,
   char const*, void (GPUParticles2DEditorPlugin::*)()) */

GPUParticles2DEditorPlugin *
create_custom_callable_function_pointer<GPUParticles2DEditorPlugin>
          (GPUParticles2DEditorPlugin *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00118538;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable
   create_custom_callable_function_pointer<Particles3DEditorPlugin>(Particles3DEditorPlugin*, char
   const*, void (Particles3DEditorPlugin::*)()) */

Particles3DEditorPlugin *
create_custom_callable_function_pointer<Particles3DEditorPlugin>
          (Particles3DEditorPlugin *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001185c8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorProgress::EditorProgress;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dc6a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010dc6a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x418));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x410));
  Node::~Node((Node *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010de48) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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



/* ParticlesEditorPlugin::_notificationv(int, bool) */

void __thiscall
ParticlesEditorPlugin::_notificationv(ParticlesEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_0011e050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011e050 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  _notification(iVar1);
  return;
}



/* Particles2DEditorPlugin::_notificationv(int, bool) */

void __thiscall
Particles2DEditorPlugin::_notificationv(Particles2DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      ParticlesEditorPlugin::_notification(iVar1);
    }
    if ((code *)PTR__notification_0011e050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011e050 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  ParticlesEditorPlugin::_notification(iVar1);
  return;
}



/* Particles3DEditorPlugin::_notificationv(int, bool) */

void __thiscall
Particles3DEditorPlugin::_notificationv(Particles3DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      ParticlesEditorPlugin::_notification(iVar1);
    }
    if ((code *)PTR__notification_0011e050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011e050 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  ParticlesEditorPlugin::_notification(iVar1);
  return;
}



/* GPUParticles3DEditorPlugin::_notificationv(int, bool) */

void __thiscall
GPUParticles3DEditorPlugin::_notificationv
          (GPUParticles3DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      ParticlesEditorPlugin::_notification(iVar1);
    }
    if ((code *)PTR__notification_0011e050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011e050 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  ParticlesEditorPlugin::_notification(iVar1);
  return;
}



/* CPUParticles2DEditorPlugin::_notificationv(int, bool) */

void __thiscall
CPUParticles2DEditorPlugin::_notificationv
          (CPUParticles2DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      ParticlesEditorPlugin::_notification(iVar1);
    }
    if ((code *)PTR__notification_0011e050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011e050 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  ParticlesEditorPlugin::_notification(iVar1);
  return;
}



/* CPUParticles3DEditorPlugin::_notificationv(int, bool) */

void __thiscall
CPUParticles3DEditorPlugin::_notificationv
          (CPUParticles3DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      ParticlesEditorPlugin::_notification(iVar1);
    }
    if ((code *)PTR__notification_0011e050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011e050 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  ParticlesEditorPlugin::_notification(iVar1);
  return;
}



/* GPUParticles2DEditorPlugin::_notificationv(int, bool) */

void __thiscall
GPUParticles2DEditorPlugin::_notificationv
          (GPUParticles2DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      _notification(iVar1);
      ParticlesEditorPlugin::_notification(iVar1);
    }
    if ((code *)PTR__notification_0011e050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011e050 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  ParticlesEditorPlugin::_notification(iVar1);
  _notification(iVar1);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* CPUParticles3DEditorPlugin::get_class() const */

void CPUParticles3DEditorPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* GPUParticles3DEditorPlugin::get_class() const */

void GPUParticles3DEditorPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Particles3DEditorPlugin::get_class() const */

void Particles3DEditorPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* CPUParticles2DEditorPlugin::get_class() const */

void CPUParticles2DEditorPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* GPUParticles2DEditorPlugin::get_class() const */

void GPUParticles2DEditorPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Particles2DEditorPlugin::get_class() const */

void Particles2DEditorPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* ParticlesEditorPlugin::get_class() const */

void ParticlesEditorPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_0010ed57:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_0010ed57;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010ee6b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ee6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void>::call
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010f2bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f2bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f370;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f2bf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f370:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GPUParticles2DEditorPlugin, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void>::call
          (CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010f4cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f4cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f580;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f4cf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f580:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void>::call
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010f6df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f6df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f790;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f6df:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f790:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Particles3DEditorPlugin, void, NodePath const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&>::call
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x16);
            uVar3 = _LC112;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_NodePath(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            NodePath::~NodePath((NodePath *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010f86e;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010f86e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ParticlesEditorPlugin, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ParticlesEditorPlugin,void,int>::call
          (CallableCustomMethodPointer<ParticlesEditorPlugin,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010fbb8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010fbb8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC113;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fb67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010fc69;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010fbb8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010fc69:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Particles2DEditorPlugin, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&>::call
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC114;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010fd3e;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010fd3e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CPUParticles3DEditorPlugin::~CPUParticles3DEditorPlugin() */

void __thiscall
CPUParticles3DEditorPlugin::~CPUParticles3DEditorPlugin(CPUParticles3DEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117b18;
  if (*(long *)(this + 0x6c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x6c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x6c0);
      *(undefined8 *)(this + 0x6c0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x670));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* GPUParticles3DEditorPlugin::~GPUParticles3DEditorPlugin() */

void __thiscall
GPUParticles3DEditorPlugin::~GPUParticles3DEditorPlugin(GPUParticles3DEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117b18;
  if (*(long *)(this + 0x6c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x6c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x6c0);
      *(undefined8 *)(this + 0x6c0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x670));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* CPUParticles2DEditorPlugin::~CPUParticles2DEditorPlugin() */

void __thiscall
CPUParticles2DEditorPlugin::~CPUParticles2DEditorPlugin(CPUParticles2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117588;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6b0));
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x670));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* CPUParticles2DEditorPlugin::~CPUParticles2DEditorPlugin() */

void __thiscall
CPUParticles2DEditorPlugin::~CPUParticles2DEditorPlugin(CPUParticles2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117588;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6b0));
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x670));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x6b8);
  return;
}



/* GPUParticles3DEditorPlugin::~GPUParticles3DEditorPlugin() */

void __thiscall
GPUParticles3DEditorPlugin::~GPUParticles3DEditorPlugin(GPUParticles3DEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117b18;
  if (*(long *)(this + 0x6c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x6c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x6c0);
      *(undefined8 *)(this + 0x6c0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x670));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x6c8);
  return;
}



/* CPUParticles3DEditorPlugin::~CPUParticles3DEditorPlugin() */

void __thiscall
CPUParticles3DEditorPlugin::~CPUParticles3DEditorPlugin(CPUParticles3DEditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117b18;
  if (*(long *)(this + 0x6c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x6c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x6c0);
      *(undefined8 *)(this + 0x6c0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x670));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x6c8);
  return;
}



/* GPUParticles2DEditorPlugin::~GPUParticles2DEditorPlugin() */

void __thiscall
GPUParticles2DEditorPlugin::~GPUParticles2DEditorPlugin(GPUParticles2DEditorPlugin *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x6b8);
  *(undefined ***)this = &PTR__initialize_classv_001172c0;
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00110207;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x18) == plVar4) {
        lVar3 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x6b8);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00110207:
  *(undefined ***)this = &PTR__initialize_classv_00117588;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6b0));
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x670));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* GPUParticles2DEditorPlugin::~GPUParticles2DEditorPlugin() */

void __thiscall
GPUParticles2DEditorPlugin::~GPUParticles2DEditorPlugin(GPUParticles2DEditorPlugin *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x6b8);
  *(undefined ***)this = &PTR__initialize_classv_001172c0;
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00110347;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x18) == plVar4) {
        lVar3 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x6b8);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00110347:
  *(undefined ***)this = &PTR__initialize_classv_00117588;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6b0));
  *(undefined ***)this = &PTR__initialize_classv_00117000;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x678));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x670));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x6d0);
  return;
}



/* GPUParticles2DEditorPlugin::_initialize_classv() */

void GPUParticles2DEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Particles2DEditorPlugin::initialize_class()::initialized == '\0') {
      if (ParticlesEditorPlugin::initialize_class()::initialized == '\0') {
        ParticlesEditorPlugin::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"ParticlesEditorPlugin");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Particles2DEditorPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      Particles2DEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "Particles2DEditorPlugin";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticles2DEditorPlugin";
    local_60 = 0;
    local_40 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CPUParticles3DEditorPlugin::_initialize_classv() */

void CPUParticles3DEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Particles3DEditorPlugin::initialize_class()::initialized == '\0') {
      if (ParticlesEditorPlugin::initialize_class()::initialized == '\0') {
        ParticlesEditorPlugin::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"ParticlesEditorPlugin");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Particles3DEditorPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      Particles3DEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "Particles3DEditorPlugin";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CPUParticles3DEditorPlugin";
    local_60 = 0;
    local_40 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CPUParticles2DEditorPlugin::_initialize_classv() */

void CPUParticles2DEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Particles2DEditorPlugin::initialize_class()::initialized == '\0') {
      if (ParticlesEditorPlugin::initialize_class()::initialized == '\0') {
        ParticlesEditorPlugin::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"ParticlesEditorPlugin");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Particles2DEditorPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      Particles2DEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "Particles2DEditorPlugin";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CPUParticles2DEditorPlugin";
    local_60 = 0;
    local_40 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GPUParticles3DEditorPlugin::_initialize_classv() */

void GPUParticles3DEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Particles3DEditorPlugin::initialize_class()::initialized == '\0') {
      if (ParticlesEditorPlugin::initialize_class()::initialized == '\0') {
        ParticlesEditorPlugin::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"ParticlesEditorPlugin");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Particles3DEditorPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      Particles3DEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "Particles3DEditorPlugin";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticles3DEditorPlugin";
    local_60 = 0;
    local_40 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ParticlesEditorPlugin::_initialize_classv() */

void ParticlesEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Object");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Node");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((code *)PTR__bind_methods_0011e010 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Node");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorPlugin");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011e008 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"EditorPlugin");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ParticlesEditorPlugin";
    local_70 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_0011e010 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011e058 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011e060 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Particles3DEditorPlugin::_initialize_classv() */

void Particles3DEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ParticlesEditorPlugin::initialize_class()::initialized == '\0') {
      if (EditorPlugin::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Object");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if ((code *)PTR__bind_methods_0011e010 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Node");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"EditorPlugin");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Node::_bind_methods) {
          EditorPlugin::_bind_methods();
        }
        if ((code *)PTR__bind_compatibility_methods_0011e008 != Object::_bind_compatibility_methods)
        {
          EditorPlugin::_bind_compatibility_methods();
        }
        EditorPlugin::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"EditorPlugin");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"ParticlesEditorPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      ParticlesEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"ParticlesEditorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Particles3DEditorPlugin");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Particles2DEditorPlugin::_initialize_classv() */

void Particles2DEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ParticlesEditorPlugin::initialize_class()::initialized == '\0') {
      if (EditorPlugin::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Object");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if ((code *)PTR__bind_methods_0011e010 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Node");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"EditorPlugin");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Node::_bind_methods) {
          EditorPlugin::_bind_methods();
        }
        if ((code *)PTR__bind_compatibility_methods_0011e008 != Object::_bind_compatibility_methods)
        {
          EditorPlugin::_bind_compatibility_methods();
        }
        EditorPlugin::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"EditorPlugin");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"ParticlesEditorPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      ParticlesEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"ParticlesEditorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Particles2DEditorPlugin");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_0011e010 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011e058 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011e060 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011233f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011233f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00112473;
  }
  cVar4 = String::operator==(param_1,"Control");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00112473;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0011257e;
    }
  }
LAB_00112473:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011257e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011268b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011268b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001127b3;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001127b3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_001128be;
    }
  }
LAB_001127b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001128be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001129a3;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001129a3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00112aae;
    }
  }
LAB_001129a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112aae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticlesEditorPlugin::is_class(String const&) const */

undefined8 __thiscall ParticlesEditorPlugin::is_class(ParticlesEditorPlugin *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00112b93;
  }
  cVar4 = String::operator==(param_1,"ParticlesEditorPlugin");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00112b93;
    }
    cVar4 = String::operator==(param_1,"EditorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_00112c9e;
    }
  }
LAB_00112b93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112c9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles3DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
Particles3DEditorPlugin::is_class(Particles3DEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00112dab;
  }
  cVar4 = String::operator==(param_1,"Particles3DEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ParticlesEditorPlugin::is_class((ParticlesEditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00112dab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles3DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
CPUParticles3DEditorPlugin::is_class(CPUParticles3DEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00112efb;
  }
  cVar4 = String::operator==(param_1,"CPUParticles3DEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Particles3DEditorPlugin::is_class((Particles3DEditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00112efb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
GPUParticles3DEditorPlugin::is_class(GPUParticles3DEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011304b;
  }
  cVar4 = String::operator==(param_1,"GPUParticles3DEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Particles3DEditorPlugin::is_class((Particles3DEditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011304b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles2DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
Particles2DEditorPlugin::is_class(Particles2DEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011319b;
  }
  cVar4 = String::operator==(param_1,"Particles2DEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ParticlesEditorPlugin::is_class((ParticlesEditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011319b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles2DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
CPUParticles2DEditorPlugin::is_class(CPUParticles2DEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_001132eb;
  }
  cVar4 = String::operator==(param_1,"CPUParticles2DEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Particles2DEditorPlugin::is_class((Particles2DEditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001132eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles2DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
GPUParticles2DEditorPlugin::is_class(GPUParticles2DEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011343b;
  }
  cVar4 = String::operator==(param_1,"GPUParticles2DEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Particles2DEditorPlugin::is_class((Particles2DEditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011343b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC87;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC87;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorPlugin";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticlesEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ParticlesEditorPlugin::_get_property_listv(ParticlesEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ParticlesEditorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ParticlesEditorPlugin";
  local_90 = 0;
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ParticlesEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
Particles3DEditorPlugin::_get_property_listv
          (Particles3DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    ParticlesEditorPlugin::_get_property_listv((ParticlesEditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Particles3DEditorPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Particles3DEditorPlugin";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Particles3DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ParticlesEditorPlugin::_get_property_listv((ParticlesEditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
CPUParticles3DEditorPlugin::_get_property_listv
          (CPUParticles3DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Particles3DEditorPlugin::_get_property_listv((Particles3DEditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CPUParticles3DEditorPlugin";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CPUParticles3DEditorPlugin";
  local_90 = 0;
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CPUParticles3DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Particles3DEditorPlugin::_get_property_listv((Particles3DEditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GPUParticles3DEditorPlugin::_get_property_listv
          (GPUParticles3DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Particles3DEditorPlugin::_get_property_listv((Particles3DEditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "GPUParticles3DEditorPlugin";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "GPUParticles3DEditorPlugin";
  local_90 = 0;
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GPUParticles3DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Particles3DEditorPlugin::_get_property_listv((Particles3DEditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
Particles2DEditorPlugin::_get_property_listv
          (Particles2DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    ParticlesEditorPlugin::_get_property_listv((ParticlesEditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Particles2DEditorPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Particles2DEditorPlugin";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Particles2DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ParticlesEditorPlugin::_get_property_listv((ParticlesEditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CPUParticles2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
CPUParticles2DEditorPlugin::_get_property_listv
          (CPUParticles2DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Particles2DEditorPlugin::_get_property_listv((Particles2DEditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CPUParticles2DEditorPlugin";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CPUParticles2DEditorPlugin";
  local_90 = 0;
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CPUParticles2DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Particles2DEditorPlugin::_get_property_listv((Particles2DEditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GPUParticles2DEditorPlugin::_get_property_listv
          (GPUParticles2DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Particles2DEditorPlugin::_get_property_listv((Particles2DEditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "GPUParticles2DEditorPlugin";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "GPUParticles2DEditorPlugin";
  local_90 = 0;
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GPUParticles2DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Particles2DEditorPlugin::_get_property_listv((Particles2DEditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItem";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011e068 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Control";
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011e070 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Container";
  local_90 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "BoxContainer";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HBoxContainer";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "VBoxContainer";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<ParticleProcessMaterial>::unref() */

void __thiscall Ref<ParticleProcessMaterial>::unref(Ref<ParticleProcessMaterial> *this)

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
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<ImageTexture>::unref() */

void __thiscall Ref<ImageTexture>::unref(Ref<ImageTexture> *this)

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
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* RBMap<float, int, Comparator<float>, DefaultAllocator>::clear() */

void __thiscall
RBMap<float,int,Comparator<float>,DefaultAllocator>::clear
          (RBMap<float,int,Comparator<float>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          pEVar3 = *(Element **)(pEVar7 + 8);
          if (pEVar3 != pEVar5) {
            if (*(Element **)(pEVar3 + 0x10) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar3 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar3 + 8));
            }
            Memory::free_static(pEVar3,false);
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011533c(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Particles3DEditorPlugin::_node_selected(NodePath const&) [clone .cold] */

void Particles3DEditorPlugin::_node_selected(NodePath *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115372(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CPUParticles2DEditorPlugin::_generate_emission_mask() [clone .cold] */

void CPUParticles2DEditorPlugin::_generate_emission_mask(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar7 * 0xc;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_001156e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 0xc - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_001156e0;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_0011566c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0011560f;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011566c;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset((void *)((long)puVar8 + lVar7 * 0xc),0,(param_1 - lVar7) * 0xc);
LAB_0011560f:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00115c10:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_00115c10;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_00115aea:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_00115aea;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_00115ab7;
  }
  if (lVar8 == lVar5) {
LAB_00115b8b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00115ab7:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00115b6b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_00115b8b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_00115b6b:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Face3>::_unref() */

void __thiscall CowData<Face3>::_unref(CowData<Face3> *this)

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



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = Container::_notification;
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(param_1 + 0x250));
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* Ref<Image>::unref() */

void __thiscall Ref<Image>::unref(Ref<Image> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(*(Image **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* void Ref<Image>::instantiate<>() */

void __thiscall Ref<Image>::instantiate<>(Ref<Image> *this)

{
  Image *pIVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Resource *pRVar4;
  Image *pIVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar4 = this_00;
  for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = Container::_notification;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pIVar1 = *(Image **)this;
    if (pIVar1 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    memdelete<Image>(pIVar1);
    return;
  }
  pIVar1 = *(Image **)this;
  pIVar5 = pIVar1;
  if (this_00 != (Resource *)pIVar1) {
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    pIVar5 = (Image *)this_00;
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
      if (pIVar1 == (Image *)0x0) goto LAB_00115e38;
      cVar2 = RefCounted::unreference();
    }
    else {
      if (pIVar1 == (Image *)0x0) goto LAB_00115e38;
      cVar2 = RefCounted::unreference();
    }
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
LAB_00115e38:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar5);
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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



/* RBMap<float, int, Comparator<float>, DefaultAllocator>::_insert_rb_fix(RBMap<float, int,
   Comparator<float>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<float,int,Comparator<float>,DefaultAllocator>::_insert_rb_fix
          (RBMap<float,int,Comparator<float>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_0011606d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00116190;
LAB_00116016:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00116016;
LAB_00116190:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_00116053:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_00116282:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00116282;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00116250;
LAB_001160e0:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_001160e0;
LAB_00116250:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_00116053;
    }
LAB_0011606d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* ParticlesEditorPlugin::_notification(int) */

void ParticlesEditorPlugin::_GLOBAL__sub_I__notification(void)

{
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
  }
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (MenuButton::base_property_helper != '\0') {
    return;
  }
  MenuButton::base_property_helper = 1;
  MenuButton::base_property_helper._56_8_ = 2;
  MenuButton::base_property_helper._64_8_ = 0;
  MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GPUParticles2DEditorPlugin::~GPUParticles2DEditorPlugin() */

void __thiscall
GPUParticles2DEditorPlugin::~GPUParticles2DEditorPlugin(GPUParticles2DEditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CPUParticles2DEditorPlugin::~CPUParticles2DEditorPlugin() */

void __thiscall
CPUParticles2DEditorPlugin::~CPUParticles2DEditorPlugin(CPUParticles2DEditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GPUParticles3DEditorPlugin::~GPUParticles3DEditorPlugin() */

void __thiscall
GPUParticles3DEditorPlugin::~GPUParticles3DEditorPlugin(GPUParticles3DEditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CPUParticles3DEditorPlugin::~CPUParticles3DEditorPlugin() */

void __thiscall
CPUParticles3DEditorPlugin::~CPUParticles3DEditorPlugin(CPUParticles3DEditorPlugin *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ParticlesEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticlesEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticlesEditorPlugin,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Particles2DEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Particles2DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles2DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles2DEditorPlugin,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GPUParticles2DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GPUParticles2DEditorPlugin,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Particles3DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Particles3DEditorPlugin, void, NodePath
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Particles3DEditorPlugin,void,NodePath_const&> *this)

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


