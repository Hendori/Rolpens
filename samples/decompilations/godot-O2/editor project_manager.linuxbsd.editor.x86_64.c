
/* ProjectManager::_show_about() */

void __thiscall ProjectManager::_show_about(ProjectManager *this)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  pVVar1 = *(Vector2i **)(this + 0xae0);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar2 = (float)EditorScale::get_scale();
  local_20 = CONCAT44(fVar2 * _LC1._4_4_,fVar2 * (float)_LC1);
  local_18 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_20);
  Window::popup_centered(pVVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_show_quick_settings() */

void __thiscall ProjectManager::_show_quick_settings(ProjectManager *this)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  pVVar1 = *(Vector2i **)(this + 0xaf0);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar2 = (float)EditorScale::get_scale();
  local_20 = CONCAT44(fVar2 * _LC2._4_4_,fVar2 * (float)_LC2);
  local_18 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_20);
  Window::popup_centered(pVVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_scan_projects() */

void ProjectManager::_scan_projects(void)

{
  EditorFileDialog::popup_file_dialog();
  return;
}



/* ProjectManager::_install_project(String const&, String const&) */

void ProjectManager::_install_project(String *param_1,String *param_2)

{
  ProjectDialog::set_mode(*(undefined8 *)(param_1 + 0xbe8),2);
  ProjectDialog::set_zip_path(*(String **)(param_1 + 0xbe8));
  ProjectDialog::set_zip_title(*(String **)(param_1 + 0xbe8));
  ProjectDialog::show_dialog(SUB81(*(undefined8 *)(param_1 + 0xbe8),0));
  return;
}



/* ProjectManager::_new_project() */

void __thiscall ProjectManager::_new_project(ProjectManager *this)

{
  ProjectDialog::set_mode(*(undefined8 *)(this + 0xbe8),0);
  ProjectDialog::show_dialog(SUB81(*(undefined8 *)(this + 0xbe8),0));
  return;
}



/* ProjectManager::_import_project() */

void __thiscall ProjectManager::_import_project(ProjectManager *this)

{
  ProjectDialog::set_mode(*(undefined8 *)(this + 0xbe8),1);
  ProjectDialog::ask_for_path_and_show();
  return;
}



/* ProjectManager::_open_options_popup() */

void ProjectManager::_open_options_popup(void)

{
  Vector2i *pVVar1;
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 uVar2;
  undefined8 in_XMM1_Qa;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = Control::get_screen_rect();
  pVVar1 = *(Vector2i **)(in_RDI + 0xba8);
  local_4c = 0;
  fStack_3c = (float)((ulong)in_XMM1_Qa >> 0x20);
  _local_48 = CONCAT44((float)((ulong)uVar2 >> 0x20) + fStack_3c,(int)uVar2);
  local_40 = (undefined4)in_XMM1_Qa;
  local_50 = local_40;
  local_38 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::set_size(pVVar1);
  pVVar1 = *(Vector2i **)(in_RDI + 0xba8);
  local_38 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
  Window::set_position(pVVar1);
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(long **)(in_RDI + 0xba8) + 0x240))(*(long **)(in_RDI + 0xba8),&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectManager::_full_convert_button_pressed() */

void __thiscall ProjectManager::_full_convert_button_pressed(ProjectManager *this)

{
  long lVar1;
  Vector2i *pVVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Window::hide();
  pVVar2 = *(Vector2i **)(this + 0xc78);
  EditorScale::get_scale();
  Window::popup_centered(pVVar2);
  uVar3 = ConfirmationDialog::get_cancel_button();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::grab_focus();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ProjectManager::_on_order_option_changed(int) */

void ProjectManager::_on_order_option_changed(int param_1)

{
  undefined4 in_register_0000003c;
  
  if ((*(byte *)(CONCAT44(in_register_0000003c,param_1) + 0x2fa) & 0x40) == 0) {
    return;
  }
  ProjectList::set_order_option
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xb20));
  return;
}



/* ProjectManager::_titlebar_resized() */

void __thiscall ProjectManager::_titlebar_resized(ProjectManager *this)

{
  code *pcVar1;
  Vector2 *pVVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  undefined1 local_40 [12];
  long local_30;
  
  plVar3 = DisplayServer::singleton;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*DisplayServer::singleton + 0x5f0);
  Control::get_global_position();
  Control::get_size();
  Control::get_global_position();
  Control::get_size();
  local_40._0_8_ =
       CONCAT44((int)(extraout_XMM0_Db_00 * (float)((ulong)_LC5 >> 0x20) + extraout_XMM0_Db),
                (int)(extraout_XMM0_Db_02 * (float)_LC5 + extraout_XMM0_Db_01));
  if (pcVar1 != DisplayServer::window_set_window_buttons_offset) {
    (*pcVar1)(plVar3,local_40,0);
  }
  if (*(code **)(*DisplayServer::singleton + 0x5f8) != DisplayServer::window_get_safe_title_margins)
  {
    local_40 = (**(code **)(*DisplayServer::singleton + 0x5f8))(DisplayServer::singleton,0);
  }
  if (*(long *)(this + 0xa20) != 0) {
    (**(code **)(**(long **)(this + 0xa00) + 0x340))();
    Control::set_custom_minimum_size(*(Vector2 **)(this + 0xa20));
    Control::set_custom_minimum_size(*(Vector2 **)(this + 0xa38));
  }
  if (*(long *)(this + 0xa30) != 0) {
    (**(code **)(**(long **)(this + 0xa00) + 0x340))();
    Control::set_custom_minimum_size(*(Vector2 **)(this + 0xa30));
    Control::set_custom_minimum_size(*(Vector2 **)(this + 0xa28));
  }
  pVVar2 = *(Vector2 **)(this + 0xa18);
  if (pVVar2 != (Vector2 *)0x0) {
    Control::get_global_position();
    Control::set_custom_minimum_size(pVVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
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



/* ProjectManager::_update_size_limits(bool) */

void __thiscall ProjectManager::_update_size_limits(ProjectManager *this,bool param_1)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  Vector2i *pVVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = (float)EditorScale::get_scale();
  local_80 = CONCAT44(fVar7 * _LC19._4_4_,fVar7 * (float)_LC19);
  fVar7 = (float)EditorScale::get_scale();
  local_78 = CONCAT44(fVar7 * (float)((ulong)_LC20 >> 0x20),fVar7 * (float)_LC20);
  if ((*(long *)(SceneTree::singleton + 0x368) != 0) &&
     (pVVar5 = (Vector2i *)
               __dynamic_cast(*(long *)(SceneTree::singleton + 0x368),&Object::typeinfo,
                              &Window::typeinfo,0), pVVar5 != (Vector2i *)0x0)) {
    local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_80);
    Window::set_min_size(pVVar5);
    plVar2 = DisplayServer::singleton;
    pcVar1 = *(code **)(*DisplayServer::singleton + 0x570);
    uVar6 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_80);
    (*pcVar1)(plVar2,uVar6,0);
    if (!param_1) {
      local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
      Window::set_size(pVVar5);
      plVar2 = DisplayServer::singleton;
      pcVar1 = *(code **)(*DisplayServer::singleton + 0x580);
      uVar6 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
      (*pcVar1)(plVar2,uVar6,0);
    }
  }
  local_58._0_8_ = (**(code **)(*DisplayServer::singleton + 0x588))(DisplayServer::singleton,0);
  uVar6 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_58);
  plVar2 = DisplayServer::singleton;
  pcVar1 = *(code **)(*DisplayServer::singleton + 0x428);
  uVar4 = (**(code **)(*DisplayServer::singleton + 0x528))(DisplayServer::singleton,0);
  local_58 = (*pcVar1)(plVar2,uVar4);
  local_60 = 0;
  cVar3 = Vector2i::operator!=((Vector2i *)(local_58 + 8),(Vector2i *)&local_60);
  if (cVar3 == '\0') goto LAB_00100a1d;
  local_70 = CONCAT44((int)(((float)local_58._12_4_ - (float)((ulong)uVar6 >> 0x20)) * _LC5._4_4_ +
                           (float)local_58._4_4_),
                      (int)(((float)local_58._8_4_ - (float)uVar6) * (float)_LC5 +
                           (float)local_58._0_4_));
  (**(code **)(*DisplayServer::singleton + 0x548))(DisplayServer::singleton,&local_70,0);
  fVar7 = (float)EditorScale::get_scale();
  local_68 = Vector2i::operator*((Vector2i *)(local_58 + 8),(int)fVar7);
  local_60 = Vector2i::operator/((Vector2i *)&local_68,2);
  local_60 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
  fVar8 = (float)local_80;
  fVar7 = (float)local_60;
  if (NAN(fVar8) || NAN(fVar7)) {
LAB_00100a04:
    local_60 = local_80;
  }
  else if (fVar8 == fVar7) {
    if ((float)((ulong)local_60 >> 0x20) <= (float)((ulong)local_80 >> 0x20)) goto LAB_00100a04;
  }
  else if (fVar7 < fVar8) goto LAB_00100a04;
  QuickSettingsDialog::update_size_limits(*(Vector2 **)(this + 0xaf0));
LAB_00100a1d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectManager::_show_error(String const&, Vector2 const&) */

void __thiscall ProjectManager::_show_error(ProjectManager *this,String *param_1,Vector2 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  Vector2i *pVVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_30;
  
  uVar2 = *(undefined8 *)(this + 0xae8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00100b0d;
      LOCK();
      lVar6 = *plVar1;
      bVar7 = lVar4 == lVar6;
      if (bVar7) {
        *plVar1 = lVar4 + 1;
        lVar6 = lVar4;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar6 != -1) {
      local_30 = *(long *)param_1;
    }
  }
LAB_00100b0d:
  AcceptDialog::set_text(uVar2);
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30 + -0x10),false);
    }
  }
  pVVar5 = *(Vector2i **)(this + 0xae8);
  Vector2::operator_cast_to_Vector2i(param_2);
  Window::popup_centered(pVVar5);
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectManager::_dim_window() */

void __thiscall ProjectManager::_dim_window(ProjectManager *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItem::set_modulate((Color *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::get_search_box() */

undefined8 __thiscall ProjectManager::get_search_box(ProjectManager *this)

{
  return *(undefined8 *)(this + 0xb30);
}



/* ProjectManager::_select_main_view(int) */

void __thiscall ProjectManager::_select_main_view(ProjectManager *this,int param_1)

{
  ProjectManager *pPVar1;
  ulong uVar2;
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
  uint uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  
  if (1 < (uint)param_1) {
    _err_print_index_error
              ("_select_main_view","editor/project_manager.cpp",0x14d,(ulong)(uint)param_1,2,
               "view_id","MAIN_VIEW_MAX","",false,false);
    return;
  }
  if ((*(long *)(this + 0xa68) != 0) && (*(int *)(this + 0xa8c) != 0)) {
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa88) * 8);
    uVar31 = (param_1 * -0x7a143595 ^ (uint)(param_1 * -0x7a143595) >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar31 >> 0x10;
    uVar27 = uVar19 ^ uVar31;
    if (uVar31 == uVar19) {
      uVar26 = 1;
      uVar24 = uVar2;
    }
    else {
      uVar24 = uVar27 * uVar2;
      uVar26 = uVar27;
    }
    uVar29 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa88) * 4));
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar29;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar24;
    lVar23 = SUB168(auVar3 * auVar11,8);
    uVar28 = *(uint *)(*(long *)(this + 0xa70) + lVar23 * 4);
    iVar22 = SUB164(auVar3 * auVar11,8);
    if (uVar28 != 0) {
      uVar30 = 0;
      do {
        if ((uVar28 == uVar26) &&
           (param_1 == *(int *)(*(long *)(*(long *)(this + 0xa68) + lVar23 * 8) + 0x10))) {
          if ((*(long *)(this + 0xa98) != 0) && (*(int *)(this + 0xabc) != 0)) {
            uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xab8) * 8);
            uVar24 = uVar2;
            if (uVar31 != uVar19) {
              uVar24 = uVar27 * uVar2;
            }
            uVar29 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(this + 0xab8) * 4));
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar29;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar24;
            lVar23 = SUB168(auVar7 * auVar15,8);
            uVar19 = *(uint *)(*(long *)(this + 0xaa0) + lVar23 * 4);
            iVar22 = SUB164(auVar7 * auVar15,8);
            if (uVar19 != 0) {
              uVar27 = 0;
              do {
                if ((uVar19 == uVar26) &&
                   (param_1 == *(int *)(*(long *)(*(long *)(this + 0xa98) + lVar23 * 8) + 0x10))) {
                  pPVar1 = this + 0xa58;
                  if (param_1 != *(int *)(this + 0xa58)) {
                    puVar20 = (undefined8 *)
                              HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
                              ::operator[]((HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
                                            *)(this + 0xa90),pPVar1);
                    BaseButton::set_pressed_no_signal(SUB81(*puVar20,0));
                    puVar20 = (undefined8 *)
                              HashMap<ProjectManager::MainViewTab,Control*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Control*>>>
                              ::operator[]((HashMap<ProjectManager::MainViewTab,Control*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Control*>>>
                                            *)(this + 0xa60),pPVar1);
                    CanvasItem::set_visible(SUB81(*puVar20,0));
                    *(int *)(this + 0xa58) = param_1;
                  }
                  puVar20 = (undefined8 *)
                            HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
                            ::operator[]((HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
                                          *)(this + 0xa90),pPVar1);
                  BaseButton::set_pressed_no_signal(SUB81(*puVar20,0));
                  puVar20 = (undefined8 *)
                            HashMap<ProjectManager::MainViewTab,Control*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Control*>>>
                            ::operator[]((HashMap<ProjectManager::MainViewTab,Control*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Control*>>>
                                          *)(this + 0xa60),pPVar1);
                  CanvasItem::set_visible(SUB81(*puVar20,0));
                  if ((*(int *)(this + 0xa58) == 0) &&
                     ((*(byte *)(*(long *)(this + 0xb30) + 0x2fa) & 0x40) != 0)) {
                    Control::grab_focus();
                    return;
                  }
                  return;
                }
                uVar27 = uVar27 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (iVar22 + 1) * uVar2;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar29;
                lVar23 = SUB168(auVar8 * auVar16,8);
                uVar19 = *(uint *)(*(long *)(this + 0xaa0) + lVar23 * 4);
                iVar22 = SUB164(auVar8 * auVar16,8);
              } while ((uVar19 != 0) &&
                      (auVar9._8_8_ = 0, auVar9._0_8_ = uVar19 * uVar2, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar29, auVar10._8_8_ = 0,
                      auVar10._0_8_ =
                           ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab8) * 4)
                            + iVar22) - SUB164(auVar9 * auVar17,8)) * uVar2, auVar18._8_8_ = 0,
                      auVar18._0_8_ = uVar29, uVar27 <= SUB164(auVar10 * auVar18,8)));
            }
          }
          uVar25 = 0x14f;
          pcVar21 = "Condition \"!main_view_toggle_map.has(view_id)\" is true.";
          goto LAB_00100ec2;
        }
        uVar30 = uVar30 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (iVar22 + 1) * uVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar29;
        lVar23 = SUB168(auVar4 * auVar12,8);
        uVar28 = *(uint *)(*(long *)(this + 0xa70) + lVar23 * 4);
        iVar22 = SUB164(auVar4 * auVar12,8);
      } while ((uVar28 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar28 * uVar2, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar29, auVar6._8_8_ = 0,
              auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa88) * 4
                                        ) + iVar22) - SUB164(auVar5 * auVar13,8)) * uVar2,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar29, uVar30 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  uVar25 = 0x14e;
  pcVar21 = "Condition \"!main_view_map.has(view_id)\" is true.";
LAB_00100ec2:
  _err_print_error("_select_main_view","editor/project_manager.cpp",uVar25,pcVar21,0,0);
  return;
}



/* ProjectManager::_update_list_placeholder() [clone .part.0] */

void __thiscall ProjectManager::_update_list_placeholder(ProjectManager *this)

