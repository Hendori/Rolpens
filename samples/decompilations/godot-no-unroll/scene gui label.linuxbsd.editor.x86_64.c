
/* Label::get_autowrap_mode() const */

undefined4 __thiscall Label::get_autowrap_mode(Label *this)

{
  return *(undefined4 *)(this + 0x9e0);
}



/* Label::get_justification_flags() const */

undefined8 __thiscall Label::get_justification_flags(Label *this)

{
  return *(undefined8 *)(this + 0x9e8);
}



/* Label::is_uppercase() const */

Label __thiscall Label::is_uppercase(Label *this)

{
  return this[0xa0c];
}



/* Label::get_horizontal_alignment() const */

undefined4 __thiscall Label::get_horizontal_alignment(Label *this)

{
  return *(undefined4 *)(this + 0x9c8);
}



/* Label::get_vertical_alignment() const */

undefined4 __thiscall Label::get_vertical_alignment(Label *this)

{
  return *(undefined4 *)(this + 0x9cc);
}



/* Label::get_structured_text_bidi_override() const */

undefined4 __thiscall Label::get_structured_text_bidi_override(Label *this)

{
  return *(undefined4 *)(this + 0xa3c);
}



/* Label::get_text_direction() const */

undefined4 __thiscall Label::get_text_direction(Label *this)

{
  return *(undefined4 *)(this + 0xa38);
}



/* Label::is_clipping_text() const */

Label __thiscall Label::is_clipping_text(Label *this)

{
  return this[0x9f0];
}



/* Label::get_text_overrun_behavior() const */

undefined4 __thiscall Label::get_text_overrun_behavior(Label *this)

{
  return *(undefined4 *)(this + 0xa00);
}



/* Label::get_visible_characters() const */

undefined4 __thiscall Label::get_visible_characters(Label *this)

{
  return *(undefined4 *)(this + 0xa4c);
}



/* Label::get_visible_ratio() const */

undefined4 __thiscall Label::get_visible_ratio(Label *this)

{
  return *(undefined4 *)(this + 0xa50);
}



/* Label::get_visible_characters_behavior() const */

undefined4 __thiscall Label::get_visible_characters_behavior(Label *this)

{
  return *(undefined4 *)(this + 0xa48);
}



/* Label::get_lines_skipped() const */

undefined4 __thiscall Label::get_lines_skipped(Label *this)

{
  return *(undefined4 *)(this + 0xa54);
}



/* Label::get_max_lines_visible() const */

undefined4 __thiscall Label::get_max_lines_visible(Label *this)

{
  return *(undefined4 *)(this + 0xa58);
}



/* Label::get_total_character_count() const */

int __thiscall Label::get_total_character_count(Label *this)

{
  int iVar1;
  
  if (*(long *)(this + 0x9d8) != 0) {
    iVar1 = (int)*(undefined8 *)(*(long *)(this + 0x9d8) + -8);
    return iVar1 + -1 + (uint)(iVar1 == 0);
  }
  return 0;
}



/* Label::_invalidate() */

void __thiscall Label::_invalidate(Label *this)

{
  this[0xa0e] = (Label)0x1;
  CanvasItem::queue_redraw();
  return;
}



/* Label::set_visible_characters_behavior(TextServer::VisibleCharactersBehavior) */

void __thiscall Label::set_visible_characters_behavior(Label *this,int param_2)

{
  if (*(int *)(this + 0xa48) != param_2) {
    if ((param_2 == 0) || (*(int *)(this + 0xa48) == 0)) {
      this[0xa0f] = (Label)0x1;
    }
    *(int *)(this + 0xa48) = param_2;
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Label::get_structured_text_bidi_override_options() const */

void Label::get_structured_text_bidi_override_options(void)

{
  long in_RSI;
  Array *in_RDI;
  
  Array::Array(in_RDI,(Array *)(in_RSI + 0xa40));
  return;
}



/* Label::set_uppercase(bool) */

void __thiscall Label::set_uppercase(Label *this,bool param_1)

{
  if (this[0xa0c] != (Label)param_1) {
    this[0xa0c] = (Label)param_1;
    this[0xa0f] = (Label)0x1;
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Label::set_clip_text(bool) */

void __thiscall Label::set_clip_text(Label *this,bool param_1)

{
  if (this[0x9f0] != (Label)param_1) {
    this[0x9f0] = (Label)param_1;
    CanvasItem::queue_redraw();
    Control::update_minimum_size();
    return;
  }
  return;
}



/* Label::set_vertical_alignment(VerticalAlignment) */

void __thiscall Label::set_vertical_alignment(Label *this,uint param_2)

{
  if (3 < param_2) {
    _err_print_index_error
              ("set_vertical_alignment","scene/gui/label.cpp",0x411,(long)(int)param_2,4,
               "(int)p_alignment","4","",false,false);
    return;
  }
  if (*(uint *)(this + 0x9cc) != param_2) {
    *(uint *)(this + 0x9cc) = param_2;
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Label::set_visible_characters(int) */

void __thiscall Label::set_visible_characters(Label *this,int param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(int *)(this + 0xa4c) == param_1) {
    return;
  }
  *(int *)(this + 0xa4c) = param_1;
  fVar2 = _LC5;
  if (((*(long *)(this + 0x9d8) != 0) &&
      (iVar1 = (int)*(undefined8 *)(*(long *)(this + 0x9d8) + -8), iVar1 != 0)) &&
     (iVar1 = iVar1 + -1, 0 < iVar1)) {
    fVar2 = (float)param_1 / (float)iVar1;
  }
  *(float *)(this + 0xa50) = fVar2;
  if (*(int *)(this + 0xa48) == 0) {
    this[0xa0f] = (Label)0x1;
  }
  CanvasItem::queue_redraw();
  return;
}



/* Label::set_visible_ratio(float) */

void __thiscall Label::set_visible_ratio(Label *this,float param_1)

{
  int iVar1;
  float fVar2;
  
  if (param_1 != *(float *)(this + 0xa50)) {
    if (param_1 < _LC5) {
      fVar2 = 0.0;
      if (param_1 < 0.0) {
        iVar1 = 0;
        param_1 = 0.0;
      }
      else {
        if (*(long *)(this + 0x9d8) == 0) {
          fVar2 = 0.0;
        }
        else {
          iVar1 = (int)*(undefined8 *)(*(long *)(this + 0x9d8) + -8);
          if (iVar1 != 0) {
            fVar2 = (float)(iVar1 + -1);
          }
        }
        iVar1 = (int)(fVar2 * param_1);
      }
    }
    else {
      iVar1 = -1;
      param_1 = _LC5;
    }
    *(int *)(this + 0xa4c) = iVar1;
    *(float *)(this + 0xa50) = param_1;
    if (*(int *)(this + 0xa48) == 0) {
      this[0xa0f] = (Label)0x1;
    }
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000a94 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000a9c = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xa94) = uVar3;
  *(undefined8 *)(lVar2 + 0xa9c) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000abc = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000ac4 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xabc) = uVar3;
  *(undefined8 *)(lVar2 + 0xac4) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,0,param_3,param_4);
    _DAT_00000aa4 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000aac = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xaa4) = uVar3;
  *(undefined8 *)(lVar2 + 0xaac) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    _DAT_00000ab4 = Variant::operator_cast_to_float((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,1,param_3,param_4);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(lVar2 + 0xab4) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000a90 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa90) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000acc = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xacc) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000a8c = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa8c) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000ad0 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xad0) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,3,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000a88 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,3,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa88) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    _DAT_00000ab8 = Variant::operator_cast_to_float((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,1,param_3,param_4);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(lVar2 + 0xab8) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::get_label_settings() const */

void Label::get_label_settings(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0xa70) != 0) {
    *in_RDI = *(long *)(in_RSI + 0xa70);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,5,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa78);
  if (pOVar5 == pOVar1) goto LAB_00100f00;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100f00;
    *(undefined8 *)(lVar4 + 0xa78) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100f00;
    *(Object **)(lVar4 + 0xa78) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa78) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100f00;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100f00:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */

void __thiscall CowData<float>::_ref(CowData<float> *this,CowData *param_1)

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



/* Label::get_tab_stops() const */

void Label::get_tab_stops(void)

{
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 0xa68) != 0) {
    CowData<float>::_ref((CowData<float> *)(in_RDI + 8),(CowData *)(in_RSI + 0xa68));
  }
  return;
}



/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */

void __thiscall CowData<RID>::_ref(CowData<RID> *this,CowData *param_1)

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



/* Ref<TextServer>::TEMPNAMEPLACEHOLDERVALUE(Ref<TextServer> const&) [clone .isra.0] */

void __thiscall Ref<TextServer>::operator=(Ref<TextServer> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,2,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Label::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,2,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa80);
  if (pOVar5 == pOVar1) goto LAB_00101200;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101200;
    *(undefined8 *)(lVar4 + 0xa80) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Font::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101200;
    *(Object **)(lVar4 + 0xa80) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa80) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101200;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101200:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
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



/* Label::get_text() const */

void Label::get_text(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x9d0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x9d0));
  }
  return;
}



/* Label::get_ellipsis_char() const */

void Label::get_ellipsis_char(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x9f8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x9f8));
  }
  return;
}



/* Label::get_paragraph_separator() const */

void Label::get_paragraph_separator(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xa28) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xa28));
  }
  return;
}



/* Label::get_language() const */

void Label::get_language(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xa30) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xa30));
  }
  return;
}



/* Label::set_paragraph_separator(String const&) */

void __thiscall Label::set_paragraph_separator(Label *this,String *param_1)

{
  char cVar1;
  
  cVar1 = String::operator!=((String *)(this + 0xa28),param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(long *)(this + 0xa28) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa28),(CowData *)param_1);
  }
  this[0xa0f] = (Label)0x1;
  CanvasItem::queue_redraw();
  return;
}



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  lVar2 = *(long *)(this + 8);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    *(long *)(this + 8) = lVar3;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* Label::_get_line_rect(int, int) const */

undefined1  [16] __thiscall Label::_get_line_rect(Label *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  Object *pOVar11;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar21 [16];
  ulong uVar20;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  Object *local_58;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar11 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar11 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar9 = (long)param_1;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar11 = (Object *)0x0;
  }
  lVar10 = *(long *)(this + 0xa18);
  if (lVar9 < 0) {
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + -8);
      goto LAB_00101943;
    }
  }
  else if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + -8);
    if (lVar10 <= lVar9) goto LAB_00101943;
    lVar12 = lVar9 * 0x28;
    iVar7 = (**(code **)(*(long *)pOVar11 + 0x5b8))(pOVar11);
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar11), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
    }
    cVar5 = (**(code **)(*(long *)this + 0x340))(this);
    pOVar11 = *(Object **)(this + 0xa78);
    if ((pOVar11 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      pOVar11 = (Object *)0x0;
    }
    if (*(long *)(this + 0xa70) == 0) {
      local_58 = (Object *)0x0;
      pOVar3 = *(Object **)(this + 0xa80);
      if (pOVar3 != (Object *)0x0) {
        cVar6 = RefCounted::reference();
        local_58 = pOVar3;
        if (cVar6 != '\0') goto LAB_00101647;
        local_58 = (Object *)0x0;
        lVar10 = *(long *)(this + 0xa70);
        goto LAB_0010164e;
      }
LAB_00101908:
      uVar8 = *(undefined4 *)(this + 0xa88);
    }
    else {
      LabelSettings::get_font();
      if (local_48 == (Object *)0x0) {
        local_58 = (Object *)0x0;
        pOVar3 = *(Object **)(this + 0xa80);
        if (pOVar3 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          local_58 = pOVar3;
          if (cVar6 == '\0') {
            local_58 = (Object *)0x0;
          }
          goto LAB_00101630;
        }
      }
      else {
        LabelSettings::get_font();
LAB_00101630:
        if (((local_48 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)local_48 + 0x140))();
          Memory::free_static(local_48,false);
        }
      }
LAB_00101647:
      lVar10 = *(long *)(this + 0xa70);
LAB_0010164e:
      if (lVar10 == 0) goto LAB_00101908;
      uVar8 = LabelSettings::get_font_size();
    }
    fVar13 = (float)(**(code **)(*(long *)local_58 + 0x218))(local_58,uVar8);
    fVar14 = (float)Control::get_size();
    lVar2 = *(long *)(this + 0xa18);
    if (lVar2 != 0) {
      lVar10 = *(long *)(lVar2 + -8);
      if (lVar10 <= lVar9) goto LAB_00101943;
      lVar9 = (long)param_2;
      lVar10 = *(long *)(lVar2 + 0x20 + lVar12);
      if (lVar9 < 0) {
        if (lVar10 != 0) {
          lVar10 = *(long *)(lVar10 + -8);
          goto LAB_00101943;
        }
      }
      else if (lVar10 != 0) {
        lVar10 = *(long *)(lVar10 + -8);
        if (lVar10 <= lVar9) goto LAB_00101943;
        local_48 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_48,*(Ref **)(TextServerManager::singleton + 0x178));
        pOVar3 = local_48;
        fVar15 = (float)(**(code **)(*(long *)local_48 + 0x720))(local_48);
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        local_48 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_48,*(Ref **)(TextServerManager::singleton + 0x178));
        pOVar3 = local_48;
        dVar16 = (double)(**(code **)(*(long *)local_48 + 0x728))(local_48);
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        local_48 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_48,*(Ref **)(TextServerManager::singleton + 0x178));
        pOVar3 = local_48;
        dVar17 = (double)(**(code **)(*(long *)local_48 + 0x730))(local_48);
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        dVar18 = dVar16 + dVar17;
        if (dVar18 < (double)(int)fVar13) {
          dVar18 = (double)(int)fVar13 - dVar18;
          dVar19 = _LC31 * dVar18;
          dVar18 = dVar19 + dVar16 + (dVar18 - dVar19) + dVar17;
        }
        uVar1 = *(uint *)(this + 0x9c8);
        if (uVar1 == 2) {
          if (cVar5 != '\0') {
LAB_001019ae:
            uVar20 = StyleBox::get_offset();
            goto LAB_0010183a;
          }
        }
        else if (uVar1 < 3) {
          if (uVar1 != 0) {
            auVar21._4_12_ = SUB1612((undefined1  [16])0x0,4);
            auVar21._0_4_ = (float)((int)(fVar14 - fVar15) / 2);
            uVar20 = auVar21._0_8_;
            goto LAB_0010183a;
          }
          if (cVar5 == '\0') goto LAB_001019ae;
        }
        else {
          uVar20 = 0;
          if (uVar1 != 3) goto LAB_0010183a;
          if ((iVar7 != 2) || (*(int *)(this + 0x9e0) == 0)) {
            uVar20 = StyleBox::get_offset();
            goto LAB_0010183a;
          }
        }
        fVar13 = (float)StyleBox::get_margin(pOVar11);
        auVar22._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar22._0_4_ = (float)(int)((fVar14 - fVar13) - fVar15);
        uVar20 = auVar22._0_8_;
LAB_0010183a:
        auVar23._12_4_ = (float)dVar18;
        auVar23._8_4_ = fVar15;
        if (((local_58 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
        }
        if (((pOVar11 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
           (cVar5 = predelete_handler(pOVar11), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        auVar23._0_8_ = uVar20 & 0xffffffff;
        return auVar23;
      }
      lVar10 = 0;
      goto LAB_00101943;
    }
  }
  lVar10 = 0;
LAB_00101943:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* Label::get_line_rect(int) const */

undefined8 __thiscall Label::get_line_rect(Label *this,int param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (((-1 < param_1) && (param_1 < *(int *)(this + 0xa20))) &&
     (lVar1 = *(long *)(this + 0xa18), lVar1 != 0)) {
    plVar3 = (long *)(lVar1 + 0x20);
    lVar4 = 0;
    iVar5 = 0;
    while( true ) {
      if (*(long *)(lVar1 + -8) <= lVar4) {
        return 0;
      }
      lVar2 = (long)iVar5;
      if (*plVar3 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(*plVar3 + -8);
        lVar2 = lVar2 + lVar6;
      }
      if (param_1 < lVar2) break;
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 5;
      iVar5 = iVar5 + (int)lVar6;
    }
    uVar7 = _get_line_rect(this,(int)lVar4,param_1 - iVar5);
    return uVar7;
  }
  return 0;
}



/* Label::set_label_settings(Ref<LabelSettings> const&) */

void __thiscall Label::set_label_settings(Label *this,Ref *param_1)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Label aLStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0xa70);
  pCVar2 = *(Callable **)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00101e70;
  }
  if (pCVar1 == (Callable *)0x0) {
    *(Callable **)(this + 0xa70) = pCVar2;
    if (pCVar2 != (Callable *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') goto LAB_00101d64;
      *(undefined8 *)(this + 0xa70) = 0;
    }
  }
  else {
    create_custom_callable_function_pointer<Label>
              (aLStack_48,(char *)this,(_func_void *)"&Label::_invalidate");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aLStack_48);
    pOVar3 = *(Object **)param_1;
    pOVar5 = *(Object **)(this + 0xa70);
    if (pOVar3 != pOVar5) {
      *(Object **)(this + 0xa70) = pOVar3;
      if (pOVar3 == (Object *)0x0) {
LAB_00101e2b:
        if (pOVar5 == (Object *)0x0) goto LAB_00101da7;
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') goto LAB_00101e44;
      }
      else {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0xa70) = 0;
          goto LAB_00101e2b;
        }
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          if (cVar4 == '\0') goto LAB_00101d64;
LAB_00101e44:
          cVar4 = predelete_handler(pOVar5);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
LAB_00101d64:
      pOVar5 = *(Object **)(this + 0xa70);
    }
    if (pOVar5 != (Object *)0x0) {
      create_custom_callable_function_pointer<Label>
                (aLStack_48,(char *)this,(_func_void *)"&Label::_invalidate");
      Resource::connect_changed((Callable *)pOVar5,(uint)aLStack_48);
      Callable::~Callable((Callable *)aLStack_48);
    }
  }
LAB_00101da7:
  this[0xa0e] = (Label)0x1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
  }
LAB_00101e70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::set_text(String const&) */

void __thiscall Label::set_text(Label *this,String *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  float fVar7;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = String::operator==((String *)(this + 0x9d0),param_1);
  if (cVar2 == '\0') {
    if (*(long *)(this + 0x9d0) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x9d0),(CowData *)param_1);
    }
    StringName::StringName((StringName *)&local_40,"",false);
    cVar2 = Node::can_auto_translate();
    if (cVar2 == '\0') {
      lVar4 = *(long *)param_1;
      local_48 = 0;
      if (lVar4 != 0) {
        plVar1 = (long *)(lVar4 + -0x10);
        do {
          lVar4 = *plVar1;
          if (lVar4 == 0) goto LAB_00102090;
          LOCK();
          lVar5 = *plVar1;
          bVar6 = lVar4 == lVar5;
          if (bVar6) {
            *plVar1 = lVar4 + 1;
            lVar5 = lVar4;
          }
          UNLOCK();
        } while (!bVar6);
        if (lVar5 == -1) {
LAB_00102090:
          lVar4 = 0;
        }
        else {
          local_48 = *(long *)param_1;
          lVar4 = local_48;
        }
      }
    }
    else {
      StringName::StringName((StringName *)&local_38,param_1,false);
      Object::tr((StringName *)&local_48,(StringName *)this);
      lVar4 = local_48;
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
        lVar4 = local_48;
      }
    }
    if (lVar4 != *(long *)(this + 0x9d8)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9d8));
      lVar4 = local_48;
      local_48 = 0;
      *(long *)(this + 0x9d8) = lVar4;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    fVar7 = _LC5;
    this[0xa0f] = (Label)0x1;
    if (*(float *)(this + 0xa50) < fVar7) {
      if (*(long *)(this + 0x9d8) == 0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 0.0;
        iVar3 = (int)*(undefined8 *)(*(long *)(this + 0x9d8) + -8);
        if (iVar3 != 0) {
          fVar7 = (float)(iVar3 + -1);
        }
      }
      *(int *)(this + 0xa4c) = (int)(*(float *)(this + 0xa50) * fVar7);
    }
    CanvasItem::queue_redraw();
    Control::update_minimum_size();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::update_configuration_warnings();
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Label::Label(String const&) */

