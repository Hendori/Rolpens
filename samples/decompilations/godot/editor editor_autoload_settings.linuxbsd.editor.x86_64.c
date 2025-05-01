
/* EditorAutoloadSettings::_browse_autoload_add_path() */

void EditorAutoloadSettings::_browse_autoload_add_path(void)

{
  EditorFileDialog::popup_file_dialog();
  return;
}



/* EditorAutoloadSettings::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

bool EditorAutoloadSettings::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long in_FS_OFFSET;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xa28] == (Vector2)0x0) {
    Variant::operator_cast_to_Dictionary(local_60);
    Variant::Variant((Variant *)local_58,"type");
    cVar1 = Dictionary::has(local_60);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    bVar4 = false;
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_58,"type");
      cVar1 = Dictionary::has(local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar1 != '\0') {
        lVar3 = Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xa38));
        if (lVar3 != 0) {
          iVar2 = Tree::get_drop_section_at_position(*(Vector2 **)(param_1 + 0xa38));
          bVar4 = -2 < iVar2;
        }
      }
    }
    Dictionary::~Dictionary((Dictionary *)local_60);
  }
  else {
    bVar4 = false;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<int, _DefaultComparator<int>, true>::introsort(long, long, int*, long) const [clone
   .isra.0] */

void SortArray<int,_DefaultComparator<int>,true>::introsort
               (long param_1,long param_2,int *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long local_58;
  
  lVar10 = param_2 - param_1;
  if (lVar10 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_0010033c:
    lVar6 = lVar10 + -2 >> 1;
    lVar13 = lVar6 * 2 + 2;
    piVar4 = param_3 + param_1 + lVar6;
    iVar12 = *piVar4;
    lVar5 = lVar6;
    lVar8 = lVar13;
    if (lVar10 <= lVar13) goto LAB_0010042c;
LAB_0010037b:
    do {
      iVar9 = param_3[param_1 + lVar13 + -1];
      iVar1 = param_3[param_1 + lVar13];
      lVar2 = lVar13 + -1;
      lVar7 = lVar13;
      piVar3 = param_3 + param_1 + lVar13 + -1;
      if (iVar9 <= iVar1) {
        lVar7 = lVar13 + 1;
        lVar2 = lVar13;
        piVar3 = param_3 + param_1 + lVar13;
        iVar9 = iVar1;
      }
      lVar13 = lVar7 * 2;
      param_3[lVar5 + param_1] = iVar9;
      lVar5 = lVar2;
    } while (lVar10 != lVar13 && SBORROW8(lVar10,lVar13) == lVar10 + lVar7 * -2 < 0);
    piVar11 = piVar3;
    if (lVar10 == lVar13) goto LAB_00100432;
    do {
      lVar13 = lVar8;
      lVar5 = lVar2 + -1;
      if (lVar2 <= lVar6) goto LAB_00100558;
      do {
        lVar8 = lVar5 >> 1;
        iVar9 = param_3[param_1 + lVar8];
        if (iVar12 <= iVar9) {
          param_3[lVar2 + param_1] = iVar12;
          goto joined_r0x0010040c;
        }
        param_3[lVar2 + param_1] = iVar9;
        lVar5 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
        lVar2 = lVar8;
      } while (lVar6 < lVar8);
      param_3[param_1 + lVar8] = iVar12;
joined_r0x0010040c:
      if (lVar6 == 0) {
        piVar4 = param_3 + param_1;
        lVar10 = (param_2 + -1) - param_1;
        goto LAB_00100468;
      }
      while( true ) {
        piVar4 = piVar4 + -1;
        lVar13 = lVar13 + -2;
        lVar6 = lVar6 + -1;
        iVar12 = *piVar4;
        lVar5 = lVar6;
        lVar8 = lVar13;
        if (lVar13 < lVar10) goto LAB_0010037b;
LAB_0010042c:
        piVar11 = piVar4;
        piVar3 = piVar4;
        lVar8 = lVar13;
        if (lVar13 == lVar10) break;
LAB_00100558:
        *piVar3 = iVar12;
      }
LAB_00100432:
      lVar2 = lVar13 + -1;
      piVar3 = param_3 + param_1 + lVar2;
      *piVar11 = *piVar3;
    } while( true );
  }
  lVar13 = param_2;
  local_58 = param_4;
LAB_001001a7:
  local_58 = local_58 + -1;
  iVar12 = param_3[lVar13 + -1];
  iVar9 = param_3[param_1];
  iVar1 = param_3[(lVar10 >> 1) + param_1];
  if (iVar9 < iVar1) {
    if (iVar9 < iVar12) {
      iVar9 = iVar12;
    }
    if (iVar1 < iVar12) {
      iVar9 = iVar1;
    }
  }
  else {
    if (iVar1 < iVar12) {
      iVar1 = iVar12;
    }
    if (iVar12 <= iVar9) {
      iVar9 = iVar1;
    }
  }
  lVar10 = lVar13;
  param_2 = param_1;
  do {
    if (param_3[param_2] < iVar9) {
      if (lVar13 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_00100210;
      }
    }
    else {
LAB_00100210:
      lVar5 = lVar10 + -1;
      piVar4 = param_3 + lVar5;
      if (iVar9 < *piVar4) {
        piVar3 = param_3 + lVar10 + -2;
        while (param_1 != lVar5) {
          lVar5 = lVar5 + -1;
          piVar4 = piVar3;
          if (*piVar3 <= iVar9) goto LAB_00100272;
          piVar3 = piVar3 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_00100272:
      if (lVar5 <= param_2) break;
      iVar12 = param_3[param_2];
      param_3[param_2] = *piVar4;
      *piVar4 = iVar12;
      lVar10 = lVar5;
    }
    param_2 = param_2 + 1;
  } while( true );
  introsort(param_2,lVar13,param_3,local_58);
  lVar10 = param_2 - param_1;
  if (lVar10 < 0x11) {
    return;
  }
  lVar13 = param_2;
  if (local_58 == 0) goto LAB_0010033c;
  goto LAB_001001a7;
LAB_00100468:
  iVar12 = piVar4[lVar10];
  piVar4[lVar10] = *piVar4;
  if (lVar10 < 3) {
    if (lVar10 != 2) {
      *piVar4 = iVar12;
      return;
    }
    lVar13 = param_1 + 1;
    lVar5 = 0;
    lVar10 = 1;
    *piVar4 = param_3[lVar13];
LAB_00100515:
    while( true ) {
      piVar3 = param_3 + lVar13;
      iVar9 = param_3[param_1 + lVar5];
      if (iVar12 <= iVar9) break;
      *piVar3 = iVar9;
      if (lVar5 == 0) {
        param_3[param_1 + lVar5] = iVar12;
        goto LAB_00100468;
      }
      lVar13 = param_1 + lVar5;
      lVar5 = (lVar5 + -1) / 2;
    }
  }
  else {
    lVar13 = 2;
    lVar5 = 0;
    do {
      iVar9 = param_3[param_1 + lVar13 + -1];
      iVar1 = param_3[param_1 + lVar13];
      lVar8 = lVar13 + -1;
      piVar3 = param_3 + param_1 + lVar13 + -1;
      lVar6 = lVar13;
      if (iVar9 <= iVar1) {
        lVar6 = lVar13 + 1;
        lVar8 = lVar13;
        piVar3 = param_3 + param_1 + lVar13;
        iVar9 = iVar1;
      }
      lVar13 = lVar6 * 2;
      param_3[lVar5 + param_1] = iVar9;
      lVar5 = lVar8;
    } while (lVar10 != lVar13 && SBORROW8(lVar10,lVar13) == lVar10 + lVar6 * -2 < 0);
    if (lVar10 == lVar13) {
      lVar13 = param_1 + lVar10 + -1;
      lVar5 = lVar10 + -2 >> 1;
      *piVar3 = param_3[lVar13];
      lVar10 = lVar10 + -1;
      goto LAB_00100515;
    }
    lVar13 = param_1 + lVar8;
    lVar10 = lVar10 + -1;
    lVar5 = (lVar8 + -1) / 2;
    if (0 < lVar8) goto LAB_00100515;
  }
  *piVar3 = iVar12;
  goto LAB_00100468;
}



/* EditorAutoloadSettings::get_path_box() const */

undefined8 __thiscall EditorAutoloadSettings::get_path_box(EditorAutoloadSettings *this)

{
  return *(undefined8 *)(this + 0xa50);
}



/* EditorAutoloadSettings::_autoload_open(String const&) */

void __thiscall EditorAutoloadSettings::_autoload_open(EditorAutoloadSettings *this,String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  String aSStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ResourceLoader::get_resource_type(aSStack_28);
  cVar1 = String::operator==(aSStack_28,"PackedScene");
  CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_28);
  if (cVar1 == '\0') {
    EditorNode::load_resource(EditorNode::singleton,SUB81(param_1,0));
  }
  else {
    EditorNode::open_request(EditorNode::singleton,SUB81(param_1,0));
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Window::hide();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_autoload_activated() */

void __thiscall EditorAutoloadSettings::_autoload_activated(EditorAutoloadSettings *this)

{
  long lVar1;
  long in_FS_OFFSET;
  String aSStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = Tree::get_selected();
  if (lVar1 != 0) {
    TreeItem::get_text((int)aSStack_28);
    _autoload_open(this,aSStack_28);
    CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_autoload_file_callback(String const&) */

void EditorAutoloadSettings::_autoload_file_callback(String *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_60 [8];
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_file();
  String::get_basename();
  String::to_pascal_case();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  StringName::StringName((StringName *)&local_50,(String *)local_60,false);
  cVar2 = ClassDB::class_exists((StringName *)&local_50);
  local_58 = 0;
  if (cVar2 == '\0') {
    local_40 = 0;
    local_48 = "";
  }
  else {
    local_40 = 6;
    local_48 = "Global";
  }
  String::parse_latin1((StrRange *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa40);
  String::operator+((String *)&local_48,(String *)&local_58);
  LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xa48),0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_60);
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



/* EditorAutoloadSettings::_autoload_button_pressed(Object*, int, int, MouseButton) */

void __thiscall
EditorAutoloadSettings::_autoload_button_pressed
          (EditorAutoloadSettings *this,long param_1,undefined8 param_3_00,int param_3,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  EditorUndoRedoManager *this_00;
  long lVar3;
  String *pSVar4;
  undefined8 uVar5;
  StringName *pSVar6;
  int iVar7;
  long in_FS_OFFSET;
  CowData<char32_t> local_80 [8];
  CowData local_78 [8];
  undefined8 local_70;
  long local_68;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 1) {
    if (param_1 != 0) {
      __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    }
    iVar7 = (int)(CowData<char32_t> *)&local_60;
    TreeItem::get_text(iVar7);
    operator+((char *)local_80,(String *)"autoload/");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    this_00 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
    if (param_3 < 3) {
      if (param_3 < 1) {
        if (param_3 == 0) {
          TreeItem::get_text(iVar7);
          _autoload_open(this,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
      }
      else {
        if (param_3 == 1) {
          lVar3 = TreeItem::get_prev();
        }
        else {
          lVar3 = TreeItem::get_next();
        }
        if (lVar3 != 0) {
          TreeItem::get_text(iVar7);
          operator+((char *)local_78,(String *)"autoload/");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          pSVar4 = (String *)ProjectSettings::get_singleton();
          uVar1 = ProjectSettings::get_order(pSVar4);
          pSVar4 = (String *)ProjectSettings::get_singleton();
          uVar2 = ProjectSettings::get_order(pSVar4);
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"");
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Move Autoload");
          TTR((String *)&local_60,(String *)&local_70);
          EditorUndoRedoManager::create_action(this_00,(CowData<char32_t> *)&local_60,0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          local_60 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_80);
          StringName::StringName((StringName *)&local_68,"set_order",false);
          uVar5 = ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_do_method<String,int>
                    (this_00,uVar5,(String *)&local_68,(CowData<char32_t> *)&local_60,uVar2);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          local_60 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_80);
          StringName::StringName((StringName *)&local_68,"set_order",false);
          uVar5 = ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_undo_method<String,int>
                    (this_00,uVar5,(String *)&local_68,(CowData<char32_t> *)&local_60,uVar1);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          local_60 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,local_78);
          StringName::StringName((StringName *)&local_68,"set_order",false);
          uVar5 = ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_do_method<String,int>
                    (this_00,uVar5,(String *)&local_68,(CowData<char32_t> *)&local_60,uVar1);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          local_60 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,local_78);
          StringName::StringName((StringName *)&local_68,"set_order",false);
          uVar5 = ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_undo_method<String,int>
                    (this_00,uVar5,(String *)&local_68,(CowData<char32_t> *)&local_60,uVar2);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          StringName::StringName((StringName *)&local_60,"update_autoload",false);
          EditorUndoRedoManager::add_do_method<>(this_00,(Object *)this,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_60,"update_autoload",false);
          EditorUndoRedoManager::add_undo_method<>(this_00,(Object *)this,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          local_60 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(this + 0xa18));
          StringName::StringName((StringName *)&local_68,"emit_signal",false);
          EditorUndoRedoManager::add_do_method<String>
                    (this_00,this,(String *)&local_68,(CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          local_60 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(this + 0xa18));
          StringName::StringName((StringName *)&local_68,"emit_signal",false);
          EditorUndoRedoManager::add_undo_method<String>
                    (this_00,this,(String *)&local_68,(CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          EditorUndoRedoManager::commit_action(SUB81(this_00,0));
          CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        }
      }
    }
    else if (param_3 == 3) {
      pSVar4 = (String *)ProjectSettings::get_singleton();
      uVar1 = ProjectSettings::get_order(pSVar4);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Remove Autoload");
      TTR((String *)&local_60,(String *)&local_70);
      EditorUndoRedoManager::create_action(this_00,(CowData<char32_t> *)&local_60,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_50 = (undefined1  [16])0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      StringName::StringName((StringName *)&local_60,(String *)local_80,false);
      pSVar6 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_do_property((Object *)this_00,pSVar6,(Variant *)&local_60);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_68,(String *)local_80,false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      StringName::StringName((StringName *)&local_60,(String *)local_80,false);
      pSVar6 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_undo_property((Object *)this_00,pSVar6,(Variant *)&local_60);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_80);
      StringName::StringName((StringName *)&local_68,"set_order",false);
      uVar5 = ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_undo_method<String,int>
                (this_00,uVar5,(String *)&local_68,(CowData<char32_t> *)&local_60,uVar1);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      StringName::StringName((StringName *)&local_60,"update_autoload",false);
      EditorUndoRedoManager::add_do_method<>(this_00,(Object *)this,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_60,"update_autoload",false);
      EditorUndoRedoManager::add_undo_method<>(this_00,(Object *)this,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(this + 0xa18));
      StringName::StringName((StringName *)&local_68,"emit_signal",false);
      EditorUndoRedoManager::add_do_method<String>
                (this_00,this,(String *)&local_68,(CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(this + 0xa18));
      StringName::StringName((StringName *)&local_68,"emit_signal",false);
      EditorUndoRedoManager::add_undo_method<String>
                (this_00,this,(String *)&local_68,(CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    }
    CowData<char32_t>::_unref(local_80);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::autoload_remove(String const&) */

void EditorAutoloadSettings::autoload_remove(String *param_1)

{
  undefined4 uVar1;
  Object *pOVar2;
  String *pSVar3;
  StringName *pSVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  long local_68;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  operator+((char *)local_78,(String *)"autoload/");
  pOVar2 = (Object *)EditorUndoRedoManager::get_singleton();
  pSVar3 = (String *)ProjectSettings::get_singleton();
  uVar1 = ProjectSettings::get_order(pSVar3);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Remove Autoload");
  TTR((String *)&local_60,(String *)&local_70);
  EditorUndoRedoManager::create_action(pOVar2,(String *)&local_60,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_50 = (undefined1  [16])0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  StringName::StringName((StringName *)&local_60,(String *)local_78,false);
  pSVar4 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_do_property(pOVar2,pSVar4,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_68,(String *)local_78,false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  StringName::StringName((StringName *)&local_60,(String *)local_78,false);
  pSVar4 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_undo_property(pOVar2,pSVar4,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_78);
  StringName::StringName((StringName *)&local_68,"set_order",false);
  uVar5 = ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_undo_method<String,int>
            ((EditorUndoRedoManager *)pOVar2,uVar5,(String *)&local_68,(String *)&local_60,uVar1);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  StringName::StringName((StringName *)&local_60,"update_autoload",false);
  local_50 = (undefined1  [16])0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  EditorUndoRedoManager::add_do_methodp(pOVar2,(StringName *)param_1,(Variant **)&local_60,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_60,"update_autoload",false);
  local_50 = (undefined1  [16])0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  EditorUndoRedoManager::add_undo_methodp(pOVar2,(StringName *)param_1,(Variant **)&local_60,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(param_1 + 0xa18));
  StringName::StringName((StringName *)&local_68,"emit_signal",false);
  EditorUndoRedoManager::add_do_method<String>
            ((EditorUndoRedoManager *)pOVar2,param_1,(String *)&local_68,(String *)&local_60);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(param_1 + 0xa18));
  StringName::StringName((StringName *)&local_68,"emit_signal",false);
  EditorUndoRedoManager::add_undo_method<String>
            ((EditorUndoRedoManager *)pOVar2,param_1,(String *)&local_68,(String *)&local_60);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  EditorUndoRedoManager::commit_action(SUB81(pOVar2,0));
  CowData<char32_t>::_unref(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_set_autoload_add_path(String const&) */

void __thiscall
EditorAutoloadSettings::_set_autoload_add_path(EditorAutoloadSettings *this,String *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  uVar3 = *(undefined8 *)(this + 0xa50);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)param_1);
  LineEdit::set_text(uVar3,(CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  plVar4 = *(long **)(this + 0xa50);
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)param_1);
  lVar1 = SceneStringNames::singleton + 0x278;
  Variant::Variant((Variant *)local_68,(String *)&local_80);
  local_48 = (undefined1  [16])0x0;
  local_50 = 0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*plVar4 + 0xd0))(plVar4,lVar1,local_78,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar2 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* EditorAutoloadSettings::_autoload_selected() */

void __thiscall EditorAutoloadSettings::_autoload_selected(EditorAutoloadSettings *this)

{
  long lVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_30 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = Tree::get_selected();
  if (lVar1 != 0) {
    TreeItem::get_text((int)local_30);
    operator+((char *)&local_28,(String *)"autoload/");
    if (*(long *)(this + 0xa30) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa30));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(this + 0xa30) = lVar1;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    CowData<char32_t>::_unref(local_30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::~EditorAutoloadSettings() */

void __thiscall EditorAutoloadSettings::~EditorAutoloadSettings(EditorAutoloadSettings *this)

{
  Object *pOVar1;
  CowData<char32_t> *this_00;
  long lVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_00116098;
  if (*(long **)(this + 0xa20) != (long *)0x0) {
    for (lVar4 = **(long **)(this + 0xa20); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      while (((pOVar1 = *(Object **)(lVar4 + 0x18), pOVar1 == (Object *)0x0 ||
              (*(char *)(lVar4 + 0x11) != '\0')) ||
             (cVar3 = predelete_handler(pOVar1), cVar3 == '\0'))) {
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 == 0) goto LAB_001017d8;
      }
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001017d8:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa30));
  plVar5 = *(long **)(this + 0xa20);
  if (plVar5 != (long *)0x0) {
    do {
      this_00 = (CowData<char32_t> *)*plVar5;
      if (this_00 == (CowData<char32_t> *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010186d;
        }
        break;
      }
      if (*(long **)(this_00 + 0x30) == plVar5) {
        lVar4 = *(long *)(this_00 + 0x20);
        lVar2 = *(long *)(this_00 + 0x28);
        *plVar5 = lVar4;
        if (this_00 == (CowData<char32_t> *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar4;
          lVar4 = *(long *)(this_00 + 0x20);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x28) = lVar2;
        }
        CowData<char32_t>::_unref(this_00 + 8);
        CowData<char32_t>::_unref(this_00);
        Memory::free_static(this_00,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0xa20);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_0010186d:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa10));
  bVar6 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (((bVar6) &&
      ((*(long *)(this + 0x9e8) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (*(long *)(this + 0x9d0) != 0)) {
    StringName::unref();
  }
  Control::~Control((Control *)this);
  return;
}



/* EditorAutoloadSettings::~EditorAutoloadSettings() */

void __thiscall EditorAutoloadSettings::~EditorAutoloadSettings(EditorAutoloadSettings *this)

{
  ~EditorAutoloadSettings(this);
  operator_delete(this,0xa70);
  return;
}



/* EditorAutoloadSettings::EditorAutoloadSettings() */

void __thiscall EditorAutoloadSettings::EditorAutoloadSettings(EditorAutoloadSettings *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  StringName *pSVar2;
  code *pcVar3;
  undefined8 uVar4;
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
  char cVar20;
  int iVar21;
  String *pSVar22;
  List *pLVar23;
  CowData<char32_t> *this_01;
  BoxContainer *this_02;
  Label *pLVar24;
  LineEdit *pLVar25;
  Button *pBVar26;
  EditorFileDialog *this_03;
  Tree *this_04;
  CallableCustom *pCVar27;
  long *plVar28;
  undefined1 (*pauVar29) [16];
  EditorAutoloadSettings *this_05;
  long lVar30;
  Object *pOVar31;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  long *local_d8;
  CowData<char32_t> local_d0 [8];
  String local_c8 [16];
  undefined8 local_b8 [2];
  long local_a8 [2];
  long local_98 [2];
  long local_88 [2];
  undefined1 local_78 [16];
  undefined2 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_78._8_8_ = local_78._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (EditorAutoloadSettings)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00116098;
  *(undefined8 *)(this + 0xa10) = 0;
  String::parse_latin1((String *)(this + 0xa10),"res://");
  *(undefined8 *)(this + 0xa18) = 0;
  String::parse_latin1((String *)(this + 0xa18),"autoload_changed");
  this[0xa28] = (EditorAutoloadSettings)0x0;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  pSVar22 = (String *)ProjectSettings::get_singleton();
  auVar19._8_8_ = 0;
  auVar19._0_8_ = local_78._8_8_;
  local_78 = auVar19 << 0x40;
  String::parse_latin1((String *)local_78,"autoload/");
  ProjectSettings::add_hidden_prefix(pSVar22);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_d8 = (long *)0x0;
  pLVar23 = (List *)ProjectSettings::get_singleton();
  Object::get_property_list(pLVar23,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_d8,0));
  if ((local_d8 != (long *)0x0) && (lVar30 = *local_d8, lVar30 != 0)) {
    do {
      pSVar22 = (String *)(lVar30 + 8);
      cVar20 = String::begins_with((char *)pSVar22);
      if (cVar20 != '\0') {
        String::get_slice((char *)local_a8,(int)pSVar22);
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)local_78,pSVar22,false);
        ProjectSettings::get_setting_with_override((StringName *)&local_58);
        Variant::operator_cast_to_String((Variant *)local_98);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_78._0_8_ != 0)) {
          StringName::unref();
        }
        if ((local_a8[0] != 0) && (1 < *(uint *)(local_a8[0] + -8))) {
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          local_78 = (undefined1  [16])0x0;
          cVar20 = String::begins_with((char *)local_98);
          local_68 = CONCAT11(local_68._1_1_,cVar20);
          if (cVar20 != '\0') {
            String::substr((int)(CowData<char32_t> *)local_88,(int)(Variant *)local_98);
            if (local_98[0] != local_88[0]) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
              local_98[0] = local_88[0];
              local_88[0] = 0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          }
          if (local_78._0_8_ != local_a8[0]) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)local_a8);
          }
          this_00 = (CowData<char32_t> *)(local_78 + 8);
          if (local_78._8_8_ != local_98[0]) {
            CowData<char32_t>::_ref(this_00,(CowData *)local_98);
          }
          pSVar22 = (String *)ProjectSettings::get_singleton();
          local_64 = ProjectSettings::get_order(pSVar22);
          if (((char)local_68 != '\0') && (0 < (int)ScriptServer::_language_count)) {
            iVar21 = 0;
            do {
              plVar28 = (long *)ScriptServer::get_language(iVar21);
              pcVar3 = *(code **)(*plVar28 + 0x240);
              local_58 = 0;
              local_50 = (undefined1  [16])0x0;
              StringName::StringName((StringName *)local_88,(String *)local_78,false);
              if (pcVar3 != ScriptLanguage::add_named_global_constant) {
                (*pcVar3)(plVar28,(StringName *)local_88,(StringName *)&local_58);
              }
              if ((StringName::configured != '\0') && (local_88[0] != 0)) {
                StringName::unref();
              }
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)ScriptServer::_language_count);
          }
          if (*(long *)(this + 0xa20) == 0) {
            pauVar29 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])(this + 0xa20) = pauVar29;
            *(undefined4 *)pauVar29[1] = 0;
            *pauVar29 = (undefined1  [16])0x0;
          }
          this_01 = (CowData<char32_t> *)operator_new(0x38,DefaultAllocator::alloc);
          *(undefined1 (*) [16])this_01 = (undefined1  [16])0x0;
          *(undefined2 *)(this_01 + 0x10) = 0;
          *(undefined4 *)(this_01 + 0x14) = 0;
          *(undefined1 (*) [16])(this_01 + 0x18) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_01 + 0x28) = (undefined1  [16])0x0;
          CowData<char32_t>::_ref(this_01,(CowData *)local_78);
          CowData<char32_t>::_ref(this_01 + 8,(CowData *)this_00);
          *(undefined2 *)(this_01 + 0x10) = local_68;
          *(undefined4 *)(this_01 + 0x14) = local_64;
          *(undefined8 *)(this_01 + 0x18) = local_60;
          plVar28 = *(long **)(this + 0xa20);
          lVar1 = plVar28[1];
          *(undefined8 *)(this_01 + 0x20) = 0;
          *(long **)(this_01 + 0x30) = plVar28;
          *(long *)(this_01 + 0x28) = lVar1;
          if (lVar1 != 0) {
            *(CowData<char32_t> **)(lVar1 + 0x20) = this_01;
          }
          plVar28[1] = (long)this_01;
          if (*plVar28 == 0) {
            *plVar28 = (long)this_01;
          }
          *(int *)(plVar28 + 2) = (int)plVar28[2] + 1;
          CowData<char32_t>::_unref(this_00);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      }
      lVar30 = *(long *)(lVar30 + 0x30);
    } while (lVar30 != 0);
  }
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,false);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_001159a8;
  postinitialize_handler((Object *)this_02);
  Node::add_child(this,this_02,0,0);
  pLVar24 = (Label *)operator_new(0xad8,"");
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_78._8_8_;
  local_78 = auVar5 << 0x40;
  Label::Label(pLVar24,(String *)local_78);
  postinitialize_handler((Object *)pLVar24);
  *(Label **)(this + 0xa58) = pLVar24;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CanvasItem::hide();
  this_05 = *(EditorAutoloadSettings **)(this + 0xa58);
  Label::set_horizontal_alignment(this_05,2);
  pSVar2 = *(StringName **)(this + 0xa58);
  pOVar31 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar31 != (Object *)0x0) {
    cVar20 = RefCounted::reference();
    uVar4 = EditorStringNames::singleton;
    if (cVar20 == '\0') {
      pOVar31 = (Object *)0x0;
    }
    pcVar3 = *(code **)(*(long *)pOVar31 + 0x1e8);
    if ((EditorAutoloadSettings()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar21 = __cxa_guard_acquire(&EditorAutoloadSettings()::{lambda()#1}::operator()()::sname),
       iVar21 != 0)) {
      _scs_create((char *)&EditorAutoloadSettings()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorAutoloadSettings()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorAutoloadSettings()::{lambda()#1}::operator()()::sname);
    }
    local_58 = (*pcVar3)(pOVar31,&EditorAutoloadSettings()::{lambda()#1}::operator()()::sname,uVar4)
    ;
    local_50._0_8_ = in_XMM1_Qa;
    Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
    cVar20 = RefCounted::unreference();
    if ((cVar20 != '\0') && (cVar20 = predelete_handler(pOVar31), cVar20 != '\0')) {
      (**(code **)(*(long *)pOVar31 + 0x140))(pOVar31);
      Memory::free_static(pOVar31,false);
    }
    Node::add_child(this,*(undefined8 *)(this + 0xa58),0,0);
    pLVar24 = (Label *)operator_new(0xad8,"");
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_78._8_8_;
    local_78 = auVar6 << 0x40;
    Label::Label(pLVar24,(String *)local_78);
    postinitialize_handler((Object *)pLVar24);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_78._8_8_;
    local_78 = auVar7 << 0x40;
    String::parse_latin1((String *)local_78,"");
    local_88[0] = 0;
    String::parse_latin1((String *)local_88,"Path:");
    TTR((String *)local_98,(String *)local_88);
    Label::set_text((String *)pLVar24);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    Node::add_child(this_02,pLVar24,0,0);
    pLVar25 = (LineEdit *)operator_new(0xbb0,"");
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_78._8_8_;
    local_78 = auVar8 << 0x40;
    LineEdit::LineEdit(pLVar25,(String *)local_78);
    postinitialize_handler((Object *)pLVar25);
    *(LineEdit **)(this + 0xa50) = pLVar25;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    Node::add_child(this_02,*(undefined8 *)(this + 0xa50),0,0);
    Control::set_h_size_flags(*(undefined8 *)(this + 0xa50),3);
    LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa50),0));
    uVar4 = *(undefined8 *)(this + 0xa50);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_78._8_8_;
    local_78 = auVar9 << 0x40;
    String::parse_latin1((String *)local_78,"");
    local_88[0] = 0;
    String::parse_latin1((String *)local_88,"Add");
    TTR((String *)local_98,(String *)local_88);
    local_a8[0] = 0;
    String::parse_latin1((String *)local_a8,"");
    local_b8[0] = 0;
    String::parse_latin1((String *)local_b8,"Set path or press \"%s\" to create a script.");
    TTR(local_c8,(String *)local_b8);
    vformat<String>(local_d0,local_c8,(String *)local_98);
    LineEdit::set_placeholder(uVar4,local_d0);
    CowData<char32_t>::_unref(local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    plVar28 = *(long **)(this + 0xa50);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings,String_const&>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void_String_ptr *)"&EditorAutoloadSettings::_autoload_path_text_changed");
    (*pcVar3)(plVar28,SceneStringNames::singleton + 0x270,(String *)local_78,0);
    Callable::~Callable((Callable *)local_78);
    pBVar26 = (Button *)operator_new(0xc10,"");
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_78._8_8_;
    local_78 = auVar10 << 0x40;
    Button::Button(pBVar26,(String *)local_78);
    postinitialize_handler((Object *)pBVar26);
    *(Button **)(this + 0xa60) = pBVar26;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    Node::add_child(this_02,*(undefined8 *)(this + 0xa60),0,0);
    plVar28 = *(long **)(this + 0xa60);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void *)"&EditorAutoloadSettings::_browse_autoload_add_path");
    (*pcVar3)(plVar28,SceneStringNames::singleton + 0x238,(String *)local_78,0);
    Callable::~Callable((Callable *)local_78);
    this_03 = (EditorFileDialog *)operator_new(0x1108,"");
    EditorFileDialog::EditorFileDialog(this_03);
    postinitialize_handler((Object *)this_03);
    *(EditorFileDialog **)(this + 0xa68) = this_03;
    Node::add_child(this_02,this_03,0,0);
    plVar28 = *(long **)(this + 0xa68);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings,String_const&>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void_String_ptr *)"&EditorAutoloadSettings::_set_autoload_add_path");
    StringName::StringName((StringName *)local_88,"file_selected",false);
    (*pcVar3)(plVar28,(String *)local_88,(String *)local_78,0);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_78);
    plVar28 = *(long **)(this + 0xa68);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings,String_const&>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void_String_ptr *)"&EditorAutoloadSettings::_set_autoload_add_path");
    StringName::StringName((StringName *)local_88,"dir_selected",false);
    (*pcVar3)(plVar28,(String *)local_88,(String *)local_78,0);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_78);
    plVar28 = *(long **)(this + 0xa68);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings,String_const&>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void_String_ptr *)"&EditorAutoloadSettings::_set_autoload_add_path");
    StringName::StringName((StringName *)local_88,"files_selected",false);
    (*pcVar3)(plVar28,(String *)local_88,(String *)local_78,0);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_78);
    Control::set_h_size_flags(this_02,3);
    EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xa68),0);
    plVar28 = *(long **)(this + 0xa68);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings,String_const&>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void_String_ptr *)"&EditorAutoloadSettings::_autoload_file_callback");
    StringName::StringName((StringName *)local_88,"file_selected",false);
    (*pcVar3)(plVar28,(String *)local_88,(String *)local_78,0);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_78);
    pLVar24 = (Label *)operator_new(0xad8,"");
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_78._8_8_;
    local_78 = auVar11 << 0x40;
    Label::Label(pLVar24,(String *)local_78);
    postinitialize_handler((Object *)pLVar24);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_78._8_8_;
    local_78 = auVar12 << 0x40;
    String::parse_latin1((String *)local_78,"");
    local_88[0] = 0;
    String::parse_latin1((String *)local_88,"Node Name:");
    TTR((String *)local_98,(String *)local_88);
    Label::set_text((String *)pLVar24);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    Node::add_child(this_02,pLVar24,0,0);
    pLVar25 = (LineEdit *)operator_new(0xbb0,"");
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_78._8_8_;
    local_78 = auVar13 << 0x40;
    LineEdit::LineEdit(pLVar25,(String *)local_78);
    postinitialize_handler((Object *)pLVar25);
    *(LineEdit **)(this + 0xa40) = pLVar25;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    Control::set_h_size_flags(*(undefined8 *)(this + 0xa40),3);
    plVar28 = *(long **)(this + 0xa40);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings,String_const&>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void_String_ptr *)"&EditorAutoloadSettings::_autoload_text_submitted");
    (*pcVar3)(plVar28,SceneStringNames::singleton + 0x278,(String *)local_78,0);
    Callable::~Callable((Callable *)local_78);
    plVar28 = *(long **)(this + 0xa40);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings,String_const&>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void_String_ptr *)"&EditorAutoloadSettings::_autoload_text_changed");
    (*pcVar3)(plVar28,SceneStringNames::singleton + 0x270,(String *)local_78,0);
    Callable::~Callable((Callable *)local_78);
    Node::add_child(this_02,*(undefined8 *)(this + 0xa40),0,0);
    pBVar26 = (Button *)operator_new(0xc10,"");
    auVar14._8_8_ = 0;
    auVar14._0_8_ = local_78._8_8_;
    local_78 = auVar14 << 0x40;
    Button::Button(pBVar26,(String *)local_78);
    postinitialize_handler((Object *)pBVar26);
    *(Button **)(this + 0xa48) = pBVar26;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    pSVar22 = *(String **)(this + 0xa48);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_78._8_8_;
    local_78 = auVar15 << 0x40;
    String::parse_latin1((String *)local_78,"");
    local_88[0] = 0;
    String::parse_latin1((String *)local_88,"Add");
    TTR((String *)local_98,(String *)local_88);
    Button::set_text(pSVar22);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    plVar28 = *(long **)(this + 0xa48);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void *)"&EditorAutoloadSettings::_autoload_add");
    (*pcVar3)(plVar28,SceneStringNames::singleton + 0x238,(String *)local_78,0);
    Callable::~Callable((Callable *)local_78);
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa48),0));
    Node::add_child(this_02,*(undefined8 *)(this + 0xa48),0,0);
    this_04 = (Tree *)operator_new(0xdc8,"");
    Tree::Tree(this_04);
    postinitialize_handler((Object *)this_04);
    *(Tree **)(this + 0xa38) = this_04;
    Tree::set_hide_root(SUB81(this_04,0));
    Tree::set_select_mode(*(undefined8 *)(this + 0xa38),2);
    Tree::set_allow_reselect(SUB81(*(undefined8 *)(this + 0xa38),0));
    plVar28 = *(long **)(this + 0xa38);
    pcVar3 = *(code **)(*plVar28 + 0x318);
    pCVar27 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar27);
    *(undefined **)(pCVar27 + 0x20) = &_LC10;
    *(EditorAutoloadSettings **)(pCVar27 + 0x28) = this;
    *(undefined1 (*) [16])(pCVar27 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar27 = &PTR_hash_00116770;
    *(undefined8 *)(pCVar27 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar27 + 0x10) = 0;
    *(undefined8 *)(pCVar27 + 0x30) = uVar4;
    *(code **)(pCVar27 + 0x38) = drop_data_fw;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar27,(int)pCVar27 + 0x28);
    *(char **)(pCVar27 + 0x20) = "EditorAutoloadSettings::drop_data_fw";
    Callable::Callable((Callable *)local_78,pCVar27);
    Callable::bind<Tree*>((Tree *)local_88);
    pCVar27 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar27);
    *(undefined **)(pCVar27 + 0x20) = &_LC10;
    *(EditorAutoloadSettings **)(pCVar27 + 0x28) = this;
    *(undefined1 (*) [16])(pCVar27 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar27 = &PTR_hash_001166e0;
    *(undefined8 *)(pCVar27 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar27 + 0x10) = 0;
    *(undefined8 *)(pCVar27 + 0x30) = uVar4;
    *(code **)(pCVar27 + 0x38) = can_drop_data_fw;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar27,(int)pCVar27 + 0x28);
    *(char **)(pCVar27 + 0x20) = "EditorAutoloadSettings::can_drop_data_fw";
    Callable::Callable((Callable *)local_98,pCVar27);
    Callable::bind<Tree*>((Tree *)local_a8);
    pCVar27 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar27);
    *(undefined **)(pCVar27 + 0x20) = &_LC10;
    *(EditorAutoloadSettings **)(pCVar27 + 0x28) = this;
    *(undefined1 (*) [16])(pCVar27 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar27 = &PTR_hash_00116650;
    *(undefined8 *)(pCVar27 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar27 + 0x10) = 0;
    *(undefined8 *)(pCVar27 + 0x30) = uVar4;
    *(code **)(pCVar27 + 0x38) = get_drag_data_fw;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar27,(int)pCVar27 + 0x28);
    *(char **)(pCVar27 + 0x20) = "EditorAutoloadSettings::get_drag_data_fw";
    Callable::Callable((Callable *)local_b8,pCVar27);
    Callable::bind<Tree*>((Tree *)local_c8);
    (*pcVar3)(plVar28,local_c8,(String *)local_a8,(String *)local_88);
    Callable::~Callable((Callable *)local_c8);
    Callable::~Callable((Callable *)local_b8);
    Callable::~Callable((Callable *)local_a8);
    Callable::~Callable((Callable *)local_98);
    Callable::~Callable((Callable *)local_88);
    Callable::~Callable((Callable *)local_78);
    Tree::set_columns((int)*(undefined8 *)(this + 0xa38));
    Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xa38),0));
    uVar4 = *(undefined8 *)(this + 0xa38);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_78._8_8_;
    local_78 = auVar16 << 0x40;
    String::parse_latin1((String *)local_78,"");
    local_88[0] = 0;
    String::parse_latin1((String *)local_88,"Name");
    TTR((String *)local_98,(String *)local_88);
    Tree::set_column_title((int)uVar4,(String *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    Tree::set_column_expand((int)*(undefined8 *)(this + 0xa38),false);
    Tree::set_column_expand_ratio((int)*(undefined8 *)(this + 0xa38),0);
    uVar4 = *(undefined8 *)(this + 0xa38);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_78._8_8_;
    local_78 = auVar17 << 0x40;
    String::parse_latin1((String *)local_78,"");
    local_88[0] = 0;
    String::parse_latin1((String *)local_88,"Path");
    TTR((String *)local_98,(String *)local_88);
    Tree::set_column_title((int)uVar4,(String *)0x1);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    Tree::set_column_expand((int)*(undefined8 *)(this + 0xa38),true);
    Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa38),true);
    Tree::set_column_expand_ratio((int)*(undefined8 *)(this + 0xa38),1);
    uVar4 = *(undefined8 *)(this + 0xa38);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = local_78._8_8_;
    local_78 = auVar18 << 0x40;
    String::parse_latin1((String *)local_78,"");
    local_88[0] = 0;
    String::parse_latin1((String *)local_88,"Global Variable");
    TTR((String *)local_98,(String *)local_88);
    Tree::set_column_title((int)uVar4,(String *)0x2);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    Tree::set_column_expand((int)*(undefined8 *)(this + 0xa38),true);
    Tree::set_column_expand((int)*(undefined8 *)(this + 0xa38),true);
    plVar28 = *(long **)(this + 0xa38);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void *)"&EditorAutoloadSettings::_autoload_selected");
    StringName::StringName((StringName *)local_88,"cell_selected",false);
    (*pcVar3)(plVar28,(String *)local_88,(String *)local_78,0);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_78);
    plVar28 = *(long **)(this + 0xa38);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void *)"&EditorAutoloadSettings::_autoload_edited");
    StringName::StringName((StringName *)local_88,"item_edited",false);
    (*pcVar3)(plVar28,(String *)local_88,(String *)local_78,0);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_78);
    plVar28 = *(long **)(this + 0xa38);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    pCVar27 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar27);
    *(undefined **)(pCVar27 + 0x20) = &_LC10;
    *(EditorAutoloadSettings **)(pCVar27 + 0x28) = this;
    *(undefined1 (*) [16])(pCVar27 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar27 = &PTR_hash_00116800;
    *(undefined8 *)(pCVar27 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar27 + 0x10) = 0;
    *(undefined8 *)(pCVar27 + 0x30) = uVar4;
    *(code **)(pCVar27 + 0x38) = _autoload_button_pressed;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar27,(int)pCVar27 + 0x28);
    *(char **)(pCVar27 + 0x20) = "EditorAutoloadSettings::_autoload_button_pressed";
    Callable::Callable((Callable *)local_78,pCVar27);
    StringName::StringName((StringName *)local_88,"button_clicked",false);
    (*pcVar3)(plVar28,(String *)local_88,(String *)local_78,0);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_78);
    plVar28 = *(long **)(this + 0xa38);
    pcVar3 = *(code **)(*plVar28 + 0x108);
    create_custom_callable_function_pointer<EditorAutoloadSettings>
              ((EditorAutoloadSettings *)local_78,(char *)this,
               (_func_void *)"&EditorAutoloadSettings::_autoload_activated");
    StringName::StringName((StringName *)local_88,"item_activated",false);
    (*pcVar3)(plVar28,(String *)local_88,(String *)local_78,0);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_78);
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa38),3);
    Node::add_child(this,*(undefined8 *)(this + 0xa38),1,0);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_d8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  EditorAutoloadSettings(this_05);
  return;
}