{
  String *pSVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb10),0));
  local_58 = "network/connection/network_mode";
  local_60 = 0;
  local_50 = 0x1f;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_60 = 0;
  pSVar1 = *(String **)(this + 0xb10);
  local_58 = "";
  local_50 = 0;
  if (iVar2 == 0) {
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Go Online and Open Asset Library";
    local_68 = 0;
    local_50 = 0x20;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Button::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb18),0));
  }
  else {
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Open Asset Library";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Button::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb18),0));
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::show();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_update_list_placeholder() */

void __thiscall ProjectManager::_update_list_placeholder(ProjectManager *this)

{
  int iVar1;
  
  iVar1 = ProjectList::get_project_count();
  if (iVar1 < 1) {
    _update_list_placeholder(this);
    return;
  }
  CanvasItem::hide();
  return;
}



/* ProjectManager::_erase_missing_projects() */

void __thiscall ProjectManager::_erase_missing_projects(ProjectManager *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  uVar2 = *(undefined8 *)(this + 0xbc8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = 
  "Remove all missing projects from the list?\nThe project folders\' contents won\'t be modified.";
  local_58 = 0;
  local_40 = 0x5b;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  AcceptDialog::set_text(uVar2);
  pcVar4 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar3 = local_58;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_38 = 0;
  Window::popup_centered(*(Vector2i **)(this + 0xbc8));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_open_recovery_mode_ask(bool) */

void __thiscall ProjectManager::_open_recovery_mode_ask(ProjectManager *this,bool param_1)

{
  undefined8 uVar1;
  Vector2i *pVVar2;
  long in_FS_OFFSET;
  float fVar3;
  String *local_2c0;
  String *local_2b8;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  String local_188 [8];
  CowData<char32_t> local_180 [8];
  String local_178 [8];
  undefined8 local_170;
  undefined8 local_168;
  String local_160 [8];
  String local_158 [8];
  CowData<char32_t> local_150 [8];
  String local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  String local_130 [8];
  String local_128 [8];
  CowData<char32_t> local_120 [8];
  String local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  String local_100 [8];
  String local_f8 [8];
  CowData<char32_t> local_f0 [8];
  String local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  String local_d0 [8];
  String local_c8 [8];
  CowData<char32_t> local_c0 [8];
  String local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  String local_a0 [8];
  String local_98 [8];
  CowData<char32_t> local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a0 = 0;
  if (!param_1) {
    String::utf8((char *)local_70,0x117639);
    local_68 = "";
    local_80 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = 
    "It looks like Godot crashed when opening this project the last time. If you\'re having problems editing this project, you can try to open it in Recovery Mode."
    ;
    local_60 = 0x9d;
    String::parse_latin1((StrRange *)&local_88);
    TTR((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    String::operator+=((String *)&local_1a0,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  }
  local_2b8 = (String *)&local_1a0;
  local_2c0 = (String *)&local_88;
  local_68 = "";
  local_78 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = "Edit the project in Recovery Mode?";
  local_80 = 0;
  local_60 = 0x22;
  String::parse_latin1((StrRange *)&local_80);
  TTR(local_70,(String *)&local_80);
  String::utf8((char *)local_90,0x117639);
  local_68 = "";
  local_a8 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_a8);
  local_b0 = 0;
  local_68 = 
  "This mode is intended only for basic editing to troubleshoot such issues, and therefore it will not be possible to run the project during this mode. It is also a good idea to make a backup of your project before proceeding."
  ;
  local_60 = 0xdf;
  String::parse_latin1((StrRange *)&local_b0);
  TTR(local_a0,(String *)&local_b0);
  String::utf8((char *)local_c0,0x117639);
  local_68 = "";
  local_d8 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_d8);
  local_68 = "Automatic scene restoring";
  local_e0 = 0;
  local_60 = 0x19;
  String::parse_latin1((StrRange *)&local_e0);
  TTR(local_d0,(String *)&local_e0);
  String::utf8((char *)local_f0,0x117656);
  local_68 = "";
  local_108 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_68 = "GDExtension addons";
  local_110 = 0;
  local_60 = 0x12;
  String::parse_latin1((StrRange *)&local_110);
  TTR(local_100,(String *)&local_110);
  String::utf8((char *)local_120,0x117656);
  local_68 = "";
  local_138 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_68 = "Editor plugins";
  local_60 = 0xe;
  String::parse_latin1((StrRange *)&local_140);
  TTR(local_130,(String *)&local_140);
  String::utf8((char *)local_150,0x117656);
  local_68 = "";
  local_168 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_168);
  local_170 = 0;
  local_68 = "Tool scripts";
  local_60 = 0xc;
  String::parse_latin1((StrRange *)&local_170);
  TTR(local_160,(String *)&local_170);
  String::utf8((char *)local_180,0x11768c);
  local_68 = "";
  local_190 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_190);
  local_198 = 0;
  local_68 = 
  "Recovery Mode is a special mode that may help to recover projects that crash the engine during initialization. This mode temporarily disables the following features:"
  ;
  local_60 = 0xa5;
  String::parse_latin1((StrRange *)&local_198);
  TTR(local_188,(String *)&local_198);
  String::operator+(local_178,local_188);
  String::operator+(local_158,local_178);
  String::operator+(local_148,local_158);
  String::operator+(local_128,local_148);
  String::operator+(local_118,local_128);
  String::operator+(local_f8,local_118);
  String::operator+(local_e8,local_f8);
  String::operator+(local_c8,local_e8);
  String::operator+(local_b8,local_c8);
  String::operator+(local_98,local_b8);
  String::operator+(local_2c0,local_98);
  String::operator+((String *)&local_68,local_2c0);
  String::operator+=(local_2b8,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_2c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref(local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref(local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref(local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_68 = (char *)0x0;
  uVar1 = *(undefined8 *)(this + 0xbe0);
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_2b8);
  }
  AcceptDialog::set_text(uVar1,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pVVar2 = *(Vector2i **)(this + 0xbe0);
  fVar3 = (float)EditorScale::get_scale();
  local_50 = CONCAT44(fVar3 * _LC57._4_4_,fVar3 * (float)_LC57);
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::popup_centered(pVVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_2b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectManager::_on_open_options_selected(int) */

void __thiscall ProjectManager::_on_open_options_selected(ProjectManager *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  _open_recovery_mode_ask(this,true);
  return;
}



/* ProjectManager::add_new_tag(String const&) */

void __thiscall ProjectManager::add_new_tag(ProjectManager *this,String *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  ProjectTag *this_00;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  undefined8 local_70;
  ProjectManager local_68 [16];
  String local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xbf0) != 0) && (*(int *)(this + 0xc14) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc10) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xc10) * 8);
    uVar12 = String::hash();
    uVar17 = CONCAT44(0,uVar1);
    lVar16 = *(long *)(this + 0xc08);
    uVar13 = 1;
    if (uVar12 != 0) {
      uVar13 = uVar12;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(lVar16 + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar12) {
          cVar11 = String::operator==((String *)
                                      (*(long *)(this + 0xbf0) +
                                      (ulong)*(uint *)(*(long *)(this + 0xbf8) + lVar15 * 4) * 8),
                                      param_1);
          if (cVar11 != '\0') goto LAB_00101ed9;
          lVar16 = *(long *)(this + 0xc08);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(lVar16 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar12 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar12 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_58);
  this_00 = (ProjectTag *)operator_new(0xa28,"");
  ProjectTag::ProjectTag(this_00,param_1,false);
  postinitialize_handler((Object *)this_00);
  Node::add_child(*(undefined8 *)(this + 0xc48),this_00,0,0);
  Node::move_child(*(Node **)(this + 0xc48),(int)this_00);
  create_custom_callable_function_pointer<ProjectManager,String_const&>
            (local_68,(char *)this,(_func_void_String_ptr *)"&ProjectManager::_add_project_tag");
  local_70 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)param_1);
  }
  Callable::bind<String>(local_58,local_68,(CowData<char32_t> *)&local_70);
  ProjectTag::connect_button_to(this_00);
  Callable::~Callable((Callable *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Callable::~Callable((Callable *)local_68);
LAB_00101ed9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_open_asset_library_confirmed() */

void __thiscall ProjectManager::_open_asset_library_confirmed(ProjectManager *this)

{
  int iVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "network/connection/network_mode";
  local_60 = 0x1f;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (iVar1 == 0) {
    pSVar2 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,1);
    local_70 = 0;
    local_68 = "network/connection/network_mode";
    local_60 = 0x1f;
    String::parse_latin1((StrRange *)&local_70);
    EditorSettings::set_setting(pSVar2,(Variant *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    EditorSettings::get_singleton();
    EditorSettings::notify_changes();
    EditorSettings::get_singleton();
    EditorSettings::save();
  }
  EditorAssetLibrary::disable_community_support();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _select_main_view(this,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::adjust_heap
               (long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  String *pSVar1;
  char cVar2;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_48;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  if (lVar6 < param_3) {
    do {
      this = (CowData<char32_t> *)(param_5 + (lVar6 + -1 + param_1) * 8);
      pSVar1 = (String *)(param_5 + (param_1 + lVar6) * 8);
      cVar2 = String::operator<(pSVar1,(String *)this);
      lVar4 = lVar6 + -1;
      lVar5 = lVar6;
      if (cVar2 == '\0') {
        lVar5 = lVar6 + 1;
        this = (CowData<char32_t> *)pSVar1;
        lVar4 = lVar6;
      }
      pCVar3 = (CowData<char32_t> *)(param_5 + (local_68 + param_1) * 8);
      if (*(long *)pCVar3 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar3,(CowData *)this);
      }
      lVar6 = lVar5 * 2;
      local_68 = lVar4;
    } while (lVar6 < param_3);
  }
  else {
    this = (CowData<char32_t> *)(param_5 + (param_2 + param_1) * 8);
    lVar4 = param_2;
  }
  pCVar3 = this;
  if (param_3 == lVar6) {
    lVar4 = param_3 + -1;
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (*(long *)this != *(long *)pCVar3) {
      CowData<char32_t>::_ref(this,(CowData *)pCVar3);
    }
  }
  local_48 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_4);
  }
  lVar6 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  while (param_2 < lVar4) {
    lVar5 = lVar6 >> 1;
    pSVar1 = (String *)(param_5 + (param_1 + lVar5) * 8);
    cVar2 = String::operator<(pSVar1,(String *)&local_48);
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (cVar2 == '\0') break;
    if (*(long *)pCVar3 != *(long *)pSVar1) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)pSVar1);
    }
    lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    pCVar3 = (CowData<char32_t> *)pSVar1;
    lVar4 = lVar5;
  }
  if (*(long *)pCVar3 != local_48) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102864) */
/* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::introsort
               (long param_1,long param_2,String *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  String *pSVar4;
  String *pSVar5;
  long lVar6;
  long lVar7;
  String *pSVar8;
  CowData *pCVar9;
  String *pSVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_80;
  long local_68;
  long local_60;
  long local_48;
  long local_40;
  
  lVar12 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar12) {
    local_80 = param_2;
    if (param_4 != 0) {
      pSVar4 = param_3 + param_1 * 8;
      local_68 = param_2;
      local_60 = param_4;
LAB_001023fe:
      local_60 = local_60 + -1;
      pSVar8 = param_3 + ((lVar12 >> 1) + param_1) * 8;
      pSVar5 = param_3 + local_68 * 8 + -8;
      cVar3 = String::operator<(pSVar4,pSVar8);
      if (cVar3 == '\0') {
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar10 = pSVar4;
        if (cVar3 != '\0') goto LAB_0010245c;
        cVar3 = String::operator<(pSVar8,pSVar5);
      }
      else {
        cVar3 = String::operator<(pSVar8,pSVar5);
        pSVar10 = pSVar8;
        if (cVar3 != '\0') goto LAB_0010245c;
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar8 = pSVar4;
      }
      pSVar10 = pSVar8;
      if (cVar3 != '\0') {
        pSVar10 = pSVar5;
      }
LAB_0010245c:
      local_48 = 0;
      plVar1 = (long *)(*(long *)pSVar10 + -0x10);
      if (*(long *)pSVar10 != 0) {
        do {
          lVar12 = *plVar1;
          if (lVar12 == 0) goto LAB_00102494;
          LOCK();
          lVar11 = *plVar1;
          bVar13 = lVar12 == lVar11;
          if (bVar13) {
            *plVar1 = lVar12 + 1;
            lVar11 = lVar12;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar11 != -1) {
          local_48 = *(long *)pSVar10;
        }
      }
LAB_00102494:
      pSVar8 = pSVar4;
      local_80 = param_1;
      lVar12 = local_68;
      do {
        cVar3 = String::operator<(pSVar8,(String *)&local_48);
        if (cVar3 == '\0') {
LAB_001024d7:
          lVar12 = lVar12 + -1;
          pSVar5 = param_3 + lVar12 * 8;
          while (cVar3 = String::operator<((String *)&local_48,pSVar5), cVar3 != '\0') {
            if (param_1 == lVar12) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar12 = lVar12 + -1;
            pSVar5 = pSVar5 + -8;
          }
          if (lVar12 <= local_80) goto LAB_00102570;
          lVar11 = *(long *)pSVar8;
          *(undefined8 *)pSVar8 = 0;
          if (*(long *)pSVar5 != 0) {
            *(long *)pSVar8 = *(long *)pSVar5;
            *(undefined8 *)pSVar5 = 0;
          }
          if (lVar11 != 0) {
            *(long *)pSVar5 = lVar11;
          }
        }
        else if (local_68 + -1 == local_80) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_001024d7;
        }
        pSVar8 = pSVar8 + 8;
        local_80 = local_80 + 1;
      } while( true );
    }
LAB_0010263a:
    lVar11 = lVar12 + -2 >> 1;
    pCVar9 = (CowData *)(param_3 + param_1 * 8);
    do {
      local_48 = 0;
      plVar1 = (long *)(*(long *)(pCVar9 + lVar11 * 8) + -0x10);
      if (*(long *)(pCVar9 + lVar11 * 8) == 0) {
        adjust_heap(param_1,lVar11,lVar12,&local_48,param_3);
      }
      else {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_0010267e;
          LOCK();
          lVar7 = *plVar1;
          bVar13 = lVar6 == lVar7;
          if (bVar13) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar7 != -1) {
          local_48 = *(long *)(pCVar9 + lVar11 * 8);
        }
LAB_0010267e:
        lVar6 = local_48;
        adjust_heap(param_1,lVar11,lVar12,&local_48,param_3);
        if (lVar6 != 0) {
          LOCK();
          plVar1 = (long *)(lVar6 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      if (lVar11 == 0) goto LAB_001026eb;
      lVar11 = lVar11 + -1;
    } while( true );
  }
  goto LAB_0010260f;
LAB_00102570:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  introsort(local_80,local_68,param_3,local_60);
  lVar12 = local_80 - param_1;
  if (lVar12 < 0x11) goto LAB_0010260f;
  local_68 = local_80;
  if (local_60 == 0) goto LAB_0010263a;
  goto LAB_001023fe;
LAB_001026eb:
  pSVar4 = param_3 + local_80 * 8 + -8;
  lVar12 = (local_80 + -1) - param_1;
  do {
    plVar1 = (long *)(*(long *)pSVar4 + -0x10);
    if (*(long *)pSVar4 == 0) {
LAB_001027f8:
      if (*(long *)pCVar9 != *(long *)pSVar4) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar9);
      }
LAB_00102818:
      local_48 = 0;
      adjust_heap(param_1,0,lVar12,&local_48,param_3);
    }
    else {
      do {
        lVar11 = *plVar1;
        if (lVar11 == 0) goto LAB_001027f8;
        LOCK();
        lVar6 = *plVar1;
        bVar13 = lVar11 == lVar6;
        if (bVar13) {
          *plVar1 = lVar11 + 1;
          lVar6 = lVar11;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar6 == -1) goto LAB_001027f8;
      lVar11 = *(long *)pSVar4;
      if (lVar11 != *(long *)pCVar9) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar9);
      }
      local_48 = 0;
      if (lVar11 == 0) goto LAB_00102818;
      plVar1 = (long *)(lVar11 + -0x10);
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_0010283d;
        LOCK();
        lVar7 = *plVar1;
        bVar13 = lVar6 == lVar7;
        if (bVar13) {
          *plVar1 = lVar6 + 1;
          lVar7 = lVar6;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar7 == -1) {
LAB_0010283d:
        adjust_heap(param_1,0,lVar12,&local_48,param_3);
      }
      else {
        local_48 = lVar11;
        adjust_heap(param_1,0,lVar12,&local_48,param_3);
        LOCK();
        plVar2 = (long *)(lVar11 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(plVar1,false);
      }
    }
    pSVar4 = (String *)((CowData<char32_t> *)pSVar4 + -8);
    bVar13 = 1 < lVar12;
    lVar12 = lVar12 + -1;
  } while (bVar13);
LAB_0010260f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectManager::_erase_project() */

void __thiscall ProjectManager::_erase_project(ProjectManager *this)

{
  char *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ProjectList::get_selected_project_keys();
  if (*(int *)(lVar2 + 0x24) != 0) {
    local_78 = (char *)0x0;
    if (*(int *)(lVar2 + 0x24) == 1) {
      local_60 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "Remove this project from the list?";
      local_68 = 0;
      local_50 = 0x22;
      String::parse_latin1((StrRange *)&local_68);
      TTR((String *)&local_58,(String *)&local_68);
      if (local_78 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    else {
      local_68 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_68);
      local_58 = "Remove %d projects from the list?";
      local_70 = 0;
      local_50 = 0x21;
      String::parse_latin1((StrRange *)&local_70);
      TTR((String *)&local_60,(String *)&local_70);
      vformat<unsigned_int>((String *)&local_58,(uint)(String *)&local_60);
      pcVar1 = local_58;
      if (local_78 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_58 = (char *)0x0;
        local_78 = pcVar1;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    Label::set_text(*(String **)(this + 0xbc0));
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 3000));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectManager::_open_selected_projects() */

void __thiscall ProjectManager::_open_selected_projects(ProjectManager *this)

{
  CowData *pCVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  CowData<char32_t> *pCVar8;
  long *plVar9;
  CowData *pCVar10;
  CowData *pCVar11;
  long in_FS_OFFSET;
  Variant *local_b0;
  int local_a0;
  String local_98 [8];
  undefined1 (*local_90) [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItem::show();
  puVar6 = (undefined8 *)ProjectList::get_selected_project_keys();
  iVar2 = *(int *)((long)puVar6 + 0x24);
  if (iVar2 == 0) {
LAB_00102b38:
    uStack_50 = _UNK_00126738;
    local_58 = _LC5;
    *(undefined1 *)(*(long *)(this + 0xb20) + 0xc34) = 1;
    CanvasItem::set_modulate((Color *)this);
    lVar7 = *(long *)(this + 0x240);
    if (lVar7 == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SceneTree::quit((int)lVar7);
      return;
    }
  }
  else {
    pCVar11 = (CowData *)*puVar6;
    local_a0 = 1;
    while( true ) {
      local_b0 = (Variant *)&local_58;
      local_70 = 0;
      local_68 = "project.godot";
      local_60 = 0xd;
      String::parse_latin1((StrRange *)&local_70);
      String::path_join(local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      cVar4 = FileAccess::exists(local_98);
      if (cVar4 == '\0') break;
      operator+((char *)&local_70,(String *)"Editing project: ");
      Variant::Variant(local_b0,(String *)&local_70);
      stringify_variants((Variant *)&local_68);
      __print_line((String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_90 = (undefined1 (*) [16])0x0;
      lVar7 = Main::get_forwardable_cli_arguments(0);
      pCVar10 = *(CowData **)(lVar7 + 8);
      if ((pCVar10 != (CowData *)0x0) &&
         (pCVar1 = pCVar10 + *(long *)(pCVar10 + -8) * 8, pCVar1 != pCVar10)) {
        if (local_90 == (undefined1 (*) [16])0x0) {
          local_90 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)local_90[1] = 0;
          *local_90 = (undefined1  [16])0x0;
        }
        do {
          while( true ) {
            pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
            if (*(long *)pCVar10 != 0) {
              CowData<char32_t>::_ref(pCVar8,pCVar10);
            }
            lVar7 = *(long *)(*local_90 + 8);
            *(undefined1 (**) [16])(pCVar8 + 0x18) = local_90;
            *(undefined8 *)(pCVar8 + 8) = 0;
            *(long *)(pCVar8 + 0x10) = lVar7;
            if (lVar7 != 0) {
              *(CowData<char32_t> **)(lVar7 + 8) = pCVar8;
            }
            lVar7 = *(long *)*local_90;
            *(CowData<char32_t> **)(*local_90 + 8) = pCVar8;
            if (lVar7 != 0) break;
            pCVar10 = pCVar10 + 8;
            *(int *)local_90[1] = *(int *)local_90[1] + 1;
            *(CowData<char32_t> **)*local_90 = pCVar8;
            if (pCVar1 == pCVar10) goto LAB_00102d85;
          }
          pCVar10 = pCVar10 + 8;
          *(int *)local_90[1] = *(int *)local_90[1] + 1;
        } while (pCVar1 != pCVar10);
      }
LAB_00102d85:
      local_70 = 0;
      local_68 = "--path";
      local_60 = 6;
      String::parse_latin1((StrRange *)&local_70);
      if (local_90 == (undefined1 (*) [16])0x0) {
        local_90 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_90[1] = 0;
        *local_90 = (undefined1  [16])0x0;
      }
      pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
      if (local_70 != 0) {
        CowData<char32_t>::_ref(pCVar8,(CowData *)&local_70);
      }
      lVar7 = *(long *)(*local_90 + 8);
      *(undefined1 (**) [16])(pCVar8 + 0x18) = local_90;
      *(undefined8 *)(pCVar8 + 8) = 0;
      *(long *)(pCVar8 + 0x10) = lVar7;
      if (lVar7 != 0) {
        *(CowData<char32_t> **)(lVar7 + 8) = pCVar8;
      }
      lVar7 = *(long *)*local_90;
      *(CowData<char32_t> **)(*local_90 + 8) = pCVar8;
      if (lVar7 == 0) {
        *(CowData<char32_t> **)*local_90 = pCVar8;
      }
      *(int *)local_90[1] = *(int *)local_90[1] + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if (local_90 == (undefined1 (*) [16])0x0) {
        local_90 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_90[1] = 0;
        *local_90 = (undefined1  [16])0x0;
      }
      pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
      if (*(long *)pCVar11 != 0) {
        CowData<char32_t>::_ref(pCVar8,pCVar11);
      }
      lVar7 = *(long *)(*local_90 + 8);
      *(undefined1 (**) [16])(pCVar8 + 0x18) = local_90;
      *(undefined8 *)(pCVar8 + 8) = 0;
      *(long *)(pCVar8 + 0x10) = lVar7;
      if (lVar7 != 0) {
        *(CowData<char32_t> **)(lVar7 + 8) = pCVar8;
      }
      lVar7 = *(long *)*local_90;
      *(CowData<char32_t> **)(*local_90 + 8) = pCVar8;
      if (lVar7 == 0) {
        *(CowData<char32_t> **)*local_90 = pCVar8;
      }
      *(int *)local_90[1] = *(int *)local_90[1] + 1;
      local_70 = 0;
      local_68 = "--editor";
      local_60 = 8;
      String::parse_latin1((StrRange *)&local_70);
      if (local_90 == (undefined1 (*) [16])0x0) {
        local_90 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_90[1] = 0;
        *local_90 = (undefined1  [16])0x0;
      }
      pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
      if (local_70 != 0) {
        CowData<char32_t>::_ref(pCVar8,(CowData *)&local_70);
      }
      lVar7 = *(long *)(*local_90 + 8);
      *(undefined1 (**) [16])(pCVar8 + 0x18) = local_90;
      *(undefined8 *)(pCVar8 + 8) = 0;
      *(long *)(pCVar8 + 0x10) = lVar7;
      if (lVar7 != 0) {
        *(CowData<char32_t> **)(lVar7 + 8) = pCVar8;
      }
      lVar7 = *(long *)*local_90;
      *(CowData<char32_t> **)(*local_90 + 8) = pCVar8;
      if (lVar7 == 0) {
        *(CowData<char32_t> **)*local_90 = pCVar8;
      }
      *(int *)local_90[1] = *(int *)local_90[1] + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if (this[0xc98] != (ProjectManager)0x0) {
        local_70 = 0;
        local_68 = "--recovery-mode";
        local_60 = 0xf;
        String::parse_latin1((StrRange *)&local_70);
        List<String,DefaultAllocator>::push_back
                  ((List<String,DefaultAllocator> *)&local_90,(String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      local_b0 = (Variant *)&local_58;
      plVar9 = (long *)OS::get_singleton();
      lVar7 = *plVar9;
      if (*(code **)(lVar7 + 0x120) == OS::create_instance) {
        pcVar3 = *(code **)(lVar7 + 0x118);
        (**(code **)(lVar7 + 0x100))((Variant *)&local_68,plVar9);
        iVar5 = (*pcVar3)(plVar9,(Variant *)&local_68,(List<String,DefaultAllocator> *)&local_90,0,0
                         );
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      else {
        iVar5 = (**(code **)(lVar7 + 0x120))(plVar9,(List<String,DefaultAllocator> *)&local_90,0);
      }
      if (iVar5 != 0) {
        CanvasItem::hide();
        local_70 = 0;
        local_58 = 0;
        if (*(long *)pCVar11 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar11);
        }
        local_80 = 0;
        String::parse_latin1((String *)&local_80,"");
        local_88 = 0;
        String::parse_latin1
                  ((String *)&local_88,"Can\'t open project at \'%s\'.\nFailed to start the editor."
                  );
        TTR((String *)&local_78,(String *)&local_88);
        vformat<String>((Variant *)&local_68,(String *)&local_78,(StrRange *)&local_70);
        _show_error(this,(String *)&local_68,(Vector2 *)local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        local_70 = 0;
        if (*(long *)pCVar11 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar11);
        }
        local_78 = 0;
        String::parse_latin1
                  ((String *)&local_78,
                   "Failed to start an editor instance for the project at \'%s\', error code %d.");
        vformat<String,Error>((Variant *)&local_68,(String *)&local_78,(StrRange *)&local_70,iVar5);
        _err_print_error("_open_selected_projects","editor/project_manager.cpp",0x203,
                         (Variant *)&local_68,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_90);
        goto LAB_0010335e;
      }
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if (iVar2 <= local_a0) goto LAB_00102b38;
      local_a0 = local_a0 + 1;
      pCVar11 = pCVar11 + 8;
    }
    CanvasItem::hide();
    local_70 = 0;
    local_58 = 0;
    if (*(long *)pCVar11 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar11);
    }
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Can\'t open project at \'%s\'.\nProject file doesn\'t exist or is inaccessible.");
    TTR((String *)&local_78,(String *)&local_88);
    vformat<String>((Variant *)&local_68,(String *)&local_78,(StrRange *)&local_70);
    _show_error(this,(String *)&local_68,(Vector2 *)local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010335e:
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectManager::_restart_confirmed() */

void __thiscall ProjectManager::_restart_confirmed(ProjectManager *this)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  CowData<char32_t> *this_00;
  CowData *pCVar5;
  long in_FS_OFFSET;
  undefined1 (*local_58) [16];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)OS::get_singleton();
  if (*(code **)(*plVar4 + 0x1b0) == OS::get_cmdline_args) {
    local_58 = (undefined1 (*) [16])0x0;
    if (((long *)plVar4[2] != (long *)0x0) &&
       (pCVar5 = *(CowData **)plVar4[2], pCVar5 != (CowData *)0x0)) {
      local_58 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_58[1] = 0;
      *local_58 = (undefined1  [16])0x0;
      do {
        while( true ) {
          this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
          if (*(long *)pCVar5 != 0) {
            CowData<char32_t>::_ref(this_00,pCVar5);
          }
          lVar1 = *(long *)(*local_58 + 8);
          *(undefined8 *)(this_00 + 8) = 0;
          *(undefined1 (**) [16])(this_00 + 0x18) = local_58;
          *(long *)(this_00 + 0x10) = lVar1;
          if (lVar1 != 0) {
            *(CowData<char32_t> **)(lVar1 + 8) = this_00;
          }
          lVar1 = *(long *)*local_58;
          *(CowData<char32_t> **)(*local_58 + 8) = this_00;
          if (lVar1 != 0) break;
          pCVar5 = *(CowData **)(pCVar5 + 8);
          *(int *)local_58[1] = *(int *)local_58[1] + 1;
          *(CowData<char32_t> **)*local_58 = this_00;
          if (pCVar5 == (CowData *)0x0) goto LAB_001034c8;
        }
        pCVar5 = *(CowData **)(pCVar5 + 8);
        *(int *)local_58[1] = *(int *)local_58[1] + 1;
      } while (pCVar5 != (CowData *)0x0);
    }
  }
  else {
    (**(code **)(*plVar4 + 0x1b0))(&local_58);
  }
LAB_001034c8:
  plVar4 = (long *)OS::get_singleton();
  lVar1 = *plVar4;
  if (*(code **)(lVar1 + 0x120) == OS::create_instance) {
    pcVar2 = *(code **)(lVar1 + 0x118);
    (**(code **)(lVar1 + 0x100))(local_50,plVar4);
    iVar3 = (*pcVar2)(plVar4,local_50,&local_58,0,0);
    CowData<char32_t>::_unref(local_50);
  }
  else {
    iVar3 = (**(code **)(lVar1 + 0x120))(plVar4,&local_58,0);
  }
  if (iVar3 == 0) {
    local_48 = _LC5;
    uStack_40 = _UNK_00126738;
    CanvasItem::set_modulate((Color *)this);
    lVar1 = *(long *)(this + 0x240);
    if (lVar1 == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    SceneTree::quit((int)lVar1);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_58);
  }
  else {
    _err_print_error("_restart_confirmed","editor/project_manager.cpp",0x18e,
                     "Condition \"err\" is true.",0,0);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_58);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_set_main_view_icon(ProjectManager::MainViewTab, Ref<Texture2D> const&) */

void __thiscall ProjectManager::_set_main_view_icon(ProjectManager *this,uint param_2,long *param_3)

{
  ulong uVar1;
  Ref *pRVar2;
  Callable *pCVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  uint local_6c [3];
  Callable *local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c[0] = param_2;
  if (param_2 < 2) {
    if ((*(long *)(this + 0xa98) != 0) && (*(int *)(this + 0xabc) != 0)) {
      uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xab8) * 8);
      uVar13 = (param_2 * -0x7a143595 ^ param_2 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar20 = uVar13 ^ uVar13 >> 0x10;
      if (uVar13 == uVar13 >> 0x10) {
        uVar20 = 1;
        uVar16 = uVar1;
      }
      else {
        uVar16 = uVar20 * uVar1;
      }
      uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab8) * 4));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar18;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar16;
      lVar17 = SUB168(auVar4 * auVar8,8);
      uVar13 = *(uint *)(*(long *)(this + 0xaa0) + lVar17 * 4);
      iVar15 = SUB164(auVar4 * auVar8,8);
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          if ((uVar13 == uVar20) &&
             (param_2 == *(uint *)(*(long *)(*(long *)(this + 0xa98) + lVar17 * 8) + 0x10))) {
            puVar14 = (undefined8 *)
                      HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
                      ::operator[]((HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
                                    *)(this + 0xa90),(MainViewTab *)local_6c);
            pRVar2 = (Ref *)*puVar14;
            Button::get_button_icon();
            pCVar3 = local_60;
            if (local_60 != (Callable *)0x0) {
              create_custom_callable_function_pointer<Control>
                        ((Control *)local_58,(char *)pRVar2,
                         (_func_void *)"&Control::update_minimum_size");
              Resource::disconnect_changed(pCVar3);
              Callable::~Callable((Callable *)local_58);
            }
            if (*param_3 == 0) {
              local_58[0] = 0;
              Button::set_button_icon(pRVar2);
              Ref<Texture2D>::unref((Ref<Texture2D> *)local_58);
            }
            else {
              Button::set_button_icon(pRVar2);
              pCVar3 = (Callable *)*param_3;
              create_custom_callable_function_pointer<Control>
                        ((Control *)local_58,(char *)pRVar2,
                         (_func_void *)"&Control::update_minimum_size");
              Resource::connect_changed(pCVar3,(uint)(Control *)local_58);
              Callable::~Callable((Callable *)local_58);
            }
            if (local_60 != (Callable *)0x0) {
              cVar12 = RefCounted::unreference();
              if (cVar12 != '\0') {
                cVar12 = predelete_handler((Object *)local_60);
                if (cVar12 != '\0') {
                  (**(code **)(*(long *)local_60 + 0x140))(local_60);
                  Memory::free_static(local_60,false);
                }
              }
            }
            goto LAB_001037dc;
          }
          uVar19 = uVar19 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (iVar15 + 1) * uVar1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar18;
          lVar17 = SUB168(auVar5 * auVar9,8);
          uVar13 = *(uint *)(*(long *)(this + 0xaa0) + lVar17 * 4);
          iVar15 = SUB164(auVar5 * auVar9,8);
        } while ((uVar13 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar13 * uVar1, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(this + 0xab8) * 4) + iVar15) -
                               SUB164(auVar6 * auVar10,8)) * uVar1, auVar11._8_8_ = 0,
                auVar11._0_8_ = uVar18, uVar19 <= SUB164(auVar7 * auVar11,8)));
      }
    }
    _err_print_error("_set_main_view_icon","editor/project_manager.cpp",0x138,
                     "Condition \"!main_view_toggle_map.has(p_id)\" is true.",0,0);
  }
  else {
    _err_print_index_error
              ("_set_main_view_icon","editor/project_manager.cpp",0x137,(ulong)param_2,2,"p_id",
               "MAIN_VIEW_MAX","",false,false);
  }
LAB_001037dc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_add_main_view(ProjectManager::MainViewTab, String const&, Ref<Texture2D> const&,
   Control*) */

Button * __thiscall
ProjectManager::_add_main_view
          (ProjectManager *this,uint param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  undefined1 auVar2 [16];
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
  uint uVar18;
  Button *this_00;
  undefined8 *puVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  long in_FS_OFFSET;
  ulong uVar26;
  uint local_ac;
  ProjectManager local_a8 [16];
  long local_98 [2];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = param_2;
  if (param_2 < 2) {
    if ((*(long *)(this + 0xa68) != 0) && (*(int *)(this + 0xa8c) != 0)) {
      uVar26 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa88) * 8);
      uVar18 = (param_2 * -0x7a143595 ^ param_2 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar25 = uVar18 ^ uVar18 >> 0x10;
      if (uVar18 == uVar18 >> 0x10) {
        uVar25 = 1;
        uVar20 = uVar26;
      }
      else {
        uVar20 = uVar25 * uVar26;
      }
      uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa88) * 4));
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar24;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar20;
      lVar22 = SUB168(auVar2 * auVar10,8);
      uVar18 = *(uint *)(*(long *)(this + 0xa70) + lVar22 * 4);
      iVar21 = SUB164(auVar2 * auVar10,8);
      if (uVar18 != 0) {
        uVar23 = 0;
        do {
          if ((uVar25 == uVar18) &&
             (param_2 == *(uint *)(*(long *)(*(long *)(this + 0xa68) + lVar22 * 8) + 0x10))) {
            this_00 = (Button *)0x0;
            _err_print_error("_add_main_view","editor/project_manager.cpp",0x11f,
                             "Condition \"main_view_map.has(p_id)\" is true. Returning: nullptr",0,0
                             ,param_3);
            goto LAB_00103d57;
          }
          uVar23 = uVar23 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (iVar21 + 1) * uVar26;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar24;
          lVar22 = SUB168(auVar3 * auVar11,8);
          uVar18 = *(uint *)(*(long *)(this + 0xa70) + lVar22 * 4);
          iVar21 = SUB164(auVar3 * auVar11,8);
        } while ((uVar18 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = uVar18 * uVar26, auVar12._8_8_ = 0,
                auVar12._0_8_ = uVar24, auVar5._8_8_ = 0,
                auVar5._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(this + 0xa88) * 4) + iVar21) -
                               SUB164(auVar4 * auVar12,8)) * uVar26, auVar13._8_8_ = 0,
                auVar13._0_8_ = uVar24, uVar23 <= SUB164(auVar5 * auVar13,8)));
      }
    }
    if ((*(long *)(this + 0xa98) != 0) && (*(int *)(this + 0xabc) != 0)) {
      uVar26 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xab8) * 8);
      uVar18 = (param_2 * -0x7a143595 ^ param_2 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar25 = uVar18 ^ uVar18 >> 0x10;
      if (uVar18 == uVar18 >> 0x10) {
        uVar25 = 1;
        uVar20 = uVar26;
      }
      else {
        uVar20 = uVar25 * uVar26;
      }
      uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab8) * 4));
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar24;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar20;
      lVar22 = SUB168(auVar6 * auVar14,8);
      uVar18 = *(uint *)(*(long *)(this + 0xaa0) + lVar22 * 4);
      iVar21 = SUB164(auVar6 * auVar14,8);
      if (uVar18 != 0) {
        uVar23 = 0;
        do {
          if ((uVar25 == uVar18) &&
             (param_2 == *(uint *)(*(long *)(*(long *)(this + 0xa98) + lVar22 * 8) + 0x10))) {
            this_00 = (Button *)0x0;
            _err_print_error("_add_main_view","editor/project_manager.cpp",0x120,
                             "Condition \"main_view_toggle_map.has(p_id)\" is true. Returning: nullptr"
                             ,0,0,param_3);
            goto LAB_00103d57;
          }
          uVar23 = uVar23 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (iVar21 + 1) * uVar26;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar24;
          lVar22 = SUB168(auVar7 * auVar15,8);
          uVar18 = *(uint *)(*(long *)(this + 0xaa0) + lVar22 * 4);
          iVar21 = SUB164(auVar7 * auVar15,8);
        } while ((uVar18 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar18 * uVar26, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar24, auVar9._8_8_ = 0,
                auVar9._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(this + 0xab8) * 4) + iVar21) -
                               SUB164(auVar8 * auVar16,8)) * uVar26, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar24, uVar23 <= SUB164(auVar9 * auVar17,8)));
      }
    }
    this_00 = (Button *)operator_new(0xc10,"");
    local_98[0] = 0;
    Button::Button(this_00,(String *)local_98);
    postinitialize_handler((Object *)this_00);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    Button::set_flat(SUB81(this_00,0));
    StringName::StringName((StringName *)local_98,"MainScreenButton",false);
    Control::set_theme_type_variation((StringName *)this_00);
    if ((StringName::configured != '\0') && (local_98[0] != 0)) {
      StringName::unref();
    }
    BaseButton::set_toggle_mode(SUB81(this_00,0));
    BaseButton::set_button_group((Ref *)this_00);
    Button::set_text((String *)this_00);
    pcVar1 = *(code **)(*(long *)this_00 + 0x108);
    create_custom_callable_function_pointer<ProjectManager,int>
              (local_a8,(char *)this,(_func_void_int *)"&ProjectManager::_select_main_view");
    Variant::Variant((Variant *)local_78,param_2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88 = (Variant *)local_78;
    Callable::bindp((Variant **)local_98,(int)local_a8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar26 = (ulong)param_2;
    (*pcVar1)(this_00,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
    Callable::~Callable((Callable *)local_98);
    Callable::~Callable((Callable *)local_a8);
    Node::add_child(*(undefined8 *)(this + 0xa48),this_00,0,0);
    puVar19 = (undefined8 *)
              HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
              ::operator[]((HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
                            *)(this + 0xa90),(MainViewTab *)&local_ac);
    *puVar19 = this_00;
    _set_main_view_icon(this,uVar26 & 0xffffffff,param_4);
    CanvasItem::set_visible(SUB81(param_5,0));
    Node::add_child(*(undefined8 *)(this + 0xac0),param_5,0,0);
    puVar19 = (undefined8 *)
              HashMap<ProjectManager::MainViewTab,Control*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Control*>>>
              ::operator[]((HashMap<ProjectManager::MainViewTab,Control*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Control*>>>
                            *)(this + 0xa60),(MainViewTab *)&local_ac);
    *puVar19 = param_5;
  }
  else {
    this_00 = (Button *)0x0;
    _err_print_index_error
              ("_add_main_view","editor/project_manager.cpp",0x11e,(ulong)param_2,2,"p_id",
               "MAIN_VIEW_MAX","",false,false);
  }
LAB_00103d57:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_file_dialog_get_icon(String const&) */

String * ProjectManager::_file_dialog_get_icon(String *param_1)

{
  HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
  *this;
  char cVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  cVar1 = String::operator==((String *)&local_48,"godot");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_50 = 0;
  this = (HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
          *)(singleton + 0x9c8);
  if (cVar1 == '\0') {
    local_40 = 6;
    local_48 = "Object";
  }
  else {
    local_40 = 0xf;
    local_48 = "GodotMonochrome";
  }
  String::parse_latin1((StrRange *)&local_50);
  plVar2 = (long *)HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
                   ::operator[](this,(String *)&local_50);
  *(undefined8 *)param_1 = 0;
  if (*plVar2 != 0) {
    *(long *)param_1 = *plVar2;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)param_1 = 0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_file_dialog_get_thumbnail(String const&) */

String * ProjectManager::_file_dialog_get_thumbnail(String *param_1)

{
  HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
  *this;
  char cVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  cVar1 = String::operator==((String *)&local_48,"godot");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (cVar1 == '\0') {
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_50 = 0;
    local_40 = 9;
    this = (HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
            *)(singleton + 0x9c8);
    local_48 = "GodotFile";
    String::parse_latin1((StrRange *)&local_50);
    plVar2 = (long *)HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
                     ::operator[](this,(String *)&local_50);
    *(undefined8 *)param_1 = 0;
    if (*plVar2 != 0) {
      *(long *)param_1 = *plVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_1 = 0;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_build_icon_type_cache(Ref<Theme>) */

void __thiscall ProjectManager::_build_icon_type_cache(ProjectManager *this,undefined8 *param_2)

{
  long *plVar1;
  char *__s;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long *local_70;
  long local_68;
  Object *local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((StringName *)*param_2 != (StringName *)0x0) {
    local_70 = (long *)0x0;
    Theme::get_icon_list((StringName *)*param_2,(List *)(EditorStringNames::singleton + 0x10));
    if ((local_70 != (long *)0x0) && (plVar6 = (long *)*local_70, plVar6 != (long *)0x0)) {
      do {
        (**(code **)(*(long *)*param_2 + 0x1c8))
                  (&local_60,(long *)*param_2,plVar6,EditorStringNames::singleton + 0x10);
        lVar3 = *plVar6;
        if (lVar3 == 0) {
          local_68 = 0;
        }
        else {
          __s = *(char **)(lVar3 + 8);
          local_68 = 0;
          if (__s == (char *)0x0) {
            if (*(long *)(lVar3 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar3 + 0x10));
            }
          }
          else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange *)&local_68);
          }
        }
        puVar5 = (undefined8 *)
                 HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
                 ::operator[]((HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
                               *)(this + 0x9c8),(String *)&local_68);
        pOVar2 = (Object *)*puVar5;
        if (local_60 != pOVar2) {
          *puVar5 = local_60;
          if (local_60 != (Object *)0x0) {
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              *puVar5 = 0;
            }
          }
          if (pOVar2 != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
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
        if (local_60 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          pOVar2 = local_60;
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_60);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != (long *)0x0);
    }
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::~ProjectManager() */

void __thiscall ProjectManager::~ProjectManager(ProjectManager *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  Object *pOVar5;
  char cVar6;
  long lVar7;
  void *pvVar8;
  
  *(undefined ***)this = &PTR__initialize_classv_00125868;
  singleton = 0;
  lVar7 = EditorSettings::get_singleton();
  if (lVar7 != 0) {
    EditorSettings::destroy();
  }
  EditorThemeManager::finalize();
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xc90));
  CowData<String>::_unref((CowData<String> *)(this + 0xc30));
  CowData<String>::_unref((CowData<String> *)(this + 0xc20));
  pvVar8 = *(void **)(this + 0xbf0);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0xc14) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc10) * 4) != 0) {
        memset(*(void **)(this + 0xc08),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc10) * 4) << 2);
        if (*(int *)(this + 0xc14) == 0) goto LAB_00104620;
      }
      lVar7 = 0;
      do {
        plVar2 = (long *)((long)pvVar8 + lVar7 * 8);
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
          pvVar8 = *(void **)(this + 0xbf0);
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0xc14));
      *(undefined4 *)(this + 0xc14) = 0;
      if (pvVar8 == (void *)0x0) goto LAB_001043cf;
    }
LAB_00104620:
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0xc00),false);
    Memory::free_static(*(void **)(this + 0xbf8),false);
    Memory::free_static(*(void **)(this + 0xc08),false);
  }
