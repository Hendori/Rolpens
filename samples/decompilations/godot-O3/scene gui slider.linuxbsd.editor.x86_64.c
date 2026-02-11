
/* Slider::get_ticks() const */

undefined4 __thiscall Slider::get_ticks(Slider *this)

{
  return *(undefined4 *)(this + 0xa10);
}



/* Slider::get_ticks_on_borders() const */

Slider __thiscall Slider::get_ticks_on_borders(Slider *this)

{
  return this[0xa78];
}



/* Slider::is_editable() const */

Slider __thiscall Slider::is_editable(Slider *this)

{
  return this[0xa28];
}



/* Slider::set_scrollable(bool) */

void __thiscall Slider::set_scrollable(Slider *this,bool param_1)

{
  this[0xa29] = (Slider)param_1;
  return;
}



/* Slider::is_scrollable() const */

Slider __thiscall Slider::is_scrollable(Slider *this)

{
  return this[0xa29];
}



/* Slider::get_minimum_size() const */

void __thiscall Slider::get_minimum_size(Slider *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (**(code **)(**(long **)(this + 0xa38) + 0x1d0))();
  uVar2 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_38);
  local_38 = (**(code **)(**(long **)(this + 0xa50) + 0x1d8))();
  uVar3 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_38);
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  iVar5 = (int)uVar2;
  if (*(int *)(this + 0xa18) == 0) {
    iVar1 = (int)((ulong)uVar3 >> 0x20);
    if (iVar1 <= iVar4) {
      iVar1 = iVar4;
    }
    local_38 = CONCAT44(iVar1,iVar5);
    Vector2i::operator_cast_to_Vector2((Vector2i *)&local_38);
  }
  else {
    iVar1 = (int)uVar3;
    if ((int)uVar3 <= iVar5) {
      iVar1 = iVar5;
    }
    local_38 = CONCAT44(iVar4,iVar1);
    Vector2i::operator_cast_to_Vector2((Vector2i *)&local_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Slider::set_ticks(int) */

void __thiscall Slider::set_ticks(Slider *this,int param_1)

{
  if (*(int *)(this + 0xa10) != param_1) {
    *(int *)(this + 0xa10) = param_1;
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Slider::set_ticks_on_borders(bool) */

void __thiscall Slider::set_ticks_on_borders(Slider *this,bool param_1)

{
  if (this[0xa78] != (Slider)param_1) {
    this[0xa78] = (Slider)param_1;
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* Slider::set_editable(bool) */

void __thiscall Slider::set_editable(Slider *this,bool param_1)

{
  if (this[0xa28] != (Slider)param_1) {
    this[0xa08] = (Slider)0x0;
    this[0xa28] = (Slider)param_1;
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}::
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_bool((Variant *)local_48);
    DAT_00000a70 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_48);
  *(bool *)(lVar3 + 0xa70) = bVar2;
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
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
    _DAT_00000a74 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa74) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa40);
  if (pOVar5 == pOVar1) goto LAB_00100590;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100590;
    *(undefined8 *)(lVar4 + 0xa40) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100590;
    *(Object **)(lVar4 + 0xa40) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa40) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100590;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100590:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Ref *param_1)

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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
    Control::get_theme_item(local_48,0,4,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa50);
  if (pOVar5 == pOVar1) goto LAB_00100760;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100760;
    *(undefined8 *)(lVar4 + 0xa50) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100760;
    *(Object **)(lVar4 + 0xa50) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa50) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100760;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100760:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa48);
  if (pOVar5 == pOVar1) goto LAB_001008b0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001008b0;
    *(undefined8 *)(lVar4 + 0xa48) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001008b0;
    *(Object **)(lVar4 + 0xa48) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa48) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001008b0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001008b0:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa38);
  if (pOVar5 == pOVar1) goto LAB_00100a00;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100a00;
    *(undefined8 *)(lVar4 + 0xa38) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100a00;
    *(Object **)(lVar4 + 0xa38) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa38) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100a00;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100a00:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
    Control::get_theme_item(local_48,0,4,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa58);
  if (pOVar5 == pOVar1) goto LAB_00100b50;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100b50;
    *(undefined8 *)(lVar4 + 0xa58) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100b50;
    *(Object **)(lVar4 + 0xa58) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa58) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100b50;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100b50:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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
    Control::get_theme_item(local_48,0,4,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa60);
  if (pOVar5 == pOVar1) goto LAB_00100ca0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100ca0;
    *(undefined8 *)(lVar4 + 0xa60) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100ca0;
    *(Object **)(lVar4 + 0xa60) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa60) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100ca0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100ca0:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
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
    Control::get_theme_item(local_48,0,4,param_3,param_4);
    Variant::get_validated_object();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&Slider::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xa68);
  if (pOVar5 == pOVar1) goto LAB_00100df0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100df0;
    *(undefined8 *)(lVar4 + 0xa68) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100df0;
    *(Object **)(lVar4 + 0xa68) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xa68) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100df0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100df0:
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



/* Slider::set_custom_step(double) */

void __thiscall Slider::set_custom_step(Slider *this,double param_1)

{
  *(double *)(this + 0xa20) = param_1;
  return;
}



/* Slider::get_custom_step() const */

undefined8 __thiscall Slider::get_custom_step(Slider *this)

{
  return *(undefined8 *)(this + 0xa20);
}



/* Slider::Slider(Orientation) */

void __thiscall Slider::Slider(Slider *this,undefined4 param_2)

{
  undefined8 uVar1;
  
  Range::Range((Range *)this);
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010b2f0;
  uVar1 = _LC10;
  *(undefined1 (*) [16])(this + 0x9f8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xa20) = uVar1;
  *(undefined2 *)(this + 0xa28) = 0x101;
  uVar1 = _LC12;
  this[0xa08] = (Slider)0x0;
  *(undefined4 *)(this + 0xa10) = 0;
  this[0xa14] = (Slider)0x0;
  *(undefined8 *)(this + 0xa2c) = uVar1;
  *(undefined4 *)(this + 0xa34) = 0x3f000000;
  *(undefined8 *)(this + 0xa68) = 0;
  this[0xa70] = (Slider)0x0;
  *(undefined4 *)(this + 0xa74) = 0;
  this[0xa78] = (Slider)0x0;
  *(undefined4 *)(this + 0xa18) = param_2;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  Control::set_focus_mode(this,2);
  return;
}



/* Slider::_notification(int) */

