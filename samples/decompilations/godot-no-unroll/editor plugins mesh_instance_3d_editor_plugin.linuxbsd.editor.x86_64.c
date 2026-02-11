
/* MeshInstance3DEditorPlugin::make_visible(bool) */

void __thiscall
MeshInstance3DEditorPlugin::make_visible(MeshInstance3DEditorPlugin *this,bool param_1)

{
  if (param_1) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  *(undefined8 *)(*(long *)(this + 0x660) + 0x9c8) = 0;
  return;
}



/* MeshInstance3DEditor::_notification(int) [clone .part.0] */

void MeshInstance3DEditor::_notification(int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pRVar1 = *(Ref **)(CONCAT44(in_register_0000003c,param_1) + 0x9d0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeshInstance3DEditor::_debug_uv_draw() [clone .part.0] */

void __thiscall MeshInstance3DEditor::_debug_uv_draw(MeshInstance3DEditor *this)

{
  Rect2 *pRVar1;
  Vector2 *pVVar2;
  Vector *pVVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  Color local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::set_clip_contents(SUB81(*(undefined8 *)(this + 0xa18),0));
  pRVar1 = *(Rect2 **)(this + 0xa18);
  if (_debug_uv_draw()::{lambda()#1}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_debug_uv_draw()::{lambda()#1}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_debug_uv_draw()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_debug_uv_draw()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_debug_uv_draw()::{lambda()#1}::operator()()::sname);
    }
  }
  local_58 = Control::get_theme_color
                       ((StringName *)this,
                        (StringName *)&_debug_uv_draw()::{lambda()#1}::operator()()::sname);
  uStack_60 = Control::get_size();
  local_68 = 0;
  bVar5 = SUB81(local_58,0);
  CanvasItem::draw_rect(pRVar1,(Color *)&local_68,bVar5,(float)_LC2,true);
  pRVar1 = *(Rect2 **)(this + 0xa18);
  fVar7 = (float)EditorScale::get_scale();
  fVar7 = roundf(fVar7);
  local_68 = CONCAT44(_LC6._4_4_,(undefined4)_LC6);
  uStack_60 = CONCAT44(_UNK_0011268c,_UNK_00112688);
  if (_debug_uv_draw()::{lambda()#2}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_debug_uv_draw()::{lambda()#2}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_debug_uv_draw()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_debug_uv_draw()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_debug_uv_draw()::{lambda()#2}::operator()()::sname);
    }
  }
  local_78 = (Color  [16])
             Control::get_theme_color
                       ((StringName *)this,
                        (StringName *)&_debug_uv_draw()::{lambda()#2}::operator()()::sname);
  auVar13 = Color::operator*(local_78,(Color *)&local_68);
  local_58 = auVar13;
  uVar10 = Control::get_size();
  local_88 = CONCAT44(_LC6._4_4_,(undefined4)_LC6);
  iVar6 = 1;
  local_80 = CONCAT44(_LC2._4_4_ + (float)((ulong)uVar10 >> 0x20),(float)_LC2 + (float)uVar10);
  CanvasItem::draw_rect(pRVar1,(Color *)&local_88,bVar5,fVar7,false);
  do {
    pVVar2 = *(Vector2 **)(this + 0xa18);
    fVar7 = (float)EditorScale::get_scale();
    fVar7 = roundf(fVar7);
    local_68 = CONCAT44(_LC6._4_4_,(undefined4)_LC6);
    uStack_60 = CONCAT44(_UNK_0011268c,_UNK_00112688);
    if (_debug_uv_draw()::{lambda()#3}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_debug_uv_draw()::{lambda()#3}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_debug_uv_draw()::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_debug_uv_draw()::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_debug_uv_draw()::{lambda()#3}::operator()()::sname);
      }
    }
    auVar13 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_debug_uv_draw()::{lambda()#3}::operator()()::sname);
    local_78 = (Color  [16])auVar13;
    auVar13 = Color::operator*(local_78,(Color *)&local_68);
    local_58 = auVar13;
    Control::get_size();
    fVar8 = (float)Control::get_size();
    dVar11 = (double)iVar6;
    iVar6 = iVar6 + 1;
    local_90 = CONCAT44(extraout_XMM0_Db,(float)((double)fVar8 * __LC7 * dVar11));
    fVar8 = (float)Control::get_size();
    local_88 = (ulong)(uint)(float)((double)fVar8 * __LC7 * dVar11);
    CanvasItem::draw_line(pVVar2,(Color *)&local_88,(Color *)&local_90,fVar7,bVar5);
  } while (iVar6 != 8);
  iVar6 = 1;
  do {
    pVVar2 = *(Vector2 **)(this + 0xa18);
    fVar7 = (float)EditorScale::get_scale();
    fVar7 = roundf(fVar7);
    local_68 = CONCAT44(_LC6._4_4_,(undefined4)_LC6);
    uStack_60 = CONCAT44(_UNK_0011268c,_UNK_00112688);
    if (_debug_uv_draw()::{lambda()#4}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_debug_uv_draw()::{lambda()#4}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_debug_uv_draw()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_debug_uv_draw()::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_debug_uv_draw()::{lambda()#4}::operator()()::sname);
      }
    }
    auVar13 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_debug_uv_draw()::{lambda()#4}::operator()()::sname);
    local_78 = (Color  [16])auVar13;
    auVar13 = Color::operator*(local_78,(Color *)&local_68);
    local_58 = auVar13;
    Control::get_size();
    dVar11 = (double)extraout_XMM0_Db_00 * __LC7;
    dVar12 = (double)iVar6;
    iVar6 = iVar6 + 1;
    uVar9 = Control::get_size();
    local_90 = CONCAT44((float)(dVar11 * dVar12),uVar9);
    Control::get_size();
    local_88 = (ulong)(uint)(float)((double)extraout_XMM0_Db_01 * __LC7 * dVar12) << 0x20;
    CanvasItem::draw_line(pVVar2,(Color *)&local_88,(Color *)&local_90,fVar7,bVar5);
  } while (iVar6 != 8);
  pVVar2 = *(Vector2 **)(this + 0xa18);
  uVar10 = Control::get_size();
  local_68 = 0;
  local_58._0_8_ = uVar10;
  CanvasItem::draw_set_transform(pVVar2,0.0,(Color *)&local_68);
  pVVar3 = *(Vector **)(this + 0xa18);
  fVar7 = (float)EditorScale::get_scale();
  fVar7 = roundf(fVar7);
  fVar8 = (float)Control::get_size();
  local_68 = __LC9;
  uStack_60 = _UNK_00112698;
  if (_debug_uv_draw()::{lambda()#5}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_debug_uv_draw()::{lambda()#5}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_debug_uv_draw()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_debug_uv_draw()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_debug_uv_draw()::{lambda()#5}::operator()()::sname);
    }
  }
  auVar13 = Control::get_theme_color
                      ((StringName *)this,
                       (StringName *)&_debug_uv_draw()::{lambda()#5}::operator()()::sname);
  local_78 = (Color  [16])auVar13;
  local_58 = Color::operator*(local_78,(Color *)&local_68);
  CanvasItem::draw_multiline(pVVar3,(Color *)(this + 0xa20),fVar7 / fVar8,bVar5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance3DEditor::_debug_uv_draw() */

void __thiscall MeshInstance3DEditor::_debug_uv_draw(MeshInstance3DEditor *this)

{
  if ((*(long *)(this + 0xa28) != 0) && (*(long *)(*(long *)(this + 0xa28) + -8) != 0)) {
    _debug_uv_draw(this);
    return;
  }
  return;
}



/* MeshInstance3DEditorPlugin::edit(Object*) */

void __thiscall MeshInstance3DEditorPlugin::edit(MeshInstance3DEditorPlugin *this,Object *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  NodePath *pNVar5;
  int iVar6;
  long in_FS_OFFSET;
  NodePath local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (lVar3 = __dynamic_cast(param_1,&Object::typeinfo,&MeshInstance3D::typeinfo,0), lVar3 == 0)) {
    Variant::Variant((Variant *)local_58,param_1);
    lVar3 = Variant::get_validated_object();
    if ((lVar3 == 0) ||
       (pOVar4 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&MultiNodeEdit::typeinfo,0),
       pOVar4 == (Object *)0x0)) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_001009aa:
      EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
LAB_001009c2:
      *(undefined8 *)(*(long *)(this + 0x660) + 0x9c8) = 0;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_001009aa;
        pOVar4 = (Object *)0x0;
LAB_00100962:
        Variant::_clear_internal();
        pNVar5 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
        if (pOVar4 == (Object *)0x0) goto LAB_001009c2;
      }
      else {
        if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_00100962;
        pNVar5 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      }
      iVar6 = 0;
      if (pNVar5 != (NodePath *)0x0) {
        for (; iVar2 = MultiNodeEdit::get_node_count(), iVar6 < iVar2; iVar6 = iVar6 + 1) {
          MultiNodeEdit::get_node((int)local_60);
          lVar3 = Node::get_node(pNVar5);
          if (lVar3 == 0) {
            NodePath::~NodePath(local_60);
          }
          else {
            lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&MeshInstance3D::typeinfo,0);
            NodePath::~NodePath(local_60);
            if (lVar3 != 0) {
              *(long *)(*(long *)(this + 0x660) + 0x9c8) = lVar3;
              cVar1 = RefCounted::unreference();
              goto joined_r0x00100b18;
            }
          }
        }
      }
      *(undefined8 *)(*(long *)(this + 0x660) + 0x9c8) = 0;
      cVar1 = RefCounted::unreference();
joined_r0x00100b18:
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_00100b20;
      }
    }
  }
  else {
    *(long *)(*(long *)(this + 0x660) + 0x9c8) = lVar3;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100b20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance3DEditorPlugin::handles(Object*) const */

char __thiscall
MeshInstance3DEditorPlugin::handles(MeshInstance3DEditorPlugin *this,Object *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Object *pOVar5;
  NodePath *pNVar6;
  int iVar7;
  long in_FS_OFFSET;
  NodePath local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&MeshInstance3D::typeinfo,0);
    cVar1 = '\x01';
    if (lVar4 != 0) goto LAB_00100b7d;
  }
  Variant::Variant((Variant *)local_58,param_1);
  lVar4 = Variant::get_validated_object();
  if ((lVar4 == 0) ||
     (pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&MultiNodeEdit::typeinfo,0),
     pOVar5 == (Object *)0x0)) {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_00100ce6:
    EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
LAB_00100cfe:
    cVar1 = '\0';
  }
  else {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00100ce6;
      pOVar5 = (Object *)0x0;
LAB_00100c16:
      Variant::_clear_internal();
      pNVar6 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      if (pOVar5 == (Object *)0x0) goto LAB_00100cfe;
    }
    else {
      if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_00100c16;
      pNVar6 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
    }
    iVar7 = 0;
    cVar1 = '\0';
    if (pNVar6 != (NodePath *)0x0) {
      for (; iVar3 = MultiNodeEdit::get_node_count(), iVar7 < iVar3; iVar7 = iVar7 + 1) {
        MultiNodeEdit::get_node((int)local_60);
        lVar4 = Node::get_node(pNVar6);
        if (lVar4 == 0) {
          NodePath::~NodePath(local_60);
        }
        else {
          lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&MeshInstance3D::typeinfo,0);
          NodePath::~NodePath(local_60);
          if (lVar4 != 0) {
            if (cVar1 != '\0') goto LAB_00100d13;
            cVar1 = '\x01';
          }
        }
      }
    }
    cVar1 = '\0';
LAB_00100d13:
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00100b7d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar1;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
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
  __n = lVar2 * 8;
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



/* MeshInstance3DEditor::_node_removed(Node*) */

void __thiscall MeshInstance3DEditor::_node_removed(MeshInstance3DEditor *this,Node *param_1)

{
  if (*(Node **)(this + 0x9c8) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0x9c8) = 0;
  CanvasItem::hide();
  return;
}



/* MeshInstance3DEditor::edit(MeshInstance3D*) */

void __thiscall MeshInstance3DEditor::edit(MeshInstance3DEditor *this,MeshInstance3D *param_1)

{
  *(MeshInstance3D **)(this + 0x9c8) = param_1;
  return;
}



/* MeshInstance3DEditor::_notification(int) */

void __thiscall MeshInstance3DEditor::_notification(MeshInstance3DEditor *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* MeshInstance3DEditorPlugin::~MeshInstance3DEditorPlugin() */

void __thiscall
MeshInstance3DEditorPlugin::~MeshInstance3DEditorPlugin(MeshInstance3DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111f20;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* MeshInstance3DEditorPlugin::~MeshInstance3DEditorPlugin() */

void __thiscall
MeshInstance3DEditorPlugin::~MeshInstance3DEditorPlugin(MeshInstance3DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111f20;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeshInstance3DEditor::MeshInstance3DEditor() */

void __thiscall MeshInstance3DEditor::MeshInstance3DEditor(MeshInstance3DEditor *this)

{
  code *pcVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  MenuButton *this_00;
  undefined8 uVar5;
  String_conflict *pSVar6;
  long *plVar7;
  CallableCustom *this_01;
  ConfirmationDialog *pCVar8;
  BoxContainer *pBVar9;
  SpinBox *this_02;
  Label *pLVar10;
  OptionButton *pOVar11;
  AcceptDialog *pAVar12;
  Container *this_03;
  Control *this_04;
  int iVar13;
  long in_FS_OFFSET;
  float fVar14;
  String_conflict local_68 [8];
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00111668;
  *(undefined1 (*) [16])(this + 0x9c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  this_00 = (MenuButton *)operator_new(0xc68,"");
  local_58[0] = 0;
  MenuButton::MenuButton(this_00,(String_conflict *)local_58);
  postinitialize_handler((Object *)this_00);
  *(MenuButton **)(this + 0x9d0) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String_conflict **)(this + 0x9d0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Mesh");
  TTR(local_68,(String_conflict *)&local_60);
  Button::set_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0x9d0),0));
  Node3DEditor::add_control_to_menu_panel(Node3DEditor::singleton);
  uVar5 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create Collision Shape...");
  TTR(local_68,(String_conflict *)&local_60);
  PopupMenu::add_item(uVar5,local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create Navigation Mesh");
  TTR(local_68,(String_conflict *)&local_60);
  PopupMenu::add_item(uVar5,local_68,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = (String_conflict *)MenuButton::get_popup();
  local_58[0] = 0;
  iVar13 = (int)(CowData<char32_t> *)local_58;
  PopupMenu::add_separator(pSVar6,iVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create Outline Mesh...");
  TTR(local_68,(String_conflict *)&local_60);
  PopupMenu::add_item(uVar5,local_68,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  iVar3 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String_conflict *)&local_60,
             "Creates a static outline mesh. The outline mesh will have its normals flipped automatically.\nThis can be used instead of the StandardMaterial Grow property when using that property isn\'t possible."
            );
  TTR(local_68,(String_conflict *)&local_60);
  MenuButton::get_popup();
  iVar4 = PopupMenu::get_item_count();
  PopupMenu::set_item_tooltip(iVar3,(String_conflict *)(ulong)(iVar4 - 1));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create Debug Tangents");
  TTR(local_68,(String_conflict *)&local_60);
  PopupMenu::add_item(uVar5,local_68,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = (String_conflict *)MenuButton::get_popup();
  local_58[0] = 0;
  PopupMenu::add_separator(pSVar6,iVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"View UV1");
  TTR(local_68,(String_conflict *)&local_60);
  PopupMenu::add_item(uVar5,local_68,5);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"View UV2");
  TTR(local_68,(String_conflict *)&local_60);
  PopupMenu::add_item(uVar5,local_68,6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = MenuButton::get_popup();
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Unwrap UV2 for Lightmap/AO");
  TTR(local_68,(String_conflict *)&local_60);
  PopupMenu::add_item(uVar5,local_68,4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar7 = (long *)MenuButton::get_popup();
  pcVar1 = *(code **)(*plVar7 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC29;
  *(MeshInstance3DEditor **)(this_01 + 0x28) = this;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_001121c8;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar5;
  *(code **)(this_01 + 0x38) = _menu_option;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "MeshInstance3DEditor::_menu_option";
  Callable::Callable((Callable *)local_58,this_01);
  (*pcVar1)(plVar7,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  pCVar8 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar8);
  postinitialize_handler((Object *)pCVar8);
  *(ConfirmationDialog **)(this + 0x9d8) = pCVar8;
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create Outline Mesh");
  TTR(local_68,(String_conflict *)&local_60);
  Window::set_title((String_conflict *)pCVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x9d8);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create");
  TTR(local_68,(String_conflict *)&local_60);
  AcceptDialog::set_ok_button_text(uVar5,local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001119d0;
  postinitialize_handler((Object *)pBVar9);
  Node::add_child(*(undefined8 *)(this + 0x9d8),pBVar9,0,0);
  this_02 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(this_02);
  postinitialize_handler((Object *)this_02);
  dVar2 = _LC54;
  *(SpinBox **)(this + 0x9e0) = this_02;
  Range::set_min(dVar2);
  Range::set_max(_LC55);
  Range::set_step(_LC54);
  Range::set_value(_LC56);
  uVar5 = *(undefined8 *)(this + 0x9e0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Outline Size:");
  TTR(local_68,(String_conflict *)&local_60);
  VBoxContainer::add_margin_child((String_conflict *)pBVar9,(Control *)local_68,SUB81(uVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0x9d8),0,0);
  plVar7 = *(long **)(this + 0x9d8);
  pcVar1 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<MeshInstance3DEditor>
            ((MeshInstance3DEditor *)local_58,(char *)this,
             (_func_void *)"&MeshInstance3DEditor::_create_outline_mesh");
  (*pcVar1)(plVar7,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  pCVar8 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar8);
  postinitialize_handler((Object *)pCVar8);
  *(ConfirmationDialog **)(this + 0x9e8) = pCVar8;
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create Collision Shape");
  TTR(local_68,(String_conflict *)&local_60);
  Window::set_title((String_conflict *)pCVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x9e8);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create");
  TTR(local_68,(String_conflict *)&local_60);
  AcceptDialog::set_ok_button_text(uVar5,local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001119d0;
  postinitialize_handler((Object *)pBVar9);
  Node::add_child(*(undefined8 *)(this + 0x9e8),pBVar9,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar10,(String_conflict *)local_58);
  postinitialize_handler((Object *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Collision Shape placement");
  TTR(local_68,(String_conflict *)&local_60);
  Label::set_text((String_conflict *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar9,pLVar10,0,0);
  pOVar11 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar11,(String_conflict *)local_58);
  postinitialize_handler((Object *)pOVar11);
  *(OptionButton **)(this + 0x9f8) = pOVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x9f8),3);
  pSVar6 = *(String_conflict **)(this + 0x9f8);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Sibling");
  TTR(local_68,(String_conflict *)&local_60);
  iVar3 = (int)local_68;
  OptionButton::add_item(pSVar6,iVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x9f8);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Creates collision shapes as Sibling.");
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::set_item_tooltip((int)uVar5,(String_conflict *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String_conflict **)(this + 0x9f8);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Static Body Child");
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::add_item(pSVar6,iVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x9f8);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String_conflict *)&local_60,
             "Creates a StaticBody3D as child and assigns collision shapes to it.");
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::set_item_tooltip((int)uVar5,(String_conflict *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0x9f8),0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar10,(String_conflict *)local_58);
  postinitialize_handler((Object *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Collision Shape Type");
  TTR(local_68,(String_conflict *)&local_60);
  Label::set_text((String_conflict *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar9,pLVar10,0,0);
  pOVar11 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar11,(String_conflict *)local_58);
  postinitialize_handler((Object *)pOVar11);
  *(OptionButton **)(this + 0x9f0) = pOVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x9f0),3);
  pSVar6 = *(String_conflict **)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Trimesh");
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::add_item(pSVar6,iVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String_conflict *)&local_60,
             "Creates a polygon-based collision shape.\nThis is the most accurate (but slowest) option for collision detection."
            );
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::set_item_tooltip((int)uVar5,(String_conflict *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String_conflict **)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Single Convex");
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::add_item(pSVar6,iVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String_conflict *)&local_60,
             "Creates a single convex collision shape.\nThis is the fastest (but least accurate) option for collision detection."
            );
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::set_item_tooltip((int)uVar5,(String_conflict *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String_conflict **)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Simplified Convex");
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::add_item(pSVar6,iVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String_conflict *)&local_60,
             "Creates a simplified convex collision shape.\nThis is similar to single collision shape, but can result in a simpler geometry in some cases, at the cost of accuracy."
            );
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::set_item_tooltip((int)uVar5,(String_conflict *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String_conflict **)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Multiple Convex");
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::add_item(pSVar6,iVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String_conflict *)&local_60,
             "Creates a polygon-based collision shape.\nThis is a performance middle-ground between a single convex collision and a polygon-based collision."
            );
  TTR(local_68,(String_conflict *)&local_60);
  OptionButton::set_item_tooltip((int)uVar5,(String_conflict *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0x9f0),0,0);
  Node::add_child(this,*(undefined8 *)(this + 0x9e8),0,0);
  plVar7 = *(long **)(this + 0x9e8);
  pcVar1 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<MeshInstance3DEditor>
            ((MeshInstance3DEditor *)local_58,(char *)this,
             (_func_void *)"&MeshInstance3DEditor::_create_collision_shape");
  (*pcVar1)(plVar7,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  pAVar12 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar12);
  postinitialize_handler((Object *)pAVar12);
  *(AcceptDialog **)(this + 0xa00) = pAVar12;
  Node::add_child(this,pAVar12,0,0);
  pAVar12 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar12);
  postinitialize_handler((Object *)pAVar12);
  *(AcceptDialog **)(this + 0xa08) = pAVar12;
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"UV Channel Debug");
  TTR(local_68,(String_conflict *)&local_60);
  Window::set_title((String_conflict *)pAVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa08),0,0);
  this_03 = (Container *)operator_new(0xa10,"");
  Container::Container(this_03);
  *(code **)this_03 = Control::set_custom_minimum_size;
  *(undefined8 *)(this_03 + 0xa00) = 0x23f800000;
  *(undefined8 *)(this_03 + 0xa08) = 0x100000001;
  postinitialize_handler((Object *)this_03);
  *(Container **)(this + 0xa10) = this_03;
  Node::add_child(*(undefined8 *)(this + 0xa08),this_03,0,0);
  this_04 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_04);
  postinitialize_handler((Object *)this_04);
  *(Control **)(this + 0xa18) = this_04;
  fVar14 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar14 * __LC76,fVar14 * __LC76);
  Control::set_custom_minimum_size(this_04);
  plVar7 = *(long **)(this + 0xa18);
  pcVar1 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<MeshInstance3DEditor>
            ((MeshInstance3DEditor *)local_58,(char *)this,
             (_func_void *)"&MeshInstance3DEditor::_debug_uv_draw");
  (*pcVar1)(plVar7,SceneStringNames::singleton + 8,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa10),*(undefined8 *)(this + 0xa18),0,0);
  pCVar8 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar8);
  postinitialize_handler((Object *)pCVar8);
  *(ConfirmationDialog **)(this + 0xa30) = pCVar8;
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create NavigationMesh");
  TTR(local_68,(String_conflict *)&local_60);
  Window::set_title((String_conflict *)pCVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0xa30);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String_conflict *)&local_60,"Create");
  TTR(local_68,(String_conflict *)&local_60);
  AcceptDialog::set_ok_button_text(uVar5,local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001119d0;
  postinitialize_handler((Object *)pBVar9);
  Node::add_child(*(undefined8 *)(this + 0xa30),pBVar9,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar10,(String_conflict *)local_58);
  postinitialize_handler((Object *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String_conflict *)&local_60,
             "Before converting a rendering mesh to a navigation mesh, please verify:\n\n- The mesh is two-dimensional.\n- The mesh has no surface overlap.\n- The mesh has no self-intersection.\n- The mesh surfaces have indices.\n\nIf the mesh does not fulfill these requirements, the pathfinding will be broken."
            );
  TTR(local_68,(String_conflict *)&local_60);
  Label::set_text((String_conflict *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar9,pLVar10,0,0);
  Node::add_child(this,*(undefined8 *)(this + 0xa30),0,0);
  plVar7 = *(long **)(this + 0xa30);
  pcVar1 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<MeshInstance3DEditor>
            ((MeshInstance3DEditor *)local_58,(char *)this,
             (_func_void *)"&MeshInstance3DEditor::_create_navigation_mesh");
  (*pcVar1)(plVar7,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance3DEditorPlugin::MeshInstance3DEditorPlugin() */

void __thiscall
MeshInstance3DEditorPlugin::MeshInstance3DEditorPlugin(MeshInstance3DEditorPlugin *this)

{
  long lVar1;
  MeshInstance3DEditor *this_00;
  
  Node::Node((Node *)this);
  *(code **)this = RefCounted::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (MeshInstance3DEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00111f20;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (MeshInstance3DEditor *)operator_new(0xa38,"");
  MeshInstance3DEditor::MeshInstance3DEditor(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = EditorNode::singleton;
  *(MeshInstance3DEditor **)(this + 0x660) = this_00;
  Node::add_child(*(undefined8 *)(lVar1 + 0x6c8),this_00,0,0);
  CanvasItem::hide();
  return;
}



/* MeshInstance3DEditor::_create_outline_mesh() */

void __thiscall MeshInstance3DEditor::_create_outline_mesh(MeshInstance3DEditor *this)

{
  Variant *pVVar1;
  Variant **ppVVar2;
  StringName *pSVar3;
  int iVar4;
  MeshInstance3D *this_00;
  Object *pOVar5;
  Object *pOVar6;
  Variant *pVVar7;
  char *pcVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  double dVar10;
  long *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  MeshInstance3D::get_mesh();
  if (local_d8 == (long *)0x0) {
    local_c0 = 0;
    uVar9 = *(undefined8 *)(this + 0xa00);
    String::parse_latin1((String_conflict *)&local_c0,"");
    pcVar8 = "MeshInstance3D lacks a Mesh.";
LAB_00102fa9:
    local_c8 = 0;
    String::parse_latin1((String_conflict *)&local_c8,pcVar8);
    TTR((String_conflict *)&local_b8,(String_conflict *)&local_c8);
    AcceptDialog::set_text(uVar9,(String_conflict *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_88[0] = 0;
    local_88[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xa00));
  }
  else {
    iVar4 = (**(code **)(*local_d8 + 0x1c8))();
    if (iVar4 == 0) {
      local_c0 = 0;
      uVar9 = *(undefined8 *)(this + 0xa00);
      String::parse_latin1((String_conflict *)&local_c0,"");
      pcVar8 = "Mesh has no surface to create outlines from.";
      goto LAB_00102fa9;
    }
    iVar4 = (**(code **)(*local_d8 + 0x1c8))();
    if (iVar4 == 1) {
      iVar4 = (**(code **)(*local_d8 + 0x200))(local_d8,0);
      if (iVar4 != 3) {
        local_c0 = 0;
        uVar9 = *(undefined8 *)(this + 0xa00);
        String::parse_latin1((String_conflict *)&local_c0,"");
        pcVar8 = "Mesh primitive type is not PRIMITIVE_TRIANGLES.";
        goto LAB_00102fa9;
      }
    }
    dVar10 = (double)Range::get_value();
    Mesh::create_outline((float)dVar10);
    if (local_d0 != 0) {
      this_00 = (MeshInstance3D *)operator_new(0x6a0,"");
      MeshInstance3D::MeshInstance3D(this_00);
      postinitialize_handler((Object *)this_00);
      MeshInstance3D::set_mesh(this_00);
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      pOVar5 = (Object *)SceneTree::get_edited_scene_root();
      pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
      local_b8 = "";
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "Create Outline";
      local_c8 = 0;
      local_b0 = 0xe;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String_conflict *)&local_b8,(String_conflict *)&local_c8);
      EditorUndoRedoManager::create_action(pOVar6,(String_conflict *)&local_b8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      StringName::StringName((StringName *)&local_b8,"add_child",false);
      pSVar3 = *(StringName **)(this + 0x9c8);
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      Variant::Variant((Variant *)local_70,true);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      iVar4 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar3,(Variant **)&local_b8,iVar4);
      pVVar7 = (Variant *)local_40;
      do {
        pVVar1 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_owner",false);
      Variant::Variant((Variant *)local_88,pOVar5);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp
                (pOVar6,(StringName *)this_00,(Variant **)&local_b8,iVar4);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      pSVar3 = Node3DEditor::singleton;
      ppVVar2 = (Variant **)(SceneStringNames::singleton + 0x188);
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar3,ppVVar2,iVar4);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      EditorUndoRedoManager::add_do_reference(pOVar6);
      StringName::StringName((StringName *)&local_b8,"remove_child",false);
      pSVar3 = *(StringName **)(this + 0x9c8);
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(pOVar6,pSVar3,(Variant **)&local_b8,iVar4);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
      Ref<Mesh>::unref((Ref<Mesh> *)&local_d0);
      Ref<Mesh>::unref((Ref<Mesh> *)&local_d8);
      goto LAB_00102f46;
    }
    uVar9 = *(undefined8 *)(this + 0xa00);
    local_c0 = 0;
    String::parse_latin1((String_conflict *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1((String_conflict *)&local_c8,"Could not create outline.");
    TTR((String_conflict *)&local_b8,(String_conflict *)&local_c8);
    AcceptDialog::set_text(uVar9,(String_conflict *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_88[0] = 0;
    local_88[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xa00));
    Ref<Mesh>::unref((Ref<Mesh> *)&local_d0);
  }
  Ref<Mesh>::unref((Ref<Mesh> *)&local_d8);
LAB_00102f46:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeshInstance3DEditor::_create_navigation_mesh() */

void __thiscall MeshInstance3DEditor::_create_navigation_mesh(MeshInstance3DEditor *this)

{
  Variant *pVVar1;
  Variant **ppVVar2;
  StringName *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  Resource *pRVar8;
  NavigationRegion3D *this_00;
  Object *pOVar9;
  Object *pOVar10;
  Variant *pVVar11;
  int iVar12;
  long in_FS_OFFSET;
  Object *local_d8;
  Resource *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  MeshInstance3D::get_mesh();
  if (local_d8 != (Object *)0x0) {
    pRVar8 = (Resource *)operator_new(0x318,"");
    Resource::Resource(pRVar8);
    *(undefined1 (*) [16])(pRVar8 + 0x240) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pRVar8 + 0x250) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pRVar8 + 0x260) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pRVar8 + 0x290) = (undefined1  [16])0x0;
    uVar5 = __LC7;
    uVar4 = __LC126;
    *(undefined ***)pRVar8 = &PTR__initialize_classv_00111d48;
    uVar6 = _LC129;
    *(undefined8 *)(pRVar8 + 0x2a0) = uVar4;
    *(undefined8 *)(pRVar8 + 0x2a8) = uVar5;
    uVar5 = _UNK_001126b8;
    uVar4 = __LC127;
    *(undefined8 *)(pRVar8 + 0x2d0) = uVar6;
    *(undefined8 *)(pRVar8 + 0x2b0) = uVar4;
    *(undefined8 *)(pRVar8 + 0x2b8) = uVar5;
    uVar5 = _UNK_001126c8;
    uVar4 = __LC128;
    *(undefined8 *)(pRVar8 + 0x270) = 0;
    *(undefined8 *)(pRVar8 + 0x2c0) = uVar4;
    *(undefined8 *)(pRVar8 + 0x2c8) = uVar5;
    uVar5 = _UNK_001126d8;
    uVar4 = _LC112;
    *(undefined8 *)(pRVar8 + 0x280) = 0;
    *(undefined8 *)(pRVar8 + 0x2d8) = uVar4;
    *(undefined8 *)(pRVar8 + 0x2e0) = uVar5;
    StringName::StringName((StringName *)(pRVar8 + 0x2e8),"navigation_mesh_source_group",false);
    pRVar8[0x2f2] = (Resource)0x0;
    *(undefined2 *)(pRVar8 + 0x2f0) = 0;
    *(undefined8 *)(pRVar8 + 0x2f4) = 0;
    *(undefined4 *)(pRVar8 + 0x2fc) = 0;
    *(undefined8 *)(pRVar8 + 0x300) = 0;
    *(undefined4 *)(pRVar8 + 0x308) = 0;
    *(undefined8 *)(pRVar8 + 0x30c) = 0;
    *(undefined4 *)(pRVar8 + 0x314) = 0;
    postinitialize_handler((Object *)pRVar8);
    local_d0 = pRVar8;
    cVar7 = RefCounted::init_ref();
    if ((cVar7 != '\0') && (local_d0 != (Resource *)0x0)) {
      NavigationMesh::create_from_mesh(local_d0);
      this_00 = (NavigationRegion3D *)operator_new(0x5c0,"");
      NavigationRegion3D::NavigationRegion3D(this_00);
      postinitialize_handler((Object *)this_00);
      NavigationRegion3D::set_navigation_mesh(this_00);
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      pOVar9 = (Object *)SceneTree::get_edited_scene_root();
      pOVar10 = (Object *)EditorUndoRedoManager::get_singleton();
      local_b8 = "";
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "Create Navigation Mesh";
      local_c8 = 0;
      local_b0 = 0x16;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String_conflict *)&local_b8,(String_conflict *)&local_c8);
      EditorUndoRedoManager::create_action(pOVar10,(String_conflict *)&local_b8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      StringName::StringName((StringName *)&local_b8,"add_child",false);
      pSVar3 = *(StringName **)(this + 0x9c8);
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      Variant::Variant((Variant *)local_70,true);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      iVar12 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp(pOVar10,pSVar3,(Variant **)&local_b8,iVar12);
      pVVar11 = (Variant *)local_40;
      do {
        pVVar1 = pVVar11 + -0x18;
        pVVar11 = pVVar11 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar11 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_owner",false);
      Variant::Variant((Variant *)local_88,pOVar9);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp
                (pOVar10,(StringName *)this_00,(Variant **)&local_b8,iVar12);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      pSVar3 = Node3DEditor::singleton;
      ppVVar2 = (Variant **)(SceneStringNames::singleton + 0x188);
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(pOVar10,pSVar3,ppVVar2,iVar12);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      EditorUndoRedoManager::add_do_reference(pOVar10);
      StringName::StringName((StringName *)&local_b8,"remove_child",false);
      pSVar3 = *(StringName **)(this + 0x9c8);
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(pOVar10,pSVar3,(Variant **)&local_b8,iVar12);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar10,0));
      if (local_d0 != (Resource *)0x0) {
        cVar7 = RefCounted::unreference();
        pRVar8 = local_d0;
        if (cVar7 != '\0') {
          cVar7 = predelete_handler((Object *)local_d0);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pRVar8 + 0x140))(pRVar8);
            Memory::free_static(pRVar8,false);
          }
        }
      }
      if (local_d8 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        if (cVar7 != '\0') {
          cVar7 = predelete_handler(local_d8);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)local_d8 + 0x140))(local_d8);
            Memory::free_static(local_d8,false);
          }
        }
      }
      goto LAB_00103710;
    }
  }
  Ref<Mesh>::unref((Ref<Mesh> *)&local_d8);
LAB_00103710:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* MeshInstance3DEditor::_create_uv_lines(int) */

void MeshInstance3DEditor::_create_uv_lines(int param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  uint uVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  void *pvVar23;
  ulong uVar24;
  undefined4 in_register_0000003c;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  long local_130;
  long local_120;
  long local_108;
  long *local_d8;
  Array local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  Variant local_b8 [8];
  long local_b0;
  Variant local_a8 [8];
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  lVar25 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MeshInstance3D::get_mesh();
  if (local_d8 == (long *)0x0) {
    _err_print_error("_create_uv_lines","editor/plugins/mesh_instance_3d_editor_plugin.cpp",0x182,
                     "Condition \"mesh.is_null()\" is true.",0,0);
  }
  else {
    lVar5 = *(long *)(lVar25 + 0xa28);
    local_68 = 2;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    if ((lVar5 != 0) && (*(long *)(lVar5 + -8) != 0)) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar5 = *(long *)(lVar25 + 0xa28);
        *(undefined8 *)(lVar25 + 0xa28) = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
      else {
        *(undefined8 *)(lVar25 + 0xa28) = 0;
      }
    }
    for (iVar22 = 0; iVar15 = (**(code **)(*local_d8 + 0x1c8))(), iVar22 < iVar15;
        iVar22 = iVar22 + 1) {
      iVar15 = (**(code **)(*local_d8 + 0x200))(local_d8,iVar22);
      if (iVar15 == 3) {
        (**(code **)(*local_d8 + 0x1e0))(local_d0,local_d8,iVar22);
        iVar15 = (int)local_d0;
        Array::operator[](iVar15);
        Variant::operator_cast_to_Vector(local_b8);
        lVar5 = local_b0;
        if ((local_b0 == 0) || (*(long *)(local_b0 + -8) == 0)) {
          uVar6 = *(undefined8 *)(lVar25 + 0xa00);
          local_98 = "";
          local_c0 = 0;
          local_90 = 0;
          String::parse_latin1((StrRange *)&local_c0);
          local_98 = "Mesh has no UV in layer %d.";
          local_c8 = 0;
          local_90 = 0x1b;
          String::parse_latin1((StrRange *)&local_c8);
          TTR((String_conflict *)local_a8,(String_conflict *)&local_c8);
          vformat<int>((String_conflict *)&local_98,(int)(String_conflict *)local_a8);
          AcceptDialog::set_text(uVar6,(String_conflict *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          local_58 = (Vector<Vector2> *)0x0;
          Window::popup_centered(*(Vector2i **)(lVar25 + 0xa00));
          lVar25 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar25 + -0x10),false);
            }
          }
          Array::~Array(local_d0);
          pvVar23 = (void *)local_88._0_8_;
          if ((void *)local_88._0_8_ == (void *)0x0) goto LAB_00103f12;
          goto LAB_00103ea6;
        }
        Array::operator[](iVar15);
        Variant::operator_cast_to_Vector(local_a8);
        local_130 = local_a0;
        if (local_a0 == 0) {
          if (local_b0 != 0) {
            iVar15 = (int)*(undefined8 *)(local_b0 + -8);
            if (0 < iVar15) goto LAB_00103b0b;
            goto LAB_00103d69;
          }
        }
        else {
          if (*(long *)(local_a0 + -8) == 0) {
            if ((local_b0 != 0) && (iVar15 = (int)*(undefined8 *)(local_b0 + -8), 0 < iVar15)) {
              local_130 = 0;
              goto LAB_00103b0b;
            }
          }
          else {
            iVar15 = (int)*(long *)(local_a0 + -8);
            if (0 < iVar15) {
LAB_00103b0b:
              local_108 = lVar5;
              local_120 = local_130;
              iVar2 = 0;
              do {
                uVar27 = 1;
                do {
                  lVar17 = (long)((int)uVar27 + (int)((uVar27 & 0xffffffff) / 3) * -3 + iVar2);
                  if (local_130 == 0) {
                    local_58 = *(Vector<Vector2> **)(local_108 + -8 + uVar27 * 8);
                    local_50 = *(Vector<Vector2> **)(lVar5 + lVar17 * 8);
                  }
                  else {
                    local_58 = *(Vector<Vector2> **)
                                (lVar5 + (long)*(int *)(local_120 + -4 + uVar27 * 4) * 8);
                    local_50 = *(Vector<Vector2> **)
                                (lVar5 + (long)*(int *)(local_130 + lVar17 * 4) * 8);
                  }
                  uVar6 = local_88._0_8_;
                  if ((local_88._0_8_ != 0) && (local_68._4_4_ != 0)) {
                    lVar17 = *(long *)(hash_table_size_primes_inv + (local_68 & 0xffffffff) * 8);
                    uVar3 = *(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4);
                    uVar16 = MeshInstance3DEditorEdgeSort::hash
                                       ((MeshInstance3DEditorEdgeSort *)&local_58);
                    uVar26 = CONCAT44(0,uVar3);
                    uVar19 = 1;
                    if (uVar16 != 0) {
                      uVar19 = uVar16;
                    }
                    auVar7._8_8_ = 0;
                    auVar7._0_8_ = (ulong)uVar19 * lVar17;
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = uVar26;
                    lVar21 = SUB168(auVar7 * auVar11,8);
                    uVar16 = *(uint *)(local_78._8_8_ + lVar21 * 4);
                    uVar24 = (ulong)uVar16;
                    iVar20 = SUB164(auVar7 * auVar11,8);
                    if (uVar16 != 0) {
                      uVar16 = 0;
                      do {
                        if (((((uint)uVar24 == uVar19) &&
                             (pfVar18 = (float *)((ulong)*(uint *)(local_88._8_8_ + lVar21 * 4) *
                                                  0x10 + uVar6), (float)local_58 == *pfVar18)) &&
                            (local_58._4_4_ == pfVar18[1])) &&
                           ((pfVar18[2] == (float)local_50 && (pfVar18[3] == local_50._4_4_))))
                        goto LAB_00103ced;
                        uVar16 = uVar16 + 1;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = (ulong)(iVar20 + 1) * lVar17;
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar26;
                        lVar21 = SUB168(auVar8 * auVar12,8);
                        uVar4 = *(uint *)(local_78._8_8_ + lVar21 * 4);
                        uVar24 = (ulong)uVar4;
                        iVar20 = SUB164(auVar8 * auVar12,8);
                      } while ((uVar4 != 0) &&
                              (auVar9._8_8_ = 0, auVar9._0_8_ = uVar24 * lVar17, auVar13._8_8_ = 0,
                              auVar13._0_8_ = uVar26, auVar10._8_8_ = 0,
                              auVar10._0_8_ =
                                   (ulong)((uVar3 + iVar20) - SUB164(auVar9 * auVar13,8)) * lVar17,
                              auVar14._8_8_ = 0, auVar14._0_8_ = uVar26,
                              uVar16 <= SUB164(auVar10 * auVar14,8)));
                    }
                  }
                  Vector<Vector2>::push_back(local_58,lVar25 + 0xa20);
                  Vector<Vector2>::push_back(local_50,lVar25 + 0xa20);
                  HashSet<MeshInstance3DEditorEdgeSort,MeshInstance3DEditorEdgeSort,HashMapComparatorDefault<MeshInstance3DEditorEdgeSort>>
                  ::insert((MeshInstance3DEditorEdgeSort *)&local_98);
LAB_00103ced:
                  uVar27 = uVar27 + 1;
                } while (uVar27 != 4);
                iVar2 = iVar2 + 3;
                local_120 = local_120 + 0xc;
                local_108 = local_108 + 0x18;
              } while (iVar2 < iVar15);
              if (local_a0 == 0) goto LAB_00103d69;
            }
          }
          lVar5 = local_a0;
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
LAB_00103d69:
          lVar5 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
        }
        Array::~Array(local_d0);
      }
    }
    local_58 = (Vector<Vector2> *)0x0;
    Window::popup_centered(*(Vector2i **)(lVar25 + 0xa08));
    pvVar23 = (void *)local_88._0_8_;
    if ((void *)local_88._0_8_ != (void *)0x0) {
LAB_00103ea6:
      uVar6 = local_78._8_8_;
      if ((local_68._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) != 0)) {
        memset((void *)local_78._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) * 4);
      }
      Memory::free_static(pvVar23,false);
      Memory::free_static((void *)local_78._0_8_,false);
      Memory::free_static((void *)local_88._8_8_,false);
      Memory::free_static((void *)uVar6,false);
    }
  }