LAB_001043cf:
  if (*(long *)(this + 0xac8) != 0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      pOVar5 = *(Object **)(this + 0xac8);
      cVar6 = predelete_handler(pOVar5);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pvVar8 = *(void **)(this + 0xa98);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0xabc) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab8) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0xabc) = 0;
        *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xaa0) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0xaa0) + lVar7) = 0;
            Memory::free_static(*(void **)((long)pvVar8 + lVar7 * 2),false);
            pvVar8 = *(void **)(this + 0xa98);
            *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar3 << 2 != lVar7);
        *(undefined4 *)(this + 0xabc) = 0;
        *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00104489;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0xaa0),false);
  }
LAB_00104489:
  pvVar8 = *(void **)(this + 0xa68);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0xa8c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa88) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0xa8c) = 0;
        *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa70) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0xa70) + lVar7) = 0;
            Memory::free_static(*(void **)((long)pvVar8 + lVar7 * 2),false);
            pvVar8 = *(void **)(this + 0xa68);
            *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar3 << 2 != lVar7);
        *(undefined4 *)(this + 0xa8c) = 0;
        *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00104527;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0xa70),false);
  }
LAB_00104527:
  if (*(long *)(this + 0x9f8) != 0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      pOVar5 = *(Object **)(this + 0x9f8);
      cVar6 = predelete_handler(pOVar5);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pvVar8 = *(void **)(this + 0x9d0);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x9f4) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x9f0) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x9f4) = 0;
        *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x9d8) + lVar7) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x9d8) + lVar7) = 0;
            if (*(long *)((long)pvVar8 + 0x18) != 0) {
              cVar6 = RefCounted::unreference();
              if (cVar6 != '\0') {
                pOVar5 = *(Object **)((long)pvVar8 + 0x18);
                cVar6 = predelete_handler(pOVar5);
                if (cVar6 != '\0') {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x10));
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 0x9d0);
            *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar3 << 2 != lVar7);
        *(undefined4 *)(this + 0x9f4) = 0;
        *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00104600;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0x9d8),false);
  }
LAB_00104600:
  Control::~Control((Control *)this);
  return;
}



/* ProjectManager::~ProjectManager() */

void __thiscall ProjectManager::~ProjectManager(ProjectManager *this)

{
  ~ProjectManager(this);
  operator_delete(this,0xca0);
  return;
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



/* ProjectManager::_set_new_tag_name(String) */

void __thiscall ProjectManager::_set_new_tag_name(ProjectManager *this,String *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  String *pSVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(this + 0xc60) + 0xd88),0));
  if ((*(long *)param_2 == 0) || (*(uint *)(*(long *)param_2 + -8) < 2)) {
    local_60 = 0;
    pSVar4 = *(String **)(this + 0xc70);
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Tag name can\'t be empty.";
    local_50 = 0x18;
LAB_001049e9:
    local_68 = 0;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Label::set_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    iVar2 = String::find_char((wchar32)param_2,0x20);
    if (iVar2 != -1) {
      local_60 = 0;
      pSVar4 = *(String **)(this + 0xc70);
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "Tag name can\'t contain spaces.";
      local_50 = 0x1e;
      goto LAB_001049e9;
    }
    CowData<String>::_copy_on_write((CowData<String> *)(this + 0xc30));
    lVar3 = *(long *)(this + 0xc30);
    CowData<String>::_copy_on_write((CowData<String> *)(this + 0xc30));
    lVar5 = *(long *)(this + 0xc30);
    if (lVar5 != 0) {
      lVar5 = lVar5 + *(long *)(lVar5 + -8) * 8;
    }
    for (; lVar3 != lVar5; lVar3 = lVar3 + 8) {
      iVar2 = String::find(param_2,(int)lVar3);
      if (iVar2 != -1) {
        pSVar4 = *(String **)(this + 0xc70);
        local_68 = 0;
        String::parse_latin1((String *)&local_68," ");
        String::join((CowData<char32_t> *)&local_60);
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"");
        local_80 = 0;
        String::parse_latin1((String *)&local_80,"These characters are not allowed in tags: %s.");
        TTR(local_70,(String *)&local_80);
        vformat<String>((CowData<char32_t> *)&local_58,local_70,(CowData<char32_t> *)&local_60);
        Label::set_text(pSVar4);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        goto LAB_00104a2a;
      }
    }
    String::to_lower();
    cVar1 = String::operator!=((String *)&local_58,param_2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (cVar1 == '\0') {
      pSVar4 = *(String **)(this + 0xc70);
      local_58 = (char *)0x0;
      String::parse_latin1((String *)&local_58,"");
      Label::set_text(pSVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(this + 0xc60) + 0xd88),0));
        return;
      }
      goto LAB_00104d30;
    }
    pSVar4 = *(String **)(this + 0xc70);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Tag name must be lowercase.");
    TTR((String *)&local_58,(String *)&local_68);
    Label::set_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
LAB_00104a2a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104d30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectManager::ProjectManager(bool) */

void __thiscall ProjectManager::ProjectManager(ProjectManager *this,bool param_1)

{
  CowData<char32_t> *this_00;
  code *pcVar1;
  Ref *pRVar2;
  StringName *pSVar3;
  Vector2 *pVVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  CallableCustom *pCVar12;
  Object *pOVar13;
  Panel *this_01;
  MarginContainer *this_02;
  BoxContainer *pBVar14;
  Button *pBVar15;
  ButtonGroup *this_03;
  PanelContainer *pPVar16;
  Label *pLVar17;
  LineEdit *pLVar18;
  OptionButton *this_04;
  ProjectList *this_05;
  BoxContainer *pBVar19;
  RichTextLabel *this_06;
  StyleBox *this_07;
  FlowContainer *pFVar20;
  HSeparator *pHVar21;
  VSeparator *this_08;
  PopupMenu *this_09;
  Control *pCVar22;
  EditorAssetLibrary *this_10;
  EngineUpdateLabel *this_11;
  Object *pOVar23;
  QuickSettingsDialog *this_12;
  EditorFileDialog *this_13;
  ConfirmationDialog *pCVar24;
  undefined8 uVar25;
  ProjectDialog *this_14;
  AcceptDialog *this_15;
  EditorAbout *this_16;
  String *pSVar26;
  bool bVar27;
  long lVar28;
  long in_FS_OFFSET;
  float fVar29;
  undefined4 extraout_XMM0_Db;
  long local_d8;
  long local_d0;
  Object *local_c8;
  Object *local_c0;
  Object *local_b8 [2];
  Object *local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  String *local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined4 *)(this + 0xa58) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00125868;
  uVar25 = _LC129;
  *(undefined1 (*) [16])(this + 0x9d0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x9f0) = uVar25;
  *(undefined8 *)(this + 0xa88) = uVar25;
  *(undefined8 *)(this + 0xab8) = uVar25;
  *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xb20) = 0;
  this[0xb28] = (ProjectManager)0x0;
  *(undefined1 (*) [16])(this + 0xb90) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xc10) = uVar25;
  *(undefined8 *)(this + 0xc20) = 0;
  *(undefined1 (*) [16])(this + 0xba0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc00) = (undefined1  [16])0x0;
  local_78 = 0;
  String::parse_latin1((String *)&local_78,"/");
  uStack_70 = 0;
  String::parse_latin1((String *)&uStack_70,"\\");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"-");
  *(undefined8 *)(this + 0xc30) = 0;
  iVar9 = CowData<String>::resize<false>((CowData<String> *)(this + 0xc30),3);
  if (iVar9 == 0) {
    lVar11 = 0;
    pSVar26 = (String *)&local_78;
    do {
      if (*(long *)(this + 0xc30) == 0) {
        lVar28 = 0;
LAB_001051ad:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar28,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar28 = *(long *)(*(long *)(this + 0xc30) + -8);
        if (lVar28 <= lVar11) goto LAB_001051ad;
        CowData<String>::_copy_on_write((CowData<String> *)(this + 0xc30));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 0xc30) + lVar11 * 8);
        if (*(long *)this_00 != *(long *)pSVar26) {
          CowData<char32_t>::_ref(this_00,(CowData *)pSVar26);
        }
      }
      lVar11 = lVar11 + 1;
      pSVar26 = (String *)((CowData *)pSVar26 + 8);
    } while (lVar11 != 3);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  this[0xc98] = (ProjectManager)0x0;
  *(undefined1 (*) [16])(this + 0xc38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc88) = (undefined1  [16])0x0;
  singleton = this;
  plVar10 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar10 + 0x5a0))(plVar10,0);
  plVar10 = (long *)PhysicsServer3D::get_singleton();
  (**(code **)(*plVar10 + 0x6f0))(plVar10,0);
  plVar10 = (long *)PhysicsServer2D::get_singleton();
  (**(code **)(*plVar10 + 0x560))(plVar10,0);
  lVar11 = EditorSettings::get_singleton();
  if (lVar11 == 0) {
    EditorSettings::create();
  }
  bVar6 = (bool)EditorSettings::get_singleton();
  EditorSettings::set_optimize_save(bVar6);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"input/buffering/agile_event_flushing");
  _EDITOR_GET((String *)&local_78);
  Variant::operator_cast_to_bool((Variant *)&local_78);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"input/buffering/use_accumulated_input");
  _EDITOR_GET((String *)&local_78);
  Variant::operator_cast_to_bool((Variant *)&local_78);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  bVar6 = (bool)Input::get_singleton();
  Input::set_agile_input_event_flushing(bVar6);
  bVar6 = (bool)Input::get_singleton();
  Input::set_use_accumulated_input(bVar6);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"interface/editor/display_scale");
  _EDITOR_GET((String *)&local_78);
  iVar9 = Variant::operator_cast_to_int((Variant *)&local_78);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  fVar5 = _LC141;
  fVar29 = _LC137;
  switch(iVar9) {
  case 0:
    EditorSettings::get_singleton();
    fVar29 = (float)EditorSettings::get_auto_display_scale();
    goto LAB_0010a0ad;
  case 1:
    fVar29 = _LC28;
LAB_0010a0ad:
    EditorScale::set_scale(fVar29);
    fVar29 = _LC137;
    fVar5 = _LC141;
    break;
  case 2:
    EditorScale::set_scale(_LC137);
    fVar5 = _LC141;
    break;
  case 3:
    fVar29 = _LC138;
    goto LAB_001051f0;
  case 4:
    EditorScale::set_scale(_LC139);
    fVar29 = _LC137;
    fVar5 = _LC141;
    break;
  case 5:
    fVar29 = _LC140;
LAB_001051f0:
    EditorScale::set_scale(fVar29);
    fVar29 = _LC137;
    fVar5 = _LC141;
    break;
  case 6:
    EditorScale::set_scale(_LC141);
    fVar29 = _LC137;
    break;
  default:
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_a8,"interface/editor/custom_display_scale");
    _EDITOR_GET((String *)&local_78);
    fVar29 = Variant::operator_cast_to_float((Variant *)&local_78);
    EditorScale::set_scale(fVar29);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    fVar29 = _LC137;
    fVar5 = _LC141;
  }
  local_a8[0] = (Object *)0x0;
  EditorFileDialog::get_icon_func = _file_dialog_get_icon;
  EditorFileDialog::get_thumbnail_func = _file_dialog_get_thumbnail;
  String::parse_latin1((String *)local_a8,"filesystem/file_dialog/show_hidden_files");
  _EDITOR_GET((String *)&local_78);
  bVar6 = Variant::operator_cast_to_bool((Variant *)&local_78);
  EditorFileDialog::set_default_show_hidden_files(bVar6);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"filesystem/file_dialog/display_mode");
  _EDITOR_GET((String *)&local_78);
  iVar9 = Variant::operator_cast_to_int((Variant *)&local_78);
  EditorFileDialog::set_default_display_mode(iVar9);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"interface/editor/accept_dialog_cancel_ok_buttons");
  _EDITOR_GET((String *)&local_78);
  iVar9 = Variant::operator_cast_to_int((Variant *)&local_78);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (iVar9 != 0) {
    AcceptDialog::set_swap_cancel_ok(iVar9 == 2);
  }
  plVar10 = (long *)OS::get_singleton();
  (**(code **)(*plVar10 + 200))(plVar10,1);
  pSVar26 = *(String **)(SceneTree::singleton + 0x368);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Application");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Project Manager");
  TTR((String *)&local_c0,(String *)local_b8);
  local_c8 = (Object *)0x0;
  String::parse_latin1((String *)&local_c8," - ");
  operator+((char *)&local_d0,(String *)"Godot Engine");
  String::operator+((String *)&local_d8,(String *)&local_d0);
  Window::set_title(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(SceneTree::singleton + 0x368);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC27;
  *(undefined ***)pCVar12 = &PTR_hash_00125ea0;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar25 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar25;
  *(code **)(pCVar12 + 0x38) = _files_dropped;
  *(ProjectManager **)(pCVar12 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectManager::_files_dropped";
  Callable::Callable((Callable *)local_a8,pCVar12);
  StringName::StringName((StringName *)local_b8,"files_dropped",false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"interface/editor/ui_layout_direction");
  _EDITOR_GET((String *)&local_78);
  iVar9 = Variant::operator_cast_to_int((Variant *)&local_78);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Control::set_root_layout_direction(iVar9);
  Window::set_root_layout_direction(iVar9);
  EditorThemeManager::initialize();
  local_a8[0] = (Object *)0x0;
  EditorThemeManager::generate_theme((Ref *)local_b8);
  if (local_b8[0] == (Object *)0x0) {
    pOVar23 = *(Object **)(this + 0x9f8);
    if (pOVar23 != (Object *)0x0) {
      *(undefined8 *)(this + 0x9f8) = 0;
LAB_0010a52b:
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar23), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
        Memory::free_static(pOVar23,false);
      }
      goto LAB_00105615;
    }
  }
  else {
    pOVar13 = (Object *)__dynamic_cast(local_b8[0],&Object::typeinfo,&Theme::typeinfo,0);
    pOVar23 = *(Object **)(this + 0x9f8);
    if (pOVar23 != pOVar13) {
      *(Object **)(this + 0x9f8) = pOVar13;
      if ((pOVar13 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
        *(undefined8 *)(this + 0x9f8) = 0;
      }
      if (pOVar23 != (Object *)0x0) goto LAB_0010a52b;
LAB_00105615:
      if (local_b8[0] == (Object *)0x0) goto LAB_00105623;
    }
    cVar7 = RefCounted::unreference();
    pOVar23 = local_b8[0];
    if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_b8[0]), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
      Memory::free_static(pOVar23,false);
    }
  }