void __thiscall Label::Label(Label *this,String *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00128cc8;
  *(undefined4 *)(this + 0x9e0) = 0;
  *(undefined8 *)(this + 0x9e8) = 0xa3;
  this[0x9f0] = (Label)0x0;
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined1 (*) [16])(this + 0x9d0) = (undefined1  [16])0x0;
  String::parse_utf32((StrRange *)(this + 0x9f8));
  *(undefined8 *)(this + 0xa08) = 0x101010000000000;
  *(undefined8 *)(this + 0xa00) = 0;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined4 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  String::parse_latin1((StrRange *)(this + 0xa28));
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  Array::Array((Array *)(this + 0xa40));
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xa48) = 0xffffffff00000000;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  uVar3 = _UNK_00129d78;
  uVar2 = __LC41;
  *(undefined8 *)(this + 0xa50) = 0x3f800000;
  *(undefined4 *)(this + 0xa58) = 0xffffffff;
  *(undefined8 *)(this + 0xa88) = 0;
  *(undefined4 *)(this + 0xa90) = 0;
  *(undefined8 *)(this + 0xab4) = 0;
  *(undefined8 *)(this + 0xa94) = uVar2;
  *(undefined8 *)(this + 0xa9c) = uVar3;
  *(undefined8 *)(this + 0xaa4) = uVar2;
  *(undefined8 *)(this + 0xaac) = uVar3;
  *(undefined8 *)(this + 0xabc) = uVar2;
  *(undefined8 *)(this + 0xac4) = uVar3;
  Control::set_mouse_filter(this,2);
  set_text(this,param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::set_v_size_flags(this,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::_bind_methods() */

void Label::_bind_methods(void)

{
  char cVar1;
  MethodBind *pMVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_88 [2];
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_b8,"set_horizontal_alignment");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,HorizontalAlignment>(set_horizontal_alignment);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_horizontal_alignment",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,HorizontalAlignment>(get_horizontal_alignment);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_vertical_alignment");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,VerticalAlignment>(set_vertical_alignment);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_vertical_alignment",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,VerticalAlignment>(get_vertical_alignment);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_text");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,String_const&>(set_text);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_text",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,String>(get_text);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_label_settings");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Ref<LabelSettings>const&>(set_label_settings);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_label_settings",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Ref<LabelSettings>>(get_label_settings);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_text_direction");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Control::TextDirection>(set_text_direction);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_text_direction",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Control::TextDirection>(get_text_direction);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_language");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,String_const&>(set_language);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_language",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,String>(get_language);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_paragraph_separator");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,String_const&>(set_paragraph_separator);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_paragraph_separator",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,String>(get_paragraph_separator);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_autowrap_mode");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,TextServer::AutowrapMode>(set_autowrap_mode);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_autowrap_mode",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,TextServer::AutowrapMode>(get_autowrap_mode);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_justification_flags");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,BitField<TextServer::JustificationFlag>>
                     (set_justification_flags);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_justification_flags",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,BitField<TextServer::JustificationFlag>>
                     (get_justification_flags);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_clip_text");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,bool>(set_clip_text);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"is_clipping_text",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,bool>(is_clipping_text);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_tab_stops");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Vector<float>const&>(set_tab_stops);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_tab_stops",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Vector<float>>(get_tab_stops);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_text_overrun_behavior");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,TextServer::OverrunBehavior>(set_text_overrun_behavior);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_text_overrun_behavior",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,TextServer::OverrunBehavior>(get_text_overrun_behavior);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_ellipsis_char");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,String_const&>(set_ellipsis_char);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_ellipsis_char",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,String>(get_ellipsis_char);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_uppercase");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,bool>(set_uppercase);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"is_uppercase",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,bool>(is_uppercase);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"get_line_height");
  Variant::Variant((Variant *)&local_78,-1);
  local_58 = (undefined1  [16])0x0;
  pcStack_60 = (code *)0x0;
  local_88[0] = (Variant *)&local_78;
  pMVar2 = create_method_bind<Label,int,int>(get_line_height);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,local_88,1);
  if (Variant::needs_deinit[(int)pcStack_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_line_count",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(get_line_count);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_visible_line_count",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(get_visible_line_count);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_total_character_count",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(get_total_character_count);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_visible_characters");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(set_visible_characters);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_visible_characters",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(get_visible_characters);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_visible_characters_behavior",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,TextServer::VisibleCharactersBehavior>
                     (get_visible_characters_behavior);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_visible_characters_behavior");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,TextServer::VisibleCharactersBehavior>
                     (set_visible_characters_behavior);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_visible_ratio");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,float>(set_visible_ratio);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_visible_ratio",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,float>(get_visible_ratio);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_lines_skipped");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(set_lines_skipped);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_lines_skipped",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(get_lines_skipped);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_max_lines_visible");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(set_max_lines_visible);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_max_lines_visible",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,int>(get_max_lines_visible);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_structured_text_bidi_override");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,TextServer::StructuredTextParser>
                     (set_structured_text_bidi_override);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_structured_text_bidi_override",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,TextServer::StructuredTextParser>
                     (get_structured_text_bidi_override);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"set_structured_text_bidi_override_options");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Array>(set_structured_text_bidi_override_options);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHODP((char *)&local_b8,(char ***)"get_structured_text_bidi_override_options",0);
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Array>(get_structured_text_bidi_override_options);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  D_METHOD<char_const*>((char *)&local_b8,"get_character_bounds");
  uStack_70 = 0;
  pcStack_68 = (code *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  pMVar2 = create_method_bind<Label,Rect2,int>(get_character_bounds);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_b8);
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_b8 = "text";
  local_f0 = 0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,4,(StrRange *)&local_f0,0x12,(String *)&local_e8,6,&local_e0)
  ;
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"LabelSettings");
  local_f0 = 0;
  local_b8 = "label_settings";
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,0x18,(StrRange *)&local_f0,0x11,(String *)&local_e8,6,
             &local_e0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"Left,Center,Right,Fill");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"horizontal_alignment");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"Top,Center,Bottom,Fill");
  local_f0 = 0;
  local_b8 = "vertical_alignment";
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"Off,Arbitrary,Word,Word (Smart)");
  local_b8 = "autowrap_mode";
  local_f0 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = 
  "Kashida Justification:1,Word Justification:2,Justify Only After Last Tab:8,Skip Last Line:32,Skip Last Line With Visible Characters:64,Do Not Skip Single Line:128"
  ;
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0xa2;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = "justification_flags";
  local_f0 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,6,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"paragraph_separator");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,4,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  local_b8 = "clip_text";
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "Trim Nothing,Trim Characters,Trim Words,Ellipsis,Word Ellipsis";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0x3e;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = "text_overrun_behavior";
  local_f0 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  local_b8 = "ellipsis_char";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,4,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"uppercase");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_b8 = "tab_stops";
  local_f0 = 0;
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,0x20,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0)
  ;
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  local_c8 = (char *)0x0;
  String::parse_latin1((String *)&local_c8,"");
  local_b8 = "Displayed Text";
  local_d0 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d0);
  local_b8 = "Label";
  local_d8 = 0;
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_d8,false);
  ClassDB::add_property_group((StringName *)&local_b8,(String *)&local_d0,(String *)&local_c8,0);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "0,999,1";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = "lines_skipped";
  local_f0 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"-1,999,1");
  local_f0 = 0;
  local_b8 = "max_lines_visible";
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "-1,128000,1";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "visible_characters";
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1
            ((String *)&local_e8,
             "Characters Before Shaping,Characters After Shaping,Glyphs (Layout Direction),Glyphs (Left-to-Right),Glyphs (Right-to-Left)"
            );
  local_b8 = "visible_characters_behavior";
  local_f0 = 0;
  local_b0 = 0x1b;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"0,1,0.001");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"visible_ratio");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,3,(StrRange *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  local_c8 = (char *)0x0;
  String::parse_latin1((String *)&local_c8,"");
  local_b8 = "BiDi";
  local_d0 = 0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_b8,(String *)&local_d8,false);
  ClassDB::add_property_group((StringName *)&local_b8,(String *)&local_d0,(String *)&local_c8,0);
  if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"Auto,Left-to-Right,Right-to-Left,Inherited");
  local_b8 = "text_direction";
  local_f0 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"language");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,4,(StrRange *)&local_f0,0x20,(String *)&local_e8,6,&local_e0)
  ;
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"Default,URI,File,Email,List,None,Custom");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"structured_text_bidi_override");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"Label");
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"structured_text_bidi_override_options");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,0x1c,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0)
  ;
  local_c8 = "Label";
  local_f8 = 0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"normal",false);
  StringName::StringName((StringName *)&local_c8,"normal_style",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,5,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') &&
     (((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b8 != (undefined *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"line_spacing",false);
  StringName::StringName((StringName *)&local_c8,"line_spacing",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,1,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"paragraph_spacing",false);
  StringName::StringName((StringName *)&local_c8,"paragraph_spacing",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,1,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') &&
     (((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b8 != (undefined *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"font",false);
  StringName::StringName((StringName *)&local_c8,"font",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,2,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_c8,"font_size",false);
  StringName::StringName((StringName *)&local_d0,"font_size",false);
  local_b8 = "Label";
  local_d8 = 0;
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,3,(MethodDefinition *)&local_b8,(StrRange *)&local_d0,(StringName *)&local_c8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') &&
     (((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_c8 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_c8,"font_color",false);
  StringName::StringName((StringName *)&local_d0,"font_color",false);
  local_b8 = "Label";
  local_d8 = 0;
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,0,(MethodDefinition *)&local_b8,(StrRange *)&local_d0,(StringName *)&local_c8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"font_shadow_color",false);
  StringName::StringName((StringName *)&local_c8,"font_shadow_color",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,0,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') &&
     (((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b8 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"shadow_offset_x",false);
  StringName::StringName((StringName *)&local_c8,"font_shadow_offset.x",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,1,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"shadow_offset_y",false);
  StringName::StringName((StringName *)&local_c8,"font_shadow_offset.y",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,1,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') &&
     (((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b8 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"font_outline_color",false);
  StringName::StringName((StringName *)&local_c8,"font_outline_color",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,0,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"outline_size",false);
  StringName::StringName((StringName *)&local_c8,"font_outline_size",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,1,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') &&
     (((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b8 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  uVar3 = ThemeDB::get_singleton();
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pcStack_68 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
               ::_M_manager;
  pcStack_60 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"shadow_outline_size",false);
  StringName::StringName((StringName *)&local_c8,"font_shadow_outline_size",false);
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Label");
  StringName::StringName((StringName *)&local_d0,(String *)&local_d8,false);
  ThemeDB::bind_class_item
            (uVar3,1,(StrRange *)&local_d0,(StringName *)&local_c8,(MethodDefinition *)&local_b8,
             (Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_68 != (code *)0x0) {
    (*pcStack_68)((Variant *)&local_78,(Variant *)&local_78,3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* CowData<Label::Paragraph>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Label::Paragraph>::_copy_on_write(CowData<Label::Paragraph> *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar8 = 0x10;
  if (lVar2 * 0x28 != 0) {
    uVar8 = lVar2 * 0x28 - 1;
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar8 = (uVar8 | uVar8 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar8,false);
  if (puVar6 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar6 = 1;
    puVar6[1] = lVar2;
    puVar10 = puVar6 + 2;
    if (lVar2 != 0) {
      do {
        puVar7 = (undefined2 *)((long)puVar10 + *(long *)this + (-0x10 - (long)puVar6));
        *(undefined2 *)puVar10 = *puVar7;
        uVar1 = *(undefined4 *)(puVar7 + 2);
        puVar10[1] = 0;
        lVar4 = *(long *)(puVar7 + 4);
        *(undefined4 *)((long)puVar10 + 4) = uVar1;
        if (lVar4 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 1),(CowData *)(puVar7 + 4));
        }
        uVar3 = *(undefined8 *)(puVar7 + 8);
        puVar10[4] = 0;
        lVar4 = *(long *)(puVar7 + 0x10);
        puVar10[2] = uVar3;
        if (lVar4 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar10 + 4),(CowData *)(puVar7 + 0x10));
        }
        lVar9 = lVar9 + 1;
        puVar10 = puVar10 + 5;
      } while (lVar2 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar6 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Label::set_tab_stops(Vector<float> const&) */

void __thiscall Label::set_tab_stops(Label *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(this + 0xa68);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    if (lVar4 == 0) {
      return;
    }
    lVar1 = *(long *)(lVar4 + -8);
joined_r0x00106a7a:
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(lVar2 + -8);
    if (lVar4 == 0) goto joined_r0x00106a7a;
    if (lVar1 == *(long *)(lVar4 + -8)) {
      if (lVar1 < 1) {
        return;
      }
      lVar3 = 0;
      while (*(float *)(lVar2 + lVar3 * 4) == *(float *)(lVar4 + lVar3 * 4)) {
        lVar3 = lVar3 + 1;
        if (lVar1 == lVar3) {
          return;
        }
      }
    }
    if (lVar2 == lVar4) goto LAB_001069d7;
  }
  CowData<float>::_ref((CowData<float> *)(this + 0xa68),(CowData *)(param_1 + 8));
LAB_001069d7:
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar4 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar2 = *(long *)(this + 0xa18);
  if (lVar2 != 0) {
    lVar2 = lVar2 + *(long *)(lVar2 + -8) * 0x28;
  }
  for (; lVar2 != lVar4; lVar4 = lVar4 + 0x28) {
    *(undefined1 *)(lVar4 + 1) = 1;
  }
  CanvasItem::queue_redraw();
  return;
}



/* Label::set_ellipsis_char(String const&) */

void __thiscall Label::set_ellipsis_char(Label *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  char *local_68;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (char *)0x0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00106af2;
      LOCK();
      lVar4 = *plVar1;
      bVar7 = lVar2 == lVar4;
      if (bVar7) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar4 != -1) {
      local_68 = *(char **)param_1;
    }
LAB_00106af2:
    if ((local_68 != (char *)0x0) && (2 < *(int *)(local_68 + -8))) {
      local_50 = 0;
      local_40 = 0x13;
      local_48 = " characters given).";
      String::parse_latin1((StrRange *)&local_50);
      itos((long)local_60);
      operator+((char *)local_58,(String *)"Ellipsis must be exactly one character long (");
      String::operator+((String *)&local_48,(String *)local_58);
      _err_print_error("set_ellipsis_char","scene/gui/label.cpp",0x4bd,(String *)&local_48,0,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      String::left((int)(String *)&local_48);
      if (local_68 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        local_68 = local_48;
        local_48 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
  }
  cVar3 = String::operator==((String *)(this + 0x9f8),(String *)&local_68);
  if (cVar3 == '\0') {
    if (*(char **)(this + 0x9f8) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x9f8),(CowData *)&local_68);
    }
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    puVar5 = *(undefined1 **)(this + 0xa18);
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    puVar6 = *(undefined1 **)(this + 0xa18);
    if (puVar6 != (undefined1 *)0x0) {
      puVar6 = puVar6 + *(long *)(puVar6 + -8) * 0x28;
    }
    for (; puVar5 != puVar6; puVar5 = puVar5 + 0x28) {
      *puVar5 = 1;
    }
    CanvasItem::queue_redraw();
    if ((this[0x9f0] != (Label)0x0) || (*(int *)(this + 0xa00) != 0)) {
      Control::update_minimum_size();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::set_text_overrun_behavior(TextServer::OverrunBehavior) */

void __thiscall Label::set_text_overrun_behavior(Label *this,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (*(int *)(this + 0xa00) == param_2) {
    return;
  }
  *(int *)(this + 0xa00) = param_2;
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  puVar1 = *(undefined1 **)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  puVar2 = *(undefined1 **)(this + 0xa18);
  if (puVar2 != (undefined1 *)0x0) {
    puVar2 = puVar2 + *(long *)(puVar2 + -8) * 0x28;
  }
  for (; puVar1 != puVar2; puVar1 = puVar1 + 0x28) {
    *puVar1 = 1;
  }
  CanvasItem::queue_redraw();
  if ((this[0x9f0] == (Label)0x0) && (*(int *)(this + 0xa00) == 0)) {
    return;
  }
  Control::update_minimum_size();
  return;
}



/* Label::set_language(String const&) */

void __thiscall Label::set_language(Label *this,String *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = String::operator!=((String *)(this + 0xa30),param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(long *)(this + 0xa30) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa30),(CowData *)param_1);
  }
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar3 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar2 = *(long *)(this + 0xa18);
  if (lVar2 != 0) {
    lVar2 = lVar2 + *(long *)(lVar2 + -8) * 0x28;
  }
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
    *(undefined1 *)(lVar3 + 1) = 1;
  }
  CanvasItem::queue_redraw();
  return;
}



/* Label::set_structured_text_bidi_override_options(Array) */

void __thiscall Label::set_structured_text_bidi_override_options(Label *this,Array *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = Array::operator==((Array *)(this + 0xa40),param_2);
  if (cVar1 != '\0') {
    return;
  }
  Array::operator=((Array *)(this + 0xa40),param_2);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar3 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar2 = *(long *)(this + 0xa18);
  if (lVar2 != 0) {
    lVar2 = lVar2 + *(long *)(lVar2 + -8) * 0x28;
  }
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
    *(undefined1 *)(lVar3 + 1) = 1;
  }
  CanvasItem::queue_redraw();
  return;
}



/* Label::set_structured_text_bidi_override(TextServer::StructuredTextParser) */

void __thiscall Label::set_structured_text_bidi_override(Label *this,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(this + 0xa3c) == param_2) {
    return;
  }
  *(int *)(this + 0xa3c) = param_2;
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar2 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar1 = *(long *)(this + 0xa18);
  if (lVar1 != 0) {
    lVar1 = lVar1 + *(long *)(lVar1 + -8) * 0x28;
  }
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    *(undefined1 *)(lVar2 + 1) = 1;
  }
  CanvasItem::queue_redraw();
  return;
}



/* Label::set_text_direction(Control::TextDirection) */

void __thiscall Label::set_text_direction(Label *this,int param_2)

{
  long lVar1;
  long lVar2;
  
  if ((-2 < param_2) && (param_2 < 4)) {
    if (*(int *)(this + 0xa38) == param_2) {
      return;
    }
    *(int *)(this + 0xa38) = param_2;
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    lVar1 = *(long *)(this + 0xa18);
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    lVar2 = *(long *)(this + 0xa18);
    if (lVar2 != 0) {
      lVar2 = lVar2 + *(long *)(lVar2 + -8) * 0x28;
    }
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
      *(undefined1 *)(lVar1 + 1) = 1;
    }
    CanvasItem::queue_redraw();
    return;
  }
  _err_print_error("set_text_direction","scene/gui/label.cpp",0x445,
                   "Condition \"(int)p_text_direction < -1 || (int)p_text_direction > 3\" is true.",
                   0,0);
  return;
}



/* Label::set_horizontal_alignment(HorizontalAlignment) */

void __thiscall Label::set_horizontal_alignment(Label *this,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_2 < 4) {
    if (*(uint *)(this + 0x9c8) != param_2) {
      if ((param_2 == 3) || (*(uint *)(this + 0x9c8) == 3)) {
        CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
        puVar1 = *(undefined1 **)(this + 0xa18);
        CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
        puVar2 = *(undefined1 **)(this + 0xa18);
        if (puVar2 != (undefined1 *)0x0) {
          puVar2 = puVar2 + *(long *)(puVar2 + -8) * 0x28;
        }
        for (; puVar1 != puVar2; puVar1 = puVar1 + 0x28) {
          *puVar1 = 1;
        }
      }
      *(uint *)(this + 0x9c8) = param_2;
      CanvasItem::queue_redraw();
      return;
    }
  }
  else {
    _err_print_index_error
              ("set_horizontal_alignment","scene/gui/label.cpp",0x3fd,(long)(int)param_2,4,
               "(int)p_alignment","4","",false,false);
  }
  return;
}



/* Label::_set(StringName const&, Variant const&) */

undefined8 __thiscall Label::_set(Label *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()
                                 ::sname);
    if (iVar2 == 0) goto LAB_00107164;
    _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname,
                true);
    __cxa_atexit(StringName::~StringName,
                 &_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname);
    if (_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname ==
        *(long *)param_1) goto LAB_00107220;
LAB_00107174:
    if (_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#2}::
                                   operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::
                             sname);
      }
    }
    uVar3 = 0;
    if (*(long *)param_1 !=
        _set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::sname)
    goto LAB_00107195;
    iVar2 = Variant::operator_cast_to_int(param_2);
    set_horizontal_alignment(this,iVar2);
  }
  else {
LAB_00107164:
    if (_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname !=
        *(long *)param_1) goto LAB_00107174;
LAB_00107220:
    iVar2 = Variant::operator_cast_to_int(param_2);
    set_vertical_alignment(this,iVar2);
  }
  uVar3 = 1;
LAB_00107195:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::get_visible_line_count() const */

int __thiscall Label::get_visible_line_count(Label *this)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Object *pOVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float local_78;
  int local_70;
  int local_6c;
  int local_68;
  long *local_50;
  Object *local_48;
  long local_40;
  
  pOVar8 = *(Object **)(this + 0xa78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar8 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    pOVar8 = (Object *)0x0;
  }
  if (*(long *)(this + 0xa70) == 0) {
    local_50 = (long *)0x0;
    if (*(long **)(this + 0xa80) != (long *)0x0) {
      local_50 = *(long **)(this + 0xa80);
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') goto LAB_00107352;
      local_50 = (long *)0x0;
      lVar6 = *(long *)(this + 0xa70);
      goto LAB_00107359;
    }
LAB_00107850:
    uVar3 = *(undefined4 *)(this + 0xa88);
  }
  else {
    LabelSettings::get_font();
    if (local_48 == (Object *)0x0) {
      local_50 = (long *)0x0;
      if (*(long **)(this + 0xa80) != (long *)0x0) {
        local_50 = *(long **)(this + 0xa80);
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_50 = (long *)0x0;
        }
        goto LAB_0010733b;
      }
    }
    else {
      LabelSettings::get_font();
LAB_0010733b:
      if (((local_48 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
LAB_00107352:
    lVar6 = *(long *)(this + 0xa70);
LAB_00107359:
    if (lVar6 == 0) goto LAB_00107850;
    uVar3 = LabelSettings::get_font_size();
  }
  fVar13 = (float)(**(code **)(*local_50 + 0x218))(local_50,uVar3);
  if (*(long *)(this + 0xa70) == 0) {
    local_70 = (int)(float)*(int *)(this + 0xa8c);
  }
  else {
    fVar14 = (float)LabelSettings::get_line_spacing();
    local_70 = (int)fVar14;
    if (*(long *)(this + 0xa70) != 0) {
      fVar14 = (float)LabelSettings::get_paragraph_spacing();
      goto LAB_001073b9;
    }
  }
  fVar14 = (float)*(int *)(this + 0xa90);
LAB_001073b9:
  local_68 = (int)fVar14;
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar5 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar6 = *(long *)(this + 0xa18);
  if (lVar6 != 0) {
    lVar6 = lVar6 + *(long *)(lVar6 + -8) * 0x28;
  }
  if (lVar5 == lVar6) {
    local_6c = 0;
  }
  else {
    local_78 = 0.0;
    local_6c = 0;
    iVar11 = 0;
    do {
      lVar4 = *(long *)(lVar5 + 0x20);
      lVar7 = (long)iVar11;
      if (lVar4 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar4 + -8);
        lVar7 = lVar7 + lVar10;
      }
      iVar9 = *(int *)(this + 0xa54);
      if (iVar9 < lVar7) {
        if (iVar11 < iVar9) {
          iVar9 = iVar9 - iVar11;
          lVar7 = (long)iVar9;
        }
        else {
          lVar7 = 0;
          iVar9 = 0;
        }
        if (lVar4 != 0) {
          lVar10 = (long)iVar9;
          do {
            lVar10 = lVar10 + 1;
            if (*(long *)(lVar4 + -8) <= lVar7) {
LAB_001078f3:
              local_78 = (float)local_68 + local_78;
              if (lVar4 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = *(int *)(lVar4 + -8);
              }
              goto LAB_00107441;
            }
            pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar12 == (Object *)0x0) {
Label_get_visible_line_count:
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              pOVar12 = (Object *)0x0;
            }
            if (*(long *)(lVar5 + 0x20) == 0) {
LAB_001077c0:
              lVar4 = 0;
LAB_001077c6:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar4,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            lVar4 = *(long *)(*(long *)(lVar5 + 0x20) + -8);
            if (lVar4 <= lVar7) goto LAB_001077c6;
            dVar15 = (double)(**(code **)(*(long *)pOVar12 + 0x728))(pOVar12);
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar12), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
              Memory::free_static(pOVar12,false);
            }
            pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar12 == (Object *)0x0) goto Label_get_visible_line_count;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              pOVar12 = (Object *)0x0;
            }
            if (*(long *)(lVar5 + 0x20) == 0) goto LAB_001077c0;
            lVar4 = *(long *)(*(long *)(lVar5 + 0x20) + -8);
            if (lVar4 <= lVar7) goto LAB_001077c6;
            dVar16 = (double)(**(code **)(*(long *)pOVar12 + 0x730))(pOVar12);
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar12), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
              Memory::free_static(pOVar12,false);
            }
            dVar17 = dVar15 + dVar16;
            if (dVar17 < (double)(int)fVar13) {
              dVar17 = (double)(int)fVar13 - dVar17;
              dVar18 = _LC31 * dVar17;
              dVar17 = dVar18 + dVar15 + (dVar17 - dVar18) + dVar16;
            }
            local_78 = (float)((double)local_78 + dVar17 + (double)local_70);
            Control::get_size();
            (**(code **)(*(long *)pOVar8 + 0x1d0))(pOVar8);
            fVar14 = (extraout_XMM0_Db - extraout_XMM0_Db_00) + (float)local_70;
            if ((float)((uint)fVar14 & _LC185) < _LC184) {
              fVar14 = (float)((uint)((float)(int)fVar14 +
                                     (float)(-(uint)((float)(int)fVar14 < fVar14) & _LC5)) |
                              ~_LC185 & (uint)fVar14);
            }
            if (fVar14 < local_78) {
              lVar4 = *(long *)(lVar5 + 0x20);
              goto LAB_001078f3;
            }
            lVar4 = *(long *)(lVar5 + 0x20);
            local_6c = local_6c + 1;
            lVar7 = lVar10;
          } while (lVar4 != 0);
        }
        iVar9 = 0;
        local_78 = (float)local_68 + local_78;
      }
      else {
        iVar9 = (int)lVar10;
      }
LAB_00107441:
      iVar11 = iVar11 + iVar9;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 != lVar5);
  }
  iVar11 = *(int *)(this + 0xa58);
  iVar9 = iVar11;
  if (local_6c <= iVar11) {
    iVar9 = local_6c;
  }
  if (-1 < iVar11) {
    local_6c = iVar9;
  }
  Ref<Font>::unref((Ref<Font> *)&local_50);
  if (((pOVar8 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_6c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Label::get_layout_data(Vector2&, int&, int&) const */

int __thiscall Label::get_layout_data(Label *this,Vector2 *param_1,int *param_2,int *param_3)

{
  CowData<Label::Paragraph> *this_00;
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  Object *pOVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  float fVar19;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float local_d8;
  int local_b0;
  int local_ac;
  int local_88;
  long *local_60;
  long *local_58;
  long *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_size();
  local_60 = (long *)0x0;
  if ((*(long **)(this + 0xa78) == (long *)0x0) ||
     (local_60 = *(long **)(this + 0xa78), cVar5 = RefCounted::reference(), cVar5 != '\0')) {
    if (*(long *)(this + 0xa70) == 0) goto LAB_00107d49;
LAB_001079fe:
    LabelSettings::get_font();
    if (local_48 == (Object *)0x0) {
      local_58 = (long *)0x0;
      if (*(long **)(this + 0xa80) != (long *)0x0) {
        local_58 = *(long **)(this + 0xa80);
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          local_58 = (long *)0x0;
        }
        goto LAB_00107a2e;
      }
    }
    else {
      LabelSettings::get_font();
LAB_00107a2e:
      if (((local_48 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar16 = local_48, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
        Memory::free_static(pOVar16,false);
      }
    }
LAB_00107a48:
    if (*(long *)(this + 0xa70) != 0) {
LAB_00107a58:
      LabelSettings::get_font_size();
    }
  }
  else {
    local_60 = (long *)0x0;
    if (*(long *)(this + 0xa70) != 0) goto LAB_001079fe;
LAB_00107d49:
    local_58 = (long *)0x0;
    if (*(long **)(this + 0xa80) != (long *)0x0) {
      local_58 = *(long **)(this + 0xa80);
      cVar5 = RefCounted::reference();
      if (cVar5 != '\0') goto LAB_00107a48;
      local_58 = (long *)0x0;
      if (*(long *)(this + 0xa70) == 0) goto LAB_00107a5f;
      goto LAB_00107a58;
    }
  }
LAB_00107a5f:
  fVar17 = (float)(**(code **)(*local_58 + 0x218))();
  if (*(long *)(this + 0xa70) == 0) {
    local_ac = (int)(float)*(int *)(this + 0xa8c);
  }
  else {
    fVar18 = (float)LabelSettings::get_line_spacing();
    local_ac = (int)fVar18;
    if (*(long *)(this + 0xa70) != 0) {
      fVar18 = (float)LabelSettings::get_paragraph_spacing();
      goto LAB_00107ab2;
    }
  }
  fVar18 = (float)*(int *)(this + 0xa90);
LAB_00107ab2:
  local_88 = (int)fVar18;
  this_00 = (CowData<Label::Paragraph> *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write(this_00);
  lVar15 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write(this_00);
  lVar12 = *(long *)(this + 0xa18);
  if (lVar12 != 0) {
    lVar12 = lVar12 + *(long *)(lVar12 + -8) * 0x28;
  }
  iVar14 = *(int *)(this + 0xa54);
  if (lVar15 == lVar12) {
    local_b0 = 0;
  }
  else {
    local_b0 = 0;
    fVar18 = 0.0;
    iVar9 = 0;
    do {
      lVar13 = *(long *)(lVar15 + 0x20);
      lVar8 = (long)iVar9;
      if (lVar13 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(long *)(lVar13 + -8);
        lVar8 = lVar8 + lVar11;
      }
      if (iVar14 < lVar8) {
        if (iVar9 < iVar14) {
          iVar10 = iVar14 - iVar9;
          lVar8 = (long)iVar10;
        }
        else {
          lVar8 = 0;
          iVar10 = 0;
        }
        if (lVar13 == 0) {
          fVar18 = (float)local_88 + fVar18;
        }
        else {
          lVar11 = (long)iVar10;
          do {
            lVar11 = lVar11 + 1;
            if (*(long *)(lVar13 + -8) <= lVar8) {
LAB_001081d6:
              fVar18 = (float)local_88 + fVar18;
              iVar14 = *(int *)(this + 0xa54);
              if (lVar13 != 0) {
                iVar9 = iVar9 + *(int *)(lVar13 + -8);
              }
              goto LAB_00107b46;
            }
            pOVar16 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar16 == (Object *)0x0) {
Label_get_layout_data:
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              pOVar16 = (Object *)0x0;
            }
            if (*(long *)(lVar15 + 0x20) == 0) {
LAB_001080b0:
              lVar13 = 0;
              goto LAB_001080b6;
            }
            lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + -8);
            if (lVar13 <= lVar8) goto LAB_001080b6;
            dVar20 = (double)(**(code **)(*(long *)pOVar16 + 0x728))(pOVar16);
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar16), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
              Memory::free_static(pOVar16,false);
            }
            pOVar16 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar16 == (Object *)0x0) goto Label_get_layout_data;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              pOVar16 = (Object *)0x0;
            }
            if (*(long *)(lVar15 + 0x20) == 0) goto LAB_001080b0;
            lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + -8);
            if (lVar13 <= lVar8) goto LAB_001080b6;
            dVar21 = (double)(**(code **)(*(long *)pOVar16 + 0x730))(pOVar16);
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar16), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
              Memory::free_static(pOVar16,false);
            }
            dVar23 = (double)(int)fVar17;
            dVar22 = dVar20 + dVar21;
            if (dVar22 < dVar23) {
              dVar23 = dVar23 - dVar22;
              dVar22 = _LC31 * dVar23;
              dVar22 = dVar22 + dVar20 + (dVar23 - dVar22) + dVar21;
            }
            fVar18 = (float)((double)fVar18 + dVar22 + (double)local_ac);
            Control::get_size();
            (**(code **)(*local_60 + 0x1d0))();
            fVar19 = (extraout_XMM0_Db_01 - extraout_XMM0_Db_02) + (float)local_ac;
            if ((float)((uint)fVar19 & _LC185) < _LC184) {
              fVar19 = (float)((uint)((float)(int)fVar19 +
                                     (float)(-(uint)((float)(int)fVar19 < fVar19) & _LC5)) |
                              ~_LC185 & (uint)fVar19);
            }
            if (fVar19 < fVar18) {
              lVar13 = *(long *)(lVar15 + 0x20);
              goto LAB_001081d6;
            }
            lVar13 = *(long *)(lVar15 + 0x20);
            local_b0 = local_b0 + 1;
            lVar8 = lVar11;
          } while (lVar13 != 0);
          fVar18 = (float)local_88 + fVar18;
          iVar14 = *(int *)(this + 0xa54);
        }
      }
      else {
        iVar9 = iVar9 + (int)lVar11;
      }
LAB_00107b46:
      lVar15 = lVar15 + 0x28;
    } while (lVar15 != lVar12);
  }
  iVar9 = *(int *)(this + 0xa58);
  iVar10 = local_b0;
  if (iVar9 < local_b0) {
    iVar10 = iVar9;
  }
  if (iVar9 < 0) {
    iVar10 = local_b0;
  }
  iVar9 = iVar14 + iVar10;
  if (*(int *)(this + 0xa20) < iVar14 + iVar10) {
    iVar9 = *(int *)(this + 0xa20);
  }
  *param_2 = iVar9;
  CowData<Label::Paragraph>::_copy_on_write(this_00);
  lVar15 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write(this_00);
  lVar12 = *(long *)(this + 0xa18);
  if (lVar12 != 0) {
    lVar12 = lVar12 + *(long *)(lVar12 + -8) * 0x28;
  }
  iVar14 = 0;
  if (lVar15 == lVar12) {
    local_d8 = 0.0;
  }
  else {
    local_d8 = 0.0;
    iVar9 = 0;
    do {
      lVar13 = *(long *)(lVar15 + 0x20);
      lVar8 = (long)iVar9;
      if (lVar13 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(long *)(lVar13 + -8);
        lVar8 = lVar8 + lVar11;
      }
      iVar6 = *(int *)(this + 0xa54);
      if (iVar6 < lVar8) {
        if (iVar9 < iVar6) {
          iVar6 = iVar6 - iVar9;
          if (lVar8 < *param_2) {
            if (lVar13 == 0) break;
            iVar7 = *(int *)(lVar13 + -8);
          }
          else {
            iVar7 = *param_2 - iVar9;
          }
          if (iVar7 < 1) break;
          if (iVar6 < iVar7) goto LAB_00108245;
        }
        else {
          if (lVar8 < *param_2) {
            if ((lVar13 == 0) || (iVar7 = (int)*(undefined8 *)(lVar13 + -8), iVar7 < 1)) break;
            iVar6 = 0;
          }
          else {
            iVar7 = *param_2 - iVar9;
            if (iVar7 < 1) break;
            iVar6 = 0;
          }
LAB_00108245:
          lVar8 = (long)iVar6;
          lVar11 = (ulong)(uint)(iVar7 - iVar6) + lVar8;
          do {
            local_48 = (Object *)0x0;
            Ref<TextServer>::operator=
                      ((Ref<TextServer> *)&local_48,*(Ref **)(TextServerManager::singleton + 0x178))
            ;
            lVar2 = *(long *)(lVar15 + 0x20);
            if (lVar2 == 0) {
LAB_001084e0:
              lVar13 = 0;
LAB_001080b6:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar13,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            lVar13 = *(long *)(lVar2 + -8);
            if (lVar13 <= lVar8) goto LAB_001080b6;
            lVar1 = lVar8 * 8;
            dVar20 = (double)(**(code **)(*(long *)local_48 + 0x728))(local_48,lVar2 + lVar1);
            Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
            local_48 = (Object *)0x0;
            Ref<TextServer>::operator=
                      ((Ref<TextServer> *)&local_48,*(Ref **)(TextServerManager::singleton + 0x178))
            ;
            lVar2 = *(long *)(lVar15 + 0x20);
            if (lVar2 == 0) goto LAB_001084e0;
            lVar13 = *(long *)(lVar2 + -8);
            if (lVar13 <= lVar8) goto LAB_001080b6;
            dVar21 = (double)(**(code **)(*(long *)local_48 + 0x730))(local_48,lVar2 + lVar1);
            Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
            dVar23 = (double)(int)fVar17;
            dVar22 = dVar20 + dVar21;
            if (dVar22 < dVar23) {
              dVar23 = dVar23 - dVar22;
              dVar22 = _LC31 * dVar23;
              dVar22 = dVar22 + dVar20 + (dVar23 - dVar22) + dVar21;
            }
            local_50 = (long *)0x0;
            local_d8 = (float)((double)local_d8 + dVar22 + (double)local_ac);
            Ref<TextServer>::operator=
                      ((Ref<TextServer> *)&local_50,*(Ref **)(TextServerManager::singleton + 0x178))
            ;
            lVar2 = *(long *)(lVar15 + 0x20);
            if (lVar2 == 0) goto LAB_001084e0;
            lVar13 = *(long *)(lVar2 + -8);
            if (lVar13 <= lVar8) goto LAB_001080b6;
            iVar6 = (**(code **)(*local_50 + 0x6b0))(local_50,lVar2 + lVar1);
            local_48 = (Object *)0x0;
            Ref<TextServer>::operator=
                      ((Ref<TextServer> *)&local_48,*(Ref **)(TextServerManager::singleton + 0x178))
            ;
            lVar2 = *(long *)(lVar15 + 0x20);
            if (lVar2 == 0) goto LAB_001084e0;
            lVar13 = *(long *)(lVar2 + -8);
            if (lVar13 <= lVar8) goto LAB_001080b6;
            lVar8 = lVar8 + 1;
            iVar7 = (**(code **)(*(long *)local_48 + 0x6f0))(local_48,lVar2 + lVar1);
            iVar14 = iVar14 + iVar6 + iVar7;
            Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
            Ref<TextServer>::unref((Ref<TextServer> *)&local_50);
          } while (lVar8 != lVar11);
          lVar13 = *(long *)(lVar15 + 0x20);
        }
        local_d8 = (float)local_88 + local_d8;
        if (lVar13 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)*(undefined8 *)(lVar13 + -8);
        }
      }
      else {
        iVar6 = (int)lVar11;
      }
      iVar9 = iVar9 + iVar6;
      lVar15 = lVar15 + 0x28;
    } while (lVar15 != lVar12);
  }
  plVar4 = local_60;
  iVar6 = 0;
  fVar17 = (float)StyleBox::get_margin(local_60,1);
  fVar18 = (float)StyleBox::get_margin(plVar4,3);
  iVar9 = 0;
  if (0 < iVar10) {
    iVar7 = *(int *)(this + 0x9cc);
    local_d8 = fVar18 + fVar17 + local_d8;
    if (iVar7 == 2) {
      iVar9 = (int)(extraout_XMM0_Db - ((local_d8 - (float)local_ac) - (float)local_88));
    }
    else {
      iVar9 = iVar6;
      if (iVar7 == 3) {
        if (iVar10 != 1) {
          local_ac = local_ac +
                     (int)((extraout_XMM0_Db - ((local_d8 - (float)local_ac) - (float)local_88)) /
                          (float)(iVar10 + -1));
        }
      }
      else if (iVar7 == 1) {
        iVar9 = (int)((extraout_XMM0_Db - ((local_d8 - (float)local_ac) - (float)local_88)) *
                     __LC188);
      }
    }
  }
  StyleBox::get_offset();
  *(undefined4 *)param_1 = 0;
  *(float *)(param_1 + 4) = (float)iVar9 + extraout_XMM0_Db_00;
  *param_3 = local_ac;
  Ref<Font>::unref((Ref<Font> *)&local_58);
  Ref<StyleBox>::unref((Ref<StyleBox> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar14;
}



/* Label::get_line_rid(int) const */

undefined8 __thiscall Label::get_line_rid(Label *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 < 0) {
    return 0;
  }
  if (param_1 < *(int *)(this + 0xa20)) {
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    lVar6 = *(long *)(this + 0xa18);
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    lVar4 = *(long *)(this + 0xa18);
    if (lVar4 != 0) {
      lVar4 = lVar4 + *(long *)(lVar4 + -8) * 0x28;
    }
    if (lVar6 != lVar4) {
      iVar5 = 0;
      do {
        lVar1 = *(long *)(lVar6 + 0x20);
        lVar3 = (long)iVar5;
        if (lVar1 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(lVar1 + -8);
          lVar3 = lVar3 + lVar7;
        }
        if (param_1 < lVar3) {
          lVar4 = (long)(param_1 - iVar5);
          if ((lVar4 < lVar7) && (-1 < param_1 - iVar5)) {
            return *(undefined8 *)(lVar1 + lVar4 * 8);
          }
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar6 = lVar6 + 0x28;
        iVar5 = iVar5 + (int)lVar7;
      } while (lVar6 != lVar4);
    }
    return 0;
  }
  return 0;
}



/* Label::get_line_height(int) const */

int __thiscall Label::get_line_height(Label *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  float fVar8;
  float extraout_XMM0_Db;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long local_68;
  Object *local_58;
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa70) == 0) {
    local_58 = (Object *)0x0;
    pOVar7 = *(Object **)(this + 0xa80);
    if (pOVar7 == (Object *)0x0) goto LAB_0010878e;
    cVar3 = RefCounted::reference();
    local_58 = pOVar7;
    if (cVar3 != '\0') goto LAB_00108776;
    local_58 = (Object *)0x0;
    lVar6 = *(long *)(this + 0xa70);
  }
  else {
    LabelSettings::get_font();
    if (local_48 == (Object *)0x0) {
      local_58 = (Object *)0x0;
      pOVar7 = *(Object **)(this + 0xa80);
      if (pOVar7 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        local_58 = pOVar7;
        if (cVar3 == '\0') {
          local_58 = (Object *)0x0;
        }
        goto LAB_0010875f;
      }
    }
    else {
      LabelSettings::get_font();
LAB_0010875f:
      if (((local_48 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar7 = local_48, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
LAB_00108776:
    lVar6 = *(long *)(this + 0xa70);
  }
  if (lVar6 != 0) {
    LabelSettings::get_font_size();
  }
LAB_0010878e:
  fVar8 = (float)(**(code **)(*(long *)local_58 + 0x218))();
  iVar5 = (int)fVar8;
  if ((param_1 < 0) || (*(int *)(this + 0xa20) <= param_1)) {
    if (*(int *)(this + 0xa20) < 1) {
      fVar8 = (float)(**(code **)(*(long *)local_58 + 0x218))();
      iVar5 = (int)fVar8;
    }
    else {
      CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
      lVar6 = *(long *)(this + 0xa18);
      CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
      local_68 = *(long *)(this + 0xa18);
      if (local_68 != 0) {
        local_68 = local_68 + *(long *)(local_68 + -8) * 0x28;
      }
      if (lVar6 != local_68) {
        do {
          lVar4 = *(long *)(lVar6 + 0x20);
          if (lVar4 != 0) {
            lVar1 = lVar4 + *(long *)(lVar4 + -8) * 8;
            for (; lVar1 != lVar4; lVar4 = lVar4 + 8) {
              while( true ) {
                pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
                if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                cVar3 = RefCounted::reference();
                if (cVar3 == '\0') {
                  pOVar7 = (Object *)0x0;
                }
                (**(code **)(*(long *)pOVar7 + 0x720))(pOVar7);
                fVar8 = (float)iVar5;
                if (extraout_XMM0_Db < fVar8) {
                  cVar3 = RefCounted::unreference();
                }
                else {
                  cVar3 = RefCounted::unreference();
                  fVar8 = extraout_XMM0_Db;
                }
                iVar5 = (int)fVar8;
                if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) break;
                lVar4 = lVar4 + 8;
                if (lVar1 == lVar4) goto LAB_001089b0;
              }
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
LAB_001089b0:
          lVar6 = lVar6 + 0x28;
        } while (lVar6 != local_68);
      }
    }
  }
  else {
    local_50 = get_line_rid(this,param_1);
    local_48 = (Object *)0x0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_48,*(Ref **)(TextServerManager::singleton + 0x178));
    dVar9 = (double)(**(code **)(*(long *)local_48 + 0x728))(local_48,&local_50);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
    local_48 = (Object *)0x0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_48,*(Ref **)(TextServerManager::singleton + 0x178));
    dVar10 = (double)(**(code **)(*(long *)local_48 + 0x730))();
    Ref<TextServer>::unref((Ref<TextServer> *)&local_48);
    dVar11 = dVar9 + dVar10;
    if (dVar11 < (double)iVar5) {
      dVar11 = (double)iVar5 - dVar11;
      dVar12 = _LC31 * dVar11;
      dVar11 = dVar12 + dVar9 + (dVar11 - dVar12) + dVar10;
    }
    iVar5 = (int)dVar11;
  }
  if (((local_58 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
    (**(code **)(*(long *)local_58 + 0x140))(local_58);
    Memory::free_static(local_58,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* Label::_update_visible() const */

void __thiscall Label::_update_visible(Label *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  Object *pOVar12;
  long lVar13;
  Object *pOVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int local_7c;
  long *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa70) == 0) {
    local_7c = (int)(float)*(int *)(this + 0xa8c);
LAB_00109085:
    pOVar14 = *(Object **)(this + 0xa78);
    iVar5 = (int)(float)*(int *)(this + 0xa90);
    if (pOVar14 != (Object *)0x0) {
LAB_00108b87:
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar14 = (Object *)0x0;
      }
      goto LAB_00108b9a;
    }
LAB_001090a6:
    local_50 = (long *)0x0;
    if (*(long **)(this + 0xa80) == (long *)0x0) goto LAB_00108c05;
    local_50 = *(long **)(this + 0xa80);
    cVar3 = RefCounted::reference();
    if (cVar3 != '\0') goto LAB_00108bee;
    local_50 = (long *)0x0;
    lVar10 = *(long *)(this + 0xa70);
  }
  else {
    fVar15 = (float)LabelSettings::get_line_spacing();
    local_7c = (int)fVar15;
    if (*(long *)(this + 0xa70) == 0) goto LAB_00109085;
    fVar15 = (float)LabelSettings::get_paragraph_spacing();
    pOVar14 = *(Object **)(this + 0xa78);
    iVar5 = (int)fVar15;
    if (pOVar14 != (Object *)0x0) goto LAB_00108b87;
LAB_00108b9a:
    if (*(long *)(this + 0xa70) == 0) goto LAB_001090a6;
    LabelSettings::get_font();
    if (local_48 == (Object *)0x0) {
      local_50 = (long *)0x0;
      if (*(long **)(this + 0xa80) != (long *)0x0) {
        local_50 = *(long **)(this + 0xa80);
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_50 = (long *)0x0;
        }
        goto LAB_00108bd7;
      }
    }
    else {
      LabelSettings::get_font();
LAB_00108bd7:
      if (((local_48 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
LAB_00108bee:
    lVar10 = *(long *)(this + 0xa70);
  }
  if (lVar10 != 0) {
    LabelSettings::get_font_size();
  }
LAB_00108c05:
  fVar15 = (float)(**(code **)(*local_50 + 0x218))();
  iVar1 = *(int *)(this + 0xa58);
  *(undefined4 *)(this + 0xa08) = 0;
  iVar11 = *(int *)(this + 0xa20);
  iVar7 = iVar11;
  if (iVar1 <= iVar11) {
    iVar7 = iVar1;
  }
  if (iVar1 < 0) {
    iVar7 = iVar11;
  }
  iVar1 = iVar7 + *(int *)(this + 0xa54);
  if (iVar11 < iVar7 + *(int *)(this + 0xa54)) {
    iVar1 = iVar11;
  }
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar13 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  lVar10 = *(long *)(this + 0xa18);
  if (lVar10 != 0) {
    lVar10 = lVar10 + *(long *)(lVar10 + -8) * 0x28;
  }
  iVar11 = 0;
  for (; lVar10 != lVar13; lVar13 = lVar13 + 0x28) {
    lVar8 = *(long *)(lVar13 + 0x20);
    lVar4 = (long)iVar11;
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(lVar8 + -8);
      lVar4 = lVar4 + lVar9;
    }
    iVar7 = *(int *)(this + 0xa54);
    if (iVar7 < lVar4) {
      if (iVar11 < iVar7) {
        iVar7 = iVar7 - iVar11;
        if (lVar4 < iVar1) {
          if (lVar8 == 0) break;
          iVar6 = *(int *)(lVar8 + -8);
        }
        else {
          iVar6 = iVar1 - iVar11;
        }
        if (iVar6 < 1) break;
        if (iVar7 < iVar6) goto LAB_00108dc6;
        fVar16 = *(float *)(this + 0xa08);
      }
      else {
        if (lVar4 < iVar1) {
          if (lVar8 == 0) break;
          iVar6 = (int)*(undefined8 *)(lVar8 + -8);
        }
        else {
          iVar6 = iVar1 - iVar11;
        }
        if (iVar6 < 1) break;
        iVar7 = 0;
LAB_00108dc6:
        lVar8 = (long)iVar7;
        do {
          pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar12 == (Object *)0x0) {
Label__update_visible:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            pOVar12 = (Object *)0x0;
          }
          if (*(long *)(lVar13 + 0x20) == 0) {
LAB_00108fd8:
            lVar4 = 0;
LAB_00108fde:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar4,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar4 = *(long *)(*(long *)(lVar13 + 0x20) + -8);
          if (lVar4 <= lVar8) goto LAB_00108fde;
          dVar17 = (double)(**(code **)(*(long *)pOVar12 + 0x728))(pOVar12);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar12), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
          pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar12 == (Object *)0x0) goto Label__update_visible;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            pOVar12 = (Object *)0x0;
          }
          if (*(long *)(lVar13 + 0x20) == 0) goto LAB_00108fd8;
          lVar4 = *(long *)(*(long *)(lVar13 + 0x20) + -8);
          if (lVar4 <= lVar8) goto LAB_00108fde;
          dVar18 = (double)(**(code **)(*(long *)pOVar12 + 0x730))(pOVar12);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar12), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
          dVar19 = dVar17 + dVar18;
          if (dVar19 < (double)(int)fVar15) {
            dVar19 = (double)(int)fVar15 - dVar19;
            dVar20 = _LC31 * dVar19;
            dVar19 = dVar20 + dVar17 + (dVar19 - dVar20) + dVar18;
          }
          lVar8 = lVar8 + 1;
          fVar16 = (float)((double)local_7c + dVar19 + (double)*(float *)(this + 0xa08));
          *(float *)(this + 0xa08) = fVar16;
        } while ((int)lVar8 < iVar6);
        lVar8 = *(long *)(lVar13 + 0x20);
      }
      *(float *)(this + 0xa08) = fVar16 + (float)iVar5;
      if (lVar8 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(lVar8 + -8);
      }
    }
    else {
      iVar7 = (int)lVar9;
    }
    iVar11 = iVar11 + iVar7;
  }
  if (0.0 < *(float *)(this + 0xa08)) {
    *(float *)(this + 0xa08) = *(float *)(this + 0xa08) - (float)(local_7c + iVar5);
  }
  Ref<Font>::unref((Ref<Font> *)&local_50);
  if (((pOVar14 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
     (cVar3 = predelete_handler(pOVar14), cVar3 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar14,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::set_lines_skipped(int) */

void __thiscall Label::set_lines_skipped(Label *this,int param_1)

{
  if (param_1 < 0) {
    _err_print_error("set_lines_skipped","scene/gui/label.cpp",0x50f,
                     "Condition \"p_lines < 0\" is true.",0,0);
    return;
  }
  if (*(int *)(this + 0xa54) != param_1) {
    *(int *)(this + 0xa54) = param_1;
    _update_visible(this);
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Label::set_max_lines_visible(int) */

void __thiscall Label::set_max_lines_visible(Label *this,int param_1)

{
  if (*(int *)(this + 0xa58) != param_1) {
    *(int *)(this + 0xa58) = param_1;
    _update_visible(this);
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Label::set_justification_flags(BitField<TextServer::JustificationFlag>) */

void __thiscall Label::set_justification_flags(Label *this,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_2 != *(long *)(this + 0x9e8)) {
    *(long *)(this + 0x9e8) = param_2;
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    puVar1 = *(undefined1 **)(this + 0xa18);
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    puVar2 = *(undefined1 **)(this + 0xa18);
    if (puVar2 != (undefined1 *)0x0) {
      puVar2 = puVar2 + *(long *)(puVar2 + -8) * 0x28;
    }
    for (; puVar1 != puVar2; puVar1 = puVar1 + 0x28) {
      *puVar1 = 1;
    }
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Label::set_autowrap_mode(TextServer::AutowrapMode) */

void __thiscall Label::set_autowrap_mode(Label *this,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (*(int *)(this + 0x9e0) == param_2) {
    return;
  }
  *(int *)(this + 0x9e0) = param_2;
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  puVar1 = *(undefined1 **)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
  puVar2 = *(undefined1 **)(this + 0xa18);
  if (puVar2 != (undefined1 *)0x0) {
    puVar2 = puVar2 + *(long *)(puVar2 + -8) * 0x28;
  }
  for (; puVar1 != puVar2; puVar1 = puVar1 + 0x28) {
    *puVar1 = 1;
  }
  CanvasItem::queue_redraw();
  Node::update_configuration_warnings();
  if ((this[0x9f0] == (Label)0x0) && (*(int *)(this + 0xa00) == 0)) {
    return;
  }
  Control::update_minimum_size();
  return;
}



/* Label::~Label() */

void __thiscall Label::~Label(Label *this)

{
  long *plVar1;
  CowData<Label::Paragraph> *this_00;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  CowData<RID> *pCVar8;
  long lVar9;
  CowData<RID> *local_48;
  
  *(undefined ***)this = &PTR__initialize_classv_00128cc8;
  this_00 = (CowData<Label::Paragraph> *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write(this_00);
  pCVar8 = *(CowData<RID> **)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write(this_00);
  lVar6 = *(long *)(this + 0xa18);
  if (lVar6 == 0) {
    local_48 = (CowData<RID> *)0x0;
    if (pCVar8 == (CowData<RID> *)0x0) goto LAB_0010959f;
LAB_001093f2:
    pCVar8 = pCVar8 + 0x20;
    do {
      CowData<RID>::_copy_on_write(pCVar8);
      lVar6 = *(long *)pCVar8;
      CowData<RID>::_copy_on_write(pCVar8);
      lVar4 = *(long *)pCVar8;
      if (lVar4 == 0) {
        lVar9 = 0;
        if (lVar6 != 0) goto LAB_00109441;
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        lVar9 = lVar4 + lVar5 * 8;
        if (lVar6 != lVar9) {
LAB_00109441:
          do {
            while( true ) {
              pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
              if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') {
                pOVar7 = (Object *)0x0;
              }
              (**(code **)(*(long *)pOVar7 + 0x168))(pOVar7);
              cVar3 = RefCounted::unreference();
              if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) break;
              lVar6 = lVar6 + 8;
              if (lVar9 == lVar6) goto LAB_001094b0;
            }
            lVar6 = lVar6 + 8;
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          } while (lVar9 != lVar6);
LAB_001094b0:
          lVar4 = *(long *)pCVar8;
          if (lVar4 == 0) goto LAB_001094d2;
          lVar5 = *(long *)(lVar4 + -8);
        }
        if (lVar5 != 0) {
          LOCK();
          plVar1 = (long *)(lVar4 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar6 = *(long *)pCVar8;
            *(undefined8 *)pCVar8 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
          else {
            *(undefined8 *)pCVar8 = 0;
          }
        }
      }
LAB_001094d2:
      pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar7 == (Object *)0x0) {
        FUN_001102c4();
        return;
      }
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar7 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar7 + 0x168))(pOVar7);
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      if (local_48 == pCVar8 + 8) goto LAB_00109580;
      pCVar8 = pCVar8 + 0x28;
    } while( true );
  }
  lVar4 = *(long *)(lVar6 + -8);
  local_48 = (CowData<RID> *)(lVar6 + lVar4 * 0x28);
  if (pCVar8 != local_48) goto LAB_001093f2;
  goto LAB_00109590;
LAB_00109580:
  if (*(long *)(this + 0xa18) == 0) goto LAB_0010959f;
  lVar4 = *(long *)(*(long *)(this + 0xa18) + -8);
LAB_00109590:
  if (lVar4 != 0) {
    CowData<Label::Paragraph>::_unref(this_00);
  }
LAB_0010959f:
  if ((*(long *)(this + 0xa80) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    pOVar7 = *(Object **)(this + 0xa80);
    cVar3 = predelete_handler(pOVar7);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  if ((*(long *)(this + 0xa78) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    pOVar7 = *(Object **)(this + 0xa78);
    cVar3 = predelete_handler(pOVar7);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  if ((*(long *)(this + 0xa70) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    pOVar7 = *(Object **)(this + 0xa70);
    cVar3 = predelete_handler(pOVar7);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  if (*(long *)(this + 0xa68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = *(long *)(this + 0xa68);
      *(undefined8 *)(this + 0xa68) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  Array::~Array((Array *)(this + 0xa40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa28));
  CowData<Label::Paragraph>::_unref(this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9f8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9d8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x9d0));
  Control::~Control((Control *)this);
  return;
}



/* Label::~Label() */

void __thiscall Label::~Label(Label *this)

{
  ~Label(this);
  operator_delete(this,0xad8);
  return;
}



/* Label::_shape() const */

void __thiscall Label::_shape(Label *this)

{
  long *plVar1;
  Label *pLVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  CowData<RID> *pCVar11;
  long lVar12;
  undefined2 uVar13;
  int iVar14;
  uint uVar15;
  CowData<RID> *pCVar16;
  CowData *pCVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  CowData *pCVar21;
  CowData<RID> *pCVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  Object *pOVar27;
  long lVar28;
  long in_FS_OFFSET;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  double dVar33;
  undefined8 in_stack_fffffffffffffec8;
  Label *this_00;
  Ref<TextServer> *this_01;
  Ref<TextServer> *this_02;
  ulong uVar34;
  CowData<Label::Paragraph> *pCVar35;
  CowData<Label::Paragraph> *this_03;
  Label *pLVar36;
  CowData<char32_t> *this_04;
  CowData<char32_t> *local_108;
  Object *local_e0;
  Object *local_d8;
  Object *local_d0;
  Object *local_c8;
  CowData *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_98 [2];
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_68 [2];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  uVar32 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  pOVar27 = *(Object **)(this + 0xa78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar27 == (Object *)0x0) ||
     (local_e0 = pOVar27, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
    local_e0 = (Object *)0x0;
    pOVar27 = (Object *)0x0;
  }
  uVar29 = Control::get_size();
  this_00 = (Label *)CONCAT44(uVar32,uVar29);
  fVar30 = (float)(**(code **)(*(long *)pOVar27 + 0x1d0))(pOVar27);
  iVar9 = (int)(SUB84(this_00,0) - fVar30);
  this_03 = (CowData<Label::Paragraph> *)(this + 0xa18);
  if (this[0xa0f] != (Label)0x0) {
    pCVar35 = this_03;
    CowData<Label::Paragraph>::_copy_on_write(this_03);
    pCVar16 = *(CowData<RID> **)(this + 0xa18);
    CowData<Label::Paragraph>::_copy_on_write(this_03);
    pCVar22 = *(CowData<RID> **)(this + 0xa18);
    if (pCVar22 != (CowData<RID> *)0x0) {
      pCVar22 = pCVar22 + *(long *)(pCVar22 + -8) * 0x28;
    }
    pCVar11 = pCVar16 + 0x20;
    if (pCVar22 != pCVar16) {
      do {
        CowData<RID>::_copy_on_write(pCVar11);
        lVar24 = *(long *)pCVar11;
        CowData<RID>::_copy_on_write(pCVar11);
        lVar12 = *(long *)pCVar11;
        if (lVar12 != 0) {
          lVar12 = lVar12 + *(long *)(lVar12 + -8) * 8;
        }
        for (; lVar12 != lVar24; lVar24 = lVar24 + 8) {
          pOVar27 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar27 == (Object *)0x0) {
Label__shape:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            pOVar27 = (Object *)0x0;
          }
          (**(code **)(*(long *)pOVar27 + 0x168))(pOVar27);
          cVar7 = RefCounted::unreference();
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar27), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
            Memory::free_static(pOVar27,false);
          }
        }
        CowData<RID>::resize<false>(pCVar11,0);
        local_88 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
        pOVar27 = local_88;
        (**(code **)(*(long *)local_88 + 0x168))(local_88);
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar27), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
          Memory::free_static(pOVar27,false);
        }
        this_00 = this;
        if (pCVar22 == pCVar11 + 8) break;
        pCVar11 = pCVar11 + 0x28;
      } while( true );
    }
    CowData<Label::Paragraph>::resize<false>(pCVar35,0);
    if (this[0xa0c] == (Label)0x0) {
      local_d8 = (Object *)0x0;
      if (*(long *)(this + 0x9d8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(this + 0x9d8));
      }
      iVar10 = *(int *)(this + 0xa4c);
      this_03 = pCVar35;
    }
    else {
      local_88 = (Object *)0x0;
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
      (**(code **)(*(long *)local_88 + 0x810))(&local_d8,local_88,this + 0x9d8,this + 0xa30);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
      iVar10 = *(int *)(this + 0xa4c);
      this_03 = pCVar35;
    }
    if ((-1 < iVar10) && (local_108 = (CowData<char32_t> *)&local_d8, *(int *)(this + 0xa48) == 0))
    {
      String::substr((int)(CowData<char32_t> *)&local_88,(int)local_108);
      if (local_d8 != local_88) {
        CowData<char32_t>::_unref(local_108);
        local_d8 = local_88;
        local_88 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    local_108 = (CowData<char32_t> *)&local_d8;
    String::c_unescape();
    String::split((String *)&local_c8,SUB81(local_108,0),(int)(CowData<char32_t> *)&local_d0);
    CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
    pCVar21 = local_c0;
    CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
    pCVar17 = local_c0;
    if (local_c0 != (CowData *)0x0) {
      pCVar17 = local_c0 + *(long *)(local_c0 + -8) * 8;
    }
    if (pCVar17 != pCVar21) {
      this_00 = (Label *)&local_b0;
      this_04 = (CowData<char32_t> *)&local_80;
      iVar10 = 0;
      do {
        local_88 = (Object *)0x0;
        local_b8 = (Object *)(CONCAT62((int6)((ulong)local_b8 >> 0x10),_LC194) & 0xffffffff);
        local_b0 = 0;
        local_98[0] = 0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
        pOVar27 = local_88;
        local_a8 = (**(code **)(*(long *)local_88 + 0x598))(local_88,0,0);
        cVar7 = RefCounted::unreference();
        if ((cVar7 == '\0') || (cVar7 = predelete_handler(pOVar27), cVar7 == '\0')) {
          lVar12 = *(long *)pCVar21;
          if (lVar12 == 0) goto LAB_0010a890;
LAB_0010a5dd:
          CowData<char32_t>::_ref((CowData<char32_t> *)this_00,pCVar21);
          uVar13 = (undefined2)local_b8;
          local_b8 = (Object *)CONCAT44(iVar10,(undefined4)local_b8);
          if (*(long *)pCVar21 == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = (int)*(undefined8 *)(*(long *)pCVar21 + -8);
            iVar14 = iVar14 + -1 + (uint)(iVar14 == 0);
          }
          lVar12 = local_b0;
          lVar24 = local_98[0];
          if (local_d0 != (Object *)0x0) {
LAB_0010a62a:
            if ((int)*(long *)(local_d0 + -8) != 0) {
              iVar14 = iVar14 + -1 + (int)*(long *)(local_d0 + -8);
            }
          }
          local_88 = (Object *)CONCAT62(local_88._2_6_,uVar13);
          iVar14 = iVar14 + iVar10;
          local_88 = (Object *)CONCAT44(iVar10,(undefined4)local_88);
          local_80 = 0;
          if (lVar12 != 0) {
            CowData<char32_t>::_ref(this_04,(CowData *)this_00);
          }
          local_68[0] = 0;
          local_78 = local_a8;
          if (lVar24 != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_68,(CowData *)local_98);
            iVar10 = iVar14;
            goto LAB_0010a6ab;
          }
          lVar12 = *(long *)(this + 0xa18);
          if (lVar12 == 0) goto LAB_0010a8d6;
LAB_0010a6bb:
          lVar26 = local_68[0];
          iVar10 = CowData<Label::Paragraph>::resize<false>(this_03,*(long *)(lVar12 + -8) + 1);
          if (iVar10 == 0) goto LAB_0010a6d5;
LAB_0010a8f0:
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true");
        }
        else {
          (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
          Memory::free_static(pOVar27,false);
          if (*(long *)pCVar21 != 0) goto LAB_0010a5dd;
          lVar12 = 0;
LAB_0010a890:
          local_b8 = (Object *)CONCAT44(iVar10,(undefined4)local_b8);
          if (local_d0 != (Object *)0x0) {
            iVar14 = 0;
            lVar24 = 0;
            uVar13 = _LC194;
            goto LAB_0010a62a;
          }
          lVar24 = 0;
          local_88 = (Object *)CONCAT44(iVar10,(undefined4)local_88);
          local_80 = 0;
          local_88 = (Object *)CONCAT62(local_88._2_6_,_LC194);
          local_78 = local_a8;
          local_68[0] = 0;
LAB_0010a6ab:
          lVar12 = *(long *)(this + 0xa18);
          iVar14 = iVar10;
          if (lVar12 != 0) goto LAB_0010a6bb;
LAB_0010a8d6:
          lVar26 = local_68[0];
          iVar10 = CowData<Label::Paragraph>::resize<false>(this_03,1);
          if (iVar10 != 0) goto LAB_0010a8f0;
LAB_0010a6d5:
          if (*(long *)(this + 0xa18) == 0) {
            lVar28 = -1;
            lVar12 = 0;
          }
          else {
            lVar12 = *(long *)(*(long *)(this + 0xa18) + -8);
            lVar28 = lVar12 + -1;
            if (-1 < lVar28) {
              CowData<Label::Paragraph>::_copy_on_write(this_03);
              puVar3 = (undefined2 *)(*(long *)(this + 0xa18) + lVar28 * 0x28);
              *puVar3 = (undefined2)local_88;
              *(undefined4 *)(puVar3 + 2) = local_88._4_4_;
              if (*(long *)(puVar3 + 4) != local_80) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 4),(CowData *)this_04);
              }
              *(undefined8 *)(puVar3 + 8) = local_78;
              if (lVar26 != *(long *)(puVar3 + 0x10)) {
                CowData<RID>::_ref((CowData<RID> *)(puVar3 + 0x10),(CowData *)local_68);
              }
              goto LAB_0010a763;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar12,"p_index","size()","",
                     false,false);
        }
LAB_0010a763:
        if (lVar26 != 0) {
          LOCK();
          plVar1 = (long *)(lVar26 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          lVar24 = local_98[0];
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
            lVar24 = local_98[0];
          }
        }
        CowData<char32_t>::_unref(this_04);
        if (lVar24 != 0) {
          LOCK();
          plVar1 = (long *)(lVar24 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_98[0] + -0x10),false);
          }
        }
        pCVar21 = pCVar21 + 8;
        CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
        iVar10 = iVar14;
      } while (pCVar17 != pCVar21);
    }
    this[0xa0f] = (Label)0x0;
    CowData<String>::_unref((CowData<String> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref(local_108);
  }
  *(undefined4 *)(this + 0xa20) = 0;
  pCVar35 = this_03;
  CowData<Label::Paragraph>::_copy_on_write(this_03);
  lVar24 = *(long *)(this + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write(this_03);
  lVar12 = *(long *)(this + 0xa18);
  if (lVar12 != 0) {
    lVar12 = lVar12 + *(long *)(lVar12 + -8) * 0x28;
  }
  lVar26 = lVar24 + 0x10;
  if (lVar12 == lVar24) {
LAB_0010aae1:
    *(undefined2 *)(this + 0xa0d) = 0;
    if ((*(long *)(this + 0x9d8) != 0) && (1 < *(uint *)(*(long *)(this + 0x9d8) + -8))) {
      iVar10 = get_visible_line_count(this);
      bVar6 = false;
      if (0 < iVar10) {
        bVar6 = iVar10 < *(int *)(this + 0xa20);
      }
      if (*(int *)(this + 0x9e0) == 0) {
        *(undefined4 *)(this + 0xa04) = 0;
      }
      CowData<Label::Paragraph>::_copy_on_write(pCVar35);
      pCVar22 = *(CowData<RID> **)(this + 0xa18);
      CowData<Label::Paragraph>::_copy_on_write(pCVar35);
      pCVar16 = *(CowData<RID> **)(this + 0xa18);
      if (pCVar16 != (CowData<RID> *)0x0) {
        pCVar16 = pCVar16 + *(long *)(pCVar16 + -8) * 0x28;
      }
      if (pCVar22 != pCVar16) {
        uVar18 = 0;
        pCVar22 = pCVar22 + 0x20;
        if (*(int *)(this + 0x9e0) == 0) goto LAB_0010ad59;
LAB_0010ac96:
        lVar12 = *(long *)pCVar22;
        if (pCVar22[-0x20] == (CowData<RID>)0x0) goto LAB_0010afa9;
LAB_0010aca4:
        uVar25 = 0;
        if (*(uint *)(this + 0xa00) - 1 < 4) {
          uVar25 = (ulong)*(uint *)(this + 0xa00) * 2 - 1;
        }
        uVar19 = *(ulong *)(this + 0x9e8);
        if (*(long *)(this + 0xa68) != 0) {
          uVar19 = uVar19 | 8;
        }
        if (*(int *)(this + 0x9e0) == 0) {
          if (lVar12 == 0) {
            lVar24 = 0;
            uVar23 = 0;
LAB_0010b00d:
            uVar15 = (int)lVar24 - 1;
            if ((uVar19 & 0x20) != 0) {
              uVar23 = uVar15;
            }
            if (((uVar19 & 0x40) != 0) && (-1 < (int)uVar15)) {
              uVar20 = (ulong)uVar15;
              do {
                local_88 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_88,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                if (*(long *)pCVar22 == 0) {
                  lVar24 = 0;
                  goto LAB_0010a972;
                }
                lVar24 = *(long *)(*(long *)pCVar22 + -8);
                if (lVar24 <= (long)uVar20) goto LAB_0010a972;
                cVar7 = TextServer::shaped_text_has_visible_chars((RID *)local_88);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
                if (cVar7 != '\0') {
                  lVar12 = *(long *)pCVar22;
                  uVar23 = uVar15;
                  goto LAB_0010ae5c;
                }
                uVar15 = uVar15 - 1;
                uVar20 = uVar20 - 1;
              } while (uVar15 != 0xffffffff);
              lVar12 = *(long *)pCVar22;
            }
LAB_0010ae5c:
            if (lVar12 == 0) {
LAB_0010b714:
              pCVar22[-0x20] = (CowData<RID>)0x0;
              iVar14 = 0;
              goto LAB_0010ad30;
            }
          }
          else {
            lVar24 = *(long *)(lVar12 + -8);
            uVar23 = (uint)lVar24;
            if (lVar24 != 1) goto LAB_0010b00d;
            if ((uVar19 & 0x80) == 0) {
              lVar24 = 1;
              uVar23 = 1;
              goto LAB_0010b00d;
            }
            uVar23 = 1;
          }
          this_02 = (Ref<TextServer> *)&local_88;
          uVar20 = 0;
          do {
            if (*(long *)(lVar12 + -8) <= (long)uVar20) goto LAB_0010b804;
            if (((int)uVar20 < (int)uVar23) && (*(int *)(this + 0x9c8) == 3)) {
              local_88 = (Object *)0x0;
              Ref<TextServer>::operator=
                        ((Ref<TextServer> *)&local_88,
                         *(Ref **)(TextServerManager::singleton + 0x178));
              dVar33 = (double)iVar9;
              lVar12 = *(long *)pCVar22;
              if (lVar12 != 0) {
                lVar24 = *(long *)(lVar12 + -8);
                if (lVar24 <= (long)uVar20) goto LAB_0010a972;
                lVar26 = uVar20 * 8;
                uVar25 = uVar25 | 0x10;
                (**(code **)(*(long *)local_88 + 0x670))(dVar33,local_88,lVar12 + lVar26,uVar19);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
                local_88 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_88,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                puVar5 = *(undefined4 **)(this + 0x9f8);
                if (puVar5 == (undefined4 *)0x0) {
                  uVar32 = 0x2026;
                }
                else {
                  lVar24 = *(long *)(puVar5 + -2);
                  uVar32 = 0x2026;
                  if (1 < (int)lVar24) {
                    if (lVar24 < 1) goto LAB_0010b71f;
                    uVar32 = *puVar5;
                  }
                }
                lVar12 = *(long *)pCVar22;
                if (lVar12 != 0) {
                  lVar24 = *(long *)(lVar12 + -8);
                  if (lVar24 <= (long)uVar20) goto LAB_0010a972;
                  (**(code **)(*(long *)local_88 + 0x5d8))(local_88,lVar12 + lVar26,uVar32);
                  Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
                  local_88 = (Object *)0x0;
                  Ref<TextServer>::operator=
                            ((Ref<TextServer> *)&local_88,
                             *(Ref **)(TextServerManager::singleton + 0x178));
                  lVar12 = *(long *)pCVar22;
                  if (lVar12 != 0) {
                    lVar24 = *(long *)(lVar12 + -8);
                    if (lVar24 <= (long)uVar20) goto LAB_0010a972;
                    (**(code **)(*(long *)local_88 + 0x6f8))(dVar33,local_88,lVar12 + lVar26,uVar25)
                    ;
                    Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
                    local_88 = (Object *)0x0;
                    Ref<TextServer>::operator=
                              ((Ref<TextServer> *)&local_88,
                               *(Ref **)(TextServerManager::singleton + 0x178));
                    lVar12 = *(long *)pCVar22;
                    if (lVar12 != 0) {
                      lVar24 = *(long *)(lVar12 + -8);
                      if ((long)uVar20 < lVar24) {
                        (**(code **)(*(long *)local_88 + 0x670))
                                  (dVar33,local_88,lVar12 + lVar26,uVar19 | 0x10);
                        Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
                        goto LAB_0010af92;
                      }
                      goto LAB_0010a972;
                    }
                  }
                }
              }
LAB_0010b0de:
              lVar24 = 0;
              goto LAB_0010a972;
            }
            local_88 = (Object *)0x0;
            Ref<TextServer>::operator=(this_02,*(Ref **)(TextServerManager::singleton + 0x178));
            puVar5 = *(undefined4 **)(this + 0x9f8);
            if (puVar5 == (undefined4 *)0x0) {
              uVar32 = 0x2026;
            }
            else {
              lVar24 = *(long *)(puVar5 + -2);
              uVar32 = 0x2026;
              if (1 < (int)lVar24) {
                if (lVar24 < 1) goto LAB_0010b71f;
                uVar32 = *puVar5;
              }
            }
            lVar12 = *(long *)pCVar22;
            if (lVar12 == 0) goto LAB_0010b0de;
            lVar24 = *(long *)(lVar12 + -8);
            if (lVar24 <= (long)uVar20) goto LAB_0010a972;
            (**(code **)(*(long *)local_88 + 0x5d8))(local_88,lVar12 + uVar20 * 8,uVar32);
            this_01 = this_02;
            Ref<TextServer>::unref(this_02);
            local_88 = (Object *)0x0;
            Ref<TextServer>::operator=(this_02,*(Ref **)(TextServerManager::singleton + 0x178));
            lVar12 = *(long *)pCVar22;
            if (lVar12 == 0) goto LAB_0010b0de;
            lVar24 = *(long *)(lVar12 + -8);
            if (lVar24 <= (long)uVar20) goto LAB_0010a972;
            (**(code **)(*(long *)local_88 + 0x6f8))
                      ((double)iVar9,local_88,lVar12 + uVar20 * 8,uVar25);
            Ref<TextServer>::unref(this_01);
            this_02 = this_01;
LAB_0010af92:
            lVar12 = *(long *)pCVar22;
            uVar20 = uVar20 + 1;
          } while (lVar12 != 0);
LAB_0010afa3:
          lVar12 = 0;
          goto LAB_0010afa5;
        }
        if (!bVar6) {
          if (*(int *)(this + 0x9c8) == 3) goto LAB_0010b2ea;
          goto LAB_0010afa5;
        }
        uVar25 = uVar25 | 8;
        if (*(int *)(this + 0x9c8) == 3) {
LAB_0010b2ea:
          if (lVar12 == 0) {
            lVar24 = 0;
            uVar23 = 0;
LAB_0010b303:
            uVar15 = (int)lVar24 - 1;
            if ((uVar19 & 0x20) != 0) {
              uVar23 = uVar15;
            }
            if (((uVar19 & 0x40) != 0) && (-1 < (int)uVar15)) {
              uVar20 = (ulong)uVar15;
              uVar34 = (ulong)uVar23;
              do {
                local_88 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_88,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                if (*(long *)pCVar22 == 0) {
                  lVar24 = 0;
                  goto LAB_0010a972;
                }
                lVar24 = *(long *)(*(long *)pCVar22 + -8);
                if (lVar24 <= (long)uVar20) goto LAB_0010a972;
                cVar7 = TextServer::shaped_text_has_visible_chars((RID *)local_88);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
                if (cVar7 != '\0') {
                  lVar12 = *(long *)pCVar22;
                  uVar23 = uVar15;
                  goto LAB_0010b3db;
                }
                uVar15 = uVar15 - 1;
                uVar20 = uVar20 - 1;
              } while (uVar15 != 0xffffffff);
              lVar12 = *(long *)pCVar22;
              uVar23 = (uint)uVar34;
            }
LAB_0010b3db:
            if (lVar12 == 0) goto LAB_0010b714;
          }
          else {
            lVar24 = *(long *)(lVar12 + -8);
            uVar23 = (uint)lVar24;
            if (lVar24 != 1) goto LAB_0010b303;
            if ((uVar19 & 0x80) == 0) {
              lVar24 = 1;
              uVar23 = 1;
              goto LAB_0010b303;
            }
            uVar23 = 1;
          }
          uVar20 = 0;
          uVar34 = (ulong)(uint)(iVar10 - (int)uVar18);
          do {
            if (*(long *)(lVar12 + -8) <= (long)uVar20) goto LAB_0010b804;
            if ((int)uVar20 < (int)uVar23) {
              local_88 = (Object *)0x0;
              Ref<TextServer>::operator=
                        ((Ref<TextServer> *)&local_88,
                         *(Ref **)(TextServerManager::singleton + 0x178));
              lVar12 = *(long *)pCVar22;
              if (lVar12 == 0) goto LAB_0010b5be;
              lVar24 = *(long *)(lVar12 + -8);
              if (lVar24 <= (long)uVar20) goto LAB_0010a972;
              (**(code **)(*(long *)local_88 + 0x670))
                        ((double)iVar9,local_88,lVar12 + uVar20 * 8,uVar19);
              Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
            }
            else if ((int)uVar34 + -1 == (int)uVar20) {
              local_88 = (Object *)0x0;
              Ref<TextServer>::operator=
                        ((Ref<TextServer> *)&local_88,
                         *(Ref **)(TextServerManager::singleton + 0x178));
              puVar5 = *(undefined4 **)(this + 0x9f8);
              if (puVar5 == (undefined4 *)0x0) {
                uVar32 = 0x2026;
              }
              else {
                lVar24 = *(long *)(puVar5 + -2);
                uVar32 = 0x2026;
                if (1 < (int)lVar24) {
                  if (lVar24 < 1) goto LAB_0010b71f;
                  uVar32 = *puVar5;
                }
              }
              lVar12 = *(long *)pCVar22;
              if (lVar12 != 0) {
                lVar24 = *(long *)(lVar12 + -8);
                if (lVar24 <= (long)uVar20) goto LAB_0010a972;
                (**(code **)(*(long *)local_88 + 0x5d8))(local_88,lVar12 + uVar20 * 8,uVar32);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
                local_88 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_88,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                lVar12 = *(long *)pCVar22;
                if (lVar12 != 0) {
                  lVar24 = *(long *)(lVar12 + -8);
                  if ((long)uVar20 < lVar24) {
                    (**(code **)(*(long *)local_88 + 0x6f8))
                              ((double)iVar9,local_88,lVar12 + uVar20 * 8,uVar25);
                    Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
                    goto LAB_0010b415;
                  }
                  goto LAB_0010a972;
                }
              }
LAB_0010b5be:
              lVar24 = 0;
              goto LAB_0010a972;
            }
LAB_0010b415:
            lVar12 = *(long *)pCVar22;
            uVar20 = uVar20 + 1;
          } while (lVar12 != 0);
          goto LAB_0010afa3;
        }
        iVar14 = iVar10 - (int)uVar18;
        if (iVar14 < 1) goto LAB_0010afa5;
        uVar20 = (ulong)(iVar14 + -1);
        if (lVar12 == 0) goto LAB_0010b714;
        if (*(long *)(lVar12 + -8) <= (long)uVar20) {
          pCVar22[-0x20] = (CowData<RID>)0x0;
          goto LAB_0010ad2d;
        }
        local_88 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
        puVar5 = *(undefined4 **)(this + 0x9f8);
        if (puVar5 == (undefined4 *)0x0) {
          uVar32 = 0x2026;
        }
        else {
          lVar24 = *(long *)(puVar5 + -2);
          uVar32 = 0x2026;
          if (1 < (int)lVar24) {
            if (lVar24 < 1) {
LAB_0010b71f:
              uVar20 = 0;
LAB_0010a972:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar20,lVar24,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar32 = *puVar5;
          }
        }
        lVar12 = *(long *)pCVar22;
        if (lVar12 != 0) {
          lVar24 = *(long *)(lVar12 + -8);
          if (lVar24 <= (long)uVar20) goto LAB_0010a972;
          (**(code **)(*(long *)local_88 + 0x5d8))(local_88,lVar12 + uVar20 * 8,uVar32);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
          local_88 = (Object *)0x0;
          Ref<TextServer>::operator=
                    ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
          lVar12 = *(long *)pCVar22;
          if (lVar12 != 0) {
            lVar24 = *(long *)(lVar12 + -8);
            if ((long)uVar20 < lVar24) {
              (**(code **)(*(long *)local_88 + 0x6f8))
                        ((double)iVar9,local_88,lVar12 + uVar20 * 8,uVar25);
              Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
              lVar12 = *(long *)pCVar22;
              goto LAB_0010afa5;
            }
            goto LAB_0010a972;
          }
        }
        lVar24 = 0;
        goto LAB_0010a972;
      }
LAB_0010b74d:
      _update_visible(this);
      if (((*(int *)(this + 0x9e0) == 0) || (this[0x9f0] == (Label)0x0)) ||
         (*(int *)(this + 0xa00) == 0)) {
        Control::update_minimum_size();
      }
      Ref<StyleBox>::unref((Ref<StyleBox> *)&local_e0);
      goto LAB_00109f2f;
    }
    iVar9 = get_line_height(this,-1);
    *(undefined4 *)(this + 0xa04) = 0x3f800000;
    *(float *)(this + 0xa08) = (float)iVar9;
  }
  else {
    pLVar2 = this + 0xa40;
    if (*(char *)(lVar24 + 1) == '\0') goto LAB_00109bc6;
LAB_00109880:
    local_88 = (Object *)0x0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
    (**(code **)(*(long *)local_88 + 0x5a0))(local_88,lVar26);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
LAB_001098c6:
    uVar32 = (undefined4)((ulong)this_00 >> 0x20);
    local_88 = (Object *)0x0;
    if (*(int *)(this + 0xa38) == 3) {
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
      pOVar27 = local_88;
      pcVar4 = *(code **)(*(long *)local_88 + 0x5a8);
      bVar8 = (**(code **)(*(long *)this + 0x340))(this);
      (*pcVar4)(pOVar27,lVar26,bVar8 + 1);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
      if (*(long *)(this + 0xa70) == 0) goto LAB_00109fab;
LAB_00109935:
      LabelSettings::get_font();
      if (local_88 == (Object *)0x0) {
        local_d0 = (Object *)0x0;
        if (*(Object **)(this + 0xa80) != (Object *)0x0) {
          local_d0 = *(Object **)(this + 0xa80);
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            local_d0 = (Object *)0x0;
          }
          goto LAB_0010995d;
        }
      }
      else {
        LabelSettings::get_font();
LAB_0010995d:
        if (((local_88 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar27 = local_88, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_88), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
          Memory::free_static(pOVar27,false);
        }
      }
LAB_00109977:
      lVar24 = *(long *)(this + 0xa70);
LAB_0010997e:
      if (lVar24 == 0) goto LAB_00109ed0;
      uVar29 = LabelSettings::get_font_size();
      this_00 = (Label *)CONCAT44(uVar32,uVar29);
    }
    else {
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
      pOVar27 = local_88;
      (**(code **)(*(long *)local_88 + 0x5a8))(local_88,lVar26,*(undefined4 *)(this + 0xa38));
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar27), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
        Memory::free_static(pOVar27,false);
      }
      if (*(long *)(this + 0xa70) != 0) goto LAB_00109935;
LAB_00109fab:
      local_d0 = (Object *)0x0;
      if (*(Object **)(this + 0xa80) != (Object *)0x0) {
        local_d0 = *(Object **)(this + 0xa80);
        cVar7 = RefCounted::reference();
        if (cVar7 != '\0') goto LAB_00109977;
        local_d0 = (Object *)0x0;
        lVar24 = *(long *)(this + 0xa70);
        goto LAB_0010997e;
      }
LAB_00109ed0:
      this_00 = (Label *)CONCAT44(uVar32,*(undefined4 *)(this + 0xa88));
    }
    if (local_d0 != (Object *)0x0) {
      if (*(char *)(lVar26 + -0xf) == '\0') {
        uVar18 = 0;
        local_88 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
        iVar10 = (**(code **)(*(long *)local_88 + 0x640))(local_88,lVar26);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
        if (0 < iVar10) {
          while( true ) {
            pOVar27 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar27 == (Object *)0x0) goto Label__shape;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              pOVar27 = (Object *)0x0;
            }
            pcVar4 = *(code **)(*(long *)pOVar27 + 0x658);
            (**(code **)(*(long *)local_d0 + 0x278))((Ref<TextServer> *)&local_88);
            (**(code **)(*(long *)local_d0 + 0x210))((Array *)&local_b8);
            (*pcVar4)(pOVar27,lVar26,uVar18,(Array *)&local_b8,(long)(int)this_00);
            Array::~Array((Array *)&local_b8);
            Dictionary::~Dictionary((Dictionary *)&local_88);
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar27), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
              Memory::free_static(pOVar27,false);
            }
            if (uVar18 == iVar10 - 1) break;
            uVar18 = uVar18 + 1;
          }
        }
      }
      else {
        local_c8 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_c8,*(Ref **)(TextServerManager::singleton + 0x178));
        pOVar27 = local_c8;
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pcVar4 = *(code **)(*(long *)local_c8 + 0x628);
        (**(code **)(*(long *)local_d0 + 0x278))((Ref<TextServer> *)&local_88);
        (**(code **)(*(long *)local_d0 + 0x210))((Array *)&local_b8);
        (*pcVar4)(pOVar27,lVar26,lVar26 + -8,(Array *)&local_b8,(long)(int)this_00,
                  (Ref<TextServer> *)&local_88,this + 0xa30,&local_58,this_00,pCVar35,&local_58);
        Array::~Array((Array *)&local_b8);
        Dictionary::~Dictionary((Dictionary *)&local_88);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar27), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
          Memory::free_static(pOVar27,false);
        }
      }
      local_b8 = (Object *)0x0;
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_b8,*(Ref **)(TextServerManager::singleton + 0x178));
      pOVar27 = local_b8;
      pcVar4 = *(code **)(*(long *)local_b8 + 0x5c0);
      (**(code **)(*(long *)this + 0x2e8))
                ((Ref<TextServer> *)&local_88,this,*(undefined4 *)(this + 0xa3c),pLVar2);
      (*pcVar4)(pOVar27,lVar26,(Ref<TextServer> *)&local_88);
      Array::~Array((Array *)&local_88);
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar27), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
        Memory::free_static(pOVar27,false);
      }
      if (*(long *)(this + 0xa68) != 0) {
        local_88 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
        (**(code **)(*(long *)local_88 + 0x678))(local_88,lVar26,this + 0xa60);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
      }
      *(undefined2 *)(lVar26 + -0x10) = _LC220._4_2_;
      if (local_d0 == (Object *)0x0) goto LAB_00109bf0;
      cVar7 = RefCounted::unreference();
      pOVar27 = local_d0;
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_d0), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
        Memory::free_static(pOVar27,false);
      }
      if (*(char *)(lVar26 + -0x10) != '\0') goto LAB_00109bf0;
LAB_00109b8b:
      lVar24 = *(long *)(lVar26 + 0x10);
      if (lVar24 == 0) goto LAB_00109ec0;
LAB_00109b99:
      iVar10 = *(int *)(lVar24 + -8);
      lVar24 = lVar26;
      do {
        *(int *)(this + 0xa20) = *(int *)(this + 0xa20) + iVar10;
        lVar26 = lVar24 + 0x28;
        if (lVar12 == lVar24 + 0x18) goto LAB_0010aae1;
        if (*(char *)(lVar24 + 0x19) != '\0') goto LAB_00109880;
LAB_00109bc6:
        if (this[0xa0e] != (Label)0x0) goto LAB_001098c6;
        if (*(char *)(lVar26 + -0x10) == '\0') goto LAB_00109b8b;
LAB_00109bf0:
        pCVar22 = (CowData<RID> *)(lVar26 + 0x10);
        CowData<RID>::_copy_on_write(pCVar22);
        lVar28 = *(long *)(lVar26 + 0x10);
        CowData<RID>::_copy_on_write(pCVar22);
        lVar24 = *(long *)(lVar26 + 0x10);
        if (lVar24 != 0) {
          lVar24 = lVar24 + *(long *)(lVar24 + -8) * 8;
        }
        for (; lVar28 != lVar24; lVar28 = lVar28 + 8) {
          while( true ) {
            pOVar27 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar27 == (Object *)0x0) goto Label__shape;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              pOVar27 = (Object *)0x0;
            }
            (**(code **)(*(long *)pOVar27 + 0x168))(pOVar27);
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar27), cVar7 != '\0')) break;
            lVar28 = lVar28 + 8;
            if (lVar24 == lVar28) goto LAB_00109cb0;
          }
          (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
          Memory::free_static(pOVar27,false);
        }
LAB_00109cb0:
        CowData<RID>::resize<false>(pCVar22,0);
        local_b8 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_b8,*(Ref **)(TextServerManager::singleton + 0x178));
        uVar18 = 0;
        (**(code **)(*(long *)local_b8 + 0x6c8))((double)iVar9,&local_88,local_b8,lVar26,0);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_b8);
        pLVar36 = this + 0xa60;
        if (local_80 == 0) goto LAB_00109b8b;
        do {
          lVar24 = local_80;
          if (*(long *)(local_80 + -8) <= (long)uVar18) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            this_00 = this;
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
            goto LAB_00109b8b;
          }
          local_b8 = (Object *)0x0;
          Ref<TextServer>::operator=
                    ((Ref<TextServer> *)&local_b8,*(Ref **)(TextServerManager::singleton + 0x178));
          pOVar27 = local_b8;
          uVar20 = uVar18 + 1;
          if (local_80 == 0) {
            lVar24 = 0;
            goto LAB_0010a972;
          }
          lVar24 = *(long *)(local_80 + -8);
          if ((lVar24 <= (long)uVar20) || (uVar20 = uVar18, lVar24 <= (long)uVar18))
          goto LAB_0010a972;
          local_c8 = (Object *)(**(code **)(*(long *)local_b8 + 0x660))(local_b8);
          cVar7 = RefCounted::unreference();
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar27), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
            Memory::free_static(pOVar27,false);
          }
          if (*(long *)(this + 0xa68) != 0) {
            local_b8 = (Object *)0x0;
            Ref<TextServer>::operator=
                      ((Ref<TextServer> *)&local_b8,*(Ref **)(TextServerManager::singleton + 0x178))
            ;
            (**(code **)(*(long *)local_b8 + 0x678))(local_b8,(Ref<TextServer> *)&local_c8,pLVar36);
            Ref<TextServer>::unref((Ref<TextServer> *)&local_b8);
          }
          pOVar27 = local_c8;
          if (*(long *)(lVar26 + 0x10) == 0) {
            lVar24 = 1;
          }
          else {
            lVar24 = *(long *)(*(long *)(lVar26 + 0x10) + -8) + 1;
          }
          iVar10 = CowData<RID>::resize<false>(pCVar22,lVar24);
          if (iVar10 == 0) {
            if (*(long *)(lVar26 + 0x10) == 0) {
              lVar28 = -1;
              lVar24 = 0;
            }
            else {
              lVar24 = *(long *)(*(long *)(lVar26 + 0x10) + -8);
              lVar28 = lVar24 + -1;
              if (-1 < lVar28) {
                CowData<RID>::_copy_on_write(pCVar22);
                *(Object **)(*(long *)(lVar26 + 0x10) + lVar28 * 8) = pOVar27;
                goto LAB_00109e97;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar28,lVar24,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142);
          }
LAB_00109e97:
          uVar18 = uVar18 + 2;
        } while (local_80 != 0);
        lVar24 = *(long *)(lVar26 + 0x10);
        this_00 = this;
        if (lVar24 != 0) goto LAB_00109b99;