void __thiscall Slider::_notification(Slider *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  StringName *pSVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  Object *pOVar16;
  Object *pOVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  long in_FS_OFFSET;
  float fVar22;
  double dVar23;
  float extraout_XMM0_Db;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 local_f8 [16];
  Vector2i *local_e8;
  Object *local_e0;
  double local_d8;
  double local_d0;
  int local_c8;
  double local_c0;
  Ref<Texture2D> *local_a8;
  double local_a0;
  long local_90;
  long local_88;
  long *local_80;
  long *local_78;
  int local_70;
  uint local_6c;
  ulong local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 0xb:
  case 0x1f:
    this[0xa14] = (Slider)0x0;
    this[0xa08] = (Slider)0x0;
    break;
  case 0x19:
    pSVar12 = (StringName *)Input::get_singleton();
    StringName::StringName((StringName *)&local_90,"ui_left",false);
    cVar6 = Input::is_action_just_released(pSVar12,SUB81((StringName *)&local_90,0));
    if (cVar6 == '\0') {
      StringName::StringName((StringName *)&local_88,"ui_right",false);
      cVar6 = Input::is_action_just_released(pSVar12,SUB81((StringName *)&local_88,0));
      if (cVar6 == '\0') {
        StringName::StringName((StringName *)&local_80,"ui_up",false);
        cVar6 = Input::is_action_just_released(pSVar12,SUB81((StringName *)&local_80,0));
        if (cVar6 == '\0') {
          StringName::StringName((StringName *)&local_78,"ui_down",false);
          cVar6 = Input::is_action_just_released(pSVar12,SUB81((StringName *)&local_78,0));
          if ((StringName::configured != '\0') &&
             ((local_78 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0'))))
          goto LAB_001020e0;
        }
        else {
          cVar6 = StringName::configured;
          if (StringName::configured == '\0') goto LAB_0010135d;
LAB_001020e0:
          if (((local_80 == (long *)0x0) || (StringName::unref(), StringName::configured != '\0'))
             && ((local_88 == 0 || (StringName::unref(), StringName::configured != '\0'))))
          goto LAB_00101e70;
        }
      }
      else {
        if (StringName::configured == '\0') goto LAB_0010135d;
        if (local_88 == 0) goto LAB_0010134a;
        StringName::unref();
        cVar6 = StringName::configured;
        if (StringName::configured == '\0') goto LAB_0010135d;
LAB_00101e70:
        if (local_90 != 0) {
          StringName::unref();
        }
      }
      if (cVar6 == '\0') {
        dVar23 = (double)Node::get_process_delta_time();
        fVar22 = (float)((double)*(float *)(this + 0xa34) - dVar23);
        *(float *)(this + 0xa34) = fVar22;
        if (fVar22 <= 0.0) {
          *(float *)(this + 0xa34) = fVar22 + *(float *)(this + 0xa30);
          if (*(int *)(this + 0xa18) == 0) {
            StringName::StringName((StringName *)&local_78,"ui_left",false);
            bVar18 = SUB81((StringName *)&local_78,0);
            cVar6 = Input::is_action_pressed(pSVar12,bVar18);
            if ((StringName::configured != '\0') && (local_78 != (long *)0x0)) {
              StringName::unref();
            }
            if (cVar6 != '\0') {
              cVar6 = (**(code **)(*(long *)this + 0x340))(this);
              if (cVar6 == '\0') {
                dVar24 = (double)Range::get_value();
                dVar23 = *(double *)(this + 0xa20);
                if (dVar23 < 0.0) {
                  dVar23 = (double)Range::get_step();
                }
                Range::set_value(dVar24 - dVar23);
              }
              else {
                dVar24 = (double)Range::get_value();
                dVar23 = *(double *)(this + 0xa20);
                if (dVar23 < 0.0) {
                  dVar23 = (double)Range::get_step();
                }
                Range::set_value(dVar23 + dVar24);
              }
            }
            StringName::StringName((StringName *)&local_78,"ui_right",false);
            cVar6 = Input::is_action_pressed(pSVar12,bVar18);
            if ((StringName::configured != '\0') && (local_78 != (long *)0x0)) {
              StringName::unref();
            }
            if (cVar6 != '\0') {
              cVar6 = (**(code **)(*(long *)this + 0x340))(this);
              if (cVar6 == '\0') {
                dVar24 = (double)Range::get_value();
                dVar23 = *(double *)(this + 0xa20);
                if (dVar23 < 0.0) {
                  dVar23 = (double)Range::get_step();
                }
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  dVar23 = dVar23 + dVar24;
                  goto LAB_00101fca;
                }
              }
              else {
                dVar23 = (double)Range::get_value();
                dVar24 = *(double *)(this + 0xa20);
                if (dVar24 < 0.0) {
                  dVar24 = (double)Range::get_step();
                }
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  dVar23 = dVar23 - dVar24;
LAB_00101fca:
                  Range::set_value(dVar23);
                  return;
                }
              }
              goto LAB_00101300;
            }
          }
          else if (*(int *)(this + 0xa18) == 1) {
            StringName::StringName((StringName *)&local_78,"ui_down",false);
            bVar18 = SUB81((StringName *)&local_78,0);
            cVar6 = Input::is_action_pressed(pSVar12,bVar18);
            if ((StringName::configured != '\0') && (local_78 != (long *)0x0)) {
              StringName::unref();
            }
            if (cVar6 != '\0') {
              dVar24 = (double)Range::get_value();
              dVar23 = *(double *)(this + 0xa20);
              if (dVar23 < 0.0) {
                dVar23 = (double)Range::get_step();
              }
              Range::set_value(dVar24 - dVar23);
            }
            StringName::StringName((StringName *)&local_78,"ui_up",false);
            cVar6 = Input::is_action_pressed(pSVar12,bVar18);
            if ((StringName::configured != '\0') && (local_78 != (long *)0x0)) {
              StringName::unref();
            }
            if (cVar6 != '\0') {
              dVar24 = (double)Range::get_value();
              dVar23 = *(double *)(this + 0xa20);
              if (dVar23 < 0.0) {
                dVar23 = (double)Range::get_step();
              }
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                dVar23 = dVar23 + dVar24;
                goto LAB_00101fca;
              }
              goto LAB_00101300;
            }
          }
        }
        break;
      }
    }
    else if (StringName::configured != '\0') {
LAB_0010134a:
      if (local_90 != 0) {
        StringName::unref();
      }
    }
LAB_0010135d:
    *(undefined4 *)(this + 0xa34) = *(undefined4 *)(this + 0xa2c);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process_internal(SUB81(this,0));
      return;
    }
    goto LAB_00101300;
  case 0x1e:
    uVar1 = *(undefined8 *)(this + 0x428);
    local_58._0_8_ = Control::get_size();
    uVar11 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_58);
    dVar23 = (double)Range::get_as_ratio();
    if (NAN(dVar23)) {
      local_f8._0_8_ = 0.0;
    }
    else {
      local_f8._0_8_ = Range::get_as_ratio();
    }
    pOVar17 = *(Object **)(this + 0xa38);
    if ((pOVar17 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      pOVar17 = (Object *)0x0;
    }
    local_80 = (long *)0x0;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_80,*(Ref **)(this + 0xa68));
    if (this[0xa28] == (Slider)0x0) {
LAB_001013dc:
      local_78 = (long *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,*(Ref **)(this + 0xa60));
LAB_001013f8:
      pOVar16 = *(Object **)(this + 0xa40);
      if (pOVar16 != (Object *)0x0) goto LAB_00101408;
LAB_001012a0:
      local_e0 = (Object *)0x0;
    }
    else {
      if (this[0xa14] == (Slider)0x0) {
        cVar6 = Control::has_focus();
        local_78 = (long *)0x0;
        if (cVar6 == '\0') {
          if (this[0xa28] == (Slider)0x0) goto LAB_001013dc;
          Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,*(Ref **)(this + 0xa50));
          goto LAB_001013f8;
        }
        if (this[0xa28] != (Slider)0x0) goto LAB_0010126a;
        Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,*(Ref **)(this + 0xa60));
      }
      else {
LAB_0010126a:
        local_78 = (long *)0x0;
        Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,*(Ref **)(this + 0xa58));
      }
      pOVar16 = *(Object **)(this + 0xa48);
      if (pOVar16 == (Object *)0x0) goto LAB_001012a0;