LAB_00105623:
  if (((local_a8[0] != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar23 = local_a8[0], cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_a8[0]), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  uVar25 = EditorStringNames::singleton;
  plVar10 = *(long **)(this + 0x9f8);
  pcVar1 = *(code **)(*plVar10 + 0x1e8);
  if ((ProjectManager(bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&ProjectManager(bool)::{lambda()#1}::operator()()::sname),
     iVar9 != 0)) {
    _scs_create((char *)&ProjectManager(bool)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&ProjectManager(bool)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&ProjectManager(bool)::{lambda()#1}::operator()()::sname);
  }
  (*pcVar1)(plVar10,&ProjectManager(bool)::{lambda()#1}::operator()()::sname,uVar25);
  DisplayServer::set_early_window_clear_color_override(1);
  Control::set_anchors_and_offsets_preset(this,0xf,0,0);
  pOVar23 = *(Object **)(this + 0x9f8);
  if ((pOVar23 == (Object *)0x0) ||
     (local_a8[0] = pOVar23, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
    local_a8[0] = (Object *)0x0;
    _build_icon_type_cache(this,(String *)local_a8);
  }
  else {
    _build_icon_type_cache(this);
    cVar7 = RefCounted::unreference();
    if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar23), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
      Memory::free_static(pOVar23,false);
    }
  }
  this_01 = (Panel *)operator_new(0x9d0,"");
  Panel::Panel(this_01);
  postinitialize_handler((Object *)this_01);
  *(Panel **)(this + 0xa08) = this_01;
  Node::add_child(this,this_01,0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa08),0xf,0,0);
  this_02 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(this_02);
  postinitialize_handler((Object *)this_02);
  *(MarginContainer **)(this + 0xa00) = this_02;
  Node::add_child(this,this_02,0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa00),0xf,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,true);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00125018;
  postinitialize_handler((Object *)pBVar14);
  *(BoxContainer **)(this + 0xa10) = pBVar14;
  Node::add_child(*(undefined8 *)(this + 0xa00),pBVar14,0,0);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"interface/editor/expand_to_title");
  _EDITOR_GET((String *)&local_78);
  cVar7 = Variant::operator_cast_to_bool((Variant *)&local_78);
  if ((bool)cVar7) {
    cVar7 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x14);
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pBVar14 = (BoxContainer *)operator_new(0xa20,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(code **)pBVar14 = Control::set_h_size_flags;
  *(undefined2 *)(pBVar14 + 0xa18) = 0;
  *(undefined8 *)(pBVar14 + 0xa10) = 0;
  postinitialize_handler((Object *)pBVar14);
  *(BoxContainer **)(this + 0xa18) = pBVar14;
  Node::add_child(*(undefined8 *)(this + 0xa10),pBVar14,0,0);
  if (cVar7 != '\0') {
    pCVar22 = (Control *)operator_new(0x9c8,"");
    Control::Control(pCVar22);
    postinitialize_handler((Object *)pCVar22);
    *(Control **)(this + 0xa20) = pCVar22;
    Control::set_mouse_filter(pCVar22,1);
    Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa20),0,0);
  }
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00124ca0;
  postinitialize_handler((Object *)pBVar14);
  BoxContainer::set_alignment(pBVar14,0);
  Control::set_h_size_flags(pBVar14,3);
  Control::set_stretch_ratio(fVar29);
  Node::add_child(*(undefined8 *)(this + 0xa18),pBVar14,0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xa40) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa40),0));
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xa40),0,0);
  plVar10 = *(long **)(this + 0xa40);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,(_func_void *)"&ProjectManager::_show_about");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  if (cVar7 != '\0') {
    pCVar22 = (Control *)operator_new(0x9c8,"");
    Control::Control(pCVar22);
    postinitialize_handler((Object *)pCVar22);
    *(Control **)(this + 0xa28) = pCVar22;
    Control::set_mouse_filter(pCVar22,1);
    Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa28),0,0);
  }
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00124ca0;
  postinitialize_handler((Object *)pBVar14);
  *(BoxContainer **)(this + 0xa48) = pBVar14;
  BoxContainer::set_alignment(pBVar14,1);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa48),3);
  Control::set_stretch_ratio(fVar5);
  Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa48),0,0);
  if (cVar7 != '\0') {
    pCVar22 = (Control *)operator_new(0x9c8,"");
    Control::Control(pCVar22);
    postinitialize_handler((Object *)pCVar22);
    *(Control **)(this + 0xa38) = pCVar22;
    Control::set_mouse_filter(pCVar22,1);
    Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa38),0,0);
  }
  this_03 = (ButtonGroup *)operator_new(0x270,"");
  ButtonGroup::ButtonGroup(this_03);
  postinitialize_handler((Object *)this_03);
  cVar8 = RefCounted::init_ref();
  if (cVar8 == '\0') {
    pOVar23 = *(Object **)(this + 0xac8);
    if (pOVar23 != (Object *)0x0) {
      *(undefined8 *)(this + 0xac8) = 0;
      cVar8 = RefCounted::unreference();
      if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar23), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
        Memory::free_static(pOVar23,false);
      }
    }
  }
  else {
    pOVar23 = *(Object **)(this + 0xac8);
    pOVar13 = pOVar23;
    if (this_03 != (ButtonGroup *)pOVar23) {
      *(ButtonGroup **)(this + 0xac8) = this_03;
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        *(undefined8 *)(this + 0xac8) = 0;
      }
      pOVar13 = (Object *)this_03;
      if (((pOVar23 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar23), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
        Memory::free_static(pOVar23,false);
      }
    }
    cVar8 = RefCounted::unreference();
    if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
  }
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00124ca0;
  postinitialize_handler((Object *)pBVar14);
  BoxContainer::set_alignment(pBVar14,2);
  Control::set_h_size_flags(pBVar14,3);
  Control::set_stretch_ratio(fVar29);
  Node::add_child(*(undefined8 *)(this + 0xa18),pBVar14,0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xa50) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa50),0));
  pSVar26 = *(String **)(this + 0xa50);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Settings");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xa50),0,0);
  plVar10 = *(long **)(this + 0xa50);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_show_quick_settings");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  if (cVar7 != '\0') {
    pCVar22 = (Control *)operator_new(0x9c8,"");
    Control::Control(pCVar22);
    postinitialize_handler((Object *)pCVar22);
    *(Control **)(this + 0xa30) = pCVar22;
    Control::set_mouse_filter(pCVar22,1);
    Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa30),0,0);
  }
  pPVar16 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar16);
  postinitialize_handler((Object *)pPVar16);
  *(PanelContainer **)(this + 0xac0) = pPVar16;
  Control::set_v_size_flags(pPVar16,3);
  Node::add_child(*(undefined8 *)(this + 0xa10),*(undefined8 *)(this + 0xac0),0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,true);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00125018;
  postinitialize_handler((Object *)pBVar14);
  *(BoxContainer **)(this + 0xad0) = pBVar14;
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"LocalProjectsTab");
  Node::set_name((String *)pBVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  uVar25 = *(undefined8 *)(this + 0xad0);
  local_a8[0] = (Object *)0x0;
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"");
  local_c0 = (Object *)0x0;
  String::parse_latin1((String *)&local_c0,"Projects");
  TTR((String *)&local_c8,(String *)&local_c0);
  _add_main_view(this,0,(String *)&local_c8,(String *)local_a8,uVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_a8);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00124ca0;
  postinitialize_handler((Object *)pBVar14);
  Control::set_h_size_flags(pBVar14,3);
  Node::add_child(*(undefined8 *)(this + 0xad0),pBVar14,0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb50) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb50);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Create");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pRVar2 = *(Ref **)(this + 0xb50);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"New Project");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"project_manager/new_project");
  ED_SHORTCUT((String *)&local_c0,(String *)local_b8,(String *)local_a8,0x100004e,0);
  BaseButton::set_shortcut(pRVar2);
  if (((local_c0 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_c0, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_c0), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xb50);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,(_func_void *)"&ProjectManager::_new_project");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xb50),0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb58) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb58);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Import");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pRVar2 = *(Ref **)(this + 0xb58);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Import Project");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"project_manager/import_project");
  ED_SHORTCUT((String *)&local_c0,(String *)local_b8,(String *)local_a8,0x1000049,0);
  BaseButton::set_shortcut(pRVar2);
  if (((local_c0 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_c0, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_c0), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xb58);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_import_project");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xb58),0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb60) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb60);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Scan");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pRVar2 = *(Ref **)(this + 0xb60);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Scan Projects");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"project_manager/scan_projects");
  ED_SHORTCUT((String *)&local_c0,(String *)local_b8,(String *)local_a8,0x1000053,0);
  BaseButton::set_shortcut(pRVar2);
  if (((local_c0 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_c0, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_c0), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xb60);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,(_func_void *)"&ProjectManager::_scan_projects"
            );
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xb60),0,0);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Loading, please wait...");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::Label(pLVar17,(String *)&local_c0);
  postinitialize_handler((Object *)pLVar17);
  *(Label **)(this + 0xb38) = pLVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb38),3);
  CanvasItem::hide();
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xb38),0,0);
  pLVar18 = (LineEdit *)operator_new(0xbb0,"");
  local_a8[0] = (Object *)0x0;
  LineEdit::LineEdit(pLVar18,(String *)local_a8);
  postinitialize_handler((Object *)pLVar18);
  *(LineEdit **)(this + 0xb30) = pLVar18;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  uVar25 = *(undefined8 *)(this + 0xb30);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Filter Projects");
  TTR((String *)&local_c0,(String *)local_b8);
  LineEdit::set_placeholder(uVar25,(String *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb30);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1
            ((String *)local_b8,
             "This field filters projects by name and last path component.\nTo filter projects by name and full path, the query must contain at least one `/` character."
            );
  TTR((String *)&local_c0,(String *)local_b8);
  Control::set_tooltip_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xb30),0));
  plVar10 = *(long **)(this + 0xb30);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager,String_const&>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void_String_ptr *)"&ProjectManager::_on_search_term_changed");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x270,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xb30);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager,String_const&>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void_String_ptr *)"&ProjectManager::_on_search_term_submitted");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x278,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb30),3);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xb30),0,0);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  Label::Label(pLVar17,(String *)local_a8);
  postinitialize_handler((Object *)pLVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Sort:");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::set_text((String *)pLVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,pLVar17,0,0);
  this_04 = (OptionButton *)operator_new(0xd00,"");
  local_a8[0] = (Object *)0x0;
  OptionButton::OptionButton(this_04,(String *)local_a8);
  postinitialize_handler((Object *)this_04);
  *(OptionButton **)(this + 0xb40) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb40),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb40),3);
  Control::set_stretch_ratio(_LC178);
  plVar10 = *(long **)(this + 0xb40);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager,int>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void_int *)"&ProjectManager::_on_order_option_changed");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x260,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xb40),0,0);
  pSVar26 = *(String **)(this + 0xb40);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Last Edited");
  TTR((String *)&local_c0,(String *)local_b8);
  iVar9 = (int)(String *)&local_c0;
  OptionButton::add_item(pSVar26,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb40);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Name");
  TTR((String *)&local_c0,(String *)local_b8);
  OptionButton::add_item(pSVar26,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb40);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Path");
  TTR((String *)&local_c0,(String *)local_b8);
  OptionButton::add_item(pSVar26,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb40);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Tags");
  TTR((String *)&local_c0,(String *)local_b8);
  OptionButton::add_item(pSVar26,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00124ca0;
  postinitialize_handler((Object *)pBVar14);
  Node::add_child(*(undefined8 *)(this + 0xad0),pBVar14,0,0);
  Control::set_v_size_flags(pBVar14,3);
  pPVar16 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar16);
  postinitialize_handler((Object *)pPVar16);
  *(PanelContainer **)(this + 0xb48) = pPVar16;
  Control::set_h_size_flags(pPVar16,3);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xb48),0,0);
  this_05 = (ProjectList *)operator_new(0xc90,"");
  ProjectList::ProjectList(this_05);
  postinitialize_handler((Object *)this_05);
  *(ProjectList **)(this + 0xb20) = this_05;
  ScrollContainer::set_horizontal_scroll_mode(this_05,0);
  Node::add_child(*(undefined8 *)(this + 0xb48),*(undefined8 *)(this + 0xb20),0,0);
  plVar10 = *(long **)(this + 0xb20);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_update_project_buttons");
  StringName::StringName((StringName *)local_b8,ProjectList::SIGNAL_LIST_CHANGED,false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xb20);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_update_list_placeholder");
  StringName::StringName((StringName *)local_b8,ProjectList::SIGNAL_LIST_CHANGED,false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xb20);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_update_project_buttons");
  StringName::StringName((StringName *)local_b8,ProjectList::SIGNAL_SELECTION_CHANGED,false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xb20);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_open_selected_projects_check_recovery_mode");
  StringName::StringName((StringName *)local_b8,ProjectList::SIGNAL_PROJECT_ASK_OPEN,false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  pBVar19 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar19,true);
  pBVar19[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar19 = &PTR__initialize_classv_00125018;
  postinitialize_handler((Object *)pBVar19);
  *(BoxContainer **)(this + 0xaf8) = pBVar19;
  Control::set_v_size_flags(pBVar19,4);
  pSVar3 = *(StringName **)(this + 0xaf8);
  EditorScale::get_scale();
  StringName::StringName((StringName *)local_a8,"separation",false);
  iVar9 = (int)(String *)local_a8;
  Control::add_theme_constant_override(pSVar3,iVar9);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xb48),*(undefined8 *)(this + 0xaf8),0,0);
  this_06 = (RichTextLabel *)operator_new(0xcf0,"");
  local_a8[0] = (Object *)0x0;
  RichTextLabel::RichTextLabel(this_06,(String *)local_a8);
  postinitialize_handler((Object *)this_06);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  RichTextLabel::set_use_bbcode(SUB81(this_06,0));
  RichTextLabel::set_fit_content(SUB81(this_06,0));
  Control::set_h_size_flags(this_06,3);
  this_07 = (StyleBox *)operator_new(0x2b0,"");
  StyleBox::StyleBox(this_07);
  *(undefined ***)this_07 = &PTR__initialize_classv_00124aa0;
  postinitialize_handler((Object *)this_07);
  local_a8[0] = (Object *)this_07;
  cVar8 = RefCounted::init_ref();
  if (cVar8 == '\0') {
    local_a8[0] = (Object *)0x0;
  }
  Control::add_theme_style_override
            ((StringName *)this_06,(Ref *)(CoreStringNames::singleton + 0xb8));
  if (((local_a8[0] != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_a8[0], cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_a8[0]), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"You don\'t have any projects yet.");
  TTR((String *)&local_d8,(String *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1
            ((String *)local_b8,
             "Get started by creating a new one,\nimporting one that exists, or by downloading a project template from the Asset Library!"
            );
  TTR((String *)&local_d0,(String *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_a8[0] = (Object *)0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_a8,(CowData *)&local_d0);
  }
  local_b8[0] = (Object *)0x0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)&local_d8);
  }
  local_c0 = (Object *)0x0;
  String::parse_latin1((String *)&local_c0,"[center][b]%s[/b] %s[/center]");
  vformat<String,String>
            ((String *)&local_c8,(String *)&local_c0,(String *)local_b8,(String *)local_a8);
  RichTextLabel::set_text((String *)this_06);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(*(undefined8 *)(this + 0xaf8),this_06,0,0);
  pFVar20 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(pFVar20,false);
  postinitialize_handler((Object *)pFVar20);
  FlowContainer::set_alignment(pFVar20,1);
  Node::add_child(*(undefined8 *)(this + 0xaf8),pFVar20,0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb00) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb00);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Create New Project");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar3 = *(StringName **)(this + 0xb00);
  StringName::StringName((StringName *)local_a8,"PanelBackgroundButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pFVar20,*(undefined8 *)(this + 0xb00),0,0);
  plVar10 = *(long **)(this + 0xb00);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,(_func_void *)"&ProjectManager::_new_project");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb08) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb08);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Import Existing Project");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar3 = *(StringName **)(this + 0xb08);
  StringName::StringName((StringName *)local_a8,"PanelBackgroundButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pFVar20,*(undefined8 *)(this + 0xb08),0,0);
  plVar10 = *(long **)(this + 0xb08);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_import_project");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb10) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb10);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Open Asset Library");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar3 = *(StringName **)(this + 0xb10);
  StringName::StringName((StringName *)local_a8,"PanelBackgroundButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pFVar20,*(undefined8 *)(this + 0xb10),0,0);
  plVar10 = *(long **)(this + 0xb10);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_open_asset_library_confirmed");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  Label::Label(pLVar17,(String *)local_a8);
  postinitialize_handler((Object *)pLVar17);
  *(Label **)(this + 0xb18) = pLVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xb18),1);
  pVVar4 = *(Vector2 **)(this + 0xb18);
  fVar29 = (float)EditorScale::get_scale();
  local_78 = CONCAT44(fVar29 * _LC196._4_4_,fVar29 * (float)_LC196);
  Control::set_custom_minimum_size(pVVar4);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xb18),2);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb18),3);
  pSVar26 = *(String **)(this + 0xb18);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1
            ((String *)local_b8,
             "Note: The Asset Library requires an online connection and involves sending data over the internet."
            );
  TTR((String *)&local_c0,(String *)local_b8);
  Label::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(*(undefined8 *)(this + 0xaf8),*(undefined8 *)(this + 0xb18),0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  pBVar19 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar19,true);
  pBVar19[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar19 = &PTR__initialize_classv_00125018;
  postinitialize_handler((Object *)pBVar19);
  local_78 = _LC198;
  Control::set_custom_minimum_size((Vector2 *)pBVar19);
  Node::add_child(pBVar14,pBVar19,0,0);
  pHVar21 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar21);
  postinitialize_handler((Object *)pHVar21);
  Node::add_child(pBVar19,pHVar21,0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00124ca0;
  postinitialize_handler((Object *)pBVar14);
  *(BoxContainer **)(this + 0xba0) = pBVar14;
  Control::set_anchors_preset(pBVar14,0xf,1);
  Node::add_child(pBVar19,*(undefined8 *)(this + 0xba0),0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb68) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb68);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Edit");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pRVar2 = *(Ref **)(this + 0xb68);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Edit Project");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"project_manager/edit_project");
  ED_SHORTCUT((String *)&local_c0,(String *)local_b8,(String *)local_a8,0x1000045,0);
  BaseButton::set_shortcut(pRVar2);
  if (((local_c0 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_c0, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_c0), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xb68);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_open_selected_projects_check_recovery_mode");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb68),3);
  Node::add_child(*(undefined8 *)(this + 0xba0),*(undefined8 *)(this + 0xb68),0,0);
  uVar25 = *(undefined8 *)(this + 0xba0);
  this_08 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_08);
  postinitialize_handler((Object *)this_08);
  Node::add_child(uVar25,this_08,0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb70) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Button::set_icon_alignment(*(undefined8 *)(this + 0xb70),1);
  plVar10 = *(long **)(this + 0xb70);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_open_options_popup");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(*(undefined8 *)(this + 0xba0),*(undefined8 *)(this + 0xb70),0,0);
  this_09 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_09);
  postinitialize_handler((Object *)this_09);
  *(PopupMenu **)(this + 0xba8) = this_09;
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Edit in recovery mode");
  TTR((String *)&local_c0,(String *)local_b8);
  PopupMenu::add_item(this_09,(String *)&local_c0,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xba8);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager,int>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void_int *)"&ProjectManager::_on_open_options_selected");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x240,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(*(undefined8 *)(this + 0xb70),*(undefined8 *)(this + 0xba8),0,0);
  pVVar4 = *(Vector2 **)(this + 0xba0);
  (**(code **)(**(long **)(this + 0xb68) + 0x300))();
  local_78 = CONCAT44(extraout_XMM0_Db,0x42f00000);
  Control::set_custom_minimum_size(pVVar4);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb78) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb78);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Run");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pRVar2 = *(Ref **)(this + 0xb78);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Run Project");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"project_manager/run_project");
  ED_SHORTCUT((String *)&local_c0,(String *)local_b8,(String *)local_a8,0x1000052,0);
  BaseButton::set_shortcut(pRVar2);
  if (((local_c0 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_c0, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_c0), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xb78);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,(_func_void *)"&ProjectManager::_run_project");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar19,*(undefined8 *)(this + 0xb78),0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb80) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb80);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Rename");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pRVar2 = *(Ref **)(this + 0xb80);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Rename Project");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"project_manager/rename_project");
  ED_SHORTCUT((String *)&local_c0,(String *)local_b8,(String *)local_a8,0x40001d,0);
  BaseButton::set_shortcut(pRVar2);
  if (((local_c0 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_c0, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_c0), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xb80);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_rename_project");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar19,*(undefined8 *)(this + 0xb80),0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb88) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb88);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Manage Tags");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar19,*(undefined8 *)(this + 0xb88),0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb90) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb90);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Remove");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pRVar2 = *(Ref **)(this + 0xb90);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"Remove Project");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"project_manager/remove_project");
  ED_SHORTCUT((String *)&local_c0,(String *)local_b8,(String *)local_a8,0x400008,0);
  BaseButton::set_shortcut(pRVar2);
  if (((local_c0 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_c0, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_c0), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xb90);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,(_func_void *)"&ProjectManager::_erase_project"
            );
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar19,*(undefined8 *)(this + 0xb90),0,0);
  pCVar22 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar22);
  postinitialize_handler((Object *)pCVar22);
  Control::set_v_size_flags(pCVar22,3);
  Node::add_child(pBVar19,pCVar22,0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xb98) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xb98);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Remove Missing");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xb98);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_erase_missing_projects");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(pBVar19,*(undefined8 *)(this + 0xb98),0,0);
  cVar8 = AssetLibraryEditorPlugin::is_available();
  if (cVar8 == '\0') {
    pBVar14 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(pBVar14,true);
    pBVar14[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)pBVar14 = &PTR__initialize_classv_00125018;
    postinitialize_handler((Object *)pBVar14);
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_a8,"AssetLibraryTab");
    Node::set_name((String *)pBVar14);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    local_a8[0] = (Object *)0x0;
    local_b8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_b8,"");
    local_c0 = (Object *)0x0;
    String::parse_latin1((String *)&local_c0,"Asset Library");
    TTR((String *)&local_c8,(String *)&local_c0);
    pSVar26 = (String *)_add_main_view(this,1,(String *)&local_c8,(String *)local_a8,pBVar14);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_a8);
    BaseButton::set_disabled(SUB81(pSVar26,0));
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_a8,"");
    local_b8[0] = (Object *)0x0;
    String::parse_latin1
              ((String *)local_b8,
               "Asset Library not available (due to using Web editor, or because SSL support disabled)."
              );
    TTR((String *)&local_c0,(String *)local_b8);
    Control::set_tooltip_text(pSVar26);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  }
  else {
    this_10 = (EditorAssetLibrary *)operator_new(0xb38,"");
    EditorAssetLibrary::EditorAssetLibrary(this_10,true);
    postinitialize_handler((Object *)this_10);
    *(EditorAssetLibrary **)(this + 0xad8) = this_10;
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_a8,"AssetLibraryTab");
    Node::set_name((String *)this_10);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    local_b8[0] = (Object *)0x0;
    uVar25 = *(undefined8 *)(this + 0xad8);
    local_a8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_b8,"");
    local_c0 = (Object *)0x0;
    String::parse_latin1((String *)&local_c0,"Asset Library");
    TTR((String *)&local_c8,(String *)&local_c0);
    _add_main_view(this,1,(String *)&local_c8,(String *)local_a8,uVar25);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_a8);
    plVar10 = *(long **)(this + 0xad8);
    pcVar1 = *(code **)(*plVar10 + 0x108);
    pCVar12 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar12);
    *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
    *(undefined **)(pCVar12 + 0x20) = &_LC27;
    *(undefined ***)pCVar12 = &PTR_hash_00125f30;
    *(undefined8 *)(pCVar12 + 0x40) = 0;
    uVar25 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar12 + 0x10) = 0;
    *(undefined8 *)(pCVar12 + 0x30) = uVar25;
    *(code **)(pCVar12 + 0x38) = _install_project;
    *(ProjectManager **)(pCVar12 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
    *(char **)(pCVar12 + 0x20) = "ProjectManager::_install_project";
    Callable::Callable((Callable *)local_a8,pCVar12);
    StringName::StringName((StringName *)local_b8,"install_asset",false);
    (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
    if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_a8);
  }
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00124ca0;
  postinitialize_handler((Object *)pBVar14);
  BoxContainer::set_alignment(pBVar14,2);
  EditorScale::get_scale();
  StringName::StringName((StringName *)local_a8,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar14,iVar9);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(*(undefined8 *)(this + 0xa10),pBVar14,0,0);
  this_11 = (EngineUpdateLabel *)operator_new(0xb68,"");
  EngineUpdateLabel::EngineUpdateLabel(this_11);
  postinitialize_handler((Object *)this_11);
  Node::add_child(pBVar14,this_11,0,0);
  pcVar1 = *(code **)(*(long *)this_11 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_show_quick_settings");
  StringName::StringName((StringName *)local_b8,"offline_clicked",false);
  (*pcVar1)(this_11,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  pOVar23 = (Object *)operator_new(0xb18,"");
  EditorVersionButton::EditorVersionButton((EditorVersionButton *)pOVar23,1);
  postinitialize_handler(pOVar23);
  local_78 = __LC228;
  uStack_70 = _UNK_00126748;
  (**(code **)(*(long *)pOVar23 + 0x270))(pOVar23,(String *)&local_78);
  Node::add_child(pBVar14,pOVar23,0,0);
  this_12 = (QuickSettingsDialog *)operator_new(0xe50,"");
  QuickSettingsDialog::QuickSettingsDialog(this_12);
  postinitialize_handler((Object *)this_12);
  *(QuickSettingsDialog **)(this + 0xaf0) = this_12;
  Node::add_child(this,this_12,0,0);
  plVar10 = *(long **)(this + 0xaf0);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_restart_confirmed");
  StringName::StringName((StringName *)local_b8,"restart_required",false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  this_13 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_13);
  postinitialize_handler((Object *)this_13);
  *(EditorFileDialog **)(this + 0xbb0) = this_13;
  EditorFileDialog::set_previews_enabled(SUB81(this_13,0));
  EditorFileDialog::set_access(*(undefined8 *)(this + 0xbb0),2);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xbb0),2);
  pSVar26 = *(String **)(this + 0xbb0);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Select a Folder to Scan");
  TTR((String *)&local_c0,(String *)local_b8);
  Window::set_title(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar26 = *(String **)(this + 0xbb0);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"filesystem/directories/default_project_path");
  _EDITOR_GET((String *)&local_78);
  Variant::operator_cast_to_String((Variant *)local_b8);
  EditorFileDialog::set_current_dir(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xbb0),0,0);
  plVar10 = *(long **)(this + 0xbb0);
  lVar11 = *(long *)(this + 0xb20);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC27;
  *(undefined ***)pCVar12 = &PTR_hash_00125fc0;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar25 = *(undefined8 *)(lVar11 + 0x60);
  *(long *)(pCVar12 + 0x28) = lVar11;
  *(undefined8 *)(pCVar12 + 0x30) = uVar25;
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(code **)(pCVar12 + 0x38) = ProjectList::find_projects;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectList::find_projects";
  Callable::Callable((Callable *)local_a8,pCVar12);
  StringName::StringName((StringName *)local_b8,"dir_selected",false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 0xbc8) = pCVar24;
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Remove All");
  TTR((String *)&local_c0,(String *)local_b8);
  AcceptDialog::set_ok_button_text(pCVar24,(String *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(*(long *)(this + 0xbc8) + 0xd88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_erase_missing_projects_confirm");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xbc8),0,0);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 3000) = pCVar24;
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Remove");
  TTR((String *)&local_c0,(String *)local_b8);
  AcceptDialog::set_ok_button_text(pCVar24,(String *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(*(long *)(this + 3000) + 0xd88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_erase_project_confirm");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 3000),0,0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,true);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00125018;
  postinitialize_handler((Object *)pBVar14);
  Node::add_child(*(undefined8 *)(this + 3000),pBVar14,0,0);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  Label::Label(pLVar17,(String *)local_a8);
  postinitialize_handler((Object *)pLVar17);
  *(Label **)(this + 0xbc0) = pLVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xbc0),0,0);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 0xbd0) = pCVar24;
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Edit");
  TTR((String *)&local_c0,(String *)local_b8);
  AcceptDialog::set_ok_button_text(pCVar24,(String *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(*(long *)(this + 0xbd0) + 0xd88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_open_selected_projects");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xbd0),0,0);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 0xbd8) = pCVar24;
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Run");
  TTR((String *)&local_c0,(String *)local_b8);
  AcceptDialog::set_ok_button_text(pCVar24,(String *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(*(long *)(this + 0xbd8) + 0xd88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_run_project_confirm");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xbd8),0,0);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 0xbe0) = pCVar24;
  fVar29 = (float)EditorScale::get_scale();
  local_88[0] = (String *)CONCAT44(fVar29 * _LC57._4_4_,fVar29 * (float)_LC57);
  local_78 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_88);
  Window::set_min_size((Vector2i *)pCVar24);
  AcceptDialog::set_autowrap(SUB81(*(undefined8 *)(this + 0xbe0),0));
  pSVar26 = *(String **)(this + 0xbe0);
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"");
  local_c0 = (Object *)0x0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = (Object *)0x0;
  String::parse_latin1((String *)&local_c8,"Edit normally");
  TTR((String *)&local_d0,(String *)&local_c8);
  bVar27 = SUB81((String *)&local_d0,0);
  plVar10 = (long *)AcceptDialog::add_button(pSVar26,bVar27,(String *)0x0);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_on_recovery_mode_popup_open_normal");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  uVar25 = *(undefined8 *)(this + 0xbe0);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Edit in Recovery Mode");
  TTR((String *)&local_c0,(String *)local_b8);
  AcceptDialog::set_ok_button_text(uVar25,(String *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(*(long *)(this + 0xbe0) + 0xd88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_on_recovery_mode_popup_open_recovery");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xbe0),0,0);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 0xc80) = pCVar24;
  AcceptDialog::set_autowrap(SUB81(pCVar24,0));
  plVar10 = *(long **)(*(long *)(this + 0xc80) + 0xd88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_open_selected_projects_with_migration");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  pSVar26 = *(String **)(this + 0xc80);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)local_b8,"gui/common/swap_cancel_ok",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_78);
  bVar6 = Variant::operator_cast_to_bool((Variant *)&local_78);
  local_c0 = (Object *)0x0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = (Object *)0x0;
  String::parse_latin1((String *)&local_c8,"Convert Full Project");
  TTR((String *)&local_d0,(String *)&local_c8);
  uVar25 = AcceptDialog::add_button(pSVar26,bVar27,(String *)(ulong)!bVar6);
  *(undefined8 *)(this + 0xc88) = uVar25;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xc88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_full_convert_button_pressed");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xc80),0,0);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 0xc78) = pCVar24;
  AcceptDialog::set_autowrap(SUB81(pCVar24,0));
  uVar25 = *(undefined8 *)(this + 0xc78);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1
            ((String *)local_b8,
             "This option will perform full project conversion, updating scenes, resources and scripts from Godot 3 to work in Godot 4.\n\nNote that this is a best-effort conversion, i.e. it makes upgrading the project easier, but it will not open out-of-the-box and will still require manual adjustments.\n\nIMPORTANT: Make sure to backup your project before converting, as this operation makes it impossible to open it in older versions of Godot."
            );
  TTR((String *)&local_c0,(String *)local_b8);
  AcceptDialog::set_text(uVar25,(String *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(this + 0xc78);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_perform_full_project_conversion");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x268,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xc78),0,0);
  this_14 = (ProjectDialog *)operator_new(0xea0,"");
  ProjectDialog::ProjectDialog(this_14);
  postinitialize_handler((Object *)this_14);
  lVar11 = *(long *)this_14;
  *(ProjectDialog **)(this + 0xbe8) = this_14;
  pcVar1 = *(code **)(lVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_on_projects_updated");
  StringName::StringName((StringName *)local_b8,"projects_updated",false);
  (*pcVar1)(this_14,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xbe8);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC27;
  *(undefined ***)pCVar12 = &PTR_hash_00126050;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar25 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar25;
  *(code **)(pCVar12 + 0x38) = _on_project_created;
  *(ProjectManager **)(pCVar12 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectManager::_on_project_created";
  Callable::Callable((Callable *)local_a8,pCVar12);
  StringName::StringName((StringName *)local_b8,"project_created",false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xbe8),0,0);
  this_15 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_15);
  postinitialize_handler((Object *)this_15);
  *(AcceptDialog **)(this + 0xae8) = this_15;
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Error");
  TTR((String *)&local_c0,(String *)local_b8);
  Window::set_title((String *)this_15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xae8),0,0);
  this_16 = (EditorAbout *)operator_new(0xde0,"");
  EditorAbout::EditorAbout(this_16);
  postinitialize_handler((Object *)this_16);
  *(EditorAbout **)(this + 0xae0) = this_16;
  Node::add_child(this,this_16,0,0);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 0xc38) = pCVar24;
  Node::add_child(this,pCVar24,0,0);
  pSVar26 = *(String **)(this + 0xc38);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Manage Project Tags");
  TTR((String *)&local_c0,(String *)local_b8);
  Window::set_title(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(*(long *)(this + 0xc38) + 0xd88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_apply_project_tags");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xb88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_manage_project_tags");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,true);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00125018;
  postinitialize_handler((Object *)pBVar14);
  Node::add_child(*(undefined8 *)(this + 0xc38),pBVar14,0,0);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Project Tags");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::Label(pLVar17,(String *)&local_c0);
  postinitialize_handler((Object *)pLVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,pLVar17,0,0);
  StringName::StringName((StringName *)local_a8,"HeaderMedium",false);
  Control::set_theme_type_variation((StringName *)pLVar17);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Label::set_horizontal_alignment(pLVar17,1);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Click tag to remove it from the project.");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::Label(pLVar17,(String *)&local_c0);
  postinitialize_handler((Object *)pLVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,pLVar17,0,0);
  Label::set_horizontal_alignment(pLVar17,1);
  pFVar20 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(pFVar20,false);
  pFVar20[0xa24] = (FlowContainer)0x1;
  *(undefined ***)pFVar20 = &PTR__initialize_classv_001254f0;
  postinitialize_handler((Object *)pFVar20);
  *(FlowContainer **)(this + 0xc40) = pFVar20;
  Node::add_child(pBVar14,pFVar20,0,0);
  pVVar4 = *(Vector2 **)(this + 0xc40);
  fVar29 = (float)EditorScale::get_scale();
  local_78 = CONCAT44(fVar29 * _LC261._4_4_,fVar29 * (float)_LC261);
  Control::set_custom_minimum_size(pVVar4);
  pHVar21 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar21);
  postinitialize_handler((Object *)pHVar21);
  Node::add_child(pBVar14,pHVar21,0,0);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"All Tags");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::Label(pLVar17,(String *)&local_c0);
  postinitialize_handler((Object *)pLVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,pLVar17,0,0);
  StringName::StringName((StringName *)local_a8,"HeaderMedium",false);
  Control::set_theme_type_variation((StringName *)pLVar17);
  if ((StringName::configured != '\0') && (local_a8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Label::set_horizontal_alignment(pLVar17,1);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Click tag to add it to the project.");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::Label(pLVar17,(String *)&local_c0);
  postinitialize_handler((Object *)pLVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,pLVar17,0,0);
  Label::set_horizontal_alignment(pLVar17,1);
  pFVar20 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(pFVar20,false);
  pFVar20[0xa24] = (FlowContainer)0x1;
  *(undefined ***)pFVar20 = &PTR__initialize_classv_001254f0;
  postinitialize_handler((Object *)pFVar20);
  *(FlowContainer **)(this + 0xc48) = pFVar20;
  Node::add_child(pBVar14,pFVar20,0,0);
  pVVar4 = *(Vector2 **)(this + 0xc48);
  fVar29 = (float)EditorScale::get_scale();
  local_78 = CONCAT44(fVar29 * _LC261._4_4_,fVar29 * (float)_LC261);
  Control::set_custom_minimum_size(pVVar4);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  Label::Label(pLVar17,(String *)local_a8);
  postinitialize_handler((Object *)pLVar17);
  *(Label **)(this + 0xc50) = pLVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xc50),0,0);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xc50),2);
  pCVar24 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar24);
  postinitialize_handler((Object *)pCVar24);
  *(ConfirmationDialog **)(this + 0xc60) = pCVar24;
  Node::add_child(*(undefined8 *)(this + 0xc38),pCVar24,0,0);
  pSVar26 = *(String **)(this + 0xc60);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Create New Tag");
  TTR((String *)&local_c0,(String *)local_b8);
  Window::set_title(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar10 = *(long **)(*(long *)(this + 0xc60) + 0xd88);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_create_new_tag");
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,true);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00125018;
  postinitialize_handler((Object *)pBVar14);
  Node::add_child(*(undefined8 *)(this + 0xc60),pBVar14,0,0);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_b8,"Tags are capitalized automatically when displayed.");
  TTR((String *)&local_c0,(String *)local_b8);
  Label::Label(pLVar17,(String *)&local_c0);
  postinitialize_handler((Object *)pLVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,pLVar17,0,0);
  pLVar18 = (LineEdit *)operator_new(0xbb0,"");
  local_a8[0] = (Object *)0x0;
  LineEdit::LineEdit(pLVar18,(String *)local_a8);
  postinitialize_handler((Object *)pLVar18);
  *(LineEdit **)(this + 0xc68) = pLVar18;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xc68),0,0);
  plVar10 = *(long **)(this + 0xc68);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar12 = &PTR_hash_001260e0;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar25 = *(undefined8 *)(this + 0x60);
  *(undefined **)(pCVar12 + 0x20) = &_LC27;
  *(undefined8 *)(pCVar12 + 0x30) = uVar25;
  *(code **)(pCVar12 + 0x38) = _set_new_tag_name;
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(ProjectManager **)(pCVar12 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "ProjectManager::_set_new_tag_name";
  Callable::Callable((Callable *)local_a8,pCVar12);
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x270,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xc68);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ProjectManager>
            ((ProjectManager *)local_a8,(char *)this,
             (_func_void *)"&ProjectManager::_create_new_tag");
  Callable::unbind((int)(String *)local_b8);
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x278,(String *)local_b8,0);
  Callable::~Callable((Callable *)local_b8);
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xc60);
  lVar11 = *(long *)(this + 0xc68);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar12 = &PTR_hash_00126170;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar25 = *(undefined8 *)(lVar11 + 0x60);
  *(undefined **)(pCVar12 + 0x20) = &_LC27;
  *(undefined8 *)(pCVar12 + 0x30) = uVar25;
  *(long *)(pCVar12 + 0x28) = lVar11;
  *(code **)(pCVar12 + 0x38) = LineEdit::clear;
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "LineEdit::clear";
  Callable::Callable((Callable *)local_a8,pCVar12);
  StringName::StringName((StringName *)local_b8,"about_to_popup",false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  plVar10 = *(long **)(this + 0xc60);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<Control>
            ((Control *)local_a8,*(char **)(this + 0xc68),(_func_void *)"&Control::grab_focus");
  StringName::StringName((StringName *)local_b8,"about_to_popup",false);
  (*pcVar1)(plVar10,(String *)local_b8,(String *)local_a8,1);
  if ((StringName::configured != '\0') && (local_b8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  pLVar17 = (Label *)operator_new(0xad8,"");
  local_a8[0] = (Object *)0x0;
  Label::Label(pLVar17,(String *)local_a8);
  postinitialize_handler((Object *)pLVar17);
  *(Label **)(this + 0xc70) = pLVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(pBVar14,*(undefined8 *)(this + 0xc70),0,0);
  pBVar15 = (Button *)operator_new(0xc10,"");
  local_a8[0] = (Object *)0x0;
  Button::Button(pBVar15,(String *)local_a8);
  postinitialize_handler((Object *)pBVar15);
  *(Button **)(this + 0xc58) = pBVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(*(undefined8 *)(this + 0xc48),*(undefined8 *)(this + 0xc58),0,0);
  plVar10 = *(long **)(this + 0xc58);
  lVar11 = *(long *)(this + 0xc60);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar12 + 0x20) = &_LC27;
  *(undefined ***)pCVar12 = &PTR_hash_00126200;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar25 = *(undefined8 *)(lVar11 + 0x60);
  *(long *)(pCVar12 + 0x28) = lVar11;
  *(undefined8 *)(pCVar12 + 0x30) = uVar25;
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(code **)(pCVar12 + 0x38) = Window::popup_centered;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "Window::popup_centered";
  Callable::Callable((Callable *)local_a8,pCVar12);
  fVar29 = (float)EditorScale::get_scale();
  local_98 = 500;
  local_90 = Vector2i::operator*((Vector2i *)&local_98,(int)fVar29);
  Variant::Variant((Variant *)&local_78,(Vector2i *)&local_90);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (String *)&local_78;
  Callable::bindp((Variant **)local_b8,iVar9);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(String *)local_b8,0);
  Callable::~Callable((Callable *)local_b8);
  Callable::~Callable((Callable *)local_a8);
  ProjectList::load_project_list();
  DirAccess::create((String *)&local_c8,2);
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"filesystem/directories/default_project_path");
  _EDITOR_GET((String *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_c0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pOVar23 = local_c8;
  if ((local_c0 != (Object *)0x0) && (1 < *(uint *)((long)local_c0 + -8))) {
    pcVar1 = *(code **)(*(long *)local_c8 + 0x1d8);
    local_a8[0] = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)local_a8,(CowData *)&local_c0);
    cVar8 = (*pcVar1)(pOVar23,(String *)local_a8);
    if (cVar8 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      iVar9 = (**(code **)(*(long *)local_c8 + 0x1c0))(local_c8,(String *)&local_c0);
      if (iVar9 == 0) goto LAB_00109f01;
      operator+((char *)local_a8,(String *)"Could not create default project directory at: ");
      _err_print_error("ProjectManager","editor/project_manager.cpp",0x6b9,(String *)local_a8,0,0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  }
LAB_00109f01:
  local_a8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_a8,"filesystem/directories/autoscan_project_path");
  _EDITOR_GET((String *)&local_78);
  Variant::operator_cast_to_String((Variant *)local_b8);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pOVar23 = local_c8;
  if ((local_b8[0] != (Object *)0x0) && (1 < *(uint *)((long)local_b8[0] + -8))) {
    pcVar1 = *(code **)(*(long *)local_c8 + 0x1d8);
    local_a8[0] = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)local_a8,(CowData *)local_b8);
    cVar8 = (*pcVar1)(pOVar23,(String *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    if (cVar8 == '\0') {
      iVar9 = (**(code **)(*(long *)local_c8 + 0x1c0))();
      if (iVar9 != 0) {
        operator+((char *)local_a8,(String *)"Could not create project autoscan directory at: ");
        _err_print_error("ProjectManager","editor/project_manager.cpp",0x6c4,(String *)local_a8,0,0)
        ;
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      }
    }
    else {
      ProjectList::find_projects(*(String **)(this + 0xb20));
    }
  }
  ProjectList::update_project_list();
  this[0xb28] = (ProjectManager)0x1;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (((local_c8 != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar23 = local_c8, cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_c8), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
  if (cVar7 != '\0') {
    (**(code **)(*DisplayServer::singleton + 0x748))();
    (**(code **)(*DisplayServer::singleton + 0x5c0))(DisplayServer::singleton,6,1,0);
    EditorTitleBar::set_can_move_window(SUB81(*(undefined8 *)(this + 0xa18),0));
    plVar10 = *(long **)(this + 0xa18);
    pcVar1 = *(code **)(*plVar10 + 0x108);
    create_custom_callable_function_pointer<ProjectManager>
              ((ProjectManager *)local_a8,(char *)this,
               (_func_void *)"&ProjectManager::_titlebar_resized");
    (*pcVar1)(plVar10,SceneStringNames::singleton + 0x60,(String *)local_a8,0);
    Callable::~Callable((Callable *)local_a8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _update_size_limits(this,param_1);
  return;
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* ProjectManager::_files_dropped(Vector<String>) */

void __thiscall ProjectManager::_files_dropped(ProjectManager *this,long param_2)

{
  long *plVar1;
  CowData *pCVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  CowData<char32_t> *this_00;
  CowData<char32_t> *pCVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  int iVar15;
  long in_FS_OFFSET;
  bool bVar16;
  Object *local_90;
  long local_88;
  long local_80;
  String local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pcVar3 = *(char **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((pcVar3 == (char *)0x0) || (*(long *)(pcVar3 + -8) != 1)) ||
     (cVar7 = String::ends_with(pcVar3), cVar7 == '\0')) {
    local_48 = 2;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    DirAccess::create(&local_90,2);
    plVar10 = *(long **)(param_2 + 8);
    if (plVar10 != (long *)0x0) {
      lVar12 = 0;
      do {
        if (plVar10[-1] <= lVar12) break;
        pCVar2 = (CowData *)(plVar10 + lVar12);
        local_88 = 0;
        pcVar4 = *(code **)(*(long *)local_90 + 0x1d8);
        plVar10 = (long *)(*(long *)pCVar2 + -0x10);
        if (*(long *)pCVar2 != 0) {
          do {
            lVar9 = *plVar10;
            if (lVar9 == 0) goto LAB_0010ae07;
            LOCK();
            lVar8 = *plVar10;
            bVar16 = lVar9 == lVar8;
            if (bVar16) {
              *plVar10 = lVar9 + 1;
              lVar8 = lVar9;
            }
            UNLOCK();
          } while (!bVar16);
          if (lVar8 != -1) {
            local_88 = *(long *)pCVar2;
          }
        }
LAB_0010ae07:
        cVar7 = (*pcVar4)(local_90,&local_88);
        if (cVar7 == '\0') {
          String::get_base_dir();
        }
        else {
          local_80 = 0;
          if (*(long *)pCVar2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,pCVar2);
          }
        }
        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_78);
        lVar9 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar10 = (long *)(local_80 + -0x10);
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        lVar9 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar10 = (long *)(local_88 + -0x10);
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        plVar10 = *(long **)(param_2 + 8);
        lVar12 = lVar12 + 1;
      } while (plVar10 != (long *)0x0);
      iVar6 = local_48._4_4_;
      plVar10 = (long *)local_68._0_8_;
      if (local_48._4_4_ != 0) {
        iVar15 = 0;
        local_70 = 0;
        do {
          local_80 = 0;
          plVar1 = (long *)(*plVar10 + -0x10);
          if (*plVar10 == 0) {
            Vector<String>::push_back((Vector<String> *)local_78,&local_80);
          }
          else {
            do {
              lVar12 = *plVar1;
              if (lVar12 == 0) goto LAB_0010aea2;
              LOCK();
              lVar9 = *plVar1;
              bVar16 = lVar12 == lVar9;
              if (bVar16) {
                *plVar1 = lVar12 + 1;
                lVar9 = lVar12;
              }
              UNLOCK();
            } while (!bVar16);
            if (lVar9 != -1) {
              local_80 = *plVar10;
            }
LAB_0010aea2:
            lVar12 = local_80;
            Vector<String>::push_back((Vector<String> *)local_78);
            if (lVar12 != 0) {
              LOCK();
              plVar1 = (long *)(lVar12 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_80 + -0x10),false);
              }
            }
          }
          iVar15 = iVar15 + 1;
          if (iVar6 <= iVar15) goto code_r0x0010aed7;
          plVar10 = plVar10 + 1;
        } while( true );
      }
    }
    _err_print_error("_files_dropped","editor/project_manager.cpp",0x46d,
                     "Condition \"folders_set.is_empty()\" is true.",0,0);
    if (((local_90 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_90), cVar7 != '\0')) {
      (**(code **)(*(long *)local_90 + 0x140))(local_90);
      Memory::free_static(local_90,false);
    }
    if (plVar10 != (long *)0x0) {
      Memory::free_static(plVar10,false);
      Memory::free_static((void *)local_58._0_8_,false);
      Memory::free_static((void *)local_68._8_8_,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pvVar14 = (void *)local_58._8_8_;
        goto LAB_0010afa4;
      }
      goto LAB_0010b1ea;
    }
  }
  else {
    if (*(long *)(param_2 + 8) == 0) {
      lVar12 = 0;
LAB_0010b1aa:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar12,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar12 = *(long *)(*(long *)(param_2 + 8) + -8);
    if (lVar12 < 1) goto LAB_0010b1aa;
    String::get_file();
    String::get_basename();
    String::capitalize();
    ProjectDialog::set_mode(*(undefined8 *)(this + 0xbe8),2);
    ProjectDialog::set_zip_path(*(String **)(this + 0xbe8));
    ProjectDialog::set_zip_title(*(String **)(this + 0xbe8));
    ProjectDialog::show_dialog(SUB81(*(undefined8 *)(this + 0xbe8),0));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  goto LAB_0010b0ac;
code_r0x0010aed7:
  ProjectList::find_projects_multiple(*(Vector **)(this + 0xb20));
  CowData<String>::_unref((CowData<String> *)&local_70);
  if (((local_90 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_90), cVar7 != '\0')) {
    (**(code **)(*(long *)local_90 + 0x140))(local_90);
    Memory::free_static(local_90,false);
  }
  uVar5 = local_68._0_8_;
  if ((CowData<char32_t> *)local_68._0_8_ != (CowData<char32_t> *)0x0) {
    uVar13 = (ulong)local_48._4_4_;
    pvVar14 = (void *)local_58._8_8_;
    if (local_48._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) != 0) {
        memset((void *)local_58._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) * 4);
      }
      this_00 = (CowData<char32_t> *)uVar5;
      do {
        pCVar11 = this_00 + 8;
        CowData<char32_t>::_unref(this_00);
        this_00 = pCVar11;
      } while ((CowData<char32_t> *)(uVar5 + uVar13 * 8) != pCVar11);
    }
    Memory::free_static((void *)uVar5,false);
    Memory::free_static((void *)local_58._0_8_,false);
    Memory::free_static((void *)local_68._8_8_,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010afa4:
      Memory::free_static(pvVar14,false);
      return;
    }
    goto LAB_0010b1ea;
  }
LAB_0010b0ac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b1ea:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<Theme> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Theme>>::_copy_on_write(CowData<Ref<Theme>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* ProjectManager::_update_project_buttons() */

void __thiscall ProjectManager::_update_project_buttons(ProjectManager *this)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectList::get_selected_projects();
  if (local_30[0] != 0) {
    lVar4 = 0;
    pcVar3 = (char *)(local_30[0] + 0x62);
    do {
      if (*(long *)(local_30[0] + -8) <= lVar4) break;
      cVar1 = *pcVar3;
      lVar4 = lVar4 + 1;
      pcVar3 = pcVar3 + 0x70;
    } while (cVar1 == '\0');
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xb90),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xb68),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xb70),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xb80),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xb88),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xb78),0));
  uVar2 = *(undefined8 *)(this + 0xb98);
  ProjectList::is_any_project_missing();
  BaseButton::set_disabled(SUB81(uVar2,0));
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_erase_project_confirm() */