LAB_00109ec0:
        iVar10 = 0;
        lVar24 = lVar26;
      } while( true );
    }
    _err_print_error("_shape","scene/gui/label.cpp",0xa1,"Condition \"font.is_null()\" is true.",0,0
                    );
    Ref<Font>::unref((Ref<Font> *)&local_d0);
  }
  pOVar27 = local_e0;
  if (((local_e0 == (Object *)0x0) || (cVar7 = RefCounted::unreference(), cVar7 == '\0')) ||
     (cVar7 = predelete_handler(pOVar27), cVar7 == '\0')) {
LAB_00109f2f:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar27,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010b804:
  lVar12 = *(long *)pCVar22;
LAB_0010afa5:
  pCVar22[-0x20] = (CowData<RID>)0x0;
LAB_0010afa9:
  if (lVar12 == 0) {
    iVar14 = 0;
    goto LAB_0010ad30;
  }
LAB_0010ad2d:
  while( true ) {
    iVar14 = *(int *)(lVar12 + -8);
LAB_0010ad30:
    while( true ) {
      uVar18 = (ulong)(uint)((int)uVar18 + iVar14);
      pCVar11 = pCVar22 + 8;
      pCVar22 = pCVar22 + 0x28;
      if (pCVar16 == pCVar11) goto LAB_0010b74d;
      if (*(int *)(this + 0x9e0) != 0) goto LAB_0010ac96;
LAB_0010ad59:
      CowData<RID>::_copy_on_write(pCVar22);
      lVar24 = *(long *)pCVar22;
      CowData<RID>::_copy_on_write(pCVar22);
      lVar12 = *(long *)pCVar22;
      if (lVar12 != 0) break;
      lVar26 = 0;
      if (lVar24 != 0) goto LAB_0010ad8b;
      if (pCVar22[-0x20] != (CowData<RID>)0x0) goto LAB_0010aca4;
      iVar14 = 0;
    }
    lVar26 = lVar12 + *(long *)(lVar12 + -8) * 8;
    if (lVar24 != lVar26) break;
    if (pCVar22[-0x20] != (CowData<RID>)0x0) goto LAB_0010aca4;
  }
LAB_0010ad8b:
  do {
    fVar30 = *(float *)(this + 0xa04);
    local_88 = (Object *)0x0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
    fVar31 = (float)(**(code **)(*(long *)local_88 + 0x720))(local_88,lVar24);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
    if (fVar30 < fVar31) {
      local_88 = (Object *)0x0;
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_88,*(Ref **)(TextServerManager::singleton + 0x178));
      uVar32 = (**(code **)(*(long *)local_88 + 0x720))(local_88,lVar24);
      *(undefined4 *)(this + 0xa04) = uVar32;
      Ref<TextServer>::unref((Ref<TextServer> *)&local_88);
    }
    lVar24 = lVar24 + 8;
  } while (lVar26 != lVar24);
  goto LAB_0010ac96;
}