/* EditorAutoloadSettings::_autoload_name_is_valid(String const&, String*) */

undefined4 __thiscall
EditorAutoloadSettings::_autoload_name_is_valid
          (EditorAutoloadSettings *this,String *param_1,String *param_2)

{
  String *this_00;
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  long in_FS_OFFSET;
  CowData<char32_t> *local_c0;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_b0;
  CowData<char32_t> *local_a8;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  String local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = String::is_valid_unicode_identifier();
  if ((char)uVar3 == '\0') {
    if (param_2 != (String *)0x0) {
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"");
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Must be a valid Unicode identifier.");
      TTR(local_50,(String *)&local_60);
      local_70 = 0;
      String::parse_latin1((String *)&local_70," ");
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"Invalid name.");
      TTR(local_78,(String *)&local_88);
      String::operator+(local_68,local_78);
LAB_0010317e:
      local_a8 = (CowData<char32_t> *)&local_58;
      local_b0 = (CowData<char32_t> *)&local_60;
      local_b8 = (CowData<char32_t> *)local_50;
      local_c0 = (CowData<char32_t> *)&local_70;
      String::operator+((String *)&local_48,local_68);
      if (*(long *)param_2 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)param_2);
        lVar1 = local_48;
        local_48 = 0;
        *(long *)param_2 = lVar1;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_c0);
      CowData<char32_t>::_unref(local_b8);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref(local_a8);
    }
  }
  else {
    StringName::StringName((StringName *)&local_48,param_1,false);
    cVar2 = ClassDB::class_exists((StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (cVar2 == '\0') {
      StringName::StringName((StringName *)&local_48,param_1,false);
      cVar2 = ScriptServer::is_global_class((StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (cVar2 == '\0') {
        iVar7 = 0;
        iVar4 = Variant::get_type_by_name(param_1);
        if (0x26 < iVar4) {
          for (; iVar4 = CoreConstants::get_global_constant_count(), iVar7 < iVar4;
              iVar7 = iVar7 + 1) {
            pcVar6 = (char *)CoreConstants::get_global_constant_name(iVar7);
            cVar2 = operator==(pcVar6,param_1);
            if (cVar2 != '\0') {
              if (param_2 == (String *)0x0) goto LAB_0010320a;
              local_58 = 0;
              String::parse_latin1((String *)&local_58,"");
              pcVar6 = "Must not collide with an existing global constant name.";
              goto LAB_001032d0;
            }
          }
          iVar4 = 0;
          if (0 < (int)ScriptServer::_language_count) {
            do {
              local_90 = (undefined8 *)0x0;
              plVar5 = (long *)ScriptServer::get_language(iVar4);
              (**(code **)(*plVar5 + 0x178))(plVar5,(List<String,DefaultAllocator> *)&local_90);
              if (local_90 != (undefined8 *)0x0) {
                for (this_00 = (String *)*local_90; this_00 != (String *)0x0;
                    this_00 = *(String **)(this_00 + 8)) {
                  cVar2 = String::operator==(this_00,param_1);
                  if (cVar2 != '\0') {
                    if (param_2 != (String *)0x0) {
                      local_58 = 0;
                      String::parse_latin1((String *)&local_58,"");
                      local_60 = 0;
                      String::parse_latin1
                                ((String *)&local_60,"Keyword cannot be used as an Autoload name.");
                      TTR(local_50,(String *)&local_60);
                      local_70 = 0;
                      String::parse_latin1((String *)&local_70," ");
                      local_80 = 0;
                      String::parse_latin1((String *)&local_80,"");
                      local_88 = 0;
                      String::parse_latin1((String *)&local_88,"Invalid name.");
                      TTR(local_78,(String *)&local_88);
                      String::operator+(local_68,local_78);
                      String::operator+((String *)&local_48,local_68);
                      if (*(long *)param_2 != local_48) {
                        CowData<char32_t>::_unref((CowData<char32_t> *)param_2);
                        lVar1 = local_48;
                        local_48 = 0;
                        *(long *)param_2 = lVar1;
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
                    }
                    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_90)
                    ;
                    goto LAB_0010320a;
                  }
                }
              }
              iVar4 = iVar4 + 1;
              List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_90);
            } while (iVar4 < (int)ScriptServer::_language_count);
          }
          goto LAB_0010320d;
        }
        if (param_2 != (String *)0x0) {
          local_58 = 0;
          String::parse_latin1((String *)&local_58,"");
          pcVar6 = "Must not collide with an existing built-in type name.";
          goto LAB_001032d0;
        }
      }
      else if (param_2 != (String *)0x0) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"");
        local_60 = 0;
        String::parse_latin1
                  ((String *)&local_60,"Must not collide with an existing global script class name."
                  );
        TTR(local_50,(String *)&local_60);
        pcVar6 = "\n";
        goto LAB_00103305;
      }
    }
    else if (param_2 != (String *)0x0) {
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"");
      pcVar6 = "Must not collide with an existing engine class name.";
LAB_001032d0:
      local_60 = 0;
      String::parse_latin1((String *)&local_60,pcVar6);
      TTR(local_50,(String *)&local_60);
      pcVar6 = " ";
LAB_00103305:
      local_70 = 0;
      String::parse_latin1((String *)&local_70,pcVar6);
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"Invalid name.");
      TTR(local_78,(String *)&local_88);
      String::operator+(local_68,local_78);
      goto LAB_0010317e;
    }
  }