void __thiscall ProjectManager::_erase_project_confirm(ProjectManager *this)

{
  int iVar1;
  
  ProjectList::erase_selected_projects(SUB81(*(undefined8 *)(this + 0xb20),0));
  _update_project_buttons(this);
  iVar1 = ProjectList::get_project_count();
  if (iVar1 < 1) {
    _update_list_placeholder(this);
    return;
  }
  CanvasItem::hide();
  return;
}



/* ProjectManager::_erase_missing_projects_confirm() */

void __thiscall ProjectManager::_erase_missing_projects_confirm(ProjectManager *this)

{
  int iVar1;
  
  ProjectList::erase_missing_projects();
  _update_project_buttons(this);
  iVar1 = ProjectList::get_project_count();
  if (iVar1 < 1) {
    _update_list_placeholder(this);
    return;
  }
  CanvasItem::hide();
  return;
}



/* ProjectManager::_on_search_term_changed(String const&) */

void __thiscall ProjectManager::_on_search_term_changed(ProjectManager *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0xb20);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_0010b577;
      LOCK();
      lVar5 = *plVar1;
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *plVar1 = lVar4 + 1;
        lVar5 = lVar4;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar5 != -1) {
      local_18 = *(long *)param_1;
    }
  }
LAB_0010b577:
  ProjectList::set_search_term(uVar2);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  ProjectList::sort_projects();
  ProjectList::select_first_visible_project();
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _update_project_buttons(this);
  return;
}



/* ProjectManager::_on_projects_updated() */

void __thiscall ProjectManager::_on_projects_updated(ProjectManager *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  String *pSVar4;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectList::get_selected_projects();
  if (local_30[0] == 0) {
    iVar3 = (int)*(undefined8 *)(this + 0xb20);
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      pSVar4 = *(String **)(this + 0xb20);
      if (*(long *)(local_30[0] + -8) <= lVar2) goto LAB_0010b662;
      lVar2 = lVar2 + 1;
      iVar1 = ProjectList::refresh_project(pSVar4);
    } while (local_30[0] != 0);
    pSVar4 = *(String **)(this + 0xb20);
LAB_0010b662:
    iVar3 = (int)pSVar4;
    if (iVar1 == -1) goto LAB_0010b667;
  }
  ProjectList::ensure_project_visible(iVar3);
LAB_0010b667:
  ProjectList::update_dock_menu();
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_rename_project() */