/* Label::_ensure_shaped() const */

void __thiscall Label::_ensure_shaped(Label *this)

{
  char *pcVar1;
  char *pcVar2;
  
  if (((this[0xa0d] == (Label)0x0) && (this[0xa0e] == (Label)0x0)) && (this[0xa0f] == (Label)0x0)) {
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    pcVar1 = *(char **)(this + 0xa18);
    CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
    pcVar2 = *(char **)(this + 0xa18);
    if (pcVar2 != (char *)0x0) {
      pcVar2 = pcVar2 + *(long *)(pcVar2 + -8) * 0x28;
    }
    while( true ) {
      if (pcVar1 == pcVar2) {
        return;
      }
      if ((*pcVar1 != '\0') || (pcVar1[1] != '\0')) break;
      pcVar1 = pcVar1 + 0x28;
    }
  }
  _shape(this);
  return;
}



/* Label::_notification(int) */

void __thiscall Label::_notification(Label *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  CowData<RID> *this_00;
  char cVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  byte bVar27;
  undefined1 *puVar28;
  CowData<RID> *pCVar29;
  ulong uVar30;
  long lVar31;
  Object *pOVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  CowData<RID> *pCVar37;
  int iVar38;
  int iVar39;
  long in_FS_OFFSET;
  bool bVar40;
  float fVar41;
  double dVar42;
  float fVar43;
  double dVar44;
  float fVar45;
  float fVar46;
  Color *pCVar47;
  Ref<Font> *local_1e8;
  float local_1a8;
  int local_17c;
  double local_178;
  int local_168;
  int local_164;
  int local_f0;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  long local_b0;
  Object *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  Color local_78 [12];
  float fStack_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  int iVar4;
  
  auVar8._8_8_ = local_68._8_8_;
  auVar8._0_8_ = local_68._0_8_;
  auVar7._8_8_ = local_88._8_8_;
  auVar7._0_8_ = local_88._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
    this[0xa0e] = (Label)0x1;
LAB_0010baf4:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::queue_redraw();
      return;
    }
    goto LAB_0010d935;
  }
  if (param_1 < 0x2e) {
    if (param_1 == 0x1e) {
      if (this[0x9f0] != (Label)0x0) {
        plVar21 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar21 + 0xeb8))(plVar21,*(undefined8 *)(this + 0x428),1);
      }
      CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
      pCVar37 = *(CowData<RID> **)(this + 0xa18);
      CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
      pCVar29 = *(CowData<RID> **)(this + 0xa18);
      if (pCVar29 != (CowData<RID> *)0x0) {
        pCVar29 = pCVar29 + *(long *)(pCVar29 + -8) * 0x28;
      }
      this_00 = pCVar37 + 0x20;
      while (pCVar29 != pCVar37) {
        local_a8 = (Object *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_a8,*(Ref **)(TextServerManager::singleton + 0x178));
        cVar9 = (**(code **)(*(long *)local_a8 + 0x698))(local_a8,this_00 + -0x10);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
        if (cVar9 == '\0') {
          this_00[-0x1f] = (CowData<RID>)0x1;
        }
        CowData<RID>::_copy_on_write(this_00);
        lVar33 = *(long *)this_00;
        CowData<RID>::_copy_on_write(this_00);
        lVar24 = *(long *)this_00;
        if (lVar24 != 0) {
          lVar24 = lVar24 + *(long *)(lVar24 + -8) * 8;
        }
        for (; lVar24 != lVar33; lVar33 = lVar33 + 8) {
          pOVar32 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar32 == (Object *)0x0) {
Label__notification:
                    /* WARNING: Does not return */
            pcVar26 = (code *)invalidInstructionException();
            (*pcVar26)();
          }
          cVar9 = RefCounted::reference();
          if (cVar9 == '\0') {
            pOVar32 = (Object *)0x0;
          }
          cVar9 = (**(code **)(*(long *)pOVar32 + 0x698))(pOVar32);
          cVar10 = RefCounted::unreference();
          if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar32), cVar10 != '\0')) {
            (**(code **)(*(long *)pOVar32 + 0x140))(pOVar32);
            Memory::free_static(pOVar32,false);
          }
          if (cVar9 == '\0') {
            this_00[-0x20] = (CowData<RID>)0x1;
            break;
          }
        }
        pCVar37 = this_00 + 8;
        this_00 = this_00 + 0x28;
      }
      _ensure_shaped(this);
      local_c8 = *(undefined8 *)(this + 0x428);
      lVar24 = *(long *)(this + 0xa70);
      local_c0 = (long *)0x0;
      plVar21 = *(long **)(this + 0xa78);
      lVar33 = lVar24;
      if (plVar21 != (long *)0x0) {
        local_c0 = plVar21;
        cVar9 = RefCounted::reference();
        if (cVar9 == '\0') {
          plVar21 = (long *)0x0;
          local_c0 = (long *)0x0;
          lVar33 = *(long *)(this + 0xa70);
        }
        else {
          lVar33 = *(long *)(this + 0xa70);
        }
      }
      if (lVar33 == 0) {
        local_b8 = (long *)0x0;
        if (*(long **)(this + 0xa80) != (long *)0x0) {
          local_b8 = *(long **)(this + 0xa80);
          cVar9 = RefCounted::reference();
          if (cVar9 != '\0') goto LAB_0010bd62;
          local_b8 = (long *)0x0;
          lVar33 = *(long *)(this + 0xa70);
          goto LAB_0010bd6e;
        }
LAB_0010bfcb:
        uVar12 = *(undefined4 *)(this + 0xa88);
      }
      else {
        LabelSettings::get_font();
        if (local_a8 == (Object *)0x0) {
          local_b8 = (long *)0x0;
          if ((*(long **)(this + 0xa80) != (long *)0x0) &&
             (local_b8 = *(long **)(this + 0xa80), cVar9 = RefCounted::reference(), cVar9 == '\0'))
          {
            local_b8 = (long *)0x0;
          }
        }
        else {
          LabelSettings::get_font();
        }
        local_1e8 = (Ref<Font> *)&local_a8;
        Ref<Font>::unref(local_1e8);
LAB_0010bd62:
        lVar33 = *(long *)(this + 0xa70);
LAB_0010bd6e:
        if (lVar33 == 0) goto LAB_0010bfcb;
        uVar12 = LabelSettings::get_font_size();
      }
      fVar43 = (float)(**(code **)(*local_b8 + 0x218))(local_b8,uVar12);
      if (lVar24 == 0) {
        fVar41 = (float)*(int *)(this + 0xa90);
        local_88 = *(undefined1 (*) [16])(this + 0xa94);
        local_a0 = *(undefined8 *)(this + 0xab4);
        _local_78 = *(undefined1 (*) [16])(this + 0xaa4);
        local_68 = *(undefined1 (*) [16])(this + 0xabc);
        local_168 = *(int *)(this + 0xacc);
        local_17c = *(int *)(this + 0xad0);
      }
      else {
        local_88 = LabelSettings::get_font_color();
        _local_78 = LabelSettings::get_shadow_color();
        local_a0 = LabelSettings::get_shadow_offset();
        fVar41 = (float)LabelSettings::get_paragraph_spacing();
        local_68 = LabelSettings::get_outline_color();
        local_168 = LabelSettings::get_outline_size();
        local_17c = LabelSettings::get_shadow_size();
      }
      local_f0 = (int)fVar41;
      bVar11 = (**(code **)(*(long *)this + 0x340))(this);
      pcVar26 = *(code **)(*plVar21 + 0x1d8);
      local_50 = Control::get_size();
      local_58 = 0;
      (*pcVar26)(plVar21,local_c8,(Vector2 *)&local_58);
      if (*(int *)(this + 0xa4c) < 0) {
        bVar11 = 0;
        bVar27 = 0;
        bVar40 = false;
      }
      else {
        iVar13 = *(int *)(this + 0xa48);
        if (iVar13 == 3) {
          bVar11 = 0;
          bVar27 = 1;
          bVar40 = false;
        }
        else {
          bVar40 = false;
          bVar27 = (iVar13 != 2 | bVar11) ^ 1;
          if (iVar13 == 4) {
            bVar11 = 1;
          }
          else if (iVar13 != 2) {
            bVar40 = iVar13 == 1;
            bVar11 = 0;
          }
        }
      }
      lVar33 = 0;
      iVar13 = get_layout_data(this,(Vector2 *)&local_58,&local_cc,&local_d0);
      lVar24 = *(long *)(this + 0xa18);
      local_164 = 0;
      iVar38 = (int)((float)iVar13 * *(float *)(this + 0xa50));
      iVar13 = iVar13 - iVar38;
      if (lVar24 != 0) {
        iVar39 = 0;
        do {
          if (*(long *)(lVar24 + -8) <= lVar33) break;
          lVar1 = lVar24 + lVar33 * 0x28;
          lVar22 = (long)iVar39;
          lVar25 = *(long *)(lVar1 + 0x20);
          if (lVar25 == 0) {
            lVar31 = 0;
          }
          else {
            lVar31 = *(long *)(lVar25 + -8);
            lVar22 = lVar22 + lVar31;
          }
          iVar35 = *(int *)(this + 0xa54);
          if (iVar35 < lVar22) {
            uVar19 = 0;
            if (iVar39 < iVar35) {
              uVar19 = iVar35 - iVar39;
            }
            if (lVar22 < local_cc) {
              if (lVar25 == 0) break;
              iVar35 = *(int *)(lVar25 + -8);
            }
            else {
              iVar35 = local_cc - iVar39;
            }
            if (iVar35 < 1) break;
            local_a8 = (Object *)0x0;
            Ref<TextServer>::operator=
                      ((Ref<TextServer> *)&local_a8,*(Ref **)(TextServerManager::singleton + 0x178))
            ;
            iVar14 = (**(code **)(*(long *)local_a8 + 0x5b8))();
            Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
            if ((int)uVar19 < iVar35) {
              uVar23 = (ulong)(int)uVar19;
              uVar2 = (iVar35 - uVar19) + uVar23;
              uVar30 = (ulong)uVar19;
              lVar24 = *(long *)(lVar1 + 0x20);
              iVar35 = local_164;
              do {
                if (lVar24 == 0) {
                  lVar25 = 0;
LAB_0010cd83:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,uVar23,lVar25,"p_index",
                             "size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar26 = (code *)invalidInstructionException();
                  (*pcVar26)();
                }
                lVar25 = *(long *)(lVar24 + -8);
                if (lVar25 <= (long)uVar23) goto LAB_0010cd83;
                local_b0 = *(long *)(lVar24 + uVar23 * 8);
                uVar12 = _get_line_rect(this,(int)lVar33,(int)uVar30);
                local_a8 = (Object *)0x0;
                local_58._0_4_ = uVar12;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_a8,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                local_1e8 = (Ref<Font> *)
                            (**(code **)(*(long *)local_a8 + 0x728))(local_a8,&local_b0);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                local_a8 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_a8,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                local_178 = (double)(**(code **)(*(long *)local_a8 + 0x730))(local_a8,&local_b0);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                if ((double)local_1e8 + local_178 < (double)(int)fVar43) {
                  dVar42 = (double)(int)fVar43 - ((double)local_1e8 + local_178);
                  dVar44 = _LC31 * dVar42;
                  local_1e8 = (Ref<Font> *)((double)local_1e8 + dVar44);
                  local_178 = (dVar42 - dVar44) + local_178;
                }
                local_a8 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_a8,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                lVar24 = (**(code **)(*(long *)local_a8 + 0x6a0))(local_a8,&local_b0);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                local_a8 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_a8,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                iVar15 = (**(code **)(*(long *)local_a8 + 0x6b0))(local_a8,&local_b0);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                local_a8 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_a8,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                iVar16 = (**(code **)(*(long *)local_a8 + 0x6e0))(local_a8,&local_b0);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                local_a8 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_a8,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                iVar17 = (**(code **)(*(long *)local_a8 + 0x6d8))(local_a8,&local_b0);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                local_a8 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_a8,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                lVar25 = (**(code **)(*(long *)local_a8 + 0x6e8))(local_a8,&local_b0);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                local_a8 = (Object *)0x0;
                Ref<TextServer>::operator=
                          ((Ref<TextServer> *)&local_a8,
                           *(Ref **)(TextServerManager::singleton + 0x178));
                iVar18 = (**(code **)(*(long *)local_a8 + 0x6f0))(local_a8,&local_b0);
                Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                dVar42 = (double)local_58._4_4_;
                local_58 = CONCAT44((float)(dVar42 + (double)local_1e8),(undefined4)local_58);
                if (fStack_6c == 0.0) {
                  iVar36 = 1;
                  goto joined_r0x0010c89a;
                }
                iVar6 = 0;
LAB_0010c5b4:
                local_98 = local_58;
                local_164 = iVar35;
                if ((iVar16 < 0) || (iVar14 != 2)) {
                  if (0 < iVar15) goto LAB_0010c5ff;
LAB_0010c871:
                  if (((iVar14 != 2) && (-1 < iVar16)) && (0 < iVar18)) {
                    plVar21 = (long *)(lVar25 + 0x18);
                    do {
                      iVar36 = 0;
                      if (*(char *)((long)plVar21 + -0xf) != '\0') {
LAB_0010d35b:
                        if ((!bVar40) ||
                           (*(int *)(lVar1 + 4) + *(int *)((long)plVar21 + -0x14) <=
                            *(int *)(this + 0xa4c))) {
                          fVar41 = (float)local_98;
                          if ((iVar38 <= local_164) && (bVar27 != 0)) goto LAB_0010d339;
                          if ((bVar11 != 0) && (local_164 < iVar13)) goto LAB_0010d330;
                          if (iVar6 == 0) {
                            draw_glyph_shadow((Glyph *)(plVar21 + -3),(RID *)&local_c8,local_78,
                                              local_17c,(Vector2 *)&local_98,(Vector2 *)&local_a0);
                            goto LAB_0010d339;
                          }
                          if (iVar6 == 1) {
                            if (((*plVar21 != 0) && ((float)local_68._12_4_ != 0.0)) &&
                               (0 < local_168)) {
                              local_a8 = (Object *)0x0;
                              Ref<TextServer>::operator=
                                        ((Ref<TextServer> *)&local_a8,
                                         *(Ref **)(TextServerManager::singleton + 0x178));
                              local_90 = CONCAT44(*(float *)(plVar21 + -1) + local_98._4_4_,
                                                  fVar41 + *(float *)((long)plVar21 + -0xc));
                              (**(code **)(*(long *)local_a8 + 0x500))
                                        (local_a8,plVar21,&local_c8,(long)(int)plVar21[1],
                                         (long)local_168,&local_90,
                                         (long)*(int *)((long)plVar21 + 0xc),local_68);
                              Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                            }
                            goto LAB_0010d339;
                          }
                          if (*plVar21 != 0) {
                            pOVar32 = *(Object **)(TextServerManager::singleton + 0x178);
                            if (pOVar32 != (Object *)0x0) {
                              cVar9 = RefCounted::reference();
                              if (cVar9 == '\0') {
                                pOVar32 = (Object *)0x0;
                              }
                              local_90 = CONCAT44((float)((ulong)local_98 >> 0x20) +
                                                  (float)((ulong)*(undefined8 *)
                                                                  ((long)plVar21 + -0xc) >> 0x20),
                                                  (float)local_98 +
                                                  (float)*(undefined8 *)((long)plVar21 + -0xc));
                              (**(code **)(*(long *)pOVar32 + 0x4f8))
                                        (pOVar32,plVar21,&local_c8,(long)(int)plVar21[1],&local_90,
                                         (long)*(int *)((long)plVar21 + 0xc),local_88);
                              cVar9 = RefCounted::unreference();
                              if (cVar9 != '\0') {
                                cVar9 = predelete_handler(pOVar32);
                                if (cVar9 != '\0') {
                                  (**(code **)(*(long *)pOVar32 + 0x140))();
                                  Memory::free_static(pOVar32,false);
                                  goto LAB_0010d339;
                                }
                              }
                              goto LAB_0010d330;
                            }
                            goto Label__notification;
                          }
                          if ((*plVar21 & 0x10040000) != 0) goto LAB_0010d339;
                          local_a8 = (Object *)0x0;
                          Ref<TextServer>::operator=
                                    ((Ref<TextServer> *)&local_a8,
                                     *(Ref **)(TextServerManager::singleton + 0x178));
                          pOVar32 = local_a8;
                          local_90 = CONCAT44(*(float *)(plVar21 + -1) + local_98._4_4_,
                                              fVar41 + *(float *)((long)plVar21 + -0xc));
                          (**(code **)(*(long *)local_a8 + 0x590))
                                    (local_a8,&local_c8,(long)(int)plVar21[1],&local_90,
                                     (long)*(int *)((long)plVar21 + 0xc),local_88);
                          cVar9 = RefCounted::unreference();
                          if (cVar9 != '\0') {
                            cVar9 = predelete_handler(pOVar32);
                            if (cVar9 != '\0') {
                              (**(code **)(*(long *)pOVar32 + 0x140))();
                              Memory::free_static(pOVar32,false);
                              goto LAB_0010d339;
                            }
                          }
                        }
LAB_0010d330:
LAB_0010d339:
                        iVar36 = iVar36 + 1;
                        local_164 = local_164 + 1;
                        local_98 = CONCAT44(local_98._4_4_,
                                            (float)local_98 + *(float *)((long)plVar21 + -4));
                        if ((int)(uint)*(byte *)((long)plVar21 + -0xf) <= iVar36) goto LAB_0010d4d0;
                        goto LAB_0010d35b;
                      }
LAB_0010d4d0:
                      plVar21 = plVar21 + 6;
                    } while ((long *)(lVar25 + 0x48 + (ulong)(iVar18 - 1) * 0x30) != plVar21);
                  }
                }
                else {
                  uVar19 = iVar18 - 1;
                  if (-1 < (int)uVar19) {
                    plVar21 = (long *)(lVar25 + 0x18 + (long)(int)uVar19 * 0x30);
                    do {
                      iVar36 = 0;
                      if (*(char *)((long)plVar21 + -0xf) != '\0') {
LAB_0010ce8b:
                        if ((!bVar40) ||
                           (*(int *)(lVar1 + 4) + *(int *)((long)plVar21 + -0x14) <=
                            *(int *)(this + 0xa4c))) {
                          fVar41 = (float)local_98;
                          if ((iVar38 <= local_164) && (bVar27 != 0)) goto LAB_0010ce69;
                          if ((bVar11 != 0) && (local_164 < iVar13)) goto LAB_0010ce60;
                          if (iVar6 == 0) {
                            draw_glyph_shadow((Glyph *)(plVar21 + -3),(RID *)&local_c8,local_78,
                                              local_17c,(Vector2 *)&local_98,(Vector2 *)&local_a0);
                            goto LAB_0010ce69;
                          }
                          if (iVar6 == 1) {
                            if (((*plVar21 != 0) && ((float)local_68._12_4_ != 0.0)) &&
                               (0 < local_168)) {
                              local_a8 = (Object *)0x0;
                              Ref<TextServer>::operator=
                                        ((Ref<TextServer> *)&local_a8,
                                         *(Ref **)(TextServerManager::singleton + 0x178));
                              local_90 = CONCAT44(local_98._4_4_ +
                                                  (float)((ulong)*(undefined8 *)
                                                                  ((long)plVar21 + -0xc) >> 0x20),
                                                  fVar41 + (float)*(undefined8 *)
                                                                   ((long)plVar21 + -0xc));
                              (**(code **)(*(long *)local_a8 + 0x500))
                                        (local_a8,plVar21,&local_c8,(long)(int)plVar21[1],
                                         (long)local_168,&local_90,
                                         (long)*(int *)((long)plVar21 + 0xc),local_68);
                              Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                            }
                            goto LAB_0010ce69;
                          }
                          if (*plVar21 != 0) {
                            pOVar32 = *(Object **)(TextServerManager::singleton + 0x178);
                            if (pOVar32 != (Object *)0x0) {
                              cVar9 = RefCounted::reference();
                              if (cVar9 == '\0') {
                                pOVar32 = (Object *)0x0;
                              }
                              local_90 = CONCAT44((float)((ulong)local_98 >> 0x20) +
                                                  (float)((ulong)*(undefined8 *)
                                                                  ((long)plVar21 + -0xc) >> 0x20),
                                                  (float)local_98 +
                                                  (float)*(undefined8 *)((long)plVar21 + -0xc));
                              (**(code **)(*(long *)pOVar32 + 0x4f8))
                                        (pOVar32,plVar21,&local_c8,(long)(int)plVar21[1],&local_90,
                                         (long)*(int *)((long)plVar21 + 0xc),local_88);
                              cVar9 = RefCounted::unreference();
                              if (cVar9 != '\0') {
                                cVar9 = predelete_handler(pOVar32);
                                if (cVar9 != '\0') {
                                  (**(code **)(*(long *)pOVar32 + 0x140))();
                                  Memory::free_static(pOVar32,false);
                                  goto LAB_0010ce69;
                                }
                              }
                              goto LAB_0010ce60;
                            }
                            goto Label__notification;
                          }
                          if ((*plVar21 & 0x10040000) != 0) goto LAB_0010ce69;
                          local_a8 = (Object *)0x0;
                          Ref<TextServer>::operator=
                                    ((Ref<TextServer> *)&local_a8,
                                     *(Ref **)(TextServerManager::singleton + 0x178));
                          pOVar32 = local_a8;
                          local_90 = CONCAT44(local_98._4_4_ +
                                              (float)((ulong)*(undefined8 *)((long)plVar21 + -0xc)
                                                     >> 0x20),
                                              fVar41 + (float)*(undefined8 *)((long)plVar21 + -0xc))
                          ;
                          (**(code **)(*(long *)local_a8 + 0x590))
                                    (local_a8,&local_c8,(long)(int)plVar21[1],&local_90,
                                     (long)*(int *)((long)plVar21 + 0xc),local_88);
                          cVar9 = RefCounted::unreference();
                          if (cVar9 != '\0') {
                            cVar9 = predelete_handler(pOVar32);
                            if (cVar9 != '\0') {
                              (**(code **)(*(long *)pOVar32 + 0x140))();
                              Memory::free_static(pOVar32,false);
                              goto LAB_0010ce69;
                            }
                          }
                        }
LAB_0010ce60:
LAB_0010ce69:
                        iVar36 = iVar36 + 1;
                        local_164 = local_164 + 1;
                        local_98 = CONCAT44(local_98._4_4_,
                                            (float)local_98 + *(float *)((long)plVar21 + -4));
                        if ((int)(uint)*(byte *)((long)plVar21 + -0xf) <= iVar36) goto LAB_0010d000;
                        goto LAB_0010ce8b;
                      }
LAB_0010d000:
                      plVar21 = plVar21 + -6;
                    } while (plVar21 !=
                             (long *)(lVar25 + -0x48 + (long)iVar18 * 0x30 + (ulong)uVar19 * -0x30))
                    ;
                  }
                  if (0 < iVar15) {
LAB_0010c5ff:
                    iVar36 = 0;
                    plVar21 = (long *)(lVar24 + 0x18);
                    do {
                      while (-1 < iVar17) {
                        if (iVar14 != 2) {
                          if (iVar36 < iVar17) break;
                          goto LAB_0010c871;
                        }
                        if (iVar17 <= iVar36) break;
LAB_0010c625:
                        iVar36 = iVar36 + 1;
                        plVar21 = plVar21 + 6;
                        if (iVar15 <= iVar36) goto LAB_0010c871;
                      }
                      iVar34 = 0;
                      if (*(char *)((long)plVar21 + -0xf) == '\0') goto LAB_0010c625;
                      do {
                        local_1a8 = (float)local_98;
                        if ((((!bVar40) ||
                             (*(int *)(lVar1 + 4) + *(int *)((long)plVar21 + -0x14) <=
                              *(int *)(this + 0xa4c))) && ((local_164 < iVar38 || (bVar27 == 0))))
                           && ((bVar11 == 0 || (iVar13 <= local_164)))) {
                          lVar22 = *plVar21;
                          if (iVar6 == 0) {
                            if ((lVar22 != 0) && (0.0 < fStack_6c)) {
                              pOVar32 = *(Object **)(TextServerManager::singleton + 0x178);
                              if (pOVar32 == (Object *)0x0) goto Label__notification;
                              cVar9 = RefCounted::reference();
                              local_1a8 = (float)local_98;
                              fVar41 = (float)((ulong)local_98 >> 0x20);
                              if (cVar9 == '\0') {
                                pOVar32 = (Object *)0x0;
                              }
                              fVar45 = (float)local_a0;
                              fVar46 = (float)((ulong)local_a0 >> 0x20);
                              local_90 = CONCAT44((float)((ulong)*(undefined8 *)
                                                                  ((long)plVar21 + -0xc) >> 0x20) +
                                                  fVar41 + fVar46,
                                                  (float)*(undefined8 *)((long)plVar21 + -0xc) +
                                                  local_1a8 + fVar45);
                              pCVar47 = local_78;
                              (**(code **)(*(long *)pOVar32 + 0x4f8))();
                              cVar9 = RefCounted::unreference();
                              if (cVar9 != '\0') {
                                cVar9 = predelete_handler(pOVar32);
                                if (cVar9 != '\0') {
                                  (**(code **)(*(long *)pOVar32 + 0x140))();
                                  Memory::free_static(pOVar32,false);
                                }
                              }
                              if ((0.0 < fStack_6c) && (0 < local_17c)) {
                                local_a8 = (Object *)0x0;
                                Ref<TextServer>::operator=
                                          ((Ref<TextServer> *)&local_a8,
                                           *(Ref **)(TextServerManager::singleton + 0x178));
                                iVar5 = *(int *)((long)plVar21 + 0xc);
                                iVar3 = (int)plVar21[1];
                                local_90 = CONCAT44(fVar41 + *(float *)(plVar21 + -1) + fVar46,
                                                    *(float *)((long)plVar21 + -0xc) + local_1a8 +
                                                    fVar45);
                                pcVar26 = *(code **)(*(long *)local_a8 + 0x500);
                                iVar4 = local_17c;
                                goto LAB_0010cacc;
                              }
                            }
                          }
                          else if (iVar6 == 1) {
                            if (((lVar22 != 0) && ((float)local_68._12_4_ != 0.0)) &&
                               (0 < local_168)) {
                              local_a8 = (Object *)0x0;
                              Ref<TextServer>::operator=
                                        ((Ref<TextServer> *)&local_a8,
                                         *(Ref **)(TextServerManager::singleton + 0x178));
                              pCVar47 = (Color *)local_68;
                              iVar5 = *(int *)((long)plVar21 + 0xc);
                              iVar3 = (int)plVar21[1];
                              local_90 = CONCAT44(*(float *)(plVar21 + -1) + local_98._4_4_,
                                                  *(float *)((long)plVar21 + -0xc) + local_1a8);
                              pcVar26 = *(code **)(*(long *)local_a8 + 0x500);
                              iVar4 = local_168;
LAB_0010cacc:
                              (*pcVar26)(local_a8,plVar21,&local_c8,(long)iVar3,(long)iVar4,
                                         &local_90,(long)iVar5,pCVar47);
                              Ref<TextServer>::unref((Ref<TextServer> *)&local_a8);
                              local_1a8 = local_1a8;
                            }
                          }
                          else if (lVar22 == 0) {
                            if ((*plVar21 & 0x10040000) == 0) {
                              pOVar32 = *(Object **)(TextServerManager::singleton + 0x178);
                              if (pOVar32 == (Object *)0x0) goto Label__notification;
                              cVar9 = RefCounted::reference();
                              if (cVar9 == '\0') {
                                pOVar32 = (Object *)0x0;
                              }
                              local_1a8 = (float)local_98;
                              local_90 = CONCAT44((float)((ulong)local_98 >> 0x20) +
                                                  (float)((ulong)*(undefined8 *)
                                                                  ((long)plVar21 + -0xc) >> 0x20),
                                                  (float)local_98 +
                                                  (float)*(undefined8 *)((long)plVar21 + -0xc));
                              (**(code **)(*(long *)pOVar32 + 0x590))
                                        (pOVar32,&local_c8,(long)(int)plVar21[1],&local_90,
                                         (long)*(int *)((long)plVar21 + 0xc),local_88);
                              cVar9 = RefCounted::unreference();
                              if (cVar9 != '\0') {
                                cVar9 = predelete_handler(pOVar32);
                                if (cVar9 != '\0') {
                                  (**(code **)(*(long *)pOVar32 + 0x140))();
                                  Memory::free_static(pOVar32,false);
                                }
                              }
                            }
                          }
                          else {
                            pOVar32 = *(Object **)(TextServerManager::singleton + 0x178);
                            if (pOVar32 == (Object *)0x0) goto Label__notification;
                            cVar9 = RefCounted::reference();
                            if (cVar9 == '\0') {
                              pOVar32 = (Object *)0x0;
                            }
                            local_1a8 = (float)local_98;
                            local_90 = CONCAT44((float)((ulong)local_98 >> 0x20) +
                                                (float)((ulong)*(undefined8 *)((long)plVar21 + -0xc)
                                                       >> 0x20),
                                                (float)local_98 +
                                                (float)*(undefined8 *)((long)plVar21 + -0xc));
                            (**(code **)(*(long *)pOVar32 + 0x4f8))
                                      (pOVar32,plVar21,&local_c8,(long)(int)plVar21[1],&local_90,
                                       (long)*(int *)((long)plVar21 + 0xc),local_88);
                            cVar9 = RefCounted::unreference();
                            if (cVar9 != '\0') {
                              cVar9 = predelete_handler(pOVar32);
                              if (cVar9 != '\0') {
                                (**(code **)(*(long *)pOVar32 + 0x140))();
                                Memory::free_static(pOVar32,false);
                              }
                            }
                          }
                        }
                        iVar34 = iVar34 + 1;
                        local_164 = local_164 + 1;
                        local_98 = CONCAT44(local_98._4_4_,
                                            local_1a8 + *(float *)((long)plVar21 + -4));
                      } while (iVar34 < (int)(uint)*(byte *)((long)plVar21 + -0xf));
                      plVar21 = plVar21 + 6;
                      iVar36 = iVar36 + 1;
                    } while (iVar36 < iVar15);
                    goto LAB_0010c871;
                  }
                }
                iVar36 = iVar6 + 1;
                if (iVar36 != 3) {
joined_r0x0010c89a:
                  do {
                    do {
                      if (iVar36 != 1) {
                        iVar6 = 2;
                        goto LAB_0010c5b4;
                      }
                      iVar36 = 2;
                    } while (local_168 < 1);
                    iVar6 = 1;
                  } while ((float)local_68._12_4_ == 0.0);
                  goto LAB_0010c5b4;
                }
                uVar23 = uVar23 + 1;
                fVar41 = (float)((double)local_d0 + local_178 +
                                (double)(float)(dVar42 + (double)local_1e8));
                local_58 = CONCAT44(fVar41,(undefined4)local_58);
                if (uVar23 == uVar2) goto LAB_0010d83f;
                lVar24 = *(long *)(lVar1 + 0x20);
                uVar30 = uVar23 & 0xffffffff;
                iVar35 = local_164;
              } while( true );
            }
            fVar41 = local_58._4_4_;
LAB_0010d83f:
            local_58 = CONCAT44(fVar41 + (float)local_f0,(undefined4)local_58);
            if (*(long *)(lVar1 + 0x20) == 0) {
              iVar35 = 0;
            }
            else {
              iVar35 = *(int *)(*(long *)(lVar1 + 0x20) + -8);
            }
            lVar24 = *(long *)(this + 0xa18);
          }
          else {
            iVar35 = (int)lVar31;
          }
          iVar39 = iVar39 + iVar35;
          lVar33 = lVar33 + 1;
        } while (lVar24 != 0);
      }
      Ref<Font>::unref((Ref<Font> *)&local_b8);
      Ref<StyleBox>::unref((Ref<StyleBox> *)&local_c0);
    }
    else if (param_1 == 0x28) {
      CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
      puVar20 = *(undefined1 **)(this + 0xa18);
      CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(this + 0xa18));
      puVar28 = *(undefined1 **)(this + 0xa18);
      if (puVar28 != (undefined1 *)0x0) {
        puVar28 = puVar28 + *(long *)(puVar28 + -8) * 0x28;
      }
      while( true ) {
        if (puVar28 == puVar20) break;
        *puVar20 = 1;
        puVar20 = puVar20 + 0x28;
      }
    }
  }
  else {
    if (param_1 == 0x31) goto LAB_0010baf4;
    local_88 = auVar7;
    local_68 = auVar8;
    if (param_1 != 0x7da) goto LAB_0010ba5d;
    StringName::StringName((StringName *)&local_b0,"",false);
    cVar9 = Node::can_auto_translate();
    if (cVar9 == '\0') {
      local_b8 = (long *)0x0;
      if (*(long *)(this + 0x9d0) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)(this + 0x9d0));
      }
