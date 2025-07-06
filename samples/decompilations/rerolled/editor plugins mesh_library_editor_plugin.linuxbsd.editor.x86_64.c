/* MeshLibraryEditorPlugin::make_visible(bool) */

void __thiscall MeshLibraryEditorPlugin::make_visible(MeshLibraryEditorPlugin *this,bool param_1)

{
  if (param_1) {
    CanvasItem::show();
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  CanvasItem::hide();
  return;
}



/* MeshLibraryEditor::_menu_remove_confirm() */

void __thiscall MeshLibraryEditor::_menu_remove_confirm(MeshLibraryEditor *this)

{
  if (*(int *)(this + 0x9f8) != 1) {
    return;
  }
  MeshLibrary::remove_item((int)*(undefined8 *)(this + 0x9c8));
  return;
}



/* MeshLibraryEditor::edit(Ref<MeshLibrary> const&) [clone .part.0] */

void MeshLibraryEditor::edit(Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = MenuButton::get_popup();
  plVar1 = *(long **)(param_1 + 0x9c8);
  pcVar2 = *(code **)(*plVar1 + 0xa0);
  StringName::StringName((StringName *)&local_38,"_editor_source_scene",false);
  (*pcVar2)(plVar1,&local_38);
  iVar5 = MenuButton::get_popup();
  bVar3 = (bool)PopupMenu::get_item_index(iVar5);
  PopupMenu::set_item_disabled(iVar4,bVar3);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<int, MeshInstance3D*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, MeshInstance3D*> > >::_lookup_pos(int const&, unsigned
   int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
::_lookup_pos(HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Transform3D>::_copy_on_write(CowData<Transform3D> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x30;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* MeshLibraryEditor::edit(Ref<MeshLibrary> const&) */

void __thiscall MeshLibraryEditor::edit(MeshLibraryEditor *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)param_1;
  pOVar3 = *(Object **)(this + 0x9c8);
  if (pOVar1 == pOVar3) goto LAB_001003e4;
  *(Object **)(this + 0x9c8) = pOVar1;
  if (pOVar1 == (Object *)0x0) {
LAB_001003cc:
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    cVar2 = RefCounted::unreference();
joined_r0x001003db:
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)(this + 0x9c8) = 0;
      goto LAB_001003cc;
    }
    if (pOVar3 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      goto joined_r0x001003db;
    }
  }
  pOVar3 = *(Object **)(this + 0x9c8);
LAB_001003e4:
  if (pOVar3 != (Object *)0x0) {
    edit((Ref *)this);
    return;
  }
  return;
}



/* MeshLibraryEditorPlugin::handles(Object*) const */

undefined4 __thiscall
MeshLibraryEditorPlugin::handles(MeshLibraryEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0xb;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "MeshLibrary";
  String::parse_latin1((StrRange *)&local_40);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditor::_menu_cbk(int) */

void __thiscall MeshLibraryEditor::_menu_cbk(MeshLibraryEditor *this,int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  Vector2i *pVVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  Variant local_88 [8];
  CowData<char32_t> local_80 [8];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x9f8) = param_1;
  switch(param_1) {
  case 0:
    uVar2 = *(undefined8 *)(this + 0x9c8);
    MeshLibrary::get_last_unused_item_id();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MeshLibrary::create_item((int)uVar2);
      return;
    }
    goto LAB_0010073a;
  case 1:
    EditorInspector::get_selected_path();
    cVar6 = String::begins_with((char *)&local_a0);
    if ((cVar6 != '\0') && (iVar7 = String::get_slice_count((char *)&local_a0), 1 < iVar7)) {
      String::get_slice((char *)local_80,(int)(CowData<char32_t> *)&local_a0);
      uVar8 = String::to_int();
      *(undefined4 *)(this + 0x9f4) = uVar8;
      CowData<char32_t>::_unref(local_80);
      uVar2 = *(undefined8 *)(this + 0x9d8);
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"");
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"Remove item %d?");
      TTR((String *)local_88,(String *)&local_98);
      vformat<int>((String *)local_80,(int)(String *)local_88);
      AcceptDialog::set_text(uVar2,local_80);
      CowData<char32_t>::_unref(local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      pVVar4 = *(Vector2i **)(this + 0x9d8);
      local_78 = _LC30;
      local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
      Window::popup_centered(pVVar4);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    break;
  case 2:
    plVar1 = *(long **)(this + 0x9c8);
    uVar2 = *(undefined8 *)(this + 0x9e0);
    pcVar3 = *(code **)(*plVar1 + 0xb8);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    StringName::StringName((StringName *)&local_90,"_editor_source_scene",false);
    (*pcVar3)(local_58,plVar1,(StringName *)&local_90,(Vector2 *)&local_78);
    Variant::operator_cast_to_String(local_88);
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"Update from existing scene?:\n%s");
    TTR((String *)&local_98,(String *)&local_a8);
    vformat<String>(local_80,(String *)&local_98,local_88);
    AcceptDialog::set_text(uVar2,local_80);
    CowData<char32_t>::_unref(local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    pVVar4 = *(Vector2i **)(this + 0x9e0);
    local_78 = _LC32;
    local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
    Window::popup_centered(pVVar4);
    break;
  case 3:
    this[0x9f0] = (MeshLibraryEditor)0x0;
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
    goto joined_r0x00100738;
  case 4:
    this[0x9f0] = (MeshLibraryEditor)0x1;
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
joined_r0x00100738:
    if (local_40 == lVar5) {
      EditorFileDialog::popup_file_dialog();
      return;
    }
    goto LAB_0010073a;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010073a:
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



/* MeshLibraryEditor::MeshLibraryEditor() */

void __thiscall MeshLibraryEditor::MeshLibraryEditor(MeshLibraryEditor *this)

{
  long lVar1;
  code *pcVar2;
  Ref *pRVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  EditorFileDialog *this_00;
  CallableCustom *pCVar8;
  MenuButton *this_01;
  undefined8 uVar9;
  String *pSVar10;
  long *plVar11;
  ConfirmationDialog *pCVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  long *local_90;
  String local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68 [2];
  undefined8 local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0x9e8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010a920;
  this[0x9f0] = (MeshLibraryEditor)0x0;
  *(undefined8 *)(this + 0x9f4) = 0;
  *(undefined1 (*) [16])(this + 0x9c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9d8) = (undefined1  [16])0x0;
  this_00 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_00);
  postinitialize_handler((Object *)this_00);
  *(EditorFileDialog **)(this + 0x9e8) = this_00;
  EditorFileDialog::set_file_mode(this_00,0);
  local_90 = (long *)0x0;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"PackedScene");
  ResourceLoader::get_recognized_extensions_for_type((String *)local_58,(List *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  EditorFileDialog::clear_filters();
  pSVar10 = *(String **)(this + 0x9e8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Import Scene");
  TTR((String *)&local_70,(String *)local_68);
  Window::set_title(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  if (local_90 != (long *)0x0) {
    for (lVar1 = *local_90; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      pSVar10 = *(String **)(this + 0x9e8);
      String::to_upper();
      operator+((char *)local_68,(String *)&_LC53);
      EditorFileDialog::add_filter(pSVar10,(String *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    }
  }
  Node::add_child(this,*(undefined8 *)(this + 0x9e8),0,0);
  plVar11 = *(long **)(this + 0x9e8);
  pcVar2 = *(code **)(*plVar11 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC16;
  *(MeshLibraryEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_0010af30;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar9 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar9;
  *(code **)(pCVar8 + 0x38) = _import_scene_cbk;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "MeshLibraryEditor::_import_scene_cbk";
  Callable::Callable((Callable *)local_58,pCVar8);
  StringName::StringName((StringName *)local_68,"file_selected",false);
  (*pcVar2)(plVar11,(String *)local_68,(String *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  this_01 = (MenuButton *)operator_new(0xc68,"");
  local_58[0] = 0;
  MenuButton::MenuButton(this_01,(String *)local_58);
  postinitialize_handler((Object *)this_01);
  *(MenuButton **)(this + 0x9d0) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node3DEditor::add_control_to_menu_panel(Node3DEditor::singleton);
  local_48 = _LC54;
  Control::set_position(*(Vector2 **)(this + 0x9d0),SUB81(&local_48,0));
  pSVar10 = *(String **)(this + 0x9d0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"MeshLibrary");
  TTR((String *)&local_70,(String *)local_68);
  Button::set_text(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar3 = *(Ref **)(this + 0x9d0);
  pOVar13 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar13 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar13 = (Object *)0x0;
  }
  pcVar2 = *(code **)(*(long *)pOVar13 + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((MeshLibraryEditor()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&MeshLibraryEditor()::{lambda()#1}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&MeshLibraryEditor()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&MeshLibraryEditor()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&MeshLibraryEditor()::{lambda()#1}::operator()()::sname);
  }
  (*pcVar2)((String *)local_58,pOVar13,&MeshLibraryEditor()::{lambda()#1}::operator()()::sname,lVar1
           );
  Button::set_button_icon(pRVar3);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_58);
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar13), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
    Memory::free_static(pOVar13,false);
  }
  uVar9 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Add Item");
  TTR((String *)&local_70,(String *)local_68);
  PopupMenu::add_item(uVar9,(String *)&local_70,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar9 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Remove Selected Item");
  TTR((String *)&local_70,(String *)local_68);
  PopupMenu::add_item(uVar9,(String *)&local_70,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar10 = (String *)MenuButton::get_popup();
  local_58[0] = 0;
  PopupMenu::add_separator(pSVar10,(int)(String *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar9 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Import from Scene (Ignore Transforms)");
  TTR((String *)&local_70,(String *)local_68);
  PopupMenu::add_item(uVar9,(String *)&local_70,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar9 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Import from Scene (Apply Transforms)");
  TTR((String *)&local_70,(String *)local_68);
  PopupMenu::add_item(uVar9,(String *)&local_70,4,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar9 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Update from Scene");
  TTR((String *)&local_70,(String *)local_68);
  PopupMenu::add_item(uVar9,(String *)&local_70,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  iVar6 = MenuButton::get_popup();
  iVar7 = MenuButton::get_popup();
  bVar5 = (bool)PopupMenu::get_item_index(iVar7);
  PopupMenu::set_item_disabled(iVar6,bVar5);
  plVar11 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar11 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC16;
  *(MeshLibraryEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_0010afc0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar9 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar9;
  *(code **)(pCVar8 + 0x38) = _menu_cbk;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "MeshLibraryEditor::_menu_cbk";
  Callable::Callable((Callable *)local_58,pCVar8);
  (*pcVar2)(plVar11,SceneStringNames::singleton + 0x240,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  CanvasItem::hide();
  pCVar12 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(ConfirmationDialog **)(this + 0x9d8) = pCVar12;
  Node::add_child(this,pCVar12,0,0);
  plVar11 = *(long **)(*(long *)(this + 0x9d8) + 0xd88);
  pcVar2 = *(code **)(*plVar11 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC16;
  *(MeshLibraryEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_0010b050;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar9 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar9;
  *(code **)(pCVar8 + 0x38) = _menu_remove_confirm;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "MeshLibraryEditor::_menu_remove_confirm";
  Callable::Callable((Callable *)local_58,pCVar8);
  (*pcVar2)(plVar11,SceneStringNames::singleton + 0x238,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pCVar12 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(ConfirmationDialog **)(this + 0x9e0) = pCVar12;
  Node::add_child(this,pCVar12,0,0);
  uVar9 = *(undefined8 *)(this + 0x9e0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Apply without Transforms");
  TTR((String *)&local_70,(String *)local_68);
  AcceptDialog::set_ok_button_text(uVar9,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar11 = *(long **)(*(long *)(this + 0x9e0) + 0xd88);
  pcVar2 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<MeshLibraryEditor,bool>
            ((MeshLibraryEditor *)local_58,(char *)this,
             (_func_void_bool *)"&MeshLibraryEditor::_menu_update_confirm");
  bVar5 = SUB81((String *)local_68,0);
  Callable::bind<bool>(bVar5);
  (*pcVar2)(plVar11,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pSVar10 = *(String **)(this + 0x9e0);
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"");
  local_78 = 0;
  String::parse_latin1((String *)&local_78,"");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"Apply with Transforms");
  TTR(local_88,(String *)&local_80);
  plVar11 = (long *)AcceptDialog::add_button(pSVar10,SUB81(local_88,0),(String *)0x0);
  pcVar2 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<MeshLibraryEditor,bool>
            ((MeshLibraryEditor *)local_58,(char *)this,
             (_func_void_bool *)"&MeshLibraryEditor::_menu_update_confirm");
  Callable::bind<bool>(bVar5);
  (*pcVar2)(plVar11,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MeshLibraryEditorPlugin::MeshLibraryEditorPlugin() */

void __thiscall MeshLibraryEditorPlugin::MeshLibraryEditorPlugin(MeshLibraryEditorPlugin *this)

{
  long lVar1;
  long lVar2;
  MeshLibraryEditor *this_00;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = Node::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (MeshLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (MeshLibraryEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (MeshLibraryEditor *)operator_new(0xa00,"");
  MeshLibraryEditor::MeshLibraryEditor(this_00);
  postinitialize_handler((Object *)this_00);
  lVar2 = EditorNode::singleton;
  *(MeshLibraryEditor **)(this + 0x660) = this_00;
  Node::add_child(*(undefined8 *)(lVar2 + 0x6c8),this_00,0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0x660),10,0,0);
  Control::set_end(*(Vector2 **)(this + 0x660));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditorPlugin::edit(Object*) */

void __thiscall MeshLibraryEditorPlugin::edit(MeshLibraryEditorPlugin *this,Object *param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  pRVar1 = *(Ref **)(this + 0x660);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (pOVar5 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&MeshLibrary::typeinfo,0),
     pOVar5 == (Object *)0x0)) {
    lVar3 = *(long *)(pRVar1 + 0x9c8);
    if (lVar3 != 0) {
      *(undefined8 *)(pRVar1 + 0x9c8) = 0;
      local_38 = lVar3;
      Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_38);
      if (*(long *)(pRVar1 + 0x9c8) != 0) {
        MeshLibraryEditor::edit(pRVar1);
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::hide();
      return;
    }
    goto LAB_00101cbc;
  }
  cVar4 = RefCounted::init_ref();
  pOVar2 = *(Object **)(pRVar1 + 0x9c8);
  if (cVar4 == '\0') {
    if (pOVar2 != (Object *)0x0) {
      *(undefined8 *)(pRVar1 + 0x9c8) = 0;
      pOVar5 = (Object *)0x0;
      goto LAB_00101b3a;
    }
  }
  else {
    if (pOVar5 == pOVar2) {
LAB_00101bbb:
      MeshLibraryEditor::edit(pRVar1);
    }
    else {
      *(Object **)(pRVar1 + 0x9c8) = pOVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(pRVar1 + 0x9c8) = 0;
        if (pOVar2 != (Object *)0x0) goto LAB_00101b3a;
      }
      else if (pOVar2 == (Object *)0x0) {
        if (*(long *)(pRVar1 + 0x9c8) != 0) goto LAB_00101bbb;
      }
      else {
LAB_00101b3a:
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
        if (*(long *)(pRVar1 + 0x9c8) != 0) {
          MeshLibraryEditor::edit(pRVar1);
        }
        if (pOVar5 == (Object *)0x0) goto LAB_00101b5d;
      }
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00101b5d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::show();
    return;
  }
LAB_00101cbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<Mesh> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Mesh>>::_copy_on_write(CowData<Ref<Mesh>> *this)

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



/* CowData<MeshLibrary::ShapeData>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<MeshLibrary::ShapeData>::_copy_on_write(CowData<MeshLibrary::ShapeData> *this)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar11 = 0x10;
  if (lVar1 * 0x38 != 0) {
    uVar11 = lVar1 * 0x38 - 1;
    uVar11 = uVar11 | uVar11 >> 1;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar11 = uVar11 | uVar11 >> 0x10;
    uVar11 = (uVar11 | uVar11 >> 0x20) + 0x11;
  }
  puVar9 = (undefined8 *)Memory::alloc_static(uVar11,false);
  if (puVar9 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar13 = 0;
  *puVar9 = 1;
  puVar9[1] = lVar1;
  plVar10 = puVar9 + 2;
  if (lVar1 != 0) {
    do {
      plVar12 = (long *)((long)plVar10 + *(long *)this + (-0x10 - (long)puVar9));
      *plVar10 = 0;
      if (*plVar12 != 0) {
        *plVar10 = *plVar12;
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          *plVar10 = 0;
        }
      }
      lVar3 = plVar12[2];
      lVar4 = plVar12[3];
      lVar5 = plVar12[4];
      lVar13 = lVar13 + 1;
      lVar6 = plVar12[5];
      lVar7 = plVar12[6];
      plVar10[1] = plVar12[1];
      plVar10[2] = lVar3;
      plVar10[3] = lVar4;
      plVar10[4] = lVar5;
      plVar10[5] = lVar6;
      plVar10[6] = lVar7;
      plVar10 = plVar10 + 7;
    } while (lVar1 != lVar13);
  }
  _unref(this);
  *(undefined8 **)this = puVar9 + 2;
  return;
}



/* MeshLibraryEditor::_import_scene_parse_node(Ref<MeshLibrary>, HashMap<int, MeshInstance3D*,
   HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   MeshInstance3D*> > >&, Node*, bool, bool) */

void MeshLibraryEditor::_import_scene_parse_node
               (long *param_1,
               HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
               *param_2,long param_3,char param_4,char param_5)

{
  undefined8 *puVar1;
  String *pSVar2;
  Object *pOVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  List *pLVar20;
  undefined8 uVar21;
  Object *pOVar22;
  Object *pOVar23;
  long lVar24;
  int iVar25;
  Ref *pRVar26;
  long lVar27;
  long in_FS_OFFSET;
  CowData<char32_t> *local_1d0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_17c;
  long *local_178;
  long *local_170;
  long *local_168;
  Object *local_160;
  Object *local_158;
  long local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  Transform3D local_e8 [48];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  Transform3D local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0) ||
     (lVar17 = __dynamic_cast(param_3,&Object::typeinfo,&MeshInstance3D::typeinfo,0), lVar17 == 0))
  {
    for (iVar25 = 0; iVar15 = Node::get_child_count(SUB81(param_3,0)), iVar25 < iVar15;
        iVar25 = iVar25 + 1) {
      uVar21 = Node::get_child((int)param_3,SUB41(iVar25,0));
      local_158 = (Object *)0x0;
      if (((Object *)*param_1 != (Object *)0x0) &&
         (local_158 = (Object *)*param_1, cVar13 = RefCounted::reference(), cVar13 == '\0')) {
        local_158 = (Object *)0x0;
      }
      _import_scene_parse_node((Ref<MeshLibrary> *)&local_158,param_2,uVar21,param_4,param_5);
      Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_158);
    }
    goto LAB_001022ca;
  }
  MeshInstance3D::get_mesh();
  if (local_178 != (long *)0x0) {
    pSVar2 = (String *)*param_1;
    Node::get_name();
    if (local_160 == (Object *)0x0) {
      local_158 = (Object *)0x0;
    }
    else {
      local_158 = (Object *)0x0;
      if (*(char **)(local_160 + 8) == (char *)0x0) {
        if (*(long *)(local_160 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)(local_160 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_158,*(char **)(local_160 + 8));
      }
    }
    local_1d0 = (CowData<char32_t> *)&local_158;
    uVar14 = MeshLibrary::find_item_by_name(pSVar2);
    pRVar26 = (Ref *)(ulong)uVar14;
    local_17c = uVar14;
    CowData<char32_t>::_unref(local_1d0);
    if ((StringName::configured != '\0') && (local_160 != (Object *)0x0)) {
      StringName::unref();
    }
    if ((int)uVar14 < 0) {
      local_17c = MeshLibrary::get_last_unused_item_id();
      pRVar26 = (Ref *)(ulong)local_17c;
      MeshLibrary::create_item((int)*param_1);
      lVar19 = *param_1;
      Node::get_name();
      if (local_160 == (Object *)0x0) {
        local_158 = (Object *)0x0;
      }
      else {
        local_158 = (Object *)0x0;
        if (*(char **)(local_160 + 8) == (char *)0x0) {
          if (*(long *)(local_160 + 0x10) != 0) {
            CowData<char32_t>::_ref(local_1d0,(CowData *)(local_160 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)local_1d0,*(char **)(local_160 + 8));
        }
      }
      MeshLibrary::set_item_name((int)lVar19,(String *)pRVar26);
      CowData<char32_t>::_unref(local_1d0);
      if ((StringName::configured != '\0') && (local_160 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else if (param_4 == '\0') {
      Node::get_name();
      local_160 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_160,
                 "MeshLibrary export found a MeshInstance3D with a duplicated name \'%s\' in the exported scene that overrides a previously parsed MeshInstance3D item with the same name."
                );
      vformat<StringName>(local_1d0,(String *)&local_160,&local_168);
      _err_print_error("_import_scene_parse_node","editor/plugins/mesh_library_editor_plugin.cpp",
                       0x90,local_1d0,0,1);
      CowData<char32_t>::_unref(local_1d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      if ((StringName::configured != '\0') && (local_168 != (long *)0x0)) {
        StringName::unref();
      }
    }
    plVar18 = (long *)HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
                      ::operator[](param_2,(int *)&local_17c);
    *plVar18 = lVar17;
    (**(code **)(*local_178 + 0x198))((String *)&local_160,local_178,0);
    local_170 = (long *)0x0;
    if (local_160 != (Object *)0x0) {
      plVar18 = (long *)__dynamic_cast(local_160,&Object::typeinfo,&Mesh::typeinfo,0);
      if (plVar18 != (long *)0x0) {
        local_158 = (Object *)0x0;
        local_170 = plVar18;
        cVar13 = RefCounted::reference();
        if (cVar13 == '\0') {
          local_170 = (long *)0x0;
        }
        Ref<Mesh>::unref((Ref<Mesh> *)local_1d0);
        if (local_160 == (Object *)0x0) goto LAB_00102179;
      }
      cVar13 = RefCounted::unreference();
      pOVar22 = local_160;
      if ((cVar13 != '\0') && (cVar13 = predelete_handler(local_160), cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
        Memory::free_static(pOVar22,false);
      }
    }
LAB_00102179:
    for (iVar25 = 0; iVar15 = (**(code **)(*local_170 + 0x1c8))(), iVar25 < iVar15;
        iVar25 = iVar25 + 1) {
      MeshInstance3D::get_surface_override_material((int)local_1d0);
      if ((((local_158 != (Object *)0x0) &&
           ((**(code **)(*local_170 + 0x208))(local_170,iVar25,local_1d0),
           local_158 != (Object *)0x0)) &&
          (cVar13 = RefCounted::unreference(), pOVar22 = local_158, cVar13 != '\0')) &&
         (cVar13 = predelete_handler(local_158), cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
        Memory::free_static(pOVar22,false);
      }
    }
    MeshLibrary::set_item_mesh((int)*param_1,pRVar26);
    uVar14 = GeometryInstance3D::get_cast_shadows_setting();
    if (uVar14 == 2) {
      MeshLibrary::set_item_mesh_cast_shadow(*param_1,pRVar26,2);
    }
    else if (uVar14 < 3) {
      if (uVar14 == 0) {
        MeshLibrary::set_item_mesh_cast_shadow(*param_1,pRVar26,0);
      }
      else {
LAB_0010232f:
        MeshLibrary::set_item_mesh_cast_shadow(*param_1,pRVar26,1);
      }
    }
    else {
      if (uVar14 != 3) goto LAB_0010232f;
      MeshLibrary::set_item_mesh_cast_shadow(*param_1,pRVar26,3);
    }
    local_148 = ZEXT416(_LC99);
    local_128 = 0x3f800000;
    uVar5 = local_128;
    uStack_124 = 0;
    uVar7 = uStack_124;
    uStack_120 = 0;
    uVar9 = uStack_120;
    uStack_11c = 0;
    uVar11 = uStack_11c;
    local_128 = (undefined4)local_198;
    uVar6 = local_128;
    uStack_124 = (undefined4)((ulong)local_198 >> 0x20);
    uVar8 = uStack_124;
    uStack_120 = (undefined4)uStack_190;
    uVar10 = uStack_120;
    uStack_11c = (undefined4)((ulong)uStack_190 >> 0x20);
    uVar12 = uStack_11c;
    local_138 = local_148;
    local_128 = uVar5;
    uStack_124 = uVar7;
    uStack_120 = uVar9;
    uStack_11c = uVar11;
    if (param_5 != '\0') {
      Node3D::get_transform();
      local_148._8_8_ = uStack_1b0;
      local_148._0_8_ = local_1b8;
      local_138._8_8_ = uStack_1a0;
      local_138._0_8_ = local_1a8;
      local_128 = uVar6;
      uStack_124 = uVar8;
      uStack_120 = uVar10;
      uStack_11c = uVar12;
    }
    iVar25 = 0;
    MeshLibrary::set_item_mesh_transform((int)*param_1,(Transform3D *)pRVar26);
    local_150 = 0;
LAB_001023c0:
    iVar15 = Node::get_child_count(SUB81(lVar17,0));
    if (iVar25 < iVar15) {
      lVar19 = Node::get_child((int)lVar17,SUB41(iVar25,0));
      if ((lVar19 != 0) &&
         (pLVar20 = (List *)__dynamic_cast(lVar19,&Object::typeinfo,&StaticBody3D::typeinfo,0),
         pLVar20 != (List *)0x0)) {
        local_168 = (long *)0x0;
        CollisionObject3D::get_shape_owners(pLVar20);
        if (local_168 != (long *)0x0) {
          for (lVar19 = *local_168; lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
            uVar14 = (uint)pLVar20;
            cVar13 = CollisionObject3D::is_shape_owner_disabled(uVar14);
            if (cVar13 == '\0') {
              local_118 = ZEXT416(_LC99);
              local_f8 = 0x3f800000;
              uStack_f4 = 0;
              uStack_f0 = 0;
              uStack_ec = 0;
              local_108 = local_118;
              if (param_5 != '\0') {
                Node3D::get_transform();
                local_118._8_8_ = uStack_1b0;
                local_118._0_8_ = local_1b8;
                local_108._8_8_ = uStack_1a0;
                local_108._0_8_ = local_1a8;
                local_f8 = uVar6;
                uStack_f4 = uVar8;
                uStack_f0 = uVar10;
                uStack_ec = uVar12;
              }
              CollisionObject3D::shape_owner_get_transform((uint)local_b8);
              Node3D::get_transform();
              Transform3D::operator*(local_78,local_e8);
              Transform3D::operator*=((Transform3D *)local_118,local_78);
              for (iVar15 = 0; iVar16 = CollisionObject3D::shape_owner_get_shape_count(uVar14),
                  iVar15 < iVar16; iVar15 = iVar15 + 1) {
                CollisionObject3D::shape_owner_get_shape((uint)(String *)&local_160,uVar14);
                pOVar22 = local_160;
                if (local_160 != (Object *)0x0) {
                  cVar13 = RefCounted::reference();
                  if (cVar13 == '\0') {
                    pOVar22 = (Object *)0x0;
                    local_90._4_4_ = uStack_f4;
                    local_90._0_4_ = local_f8;
                    local_90._12_4_ = uStack_ec;
                    local_90._8_4_ = uStack_f0;
                    local_b0 = local_118._0_8_;
                    uStack_a8 = local_118._8_8_;
                    local_a0 = local_108._0_8_;
                    uStack_98 = local_108._8_8_;
                    pOVar23 = (Object *)0x0;
                  }
                  else {
                    local_90._4_4_ = uStack_f4;
                    local_90._0_4_ = local_f8;
                    local_90._8_4_ = uStack_f0;
                    local_90._12_4_ = uStack_ec;
                    local_b0 = local_118._0_8_;
                    uStack_a8 = local_118._8_8_;
                    local_a0 = local_108._0_8_;
                    uStack_98 = local_108._8_8_;
                    cVar13 = RefCounted::reference();
                    pOVar23 = (Object *)0x0;
                    if (cVar13 != '\0') {
                      pOVar23 = pOVar22;
                    }
                  }
                  local_70 = local_b0;
                  uStack_68 = uStack_a8;
                  local_60 = local_a0;
                  uStack_58 = uStack_98;
                  local_50 = local_90._0_8_;
                  uStack_48 = local_90._8_8_;
                  if (local_150 == 0) {
                    lVar24 = 1;
                  }
                  else {
                    lVar24 = *(long *)(local_150 + -8) + 1;
                  }
                  iVar16 = CowData<MeshLibrary::ShapeData>::resize<false>
                                     ((CowData<MeshLibrary::ShapeData> *)&local_150,lVar24);
                  if (iVar16 == 0) {
                    if (local_150 == 0) {
                      lVar27 = -1;
                      lVar24 = 0;
                    }
                    else {
                      lVar24 = *(long *)(local_150 + -8);
                      lVar27 = lVar24 + -1;
                      if (-1 < lVar27) {
                        CowData<MeshLibrary::ShapeData>::_copy_on_write
                                  ((CowData<MeshLibrary::ShapeData> *)&local_150);
                        puVar1 = (undefined8 *)(local_150 + lVar27 * 0x38);
                        pOVar3 = (Object *)*puVar1;
                        if (pOVar3 != pOVar23) {
                          *puVar1 = pOVar23;
                          if ((pOVar23 != (Object *)0x0) &&
                             (cVar13 = RefCounted::reference(), cVar13 == '\0')) {
                            *puVar1 = 0;
                          }
                          if (((pOVar3 != (Object *)0x0) &&
                              (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
                             (cVar13 = predelete_handler(pOVar3), cVar13 != '\0')) {
                            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                            Memory::free_static(pOVar3,false);
                          }
                        }
                        puVar1[1] = local_70;
                        puVar1[2] = uStack_68;
                        puVar1[3] = local_60;
                        puVar1[4] = uStack_58;
                        puVar1[5] = local_50;
                        puVar1[6] = uStack_48;
                        goto LAB_0010266c;
                      }
                    }
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar27,lVar24,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    _err_print_error("push_back","./core/templates/vector.h",0x142,
                                     "Condition \"err\" is true. Returning: true",0,0);
                  }
LAB_0010266c:
                  if (((pOVar23 != (Object *)0x0) &&
                      (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
                     (cVar13 = predelete_handler(pOVar23), cVar13 != '\0')) {
                    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
                    Memory::free_static(pOVar23,false);
                  }
                  if (((pOVar22 != (Object *)0x0) &&
                      (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
                     (cVar13 = predelete_handler(pOVar22), cVar13 != '\0')) {
                    (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
                    Memory::free_static(pOVar22,false);
                  }
                  if (((local_160 != (Object *)0x0) &&
                      (cVar13 = RefCounted::unreference(), pOVar22 = local_160, cVar13 != '\0')) &&
                     (cVar13 = predelete_handler(local_160), cVar13 != '\0')) {
                    (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
                    Memory::free_static(pOVar22,false);
                  }
                }
              }
            }
          }
          if (local_168 != (long *)0x0) {
            do {
              plVar18 = local_168;
              pvVar4 = (void *)*local_168;
              if (pvVar4 == (void *)0x0) {
                if ((int)local_168[2] == 0) {
                  Memory::free_static(local_168,false);
                  goto LAB_00102850;
                }
                iVar25 = iVar25 + 1;
                _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
                goto LAB_001023c0;
              }
              if (local_168 == *(long **)((long)pvVar4 + 0x18)) {
                lVar19 = *(long *)((long)pvVar4 + 8);
                lVar24 = *(long *)((long)pvVar4 + 0x10);
                *local_168 = lVar19;
                if (pvVar4 == (void *)local_168[1]) {
                  local_168[1] = lVar24;
                }
                if (lVar24 != 0) {
                  *(long *)(lVar24 + 8) = lVar19;
                  lVar19 = *(long *)((long)pvVar4 + 8);
                }
                if (lVar19 != 0) {
                  *(long *)(lVar19 + 0x10) = lVar24;
                }
                Memory::free_static(pvVar4,false);
                *(int *)(plVar18 + 2) = (int)plVar18[2] + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
            } while ((int)local_168[2] != 0);
            Memory::free_static(local_168,false);
          }
        }
      }
LAB_00102850:
      iVar25 = iVar25 + 1;
      goto LAB_001023c0;
    }
    MeshLibrary::set_item_shapes((int)*param_1,(Vector *)pRVar26);
    for (iVar25 = 0; iVar15 = Node::get_child_count(SUB81(lVar17,0)), iVar25 < iVar15;
        iVar25 = iVar25 + 1) {
      lVar19 = Node::get_child((int)lVar17,SUB41(iVar25,0));
      if (((lVar19 != 0) &&
          (lVar19 = __dynamic_cast(lVar19,&Object::typeinfo,&NavigationRegion3D::typeinfo,0),
          lVar19 != 0)) && (NavigationRegion3D::get_navigation_mesh(), local_160 != (Object *)0x0))
      {
        Node3D::get_transform();
        MeshLibrary::set_item_navigation_mesh((int)*param_1,pRVar26);
        MeshLibrary::set_item_navigation_mesh_transform((int)*param_1,(Transform3D *)pRVar26);
        if (((local_160 != (Object *)0x0) &&
            (cVar13 = RefCounted::unreference(), pOVar22 = local_160, cVar13 != '\0')) &&
           (cVar13 = predelete_handler(local_160), cVar13 != '\0')) {
          (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
          Memory::free_static(pOVar22,false);
        }
        break;
      }
    }
    CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData> *)&local_150);
    Ref<Mesh>::unref((Ref<Mesh> *)&local_170);
  }
  Ref<Mesh>::unref((Ref<Mesh> *)&local_178);
LAB_001022ca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditor::_import_scene(Node*, Ref<MeshLibrary>, bool, bool) */

void MeshLibraryEditor::_import_scene
               (int param_1,undefined8 *param_2,char param_3,undefined1 param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  Object *pOVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  Ref<Texture2D> *pRVar14;
  Vector *pVVar15;
  ulong uVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  uint uVar27;
  Object *pOVar28;
  Ref<Texture2D> *pRVar29;
  long lVar30;
  void *pvVar31;
  uint uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  bool bVar34;
  ulong local_120;
  undefined1 local_118 [8];
  long local_110 [2];
  long local_100 [2];
  long local_f0;
  Object *local_e8;
  Ref<Texture2D> *local_e0;
  HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
  local_d8 [8];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == '\0') {
    MeshLibrary::clear();
  }
  local_b0 = 2;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  for (iVar26 = 0; iVar18 = Node::get_child_count(SUB41(param_1,0)), iVar26 < iVar18;
      iVar26 = iVar26 + 1) {
    uVar20 = Node::get_child(param_1,SUB41(iVar26,0));
    pOVar28 = (Object *)*param_2;
    if ((pOVar28 == (Object *)0x0) ||
       (local_e8 = pOVar28, cVar17 = RefCounted::reference(), cVar17 == '\0')) {
      local_e8 = (Object *)0x0;
      _import_scene_parse_node((Vector *)&local_e8,local_d8,uVar20,param_3,param_4);
    }
    else {
      _import_scene_parse_node((Vector *)&local_e8,local_d8,uVar20,param_3,param_4);
      cVar17 = RefCounted::unreference();
      if ((cVar17 != '\0') && (cVar17 = predelete_handler(pOVar28), cVar17 != '\0')) {
        (**(code **)(*(long *)pOVar28 + 0x140))(pOVar28);
        Memory::free_static(pOVar28,false);
      }
    }
  }
  local_110[0] = 0;
  local_100[0] = 0;
  MeshLibrary::get_item_list();
  pVVar15 = EditorInterface::singleton;
  lVar30 = local_f0;
  uVar16 = local_b0;
  for (lVar25 = 0;
      (EditorInterface::singleton = pVVar15, local_b0 = uVar16, lVar30 != 0 &&
      (lVar25 < *(long *)(lVar30 + -8))); lVar25 = lVar25 + 1) {
    uVar2 = *(uint *)(lVar30 + lVar25 * 4);
    if ((local_d0._0_8_ != 0) &&
       (local_b0._4_4_ = (int)(uVar16 >> 0x20), bVar34 = local_b0._4_4_ != 0, bVar34)) {
      uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes + (uVar16 & 0xffffffff) * 4));
      uVar3 = *(ulong *)(hash_table_size_primes_inv + (uVar16 & 0xffffffff) * 8);
      uVar19 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
      uVar19 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51cb;
      uVar27 = uVar19 ^ uVar19 >> 0x10;
      if (uVar19 == uVar19 >> 0x10) {
        uVar27 = 1;
        uVar23 = uVar3;
      }
      else {
        uVar23 = uVar27 * uVar3;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar33;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar23;
      lVar24 = SUB168(auVar5 * auVar9,8);
      uVar19 = *(uint *)(local_d0._8_8_ + lVar24 * 4);
      uVar22 = SUB164(auVar5 * auVar9,8);
      if (uVar19 != 0) {
        uVar32 = 0;
        while ((uVar19 != uVar27 ||
               (uVar2 != *(uint *)(*(long *)(local_d0._0_8_ + lVar24 * 8) + 0x10)))) {
          uVar32 = uVar32 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar22 + 1) * uVar3;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar33;
          lVar24 = SUB168(auVar6 * auVar10,8);
          uVar19 = *(uint *)(local_d0._8_8_ + lVar24 * 4);
          uVar22 = SUB164(auVar6 * auVar10,8);
          if ((uVar19 == 0) ||
             (auVar7._8_8_ = 0, auVar7._0_8_ = uVar19 * uVar3, auVar11._8_8_ = 0,
             auVar11._0_8_ = uVar33, auVar8._8_8_ = 0,
             auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (uVar16 & 0xffffffff) * 4) + uVar22
                             ) - SUB164(auVar7 * auVar11,8)) * uVar3, auVar12._8_8_ = 0,
             auVar12._0_8_ = uVar33, SUB164(auVar8 * auVar12,8) < uVar32)) goto LAB_00103226;
        }
        if (*(long *)(local_d0._0_8_ + (ulong)uVar22 * 8) != 0) {
          MeshLibrary::get_item_mesh((int)(Vector *)&local_e8);
          if (local_110[0] == 0) {
            lVar30 = 1;
          }
          else {
            lVar30 = *(long *)(local_110[0] + -8) + 1;
          }
          iVar26 = CowData<Ref<Mesh>>::resize<false>((CowData<Ref<Mesh>> *)local_110,lVar30);
          if (iVar26 == 0) {
            if (local_110[0] == 0) {
              lVar24 = -1;
              lVar30 = 0;
            }
            else {
              lVar30 = *(long *)(local_110[0] + -8);
              lVar24 = lVar30 + -1;
              if (-1 < lVar24) {
                CowData<Ref<Mesh>>::_copy_on_write((CowData<Ref<Mesh>> *)local_110);
                puVar21 = (undefined8 *)(local_110[0] + lVar24 * 8);
                pOVar4 = (Object *)*puVar21;
                pOVar28 = pOVar4;
                if (local_e8 != pOVar4) {
                  *puVar21 = local_e8;
                  if ((local_e8 != (Object *)0x0) &&
                     (cVar17 = RefCounted::reference(), cVar17 == '\0')) {
                    *puVar21 = 0;
                  }
                  pOVar28 = local_e8;
                  if (((pOVar4 != (Object *)0x0) &&
                      (cVar17 = RefCounted::unreference(), pOVar28 = local_e8, cVar17 != '\0')) &&
                     (cVar17 = predelete_handler(pOVar4), pOVar28 = local_e8, cVar17 != '\0')) {
                    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                    Memory::free_static(pOVar4,false);
                    pOVar28 = local_e8;
                  }
                }
                goto LAB_00103117;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar30,"p_index","size()","",
                       false,false);
            pOVar28 = local_e8;
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
            pOVar28 = local_e8;
          }
LAB_00103117:
          if (((pOVar28 != (Object *)0x0) &&
              (cVar17 = RefCounted::unreference(), pOVar28 = local_e8, cVar17 != '\0')) &&
             (cVar17 = predelete_handler(local_e8), cVar17 != '\0')) {
            (**(code **)(*(long *)pOVar28 + 0x140))(pOVar28);
            Memory::free_static(pOVar28,false);
          }
          if (local_f0 == 0) {
            lVar30 = 0;
            goto LAB_0010350b;
          }
          lVar30 = *(long *)(local_f0 + -8);
          if (lVar30 <= lVar25) goto LAB_0010350b;
          HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
          ::operator[](local_d8,(int *)(local_f0 + lVar25 * 4));
          Node3D::get_transform();
          local_78 = local_a8;
          uStack_70 = uStack_a0;
          local_68 = local_98;
          uStack_60 = uStack_90;
          local_58 = local_88;
          uStack_50 = uStack_80;
          if (local_100[0] == 0) {
            lVar30 = 1;
          }
          else {
            lVar30 = *(long *)(local_100[0] + -8) + 1;
          }
          iVar26 = CowData<Transform3D>::resize<false>((CowData<Transform3D> *)local_100,lVar30);
          if (iVar26 == 0) {
            if (local_100[0] == 0) {
              lVar24 = -1;
              lVar30 = 0;
            }
            else {
              lVar30 = *(long *)(local_100[0] + -8);
              lVar24 = lVar30 + -1;
              if (-1 < lVar24) {
                CowData<Transform3D>::_copy_on_write((CowData<Transform3D> *)local_100);
                puVar21 = (undefined8 *)(lVar24 * 0x30 + local_100[0]);
                *puVar21 = local_78;
                puVar21[1] = uStack_70;
                puVar21[2] = local_68;
                puVar21[3] = uStack_60;
                puVar21[4] = local_58;
                puVar21[5] = uStack_50;
                lVar30 = local_f0;
                goto LAB_00103226;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar30,"p_index","size()","",
                       false,false);
            lVar30 = local_f0;
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
            lVar30 = local_f0;
          }
        }
      }
    }
LAB_00103226:
    pVVar15 = EditorInterface::singleton;
    uVar16 = local_b0;
  }
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"editors/grid_map/preview_size");
  _EDITOR_GET((String *)&local_78);
  Variant::operator_cast_to_int((Variant *)&local_78);
  EditorInterface::make_mesh_previews((Vector *)&local_e8,pVVar15,(int)local_118);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  iVar26 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  pRVar14 = local_e0;
  for (lVar24 = 0; (local_e0 = pRVar14, local_f0 != 0 && (lVar24 < *(long *)(local_f0 + -8)));
      lVar24 = lVar24 + 1) {
    local_120 = local_120 & 0xffffffff00000000;
    uVar2 = *(uint *)(local_f0 + lVar24 * 4);
    cVar17 = HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
             ::_lookup_pos(local_d8,(int *)(ulong)uVar2,(uint *)&local_120);
    if ((cVar17 != '\0') && (*(long *)(local_d0._0_8_ + (local_120 & 0xffffffff) * 8) != 0)) {
      lVar25 = (long)iVar26;
      if (pRVar14 == (Ref<Texture2D> *)0x0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(long *)(pRVar14 + -8);
      }
      if (lVar30 <= lVar25) {
LAB_0010350b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar25,lVar30,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      iVar26 = iVar26 + 1;
      MeshLibrary::set_item_preview((int)*param_2,(Ref *)(ulong)uVar2);
    }
    pRVar14 = local_e0;
  }
  if (pRVar14 != (Ref<Texture2D> *)0x0) {
    LOCK();
    pRVar29 = pRVar14 + -0x10;
    *(long *)pRVar29 = *(long *)pRVar29 + -1;
    UNLOCK();
    if (*(long *)pRVar29 == 0) {
      if (pRVar14 == (Ref<Texture2D> *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      lVar25 = *(long *)(pRVar14 + -8);
      lVar30 = 0;
      local_e0 = (Ref<Texture2D> *)0x0;
      pRVar29 = pRVar14;
      if (lVar25 != 0) {
        do {
          lVar30 = lVar30 + 1;
          Ref<Texture2D>::unref(pRVar29);
          pRVar29 = pRVar29 + 8;
        } while (lVar25 != lVar30);
      }
      Memory::free_static(pRVar14 + -0x10,false);
    }
  }
  lVar25 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar25 + -0x10),false);
    }
  }
  lVar25 = local_100[0];
  if (local_100[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_100[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100[0] = 0;
      Memory::free_static((void *)(lVar25 + -0x10),false);
    }
  }
  CowData<Ref<Mesh>>::_unref((CowData<Ref<Mesh>> *)local_110);
  if ((void *)local_d0._0_8_ != (void *)0x0) {
    pvVar31 = (void *)local_d0._0_8_;
    if (local_b0._4_4_ != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4);
      if (uVar2 == 0) {
        local_b0 = local_b0 & 0xffffffff;
        local_c0 = (undefined1  [16])0x0;
      }
      else {
        lVar25 = 0;
        do {
          if (*(int *)(local_d0._8_8_ + lVar25) != 0) {
            *(int *)(local_d0._8_8_ + lVar25) = 0;
            Memory::free_static(*(void **)((long)pvVar31 + lVar25 * 2),false);
            *(undefined8 *)(local_d0._0_8_ + lVar25 * 2) = 0;
            pvVar31 = (void *)local_d0._0_8_;
          }
          lVar25 = lVar25 + 4;
        } while (lVar25 != (ulong)uVar2 * 4);
        local_b0 = local_b0 & 0xffffffff;
        local_c0 = (undefined1  [16])0x0;
        if (pvVar31 == (void *)0x0) goto LAB_0010346e;
      }
    }
    Memory::free_static(pvVar31,false);
    Memory::free_static((void *)local_d0._8_8_,false);
  }
LAB_0010346e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MeshLibraryEditor::_import_scene_cbk(String const&) */

void __thiscall MeshLibraryEditor::_import_scene_cbk(MeshLibraryEditor *this,String *param_1)

{
  MeshLibraryEditor MVar1;
  Object *pOVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  Object *pOVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"PackedScene");
  ResourceLoader::load((StringName *)&local_60,param_1,(String *)&local_68,1,0);
  if (local_60 == (Object *)0x0) {
LAB_00103a20:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00103a28:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_import_scene_cbk","editor/plugins/mesh_library_editor_plugin.cpp",0x6d,
                       "Condition \"ps.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    pOVar9 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&PackedScene::typeinfo,0);
    if (pOVar9 == (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 == '\0') goto LAB_00103a20;
LAB_00103b62:
      pOVar10 = local_60;
      cVar5 = predelete_handler(local_60);
      if (cVar5 != '\0') goto LAB_00103995;
LAB_001039ac:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (pOVar9 == (Object *)0x0) goto LAB_00103a28;
    }
    else {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        if (((local_60 == (Object *)0x0) ||
            (cVar5 = RefCounted::unreference(), pOVar10 = local_60, cVar5 == '\0')) ||
           (cVar5 = predelete_handler(local_60), cVar5 == '\0')) goto LAB_00103a20;
        pOVar9 = (Object *)0x0;
LAB_00103995:
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
        goto LAB_001039ac;
      }
      if ((local_60 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0'))
      goto LAB_00103b62;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    pOVar10 = (Object *)PackedScene::instantiate(pOVar9,0);
    if (pOVar10 == (Object *)0x0) {
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"\'.");
      operator+((char *)local_70,(String *)"Cannot create an instance from PackedScene \'");
      String::operator+((String *)&local_60,(String *)local_70);
      _err_print_error("_import_scene_cbk","editor/plugins/mesh_library_editor_plugin.cpp",0x70,
                       "Parameter \"scene\" is null.",(StringName *)&local_60,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      cVar5 = RefCounted::unreference();
    }
    else {
      pOVar2 = *(Object **)(this + 0x9c8);
      iVar7 = *(int *)(this + 0x9f8);
      MVar1 = this[0x9f0];
      if ((pOVar2 == (Object *)0x0) ||
         (local_60 = pOVar2, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        local_60 = (Object *)0x0;
        _import_scene(pOVar10,(StringName *)&local_60,iVar7 == 2,MVar1);
      }
      else {
        _import_scene(pOVar10,(StringName *)&local_60,iVar7 == 2,MVar1);
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      cVar5 = predelete_handler(pOVar10);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      plVar3 = *(long **)(this + 0x9c8);
      pcVar4 = *(code **)(*plVar3 + 0xa8);
      Variant::Variant((Variant *)local_58,param_1);
      StringName::StringName((StringName *)&local_60,"_editor_source_scene",false);
      (*pcVar4)(plVar3,(StringName *)&local_60,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar7 = MenuButton::get_popup();
      iVar8 = MenuButton::get_popup();
      bVar6 = (bool)PopupMenu::get_item_index(iVar8);
      PopupMenu::set_item_disabled(iVar7,bVar6);
      cVar5 = RefCounted::unreference();
    }
    if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar9), cVar5 == '\0')) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar9,false);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditor::_menu_update_confirm(bool) */

void __thiscall MeshLibraryEditor::_menu_update_confirm(MeshLibraryEditor *this,bool param_1)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Window::hide();
  this[0x9f0] = (MeshLibraryEditor)param_1;
  plVar1 = *(long **)(this + 0x9c8);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  pcVar2 = *(code **)(*plVar1 + 0xb8);
  StringName::StringName((StringName *)&local_80,"_editor_source_scene",false);
  (*pcVar2)(local_58,plVar1,(StringName *)&local_80,&local_78);
  Variant::operator_cast_to_String((Variant *)&local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((local_88 == 0) || (*(uint *)(local_88 + -8) < 2)) {
    _err_print_error("_menu_update_confirm","editor/plugins/mesh_library_editor_plugin.cpp",0x44,
                     "Condition \"existing.is_empty()\" is true.",0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    _import_scene_cbk(this,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditor::update_library_file(Node*, Ref<MeshLibrary>, bool, bool) */

undefined8
MeshLibraryEditor::update_library_file
          (undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pOVar1 = (Object *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_38 = pOVar1, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_38 = (Object *)0x0;
    _import_scene(param_1,&local_38,param_3,param_4);
  }
  else {
    _import_scene(param_1,&local_38,param_3,param_4);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
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



/* MeshLibraryEditor::is_class_ptr(void*) const */

uint __thiscall MeshLibraryEditor::is_class_ptr(MeshLibraryEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MeshLibraryEditorPlugin::is_class_ptr(void*) const */

uint __thiscall MeshLibraryEditorPlugin::is_class_ptr(MeshLibraryEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MeshLibraryEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 MeshLibraryEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshLibraryEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 MeshLibraryEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshLibraryEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 MeshLibraryEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MeshLibraryEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MeshLibraryEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshLibraryEditorPlugin::has_main_screen() const */

undefined8 MeshLibraryEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<MeshLibraryEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void>::get_argument_count
          (CallableCustomMethodPointer<MeshLibraryEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<MeshLibraryEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&> *this,bool *param_1)

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



/* CallableCustomMethodPointer<MeshLibraryEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MeshLibraryEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MeshLibraryEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MeshLibraryEditor::_property_can_revertv(StringName const&) const */

undefined8 MeshLibraryEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MeshLibraryEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void MeshLibraryEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0010f010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* MeshLibraryEditor::_get_class_namev() const */

undefined8 * MeshLibraryEditor::_get_class_namev(void)

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
LAB_001044a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001044a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MeshLibraryEditor");
      goto LAB_0010450e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MeshLibraryEditor");
LAB_0010450e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,bool>::get_object
          (CallableCustomMethodPointer<MeshLibraryEditor,void,bool> *this)

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
      goto LAB_0010463d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010463d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010463d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&> *this)

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
      goto LAB_0010473d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010473d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010473d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,int>::get_object
          (CallableCustomMethodPointer<MeshLibraryEditor,void,int> *this)

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
      goto LAB_0010483d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010483d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010483d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void>::get_object
          (CallableCustomMethodPointer<MeshLibraryEditor,void> *this)

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
      goto LAB_0010493d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010493d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010493d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MeshLibraryEditorPlugin::_notificationv(int, bool) */

void __thiscall
MeshLibraryEditorPlugin::_notificationv(MeshLibraryEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010f018 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010f018 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* MeshLibraryEditor::_validate_propertyv(PropertyInfo&) const */

void MeshLibraryEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f020 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* MeshLibraryEditor::_setv(StringName const&, Variant const&) */

undefined8 MeshLibraryEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010f028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104b68) */
/* MeshLibraryEditor::_getv(StringName const&, Variant&) const */

undefined8 MeshLibraryEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010f030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* MeshLibraryEditor::~MeshLibraryEditor() */

void __thiscall MeshLibraryEditor::~MeshLibraryEditor(MeshLibraryEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010a920;
  if (*(long *)(this + 0x9c8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9c8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Control::~Control((Control *)this);
        return;
      }
    }
  }
  Control::~Control((Control *)this);
  return;
}



/* MeshLibraryEditor::~MeshLibraryEditor() */

void __thiscall MeshLibraryEditor::~MeshLibraryEditor(MeshLibraryEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010a920;
  if (*(long *)(this + 0x9c8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9c8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Control::~Control((Control *)this);
  operator_delete(this,0xa00);
  return;
}



/* MeshLibraryEditor::_notificationv(int, bool) */

void __thiscall MeshLibraryEditor::_notificationv(MeshLibraryEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010f038 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0010f038 == CanvasItem::_notification) {
    return;
  }
  Control::_notification(iVar1);
  return;
}



/* MeshLibraryEditorPlugin::get_plugin_name() const */

MeshLibraryEditorPlugin * __thiscall
MeshLibraryEditorPlugin::get_plugin_name(MeshLibraryEditorPlugin *this)

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



/* MeshLibraryEditorPlugin::_get_class_namev() const */

undefined8 * MeshLibraryEditorPlugin::_get_class_namev(void)

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
LAB_00104e63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104e63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MeshLibraryEditorPlugin");
      goto LAB_00104ece;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MeshLibraryEditorPlugin");
LAB_00104ece:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Transform3D>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MeshLibraryEditor::MeshLibraryEditor() [clone .cold] */

void __thiscall MeshLibraryEditor::MeshLibraryEditor(MeshLibraryEditor *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Mesh> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Mesh>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<MeshLibrary::ShapeData>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<MeshLibrary::ShapeData>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MeshLibraryEditor::_import_scene(Node*, Ref<MeshLibrary>, bool, bool) [clone .cold] */

void MeshLibraryEditor::_import_scene(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, MeshInstance3D*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, MeshInstance3D*> > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
::operator[](HashMap<int,MeshInstance3D*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,MeshInstance3D*>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  undefined1 (*pauVar23) [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar26 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar24 = _lookup_pos(this,(int *)(ulong)uVar26,&local_48);
  if (cVar24 == '\0') {
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar35 = (ulong)uVar27;
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar29 = Memory::alloc_static(uVar28,false);
      *(undefined8 *)(this + 0x10) = uVar29;
      pvVar31 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar31;
      if (uVar27 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar31 + uVar39)) &&
           (pvVar31 < (void *)((long)pvVar4 + uVar28))) {
          uVar28 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar28 * 4) = 0;
            *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar35 != uVar28);
        }
        else {
          memset(pvVar4,0,uVar28);
          memset(pvVar31,0,uVar39);
        }
      }
      uVar26 = *param_1;
    }
    local_44 = 0;
    cVar24 = _lookup_pos(this,(int *)(ulong)uVar26,&local_44);
    if (cVar24 == '\0') {
      if ((float)uVar27 * __LC11 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar26 = *(uint *)(this + 0x28);
        if (uVar26 == 0x1c) {
          pauVar30 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00105478;
        }
        uVar28 = (ulong)(uVar26 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
        if (uVar26 + 1 < 2) {
          uVar28 = 2;
        }
        uVar26 = *(uint *)(hash_table_size_primes + uVar28 * 4);
        uVar35 = (ulong)uVar26;
        *(int *)(this + 0x28) = (int)uVar28;
        pvVar31 = *(void **)(this + 8);
        uVar28 = uVar35 * 4;
        uVar39 = uVar35 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar29 = Memory::alloc_static(uVar28,false);
        *(undefined8 *)(this + 0x10) = uVar29;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar26 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar28))) {
            uVar28 = 0;
            do {
              *(undefined4 *)((long)__s + uVar28 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
              uVar28 = uVar28 + 1;
            } while (uVar35 != uVar28);
          }
          else {
            memset(__s,0,uVar28);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar27 == 0) {
          uVar26 = *param_1;
        }
        else {
          uVar28 = 0;
          do {
            uVar26 = *(uint *)((long)pvVar4 + uVar28 * 4);
            if (uVar26 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar26 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              lVar33 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar33 * 4);
              iVar32 = SUB164(auVar7 * auVar15,8);
              uVar38 = *puVar1;
              uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
              while (uVar38 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar38 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar3 + iVar32) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                uVar25 = SUB164(auVar9 * auVar17,8);
                uVar36 = uVar29;
                if (uVar25 < uVar37) {
                  *puVar1 = uVar26;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar33 * 8);
                  uVar36 = *puVar2;
                  *puVar2 = uVar29;
                  uVar26 = uVar38;
                  uVar37 = uVar25;
                }
                uVar37 = uVar37 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar32 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                lVar33 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar33 * 4);
                iVar32 = SUB164(auVar10 * auVar18,8);
                uVar29 = uVar36;
                uVar38 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar29;
              *puVar1 = uVar26;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar28 = uVar28 + 1;
          } while (uVar27 != uVar28);
          Memory::free_static(pvVar31,false);
          Memory::free_static(pvVar4,false);
          uVar26 = *param_1;
        }
      }
      pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
      *(uint *)pauVar30[1] = uVar26;
      *(undefined8 *)(pauVar30[1] + 8) = 0;
      *pauVar30 = (undefined1  [16])0x0;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar30;
      }
      else {
        *puVar2 = pauVar30;
        *(undefined8 **)(*pauVar30 + 8) = puVar2;
      }
      uVar26 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar30;
      uVar26 = (uVar26 >> 0x10 ^ uVar26) * -0x7a143595;
      uVar27 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
      uVar26 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
        uVar28 = 1;
        uVar26 = 1;
      }
      else {
        uVar28 = (ulong)uVar26;
      }
      uVar38 = 0;
      lVar5 = *(long *)(this + 0x10);
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar39 = CONCAT44(0,uVar27);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar34 = SUB168(auVar11 * auVar19,8);
      lVar33 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar34 * 4);
      iVar32 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar30;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar39;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar27 + iVar32) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        uVar37 = SUB164(auVar13 * auVar21,8);
        pauVar40 = pauVar23;
        if (uVar37 < uVar38) {
          *puVar1 = uVar26;
          puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar26 = uVar3;
          uVar38 = uVar37;
        }
        uVar38 = uVar38 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar32 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        lVar34 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar5 + lVar34 * 4);
        iVar32 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar40;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar33 + lVar34 * 8) = pauVar23;
      *puVar1 = uVar26;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_44 * 8);
      *(undefined8 *)(pauVar30[1] + 8) = 0;
    }
  }
  else {
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_00105478:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<MeshLibraryEditor, bool>(MeshLibraryEditor*,
   char const*, void (MeshLibraryEditor::*)(bool)) */

MeshLibraryEditor *
create_custom_callable_function_pointer<MeshLibraryEditor,bool>
          (MeshLibraryEditor *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC16;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010b0e0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<bool>(bool) const */

Variant ** Callable::bind<bool>(bool param_1)

{
  char cVar1;
  bool in_DL;
  int in_ESI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_DL);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT71(in_register_00000039,param_1),in_ESI);
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
    return (Variant **)CONCAT71(in_register_00000039,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b3a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00105b3a:
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



/* MeshLibraryEditorPlugin::~MeshLibraryEditorPlugin() */

void __thiscall MeshLibraryEditorPlugin::~MeshLibraryEditorPlugin(MeshLibraryEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* MeshLibraryEditorPlugin::~MeshLibraryEditorPlugin() */

void __thiscall MeshLibraryEditorPlugin::~MeshLibraryEditorPlugin(MeshLibraryEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* MeshLibraryEditorPlugin::_initialize_classv() */

void MeshLibraryEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0010f050 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0010f040 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010f048 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"MeshLibraryEditorPlugin");
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



/* WARNING: Removing unreachable block (ram,0x00106068) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* WARNING: Removing unreachable block (ram,0x00106318) */
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



/* WARNING: Removing unreachable block (ram,0x001065c8) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_b8[0];
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,undefined4 param_4,
          CowData *param_5,undefined4 param_6,StringName *param_7)

{
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  *(undefined4 *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
  *(undefined4 *)(this + 0x28) = param_6;
  if (*(int *)(this + 0x18) == 0x11) {
    StringName::StringName((StringName *)&local_38,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_38) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_38;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditorPlugin::get_class() const */

void MeshLibraryEditorPlugin::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"MeshLibraryEditorPlugin");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditor::get_class() const */

void MeshLibraryEditor::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"MeshLibraryEditor");
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
        String::parse_latin1((StrRange *)in_RDI);
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
LAB_00106e67:
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
      goto LAB_00106e67;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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



/* CallableCustomMethodPointer<MeshLibraryEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void>::call
          (CallableCustomMethodPointer<MeshLibraryEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001071df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001071df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001071b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107290;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001071df:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC43,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107290:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,bool>::call
          (CallableCustomMethodPointer<MeshLibraryEditor,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107459;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00107459;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC44;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010750a;
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
LAB_00107459:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC43,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010750a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,int>::call
          (CallableCustomMethodPointer<MeshLibraryEditor,void,int> *this,Variant **param_1,
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
      goto LAB_001076c8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001076c8;
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
        uVar3 = _LC45;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00107779;
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
LAB_001076c8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC43,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107779:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MeshLibraryEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&>::call
          (CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

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
            uVar3 = _LC46;
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
        goto LAB_0010784e;
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
  _err_print_error(&_LC43,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010784e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00107abb;
  }
  cVar3 = String::operator==(param_1,"Node");
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Object::is_class((Object *)this,param_1);
      return uVar4;
    }
  }
  else {
LAB_00107abb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar4 != '\0') goto LAB_00107c03;
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
      if (cVar4 != '\0') goto LAB_00107c03;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_00107d0e;
    }
  }
LAB_00107c03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107d0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditor::is_class(String const&) const */

undefined8 __thiscall MeshLibraryEditor::is_class(MeshLibraryEditor *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00107dfb;
  }
  cVar3 = String::operator==(param_1,"MeshLibraryEditor");
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Control::is_class((Control *)this,param_1);
      return uVar4;
    }
  }
  else {
LAB_00107dfb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshLibraryEditor::_initialize_classv() */

void MeshLibraryEditor::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_0010f050 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_0010f058 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_0010f060 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "MeshLibraryEditor";
    local_70 = 0;
    local_50 = 0x11;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010835f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010835f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* MeshLibraryEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
MeshLibraryEditorPlugin::is_class(MeshLibraryEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108493;
  }
  cVar4 = String::operator==(param_1,"MeshLibraryEditorPlugin");
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
      if (cVar4 != '\0') goto LAB_00108493;
    }
    cVar4 = String::operator==(param_1,"EditorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0010859e;
    }
  }
LAB_00108493:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010859e:
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
  local_78 = &_LC19;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC19;
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
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
  if ((code *)PTR__get_property_list_0010f068 != Object::_get_property_list) {
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
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
  if ((code *)PTR__get_property_list_0010f070 != CanvasItem::_get_property_list) {
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



/* MeshLibraryEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MeshLibraryEditor::_get_property_listv(MeshLibraryEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "MeshLibraryEditor";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "MeshLibraryEditor";
  local_90 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MeshLibraryEditor",false);
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



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
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



/* MeshLibraryEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
MeshLibraryEditorPlugin::_get_property_listv
          (MeshLibraryEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "MeshLibraryEditorPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "MeshLibraryEditorPlugin";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MeshLibraryEditorPlugin",false);
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



/* Ref<MeshLibrary>::unref() */

void __thiscall Ref<MeshLibrary>::unref(Ref<MeshLibrary> *this)

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



/* Ref<Mesh>::unref() */

void __thiscall Ref<Mesh>::unref(Ref<Mesh> *this)

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



/* CowData<Ref<Mesh> >::_unref() */

void __thiscall CowData<Ref<Mesh>>::_unref(CowData<Ref<Mesh>> *this)

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
LAB_0010918d:
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
            goto LAB_0010918d;
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



/* CowData<MeshLibrary::ShapeData>::_unref() */

void __thiscall CowData<MeshLibrary::ShapeData>::_unref(CowData<MeshLibrary::ShapeData> *this)

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
LAB_0010926d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 7;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0010926d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 7;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<Mesh> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Mesh>>::_realloc(CowData<Ref<Mesh>> *this,long param_1)

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
/* Error CowData<Ref<Mesh> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Mesh>>::resize<false>(CowData<Ref<Mesh>> *this,long param_1)

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
LAB_001096d0:
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
  if (lVar11 == 0) goto LAB_001096d0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010957a:
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
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010957a;
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
    goto LAB_00109540;
  }
  if (lVar11 == lVar8) {
LAB_0010964b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00109540:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010962b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010964b;
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
LAB_0010962b:
  puVar10[-1] = param_1;
  return 0;
}



/* CowData<Transform3D>::_realloc(long) */

undefined8 __thiscall CowData<Transform3D>::_realloc(CowData<Transform3D> *this,long param_1)

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
/* Error CowData<Transform3D>::resize<false>(long) */

undefined8 __thiscall CowData<Transform3D>::resize<false>(CowData<Transform3D> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar12 = 0;
    lVar4 = 0;
  }
  else {
    lVar12 = *(long *)(lVar4 + -8);
    if (param_1 == lVar12) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar12 * 0x30;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_00109a20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x30 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_00109a20;
  if (param_1 <= lVar12) {
    if ((lVar11 != lVar4) && (uVar9 = _realloc(this,lVar11), (int)uVar9 != 0)) {
      return uVar9;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar11 == lVar4) {
LAB_0010998c:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar10[-1];
    if (param_1 <= lVar4) goto LAB_0010991d;
  }
  else {
    if (lVar12 != 0) {
      uVar9 = _realloc(this,lVar11);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      goto LAB_0010998c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar4 = 0;
  }
  uVar3 = _LC99;
  pauVar7 = (undefined1 (*) [16])(puVar10 + lVar4 * 6);
  do {
    *(undefined8 *)((long)pauVar7[2] + 4) = 0;
    pauVar8 = pauVar7 + 3;
    *pauVar7 = ZEXT416(uVar3);
    pauVar7[1] = ZEXT416(uVar3);
    *(uint *)pauVar7[2] = uVar3;
    *(undefined4 *)((long)pauVar7[2] + 0xc) = 0;
    pauVar7 = pauVar8;
  } while ((undefined1 (*) [16])(puVar10 + param_1 * 6) != pauVar8);
LAB_0010991d:
  puVar10[-1] = param_1;
  return 0;
}



/* CowData<MeshLibrary::ShapeData>::_realloc(long) */

undefined8 __thiscall
CowData<MeshLibrary::ShapeData>::_realloc(CowData<MeshLibrary::ShapeData> *this,long param_1)

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
/* Error CowData<MeshLibrary::ShapeData>::resize<false>(long) */

undefined8 __thiscall
CowData<MeshLibrary::ShapeData>::resize<false>(CowData<MeshLibrary::ShapeData> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
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
    lVar9 = 0;
    lVar11 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar11 = lVar9 * 0x38;
    if (lVar11 != 0) {
      uVar12 = lVar11 - 1U | lVar11 - 1U >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      lVar11 = (uVar12 | uVar12 >> 0x20) + 1;
    }
  }
  lVar13 = param_1 * 0x38;
  if (lVar13 == 0) {
LAB_00109e30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar12 = lVar13 - 1U >> 1 | lVar13 - 1U;
  uVar12 = uVar12 | uVar12 >> 2;
  uVar12 = uVar12 | uVar12 >> 4;
  uVar12 = uVar12 | uVar12 >> 8;
  uVar12 = uVar12 | uVar12 >> 0x10;
  uVar12 = uVar12 | uVar12 >> 0x20;
  lVar5 = uVar12 + 1;
  if (lVar5 == 0) goto LAB_00109e30;
  if (param_1 <= lVar9) {
    lVar9 = *(long *)this;
    uVar12 = param_1;
    while (lVar9 != 0) {
      if (*(ulong *)(lVar9 + -8) <= uVar12) {
LAB_00109c62:
        if (lVar5 != lVar11) {
          uVar6 = _realloc(this,lVar5);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar9 = *(long *)this;
          if (lVar9 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar9 + -8) = param_1;
        return 0;
      }
      while (*(long *)(lVar9 + lVar13) == 0) {
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x38;
        if (*(ulong *)(lVar9 + -8) <= uVar12) goto LAB_00109c62;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar1 = *(Object **)(lVar9 + lVar13);
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x38;
      lVar9 = *(long *)this;
    }
    goto LAB_00109e86;
  }
  if (lVar5 == lVar11) {
LAB_00109da5:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00109e86:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar9 = puVar10[-1];
    if (param_1 <= lVar9) goto LAB_00109d84;
  }
  else {
    if (lVar9 != 0) {
      uVar6 = _realloc(this,lVar5);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00109da5;
    }
    puVar7 = (undefined8 *)Memory::alloc_static(uVar12 + 0x11,false);
    if (puVar7 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar7 + 2;
    *puVar7 = 1;
    puVar7[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar9 = 0;
  }
  uVar3 = _LC99;
  puVar7 = puVar10 + lVar9 * 7;
  do {
    *puVar7 = 0;
    puVar8 = puVar7 + 7;
    *(undefined1 (*) [16])(puVar7 + 1) = ZEXT416(uVar3);
    *(undefined1 (*) [16])(puVar7 + 3) = ZEXT416(uVar3);
    *(uint *)(puVar7 + 5) = uVar3;
    *(undefined8 *)((long)puVar7 + 0x2c) = 0;
    *(undefined4 *)((long)puVar7 + 0x34) = 0;
    puVar7 = puVar8;
  } while (puVar8 != puVar10 + param_1 * 7);
LAB_00109d84:
  puVar10[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  CowData<char32_t> *this;
  long lVar5;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t> **)(param_1 + 0x58);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this + 0x20);
          CowData<char32_t>::_unref(this + 0x10);
          CowData<char32_t>::_unref(this + 8);
          CowData<char32_t>::_unref(this);
          this = this + 0x28;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_0010a149;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_0010a149:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* MeshLibraryEditor::edit(Ref<MeshLibrary> const&) */

void MeshLibraryEditor::_GLOBAL__sub_I_edit(void)

{
  undefined8 uStack_8;
  
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
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  }
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
  if (MenuButton::base_property_helper != '\0') {
    return;
  }
  MenuButton::base_property_helper = 1;
  MenuButton::base_property_helper._64_8_ = 0;
  MenuButton::base_property_helper._56_8_ = 2;
  MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
               &__dso_handle,uStack_8);
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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MeshLibraryEditorPlugin::~MeshLibraryEditorPlugin() */

void __thiscall MeshLibraryEditorPlugin::~MeshLibraryEditorPlugin(MeshLibraryEditorPlugin *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MeshLibraryEditor::~MeshLibraryEditor() */

void __thiscall MeshLibraryEditor::~MeshLibraryEditor(MeshLibraryEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MeshLibraryEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MeshLibraryEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MeshLibraryEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MeshLibraryEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshLibraryEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshLibraryEditor,void,bool> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

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