void __thiscall ProjectManager::_rename_project(ProjectManager *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectList::get_selected_projects();
  if ((local_30[0] != 0) && (lVar1 = *(long *)(local_30[0] + -8), lVar1 != 0)) {
    for (lVar2 = local_30[0]; lVar2 != lVar1 * 0x70 + local_30[0]; lVar2 = lVar2 + 0x70) {
      ProjectDialog::set_project_name(*(String **)(this + 0xbe8));
      ProjectDialog::set_project_path(*(String **)(this + 0xbe8));
      ProjectDialog::set_mode(*(undefined8 *)(this + 0xbe8),3);
      ProjectDialog::show_dialog(SUB81(*(undefined8 *)(this + 0xbe8),0));
    }
  }
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_manage_project_tags() */

void __thiscall ProjectManager::_manage_project_tags(ProjectManager *this)

{
  long *plVar1;
  CowData<String> *this_00;
  Vector2i *pVVar2;
  code *pcVar3;
  int iVar4;
  ProjectTag *this_01;
  long lVar5;
  String *pSVar6;
  int iVar7;
  String *pSVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  float fVar11;
  long local_f0;
  ProjectManager local_e8 [16];
  Callable local_d8 [8];
  CowData *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (iVar7 = 0; iVar4 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xc40),0)),
      iVar7 < iVar4; iVar7 = iVar7 + 1) {
    Node::get_child((int)*(undefined8 *)(this + 0xc40),SUB41(iVar7,0));
    Node::queue_free();
  }
  ProjectList::get_selected_projects();
  if (local_d0 == (CowData *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(local_d0 + -8);
    if (0 < lVar9) {
      local_c8 = 0;
      if (*(long *)local_d0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,local_d0);
      }
      local_c0 = 0;
      if (*(long *)(local_d0 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,local_d0 + 8);
      }
      local_b8[0] = 0;
      if (*(long *)(local_d0 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,local_d0 + 0x10);
      }
      local_a8 = 0;
      if (*(long *)(local_d0 + 0x20) != 0) {
        CowData<String>::_ref((CowData<String> *)&local_a8,local_d0 + 0x20);
      }
      local_a0 = 0;
      if (*(long *)(local_d0 + 0x28) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,local_d0 + 0x28);
      }
      local_98 = 0;
      if (*(long *)(local_d0 + 0x30) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,local_d0 + 0x30);
      }
      local_90 = 0;
      if (*(long *)(local_d0 + 0x38) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,local_d0 + 0x38);
      }
      local_88[0] = 0;
      if (*(long *)(local_d0 + 0x40) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_88,local_d0 + 0x40);
      }
      local_78 = 0;
      if (*(long *)(local_d0 + 0x50) != 0) {
        CowData<String>::_ref((CowData<String> *)&local_78,local_d0 + 0x50);
      }
      local_70 = *(undefined8 *)(local_d0 + 0x58);
      local_60 = *(undefined8 *)(local_d0 + 0x68);
      local_68 = *(undefined8 *)(local_d0 + 0x60);
      this_00 = (CowData<String> *)(this + 0xc20);
      CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)&local_d0);
      if (*(long *)(this + 0xc20) != local_a8) {
        CowData<String>::_ref(this_00,(CowData *)&local_a8);
      }
      CowData<String>::_copy_on_write(this_00);
      pSVar8 = *(String **)(this + 0xc20);
      CowData<String>::_copy_on_write(this_00);
      pSVar6 = *(String **)(this + 0xc20);
      if (pSVar6 != (String *)0x0) {
        pSVar6 = pSVar6 + *(long *)(pSVar6 + -8) * 8;
      }
      if (pSVar8 != pSVar6) {
        do {
          this_01 = (ProjectTag *)operator_new(0xa28,"");
          ProjectTag::ProjectTag(this_01,pSVar8,true);
          postinitialize_handler((Object *)this_01);
          Node::add_child(*(undefined8 *)(this + 0xc40),this_01,0,0);
          create_custom_callable_function_pointer<ProjectManager,String_const&>
                    (local_e8,(char *)this,
                     (_func_void_String_ptr *)"&ProjectManager::_delete_project_tag");
          local_f0 = 0;
          plVar1 = (long *)(*(long *)pSVar8 + -0x10);
          if (*(long *)pSVar8 != 0) {
            do {
              lVar9 = *plVar1;
              if (lVar9 == 0) goto LAB_0010baf4;
              LOCK();
              lVar5 = *plVar1;
              bVar10 = lVar9 == lVar5;
              if (bVar10) {
                *plVar1 = lVar9 + 1;
                lVar5 = lVar9;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar5 != -1) {
              local_f0 = *(long *)pSVar8;
            }
          }
LAB_0010baf4:
          Callable::bind<String>(local_d8,local_e8,&local_f0);
          ProjectTag::connect_button_to(this_01);
          Callable::~Callable(local_d8);
          lVar9 = local_f0;
          if (local_f0 != 0) {
            LOCK();
            plVar1 = (long *)(local_f0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_f0 = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          pSVar8 = pSVar8 + 8;
          Callable::~Callable((Callable *)local_e8);
        } while (pSVar6 != pSVar8);
      }
      CanvasItem::hide();
      pVVar2 = *(Vector2i **)(this + 0xc38);
      fVar11 = (float)EditorScale::get_scale();
      local_50 = 500;
      local_48 = Vector2i::operator*((Vector2i *)&local_50,(int)fVar11);
      Window::popup_centered(pVVar2);
      CowData<String>::_unref((CowData<String> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<String>::_unref((CowData<String> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* ProjectManager::_minor_project_migrate() */

void __thiscall ProjectManager::_minor_project_migrate(ProjectManager *this)

{
  code *pcVar1;
  CowData *pCVar2;
  char cVar3;
  int iVar4;
  RefCounted *this_00;
  long lVar5;
  RefCounted *pRVar6;
  long in_FS_OFFSET;
  byte bVar7;
  float fVar8;
  String *local_150;
  String local_110 [8];
  CowData<char32_t> local_108 [8];
  undefined8 local_100;
  char *local_f8;
  CowData *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectList::get_selected_projects();
  pCVar2 = local_f0;
  if (local_f0 == (CowData *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(local_f0 + -8);
    if (0 < lVar5) {
      local_e8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,local_f0);
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,pCVar2 + 8);
      local_d8[0] = 0;
      if (*(long *)(pCVar2 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,pCVar2 + 0x10);
      }
      local_c8 = 0;
      if (*(long *)(pCVar2 + 0x20) != 0) {
        CowData<String>::_ref((CowData<String> *)&local_c8,pCVar2 + 0x20);
      }
      local_c0 = 0;
      if (*(long *)(pCVar2 + 0x28) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,pCVar2 + 0x28);
      }
      local_b8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar2 + 0x30);
      local_b0 = 0;
      if (*(long *)(pCVar2 + 0x38) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,pCVar2 + 0x38);
      }
      local_a8[0] = 0;
      if (*(long *)(pCVar2 + 0x40) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_a8,pCVar2 + 0x40);
      }
      local_98 = 0;
      if (*(long *)(pCVar2 + 0x50) != 0) {
        CowData<String>::_ref((CowData<String> *)&local_98,pCVar2 + 0x50);
      }
      local_90 = *(undefined8 *)(pCVar2 + 0x58);
      local_80 = *(undefined8 *)(pCVar2 + 0x68);
      local_88 = *(undefined8 *)(pCVar2 + 0x60);
      CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)&local_f0);
      cVar3 = String::begins_with((char *)(this + 0xc90));
      if ((cVar3 != '\0') && (fVar8 = (float)EditorScale::get_scale(), fVar8 != _LC137)) {
        this_00 = (RefCounted *)operator_new(0x1b0,"");
        pRVar6 = this_00;
        for (lVar5 = 0x36; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined8 *)pRVar6 = 0;
          pRVar6 = pRVar6 + (ulong)bVar7 * -0x10 + 8;
        }
        RefCounted::RefCounted(this_00);
        *(undefined ***)this_00 = &PTR__initialize_classv_00125390;
        *(undefined8 *)(this_00 + 0x1a8) = 2;
        *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
        postinitialize_handler((Object *)this_00);
        cVar3 = RefCounted::init_ref();
        local_150 = (String *)0x0;
        if (cVar3 != '\0') {
          cVar3 = RefCounted::reference();
          local_150 = (String *)(RefCounted *)0x0;
          if (cVar3 != '\0') {
            local_150 = (String *)this_00;
          }
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
          }
        }
        local_f8 = (char *)0x0;
        String::parse_latin1((String *)&local_f8,".godot/editor/editor_layout.cfg");
        String::path_join(local_110);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        iVar4 = ConfigFile::load(local_150);
        if (iVar4 == 0) {
          lVar5 = 1;
          do {
            itos((long)&local_f8);
            operator+((char *)local_108,(String *)"dock_hsplit_");
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            Variant::Variant((Variant *)local_78,0);
            local_f8 = "docks";
            local_100 = 0;
            local_f0 = (CowData *)0x5;
            String::parse_latin1((StrRange *)&local_100);
            ConfigFile::get_value((String *)local_58,local_150,(Variant *)&local_100);
            iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (iVar4 != 0) {
              Variant::Variant((Variant *)local_58,(float)iVar4 / fVar8);
              local_f8 = (char *)0x0;
              String::parse_latin1((String *)&local_f8,"docks");
              ConfigFile::set_value(local_150,(String *)&local_f8,(Variant *)local_108);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            lVar5 = lVar5 + 1;
            CowData<char32_t>::_unref(local_108);
          } while (lVar5 != 5);
          ConfigFile::save(local_150);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)local_150), cVar3 != '\0')) {
          (**(code **)(*(long *)local_150 + 0x140))(local_150);
          Memory::free_static(local_150,false);
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<String>::_unref((CowData<String> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar5,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectManager::_run_project_confirm() */

void __thiscall ProjectManager::_run_project_confirm(ProjectManager *this)

{
  undefined1 (*pauVar1) [16];
  CowData *pCVar2;
  undefined8 uVar3;
  Vector2i *pVVar4;
  code *pcVar5;
  undefined1 (*pauVar6) [16];
  char *pcVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  CowData<char32_t> *pCVar11;
  long *plVar12;
  long lVar13;
  CowData *pCVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long local_a0;
  undefined1 (*local_98) [16];
  char *local_90 [2];
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectList::get_selected_projects();
  if (local_80 != 0) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      if (*(long *)(local_80 + -8) <= lVar16) break;
      lVar13 = local_80 + lVar15;
      lVar10 = *(long *)(lVar13 + 0x40);
      if ((lVar10 == 0) || (*(uint *)(lVar10 + -8) < 2)) {
        local_60 = 0;
        local_78 = "";
        local_98 = (undefined1 (*) [16])0x0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_98);
        local_78 = 
        "Can\'t run project: Project has no main scene defined.\nPlease edit the project and set the main scene in the Project Settings under the \"Application\" category."
        ;
        local_a0 = 0;
        local_70 = 0x9e;
        String::parse_latin1((StrRange *)&local_a0);
        TTR((String *)local_90,(String *)&local_a0);
        local_78 = (char *)0x0;
        uVar3 = *(undefined8 *)(this + 0xae8);
        plVar12 = (long *)(local_90[0] + -0x10);
        if (local_90[0] != (char *)0x0) {
          do {
            lVar10 = *plVar12;
            if (lVar10 == 0) goto LAB_0010c3dc;
            LOCK();
            lVar13 = *plVar12;
            bVar17 = lVar10 == lVar13;
            if (bVar17) {
              *plVar12 = lVar10 + 1;
              lVar13 = lVar10;
            }
            UNLOCK();
          } while (!bVar17);
          if (lVar13 != -1) {
            local_78 = local_90[0];
          }
        }
LAB_0010c3dc:
        AcceptDialog::set_text(uVar3);
        pcVar7 = local_78;
        if (local_78 != (char *)0x0) {
          LOCK();
          plVar12 = (long *)(local_78 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_78 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        pVVar4 = *(Vector2i **)(this + 0xae8);
        local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
        Window::popup_centered(pVVar4);
        pcVar7 = local_90[0];
        if (local_90[0] != (char *)0x0) {
          LOCK();
          plVar12 = (long *)(local_90[0] + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_90[0] = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar10 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar12 = (long *)(local_a0 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        pauVar6 = local_98;
        if (local_98 != (undefined1 (*) [16])0x0) {
          LOCK();
          pauVar1 = local_98 + -1;
          *(long *)*pauVar1 = *(long *)*pauVar1 + -1;
          UNLOCK();
          if (*(long *)*pauVar1 == 0) {
            local_98 = (undefined1 (*) [16])0x0;
            Memory::free_static(pauVar6 + -1,false);
          }
        }
      }
      else {
        ProjectSettings::get_singleton();
        ProjectSettings::get_imported_files_path();
        String::substr((int)(CowData<char32_t> *)local_90,(int)(CowData<char32_t> *)&local_98);
        String::path_join((String *)&local_78);
        cVar8 = DirAccess::exists((String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (cVar8 == '\0') {
          local_58[0] = 0;
          local_78 = "";
          local_90[0] = (char *)0x0;
          local_70 = 0;
          String::parse_latin1((StrRange *)local_90);
          local_78 = 
          "Can\'t run project: Assets need to be imported first.\nPlease edit the project to trigger the initial import."
          ;
          local_98 = (undefined1 (*) [16])0x0;
          local_70 = 0x6b;
          String::parse_latin1((StrRange *)&local_98);
          TTR((String *)&local_78,(String *)&local_98);
          _show_error(this,(String *)&local_78,(Vector2 *)local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        }
        else {
          operator+((char *)local_90,(String *)"Running project: ");
          Variant::Variant((Variant *)local_58,(String *)local_90);
          stringify_variants((Variant *)&local_78);
          __print_line((String *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
          local_98 = (undefined1 (*) [16])0x0;
          lVar10 = Main::get_forwardable_cli_arguments(1);
          pCVar14 = *(CowData **)(lVar10 + 8);
          if ((pCVar14 != (CowData *)0x0) &&
             (pCVar2 = pCVar14 + *(long *)(pCVar14 + -8) * 8, pCVar2 != pCVar14)) {
            if (local_98 == (undefined1 (*) [16])0x0) {
              local_98 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)local_98[1] = 0;
              *local_98 = (undefined1  [16])0x0;
            }
            do {
              while( true ) {
                pCVar11 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
                *(undefined1 (*) [16])pCVar11 = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(pCVar11 + 0x10) = (undefined1  [16])0x0;
                if (*(long *)pCVar14 != 0) {
                  CowData<char32_t>::_ref(pCVar11,pCVar14);
                }
                lVar10 = *(long *)(*local_98 + 8);
                *(undefined8 *)(pCVar11 + 8) = 0;
                *(undefined1 (**) [16])(pCVar11 + 0x18) = local_98;
                *(long *)(pCVar11 + 0x10) = lVar10;
                if (lVar10 != 0) {
                  *(CowData<char32_t> **)(lVar10 + 8) = pCVar11;
                }
                lVar10 = *(long *)*local_98;
                *(CowData<char32_t> **)(*local_98 + 8) = pCVar11;
                if (lVar10 != 0) break;
                pCVar14 = pCVar14 + 8;
                *(int *)local_98[1] = *(int *)local_98[1] + 1;
                *(CowData<char32_t> **)*local_98 = pCVar11;
                if (pCVar2 == pCVar14) goto LAB_0010c7e0;
              }
              pCVar14 = pCVar14 + 8;
              *(int *)local_98[1] = *(int *)local_98[1] + 1;
            } while (pCVar2 != pCVar14);
          }
LAB_0010c7e0:
          local_90[0] = (char *)0x0;
          local_78 = "--path";
          local_70 = 6;
          String::parse_latin1((StrRange *)local_90);
          if (local_98 == (undefined1 (*) [16])0x0) {
            local_98 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)local_98[1] = 0;
            *local_98 = (undefined1  [16])0x0;
          }
          pCVar11 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])pCVar11 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar11 + 0x10) = (undefined1  [16])0x0;
          if (local_90[0] != (char *)0x0) {
            CowData<char32_t>::_ref(pCVar11,(CowData *)local_90);
          }
          lVar10 = *(long *)(*local_98 + 8);
          *(undefined8 *)(pCVar11 + 8) = 0;
          *(undefined1 (**) [16])(pCVar11 + 0x18) = local_98;
          *(long *)(pCVar11 + 0x10) = lVar10;
          if (lVar10 != 0) {
            *(CowData<char32_t> **)(lVar10 + 8) = pCVar11;
          }
          lVar10 = *(long *)*local_98;
          *(CowData<char32_t> **)(*local_98 + 8) = pCVar11;
          if (lVar10 == 0) {
            *(CowData<char32_t> **)*local_98 = pCVar11;
          }
          *(int *)local_98[1] = *(int *)local_98[1] + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
          List<String,DefaultAllocator>::push_back
                    ((List<String,DefaultAllocator> *)&local_98,(String *)(lVar13 + 0x30));
          plVar12 = (long *)OS::get_singleton();
          lVar10 = *plVar12;
          if (*(code **)(lVar10 + 0x120) == OS::create_instance) {
            pcVar5 = *(code **)(lVar10 + 0x118);
            (**(code **)(lVar10 + 0x100))((String *)&local_78,plVar12);
            iVar9 = (*pcVar5)(plVar12,(String *)&local_78,(CowData<char32_t> *)&local_98,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          }
          else {
            iVar9 = (**(code **)(lVar10 + 0x120))(plVar12,(CowData<char32_t> *)&local_98,0);
          }
          if (iVar9 != 0) {
            _err_print_error("_run_project_confirm","editor/project_manager.cpp",0x1db,
                             "Condition \"err\" is true.",0,0);
            List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_98);
            break;
          }
          List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_98);
        }
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x70;
    } while (local_80 != 0);
  }
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)&local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectManager::_run_project() */

void __thiscall ProjectManager::_run_project(ProjectManager *this)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  String local_60 [8];
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ProjectList::get_selected_project_keys();
  if (*(int *)(lVar2 + 0x24) != 0) {
    if (*(int *)(lVar2 + 0x24) == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _run_project_confirm(this);
        return;
      }
      goto LAB_0010cac6;
    }
    uVar1 = *(undefined8 *)(this + 0xbd8);
    local_68 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "Are you sure to run %d projects at once?";
    local_70 = 0;
    local_50 = 0x28;
    String::parse_latin1((StrRange *)&local_70);
    TTR(local_60,(String *)&local_70);
    vformat<unsigned_int>((String *)&local_58,(uint)local_60);
    AcceptDialog::set_text(uVar1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xbd8));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cac6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectManager::_open_selected_projects_check_warnings() */

void __thiscall ProjectManager::_open_selected_projects_check_warnings(ProjectManager *this)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  CowData *pCVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  String *pSVar10;
  long in_FS_OFFSET;
  float fVar11;
  long local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  Vector<String> local_108 [8];
  CowData *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  long local_a8;
  undefined8 local_a0;
  uint local_98;
  int local_94;
  undefined8 local_90;
  int local_80 [2];
  int local_78 [8];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = ProjectList::get_selected_project_keys();
  if (*(int *)(lVar7 + 0x24) != 0) {
    fVar11 = (float)EditorScale::get_scale();
    local_80[1] = 0;
    local_80[0] = (int)((double)fVar11 * __LC297);
    if (*(uint *)(lVar7 + 0x24) < 2) {
      ProjectList::get_selected_projects();
      pCVar5 = local_100;
      if (local_100 == (CowData *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(local_100 + -8);
        if (0 < lVar7) {
          local_f8 = 0;
          if (*(long *)local_100 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,local_100);
          }
          local_f0 = 0;
          if (*(long *)(pCVar5 + 8) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,pCVar5 + 8);
          }
          local_e8[0] = 0;
          if (*(long *)(pCVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,pCVar5 + 0x10);
          }
          local_d8 = 0;
          if (*(long *)(pCVar5 + 0x20) != 0) {
            CowData<String>::_ref((CowData<String> *)&local_d8,pCVar5 + 0x20);
          }
          local_d0 = 0;
          if (*(long *)(pCVar5 + 0x28) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,pCVar5 + 0x28);
          }
          local_c8 = 0;
          if (*(long *)(pCVar5 + 0x30) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,pCVar5 + 0x30);
          }
          local_c0 = 0;
          if (*(long *)(pCVar5 + 0x38) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,pCVar5 + 0x38);
          }
          local_b8[0] = 0;
          if (*(long *)(pCVar5 + 0x40) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,pCVar5 + 0x40);
          }
          local_a8 = 0;
          if (*(long *)(pCVar5 + 0x50) != 0) {
            CowData<String>::_ref((CowData<String> *)&local_a8,pCVar5 + 0x50);
          }
          local_a0 = *(undefined8 *)(pCVar5 + 0x58);
          uVar1 = *(uint *)(pCVar5 + 0x60);
          iVar2 = *(int *)(pCVar5 + 100);
          local_90 = *(undefined8 *)(pCVar5 + 0x68);
          local_98 = uVar1;
          local_94 = iVar2;
          CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)&local_100);
          if ((uVar1 & 0x10000) == 0) {
            local_100 = (CowData *)0x0;
            if (local_a8 != 0) {
              CowData<String>::_ref((CowData<String> *)&local_100,(CowData *)&local_a8);
            }
            uVar3 = *(undefined8 *)(*(long *)(this + 0xc80) + 0xd78);
            Label::set_horizontal_alignment(uVar3,0);
            CanvasItem::hide();
            pSVar10 = *(String **)(*(long *)(this + 0xc80) + 0xd88);
            local_110 = 0;
            String::parse_latin1((String *)&local_110,"OK");
            Button::set_text(pSVar10);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
            lVar7 = local_c8;
            if (iVar2 == 0) {
              uVar3 = *(undefined8 *)(this + 0xc80);
              local_118 = 0;
              if (local_c8 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_c8);
              }
              local_120 = 0;
              if (local_f8 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_f8);
              }
              local_130 = 0;
              String::parse_latin1((String *)&local_130,"");
              local_138 = 0;
              String::parse_latin1
                        ((String *)&local_138,
                         "The selected project \"%s\" does not specify its supported Godot version in its configuration file (\"project.godot\").\n\nProject path: %s\n\nIf you proceed with opening it, it will be converted to Godot\'s current configuration file format.\n\nWarning: You won\'t be able to open the project with previous versions of the engine anymore."
                        );
              TTR((String *)&local_128,(String *)&local_138);
              vformat<String,String>
                        ((String *)&local_110,(String *)&local_128,(CowData<char32_t> *)&local_120,
                         (CowData<char32_t> *)&local_118);
              AcceptDialog::set_text(uVar3,(String *)&local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
              Window::popup_centered(*(Vector2i **)(this + 0xc80));
            }
            else if (iVar2 < 5) {
              if (iVar2 == 4) {
                CanvasItem::show();
                uVar3 = *(undefined8 *)(this + 0xc80);
                local_118 = 0;
                if (lVar7 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_c8);
                }
                local_120 = 0;
                if (local_f8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_f8);
                }
                local_130 = 0;
                String::parse_latin1((String *)&local_130,"");
                local_138 = 0;
                String::parse_latin1
                          ((String *)&local_138,
                           "The selected project \"%s\" was generated by Godot 3.x, and needs to be converted for Godot 4.x.\n\nProject path: %s\n\nYou have three options:\n- Convert only the configuration file (\"project.godot\"). Use this to open the project without attempting to convert its scenes, resources and scripts.\n- Convert the entire project including its scenes, resources and scripts (recommended if you are upgrading).\n- Do nothing and go back.\n\nWarning: If you select a conversion option, you won\'t be able to open the project with previous versions of the engine anymore."
                          );
                TTR((String *)&local_128,(String *)&local_138);
                vformat<String,String>
                          ((String *)&local_110,(String *)&local_128,(CowData<char32_t> *)&local_120
                           ,(CowData<char32_t> *)&local_118);
                AcceptDialog::set_text(uVar3,(String *)&local_110);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                pSVar10 = *(String **)(*(long *)(this + 0xc80) + 0xd88);
                local_118 = 0;
                String::parse_latin1((String *)&local_118,"");
                pcVar9 = "Convert project.godot Only";
              }
              else {
                uVar3 = *(undefined8 *)(this + 0xc80);
                local_118 = 0;
                if (local_c8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_c8);
                }
                local_120 = 0;
                if (local_f8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_f8);
                }
                local_130 = 0;
                String::parse_latin1((String *)&local_130,"");
                local_138 = 0;
                String::parse_latin1
                          ((String *)&local_138,
                           "The selected project \"%s\" was generated by an older engine version, and needs to be converted for this version.\n\nProject path: %s\n\nDo you want to convert it?\n\nWarning: You won\'t be able to open the project with previous versions of the engine anymore."
                          );
                TTR((String *)&local_128,(String *)&local_138);
                vformat<String,String>
                          ((String *)&local_110,(String *)&local_128,(CowData<char32_t> *)&local_120
                           ,(CowData<char32_t> *)&local_118);
                AcceptDialog::set_text(uVar3,(String *)&local_110);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                pSVar10 = *(String **)(*(long *)(this + 0xc80) + 0xd88);
                local_118 = 0;
                String::parse_latin1((String *)&local_118,"");
                pcVar9 = "Convert project.godot";
              }
              local_120 = 0;
              String::parse_latin1((String *)&local_120,pcVar9);
              TTR((String *)&local_110,(String *)&local_120);
              Button::set_text(pSVar10);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
              Window::popup_centered(*(Vector2i **)(this + 0xc80));
              ConfirmationDialog::get_cancel_button();
              Control::grab_focus();
            }
            else if (iVar2 == 5) {
              if (local_100 == (CowData *)0x0) {
                _open_selected_projects(this);
                CowData<String>::_unref((CowData<String> *)&local_100);
                ProjectList::Item::~Item((Item *)&local_f8);
                goto LAB_0010cb0e;
              }
              local_140 = 0;
              String::parse_latin1((String *)&local_140,"");
              if (local_100 != (CowData *)0x0) {
                iVar2 = 0;
                lVar7 = 0;
                do {
                  if (*(long *)(local_100 + -8) <= lVar7) {
                    local_110 = 0;
                    String::parse_latin1((String *)&local_110,", ");
                    String::join((CowData *)&local_138);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                    local_118 = 0;
                    if (local_138 != 0) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_138)
                      ;
                    }
                    local_128 = 0;
                    String::parse_latin1((String *)&local_128,"");
                    local_130 = 0;
                    String::parse_latin1
                              ((String *)&local_130,
                               "Warning: This project uses the following features not supported by this build of Godot:\n\n%s\n\n"
                              );
                    TTR((String *)&local_120,(String *)&local_130);
                    vformat<String>((String *)&local_110,(String *)&local_120,(String *)&local_118);
                    String::operator+=((String *)&local_140,(String *)&local_110);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                    break;
                  }
                  lVar8 = (long)iVar2;
                  pSVar10 = (String *)(local_100 + lVar8 * 8);
                  cVar6 = String::operator==(pSVar10,"Double Precision");
                  if (cVar6 == '\0') {
                    cVar6 = String::operator==(pSVar10,"C#");
                    if (cVar6 != '\0') {
                      local_118 = 0;
                      String::parse_latin1((String *)&local_118,"");
                      pcVar9 = 
                      "Warning: This project uses C#, but this build of Godot does not have\nthe Mono module. If you proceed you will not be able to use any C# scripts.\n\n"
                      ;
                      goto LAB_0010cebb;
                    }
                    cVar6 = ProjectList::project_feature_looks_like_version(pSVar10);
                    if (cVar6 == '\0') {
                      iVar2 = iVar2 + 1;
                      lVar8 = (long)iVar2;
                    }
                    else {
                      if (*(long *)(this + 0xc90) != *(long *)pSVar10) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)(this + 0xc90),(CowData *)pSVar10);
                      }
                      Variant::Variant((Variant *)local_58,"4.4");
                      Variant::Variant((Variant *)local_78,pSVar10);
                      local_120 = 0;
                      String::parse_latin1((String *)&local_120,"");
                      local_128 = 0;
                      String::parse_latin1
                                ((String *)&local_128,
                                 "Warning: This project was last edited in Godot %s. Opening will change it to Godot %s.\n\n"
                                );
                      TTR((String *)&local_118,(String *)&local_128);
                      vformat<Variant,Variant>
                                ((String *)&local_110,(String *)&local_118,(Variant *)local_78,
                                 (Variant *)local_58);
                      String::operator+=((String *)&local_140,(String *)&local_110);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                      if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      Vector<String>::remove_at(local_108,lVar7);
                    }
                  }
                  else {
                    local_118 = 0;
                    String::parse_latin1((String *)&local_118,"");
                    pcVar9 = 
                    "Warning: This project uses double precision floats, but this version of\nGodot uses single precision floats. Opening this project may cause data loss.\n\n"
                    ;
LAB_0010cebb:
                    local_120 = 0;
                    String::parse_latin1((String *)&local_120,pcVar9);
                    TTR((String *)&local_110,(String *)&local_120);
                    String::operator+=((String *)&local_140,(String *)&local_110);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    Vector<String>::remove_at(local_108,lVar7);
                  }
                  lVar7 = lVar8;
                } while (local_100 != (CowData *)0x0);
              }
              local_118 = 0;
              String::parse_latin1((String *)&local_118,"");
              local_120 = 0;
              String::parse_latin1((String *)&local_120,"Open anyway? Project will be modified.");
              TTR((String *)&local_110,(String *)&local_120);
              String::operator+=((String *)&local_140,(String *)&local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
              Label::set_horizontal_alignment(uVar3,1);
              local_110 = 0;
              uVar3 = *(undefined8 *)(this + 0xc80);
              if (local_140 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_140);
              }
              AcceptDialog::set_text(uVar3,(String *)&local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
              Window::popup_centered(*(Vector2i **)(this + 0xc80));
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
            }
            else {
              local_58[0] = Vector2i::operator_cast_to_Vector2((Vector2i *)local_80);
              local_118 = 0;
              if (local_c8 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_c8);
              }
              local_120 = 0;
              if (local_f8 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_f8);
              }
              local_130 = 0;
              String::parse_latin1((String *)&local_130,"");
              local_138 = 0;
              String::parse_latin1
                        ((String *)&local_138,
                         "Can\'t open project \"%s\" at the following path:\n\n%s\n\nThe project settings were created by a newer engine version, whose settings are not compatible with this version."
                        );
              TTR((String *)&local_128,(String *)&local_138);
              vformat<String,String>
                        ((String *)&local_110,(String *)&local_128,(CowData<char32_t> *)&local_120,
                         (CowData<char32_t> *)&local_118);
              _show_error(this,(String *)&local_110,(Vector2 *)local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
            }
            CowData<String>::_unref((CowData<String> *)&local_100);
          }
          CowData<String>::_unref((CowData<String> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<String>::_unref((CowData<String> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          goto LAB_0010cb0e;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar3 = *(undefined8 *)(this + 0xbd0);
    local_110 = 0;
    String::parse_latin1((String *)&local_110,"");
    local_118 = 0;
    String::parse_latin1
              ((String *)&local_118,
               "You requested to open %d projects in parallel. Do you confirm?\nNote that usual checks for engine version compatibility will be bypassed."
              );
    TTR((String *)local_108,(String *)&local_118);
    vformat<unsigned_int>((String *)&local_f8,(uint)(String *)local_108);
    AcceptDialog::set_text(uVar3,(String *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    Window::popup_centered(*(Vector2i **)(this + 0xbd0));
  }
LAB_0010cb0e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectManager::_on_recovery_mode_popup_open_normal() */

void __thiscall ProjectManager::_on_recovery_mode_popup_open_normal(ProjectManager *this)

{
  Window::hide();
  this[0xc98] = (ProjectManager)0x0;
  _open_selected_projects_check_warnings(this);
  return;
}



/* ProjectManager::_on_recovery_mode_popup_open_recovery() */

void __thiscall ProjectManager::_on_recovery_mode_popup_open_recovery(ProjectManager *this)

{
  this[0xc98] = (ProjectManager)0x1;
  _open_selected_projects_check_warnings(this);
  return;
}



/* ProjectManager::_on_project_created(String const&, bool) */

void __thiscall
ProjectManager::_on_project_created(ProjectManager *this,String *param_1,bool param_2)

{
  int iVar1;
  
  ProjectList::add_project(*(String **)(this + 0xb20),SUB81(param_1,0));
  ProjectList::save_config();
  LineEdit::clear();
  ProjectList::refresh_project(*(String **)(this + 0xb20));
  ProjectList::select_project((int)*(undefined8 *)(this + 0xb20));
  ProjectList::ensure_project_visible((int)*(undefined8 *)(this + 0xb20));
  _update_project_buttons(this);
  iVar1 = ProjectList::get_project_count();
  if (iVar1 < 1) {
    _update_list_placeholder(this);
  }
  else {
    CanvasItem::hide();
  }
  if (!param_2) {
    ProjectList::update_dock_menu();
    return;
  }
  _open_selected_projects_check_warnings(this);
  ProjectList::update_dock_menu();
  return;
}



/* ProjectManager::_open_selected_projects_check_recovery_mode() */

void __thiscall ProjectManager::_open_selected_projects_check_recovery_mode(ProjectManager *this)

{
  code *pcVar1;
  long in_FS_OFFSET;
  long local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectList::get_selected_projects();
  if (local_20[0] != 0) {
    if (*(long *)(local_20[0] + -8) < 1) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,*(long *)(local_20[0] + -8),"p_index",
                 "size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (*(char *)(local_20[0] + 0x62) == '\0') {
      this[0xc98] = (ProjectManager)0x0;
      if (*(char *)(local_20[0] + 99) == '\0') {
        _open_selected_projects_check_warnings(this);
        CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)local_20);
        goto LAB_0010dbfc;
      }
      _open_recovery_mode_ask(this,false);
    }
  }
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)local_20);
LAB_0010dbfc:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_on_search_term_submitted(String const&) */

void ProjectManager::_on_search_term_submitted(String *param_1)

{
  if (*(int *)(param_1 + 0xa58) != 0) {
    return;
  }
  _open_selected_projects_check_recovery_mode((ProjectManager *)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectManager::shortcut_input(Ref<InputEvent> const&) */

void __thiscall ProjectManager::shortcut_input(ProjectManager *this,Ref *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("shortcut_input","editor/project_manager.cpp",0x407,
                       "Condition \"p_ev.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_0010df95;
  }
  pOVar6 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0);
  if ((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    cVar3 = InputEvent::is_pressed();
    if (cVar3 == '\0') {
switchD_0010dd9a_caseD_400006:
      cVar3 = RefCounted::unreference();
    }
    else {
      iVar4 = InputEventKey::get_keycode_with_modifiers();
      if (iVar4 == 0x8000051) {
        uVar7 = _LC5;
        uVar8 = _UNK_00126738;
        CanvasItem::set_modulate((Color *)this);
        lVar2 = *(long *)(this + 0x240);
        if (lVar2 == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0,uVar7,uVar8);
        }
        SceneTree::quit((int)lVar2);
      }
      if (*(int *)(this + 0xa58) != 0) goto switchD_0010dd9a_caseD_400006;
      iVar4 = InputEventKey::get_keycode();
      if (iVar4 == 0x46) {
        cVar3 = InputEventWithModifiers::is_command_or_control_pressed();
        if (cVar3 != '\0') {
          Control::grab_focus();
          goto LAB_0010de30;
        }
        goto switchD_0010dd9a_caseD_400006;
      }
      switch(iVar4) {
      case 0x400005:
        _open_selected_projects_check_recovery_mode(this);
        break;
      default:
        goto switchD_0010dd9a_caseD_400006;
      case 0x40000d:
        iVar4 = ProjectList::get_project_count();
        if (0 < iVar4) {
          ProjectList::select_project((int)*(undefined8 *)(this + 0xb20));
          _update_project_buttons(this);
        }
        break;
      case 0x40000e:
        iVar4 = ProjectList::get_project_count();
        if (0 < iVar4) {
          uVar7 = *(undefined8 *)(this + 0xb20);
          ProjectList::get_project_count();
          ProjectList::select_project((int)uVar7);
          _update_project_buttons(this);
        }
        break;
      case 0x400010:
        cVar3 = InputEventWithModifiers::is_shift_pressed();
        if ((cVar3 == '\0') && (iVar4 = ProjectList::get_single_selected_index(), 0 < iVar4)) {
LAB_0010de70:
          ProjectList::select_project((int)*(undefined8 *)(this + 0xb20));
          ProjectList::ensure_project_visible((int)*(undefined8 *)(this + 0xb20));
          _update_project_buttons(this);
        }
        break;
      case 0x400012:
        cVar3 = InputEventWithModifiers::is_shift_pressed();
        if (cVar3 == '\0') {
          iVar4 = ProjectList::get_single_selected_index();
          iVar5 = ProjectList::get_project_count();
          if (iVar4 + 1 < iVar5) goto LAB_0010de70;
        }
      }
LAB_0010de30:
      Control::accept_event();
      cVar3 = RefCounted::unreference();
    }
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar6,false);
        return;
      }
      goto LAB_0010df95;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010df95:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_open_selected_projects_with_migration() */

void __thiscall ProjectManager::_open_selected_projects_with_migration(ProjectManager *this)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectList::get_selected_projects();
  if (local_30[0] == 0) {
    CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)local_30);
  }
  else {
    lVar1 = *(long *)(local_30[0] + -8);
    CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)local_30);
    if (lVar1 == 1) {
      _minor_project_migrate(this);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _open_selected_projects(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_perform_full_project_conversion() */

void __thiscall ProjectManager::_perform_full_project_conversion(ProjectManager *this)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  CowData<char32_t> *this_00;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 (*local_88) [16];
  undefined8 local_80 [2];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectList::get_selected_projects();
  if (local_70 != 0) {
    if (*(long *)(local_70 + -8) < 1) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,*(long *)(local_70 + -8),"p_index",
                 "size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    operator+((char *)local_80,(String *)"Converting project: ");
    Variant::Variant((Variant *)local_58,(String *)local_80);
    stringify_variants((Variant *)&local_68);
    __print_line((String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    local_68 = "--path";
    local_88 = (undefined1 (*) [16])0x0;
    local_80[0] = 0;
    local_60 = 6;
    String::parse_latin1((StrRange *)local_80);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_88,(String *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    if (local_88 == (undefined1 (*) [16])0x0) {
      local_88 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_88[1] = 0;
      *local_88 = (undefined1  [16])0x0;
    }
    this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
    if (*(long *)(local_70 + 0x30) != 0) {
      CowData<char32_t>::_ref(this_00,(CowData *)(local_70 + 0x30));
    }
    lVar1 = *(long *)(*local_88 + 8);
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined1 (**) [16])(this_00 + 0x18) = local_88;
    *(long *)(this_00 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(CowData<char32_t> **)(lVar1 + 8) = this_00;
    }
    lVar1 = *(long *)*local_88;
    *(CowData<char32_t> **)(*local_88 + 8) = this_00;
    if (lVar1 == 0) {
      *(CowData<char32_t> **)*local_88 = this_00;
    }
    *(int *)local_88[1] = *(int *)local_88[1] + 1;
    local_68 = "--convert-3to4";
    local_80[0] = 0;
    local_60 = 0xe;
    String::parse_latin1((StrRange *)local_80);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_88,(String *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    local_68 = "--rendering-driver";
    local_80[0] = 0;
    local_60 = 0x12;
    String::parse_latin1((StrRange *)local_80);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_88,(String *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    Main::get_rendering_driver_name();
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_88,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    plVar4 = (long *)OS::get_singleton();
    lVar1 = *plVar4;
    if (*(code **)(lVar1 + 0x120) == OS::create_instance) {
      pcVar2 = *(code **)(lVar1 + 0x118);
      (**(code **)(lVar1 + 0x100))((Variant *)&local_68,plVar4);
      iVar3 = (*pcVar2)(plVar4,(Variant *)&local_68,(List<String,DefaultAllocator> *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    else {
      iVar3 = (**(code **)(lVar1 + 0x120))(plVar4,(List<String,DefaultAllocator> *)&local_88,0);
    }
    if (iVar3 == 0) {
      ProjectList::set_project_version(*(String **)(this + 0xb20),(int)(CowData *)(local_70 + 0x30))
      ;
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_88);
      CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)&local_70);
      goto LAB_0010e2c9;
    }
    _err_print_error("_perform_full_project_conversion","editor/project_manager.cpp",0x3ff,
                     "Condition \"err\" is true.",0,0);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_88);
  }
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)&local_70);
LAB_0010e2c9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_apply_project_tags() */

void __thiscall ProjectManager::_apply_project_tags(ProjectManager *this)

{
  long *plVar1;
  uint uVar2;
  String *pSVar3;
  long lVar4;
  code *pcVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ProjectSettings *this_00;
  long lVar10;
  long lVar11;
  long lVar12;
  CowData<char32_t> *pCVar13;
  void *pvVar14;
  CowData *pCVar15;
  CowData<char32_t> *pCVar16;
  long lVar17;
  CowData<char32_t> *pCVar18;
  long in_FS_OFFSET;
  bool bVar19;
  CowData<char32_t> *local_120;
  CowData<String> *local_f8;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  Vector<String> local_a8 [8];
  String *local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  iVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (String *)0x0;
  while( true ) {
    iVar8 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xc40),0));
    if (iVar8 <= iVar9) break;
    lVar12 = Node::get_child((int)*(undefined8 *)(this + 0xc40),SUB41(iVar9,0));
    if ((lVar12 != 0) &&
       (lVar12 = __dynamic_cast(lVar12,&Object::typeinfo,&ProjectTag::typeinfo), lVar12 != 0)) {
      ProjectTag::get_tag();
      local_88 = (char *)0x0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_98);
      }
      Vector<String>::push_back(local_a8,(CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
    iVar9 = iVar9 + 1;
  }
  ProjectList::get_selected_projects();
  if (local_90 == 0) {
    lVar12 = 0;
LAB_0010f131:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar12,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar12 = *(long *)(local_90 + -8);
  if (lVar12 < 1) goto LAB_0010f131;
  local_b0 = 0;
  local_88 = "project.godot";
  local_80._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  String::path_join((String *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)&local_90);
  this_00 = (ProjectSettings *)operator_new(0x328,"");
  ProjectSettings::ProjectSettings(this_00,(String *)&local_c8);
  postinitialize_handler((Object *)this_00);
  cVar7 = ProjectSettings::is_project_loaded();
  if (cVar7 == '\0') {
    cVar7 = predelete_handler((Object *)this_00);
    if (cVar7 != '\0') {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
    pSVar3 = *(String **)(this + 0xc50);
    local_98 = 0;
    if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_c8);
    }
    local_b8 = 0;
    local_88 = "";
    local_80._0_8_ = 0;
    String::parse_latin1((StrRange *)&local_b8);
    local_88 = "Couldn\'t load project at \'%s\'. It may be missing or corrupted.";
    local_c0 = 0;
    local_80._0_8_ = 0x3e;
    String::parse_latin1((StrRange *)&local_c0);
    TTR((String *)&local_b0,(String *)&local_c0);
    vformat<String>((CowData<char32_t> *)&local_88,(StrRange *)&local_b0,
                    (CowData<char32_t> *)&local_98);
    Label::set_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CanvasItem::show();
    create_custom_callable_function_pointer<Window>
              ((Window *)&local_88,*(char **)(this + 0xc38),(_func_void *)"&Window::show");
    Variant::Variant((Variant *)local_58,0);
    Callable::call_deferredp((Variant **)&local_88,0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_88);
  }
  else {
    if (local_a0 != (String *)0x0) {
      lVar12 = *(long *)(local_a0 + -8);
      if (lVar12 != 0) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_a0);
        pSVar3 = local_a0;
        if (lVar12 == 1) {
          SortArray<String,_DefaultComparator<String>,true>::introsort(0,1,local_a0,0);
        }
        else {
          lVar11 = 0;
          lVar17 = lVar12;
          do {
            lVar17 = lVar17 >> 1;
            lVar11 = lVar11 + 1;
          } while (lVar17 != 1);
          SortArray<String,_DefaultComparator<String>,true>::introsort(0,lVar12,local_a0,lVar11 * 2)
          ;
          pCVar13 = (CowData<char32_t> *)(pSVar3 + 8);
          if (lVar12 < 0x11) {
            local_120 = (CowData<char32_t> *)0x1;
            pCVar16 = pCVar13;
            do {
              local_88 = (char *)0x0;
              plVar1 = (long *)(*(long *)pCVar16 + -0x10);
              if (*(long *)pCVar16 != 0) {
                do {
                  lVar17 = *plVar1;
                  if (lVar17 == 0) goto LAB_0010ef6e;
                  LOCK();
                  lVar11 = *plVar1;
                  bVar19 = lVar17 == lVar11;
                  if (bVar19) {
                    *plVar1 = lVar17 + 1;
                    lVar11 = lVar17;
                  }
                  UNLOCK();
                } while (!bVar19);
                if (lVar11 != -1) {
                  local_88 = *(char **)pCVar16;
                }
              }
LAB_0010ef6e:
              cVar7 = String::operator<((String *)&local_88,pSVar3);
              pCVar15 = (CowData *)pCVar16;
              pCVar18 = local_120;
              if (cVar7 == '\0') {
                local_98 = 0;
                if (local_88 != (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_88);
                }
                while( true ) {
                  pCVar18 = (CowData<char32_t> *)pCVar15;
                  pCVar15 = (CowData *)(pCVar18 + -8);
                  cVar7 = String::operator<((String *)&local_98,(String *)pCVar15);
                  if (cVar7 == '\0') break;
                  if (pCVar18 == pCVar13) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    break;
                  }
                  if (*(long *)pCVar18 != *(long *)(pCVar18 + -8)) {
                    CowData<char32_t>::_ref(pCVar18,pCVar15);
                  }
                }
                if (*(long *)pCVar18 != local_98) {
                  CowData<char32_t>::_ref(pCVar18,(CowData *)&local_98);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              }
              else {
                do {
                  if (*(long *)pCVar15 != *(long *)((CowData<char32_t> *)pCVar15 + -8)) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)pCVar15,
                               (CowData *)((CowData<char32_t> *)pCVar15 + -8));
                  }
                  pCVar18 = (CowData<char32_t> *)((long)pCVar18 + -1);
                  pCVar15 = (CowData *)((CowData<char32_t> *)pCVar15 + -8);
                } while (pCVar18 != (CowData<char32_t> *)0x0);
                if (*(char **)pSVar3 != local_88) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)pSVar3,(CowData *)&local_88);
                }
              }
              pcVar6 = local_88;
              if (local_88 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_88 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_88 = (char *)0x0;
                  Memory::free_static(pcVar6 + -0x10,false);
                }
              }
              local_120 = (CowData<char32_t> *)((long)local_120 + 1);
              pCVar16 = pCVar16 + 8;
            } while ((CowData<char32_t> *)lVar12 != local_120);
          }
          else {
            local_120 = (CowData<char32_t> *)0x1;
            pCVar16 = pCVar13;
            do {
              local_88 = (char *)0x0;
              plVar1 = (long *)(*(long *)pCVar16 + -0x10);
              if (*(long *)pCVar16 != 0) {
                do {
                  lVar17 = *plVar1;
                  if (lVar17 == 0) goto LAB_0010ea5e;
                  LOCK();
                  lVar11 = *plVar1;
                  bVar19 = lVar17 == lVar11;
                  if (bVar19) {
                    *plVar1 = lVar17 + 1;
                    lVar11 = lVar17;
                  }
                  UNLOCK();
                } while (!bVar19);
                if (lVar11 != -1) {
                  local_88 = *(char **)pCVar16;
                }
              }
LAB_0010ea5e:
              cVar7 = String::operator<((String *)&local_88,pSVar3);
              pCVar18 = pCVar16;
              if (cVar7 == '\0') {
                local_98 = 0;
                pCVar15 = (CowData *)pCVar16;
                if (local_88 != (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_88);
                }
                while( true ) {
                  pCVar18 = (CowData<char32_t> *)pCVar15;
                  pCVar15 = (CowData *)(pCVar18 + -8);
                  cVar7 = String::operator<((String *)&local_98,(String *)pCVar15);
                  if (cVar7 == '\0') break;
                  if (pCVar13 == pCVar18) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    break;
                  }
                  if (*(long *)pCVar18 != *(long *)(pCVar18 + -8)) {
                    CowData<char32_t>::_ref(pCVar18,pCVar15);
                  }
                }
                if (*(long *)pCVar18 != local_98) {
                  CowData<char32_t>::_ref(pCVar18,(CowData *)&local_98);
                }
                lVar17 = local_98;
                if (local_98 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_98 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_98 = 0;
                    Memory::free_static((void *)(lVar17 + -0x10),false);
                  }
                }
              }
              else {
                do {
                  pCVar15 = (CowData *)(pCVar18 + -8);
                  if (*(long *)pCVar18 != *(long *)(pCVar18 + -8)) {
                    CowData<char32_t>::_ref(pCVar18,pCVar15);
                  }
                  pCVar18 = (CowData<char32_t> *)pCVar15;
                } while (pCVar15 != (CowData *)pSVar3);
                if ((char *)*(long *)pSVar3 != local_88) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)pSVar3,(CowData *)&local_88);
                }
              }
              pcVar6 = local_88;
              if (local_88 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)((long)local_88 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_88 = (char *)0x0;
                  Memory::free_static((void *)((long)pcVar6 + -0x10),false);
                }
              }
              local_120 = (CowData<char32_t> *)((long)local_120 + 1);
              pCVar16 = pCVar16 + 8;
            } while (local_120 != (CowData<char32_t> *)0x10);
            local_120 = (CowData<char32_t> *)(pSVar3 + 0x80);
            lVar17 = 0x10;
            do {
              local_88 = (char *)0x0;
              plVar1 = (long *)(*(long *)local_120 + -0x10);
              pCVar15 = (CowData *)local_120;
              lVar11 = lVar17;
              if (*(long *)local_120 != 0) {
                do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010ee4c;
                  LOCK();
                  lVar10 = *plVar1;
                  bVar19 = lVar4 == lVar10;
                  if (bVar19) {
                    *plVar1 = lVar4 + 1;
                    lVar10 = lVar4;
                  }
                  UNLOCK();
                } while (!bVar19);
                if (lVar10 != -1) {
                  local_88 = *(char **)local_120;
                }
              }
LAB_0010ee4c:
              pCVar13 = (CowData<char32_t> *)pCVar15;
              lVar11 = lVar11 + -1;
              pCVar15 = (CowData *)(pCVar13 + -8);
              cVar7 = String::operator<((String *)&local_88,(String *)pCVar15);
              if (cVar7 != '\0') {
                if (lVar11 == 0) {
                  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                   "bad comparison function; sorting will be broken",0,0);
                  goto LAB_0010ee90;
                }
                if (*(long *)pCVar13 != *(long *)(pCVar13 + -8)) {
                  CowData<char32_t>::_ref(pCVar13,pCVar15);
                }
                goto LAB_0010ee4c;
              }
LAB_0010ee90:
              if (*(char **)pCVar13 != local_88) {
                CowData<char32_t>::_ref(pCVar13,(CowData *)&local_88);
              }
              pcVar6 = local_88;
              if (local_88 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_88 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_88 = (char *)0x0;
                  Memory::free_static(pcVar6 + -0x10,false);
                }
              }
              lVar17 = lVar17 + 1;
              local_120 = local_120 + 8;
            } while (lVar12 != lVar17);
          }
        }
      }
    }
    local_f8 = (CowData<String> *)&local_a0;
    Variant::Variant((Variant *)local_58,local_a8);
    StringName::StringName((StringName *)&local_88,"application/config/tags",false);
    Object::set((StringName *)this_00,(Variant *)&local_88,(bool *)local_58);
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_90 = 0;
    local_60 = 2;
    local_80 = (undefined1  [16])0x0;
    local_70 = (undefined1  [16])0x0;
    iVar9 = ProjectSettings::save_custom
                      ((String *)this_00,(HashMap *)&local_c8,(CowData<char32_t> *)&local_88,
                       SUB81((CowData<char32_t> *)&local_98,0));
    if ((void *)local_80._0_8_ != (void *)0x0) {
      pvVar14 = (void *)local_80._0_8_;
      if (local_60._4_4_ != 0) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
        if (uVar2 == 0) {
          local_60 = local_60 & 0xffffffff;
          local_70 = (undefined1  [16])0x0;
        }
        else {
          lVar12 = 0;
          do {
            if (*(int *)(local_80._8_8_ + lVar12) != 0) {
              pvVar14 = *(void **)((long)pvVar14 + lVar12 * 2);
              *(int *)(local_80._8_8_ + lVar12) = 0;
              if (Variant::needs_deinit[*(int *)((long)pvVar14 + 0x18)] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar14 + 0x10));
              Memory::free_static(pvVar14,false);
              *(undefined8 *)(local_80._0_8_ + lVar12 * 2) = 0;
              pvVar14 = (void *)local_80._0_8_;
            }
            lVar12 = lVar12 + 4;
          } while (lVar12 != (ulong)uVar2 << 2);
          local_60 = local_60 & 0xffffffff;
          local_70 = (undefined1  [16])0x0;
          if (pvVar14 == (void *)0x0) goto LAB_0010e7a6;
        }
      }
      Memory::free_static(pvVar14,false);
      Memory::free_static((void *)local_80._8_8_,false);
    }
LAB_0010e7a6:
    CowData<String>::_unref((CowData<String> *)&local_90);
    cVar7 = predelete_handler((Object *)this_00);
    if (cVar7 != '\0') {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
    if (iVar9 == 0) {
      _on_projects_updated(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<String>::_unref(local_f8);
      goto LAB_0010e948;
    }
    pSVar3 = *(String **)(this + 0xc50);
    local_98 = 0;
    if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_c8);
    }
    local_b8 = 0;
    local_88 = "";
    local_80._0_8_ = 0;
    String::parse_latin1((StrRange *)&local_b8);
    local_88 = "Couldn\'t save project at \'%s\' (error %d).";
    local_c0 = 0;
    local_80._0_8_ = 0x29;
    String::parse_latin1((StrRange *)&local_c0);
    TTR((String *)&local_b0,(String *)&local_c0);
    vformat<String,Error>
              ((CowData<char32_t> *)&local_88,(StrRange *)&local_b0,(CowData<char32_t> *)&local_98,
               iVar9);
    Label::set_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CanvasItem::show();
    create_custom_callable_function_pointer<Window>
              ((Window *)&local_88,*(char **)(this + 0xc38),(_func_void *)"&Window::show");
    Variant::Variant((Variant *)local_58,0);
    Callable::call_deferredp((Variant **)&local_88,0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_88);
  }
  local_f8 = (CowData<String> *)&local_a0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<String>::_unref(local_f8);