LAB_0010b9c7:
      if (StringName::configured != '\0') {
LAB_0010b9cb:
        if (local_b0 != 0) {
          StringName::unref();
        }
      }
    }
    else {
      StringName::StringName((StringName *)&local_a8,(String *)(this + 0x9d0),false);
      Object::tr((StringName *)&local_b8,(StringName *)this);
      if (StringName::configured != '\0') {
        if (local_a8 != (Object *)0x0) {
          StringName::unref();
          goto LAB_0010b9c7;
        }
        goto LAB_0010b9cb;
      }
    }
    cVar9 = String::operator==((String *)&local_b8,(String *)(this + 0x9d8));
    if (cVar9 == '\0') {
      if (*(long **)(this + 0x9d8) != local_b8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x9d8),(CowData *)&local_b8);
      }
      if (*(float *)(this + 0xa50) < _LC5) {
        if (*(long *)(this + 0x9d8) == 0) {
          fVar43 = 0.0;
        }
        else {
          fVar43 = 0.0;
          iVar13 = (int)*(undefined8 *)(*(long *)(this + 0x9d8) + -8);
          if (iVar13 != 0) {
            fVar43 = (float)(iVar13 + -1);
          }
        }
        *(int *)(this + 0xa4c) = (int)(*(float *)(this + 0xa50) * fVar43);
      }
      this[0xa0f] = (Label)0x1;
      CanvasItem::queue_redraw();
      Node::update_configuration_warnings();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