LAB_00101408:
      cVar6 = RefCounted::reference();
      local_e0 = (Object *)0x0;
      if (cVar6 != '\0') {
        local_e0 = pOVar16;
      }
    }
    plVar5 = local_78;
    local_a8 = (Ref<Texture2D> *)&local_78;
    iVar10 = (int)uVar11;
    local_c8 = (int)(uVar11 >> 0x20);
    if (*(int *)(this + 0xa18) == 1) {
      fVar22 = (float)(**(code **)(*(long *)pOVar17 + 0x1d0))(pOVar17);
      iVar7 = (int)fVar22;
      if (this[0xa70] == (Slider)0x0) {
        iVar9 = (**(code **)(*plVar5 + 0x1d0))(plVar5);
        local_d0 = (double)(local_c8 - iVar9);
        if (this[0xa70] != (Slider)0x0) goto LAB_00102046;
        local_d8._0_4_ = 0;
      }
      else {
        local_d0 = (double)local_c8;
LAB_00102046:
        local_d8._0_4_ = (**(code **)(*plVar5 + 0x1d0))(plVar5);
        local_d8._0_4_ = local_d8._0_4_ / 2;
      }
      local_c0 = (double)local_c8;
      pcVar3 = *(code **)(*(long *)pOVar17 + 0x1d8);
      iVar9 = (int)(((uint)(uVar11 >> 0x1f) & 1) + iVar10) >> 1;
      local_68 = (ulong)(uint)(iVar9 - iVar7 / 2);
      uStack_60 = CONCAT44(local_c8,iVar7);
      local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
      (*pcVar3)(pOVar17,uVar1,(Vector2 *)local_58);
      pcVar3 = *(code **)(*(long *)local_e0 + 0x1d8);
      iVar8 = (**(code **)(*plVar5 + 0x1d0))(plVar5);
      dVar25 = (double)local_d8._0_4_;
      dVar23 = round(((double)(iVar8 / 2) + (double)local_f8._0_8_ * local_d0) - dVar25);
      local_c0 = local_c0 - (double)local_f8._0_8_ * local_d0;
      iVar8 = (**(code **)(*plVar5 + 0x1d0))(plVar5);
      dVar24 = round((local_c0 - (double)(iVar8 / 2)) + dVar25);
      iVar10 = (iVar10 - iVar7) / 2;
      local_68 = CONCAT44((int)dVar24,iVar10);
      uStack_60 = CONCAT44((int)dVar23,iVar7);
      auVar26 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
      local_58 = auVar26;
      (*pcVar3)(local_e0,uVar1,(Vector2 *)local_58);
      if (*(int *)(this + 0xa10) < 2) {
        local_f8._4_4_ = _LC34;
        local_f8._0_4_ = _LC34;
        local_f8._8_4_ = _LC34;
        local_f8._12_4_ = _LC34;
      }
      else {
        iVar8 = (**(code **)(*plVar5 + 0x1d0))(plVar5);
        plVar4 = local_80;
        iVar20 = (**(code **)(*local_80 + 0x1d0))(local_80);
        iVar7 = *(int *)(this + 0xa10);
        if (iVar7 < 1) {
          local_f8._4_4_ = _LC34;
          local_f8._0_4_ = _LC34;
          local_f8._8_4_ = _LC34;
          local_f8._12_4_ = _LC34;
        }
        else {
          if (this[0xa78] != (Slider)0x0) {
            iVar21 = 1;
            iVar15 = 0;
            local_f8._4_4_ = _LC34;
            local_f8._0_4_ = _LC34;
            local_f8._8_4_ = _LC34;
            local_f8._12_4_ = _LC34;
            goto LAB_00101ca3;
          }
          local_f8._4_4_ = _LC34;
          local_f8._0_4_ = _LC34;
          local_f8._8_4_ = _LC34;
          local_f8._12_4_ = _LC34;
          iVar14 = 1;
          while (iVar15 = iVar14, iVar14 < iVar7) {
            while ((iVar21 = iVar15 + 1, this[0xa78] != (Slider)0x0 ||
                   (iVar14 = iVar7, iVar7 != iVar21))) {
LAB_00101ca3:
              local_e8 = (Vector2i *)&local_70;
              pcVar3 = *(code **)(*plVar4 + 0x1f0);
              local_58._0_8_ = local_f8._0_8_;
              local_58._8_8_ = local_f8._8_8_;
              local_6c = (uint)((((double)iVar15 * local_d0) / (double)(iVar7 + -1) +
                                (double)(iVar8 / 2 - iVar20 / 2)) - dVar25);
              local_70 = iVar10;
              local_68 = Vector2i::operator_cast_to_Vector2(local_e8);
              (*pcVar3)(plVar4,uVar1,(Rect2i *)&local_68,(Vector2 *)local_58,0);
              iVar7 = *(int *)(this + 0xa10);
              iVar15 = iVar21;
              if (iVar7 <= iVar21) goto LAB_001018fe;
            }
          }
        }
      }
LAB_001018fe:
      local_e8 = (Vector2i *)&local_70;
      pcVar3 = *(code **)(*plVar5 + 0x1f0);
      local_58._0_8_ = local_f8._0_8_;
      local_58._8_8_ = local_f8._8_8_;
      iVar10 = (**(code **)(*plVar5 + 0x1d0))(plVar5);
      iVar7 = (**(code **)(*plVar5 + 0x1c8))(plVar5);
      local_70 = (iVar9 - iVar7 / 2) + *(int *)(this + 0xa74);
      local_6c = (uint)((local_c0 - (double)iVar10) + dVar25);
      local_68 = Vector2i::operator_cast_to_Vector2(local_e8);
      (*pcVar3)(plVar5,uVar1,(Rect2i *)&local_68,(Vector2 *)local_58,0);
LAB_00101999:
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_e0), cVar6 != '\0')) {
        (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
        Memory::free_static(local_e0,false);
      }
    }
    else {
      (**(code **)(*(long *)pOVar17 + 0x1d0))();
      iVar7 = (int)extraout_XMM0_Db;
      if (this[0xa70] == (Slider)0x0) {
        fVar22 = (float)(**(code **)(*plVar5 + 0x1d8))(plVar5);
        local_d0 = (double)((float)iVar10 - fVar22);
        if (this[0xa70] != (Slider)0x0) goto LAB_0010186e;
        iVar9 = 0;
      }
      else {
        local_d0 = (double)iVar10;
LAB_0010186e:
        uVar13 = (**(code **)(*plVar5 + 0x1c8))(plVar5);
        iVar9 = -((int)(((uint)(uVar13 >> 0x1f) & 1) + (int)uVar13) >> 1);
      }
      cVar6 = (**(code **)(*(long *)this + 0x340))(this);
      pcVar3 = *(code **)(*(long *)pOVar17 + 0x1d8);
      uStack_60 = CONCAT44(iVar7,iVar10);
      uVar19 = (local_c8 - iVar7) / 2;
      local_68 = (ulong)uVar19 << 0x20;
      local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
      (*pcVar3)(pOVar17,uVar1,(Vector2 *)local_58);
      if (cVar6 == '\0') {
        local_a0 = (double)local_f8._0_8_ * local_d0;
        iVar10 = (**(code **)(*plVar5 + 0x1c8))(plVar5);
        pcVar3 = *(code **)(*(long *)local_e0 + 0x1d8);
        local_68 = (ulong)uVar19 << 0x20;
        uStack_60 = CONCAT44(iVar7,(int)((double)(iVar10 / 2) + local_a0 + (double)iVar9));
        auVar26 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
        local_58 = auVar26;
        (*pcVar3)(local_e0,uVar1,(Vector2 *)local_58);
      }
      else {
        local_a0 = (_LC35 - (double)local_f8._0_8_) * local_d0;
        iVar8 = (**(code **)(*plVar5 + 0x1c8))(plVar5);
        pcVar3 = *(code **)(*(long *)local_e0 + 0x1d8);
        iVar8 = (int)((double)(iVar8 / 2) + local_a0 + (double)iVar9);
        local_68 = CONCAT44(uVar19,iVar8);
        uStack_60 = CONCAT44(iVar7,iVar10 - iVar8);
        auVar26 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
        local_58 = auVar26;
        (*pcVar3)(local_e0,uVar1,(Vector2 *)local_58);
      }
      local_d8 = (double)iVar9;
      if (*(int *)(this + 0xa10) < 2) {
        local_f8._4_4_ = _LC34;
        local_f8._0_4_ = _LC34;
        local_f8._8_4_ = _LC34;
        local_f8._12_4_ = _LC34;
      }
      else {
        iVar7 = (**(code **)(*plVar5 + 0x1c8))(plVar5);
        plVar4 = local_80;
        iVar9 = (**(code **)(*local_80 + 0x1c8))(local_80);
        iVar10 = *(int *)(this + 0xa10);
        if (iVar10 < 1) {
          local_f8._4_4_ = _LC34;
          local_f8._0_4_ = _LC34;
          local_f8._8_4_ = _LC34;
          local_f8._12_4_ = _LC34;
        }
        else {
          if (this[0xa78] != (Slider)0x0) {
            iVar8 = 0;
            iVar20 = 1;
            local_f8._4_4_ = _LC34;
            local_f8._0_4_ = _LC34;
            local_f8._8_4_ = _LC34;
            local_f8._12_4_ = _LC34;
            goto LAB_001016b6;
          }
          local_f8._4_4_ = _LC34;
          local_f8._0_4_ = _LC34;
          local_f8._8_4_ = _LC34;
          local_f8._12_4_ = _LC34;
          iVar15 = 1;
          while (iVar8 = iVar15, iVar15 < iVar10) {
            while ((iVar20 = iVar8 + 1, this[0xa78] != (Slider)0x0 ||
                   (iVar15 = iVar10, iVar10 != iVar20))) {
LAB_001016b6:
              local_e8 = (Vector2i *)&local_70;
              pcVar3 = *(code **)(*plVar4 + 0x1f0);
              local_58._0_8_ = local_f8._0_8_;
              local_58._8_8_ = local_f8._8_8_;
              local_70 = (int)(((double)iVar8 * local_d0) / (double)(iVar10 + -1) +
                               (double)(iVar7 / 2 - iVar9 / 2) + local_d8);
              local_6c = uVar19;
              local_68 = Vector2i::operator_cast_to_Vector2(local_e8);
              (*pcVar3)(plVar4,uVar1,(Rect2i *)&local_68,(Vector2 *)local_58,0);
              iVar10 = *(int *)(this + 0xa10);
              iVar8 = iVar20;
              if (iVar10 <= iVar20) goto LAB_00101752;
            }
          }
        }
      }
LAB_00101752:
      local_e8 = (Vector2i *)&local_70;
      pcVar3 = *(code **)(*plVar5 + 0x1f0);
      local_58._0_8_ = local_f8._0_8_;
      local_58._8_8_ = local_f8._8_8_;
      iVar10 = (**(code **)(*plVar5 + 0x1d0))(plVar5);
      local_70 = (int)(local_a0 + local_d8);
      local_6c = (((int)(((uint)((ulong)((long)uVar11 >> 0x20) >> 0x1f) & 1) + local_c8) >> 1) -
                 iVar10 / 2) + *(int *)(this + 0xa74);
      local_68 = Vector2i::operator_cast_to_Vector2(local_e8);
      (*pcVar3)(plVar5,uVar1,(Rect2i *)&local_68,(Vector2 *)local_58,0);
      if (local_e0 != (Object *)0x0) goto LAB_00101999;
    }
    Ref<Texture2D>::unref(local_a8);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar17), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar17,false);
        return;
      }
      goto LAB_00101300;
    }
    break;
  case 0x29:
    this[0xa14] = (Slider)0x1;
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
    goto joined_r0x001013c0;
  case 0x2a:
    this[0xa14] = (Slider)0x0;
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
joined_r0x001013c0:
    if (local_40 == lVar2) {
LAB_001012ca:
      CanvasItem::queue_redraw();
      return;
    }
    goto LAB_00101300;
  case 0x2d:
    Control::update_minimum_size();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001012ca;
    goto LAB_00101300;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101300:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Slider::gui_input(Ref<InputEvent> const&) */