LAB_0010e948:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectManager::_delete_project_tag(String const&) */

void __thiscall ProjectManager::_delete_project_tag(ProjectManager *this,String *param_1)

{
  long *plVar1;
  CowData<String> *this_00;
  char cVar2;
  int iVar3;
  long lVar4;
  Object *pOVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  this_00 = (CowData<String> *)(this + 0xc20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = CowData<String>::find(this_00,param_1,0);
  if (-1 < lVar4) {
    if (*(long *)(this + 0xc20) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(this + 0xc20) + -8);
      if (lVar4 < lVar9) {
        CowData<String>::_copy_on_write(this_00);
        lVar9 = *(long *)(this + 0xc20);
        if (lVar9 == 0) {
          lVar10 = -1;
        }
        else {
          lVar10 = *(long *)(lVar9 + -8) + -1;
          if (lVar4 < lVar10) {
            plVar8 = (long *)(lVar9 + lVar4 * 8);
            do {
              lVar9 = *plVar8;
              lVar6 = plVar8[1];
              if (lVar9 != lVar6) {
                if (lVar9 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar9 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar9 = *plVar8;
                    *plVar8 = 0;
                    Memory::free_static((void *)(lVar9 + -0x10),false);
                  }
                  lVar6 = plVar8[1];
                }
                *plVar8 = lVar6;
                plVar8[1] = 0;
              }
              lVar4 = lVar4 + 1;
              plVar8 = plVar8 + 1;
            } while (lVar10 != lVar4);
          }
        }
        CowData<String>::resize<false>(this_00,lVar10);
        goto LAB_0010f213;
      }
    }
    _err_print_index_error
              ("remove_at","./core/templates/cowdata.h",0xe4,lVar4,lVar9,"p_index","size()","",false
               ,false);
  }
LAB_0010f213:
  iVar7 = 0;
  do {
    iVar3 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xc40),0));
    if (iVar3 <= iVar7) {
LAB_0010f318:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_0010f435:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar4 = Node::get_child((int)*(undefined8 *)(this + 0xc40),SUB41(iVar7,0));
    if (lVar4 != 0) {
      pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&ProjectTag::typeinfo,0);
      if (pOVar5 != (Object *)0x0) {
        ProjectTag::get_tag();
        cVar2 = String::operator==((String *)&local_48,param_1);
        lVar4 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar8 = (long *)(local_48 + -0x10);
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar5);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar5,false);
              return;
            }
            goto LAB_0010f435;
          }
          goto LAB_0010f318;
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



/* ProjectManager::_add_project_tag(String const&) */

void __thiscall ProjectManager::_add_project_tag(ProjectManager *this,String *param_1)