LAB_0010ba5d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d935:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::get_character_bounds(int) const */

undefined1  [16] __thiscall Label::get_character_bounds(Label *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  Object *pOVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined8 uVar22;
  undefined4 extraout_XMM1_Db;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined8 local_b8;
  int local_78;
  int local_60;
  int local_5c;
  Object *local_58;
  Object *local_50;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _ensure_shaped(this);
  if (*(long *)(this + 0xa70) == 0) {
    local_78 = (int)(float)*(int *)(this + 0xa90);
LAB_0010df9b:
    local_58 = (Object *)0x0;
    if (*(Object **)(this + 0xa80) != (Object *)0x0) {
      local_58 = *(Object **)(this + 0xa80);
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') goto LAB_0010d9e0;
      local_58 = (Object *)0x0;
      lVar13 = *(long *)(this + 0xa70);
      goto LAB_0010d9e7;
    }
  }
  else {
    fVar17 = (float)LabelSettings::get_paragraph_spacing();
    local_78 = (int)fVar17;
    if (*(long *)(this + 0xa70) == 0) goto LAB_0010df9b;
    LabelSettings::get_font();
    if (local_50 == (Object *)0x0) {
      local_58 = (Object *)0x0;
      if (*(Object **)(this + 0xa80) != (Object *)0x0) {
        local_58 = *(Object **)(this + 0xa80);
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_58 = (Object *)0x0;
        }
        goto LAB_0010d9c9;
      }
    }
    else {
      LabelSettings::get_font();
LAB_0010d9c9:
      if (((local_50 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar16 = local_50, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_50), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
        Memory::free_static(pOVar16,false);
      }
    }
LAB_0010d9e0:
    lVar13 = *(long *)(this + 0xa70);
LAB_0010d9e7:
    if (lVar13 != 0) {
      uVar4 = LabelSettings::get_font_size();
      goto LAB_0010d9f7;
    }
  }
  uVar4 = *(undefined4 *)(this + 0xa88);
LAB_0010d9f7:
  lVar11 = 0;
  fVar17 = (float)(**(code **)(*(long *)local_58 + 0x218))(local_58,uVar4);
  get_layout_data(this,(Vector2 *)&local_48,&local_5c,&local_60);
  lVar13 = *(long *)(this + 0xa18);
  iVar15 = 0;
  do {
    if ((lVar13 == 0) || (*(long *)(lVar13 + -8) <= lVar11)) goto LAB_0010da81;
    lVar14 = (long)iVar15;
    lVar1 = lVar13 + lVar11 * 0x28;
    lVar9 = *(long *)(lVar1 + 0x20);
    if (lVar9 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(lVar9 + -8);
      lVar14 = lVar14 + lVar12;
    }
    iVar5 = *(int *)(this + 0xa54);
    if (iVar5 < lVar14) {
      if (iVar15 < iVar5) {
        iVar5 = iVar5 - iVar15;
        if (lVar14 < local_5c) {
          if (lVar9 == 0) goto LAB_0010da81;
          iVar8 = *(int *)(lVar9 + -8);
        }
        else {
          iVar8 = local_5c - iVar15;
        }
        if (iVar8 < 1) goto LAB_0010da81;
        if (iVar5 < iVar8) goto LAB_0010db43;
      }
      else {
        if (lVar14 < local_5c) {
          if (lVar9 == 0) {
LAB_0010da81:
            local_b8 = 0;
            uVar22 = 0;
LAB_0010da87:
            if (((local_58 != (Object *)0x0) &&
                (cVar3 = RefCounted::unreference(), pOVar16 = local_58, cVar3 != '\0')) &&
               (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
              Memory::free_static(pOVar16,false);
            }
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            auVar25._8_8_ = uVar22;
            auVar25._0_8_ = local_b8;
            return auVar25;
          }
          iVar8 = (int)*(undefined8 *)(lVar9 + -8);
        }
        else {
          iVar8 = local_5c - iVar15;
        }
        if (iVar8 < 1) goto LAB_0010da81;
        iVar5 = 0;
LAB_0010db43:
        lVar14 = (long)iVar5;
        lVar13 = (ulong)(uint)(iVar8 - iVar5) + lVar14;
        do {
          if (lVar9 == 0) {
            lVar12 = 0;
LAB_0010dfda:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar12,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar12 = *(long *)(lVar9 + -8);
          if (lVar12 <= lVar14) goto LAB_0010dfda;
          local_50 = *(Object **)(lVar9 + lVar14 * 8);
          fVar18 = (float)_get_line_rect(this,(int)lVar11,(int)lVar14);
          pOVar16 = *(Object **)(TextServerManager::singleton + 0x178);
          local_48 = fVar18;
          if (pOVar16 == (Object *)0x0) {
Label_get_character_bounds:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            pOVar16 = (Object *)0x0;
          }
          iVar5 = (**(code **)(*(long *)pOVar16 + 0x6b0))(pOVar16);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar16), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
            Memory::free_static(pOVar16,false);
          }
          pOVar16 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar16 == (Object *)0x0) goto Label_get_character_bounds;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            pOVar16 = (Object *)0x0;
          }
          piVar6 = (int *)(**(code **)(*(long *)pOVar16 + 0x6a0))(pOVar16);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar16), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
            Memory::free_static(pOVar16,false);
          }
          if (0 < iVar5) {
            iVar8 = 0;
            fVar21 = 0.0;
            piVar7 = piVar6;
            do {
              if ((*(byte *)(piVar7 + 2) != 0) &&
                 ((((piVar7[9] != 0 || ((*(byte *)((long)piVar7 + 10) & 8) != 0)) &&
                   (*piVar7 + *(int *)(lVar1 + 4) <= param_1)) &&
                  (param_1 < *(int *)(lVar1 + 4) + piVar7[1])))) {
                fVar17 = 0.0;
                pfVar10 = (float *)(piVar6 + (long)iVar8 * 0xc + 5);
                iVar15 = 0;
                do {
                  iVar15 = iVar15 + 1;
                  fVar17 = fVar17 + *pfVar10;
                  pfVar10 = pfVar10 + 0xc;
                } while (iVar15 < (int)(uint)*(byte *)(piVar7 + 2));
                local_b8 = CONCAT44(local_44 + 0.0,fVar21 + fVar18);
                uVar22 = CONCAT44(extraout_XMM1_Db,fVar17);
                goto LAB_0010da87;
              }
              iVar8 = iVar8 + 1;
              fVar21 = fVar21 + (float)*(byte *)((long)piVar7 + 9) * (float)piVar7[5];
              piVar7 = piVar7 + 0xc;
            } while (iVar5 != iVar8);
          }
          pOVar16 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar16 == (Object *)0x0) goto Label_get_character_bounds;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            pOVar16 = (Object *)0x0;
          }
          dVar19 = (double)(**(code **)(*(long *)pOVar16 + 0x728))(pOVar16);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar16), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
            Memory::free_static(pOVar16,false);
          }
          pOVar16 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar16 == (Object *)0x0) goto Label_get_character_bounds;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            pOVar16 = (Object *)0x0;
          }
          dVar20 = (double)(**(code **)(*(long *)pOVar16 + 0x730))(pOVar16);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar16), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
            Memory::free_static(pOVar16,false);
          }
          dVar23 = dVar19 + dVar20;
          if (dVar23 < (double)(int)fVar17) {
            dVar23 = (double)(int)fVar17 - dVar23;
            dVar24 = _LC31 * dVar23;
            dVar23 = dVar24 + dVar19 + (dVar23 - dVar24) + dVar20;
          }
          lVar9 = *(long *)(lVar1 + 0x20);
          lVar14 = lVar14 + 1;
          local_44 = (float)((double)local_60 + dVar23 + (double)local_44);
        } while (lVar13 != lVar14);
        lVar13 = *(long *)(this + 0xa18);
      }
      local_44 = local_44 + (float)local_78;
      if (lVar9 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(lVar9 + -8);
      }
    }
    else {
      iVar5 = (int)lVar12;
    }
    iVar15 = iVar15 + iVar5;
    lVar11 = lVar11 + 1;
  } while( true );
}