LAB_0010320a:
  uVar3 = 0;
LAB_0010320d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_autoload_edited() [clone .part.0] */

void __thiscall EditorAutoloadSettings::_autoload_edited(EditorAutoloadSettings *this)

{
  Variant **ppVVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  Object *pOVar7;
  String *pSVar8;
  StringName *pSVar9;
  String *pSVar10;
  long in_FS_OFFSET;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  StringName *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = Tree::get_edited();
  iVar4 = Tree::get_edited_column();
  pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
  if (iVar4 == 0) {
    TreeItem::get_text((int)(String *)&local_e0);
    pSVar8 = (String *)(this + 0xa30);
    String::get_slice((char *)&local_d8,(int)pSVar8);
    cVar2 = String::operator==((String *)&local_e0,(String *)&local_d8);
    if (cVar2 == '\0') {
      local_d0 = 0;
      cVar2 = _autoload_name_is_valid(this,(String *)&local_e0,(String *)&local_d0);
      if (cVar2 == '\0') {
        local_90 = 0;
        if (local_d8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d8);
        }
        TreeItem::set_text(uVar6,0,(CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        pSVar8 = EditorNode::singleton;
        local_98 = 0;
        String::parse_latin1((String *)&local_98,"");
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,"Warning!");
        TTR((String *)&local_90,(String *)&local_a0);
        EditorNode::show_warning(pSVar8,(String *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      else {
        pSVar10 = (String *)ProjectSettings::get_singleton();
        operator+((char *)&local_90,(String *)"autoload/");
        cVar2 = ProjectSettings::has_setting(pSVar10);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if (cVar2 == '\0') {
          this[0xa28] = (EditorAutoloadSettings)0x1;
          operator+((char *)&local_90,(String *)"autoload/");
          if (local_e0 != local_90) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            local_e0 = local_90;
            local_90 = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          pSVar10 = (String *)ProjectSettings::get_singleton();
          uVar5 = ProjectSettings::get_order(pSVar10);
          ProjectSettings::get_singleton();
          StringName::StringName((StringName *)&local_90,pSVar8,false);
          ProjectSettings::get_setting_with_override((StringName *)local_78);
          Variant::operator_cast_to_String((Variant *)&local_a8);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          local_98 = 0;
          String::parse_latin1((String *)&local_98,"");
          local_a0 = 0;
          String::parse_latin1((String *)&local_a0,"Rename Autoload");
          TTR((String *)&local_90,(String *)&local_a0);
          EditorUndoRedoManager::create_action(pOVar7,(CowData<char32_t> *)&local_90,0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          Variant::Variant((Variant *)local_78,(String *)&local_a8);
          StringName::StringName((StringName *)&local_90,(String *)&local_e0,false);
          pSVar9 = (StringName *)ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_do_property(pOVar7,pSVar9,(Variant *)&local_90);
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_90 = 0;
          if (local_e0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
          }
          StringName::StringName((StringName *)&local_98,"set_order",false);
          uVar6 = ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_do_method<String,int>
                    ((EditorUndoRedoManager *)pOVar7,uVar6,(String *)&local_98,
                     (CowData<char32_t> *)&local_90,uVar5);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          local_90 = 0;
          if (*(long *)(this + 0xa30) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)pSVar8);
          }
          StringName::StringName((StringName *)&local_98,"clear",false);
          uVar6 = ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_do_method<String>
                    ((EditorUndoRedoManager *)pOVar7,uVar6,(String *)&local_98,
                     (CowData<char32_t> *)&local_90);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          Variant::Variant((Variant *)local_78,(String *)&local_a8);
          StringName::StringName((StringName *)&local_90,pSVar8,false);
          pSVar9 = (StringName *)ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_undo_property(pOVar7,pSVar9,(Variant *)&local_90);
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_90 = 0;
          if (*(long *)(this + 0xa30) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)pSVar8);
          }
          StringName::StringName((StringName *)&local_98,"set_order",false);
          uVar6 = ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_undo_method<String,int>
                    ((EditorUndoRedoManager *)pOVar7,uVar6,(String *)&local_98,
                     (CowData<char32_t> *)&local_90,uVar5);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          local_90 = 0;
          if (local_e0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
          }
          StringName::StringName((StringName *)&local_98,"clear",false);
          uVar6 = ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_undo_method<String>
                    ((EditorUndoRedoManager *)pOVar7,uVar6,(String *)&local_98,
                     (CowData<char32_t> *)&local_90);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
          Variant::Variant((Variant *)local_78,"update_autoload");
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (StringName *)local_78;
          EditorUndoRedoManager::add_do_methodp(pOVar7,(StringName *)this,ppVVar1,(int)local_88);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
          Variant::Variant((Variant *)local_78,"update_autoload");
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (StringName *)local_78;
          EditorUndoRedoManager::add_undo_methodp(pOVar7,(StringName *)this,ppVVar1,(int)local_88);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_90 = 0;
          if (*(long *)(this + 0xa18) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0xa18));
          }
          StringName::StringName((StringName *)&local_98,"emit_signal",false);
          EditorUndoRedoManager::add_do_method<String>
                    ((EditorUndoRedoManager *)pOVar7,this,(String *)&local_98,
                     (CowData<char32_t> *)&local_90);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          local_90 = 0;
          if (*(long *)(this + 0xa18) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0xa18));
          }
          StringName::StringName((StringName *)&local_98,"emit_signal",false);
          EditorUndoRedoManager::add_undo_method<String>
                    ((EditorUndoRedoManager *)pOVar7,this,(String *)&local_98,
                     (CowData<char32_t> *)&local_90);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
          if (*(long *)(this + 0xa30) != local_e0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar8,(CowData *)&local_e0);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          goto LAB_001037ac;
        }
        local_90 = 0;
        if (local_d8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d8);
        }
        TreeItem::set_text(uVar6,0,(CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        pSVar8 = EditorNode::singleton;
        local_98 = 0;
        String::parse_latin1((String *)&local_98,"");
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,"Warning!");
        TTR((String *)&local_90,(String *)&local_a0);
        local_b0 = 0;
        if (local_e0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e0);
        }
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"");
        local_c8 = 0;
        String::parse_latin1((String *)&local_c8,"Autoload \'%s\' already exists!");
        TTR(local_b8,(String *)&local_c8);
        vformat<String>((CowData<char32_t> *)&local_a8,local_b8,(CowData<char32_t> *)&local_b0);
        EditorNode::show_warning(pSVar8,(String *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  }
  else {
    if (iVar4 == 2) {
      this[0xa28] = (EditorAutoloadSettings)0x1;
      cVar2 = TreeItem::is_checked((int)uVar6);
      iVar4 = (int)(CowData<char32_t> *)&local_90;
      TreeItem::get_text(iVar4);
      operator+((char *)&local_b0,(String *)"autoload/");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      pSVar8 = (String *)ProjectSettings::get_singleton();
      uVar5 = ProjectSettings::get_order(pSVar8);
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_90,(String *)&local_b0,false);
      ProjectSettings::get_setting_with_override((StringName *)local_78);
      Variant::operator_cast_to_String((Variant *)&local_a8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      cVar3 = String::begins_with((char *)&local_a8);
      if (cVar3 != '\0') {
        String::substr(iVar4,(int)(Variant *)&local_a8);
        if (local_a8 != local_90) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          local_a8 = local_90;
          local_90 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      }
      if (cVar2 != '\0') {
        operator+((char *)&local_90,(String *)&_LC63);
        if (local_a8 != local_90) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          local_a8 = local_90;
          local_90 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      }
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"Toggle Autoload Globals");
      TTR((String *)&local_90,(String *)&local_a0);
      EditorUndoRedoManager::create_action(pOVar7,(CowData<char32_t> *)&local_90,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      Variant::Variant((Variant *)local_78,(String *)&local_a8);
      StringName::StringName((StringName *)&local_90,(String *)&local_b0,false);
      pSVar9 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_do_property(pOVar7,pSVar9,(Variant *)&local_90);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_90,(String *)&local_b0,false);
      ProjectSettings::get_setting_with_override((StringName *)local_78);
      StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
      pSVar9 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_undo_property(pOVar7,pSVar9,(Variant *)&local_98);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      local_90 = 0;
      if (local_b0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_b0);
      }
      StringName::StringName((StringName *)&local_98,"set_order",false);
      uVar6 = ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_do_method<String,int>
                ((EditorUndoRedoManager *)pOVar7,uVar6,(String *)&local_98,
                 (CowData<char32_t> *)&local_90,uVar5);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      local_90 = 0;
      if (local_b0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_b0);
      }
      StringName::StringName((StringName *)&local_98,"set_order",false);
      uVar6 = ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_undo_method<String,int>
                ((EditorUndoRedoManager *)pOVar7,uVar6,(String *)&local_98,
                 (CowData<char32_t> *)&local_90,uVar5);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
      Variant::Variant((Variant *)local_78,"update_autoload");
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (StringName *)local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar7,(StringName *)this,ppVVar1,(int)local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
      Variant::Variant((Variant *)local_78,"update_autoload");
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (StringName *)local_78;
      EditorUndoRedoManager::add_undo_methodp(pOVar7,(StringName *)this,ppVVar1,(int)local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_90 = 0;
      if (*(long *)(this + 0xa18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0xa18));
      }
      StringName::StringName((StringName *)&local_98,"emit_signal",false);
      EditorUndoRedoManager::add_do_method<String>
                ((EditorUndoRedoManager *)pOVar7,this,(String *)&local_98,
                 (CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      local_90 = 0;
      if (*(long *)(this + 0xa18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0xa18));
      }
      StringName::StringName((StringName *)&local_98,"emit_signal",false);
      EditorUndoRedoManager::add_undo_method<String>
                ((EditorUndoRedoManager *)pOVar7,this,(String *)&local_98,
                 (CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    }
LAB_001037ac:
    this[0xa28] = (EditorAutoloadSettings)0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_autoload_edited() */

void __thiscall EditorAutoloadSettings::_autoload_edited(EditorAutoloadSettings *this)

{
  if (this[0xa28] != (EditorAutoloadSettings)0x0) {
    return;
  }
  _autoload_edited(this);
  return;
}



/* EditorAutoloadSettings::_autoload_path_text_changed(String const&) */

void EditorAutoloadSettings::_autoload_path_text_changed(String *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa48);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  _autoload_name_is_valid((EditorAutoloadSettings *)param_1,(String *)aCStack_28,(String *)0x0);
  BaseButton::set_disabled(SUB81(uVar1,0));
  CowData<char32_t>::_unref(aCStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_autoload_text_changed(String const&) */

void __thiscall
EditorAutoloadSettings::_autoload_text_changed(EditorAutoloadSettings *this,String *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  _autoload_name_is_valid(this,param_1,(String *)&local_40);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa48),0));
  Label::set_text(*(String **)(this + 0xa58));
  uVar1 = *(undefined8 *)(this + 0xa58);
  LineEdit::get_text();
  CanvasItem::set_visible(SUB81(uVar1,0));
  CowData<char32_t>::_unref(local_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::autoload_add(String const&, String const&) */

char __thiscall
EditorAutoloadSettings::autoload_add(EditorAutoloadSettings *this,String *param_1,String *param_2)

{
  char cVar1;
  char cVar2;
  Object *this_00;
  StringName *pSVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_130;
  CowData<char32_t> *local_120;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  String local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  String local_90 [8];
  undefined8 local_88;
  CowData<char32_t> local_80 [8];
  String local_78 [8];
  undefined8 local_70;
  long local_68;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)param_1);
  }
  local_d0 = 0;
  cVar1 = _autoload_name_is_valid(this,(String *)&local_d8,(String *)&local_d0);
  pSVar4 = EditorNode::singleton;
  if (cVar1 == '\0') {
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Warning!");
    TTR((String *)&local_70,(String *)&local_68);
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"\n");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Can\'t add Autoload:");
    TTR(local_90,(String *)&local_a0);
    String::operator+((String *)local_80,local_90);
    String::operator+(local_78,(String *)local_80);
    EditorNode::show_warning(pSVar4,local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref(local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    cVar1 = FileAccess::exists(param_2);
    pSVar4 = EditorNode::singleton;
    if (cVar1 == '\0') {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"");
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Warning!");
      TTR((String *)&local_70,(String *)&local_68);
      local_88 = 0;
      if (*(long *)param_2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_2);
      }
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"%s is an invalid path. File does not exist.");
      TTR(local_90,(String *)&local_a0);
      vformat<String>(local_80,local_90,(CowData<char32_t> *)&local_88);
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0,"\n");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"");
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"Can\'t add Autoload:");
      TTR(local_b8,(String *)&local_c8);
      String::operator+(local_a8,local_b8);
      String::operator+(local_78,local_a8);
      EditorNode::show_warning(pSVar4,local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref(local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    else {
      cVar1 = String::begins_with((char *)param_2);
      pSVar4 = EditorNode::singleton;
      if (cVar1 != '\0') {
        operator+((char *)&local_60,(String *)"autoload/");
        if (local_d8 != local_60) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          local_d8 = local_60;
          local_60 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        this_00 = (Object *)EditorUndoRedoManager::get_singleton();
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Add Autoload");
        TTR((String *)&local_60,(String *)&local_70);
        EditorUndoRedoManager::create_action(this_00,(CowData<char32_t> *)&local_60,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        operator+((char *)&local_68,(String *)&_LC63);
        Variant::Variant((Variant *)local_58,(String *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_d8,false);
        pSVar3 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(this_00,pSVar3,(Variant *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        pSVar4 = (String *)ProjectSettings::get_singleton();
        cVar2 = ProjectSettings::has_setting(pSVar4);
        if (cVar2 == '\0') {
          local_50 = (undefined1  [16])0x0;
          local_58[0] = 0;
          local_58[1] = 0;
          StringName::StringName((StringName *)&local_60,(String *)&local_d8,false);
          pSVar3 = (StringName *)ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_undo_property(this_00,pSVar3,(Variant *)&local_60);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          ProjectSettings::get_singleton();
          StringName::StringName((StringName *)&local_68,(String *)&local_d8,false);
          ProjectSettings::get_setting_with_override((StringName *)local_58);
          StringName::StringName((StringName *)&local_60,(String *)&local_d8,false);
          pSVar3 = (StringName *)ProjectSettings::get_singleton();
          EditorUndoRedoManager::add_undo_property(this_00,pSVar3,(Variant *)&local_60);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
        }
        StringName::StringName((StringName *)&local_60,"update_autoload",false);
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_60,"update_autoload",false);
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        local_60 = 0;
        if (*(long *)(this + 0xa18) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(this + 0xa18));
        }
        StringName::StringName((StringName *)&local_68,"emit_signal",false);
        EditorUndoRedoManager::add_do_method<String>
                  ((EditorUndoRedoManager *)this_00,this,(String *)&local_68,
                   (CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        local_60 = 0;
        if (*(long *)(this + 0xa18) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(this + 0xa18));
        }
        StringName::StringName((StringName *)&local_68,"emit_signal",false);
        EditorUndoRedoManager::add_undo_method<String>
                  ((EditorUndoRedoManager *)this_00,this,(String *)&local_68,
                   (CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        EditorUndoRedoManager::commit_action(SUB81(this_00,0));
        goto LAB_0010505d;
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"");
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Warning!");
      TTR((String *)&local_70,(String *)&local_68);
      local_88 = 0;
      if (*(long *)param_2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_2);
      }
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1
                ((String *)&local_a0,"%s is an invalid path. Not in resource path (res://).");
      TTR(local_90,(String *)&local_a0);
      vformat<String>(local_80,local_90,(CowData<char32_t> *)&local_88);
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0,"\n");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"");
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"Can\'t add Autoload:");
      TTR(local_b8,(String *)&local_c8);
      String::operator+(local_a8,local_b8);
      String::operator+(local_78,local_a8);
      EditorNode::show_warning(pSVar4,local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref(local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    local_120 = (CowData<char32_t> *)&local_70;
    local_130 = (CowData<char32_t> *)&local_88;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref(local_130);
    CowData<char32_t>::_unref(local_120);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  cVar1 = '\0';
LAB_0010505d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_autoload_add() */

void __thiscall EditorAutoloadSettings::_autoload_add(EditorAutoloadSettings *this)

{
  undefined8 uVar1;
  char cVar2;
  String *pSVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_78;
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  long local_50 [4];
  
  local_50[2] = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if ((local_50[0] == 0) || (iVar4 = (int)*(undefined8 *)(local_50[0] + -8), iVar4 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    if (iVar4 != 1) {
      LineEdit::get_text();
      LineEdit::get_text();
      cVar2 = autoload_add(this,(String *)local_58,(String *)local_50);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      if (cVar2 != '\0') {
        uVar1 = *(undefined8 *)(this + 0xa50);
        local_50[0] = 0;
        String::parse_latin1((String *)local_50,"");
        LineEdit::set_text(uVar1,(CowData<char32_t> *)local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      }
      uVar1 = *(undefined8 *)(this + 0xa40);
      local_50[0] = 0;
      String::parse_latin1((String *)local_50,"");
      LineEdit::set_text(uVar1,(CowData<char32_t> *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      if (local_50[2] == *(long *)(in_FS_OFFSET + 0x28)) {
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa48),0));
        return;
      }
      goto LAB_0010583f;
    }
  }
  pSVar3 = (String *)FileSystemDock::get_script_create_dialog();
  local_78 = 0;
  if (*(long *)(this + 0xa10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(this + 0xa10));
  }
  cVar2 = String::ends_with((char *)&local_78);
  if (cVar2 == '\0') {
    String::get_base_dir();
    if (local_78 != local_50[0]) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_50[0];
      local_50[0] = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  LineEdit::get_text();
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"%s.gd");
  vformat<String>(local_60,(String *)&local_68,local_70);
  String::path_join((String *)local_58);
  local_50[0] = 0;
  String::parse_latin1((String *)local_50,"Node");
  ScriptCreateDialog::config(pSVar3,(String *)local_50,SUB81((String *)local_58,0),false);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_70);
  local_50[1] = 0;
  Window::popup_centered((Vector2i *)pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_50[2] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010583f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_script_created(Ref<Script>) */

void EditorAutoloadSettings::_script_created(EditorAutoloadSettings *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  CowData<char32_t> local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileSystemDock::get_script_create_dialog();
  Window::hide();
  Resource::get_path();
  String::get_base_dir();
  if (*(long *)(param_1 + 0xa10) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0xa10));
    lVar2 = local_48;
    local_48 = 0;
    *(long *)(param_1 + 0xa10) = lVar2;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_50);
  uVar1 = *(undefined8 *)(param_1 + 0xa50);
  Resource::get_path();
  LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  uVar1 = *(undefined8 *)(param_1 + 0xa40);
  Resource::get_path();
  String::get_file();
  String::get_basename();
  String::to_pascal_case();
  LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _autoload_add(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_autoload_text_submitted(String const&) */

void __thiscall
EditorAutoloadSettings::_autoload_text_submitted(EditorAutoloadSettings *this,String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if ((local_28 != 0) && (1 < *(uint *)(local_28 + -8))) {
    cVar1 = _autoload_name_is_valid(this,param_1,(String *)0x0);
    if (cVar1 != '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _autoload_add(this);
        return;
      }
      goto LAB_00105a51;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105a51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_notification(int) */

void __thiscall EditorAutoloadSettings::_notification(EditorAutoloadSettings *this,int param_1)

{
  String *pSVar1;
  Ref *pRVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  CallableCustom *this_00;
  long lVar8;
  long in_FS_OFFSET;
  long *local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0x1f) {
    if (param_1 == 0x2d) {
      pRVar2 = *(Ref **)(this + 0xa60);
      if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_58);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
      pRVar2 = *(Ref **)(this + 0xa48);
      if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_58);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    }
    else if (param_1 == 10) {
      local_68 = (long *)0x0;
      local_58 = (undefined *)0x0;
      String::parse_latin1((String *)&local_58,"Script");
      ResourceLoader::get_recognized_extensions_for_type((String *)&local_58,(List *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      local_58 = (undefined *)0x0;
      String::parse_latin1((String *)&local_58,"PackedScene");
      ResourceLoader::get_recognized_extensions_for_type((String *)&local_58,(List *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((local_68 != (long *)0x0) && (lVar8 = *local_68, lVar8 != 0)) {
        do {
          pSVar1 = *(String **)(this + 0xa68);
          local_60 = 0;
          local_58 = &_LC10;
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_60);
          operator+((char *)&local_58,(String *)&_LC117);
          EditorFileDialog::add_filter(pSVar1,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != 0);
      }
      pRVar2 = *(Ref **)(this + 0xa60);
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_58);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_68);
    }
    goto LAB_00105bdc;
  }
  if ((FileSystemDock::singleton == 0) ||
     (plVar7 = (long *)FileSystemDock::get_script_create_dialog(), plVar7 == (long *)0x0))
  goto LAB_00105bdc;
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00116410;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(EditorAutoloadSettings **)(this_00 + 0x28) = this;
  *(undefined8 *)(this_00 + 0x30) = uVar3;
  *(code **)(this_00 + 0x38) = _script_created;
  *(undefined8 *)(this_00 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "EditorAutoloadSettings::_script_created";
  Callable::Callable((Callable *)&local_58,this_00);
  cVar5 = CanvasItem::is_visible_in_tree();
  pcVar4 = *(code **)(*plVar7 + 0x118);
  if (cVar5 == '\0') {
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    cVar5 = (*pcVar4)(plVar7,&_notification(int)::{lambda()#5}::operator()()::sname,
                      (Callable *)&local_58);
    if (cVar5 != '\0') {
      pcVar4 = *(code **)(*plVar7 + 0x110);
      StringName::StringName((StringName *)&local_60,"script_created",false);
      (*pcVar4)(plVar7,(StringName *)&local_60,(Callable *)&local_58);
      goto joined_r0x00105f43;
    }
  }
  else {
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    cVar5 = (*pcVar4)(plVar7,&_notification(int)::{lambda()#4}::operator()()::sname,
                      (Callable *)&local_58);
    if (cVar5 == '\0') {
      pcVar4 = *(code **)(*plVar7 + 0x108);
      StringName::StringName((StringName *)&local_60,"script_created",false);
      (*pcVar4)(plVar7,(StringName *)&local_60,(Callable *)&local_58,0);
joined_r0x00105f43:
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
  }
  Callable::~Callable((Callable *)&local_58);
LAB_00105bdc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_create_autoload(String const&) */

long * __thiscall
EditorAutoloadSettings::_create_autoload(EditorAutoloadSettings *this,String *param_1)

{
  code *pcVar1;
  char cVar2;
  PackedScene *this_00;
  long *plVar3;
  Object *pOVar4;
  long lVar5;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ResourceLoader::get_resource_type((String *)&local_60);
  cVar2 = String::operator==((String *)&local_60,"PackedScene");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (cVar2 == '\0') {
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    ResourceLoader::load(&local_88,param_1,(String *)&local_60,1,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_88 != (Object *)0x0) {
      local_80 = (Object *)0x0;
      pOVar4 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&Script::typeinfo,0);
      if (pOVar4 != (Object *)0x0) {
        local_60 = 0;
        local_80 = pOVar4;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_80 = (Object *)0x0;
          Ref<Script>::unref((Ref<Script> *)&local_60);
          goto LAB_00106309;
        }
        Ref<Script>::unref((Ref<Script> *)&local_60);
        cVar2 = (**(code **)(*(long *)pOVar4 + 0x278))(pOVar4);
        if (cVar2 == '\0') {
          local_68 = 0;
          if (*(long *)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
          }
          local_70 = 0;
          String::parse_latin1
                    ((String *)&local_70,
                     "Failed to create an autoload, script \'%s\' is not compiling.");
          vformat<String>((String *)&local_60,(String *)&local_70,(CowData<char32_t> *)&local_68);
          _err_print_error("_create_autoload","editor/editor_autoload_settings.cpp",0x199,
                           "Condition \"!scr->is_valid()\" is true. Returning: nullptr",
                           (String *)&local_60,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_001065b2:
          Ref<Script>::unref((Ref<Script> *)&local_80);
          goto LAB_001064d1;
        }
        (**(code **)(*(long *)pOVar4 + 0x1f0))((StringName *)&local_78,pOVar4);
        StringName::StringName((StringName *)&local_60,"Node",false);
        cVar2 = ClassDB::is_parent_class((StringName *)&local_78,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (cVar2 == '\0') {
          local_68 = 0;
          if (*(long *)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
          }
          local_70 = 0;
          String::parse_latin1
                    ((String *)&local_70,
                     "Failed to create an autoload, script \'%s\' does not inherit from \'Node\'.");
          vformat<String>((String *)&local_60,(String *)&local_70,(CowData<char32_t> *)&local_68);
          _err_print_error("_create_autoload","editor/editor_autoload_settings.cpp",0x19d,
                           "Condition \"!valid_type\" is true. Returning: nullptr",
                           (String *)&local_60,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00106660:
          if (StringName::configured != '\0') {
LAB_00106668:
            if (local_78 != 0) {
              StringName::unref();
            }
          }
          goto LAB_001065b2;
        }
        lVar5 = ClassDB::instantiate((StringName *)&local_78);
        if (lVar5 == 0) {
          StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
          local_70 = 0;
          String::parse_latin1
                    ((String *)&local_70,"Failed to create an autoload, cannot instantiate \'%s\'.")
          ;
          vformat<StringName>((String *)&local_60,(String *)&local_70,(StringName *)&local_68);
          _err_print_error("_create_autoload","editor/editor_autoload_settings.cpp",0x1a0,
                           "Parameter \"obj\" is null.",(String *)&local_60,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if (StringName::configured != '\0') {
            if (local_68 != 0) {
              StringName::unref();
              goto LAB_00106660;
            }
            goto LAB_00106668;
          }
          goto LAB_001065b2;
        }
        plVar3 = (long *)__dynamic_cast(lVar5,&Object::typeinfo,&Node::typeinfo,0);
        pcVar1 = *(code **)(*plVar3 + 0x90);
        Variant::Variant((Variant *)local_58,pOVar4);
        (*pcVar1)(plVar3);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_78 != 0)) {
          StringName::unref();
        }
        Ref<Script>::unref((Ref<Script> *)&local_80);
        if (((local_88 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
           (cVar2 = predelete_handler(local_88), cVar2 == '\0')) goto LAB_001060e4;
LAB_001062d9:
        (**(code **)(*(long *)local_88 + 0x140))(local_88);
        Memory::free_static(local_88,false);
        goto LAB_001060e4;
      }
LAB_00106309:
      Ref<Script>::unref((Ref<Script> *)&local_80);
      if ((local_88 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        plVar3 = (long *)0x0;
        cVar2 = predelete_handler(local_88);
        if (cVar2 != '\0') goto LAB_001062d9;
      }
      goto LAB_00106340;
    }
    local_68 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
    }
    local_70 = 0;
    String::parse_latin1
              ((String *)&local_70,"Failed to create an autoload, can\'t load from path: %s.");
    vformat<String>((String *)&local_60,(String *)&local_70,(CowData<char32_t> *)&local_68);
    _err_print_error("_create_autoload","editor/editor_autoload_settings.cpp",0x195,
                     "Condition \"res.is_null()\" is true. Returning: nullptr",(String *)&local_60,0
                     ,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_001064d1:
    if (((local_88 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_88), cVar2 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
  }
  else {
    this_00 = (PackedScene *)operator_new(0x248,"");
    PackedScene::PackedScene(this_00);
    postinitialize_handler((Object *)this_00);
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    pOVar4 = (Object *)0x0;
    if (cVar2 != '\0') {
      pOVar4 = (Object *)this_00;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this_00), cVar2 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
    (**(code **)(*(long *)pOVar4 + 0x188))(pOVar4,param_1,0);
    (**(code **)(*(long *)pOVar4 + 0x180))(pOVar4);
    plVar3 = (long *)PackedScene::instantiate(pOVar4);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
LAB_001060e4:
    if (plVar3 != (long *)0x0) goto LAB_001060ed;
LAB_00106340:
    local_68 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
    }
    local_70 = 0;
    String::parse_latin1
              ((String *)&local_70,
               "Failed to create an autoload, path is not pointing to a scene or a script: %s.");
    vformat<String>((String *)&local_60,(String *)&local_70,(CowData<char32_t> *)&local_68);
    _err_print_error("_create_autoload","editor/editor_autoload_settings.cpp",0x1a7,
                     "Parameter \"n\" is null.",(String *)&local_60,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  plVar3 = (long *)0x0;
LAB_001060ed:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar3;
}



/* EditorAutoloadSettings::init_autoloads() */

void __thiscall EditorAutoloadSettings::init_autoloads(EditorAutoloadSettings *this)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  Object *pOVar5;
  String *pSVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long **)(this + 0xa20) != (long *)0x0) &&
     (pSVar6 = (String *)**(long **)(this + 0xa20), pSVar6 != (String *)0x0)) {
LAB_001067e7:
    do {
      plVar3 = (long *)_create_autoload(this,pSVar6 + 8);
      *(long **)(pSVar6 + 0x18) = plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x98))(local_58);
        lVar4 = Variant::get_validated_object();
        if (lVar4 == 0) {
LAB_001069e0:
          cVar2 = Variant::needs_deinit[local_58[0]];
        }
        else {
          pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&Script::typeinfo,0);
          if (pOVar5 != (Object *)0x0) {
            cVar2 = RefCounted::reference();
            if (cVar2 != '\0') {
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              cVar2 = (**(code **)(*(long *)pOVar5 + 0x270))(pOVar5);
              if (cVar2 == '\0') {
                pSVar6[0x11] = (String)0x0;
                Node::set_name(*(String **)(pSVar6 + 0x18));
                cVar2 = RefCounted::unreference();
              }
              else {
                pSVar6[0x11] = (String)0x1;
                Node::set_name(*(String **)(pSVar6 + 0x18));
                cVar2 = RefCounted::unreference();
              }
              if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
              goto LAB_001068a0;
            }
            goto LAB_001069e0;
          }
          cVar2 = Variant::needs_deinit[local_58[0]];
        }
        if (cVar2 != '\0') {
          Variant::_clear_internal();
        }
        pSVar6[0x11] = (String)0x0;
        Node::set_name(*(String **)(pSVar6 + 0x18));
      }
LAB_001068a0:
      if (pSVar6[0x10] == (String)0x0) {
LAB_001067a0:
        if ((pSVar6[0x11] == (String)0x0) &&
           (pOVar5 = *(Object **)(pSVar6 + 0x18), pOVar5 != (Object *)0x0)) {
          cVar2 = predelete_handler(pOVar5);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
          *(undefined8 *)(pSVar6 + 0x18) = 0;
        }
LAB_001067da:
        pSVar6 = *(String **)(pSVar6 + 0x20);
        if (pSVar6 == (String *)0x0) break;
        goto LAB_001067e7;
      }
      iVar7 = 0;
      if ((int)ScriptServer::_language_count < 1) goto LAB_001067da;
      do {
        plVar3 = (long *)ScriptServer::get_language(iVar7);
        pcVar1 = *(code **)(*plVar3 + 0x240);
        Variant::Variant((Variant *)local_58,*(Object **)(pSVar6 + 0x18));
        StringName::StringName((StringName *)&local_60,pSVar6,false);
        if (pcVar1 != ScriptLanguage::add_named_global_constant) {
          (*pcVar1)(plVar3,(StringName *)&local_60,(Variant *)local_58);
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)ScriptServer::_language_count);
      if (pSVar6[0x10] == (String)0x0) goto LAB_001067a0;
      pSVar6 = *(String **)(pSVar6 + 0x20);
    } while (pSVar6 != (String *)0x0);
    if (*(long **)(this + 0xa20) != (long *)0x0) {
      for (lVar4 = **(long **)(this + 0xa20); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
        if ((*(long *)(lVar4 + 0x18) != 0) && (*(char *)(lVar4 + 0x11) != '\0')) {
          if (*(long *)(this + 0x240) == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          Node::add_child(*(undefined8 *)(*(long *)(this + 0x240) + 0x368),*(long *)(lVar4 + 0x18),0
                          ,0);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar1 * 4;
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



/* EditorAutoloadSettings::_bind_methods() */

void EditorAutoloadSettings::_bind_methods(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  MethodBind *pMVar4;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_a8._8_8_ = local_a8._0_8_;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar4 = create_method_bind<EditorAutoloadSettings>(update_autoload);
  StringName::StringName((StringName *)&local_b8,"update_autoload",false);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_a8._8_8_;
  local_a8 = auVar3 << 0x40;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<EditorAutoloadSettings,bool,String_const&,String_const&>(autoload_add)
  ;
  StringName::StringName((StringName *)&local_b8,"autoload_add",false);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_a8._8_8_;
  local_a8 = auVar1 << 0x40;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<EditorAutoloadSettings,String_const&>(autoload_remove);
  StringName::StringName((StringName *)&local_b8,"autoload_remove",false);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_a8._8_8_;
  local_a8 = auVar2 << 0x40;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_d0 = 0;
  local_b8 = "autoload_changed";
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_d0);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  local_c8 = "EditorAutoloadSettings";
  local_d8 = 0;
  local_c0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<int>::_unref((CowData<int> *)&local_50);
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorAutoloadSettings::get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * EditorAutoloadSettings::get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  CowData<char32_t> *this;
  code *pcVar1;
  int iVar2;
  long lVar3;
  BoxContainer *this_00;
  Label *this_01;
  Variant *pVVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_90;
  Vector local_88 [8];
  long local_80;
  int local_78 [8];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0xa20) == 0) || (*(int *)(*(long *)(param_2 + 0xa20) + 0x10) < 2)) {
    Variant::Variant((Variant *)param_1,false);
  }
  else {
    local_80 = 0;
    lVar3 = Tree::get_next_selected(*(TreeItem **)(param_2 + 0xa38));
    while (lVar3 != 0) {
      TreeItem::get_text((int)(CowData<char32_t> *)&local_90);
      if (local_80 == 0) {
        lVar3 = 1;
      }
      else {
        lVar3 = *(long *)(local_80 + -8) + 1;
      }
      iVar2 = CowData<String>::resize<false>((CowData<String> *)&local_80,lVar3);
      if (iVar2 == 0) {
        if (local_80 == 0) {
          lVar6 = -1;
          lVar3 = 0;
        }
        else {
          lVar3 = *(long *)(local_80 + -8);
          lVar6 = lVar3 + -1;
          if (-1 < lVar6) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_80);
            this = (CowData<char32_t> *)(local_80 + lVar6 * 8);
            if (*(long *)this != local_90) {
              CowData<char32_t>::_ref(this,(CowData *)&local_90);
            }
            goto LAB_00107175;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar3,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_00107175:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      lVar3 = Tree::get_next_selected(*(TreeItem **)(param_2 + 0xa38));
    }
    if (((local_80 == 0) || (*(long *)(local_80 + -8) == 0)) ||
       ((*(long *)(param_2 + 0xa20) != 0 &&
        ((long)*(int *)(*(long *)(param_2 + 0xa20) + 0x10) == *(long *)(local_80 + -8))))) {
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    }
    else {
      this_00 = (BoxContainer *)operator_new(0xa10,"");
      BoxContainer::BoxContainer(this_00,true);
      this_00[0xa0c] = (BoxContainer)0x1;
      *(undefined ***)this_00 = &PTR__initialize_classv_00115d20;
      postinitialize_handler((Object *)this_00);
      if (local_80 != 0) {
        lVar3 = *(long *)(local_80 + -8);
        if (10 < lVar3) {
          lVar3 = 10;
        }
        if (0 < (int)lVar3) {
          uVar5 = 0;
          do {
            this_01 = (Label *)operator_new(0xad8,"");
            if (local_80 == 0) {
              lVar6 = 0;
LAB_001073b2:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar5,lVar6,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            lVar6 = *(long *)(local_80 + -8);
            if (lVar6 <= (long)uVar5) goto LAB_001073b2;
            Label::Label(this_01,(String *)(local_80 + uVar5 * 8));
            postinitialize_handler((Object *)this_01);
            local_58 = CONCAT44(_LC155._4_4_,(float)_LC155);
            local_50 = CONCAT44((float)_LC155 - (float)(int)uVar5 / __LC154,0x3f800000);
            (**(code **)(*(long *)this_01 + 0x270))(this_01);
            Node::set_auto_translate_mode(this_01,2);
            Node::add_child(this_00,this_01,0,0);
            bVar7 = uVar5 != (int)lVar3 - 1;
            uVar5 = uVar5 + 1;
          } while (bVar7);
        }
      }
      Tree::set_drop_mode_flags((int)*(undefined8 *)(param_2 + 0xa38));
      Control::set_drag_preview(*(Control **)(param_2 + 0xa38));
      Dictionary::Dictionary((Dictionary *)&local_90);
      Variant::Variant((Variant *)&local_58,"autoload");
      Variant::Variant((Variant *)local_78,"type");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
      Variant::operator=(pVVar4,(Variant *)&local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_58,local_88);
      Variant::Variant((Variant *)local_78,"autoloads");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
      Variant::operator=(pVVar4,(Variant *)&local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)param_1,(Dictionary *)&local_90);
      Dictionary::~Dictionary((Dictionary *)&local_90);
    }
    CowData<String>::_unref((CowData<String> *)&local_80);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  int iVar1;
  CowData<int> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  CowData<int> *pCVar8;
  CowData<int> *pCVar9;
  long lVar10;
  
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
    lVar10 = 0;
    pCVar2 = (CowData<int> *)0x0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<int> *)(lVar10 * 4);
    if (pCVar2 != (CowData<int> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<int> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar3 = param_1 * 4 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar9 = (CowData<int> *)(uVar3 | uVar3 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<int> *)0x0) {
      if (param_1 <= lVar10) {
        if ((pCVar8 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar8), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_001107b8();
        return;
      }
      if (pCVar8 != pCVar2) {
        if (lVar10 == 0) {
          puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
          if (puVar4 != (undefined8 *)0x0) {
            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8 **)this = puVar6;
            goto LAB_0010764d;
          }
          uVar7 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_00107712;
        }
        pCVar9 = this;
        iVar1 = _realloc(this,(long)pCVar8);
        if (iVar1 != 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)this;
      if (puVar6 == (undefined8 *)0x0) {
        resize<false>((long)pCVar9);
        return;
      }
LAB_0010764d:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00107712:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar5,0,0);
  return;
}



/* EditorAutoloadSettings::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void EditorAutoloadSettings::drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  String *pSVar10;
  EditorUndoRedoManager *this;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  size_t sVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  int *piVar19;
  long lVar20;
  int *piVar21;
  undefined8 *puVar22;
  long in_FS_OFFSET;
  CowData<char32_t> *local_110;
  CowData<char32_t> *local_108;
  long local_d0;
  Variant local_c8 [8];
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  Variant local_a8 [8];
  long local_a0 [2];
  long local_90 [2];
  int *local_80;
  undefined1 local_78 [16];
  undefined2 local_68;
  int local_64;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xa38));
  if (lVar9 == 0) goto LAB_00107d90;
  iVar8 = Tree::get_drop_section_at_position(*(Vector2 **)(param_1 + 0xa38));
  if (iVar8 < -1) goto LAB_00107d90;
  local_d0 = 0;
  if (iVar8 == -1) {
LAB_001077ee:
    TreeItem::get_text((int)(CowData<char32_t> *)local_78);
    if (local_d0 != local_78._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      local_d0 = local_78._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_78._8_8_;
      local_78 = auVar4 << 0x40;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    pSVar10 = (String *)ProjectSettings::get_singleton();
    operator+((char *)local_78,(String *)"autoload/");
    iVar8 = ProjectSettings::get_order(pSVar10);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    puVar22 = *(undefined8 **)(param_1 + 0xa20);
    if (puVar22 != (undefined8 *)0x0) {
      for (puVar22 = (undefined8 *)*puVar22;
          (puVar22 != (undefined8 *)0x0 && (iVar8 != *(int *)((long)puVar22 + 0x14)));
          puVar22 = (undefined8 *)puVar22[4]) {
      }
    }
    bVar6 = false;
    local_64 = iVar8;
  }
  else {
    lVar9 = TreeItem::get_next();
    if (lVar9 != 0) {
      TreeItem::get_next();
      goto LAB_001077ee;
    }
    TreeItem::get_text((int)(CowData<char32_t> *)local_78);
    if (local_d0 != local_78._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      local_d0 = local_78._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_78._8_8_;
      local_78 = auVar5 << 0x40;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    pSVar10 = (String *)ProjectSettings::get_singleton();
    operator+((char *)local_78,(String *)"autoload/");
    ProjectSettings::get_order(pSVar10);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    bVar6 = true;
    local_64 = 0;
    puVar22 = (undefined8 *)0x0;
  }
  local_108 = (CowData<char32_t> *)&local_d0;
  local_110 = (CowData<char32_t> *)local_78;
  local_60 = 0;
  local_68 = 0;
  local_78 = (undefined1  [16])0x0;
  Variant::operator_cast_to_Dictionary(local_c8);
  Variant::Variant((Variant *)local_58,"autoloads");
  Dictionary::operator[](local_c8);
  Variant::operator_cast_to_Vector(local_a8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar9 = 0;
  local_90[0] = 0;
  if (*(long *)(param_1 + 0xa20) != 0) {
    lVar9 = (long)*(int *)(*(long *)(param_1 + 0xa20) + 0x10);
  }
  CowData<int>::resize<false>((CowData<int> *)local_90,lVar9);
  plVar12 = *(long **)(param_1 + 0xa20);
  if (plVar12 == (long *)0x0) {
LAB_001081bd:
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar12;
    if (lVar9 != 0) {
      lVar20 = 0;
      do {
        uVar1 = *(undefined4 *)(lVar9 + 0x14);
        if (local_90[0] == 0) {
          lVar13 = 0;
          goto LAB_001079e8;
        }
        lVar13 = *(long *)(local_90[0] + -8);
        if (lVar13 <= lVar20) goto LAB_001079e8;
        CowData<int>::_copy_on_write((CowData<int> *)local_90);
        lVar9 = *(long *)(lVar9 + 0x20);
        *(undefined4 *)(local_90[0] + lVar20 * 4) = uVar1;
        lVar20 = lVar20 + 1;
      } while (lVar9 != 0);
      plVar12 = *(long **)(param_1 + 0xa20);
      if (plVar12 == (long *)0x0) goto LAB_001081bd;
    }
    lVar9 = (long)(int)plVar12[2];
  }
  local_80 = (int *)0x0;
  CowData<int>::resize<false>((CowData<int> *)&local_80,lVar9);
  for (lVar9 = 0; (local_a0[0] != 0 && (lVar9 < *(long *)(local_a0[0] + -8))); lVar9 = lVar9 + 1) {
    pSVar10 = (String *)ProjectSettings::get_singleton();
    if (local_a0[0] == 0) {
      lVar20 = 0;
      goto LAB_00108078;
    }
    lVar20 = *(long *)(local_a0[0] + -8);
    if (lVar20 <= lVar9) goto LAB_00108078;
    operator+((char *)&local_b0,(String *)"autoload/");
    iVar8 = ProjectSettings::get_order(pSVar10);
    local_64 = iVar8;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    plVar12 = *(long **)(param_1 + 0xa20);
    if (plVar12 == (long *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      for (puVar14 = (undefined8 *)*plVar12;
          (puVar14 != (undefined8 *)0x0 && (iVar8 != *(int *)((long)puVar14 + 0x14)));
          puVar14 = (undefined8 *)puVar14[4]) {
      }
    }
    if (bVar6) {
      if (plVar12 == (long *)puVar14[6]) {
        lVar20 = puVar14[4];
        if (lVar20 != 0) {
          if (puVar14 == (undefined8 *)*plVar12) {
            *plVar12 = lVar20;
          }
          puVar2 = (undefined8 *)puVar14[5];
          puVar18 = (undefined8 *)plVar12[1];
          if (puVar14 == (undefined8 *)plVar12[1]) {
            plVar12[1] = (long)puVar2;
            puVar18 = puVar2;
          }
          if (puVar2 != (undefined8 *)0x0) {
            puVar2[4] = lVar20;
            lVar20 = puVar14[4];
          }
          *(undefined8 **)(lVar20 + 0x28) = puVar2;
          puVar18[4] = puVar14;
          puVar14[5] = puVar18;
          puVar14[4] = 0;
          plVar12[1] = (long)puVar14;
        }
      }
      else {
        _err_print_error("move_to_back","./core/templates/list.h",0x238,
                         "Condition \"p_I->data != _data\" is true.",0,0);
      }
    }
    else if (puVar22 == puVar14) {
      puVar22 = (undefined8 *)puVar22[4];
      if (puVar22 == (undefined8 *)0x0) goto LAB_00107f40;
    }
    else {
      lVar20 = puVar14[5];
      lVar13 = puVar14[4];
      if (lVar20 == 0) {
        *plVar12 = lVar13;
      }
      else {
        *(long *)(lVar20 + 0x20) = lVar13;
      }
      if (lVar13 == 0) {
        plVar12[1] = lVar20;
      }
      else {
        *(long *)(lVar13 + 0x28) = lVar20;
      }
      puVar14[4] = puVar22;
      if (puVar22 == (undefined8 *)0x0) {
        puVar14[5] = plVar12[1];
        plVar12[1] = (long)puVar14;
      }
      else {
        lVar20 = puVar22[5];
        puVar14[5] = lVar20;
        if (lVar20 == 0) {
          *plVar12 = (long)puVar14;
        }
        else {
          *(undefined8 **)(lVar20 + 0x20) = puVar14;
        }
        puVar22[5] = puVar14;
      }
    }
  }
  plVar12 = *(long **)(param_1 + 0xa20);
LAB_00107f40:
  if ((plVar12 != (long *)0x0) && (lVar9 = *plVar12, lVar9 != 0)) {
    lVar20 = 0;
    do {
      iVar8 = *(int *)(lVar9 + 0x14);
      if (local_80 == (int *)0x0) {
        lVar13 = 0;
LAB_001079e8:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar20,lVar13,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar13 = *(long *)(local_80 + -2);
      if (lVar13 <= lVar20) goto LAB_001079e8;
      CowData<int>::_copy_on_write((CowData<int> *)&local_80);
      lVar9 = *(long *)(lVar9 + 0x20);
      local_80[lVar20] = iVar8;
      lVar20 = lVar20 + 1;
    } while (lVar9 != 0);
  }
  if (local_80 == (int *)0x0) {
    if ((local_90[0] == 0) || (*(long *)(local_90[0] + -8) == 0)) goto LAB_00107d46;
LAB_00107a3c:
    this = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"Rearrange Autoloads");
    TTR((String *)&local_b0,(String *)&local_c0);
    EditorUndoRedoManager::create_action(this,(String *)&local_b0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    piVar7 = local_80;
    if ((*(long **)(param_1 + 0xa20) != (long *)0x0) &&
       (lVar13 = **(long **)(param_1 + 0xa20), lVar13 != 0)) {
      if (local_80 == (int *)0x0) {
        lVar9 = 0;
        lVar20 = 0;
LAB_00108078:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar20,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar9 = 0;
      do {
        lVar20 = *(long *)(piVar7 + -2);
        if (lVar20 <= lVar9) goto LAB_00108078;
        iVar8 = piVar7[lVar9];
        operator+((char *)&local_b8,(String *)"autoload/");
        StringName::StringName((StringName *)&local_b0,"set_order",false);
        uVar11 = ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_method<String,int>
                  (this,uVar11,(String *)&local_b0,(String *)&local_b8,iVar8);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        uVar1 = *(undefined4 *)(lVar13 + 0x14);
        operator+((char *)&local_b8,(String *)"autoload/");
        StringName::StringName((StringName *)&local_b0,"set_order",false);
        uVar11 = ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_method<String,int>
                  (this,uVar11,(String *)&local_b0,(String *)&local_b8,uVar1);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        lVar9 = lVar9 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        lVar13 = *(long *)(lVar13 + 0x20);
      } while (lVar13 != 0);
    }
    CowData<int>::resize<false>((CowData<int> *)&local_80,0);
    StringName::StringName((StringName *)&local_b0,"update_autoload",false);
    EditorUndoRedoManager::add_do_method<>(this,(Object *)param_1,(StringName *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b0,"update_autoload",false);
    EditorUndoRedoManager::add_undo_method<>(this,(Object *)param_1,(StringName *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    local_b0 = 0;
    if (*(long *)(param_1 + 0xa18) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(param_1 + 0xa18));
    }
    StringName::StringName((StringName *)&local_b8,"emit_signal",false);
    EditorUndoRedoManager::add_do_method<String>
              (this,param_1,(String *)&local_b8,(String *)&local_b0);
    if ((StringName::configured != '\0') && (local_b8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    local_b0 = 0;
    if (*(long *)(param_1 + 0xa18) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(param_1 + 0xa18));
    }
    StringName::StringName((StringName *)&local_b8,"emit_signal",false);
    EditorUndoRedoManager::add_undo_method<String>
              (this,param_1,(String *)&local_b8,(String *)&local_b0);
    if ((StringName::configured != '\0') && (local_b8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    EditorUndoRedoManager::commit_action(SUB81(this,0));
  }
  else {
    lVar9 = *(long *)(local_80 + -2);
    if (local_90[0] == 0) {
      if (lVar9 != 0) goto LAB_00108245;
    }
    else {
      if (lVar9 != *(long *)(local_90[0] + -8)) {
        if (lVar9 == 0) goto LAB_00107a3c;
LAB_00108245:
        CowData<int>::_copy_on_write((CowData<int> *)&local_80);
        piVar7 = local_80;
        if (lVar9 == 1) {
          SortArray<int,_DefaultComparator<int>,true>::introsort(0,1,local_80,0);
        }
        else {
          lVar13 = 0;
          lVar20 = lVar9;
          do {
            lVar20 = lVar20 >> 1;
            lVar13 = lVar13 + 1;
          } while (lVar20 != 1);
          SortArray<int,_DefaultComparator<int>,true>::introsort(0,lVar9,local_80,lVar13 * 2);
          lVar20 = 1;
          if (lVar9 < 0x11) {
            lVar20 = 1;
            do {
              iVar8 = piVar7[lVar20];
              sVar15 = lVar20 * 4;
              if (iVar8 < *piVar7) {
                memmove(piVar7 + 1,piVar7,sVar15);
                *piVar7 = iVar8;
              }
              else {
                iVar16 = piVar7[lVar20 + -1];
                lVar13 = lVar20 + -1;
                if (iVar8 < iVar16) {
                  do {
                    lVar17 = lVar13;
                    if (lVar17 == 0) {
                      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",
                                       0xff,"bad comparison function; sorting will be broken",0,0);
                      sVar15 = 4;
                      goto LAB_001083d7;
                    }
                    piVar7[lVar17 + 1] = iVar16;
                    iVar16 = piVar7[lVar17 + -1];
                    lVar13 = lVar17 + -1;
                  } while (iVar8 < iVar16);
                  sVar15 = lVar17 << 2;
                }
LAB_001083d7:
                *(int *)((long)piVar7 + sVar15) = iVar8;
              }
              lVar20 = lVar20 + 1;
            } while (lVar9 != lVar20);
          }
          else {
            do {
              iVar8 = piVar7[lVar20];
              sVar15 = lVar20 * 4;
              if (iVar8 < *piVar7) {
                memmove(piVar7 + 1,piVar7,sVar15);
                *piVar7 = iVar8;
              }
              else {
                iVar16 = piVar7[lVar20 + -1];
                lVar13 = lVar20 + -1;
                if (iVar8 < iVar16) {
                  do {
                    lVar17 = lVar13;
                    if (lVar17 == 0) {
                      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",
                                       0xff,"bad comparison function; sorting will be broken",0,0);
                      sVar15 = 4;
                      goto LAB_0010833f;
                    }
                    piVar7[lVar17 + 1] = iVar16;
                    iVar16 = piVar7[lVar17 + -1];
                    lVar13 = lVar17 + -1;
                  } while (iVar8 < iVar16);
                  sVar15 = lVar17 << 2;
                }
LAB_0010833f:
                *(int *)((long)piVar7 + sVar15) = iVar8;
              }
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0x10);
            piVar21 = piVar7 + 0x10;
            lVar20 = 0x10;
            do {
              iVar8 = *piVar21;
              iVar16 = piVar21[-1];
              lVar13 = lVar20 + -1;
              piVar19 = piVar21;
              if (iVar8 < iVar16) {
                do {
                  piVar7[lVar13 + 1] = iVar16;
                  lVar17 = lVar13 + -1;
                  iVar16 = piVar7[lVar17];
                  if (iVar16 <= iVar8) {
                    piVar19 = piVar7 + lVar13;
                    goto LAB_001084a5;
                  }
                  lVar13 = lVar17;
                } while (lVar17 != 0);
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                piVar19 = piVar7 + 1;
              }
LAB_001084a5:
              lVar20 = lVar20 + 1;
              *piVar19 = iVar8;
              piVar21 = piVar21 + 1;
            } while (lVar9 != lVar20);
          }
        }
        goto LAB_00107a3c;
      }
      if (0 < lVar9) {
        lVar20 = 0;
        do {
          if (local_80[lVar20] != *(int *)(local_90[0] + lVar20 * 4)) goto LAB_00108245;
          lVar20 = lVar20 + 1;
        } while (lVar9 != lVar20);
      }
    }
  }
LAB_00107d46:
  CowData<int>::_unref((CowData<int> *)&local_80);
  CowData<int>::_unref((CowData<int> *)local_90);
  CowData<String>::_unref((CowData<String> *)local_a0);
  Dictionary::~Dictionary((Dictionary *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)(local_78 + 8));
  CowData<char32_t>::_unref(local_110);
  CowData<char32_t>::_unref(local_108);
LAB_00107d90:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::update_autoload() [clone .part.0] */

void __thiscall EditorAutoloadSettings::update_autoload(EditorAutoloadSettings *this)

{
  int *piVar1;
  uint *puVar2;
  String SVar3;
  uint uVar4;
  CowData<char32_t> *pCVar5;
  code *pcVar6;
  Object *pOVar7;
  void *pvVar8;
  undefined8 *puVar9;
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
  undefined8 uVar22;
  char cVar23;
  char cVar24;
  undefined1 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  List *pLVar29;
  String *pSVar30;
  CowData<char32_t> *this_00;
  undefined8 uVar31;
  CallableCustom *this_01;
  long *plVar32;
  undefined8 *puVar33;
  String *pSVar34;
  long lVar35;
  Object *pOVar36;
  undefined8 *puVar37;
  long lVar38;
  undefined1 (*pauVar39) [16];
  uint uVar40;
  long lVar41;
  uint uVar42;
  int *piVar43;
  undefined8 *puVar44;
  int iVar45;
  uint uVar46;
  uint *puVar47;
  ulong uVar48;
  ulong uVar49;
  long in_FS_OFFSET;
  undefined1 (*local_170) [16];
  undefined1 (*local_150) [16];
  long *local_108;
  long local_100;
  ulong local_f8;
  undefined8 local_f0;
  ulong local_e8;
  long *local_e0;
  undefined1 local_d8 [16];
  undefined2 local_c8;
  undefined4 local_c4;
  long *local_c0;
  AutoloadInfo local_b8 [8];
  undefined1 local_b0 [16];
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  plVar32 = *(long **)(this + 0xa20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa28] = (EditorAutoloadSettings)0x1;
  local_90 = 2;
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  if (plVar32 != (long *)0x0) {
    lVar35 = *plVar32;
    if (lVar35 != 0) {
      do {
        HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
        ::insert((String *)local_d8,local_b8,SUB81(lVar35,0));
        lVar35 = *(long *)(lVar35 + 0x20);
      } while (lVar35 != 0);
      plVar32 = *(long **)(this + 0xa20);
    }
    if (plVar32 != (long *)0x0) {
      do {
        pCVar5 = (CowData<char32_t> *)*plVar32;
        if (pCVar5 == (CowData<char32_t> *)0x0) goto LAB_00108620;
        if (*(long **)(pCVar5 + 0x30) == plVar32) {
          lVar35 = *(long *)(pCVar5 + 0x20);
          lVar38 = *(long *)(pCVar5 + 0x28);
          *plVar32 = lVar35;
          if (pCVar5 == (CowData<char32_t> *)plVar32[1]) {
            plVar32[1] = lVar38;
          }
          if (lVar38 != 0) {
            *(long *)(lVar38 + 0x20) = lVar35;
            lVar35 = *(long *)(pCVar5 + 0x20);
          }
          if (lVar35 != 0) {
            *(long *)(lVar35 + 0x28) = lVar38;
          }
          CowData<char32_t>::_unref(pCVar5 + 8);
          CowData<char32_t>::_unref(pCVar5);
          Memory::free_static(pCVar5,false);
          *(int *)(plVar32 + 2) = (int)plVar32[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar32 = *(long **)(this + 0xa20);
      } while ((int)plVar32[2] != 0);
      Memory::free_static(plVar32,false);
      *(undefined8 *)(this + 0xa20) = 0;
    }
  }
LAB_00108620:
  Tree::clear();
  iVar26 = Tree::create_item(*(TreeItem **)(this + 0xa38),0);
  local_108 = (long *)0x0;
  pLVar29 = (List *)ProjectSettings::get_singleton();
  Object::get_property_list(pLVar29,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_108,0));
  if ((local_108 == (long *)0x0) || (lVar35 = *local_108, lVar35 == 0)) {
    local_150 = (undefined1 (*) [16])0x0;
    puVar37 = local_a0;
    if (local_a0 != (undefined8 *)0x0) goto LAB_00108df8;
LAB_00109999:
    local_150 = (undefined1 (*) [16])0x0;
  }
  else {
    local_150 = (undefined1 (*) [16])0x0;
    do {
      pSVar30 = (String *)(lVar35 + 8);
      cVar23 = String::begins_with((char *)pSVar30);
      if (cVar23 != '\0') {
        String::get_slice((char *)&local_100,(int)pSVar30);
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)local_d8,pSVar30,false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        Variant::operator_cast_to_String((Variant *)&local_f8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_d8._0_8_ != 0)) {
          StringName::unref();
        }
        if ((local_100 != 0) && (1 < *(uint *)(local_100 + -8))) {
          local_c8 = 0;
          local_c4 = 0;
          local_c0 = (long *)0x0;
          local_d8 = (undefined1  [16])0x0;
          cVar24 = String::begins_with((char *)&local_f8);
          local_c8 = CONCAT11(local_c8._1_1_,cVar24);
          if (cVar24 != '\0') {
            String::substr((int)(CowData<char32_t> *)&local_e0,(int)(Variant *)&local_f8);
            if ((long *)local_f8 != local_e0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              local_f8 = (ulong)local_e0;
              local_e0 = (long *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          }
          if (local_d8._0_8_ != local_100) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,(CowData *)&local_100);
          }
          pCVar5 = (CowData<char32_t> *)(local_d8 + 8);
          if (local_d8._8_8_ != local_f8) {
            CowData<char32_t>::_ref(pCVar5,(CowData *)&local_f8);
          }
          pSVar30 = (String *)ProjectSettings::get_singleton();
          local_c4 = ProjectSettings::get_order(pSVar30);
          local_e0 = (long *)((ulong)local_e0 & 0xffffffff00000000);
          cVar24 = HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
                   ::_lookup_pos((HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
                                  *)local_b8,(String *)&local_100,(uint *)&local_e0);
          if (cVar24 != '\0') {
            lVar38 = HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
                     ::operator[]((HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
                                   *)local_b8,(String *)&local_100);
            cVar24 = String::operator==((String *)(lVar38 + 8),(String *)pCVar5);
            if ((cVar24 != '\0') && (local_c0 = *(long **)(lVar38 + 0x18), local_c0 != (long *)0x0))
            {
              (**(code **)(*local_c0 + 0x98))((StringName *)local_78);
              local_e0 = (long *)0x0;
              Ref<Script>::operator=((Ref<Script> *)&local_e0,(Variant *)local_78);
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              uVar25 = 0;
              if (local_e0 != (long *)0x0) {
                uVar25 = (**(code **)(*local_e0 + 0x270))();
              }
              local_c8 = CONCAT11(uVar25,(undefined1)local_c8);
              if (local_c8 == *(short *)(lVar38 + 0x10)) {
                local_e8 = local_e8 & 0xffffffff00000000;
                cVar23 = HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
                         ::_lookup_pos((HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
                                        *)local_b8,(String *)&local_100,(uint *)&local_e8);
                if (cVar23 != '\0') {
                  uVar48 = local_e8 & 0xffffffff;
                  uVar4 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
                  uVar49 = CONCAT44(0,uVar4);
                  lVar38 = *(long *)(hash_table_size_primes_inv + (local_90 & 0xffffffff) * 8);
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)((int)local_e8 + 1) * lVar38;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar49;
                  lVar41 = SUB168(auVar10 * auVar16,8);
                  puVar47 = (uint *)(local_b0._8_8_ + lVar41 * 4);
                  uVar40 = SUB164(auVar10 * auVar16,8);
                  uVar46 = *puVar47;
                  if ((uVar46 != 0) &&
                     (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar46 * lVar38, auVar17._8_8_ = 0,
                     auVar17._0_8_ = uVar49, auVar12._8_8_ = 0,
                     auVar12._0_8_ =
                          (ulong)((uVar4 + uVar40) - SUB164(auVar11 * auVar17,8)) * lVar38,
                     auVar18._8_8_ = 0, auVar18._0_8_ = uVar49, SUB164(auVar12 * auVar18,8) != 0)) {
                    do {
                      uVar42 = uVar40;
                      puVar2 = (uint *)(local_b0._8_8_ + uVar48 * 4);
                      *puVar47 = *puVar2;
                      puVar37 = (undefined8 *)(local_b0._0_8_ + lVar41 * 8);
                      *puVar2 = uVar46;
                      puVar33 = (undefined8 *)(local_b0._0_8_ + uVar48 * 8);
                      uVar31 = *puVar37;
                      *puVar37 = *puVar33;
                      *puVar33 = uVar31;
                      auVar15._8_8_ = 0;
                      auVar15._0_8_ = (ulong)(uVar42 + 1) * lVar38;
                      auVar21._8_8_ = 0;
                      auVar21._0_8_ = uVar49;
                      lVar41 = SUB168(auVar15 * auVar21,8);
                      puVar47 = (uint *)(local_b0._8_8_ + lVar41 * 4);
                      uVar40 = SUB164(auVar15 * auVar21,8);
                      uVar46 = *puVar47;
                      if (uVar46 == 0) break;
                      uVar48 = (ulong)uVar42;
                      auVar13._8_8_ = 0;
                      auVar13._0_8_ = (ulong)uVar46 * lVar38;
                      auVar19._8_8_ = 0;
                      auVar19._0_8_ = uVar49;
                      auVar14._8_8_ = 0;
                      auVar14._0_8_ =
                           (ulong)((uVar40 + uVar4) - SUB164(auVar13 * auVar19,8)) * lVar38;
                      auVar20._8_8_ = 0;
                      auVar20._0_8_ = uVar49;
                    } while (SUB164(auVar14 * auVar20,8) != 0);
                    local_e8 = CONCAT44(local_e8._4_4_,uVar42);
                    uVar48 = (ulong)uVar42;
                  }
                  *(undefined4 *)(local_b0._8_8_ + uVar48 * 4) = 0;
                  puVar37 = (undefined8 *)(local_b0._0_8_ + uVar48 * 8);
                  puVar44 = (undefined8 *)*puVar37;
                  puVar33 = (undefined8 *)*puVar44;
                  if (local_a0 == puVar44) {
                    local_a0 = puVar33;
                  }
                  puVar9 = (undefined8 *)puVar44[1];
                  if (puVar44 == puStack_98) {
                    puStack_98 = puVar9;
                  }
                  if (puVar9 != (undefined8 *)0x0) {
                    *puVar9 = puVar33;
                    puVar44 = (undefined8 *)*puVar37;
                    puVar33 = (undefined8 *)*puVar44;
                  }
                  if (puVar33 != (undefined8 *)0x0) {
                    puVar33[1] = puVar44[1];
                    puVar44 = (undefined8 *)*puVar37;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)(puVar44 + 4));
                  CowData<char32_t>::_unref((CowData<char32_t> *)(puVar44 + 3));
                  CowData<char32_t>::_unref((CowData<char32_t> *)(puVar44 + 2));
                  Memory::free_static(puVar44,false);
                  local_90 = CONCAT44(local_90._4_4_ + -1,(undefined4)local_90);
                  *puVar37 = 0;
                }
                cVar23 = '\0';
              }
              else {
                local_c0 = (long *)0x0;
                cVar23 = cVar24;
              }
              Ref<Script>::unref((Ref<Script> *)&local_e0);
            }
          }
          if (*(long *)(this + 0xa20) == 0) {
            pauVar39 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])(this + 0xa20) = pauVar39;
            *(undefined4 *)pauVar39[1] = 0;
            *pauVar39 = (undefined1  [16])0x0;
          }
          this_00 = (CowData<char32_t> *)operator_new(0x38,DefaultAllocator::alloc);
          *(undefined2 *)(this_00 + 0x10) = 0;
          *(undefined4 *)(this_00 + 0x14) = 0;
          *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_00 + 0x18) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_00 + 0x28) = (undefined1  [16])0x0;
          CowData<char32_t>::_ref(this_00,(CowData *)local_d8);
          CowData<char32_t>::_ref(this_00 + 8,(CowData *)pCVar5);
          *(short *)(this_00 + 0x10) = local_c8;
          *(undefined4 *)(this_00 + 0x14) = local_c4;
          *(long **)(this_00 + 0x18) = local_c0;
          plVar32 = *(long **)(this + 0xa20);
          lVar38 = plVar32[1];
          *(undefined8 *)(this_00 + 0x20) = 0;
          *(long **)(this_00 + 0x30) = plVar32;
          *(long *)(this_00 + 0x28) = lVar38;
          if (lVar38 != 0) {
            *(CowData<char32_t> **)(lVar38 + 0x20) = this_00;
          }
          plVar32[1] = (long)this_00;
          if (*plVar32 == 0) {
            *plVar32 = (long)this_00;
          }
          *(int *)(plVar32 + 2) = (int)plVar32[2] + 1;
          if (cVar23 != '\0') {
            if (local_150 == (undefined1 (*) [16])0x0) {
              local_150 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)local_150[1] = 0;
              *local_150 = (undefined1  [16])0x0;
            }
            puVar37 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
            puVar37[1] = 0;
            lVar38 = *(long *)(*local_150 + 8);
            *puVar37 = this_00;
            puVar37[3] = local_150;
            puVar37[2] = lVar38;
            if (lVar38 != 0) {
              *(undefined8 **)(lVar38 + 8) = puVar37;
            }
            lVar38 = *(long *)*local_150;
            *(undefined8 **)(*local_150 + 8) = puVar37;
            if (lVar38 == 0) {
              *(undefined8 **)*local_150 = puVar37;
            }
            *(int *)local_150[1] = *(int *)local_150[1] + 1;
          }
          uVar31 = Tree::create_item(*(TreeItem **)(this + 0xa38),iVar26);
          local_e0 = (long *)0x0;
          if (local_100 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_100);
          }
          TreeItem::set_text(uVar31,0,(Ref<Script> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          iVar45 = (int)uVar31;
          TreeItem::set_editable(iVar45,false);
          local_e0 = (long *)0x0;
          if (local_f8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_f8);
          }
          TreeItem::set_text(uVar31,1,(Ref<Script> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          TreeItem::set_selectable(iVar45,true);
          TreeItem::set_cell_mode(uVar31,2,1);
          TreeItem::set_editable(iVar45,true);
          local_e8 = 0;
          String::parse_latin1((String *)&local_e8,"");
          local_f0 = 0;
          String::parse_latin1((String *)&local_f0,"Enable");
          TTR((String *)&local_e0,(String *)&local_f0);
          TreeItem::set_text(uVar31,2,(Ref<Script> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          TreeItem::set_checked(iVar45,true);
          local_e0 = (long *)0x0;
          String::parse_latin1((String *)&local_e0,"");
          if ((update_autoload()::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar28 = __cxa_guard_acquire(&update_autoload()::{lambda()#1}::operator()()::sname),
             iVar28 != 0)) {
            _scs_create((char *)&update_autoload()::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_autoload()::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_autoload()::{lambda()#1}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_e8);
          iVar28 = (int)(String *)&local_e8;
          TreeItem::add_button(iVar45,(Ref *)0x3,iVar28,false,(String *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          local_e0 = (long *)0x0;
          String::parse_latin1((String *)&local_e0,"");
          if ((update_autoload()::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar27 = __cxa_guard_acquire(&update_autoload()::{lambda()#2}::operator()()::sname),
             iVar27 != 0)) {
            _scs_create((char *)&update_autoload()::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_autoload()::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_autoload()::{lambda()#2}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_e8);
          TreeItem::add_button(iVar45,(Ref *)0x3,iVar28,true,(String *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          local_e0 = (long *)0x0;
          String::parse_latin1((String *)&local_e0,"");
          if ((update_autoload()::{lambda()#3}::operator()()::sname == '\0') &&
             (iVar27 = __cxa_guard_acquire(&update_autoload()::{lambda()#3}::operator()()::sname),
             iVar27 != 0)) {
            _scs_create((char *)&update_autoload()::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_autoload()::{lambda()#3}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_autoload()::{lambda()#3}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_e8);
          TreeItem::add_button(iVar45,(Ref *)0x3,iVar28,true,(String *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          local_e0 = (long *)0x0;
          String::parse_latin1((String *)&local_e0,"");
          if ((update_autoload()::{lambda()#4}::operator()()::sname == '\0') &&
             (iVar27 = __cxa_guard_acquire(&update_autoload()::{lambda()#4}::operator()()::sname),
             iVar27 != 0)) {
            _scs_create((char *)&update_autoload()::{lambda()#4}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_autoload()::{lambda()#4}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_autoload()::{lambda()#4}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_e8);
          TreeItem::add_button(iVar45,(Ref *)0x3,iVar28,true,(String *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          TreeItem::set_selectable(iVar45,true);
          CowData<char32_t>::_unref(pCVar5);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      }
      lVar35 = *(long *)(lVar35 + 0x30);
      puVar37 = local_a0;
    } while (lVar35 != 0);
    for (; puVar37 != (undefined8 *)0x0; puVar37 = (undefined8 *)*puVar37) {
LAB_00108df8:
      if ((*(char *)(puVar37 + 5) != '\0') && (0 < (int)ScriptServer::_language_count)) {
        iVar26 = 0;
        do {
          plVar32 = (long *)ScriptServer::get_language(iVar26);
          pcVar6 = *(code **)(*plVar32 + 0x248);
          StringName::StringName((StringName *)local_d8,(String *)(puVar37 + 3),false);
          if (pcVar6 != ScriptLanguage::remove_named_global_constant) {
            (*pcVar6)(plVar32);
          }
          if ((StringName::configured != '\0') && (local_d8._0_8_ != 0)) {
            StringName::unref();
          }
          iVar26 = iVar26 + 1;
        } while (iVar26 < (int)ScriptServer::_language_count);
      }
      lVar35 = puVar37[6];
      if (*(char *)((long)puVar37 + 0x29) == '\0') {
LAB_00108dda:
        if (lVar35 != 0) {
          Node::queue_free();
          puVar37[6] = 0;
        }
      }
      else {
        if (lVar35 != 0) {
          if (*(long *)(this + 0x240) == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          lVar35 = *(long *)(*(long *)(this + 0x240) + 0x368);
          this_01 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(this_01);
          *(long *)(this_01 + 0x28) = lVar35;
          *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
          *(undefined **)(this_01 + 0x20) = &_LC10;
          *(undefined ***)this_01 = &PTR_hash_001164a0;
          *(undefined8 *)(this_01 + 0x40) = 0;
          uVar31 = *(undefined8 *)(lVar35 + 0x60);
          *(undefined8 *)(this_01 + 0x10) = 0;
          *(undefined8 *)(this_01 + 0x30) = uVar31;
          *(code **)(this_01 + 0x38) = Node::remove_child;
          CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
          *(char **)(this_01 + 0x20) = "Node::remove_child";
          Callable::Callable((Callable *)local_d8,this_01);
          Variant::Variant((Variant *)local_78,(Object *)puVar37[6]);
          Variant::Variant((Variant *)local_60,0);
          local_88[0] = (Variant *)local_78;
          Callable::call_deferredp((Variant **)local_d8,(int)local_88);
          if (Variant::needs_deinit[local_60[0]] == '\0') {
            cVar23 = Variant::needs_deinit[local_78[0]];
          }
          else {
            Variant::_clear_internal();
            cVar23 = Variant::needs_deinit[local_78[0]];
          }
          if (cVar23 != '\0') {
            Variant::_clear_internal();
          }
          Callable::~Callable((Callable *)local_d8);
          lVar35 = puVar37[6];
          goto LAB_00108dda;
        }
        _err_print_error("update_autoload","editor/editor_autoload_settings.cpp",0x22c,
                         "Condition \"!info.node\" is true. Continuing.",0,0);
      }
    }
    if (local_150 == (undefined1 (*) [16])0x0) goto LAB_00109999;
    puVar37 = *(undefined8 **)*local_150;
    if (puVar37 != (undefined8 *)0x0) {
      local_170 = (undefined1 (*) [16])0x0;
      do {
        while( true ) {
          pSVar30 = (String *)*puVar37;
          pSVar34 = (String *)_create_autoload(this,pSVar30 + 8);
          *(String **)(pSVar30 + 0x18) = pSVar34;
          if (pSVar34 != (String *)0x0) break;
          _err_print_error("update_autoload","editor/editor_autoload_settings.cpp",0x23b,
                           "Condition \"!info->node\" is true. Continuing.",0,0);
LAB_00108f6a:
          puVar37 = (undefined8 *)puVar37[1];
          if (puVar37 == (undefined8 *)0x0) goto LAB_0010915e;
        }
        Node::set_name(pSVar34);
        (**(code **)(**(long **)(pSVar30 + 0x18) + 0x98))((Variant *)local_78);
        lVar35 = Variant::get_validated_object();
        if (lVar35 != 0) {
          pOVar36 = (Object *)__dynamic_cast(lVar35,&Object::typeinfo,&Script::typeinfo,0);
          if (pOVar36 == (Object *)0x0) {
            cVar23 = Variant::needs_deinit[local_78[0]];
            goto joined_r0x00109373;
          }
          cVar23 = RefCounted::reference();
          if (cVar23 == '\0') goto LAB_001090f0;
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          cVar23 = (**(code **)(*(long *)pOVar36 + 0x270))(pOVar36);
          if (cVar23 == '\0') {
            SVar3 = pSVar30[0x10];
            pSVar30[0x11] = (String)0x0;
            goto joined_r0x00109033;
          }
          pSVar30[0x11] = (String)0x1;
          if (local_170 == (undefined1 (*) [16])0x0) {
            local_170 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)local_170[1] = 0;
            *local_170 = (undefined1  [16])0x0;
          }
          puVar33 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
          uVar31 = *(undefined8 *)(pSVar30 + 0x18);
          puVar33[1] = 0;
          *puVar33 = uVar31;
          lVar35 = *(long *)(*local_170 + 8);
          puVar33[3] = local_170;
          puVar33[2] = lVar35;
          if (lVar35 != 0) {
            *(undefined8 **)(lVar35 + 8) = puVar33;
          }
          lVar35 = *(long *)*local_170;
          *(undefined8 **)(*local_170 + 8) = puVar33;
          if (lVar35 == 0) {
            *(undefined8 **)*local_170 = puVar33;
          }
          *(int *)local_170[1] = *(int *)local_170[1] + 1;
          if (pSVar30[0x10] != (String)0x0) {
            if ((int)ScriptServer::_language_count < 1) goto LAB_00108f5a;
            goto LAB_00109049;
          }
          if (pSVar30[0x11] == (String)0x0) goto LAB_00109119;
LAB_00108f5a:
          cVar23 = RefCounted::unreference();
          if ((cVar23 != '\0') && (cVar23 = predelete_handler(pOVar36), cVar23 != '\0')) {
            (**(code **)(*(long *)pOVar36 + 0x140))(pOVar36);
            Memory::free_static(pOVar36,false);
          }
          goto LAB_00108f6a;
        }
LAB_001090f0:
        cVar23 = Variant::needs_deinit[local_78[0]];
joined_r0x00109373:
        if (cVar23 != '\0') {
          Variant::_clear_internal();
        }
        pOVar36 = (Object *)0x0;
        SVar3 = pSVar30[0x10];
        pSVar30[0x11] = (String)0x0;
joined_r0x00109033:
        if (SVar3 == (String)0x0) {
LAB_00109119:
          pOVar7 = *(Object **)(pSVar30 + 0x18);
          cVar23 = predelete_handler(pOVar7);
          if (cVar23 != '\0') {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
          *(undefined8 *)(pSVar30 + 0x18) = 0;
        }
        else if (0 < (int)ScriptServer::_language_count) {
LAB_00109049:
          iVar26 = 0;
          do {
            plVar32 = (long *)ScriptServer::get_language(iVar26);
            pcVar6 = *(code **)(*plVar32 + 0x240);
            Variant::Variant((Variant *)local_78,*(Object **)(pSVar30 + 0x18));
            StringName::StringName((StringName *)local_d8,pSVar30,false);
            if (pcVar6 != ScriptLanguage::add_named_global_constant) {
              (*pcVar6)(plVar32,(StringName *)local_d8,(Variant *)local_78);
            }
            if ((StringName::configured != '\0') && (local_d8._0_8_ != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            iVar26 = iVar26 + 1;
          } while (iVar26 < (int)ScriptServer::_language_count);
          if ((pSVar30[0x11] == (String)0x0) && (pSVar30[0x10] == (String)0x0)) goto LAB_00109119;
        }
        if (pOVar36 != (Object *)0x0) goto LAB_00108f5a;
        puVar37 = (undefined8 *)puVar37[1];
      } while (puVar37 != (undefined8 *)0x0);
LAB_0010915e:
      if (local_170 != (undefined1 (*) [16])0x0) {
        for (puVar37 = *(undefined8 **)*local_170; puVar37 != (undefined8 *)0x0;
            puVar37 = (undefined8 *)puVar37[1]) {
          if (*(long *)(this + 0x240) == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          Node::add_child(*(undefined8 *)(*(long *)(this + 0x240) + 0x368),*puVar37,0,0);
        }
        goto LAB_001091b7;
      }
    }
  }
  local_170 = (undefined1 (*) [16])0x0;
LAB_001091b7:
  this[0xa28] = (EditorAutoloadSettings)0x0;
  if (local_170 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar8 = *(void **)*local_170;
        if (pvVar8 == (void *)0x0) {
          if (*(int *)local_170[1] == 0) {
            Memory::free_static(local_170,false);
          }
          else {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
          }
          goto LAB_00109222;
        }
        if (*(undefined1 (**) [16])((long)pvVar8 + 0x18) != local_170) break;
        lVar35 = *(long *)((long)pvVar8 + 8);
        lVar38 = *(long *)((long)pvVar8 + 0x10);
        *(long *)*local_170 = lVar35;
        if (pvVar8 == *(void **)(*local_170 + 8)) {
          *(long *)(*local_170 + 8) = lVar38;
        }
        if (lVar38 != 0) {
          *(long *)(lVar38 + 8) = lVar35;
          lVar35 = *(long *)((long)pvVar8 + 8);
        }
        if (lVar35 != 0) {
          *(long *)(lVar35 + 0x10) = lVar38;
        }
        Memory::free_static(pvVar8,false);
        pauVar39 = local_170 + 1;
        *(int *)*pauVar39 = *(int *)*pauVar39 + -1;
        if (*(int *)*pauVar39 == 0) goto LAB_00109215;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)local_170[1] != 0);
LAB_00109215:
    Memory::free_static(local_170,false);
  }
LAB_00109222:
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_108);
  if (local_150 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar8 = *(void **)*local_150;
        if (pvVar8 == (void *)0x0) {
          if (*(int *)local_150[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_00109291;
          }
          goto LAB_00109285;
        }
        if (*(undefined1 (**) [16])((long)pvVar8 + 0x18) != local_150) break;
        lVar35 = *(long *)((long)pvVar8 + 8);
        lVar38 = *(long *)((long)pvVar8 + 0x10);
        *(long *)*local_150 = lVar35;
        if (pvVar8 == *(void **)(*local_150 + 8)) {
          *(long *)(*local_150 + 8) = lVar38;
        }
        if (lVar38 != 0) {
          *(long *)(lVar38 + 8) = lVar35;
          lVar35 = *(long *)((long)pvVar8 + 8);
        }
        if (lVar35 != 0) {
          *(long *)(lVar35 + 0x10) = lVar38;
        }
        Memory::free_static(pvVar8,false);
        pauVar39 = local_150 + 1;
        *(int *)*pauVar39 = *(int *)*pauVar39 + -1;
        if (*(int *)*pauVar39 == 0) goto LAB_00109285;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)local_150[1] != 0);
LAB_00109285:
    Memory::free_static(local_150,false);
  }
LAB_00109291:
  uVar31 = local_b0._0_8_;
  if ((undefined8 *)local_b0._0_8_ != (undefined8 *)0x0) {
    uVar22 = local_b0._8_8_;
    if ((local_90._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_b0._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4) * 4);
      piVar43 = (int *)local_b0._8_8_;
      puVar37 = (undefined8 *)local_b0._0_8_;
      do {
        if (*piVar43 != 0) {
          pvVar8 = (void *)*puVar37;
          *piVar43 = 0;
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x20));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x10));
          Memory::free_static(pvVar8,false);
          *puVar37 = 0;
        }
        piVar43 = piVar43 + 1;
        puVar37 = puVar37 + 1;
      } while (piVar43 != piVar1);
    }
    Memory::free_static((void *)uVar31,false);
    Memory::free_static((void *)uVar22,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::update_autoload() */

void __thiscall EditorAutoloadSettings::update_autoload(EditorAutoloadSettings *this)

{
  if (this[0xa28] == (EditorAutoloadSettings)0x0) {
    update_autoload(this);
    return;
  }
  return;
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



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* ScriptLanguage::add_named_global_constant(StringName const&, Variant const&) */

void ScriptLanguage::add_named_global_constant(StringName *param_1,Variant *param_2)

{
  return;
}



/* ScriptLanguage::remove_named_global_constant(StringName const&) */

void ScriptLanguage::remove_named_global_constant(StringName *param_1)

{
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<EditorAutoloadSettings, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*> *this
          )

{
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Ref<Script>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>> *this)

{
  return;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool, String const&, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<bool,String_const&,String_const&>::_gen_argument_type
          (MethodBindTR<bool,String_const&,String_const&> *this,int param_1)

{
  return (-((uint)param_1 < 2) & 3U) + 1;
}



/* MethodBindTR<bool, String const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool,String_const&,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>::
get_argument_count(CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<EditorAutoloadSettings, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void>::get_argument_count
          (CallableCustomMethodPointer<EditorAutoloadSettings,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Node, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<Node,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Ref<Script>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>>::get_argument_count
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Ref<Script>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<EditorAutoloadSettings, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*> *this
          )

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void> *this)

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



/* EditorAutoloadSettings::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAutoloadSettings::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAutoloadSettings::_property_can_revertv(StringName const&) const */

undefined8 EditorAutoloadSettings::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116890;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116890;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001168f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001168f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116950;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116950;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&> *this)

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
      goto LAB_0010a6fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a6fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a6fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, Variant, Vector2 const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*> *this
          )

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
      goto LAB_0010a7fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a7fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a7fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Ref<Script> >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>>::get_object
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>> *this)

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
      goto LAB_0010a8fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a8fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a8fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Node, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*>::get_object
          (CallableCustomMethodPointer<Node,void,Node*> *this)

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
      goto LAB_0010a9fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a9fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a9fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>
           *this)

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
      goto LAB_0010aafd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aafd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aafd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<EditorAutoloadSettings, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>
           *this)

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
      goto LAB_0010abfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010abfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010abfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>
           *this)

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
      goto LAB_0010acfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010acfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010acfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void>::get_object
          (CallableCustomMethodPointer<EditorAutoloadSettings,void> *this)

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
      goto LAB_0010adfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010adfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010adfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011b010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011b010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorAutoloadSettings::_validate_propertyv(PropertyInfo&) const */

void EditorAutoloadSettings::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011b010 == Control::_validate_property) {
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
    uVar1 = (uint)CONCAT71(0x116c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x116c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorAutoloadSettings::is_class_ptr(void*) const */

ulong EditorAutoloadSettings::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x116b,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x116c,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x116c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x116c,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x116c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x116c,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorAutoloadSettings::_setv(StringName const&, Variant const&) */

undefined8 EditorAutoloadSettings::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011b018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011b018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011b018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b338) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011b020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b3a8) */
/* EditorAutoloadSettings::_getv(StringName const&, Variant&) const */

undefined8 EditorAutoloadSettings::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011b020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b418) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011b020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010bc90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bc90:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010bcf0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bcf0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010bd50;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bd50:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010bdc0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bdc0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011b028 != Container::_notification) {
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
  if ((code *)PTR__notification_0011b028 == Container::_notification) {
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
    if ((code *)PTR__notification_0011b028 != Container::_notification) {
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
  if ((code *)PTR__notification_0011b028 == Container::_notification) {
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



/* EditorAutoloadSettings::_get_class_namev() const */

undefined8 * EditorAutoloadSettings::_get_class_namev(void)

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
LAB_0010c0d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c0d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAutoloadSettings");
      goto LAB_0010c13e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAutoloadSettings");
LAB_0010c13e:
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
LAB_0010c1c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c1c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010c22e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010c22e:
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
LAB_0010c2b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c2b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010c31e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010c31e:
  return &_get_class_namev()::_class_name_static;
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010c510) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011b028 != Container::_notification) {
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
  if ((code *)PTR__notification_0011b028 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* void EditorUndoRedoManager::add_do_method<String, int>(Object*, StringName const&, String, int)
    */

void __thiscall
EditorUndoRedoManager::add_do_method<String,int>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4,
          int param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_4);
  Variant::Variant(local_70,param_5);
  pVVar2 = (Variant *)local_40;
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)&local_a8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_do_method<String>(Object*, StringName const&, String) */

void __thiscall
EditorUndoRedoManager::add_do_method<String>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)local_78);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void EditorUndoRedoManager::add_undo_method<String, int>(Object*, StringName const&, String, int)
    */

void __thiscall
EditorUndoRedoManager::add_undo_method<String,int>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4,
          int param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_4);
  Variant::Variant(local_70,param_5);
  pVVar2 = (Variant *)local_40;
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,param_2,(int)&local_a8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<String>(Object*, StringName const&, String) */

void __thiscall
EditorUndoRedoManager::add_undo_method<String>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,param_2,(int)local_78);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_do_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_do_methodp((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_undo_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<EditorAutoloadSettings, String
   const&>(EditorAutoloadSettings*, char const*, void (EditorAutoloadSettings::*)(String const&)) */

EditorAutoloadSettings *
create_custom_callable_function_pointer<EditorAutoloadSettings,String_const&>
          (EditorAutoloadSettings *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00116530;
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



/* Callable create_custom_callable_function_pointer<EditorAutoloadSettings>(EditorAutoloadSettings*,
   char const*, void (EditorAutoloadSettings::*)()) */

EditorAutoloadSettings *
create_custom_callable_function_pointer<EditorAutoloadSettings>
          (EditorAutoloadSettings *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001165c0;
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



/* Callable Callable::bind<Tree*>(Tree*) const */

Tree * Callable::bind<Tree*>(Tree *param_1)

{
  char cVar1;
  Object *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  PropertyInfo *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (PropertyInfo *)*plVar3;
    if (this_00 == (PropertyInfo *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x40) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x30);
      lVar1 = *(long *)(this_00 + 0x38);
      *plVar3 = lVar2;
      if (this_00 == (PropertyInfo *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x30) = lVar2;
        lVar2 = *(long *)(this_00 + 0x30);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x38) = lVar1;
      }
      PropertyInfo::~PropertyInfo(this_00);
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



/* WARNING: Removing unreachable block (ram,0x0010cf98) */
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



/* WARNING: Removing unreachable block (ram,0x0010d248) */
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* EditorAutoloadSettings::get_class() const */

void EditorAutoloadSettings::get_class(void)

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
LAB_0010d797:
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
      goto LAB_0010d797;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,undefined4 param_4,
          CowData *param_5,undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
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



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_38 == *(long *)pVVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010dc40;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010dadd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010dc40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == *plVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010de10;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010dca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010de10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<bool,String_const&,String_const&>::validated_call
          (MethodBindTR<bool,String_const&,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_38 == *plVar3) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_0010de77;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  param_3[8] = VVar1;
LAB_0010de77:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool,String_const&,String_const&>::ptrcall
          (MethodBindTR<bool,String_const&,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_38 == *plVar3) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e02b;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  *(undefined1 *)param_3 = uVar1;
LAB_0010e02b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e2c0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010e2c0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_38 == *(long *)pVVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e62e;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e4e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e62e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == *plVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e7de;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e7de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void>::call
          (CallableCustomMethodPointer<EditorAutoloadSettings,void> *this,Variant **param_1,
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
      goto LAB_0010e9cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010e9cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ea80;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010e9cf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC37,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ea80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ecf0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0010ecf0;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC42;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC43;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC44;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010ec78:
          uVar3 = _LC45;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010ec78;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ecc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0010edda;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010ecf0:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC37,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010edda:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>::
call(CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_68[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010eea5;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010eea5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_0010ef2f:
          uVar3 = _LC46;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0010ef2f;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC48;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar5);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010eea5;
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
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"\', can\'t call method.");
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+(local_68,(String *)local_78);
  _err_print_error(&_LC37,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010eea5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<EditorAutoloadSettings, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>::
call(CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_a0 [8];
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_88[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010f214;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010f214;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_0010f29c:
          uVar3 = _LC46;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0010f29c;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC48;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar11 = (bool)(*pcVar10)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar5);
        Variant::Variant((Variant *)local_78,bVar11);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010f214;
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
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"\', can\'t call method.");
  uitos((ulong)local_a0);
  operator+((char *)local_98,(String *)"Invalid Object id \'");
  String::operator+(local_88,(String *)local_98);
  _err_print_error(&_LC37,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_88,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_0010f214:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, Variant, Vector2 const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*> *this
          ,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_68[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010f5ac;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010f5ac;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_0010f62c:
          uVar3 = _LC49;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0010f62c;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC48;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)(local_58,(long *)(lVar1 + lVar2),&local_60,pOVar5);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_58[0];
        *(undefined8 *)(param_3 + 8) = local_50;
        *(undefined8 *)(param_3 + 0x10) = uStack_48;
        goto LAB_0010f5ac;
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
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"\', can\'t call method.");
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+(local_68,(String *)local_78);
  _err_print_error(&_LC37,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010f5ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::call
          (CallableCustomMethodPointer<Node,void,Node*> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010fa55;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0010fa55;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010f960:
          uVar3 = _LC45;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_0010f960;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f9c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0010fb06;
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
LAB_0010fa55:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC37,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010fb06:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&>::call
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&> *this,
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
            uVar3 = _LC50;
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
        goto LAB_0010fbde;
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
  _err_print_error(&_LC37,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010fbde:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<bool, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<bool,String_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_60,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_60 == *plVar9) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = 0;
      String::parse_latin1
                ((String *)&local_68,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_60,(String *)&local_68,&local_70);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_60,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ffc8;
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_00110008;
      pVVar12 = *(Variant **)param_4;
LAB_0011001d:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar7) {
LAB_00110008:
        uVar8 = 4;
        goto LAB_0010fff5;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_001100f0;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011001d;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
      if (lVar2 <= lVar10) {
LAB_001100f0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,4);
    uVar4 = _LC56;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC50;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_60);
    bVar6 = (bool)(*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_60,
                                     (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar8 = 3;
LAB_0010fff5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0010ffc8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_38 == *plVar7) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_00110350;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001103a0;
LAB_00110390:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001103a0:
        uVar6 = 4;
        goto LAB_00110345;
      }
      if (in_R8D == 1) goto LAB_00110390;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC50;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_38);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  }
  else {
    uVar6 = 3;
LAB_00110345:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00110350:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00110643;
  }
  cVar4 = String::operator==(param_1,"CanvasItem");
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
      if (cVar4 != '\0') goto LAB_00110643;
    }
    cVar4 = String::operator==(param_1,"Node");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Object::is_class((Object *)this,param_1);
        return uVar5;
      }
      goto LAB_0011074e;
    }
  }
LAB_00110643:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011074e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::EditorAutoloadSettings() [clone .cold] */

void __thiscall EditorAutoloadSettings::EditorAutoloadSettings(EditorAutoloadSettings *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAutoloadSettings::_create_autoload(String const&) [clone .cold] */

void EditorAutoloadSettings::_create_autoload(String *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAutoloadSettings::init_autoloads() [clone .cold] */

void EditorAutoloadSettings::init_autoloads(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001107b8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAutoloadSettings::update_autoload() [clone .part.0] [clone .cold] */

void EditorAutoloadSettings::update_autoload(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
              if ((code *)PTR__bind_methods_0011b040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011b030 !=
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
      if ((code *)PTR__bind_methods_0011b038 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011b040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011b030 !=
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
      if ((code *)PTR__bind_methods_0011b038 != Container::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_001114bf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001114bf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001115f3;
  }
  cVar4 = String::operator==(param_1,"Container");
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
      if (cVar4 != '\0') goto LAB_001115f3;
    }
    cVar4 = String::operator==(param_1,"Control");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar5;
      }
      goto LAB_001116fe;
    }
  }
LAB_001115f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001116fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011180b;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Container::is_class((Container *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011180b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::is_class(String const&) const */

undefined8 __thiscall EditorAutoloadSettings::is_class(EditorAutoloadSettings *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00111933;
  }
  cVar4 = String::operator==(param_1,"EditorAutoloadSettings");
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
      if (cVar4 != '\0') goto LAB_00111933;
    }
    cVar4 = String::operator==(param_1,"VBoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar5;
      }
      goto LAB_00111a3e;
    }
  }
LAB_00111933:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111a3e:
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
    if (cVar4 != '\0') goto LAB_00111b23;
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
      if (cVar4 != '\0') goto LAB_00111b23;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00111c2e;
    }
  }
LAB_00111b23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111c2e:
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
    if (cVar4 != '\0') goto LAB_00111d13;
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
      if (cVar4 != '\0') goto LAB_00111d13;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00111e1e;
    }
  }
LAB_00111d13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111e1e:
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
  local_78 = &_LC59;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC59;
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
  if ((code *)PTR__get_property_list_0011b048 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0011b050 != CanvasItem::_get_property_list) {
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



/* EditorAutoloadSettings::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorAutoloadSettings::_get_property_listv(EditorAutoloadSettings *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorAutoloadSettings";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorAutoloadSettings";
  local_90 = 0;
  local_70 = 0x16;
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
  StringName::StringName((StringName *)&local_78,"EditorAutoloadSettings",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
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



/* EditorAutoloadSettings::_notificationv(int, bool) */

void __thiscall
EditorAutoloadSettings::_notificationv(EditorAutoloadSettings *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* Ref<Script>::unref() */

void __thiscall Ref<Script>::unref(Ref<Script> *this)

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



/* Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Script>::operator=(Ref<Script> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Ref<Script> >::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>>::call
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_38 >> 8;
      local_38 = (Object *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_38 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
            uVar4 = _LC45;
            if (cVar6 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            local_38 = (Object *)0x0;
            Ref<Script>::operator=((Ref<Script> *)&local_38,*param_1);
            (*pcVar9)((long *)(lVar1 + lVar2));
            if (((local_38 != (Object *)0x0) &&
                (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
               (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00112f5e;
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
  String::operator+((String *)&local_38,(String *)local_48);
  _err_print_error(&_LC37,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Ref<Script> *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00112f5e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HashMap<String, EditorAutoloadSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorAutoloadSettings::AutoloadInfo> > >::_lookup_pos(String const&, unsigned int&) const */

undefined8 __thiscall
HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
::_lookup_pos(HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
              *this,String *param_1,uint *param_2)

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
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* MethodBind* create_method_bind<EditorAutoloadSettings>(void (EditorAutoloadSettings::*)()) */

MethodBind * create_method_bind<EditorAutoloadSettings>(_func_void *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00116890;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorAutoloadSettings";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorAutoloadSettings, bool, String const&, String const&>(bool
   (EditorAutoloadSettings::*)(String const&, String const&)) */

MethodBind *
create_method_bind<EditorAutoloadSettings,bool,String_const&,String_const&>
          (_func_bool_String_ptr_String_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool_String_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001168f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "EditorAutoloadSettings";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorAutoloadSettings, String const&>(void
   (EditorAutoloadSettings::*)(String const&)) */

MethodBind *
create_method_bind<EditorAutoloadSettings,String_const&>(_func_void_String_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116950;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorAutoloadSettings";
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
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



/* EditorAutoloadSettings::_initialize_classv() */

void EditorAutoloadSettings::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
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
                if ((code *)PTR__bind_methods_0011b040 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_0011b030 !=
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
        if ((code *)PTR__bind_methods_0011b038 != Container::_bind_methods) {
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"VBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorAutoloadSettings");
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
LAB_00114180:
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
  if (lVar9 == 0) goto LAB_00114180;
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
    goto LAB_001141d6;
  }
  if (lVar9 == lVar5) {
LAB_001140fb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_001141d6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011406f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_001140fb;
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
LAB_0011406f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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



/* HashMap<String, EditorAutoloadSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorAutoloadSettings::AutoloadInfo> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
::_resize_and_rehash
          (HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, EditorAutoloadSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorAutoloadSettings::AutoloadInfo> > >::insert(String const&,
   EditorAutoloadSettings::AutoloadInfo const&, bool) */

String * HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
         ::insert(String *param_1,AutoloadInfo *param_2,bool param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *plVar16;
  char cVar17;
  uint uVar18;
  undefined8 uVar19;
  void *__s_00;
  CowData *in_RCX;
  int iVar20;
  undefined7 in_register_00000011;
  String *pSVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  char in_R8B;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  uint local_c8;
  long *local_b0;
  uint local_7c;
  undefined1 local_78 [16];
  long local_68;
  long local_60;
  long local_58;
  undefined2 local_50;
  undefined4 local_4c;
  long local_48;
  long local_40;
  
  pSVar21 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar29 = (ulong)uVar18;
    uVar24 = uVar29 * 4;
    uVar19 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 0x10) = uVar19;
    uVar26 = uVar29 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar26,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar18 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar26 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar29 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar26);
      }
    }
  }
  local_7c = 0;
  cVar17 = _lookup_pos((HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
                        *)param_2,pSVar21,&local_7c);
  if (cVar17 == '\0') {
    if ((float)uVar18 * __LC164 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_b0 = (long *)0x0;
        goto LAB_00114862;
      }
      _resize_and_rehash((HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
    }
    local_68 = 0;
    local_78 = (undefined1  [16])0x0;
    if (*(long *)pSVar21 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pSVar21);
    }
    local_60 = 0;
    if (*(long *)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,in_RCX);
    }
    local_58 = 0;
    lVar27 = *(long *)(in_RCX + 8);
    if (*(long *)(in_RCX + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,in_RCX + 8);
      lVar27 = local_58;
    }
    uVar2 = *(undefined2 *)(in_RCX + 0x10);
    uVar3 = *(undefined4 *)(in_RCX + 0x14);
    lVar5 = *(long *)(in_RCX + 0x18);
    local_50 = uVar2;
    local_4c = uVar3;
    local_48 = lVar5;
    local_b0 = (long *)operator_new(0x38,"");
    local_b0[2] = 0;
    *local_b0 = local_78._0_8_;
    local_b0[1] = local_78._8_8_;
    if (local_68 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 2),(CowData *)&local_68);
    }
    local_b0[3] = 0;
    if (local_60 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 3),(CowData *)&local_60);
    }
    local_b0[4] = 0;
    if (lVar27 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 4),(CowData *)&local_58);
    }
    *(undefined2 *)(local_b0 + 5) = uVar2;
    *(undefined4 *)((long)local_b0 + 0x2c) = uVar3;
    local_b0[6] = lVar5;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    puVar6 = *(undefined8 **)(param_2 + 0x20);
    if (puVar6 == (undefined8 *)0x0) {
      *(long **)(param_2 + 0x18) = local_b0;
      *(long **)(param_2 + 0x20) = local_b0;
    }
    else if (in_R8B == '\0') {
      *puVar6 = local_b0;
      local_b0[1] = (long)puVar6;
      *(long **)(param_2 + 0x20) = local_b0;
    }
    else {
      lVar27 = *(long *)(param_2 + 0x18);
      *(long **)(lVar27 + 8) = local_b0;
      *local_b0 = lVar27;
      *(long **)(param_2 + 0x18) = local_b0;
    }
    uVar18 = String::hash();
    lVar27 = *(long *)(param_2 + 0x10);
    uVar24 = 1;
    if (uVar18 != 0) {
      uVar24 = (ulong)uVar18;
    }
    uVar25 = 0;
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    uVar23 = (uint)uVar24;
    uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    uVar26 = CONCAT44(0,uVar18);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar24 * lVar5;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar26;
    lVar22 = SUB168(auVar8 * auVar12,8);
    lVar7 = *(long *)(param_2 + 8);
    puVar1 = (uint *)(lVar27 + lVar22 * 4);
    iVar20 = SUB164(auVar8 * auVar12,8);
    uVar4 = *puVar1;
    plVar16 = local_b0;
    while (uVar4 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar4 * lVar5;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar26;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((iVar20 + uVar18) - SUB164(auVar9 * auVar13,8)) * lVar5;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar26;
      local_c8 = SUB164(auVar10 * auVar14,8);
      plVar28 = plVar16;
      if (local_c8 < uVar25) {
        *puVar1 = (uint)uVar24;
        uVar24 = (ulong)uVar4;
        puVar6 = (undefined8 *)(lVar7 + lVar22 * 8);
        plVar28 = (long *)*puVar6;
        *puVar6 = plVar16;
        uVar25 = local_c8;
      }
      uVar23 = (uint)uVar24;
      uVar25 = uVar25 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar20 + 1) * lVar5;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar26;
      lVar22 = SUB168(auVar11 * auVar15,8);
      puVar1 = (uint *)(lVar27 + lVar22 * 4);
      iVar20 = SUB164(auVar11 * auVar15,8);
      plVar16 = plVar28;
      uVar4 = *puVar1;
    }
    *(long **)(lVar7 + lVar22 * 8) = plVar16;
    *puVar1 = uVar23;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    uVar24 = (ulong)local_7c;
    lVar27 = *(long *)(*(long *)(param_2 + 8) + uVar24 * 8);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar27 + 0x18),in_RCX);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar27 + 0x20),in_RCX + 8);
    *(undefined2 *)(lVar27 + 0x28) = *(undefined2 *)(in_RCX + 0x10);
    *(undefined4 *)(lVar27 + 0x2c) = *(undefined4 *)(in_RCX + 0x14);
    *(undefined8 *)(lVar27 + 0x30) = *(undefined8 *)(in_RCX + 0x18);
    local_b0 = *(long **)(*(long *)(param_2 + 8) + uVar24 * 8);
  }
LAB_00114862:
  *(long **)param_1 = local_b0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, EditorAutoloadSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorAutoloadSettings::AutoloadInfo> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
::operator[](HashMap<String,EditorAutoloadSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorAutoloadSettings::AutoloadInfo>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  void *__s_00;
  ulong uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  long in_FS_OFFSET;
  uint local_a0;
  uint local_9c;
  CowData<char32_t> local_98 [16];
  undefined2 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78 [16];
  long local_68;
  CowData<char32_t> local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  cVar14 = _lookup_pos(this,param_1,&local_a0);
  if (cVar14 != '\0') {
    pauVar17 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_a0 * 8);
    goto LAB_00114cf4;
  }
  local_88 = 0;
  local_84 = 0;
  uVar16 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_80 = 0;
  local_98[0] = (CowData<char32_t>)0x0;
  local_98[1] = (CowData<char32_t>)0x0;
  local_98[2] = (CowData<char32_t>)0x0;
  local_98[3] = (CowData<char32_t>)0x0;
  local_98[4] = (CowData<char32_t>)0x0;
  local_98[5] = (CowData<char32_t>)0x0;
  local_98[6] = (CowData<char32_t>)0x0;
  local_98[7] = (CowData<char32_t>)0x0;
  local_98[8] = (CowData<char32_t>)0x0;
  local_98[9] = (CowData<char32_t>)0x0;
  local_98[10] = (CowData<char32_t>)0x0;
  local_98[0xb] = (CowData<char32_t>)0x0;
  local_98[0xc] = (CowData<char32_t>)0x0;
  local_98[0xd] = (CowData<char32_t>)0x0;
  local_98[0xe] = (CowData<char32_t>)0x0;
  local_98[0xf] = (CowData<char32_t>)0x0;
  if (*(long *)(this + 8) == 0) {
    uVar26 = (ulong)uVar16;
    uVar19 = uVar26 * 4;
    uVar24 = uVar26 * 8;
    uVar18 = Memory::alloc_static(uVar19,false);
    *(undefined8 *)(this + 0x10) = uVar18;
    __s_00 = (void *)Memory::alloc_static(uVar24,false);
    *(void **)(this + 8) = __s_00;
    if (uVar16 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar24)) && (__s_00 < (void *)((long)__s + uVar19))) {
        uVar19 = 0;
        do {
          *(undefined4 *)((long)__s + uVar19 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar19 * 8) = 0;
          uVar19 = uVar19 + 1;
        } while (uVar26 != uVar19);
      }
      else {
        memset(__s,0,uVar19);
        memset(__s_00,0,uVar24);
      }
    }
  }
  local_9c = 0;
  cVar14 = _lookup_pos(this,param_1,&local_9c);
  if (cVar14 == '\0') {
    if ((float)uVar16 * __LC164 < (float)(*(int *)(this + 0x2c) + 1)) {
      if (*(int *)(this + 0x28) == 0x1c) {
        pauVar17 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_00114ce0;
      }
      _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    }
    local_68 = 0;
    local_78 = (undefined1  [16])0x0;
    if (*(long *)param_1 == 0) {
      local_60[0] = (CowData<char32_t>)0x0;
      local_60[1] = (CowData<char32_t>)0x0;
      local_60[2] = (CowData<char32_t>)0x0;
      local_60[3] = (CowData<char32_t>)0x0;
      local_60[4] = (CowData<char32_t>)0x0;
      local_60[5] = (CowData<char32_t>)0x0;
      local_60[6] = (CowData<char32_t>)0x0;
      local_60[7] = (CowData<char32_t>)0x0;
      local_60[8] = (CowData<char32_t>)0x0;
      local_60[9] = (CowData<char32_t>)0x0;
      local_60[10] = (CowData<char32_t>)0x0;
      local_60[0xb] = (CowData<char32_t>)0x0;
      local_60[0xc] = (CowData<char32_t>)0x0;
      local_60[0xd] = (CowData<char32_t>)0x0;
      local_60[0xe] = (CowData<char32_t>)0x0;
      local_60[0xf] = (CowData<char32_t>)0x0;
      local_50 = 0;
      local_48 = 0;
      pauVar17 = (undefined1 (*) [16])operator_new(0x38,"");
      *(undefined8 *)pauVar17[1] = 0;
      *pauVar17 = (undefined1  [16])0x0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
      lVar2 = local_68;
      uVar18 = local_78._0_8_;
      uVar13 = local_78._8_8_;
      local_60[0] = (CowData<char32_t>)0x0;
      local_60[1] = (CowData<char32_t>)0x0;
      local_60[2] = (CowData<char32_t>)0x0;
      local_60[3] = (CowData<char32_t>)0x0;
      local_60[4] = (CowData<char32_t>)0x0;
      local_60[5] = (CowData<char32_t>)0x0;
      local_60[6] = (CowData<char32_t>)0x0;
      local_60[7] = (CowData<char32_t>)0x0;
      local_60[8] = (CowData<char32_t>)0x0;
      local_60[9] = (CowData<char32_t>)0x0;
      local_60[10] = (CowData<char32_t>)0x0;
      local_60[0xb] = (CowData<char32_t>)0x0;
      local_60[0xc] = (CowData<char32_t>)0x0;
      local_60[0xd] = (CowData<char32_t>)0x0;
      local_60[0xe] = (CowData<char32_t>)0x0;
      local_60[0xf] = (CowData<char32_t>)0x0;
      local_50 = 0;
      local_48 = 0;
      pauVar17 = (undefined1 (*) [16])operator_new(0x38,"");
      *(undefined8 *)pauVar17[1] = 0;
      *(undefined8 *)*pauVar17 = uVar18;
      *(undefined8 *)(*pauVar17 + 8) = uVar13;
      if (lVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar17 + 1),(CowData *)&local_68);
      }
    }
    *(undefined4 *)(pauVar17[2] + 0xc) = 0;
    *(undefined2 *)(pauVar17[2] + 8) = 0;
    *(undefined8 *)pauVar17[3] = 0;
    *(undefined1 (*) [16])(pauVar17[1] + 8) = (undefined1  [16])0x0;
    CowData<char32_t>::_unref(local_60 + 8);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    puVar1 = *(undefined8 **)(this + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar17;
    }
    else {
      *puVar1 = pauVar17;
      *(undefined8 **)(*pauVar17 + 8) = puVar1;
    }
    *(undefined1 (**) [16])(this + 0x20) = pauVar17;
    uVar15 = String::hash();
    lVar2 = *(long *)(this + 0x10);
    uVar16 = 1;
    if (uVar15 != 0) {
      uVar16 = uVar15;
    }
    uVar24 = (ulong)uVar16;
    uVar15 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar19 = CONCAT44(0,uVar15);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar24 * lVar3;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar19;
    lVar21 = SUB168(auVar5 * auVar9,8);
    lVar4 = *(long *)(this + 8);
    puVar25 = (uint *)(lVar2 + lVar21 * 4);
    iVar20 = SUB164(auVar5 * auVar9,8);
    uVar22 = *puVar25;
    pauVar28 = pauVar17;
    if (uVar22 != 0) {
      uVar23 = 0;
      pauVar27 = pauVar17;
      do {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)uVar22 * lVar3;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar19;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)((iVar20 + uVar15) - SUB164(auVar6 * auVar10,8)) * lVar3;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar19;
        uVar16 = SUB164(auVar7 * auVar11,8);
        pauVar28 = pauVar27;
        if (uVar16 < uVar23) {
          *puVar25 = (uint)uVar24;
          uVar24 = (ulong)uVar22;
          puVar1 = (undefined8 *)(lVar4 + lVar21 * 8);
          pauVar28 = (undefined1 (*) [16])*puVar1;
          *puVar1 = pauVar27;
          uVar23 = uVar16;
        }
        uVar16 = (uint)uVar24;
        uVar23 = uVar23 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(iVar20 + 1) * lVar3;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar19;
        lVar21 = SUB168(auVar8 * auVar12,8);
        puVar25 = (uint *)(lVar2 + lVar21 * 4);
        iVar20 = SUB164(auVar8 * auVar12,8);
        uVar22 = *puVar25;
        pauVar27 = pauVar28;
      } while (uVar22 != 0);
    }
    *(undefined1 (**) [16])(lVar4 + lVar21 * 8) = pauVar28;
    *puVar25 = uVar16;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar19 = (ulong)local_9c;
    lVar2 = *(long *)(*(long *)(this + 8) + uVar19 * 8);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar2 + 0x18),(CowData *)local_98);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar2 + 0x20),(CowData *)(local_98 + 8));
    lVar3 = *(long *)(this + 8);
    *(undefined4 *)(lVar2 + 0x2c) = 0;
    *(undefined2 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    pauVar17 = *(undefined1 (**) [16])(lVar3 + uVar19 * 8);
  }
LAB_00114ce0:
  CowData<char32_t>::_unref(local_98 + 8);
  CowData<char32_t>::_unref(local_98);
LAB_00114cf4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar17[1] + 8;
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_78,4,(CowData<char32_t> *)&local_90,0,(String *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78[0];
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, String const&, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<bool,String_const&,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  undefined8 local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar4 = local_48;
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    local_60 = (undefined1  [16])0x0;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar2;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    local_48 = 0;
    *(undefined8 *)(pPVar5 + 0x20) = uVar4;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  else {
    local_70 = 0;
    local_68 = &_LC10;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._0_8_;
    local_60 = auVar1 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo(pPVar5,1,(CowData<char32_t> *)&local_68,0,&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAutoloadSettings::_notification(int) */

void EditorAutoloadSettings::_GLOBAL__sub_I__notification(void)

{
  undefined8 uStack_8;
  
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
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
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
  if (TabBar::base_property_helper != '\0') {
    return;
  }
  TabBar::base_property_helper = 1;
  TabBar::base_property_helper._64_8_ = 0;
  TabBar::base_property_helper._56_8_ = 2;
  TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle,
               uStack_8);
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
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<bool,String_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Ref<Script>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Ref<Script>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAutoloadSettings, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAutoloadSettings, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAutoloadSettings, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,Variant,Vector2_const&,Control*> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<EditorAutoloadSettings, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorAutoloadSettings,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAutoloadSettings, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAutoloadSettings,void,Object*,int,int,MouseButton>
           *this)

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