{
  long lVar1;
  ProjectTag *this_00;
  long in_FS_OFFSET;
  undefined8 local_60;
  ProjectManager local_58 [16];
  undefined8 local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = CowData<String>::find((CowData<String> *)(this + 0xc20),param_1,0);
  if (lVar1 == -1) {
    local_48[0] = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_48,(CowData *)param_1);
    }
    Vector<String>::push_back((Vector<String> *)(this + 0xc18),(CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    this_00 = (ProjectTag *)operator_new(0xa28,"");
    ProjectTag::ProjectTag(this_00,param_1,true);
    postinitialize_handler((Object *)this_00);
    Node::add_child(*(undefined8 *)(this + 0xc40),this_00,0,0);
    create_custom_callable_function_pointer<ProjectManager,String_const&>
              (local_58,(char *)this,(_func_void_String_ptr *)"&ProjectManager::_delete_project_tag"
              );
    local_60 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_1);
    }
    Callable::bind<String>((CowData<char32_t> *)local_48,local_58,(CowData<char32_t> *)&local_60);
    ProjectTag::connect_button_to(this_00);
    Callable::~Callable((Callable *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    Callable::~Callable((Callable *)local_58);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_create_new_tag() */

void __thiscall ProjectManager::_create_new_tag(ProjectManager *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Label::get_text();
  lVar2 = local_28;
  if (local_28 != 0) {
    iVar3 = (int)*(undefined8 *)(local_28 + -8);
    if (iVar3 == 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
      if (iVar3 != 1) goto LAB_0010f646;
    }
  }
  Window::hide();
  LineEdit::get_text();
  add_new_tag(this,(String *)&local_28);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  LineEdit::get_text();
  _add_project_tag(this,(String *)&local_28);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
LAB_0010f646:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<Ref<Theme> >::push_back(Ref<Theme>) [clone .isra.0] */

void __thiscall Vector<Ref<Theme>>::push_back(Vector<Ref<Theme>> *this,long *param_2)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<Theme>>::resize<false>((CowData<Ref<Theme>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<Theme>>::_copy_on_write((CowData<Ref<Theme>> *)(this + 8));
      pOVar2 = (Object *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pOVar3 = (Object *)*plVar1;
      if (pOVar2 == pOVar3) {
        return;
      }
      *plVar1 = (long)pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* ProjectManager::_update_theme(bool) */

void ProjectManager::_update_theme(bool param_1)

{
  StringName *pSVar1;
  Ref *pRVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  Node *pNVar9;
  Vector *pVVar10;
  Vector *pVVar11;
  StyleBox *this;
  Object *pOVar12;
  Object *pOVar13;
  char in_SIL;
  undefined7 in_register_00000039;
  StringName *pSVar14;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  pSVar14 = (StringName *)CONCAT71(in_register_00000039,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_SIL != '\0') goto LAB_0010f838;
  local_70 = (Object *)0x0;
  if (((*(long *)(pSVar14 + 0x9f8) != 0) &&
      (pOVar12 = (Object *)
                 __dynamic_cast(*(long *)(pSVar14 + 0x9f8),&Object::typeinfo,&EditorTheme::typeinfo,
                                0), pOVar12 != (Object *)0x0)) &&
     (local_70 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_70 = (Object *)0x0;
  }
  EditorThemeManager::generate_theme((Ref *)&local_68);
  if (local_68 == (Object *)0x0) {
    pOVar12 = *(Object **)(pSVar14 + 0x9f8);
    if (pOVar12 != (Object *)0x0) {
      *(undefined8 *)(pSVar14 + 0x9f8) = 0;
      goto LAB_00111c5b;
    }
  }
  else {
    pOVar13 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&Theme::typeinfo,0);
    pOVar12 = *(Object **)(pSVar14 + 0x9f8);
    if (pOVar12 != pOVar13) {
      *(Object **)(pSVar14 + 0x9f8) = pOVar13;
      if (pOVar13 == (Object *)0x0) {
        if (pOVar12 != (Object *)0x0) goto LAB_00111c5b;
      }
      else {
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          *(undefined8 *)(pSVar14 + 0x9f8) = 0;
        }
        if (pOVar12 != (Object *)0x0) {
LAB_00111c5b:
          cVar6 = RefCounted::unreference();
          if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
        if (local_68 == (Object *)0x0) goto LAB_00110a95;
      }
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
      (**(code **)(*(long *)local_68 + 0x140))(local_68);
      Memory::free_static(local_68,false);
    }
  }
LAB_00110a95:
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  uVar3 = EditorStringNames::singleton;
  plVar4 = *(long **)(pSVar14 + 0x9f8);
  pcVar5 = *(code **)(*plVar4 + 0x1e8);
  if ((_update_theme(bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#1}::operator()()::sname),
     iVar7 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#1}::operator()()::sname);
  }
  (*pcVar5)(plVar4,&_update_theme(bool)::{lambda()#1}::operator()()::sname,uVar3);
  DisplayServer::set_early_window_clear_color_override(1);
LAB_0010f838:
  local_60 = 0;
  pOVar12 = *(Object **)(pSVar14 + 0x9f8);
  if ((pOVar12 == (Object *)0x0) ||
     (local_70 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_70 = (Object *)0x0;
    Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)&local_68,(StringName *)&local_70);
  }
  else {
    Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)&local_68);
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  ThemeDB::get_singleton();
  ThemeDB::get_default_theme();
  Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)&local_68);
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pNVar9 = (Node *)ThemeDB::get_singleton();
  pVVar10 = (Vector *)ThemeDB::get_theme_context(pNVar9);
  if (pVVar10 == (Vector *)0x0) {
    pNVar9 = (Node *)ThemeDB::get_singleton();
    ThemeDB::create_theme_context(pNVar9,pSVar14);
  }
  else {
    ThemeContext::set_themes(pVVar10);
  }
  pVVar10 = (Vector *)Node::get_window();
  if (pVVar10 != (Vector *)0x0) {
    pNVar9 = (Node *)ThemeDB::get_singleton();
    pVVar11 = (Vector *)ThemeDB::get_theme_context(pNVar9);
    if (pVVar11 == (Vector *)0x0) {
      pNVar9 = (Node *)ThemeDB::get_singleton();
      ThemeDB::create_theme_context(pNVar9,pVVar10);
    }
    else {
      ThemeContext::set_themes(pVVar11);
    }
  }
  if ((_update_theme(bool)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#2}::operator()()::sname),
     iVar7 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#2}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#2}::operator()()::sname);
  pSVar1 = *(StringName **)(pSVar14 + 0xa00);
  StringName::StringName((StringName *)&local_70,"margin_left",false);
  iVar7 = (int)(StringName *)&local_70;
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xa00);
  StringName::StringName((StringName *)&local_70,"margin_top",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xa00);
  StringName::StringName((StringName *)&local_70,"margin_bottom",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xa00);
  StringName::StringName((StringName *)&local_70,"margin_right",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xa10);
  StringName::StringName((StringName *)&local_70,"separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xa08);
  if ((_update_theme(bool)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#3}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#3}::operator()()::sname);
  }
  Control::get_theme_stylebox((StringName *)&local_70,pSVar14);
  Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xac0);
  if ((_update_theme(bool)::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#4}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#4}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#4}::operator()()::sname);
  }
  Control::get_theme_stylebox((StringName *)&local_70,pSVar14);
  Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pRVar2 = *(Ref **)(pSVar14 + 0xa40);
  if ((_update_theme(bool)::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#5}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#5}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#5}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  if ((_update_theme(bool)::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#6}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#6}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#6}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  _set_main_view_icon((ProjectManager *)pSVar14,0,(StringName *)&local_70);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  if ((_update_theme(bool)::{lambda()#7}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#7}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#7}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#7}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  _set_main_view_icon((ProjectManager *)pSVar14,1,(StringName *)&local_70);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pSVar1 = *(StringName **)(pSVar14 + 0xb38);
  if ((_update_theme(bool)::{lambda()#8}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#8}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#8}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#8}::operator()()::sname);
  }
  Control::get_theme_font((StringName *)&local_70,pSVar14);
  Control::add_theme_font_override(pSVar1,(Ref *)(SceneStringNames::singleton + 0xa0));
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb48);
  if ((_update_theme(bool)::{lambda()#10}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#10}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#10}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#10}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#10}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#9}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#9}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#9}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#9}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#9}::operator()()::sname);
  }
  Control::get_theme_stylebox((StringName *)&local_70,pSVar14);
  Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pRVar2 = *(Ref **)(pSVar14 + 0xb00);
  if ((_update_theme(bool)::{lambda()#11}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#11}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#11}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#11}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#11}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb08);
  if ((_update_theme(bool)::{lambda()#12}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#12}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#12}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#12}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#12}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb10);
  if ((_update_theme(bool)::{lambda()#13}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#13}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#13}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#13}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#13}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pSVar1 = *(StringName **)(pSVar14 + 0xb18);
  if ((_update_theme(bool)::{lambda()#14}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#14}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#14}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#14}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#14}::operator()()::sname);
  }
  Control::get_theme_font((StringName *)&local_70,pSVar14);
  Control::add_theme_font_override(pSVar1,(Ref *)(SceneStringNames::singleton + 0xa0));
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb18);
  if ((_update_theme(bool)::{lambda()#15}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#15}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#15}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#15}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#15}::operator()()::sname);
  }
  local_58 = Control::get_theme_color
                       (pSVar14,(StringName *)
                                &_update_theme(bool)::{lambda()#15}::operator()()::sname);
  Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
  pRVar2 = *(Ref **)(pSVar14 + 0xb30);
  if ((_update_theme(bool)::{lambda()#16}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#16}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#16}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#16}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#16}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  LineEdit::set_right_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xa50);
  if ((_update_theme(bool)::{lambda()#17}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#17}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#17}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#17}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#17}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb50);
  if ((_update_theme(bool)::{lambda()#18}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#18}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#18}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#18}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#18}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb58);
  if ((_update_theme(bool)::{lambda()#19}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#19}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#19}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#19}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#19}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb60);
  if ((_update_theme(bool)::{lambda()#20}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#20}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#20}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#20}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#20}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb68);
  if ((_update_theme(bool)::{lambda()#21}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#21}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#21}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#21}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#21}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb70);
  if ((_update_theme(bool)::{lambda()#22}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#22}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#22}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#22}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#22}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb78);
  if ((_update_theme(bool)::{lambda()#23}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#23}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#23}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#23}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#23}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb80);
  if ((_update_theme(bool)::{lambda()#24}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#24}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#24}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#24}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#24}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb88);
  StringName::StringName((StringName *)&local_78,"Script",false);
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  pRVar2 = *(Ref **)(pSVar14 + 0xb90);
  if ((_update_theme(bool)::{lambda()#25}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#25}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#25}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#25}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#25}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xb98);
  if ((_update_theme(bool)::{lambda()#26}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#26}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#26}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#26}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#26}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(pSVar14 + 0xc58);
  StringName::StringName((StringName *)&local_78,"Add",false);
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xc70);
  StringName::StringName((StringName *)&local_70,"error_color",false);
  local_58 = Control::get_theme_color(pSVar14,(StringName *)&local_70);
  Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xc50);
  StringName::StringName((StringName *)&local_70,"error_color",false);
  local_58 = Control::get_theme_color(pSVar14,(StringName *)&local_70);
  Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb50);
  if ((_update_theme(bool)::{lambda()#28}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#28}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#28}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#28}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#28}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#27}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#27}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#27}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#27}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#27}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#27}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb58);
  if ((_update_theme(bool)::{lambda()#30}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#30}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#30}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#30}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#30}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#29}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#29}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#29}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#29}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#29}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#29}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb60);
  if ((_update_theme(bool)::{lambda()#32}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#32}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#32}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#32}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#32}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#31}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#31}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#31}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#31}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#31}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#31}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb68);
  if ((_update_theme(bool)::{lambda()#34}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#34}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#34}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#34}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#34}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#33}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#33}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#33}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#33}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#33}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#33}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb78);
  if ((_update_theme(bool)::{lambda()#36}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#36}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#36}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#36}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#36}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#35}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#35}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#35}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#35}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#35}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#35}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb80);
  if ((_update_theme(bool)::{lambda()#38}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#38}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#38}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#38}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#38}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#37}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#37}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#37}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#37}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#37}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#37}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb88);
  if ((_update_theme(bool)::{lambda()#40}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#40}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#40}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#40}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#40}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#39}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#39}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#39}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#39}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#39}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#39}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb90);
  if ((_update_theme(bool)::{lambda()#42}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#42}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#42}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#42}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#42}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#41}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#41}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#41}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#41}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#41}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#41}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xb98);
  if ((_update_theme(bool)::{lambda()#44}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#44}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#44}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#44}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#44}::operator()()::sname);
  }
  if ((_update_theme(bool)::{lambda()#43}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#43}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#43}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#43}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#43}::operator()()::sname);
  }
  Control::get_theme_constant
            (pSVar14,(StringName *)&_update_theme(bool)::{lambda()#43}::operator()()::sname);
  StringName::StringName((StringName *)&local_70,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(pSVar14 + 0xba0);
  StringName::StringName((StringName *)&local_70,"separation",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  uVar3 = *(undefined8 *)(pSVar14 + 0xba8);
  if ((_update_theme(bool)::{lambda()#45}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_update_theme(bool)::{lambda()#45}::operator()()::sname),
     iVar7 != 0)) {
    _scs_create((char *)&_update_theme(bool)::{lambda()#45}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_theme(bool)::{lambda()#45}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_theme(bool)::{lambda()#45}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  PopupMenu::set_item_icon((int)uVar3,(Ref *)0x0);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pSVar14 = *(StringName **)(pSVar14 + 0xad8);
  if (pSVar14 != (StringName *)0x0) {
    this = (StyleBox *)operator_new(0x2b0,"");
    StyleBox::StyleBox(this);
    *(undefined ***)this = &PTR__initialize_classv_00124aa0;
    postinitialize_handler((Object *)this);
    local_70 = (Object *)this;
    cVar6 = RefCounted::init_ref();
    if (cVar6 == '\0') {
      local_70 = (Object *)0x0;
    }
    Control::add_theme_style_override(pSVar14,(Ref *)(SceneStringNames::singleton + 600));
    if (((local_70 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar12 = local_70, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectManager::_notification(int) */

void __thiscall ProjectManager::_notification(ProjectManager *this,int param_1)

{
  code *pcVar1;
  Vector2i *pVVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  float fVar8;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  plVar7 = DisplayServer::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x3ee) {
    local_58 = _LC5;
    uStack_50 = _UNK_00126738;
    CanvasItem::set_modulate((Color *)this);
  }
  else {
    bVar4 = SUB81(this,0);
    if (param_1 < 0x3ef) {
      if (param_1 == 0xd) {
        pcVar1 = *(code **)(*DisplayServer::singleton + 0x480);
        local_80 = 0;
        local_78 = "interface/editor/keep_screen_on";
        local_70 = 0x1f;
        String::parse_latin1((StrRange *)&local_80);
        _EDITOR_GET((String *)&local_58);
        bVar4 = Variant::operator_cast_to_bool((Variant *)&local_58);
        (*pcVar1)(plVar7,bVar4);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        local_78 = "project_manager/sorting_order";
        local_80 = 0;
        local_70 = 0x1d;
        String::parse_latin1((StrRange *)&local_80);
        _EDITOR_GET((String *)&local_58);
        Variant::operator_cast_to_int((Variant *)&local_58);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        OptionButton::select((int)*(undefined8 *)(this + 0xb40));
        ProjectList::set_order_option((int)*(undefined8 *)(this + 0xb20));
        _select_main_view(this,0);
        iVar5 = ProjectList::get_project_count();
        if (iVar5 < 1) {
          _update_list_placeholder(this);
        }
        else {
          CanvasItem::hide();
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _titlebar_resized(this);
          return;
        }
        goto LAB_0011211d;
      }
      if (param_1 == 0x1f) {
        CanvasItem::is_visible_in_tree();
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Node::set_process_shortcut_input(bVar4);
          return;
        }
        goto LAB_0011211d;
      }
      if (param_1 == 10) {
        lVar6 = Engine::get_singleton();
        *(undefined1 *)(lVar6 + 0xc0) = 0;
        plVar7 = (long *)Node::get_window();
        if (plVar7 != (long *)0x0) {
          pcVar1 = *(code **)(*plVar7 + 0x108);
          create_custom_callable_function_pointer<ProjectManager>
                    ((ProjectManager *)&local_78,(char *)this,
                     (_func_void *)"&ProjectManager::_titlebar_resized");
          StringName::StringName((StringName *)&local_80,"titlebar_changed",false);
          (*pcVar1)(plVar7,(StringName *)&local_80,(ProjectManager *)&local_78,0);
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)&local_78);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_theme(bVar4);
          return;
        }
        goto LAB_0011211d;
      }
    }
    else if (param_1 == 0x7db) {
      pVVar2 = *(Vector2i **)(this + 0xae0);
      fVar8 = (float)EditorScale::get_scale();
      local_60 = CONCAT44(fVar8 * _LC1._4_4_,fVar8 * (float)_LC1);
      local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
      Window::popup_centered(pVVar2);
    }
    else if (param_1 == 10000) {
      cVar3 = EditorThemeManager::is_generated_theme_outdated();
      if (cVar3 != '\0') {
        _update_theme(bVar4);
      }
      iVar5 = ProjectList::get_project_count();
      if (iVar5 < 1) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_list_placeholder(this);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::hide();
        return;
      }
      goto LAB_0011211d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011211d:
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* DisplayServer::window_set_window_buttons_offset(Vector2i const&, int) */

void DisplayServer::window_set_window_buttons_offset(Vector2i *param_1,int param_2)

{
  return;
}



/* DisplayServer::window_get_safe_title_margins(int) const */

undefined1  [16] DisplayServer::window_get_safe_title_margins(int param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::is_class_ptr(void*) const */

uint __thiscall StyleBoxEmpty::is_class_ptr(StyleBoxEmpty *this,void *param_1)

{
  return (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &StyleBox::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StyleBoxEmpty::_getv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_setv(StringName const&, Variant const&) */

undefined8 StyleBoxEmpty::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_validate_propertyv(PropertyInfo&) const */

void StyleBoxEmpty::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StyleBoxEmpty::_property_can_revertv(StringName const&) const */

undefined8 StyleBoxEmpty::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StyleBoxEmpty::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_notificationv(int, bool) */

void StyleBoxEmpty::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StyleBoxEmpty::get_style_margin(Side) const */

undefined8 StyleBoxEmpty::get_style_margin(void)

{
  return 0;
}



/* StyleBoxEmpty::draw(RID, Rect2 const&) const */

void StyleBoxEmpty::draw(void)

{
  return;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* ProjectManager::is_class_ptr(void*) const */

uint __thiscall ProjectManager::is_class_ptr(ProjectManager *this,void *param_1)

{
  return (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1264,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, Vector<String>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,Vector<String>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,Vector<String>> *this)

{
  return;
}



/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::get_argument_count
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<LineEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void>::get_argument_count
          (CallableCustomMethodPointer<LineEdit,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectManager, void, String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,String>::get_argument_count
          (CallableCustomMethodPointer<ProjectManager,void,String> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,bool>::get_argument_count
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ProjectManager, void, Vector<String> >::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,Vector<String>>::get_argument_count
          (CallableCustomMethodPointer<ProjectManager,void,Vector<String>> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Window, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void>::get_argument_count
          (CallableCustomMethodPointer<Window,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectManager,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectManager, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,int>::get_argument_count
          (CallableCustomMethodPointer<ProjectManager,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectManager, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void>::get_argument_count
          (CallableCustomMethodPointer<ProjectManager,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, Vector<String>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,Vector<String>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,Vector<String>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ProjectManager::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ProjectManager::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ProjectManager::_property_can_revertv(StringName const&) const */

undefined8 ProjectManager::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_can_revertv(StringName const&) const */

undefined8 HFlowContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124940;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124940;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_00112c33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112c33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00112c9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00112c9e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<ProjectManager, void, Vector<String> >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,Vector<String>>::get_object
          (CallableCustomMethodPointer<ProjectManager,void,Vector<String>> *this)

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
      goto LAB_00112dcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112dcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112dcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HFlowContainer::is_class_ptr(void*) const */

uint HFlowContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1264,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1262,in_RSI == &FlowContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&>::get_object
          (CallableCustomMethodPointer<ProjectManager,void,String_const&> *this)

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
      goto LAB_00112f3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112f3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112f3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::get_object
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this)

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
      goto LAB_0011303d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011303d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011303d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&>::get_object
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&> *this)

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
      goto LAB_0011313d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011313d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011313d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<LineEdit, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void>::get_object
          (CallableCustomMethodPointer<LineEdit,void> *this)

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
      goto LAB_0011323d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011323d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011323d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Window, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void>::get_object(CallableCustomMethodPointer<Window,void> *this)

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
      goto LAB_0011333d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011333d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011333d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectManager, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,int>::get_object
          (CallableCustomMethodPointer<ProjectManager,void,int> *this)

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
      goto LAB_0011343d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011343d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011343d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Control, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_object
          (CallableCustomMethodPointer<Control,void> *this)

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
      goto LAB_0011353d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011353d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011353d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,bool>::get_object
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,bool> *this)

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
      goto LAB_0011363d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011363d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011363d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectManager, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void>::get_object
          (CallableCustomMethodPointer<ProjectManager,void> *this)

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
      goto LAB_0011373d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011373d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011373d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::get_object
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

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
      goto LAB_0011383d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011383d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011383d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectManager, void, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectManager,void,String>::get_object
          (CallableCustomMethodPointer<ProjectManager,void,String> *this)

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
      goto LAB_0011393d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011393d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011393d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ProjectManager::_validate_propertyv(PropertyInfo&) const */

void ProjectManager::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012c010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012c018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HFlowContainer::_validate_propertyv(PropertyInfo&) const */

void HFlowContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012c020 == Control::_validate_property) {
    return;
  }
  FlowContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012c018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1264,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1264,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1264,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012c028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ProjectManager::_setv(StringName const&, Variant const&) */

undefined8 ProjectManager::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012c028 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0012c028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HFlowContainer::_setv(StringName const&, Variant const&) */

undefined8 HFlowContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012c028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113ed8) */
/* HFlowContainer::_getv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012c030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113f48) */
/* ProjectManager::_getv(StringName const&, Variant&) const */

undefined8 ProjectManager::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012c030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113fb8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012c030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00114028) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012c030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* StyleBox::get_base_extension() const */

StyleBox * __thiscall StyleBox::get_base_extension(StyleBox *this)

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



/* StyleBox::get_save_class() const */

StyleBox * __thiscall StyleBox::get_save_class(StyleBox *this)

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



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &StyleBox::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114160;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114160:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &StyleBox::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001141c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001141c0:
  Control::~Control((Control *)this);
  return;
}



/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &StyleBox::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114220;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114220:
  Control::~Control((Control *)this);
  return;
}



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001142be;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001142be;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001142be;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_001142be:
  Resource::~Resource((Resource *)this);
  return;
}



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011435e;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011435e;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011435e;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_0011435e:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2b0);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &StyleBox::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001143d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001143d0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &StyleBox::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114440;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114440:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &StyleBox::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001144b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001144b0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
LAB_00114513:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114513;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0011457e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0011457e:
  return &_get_class_namev()::_class_name_static;
}



/* HFlowContainer::_get_class_namev() const */

undefined8 * HFlowContainer::_get_class_namev(void)

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
LAB_00114603:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114603;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
      goto LAB_0011466e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
LAB_0011466e:
  return &_get_class_namev()::_class_name_static;
}



/* ProjectManager::_get_class_namev() const */

undefined8 * ProjectManager::_get_class_namev(void)

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
LAB_001146f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001146f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ProjectManager");
      goto LAB_0011475e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ProjectManager");
LAB_0011475e:
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
LAB_001147e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001147e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011484e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011484e:
  return &_get_class_namev()::_class_name_static;
}



/* StyleBoxEmpty::_get_class_namev() const */

undefined8 * StyleBoxEmpty::_get_class_namev(void)

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
LAB_001148d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001148d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
      goto LAB_0011493e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
LAB_0011493e:
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
LAB_001149c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001149c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00114a2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00114a2e:
  return &_get_class_namev()::_class_name_static;
}



/* HFlowContainer::_notificationv(int, bool) */

void __thiscall HFlowContainer::_notificationv(HFlowContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012c038 != Container::_notification) {
      FlowContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0012c038 == Container::_notification) {
    return;
  }
  FlowContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012c040 != Container::_notification) {
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
  if ((code *)PTR__notification_0012c040 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012c040 != Container::_notification) {
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
  if ((code *)PTR__notification_0012c040 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* OS::create_instance(List<String, DefaultAllocator> const&, long*) */

ulong __thiscall OS::create_instance(OS *this,List *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*(long *)this + 0x118);
  (**(code **)(*(long *)this + 0x100))(&local_38,this);
  uVar4 = (*pcVar2)(this,&local_38,param_1,param_2,0);
  lVar3 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OS::get_cmdline_args() const */

void OS::get_cmdline_args(void)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  CowData<char32_t> *this;
  CowData *pCVar4;
  long in_RSI;
  long *in_RDI;
  
  plVar1 = *(long **)(in_RSI + 0x10);
  *in_RDI = 0;
  if ((plVar1 != (long *)0x0) && (pCVar4 = (CowData *)*plVar1, pCVar4 != (CowData *)0x0)) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *in_RDI = (long)pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
    do {
      while( true ) {
        this = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
        if (*(long *)pCVar4 != 0) {
          CowData<char32_t>::_ref(this,pCVar4);
        }
        plVar1 = (long *)*in_RDI;
        lVar2 = plVar1[1];
        *(undefined8 *)(this + 8) = 0;
        *(long **)(this + 0x18) = plVar1;
        *(long *)(this + 0x10) = lVar2;
        if (lVar2 != 0) {
          *(CowData<char32_t> **)(lVar2 + 8) = this;
        }
        plVar1[1] = (long)this;
        if (*plVar1 != 0) break;
        pCVar4 = *(CowData **)(pCVar4 + 8);
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
        *plVar1 = (long)this;
        if (pCVar4 == (CowData *)0x0) {
          return;
        }
      }
      pCVar4 = *(CowData **)(pCVar4 + 8);
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    } while (pCVar4 != (CowData *)0x0);
  }
  return;
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



/* ProjectManager::get_class() const */

void ProjectManager::get_class(void)

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



/* StyleBoxEmpty::get_class() const */

void StyleBoxEmpty::get_class(void)

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



/* HFlowContainer::get_class() const */

void HFlowContainer::get_class(void)

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



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  *(undefined ***)this = &PTR__initialize_classv_00125390;
  pvVar8 = *(void **)(this + 0x188);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(*(long *)(this + 400) + lVar6) = 0;
            pvVar7 = *(void **)((long)pvVar8 + 0x20);
            if (pvVar7 != (void *)0x0) {
              if (*(int *)((long)pvVar8 + 0x44) != 0) {
                uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar8 + 0x40) * 4
                                 );
                if (uVar3 == 0) {
                  *(undefined4 *)((long)pvVar8 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar9 = 0;
                  do {
                    piVar5 = (int *)(*(long *)((long)pvVar8 + 0x28) + lVar9);
                    if (*piVar5 != 0) {
                      *piVar5 = 0;
                      pvVar7 = *(void **)((long)pvVar7 + lVar9 * 2);
                      if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x18)] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (*(long *)((long)pvVar7 + 0x10) != 0) {
                        LOCK();
                        plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          lVar4 = *(long *)((long)pvVar7 + 0x10);
                          *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                          Memory::free_static((void *)(lVar4 + -0x10),false);
                        }
                      }
                      Memory::free_static(pvVar7,false);
                      pvVar7 = *(void **)((long)pvVar8 + 0x20);
                      *(undefined8 *)((long)pvVar7 + lVar9 * 2) = 0;
                    }
                    lVar9 = lVar9 + 4;
                  } while (lVar9 != (ulong)uVar3 << 2);
                  *(undefined4 *)((long)pvVar8 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar7 == (void *)0x0) goto LAB_001156ff;
                }
              }
              Memory::free_static(pvVar7,false);
              Memory::free_static(*(void **)((long)pvVar8 + 0x28),false);
            }
LAB_001156ff:
            if (*(long *)((long)pvVar8 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar8 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar9 = *(long *)((long)pvVar8 + 0x10);
                *(undefined8 *)((long)pvVar8 + 0x10) = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar8 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 * 4);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00115771;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00115771:
  *(undefined ***)this = &PTR__initialize_classv_00124940;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  *(undefined ***)this = &PTR__initialize_classv_00125390;
  pvVar8 = *(void **)(this + 0x188);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(*(long *)(this + 400) + lVar6) = 0;
            pvVar7 = *(void **)((long)pvVar8 + 0x20);
            if (pvVar7 != (void *)0x0) {
              if (*(int *)((long)pvVar8 + 0x44) != 0) {
                uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar8 + 0x40) * 4
                                 );
                if (uVar3 == 0) {
                  *(undefined4 *)((long)pvVar8 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar9 = 0;
                  do {
                    piVar5 = (int *)(*(long *)((long)pvVar8 + 0x28) + lVar9);
                    if (*piVar5 != 0) {
                      *piVar5 = 0;
                      pvVar7 = *(void **)((long)pvVar7 + lVar9 * 2);
                      if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x18)] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (*(long *)((long)pvVar7 + 0x10) != 0) {
                        LOCK();
                        plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          lVar4 = *(long *)((long)pvVar7 + 0x10);
                          *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                          Memory::free_static((void *)(lVar4 + -0x10),false);
                        }
                      }
                      Memory::free_static(pvVar7,false);
                      pvVar7 = *(void **)((long)pvVar8 + 0x20);
                      *(undefined8 *)((long)pvVar7 + lVar9 * 2) = 0;
                    }
                    lVar9 = lVar9 + 4;
                  } while (lVar9 != (ulong)uVar3 << 2);
                  *(undefined4 *)((long)pvVar8 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar7 == (void *)0x0) goto LAB_0011598f;
                }
              }
              Memory::free_static(pvVar7,false);
              Memory::free_static(*(void **)((long)pvVar8 + 0x28),false);
            }
LAB_0011598f:
            if (*(long *)((long)pvVar8 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar8 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar9 = *(long *)((long)pvVar8 + 0x10);
                *(undefined8 *)((long)pvVar8 + 0x10) = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar8 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 * 4);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00115a01;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00115a01:
  *(undefined ***)this = &PTR__initialize_classv_00124940;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00115bab;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_00115bab;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00115bab:
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
            if (lVar4 == 0) goto LAB_00115d4f;
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
LAB_00115d4f:
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
    if (cVar5 != '\0') goto LAB_00115e03;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00115e03:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00115f3f;
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
LAB_00115f3f:
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
    if (cVar5 != '\0') goto LAB_00115ff3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00115ff3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::is_class(String const&) const */

undefined8 __thiscall StyleBoxEmpty::is_class(StyleBoxEmpty *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011614b;
  }
  cVar5 = String::operator==(param_1,"StyleBoxEmpty");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0011614b;
    }
    cVar5 = String::operator==(param_1,"StyleBox");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_00116288;
    }
  }
LAB_0011614b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00116288:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* Callable Callable::bind<String>(String) const */

Variant ** Callable::bind<String>(Variant **param_1,int param_2,String *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<ProjectManager>(ProjectManager*, char const*,
   void (ProjectManager::*)()) */

ProjectManager *
create_custom_callable_function_pointer<ProjectManager>
          (ProjectManager *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC27;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125bd0;
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



/* Callable create_custom_callable_function_pointer<ProjectManager, int>(ProjectManager*, char
   const*, void (ProjectManager::*)(int)) */

ProjectManager *
create_custom_callable_function_pointer<ProjectManager,int>
          (ProjectManager *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC27;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125c60;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* HashMap<ProjectManager::MainViewTab, Button*, HashMapHasherDefault,
   HashMapComparatorDefault<ProjectManager::MainViewTab>,
   DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab, Button*> >
   >::operator[](ProjectManager::MainViewTab const&) */

undefined1  [16] __thiscall
HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
::operator[](HashMap<ProjectManager::MainViewTab,Button*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Button*>>>
             *this,MainViewTab *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar39 = *(uint *)param_1;
  uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar52 = CONCAT44(0,uVar40);
  if (local_70 == (void *)0x0) {
    uVar41 = uVar52 * 4;
    uVar49 = uVar52 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    lStack_90 = 0x116d33;
    local_70 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = local_70;
    if (uVar40 == 0) {
      iVar45 = *(int *)(this + 0x2c);
      uVar39 = *(uint *)param_1;
      if (local_70 == (void *)0x0) goto LAB_00116893;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar49)) &&
         (local_70 < (void *)((long)pvVar4 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar52 != uVar41);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
      else {
        memset(pvVar4,0,uVar41);
        lStack_90 = 0x116d7c;
        memset(local_70,0,uVar49);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
    }
    if (iVar45 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00116c13;
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 != 0) {
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar46 = uVar49;
      }
      else {
        uVar46 = uVar54 * uVar49;
      }
      lVar53 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar52;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar46;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar47 * 4);
      uVar55 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        uVar51 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar54 == uVar38) &&
             (uVar39 == *(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10))) {
            auVar57._0_8_ = *(long *)((long)local_70 + (ulong)uVar55 * 8) + 0x18;
            auVar57._8_8_ = lVar48;
            return auVar57;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar52;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar47 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar52, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar40) - SUB164(auVar7 * auVar23,8)) * uVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar52, lVar48 = SUB168(auVar8 * auVar24,8),
                uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00116c13:
      uVar46 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar40 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar38 = 1;
        uVar44 = uVar49;
      }
      else {
        uVar44 = uVar38 * uVar49;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar46;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar44;
      lVar47 = SUB168(auVar17 * auVar33,8);
      uVar40 = *(uint *)(lVar53 + lVar47 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar40 != 0) {
        uVar55 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar38 == uVar40) &&
             (*(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10) == uVar39)) {
            pauVar43 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar54 * 8);
            *(undefined8 *)(pauVar43[1] + 8) = 0;
            lStack_90 = lVar48;
            goto LAB_00116bf4;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar49;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar46;
          lVar47 = SUB168(auVar18 * auVar34,8);
          uVar40 = *(uint *)(lVar53 + lVar47 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar40 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar40 * uVar49, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar46, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar19 * auVar35,8)) * uVar49, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar46, lVar48 = SUB168(auVar20 * auVar36,8),
                uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00116893:
  if ((float)uVar52 * _LC28 < (float)(iVar45 + 1)) {
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00116bf4;
    }
    uVar41 = (ulong)(uVar39 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    if (uVar39 + 1 < 2) {
      uVar41 = 2;
    }
    uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar49 = (ulong)uVar39;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar4 = *(void **)(this + 0x10);
    uVar41 = uVar49 * 4;
    uVar52 = uVar49 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar49);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar39 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar38);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar39 * lVar47;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar52;
          lVar48 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar48 * 4);
          iVar45 = SUB164(auVar9 * auVar25,8);
          uVar54 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_70 + uVar41 * 8);
          while (uVar54 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar54 * lVar47;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar47;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar52;
            uVar51 = SUB164(auVar11 * auVar27,8);
            uVar50 = uVar42;
            if (uVar51 < uVar55) {
              *puVar1 = uVar39;
              puVar2 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar50 = *puVar2;
              *puVar2 = uVar42;
              uVar39 = uVar54;
              uVar55 = uVar51;
            }
            uVar55 = uVar55 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar47;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar52;
            lVar48 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar48 * 4);
            iVar45 = SUB164(auVar12 * auVar28,8);
            uVar42 = uVar50;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar3 = *(undefined4 *)param_1;
  pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
  *(undefined4 *)pauVar43[1] = uVar3;
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  *pauVar43 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar40 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
  uVar39 = uVar40 ^ uVar40 >> 0x10;
  if (uVar40 == uVar40 >> 0x10) {
    uVar41 = 1;
    uVar39 = 1;
  }
  else {
    uVar41 = (ulong)uVar39;
  }
  uVar54 = 0;
  lVar53 = *(long *)(this + 0x10);
  lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar52 = CONCAT44(0,uVar40);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar41 * lVar47;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar52;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar45 = SUB164(auVar13 * auVar29,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar38 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar38 * lVar47;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar52;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar47;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar52;
    uVar55 = SUB164(auVar15 * auVar31,8);
    pauVar56 = pauVar37;
    if (uVar55 < uVar54) {
      *puVar1 = uVar39;
      puVar2 = (undefined8 *)(lVar48 + lStack_90 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar39 = uVar38;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar47;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar52;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar45 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar56;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar48 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00116bf4:
  auVar58._8_8_ = lStack_90;
  auVar58._0_8_ = pauVar43[1] + 8;
  return auVar58;
}



/* HashMap<ProjectManager::MainViewTab, Control*, HashMapHasherDefault,
   HashMapComparatorDefault<ProjectManager::MainViewTab>,
   DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab, Control*> >
   >::operator[](ProjectManager::MainViewTab const&) */

undefined1  [16] __thiscall
HashMap<ProjectManager::MainViewTab,Control*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Control*>>>
::operator[](HashMap<ProjectManager::MainViewTab,Control*,HashMapHasherDefault,HashMapComparatorDefault<ProjectManager::MainViewTab>,DefaultTypedAllocator<HashMapElement<ProjectManager::MainViewTab,Control*>>>
             *this,MainViewTab *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar39 = *(uint *)param_1;
  uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar52 = CONCAT44(0,uVar40);
  if (local_70 == (void *)0x0) {
    uVar41 = uVar52 * 4;
    uVar49 = uVar52 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    lStack_90 = 0x117483;
    local_70 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = local_70;
    if (uVar40 == 0) {
      iVar45 = *(int *)(this + 0x2c);
      uVar39 = *(uint *)param_1;
      if (local_70 == (void *)0x0) goto LAB_00116fe3;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar49)) &&
         (local_70 < (void *)((long)pvVar4 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar52 != uVar41);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
      else {
        memset(pvVar4,0,uVar41);
        lStack_90 = 0x1174cc;
        memset(local_70,0,uVar49);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
    }
    if (iVar45 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00117363;
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 != 0) {
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar46 = uVar49;
      }
      else {
        uVar46 = uVar54 * uVar49;
      }
      lVar53 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar52;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar46;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar47 * 4);
      uVar55 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        uVar51 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar54 == uVar38) &&
             (uVar39 == *(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10))) {
            auVar57._0_8_ = *(long *)((long)local_70 + (ulong)uVar55 * 8) + 0x18;
            auVar57._8_8_ = lVar48;
            return auVar57;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar52;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar47 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar52, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar40) - SUB164(auVar7 * auVar23,8)) * uVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar52, lVar48 = SUB168(auVar8 * auVar24,8),
                uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00117363:
      uVar46 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar40 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar38 = 1;
        uVar44 = uVar49;
      }
      else {
        uVar44 = uVar38 * uVar49;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar46;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar44;
      lVar47 = SUB168(auVar17 * auVar33,8);
      uVar40 = *(uint *)(lVar53 + lVar47 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar40 != 0) {
        uVar55 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar38 == uVar40) &&
             (*(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10) == uVar39)) {
            pauVar43 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar54 * 8);
            *(undefined8 *)(pauVar43[1] + 8) = 0;
            lStack_90 = lVar48;
            goto LAB_00117344;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar49;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar46;
          lVar47 = SUB168(auVar18 * auVar34,8);
          uVar40 = *(uint *)(lVar53 + lVar47 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar40 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar40 * uVar49, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar46, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar19 * auVar35,8)) * uVar49, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar46, lVar48 = SUB168(auVar20 * auVar36,8),
                uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00116fe3:
  if ((float)uVar52 * _LC28 < (float)(iVar45 + 1)) {
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00117344;
    }
    uVar41 = (ulong)(uVar39 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    if (uVar39 + 1 < 2) {
      uVar41 = 2;
    }
    uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar49 = (ulong)uVar39;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar4 = *(void **)(this + 0x10);
    uVar41 = uVar49 * 4;
    uVar52 = uVar49 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar49);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar39 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar38);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar39 * lVar47;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar52;
          lVar48 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar48 * 4);
          iVar45 = SUB164(auVar9 * auVar25,8);
          uVar54 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_70 + uVar41 * 8);
          while (uVar54 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar54 * lVar47;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar47;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar52;
            uVar51 = SUB164(auVar11 * auVar27,8);
            uVar50 = uVar42;
            if (uVar51 < uVar55) {
              *puVar1 = uVar39;
              puVar2 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar50 = *puVar2;
              *puVar2 = uVar42;
              uVar39 = uVar54;
              uVar55 = uVar51;
            }
            uVar55 = uVar55 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar47;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar52;
            lVar48 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar48 * 4);
            iVar45 = SUB164(auVar12 * auVar28,8);
            uVar42 = uVar50;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar3 = *(undefined4 *)param_1;
  pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
  *(undefined4 *)pauVar43[1] = uVar3;
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  *pauVar43 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar40 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
  uVar39 = uVar40 ^ uVar40 >> 0x10;
  if (uVar40 == uVar40 >> 0x10) {
    uVar41 = 1;
    uVar39 = 1;
  }
  else {
    uVar41 = (ulong)uVar39;
  }
  uVar54 = 0;
  lVar53 = *(long *)(this + 0x10);
  lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar52 = CONCAT44(0,uVar40);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar41 * lVar47;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar52;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar45 = SUB164(auVar13 * auVar29,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar38 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar38 * lVar47;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar52;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar47;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar52;
    uVar55 = SUB164(auVar15 * auVar31,8);
    pauVar56 = pauVar37;
    if (uVar55 < uVar54) {
      *puVar1 = uVar39;
      puVar2 = (undefined8 *)(lVar48 + lStack_90 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar39 = uVar38;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar47;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar52;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar45 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar56;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar48 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00117344:
  auVar58._8_8_ = lStack_90;
  auVar58._0_8_ = pauVar43[1] + 8;
  return auVar58;
}



/* Callable create_custom_callable_function_pointer<Control>(Control*, char const*, void
   (Control::*)()) */

Control * create_custom_callable_function_pointer<Control>
                    (Control *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC27;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125cf0;
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



/* Callable create_custom_callable_function_pointer<ProjectManager, String const&>(ProjectManager*,
   char const*, void (ProjectManager::*)(String const&)) */

ProjectManager *
create_custom_callable_function_pointer<ProjectManager,String_const&>
          (ProjectManager *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC27;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125d80;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<Window>(Window*, char const*, void
   (Window::*)()) */

Window * create_custom_callable_function_pointer<Window>
                   (Window *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC27;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125e10;
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



/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
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
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00119fdc;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_00119fdc:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_0011a33b;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * _LC28 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0011a33b;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_0011a33b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
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



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0012c050 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_0012c048 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011aa08) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x0011ad08) */
/* String vformat<unsigned int>(String const&, unsigned int const) */

String * vformat<unsigned_int>(String *param_1,uint param_2)

{
  char cVar1;
  Variant *this;
  uint in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x0011b040) */
/* String vformat<String, Error>(String const&, String const, Error const) */

undefined8 * vformat<String,Error>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

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
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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



/* WARNING: Removing unreachable block (ram,0x0011b330) */
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
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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



/* WARNING: Removing unreachable block (ram,0x0011b620) */
/* String vformat<Variant, Variant>(String const&, Variant const, Variant const) */

undefined8 *
vformat<Variant,Variant>(undefined8 *param_1,bool *param_2,Variant *param_3,Variant *param_4)

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
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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
        if (pvVar5 == (void *)0x0) goto LAB_0011b904;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011b904:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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



/* CallableCustomMethodPointer<LineEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::call
          (CallableCustomMethodPointer<LineEdit,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011bc3f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011bc3f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011bc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011bd01;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011bc3f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011bd01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Window, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Window,void>::call
          (CallableCustomMethodPointer<Window,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011be5f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011be5f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011be38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011bf21;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011be5f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011bf21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Control, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Control,void>::call
          (CallableCustomMethodPointer<Control,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011c07f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011c07f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011c141;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011c07f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011c141:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectManager, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void>::call
          (CallableCustomMethodPointer<ProjectManager,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011c29f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011c29f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011c361;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011c29f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011c361:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::call
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,6);
            uVar4 = _LC70;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            local_38 = Variant::operator_cast_to_Vector2i(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),&local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011c43e;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011c43e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,int>::call
          (CallableCustomMethodPointer<ProjectManager,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011c798;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011c798;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC71;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011c85a;
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
LAB_0011c798:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011c85a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&>::call
          (CallableCustomMethodPointer<ProjectManager,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC72;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011c92e;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011c92e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&>::call
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar4 = _LC73;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC72;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_58,(Variant *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0011cb95;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011cb95:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::call
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC72;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011ce4e;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011ce4e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String const&, bool>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,bool>::call
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
            uVar4 = _LC74;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC72;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_58,bVar9);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0011d0b5;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011d0b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectManager, void, String>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String>::call
          (CallableCustomMethodPointer<ProjectManager,void,String> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC72;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011d36e;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011d36e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011d61b;
  }
  cVar5 = String::operator==(param_1,"CanvasItem");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011d61b;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar4 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar5 != '\0') goto LAB_0011d61b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_0011d7f8;
    }
  }
LAB_0011d61b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011d7f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::is_class(String const&) const */

undefined8 __thiscall ProjectManager::is_class(ProjectManager *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011d90b;
  }
  cVar5 = String::operator==(param_1,"ProjectManager");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0011d90b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0011da48;
    }
  }
LAB_0011d90b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011da48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011db5b;
  }
  cVar5 = String::operator==(param_1,"Container");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0011db5b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0011dc98;
    }
  }
LAB_0011db5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011dc98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HFlowContainer::is_class(String const&) const */

undefined8 __thiscall HFlowContainer::is_class(HFlowContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011ddab;
  }
  cVar5 = String::operator==(param_1,"HFlowContainer");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0011ddab;
    }
    cVar5 = String::operator==(param_1,"FlowContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011dee8;
    }
  }
LAB_0011ddab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011dee8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011dffb;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0011dffb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011e138;
    }
  }
LAB_0011dffb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011e138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011e23b;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0011e23b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011e378;
    }
  }
LAB_0011e23b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011e378:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
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
    if ((code *)PTR__bind_methods_0012c058 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::_initialize_classv() */

void StyleBoxEmpty::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (StyleBox::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
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
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0012c050 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
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
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "StyleBox";
      local_70 = 0;
      local_50 = 8;
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
      if ((code *)PTR__bind_methods_0012c060 != Resource::_bind_methods) {
        StyleBox::_bind_methods();
      }
      StyleBox::initialize_class()::initialized = '\x01';
    }
    local_58 = "StyleBox";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StyleBoxEmpty";
    local_70 = 0;
    local_50 = 0xd;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_initialize_classv() */

void ProjectManager::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Control::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0012c050 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "CanvasItem";
        local_70 = 0;
        local_50 = 10;
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
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0012c068 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Control";
      local_70 = 0;
      local_50 = 7;
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
      if ((code *)PTR__bind_methods_0012c070 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ProjectManager";
    local_70 = 0;
    local_50 = 0xe;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HFlowContainer::_initialize_classv() */

void HFlowContainer::_initialize_classv(void)

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
    if (FlowContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0012c050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0012c068 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "FlowContainer";
      local_70 = 0;
      local_50 = 0xd;
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
      if ((code *)PTR__bind_methods_0012c078 != Container::_bind_methods) {
        FlowContainer::_bind_methods();
      }
      FlowContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "FlowContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HFlowContainer";
    local_70 = 0;
    local_50 = 0xe;
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



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0012c050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0012c068 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0012c080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0012c050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0012c068 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0012c080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC81;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC81;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0012018c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0012018c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001203dc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001203dc:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00120641;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120641:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001208f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001208f1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBox::_get_property_listv(StyleBox *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StyleBox";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBox";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00120ba1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120ba1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"StyleBox",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBoxEmpty::_get_property_listv(StyleBoxEmpty *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    StyleBox::_get_property_listv((StyleBox *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StyleBoxEmpty";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBoxEmpty";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00120e51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120e51:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"StyleBoxEmpty",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      StyleBox::_get_property_listv((StyleBox *)this,param_1,true);
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
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00121101;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121101:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0012c088 != Object::_get_property_list) {
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
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001213d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001213d1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0012c090 != CanvasItem::_get_property_list) {
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
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001216a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001216a1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00121951;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121951:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00121c01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121c01:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00121eb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121eb1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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



/* FlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FlowContainer::_get_property_listv(FlowContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "FlowContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FlowContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00122161;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122161:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"FlowContainer",false);
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



/* HFlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HFlowContainer::_get_property_listv(HFlowContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    FlowContainer::_get_property_listv((FlowContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HFlowContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HFlowContainer";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00122411;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122411:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HFlowContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      FlowContainer::_get_property_listv((FlowContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectManager::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ProjectManager::_get_property_listv(ProjectManager *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ProjectManager";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ProjectManager";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001226c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001226c1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ProjectManager",false);
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



/* HashMap<String, Ref<Texture2D>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Texture2D> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
::operator[](HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00122f50:
    uVar39 = (ulong)uVar54;
    uVar43 = uVar39 * 4;
    uVar47 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar54 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar47)) && (pvVar42 < (void *)((long)pvVar2 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
        goto LAB_00122dc2;
      }
      memset(pvVar2,0,uVar43);
      memset(pvVar42,0,uVar47);
      iVar44 = *(int *)(this + 0x2c);
LAB_00122dc6:
      if (iVar44 != 0) {
LAB_00122dce:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar53 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar45 = SUB168(auVar16 * auVar32,8);
        uVar51 = *(uint *)(lVar52 + lVar45 * 4);
        uVar50 = SUB164(auVar16 * auVar32,8);
        if (uVar51 != 0) {
          do {
            if (uVar51 == uVar38) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                lVar3 = *(long *)(pauVar41[1] + 8);
                if (lVar3 != 0) {
                  *(undefined8 *)(pauVar41[1] + 8) = 0;
                  local_68._0_8_ = lVar3;
                  Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
                  pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                }
                goto LAB_00122c8b;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar50 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar45 = SUB168(auVar17 * auVar33,8);
            uVar51 = *(uint *)(lVar52 + lVar45 * 4);
            uVar50 = SUB164(auVar17 * auVar33,8);
          } while ((uVar51 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar51 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar53 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar54;
      goto LAB_001228c4;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_001228c4;
    if (iVar44 != 0) goto LAB_00122dce;
LAB_001228ea:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00122c8b;
    }
    uVar39 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar39 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar54 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar54 * lVar52;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar45 = SUB168(auVar4 * auVar20,8);
          puVar49 = (uint *)(lVar3 + lVar45 * 4);
          iVar44 = SUB164(auVar4 * auVar20,8);
          uVar51 = *puVar49;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar51 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar5 * auVar21,8)) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar53 = SUB164(auVar6 * auVar22,8);
            uVar48 = uVar40;
            if (uVar53 < uVar50) {
              *puVar49 = uVar54;
              puVar1 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar1;
              *puVar1 = uVar40;
              uVar54 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar45 = SUB168(auVar7 * auVar23,8);
            puVar49 = (uint *)(lVar3 + lVar45 * 4);
            iVar44 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar48;
            uVar51 = *puVar49;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar49 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar54);
    if (iVar44 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar52 + lVar45 * 4);
      uVar51 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar38 == uVar37) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_00122c8b;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar45 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar52 + lVar45 * 4);
          uVar51 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar50 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00122f50;
LAB_00122dc2:
      iVar44 = *(int *)(this + 0x2c);
      goto LAB_00122dc6;
    }
LAB_001228c4:
    if ((float)uVar39 * _LC28 < (float)(iVar44 + 1)) goto LAB_001228ea;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_50[0] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar3 = local_58;
    uVar40 = local_68._0_8_;
    uVar48 = local_68._8_8_;
    local_50[0] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = uVar40;
    *(undefined8 *)(*pauVar41 + 8) = uVar48;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)&local_58);
    }
  }
  *(undefined8 *)(pauVar41[1] + 8) = 0;
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar1 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar54 = 1;
  if (uVar37 != 0) {
    uVar54 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar54 * lVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar46 = SUB168(auVar8 * auVar24,8);
  lVar45 = *(long *)(this + 8);
  puVar49 = (uint *)(lVar3 + lVar46 * 4);
  iVar44 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar49;
  pauVar56 = pauVar41;
  if (uVar38 != 0) {
    uVar51 = 0;
    pauVar55 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26,8);
      pauVar56 = pauVar55;
      if (uVar50 < uVar51) {
        *puVar49 = uVar54;
        puVar1 = (undefined8 *)(lVar45 + lVar46 * 8);
        pauVar56 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar55;
        uVar51 = uVar50;
        uVar54 = uVar38;
      }
      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      puVar49 = (uint *)(lVar3 + lVar46 * 4);
      iVar44 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar49;
      pauVar55 = pauVar56;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar56;
  *puVar49 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00122c8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* ProjectList::Item::~Item() */

void __thiscall ProjectList::Item::~Item(Item *this)

{
  long *plVar1;
  long lVar2;
  
  CowData<String>::_unref((CowData<String> *)(this + 0x50));
  if (*(long *)(this + 0x40) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x40) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x30));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
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



/* CallableCustomMethodPointer<ProjectManager, void, Vector<String> >::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,Vector<String>>::call
          (CallableCustomMethodPointer<ProjectManager,void,Vector<String>> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x22);
            uVar4 = _LC112;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<String>::_unref((CowData<String> *)local_40);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_001232ce;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40[0] = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC69,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001232ce:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* CowData<Ref<Theme> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Theme>>::_copy_on_write(void)

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
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
LAB_00123800:
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
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_00123800;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00123856;
  }
  if (lVar9 == lVar5) {
LAB_0012377b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00123856:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001236ef;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0012377b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_001236ef:
  puVar7[-1] = param_1;
  return 0;
}



/* Vector<String>::remove_at(long) */

void __thiscall Vector<String>::remove_at(Vector<String> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + -8);
      goto LAB_00123959;
    }
  }
  else if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + -8);
    if (param_1 < lVar4) {
      CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
      lVar4 = *(long *)(this + 8);
      if (lVar4 == 0) {
        lVar5 = -1;
      }
      else {
        lVar5 = *(long *)(lVar4 + -8) + -1;
        if (param_1 < lVar5) {
          plVar3 = (long *)(lVar4 + param_1 * 8);
          do {
            lVar4 = *plVar3;
            lVar2 = plVar3[1];
            if (lVar4 != lVar2) {
              if (lVar4 != 0) {
                LOCK();
                plVar1 = (long *)(lVar4 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *plVar3;
                  *plVar3 = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
                lVar2 = plVar3[1];
              }
              *plVar3 = lVar2;
              plVar3[1] = 0;
            }
            param_1 = param_1 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar5 != param_1);
        }
      }
      CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar5);
      return;
    }
    goto LAB_00123959;
  }
  lVar4 = 0;
LAB_00123959:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar4,"p_index","size()","",false
             ,false);
  return;
}



/* CowData<Ref<Theme> >::_unref() */

void __thiscall CowData<Ref<Theme>>::_unref(CowData<Ref<Theme>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00123a6d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00123a6d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<ProjectList::Item>::_unref() */

void __thiscall CowData<ProjectList::Item>::_unref(CowData<ProjectList::Item> *this)

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
          CowData<String>::_unref((CowData<String> *)(plVar6 + 10));
          if (plVar6[8] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[8] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[8];
              plVar6[8] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[7] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[7] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[7];
              plVar6[7] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[5] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[5] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[5];
              plVar6[5] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)(plVar6 + 4));
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 0xe;
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



/* CowData<String>::find(String const&, long) const */

long __thiscall CowData<String>::find(CowData<String> *this,String *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 0) {
    return -1;
  }
  lVar2 = *(long *)this;
  if ((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + -8), lVar3 != 0)) {
    while (param_2 < lVar3) {
      cVar1 = String::operator==((String *)(lVar2 + param_2 * 8),param_1);
      if (cVar1 != '\0') {
        return param_2;
      }
      lVar2 = *(long *)this;
      param_2 = param_2 + 1;
      if (lVar2 == 0) {
        return -1;
      }
      lVar3 = *(long *)(lVar2 + -8);
    }
  }
  return -1;
}



/* CowData<Ref<Theme> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Theme>>::_realloc(CowData<Ref<Theme>> *this,long param_1)

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
/* Error CowData<Ref<Theme> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Theme>>::resize<false>(CowData<Ref<Theme>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar8 = 0;
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
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00124060:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_00124060;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_00123f0a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_00123f0a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_00123ed0;
  }
  if (lVar11 == lVar8) {
LAB_00123fdb:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00123ed0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_00123fbb;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00123fdb;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_00123fbb:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00124130) */
/* ProjectManager::_notificationv(int, bool) */

void __thiscall ProjectManager::_notificationv(ProjectManager *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012c098 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0012c098 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* ProjectManager::singleton */

void ProjectManager::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uStack_8;
  
  if (ItemList::base_property_helper == '\0') {
    ItemList::base_property_helper = '\x01';
    ItemList::base_property_helper._64_8_ = 0;
    ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,
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
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ProjectList::Item::~Item() */

void __thiscall ProjectList::Item::~Item(Item *this)

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
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

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
/* CallableCustomMethodPointer<ProjectManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectManager, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectManager, void, Vector<String>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,Vector<String>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectManager, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectList, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectManager, void, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String_const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectManager, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectManager,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectManager,void,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

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