/* Label::get_minimum_size() const */

void __thiscall Label::get_minimum_size(Label *this)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _ensure_shaped(this);
  if (*(long *)(this + 0xa70) == 0) {
    local_38 = (Object *)0x0;
    pOVar2 = *(Object **)(this + 0xa80);
    if (pOVar2 == (Object *)0x0) goto LAB_0010e165;
    cVar3 = RefCounted::reference();
    local_38 = pOVar2;
    if (cVar3 != '\0') goto LAB_0010e14e;
    local_38 = (Object *)0x0;
    lVar4 = *(long *)(this + 0xa70);
  }
  else {
    LabelSettings::get_font();
    if (local_40 == (Object *)0x0) {
      local_38 = (Object *)0x0;
      pOVar2 = *(Object **)(this + 0xa80);
      if (pOVar2 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        local_38 = pOVar2;
        if (cVar3 == '\0') {
          local_38 = (Object *)0x0;
        }
        goto LAB_0010e137;
      }
    }
    else {
      LabelSettings::get_font();
LAB_0010e137:
      if (((local_40 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_40), cVar3 != '\0')) {
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
    }
LAB_0010e14e:
    lVar4 = *(long *)(this + 0xa70);
  }
  if (lVar4 != 0) {
    LabelSettings::get_font_size();
  }
LAB_0010e165:
  (**(code **)(*(long *)local_38 + 0x218))();
  (**(code **)(**(long **)(this + 0xa78) + 0x1d0))();
  if (((local_38 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
    (**(code **)(*(long *)local_38 + 0x140))(local_38);
    Memory::free_static(local_38,false);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Label::get_line_count() const */

undefined4 __thiscall Label::get_line_count(Label *this)

{
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return 1;
  }
  _ensure_shaped(this);
  return *(undefined4 *)(this + 0xa20);
}



/* Label::get_configuration_warnings() const */

Vector<String> * Label::get_configuration_warnings(void)

{
  code *pcVar1;
  char cVar2;
  Label *pLVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  Label *in_RSI;
  Vector<String> *in_RDI;
  long in_FS_OFFSET;
  undefined8 uVar11;
  Object *local_70;
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_configuration_warnings();
  if (((byte)in_RSI[0x2fa] & 0x40) != 0) {
    if (*(long *)(in_RSI + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pLVar3 = (Label *)SceneTree::get_edited_scene_root();
    if (((((in_RSI != pLVar3) && (lVar4 = Control::get_parent_control(), lVar4 != 0)) &&
         (lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&Container::typeinfo,0), lVar4 != 0)) &&
        ((*(int *)(in_RSI + 0x9e0) != 0 &&
         (uVar11 = Control::get_custom_minimum_size(), (float)uVar11 == 0.0)))) &&
       ((float)((ulong)uVar11 >> 0x20) == 0.0)) {
      local_60 = 0;
      local_58 = (Object *)&_LC3;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      local_58 = (Object *)0x116f70;
      local_68 = 0;
      local_50 = 0x71;
      String::parse_latin1((StrRange *)&local_68);
      RTR((String *)&local_58,(String *)&local_68);
      Vector<String>::push_back(in_RDI,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
  }
  if (*(long *)(in_RSI + 0xa70) == 0) {
LAB_0010e7b8:
    local_70 = *(Object **)(in_RSI + 0xa80);
    if ((local_70 == (Object *)0x0) || (cVar2 = RefCounted::reference(), cVar2 == '\0'))
    goto LAB_0010e789;
  }
  else {
    LabelSettings::get_font();
    local_70 = local_58;
    if (local_58 == (Object *)0x0) goto LAB_0010e7b8;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      if ((local_58 != (Object *)0x0) &&
         (cVar2 = RefCounted::unreference(), pOVar8 = local_58, cVar2 != '\0')) {
        cVar2 = predelete_handler(local_58);
        local_70 = (Object *)0x0;
        if (cVar2 != '\0') goto LAB_0010e5a6;
      }
      goto LAB_0010e7b8;
    }
    if (((local_58 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar8 = local_58, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
LAB_0010e5a6:
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
      if (local_70 == (Object *)0x0) goto LAB_0010e7b8;
    }
  }
  _ensure_shaped(in_RSI);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(in_RSI + 0xa18));
  lVar10 = *(long *)(in_RSI + 0xa18);
  CowData<Label::Paragraph>::_copy_on_write((CowData<Label::Paragraph> *)(in_RSI + 0xa18));
  lVar4 = *(long *)(in_RSI + 0xa18);
  if (lVar4 != 0) {
    lVar4 = lVar4 + *(long *)(lVar4 + -8) * 0x28;
  }
  for (; lVar10 != lVar4; lVar10 = lVar10 + 0x28) {
    pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar8 = (Object *)0x0;
    }
    lVar5 = (**(code **)(*(long *)pOVar8 + 0x6a0))(pOVar8);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
    }
    pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar8 = (Object *)0x0;
    }
    lVar6 = (**(code **)(*(long *)pOVar8 + 0x6b0))(pOVar8);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
    }
    if (0 < lVar6) {
      lVar7 = 0;
      plVar9 = (long *)(lVar5 + 0x18);
      do {
        if (*plVar9 == 0) {
          local_60 = 0;
          local_50 = 0;
          local_58 = (Object *)&_LC3;
          String::parse_latin1((StrRange *)&local_60);
          local_68 = 0;
          local_50 = 0x5d;
          local_58 = (Object *)0x116fe8;
          String::parse_latin1((StrRange *)&local_68);
          RTR((String *)&local_58,(String *)&local_68);
          Vector<String>::push_back(in_RDI);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          break;
        }
        lVar7 = lVar7 + 1;
        plVar9 = plVar9 + 6;
      } while (lVar6 != lVar7);
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_70), cVar2 != '\0')) {
    (**(code **)(*(long *)local_70 + 0x140))(local_70);
    Memory::free_static(local_70,false);
  }
LAB_0010e789:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
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



/* Label::is_class_ptr(void*) const */

uint __thiscall Label::is_class_ptr(Label *this,void *param_1)

{
  return (uint)CONCAT71(0x129c,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129c,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129c,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<Label, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label,void> *this)

{
  return;
}



/* MethodBindTRC<Rect2, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Rect2,int>::_gen_argument_type(MethodBindTRC<Rect2,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffb) + 7;
}



/* MethodBindTRC<Rect2, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Rect2,int>::get_argument_meta(MethodBindTRC<Rect2,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Array>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<Array>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Array>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Array>::_gen_argument_type(MethodBindT<Array> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<Array>::get_argument_meta(int) const */

undefined8 MethodBindT<Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::StructuredTextParser>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::StructuredTextParser>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type
          (MethodBindT<TextServer::StructuredTextParser> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::StructuredTextParser>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::StructuredTextParser>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindT<TextServer::VisibleCharactersBehavior>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::VisibleCharactersBehavior>::_gen_argument_type
          (MethodBindT<TextServer::VisibleCharactersBehavior> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::VisibleCharactersBehavior>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::VisibleCharactersBehavior>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::VisibleCharactersBehavior>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::VisibleCharactersBehavior>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTRC<int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, int>::get_argument_meta(int) const */

char __thiscall MethodBindTRC<int,int>::get_argument_meta(MethodBindTRC<int,int> *this,int param_1)

{
  return (param_1 < 1) * '\x03';
}



/* MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::OverrunBehavior>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type
          (MethodBindT<TextServer::OverrunBehavior> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::OverrunBehavior>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::OverrunBehavior>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<float>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<float>>::_gen_argument_type(int param_1)

{
  return 0x20;
}



/* MethodBindTRC<Vector<float>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<float>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<float> const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<Vector<float>const&>::_gen_argument_type
          (MethodBindT<Vector<float>const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 5;
}



/* MethodBindT<Vector<float> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<float>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<BitField<TextServer::JustificationFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::_gen_argument_type
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::get_argument_meta(int) const */

undefined8 MethodBindT<BitField<TextServer::JustificationFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::AutowrapMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::AutowrapMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::AutowrapMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::AutowrapMode>::_gen_argument_type
          (MethodBindT<TextServer::AutowrapMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::AutowrapMode>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::AutowrapMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Control::TextDirection>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Control::TextDirection>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Control::TextDirection>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Control::TextDirection>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Control::TextDirection>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Control::TextDirection>::_gen_argument_type
          (MethodBindT<Control::TextDirection> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<Control::TextDirection>::get_argument_meta(int) const */

undefined8 MethodBindT<Control::TextDirection>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<LabelSettings>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<LabelSettings>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<LabelSettings>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<LabelSettings>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<LabelSettings> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<LabelSettings>const&>::_gen_argument_type
          (MethodBindT<Ref<LabelSettings>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<LabelSettings> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<LabelSettings>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<VerticalAlignment>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<VerticalAlignment>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<VerticalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindTRC<VerticalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<VerticalAlignment>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<VerticalAlignment>::_gen_argument_type(MethodBindT<VerticalAlignment> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<VerticalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindT<VerticalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<HorizontalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<HorizontalAlignment>::_gen_argument_type
          (MethodBindT<HorizontalAlignment> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<HorizontalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindT<HorizontalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Label, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Label,void>::get_argument_count
          (CallableCustomMethodPointer<Label,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Label, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001290c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001290c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129120;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129120;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129180;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129180;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001291e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001291e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<LabelSettings> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<LabelSettings>const&>::~MethodBindT(MethodBindT<Ref<LabelSettings>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129300;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<LabelSettings> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<LabelSettings>const&>::~MethodBindT(MethodBindT<Ref<LabelSettings>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129300;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<LabelSettings>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<LabelSettings>>::~MethodBindTRC(MethodBindTRC<Ref<LabelSettings>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129360;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<LabelSettings>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<LabelSettings>>::~MethodBindTRC(MethodBindTRC<Ref<LabelSettings>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129360;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Control::TextDirection>::~MethodBindT() */

void __thiscall
MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001293c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Control::TextDirection>::~MethodBindT() */

void __thiscall
MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001293c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129420;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129420;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129480;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129480;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001294e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001294e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129540;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129540;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001295a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001295a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001296c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001296c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<float>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<float>>::~MethodBindTRC(MethodBindTRC<Vector<float>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129720;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<float>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<float>>::~MethodBindTRC(MethodBindTRC<Vector<float>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129720;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129780;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129780;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001297e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001297e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129240;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129240;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001292a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001292a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129600;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129600;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129660;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129660;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129840;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129840;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::VisibleCharactersBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::VisibleCharactersBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129960;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::VisibleCharactersBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::VisibleCharactersBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129960;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::VisibleCharactersBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::VisibleCharactersBehavior>::~MethodBindT
          (MethodBindT<TextServer::VisibleCharactersBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001299c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::VisibleCharactersBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::VisibleCharactersBehavior>::~MethodBindT
          (MethodBindT<TextServer::VisibleCharactersBehavior> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001299c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129a20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129a20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129a80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129a80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129900;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129900;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001298a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001298a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::StructuredTextParser>::~MethodBindT
          (MethodBindT<TextServer::StructuredTextParser> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ae0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::StructuredTextParser>::~MethodBindT
          (MethodBindT<TextServer::StructuredTextParser> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ae0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC
          (MethodBindTRC<TextServer::StructuredTextParser> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129b40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC
          (MethodBindTRC<TextServer::StructuredTextParser> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129b40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Array>::~MethodBindT() */

void __thiscall MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ba0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Array>::~MethodBindT() */

void __thiscall MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ba0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129c00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129c00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Rect2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2,int>::~MethodBindTRC(MethodBindTRC<Rect2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129c60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Rect2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2,int>::~MethodBindTRC(MethodBindTRC<Rect2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129c60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Label::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Label::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Label::_property_can_revertv(StringName const&) const */

undefined8 Label::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00131008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000a94 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000a9c = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000abc = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000ac4 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000aa4 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000aac = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  _DAT_00000ab4 = Variant::operator_cast_to_float((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a90 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#11}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#11}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000acc = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a8c = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#12}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#12}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000ad0 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a88 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  _DAT_00000ab8 = Variant::operator_cast_to_float((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Label::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Label::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::_get_line_rect(int, int) const [clone .cold] */

void Label::_get_line_rect(int param_1,int param_2)

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



/* CowData<Label::Paragraph>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Label::Paragraph>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::get_visible_line_count() const [clone .cold] */

void Label::get_visible_line_count(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::get_layout_data(Vector2&, int&, int&) const [clone .cold] */

void Label::get_layout_data(Vector2 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::get_line_height(int) const [clone .cold] */

void Label::get_line_height(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::_update_visible() const [clone .cold] */

void Label::_update_visible(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::~Label() [clone .cold] */

void __thiscall Label::~Label(Label *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_001102c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::_shape() const [clone .cold] */

void Label::_shape(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::_notification(int) [clone .cold] */

void Label::_notification(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::get_character_bounds(int) const [clone .cold] */

void Label::get_character_bounds(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label::get_configuration_warnings() const [clone .cold] */

void Label::get_configuration_warnings(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<Label, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Label,void>::get_object(CallableCustomMethodPointer<Label,void> *this)

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
      goto LAB_001103ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001103ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001103ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Label::_validate_propertyv(PropertyInfo&) const */

void Label::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00131010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00110538) */
/* Label::_getv(StringName const&, Variant&) const */

undefined8 Label::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00131018 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
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



/* Label::_get_class_namev() const */

undefined8 * Label::_get_class_namev(void)

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
LAB_001105f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001105f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Label");
      goto LAB_0011065e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Label");
LAB_0011065e:
  return &_get_class_namev()::_class_name_static;
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



/* Label::get_class() const */

void Label::get_class(void)

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



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001109bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001109bc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00110b3c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110b3c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<float>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x20;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00110cbc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110cbc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Array>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1c;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00110e3c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110e3c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00110fbc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110fbc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<LabelSettings>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<LabelSettings>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "LabelSettings";
  local_40 = 0xd;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_001110c0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_001110c0:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001112dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001112dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
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



/* draw_glyph_shadow(Glyph const&, RID const&, Color const&, int, Vector2 const&, Vector2 const&) */

void draw_glyph_shadow(Glyph *param_1,RID *param_2,Color *param_3,int param_4,Vector2 *param_5,
                      Vector2 *param_6)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *pOVar2;
  Glyph *pGVar3;
  Object *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x18) != 0) && (0.0 < *(float *)(param_3 + 0xc))) {
    local_50 = (Object *)0x0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_50,*(Ref **)(TextServerManager::singleton + 0x178));
    pGVar3 = param_1 + 0x18;
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)param_5 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
                        (float)((ulong)*(undefined8 *)param_6 >> 0x20),
                        (float)*(undefined8 *)param_5 + (float)*(undefined8 *)(param_1 + 0xc) +
                        (float)*(undefined8 *)param_6);
    pOVar2 = local_50;
    (**(code **)(*(long *)local_50 + 0x4f8))
              (local_50,pGVar3,param_2,(long)*(int *)(param_1 + 0x20),&local_48,
               (long)*(int *)(param_1 + 0x24),param_3);
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
      }
    }
    if ((0.0 < *(float *)(param_3 + 0xc)) && (0 < param_4)) {
      local_50 = (Object *)0x0;
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_50,*(Ref **)(TextServerManager::singleton + 0x178));
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
                          (float)((ulong)*(undefined8 *)param_5 >> 0x20) +
                          (float)((ulong)*(undefined8 *)param_6 >> 0x20),
                          (float)*(undefined8 *)(param_1 + 0xc) + (float)*(undefined8 *)param_5 +
                          (float)*(undefined8 *)param_6);
      pOVar2 = local_50;
      (**(code **)(*(long *)local_50 + 0x500))
                (local_50,pGVar3,param_2,(long)*(int *)(param_1 + 0x20),(long)param_4,&local_48,
                 (long)*(int *)(param_1 + 0x24),param_3,local_50,pGVar3);
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar2);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))();
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar2,false);
            return;
          }
          goto LAB_0011174a;
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011174a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<Label>(Label*, char const*, void (Label::*)())
    */

Label * create_custom_callable_function_pointer<Label>
                  (Label *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129030;
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



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* CallableCustomMethodPointer<Label, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Label,void>::call
          (CallableCustomMethodPointer<Label,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00111b4f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00111b4f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00111c11;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00111b4f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC38,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111c11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
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
            if (lVar5 == 0) goto LAB_00111caf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_00111caf:
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
    if (cVar6 != '\0') goto LAB_00111d63;
  }
  cVar6 = String::operator==(param_1,"Control");
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
      if (cVar6 != '\0') goto LAB_00111d63;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
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
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00111d63;
      }
      cVar6 = String::operator==(param_1,"Node");
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
                  if (lVar5 == 0) goto LAB_00111e3b;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
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
LAB_00111e3b:
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
          if (cVar6 != '\0') goto LAB_00111d63;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_00112052;
      }
    }
  }
LAB_00111d63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112052:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::is_class(String const&) const */

undefined8 __thiscall Label::is_class(Label *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001120cf;
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
LAB_001120cf:
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
    if (cVar5 != '\0') goto LAB_00112183;
  }
  cVar5 = String::operator==(param_1,"Label");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00112183:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_c0;
  StringName *local_b8;
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
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_b8 = (StringName *)&local_68;
  local_c0 = (CowData<char32_t> *)&local_70;
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
    CowData<char32_t>::_ref(local_c0,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00112378:
    local_50 = 0x80;
    StringName::operator=(local_b8,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112378;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112393;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112393:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_c0);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_b8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00131020 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  if (local_90 == 0) {
LAB_0011299d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011299d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001129bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001129bf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00131028 != CanvasItem::_get_property_list) {
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



/* Label::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Label::_get_property_listv(Label *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Label";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Label";
  local_98 = 0;
  local_70 = 5;
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
LAB_00112d7d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112d7d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112d9f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112d9f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Label",false);
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



/* MethodBindT<Array>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Array>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0011301b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1c);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113110:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113110;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011301b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0011325b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113350:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113350;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011325b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<LabelSettings> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<LabelSettings>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0011349b;
  local_78 = 0;
  local_80 = 0;
  local_68 = "LabelSettings";
  local_60._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113635:
    local_40 = 6;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_00113635;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011349b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<Vector<float> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<float>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001136eb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001137e0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001137e0;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_001136eb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0011392b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113a20:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113a20;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011392b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00113b6b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113c60:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113c60;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00113b6b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00113dab;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113ea0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113ea0;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00113dab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindTRC<Rect2, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Rect2,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC3;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    PropertyInfo::operator=((PropertyInfo *)&local_98,(PropertyInfo *)&local_68);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar2 = local_90._0_8_;
    uVar3 = local_90._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(undefined8 *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_001140e7;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC3;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 7;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_001141cf:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001141cf;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_001140e7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC3;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    PropertyInfo::operator=((PropertyInfo *)&local_98,(PropertyInfo *)&local_68);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar2 = local_90._0_8_;
    uVar3 = local_90._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(undefined8 *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_00114387;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC3;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0011446f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011446f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00114387:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<TextServer>::unref() */

void __thiscall Ref<TextServer>::unref(Ref<TextServer> *this)

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



/* Ref<Font>::unref() */

void __thiscall Ref<Font>::unref(Ref<Font> *this)

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



/* Ref<StyleBox>::unref() */

void __thiscall Ref<StyleBox>::unref(Ref<StyleBox> *this)

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



/* MethodBind* create_method_bind<Label, HorizontalAlignment>(void (Label::*)(HorizontalAlignment))
    */

MethodBind * create_method_bind<Label,HorizontalAlignment>(_func_void_HorizontalAlignment *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_HorizontalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001290c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, HorizontalAlignment>(HorizontalAlignment (Label::*)()
   const) */

MethodBind * create_method_bind<Label,HorizontalAlignment>(_func_HorizontalAlignment *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_HorizontalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129120;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, VerticalAlignment>(void (Label::*)(VerticalAlignment)) */

MethodBind * create_method_bind<Label,VerticalAlignment>(_func_void_VerticalAlignment *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_VerticalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129180;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, VerticalAlignment>(VerticalAlignment (Label::*)() const) */

MethodBind * create_method_bind<Label,VerticalAlignment>(_func_VerticalAlignment *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_VerticalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001291e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, String const&>(void (Label::*)(String const&)) */

MethodBind * create_method_bind<Label,String_const&>(_func_void_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129240;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, String>(String (Label::*)() const) */

MethodBind * create_method_bind<Label,String>(_func_String *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001292a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Ref<LabelSettings> const&>(void
   (Label::*)(Ref<LabelSettings> const&)) */

MethodBind * create_method_bind<Label,Ref<LabelSettings>const&>(_func_void_Ref_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129300;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Ref<LabelSettings>>(Ref<LabelSettings> (Label::*)() const)
    */

MethodBind * create_method_bind<Label,Ref<LabelSettings>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129360;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Control::TextDirection>(void
   (Label::*)(Control::TextDirection)) */

MethodBind * create_method_bind<Label,Control::TextDirection>(_func_void_TextDirection *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_TextDirection **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001293c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Control::TextDirection>(Control::TextDirection (Label::*)()
   const) */

MethodBind * create_method_bind<Label,Control::TextDirection>(_func_TextDirection *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_TextDirection **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129420;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, TextServer::AutowrapMode>(void
   (Label::*)(TextServer::AutowrapMode)) */

MethodBind * create_method_bind<Label,TextServer::AutowrapMode>(_func_void_AutowrapMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_AutowrapMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129480;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, TextServer::AutowrapMode>(TextServer::AutowrapMode
   (Label::*)() const) */

MethodBind * create_method_bind<Label,TextServer::AutowrapMode>(_func_AutowrapMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_AutowrapMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001294e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, BitField<TextServer::JustificationFlag> >(void
   (Label::*)(BitField<TextServer::JustificationFlag>)) */

MethodBind *
create_method_bind<Label,BitField<TextServer::JustificationFlag>>(_func_void_BitField *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129540;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label,
   BitField<TextServer::JustificationFlag>>(BitField<TextServer::JustificationFlag> (Label::*)()
   const) */

MethodBind *
create_method_bind<Label,BitField<TextServer::JustificationFlag>>(_func_BitField *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001295a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, bool>(void (Label::*)(bool)) */

MethodBind * create_method_bind<Label,bool>(_func_void_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129600;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, bool>(bool (Label::*)() const) */

MethodBind * create_method_bind<Label,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129660;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Vector<float> const&>(void (Label::*)(Vector<float>
   const&)) */

MethodBind * create_method_bind<Label,Vector<float>const&>(_func_void_Vector_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001296c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Vector<float>>(Vector<float> (Label::*)() const) */

MethodBind * create_method_bind<Label,Vector<float>>(_func_Vector *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129720;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, TextServer::OverrunBehavior>(void
   (Label::*)(TextServer::OverrunBehavior)) */

MethodBind *
create_method_bind<Label,TextServer::OverrunBehavior>(_func_void_OverrunBehavior *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_OverrunBehavior **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129780;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, TextServer::OverrunBehavior>(TextServer::OverrunBehavior
   (Label::*)() const) */

MethodBind * create_method_bind<Label,TextServer::OverrunBehavior>(_func_OverrunBehavior *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_OverrunBehavior **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001297e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, int, int>(int (Label::*)(int) const) */

MethodBind * create_method_bind<Label,int,int>(_func_int_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129840;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, int>(int (Label::*)() const) */

MethodBind * create_method_bind<Label,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001298a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, int>(void (Label::*)(int)) */

MethodBind * create_method_bind<Label,int>(_func_void_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129900;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label,
   TextServer::VisibleCharactersBehavior>(TextServer::VisibleCharactersBehavior (Label::*)() const)
    */

MethodBind *
create_method_bind<Label,TextServer::VisibleCharactersBehavior>
          (_func_VisibleCharactersBehavior *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_VisibleCharactersBehavior **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129960;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, TextServer::VisibleCharactersBehavior>(void
   (Label::*)(TextServer::VisibleCharactersBehavior)) */

MethodBind *
create_method_bind<Label,TextServer::VisibleCharactersBehavior>
          (_func_void_VisibleCharactersBehavior *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_VisibleCharactersBehavior **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001299c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, float>(void (Label::*)(float)) */

MethodBind * create_method_bind<Label,float>(_func_void_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129a20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, float>(float (Label::*)() const) */

MethodBind * create_method_bind<Label,float>(_func_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129a80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, TextServer::StructuredTextParser>(void
   (Label::*)(TextServer::StructuredTextParser)) */

MethodBind *
create_method_bind<Label,TextServer::StructuredTextParser>(_func_void_StructuredTextParser *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_StructuredTextParser **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129ae0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label,
   TextServer::StructuredTextParser>(TextServer::StructuredTextParser (Label::*)() const) */

MethodBind *
create_method_bind<Label,TextServer::StructuredTextParser>(_func_StructuredTextParser *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_StructuredTextParser **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129b40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Array>(void (Label::*)(Array)) */

MethodBind * create_method_bind<Label,Array>(_func_void_Array *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129ba0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Array>(Array (Label::*)() const) */

MethodBind * create_method_bind<Label,Array>(_func_Array *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129c00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Label, Rect2, int>(Rect2 (Label::*)(int) const) */

MethodBind * create_method_bind<Label,Rect2,int>(_func_Rect2_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Rect2_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129c60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::_initialize_classv() */

void Label::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_00131040 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00131030 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_00131038 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Label";
    local_70 = 0;
    local_50 = 5;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x11755a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC160;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0011761b;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC160;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
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
LAB_0011761b:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x13;
    local_68 = "HorizontalAlignment";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<VerticalAlignment>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x11;
    local_68 = "VerticalAlignment";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control::TextDirection>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Control::TextDirection>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x16;
    local_68 = "Control::TextDirection";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::AutowrapMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x18;
    local_68 = "TextServer::AutowrapMode";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1d;
    local_68 = "TextServer::JustificationFlag";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x206;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::OverrunBehavior>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1b;
    local_68 = "TextServer::OverrunBehavior";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::VisibleCharactersBehavior>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<TextServer::VisibleCharactersBehavior>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x25;
    local_68 = "TextServer::VisibleCharactersBehavior";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x20;
    local_68 = "TextServer::StructuredTextParser";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::OverrunBehavior>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::OverrunBehavior";
  local_40 = 0x1b;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "HorizontalAlignment";
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<VerticalAlignment>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "VerticalAlignment";
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Control::TextDirection>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Control::TextDirection";
  local_40 = 0x16;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::JustificationFlag";
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x206;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<TextServer::VisibleCharactersBehavior>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::VisibleCharactersBehavior";
  local_40 = 0x25;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::StructuredTextParser";
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::AutowrapMode";
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00119510:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00119510;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001193e9:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001193e9;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00119566;
  }
  if (lVar10 == lVar7) {
LAB_0011948f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00119566:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011947a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011948f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0011947a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

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
LAB_00119820:
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
  if (lVar7 == 0) goto LAB_00119820;
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
LAB_0011978c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00119721;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011978c;
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
LAB_00119721:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Label::Paragraph>::_unref() */

void __thiscall CowData<Label::Paragraph>::_unref(CowData<Label::Paragraph> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Label::_setv(StringName const&, Variant const&) */

undefined8 __thiscall Label::_setv(Label *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = CanvasItem::_set((StringName *)this,(Variant *)param_1);
  if ((cVar1 == '\0') &&
     (((code *)PTR__set_00131048 == CanvasItem::_set ||
      (cVar1 = Control::_set((StringName *)this,(Variant *)param_1), cVar1 == '\0')))) {
    uVar2 = _set(this,param_1,param_2);
    return uVar2;
  }
  return 1;
}



/* CowData<Label::Paragraph>::_realloc(long) */

undefined8 __thiscall
CowData<Label::Paragraph>::_realloc(CowData<Label::Paragraph> *this,long param_1)

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
/* Error CowData<Label::Paragraph>::resize<false>(long) */

undefined8 __thiscall
CowData<Label::Paragraph>::resize<false>(CowData<Label::Paragraph> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
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
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar10 = lVar8 * 0x28;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_00119d60:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x28 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_00119d60;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (lVar8 = *(long *)this, lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar12) {
        if (lVar13 != lVar10) {
          uVar7 = _realloc(this,lVar13);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      lVar8 = lVar8 + uVar12 * 0x28;
      if (*(long *)(lVar8 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar8 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar8 + 0x20);
          *(undefined8 *)(lVar8 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar8 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar8 + 8);
          *(undefined8 *)(lVar8 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_00119db6;
  }
  if (lVar13 == lVar10) {
LAB_00119ccb:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00119db6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_00119beb;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00119ccb;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  uVar4 = _LC194;
  puVar5 = puVar9 + lVar8 * 5;
  do {
    *(undefined2 *)puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined4 *)((long)puVar5 + 4) = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar9 + param_1 * 5);
LAB_00119beb:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00119e30) */
/* Label::_notificationv(int, bool) */

void __thiscall Label::_notificationv(Label *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00131050 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00131050 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011a028) */
/* WARNING: Removing unreachable block (ram,0x0011a1bd) */
/* WARNING: Removing unreachable block (ram,0x0011a1c9) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Rect2, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Rect2,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a351;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
                    *(undefined4 *)(*(long *)param_3 + 8));
  *(undefined8 *)(in_RCX + 8) = uVar3;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_0011a351:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Rect2,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a52f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
  *in_RCX = uVar3;
  in_RCX[1] = in_XMM1_Qa;
LAB_0011a52f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Array>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a820;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_0011a820:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Array>::validated_call
          (MethodBindTRC<Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11a218;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aa49;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011aa49:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Array>::ptrcall
          (MethodBindTRC<Array> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11a218;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ac1a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011ac1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Array>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011adec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_48,(Array *)(*(long *)param_3 + 8));
  (*pcVar3)((long *)((long)param_2 + lVar1),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011adec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Array>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011afd9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_48,*param_3);
  (*pcVar3)((long *)((long)param_2 + lVar1),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011afd9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::StructuredTextParser>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::StructuredTextParser>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b230;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011b230:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::StructuredTextParser>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::validated_call
          (MethodBindTRC<TextServer::StructuredTextParser> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b444;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011b444:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::StructuredTextParser>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::ptrcall
          (MethodBindTRC<TextServer::StructuredTextParser> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b5f3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011b5f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::StructuredTextParser>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<TextServer::StructuredTextParser>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b931;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011b7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b931:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::StructuredTextParser>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::StructuredTextParser>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011bb11;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011b99b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011bb11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bbe0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      fVar5 = (float)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,fVar5);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011bbe0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bdf8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_0011bdf8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bfb7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_0011bfb7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c309;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0011c192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c309:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c4e9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0011c371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c4e9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::VisibleCharactersBehavior>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<TextServer::VisibleCharactersBehavior>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c6c1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011c54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c6c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::VisibleCharactersBehavior>::ptrcall(Object*, void const**, void*) const
    */

void MethodBindT<TextServer::VisibleCharactersBehavior>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c8a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011c72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011c8a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::VisibleCharactersBehavior>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c970;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011c970:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<TextServer::VisibleCharactersBehavior>::validated_call
          (MethodBindTRC<TextServer::VisibleCharactersBehavior> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cb84;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011cb84:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<TextServer::VisibleCharactersBehavior>::ptrcall
          (MethodBindTRC<TextServer::VisibleCharactersBehavior> *this,Object *param_1,void **param_2
          ,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cd33;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011cd33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d071;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011cefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011d071:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d251;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011d0db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011d251:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d320;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011d320:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d534;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0011d534:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d6e3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_0011d6e3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int>::validated_call
          (MethodBindTRC<int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d89a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0011d89a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int>::ptrcall
          (MethodBindTRC<int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011da78;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(long *)param_3 = (long)iVar1;
LAB_0011da78:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::OverrunBehavior>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dcd0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011dcd0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::validated_call
          (MethodBindTRC<TextServer::OverrunBehavior> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dee4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011dee4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::OverrunBehavior>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::ptrcall
          (MethodBindTRC<TextServer::OverrunBehavior> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e093;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011e093:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::OverrunBehavior>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<TextServer::OverrunBehavior>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011e3d1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011e25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011e3d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::OverrunBehavior>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::OverrunBehavior>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011e5b1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011e43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011e5b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<float>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e6c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar3)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
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
LAB_0011e6c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<float>>::validated_call
          (MethodBindTRC<Vector<float>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11a218;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e92b;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<float>::_ref((CowData<float> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011e92b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<float>>::ptrcall
          (MethodBindTRC<Vector<float>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11a218;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011eb27;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<float>::_ref((CowData<float> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011eb27:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<float>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011ee69;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011ecf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0011ee69:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<float>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011f041;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011eec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011f041:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f110;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011f110:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f322;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0011f322:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f4d1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0011f4d1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011f811;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011f69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011f811:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011f9f9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011f882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011f9f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::validated_call
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fa42;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_0011fa42:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::ptrcall
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this,Object *param_1,
          void **param_2,void *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fbf1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar1;
LAB_0011fbf1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<BitField<TextServer::JustificationFlag>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011ff31;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011fdbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011ff31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<BitField<TextServer::JustificationFlag>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00120111;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011ff9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120111:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::AutowrapMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001201e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_001201e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::validated_call
          (MethodBindTRC<TextServer::AutowrapMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001203f4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_001203f4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::ptrcall
          (MethodBindTRC<TextServer::AutowrapMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001205a3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001205a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<TextServer::AutowrapMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001208e1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0012076c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001208e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::AutowrapMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00120ac1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0012094b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120ac1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Control::TextDirection>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120b90;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00120b90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Control::TextDirection>::validated_call
          (MethodBindTRC<Control::TextDirection> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120da4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00120da4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Control::TextDirection>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Control::TextDirection>::ptrcall
          (MethodBindTRC<Control::TextDirection> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120f53;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00120f53:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control::TextDirection>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Control::TextDirection>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00121291;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0012111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00121291:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control::TextDirection>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Control::TextDirection>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00121471;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x001212fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00121471:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121550;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_00121550:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11a218;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001217b1;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_001217b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11a218;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012199e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0012199e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00121cd1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00121b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00121cd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00121eb1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00121d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00121eb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<VerticalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121f80;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00121f80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<VerticalAlignment>::validated_call
          (MethodBindTRC<VerticalAlignment> *this,Object *param_1,Variant **param_2,Variant *param_3
          )

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00122194;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00122194:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<VerticalAlignment>::ptrcall
          (MethodBindTRC<VerticalAlignment> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00122343;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00122343:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<VerticalAlignment>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00122681;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0012250c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00122681:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<VerticalAlignment>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00122861;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x001226eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00122861:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<HorizontalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00122930;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00122930:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<HorizontalAlignment>::validated_call
          (MethodBindTRC<HorizontalAlignment> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00122b44;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00122b44:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<HorizontalAlignment>::ptrcall
          (MethodBindTRC<HorizontalAlignment> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00122cf3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00122cf3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<HorizontalAlignment>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00123031;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00122ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00123031:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<HorizontalAlignment>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00123211;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0012309b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00123211:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BitField<TextServer::JustificationFlag>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001232e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      lVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,lVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_001232e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<LabelSettings>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<LabelSettings>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11a218;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001235c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_001235c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<LabelSettings>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<LabelSettings>>::ptrcall
          (MethodBindTRC<Ref<LabelSettings>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11a218;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123846;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00123846;
    *(undefined8 *)param_3 = 0;
    goto LAB_00123889;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00123889;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00123889:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00123846;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00123846:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<LabelSettings> const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<Ref<LabelSettings>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11a218;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00123b48;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00123b06:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&LabelSettings::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00123b06;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00123b48:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<LabelSettings> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<LabelSettings>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11a218;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123e0c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00123de8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00123de8;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
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
LAB_00123e0c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001240f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00124130;
LAB_00124120:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00124130:
        uVar7 = 4;
        goto LAB_001240e5;
      }
      if (in_R8D == 1) goto LAB_00124120;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_001240e5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001240f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Rect2,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00124478;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001244c0;
LAB_001244b0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001244c0:
        uVar7 = 4;
        goto LAB_0012446d;
      }
      if (in_R8D == 1) goto LAB_001244b0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC213;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    local_58[0] = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Rect2 *)local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0012446d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00124478:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Array>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00124870;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001248c0;
LAB_001248b0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001248c0:
        uVar6 = 4;
        goto LAB_00124865;
      }
      if (in_R8D == 1) goto LAB_001248b0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1c);
    uVar4 = _LC215;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Array::~Array((Array *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00124865:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00124870:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<float>const&>::call
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00124bb0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00124c00;
LAB_00124bf0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00124c00:
        uVar6 = 4;
        goto LAB_00124ba5;
      }
      if (in_R8D == 1) goto LAB_00124bf0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x20);
    uVar4 = _LC216;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1));
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar9 = (long *)(local_40 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    uVar6 = 3;
LAB_00124ba5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00124bb0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<LabelSettings> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<LabelSettings>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11a218;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00124f80;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00124f75:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00124f80;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00124fd0;
LAB_00124fc0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00124fd0:
      uVar7 = 4;
      goto LAB_00124f75;
    }
    if (in_R8D == 1) goto LAB_00124fc0;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC217;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_001250ed:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&LabelSettings::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001250ed;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00124f80:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00125330;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00125380;
LAB_00125370:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00125380:
        uVar6 = 4;
        goto LAB_00125325;
      }
      if (in_R8D == 1) goto LAB_00125370;
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
    uVar4 = _LC218;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00125325:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00125330:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<LabelSettings>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<LabelSettings>>::validated_call
          (MethodBindTRC<Ref<LabelSettings>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11a218;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001255c6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_001255c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   TextServer::StructuredTextParser>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::StructuredTextParser), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::StructuredTextParser>
               (__UnexistingClass *param_1,_func_void_StructuredTextParser *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0012586d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001258d0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001258d0:
      uVar6 = 4;
LAB_0012586d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_001257eb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001257eb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_StructuredTextParser **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00125846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::StructuredTextParser>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TextServer::StructuredTextParser>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00125936;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::StructuredTextParser>
            (p_Var2,(_func_void_StructuredTextParser *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00125936:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00125bfd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00125c60;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00125c60:
      uVar6 = 4;
LAB_00125bfd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00125b7b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00125b7b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC219;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00125bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00125cc6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00125cc6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   TextServer::VisibleCharactersBehavior>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::VisibleCharactersBehavior), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::VisibleCharactersBehavior>
               (__UnexistingClass *param_1,_func_void_VisibleCharactersBehavior *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00125f8d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00125ff0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00125ff0:
      uVar6 = 4;
LAB_00125f8d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00125f0b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00125f0b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_VisibleCharactersBehavior **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00125f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::VisibleCharactersBehavior>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TextServer::VisibleCharactersBehavior>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126056;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::VisibleCharactersBehavior>
            (p_Var2,(_func_void_VisibleCharactersBehavior *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126056:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0012631d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126380;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126380:
      uVar6 = 4;
LAB_0012631d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0012629b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012629b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x001262f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001263e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001263e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   TextServer::OverrunBehavior>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::OverrunBehavior), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::OverrunBehavior>
               (__UnexistingClass *param_1,_func_void_OverrunBehavior *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_001266ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126710;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126710:
      uVar6 = 4;
LAB_001266ad:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0012662b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012662b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_OverrunBehavior **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00126686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::OverrunBehavior>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TextServer::OverrunBehavior>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126776;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::OverrunBehavior>
            (p_Var2,(_func_void_OverrunBehavior *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126776:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00126a3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126aa0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126aa0:
      uVar6 = 4;
LAB_00126a3d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_001269bb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001269bb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC220;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00126a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126b06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126b06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, BitField<TextServer::JustificationFlag>
   >(__UnexistingClass*, void (__UnexistingClass::*)(BitField<TextServer::JustificationFlag>),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BitField<TextServer::JustificationFlag>>
               (__UnexistingClass *param_1,_func_void_BitField *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00126dcd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126e30;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126e30:
      uVar6 = 4;
LAB_00126dcd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00126d4b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00126d4b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BitField **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00126da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BitField<TextServer::JustificationFlag>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126e96;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BitField<TextServer::JustificationFlag>>
            (p_Var2,(_func_void_BitField *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126e96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, TextServer::AutowrapMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(TextServer::AutowrapMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::AutowrapMode>
               (__UnexistingClass *param_1,_func_void_AutowrapMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0012715d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001271c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001271c0:
      uVar6 = 4;
LAB_0012715d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_001270db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001270db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_AutowrapMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00127136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TextServer::AutowrapMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127226;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::AutowrapMode>
            (p_Var2,(_func_void_AutowrapMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127226:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Control::TextDirection>(__UnexistingClass*,
   void (__UnexistingClass::*)(Control::TextDirection), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Control::TextDirection>
               (__UnexistingClass *param_1,_func_void_TextDirection *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_001274ed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00127550;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127550:
      uVar6 = 4;
LAB_001274ed:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0012746b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012746b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_TextDirection **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001274c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Control::TextDirection>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Control::TextDirection>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001275b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Control::TextDirection>
            (p_Var2,(_func_void_TextDirection *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001275b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, VerticalAlignment>(__UnexistingClass*, void
   (__UnexistingClass::*)(VerticalAlignment), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,VerticalAlignment>
               (__UnexistingClass *param_1,_func_void_VerticalAlignment *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0012787d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001278e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001278e0:
      uVar6 = 4;
LAB_0012787d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_001277fb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001277fb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_VerticalAlignment **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00127856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<VerticalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<VerticalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127946;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,VerticalAlignment>
            (p_Var2,(_func_void_VerticalAlignment *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127946:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, HorizontalAlignment>(__UnexistingClass*, void
   (__UnexistingClass::*)(HorizontalAlignment), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,HorizontalAlignment>
               (__UnexistingClass *param_1,_func_void_HorizontalAlignment *param_2,Variant **param_3
               ,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00127c0d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00127c70;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127c70:
      uVar6 = 4;
LAB_00127c0d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00127b8b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00127b8b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_HorizontalAlignment **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC213;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00127be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<HorizontalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<HorizontalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC38,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00127cd6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,HorizontalAlignment>
            (p_Var2,(_func_void_HorizontalAlignment *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127cd6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Rect2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2,int>::~MethodBindTRC(MethodBindTRC<Rect2,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Array>::~MethodBindT() */

void __thiscall MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC
          (MethodBindTRC<TextServer::StructuredTextParser> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::StructuredTextParser>::~MethodBindT
          (MethodBindT<TextServer::StructuredTextParser> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::VisibleCharactersBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::VisibleCharactersBehavior>::~MethodBindT
          (MethodBindT<TextServer::VisibleCharactersBehavior> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextServer::VisibleCharactersBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::VisibleCharactersBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::VisibleCharactersBehavior> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

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
/* MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::OverrunBehavior>::~MethodBindTRC
          (MethodBindTRC<TextServer::OverrunBehavior> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::OverrunBehavior>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::OverrunBehavior>::~MethodBindT
          (MethodBindT<TextServer::OverrunBehavior> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<float>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<float>>::~MethodBindTRC(MethodBindTRC<Vector<float>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Control::TextDirection>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Control::TextDirection>::~MethodBindTRC(MethodBindTRC<Control::TextDirection> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Control::TextDirection>::~MethodBindT() */

void __thiscall
MethodBindT<Control::TextDirection>::~MethodBindT(MethodBindT<Control::TextDirection> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<LabelSettings>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<LabelSettings>>::~MethodBindTRC(MethodBindTRC<Ref<LabelSettings>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<LabelSettings> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<LabelSettings>const&>::~MethodBindT(MethodBindT<Ref<LabelSettings>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Label, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label,void> *this)

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