void __thiscall Slider::gui_input(Slider *this,Ref *param_1)

{
  Slider SVar1;
  StringName *pSVar2;
  long *plVar3;
  char cVar4;
  Slider SVar5;
  int iVar6;
  Object *pOVar7;
  StringName *pSVar8;
  Object *pOVar9;
  Object *pOVar10;
  undefined8 uVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  long in_FS_OFFSET;
  float fVar15;
  float extraout_XMM0_Db;
  double dVar16;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  double dVar17;
  double dVar18;
  Object *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  long *local_90;
  Variant *local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  lVar12 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar12 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gui_input","scene/gui/slider.cpp",0x2f,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_001036b8;
  }
  SVar1 = this[0xa28];
  if (SVar1 != (Slider)0x0) {
    pOVar7 = (Object *)__dynamic_cast(lVar12,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    bVar14 = SUB81(this,0);
    if (pOVar7 == (Object *)0x0) {
LAB_00102563:
      local_b8 = (Object *)
                 __dynamic_cast(lVar12,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
      if ((local_b8 == (Object *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_b8 = (Object *)0x0;
        goto LAB_001025a8;
      }
      if (this[0xa08] == (Slider)0x0) goto LAB_001025a8;
      local_78 = Control::get_size();
      uVar11 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
      local_90 = (long *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_90,*(Ref **)(this + 0xa58));
      plVar3 = local_90;
      if (this[0xa70] == (Slider)0x0) {
        iVar6 = (**(code **)(*local_90 + 0x1c8))();
        local_b0 = (double)iVar6;
        if (this[0xa70] == (Slider)0x0) {
          iVar6 = (**(code **)(*plVar3 + 0x1d0))();
          local_a8 = (double)iVar6;
        }
        else {
          local_a8 = 0.0;
        }
      }
      else {
        local_b0 = 0.0;
        local_a8 = 0.0;
      }
      if (*(int *)(this + 0xa18) == 1) {
        InputEventMouse::get_position();
        fVar15 = extraout_XMM0_Db;
      }
      else {
        fVar15 = (float)InputEventMouse::get_position();
      }
      dVar17 = (double)(fVar15 - (float)*(int *)(this + 0x9f0));
      if (*(int *)(this + 0xa18) == 1) {
        dVar17 = (double)((ulong)dVar17 ^ __LC43);
LAB_00102cf0:
        local_b0 = (double)(int)((ulong)uVar11 >> 0x20) - local_a8;
      }
      else {
        cVar4 = (**(code **)(*(long *)this + 0x340))(this);
        if (cVar4 != '\0') {
          dVar17 = (double)((ulong)dVar17 ^ __LC43);
        }
        if (*(int *)(this + 0xa18) == 1) goto LAB_00102cf0;
        local_b0 = (double)(int)uVar11 - local_b0;
      }
      if (0.0 < local_b0) {
        Range::set_as_ratio(dVar17 / local_b0 + *(double *)(this + 0x9f8));
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_90);
        goto LAB_001025a8;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_90);
      cVar4 = RefCounted::unreference();
      pOVar9 = pOVar7;
joined_r0x00102973:
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_b8), cVar4 != '\0')) {
        (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
        Memory::free_static(local_b8,false);
      }
    }
    else {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        lVar12 = *(long *)param_1;
        pOVar7 = (Object *)0x0;
      }
      else {
        iVar6 = InputEventMouseButton::get_button_index();
        if (iVar6 == 1) {
          cVar4 = InputEvent::is_pressed();
          if (cVar4 == '\0') {
            this[0xa08] = (Slider)0x0;
            dVar16 = (double)Range::get_as_ratio();
            dVar17 = *(double *)(this + 0xa00);
            bVar13 = false;
            if (dVar16 != dVar17) {
              dVar18 = _LC36;
              if (_LC36 <= ABS(dVar17) * _LC36) {
                dVar18 = ABS(dVar17) * _LC36;
              }
              bVar13 = dVar18 <= ABS(dVar17 - dVar16);
            }
            if ((gui_input(Ref<InputEvent>const&)::{lambda()#2}::operator()()::sname == '\0') &&
               (iVar6 = __cxa_guard_acquire(&gui_input(Ref<InputEvent>const&)::{lambda()#2}::
                                             operator()()::sname), iVar6 != 0)) {
              _scs_create((char *)&gui_input(Ref<InputEvent>const&)::{lambda()#2}::operator()()::
                                   sname,true);
              __cxa_atexit(StringName::~StringName,
                           &gui_input(Ref<InputEvent>const&)::{lambda()#2}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()#2}::operator()()::
                                   sname);
            }
            Variant::Variant((Variant *)&local_78,bVar13);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            local_88[0] = (Variant *)&local_78;
            (**(code **)(*(long *)this + 0xd0))
                      (this,&gui_input(Ref<InputEvent>const&)::{lambda()#2}::operator()()::sname,
                       local_88,1);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            local_90 = (long *)0x0;
            if ((this[0xa14] == (Slider)0x0) && (cVar4 = Control::has_focus(), cVar4 == '\0')) {
              Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_90,*(Ref **)(this + 0xa50));
            }
            else {
              Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_90,*(Ref **)(this + 0xa58));
            }
            local_b8 = (Object *)&local_90;
            if (*(int *)(this + 0xa18) == 1) {
              InputEventMouse::get_position();
              fVar15 = extraout_XMM0_Db_01;
            }
            else {
              fVar15 = (float)InputEventMouse::get_position();
            }
            *(int *)(this + 0x9f0) = (int)fVar15;
            uVar11 = Range::get_as_ratio();
            *(undefined8 *)(this + 0xa00) = uVar11;
            if ((gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar6 = __cxa_guard_acquire(&gui_input(Ref<InputEvent>const&)::{lambda()#1}::
                                             operator()()::sname), iVar6 != 0)) {
              _scs_create((char *)&gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                                   sname,true);
              __cxa_atexit(StringName::~StringName,
                           &gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                                   sname);
            }
            local_78 = 0;
            local_70 = (undefined1  [16])0x0;
            (**(code **)(*(long *)this + 0xd0))
                      (this,&gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname,0,0
                      );
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
            plVar3 = local_90;
            if (this[0xa70] == (Slider)0x0) {
              iVar6 = (**(code **)(*local_90 + 0x1c8))(local_90);
              local_b0 = (double)iVar6;
              if (this[0xa70] == (Slider)0x0) {
                iVar6 = (**(code **)(*plVar3 + 0x1d0))(plVar3);
                local_a0 = (double)iVar6;
              }
              else {
                local_a0 = 0.0;
              }
            }
            else {
              local_b0 = 0.0;
              local_a0 = 0.0;
            }
            if (*(int *)(this + 0xa18) == 1) {
              Control::get_size();
              local_a8 = (double)extraout_XMM0_Db_00 - local_a0;
            }
            else {
              fVar15 = (float)Control::get_size();
              local_a8 = (double)fVar15 - local_b0;
            }
            Object::set_block_signals(bVar14);
            if (*(int *)(this + 0xa18) == 1) {
              Range::set_as_ratio(_LC35 - ((double)*(int *)(this + 0x9f0) - local_a0 * __LC41) /
                                          local_a8);
            }
            else {
              local_a8 = ((double)*(int *)(this + 0x9f0) - local_b0 * __LC41) / local_a8;
              cVar4 = (**(code **)(*(long *)this + 0x340))(this);
              if (cVar4 != '\0') {
                local_a8 = _LC35 - local_a8;
              }
              Range::set_as_ratio(local_a8);
            }
            Object::set_block_signals(bVar14);
            this[0xa08] = (Slider)0x1;
            uVar11 = Range::get_as_ratio();
            *(undefined8 *)(this + 0x9f8) = uVar11;
            Range::Shared::emit_value_changed();
            Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
          }
        }
        else if (this[0xa29] != (Slider)0x0) {
          cVar4 = InputEvent::is_pressed();
          if ((cVar4 == '\0') || (iVar6 = InputEventMouseButton::get_button_index(), iVar6 != 4)) {
            cVar4 = InputEvent::is_pressed();
            if ((cVar4 != '\0') && (iVar6 = InputEventMouseButton::get_button_index(), iVar6 == 5))
            {
              iVar6 = Control::get_focus_mode();
              if (iVar6 != 0) {
                Control::grab_focus();
              }
              dVar17 = (double)Range::get_value();
              dVar16 = (double)Range::get_step();
              Range::set_value(dVar17 - dVar16);
            }
          }
          else {
            iVar6 = Control::get_focus_mode();
            if (iVar6 != 0) {
              Control::grab_focus();
            }
            dVar17 = (double)Range::get_value();
            dVar16 = (double)Range::get_step();
            Range::set_value(dVar16 + dVar17);
          }
        }
        lVar12 = *(long *)param_1;
      }
      if (lVar12 != 0) goto LAB_00102563;
      local_b8 = (Object *)0x0;
LAB_001025a8:
      pSVar8 = (StringName *)Input::get_singleton();
      lVar12 = *(long *)param_1;
      if (lVar12 == 0) {
LAB_00102950:
        SVar5 = (Slider)0x0;
        pOVar10 = (Object *)0x0;
LAB_001027bb:
        pOVar9 = (Object *)0x0;
LAB_0010265e:
        if (local_b8 == (Object *)0x0 && pOVar7 == (Object *)0x0) {
LAB_00102d30:
          pSVar2 = *(StringName **)param_1;
          StringName::StringName((StringName *)&local_90,"ui_left",false);
          bVar13 = SUB81((StringName *)&local_90,0);
          cVar4 = InputEvent::is_action_pressed(pSVar2,bVar13,true);
          if ((StringName::configured != '\0') && (local_90 != (long *)0x0)) {
            StringName::unref();
          }
          if (cVar4 == '\0') {
            pSVar2 = *(StringName **)param_1;
            StringName::StringName((StringName *)&local_90,"ui_right",false);
            cVar4 = InputEvent::is_action_pressed(pSVar2,bVar13,true);
            if ((StringName::configured != '\0') && (local_90 != (long *)0x0)) {
              StringName::unref();
            }
            if (cVar4 == '\0') {
              pSVar2 = *(StringName **)param_1;
              StringName::StringName((StringName *)&local_90,"ui_up",false);
              cVar4 = InputEvent::is_action_pressed(pSVar2,bVar13,true);
              if ((StringName::configured != '\0') && (local_90 != (long *)0x0)) {
                StringName::unref();
              }
              if (cVar4 == '\0') {
                pSVar2 = *(StringName **)param_1;
                StringName::StringName((StringName *)&local_90,"ui_down",false);
                cVar4 = InputEvent::is_action_pressed(pSVar2,bVar13,true);
                if ((StringName::configured != '\0') && (local_90 != (long *)0x0)) {
                  StringName::unref();
                }
                if (cVar4 == '\0') {
                  pSVar8 = *(StringName **)param_1;
                  StringName::StringName((StringName *)&local_90,"ui_home",false);
                  cVar4 = InputEvent::is_action(pSVar8,bVar13);
                  if (cVar4 == '\0') {
                    cVar4 = '\0';
                    if (StringName::configured != '\0') {
LAB_00103687:
                      if (local_90 != (long *)0x0) {
                        StringName::unref();
                      }
                      goto LAB_001036a2;
                    }
                  }
                  else {
                    cVar4 = InputEvent::is_pressed();
                    if (StringName::configured != '\0') goto LAB_00103687;
LAB_001036a2:
                    if (cVar4 != '\0') {
                      dVar17 = (double)Range::get_min();
                      goto LAB_0010361c;
                    }
                  }
                  pSVar8 = *(StringName **)param_1;
                  StringName::StringName((StringName *)&local_90,"ui_end",false);
                  cVar4 = InputEvent::is_action(pSVar8,bVar13);
                  if (cVar4 == '\0') {
                    cVar4 = '\0';
                    if (StringName::configured == '\0') goto LAB_0010266b;
LAB_00103702:
                    if (local_90 != (long *)0x0) {
                      StringName::unref();
                    }
                  }
                  else {
                    cVar4 = InputEvent::is_pressed();
                    if (StringName::configured != '\0') goto LAB_00103702;
                  }
                  if (cVar4 == '\0') goto LAB_0010266b;
                  dVar17 = (double)Range::get_max();
                }
                else {
                  if (*(int *)(this + 0xa18) != 1) goto LAB_00102f40;
                  if (SVar5 != (Slider)0x0) {
                    StringName::StringName((StringName *)&local_90,"ui_down",false);
                    cVar4 = Input::is_action_just_pressed(pSVar8,bVar13);
                    if ((StringName::configured != '\0') && (local_90 != (long *)0x0)) {
                      StringName::unref();
                    }
                    if (cVar4 == '\0') goto LAB_00102f40;
                    Node::set_process_internal(bVar14);
                  }
                  dVar17 = (double)Range::get_value();
                  dVar16 = *(double *)(this + 0xa20);
                  if (dVar16 < 0.0) {
                    dVar16 = (double)Range::get_step();
                  }
                  dVar17 = dVar17 - dVar16;
                }
LAB_0010361c:
                Range::set_value(dVar17);
                Control::accept_event();
                goto LAB_0010266b;
              }
              if (*(int *)(this + 0xa18) == 1) {
                if (SVar5 != (Slider)0x0) {
                  StringName::StringName((StringName *)&local_90,"ui_up",false);
                  cVar4 = Input::is_action_just_pressed(pSVar8,bVar13);
                  if ((StringName::configured != '\0') && (local_90 != (long *)0x0)) {
                    StringName::unref();
                  }
                  if (cVar4 == '\0') goto LAB_00102f40;
                  Node::set_process_internal(bVar14);
                }
                dVar16 = (double)Range::get_value();
                dVar17 = *(double *)(this + 0xa20);
                if (dVar17 < 0.0) {
                  dVar17 = (double)Range::get_step();
                }
                Range::set_value(dVar17 + dVar16);
                Control::accept_event();
                goto LAB_0010266b;
              }
            }
            else if (*(int *)(this + 0xa18) == 0) {
              if (SVar5 != (Slider)0x0) {
                StringName::StringName((StringName *)&local_90,"ui_right",false);
                cVar4 = Input::is_action_just_pressed(pSVar8,bVar13);
                if ((StringName::configured != '\0') && (local_90 != (long *)0x0)) {
                  StringName::unref();
                }
                if (cVar4 == '\0') goto LAB_00102f40;
                Node::set_process_internal(bVar14);
              }
              cVar4 = (**(code **)(*(long *)this + 0x340))(this);
              if (cVar4 == '\0') goto LAB_00103057;
              goto LAB_00102ddf;
            }
LAB_00102f40:
            if (((pOVar10 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
               && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
            if (((pOVar9 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
               (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102701;
              goto LAB_001036b8;
            }
            goto LAB_001024f1;
          }
          if (*(int *)(this + 0xa18) != 0) goto LAB_00102f40;
          if (SVar5 != (Slider)0x0) {
            StringName::StringName((StringName *)&local_90,"ui_left",false);
            cVar4 = Input::is_action_just_pressed(pSVar8,bVar13);
            if ((StringName::configured != '\0') && (local_90 != (long *)0x0)) {
              StringName::unref();
            }
            if (cVar4 == '\0') goto LAB_00102f40;
            Node::set_process_internal(bVar14);
          }
          cVar4 = (**(code **)(*(long *)this + 0x340))(this);
          if (cVar4 == '\0') {
LAB_00102ddf:
            dVar16 = (double)Range::get_value();
            dVar17 = *(double *)(this + 0xa20);
            if (dVar17 < 0.0) {
              dVar17 = (double)Range::get_step();
            }
            Range::set_value(dVar16 - dVar17);
          }
          else {
LAB_00103057:
            dVar16 = (double)Range::get_value();
            dVar17 = *(double *)(this + 0xa20);
            if (dVar17 < 0.0) {
              dVar17 = (double)Range::get_step();
            }
            Range::set_value(dVar17 + dVar16);
          }
          Control::accept_event();
        }
LAB_0010266b:
        if (((pOVar10 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
LAB_00102688:
        if (pOVar9 != (Object *)0x0) goto LAB_0010268d;
      }
      else {
        pOVar9 = (Object *)
                 __dynamic_cast(lVar12,&Object::typeinfo,&InputEventJoypadMotion::typeinfo,0);
        if (pOVar9 == (Object *)0x0) {
          pOVar10 = (Object *)
                    __dynamic_cast(lVar12,&Object::typeinfo,&InputEventJoypadButton::typeinfo,0);
          if (pOVar10 == (Object *)0x0) {
LAB_001027b1:
            pOVar10 = (Object *)0x0;
LAB_001027b4:
            SVar5 = (Slider)(pOVar10 != (Object *)0x0);
            goto LAB_001027bb;
          }
LAB_00102638:
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            pOVar10 = (Object *)0x0;
          }
          SVar5 = SVar1;
          if (pOVar9 == (Object *)0x0) goto LAB_001027b4;
          goto LAB_0010265e;
        }
        SVar5 = (Slider)RefCounted::reference();
        if (SVar5 == (Slider)0x0) {
          if ((*(long *)param_1 == 0) ||
             (pOVar10 = (Object *)
                        __dynamic_cast(*(long *)param_1,&Object::typeinfo,
                                       &InputEventJoypadButton::typeinfo,0),
             pOVar10 == (Object *)0x0)) goto LAB_00102950;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') goto LAB_001027b1;
          goto LAB_001027b4;
        }
        if (*(long *)param_1 != 0) {
          pOVar10 = (Object *)
                    __dynamic_cast(*(long *)param_1,&Object::typeinfo,
                                   &InputEventJoypadButton::typeinfo,0);
          if (pOVar10 != (Object *)0x0) goto LAB_00102638;
          if (local_b8 == (Object *)0x0 && pOVar7 == (Object *)0x0) goto LAB_00102d30;
          goto LAB_00102688;
        }
        pOVar10 = (Object *)0x0;
        if (local_b8 == (Object *)0x0 && pOVar7 == (Object *)0x0) goto LAB_00102d30;
LAB_0010268d:
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
      pOVar9 = pOVar7;
      if (local_b8 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        goto joined_r0x00102973;
      }
    }
    if (((pOVar9 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102701:
        Memory::free_static(pOVar9,false);
        return;
      }
      goto LAB_001036b8;
    }
  }
LAB_001024f1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001036b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Slider::_bind_methods() */

void Slider::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int *piVar11;
  MethodBind *pMVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118 [6];
  long local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  int *local_98;
  undefined8 local_90;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_78 = "count";
  uVar14 = (uint)&local_68;
  local_68 = &local_78;
  D_METHODP((char *)&local_e8,(char ***)"set_ticks",uVar14);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar12 = create_method_bind<Slider,int>(set_ticks);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_d8._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar15 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_d8._8_8_;
      local_d8 = auVar3 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_e8,(char ***)"get_ticks",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar12 = create_method_bind<Slider,int>(get_ticks);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_d8._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar15 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_d8._8_8_;
      local_d8 = auVar4 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_e8,(char ***)"get_ticks_on_borders",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar12 = create_method_bind<Slider,bool>(get_ticks_on_borders);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_d8._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar15 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_d8._8_8_;
      local_d8 = auVar5 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  local_78 = "ticks_on_border";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)&local_e8,(char ***)"set_ticks_on_borders",uVar14);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar12 = create_method_bind<Slider,bool>(set_ticks_on_borders);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_d8._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar15 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_d8._8_8_;
      local_d8 = auVar6 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  local_78 = "editable";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)&local_e8,(char ***)"set_editable",uVar14);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar12 = create_method_bind<Slider,bool>(set_editable);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_d8._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar15 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_d8._8_8_;
      local_d8 = auVar7 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_e8,(char ***)"is_editable",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar12 = create_method_bind<Slider,bool>(is_editable);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_d8._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar15 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_d8._8_8_;
      local_d8 = auVar8 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  local_78 = "scrollable";
  local_70 = 0;
  local_68 = &local_78;
  D_METHODP((char *)&local_e8,(char ***)"set_scrollable",uVar14);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar12 = create_method_bind<Slider,bool>(set_scrollable);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_d8._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar15 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_d8._8_8_;
      local_d8 = auVar9 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_e8,(char ***)"is_scrollable",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar12 = create_method_bind<Slider,bool>(is_scrollable);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_d8._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar15 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_d8._8_8_;
      local_d8 = auVar10 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"drag_started");
  local_d8 = (undefined1  [16])0x0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_120);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)local_118,(String *)&local_128,false);
  ClassDB::add_signal((StringName *)local_118,(MethodInfo *)&local_e8);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar17 = (long *)(local_80 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar11 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar17 = (long *)(local_98 + -4);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar15 = 0;
      local_98 = (int *)0x0;
      piVar16 = piVar11;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar16] != '\0') {
            Variant::_clear_internal();
          }
          lVar15 = lVar15 + 1;
          piVar16 = piVar16 + 6;
        } while (lVar1 != lVar15);
      }
      Memory::free_static(piVar11 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  local_130 = 0;
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"");
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"value_changed");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_118,1,(String *)&local_140,0,(String *)&local_138,6,&local_130);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"drag_ended");
  local_d8 = (undefined1  [16])0x0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_128);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)local_118);
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_148,false);
  ClassDB::add_signal((StringName *)&local_120,(MethodInfo *)&local_e8);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar17 = (long *)(local_80 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar11 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar17 = (long *)(local_98 + -4);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar15 = 0;
      local_98 = (int *)0x0;
      piVar16 = piVar11;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar16] != '\0') {
            Variant::_clear_internal();
          }
          lVar15 = lVar15 + 1;
          piVar16 = piVar16 + 6;
        } while (lVar1 != lVar15);
      }
      Memory::free_static(piVar11 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_130 = 0;
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"");
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"editable");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(String *)&local_140,0,(String *)&local_138,6,&local_130);
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"Slider");
  StringName::StringName((StringName *)local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)local_118,(PropertyInfo *)&local_e8,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_130 = 0;
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"");
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"scrollable");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(String *)&local_140,0,(String *)&local_138,6,&local_130);
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"Slider");
  StringName::StringName((StringName *)local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)local_118,(PropertyInfo *)&local_e8,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if (((StringName::configured != '\0') &&
      ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_120 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_130 = 0;
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"0,4096,1");
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"tick_count");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,2,(String *)&local_140,1,(String *)&local_138,6,&local_130);
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"Slider");
  StringName::StringName((StringName *)local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)local_118,(PropertyInfo *)&local_e8,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_130 = 0;
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"");
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"ticks_on_borders");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(String *)&local_140,0,(String *)&local_138,6,&local_130);
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"Slider");
  StringName::StringName((StringName *)local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)local_118,(PropertyInfo *)&local_e8,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if (((StringName::configured != '\0') &&
      ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_120 != 0)
      ))) {
    StringName::unref();
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"slider",false);
  StringName::StringName((StringName *)local_118,"slider_style",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,5,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') &&
     (((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_e8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"grabber_area",false);
  StringName::StringName((StringName *)local_118,"grabber_area_style",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,5,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (((StringName::configured != '\0') &&
      ((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_e8 != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"grabber_area_highlight",false);
  StringName::StringName((StringName *)local_118,"grabber_area_hl_style",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,5,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') &&
     (((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_e8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"grabber",false);
  StringName::StringName((StringName *)local_118,"grabber_icon",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,4,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (((StringName::configured != '\0') &&
      ((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_e8 != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"grabber_highlight",false);
  StringName::StringName((StringName *)local_118,"grabber_hl_icon",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,4,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') &&
     (((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_e8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"grabber_disabled",false);
  StringName::StringName((StringName *)local_118,"grabber_disabled_icon",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,4,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (((StringName::configured != '\0') &&
      ((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_e8 != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"tick",false);
  StringName::StringName((StringName *)local_118,"tick_icon",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,4,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') &&
     (((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_e8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"center_grabber",false);
  StringName::StringName((StringName *)local_118,"center_grabber",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,1,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (((StringName::configured != '\0') &&
      ((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_e8 != 0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar13 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_e8,"grabber_offset",false);
  StringName::StringName((StringName *)local_118,"grabber_offset",false);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"Slider");
  StringName::StringName((StringName *)&local_120,(String *)&local_128,false);
  ThemeDB::bind_class_item
            (uVar13,1,(String *)&local_120,(StringName *)local_118,(MethodDefinition *)&local_e8,
             &local_68);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') &&
     (((local_118[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_e8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Slider::is_class_ptr(void*) const */

uint Slider::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x10b7,in_RSI == &Range::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b8,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
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



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b660;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b660;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b6c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b6c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b780;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b780;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b720;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b720;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Slider::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Slider::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Slider::_property_can_revertv(StringName const&) const */

undefined8 Slider::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_bool((Variant *)&stack0x00000000);
  DAT_00000a70 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a74 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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
   Slider::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),Slider::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Slider::_bind_methods() [clone .cold] */

void Slider::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Slider::_validate_propertyv(PropertyInfo&) const */

void Slider::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* Slider::_setv(StringName const&, Variant const&) */

undefined8 Slider::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010f018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105c58) */
/* Slider::_getv(StringName const&, Variant&) const */

undefined8 Slider::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010f020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* Slider::~Slider() */

void __thiscall Slider::~Slider(Slider *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b2f0;
  if (*(long *)(this + 0xa68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Range::~Range((Range *)this);
        return;
      }
    }
  }
  Range::~Range((Range *)this);
  return;
}



/* Slider::~Slider() */

void __thiscall Slider::~Slider(Slider *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b2f0;
  if (*(long *)(this + 0xa68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Range::~Range((Range *)this);
  operator_delete(this,0xa80);
  return;
}



/* Slider::_get_class_namev() const */

undefined8 * Slider::_get_class_namev(void)

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
LAB_00106173:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106173;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Slider");
      goto LAB_001061de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Slider");
LAB_001061de:
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Slider::get_class() const */

void Slider::get_class(void)

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
  long *plVar1;
  long lVar2;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
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



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_001065bf;
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
LAB_001065bf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00106673;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
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
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00106673;
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
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar6 != '\0') goto LAB_00106673;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_00106858;
    }
  }
LAB_00106673:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106858:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC19;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00106955;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00106955:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC19;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00106ab5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00106ab5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Slider::is_class(String const&) const */

undefined8 __thiscall Slider::is_class(Slider *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00106b9f;
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
LAB_00106b9f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00106c53;
  }
  cVar6 = String::operator==(param_1,"Slider");
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
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00106c53;
    }
    cVar6 = String::operator==(param_1,"Range");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar5 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar6 != '\0') goto LAB_00106c53;
      }
      cVar6 = String::operator==(param_1,"Control");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar8;
        }
        goto LAB_00106dee;
      }
    }
  }
LAB_00106c53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106dee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_78 = &_LC17;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC17;
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
      goto LAB_00106f5c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106f5c:
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
      goto LAB_001071c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001071c1:
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
  if ((code *)PTR__get_property_list_0010f028 != Object::_get_property_list) {
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
      goto LAB_00107491;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107491:
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
  if ((code *)PTR__get_property_list_0010f030 != CanvasItem::_get_property_list) {
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



/* Range::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Range::_get_property_listv(Range *this,List *param_1,bool param_2)

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
  local_78 = "Range";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Range";
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
      goto LAB_00107761;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107761:
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
  StringName::StringName((StringName *)&local_78,"Range",false);
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



/* Slider::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Slider::_get_property_listv(Slider *this,List *param_1,bool param_2)

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
    Range::_get_property_listv((Range *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Slider";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Slider";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_00107a11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107a11:
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
  StringName::StringName((StringName *)&local_78,"Slider",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Range::_get_property_listv((Range *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
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
  if (in_EDX != 0) goto LAB_00107d49;
  local_78 = 0;
  local_68 = &_LC19;
  local_80 = 0;
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
LAB_00107e45:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00107e45;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00107d49:
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
  if (in_EDX != 0) goto LAB_00107fb9;
  local_78 = 0;
  local_68 = &_LC19;
  local_80 = 0;
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
LAB_001080b5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001080b5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00107fb9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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



/* WARNING: Removing unreachable block (ram,0x001087d0) */
/* Slider::_notificationv(int, bool) */

void __thiscall Slider::_notificationv(Slider *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0010f038 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0010f038 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* MethodBind* create_method_bind<Slider, int>(void (Slider::*)(int)) */

MethodBind * create_method_bind<Slider,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b660;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Slider";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Slider, int>(int (Slider::*)() const) */

MethodBind * create_method_bind<Slider,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b6c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Slider";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Slider, bool>(bool (Slider::*)() const) */

MethodBind * create_method_bind<Slider,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b720;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Slider";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Slider, bool>(void (Slider::*)(bool)) */

MethodBind * create_method_bind<Slider,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b780;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Slider";
  local_30 = 6;
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



/* Slider::_initialize_classv() */

void Slider::_initialize_classv(void)

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
    if (Range::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_compatibility_methods_0010f040 !=
              Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
          }
          CanvasItem::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "CanvasItem";
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
      local_58 = "Control";
      local_68 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Range";
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
      if ((code *)PTR__bind_methods_0010f048 != Control::_bind_methods) {
        Range::_bind_methods();
      }
      Range::initialize_class()::initialized = '\x01';
    }
    local_58 = "Range";
    local_68 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Slider";
    local_70 = 0;
    local_50 = 6;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00109338) */
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
      goto LAB_00109771;
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
                    /* WARNING: Could not recover jumptable at 0x001095fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00109771:
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
      goto LAB_00109959;
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
                    /* WARNING: Could not recover jumptable at 0x001097e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00109959:
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109ab0;
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
LAB_00109ab0:
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
      goto LAB_00109cc2;
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
LAB_00109cc2:
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
      goto LAB_00109e71;
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
LAB_00109e71:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a0a0;
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
LAB_0010a0a0:
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
      goto LAB_0010a2b4;
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
LAB_0010a2b4:
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
      goto LAB_0010a463;
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
LAB_0010a463:
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
      goto LAB_0010a7a1;
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
                    /* WARNING: Could not recover jumptable at 0x0010a62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010a7a1:
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
      goto LAB_0010a981;
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
                    /* WARNING: Could not recover jumptable at 0x0010a80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010a981:
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
    goto LAB_0010aaad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010ab10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010ab10:
      uVar6 = 4;
LAB_0010aaad:
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
      goto LAB_0010aa2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010aa2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC97;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010aa87. Too many branches */
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010ac06;
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
LAB_0010ac06:
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
    goto LAB_0010aecd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010af30;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010af30:
      uVar6 = 4;
LAB_0010aecd:
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
      goto LAB_0010ae4b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010ae4b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC99;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010aea6. Too many branches */
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010af96;
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
LAB_0010af96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Slider::~Slider() */

void __thiscall Slider::~Slider(Slider *this)

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