LAB_00103f12:
  Ref<Mesh>::unref((Ref<Mesh> *)&local_d8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance3DEditor::_menu_option(int) */

void __thiscall MeshInstance3DEditor::_menu_option(MeshInstance3DEditor *this,int param_1)

{
  Variant *pVVar1;
  StringName SVar2;
  Transform3D *pTVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  long lVar7;
  StringName *pSVar8;
  Object *pOVar9;
  ulong uVar10;
  Object *pOVar11;
  Vector2i *pVVar12;
  char *pcVar13;
  int iVar14;
  Variant *pVVar15;
  undefined8 uVar16;
  long in_FS_OFFSET;
  Transform3D *local_118;
  long local_e8;
  long local_e0;
  String_conflict local_d8 [8];
  Object *local_d0;
  Transform3D *local_c8;
  undefined8 local_c0;
  Transform3D *local_b8;
  Object *local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_88 [3];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  MeshInstance3D::get_mesh();
  if (local_e8 == 0) {
    uVar16 = *(undefined8 *)(this + 0xa00);
    local_b8 = (Transform3D *)0x0;
    String::parse_latin1((String_conflict *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String_conflict *)&local_c0,"Mesh is empty!");
    TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
    AcceptDialog::set_text(uVar16,(String_conflict *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_88[0] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xa00));
    goto switchD_00104142_default;
  }
  switch(param_1) {
  case 0:
    local_88[0] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9e8));
    break;
  case 1:
    pVVar12 = *(Vector2i **)(this + 0xa30);
    goto LAB_0010414f;
  case 2:
    pVVar12 = *(Vector2i **)(this + 0x9d8);
LAB_0010414f:
    local_a8 = _LC149;
    local_88[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a8);
    Window::popup_centered(pVVar12);
    break;
  case 3:
    pOVar9 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b8 = (Transform3D *)0x0;
    String::parse_latin1((String_conflict *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String_conflict *)&local_c0,"Create Debug Tangents");
    TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
    EditorUndoRedoManager::create_action(pOVar9,(String_conflict *)&local_b0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    pOVar11 = (Object *)MeshInstance3D::create_debug_tangents_node();
    if (pOVar11 != (Object *)0x0) {
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      pOVar6 = (Object *)SceneTree::get_edited_scene_root();
      EditorUndoRedoManager::add_do_reference(pOVar9);
      StringName::StringName((StringName *)&local_b0,"add_child",false);
      pSVar8 = *(StringName **)(this + 0x9c8);
      Variant::Variant((Variant *)local_88,pOVar11);
      Variant::Variant((Variant *)local_70,true);
      local_50 = (undefined1  [16])0x0;
      pVVar15 = (Variant *)local_40;
      local_58 = 0;
      iVar5 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp(pOVar9,pSVar8,(Variant **)&local_b0,iVar5);
      do {
        pVVar1 = pVVar15 + -0x18;
        pVVar15 = pVVar15 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar15 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b0,"set_owner",false);
      Variant::Variant((Variant *)local_88,pOVar6);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp
                (pOVar9,(StringName *)pOVar11,(Variant **)&local_b0,iVar5);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b0,"remove_child",false);
      pSVar8 = *(StringName **)(this + 0x9c8);
      Variant::Variant((Variant *)local_88,pOVar11);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(pOVar9,pSVar8,(Variant **)&local_b0,iVar5);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar9,0));
    break;
  case 4:
    MeshInstance3D::get_mesh();
    if (local_e8 == 0) {
      uVar16 = *(undefined8 *)(this + 0xa00);
      local_b8 = (Transform3D *)0x0;
      String::parse_latin1((String_conflict *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String_conflict *)&local_c0,"No mesh to unwrap.");
      TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
      AcceptDialog::set_text(uVar16,(String_conflict *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      local_88[0] = 0;
      Window::popup_centered(*(Vector2i **)(this + 0xa00));
    }
    else {
      Resource::get_path();
      iVar5 = String::find((char *)local_d8,0x107f5f);
      if (iVar5 == -1) {
        local_b8 = (Transform3D *)0x0;
        String::parse_latin1((String_conflict *)&local_b8,".import");
        String::operator+((String_conflict *)&local_b0,local_d8);
        cVar4 = FileAccess::exists((String_conflict *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        if (cVar4 == '\0') {
LAB_0010466d:
          lVar7 = local_e0;
          if (local_e0 == 0) {
            local_d0 = (Object *)0x0;
LAB_0010470f:
            local_b8 = (Transform3D *)0x0;
            uVar16 = *(undefined8 *)(this + 0xa00);
            String::parse_latin1((String_conflict *)&local_b8,"");
            pcVar13 = "Contained Mesh is not of type ArrayMesh.";
LAB_00104748:
            local_c0 = 0;
            String::parse_latin1((String_conflict *)&local_c0,pcVar13);
            TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
            AcceptDialog::set_text(uVar16,(Ref<ArrayMesh> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            local_88[0] = 0;
            Window::popup_centered(*(Vector2i **)(this + 0xa00));
          }
          else {
            pSVar8 = (StringName *)
                     __dynamic_cast(local_e0,&Object::typeinfo,&PrimitiveMesh::typeinfo,0);
            if (pSVar8 != (StringName *)0x0) {
              cVar4 = RefCounted::reference();
              if (cVar4 != '\0') {
                pOVar9 = (Object *)EditorUndoRedoManager::get_singleton();
                local_b8 = (Transform3D *)0x0;
                String::parse_latin1((String_conflict *)&local_b8,"");
                local_c0 = 0;
                String::parse_latin1((String_conflict *)&local_c0,"Unwrap UV2");
                TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
                EditorUndoRedoManager::create_action(pOVar9,(Ref<ArrayMesh> *)&local_b0,0,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                StringName::StringName((StringName *)&local_b0,"set_add_uv2",false);
                Variant::Variant((Variant *)local_88,true);
                local_70[0] = 0;
                local_70[1] = 0;
                local_68 = (undefined1  [16])0x0;
                local_a8 = (Variant *)local_88;
                EditorUndoRedoManager::add_do_methodp
                          (pOVar9,pSVar8,(Variant **)&local_b0,(int)&local_a8);
                if (Variant::needs_deinit[local_70[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
                  StringName::unref();
                }
                SVar2 = pSVar8[0x409];
                StringName::StringName((StringName *)&local_b0,"set_add_uv2",false);
                Variant::Variant((Variant *)local_88,(bool)SVar2);
                local_70[0] = 0;
                local_70[1] = 0;
                local_68 = (undefined1  [16])0x0;
                local_a8 = (Variant *)local_88;
                EditorUndoRedoManager::add_undo_methodp
                          (pOVar9,pSVar8,(Variant **)&local_b0,(int)&local_a8);
                if (Variant::needs_deinit[local_70[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
                  StringName::unref();
                }
                EditorUndoRedoManager::commit_action(SUB81(pOVar9,0));
                cVar4 = RefCounted::unreference();
                if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pSVar8), cVar4 != '\0'))
                {
                  (**(code **)(*(long *)pSVar8 + 0x140))(pSVar8);
                  Memory::free_static(pSVar8,false);
                }
                goto LAB_001047ab;
              }
              local_d0 = (Object *)0x0;
              lVar7 = local_e0;
              if (local_e0 == 0) goto LAB_0010470f;
            }
            local_d0 = (Object *)0x0;
            pOVar9 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&ArrayMesh::typeinfo,0);
            if (pOVar9 == (Object *)0x0) goto LAB_0010470f;
            local_b0 = (Object *)0x0;
            local_d0 = pOVar9;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              local_d0 = (Object *)0x0;
              Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_b0);
              goto LAB_0010470f;
            }
            iVar14 = 0;
            Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_b0);
            iVar5 = (**(code **)(*(long *)pOVar9 + 0x218))(pOVar9);
            if (0 < iVar5) {
              local_b8 = (Transform3D *)0x0;
              uVar16 = *(undefined8 *)(this + 0xa00);
              String::parse_latin1((String_conflict *)&local_b8,"");
              pcVar13 = "Can\'t unwrap mesh with blend shapes.";
              goto LAB_00104748;
            }
            while( true ) {
              iVar5 = (**(code **)(*(long *)pOVar9 + 0x1c8))(pOVar9);
              if (iVar5 <= iVar14) break;
              iVar5 = (**(code **)(*(long *)pOVar9 + 0x200))(pOVar9,iVar14);
              if (iVar5 != 3) {
                local_b8 = (Transform3D *)0x0;
                uVar16 = *(undefined8 *)(this + 0xa00);
                String::parse_latin1((String_conflict *)&local_b8,"");
                pcVar13 = "Only triangles are supported for lightmap unwrap.";
                goto LAB_00104748;
              }
              uVar10 = (**(code **)(*(long *)pOVar9 + 0x1f8))(pOVar9,iVar14);
              if ((uVar10 & 2) == 0) {
                local_b8 = (Transform3D *)0x0;
                uVar16 = *(undefined8 *)(this + 0xa00);
                String::parse_latin1((String_conflict *)&local_b8,"");
                pcVar13 = "Normals are required for lightmap unwrap.";
                goto LAB_00104748;
              }
              iVar14 = iVar14 + 1;
            }
            (**(code **)(*(long *)pOVar9 + 0x198))((String_conflict *)&local_b8,pOVar9,0);
            local_c8 = (Transform3D *)0x0;
            local_118 = local_b8;
            if ((local_b8 != (Transform3D *)0x0) &&
               (local_118 = (Transform3D *)
                            __dynamic_cast(local_b8,&Object::typeinfo,&ArrayMesh::typeinfo,0),
               local_118 != (Transform3D *)0x0)) {
              local_b0 = (Object *)0x0;
              local_c8 = local_118;
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') {
                local_c8 = (Transform3D *)0x0;
                local_118 = (Transform3D *)0x0;
              }
              Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_b0);
            }
            if (((local_b8 != (Transform3D *)0x0) &&
                (cVar4 = RefCounted::unreference(), pTVar3 = local_b8, cVar4 != '\0')) &&
               (cVar4 = predelete_handler((Object *)local_b8), cVar4 != '\0')) {
              (**(code **)(*(long *)pTVar3 + 0x140))(pTVar3);
              Memory::free_static(pTVar3,false);
            }
            Node3D::get_global_transform();
            iVar5 = ArrayMesh::lightmap_unwrap(local_118,_LC163);
            if (iVar5 == 0) {
              pOVar11 = (Object *)EditorUndoRedoManager::get_singleton();
              local_b8 = (Transform3D *)0x0;
              String::parse_latin1((String_conflict *)&local_b8,"");
              local_c0 = 0;
              String::parse_latin1((String_conflict *)&local_c0,"Unwrap UV2");
              TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
              EditorUndoRedoManager::create_action(pOVar11,(Ref<ArrayMesh> *)&local_b0,0,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              local_b0 = (Object *)local_118;
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') {
                local_b0 = (Object *)0x0;
                local_118 = (Transform3D *)0x0;
              }
              StringName::StringName((StringName *)&local_b8,"set_mesh",false);
              pSVar8 = *(StringName **)(this + 0x9c8);
              Variant::Variant((Variant *)local_88,(Object *)local_118);
              local_70[0] = 0;
              local_70[1] = 0;
              local_68 = (undefined1  [16])0x0;
              local_a8 = (Variant *)local_88;
              EditorUndoRedoManager::add_do_methodp
                        (pOVar11,pSVar8,(Variant **)&local_b8,(int)&local_a8);
              if (Variant::needs_deinit[local_70[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_b8 != (Transform3D *)0x0)) {
                StringName::unref();
              }
              Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_b0);
              EditorUndoRedoManager::add_do_reference(pOVar11);
              EditorUndoRedoManager::add_do_reference(pOVar11);
              local_b0 = pOVar9;
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') {
                pOVar9 = (Object *)0x0;
                local_b0 = (Object *)0x0;
              }
              StringName::StringName((StringName *)&local_b8,"set_mesh",false);
              pSVar8 = *(StringName **)(this + 0x9c8);
              Variant::Variant((Variant *)local_88,pOVar9);
              local_70[0] = 0;
              local_70[1] = 0;
              local_68 = (undefined1  [16])0x0;
              local_a8 = (Variant *)local_88;
              EditorUndoRedoManager::add_undo_methodp
                        (pOVar11,pSVar8,(Variant **)&local_b8,(int)&local_a8);
              if (Variant::needs_deinit[local_70[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_b8 != (Transform3D *)0x0)) {
                StringName::unref();
              }
              Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_b0);
              EditorUndoRedoManager::add_undo_reference(pOVar11);
              EditorUndoRedoManager::commit_action(SUB81(pOVar11,0));
              Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_c8);
              Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_d0);
              goto LAB_001047ab;
            }
            uVar16 = *(undefined8 *)(this + 0xa00);
            local_b8 = (Transform3D *)0x0;
            String::parse_latin1((String_conflict *)&local_b8,"");
            local_c0 = 0;
            String::parse_latin1
                      ((String_conflict *)&local_c0,"UV Unwrap failed, mesh may not be manifold?");
            TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
            AcceptDialog::set_text(uVar16,(Ref<ArrayMesh> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            local_88[0] = 0;
            Window::popup_centered(*(Vector2i **)(this + 0xa00));
            Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_c8);
          }
          Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_d0);
        }
        else {
          uVar16 = *(undefined8 *)(this + 0xa00);
          local_b8 = (Transform3D *)0x0;
          String::parse_latin1((String_conflict *)&local_b8,"");
          local_c0 = 0;
          String::parse_latin1
                    ((String_conflict *)&local_c0,
                     "Mesh cannot unwrap UVs because it was imported from another file type. Make it unique first."
                    );
          TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
          AcceptDialog::set_text(uVar16,(String_conflict *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          local_88[0] = 0;
          Window::popup_centered(*(Vector2i **)(this + 0xa00));
        }
      }
      else {
        String::substr((int)(CowData<char32_t> *)&local_c8,(int)local_d8);
        ResourceLoader::get_resource_type((String_conflict *)&local_b0);
        cVar4 = String::operator==((String_conflict *)&local_b0,"PackedScene");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (cVar4 == '\0') {
          local_b8 = (Transform3D *)0x0;
          String::parse_latin1((String_conflict *)&local_b8,".import");
          String::operator+((String_conflict *)&local_b0,local_d8);
          cVar4 = FileAccess::exists((String_conflict *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          if (cVar4 == '\0') {
LAB_00104665:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            goto LAB_0010466d;
          }
          uVar16 = *(undefined8 *)(this + 0xa00);
          local_b8 = (Transform3D *)0x0;
          String::parse_latin1((String_conflict *)&local_b8,"");
          local_c0 = 0;
          String::parse_latin1
                    ((String_conflict *)&local_c0,
                     "Mesh cannot unwrap UVs because it belongs to another resource which was imported from another file type. Make it unique first."
                    );
          TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
          AcceptDialog::set_text(uVar16,(String_conflict *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        }
        else {
          if (*(long *)(this + 0x240) == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
          }
          lVar7 = SceneTree::get_edited_scene_root();
          if (lVar7 != 0) {
            if (*(long *)(this + 0x240) == 0) {
              _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                               "Parameter \"data.tree\" is null.",0,0);
            }
            SceneTree::get_edited_scene_root();
            Node::get_scene_file_path();
            cVar4 = String::operator!=((String_conflict *)&local_b0,(String_conflict *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            if (cVar4 == '\0') goto LAB_00104665;
          }
          uVar16 = *(undefined8 *)(this + 0xa00);
          local_b8 = (Transform3D *)0x0;
          String::parse_latin1((String_conflict *)&local_b8,"");
          local_c0 = 0;
          String::parse_latin1
                    ((String_conflict *)&local_c0,
                     "Mesh cannot unwrap UVs because it does not belong to the edited scene. Make it unique first."
                    );
          TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
          AcceptDialog::set_text(uVar16,(String_conflict *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        local_88[0] = 0;
        Window::popup_centered(*(Vector2i **)(this + 0xa00));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      }
LAB_001047ab:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    }
    Ref<Mesh>::unref((Ref<Mesh> *)&local_e0);
    break;
  case 5:
    MeshInstance3D::get_mesh();
    if (local_c8 != (Transform3D *)0x0) {
      _create_uv_lines((int)this);
      Ref<Mesh>::unref((Ref<Mesh> *)&local_c8);
      break;
    }
    goto LAB_00104b80;
  case 6:
    MeshInstance3D::get_mesh();
    if (local_c8 != (Transform3D *)0x0) {
      _create_uv_lines((int)this);
      Ref<Mesh>::unref((Ref<Mesh> *)&local_c8);
      break;
    }
LAB_00104b80:
    uVar16 = *(undefined8 *)(this + 0xa00);
    local_b8 = (Transform3D *)0x0;
    String::parse_latin1((String_conflict *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String_conflict *)&local_c0,"No mesh to debug.");
    TTR((String_conflict *)&local_b0,(String_conflict *)&local_c0);
    AcceptDialog::set_text(uVar16,(String_conflict *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_88[0] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xa00));
    Ref<Mesh>::unref((Ref<Mesh> *)&local_c8);
  }
switchD_00104142_default:
  Ref<Mesh>::unref((Ref<Mesh> *)&local_e8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Ref<Shape3D> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Shape3D>>::_copy_on_write(CowData<Ref<Shape3D>> *this)

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



/* Vector<Ref<Shape3D> >::push_back(Ref<Shape3D>) [clone .isra.0] */

void __thiscall Vector<Ref<Shape3D>>::push_back(Vector<Ref<Shape3D>> *this,long *param_2)

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
  iVar5 = CowData<Ref<Shape3D>>::resize<false>((CowData<Ref<Shape3D>> *)(this + 8),lVar6);
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
      CowData<Ref<Shape3D>>::_copy_on_write((CowData<Ref<Shape3D>> *)(this + 8));
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



/* WARNING: Removing unreachable block (ram,0x001059a8) */
/* WARNING: Removing unreachable block (ram,0x00105f50) */
/* WARNING: Removing unreachable block (ram,0x00105cbc) */
/* WARNING: Removing unreachable block (ram,0x00106030) */
/* WARNING: Removing unreachable block (ram,0x00106040) */
/* WARNING: Removing unreachable block (ram,0x00105f6a) */
/* WARNING: Removing unreachable block (ram,0x00105f8d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeshInstance3DEditor::create_shape_from_mesh(Ref<Mesh>, int, bool) */

Vector<Ref<Shape3D>> *
MeshInstance3DEditor::create_shape_from_mesh
          (Vector<Ref<Shape3D>> *param_1,long param_2,undefined8 *param_3,int param_4,char param_5)

{
  undefined8 uVar1;
  char cVar2;
  Object *pOVar3;
  RefCounted *this;
  long lVar4;
  char *pcVar5;
  RefCounted *pRVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  byte bVar8;
  RefCounted *local_70;
  Object *local_68;
  Object *local_60;
  Object *local_58;
  long local_50 [4];
  
  bVar8 = 0;
  local_50[2] = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_4 == 2) {
    Mesh::create_convex_shape(SUB81(&local_68,0),SUB81(*param_3,0));
    local_60 = (Object *)0x0;
    if ((local_68 == (Object *)0x0) ||
       (pOVar3 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&Shape3D::typeinfo,0),
       pOVar3 == (Object *)0x0)) {
LAB_00105b0b:
      Vector<Ref<Shape3D>>::push_back(param_1);
    }
    else {
      local_58 = (Object *)0x0;
      local_60 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_60 = (Object *)0x0;
        Ref<Shape3D>::unref((Ref<Shape3D> *)&local_58);
        goto LAB_00105b0b;
      }
      Ref<Shape3D>::unref((Ref<Shape3D> *)&local_58);
      Vector<Ref<Shape3D>>::push_back(param_1);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    if (((local_68 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_68, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if ((param_5 == '\0') || (*(long *)(param_1 + 8) != 0)) goto LAB_001058d8;
    local_60 = (Object *)0x0;
    uVar7 = *(undefined8 *)(param_2 + 0xa00);
    String::parse_latin1((String_conflict *)&local_60,"");
    pcVar5 = "Couldn\'t create a simplified collision shape.";
LAB_00105b76:
    local_68 = (Object *)0x0;
    String::parse_latin1((String_conflict *)&local_68,pcVar5);
    TTR((String_conflict *)&local_58,(String_conflict *)&local_68);
    AcceptDialog::set_text(uVar7,(String_conflict *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  else {
    if (2 < param_4) {
      if (param_4 == 3) {
        local_70 = (RefCounted *)0x0;
        this = (RefCounted *)operator_new(0x1b0,"");
        pRVar6 = this;
        for (lVar4 = 0x36; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined8 *)pRVar6 = 0;
          pRVar6 = pRVar6 + (ulong)bVar8 * -0x10 + 8;
        }
        RefCounted::RefCounted(this);
        uVar1 = _UNK_001126e8;
        uVar7 = __LC171;
        *(undefined ***)this = &PTR__initialize_classv_00111508;
        *(undefined8 *)(this + 0x180) = uVar7;
        *(undefined8 *)(this + 0x188) = uVar1;
        uVar1 = _UNK_001126f8;
        uVar7 = __LC172;
        *(undefined4 *)(this + 0x17c) = 0;
        *(undefined2 *)(this + 0x1a0) = 0x100;
        *(undefined4 *)(this + 0x1a4) = 1;
        this[0x1a8] = (RefCounted)0x1;
        *(undefined8 *)(this + 400) = uVar7;
        *(undefined8 *)(this + 0x198) = uVar1;
        postinitialize_handler((Object *)this);
        cVar2 = RefCounted::init_ref();
        if (cVar2 != '\0') {
          pOVar3 = (Object *)0x0;
          if ((this != (RefCounted *)0x0) &&
             (cVar2 = RefCounted::reference(), pOVar3 = (Object *)this, local_70 = this,
             cVar2 == '\0')) {
            local_70 = (RefCounted *)0x0;
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        MeshConvexDecompositionSettings::set_max_convex_hulls((uint)local_70);
        MeshConvexDecompositionSettings::set_max_concavity(_LC174);
        Mesh::convex_decompose((String_conflict *)&local_58);
        if (*(long *)(param_1 + 8) != local_50[0]) {
          CowData<Ref<Shape3D>>::_unref((CowData<Ref<Shape3D>> *)(param_1 + 8));
          lVar4 = local_50[0];
          local_50[0] = 0;
          *(long *)(param_1 + 8) = lVar4;
        }
        CowData<Ref<Shape3D>>::_unref((CowData<Ref<Shape3D>> *)local_50);
        if ((param_5 != '\0') && (*(long *)(param_1 + 8) == 0)) {
          uVar7 = *(undefined8 *)(param_2 + 0xa00);
          local_60 = (Object *)0x0;
          String::parse_latin1((String_conflict *)&local_60,"");
          local_68 = (Object *)0x0;
          String::parse_latin1
                    ((String_conflict *)&local_68,"Couldn\'t create any collision shapes.");
          TTR((String_conflict *)&local_58,(String_conflict *)&local_68);
          AcceptDialog::set_text(uVar7,(String_conflict *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          local_50[1] = 0;
          Window::popup_centered(*(Vector2i **)(param_2 + 0xa00));
        }
        if (((local_70 != (RefCounted *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0'))
           && (cVar2 = predelete_handler((Object *)local_70), cVar2 != '\0')) {
          (**(code **)(*(long *)local_70 + 0x140))(local_70);
          Memory::free_static(local_70,false);
        }
      }
      goto LAB_001058d8;
    }
    if (param_4 == 0) {
      Mesh::create_trimesh_shape();
      local_60 = (Object *)0x0;
      if ((local_68 == (Object *)0x0) ||
         (pOVar3 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&Shape3D::typeinfo,0),
         pOVar3 == (Object *)0x0)) {
LAB_00105c21:
        Vector<Ref<Shape3D>>::push_back(param_1);
      }
      else {
        local_58 = (Object *)0x0;
        local_60 = pOVar3;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_60 = (Object *)0x0;
          Ref<Shape3D>::unref((Ref<Shape3D> *)&local_58);
          goto LAB_00105c21;
        }
        Ref<Shape3D>::unref((Ref<Shape3D> *)&local_58);
        Vector<Ref<Shape3D>>::push_back(param_1);
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      if (((local_68 != (Object *)0x0) &&
          (cVar2 = RefCounted::unreference(), pOVar3 = local_68, cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      if ((param_5 == '\0') || (*(long *)(param_1 + 8) != 0)) goto LAB_001058d8;
      local_60 = (Object *)0x0;
      uVar7 = *(undefined8 *)(param_2 + 0xa00);
      String::parse_latin1((String_conflict *)&local_60,"");
      pcVar5 = "Couldn\'t create a Trimesh collision shape.";
      goto LAB_00105b76;
    }
    if (param_4 != 1) goto LAB_001058d8;
    Mesh::create_convex_shape(SUB81((String_conflict *)&local_60,0),SUB81(*param_3,0));
    local_58 = (Object *)0x0;
    if ((local_60 == (Object *)0x0) ||
       (pOVar3 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&Shape3D::typeinfo,0),
       pOVar3 == (Object *)0x0)) {
LAB_0010589b:
      Vector<Ref<Shape3D>>::push_back(param_1);
    }
    else {
      local_58 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_58 = (Object *)0x0;
        goto LAB_0010589b;
      }
      Vector<Ref<Shape3D>>::push_back(param_1);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    if (((local_60 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_60, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_60), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if ((param_5 == '\0') || (*(long *)(param_1 + 8) != 0)) goto LAB_001058d8;
    uVar7 = *(undefined8 *)(param_2 + 0xa00);
    local_60 = (Object *)0x0;
    String::parse_latin1((String_conflict *)&local_60,"");
    local_68 = (Object *)0x0;
    String::parse_latin1((String_conflict *)&local_68,"Couldn\'t create a single collision shape.");
    TTR((String_conflict *)&local_58,(String_conflict *)&local_68);
    AcceptDialog::set_text(uVar7,(String_conflict *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_50[1] = 0;
  Window::popup_centered(*(Vector2i **)(param_2 + 0xa00));
LAB_001058d8:
  if (local_50[2] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance3DEditor::_create_collision_shape() */

void __thiscall MeshInstance3DEditor::_create_collision_shape(MeshInstance3DEditor *this)

{
  Object *pOVar1;
  Variant *pVVar2;
  undefined1 (*pauVar3) [16];
  Variant **ppVVar4;
  void *pvVar5;
  long lVar6;
  bool bVar7;
  StringName *pSVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  Object *pOVar13;
  char *pcVar14;
  long *plVar15;
  undefined1 (*pauVar16) [16];
  undefined8 *puVar17;
  StringName *pSVar18;
  Object *pOVar19;
  CollisionShape3D *pCVar20;
  long lVar21;
  Object *pOVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  char *pcVar26;
  Variant *pVVar27;
  long in_FS_OFFSET;
  long *local_210;
  StringName *local_200;
  undefined8 *local_1b0;
  Object *local_140;
  Object *local_138;
  Object *local_130;
  undefined8 local_128;
  long *local_120;
  Object *local_118;
  undefined8 local_110;
  Variant *local_108;
  Variant *pVStack_100;
  int local_d8 [6];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [6];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = OptionButton::get_selected();
  iVar11 = OptionButton::get_selected();
  pOVar13 = (Object *)EditorUndoRedoManager::get_singleton();
  if (iVar11 == 2) {
    local_128 = 0;
    String::parse_latin1((String_conflict *)&local_128,"");
    pcVar26 = "Create Simplified Convex Static Body";
    pcVar14 = "Create Simplified Convex Collision Shape Sibling";
LAB_001061c8:
    if (iVar10 == 0) {
      pcVar26 = pcVar14;
    }
    local_130 = (Object *)0x0;
    String::parse_latin1((String_conflict *)&local_130,pcVar26);
    TTR((String_conflict *)&local_118,(String_conflict *)&local_130);
    EditorUndoRedoManager::create_action(pOVar13,(String_conflict *)&local_118,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  }
  else {
    if (iVar11 < 3) {
      if (iVar11 == 0) {
        local_128 = 0;
        String::parse_latin1((String_conflict *)&local_128,"");
        pcVar26 = "Create Trimesh Static Body";
        pcVar14 = "Create Trimesh Collision Shape Sibling";
      }
      else {
        if (iVar11 != 1) goto LAB_00106228;
        local_128 = 0;
        String::parse_latin1((String_conflict *)&local_128,"");
        pcVar26 = "Create Single Convex Static Body";
        pcVar14 = "Create Single Convex Collision Shape Sibling";
      }
      goto LAB_001061c8;
    }
    if (iVar11 == 3) {
      local_128 = 0;
      String::parse_latin1((String_conflict *)&local_128,"");
      pcVar26 = "Create Multiple Convex Static Body";
      pcVar14 = "Create Multiple Convex Collision Shape Siblings";
      goto LAB_001061c8;
    }
  }
LAB_00106228:
  plVar15 = (long *)EditorSelection::get_selected_node_list();
  if (((long *)*plVar15 == (long *)0x0) ||
     (puVar24 = *(undefined8 **)*plVar15, puVar24 == (undefined8 *)0x0)) {
    uVar25 = *(undefined8 *)(this + 0x9c8);
    pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar16[1] = 0;
    *pauVar16 = (undefined1  [16])0x0;
LAB_0010719e:
    local_1b0 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
    lVar21 = *(long *)(*pauVar16 + 8);
    local_1b0[1] = 0;
    *local_1b0 = uVar25;
    local_1b0[2] = lVar21;
    local_1b0[3] = pauVar16;
    if (lVar21 != 0) {
      *(undefined8 **)(lVar21 + 8) = local_1b0;
    }
    puVar24 = *(undefined8 **)*pauVar16;
    *(undefined8 **)(*pauVar16 + 8) = local_1b0;
    if (puVar24 != (undefined8 *)0x0) {
      *(int *)pauVar16[1] = *(int *)pauVar16[1] + 1;
      bVar7 = true;
      local_1b0 = puVar24;
      goto LAB_00106300;
    }
    *(int *)pauVar16[1] = *(int *)pauVar16[1] + 1;
    *(undefined8 **)*pauVar16 = local_1b0;
    bVar7 = true;
    goto LAB_00106300;
  }
  pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
  *(undefined4 *)pauVar16[1] = 0;
  *pauVar16 = (undefined1  [16])0x0;
  do {
    puVar17 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
    uVar25 = *puVar24;
    puVar17[1] = 0;
    *puVar17 = uVar25;
    lVar21 = *(long *)(*pauVar16 + 8);
    puVar17[3] = pauVar16;
    puVar17[2] = lVar21;
    if (lVar21 != 0) {
      *(undefined8 **)(lVar21 + 8) = puVar17;
    }
    lVar21 = *(long *)*pauVar16;
    *(undefined8 **)(*pauVar16 + 8) = puVar17;
    if (lVar21 == 0) {
      *(undefined8 **)*pauVar16 = puVar17;
    }
    puVar24 = (undefined8 *)puVar24[1];
    iVar12 = *(int *)pauVar16[1] + 1;
    *(int *)pauVar16[1] = iVar12;
  } while (puVar24 != (undefined8 *)0x0);
  if (iVar12 == 0) {
    uVar25 = *(undefined8 *)(this + 0x9c8);
    goto LAB_0010719e;
  }
  bVar7 = false;
  for (local_1b0 = *(undefined8 **)*pauVar16; local_1b0 != (undefined8 *)0x0;
      local_1b0 = (undefined8 *)local_1b0[1]) {
LAB_00106300:
    local_200 = (StringName *)*local_1b0;
    if (iVar10 == 0) {
      while( true ) {
        if (*(long *)(this + 0x240) == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        pSVar18 = (StringName *)SceneTree::get_edited_scene_root();
        if (local_200 != pSVar18) break;
        if (bVar7) {
          local_128 = 0;
          uVar25 = *(undefined8 *)(this + 0xa00);
          String::parse_latin1((String_conflict *)&local_128,"");
          local_130 = (Object *)0x0;
          String::parse_latin1
                    ((String_conflict *)&local_130,
                     "Can\'t create a collision shape as sibling for the scene root.");
          TTR((String_conflict *)&local_118,(String_conflict *)&local_130);
          AcceptDialog::set_text(uVar25,(String_conflict *)&local_118);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
          local_108 = (Variant *)0x0;
          Window::popup_centered(*(Vector2i **)(this + 0xa00));
        }
        local_1b0 = (undefined8 *)local_1b0[1];
        if (local_1b0 == (undefined8 *)0x0) goto LAB_0010688e;
        local_200 = (StringName *)*local_1b0;
      }
    }
    if ((local_200 != (StringName *)0x0) &&
       (pSVar18 = (StringName *)
                  __dynamic_cast(local_200,&Object::typeinfo,&MeshInstance3D::typeinfo,0),
       pSVar18 != (StringName *)0x0)) {
      MeshInstance3D::get_mesh();
      pOVar19 = local_140;
      if (local_140 == (Object *)0x0) {
        Ref<Mesh>::unref((Ref<Mesh> *)&local_140);
      }
      else {
        local_118 = local_140;
        cVar9 = RefCounted::reference();
        if (cVar9 == '\0') {
          local_118 = (Object *)0x0;
          create_shape_from_mesh(&local_128,this,&local_118,iVar11);
        }
        else {
          create_shape_from_mesh(&local_128,this,&local_118,iVar11);
          cVar9 = RefCounted::unreference();
          if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar19), cVar9 != '\0')) {
            (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
            Memory::free_static(pOVar19,false);
          }
        }
        if (local_120 == (long *)0x0) {
          CowData<Ref<Shape3D>>::_unref((CowData<Ref<Shape3D>> *)&local_120);
          Ref<Mesh>::unref((Ref<Mesh> *)&local_140);
          goto LAB_00106a54;
        }
        if (*(long *)(this + 0x240) == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        pOVar19 = (Object *)SceneTree::get_edited_scene_root();
        if (iVar10 == 1) {
          pOVar22 = (Object *)operator_new(0x648,"");
          StaticBody3D::StaticBody3D((StaticBody3D *)pOVar22,0);
          postinitialize_handler(pOVar22);
          StringName::StringName((StringName *)&local_118,"add_child",false);
          pVVar27 = local_90;
          Variant::Variant((Variant *)local_d8,pOVar22);
          Variant::Variant((Variant *)&local_c0,true);
          local_a8 = 0;
          local_a0 = (undefined1  [16])0x0;
          iVar12 = (int)&local_108;
          local_108 = (Variant *)local_d8;
          pVStack_100 = (Variant *)&local_c0;
          EditorUndoRedoManager::add_do_methodp(pOVar13,pSVar18,(Variant **)&local_118,iVar12);
          do {
            pVVar2 = pVVar27 + -0x18;
            pVVar27 = pVVar27 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar27 != (Variant *)local_d8);
          if ((StringName::configured != '\0') && (local_118 != (Object *)0x0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_118,"set_owner",false);
          Variant::Variant((Variant *)local_d8,pOVar19);
          local_c0 = 0;
          local_b8 = (undefined1  [16])0x0;
          local_108 = (Variant *)local_d8;
          EditorUndoRedoManager::add_do_methodp
                    (pOVar13,(StringName *)pOVar22,(Variant **)&local_118,iVar12);
          if (Variant::needs_deinit[(int)local_c0] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_d8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_118 != (Object *)0x0)) {
            StringName::unref();
          }
          pSVar8 = Node3DEditor::singleton;
          ppVVar4 = (Variant **)(SceneStringNames::singleton + 0x188);
          Variant::Variant((Variant *)local_d8,pOVar22);
          local_c0 = 0;
          local_b8 = (undefined1  [16])0x0;
          local_108 = (Variant *)local_d8;
          EditorUndoRedoManager::add_do_methodp(pOVar13,pSVar8,ppVVar4,iVar12);
          if (Variant::needs_deinit[(int)local_c0] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_d8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<Ref<Shape3D>>::_copy_on_write((CowData<Ref<Shape3D>> *)&local_120);
          plVar23 = local_120;
          CowData<Ref<Shape3D>>::_copy_on_write((CowData<Ref<Shape3D>> *)&local_120);
          plVar15 = local_120;
          if (local_120 != (long *)0x0) {
            plVar15 = local_120 + local_120[-1];
          }
          for (; plVar23 != plVar15; plVar23 = plVar23 + 1) {
            while( true ) {
              local_130 = (Object *)0x0;
              if (((Object *)*plVar23 != (Object *)0x0) &&
                 (local_130 = (Object *)*plVar23, cVar9 = RefCounted::reference(), cVar9 == '\0')) {
                local_130 = (Object *)0x0;
              }
              pCVar20 = (CollisionShape3D *)operator_new(0x558,"");
              CollisionShape3D::CollisionShape3D(pCVar20);
              postinitialize_handler((Object *)pCVar20);
              CollisionShape3D::set_shape(pCVar20);
              Node::add_child(pOVar22,pCVar20,1,0);
              StringName::StringName((StringName *)&local_118,"set_owner",false);
              Variant::Variant((Variant *)local_d8,pOVar19);
              local_c0 = 0;
              local_b8 = (undefined1  [16])0x0;
              local_108 = (Variant *)local_d8;
              EditorUndoRedoManager::add_do_methodp
                        (pOVar13,(StringName *)pCVar20,(Variant **)&local_118,iVar12);
              if (Variant::needs_deinit[(int)local_c0] == '\0') {
                cVar9 = Variant::needs_deinit[local_d8[0]];
              }
              else {
                Variant::_clear_internal();
                cVar9 = Variant::needs_deinit[local_d8[0]];
              }
              if (cVar9 != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_118 != (Object *)0x0)) {
                StringName::unref();
              }
              pSVar8 = Node3DEditor::singleton;
              ppVVar4 = (Variant **)(SceneStringNames::singleton + 0x188);
              Variant::Variant((Variant *)local_d8,(Object *)pCVar20);
              local_c0 = 0;
              local_b8 = (undefined1  [16])0x0;
              local_108 = (Variant *)local_d8;
              EditorUndoRedoManager::add_do_methodp(pOVar13,pSVar8,ppVVar4,iVar12);
              if (Variant::needs_deinit[(int)local_c0] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_d8[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (((local_130 != (Object *)0x0) &&
                  (cVar9 = RefCounted::unreference(), pOVar1 = local_130, cVar9 != '\0')) &&
                 (cVar9 = predelete_handler(local_130), cVar9 != '\0')) break;
              plVar23 = plVar23 + 1;
              if (plVar15 == plVar23) goto LAB_00106f9a;
            }
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
LAB_00106f9a:
          EditorUndoRedoManager::add_do_reference(pOVar13);
          StringName::StringName((StringName *)&local_118,"remove_child",false);
          Variant::Variant((Variant *)local_d8,pOVar22);
          local_c0 = 0;
          local_b8 = (undefined1  [16])0x0;
          local_108 = (Variant *)local_d8;
          EditorUndoRedoManager::add_undo_methodp(pOVar13,pSVar18,(Variant **)&local_118,iVar12);
          if (Variant::needs_deinit[(int)local_c0] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_d8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_118 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          CowData<Ref<Shape3D>>::_copy_on_write((CowData<Ref<Shape3D>> *)&local_120);
          local_210 = local_120;
          CowData<Ref<Shape3D>>::_copy_on_write((CowData<Ref<Shape3D>> *)&local_120);
          plVar15 = local_120;
          if (local_120 != (long *)0x0) {
            plVar15 = local_120 + local_120[-1];
          }
          if (local_210 != plVar15) {
            do {
              local_138 = (Object *)0x0;
              if (((Object *)*local_210 != (Object *)0x0) &&
                 (local_138 = (Object *)*local_210, cVar9 = RefCounted::reference(), cVar9 == '\0'))
              {
                local_138 = (Object *)0x0;
              }
              pCVar20 = (CollisionShape3D *)operator_new(0x558,"");
              CollisionShape3D::CollisionShape3D(pCVar20);
              postinitialize_handler((Object *)pCVar20);
              CollisionShape3D::set_shape(pCVar20);
              local_118 = (Object *)0x107fe7;
              local_130 = (Object *)0x0;
              local_110 = 0x10;
              String::parse_latin1((StrRange *)&local_130);
              Node::set_name((String_conflict *)pCVar20);
              pOVar22 = local_130;
              if (local_130 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_130 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_130 = (Object *)0x0;
                  Memory::free_static(pOVar22 + -0x10,false);
                }
              }
              Node3D::get_transform();
              Node3D::set_transform((Transform3D *)pCVar20);
              StringName::StringName((StringName *)&local_118,"add_sibling",false);
              Variant::Variant((Variant *)local_88,(Object *)pCVar20);
              Variant::Variant((Variant *)&local_70,true);
              local_58 = 0;
              local_50 = (undefined1  [16])0x0;
              iVar12 = (int)&local_108;
              local_108 = (Variant *)local_88;
              pVStack_100 = (Variant *)&local_70;
              EditorUndoRedoManager::add_do_methodp(pOVar13,local_200,(Variant **)&local_118,iVar12)
              ;
              pVVar27 = (Variant *)local_40;
              do {
                pVVar2 = pVVar27 + -0x18;
                pVVar27 = pVVar27 + -0x18;
                if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
                  Variant::_clear_internal();
                }
              } while (pVVar27 != (Variant *)local_88);
              if ((StringName::configured != '\0') && (local_118 != (Object *)0x0)) {
                StringName::unref();
              }
              StringName::StringName((StringName *)&local_118,"set_owner",false);
              Variant::Variant((Variant *)local_88,pOVar19);
              local_70 = 0;
              local_68 = (undefined1  [16])0x0;
              local_108 = (Variant *)local_88;
              EditorUndoRedoManager::add_do_methodp
                        (pOVar13,(StringName *)pCVar20,(Variant **)&local_118,iVar12);
              if (Variant::needs_deinit[(int)local_70] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_88[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_118 != (Object *)0x0)) {
                StringName::unref();
              }
              pSVar18 = Node3DEditor::singleton;
              ppVVar4 = (Variant **)(SceneStringNames::singleton + 0x188);
              Variant::Variant((Variant *)local_88,(Object *)pCVar20);
              local_70 = 0;
              local_68 = (undefined1  [16])0x0;
              local_108 = (Variant *)local_88;
              EditorUndoRedoManager::add_do_methodp(pOVar13,pSVar18,ppVVar4,iVar12);
              if (Variant::needs_deinit[(int)local_70] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_88[0]] != '\0') {
                Variant::_clear_internal();
              }
              EditorUndoRedoManager::add_do_reference(pOVar13);
              StringName::StringName((StringName *)&local_118,"remove_child",false);
              pSVar18 = (StringName *)Node::get_parent();
              Variant::Variant((Variant *)local_88,(Object *)pCVar20);
              local_70 = 0;
              local_68 = (undefined1  [16])0x0;
              local_108 = (Variant *)local_88;
              EditorUndoRedoManager::add_undo_methodp(pOVar13,pSVar18,(Variant **)&local_118,iVar12)
              ;
              if (Variant::needs_deinit[(int)local_70] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_88[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_118 != (Object *)0x0)) {
                StringName::unref();
              }
              if (((local_138 != (Object *)0x0) &&
                  (cVar9 = RefCounted::unreference(), pOVar22 = local_138, cVar9 != '\0')) &&
                 (cVar9 = predelete_handler(local_138), cVar9 != '\0')) {
                (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
                Memory::free_static(pOVar22,false);
              }
              local_210 = local_210 + 1;
            } while (plVar15 != local_210);
          }
        }
        CowData<Ref<Shape3D>>::_unref((CowData<Ref<Shape3D>> *)&local_120);
        if (((local_140 != (Object *)0x0) &&
            (cVar9 = RefCounted::unreference(), pOVar19 = local_140, cVar9 != '\0')) &&
           (cVar9 = predelete_handler(local_140), cVar9 != '\0')) {
          (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
          Memory::free_static(pOVar19,false);
        }
      }
    }
  }
LAB_0010688e:
  EditorUndoRedoManager::commit_action(SUB81(pOVar13,0));
  do {
    while( true ) {
      pvVar5 = *(void **)*pauVar16;
      if (pvVar5 == (void *)0x0) goto LAB_001070f8;
      if (pauVar16 != *(undefined1 (**) [16])((long)pvVar5 + 0x18)) break;
      lVar21 = *(long *)((long)pvVar5 + 8);
      lVar6 = *(long *)((long)pvVar5 + 0x10);
      *(long *)*pauVar16 = lVar21;
      if (pvVar5 == *(void **)(*pauVar16 + 8)) {
        *(long *)(*pauVar16 + 8) = lVar6;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 8) = lVar21;
        lVar21 = *(long *)((long)pvVar5 + 8);
      }
      if (lVar21 != 0) {
        *(long *)(lVar21 + 0x10) = lVar6;
      }
      Memory::free_static(pvVar5,false);
      pauVar3 = pauVar16 + 1;
      *(int *)*pauVar3 = *(int *)*pauVar3 + -1;
      if (*(int *)*pauVar3 == 0) goto LAB_001068ec;
    }
    _err_print_error("erase","./core/templates/list.h",0xe7,
                     "Condition \"p_I->data != this\" is true. Returning: false",0,0);
  } while (*(int *)pauVar16[1] != 0);
  goto LAB_001068ec;
LAB_001070f8:
  if (*(int *)pauVar16[1] != 0) {
    _err_print_error("~List","./core/templates/list.h",0x316,
                     "Condition \"_data->size_cache\" is true.",0,0);
    goto LAB_001068f6;
  }
  goto LAB_001068ec;
  while( true ) {
    if (pauVar16 == *(undefined1 (**) [16])((long)pvVar5 + 0x18)) {
      lVar21 = *(long *)((long)pvVar5 + 8);
      lVar6 = *(long *)((long)pvVar5 + 0x10);
      *(long *)*pauVar16 = lVar21;
      if (pvVar5 == *(void **)(*pauVar16 + 8)) {
        *(long *)(*pauVar16 + 8) = lVar6;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 8) = lVar21;
        lVar21 = *(long *)((long)pvVar5 + 8);
      }
      if (lVar21 != 0) {
        *(long *)(lVar21 + 0x10) = lVar6;
      }
      Memory::free_static(pvVar5,false);
      pauVar3 = pauVar16 + 1;
      *(int *)*pauVar3 = *(int *)*pauVar3 + -1;
      iVar10 = *(int *)*pauVar3;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      iVar10 = *(int *)pauVar16[1];
    }
    if (iVar10 == 0) break;
LAB_00106a54:
    pvVar5 = *(void **)*pauVar16;
    if (pvVar5 == (void *)0x0) goto LAB_001070f8;
  }
LAB_001068ec:
  Memory::free_static(pauVar16,false);
LAB_001068f6:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* MeshConvexDecompositionSettings::is_class_ptr(void*) const */

uint __thiscall
MeshConvexDecompositionSettings::is_class_ptr(MeshConvexDecompositionSettings *this,void *param_1)

{
  return (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MeshConvexDecompositionSettings::_getv(StringName const&, Variant&) const */

undefined8 MeshConvexDecompositionSettings::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshConvexDecompositionSettings::_setv(StringName const&, Variant const&) */

undefined8 MeshConvexDecompositionSettings::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshConvexDecompositionSettings::_validate_propertyv(PropertyInfo&) const */

void MeshConvexDecompositionSettings::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MeshConvexDecompositionSettings::_property_can_revertv(StringName const&) const */

undefined8 MeshConvexDecompositionSettings::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MeshConvexDecompositionSettings::_property_get_revertv(StringName const&, Variant&) const */

undefined8
MeshConvexDecompositionSettings::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshConvexDecompositionSettings::_notificationv(int, bool) */

void MeshConvexDecompositionSettings::_notificationv(int param_1,bool param_2)

{
  return;
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



/* MeshInstance3DEditor::is_class_ptr(void*) const */

uint __thiscall MeshInstance3DEditor::is_class_ptr(MeshInstance3DEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1123,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MeshInstance3DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
MeshInstance3DEditorPlugin::is_class_ptr(MeshInstance3DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1123,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MeshInstance3DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 MeshInstance3DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshInstance3DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 MeshInstance3DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshInstance3DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 MeshInstance3DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MeshInstance3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MeshInstance3DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshInstance3DEditorPlugin::has_main_screen() const */

undefined8 MeshInstance3DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* NavigationMesh::is_class_ptr(void*) const */

uint __thiscall NavigationMesh::is_class_ptr(NavigationMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1123,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1124,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMesh::_property_can_revertv(StringName const&) const */

undefined8 NavigationMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMesh::_notificationv(int, bool) */

void NavigationMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshInstance3DEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshInstance3DEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void>::get_argument_count
          (CallableCustomMethodPointer<MeshInstance3DEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<MeshInstance3DEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshInstance3DEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshInstance3DEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001113a8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001113a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings() */

void __thiscall
MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings
          (MeshConvexDecompositionSettings *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001113a8;
  Object::~Object((Object *)this);
  return;
}



/* MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings() */

void __thiscall
MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings
          (MeshConvexDecompositionSettings *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001113a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* NavigationMesh::_validate_propertyv(PropertyInfo&) const */

void NavigationMesh::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    NavigationMesh::_validate_property(param_1);
    return;
  }
  return;
}



/* NavigationMesh::_getv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00116008 != Object::_get) {
    uVar1 = NavigationMesh::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMesh::_setv(StringName const&, Variant const&) */

undefined8 NavigationMesh::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00116010 != Object::_set) {
    uVar1 = NavigationMesh::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MeshInstance3DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MeshInstance3DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00116018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00116018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MeshInstance3DEditor::_property_can_revertv(StringName const&) const */

undefined8 MeshInstance3DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MeshInstance3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void MeshInstance3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00116028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* NavigationMesh::_get_class_namev() const */

undefined8 * NavigationMesh::_get_class_namev(void)

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
LAB_00108053:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108053;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
      goto LAB_001080be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
LAB_001080be:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void,int>::get_object
          (CallableCustomMethodPointer<MeshInstance3DEditor,void,int> *this)

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
      goto LAB_001081ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001081ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001081ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void>::get_object
          (CallableCustomMethodPointer<MeshInstance3DEditor,void> *this)

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
      goto LAB_001082ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001082ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001082ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MeshInstance3DEditor::_validate_propertyv(PropertyInfo&) const */

void MeshInstance3DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116030 == CanvasItem::_validate_property) {
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
  if ((code *)PTR__validate_property_00116038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1124,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1123,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1124,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1124,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1124,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* MeshInstance3DEditorPlugin::_notificationv(int, bool) */

void __thiscall
MeshInstance3DEditorPlugin::_notificationv
          (MeshInstance3DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116040 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00116040 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00116048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* MeshInstance3DEditor::_setv(StringName const&, Variant const&) */

undefined8 MeshInstance3DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00116048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108688) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001086f8) */
/* MeshInstance3DEditor::_getv(StringName const&, Variant&) const */

undefined8 MeshInstance3DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* MeshInstance3DEditor::_notificationv(int, bool) */

void __thiscall
MeshInstance3DEditor::_notificationv(MeshInstance3DEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00116058 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00116058 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  if (param_1 != 0x2d) {
    return;
  }
  _notification(iVar1);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &MeshInstance3D::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108850;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108850:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &MeshInstance3D::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001088b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001088b0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

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



/* MeshInstance3DEditorPlugin::get_plugin_name() const */

MeshInstance3DEditorPlugin * __thiscall
MeshInstance3DEditorPlugin::get_plugin_name(MeshInstance3DEditorPlugin *this)

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



/* MeshInstance3DEditor::~MeshInstance3DEditor() */

void __thiscall MeshInstance3DEditor::~MeshInstance3DEditor(MeshInstance3DEditor *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00111668;
  if (*(long *)(this + 0xa28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa28);
      *(undefined8 *)(this + 0xa28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Control::~Control((Control *)this);
      return;
    }
  }
  Control::~Control((Control *)this);
  return;
}



/* MeshInstance3DEditor::~MeshInstance3DEditor() */

void __thiscall MeshInstance3DEditor::~MeshInstance3DEditor(MeshInstance3DEditor *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00111668;
  if (*(long *)(this + 0xa28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa28);
      *(undefined8 *)(this + 0xa28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Control::~Control((Control *)this);
  operator_delete(this,0xa38);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116060 != Container::_notification) {
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
  if ((code *)PTR__notification_00116060 == Container::_notification) {
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



/* MeshConvexDecompositionSettings::_get_class_namev() const */

undefined8 * MeshConvexDecompositionSettings::_get_class_namev(void)

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
LAB_00108c33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108c33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "MeshConvexDecompositionSettings");
      goto LAB_00108c9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MeshConvexDecompositionSettings"
            );
LAB_00108c9e:
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
LAB_00108d13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108d13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00108d7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00108d7e:
  return &_get_class_namev()::_class_name_static;
}



/* MeshInstance3DEditorPlugin::_get_class_namev() const */

undefined8 * MeshInstance3DEditorPlugin::_get_class_namev(void)

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
LAB_00108e03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108e03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MeshInstance3DEditorPlugin")
      ;
      goto LAB_00108e6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MeshInstance3DEditorPlugin");
LAB_00108e6e:
  return &_get_class_namev()::_class_name_static;
}



/* MeshInstance3DEditor::_get_class_namev() const */

undefined8 * MeshInstance3DEditor::_get_class_namev(void)

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
LAB_00108ef3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108ef3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MeshInstance3DEditor");
      goto LAB_00108f5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MeshInstance3DEditor");
LAB_00108f5e:
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
LAB_00108fe3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108fe3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010904e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010904e:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  bVar10 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00111d48;
  if ((bVar10) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      pOVar5 = *(Object **)(this + 0x298);
      cVar7 = predelete_handler(pOVar5);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x290) = 0;
      if (lVar3 != 0) {
        lVar9 = 0;
        lVar8 = lVar2;
        do {
          if (*(long *)(lVar8 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar8 + 8);
              *(undefined8 *)(lVar8 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar3 != lVar9);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  bVar10 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00111d48;
  if ((bVar10) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      pOVar5 = *(Object **)(this + 0x298);
      cVar7 = predelete_handler(pOVar5);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x290) = 0;
      if (lVar3 != 0) {
        lVar9 = 0;
        lVar8 = lVar2;
        do {
          if (*(long *)(lVar8 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar8 + 8);
              *(undefined8 *)(lVar8 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar3 != lVar9);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x318);
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Shape3D> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Shape3D>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* NavigationMesh::get_class() const */

void NavigationMesh::get_class(void)

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



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String_conflict *this,char *param_1)

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



/* MeshInstance3DEditorEdgeSort::hash(MeshInstance3DEditorEdgeSort const&) */

uint MeshInstance3DEditorEdgeSort::hash(MeshInstance3DEditorEdgeSort *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  
  fVar1 = *(float *)param_1;
  uVar2 = 0x3413905a;
  if ((fVar1 != 0.0) && (uVar2 = 0x22afa5cc, !NAN(fVar1))) {
    uVar2 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
            0x7f07c65;
    uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  }
  fVar1 = *(float *)(param_1 + 4);
  if (fVar1 != 0.0) {
    if (NAN(fVar1)) {
      uVar2 = uVar2 ^ 0x2db3efa0;
    }
    else {
      uVar2 = uVar2 ^ ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) *
                      0x1b873593;
    }
  }
  fVar1 = *(float *)(param_1 + 8);
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  uVar2 = uVar2 ^ uVar2 >> 0x10;
  uVar3 = (uVar2 * 0x16a88000 | uVar2 * -0x3361d2af >> 0x11) * 0x1b873593 ^ 0x7f07c65;
  uVar2 = 0x3413905a;
  if ((fVar1 != 0.0) && (uVar2 = 0x22afa5cc, !NAN(fVar1))) {
    uVar2 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
            0x7f07c65;
    uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  }
  fVar1 = *(float *)(param_1 + 0xc);
  if (fVar1 != 0.0) {
    if (NAN(fVar1)) {
      uVar2 = uVar2 ^ 0x2db3efa0;
    }
    else {
      uVar2 = uVar2 ^ ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) *
                      0x1b873593;
    }
  }
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  uVar2 = uVar2 ^ uVar2 >> 0x10;
  uVar2 = (uVar2 * 0x16a88000 | uVar2 * -0x3361d2af >> 0x11) * 0x1b873593 ^
          (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  return uVar2 ^ uVar2 >> 0x10;
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



/* MeshInstance3DEditorPlugin::get_class() const */

void MeshInstance3DEditorPlugin::get_class(void)

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



/* MeshInstance3DEditor::get_class() const */

void MeshInstance3DEditor::get_class(void)

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



/* MeshConvexDecompositionSettings::get_class() const */

void MeshConvexDecompositionSettings::get_class(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<MeshInstance3DEditorEdgeSort, MeshInstance3DEditorEdgeSort,
   HashMapComparatorDefault<MeshInstance3DEditorEdgeSort> >::insert(MeshInstance3DEditorEdgeSort
   const&) */

void HashSet<MeshInstance3DEditorEdgeSort,MeshInstance3DEditorEdgeSort,HashMapComparatorDefault<MeshInstance3DEditorEdgeSort>>
     ::insert(MeshInstance3DEditorEdgeSort *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
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
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float *pfVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint *puVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  MeshInstance3DEditorEdgeSort *in_RDX;
  long lVar44;
  ulong uVar45;
  uint uVar46;
  long *in_RSI;
  ulong uVar47;
  ulong uVar48;
  uint *puVar49;
  undefined4 uVar50;
  
  uVar34 = *(uint *)(in_RSI + 4);
  lVar37 = *in_RSI;
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)uVar34 * 4);
  if (lVar37 == 0) {
    uVar36 = (ulong)uVar32 * 4;
    lVar37 = Memory::alloc_static(uVar36,false);
    in_RSI[3] = lVar37;
    lVar37 = Memory::alloc_static((ulong)uVar32 << 4,false);
    *in_RSI = lVar37;
    lVar37 = Memory::alloc_static(uVar36,false);
    in_RSI[2] = lVar37;
    lVar37 = Memory::alloc_static(uVar36,false);
    in_RSI[1] = lVar37;
    if (uVar32 != 0) {
      memset((void *)in_RSI[3],0,uVar36);
    }
    uVar33 = *(uint *)((long)in_RSI + 0x24);
    lVar37 = *in_RSI;
    uVar34 = *(uint *)(in_RSI + 4);
    uVar36 = (ulong)uVar33;
    if (lVar37 != 0) goto LAB_00109bd1;
  }
  else {
    uVar33 = *(uint *)((long)in_RSI + 0x24);
LAB_00109bd1:
    uVar36 = (ulong)uVar33;
    if (uVar33 != 0) {
      uVar46 = *(uint *)(hash_table_size_primes + (ulong)uVar34 * 4);
      uVar45 = CONCAT44(0,uVar46);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar34 * 8);
      uVar31 = MeshInstance3DEditorEdgeSort::hash(in_RDX);
      uVar41 = 1;
      if (uVar31 != 0) {
        uVar41 = uVar31;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar41 * lVar2;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar45;
      lVar44 = SUB168(auVar6 * auVar18,8);
      iVar42 = SUB164(auVar6 * auVar18,8);
      uVar31 = *(uint *)(in_RSI[3] + lVar44 * 4);
      uVar47 = (ulong)uVar31;
      if (uVar31 != 0) {
        uVar31 = 0;
        do {
          if (uVar41 == (uint)uVar47) {
            uVar43 = *(uint *)(in_RSI[1] + lVar44 * 4);
            pfVar35 = (float *)((ulong)uVar43 * 0x10 + lVar37);
            if ((((*pfVar35 == *(float *)in_RDX) && (pfVar35[1] == *(float *)(in_RDX + 4))) &&
                (pfVar35[2] == *(float *)(in_RDX + 8))) && (pfVar35[3] == *(float *)(in_RDX + 0xc)))
            goto LAB_00109d1c;
          }
          uVar31 = uVar31 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(iVar42 + 1) * lVar2;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar45;
          lVar44 = SUB168(auVar7 * auVar19,8);
          uVar43 = *(uint *)(in_RSI[3] + lVar44 * 4);
          uVar47 = (ulong)uVar43;
          iVar42 = SUB164(auVar7 * auVar19,8);
        } while ((uVar43 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar47 * lVar2, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar45, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar46 + iVar42) - SUB164(auVar8 * auVar20,8)) * lVar2,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar45, uVar31 <= SUB164(auVar9 * auVar21,8)));
        uVar36 = (ulong)uVar33;
      }
    }
  }
  if ((float)uVar32 * __LC24 < (float)(uVar33 + 1)) {
    if (uVar34 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar43 = 0xffffffff;
      uVar33 = *(uint *)((long)in_RSI + 0x24);
      lVar37 = *in_RSI;
      goto LAB_00109d1c;
    }
    uVar36 = (ulong)(uVar34 + 1);
    if (uVar34 + 1 < 2) {
      uVar36 = 2;
    }
    uVar32 = *(uint *)(hash_table_size_primes + uVar36 * 4);
    *(int *)(in_RSI + 4) = (int)uVar36;
    pvVar3 = (void *)in_RSI[3];
    uVar36 = (ulong)uVar32 * 4;
    pvVar4 = (void *)in_RSI[2];
    lVar37 = Memory::alloc_static(uVar36,false);
    in_RSI[3] = lVar37;
    lVar37 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar32 << 4,false);
    *in_RSI = lVar37;
    lVar37 = Memory::alloc_static(uVar36,false);
    in_RSI[2] = lVar37;
    lVar37 = Memory::realloc_static((void *)in_RSI[1],uVar36,false);
    in_RSI[1] = lVar37;
    if (uVar32 != 0) {
      memset((void *)in_RSI[3],0,uVar36);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar36 = 0;
      lVar2 = in_RSI[3];
      lVar44 = in_RSI[2];
      do {
        uVar48 = uVar36 & 0xffffffff;
        uVar50 = (undefined4)uVar36;
        uVar46 = 0;
        uVar32 = *(uint *)((long)pvVar3 + (ulong)*(uint *)((long)pvVar4 + uVar36 * 4) * 4);
        uVar45 = (ulong)uVar32;
        lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar47 = CONCAT44(0,uVar34);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar45 * lVar38;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar47;
        lVar39 = SUB168(auVar10 * auVar22,8) * 4;
        iVar42 = SUB164(auVar10 * auVar22,8);
        puVar49 = (uint *)(lVar2 + lVar39);
        uVar33 = *puVar49;
        if (uVar33 == 0) {
          lVar38 = uVar36 * 4;
        }
        else {
          do {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar33 * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar47;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar34 + iVar42) - SUB164(auVar11 * auVar23,8)) * lVar38;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar47;
            uVar32 = SUB164(auVar12 * auVar24,8);
            if (uVar32 < uVar46) {
              *(int *)(lVar44 + uVar48 * 4) = iVar42;
              uVar33 = *puVar49;
              *puVar49 = (uint)uVar45;
              uVar46 = *(uint *)(lVar39 + lVar37);
              uVar45 = (ulong)uVar33;
              *(uint *)(lVar39 + lVar37) = (uint)uVar48;
              uVar48 = (ulong)uVar46;
              uVar46 = uVar32;
            }
            uVar50 = (undefined4)uVar48;
            uVar32 = (uint)uVar45;
            uVar46 = uVar46 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar42 + 1) * lVar38;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar47;
            lVar39 = SUB168(auVar13 * auVar25,8) * 4;
            iVar42 = SUB164(auVar13 * auVar25,8);
            puVar49 = (uint *)(lVar2 + lVar39);
            uVar33 = *puVar49;
          } while (uVar33 != 0);
          lVar38 = uVar48 << 2;
        }
        *puVar49 = uVar32;
        uVar36 = uVar36 + 1;
        *(int *)(lVar44 + lVar38) = iVar42;
        *(undefined4 *)(lVar37 + lVar39) = uVar50;
      } while ((uint)uVar36 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(pvVar4,false);
    uVar34 = *(uint *)(in_RSI + 4);
    uVar36 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar37 = *in_RSI;
  }
  uVar50 = (undefined4)uVar36;
  uVar33 = MeshInstance3DEditorEdgeSort::hash(in_RDX);
  uVar30 = *(undefined8 *)(in_RDX + 8);
  uVar32 = 1;
  if (uVar33 != 0) {
    uVar32 = uVar33;
  }
  uVar46 = 0;
  puVar1 = (undefined8 *)(lVar37 + uVar36 * 0x10);
  *puVar1 = *(undefined8 *)in_RDX;
  puVar1[1] = uVar30;
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)uVar34 * 4);
  uVar47 = CONCAT44(0,uVar33);
  lVar44 = *(long *)(hash_table_size_primes_inv + (ulong)uVar34 * 8);
  lVar39 = in_RSI[3];
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)uVar32 * lVar44;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar47;
  lVar2 = SUB168(auVar14 * auVar26,8) * 4;
  iVar42 = SUB164(auVar14 * auVar26,8);
  lVar38 = in_RSI[2];
  puVar49 = (uint *)(lVar39 + lVar2);
  lVar5 = in_RSI[1];
  uVar34 = *puVar49;
  uVar45 = uVar36;
  while (uVar34 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar34 * lVar44;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar47;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar33 + iVar42) - SUB164(auVar15 * auVar27,8)) * lVar44;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar47;
    uVar34 = SUB164(auVar16 * auVar28,8);
    uVar41 = uVar32;
    if (uVar34 < uVar46) {
      puVar40 = (uint *)(lVar2 + lVar5);
      *(int *)(lVar38 + uVar36 * 4) = iVar42;
      uVar41 = *puVar49;
      *puVar49 = uVar32;
      uVar32 = *puVar40;
      *puVar40 = (uint)uVar45;
      uVar36 = (ulong)uVar32;
      uVar45 = uVar36;
      uVar46 = uVar34;
    }
    uVar50 = (undefined4)uVar45;
    uVar46 = uVar46 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar42 + 1) * lVar44;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar47;
    lVar2 = SUB168(auVar17 * auVar29,8) * 4;
    iVar42 = SUB164(auVar17 * auVar29,8);
    puVar49 = (uint *)(lVar39 + lVar2);
    uVar32 = uVar41;
    uVar34 = *puVar49;
  }
  *puVar49 = uVar32;
  *(int *)(lVar38 + uVar36 * 4) = iVar42;
  *(undefined4 *)(lVar5 + lVar2) = uVar50;
  uVar43 = *(uint *)((long)in_RSI + 0x24);
  uVar33 = uVar43 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar33;
LAB_00109d1c:
  *(long *)param_1 = lVar37;
  *(uint *)(param_1 + 8) = uVar33;
  *(uint *)(param_1 + 0xc) = uVar43;
  return;
}



/* Callable create_custom_callable_function_pointer<MeshInstance3DEditor>(MeshInstance3DEditor*,
   char const*, void (MeshInstance3DEditor::*)()) */

MeshInstance3DEditor *
create_custom_callable_function_pointer<MeshInstance3DEditor>
          (MeshInstance3DEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC29;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00112258;
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010a60a:
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



/* MeshConvexDecompositionSettings::_initialize_classv() */

void MeshConvexDecompositionSettings::_initialize_classv(void)

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
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00116070 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "MeshConvexDecompositionSettings";
    local_70 = 0;
    local_50 = 0x1f;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_00116068 != RefCounted::_bind_methods) {
      MeshConvexDecompositionSettings::_bind_methods();
    }
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
              String::parse_latin1((String_conflict *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String_conflict *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_00116070 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String_conflict *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String_conflict *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
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
            if ((code *)PTR__bind_compatibility_methods_00116078 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String_conflict *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String_conflict *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00116080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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



/* WARNING: Removing unreachable block (ram,0x0010b0a8) */
/* String vformat<int>(String const&, int const) */

String_conflict * vformat<int>(String_conflict *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
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



/* CallableCustomMethodPointer<MeshInstance3DEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void>::call
          (CallableCustomMethodPointer<MeshInstance3DEditor,void> *this,Variant **param_1,
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
      goto LAB_0010c03f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010c03f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010c101;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010c03f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String_conflict *)"Invalid Object id \'");
    String::operator+((String_conflict *)&local_48,(String_conflict *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String_conflict *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c101:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MeshInstance3DEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void,int>::call
          (CallableCustomMethodPointer<MeshInstance3DEditor,void,int> *this,Variant **param_1,
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
  String_conflict local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String_conflict)0x0;
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
      goto LAB_0010c2c8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010c2c8;
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
        uVar3 = _LC112;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010c379;
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
LAB_0010c2c8:
    local_40 = 0;
    String::parse_latin1((String_conflict *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String_conflict *)"Invalid Object id \'");
    String::operator+(local_38,(String_conflict *)local_48);
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
LAB_0010c379:
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
    StringName::StringName((StringName *)&local_50,(String_conflict *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String_conflict *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00116088 != Object::_bind_methods) {
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



/* NavigationMesh::_initialize_classv() */

void NavigationMesh::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00116070 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "NavigationMesh";
    local_70 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_00116090 != Resource::_bind_methods) {
      NavigationMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance3DEditorPlugin::_initialize_classv() */

void MeshInstance3DEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "Node";
        local_70 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00116070 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "EditorPlugin";
      local_70 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00116098 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_001160a0 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "MeshInstance3DEditorPlugin";
    local_70 = 0;
    local_50 = 0x1a;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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



/* MeshInstance3DEditor::_initialize_classv() */

void MeshInstance3DEditor::_initialize_classv(void)

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
          String::parse_latin1((String_conflict *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String_conflict *)&local_70,"Node");
          StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_00116070 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "CanvasItem";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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
        if ((code *)PTR__bind_compatibility_methods_00116078 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "Control";
      local_70 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_001160a8 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "MeshInstance3DEditor";
    local_70 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010d04f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010d04f:
    cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010d103;
  }
  cVar6 = String::operator==(param_1,"Node");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010d103;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010d103:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance3DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
MeshInstance3DEditorPlugin::is_class(MeshInstance3DEditorPlugin *this,String_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010d27f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010d27f:
    cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010d333;
  }
  cVar6 = String::operator==(param_1,"MeshInstance3DEditorPlugin");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010d333;
    }
    cVar6 = String::operator==(param_1,"EditorPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_0010d43e;
    }
  }
LAB_0010d333:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d43e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010d4bf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010d4bf:
    cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010d573;
  }
  cVar6 = String::operator==(param_1,"Control");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010d573;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_0010d67e;
    }
  }
LAB_0010d573:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d67e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance3DEditor::is_class(String const&) const */

undefined8 __thiscall
MeshInstance3DEditor::is_class(MeshInstance3DEditor *this,String_conflict *param_1)

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
            if (lVar4 == 0) goto LAB_0010d6ff;
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
LAB_0010d6ff:
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010d7b3;
  }
  cVar5 = String::operator==(param_1,"MeshInstance3DEditor");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d7b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010d87f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010d87f:
    cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010d933;
  }
  cVar6 = String::operator==(param_1,"BoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010d933;
    }
    cVar6 = String::operator==(param_1,"Container");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Control::is_class((Control *)this,param_1);
        return uVar8;
      }
      goto LAB_0010da3e;
    }
  }
LAB_0010d933:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010da3e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String_conflict *param_1)

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
            if (lVar4 == 0) goto LAB_0010dabf;
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
LAB_0010dabf:
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010db73;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010db73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010dc3f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010dc3f:
    cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010dcf3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010dcf3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010dcf3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshConvexDecompositionSettings::is_class(String const&) const */

undefined8 __thiscall
MeshConvexDecompositionSettings::is_class
          (MeshConvexDecompositionSettings *this,String_conflict *param_1)

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
            if (lVar4 == 0) goto LAB_0010de6f;
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
LAB_0010de6f:
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010df23;
  }
  cVar5 = String::operator==(param_1,"MeshConvexDecompositionSettings");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010df23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String_conflict *param_1)

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
            if (lVar4 == 0) goto LAB_0010dfef;
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
LAB_0010dfef:
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010e0a3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e0a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::is_class(String const&) const */

undefined8 __thiscall NavigationMesh::is_class(NavigationMesh *this,String_conflict *param_1)

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
            if (lVar4 == 0) goto LAB_0010e16f;
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
LAB_0010e16f:
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010e223;
  }
  cVar5 = String::operator==(param_1,"NavigationMesh");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e223:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
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
        if (pvVar5 == (void *)0x0) goto LAB_0010e3b5;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010e3b5:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
  local_78 = &_LC31;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC31;
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010e56c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e56c:
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010e7bc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e7bc:
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010ea21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ea21:
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



/* MeshConvexDecompositionSettings::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
MeshConvexDecompositionSettings::_get_property_listv
          (MeshConvexDecompositionSettings *this,List *param_1,bool param_2)

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
  local_78 = "MeshConvexDecompositionSettings";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MeshConvexDecompositionSettings";
  local_98 = 0;
  local_70 = 0x1f;
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010ecd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ecd1:
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
  StringName::StringName((StringName *)&local_78,"MeshConvexDecompositionSettings",false);
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



/* NavigationMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall NavigationMesh::_get_property_listv(NavigationMesh *this,List *param_1,bool param_2)

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
  local_78 = "NavigationMesh";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMesh";
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010ef81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ef81:
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
  StringName::StringName((StringName *)&local_78,"NavigationMesh",false);
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



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010f231;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f231:
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



/* MeshInstance3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
MeshInstance3DEditorPlugin::_get_property_listv
          (MeshInstance3DEditorPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MeshInstance3DEditorPlugin";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MeshInstance3DEditorPlugin";
  local_98 = 0;
  local_70 = 0x1a;
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010f4e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f4e1:
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
  StringName::StringName((StringName *)&local_78,"MeshInstance3DEditorPlugin",false);
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010f791;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f791:
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
  if ((code *)PTR__get_property_list_001160b0 != Object::_get_property_list) {
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010fa61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fa61:
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
  if ((code *)PTR__get_property_list_001160b8 != CanvasItem::_get_property_list) {
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



/* MeshInstance3DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MeshInstance3DEditor::_get_property_listv(MeshInstance3DEditor *this,List *param_1,bool param_2)

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
  local_78 = "MeshInstance3DEditor";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MeshInstance3DEditor";
  local_98 = 0;
  local_70 = 0x14;
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010fd31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fd31:
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
  StringName::StringName((StringName *)&local_78,"MeshInstance3DEditor",false);
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010ffe1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ffe1:
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00110291;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110291:
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
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00110541;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110541:
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



/* Ref<ArrayMesh>::unref() */

void __thiscall Ref<ArrayMesh>::unref(Ref<ArrayMesh> *this)

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



/* Ref<Shape3D>::unref() */

void __thiscall Ref<Shape3D>::unref(Ref<Shape3D> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00110b30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00110b30;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
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
  if (lVar7 == lVar3) {
LAB_00110a9c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00110a31;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00110a9c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00110a31:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Ref<Shape3D> >::_unref() */

void __thiscall CowData<Ref<Shape3D>>::_unref(CowData<Ref<Shape3D>> *this)

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
LAB_00110c1d:
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
            goto LAB_00110c1d;
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



/* CowData<Ref<Shape3D> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Shape3D>>::_realloc(CowData<Ref<Shape3D>> *this,long param_1)

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
/* Error CowData<Ref<Shape3D> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Shape3D>>::resize<false>(CowData<Ref<Shape3D>> *this,long param_1)

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
LAB_00110fd0:
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
  if (lVar11 == 0) goto LAB_00110fd0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_00110e7a:
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
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_00110e7a;
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
    goto LAB_00110e40;
  }
  if (lVar11 == lVar8) {
LAB_00110f4b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00110e40:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_00110f2b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00110f4b;
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
LAB_00110f2b:
  puVar10[-1] = param_1;
  return 0;
}



/* MeshInstance3DEditor::_node_removed(Node*) */

void MeshInstance3DEditor::_GLOBAL__sub_I__node_removed(void)

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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MeshInstance3DEditor::~MeshInstance3DEditor() */

void __thiscall MeshInstance3DEditor::~MeshInstance3DEditor(MeshInstance3DEditor *this)

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
/* MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings() */

void __thiscall
MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings
          (MeshConvexDecompositionSettings *this)

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
/* CallableCustomMethodPointer<MeshInstance3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshInstance3DEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MeshInstance3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MeshInstance3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MeshInstance3DEditor,void> *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


