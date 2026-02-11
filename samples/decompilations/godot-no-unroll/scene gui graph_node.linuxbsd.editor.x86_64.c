
/* GraphNode::set_ignore_invalid_connection_type(bool) */

void __thiscall GraphNode::set_ignore_invalid_connection_type(GraphNode *this,bool param_1)

{
  this[0xaf9] = (GraphNode)param_1;
  return;
}



/* GraphNode::is_ignoring_valid_connection_type() const */

GraphNode __thiscall GraphNode::is_ignoring_valid_connection_type(GraphNode *this)

{
  return this[0xaf9];
}



/* GraphNode::get_titlebar_hbox() */

undefined8 __thiscall GraphNode::get_titlebar_hbox(GraphNode *this)

{
  return *(undefined8 *)(this + 0xa30);
}



/* GraphNode::get_cursor_shape(Vector2 const&) const */

undefined8 __thiscall GraphNode::get_cursor_shape(GraphNode *this,Vector2 *param_1)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float extraout_XMM0_Db;
  
  if (this[0xa01] != (GraphNode)0x0) {
    if (this[0xa02] != (GraphNode)0x0) {
      return 0xc;
    }
    fVar1 = *(float *)param_1;
    fVar4 = (float)Control::get_size();
    iVar2 = (**(code **)(**(long **)(this + 0xae0) + 0x1c8))();
    if (fVar4 - (float)iVar2 < fVar1) {
      fVar1 = *(float *)(param_1 + 4);
      Control::get_size();
      iVar2 = (**(code **)(**(long **)(this + 0xae0) + 0x1d0))();
      if (extraout_XMM0_Db - (float)iVar2 < fVar1) {
        return 0xc;
      }
    }
  }
  uVar3 = Control::get_cursor_shape((Vector2 *)this);
  return uVar3;
}



/* CowData<GraphNode::PortCache>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<GraphNode::PortCache>::_copy_on_write(CowData<GraphNode::PortCache> *this)

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
  __n = lVar2 * 0x20;
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



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}::
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar2 * 4;
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



/* HashMap<int, GraphNode::Slot, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, GraphNode::Slot> > >::_lookup_pos(int const&, unsigned
   int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
::_lookup_pos(HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
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



/* Error Object::emit_signal<int>(StringName const&, int) [clone .isra.0] */

void __thiscall Object::emit_signal<int>(Object *this,StringName *param_1,int param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_2);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68[0] = (Variant *)local_58;
  (**(code **)(*(long *)this + 0xd0))(this,param_1,local_68,1);
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
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
    _DAT_00000ad4 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xad4) = iVar2;
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
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
    _DAT_00000ae8 = Variant::operator_cast_to_Color((Variant *)local_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    _DAT_00000af0 = in_XMM1_Qa;
    (*pcVar1)();
  }
  lVar2 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar2,0,param_3,param_4);
  uVar3 = Variant::operator_cast_to_Color((Variant *)local_48);
  *(undefined8 *)(lVar2 + 0xae8) = uVar3;
  *(undefined8 *)(lVar2 + 0xaf0) = in_XMM1_Qa;
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
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



/* Ref<StyleBox>::TEMPNAMEPLACEHOLDERVALUE(Ref<StyleBox> const&) [clone .isra.0] */

void __thiscall Ref<StyleBox>::operator=(Ref<StyleBox> *this,Ref *param_1)

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



/* GraphNode::clear_all_slots() */

void __thiscall GraphNode::clear_all_slots(GraphNode *this)

{
  uint uVar1;
  void *pvVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  
  if ((*(long *)(this + 0xa70) != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4);
    if (uVar1 != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(this + 0xa78) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0xa78) + lVar5) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0xa70) + lVar5 * 2);
          if (*(long *)((long)pvVar2 + 0x50) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              pOVar3 = *(Object **)((long)pvVar2 + 0x50);
              cVar4 = predelete_handler(pOVar3);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          if (*(long *)((long)pvVar2 + 0x30) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              pOVar3 = *(Object **)((long)pvVar2 + 0x30);
              cVar4 = predelete_handler(pOVar3);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0xa70) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0xa94) = 0;
    *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  }
  CanvasItem::queue_redraw();
  this[0xaf8] = (GraphNode)0x1;
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xab8);
  if (pOVar5 == pOVar1) goto LAB_00100c50;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100c50;
    *(undefined8 *)(lVar4 + 0xab8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100c50;
    *(Object **)(lVar4 + 0xab8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xab8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100c50;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100c50:
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xac8);
  if (pOVar5 == pOVar1) goto LAB_00100da0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100da0;
    *(undefined8 *)(lVar4 + 0xac8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100da0;
    *(Object **)(lVar4 + 0xac8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xac8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100da0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100da0:
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xab0);
  if (pOVar5 == pOVar1) goto LAB_00100ef0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00100ef0;
    *(undefined8 *)(lVar4 + 0xab0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00100ef0;
    *(Object **)(lVar4 + 0xab0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xab0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00100ef0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00100ef0:
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xaa8);
  if (pOVar5 == pOVar1) goto LAB_00101040;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101040;
    *(undefined8 *)(lVar4 + 0xaa8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101040;
    *(Object **)(lVar4 + 0xaa8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xaa8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101040;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101040:
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,5,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xac0);
  if (pOVar5 == pOVar1) goto LAB_00101190;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101190;
    *(undefined8 *)(lVar4 + 0xac0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101190;
    *(Object **)(lVar4 + 0xac0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xac0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101190;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101190:
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xad8);
  if (pOVar5 == pOVar1) goto LAB_001012e0;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_001012e0;
    *(undefined8 *)(lVar4 + 0xad8) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_001012e0;
    *(Object **)(lVar4 + 0xad8) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xad8) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_001012e0;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_001012e0:
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
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
  lVar4 = __dynamic_cast(*param_2,&Object::typeinfo,&GraphNode::typeinfo,0);
  Control::get_theme_item(local_48,lVar4,4,param_3,param_4);
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(lVar4 + 0xae0);
  if (pOVar5 == pOVar1) goto LAB_00101430;
  if (pOVar5 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) goto LAB_00101430;
    *(undefined8 *)(lVar4 + 0xae0) = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar1 == pOVar5) goto LAB_00101430;
    *(Object **)(lVar4 + 0xae0) = pOVar5;
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar4 + 0xae0) = 0;
      }
    }
    if (pOVar1 == (Object *)0x0) goto LAB_00101430;
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
LAB_00101430:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<int, GraphNode::Slot, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, GraphNode::Slot> > >::erase(int const&) [clone .isra.0]
    */

void __thiscall
HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
::erase(HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
        *this,int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  Object *pOVar13;
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
  uint uVar26;
  char cVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  long *plVar32;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar27 = _lookup_pos(this,(int *)(ulong)(uint)*param_1,&local_44);
  if (cVar27 == '\0') goto LAB_00101686;
  lVar8 = *(long *)(this + 0x10);
  lVar9 = *(long *)(this + 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar31 = CONCAT44(0,uVar6);
  lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)(local_44 + 1) * lVar10;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar31;
  lVar30 = SUB168(auVar14 * auVar20,8);
  puVar1 = (uint *)(lVar8 + lVar30 * 4);
  uVar28 = SUB164(auVar14 * auVar20,8);
  uVar7 = *puVar1;
  if (uVar7 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar7 * lVar10;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar31;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar6 + uVar28) - SUB164(auVar15 * auVar21,8)) * lVar10;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar31;
    iVar29 = SUB164(auVar16 * auVar22,8);
    while (uVar26 = uVar28, iVar29 != 0) {
      puVar2 = (uint *)(lVar8 + (ulong)local_44 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar9 + lVar30 * 8);
      *puVar2 = uVar7;
      puVar4 = (undefined8 *)(lVar9 + (ulong)local_44 * 8);
      uVar11 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar11;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)(uVar26 + 1) * lVar10;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar31;
      lVar30 = SUB168(auVar19 * auVar25,8);
      puVar1 = (uint *)(lVar8 + lVar30 * 4);
      uVar28 = SUB164(auVar19 * auVar25,8);
      uVar7 = *puVar1;
      local_44 = uVar26;
      if (uVar7 == 0) break;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)uVar7 * lVar10;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)((uVar28 + uVar6) - SUB164(auVar17 * auVar23,8)) * lVar10;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar31;
      iVar29 = SUB164(auVar18 * auVar24,8);
    }
  }
  uVar31 = (ulong)local_44;
  plVar5 = (long *)(lVar9 + uVar31 * 8);
  *(undefined4 *)(lVar8 + uVar31 * 4) = 0;
  plVar32 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar32) {
    *(long *)(this + 0x18) = *plVar32;
    plVar32 = (long *)*plVar5;
    if (*(long **)(this + 0x20) != plVar32) goto LAB_0010161a;
LAB_001016b0:
    *(long *)(this + 0x20) = plVar32[1];
    plVar32 = (long *)*plVar5;
    plVar12 = (long *)plVar32[1];
  }
  else {
    if (*(long **)(this + 0x20) == plVar32) goto LAB_001016b0;
LAB_0010161a:
    plVar12 = (long *)plVar32[1];
  }
  if (plVar12 != (long *)0x0) {
    *plVar12 = *plVar32;
    plVar32 = (long *)*plVar5;
  }
  if (*plVar32 != 0) {
    *(long *)(*plVar32 + 8) = plVar32[1];
    plVar32 = (long *)*plVar5;
  }
  if ((plVar32[10] != 0) && (cVar27 = RefCounted::unreference(), cVar27 != '\0')) {
    pOVar13 = (Object *)plVar32[10];
    cVar27 = predelete_handler(pOVar13);
    if (cVar27 != '\0') {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
  }
  if ((plVar32[6] != 0) && (cVar27 = RefCounted::unreference(), cVar27 != '\0')) {
    pOVar13 = (Object *)plVar32[6];
    cVar27 = predelete_handler(pOVar13);
    if (cVar27 != '\0') {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
  }
  Memory::free_static(plVar32,false);
  *(undefined8 *)(*(long *)(this + 8) + uVar31 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
LAB_00101686:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GraphNode::clear_slot(int) */

void __thiscall GraphNode::clear_slot(GraphNode *this,int param_1)

{
  int local_c;
  
  local_c = param_1;
  HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
  ::erase((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
           *)(this + 0xa68),&local_c);
  CanvasItem::queue_redraw();
  this[0xaf8] = (GraphNode)0x1;
  return;
}



/* GraphNode::get_slot_type_left(int) const */

undefined4 __thiscall GraphNode::get_slot_type_left(GraphNode *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(this + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
    uVar14 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar14 ^ uVar14 >> 0x10;
    if (uVar14 == uVar14 >> 0x10) {
      uVar19 = 1;
      uVar17 = uVar3;
    }
    else {
      uVar17 = uVar19 * uVar3;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
    uVar17 = (ulong)uVar14;
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar14 = 0;
      do {
        if (((uint)uVar17 == uVar19) && (*(int *)(*(long *)(lVar2 + lVar18 * 8) + 0x10) == param_1))
        {
          local_44 = 0;
          cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                   ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                  *)(this + 0xa68),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar13 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          uVar15 = *(undefined4 *)(*(long *)(lVar2 + (ulong)local_44 * 8) + 0x1c);
          goto LAB_001018e2;
        }
        uVar14 = uVar14 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar16 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
        uVar17 = (ulong)uVar1;
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar1 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4
                                        ) + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar20, uVar14 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar15 = 0;
LAB_001018e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::is_slot_enabled_right(int) const */

undefined1 __thiscall GraphNode::is_slot_enabled_right(GraphNode *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(this + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
    uVar15 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar15 ^ uVar15 >> 0x10;
    if (uVar15 == uVar15 >> 0x10) {
      uVar19 = 1;
      uVar17 = uVar3;
    }
    else {
      uVar17 = uVar19 * uVar3;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar15 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
    uVar17 = (ulong)uVar15;
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar15 != 0) {
      uVar15 = 0;
      do {
        if (((uint)uVar17 == uVar19) && (*(int *)(*(long *)(lVar2 + lVar18 * 8) + 0x10) == param_1))
        {
          local_44 = 0;
          cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                   ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                  *)(this + 0xa68),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar13 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          uVar14 = *(undefined1 *)(*(long *)(lVar2 + (ulong)local_44 * 8) + 0x38);
          goto LAB_00101a82;
        }
        uVar15 = uVar15 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar16 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
        uVar17 = (ulong)uVar1;
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar1 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4
                                        ) + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar20, uVar15 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar14 = 0;
LAB_00101a82:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::is_slot_enabled_left(int) const */

undefined1 __thiscall GraphNode::is_slot_enabled_left(GraphNode *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(this + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
    uVar15 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar15 ^ uVar15 >> 0x10;
    if (uVar15 == uVar15 >> 0x10) {
      uVar19 = 1;
      uVar17 = uVar3;
    }
    else {
      uVar17 = uVar19 * uVar3;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar15 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
    uVar17 = (ulong)uVar15;
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar15 != 0) {
      uVar15 = 0;
      do {
        if (((uint)uVar17 == uVar19) && (*(int *)(*(long *)(lVar2 + lVar18 * 8) + 0x10) == param_1))
        {
          local_44 = 0;
          cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                   ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                  *)(this + 0xa68),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar13 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          uVar14 = *(undefined1 *)(*(long *)(lVar2 + (ulong)local_44 * 8) + 0x18);
          goto LAB_00101c22;
        }
        uVar15 = uVar15 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar16 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
        uVar17 = (ulong)uVar1;
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar1 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4
                                        ) + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar20, uVar15 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar14 = 0;
LAB_00101c22:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::get_slot_type_right(int) const */

undefined4 __thiscall GraphNode::get_slot_type_right(GraphNode *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(this + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
    uVar14 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar14 ^ uVar14 >> 0x10;
    if (uVar14 == uVar14 >> 0x10) {
      uVar19 = 1;
      uVar17 = uVar3;
    }
    else {
      uVar17 = uVar19 * uVar3;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
    uVar17 = (ulong)uVar14;
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar14 = 0;
      do {
        if (((uint)uVar17 == uVar19) && (*(int *)(*(long *)(lVar2 + lVar18 * 8) + 0x10) == param_1))
        {
          local_44 = 0;
          cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                   ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                  *)(this + 0xa68),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar13 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          uVar15 = *(undefined4 *)(*(long *)(lVar2 + (ulong)local_44 * 8) + 0x3c);
          goto LAB_00101dc2;
        }
        uVar14 = uVar14 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar16 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
        uVar17 = (ulong)uVar1;
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar1 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4
                                        ) + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar20, uVar14 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar15 = 0;
LAB_00101dc2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::is_slot_draw_stylebox(int) const */

undefined1 __thiscall GraphNode::is_slot_draw_stylebox(GraphNode *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(this + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
    uVar15 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar15 ^ uVar15 >> 0x10;
    if (uVar15 == uVar15 >> 0x10) {
      uVar19 = 1;
      uVar17 = uVar3;
    }
    else {
      uVar17 = uVar19 * uVar3;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar15 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
    uVar17 = (ulong)uVar15;
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar15 != 0) {
      uVar15 = 0;
      do {
        if (((uint)uVar17 == uVar19) && (*(int *)(*(long *)(lVar2 + lVar18 * 8) + 0x10) == param_1))
        {
          local_44 = 0;
          cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                   ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                  *)(this + 0xa68),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar13 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          uVar14 = *(undefined1 *)(*(long *)(lVar2 + (ulong)local_44 * 8) + 0x58);
          goto LAB_00101f62;
        }
        uVar15 = uVar15 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar16 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
        uVar17 = (ulong)uVar1;
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar1 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4
                                        ) + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar20, uVar15 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar14 = 0;
LAB_00101f62:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::get_slot_color_right(int) const */

undefined1  [16] __thiscall GraphNode::get_slot_color_right(GraphNode *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(this + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
    uVar14 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    uVar20 = uVar14 ^ uVar14 >> 0x10;
    if (uVar14 == uVar14 >> 0x10) {
      uVar20 = 1;
      uVar17 = uVar3;
    }
    else {
      uVar17 = uVar20 * uVar3;
    }
    uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar21;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
    uVar17 = (ulong)uVar14;
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar14 = 0;
      do {
        if (((uint)uVar17 == uVar20) && (*(int *)(*(long *)(lVar2 + lVar18 * 8) + 0x10) == param_1))
        {
          local_44 = 0;
          cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                   ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                  *)(this + 0xa68),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar13 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          lVar2 = *(long *)(lVar2 + (ulong)local_44 * 8);
          uVar19 = *(undefined8 *)(lVar2 + 0x40);
          uVar15 = *(undefined8 *)(lVar2 + 0x48);
          goto LAB_0010211d;
        }
        uVar14 = uVar14 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar16 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar21;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
        uVar17 = (ulong)uVar1;
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar1 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4
                                        ) + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, uVar14 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar19 = 0x3f8000003f800000;
  uVar15 = 0x3f8000003f800000;
LAB_0010211d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar22._8_8_ = uVar15;
    auVar22._0_8_ = uVar19;
    return auVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::get_slot_color_left(int) const */

undefined1  [16] __thiscall GraphNode::get_slot_color_left(GraphNode *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(this + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
    uVar14 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    uVar20 = uVar14 ^ uVar14 >> 0x10;
    if (uVar14 == uVar14 >> 0x10) {
      uVar20 = 1;
      uVar17 = uVar3;
    }
    else {
      uVar17 = uVar20 * uVar3;
    }
    uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar21;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
    uVar17 = (ulong)uVar14;
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar14 = 0;
      do {
        if (((uint)uVar17 == uVar20) && (*(int *)(*(long *)(lVar2 + lVar18 * 8) + 0x10) == param_1))
        {
          local_44 = 0;
          cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                   ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                  *)(this + 0xa68),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar13 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          lVar2 = *(long *)(lVar2 + (ulong)local_44 * 8);
          uVar19 = *(undefined8 *)(lVar2 + 0x20);
          uVar15 = *(undefined8 *)(lVar2 + 0x28);
          goto LAB_001022ed;
        }
        uVar14 = uVar14 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar16 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar21;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(this + 0xa78) + lVar18 * 4);
        uVar17 = (ulong)uVar1;
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar1 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4
                                        ) + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, uVar14 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar19 = 0x3f8000003f800000;
  uVar15 = 0x3f8000003f800000;
LAB_001022ed:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar22._8_8_ = uVar15;
    auVar22._0_8_ = uVar19;
    return auVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::get_minimum_size() const */

undefined8 __thiscall GraphNode::get_minimum_size(GraphNode *this)

{
  int iVar1;
  Object *pOVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  Object *pOVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  long in_FS_OFFSET;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float extraout_XMM0_Db;
  float local_a0;
  float local_9c;
  Object *local_98;
  Object *local_80;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  pOVar22 = *(Object **)(this + 0xaa8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = pOVar22;
  if (pOVar22 != (Object *)0x0) {
    cVar14 = RefCounted::reference();
    local_98 = (Object *)0x0;
    if (cVar14 != '\0') {
      local_98 = pOVar22;
    }
  }
  pOVar22 = *(Object **)(this + 0xab8);
  if ((pOVar22 != (Object *)0x0) && (cVar14 = RefCounted::reference(), cVar14 == '\0')) {
    pOVar22 = (Object *)0x0;
  }
  pOVar2 = *(Object **)(this + 0xac8);
  local_80 = pOVar2;
  if (pOVar2 != (Object *)0x0) {
    cVar14 = RefCounted::reference();
    local_80 = (Object *)0x0;
    if (cVar14 != '\0') {
      local_80 = pOVar2;
    }
  }
  iVar1 = *(int *)(this + 0xad0);
  uVar27 = (**(code **)(*(long *)pOVar22 + 0x1d0))(pOVar22);
  uVar28 = (**(code **)(**(long **)(this + 0xa30) + 0x2f8))();
  uVar21 = 0;
  local_a0 = (float)((ulong)uVar28 >> 0x20) + (float)((ulong)uVar27 >> 0x20);
  local_9c = (float)uVar27 + (float)uVar28;
  iVar15 = Node::get_child_count(SUB81(this,0));
  if (0 < iVar15) {
    do {
      uVar27 = Node::get_child((int)this,SUB41(uVar21,0));
      plVar17 = (long *)Container::as_sortable_control(this,uVar27,1);
      if (plVar17 != (long *)0x0) {
        local_48 = (**(code **)(*plVar17 + 0x300))(plVar17);
        local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
        fVar26 = (float)(**(code **)(*(long *)local_98 + 0x1d0))();
        lVar3 = *(long *)(this + 0xa70);
        iVar15 = (int)((float)(int)local_58 + fVar26);
        local_58 = CONCAT44(local_58._4_4_,iVar15);
        if ((lVar3 != 0) && (*(int *)(this + 0xa94) != 0)) {
          uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
          uVar16 = (uVar21 >> 0x10 ^ uVar21) * -0x7a143595;
          uVar16 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
          uVar25 = uVar16 ^ uVar16 >> 0x10;
          if (uVar16 == uVar16 >> 0x10) {
            uVar25 = 1;
            uVar19 = uVar4;
          }
          else {
            uVar19 = uVar25 * uVar4;
          }
          uVar23 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4)
                           );
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar23;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar19;
          lVar20 = SUB168(auVar5 * auVar9,8);
          uVar16 = *(uint *)(*(long *)(this + 0xa78) + lVar20 * 4);
          iVar18 = SUB164(auVar5 * auVar9,8);
          if (uVar16 != 0) {
            uVar24 = 0;
            while ((uVar25 != uVar16 || (*(uint *)(*(long *)(lVar3 + lVar20 * 8) + 0x10) != uVar21))
                  ) {
              uVar24 = uVar24 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (iVar18 + 1) * uVar4;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar23;
              lVar20 = SUB168(auVar6 * auVar10,8);
              uVar16 = *(uint *)(*(long *)(this + 0xa78) + lVar20 * 4);
              iVar18 = SUB164(auVar6 * auVar10,8);
              if ((uVar16 == 0) ||
                 (auVar7._8_8_ = 0, auVar7._0_8_ = uVar16 * uVar4, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar23, auVar8._8_8_ = 0,
                 auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0xa90) * 4) + iVar18) -
                                SUB164(auVar7 * auVar11,8)) * uVar4, auVar12._8_8_ = 0,
                 auVar12._0_8_ = uVar23, SUB164(auVar8 * auVar12,8) < uVar24)) goto LAB_00102665;
            }
            local_5c = 0;
            cVar14 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                     ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                    *)(this + 0xa68),(int *)(ulong)uVar21,&local_5c);
            if (cVar14 == '\0') {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar13 = (code *)invalidInstructionException();
              (*pcVar13)();
            }
            if (*(char *)(*(long *)(lVar3 + (ulong)local_5c * 8) + 0x58) == '\0') {
              local_50 = 0;
            }
            else {
              local_50 = (**(code **)(*(long *)local_80 + 0x1d0))();
            }
            local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
            Vector2i::operator+=((Vector2i *)&local_58,(Vector2 *)&local_48);
            iVar15 = (int)local_58;
          }
        }
LAB_00102665:
        local_a0 = local_a0 + (float)local_58._4_4_;
        if (local_9c <= (float)iVar15) {
          local_9c = (float)iVar15;
        }
        if (uVar21 != 0) {
          local_a0 = (float)iVar1 + local_a0;
        }
      }
      uVar21 = uVar21 + 1;
      iVar15 = Node::get_child_count(SUB81(this,0));
    } while ((int)uVar21 < iVar15);
  }
  (**(code **)(*(long *)local_98 + 0x1d0))();
  if (((local_80 != (Object *)0x0) && (cVar14 = RefCounted::unreference(), cVar14 != '\0')) &&
     (cVar14 = predelete_handler(local_80), cVar14 != '\0')) {
    (**(code **)(*(long *)local_80 + 0x140))(local_80);
    Memory::free_static(local_80,false);
  }
  cVar14 = RefCounted::unreference();
  if ((cVar14 != '\0') && (cVar14 = predelete_handler(pOVar22), cVar14 != '\0')) {
    (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
    Memory::free_static(pOVar22,false);
  }
  cVar14 = RefCounted::unreference();
  if ((cVar14 != '\0') && (cVar14 = predelete_handler(local_98), cVar14 != '\0')) {
    (**(code **)(*(long *)local_98 + 0x140))(local_98);
    Memory::free_static(local_98,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(extraout_XMM0_Db + local_a0,local_9c);
}



/* GraphNode::get_slot_custom_icon_left(int) const */

long * GraphNode::get_slot_custom_icon_left(int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  uint in_EDX;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  plVar19 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = *(long *)(in_RSI + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(in_RSI + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0xa90) * 8);
    uVar14 = (in_EDX >> 0x10 ^ in_EDX) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    uVar18 = uVar14 ^ uVar14 >> 0x10;
    if (uVar14 == uVar14 >> 0x10) {
      uVar18 = 1;
      uVar16 = uVar3;
    }
    else {
      uVar16 = uVar18 * uVar3;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(*(long *)(in_RSI + 0xa78) + lVar17 * 4);
    uVar16 = (ulong)uVar14;
    iVar15 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar14 = 0;
      while ((uVar18 != (uint)uVar16 || (*(uint *)(*(long *)(lVar2 + lVar17 * 8) + 0x10) != in_EDX))
            ) {
        uVar14 = uVar14 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar15 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(in_RSI + 0xa78) + lVar17 * 4);
        uVar16 = (ulong)uVar1;
        iVar15 = SUB164(auVar5 * auVar9,8);
        if ((uVar1 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = uVar16 * uVar3, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
           auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xa90) * 4)
                           + iVar15) - SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar20, SUB164(auVar7 * auVar11,8) < uVar14)) goto LAB_001029c0;
      }
      local_44 = 0;
      cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
               ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                              *)(in_RSI + 0xa68),(int *)(ulong)in_EDX,&local_44);
      if (cVar13 == '\0') {
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      lVar2 = *(long *)(lVar2 + (ulong)local_44 * 8);
      *plVar19 = 0;
      lVar2 = *(long *)(lVar2 + 0x30);
      if (lVar2 == 0) goto LAB_001029cc;
      *plVar19 = lVar2;
      cVar13 = RefCounted::reference();
      if (cVar13 != '\0') goto LAB_001029cc;
    }
  }
LAB_001029c0:
  *plVar19 = 0;
LAB_001029cc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar19;
}



/* GraphNode::get_slot_custom_icon_right(int) const */

long * GraphNode::get_slot_custom_icon_right(int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  uint in_EDX;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  plVar19 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = *(long *)(in_RSI + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(in_RSI + 0xa94) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0xa90) * 8);
    uVar14 = (in_EDX >> 0x10 ^ in_EDX) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    uVar18 = uVar14 ^ uVar14 >> 0x10;
    if (uVar14 == uVar14 >> 0x10) {
      uVar18 = 1;
      uVar16 = uVar3;
    }
    else {
      uVar16 = uVar18 * uVar3;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xa90) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(*(long *)(in_RSI + 0xa78) + lVar17 * 4);
    uVar16 = (ulong)uVar14;
    iVar15 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar14 = 0;
      while ((uVar18 != (uint)uVar16 || (*(uint *)(*(long *)(lVar2 + lVar17 * 8) + 0x10) != in_EDX))
            ) {
        uVar14 = uVar14 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar15 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(in_RSI + 0xa78) + lVar17 * 4);
        uVar16 = (ulong)uVar1;
        iVar15 = SUB164(auVar5 * auVar9,8);
        if ((uVar1 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = uVar16 * uVar3, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
           auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xa90) * 4)
                           + iVar15) - SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar20, SUB164(auVar7 * auVar11,8) < uVar14)) goto LAB_00102ba0;
      }
      local_44 = 0;
      cVar13 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
               ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                              *)(in_RSI + 0xa68),(int *)(ulong)in_EDX,&local_44);
      if (cVar13 == '\0') {
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      lVar2 = *(long *)(lVar2 + (ulong)local_44 * 8);
      *plVar19 = 0;
      lVar2 = *(long *)(lVar2 + 0x50);
      if (lVar2 == 0) goto LAB_00102bac;
      *plVar19 = lVar2;
      cVar13 = RefCounted::reference();
      if (cVar13 != '\0') goto LAB_00102bac;
    }
  }
LAB_00102ba0:
  *plVar19 = 0;
LAB_00102bac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar19;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GraphNode::GraphNode() */

void __thiscall GraphNode::GraphNode(GraphNode *this)

{
  StringName *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  BoxContainer *this_00;
  Label *this_01;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Container::Container((Container *)this);
  *(undefined ***)this = &PTR__initialize_classv_00121308;
  *(undefined2 *)(this + 0xaf8) = 1;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  uVar3 = _UNK_00122048;
  uVar2 = __LC34;
  *(undefined4 *)(this + 0xa00) = 0x1000000;
  this[0xa04] = (GraphNode)0x1;
  *(undefined8 *)(this + 0xa08) = 0;
  *(undefined8 *)(this + 0xa10) = 0;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa50) = 0;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xa90) = 2;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined8 *)(this + 0xae8) = uVar2;
  *(undefined8 *)(this + 0xaf0) = uVar3;
  StringName::StringName((StringName *)(this + 0xb00),"_draw_port",false);
  this[0xb08] = (GraphNode)0x0;
  *(undefined8 *)(this + 0xb10) = 0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00120f90;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0xa30) = this_00;
  Control::set_h_size_flags(this_00,3);
  Node::add_child(this,*(undefined8 *)(this + 0xa30),0,1);
  this_01 = (Label *)operator_new(0xad8,"");
  local_28 = 0;
  Label::Label(this_01,(String *)&local_28);
  postinitialize_handler((Object *)this_01);
  *(Label **)(this + 0xa38) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  pSVar1 = *(StringName **)(this + 0xa38);
  StringName::StringName((StringName *)&local_28,"GraphNodeTitleLabel",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa38),3);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa38),0,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::set_mouse_filter(this,0);
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



/* GraphNode::get_title() const */

void GraphNode::get_title(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xa40) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xa40));
  }
  return;
}



/* GraphNode::set_title(String const&) */

void __thiscall GraphNode::set_title(GraphNode *this,String *param_1)

{
  char cVar1;
  
  cVar1 = String::operator==((String *)(this + 0xa40),param_1);
  if (cVar1 != '\0') {
    return;
  }
  if (*(long *)(this + 0xa40) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa40),(CowData *)param_1);
  }
  if (*(String **)(this + 0xa38) != (String *)0x0) {
    Label::set_text(*(String **)(this + 0xa38));
  }
  Control::update_minimum_size();
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



/* GraphNode::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall GraphNode::_get_property_list(GraphNode *this,List *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_b0;
  String local_a8 [8];
  undefined8 local_a0;
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
  local_b0 = 0;
  do {
    iVar1 = Node::get_child_count(SUB81(this,0));
    if (iVar1 <= local_b0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar2 = Node::get_child((int)this,SUB41(local_b0,0));
    lVar3 = Container::as_sortable_control(this,uVar2,2);
    if (lVar3 != 0) {
      local_80 = 0;
      local_70 = 1;
      local_78 = "/";
      String::parse_latin1((StrRange *)&local_80);
      itos((long)&local_88);
      operator+((char *)&local_78,(String *)"slot/");
      String::operator+(local_a8,(String *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_78 = "";
      local_88 = 0;
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "left_enabled";
      local_a0 = 0;
      local_70 = 0xc;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,1);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103ed3:
        local_50 = 6;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00103ed3;
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
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "left_type";
      local_a0 = 0;
      local_70 = 9;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,2);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103e87:
        local_50 = 6;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00103e87;
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
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "left_color";
      local_a0 = 0;
      local_70 = 10;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,0x14);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103f5b:
        local_50 = 6;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00103f5b;
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
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "Texture2D";
      local_90 = 0;
      local_70 = 9;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "left_icon";
      local_a0 = 0;
      local_70 = 9;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0x11;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103f7b:
        local_50 = 0x2006;
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
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 0x2006;
        if (local_60 == 0x11) goto LAB_00103f7b;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "right_enabled";
      local_a0 = 0;
      local_70 = 0xd;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,1);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103f3b:
        local_50 = 6;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00103f3b;
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
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "right_type";
      local_a0 = 0;
      local_70 = 10;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,2);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103f1b:
        local_50 = 6;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00103f1b;
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
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "right_color";
      local_a0 = 0;
      local_70 = 0xb;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,0x14);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103efb:
        local_50 = 6;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00103efb;
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
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "Texture2D";
      local_90 = 0;
      local_70 = 9;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "right_icon";
      local_a0 = 0;
      local_70 = 10;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0x11;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103fc3:
        local_50 = 0x2006;
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
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 0x2006;
        if (local_60 == 0x11) goto LAB_00103fc3;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "draw_stylebox";
      local_a0 = 0;
      local_70 = 0xd;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,1);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00103eab:
        local_50 = 6;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00103eab;
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
      }
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    }
    local_b0 = local_b0 + 1;
  } while( true );
}



/* GraphNode::_get(StringName const&, Variant&) const */

undefined4 __thiscall GraphNode::_get(GraphNode *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  Variant *local_d8;
  uint local_c4;
  undefined8 local_c0;
  long local_b8;
  CowData<char32_t> local_b0 [8];
  int local_a8 [8];
  undefined1 local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  Object *local_70;
  undefined1 local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  Object *local_50;
  undefined1 local_48;
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = 0;
    if (*(char **)(lVar1 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(lVar1 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_c0,*(char **)(lVar1 + 8));
    }
  }
  uVar3 = String::begins_with((char *)&local_c0);
  if ((char)uVar3 == '\0') goto LAB_00104370;
  iVar7 = (int)(CowData<char32_t> *)&local_c0;
  String::get_slice((char *)local_b0,iVar7);
  uVar4 = String::to_int();
  local_c4 = uVar4;
  CowData<char32_t>::_unref(local_b0);
  String::get_slice((char *)local_b0,iVar7);
  StringName::StringName((StringName *)&local_b8,(String *)local_b0,false);
  CowData<char32_t>::_unref(local_b0);
  local_88 = 0;
  local_68 = 0;
  local_84 = 0;
  local_70 = (Object *)0x0;
  local_64 = 0;
  local_50 = (Object *)0x0;
  local_48 = 1;
  local_80 = CONCAT44(_LC63,_LC63);
  uStack_78 = CONCAT44(_LC63,_LC63);
  local_60 = CONCAT44(_LC63,_LC63);
  uStack_58 = CONCAT44(_LC63,_LC63);
  cVar2 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
          ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                         *)(this + 0xa68),(int *)(ulong)uVar4,(uint *)local_b0);
  if (cVar2 != '\0') {
    puVar5 = (undefined1 *)
             HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                           *)(this + 0xa68),(int *)&local_c4);
    local_88 = *puVar5;
    local_80 = *(undefined8 *)(puVar5 + 8);
    uStack_78 = *(undefined8 *)(puVar5 + 0x10);
    local_84 = *(int *)(puVar5 + 4);
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_70,*(Ref **)(puVar5 + 0x18));
    local_68 = puVar5[0x20];
    local_60 = *(undefined8 *)(puVar5 + 0x28);
    uStack_58 = *(undefined8 *)(puVar5 + 0x30);
    local_64 = *(int *)(puVar5 + 0x24);
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_50,*(Ref **)(puVar5 + 0x38));
    local_48 = puVar5[0x40];
  }
  cVar2 = StringName::operator==((StringName *)&local_b8,"left_enabled");
  uVar6 = local_88;
  if (cVar2 == '\0') {
    cVar2 = StringName::operator==((StringName *)&local_b8,"left_type");
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_a8,local_84);
      goto LAB_00104325;
    }
    cVar2 = StringName::operator==((StringName *)&local_b8,"left_color");
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_a8,(Color *)&local_80);
      goto LAB_00104325;
    }
    cVar2 = StringName::operator==((StringName *)&local_b8,"left_icon");
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_a8,local_70);
      goto LAB_00104325;
    }
    cVar2 = StringName::operator==((StringName *)&local_b8,"right_enabled");
    uVar6 = local_68;
    if (cVar2 != '\0') goto LAB_00104314;
    cVar2 = StringName::operator==((StringName *)&local_b8,"right_type");
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_a8,local_64);
      goto LAB_00104325;
    }
    cVar2 = StringName::operator==((StringName *)&local_b8,"right_color");
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_a8,(Color *)&local_60);
      goto LAB_00104325;
    }
    cVar2 = StringName::operator==((StringName *)&local_b8,"right_icon");
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_a8,local_50);
      goto LAB_00104325;
    }
    cVar2 = StringName::operator==((StringName *)&local_b8,"draw_stylebox");
    uVar6 = local_48;
    if (cVar2 != '\0') goto LAB_00104314;
    uVar3 = 0;
  }
  else {
LAB_00104314:
    Variant::Variant((Variant *)local_a8,(bool)uVar6);
LAB_00104325:
    local_d8 = (Variant *)local_a8;
    Variant::operator=(param_2,local_d8);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
LAB_00104370:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* GraphNode::set_slot(int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool) */

void __thiscall
GraphNode::set_slot(GraphNode *this,int param_1,bool param_2,int param_3,Color *param_4,bool param_5
                   ,int param_6,Color *param_7,Ref *param_8,Ref *param_9,bool param_10)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  int local_9c;
  undefined8 local_98;
  String local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = param_1;
  if (param_1 < 0) {
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Cannot set slot with index (%d) lesser than zero.");
    vformat<int>(local_90,(int)(String *)&local_98);
    _err_print_error("set_slot","scene/gui/graph_node.cpp",0x17f,
                     "Condition \"p_slot_index < 0\" is true.",local_90,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    goto LAB_0010483a;
  }
  pOVar5 = *(Object **)param_8;
  if ((((param_2) || (param_3 != 0)) || (_LC63 != *(float *)param_4)) ||
     (((((_LC63 != *(float *)(param_4 + 4) || (_LC63 != *(float *)(param_4 + 8))) ||
        ((_LC63 != *(float *)(param_4 + 0xc) || ((param_5 || (param_6 != 0)))))) ||
       (_LC63 != *(float *)param_7)) ||
      (((_LC63 != *(float *)(param_7 + 4) || (_LC63 != *(float *)(param_7 + 8))) ||
       (_LC63 != *(float *)(param_7 + 0xc))))))) {
    local_80 = *(undefined8 *)param_4;
    uStack_78 = *(undefined8 *)(param_4 + 8);
    local_60 = *(undefined8 *)param_7;
    uStack_58 = *(undefined8 *)(param_7 + 8);
    if (pOVar5 != (Object *)0x0) goto LAB_001046e8;
LAB_001046fb:
    pOVar6 = *(Object **)param_9;
    if (pOVar6 != (Object *)0x0) goto LAB_00104704;
  }
  else {
    if (pOVar5 != (Object *)0x0) {
      local_80 = *(undefined8 *)param_4;
      uStack_78 = *(undefined8 *)(param_4 + 8);
      local_60 = *(undefined8 *)param_7;
      uStack_58 = *(undefined8 *)(param_7 + 8);
LAB_001046e8:
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar5 = (Object *)0x0;
      }
      goto LAB_001046fb;
    }
    pOVar6 = *(Object **)param_9;
    if (pOVar6 == (Object *)0x0) {
      HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
      ::erase((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
               *)(this + 0xa68),&local_9c);
      goto LAB_0010483a;
    }
    local_80 = *(undefined8 *)param_4;
    uStack_78 = *(undefined8 *)(param_4 + 8);
    local_60 = *(undefined8 *)param_7;
    uStack_58 = *(undefined8 *)(param_7 + 8);
LAB_00104704:
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar6 = (Object *)0x0;
    }
  }
  lVar4 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
          ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                        *)(this + 0xa68),&local_9c);
  *(bool *)lVar4 = param_2;
  pOVar1 = *(Object **)(lVar4 + 0x18);
  *(undefined8 *)(lVar4 + 8) = local_80;
  *(undefined8 *)(lVar4 + 0x10) = uStack_78;
  *(int *)(lVar4 + 4) = param_3;
  if (pOVar1 != pOVar5) {
    *(Object **)(lVar4 + 0x18) = pOVar5;
    if ((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(lVar4 + 0x18) = 0;
    }
    if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  pOVar1 = *(Object **)(lVar4 + 0x38);
  *(bool *)(lVar4 + 0x20) = param_5;
  *(undefined8 *)(lVar4 + 0x28) = local_60;
  *(undefined8 *)(lVar4 + 0x30) = uStack_58;
  *(int *)(lVar4 + 0x24) = param_6;
  if (pOVar1 != pOVar6) {
    *(Object **)(lVar4 + 0x38) = pOVar6;
    if ((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(lVar4 + 0x38) = 0;
    }
    if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  *(bool *)(lVar4 + 0x40) = param_10;
  CanvasItem::queue_redraw();
  this[0xaf8] = (GraphNode)0x1;
  if ((set_slot(int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool)
       ::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&set_slot(int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool)
                                   ::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
    _scs_create((char *)&set_slot(int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &set_slot(int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&set_slot(int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool)
                         ::{lambda()#1}::operator()()::sname);
  }
  Object::emit_signal<int>
            ((Object *)this,
             (StringName *)
             &set_slot(int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool)
              ::{lambda()#1}::operator()()::sname,param_1);
  if (((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_0010483a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::set_slot_enabled_left(int, bool) */

void __thiscall GraphNode::set_slot_enabled_left(GraphNode *this,int param_1,bool param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  String local_80 [8];
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = param_1;
  if (param_1 < 0) {
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Cannot set enable_left for the slot with index (%d) lesser than zero.");
    vformat<int>(local_80,(int)(String *)&local_88);
    _err_print_error("set_slot_enabled_left","scene/gui/graph_node.cpp",0x1ad,
                     "Condition \"p_slot_index < 0\" is true.",local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    pcVar2 = (char *)HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                     ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                   *)(this + 0xa68),&local_8c);
    if ((bool)*pcVar2 != param_2) {
      uVar3 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
              ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                            *)(this + 0xa68),&local_8c);
      *(bool *)uVar3 = param_2;
      CanvasItem::queue_redraw();
      this[0xaf8] = (GraphNode)0x1;
      if (set_slot_enabled_left(int,bool)::{lambda()#1}::operator()()::sname == '\0') {
        iVar1 = __cxa_guard_acquire(&set_slot_enabled_left(int,bool)::{lambda()#1}::operator()()::
                                     sname);
        if (iVar1 != 0) {
          _scs_create((char *)&set_slot_enabled_left(int,bool)::{lambda()#1}::operator()()::sname,
                      true);
          __cxa_atexit(StringName::~StringName,
                       &set_slot_enabled_left(int,bool)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&set_slot_enabled_left(int,bool)::{lambda()#1}::operator()()::sname);
        }
      }
      Variant::Variant((Variant *)local_68,param_1);
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_78[0] = (Variant *)local_68;
      (**(code **)(*(long *)this + 0xd0))
                (this,&set_slot_enabled_left(int,bool)::{lambda()#1}::operator()()::sname,local_78,1
                );
      if (Variant::needs_deinit[(int)local_50] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::set_slot_type_left(int, int) */

void __thiscall GraphNode::set_slot_type_left(GraphNode *this,int param_1,int param_2)

{
  HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
  *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  String local_80 [8];
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  this_00 = (HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             *)(this + 0xa68);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = param_1;
  cVar1 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
          ::_lookup_pos(this_00,(int *)CONCAT44(in_register_00000034,param_1),(uint *)local_80);
  if (cVar1 == '\0') {
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Cannot set type_left for the slot with index \'%d\' because it hasn\'t been enabled."
              );
    vformat<int>(local_80,(int)(String *)&local_88);
    _err_print_error("set_slot_type_left","scene/gui/graph_node.cpp",0x1bb,
                     "Condition \"!slot_table.has(p_slot_index)\" is true.",local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    lVar3 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
            ::operator[](this_00,&local_8c);
    if (*(int *)(lVar3 + 4) != param_2) {
      lVar3 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
              ::operator[](this_00,&local_8c);
      *(int *)(lVar3 + 4) = param_2;
      CanvasItem::queue_redraw();
      this[0xaf8] = (GraphNode)0x1;
      if (set_slot_type_left(int,int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar2 = __cxa_guard_acquire(&set_slot_type_left(int,int)::{lambda()#1}::operator()()::sname)
        ;
        if (iVar2 != 0) {
          _scs_create((char *)&set_slot_type_left(int,int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &set_slot_type_left(int,int)::{lambda()#1}::operator()()::sname,&__dso_handle
                      );
          __cxa_guard_release(&set_slot_type_left(int,int)::{lambda()#1}::operator()()::sname);
        }
      }
      Variant::Variant((Variant *)local_68,param_1);
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_78[0] = (Variant *)local_68;
      (**(code **)(*(long *)this + 0xd0))
                (this,&set_slot_type_left(int,int)::{lambda()#1}::operator()()::sname,local_78,1);
      if (Variant::needs_deinit[(int)local_50] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::set_slot_color_left(int, Color const&) */

void __thiscall GraphNode::set_slot_color_left(GraphNode *this,int param_1,Color *param_2)

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
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  int local_5c [3];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c[0] = param_1;
  if ((*(long *)(this + 0xa70) != 0) && (*(int *)(this + 0xa94) != 0)) {
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
    uVar11 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar17 = 1;
      uVar13 = uVar1;
    }
    else {
      uVar13 = uVar17 * uVar1;
    }
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar15;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar13;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar11 = *(uint *)(*(long *)(this + 0xa78) + lVar14 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar11 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar17) &&
           (param_1 == *(int *)(*(long *)(*(long *)(this + 0xa70) + lVar14 * 8) + 0x10))) {
          lVar14 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                   ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                 *)(this + 0xa68),local_5c);
          if ((*(float *)(lVar14 + 8) != *(float *)param_2) ||
             (((*(float *)(lVar14 + 0xc) != *(float *)(param_2 + 4) ||
               (*(float *)(lVar14 + 0x10) != *(float *)(param_2 + 8))) ||
              (*(float *)(lVar14 + 0x14) != *(float *)(param_2 + 0xc))))) {
            lVar14 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                     ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                   *)(this + 0xa68),local_5c);
            uVar10 = *(undefined8 *)(param_2 + 8);
            *(undefined8 *)(lVar14 + 8) = *(undefined8 *)param_2;
            *(undefined8 *)(lVar14 + 0x10) = uVar10;
            CanvasItem::queue_redraw();
            this[0xaf8] = (GraphNode)0x1;
            if ((set_slot_color_left(int,Color_const&)::{lambda()#1}::operator()()::sname == '\0')
               && (iVar12 = __cxa_guard_acquire(&set_slot_color_left(int,Color_const&)::{lambda()#1}
                                                 ::operator()()::sname), iVar12 != 0)) {
              _scs_create((char *)&set_slot_color_left(int,Color_const&)::{lambda()#1}::operator()()
                                   ::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &set_slot_color_left(int,Color_const&)::{lambda()#1}::operator()()::sname
                           ,&__dso_handle);
              __cxa_guard_release(&set_slot_color_left(int,Color_const&)::{lambda()#1}::operator()()
                                   ::sname);
            }
            Object::emit_signal<int>
                      ((Object *)this,
                       (StringName *)
                       &set_slot_color_left(int,Color_const&)::{lambda()#1}::operator()()::sname,
                       param_1);
          }
          goto LAB_00105035;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (iVar12 + 1) * uVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar11 = *(uint *)(*(long *)(this + 0xa78) + lVar14 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar11 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar11 * uVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
              auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4
                                        ) + iVar12) - SUB164(auVar4 * auVar8,8)) * uVar1,
              auVar9._8_8_ = 0, auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  local_50 = 0;
  String::parse_latin1
            ((String *)&local_50,
             "Cannot set color_left for the slot with index \'%d\' because it hasn\'t been enabled."
            );
  vformat<int>(local_48,(int)(String *)&local_50);
  _err_print_error("set_slot_color_left","scene/gui/graph_node.cpp",0x1d0,
                   "Condition \"!slot_table.has(p_slot_index)\" is true.",local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00105035:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::set_slot_custom_icon_left(int, Ref<Texture2D> const&) */

void __thiscall GraphNode::set_slot_custom_icon_left(GraphNode *this,int param_1,Ref *param_2)

{
  HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
  *this_00;
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  String local_80 [8];
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  this_00 = (HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             *)(this + 0xa68);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = param_1;
  cVar3 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
          ::_lookup_pos(this_00,(int *)CONCAT44(in_register_00000034,param_1),(uint *)local_80);
  if (cVar3 == '\0') {
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Cannot set custom_port_icon_left for the slot with index \'%d\' because it hasn\'t been enabled."
              );
    vformat<int>(local_80,(int)(String *)&local_88);
    _err_print_error("set_slot_custom_icon_left","scene/gui/graph_node.cpp",0x1e5,
                     "Condition \"!slot_table.has(p_slot_index)\" is true.",local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    lVar5 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
            ::operator[](this_00,&local_8c);
    if (*(long *)(lVar5 + 0x18) != *(long *)param_2) {
      lVar5 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
              ::operator[](this_00,&local_8c);
      pOVar1 = *(Object **)param_2;
      pOVar2 = *(Object **)(lVar5 + 0x18);
      if (pOVar1 != pOVar2) {
        *(Object **)(lVar5 + 0x18) = pOVar1;
        if (pOVar1 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(lVar5 + 0x18) = 0;
          }
        }
        if (pOVar2 != (Object *)0x0) {
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
      CanvasItem::queue_redraw();
      this[0xaf8] = (GraphNode)0x1;
      if (set_slot_custom_icon_left(int,Ref<Texture2D>const&)::{lambda()#1}::operator()()::sname ==
          '\0') {
        iVar4 = __cxa_guard_acquire(&set_slot_custom_icon_left(int,Ref<Texture2D>const&)::
                                     {lambda()#1}::operator()()::sname);
        if (iVar4 != 0) {
          _scs_create((char *)&set_slot_custom_icon_left(int,Ref<Texture2D>const&)::{lambda()#1}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &set_slot_custom_icon_left(int,Ref<Texture2D>const&)::{lambda()#1}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&set_slot_custom_icon_left(int,Ref<Texture2D>const&)::{lambda()#1}::
                               operator()()::sname);
        }
      }
      Variant::Variant((Variant *)local_68,param_1);
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_78[0] = (Variant *)local_68;
      (**(code **)(*(long *)this + 0xd0))
                (this,&set_slot_custom_icon_left(int,Ref<Texture2D>const&)::{lambda()#1}::
                       operator()()::sname,local_78,1);
      if (Variant::needs_deinit[(int)local_50] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::set_slot_enabled_right(int, bool) */

void __thiscall GraphNode::set_slot_enabled_right(GraphNode *this,int param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  String local_80 [8];
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = param_1;
  if (param_1 < 0) {
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Cannot set enable_right for the slot with index (%d) lesser than zero.");
    vformat<int>(local_80,(int)(String *)&local_88);
    _err_print_error("set_slot_enabled_right","scene/gui/graph_node.cpp",0x201,
                     "Condition \"p_slot_index < 0\" is true.",local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    lVar2 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
            ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                          *)(this + 0xa68),&local_8c);
    if ((bool)*(char *)(lVar2 + 0x20) != param_2) {
      lVar2 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
              ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                            *)(this + 0xa68),&local_8c);
      *(bool *)(lVar2 + 0x20) = param_2;
      CanvasItem::queue_redraw();
      this[0xaf8] = (GraphNode)0x1;
      if (set_slot_enabled_right(int,bool)::{lambda()#1}::operator()()::sname == '\0') {
        iVar1 = __cxa_guard_acquire(&set_slot_enabled_right(int,bool)::{lambda()#1}::operator()()::
                                     sname);
        if (iVar1 != 0) {
          _scs_create((char *)&set_slot_enabled_right(int,bool)::{lambda()#1}::operator()()::sname,
                      true);
          __cxa_atexit(StringName::~StringName,
                       &set_slot_enabled_right(int,bool)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&set_slot_enabled_right(int,bool)::{lambda()#1}::operator()()::sname);
        }
      }
      Variant::Variant((Variant *)local_68,param_1);
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_78[0] = (Variant *)local_68;
      (**(code **)(*(long *)this + 0xd0))
                (this,&set_slot_enabled_right(int,bool)::{lambda()#1}::operator()()::sname,local_78,
                 1);
      if (Variant::needs_deinit[(int)local_50] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::set_slot_type_right(int, int) */

void __thiscall GraphNode::set_slot_type_right(GraphNode *this,int param_1,int param_2)

{
  HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
  *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  String local_80 [8];
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  this_00 = (HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             *)(this + 0xa68);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = param_1;
  cVar1 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
          ::_lookup_pos(this_00,(int *)CONCAT44(in_register_00000034,param_1),(uint *)local_80);
  if (cVar1 == '\0') {
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Cannot set type_right for the slot with index \'%d\' because it hasn\'t been enabled."
              );
    vformat<int>(local_80,(int)(String *)&local_88);
    _err_print_error("set_slot_type_right","scene/gui/graph_node.cpp",0x20f,
                     "Condition \"!slot_table.has(p_slot_index)\" is true.",local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    lVar3 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
            ::operator[](this_00,&local_8c);
    if (*(int *)(lVar3 + 0x24) != param_2) {
      lVar3 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
              ::operator[](this_00,&local_8c);
      *(int *)(lVar3 + 0x24) = param_2;
      CanvasItem::queue_redraw();
      this[0xaf8] = (GraphNode)0x1;
      if (set_slot_type_right(int,int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar2 = __cxa_guard_acquire(&set_slot_type_right(int,int)::{lambda()#1}::operator()()::sname
                                   );
        if (iVar2 != 0) {
          _scs_create((char *)&set_slot_type_right(int,int)::{lambda()#1}::operator()()::sname,true)
          ;
          __cxa_atexit(StringName::~StringName,
                       &set_slot_type_right(int,int)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&set_slot_type_right(int,int)::{lambda()#1}::operator()()::sname);
        }
      }
      Variant::Variant((Variant *)local_68,param_1);
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_78[0] = (Variant *)local_68;
      (**(code **)(*(long *)this + 0xd0))
                (this,&set_slot_type_right(int,int)::{lambda()#1}::operator()()::sname,local_78,1);
      if (Variant::needs_deinit[(int)local_50] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::set_slot_color_right(int, Color const&) */

void __thiscall GraphNode::set_slot_color_right(GraphNode *this,int param_1,Color *param_2)

{
  HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
  *this_00;
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  int local_4c [3];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  this_00 = (HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             *)(this + 0xa68);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c[0] = param_1;
  cVar2 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
          ::_lookup_pos(this_00,(int *)CONCAT44(in_register_00000034,param_1),(uint *)local_38);
  if (cVar2 == '\0') {
    local_40 = 0;
    String::parse_latin1
              ((String *)&local_40,
               "Cannot set color_right for the slot with index \'%d\' because it hasn\'t been enabled."
              );
    vformat<int>(local_38,(int)(String *)&local_40);
    _err_print_error("set_slot_color_right","scene/gui/graph_node.cpp",0x224,
                     "Condition \"!slot_table.has(p_slot_index)\" is true.",local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  else {
    lVar4 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
            ::operator[](this_00,local_4c);
    if ((((*(float *)(lVar4 + 0x28) != *(float *)param_2) ||
         (*(float *)(lVar4 + 0x2c) != *(float *)(param_2 + 4))) ||
        (*(float *)(lVar4 + 0x30) != *(float *)(param_2 + 8))) ||
       (*(float *)(lVar4 + 0x34) != *(float *)(param_2 + 0xc))) {
      lVar4 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
              ::operator[](this_00,local_4c);
      uVar1 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)param_2;
      *(undefined8 *)(lVar4 + 0x30) = uVar1;
      CanvasItem::queue_redraw();
      this[0xaf8] = (GraphNode)0x1;
      if ((set_slot_color_right(int,Color_const&)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar3 = __cxa_guard_acquire(&set_slot_color_right(int,Color_const&)::{lambda()#1}::
                                       operator()()::sname), iVar3 != 0)) {
        _scs_create((char *)&set_slot_color_right(int,Color_const&)::{lambda()#1}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_slot_color_right(int,Color_const&)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&set_slot_color_right(int,Color_const&)::{lambda()#1}::operator()()::
                             sname);
      }
      Object::emit_signal<int>
                ((Object *)this,
                 (StringName *)
                 &set_slot_color_right(int,Color_const&)::{lambda()#1}::operator()()::sname,param_1)
      ;
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GraphNode::set_slot_custom_icon_right(int, Ref<Texture2D> const&) */

void __thiscall GraphNode::set_slot_custom_icon_right(GraphNode *this,int param_1,Ref *param_2)

{
  HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
  *this_00;
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  String local_80 [8];
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  this_00 = (HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             *)(this + 0xa68);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = param_1;
  cVar3 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
          ::_lookup_pos(this_00,(int *)CONCAT44(in_register_00000034,param_1),(uint *)local_80);
  if (cVar3 == '\0') {
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Cannot set custom_port_icon_right for the slot with index \'%d\' because it hasn\'t been enabled."
              );
    vformat<int>(local_80,(int)(String *)&local_88);
    _err_print_error("set_slot_custom_icon_right","scene/gui/graph_node.cpp",0x239,
                     "Condition \"!slot_table.has(p_slot_index)\" is true.",local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    lVar5 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
            ::operator[](this_00,&local_8c);
    if (*(long *)(lVar5 + 0x38) != *(long *)param_2) {
      lVar5 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
              ::operator[](this_00,&local_8c);
      pOVar1 = *(Object **)param_2;
      pOVar2 = *(Object **)(lVar5 + 0x38);
      if (pOVar1 != pOVar2) {
        *(Object **)(lVar5 + 0x38) = pOVar1;
        if (pOVar1 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(lVar5 + 0x38) = 0;
          }
        }
        if (pOVar2 != (Object *)0x0) {
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
      CanvasItem::queue_redraw();
      this[0xaf8] = (GraphNode)0x1;
      if (set_slot_custom_icon_right(int,Ref<Texture2D>const&)::{lambda()#1}::operator()()::sname ==
          '\0') {
        iVar4 = __cxa_guard_acquire(&set_slot_custom_icon_right(int,Ref<Texture2D>const&)::
                                     {lambda()#1}::operator()()::sname);
        if (iVar4 != 0) {
          _scs_create((char *)&set_slot_custom_icon_right(int,Ref<Texture2D>const&)::{lambda()#1}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &set_slot_custom_icon_right(int,Ref<Texture2D>const&)::{lambda()#1}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&set_slot_custom_icon_right(int,Ref<Texture2D>const&)::{lambda()#1}::
                               operator()()::sname);
        }
      }
      Variant::Variant((Variant *)local_68,param_1);
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_78[0] = (Variant *)local_68;
      (**(code **)(*(long *)this + 0xd0))
                (this,&set_slot_custom_icon_right(int,Ref<Texture2D>const&)::{lambda()#1}::
                       operator()()::sname,local_78,1);
      if (Variant::needs_deinit[(int)local_50] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::set_slot_draw_stylebox(int, bool) */

void __thiscall GraphNode::set_slot_draw_stylebox(GraphNode *this,int param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  String local_80 [8];
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = param_1;
  if (param_1 < 0) {
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Cannot set draw_stylebox for the slot with p_index (%d) lesser than zero.");
    vformat<int>(local_80,(int)(String *)&local_88);
    _err_print_error("set_slot_draw_stylebox","scene/gui/graph_node.cpp",0x255,
                     "Condition \"p_slot_index < 0\" is true.",local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    lVar2 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
            ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                          *)(this + 0xa68),&local_8c);
    *(bool *)(lVar2 + 0x40) = param_2;
    CanvasItem::queue_redraw();
    this[0xaf8] = (GraphNode)0x1;
    if (set_slot_draw_stylebox(int,bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar1 = __cxa_guard_acquire(&set_slot_draw_stylebox(int,bool)::{lambda()#1}::operator()()::
                                   sname);
      if (iVar1 != 0) {
        _scs_create((char *)&set_slot_draw_stylebox(int,bool)::{lambda()#1}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &set_slot_draw_stylebox(int,bool)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&set_slot_draw_stylebox(int,bool)::{lambda()#1}::operator()()::sname);
      }
    }
    Variant::Variant((Variant *)local_68,param_1);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))
              (this,&set_slot_draw_stylebox(int,bool)::{lambda()#1}::operator()()::sname,local_78,1)
    ;
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::_set(StringName const&, Variant const&) */

undefined4 __thiscall GraphNode::_set(GraphNode *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  Object *pOVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  char *local_98;
  size_t local_90;
  bool local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  bool local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  Object *local_50;
  bool local_48;
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_a0 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_a0 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_90 = strlen(__s);
      local_98 = __s;
      String::parse_latin1((StrRange *)&local_a0);
    }
  }
  uVar4 = String::begins_with((char *)&local_a0);
  if ((char)uVar4 == '\0') goto LAB_00105ffc;
  iVar7 = (int)(CowData<char32_t> *)&local_a0;
  String::get_slice((char *)&local_98,iVar7);
  uVar5 = String::to_int();
  local_a8 = uVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  String::get_slice((char *)&local_98,iVar7);
  local_88 = false;
  local_84 = 0;
  local_70 = 0;
  local_68 = false;
  local_64 = 0;
  local_50 = (Object *)0x0;
  local_48 = true;
  local_80 = CONCAT44(_LC63,_LC63);
  uStack_78 = CONCAT44(_LC63,_LC63);
  local_60 = CONCAT44(_LC63,_LC63);
  uStack_58 = CONCAT44(_LC63,_LC63);
  cVar3 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
          ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                         *)(this + 0xa68),(int *)(ulong)uVar5,&local_a4);
  if (cVar3 != '\0') {
    puVar6 = (undefined1 *)
             HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                           *)(this + 0xa68),(int *)&local_a8);
    local_88 = (bool)*puVar6;
    local_80 = *(undefined8 *)(puVar6 + 8);
    uStack_78 = *(undefined8 *)(puVar6 + 0x10);
    local_84 = *(int *)(puVar6 + 4);
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_70,*(Ref **)(puVar6 + 0x18));
    local_68 = (bool)puVar6[0x20];
    local_60 = *(undefined8 *)(puVar6 + 0x28);
    uStack_58 = *(undefined8 *)(puVar6 + 0x30);
    local_64 = *(int *)(puVar6 + 0x24);
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_50,*(Ref **)(puVar6 + 0x38));
    local_48 = (bool)puVar6[0x40];
  }
  cVar3 = String::operator==((String *)&local_98,"left_enabled");
  if (cVar3 == '\0') {
    cVar3 = String::operator==((String *)&local_98,"left_type");
    if (cVar3 != '\0') {
      local_84 = Variant::operator_cast_to_int(param_2);
      goto LAB_00105f9e;
    }
    cVar3 = String::operator==((String *)&local_98,"left_icon");
    if (cVar3 != '\0') {
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_70,param_2);
      goto LAB_00105f9e;
    }
    cVar3 = String::operator==((String *)&local_98,"left_color");
    if (cVar3 != '\0') {
      local_80 = Variant::operator_cast_to_Color(param_2);
      uStack_78 = in_XMM1_Qa;
      goto LAB_00105f9e;
    }
    cVar3 = String::operator==((String *)&local_98,"right_enabled");
    if (cVar3 != '\0') {
      local_68 = Variant::operator_cast_to_bool(param_2);
      goto LAB_00105f9e;
    }
    cVar3 = String::operator==((String *)&local_98,"right_type");
    if (cVar3 != '\0') {
      local_64 = Variant::operator_cast_to_int(param_2);
      goto LAB_00105f9e;
    }
    cVar3 = String::operator==((String *)&local_98,"right_color");
    if (cVar3 != '\0') {
      local_60 = Variant::operator_cast_to_Color(param_2);
      uStack_58 = in_XMM1_Qa;
      goto LAB_00105f9e;
    }
    cVar3 = String::operator==((String *)&local_98,"right_icon");
    if (cVar3 != '\0') {
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_50,param_2);
      goto LAB_00105f9e;
    }
    cVar3 = String::operator==((String *)&local_98,"draw_stylebox");
    if (cVar3 != '\0') {
      local_48 = Variant::operator_cast_to_bool(param_2);
      goto LAB_00105f9e;
    }
    uVar4 = 0;
  }
  else {
    local_88 = Variant::operator_cast_to_bool(param_2);
LAB_00105f9e:
    set_slot(this,uVar5,local_88,local_84,(Color *)&local_80,local_68,local_64,(Color *)&local_60,
             (Ref *)&local_70,(Ref *)&local_50,local_48);
    CanvasItem::queue_redraw();
  }
  pOVar2 = local_50;
  if (((local_50 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_00105ffc:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GraphNode::_notification(int) [clone .part.0] */

void GraphNode::_notification(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  Ref *pRVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  Object *pOVar12;
  undefined4 in_register_0000003c;
  Ref *pRVar13;
  long *plVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  uint local_9c;
  long *local_98;
  Object *local_90;
  long local_88;
  long local_80 [2];
  float local_70;
  float fStack_6c;
  long local_68;
  undefined4 local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  pRVar13 = (Ref *)CONCAT44(in_register_0000003c,param_1);
  pOVar12 = *(Object **)(pRVar13 + 0xaa8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar12 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    pOVar12 = (Object *)0x0;
  }
  local_98 = (long *)0x0;
  if ((*(long **)(pRVar13 + 0xab8) != (long *)0x0) &&
     (local_98 = *(long **)(pRVar13 + 0xab8), cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_98 = (long *)0x0;
  }
  local_90 = (Object *)0x0;
  if (pRVar13[0xa00] == (Ref)0x0) {
    if (*(Object **)(pRVar13 + 0xaa8) != (Object *)0x0) {
      local_90 = *(Object **)(pRVar13 + 0xaa8);
      cVar6 = RefCounted::reference();
      goto joined_r0x00106844;
    }
LAB_0010639f:
    pRVar8 = pRVar13 + 0xab8;
  }
  else {
    if (*(Object **)(pRVar13 + 0xab0) != (Object *)0x0) {
      local_90 = *(Object **)(pRVar13 + 0xab0);
      cVar6 = RefCounted::reference();
joined_r0x00106844:
      if (cVar6 == '\0') {
        local_90 = (Object *)0x0;
      }
      if (pRVar13[0xa00] == (Ref)0x0) goto LAB_0010639f;
    }
    pRVar8 = pRVar13 + 0xac0;
  }
  local_88 = 0;
  if ((*(long *)pRVar8 != 0) &&
     (local_88 = *(long *)pRVar8, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_88 = 0;
  }
  local_80[0] = 0;
  if ((*(long *)(pRVar13 + 0xac8) != 0) &&
     (local_80[0] = *(long *)(pRVar13 + 0xac8), cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_80[0] = 0;
  }
  iVar1 = *(int *)(pRVar13 + 0xad4);
  uVar20 = (**(code **)(*local_98 + 0x1d0))();
  uVar21 = Control::get_size();
  local_80[1] = 0;
  local_70 = (float)uVar21 + (float)uVar20;
  fStack_6c = (float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar20 >> 0x20);
  uVar20 = Control::get_size();
  uVar22 = 0;
  local_60 = (undefined4)uVar20;
  local_68 = (ulong)(uint)fStack_6c << 0x20;
  local_5c = (float)((ulong)uVar20 >> 0x20) - fStack_6c;
  _local_70 = CONCAT44(fStack_6c,local_60);
  fVar18 = fStack_6c;
  CanvasItem::draw_style_box(pRVar13,(Rect2 *)&local_90);
  CanvasItem::draw_style_box(pRVar13,(Rect2 *)&local_88);
  fVar15 = (float)Control::get_size();
  fVar16 = (float)(**(code **)(*(long *)pOVar12 + 0x1d0))(pOVar12);
  iVar7 = Node::get_child_count(SUB41(param_1,0));
  if ((0 < iVar7) && (plVar14 = *(long **)(pRVar13 + 0xa80), plVar14 != (long *)0x0)) {
    iVar7 = 0;
    do {
      uVar2 = *(uint *)(plVar14 + 2);
      if (-1 < (int)uVar2) {
        if (((*(long *)(pRVar13 + 0xaa0) != 0) &&
            ((long)(int)uVar2 < *(long *)(*(long *)(pRVar13 + 0xaa0) + -8))) &&
           (cVar6 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                    ::_lookup_pos((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                   *)(pRVar13 + 0xa68),(int *)(ulong)uVar2,&local_9c), cVar6 != '\0'
           )) {
          pcVar9 = (char *)HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                           ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                                         *)(pRVar13 + 0xa68),(int *)(plVar14 + 2));
          if (*pcVar9 != '\0') {
            lVar11 = (long)(int)plVar14[2];
            pcVar4 = *(code **)(*(long *)pRVar13 + 0x370);
            lVar10 = *(long *)(pRVar13 + 0xaa0);
            if (lVar11 < 0) {
LAB_00106880:
              if (lVar10 == 0) {
LAB_00106930:
                lVar10 = 0;
                goto LAB_0010688d;
              }
            }
            else {
              if (lVar10 == 0) goto LAB_00106930;
              if (lVar11 < *(long *)(lVar10 + -8)) {
                iVar3 = *(int *)(lVar10 + lVar11 * 4);
                fVar17 = (float)StyleBox::get_margin(pOVar12,1);
                (*pcVar4)(pRVar13,iVar7,CONCAT44((int)(fVar17 + (float)iVar3),iVar1),1,pcVar9 + 8);
                goto LAB_001065f9;
              }
            }
LAB_00106889:
            lVar10 = *(long *)(lVar10 + -8);
LAB_0010688d:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
LAB_001065f9:
          if (pcVar9[0x20] != '\0') {
            lVar11 = (long)(int)plVar14[2];
            pcVar4 = *(code **)(*(long *)pRVar13 + 0x370);
            lVar10 = *(long *)(pRVar13 + 0xaa0);
            if (lVar11 < 0) goto LAB_00106880;
            if (lVar10 == 0) goto LAB_00106930;
            if (*(long *)(lVar10 + -8) <= lVar11) goto LAB_00106889;
            iVar3 = *(int *)(lVar10 + lVar11 * 4);
            fVar18 = (float)StyleBox::get_margin(pOVar12,1);
            fVar18 = (float)iVar3 + fVar18;
            fVar17 = (float)Control::get_size();
            uVar22 = 0;
            (*pcVar4)(pRVar13,iVar7,CONCAT44((int)fVar18,(int)(fVar17 - (float)iVar1)),0,
                      pcVar9 + 0x28);
          }
          if (pcVar9[0x40] != '\0') {
            lVar10 = Node::get_child(param_1,SUB41((int)plVar14[2],0));
            if (((lVar10 == 0) ||
                (lVar10 = __dynamic_cast(lVar10,&Object::typeinfo,&Control::typeinfo,0), lVar10 == 0
                )) || (cVar6 = CanvasItem::is_visible_in_tree(), cVar6 == '\0')) goto LAB_00106518;
            local_58 = Control::get_rect();
            local_50._0_4_ = fVar18;
            local_50._4_4_ = uVar22;
            uVar19 = StyleBox::get_margin(pOVar12,0);
            local_58 = CONCAT44(local_58._4_4_,uVar19);
            local_50 = CONCAT44(local_50._4_4_,(float)(int)(fVar15 - fVar16));
            CanvasItem::draw_style_box(pRVar13,(Rect2 *)local_80);
          }
          iVar7 = iVar7 + 1;
        }
      }
LAB_00106518:
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  if (pRVar13[0xa01] != (Ref)0x0) {
    uVar20 = (**(code **)(**(long **)(pRVar13 + 0xae0) + 0x1d8))();
    uVar21 = Control::get_size();
    local_58 = CONCAT44((float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar20 >> 0x20),
                        (float)uVar21 - (float)uVar20);
    CanvasItem::draw_texture(pRVar13,(Vector2 *)(pRVar13 + 0xae0),(Color *)&local_58);
  }
  Ref<StyleBox>::unref((Ref<StyleBox> *)local_80);
  Ref<StyleBox>::unref((Ref<StyleBox> *)&local_88);
  if (((local_90 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_90, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  Ref<StyleBox>::unref((Ref<StyleBox> *)&local_98);
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::_notification(int) */

void __thiscall GraphNode::_notification(GraphNode *this,int param_1)

{
  if (param_1 != 0x1e) {
    return;
  }
  _notification((int)this);
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



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

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
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* GraphNode::_bind_methods() */

void GraphNode::_bind_methods(void)

{
  Variant *pVVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  int *piVar6;
  MethodBind *pMVar7;
  Variant *pVVar8;
  undefined8 uVar9;
  Variant **ppVVar10;
  long lVar11;
  int *piVar12;
  long in_FS_OFFSET;
  undefined8 local_240;
  undefined8 local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined8 local_200;
  long local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198 [2];
  int *local_188;
  undefined8 local_180;
  Vector<int> local_178 [8];
  long local_170;
  undefined *local_168;
  char *pcStack_160;
  char *local_158;
  char *pcStack_150;
  char *local_148;
  char *pcStack_140;
  char *local_138;
  char *pcStack_130;
  char *local_128;
  char *pcStack_120;
  undefined8 local_118 [2];
  Variant *local_108;
  undefined1 auStack_100 [88];
  int local_a8 [4];
  code *pcStack_98;
  code *apcStack_90 [3];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  puVar5 = PTR__LC101_00122050;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_1d8,"set_title");
  auStack_100._0_16_ = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar7 = create_method_bind<GraphNode,String_const&>(set_title);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_108] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_title",0);
  auStack_100._0_16_ = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar7 = create_method_bind<GraphNode,String>(get_title);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_108] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_titlebar_hbox",0);
  auStack_100._0_16_ = (undefined1  [16])0x0;
  local_108 = (Variant *)0x0;
  pMVar7 = create_method_bind<GraphNode,HBoxContainer*>(get_titlebar_hbox);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_108] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_118[0] = 0;
  local_158 = "type_left";
  pcStack_150 = "color_left";
  local_168 = puVar5;
  pcStack_160 = "enable_left_port";
  local_148 = "enable_right_port";
  pcStack_140 = "type_right";
  pVVar8 = (Variant *)&local_168;
  local_138 = "color_right";
  pcStack_130 = "custom_icon_left";
  local_128 = "custom_icon_right";
  pcStack_120 = "draw_stylebox";
  ppVVar10 = &local_108;
  do {
    *ppVVar10 = pVVar8;
    pVVar8 = pVVar8 + 8;
    ppVVar10 = ppVVar10 + 1;
  } while ((Variant *)local_118 != pVVar8);
  D_METHODP((char *)&local_1d8,(char ***)"set_slot",(uint)&local_108);
  Variant::Variant((Variant *)local_a8,(Object *)0x0);
  Variant::Variant((Variant *)apcStack_90,(Object *)0x0);
  Variant::Variant(local_78,true);
  local_58 = (undefined1  [16])0x0;
  auStack_100._8_8_ = local_78;
  auStack_100._0_8_ = (Variant *)apcStack_90;
  local_60 = 0;
  local_108 = (Variant *)local_a8;
  pMVar7 = create_method_bind<GraphNode,int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
                     (set_slot);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,&local_108,3);
  pVVar8 = local_48;
  do {
    pVVar1 = pVVar8 + -0x18;
    pVVar8 = pVVar8 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar8 != (Variant *)local_a8);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"clear_slot");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int>(clear_slot);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"clear_all_slots",0);
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode>(clear_all_slots);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"is_slot_enabled_left");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,bool,int>(is_slot_enabled_left);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_enabled_left","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,bool>(set_slot_enabled_left);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_type_left","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,int>(set_slot_type_left);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_slot_type_left");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,int>(get_slot_type_left);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_color_left","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,Color_const&>(set_slot_color_left);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_slot_color_left");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,Color,int>(get_slot_color_left);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_custom_icon_left","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,Ref<Texture2D>const&>(set_slot_custom_icon_left);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_slot_custom_icon_left");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,Ref<Texture2D>,int>(get_slot_custom_icon_left);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"is_slot_enabled_right");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,bool,int>(is_slot_enabled_right);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_enabled_right","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,bool>(set_slot_enabled_right);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_type_right","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,int>(set_slot_type_right);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_slot_type_right");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,int>(get_slot_type_right);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_color_right","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,Color_const&>(set_slot_color_right);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_slot_color_right");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,Color,int>(get_slot_color_right);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_custom_icon_right","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,Ref<Texture2D>const&>(set_slot_custom_icon_right);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_slot_custom_icon_right");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,Ref<Texture2D>,int>(get_slot_custom_icon_right);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"is_slot_draw_stylebox");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,bool,int>(is_slot_draw_stylebox);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*,char_const*>((char *)&local_1d8,"set_slot_draw_stylebox","slot_index");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,bool>(set_slot_draw_stylebox);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"set_ignore_invalid_connection_type");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,bool>(set_ignore_invalid_connection_type);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"is_ignoring_valid_connection_type",0);
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,bool>(is_ignoring_valid_connection_type);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_input_port_count",0);
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int>(get_input_port_count);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_input_port_position");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,Vector2,int>(get_input_port_position);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_input_port_type");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,int>(get_input_port_type);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_input_port_color");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,Color,int>(get_input_port_color);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_input_port_slot");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,int>(get_input_port_slot);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_output_port_count",0);
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int>(get_output_port_count);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_output_port_position");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,Vector2,int>(get_output_port_position);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_output_port_type");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,int>(get_output_port_type);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_output_port_color");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,Color,int>(get_output_port_color);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHOD<char_const*>((char *)&local_1d8,"get_output_port_slot");
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = (code *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar7 = create_method_bind<GraphNode,int,int>(get_output_port_slot);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_210 = 0;
  local_1d8 = 0;
  String::parse_latin1((String *)&local_1d8,"slot_index");
  local_208 = (undefined *)0x0;
  if (local_1d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_208,(CowData *)&local_1d8);
  }
  Vector<String>::push_back((Vector<String> *)&local_218,(CowData<char32_t> *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"position");
  local_208 = (undefined *)0x0;
  if (local_230 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_208,(CowData *)&local_230);
  }
  Vector<String>::push_back((Vector<String> *)&local_218,(CowData<char32_t> *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_208 = (undefined *)0x0;
  String::parse_latin1((String *)&local_208,"left");
  local_220 = 0;
  if (local_208 != (undefined *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_220,(CowData *)&local_208);
  }
  Vector<String>::push_back((Vector<String> *)&local_218,(CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  local_228 = 0;
  String::parse_latin1((String *)&local_228,"color");
  local_220 = 0;
  if (local_228 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_220,(CowData *)&local_228);
  }
  Vector<String>::push_back((Vector<String> *)&local_218,(CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  local_1c8 = (undefined1  [16])0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  String::parse_latin1((String *)&local_1d8,"_draw_port");
  local_1a0 = CONCAT44(local_1a0._4_4_,8);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_208);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  Vector<int>::push_back(local_178,3);
  local_230 = 0;
  local_228 = 0;
  local_208 = &_LC24;
  local_200 = 0;
  String::parse_latin1((StrRange *)&local_228);
  local_220 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_208,6,(CowData<char32_t> *)&local_220,0,(String *)&local_228,6,
             (String *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  Vector<int>::push_back(local_178,0);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_208);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  Vector<int>::push_back(local_178,0);
  GetTypeInfo<Color_const&,void>::get_class_info((GetTypeInfo<Color_const&,void> *)&local_208);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  Vector<int>::push_back(local_178,0);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_208,(MethodInfo *)&local_1d8,true,(Vector *)&local_218,false);
  if ((StringName::configured != '\0') && (local_208 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  lVar3 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar2 = (long *)(local_170 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar6 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar2 = (long *)(local_188 + -4);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_188 + -2);
      lVar11 = 0;
      local_188 = (int *)0x0;
      piVar12 = piVar6;
      if (lVar3 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(piVar6 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<String>::_unref((CowData<String> *)&local_210);
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_228 = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"title");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,4,(String *)&local_238,0,(String *)&local_230,6,
             (String *)&local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"GraphNode");
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_218 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_228 = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"ignore_invalid_connection_type");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,1,(String *)&local_238,0,(String *)&local_230,6,
             (String *)&local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"GraphNode");
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (((StringName::configured != '\0') &&
      ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_218 != 0)
      ))) {
    StringName::unref();
  }
  local_228 = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"slot_index");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_208,2,(String *)&local_238,0,(String *)&local_230,6,
             (String *)&local_228);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"slot_updated");
  local_1c8 = (undefined1  [16])0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_220);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_240,false);
  ClassDB::add_signal((StringName *)&local_218,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  lVar3 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar2 = (long *)(local_170 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar6 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar2 = (long *)(local_188 + -4);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_188 + -2);
      lVar11 = 0;
      local_188 = (int *)0x0;
      piVar12 = piVar6;
      if (lVar3 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(piVar6 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((StringName::configured != '\0') && (local_228 != 0)) {
    StringName::unref();
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"panel",false);
  StringName::StringName((StringName *)&local_208,"panel",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') &&
     (((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"panel_selected",false);
  StringName::StringName((StringName *)&local_208,"panel_selected",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if (((StringName::configured != '\0') &&
      ((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8 != 0)) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"titlebar",false);
  StringName::StringName((StringName *)&local_208,"titlebar",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') &&
     (((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"titlebar_selected",false);
  StringName::StringName((StringName *)&local_208,"titlebar_selected",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if (((StringName::configured != '\0') &&
      ((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8 != 0)) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"slot",false);
  StringName::StringName((StringName *)&local_208,"slot",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,5,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') &&
     (((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"separation",false);
  StringName::StringName((StringName *)&local_208,"separation",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,1,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if (((StringName::configured != '\0') &&
      ((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8 != 0)) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"port_h_offset",false);
  StringName::StringName((StringName *)&local_208,"port_h_offset",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,1,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') &&
     (((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"port",false);
  StringName::StringName((StringName *)&local_208,"port",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if (((StringName::configured != '\0') &&
      ((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8 != 0)) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"resizer",false);
  StringName::StringName((StringName *)&local_208,"resizer",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,4,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') &&
     (((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1d8 != 0)))) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  uVar9 = ThemeDB::get_singleton();
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pcStack_98 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
               ::_M_manager;
  apcStack_90[0] =
       std::
       _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
       ::_M_invoke;
  StringName::StringName((StringName *)&local_1d8,"resizer_color",false);
  StringName::StringName((StringName *)&local_208,"resizer_color",false);
  local_220 = 0;
  String::parse_latin1((String *)&local_220,"GraphNode");
  StringName::StringName((StringName *)&local_218,(String *)&local_220,false);
  ThemeDB::bind_class_item
            (uVar9,0,(StringName *)&local_218,(CowData<char32_t> *)&local_208,
             (MethodDefinition *)&local_1d8,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if (((StringName::configured != '\0') &&
      ((local_208 == (undefined *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1d8 != 0)) {
    StringName::unref();
  }
  if (pcStack_98 != (code *)0x0) {
    (*pcStack_98)((Variant *)local_a8,(Variant *)local_a8,3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GraphNode::_resort() */

void __thiscall GraphNode::_resort(GraphNode *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plVar10;
  long *plVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int extraout_var;
  Rect2 *pRVar16;
  long lVar17;
  int extraout_var_00;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  int *piVar22;
  ulong uVar23;
  undefined8 *puVar24;
  int iVar25;
  ulong uVar26;
  uint uVar27;
  int iVar28;
  undefined8 *puVar29;
  int iVar30;
  long in_FS_OFFSET;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float extraout_XMM0_Db;
  undefined8 uVar37;
  undefined8 uVar38;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar39;
  int local_138;
  int local_110;
  float local_f0;
  int local_bc;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  Rect2 *local_a0;
  HashMap<Control*,GraphNode::_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,GraphNode::_MinSizeCache>>>
  local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  iVar30 = 0;
  iVar28 = 0;
  iVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar36 = Control::get_size();
  local_b8 = (long *)0x0;
  fVar12 = (float)((ulong)uVar36 >> 0x20);
  Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_b8,*(Ref **)(this + 0xaa8));
  local_b0 = (long *)0x0;
  Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_b0,*(Ref **)(this + 0xab8));
  Control::get_size();
  plVar11 = local_b0;
  uVar37 = (**(code **)(*local_b0 + 0x1d0))(local_b0);
  local_68 = StyleBox::get_offset();
  local_60 = CONCAT44(extraout_XMM0_Db - (float)((ulong)uVar37 >> 0x20),
                      (float)uVar36 - (float)uVar37);
  Container::fit_child_in_rect((Control *)this,*(Rect2 **)(this + 0xa30));
  local_58 = (**(code **)(**(long **)(this + 0xa30) + 0x300))();
  Vector2::operator_cast_to_Vector2i((Vector2 *)&local_58);
  local_a8 = (long *)0x0;
  Ref<StyleBox>::operator=((Ref<StyleBox> *)&local_a8,*(Ref **)(this + 0xac8));
  iVar1 = *(int *)(this + 0xad0);
  local_70 = 2;
  local_f0 = 0.0;
  iVar15 = 0;
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  while( true ) {
    bVar31 = SUB81(this,0);
    local_bc = iVar21;
    iVar13 = Node::get_child_count(bVar31);
    plVar10 = local_b8;
    iVar25 = (int)this;
    if (iVar13 <= iVar21) break;
    uVar37 = Node::get_child(iVar25,SUB41(iVar21,0));
    pRVar16 = (Rect2 *)Container::as_sortable_control(this,uVar37,1);
    local_a0 = pRVar16;
    if (pRVar16 != (Rect2 *)0x0) {
      lVar17 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
               ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                             *)(this + 0xa68),&local_bc);
      uVar37 = 0;
      if (*(char *)(lVar17 + 0x40) != '\0') {
        uVar37 = (**(code **)(*local_a8 + 0x1d0))();
      }
      uVar38 = (**(code **)(*(long *)pRVar16 + 0x300))(pRVar16);
      local_58 = CONCAT44((float)((ulong)uVar37 >> 0x20) + (float)((ulong)uVar38 >> 0x20),
                          (float)uVar37 + (float)uVar38);
      Vector2::operator_cast_to_Vector2i((Vector2 *)&local_58);
      iVar28 = iVar28 + extraout_var_00;
      uVar14 = Control::get_v_size_flags();
      piVar18 = (int *)HashMap<Control*,GraphNode::_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,GraphNode::_MinSizeCache>>>
                       ::operator[](local_98,(Control **)&local_a0);
      bVar31 = (uVar14 & 2) != 0;
      *piVar18 = extraout_var_00;
      piVar18[2] = extraout_var_00;
      *(bool *)(piVar18 + 1) = bVar31;
      if (bVar31) {
        iVar15 = iVar15 + extraout_var_00;
        fVar32 = (float)Control::get_stretch_ratio();
        local_f0 = fVar32 + local_f0;
      }
      iVar30 = iVar30 + 1;
    }
    iVar21 = iVar21 + 1;
  }
  if (iVar30 == 0) {
    puVar24 = (undefined8 *)local_90._0_8_;
    if ((undefined8 *)local_90._0_8_ != (undefined8 *)0x0) {
LAB_00109896:
      uVar36 = local_90._8_8_;
      if ((local_70._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_70 & 0xffffffff) * 4) != 0)) {
        piVar18 = (int *)(local_90._8_8_ +
                         (ulong)*(uint *)(hash_table_size_primes + (local_70 & 0xffffffff) * 4) * 4)
        ;
        piVar22 = (int *)local_90._8_8_;
        puVar29 = puVar24;
        do {
          if (*piVar22 != 0) {
            *piVar22 = 0;
            Memory::free_static((void *)*puVar29,false);
            *puVar29 = 0;
          }
          piVar22 = piVar22 + 1;
          puVar29 = puVar29 + 1;
        } while (piVar22 != piVar18);
      }
      Memory::free_static(puVar24,false);
      Memory::free_static((void *)uVar36,false);
    }
  }
  else {
    iVar28 = (int)(fVar12 - (float)(iVar1 * (iVar30 + -1))) - iVar28;
    if (iVar28 < 0) {
      iVar28 = 0;
    }
    fVar32 = (float)StyleBox::get_margin(local_b8,3);
    fVar33 = (float)StyleBox::get_margin(plVar10,1);
    (**(code **)(*plVar11 + 0x1d0))(plVar11);
    local_110 = (int)((((((float)iVar28 - fVar32) - fVar33) - (float)extraout_var) -
                      extraout_XMM0_Db_00) + (float)iVar15);
    while (0.0 < local_f0) {
      iVar28 = 0;
      iVar15 = Node::get_child_count(bVar31);
      if (iVar15 < 1) break;
LAB_00109a78:
      uVar37 = Node::get_child(iVar25,SUB41(iVar28,0));
      local_a0 = (Rect2 *)Container::as_sortable_control(this,uVar37,1);
      if (local_a0 == (Rect2 *)0x0) {
LAB_00109bd4:
        iVar28 = iVar28 + 1;
        iVar15 = Node::get_child_count(bVar31);
        if (iVar15 <= iVar28) break;
        goto LAB_00109a78;
      }
      puVar24 = (undefined8 *)local_90._0_8_;
      if ((undefined8 *)local_90._0_8_ == (undefined8 *)0x0) {
        _err_print_error("_resort","scene/gui/graph_node.cpp",0xe0,
                         "Condition \"!min_size_cache.has(child)\" is true.",0,0);
        goto LAB_00109910;
      }
      if (local_70._4_4_ == 0) {
LAB_00109fa5:
        _err_print_error("_resort","scene/gui/graph_node.cpp",0xe0,
                         "Condition \"!min_size_cache.has(child)\" is true.",0,0);
        goto LAB_00109896;
      }
      uVar26 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_70 & 0xffffffff) * 4));
      lVar17 = *(long *)(hash_table_size_primes_inv + (local_70 & 0xffffffff) * 8);
      uVar19 = (long)local_a0 * 0x3ffff - 1;
      uVar19 = (uVar19 ^ uVar19 >> 0x1f) * 0x15;
      uVar19 = (uVar19 ^ uVar19 >> 0xb) * 0x41;
      uVar19 = uVar19 >> 0x16 ^ uVar19;
      uVar23 = uVar19 & 0xffffffff;
      if ((int)uVar19 == 0) {
        uVar23 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar23 * lVar17;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar26;
      lVar20 = SUB168(auVar2 * auVar6,8);
      uVar14 = *(uint *)(local_90._8_8_ + lVar20 * 4);
      iVar15 = SUB164(auVar2 * auVar6,8);
      if (uVar14 == 0) goto LAB_00109fa5;
      uVar27 = 0;
      while ((uVar14 != (uint)uVar23 ||
             (local_a0 != *(Rect2 **)(*(long *)(local_90._0_8_ + lVar20 * 8) + 0x10)))) {
        uVar27 = uVar27 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar15 + 1) * lVar17;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar26;
        lVar20 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(local_90._8_8_ + lVar20 * 4);
        iVar15 = SUB164(auVar3 * auVar7,8);
        if ((uVar14 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar14 * lVar17, auVar8._8_8_ = 0,
           auVar8._0_8_ = uVar26, auVar5._8_8_ = 0,
           auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (local_70 & 0xffffffff) * 4) +
                                  iVar15) - SUB164(auVar4 * auVar8,8)) * lVar17, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar26, SUB164(auVar5 * auVar9,8) < uVar27)) goto LAB_00109fa5;
      }
      piVar18 = (int *)HashMap<Control*,GraphNode::_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,GraphNode::_MinSizeCache>>>
                       ::operator[](local_98,(Control **)&local_a0);
      if ((char)piVar18[1] == '\0') goto LAB_00109bd4;
      fVar32 = (float)Control::get_stretch_ratio();
      iVar15 = (int)((fVar32 * (float)local_110) / local_f0);
      if (*piVar18 <= iVar15) {
        piVar18[2] = iVar15;
        goto LAB_00109bd4;
      }
      *(undefined1 *)(piVar18 + 1) = 0;
      fVar32 = (float)Control::get_stretch_ratio();
      local_110 = local_110 - *piVar18;
      local_f0 = local_f0 - fVar32;
      piVar18[2] = *piVar18;
    }
    fVar32 = (float)StyleBox::get_margin(plVar10);
    (**(code **)(*plVar11 + 0x1d0))(plVar11);
    local_138 = (int)(extraout_XMM0_Db_01 + fVar32 + (float)extraout_var);
    CowData<int>::resize<false>((CowData<int> *)(this + 0xaa0),0);
    fVar32 = (float)(**(code **)(*plVar10 + 0x1d0))(plVar10);
    local_f0 = 0.0;
    for (iVar15 = 0; local_bc = iVar15, iVar28 = Node::get_child_count(bVar31), iVar15 < iVar28;
        iVar15 = iVar15 + 1) {
      uVar37 = Node::get_child(iVar25,SUB41(iVar15,0));
      pRVar16 = (Rect2 *)Container::as_sortable_control(this,uVar37,1);
      local_a0 = pRVar16;
      if (pRVar16 != (Rect2 *)0x0) {
        lVar17 = HashMap<Control*,GraphNode::_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,GraphNode::_MinSizeCache>>>
                 ::operator[](local_98,(Control **)&local_a0);
        iVar28 = *(int *)(lVar17 + 8);
        iVar21 = local_138;
        if (0 < (int)local_f0) {
          iVar21 = local_138 + iVar1;
        }
        local_138 = iVar28 + iVar21;
        if ((*(char *)(lVar17 + 4) != '\0') && ((float)(iVar30 + -1) == local_f0)) {
          fVar33 = (float)StyleBox::get_margin(plVar10,3);
          local_138 = (int)(fVar12 - fVar33);
          iVar28 = local_138 - iVar21;
        }
        fVar33 = (float)StyleBox::get_margin(plVar10,0);
        lVar17 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                 ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                               *)(this + 0xa68),&local_bc);
        fVar35 = 0.0;
        if (*(char *)(lVar17 + 0x40) != '\0') {
          fVar35 = (float)StyleBox::get_margin(local_a8,0);
        }
        fVar39 = (float)(int)((float)uVar36 - fVar32);
        lVar17 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                 ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                               *)(this + 0xa68),&local_bc);
        if (*(char *)(lVar17 + 0x40) != '\0') {
          fVar34 = (float)(**(code **)(*local_a8 + 0x1d0))();
          fVar39 = fVar39 - fVar34;
        }
        uStack_50 = CONCAT44((float)iVar28,fVar39);
        local_58 = CONCAT44((float)iVar21,fVar35 + fVar33);
        Container::fit_child_in_rect((Control *)this,pRVar16);
        fVar33 = (float)StyleBox::get_margin(plVar10,1);
        Vector<int>::push_back
                  ((Vector<int> *)(this + 0xa98),
                   (int)((double)iVar28 * __LC161 + (double)((float)iVar21 - fVar33)));
        local_f0 = (float)((int)local_f0 + 1);
      }
    }
    CanvasItem::queue_redraw();
    uVar36 = local_90._0_8_;
    this[0xaf8] = (GraphNode)0x1;
    if ((undefined8 *)local_90._0_8_ != (undefined8 *)0x0) {
      uVar37 = local_90._8_8_;
      if ((local_70._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_70 & 0xffffffff) * 4) != 0)) {
        piVar18 = (int *)(local_90._8_8_ +
                         (ulong)*(uint *)(hash_table_size_primes + (local_70 & 0xffffffff) * 4) * 4)
        ;
        piVar22 = (int *)local_90._8_8_;
        puVar24 = (undefined8 *)local_90._0_8_;
        do {
          if (*piVar22 != 0) {
            *piVar22 = 0;
            Memory::free_static((void *)*puVar24,false);
            *puVar24 = 0;
          }
          piVar22 = piVar22 + 1;
          puVar24 = puVar24 + 1;
        } while (piVar18 != piVar22);
      }
      Memory::free_static((void *)uVar36,false);
      Memory::free_static((void *)uVar37,false);
    }
  }
LAB_00109910:
  Ref<StyleBox>::unref((Ref<StyleBox> *)&local_a8);
  Ref<StyleBox>::unref((Ref<StyleBox> *)&local_b0);
  Ref<StyleBox>::unref((Ref<StyleBox> *)&local_b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GraphNode::draw_port(int, Vector2i, bool, Color const&) */

void __thiscall
GraphNode::draw_port
          (GraphNode *this,int param_1,undefined8 param_3,GetTypeInfo<int,void> param_4,
          Color *param_5)

{
  Variant *pVVar1;
  undefined1 *puVar2;
  Ref<Texture2D> *pRVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  Variant *pVVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 uVar9;
  Vector2i *local_1e8;
  Variant **local_1e0;
  undefined8 local_1b4;
  int local_1ac;
  undefined8 local_1a8;
  long local_1a0;
  GetTypeInfo<int,void> local_198 [8];
  long local_190;
  int local_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128 [2];
  undefined8 local_118;
  undefined8 local_110;
  Vector<int> local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [4];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant *pVStack_b0;
  undefined8 local_a8;
  Vector2i *pVStack_a0;
  GetTypeInfo<int,void> *local_98;
  Variant **ppVStack_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b4 = param_3;
  local_1ac = param_1;
  local_f0 = param_3;
  if (plVar5 != (long *)0x0) {
    local_168 = 0;
    iStack_164 = 0;
    uStack_160 = 0;
    Variant::Variant((Variant *)&local_a8,param_1);
    Variant::Variant((Variant *)&ppVStack_90,(Vector2i *)&local_f0);
    Variant::Variant((Variant *)&uStack_78,(bool)param_4);
    Variant::Variant(local_60,param_5);
    local_c8 = (Variant *)&local_a8;
    pVStack_c0 = (Variant *)&ppVStack_90;
    local_b8 = (Variant *)&uStack_78;
    pVStack_b0 = local_60;
    (**(code **)(*plVar5 + 0x60))(local_e8,plVar5,this + 0xb00,&local_c8,4,&local_168);
    if (Variant::needs_deinit[(int)local_e8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_168 == 0) {
      pVVar7 = local_48;
      do {
        pVVar1 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)&local_a8);
      goto LAB_0010a1f6;
    }
    pVVar7 = local_48;
    do {
      pVVar1 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar7 != (Variant *)&local_a8);
  }
  local_1e0 = &local_c8;
  local_1e8 = (Vector2i *)local_e8;
  if ((*(long *)(this + 8) != 0) && (this[0xb08] == (GraphNode)0x0)) {
    local_158 = (undefined1  [16])0x0;
    local_168 = 0;
    iStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 6;
    local_130 = 1;
    local_128[0] = 0;
    local_118 = 0;
    local_110 = 0;
    local_100 = 0;
    String::parse_latin1((String *)&local_168,"_draw_port");
    local_130 = CONCAT44(local_130._4_4_,8);
    GetTypeInfo<int,void>::get_class_info(local_198);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)local_198);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_198);
    Vector<int>::push_back(local_108,3);
    GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)local_198);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)local_198);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_198);
    Vector<int>::push_back(local_108,0);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)local_198);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)local_198);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_198);
    Vector<int>::push_back(local_108,0);
    GetTypeInfo<Color_const&,void>::get_class_info((GetTypeInfo<Color_const&,void> *)local_198);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)local_198);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_198);
    Vector<int>::push_back(local_108,0);
    MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0xb10) = 0;
    lVar4 = *(long *)(this + 8);
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_1a8 = 0;
      String::parse_latin1((String *)&local_1a8,"GraphNode");
      StringName::StringName((StringName *)&local_1a0,(String *)&local_1a8,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_198,(StringName *)&local_1a0);
      lVar4 = local_190;
      if (local_190 == 0) {
        lVar8 = 0;
        if (StringName::configured != '\0') goto LAB_0010a71a;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
LAB_0010a73b:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010a624;
        uVar9 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0xb00);
        *(undefined8 *)(this + 0xb10) = uVar9;
      }
      else {
        lVar8 = *(long *)(local_190 + -8);
        LOCK();
        plVar5 = (long *)(local_190 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_190 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
        if (StringName::configured != '\0') {
LAB_0010a71a:
          if (local_1a0 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
        if (lVar8 == 0) goto LAB_0010a73b;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar9 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0xb00);
      *(undefined8 *)(this + 0xb10) = uVar9;
      lVar4 = *(long *)(this + 8);
    }
LAB_0010a624:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0xb10);
      plVar5[1] = (long)(this + 0xb08);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0xb08] = (GraphNode)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  }
  pcVar6 = *(code **)(this + 0xb10);
  if (pcVar6 == (code *)0x0) {
    puVar2 = (undefined1 *)
             HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             ::operator[]((HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                           *)(this + 0xa68),&local_1ac);
    pVStack_a0 = *(Vector2i **)(puVar2 + 8);
    local_98 = *(GetTypeInfo<int,void> **)(puVar2 + 0x10);
    local_a8 = (Ref<Texture2D> *)CONCAT71(local_a8._1_7_,*puVar2);
    ppVStack_90 = (Variant **)0x0;
    local_a8 = (Ref<Texture2D> *)CONCAT44(*(undefined4 *)(puVar2 + 4),(undefined4)local_a8);
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&ppVStack_90,*(Ref **)(puVar2 + 0x18));
    local_88 = puVar2[0x20];
    local_80 = *(undefined8 *)(puVar2 + 0x28);
    uStack_78 = *(undefined8 *)(puVar2 + 0x30);
    local_84 = *(undefined4 *)(puVar2 + 0x24);
    local_70 = 0;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_70,*(Ref **)(puVar2 + 0x38));
    local_168 = 0;
    iStack_164 = 0;
    local_68 = puVar2[0x40];
    pRVar3 = (Ref<Texture2D> *)&ppVStack_90;
    if (param_4 == (GetTypeInfo<int,void>)0x0) {
      pRVar3 = (Ref<Texture2D> *)&local_70;
    }
    Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_168,*(Ref **)pRVar3);
    plVar5 = (long *)CONCAT44(iStack_164,local_168);
    local_f8 = 0;
    if (plVar5 == (long *)0x0) {
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_168,*(Ref **)(this + 0xad8));
      plVar5 = (long *)CONCAT44(iStack_164,local_168);
    }
    uVar9 = (**(code **)(*plVar5 + 0x1d8))(plVar5);
    pcVar6 = *(code **)(*plVar5 + 0x1f0);
    local_f8 = CONCAT44(_LC162._4_4_ * (float)((ulong)uVar9 >> 0x20),(float)_LC162 * (float)uVar9);
    local_f0 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_f8);
    local_e8[0] = Vector2i::operator+((Vector2i *)&local_1b4,(Vector2i *)&local_f0);
    local_c8 = (Variant *)Vector2i::operator_cast_to_Vector2(local_1e8);
    (*pcVar6)(plVar5,*(undefined8 *)(this + 0x428),local_1e0,param_5,0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_168);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&ppVStack_90);
  }
  else {
    local_98 = local_198;
    local_c8 = *(Variant **)param_5;
    pVStack_c0 = *(Variant **)(param_5 + 8);
    iStack_164 = param_1 >> 0x1f;
    pVStack_a0 = local_1e8;
    local_e8[0] = local_f0;
    ppVStack_90 = local_1e0;
    local_198[0] = param_4;
    local_168 = param_1;
    local_a8 = (Ref<Texture2D> *)&local_168;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),&local_a8,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0xb00,pcVar6,&local_a8,0);
    }
  }
LAB_0010a1f6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GraphNode::get_allowed_size_flags_vertical() const */

GraphNode * __thiscall GraphNode::get_allowed_size_flags_vertical(GraphNode *this)

{
  *(undefined8 *)(this + 8) = 0;
  Vector<int>::push_back((Vector<int> *)this,1);
  Vector<int>::push_back((Vector<int> *)this,2);
  Vector<int>::push_back((Vector<int> *)this,0);
  Vector<int>::push_back((Vector<int> *)this,4);
  Vector<int>::push_back((Vector<int> *)this,8);
  return this;
}



/* GraphNode::get_allowed_size_flags_horizontal() const */

GraphNode * __thiscall GraphNode::get_allowed_size_flags_horizontal(GraphNode *this)

{
  *(undefined8 *)(this + 8) = 0;
  Vector<int>::push_back((Vector<int> *)this,1);
  Vector<int>::push_back((Vector<int> *)this,0);
  Vector<int>::push_back((Vector<int> *)this,4);
  Vector<int>::push_back((Vector<int> *)this,8);
  return this;
}



/* Vector<GraphNode::PortCache>::push_back(GraphNode::PortCache) [clone .isra.0] */

void Vector<GraphNode::PortCache>::push_back(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar1 = CowData<GraphNode::PortCache>::resize<false>
                    ((CowData<GraphNode::PortCache> *)(param_1 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<GraphNode::PortCache>::_copy_on_write
                  ((CowData<GraphNode::PortCache> *)(param_1 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x20 + *(long *)(param_1 + 8));
        *puVar2 = in_stack_00000008;
        puVar2[1] = in_stack_00000010;
        puVar2[2] = in_stack_00000018;
        puVar2[3] = in_stack_00000020;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* GraphNode::_port_pos_update() */

void __thiscall GraphNode::_port_pos_update(GraphNode *this)

{
  long *plVar1;
  HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
  *this_00;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  char *pcVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  Object *pOVar23;
  ulong uVar24;
  uint uVar25;
  Object *pOVar26;
  int iVar27;
  long in_FS_OFFSET;
  float fVar28;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined1 auVar29 [16];
  int local_b4;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pOVar26 = *(Object **)(this + 0xaa8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(this + 0xad4);
  iVar3 = *(int *)(this + 0xad0);
  if ((pOVar26 != (Object *)0x0) && (cVar13 = RefCounted::reference(), cVar13 == '\0')) {
    pOVar26 = (Object *)0x0;
  }
  pOVar23 = *(Object **)(this + 0xab8);
  if ((pOVar23 != (Object *)0x0) && (cVar13 = RefCounted::reference(), cVar13 == '\0')) {
    pOVar23 = (Object *)0x0;
  }
  lVar17 = *(long *)(this + 0xa50);
  if ((lVar17 != 0) && (*(long *)(lVar17 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar17 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = *(long *)(this + 0xa50);
      *(undefined8 *)(this + 0xa50) = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0xa50) = 0;
    }
  }
  lVar17 = *(long *)(this + 0xa60);
  if ((lVar17 != 0) && (*(long *)(lVar17 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar17 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar17 = *(long *)(this + 0xa60);
      *(undefined8 *)(this + 0xa60) = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0xa60) = 0;
    }
  }
  iVar27 = 0;
  Control::get_size();
  (**(code **)(*(long *)pOVar23 + 0x1d0))(pOVar23);
  fVar28 = (float)StyleBox::get_margin(pOVar26);
  local_74 = 0;
  local_b4 = (int)(fVar28 + extraout_XMM0_Db + extraout_XMM0_Db_00);
  this_00 = (HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             *)(this + 0xa68);
  iVar14 = Node::get_child_count(SUB81(this,0));
  if (0 < iVar14) {
    do {
      uVar16 = Node::get_child((int)this,SUB41(iVar27,0));
      lVar17 = Container::as_sortable_control(this,uVar16,2);
      if (lVar17 != 0) {
        auVar29 = Control::get_rect();
        local_68 = auVar29;
        lVar17 = Vector2::operator_cast_to_Vector2i((Vector2 *)(local_68 + 8));
        uVar12 = local_74;
        iVar14 = (int)((ulong)lVar17 >> 0x20);
        if ((*(long *)(this + 0xa70) != 0) && (*(int *)(this + 0xa94) != 0)) {
          uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa90) * 8);
          uVar15 = (local_74 >> 0x10 ^ local_74) * -0x7a143595;
          uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
          uVar22 = uVar15 ^ uVar15 >> 0x10;
          if (uVar15 == uVar15 >> 0x10) {
            uVar22 = 1;
            uVar20 = uVar4;
          }
          else {
            uVar20 = uVar22 * uVar4;
          }
          uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4)
                           );
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar24;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar20;
          lVar21 = SUB168(auVar29 * auVar8,8);
          uVar15 = *(uint *)(*(long *)(this + 0xa78) + lVar21 * 4);
          iVar19 = SUB164(auVar29 * auVar8,8);
          if (uVar15 != 0) {
            uVar25 = 0;
            while ((uVar22 != uVar15 ||
                   (local_74 != *(uint *)(*(long *)(*(long *)(this + 0xa70) + lVar21 * 8) + 0x10))))
            {
              uVar25 = uVar25 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (iVar19 + 1) * uVar4;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar24;
              lVar21 = SUB168(auVar5 * auVar9,8);
              uVar15 = *(uint *)(*(long *)(this + 0xa78) + lVar21 * 4);
              iVar19 = SUB164(auVar5 * auVar9,8);
              if ((uVar15 == 0) ||
                 (auVar6._8_8_ = 0, auVar6._0_8_ = uVar15 * uVar4, auVar10._8_8_ = 0,
                 auVar10._0_8_ = uVar24, auVar7._8_8_ = 0,
                 auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0xa90) * 4) + iVar19) -
                                SUB164(auVar6 * auVar10,8)) * uVar4, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar24, SUB164(auVar7 * auVar11,8) < uVar25)) goto LAB_0010ac90;
            }
            pcVar18 = (char *)HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                              ::operator[](this_00,(int *)&local_74);
            if (*pcVar18 != '\0') {
              local_70 = CONCAT44(((int)(((uint)((ulong)(lVar17 >> 0x20) >> 0x1f) & 1) + iVar14) >>
                                  1) + local_b4,iVar2);
              uVar16 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_70);
              local_68._0_8_ = uVar16;
              lVar21 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                       ::operator[](this_00,(int *)&local_74);
              local_68._12_4_ = *(undefined4 *)(lVar21 + 4);
              lVar21 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                       ::operator[](this_00,(int *)&local_74);
              local_58 = *(undefined8 *)(lVar21 + 8);
              uStack_50 = *(undefined8 *)(lVar21 + 0x10);
              local_68._8_4_ = uVar12;
              Vector<GraphNode::PortCache>::push_back(this + 0xa48);
            }
            lVar21 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                     ::operator[](this_00,(int *)&local_74);
            if (*(char *)(lVar21 + 0x20) != '\0') {
              fVar28 = (float)Control::get_size();
              local_70 = CONCAT44(((int)(((uint)((ulong)(lVar17 >> 0x20) >> 0x1f) & 1) + iVar14) >>
                                  1) + local_b4,(int)(fVar28 - (float)iVar2));
              uVar16 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_70);
              local_68._0_8_ = uVar16;
              lVar17 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                       ::operator[](this_00,(int *)&local_74);
              local_68._12_4_ = *(undefined4 *)(lVar17 + 0x24);
              lVar17 = HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
                       ::operator[](this_00,(int *)&local_74);
              local_58 = *(undefined8 *)(lVar17 + 0x28);
              uStack_50 = *(undefined8 *)(lVar17 + 0x30);
              local_68._8_4_ = uVar12;
              Vector<GraphNode::PortCache>::push_back(this + 0xa58);
            }
          }
        }
LAB_0010ac90:
        local_74 = uVar12 + 1;
        local_b4 = iVar14 + local_b4 + iVar3;
      }
      iVar27 = iVar27 + 1;
      iVar14 = Node::get_child_count(SUB81(this,0));
    } while (iVar27 < iVar14);
  }
  this[0xaf8] = (GraphNode)0x0;
  cVar13 = RefCounted::unreference();
  if (cVar13 != '\0') {
    cVar13 = predelete_handler(pOVar23);
    if (cVar13 != '\0') {
      (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
      Memory::free_static(pOVar23,false);
    }
  }
  cVar13 = RefCounted::unreference();
  if (cVar13 != '\0') {
    cVar13 = predelete_handler(pOVar26);
    if (cVar13 != '\0') {
      (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar26,false);
        return;
      }
      goto LAB_0010af3d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010af3d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::get_input_port_count() */

undefined4 __thiscall GraphNode::get_input_port_count(GraphNode *this)

{
  if (this[0xaf8] != (GraphNode)0x0) {
    _port_pos_update(this);
  }
  if (*(long *)(this + 0xa50) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xa50) + -8);
  }
  return 0;
}



/* GraphNode::get_output_port_count() */

undefined4 __thiscall GraphNode::get_output_port_count(GraphNode *this)

{
  if (this[0xaf8] != (GraphNode)0x0) {
    _port_pos_update(this);
  }
  if (*(long *)(this + 0xa60) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xa60) + -8);
  }
  return 0;
}



/* GraphNode::get_input_port_position(int) */

undefined8 __thiscall GraphNode::get_input_port_position(GraphNode *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  if (this[0xaf8] == (GraphNode)0x0) {
    lVar1 = *(long *)(this + 0xa50);
    if (-1 < param_1) goto LAB_0010aff6;
LAB_0010b033:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      goto LAB_0010b03c;
    }
  }
  else {
    _port_pos_update(this);
    lVar1 = *(long *)(this + 0xa50);
    if (param_1 < 0) goto LAB_0010b033;
LAB_0010aff6:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      if (param_1 < lVar2) {
        return *(undefined8 *)(lVar1 + (long)param_1 * 0x20);
      }
      goto LAB_0010b03c;
    }
  }
  lVar2 = 0;
LAB_0010b03c:
  _err_print_index_error
            ("get_input_port_position","scene/gui/graph_node.cpp",0x2cb,(long)param_1,lVar2,
             "p_port_idx","left_port_cache.size()","",false,false);
  return 0;
}



/* GraphNode::get_input_port_type(int) */

undefined4 __thiscall GraphNode::get_input_port_type(GraphNode *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  if (this[0xaf8] == (GraphNode)0x0) {
    lVar1 = *(long *)(this + 0xa50);
    if (-1 < param_1) goto LAB_0010b0b6;
LAB_0010b0eb:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      goto LAB_0010b0f4;
    }
  }
  else {
    _port_pos_update(this);
    lVar1 = *(long *)(this + 0xa50);
    if (param_1 < 0) goto LAB_0010b0eb;
LAB_0010b0b6:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      if (param_1 < lVar2) {
        return *(undefined4 *)(lVar1 + 0xc + (long)param_1 * 0x20);
      }
      goto LAB_0010b0f4;
    }
  }
  lVar2 = 0;
LAB_0010b0f4:
  _err_print_index_error
            ("get_input_port_type","scene/gui/graph_node.cpp",0x2d5,(long)param_1,lVar2,"p_port_idx"
             ,"left_port_cache.size()","",false,false);
  return 0;
}



/* GraphNode::get_input_port_color(int) */

undefined1  [16] __thiscall GraphNode::get_input_port_color(GraphNode *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (this[0xaf8] == (GraphNode)0x0) {
    lVar1 = *(long *)(this + 0xa50);
    if (-1 < param_1) goto LAB_0010b166;
LAB_0010b1b3:
    if (lVar1 == 0) goto LAB_0010b208;
    lVar3 = *(long *)(lVar1 + -8);
  }
  else {
    _port_pos_update(this);
    lVar1 = *(long *)(this + 0xa50);
    if (param_1 < 0) goto LAB_0010b1b3;
LAB_0010b166:
    if (lVar1 == 0) {
LAB_0010b208:
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(lVar1 + -8);
      if (param_1 < lVar3) {
        lVar3 = (long)param_1 * 0x20;
        uVar4 = *(undefined8 *)(lVar1 + 0x10 + lVar3);
        uVar2 = *(undefined8 *)(lVar1 + 0x18 + lVar3);
        goto LAB_0010b186;
      }
    }
  }
  _err_print_index_error
            ("get_input_port_color","scene/gui/graph_node.cpp",0x2de,(long)param_1,lVar3,
             "p_port_idx","left_port_cache.size()","",false,false);
  uVar4 = 0;
  uVar2 = 0x3f80000000000000;
LAB_0010b186:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* GraphNode::get_input_port_slot(int) */

undefined4 __thiscall GraphNode::get_input_port_slot(GraphNode *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  if (this[0xaf8] == (GraphNode)0x0) {
    lVar1 = *(long *)(this + 0xa50);
    if (-1 < param_1) goto LAB_0010b236;
LAB_0010b273:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      goto LAB_0010b27c;
    }
  }
  else {
    _port_pos_update(this);
    lVar1 = *(long *)(this + 0xa50);
    if (param_1 < 0) goto LAB_0010b273;
LAB_0010b236:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      if (param_1 < lVar2) {
        return *(undefined4 *)(lVar1 + 8 + (long)param_1 * 0x20);
      }
      goto LAB_0010b27c;
    }
  }
  lVar2 = 0;
LAB_0010b27c:
  _err_print_index_error
            ("get_input_port_slot","scene/gui/graph_node.cpp",0x2e7,(long)param_1,lVar2,"p_port_idx"
             ,"left_port_cache.size()","",false,false);
  return 0xffffffff;
}



/* GraphNode::get_output_port_position(int) */

undefined8 __thiscall GraphNode::get_output_port_position(GraphNode *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  if (this[0xaf8] == (GraphNode)0x0) {
    lVar1 = *(long *)(this + 0xa60);
    if (-1 < param_1) goto LAB_0010b2f6;
LAB_0010b333:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      goto LAB_0010b33c;
    }
  }
  else {
    _port_pos_update(this);
    lVar1 = *(long *)(this + 0xa60);
    if (param_1 < 0) goto LAB_0010b333;
LAB_0010b2f6:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      if (param_1 < lVar2) {
        return *(undefined8 *)(lVar1 + (long)param_1 * 0x20);
      }
      goto LAB_0010b33c;
    }
  }
  lVar2 = 0;
LAB_0010b33c:
  _err_print_index_error
            ("get_output_port_position","scene/gui/graph_node.cpp",0x2f0,(long)param_1,lVar2,
             "p_port_idx","right_port_cache.size()","",false,false);
  return 0;
}



/* GraphNode::get_output_port_type(int) */

undefined4 __thiscall GraphNode::get_output_port_type(GraphNode *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  if (this[0xaf8] == (GraphNode)0x0) {
    lVar1 = *(long *)(this + 0xa60);
    if (-1 < param_1) goto LAB_0010b3b6;
LAB_0010b3eb:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      goto LAB_0010b3f4;
    }
  }
  else {
    _port_pos_update(this);
    lVar1 = *(long *)(this + 0xa60);
    if (param_1 < 0) goto LAB_0010b3eb;
LAB_0010b3b6:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      if (param_1 < lVar2) {
        return *(undefined4 *)(lVar1 + 0xc + (long)param_1 * 0x20);
      }
      goto LAB_0010b3f4;
    }
  }
  lVar2 = 0;
LAB_0010b3f4:
  _err_print_index_error
            ("get_output_port_type","scene/gui/graph_node.cpp",0x2fa,(long)param_1,lVar2,
             "p_port_idx","right_port_cache.size()","",false,false);
  return 0;
}



/* GraphNode::get_output_port_color(int) */

undefined1  [16] __thiscall GraphNode::get_output_port_color(GraphNode *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (this[0xaf8] == (GraphNode)0x0) {
    lVar1 = *(long *)(this + 0xa60);
    if (-1 < param_1) goto LAB_0010b466;
LAB_0010b4b3:
    if (lVar1 == 0) goto LAB_0010b508;
    lVar3 = *(long *)(lVar1 + -8);
  }
  else {
    _port_pos_update(this);
    lVar1 = *(long *)(this + 0xa60);
    if (param_1 < 0) goto LAB_0010b4b3;
LAB_0010b466:
    if (lVar1 == 0) {
LAB_0010b508:
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(lVar1 + -8);
      if (param_1 < lVar3) {
        lVar3 = (long)param_1 * 0x20;
        uVar4 = *(undefined8 *)(lVar1 + 0x10 + lVar3);
        uVar2 = *(undefined8 *)(lVar1 + 0x18 + lVar3);
        goto LAB_0010b486;
      }
    }
  }
  _err_print_index_error
            ("get_output_port_color","scene/gui/graph_node.cpp",0x303,(long)param_1,lVar3,
             "p_port_idx","right_port_cache.size()","",false,false);
  uVar4 = 0;
  uVar2 = 0x3f80000000000000;
LAB_0010b486:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* GraphNode::get_output_port_slot(int) */

undefined4 __thiscall GraphNode::get_output_port_slot(GraphNode *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  if (this[0xaf8] == (GraphNode)0x0) {
    lVar1 = *(long *)(this + 0xa60);
    if (-1 < param_1) goto LAB_0010b536;
LAB_0010b573:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      goto LAB_0010b57c;
    }
  }
  else {
    _port_pos_update(this);
    lVar1 = *(long *)(this + 0xa60);
    if (param_1 < 0) goto LAB_0010b573;
LAB_0010b536:
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      if (param_1 < lVar2) {
        return *(undefined4 *)(lVar1 + 8 + (long)param_1 * 0x20);
      }
      goto LAB_0010b57c;
    }
  }
  lVar2 = 0;
LAB_0010b57c:
  _err_print_index_error
            ("get_output_port_slot","scene/gui/graph_node.cpp",0x30c,(long)param_1,lVar2,
             "p_port_idx","right_port_cache.size()","",false,false);
  return 0xffffffff;
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



/* MethodBindTR<Color, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Color,int>::_gen_argument_type(MethodBindTR<Color,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffee) + 0x14;
}



/* MethodBindTR<Color, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Color,int>::get_argument_meta(MethodBindTR<Color,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<int, int>::get_argument_meta(int) const */

char __thiscall MethodBindTR<int,int>::get_argument_meta(MethodBindTR<int,int> *this,int param_1)

{
  return (param_1 < 1) * '\x03';
}



/* MethodBindTR<Vector2, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Vector2,int>::_gen_argument_type(MethodBindTR<Vector2,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffd) + 5;
}



/* MethodBindTR<Vector2, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Vector2,int>::get_argument_meta(MethodBindTR<Vector2,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTR<int>::get_argument_meta(MethodBindTR<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
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



/* MethodBindTRC<Ref<Texture2D>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<Texture2D>,int>::_gen_argument_type
          (MethodBindTRC<Ref<Texture2D>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Ref<Texture2D>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Ref<Texture2D>,int>::get_argument_meta
          (MethodBindTRC<Ref<Texture2D>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Ref<Texture2D> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<int,Ref<Texture2D>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<int, Ref<Texture2D> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Ref<Texture2D>const&>::get_argument_meta
          (MethodBindT<int,Ref<Texture2D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Color, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Color,int>::_gen_argument_type(MethodBindTRC<Color,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffee) + 0x14;
}



/* MethodBindTRC<Color, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Color,int>::get_argument_meta(MethodBindTRC<Color,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Color const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Color_const&>::_gen_argument_type(MethodBindT<int,Color_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffee) + 0x14;
  }
  return iVar1;
}



/* MethodBindT<int, Color const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Color_const&>::get_argument_meta(MethodBindT<int,Color_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindT<int, int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,int>::_gen_argument_type(MethodBindT<int,int> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<int, int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,int>::get_argument_meta(MethodBindT<int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindT<int, bool>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<int, bool>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<bool, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int>::_gen_argument_type(MethodBindTRC<bool,int> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int>::get_argument_meta(MethodBindTRC<bool,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindTR<HBoxContainer*>::_gen_argument_type(int) const */

undefined8 MethodBindTR<HBoxContainer*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<HBoxContainer*>::get_argument_meta(int) const */

undefined8 MethodBindTR<HBoxContainer*>::get_argument_meta(int param_1)

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



/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
::_gen_argument_type
          (MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
           *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((((uint)param_1 < 10) && (uVar1 = 2, param_1 != 0)) && (uVar1 = 1, param_1 != 1)) &&
     ((uVar1 = 2, param_1 != 2 && (uVar1 = 0x14, param_1 != 3)))) {
    if (param_1 == 4) {
      return 1;
    }
    uVar1 = 2;
    if ((param_1 != 5) && (uVar1 = 0x14, param_1 != 6)) {
      uVar1 = 0x18;
      if (param_1 == 9) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  return uVar1;
}



/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::get_argument_meta(int) const */

char __thiscall
MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
::get_argument_meta(MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
                    *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if ((((param_1 != 0) && (cVar1 = '\0', param_1 != 1)) && (cVar1 = '\x03', param_1 != 2)) &&
     ((cVar1 = '\0', param_1 != 3 && (param_1 != 4)))) {
    return (param_1 == 5) * '\x03';
  }
  return cVar1;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121690;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121690;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001216f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001216f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<HBoxContainer*>::~MethodBindTR() */

void __thiscall MethodBindTR<HBoxContainer*>::~MethodBindTR(MethodBindTR<HBoxContainer*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121750;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<HBoxContainer*>::~MethodBindTR() */

void __thiscall MethodBindTR<HBoxContainer*>::~MethodBindTR(MethodBindTR<HBoxContainer*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121750;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
::~MethodBindT(MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001217b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
::~MethodBindT(MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001217b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121810;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121810;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121870;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121870;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121990;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121990;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001219f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001219f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Color const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Color_const&>::~MethodBindT(MethodBindT<int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121a50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Color const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Color_const&>::~MethodBindT(MethodBindT<int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121a50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Color, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color,int>::~MethodBindTRC(MethodBindTRC<Color,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Color, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color,int>::~MethodBindTRC(MethodBindTRC<Color,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121b10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121b10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121b70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121b70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001218d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001218d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121930;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121930;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector2, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector2,int>::~MethodBindTR(MethodBindTR<Vector2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121cf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector2, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector2,int>::~MethodBindTR(MethodBindTR<Vector2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121cf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Color, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Color,int>::~MethodBindTR(MethodBindTR<Color,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121db0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Color, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Color,int>::~MethodBindTR(MethodBindTR<Color,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121db0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int, int>::~MethodBindTR() */

void __thiscall MethodBindTR<int,int>::~MethodBindTR(MethodBindTR<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121d50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int, int>::~MethodBindTR() */

void __thiscall MethodBindTR<int,int>::~MethodBindTR(MethodBindTR<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121d50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* GraphNode::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GraphNode::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
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



/* GraphNode::_property_can_revertv(StringName const&) const */

undefined8 GraphNode::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<GraphNode::PortCache>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GraphNode::PortCache>::_copy_on_write(void)

{
  code *pcVar1;
  
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#7}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#7}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000ad4 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#10}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#10}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  undefined8 in_XMM1_Qa;
  
  Control::get_theme_item();
  _DAT_00000ae8 = Variant::operator_cast_to_Color((Variant *)&stack0x00000000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  _DAT_00000af0 = in_XMM1_Qa;
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#6}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#6}>
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



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#3}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#3}>
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#5}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#5}>
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#4}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#4}>
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#8}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#8}>
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
   GraphNode::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#9}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GraphNode::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#9}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::get_validated_object();
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



/* GraphNode::_bind_methods() [clone .cold] */

void GraphNode::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GraphNode::_validate_propertyv(PropertyInfo&) const */

void GraphNode::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129010 == Control::_validate_property) {
    return;
  }
  GraphElement::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* GraphNode::is_class_ptr(void*) const */

uint GraphNode::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x121e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121e,in_RSI == &GraphElement::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
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
    uVar1 = (uint)CONCAT71(0x121e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121e,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    if ((code *)PTR__set_00129020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010cc38) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
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
      if (StringName::configured == '\0') goto LAB_0010cca0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cca0:
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
      if (StringName::configured == '\0') goto LAB_0010cd00;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cd00:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00129030 != Container::_notification) {
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
  if ((code *)PTR__notification_00129030 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* GraphNode::_get_class_namev() const */

undefined8 * GraphNode::_get_class_namev(void)

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
LAB_0010ce73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ce73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GraphNode");
      goto LAB_0010cede;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GraphNode");
LAB_0010cede:
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
LAB_0010cf63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cf63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010cfce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010cfce:
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



/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Variant *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Texture2D::typeinfo,0);
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



/* HashMap<int, GraphNode::Slot, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, GraphNode::Slot> > >::operator[](int const&) const */

long __thiscall
HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
::operator[](HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
             *this,int *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  
  lVar2 = *(long *)(this + 8);
  uVar1 = *param_1;
  if ((lVar2 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar13 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar13 ^ uVar13 >> 0x10;
    if (uVar13 == uVar13 >> 0x10) {
      uVar17 = 1;
      uVar15 = uVar3;
    }
    else {
      uVar15 = uVar17 * uVar3;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar19;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar15;
    lVar16 = SUB168(auVar4 * auVar8,8);
    uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar13 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) && (uVar1 == *(uint *)(*(long *)(lVar2 + lVar16 * 8) + 0x10))) {
          return *(long *)(lVar2 + (ulong)uVar14 * 8) + 0x18;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (uVar14 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar16 = SUB168(auVar5 * auVar9,8);
        uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar13 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar13 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                              + uVar14) - SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Control*, GraphNode::_MinSizeCache, HashMapHasherDefault,
   HashMapComparatorDefault<Control*>, DefaultTypedAllocator<HashMapElement<Control*,
   GraphNode::_MinSizeCache> > >::operator[](Control* const&) */

undefined1  [16] __thiscall
HashMap<Control*,GraphNode::_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,GraphNode::_MinSizeCache>>>
::operator[](HashMap<Control*,GraphNode::_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,GraphNode::_MinSizeCache>>>
             *this,Control **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
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
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  Control *pCVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pCVar56 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x10df0a;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pCVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010da1b;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar39)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        pCVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x10df52;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pCVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_0010ddd3;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pCVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar52 + lVar45 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar50 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar44) &&
             (pCVar56 == *(Control **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar52 + lVar45 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar50 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_0010ddd3:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pCVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar52 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(Control **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == pCVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            pauVar42[1][0xc] = 0;
            *(undefined4 *)pauVar42[2] = 0;
            lStack_90 = lVar46;
            goto LAB_0010ddb4;
          }
          uVar53 = uVar53 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar51;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar52 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar51, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar53 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_0010da1b:
  if ((float)uVar55 * __LC20 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010ddb4;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar39 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar55 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar55;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar52 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar50 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar53 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar48 = uVar41;
            if (uVar38 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar50;
              uVar49 = uVar38;
            }
            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar52 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  pCVar56 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x28,"");
  *(Control **)pauVar42[1] = pCVar56;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  pauVar42[1][0xc] = 0;
  *(undefined4 *)pauVar42[2] = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar52 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = (long)*param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar55 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar53 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010ddb4:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
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



/* MethodDefinition D_METHOD<char const*, char const*>(char const*, char const* const, char const*
   const) */

char * D_METHOD<char_const*,char_const*>(char *param_1,char *param_2,char *param_3)

{
  long in_FS_OFFSET;
  char *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 *local_28;
  undefined1 *puStack_20;
  long local_10;
  
  local_28 = (undefined1 *)&local_48;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_20 = local_40;
  local_38 = 0;
  local_48 = param_3;
  D_METHODP(param_1,(char ***)param_2,(uint)&local_28);
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



/* WARNING: Removing unreachable block (ram,0x0010e348) */
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



/* GraphNode::~GraphNode() */

void __thiscall GraphNode::~GraphNode(GraphNode *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  bVar7 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00121308;
  if ((bVar7) && (*(long *)(this + 0xb00) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0xae0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xae0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xad8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xad8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xac8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xac0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xac0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xab8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xab8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xab0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xab0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xaa8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xaa8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xaa0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xaa0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0xaa0);
      *(undefined8 *)(this + 0xaa0) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0xa70);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xa94) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xa94) = 0;
        *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa78) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0xa78) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x50) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x50);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            if (*(long *)((long)pvVar6 + 0x30) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x30);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xa70);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xa94) = 0;
        *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010e6a5;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xa78),false);
  }
LAB_0010e6a5:
  if (*(long *)(this + 0xa60) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa60) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0xa60);
      *(undefined8 *)(this + 0xa60) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0xa50);
      *(undefined8 *)(this + 0xa50) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa40));
  *(code **)this = StringName::StringName;
  if (*(long *)(this + 0xa28) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa28);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar7 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar7) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e74c;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010e74c:
  Control::~Control((Control *)this);
  return;
}



/* GraphNode::~GraphNode() */

void __thiscall GraphNode::~GraphNode(GraphNode *this)

{
  ~GraphNode(this);
  operator_delete(this,0xb18);
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



/* GraphNode::get_class() const */

void GraphNode::get_class(void)

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



/* GetTypeInfo<Vector2i, void>::get_class_info() */

GetTypeInfo<Vector2i,void> * __thiscall
GetTypeInfo<Vector2i,void>::get_class_info(GetTypeInfo<Vector2i,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *(undefined4 *)this = 6;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
      }
      goto LAB_0010ee45;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
LAB_0010ee45:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
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
      goto LAB_0010efa5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0010efa5:
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



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
      }
      goto LAB_0010f105;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
LAB_0010f105:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Color const&, void>::get_class_info() */

GetTypeInfo<Color_const&,void> * __thiscall
GetTypeInfo<Color_const&,void>::get_class_info(GetTypeInfo<Color_const&,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *(undefined4 *)this = 0x14;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
      }
      goto LAB_0010f265;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
LAB_0010f265:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
      }
      goto LAB_0010f3c5;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
LAB_0010f3c5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<HBoxContainer*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<HBoxContainer*>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0xd;
  local_38 = "HBoxContainer";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar1 = 0x18;
  *(undefined8 *)(puVar1 + 2) = 0;
  StringName::StringName((StringName *)(puVar1 + 4),(StringName *)&local_38);
  bVar2 = StringName::configured != '\0';
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 6;
  if ((bVar2) && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_0010f61b;
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
      if (cVar5 != '\0') goto LAB_0010f61b;
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
        if (cVar5 != '\0') goto LAB_0010f61b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_0010f7f8;
    }
  }
LAB_0010f61b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f7f8:
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
    if (cVar5 != '\0') goto LAB_0010f90b;
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
      if (cVar5 != '\0') goto LAB_0010f90b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fa0e;
    }
  }
LAB_0010f90b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fa0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::is_class(String const&) const */

undefined8 __thiscall GraphNode::is_class(GraphNode *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010fb1b;
  }
  cVar5 = String::operator==(param_1,"GraphNode");
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
      if (cVar5 != '\0') goto LAB_0010fb1b;
    }
    cVar5 = String::operator==(param_1,"GraphElement");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fc1e;
    }
  }
LAB_0010fb1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fc1e:
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
    if (cVar5 != '\0') goto LAB_0010fd2b;
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
      if (cVar5 != '\0') goto LAB_0010fd2b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fe2e;
    }
  }
LAB_0010fd2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fe2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
              if ((code *)PTR__bind_methods_00129048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00129038 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
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
      if ((code *)PTR__bind_methods_00129040 != Container::_bind_methods) {
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_50 = 0;
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
      goto LAB_00110535;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_60);
LAB_00110535:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC24;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,4,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_50 = 0;
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
      goto LAB_00110845;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_60);
LAB_00110845:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_78 = 0;
    local_68 = &_LC24;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_70 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_70,0,(StrRange *)&local_78,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
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
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  CowData<char32_t> *local_a8;
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
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = local_58;
  local_b0 = (CowData<char32_t> *)&local_70;
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
  CowData<char32_t>::_unref(local_a8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b0);
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
  if ((code *)PTR__get_property_list_00129050 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
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
    CowData<char32_t>::_unref(local_a8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      goto LAB_001112c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001112c1:
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
  if ((code *)PTR__get_property_list_00129058 != CanvasItem::_get_property_list) {
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
      goto LAB_00111591;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111591:
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
      goto LAB_00111841;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111841:
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
      goto LAB_00111af1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111af1:
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



/* GraphElement::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GraphElement::_get_property_listv(GraphElement *this,List *param_1,bool param_2)

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
  local_78 = "GraphElement";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GraphElement";
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
      goto LAB_00111da1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111da1:
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
  StringName::StringName((StringName *)&local_78,"GraphElement",false);
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



/* GraphNode::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GraphNode::_get_property_listv(GraphNode *this,List *param_1,bool param_2)

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
    GraphElement::_get_property_listv((GraphElement *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GraphNode";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GraphNode";
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
      goto LAB_00112051;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112051:
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
  StringName::StringName((StringName *)&local_78,"GraphNode",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GraphElement::_get_property_listv((GraphElement *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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



/* GraphNode::_getv(StringName const&, Variant&) const */

undefined8 __thiscall GraphNode::_getv(GraphNode *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _get(this,param_1,param_2);
  if ((cVar1 == '\0') &&
     (((code *)PTR__get_00129028 == CanvasItem::_get ||
      (cVar1 = Control::_get((StringName *)this,(Variant *)param_1), cVar1 == '\0')))) {
    uVar2 = CanvasItem::_get((StringName *)this,(Variant *)param_1);
    return uVar2;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, GraphNode::Slot, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, GraphNode::Slot> > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
::operator[](HashMap<int,GraphNode::Slot,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GraphNode::Slot>>>
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 (*pauVar25) [16];
  char cVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 uVar31;
  void *__s_00;
  undefined1 (*pauVar32) [16];
  void *pvVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  undefined8 uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined1 (*pauVar42) [16];
  long in_FS_OFFSET;
  uint local_100;
  uint local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_a8 [16];
  uint local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_40;
  
  uVar28 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0;
  cVar26 = _lookup_pos(this,(int *)(ulong)uVar28,&local_100);
  if (cVar26 != '\0') {
    pauVar32 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_100 * 8);
    goto LAB_00112912;
  }
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_b8 = 1;
  auVar23._4_4_ = _LC63;
  auVar23._0_4_ = _LC63;
  auVar23._8_8_ = 0;
  local_f8 = auVar23 << 0x40;
  local_e8._4_4_ = _LC63;
  local_e8._0_4_ = _LC63;
  local_e8._8_8_ = 0;
  auVar24._4_4_ = _LC63;
  auVar24._0_4_ = _LC63;
  auVar24._8_8_ = 0;
  local_d8 = auVar24 << 0x40;
  local_c8._4_4_ = _LC63;
  local_c8._0_4_ = _LC63;
  local_c8._8_8_ = 0;
  if (*(long *)(this + 8) == 0) {
    uVar37 = (ulong)uVar29;
    uVar30 = uVar37 * 4;
    uVar41 = uVar37 * 8;
    uVar31 = Memory::alloc_static(uVar30,false);
    *(undefined8 *)(this + 0x10) = uVar31;
    pvVar33 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = pvVar33;
    if (uVar29 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar33 + uVar41)) && (pvVar33 < (void *)((long)pvVar4 + uVar30))
         ) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar30 * 4) = 0;
          *(undefined8 *)((long)pvVar33 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar37 != uVar30);
      }
      else {
        memset(pvVar4,0,uVar30);
        memset(pvVar33,0,uVar41);
      }
    }
    uVar28 = *param_1;
  }
  local_fc = 0;
  cVar26 = _lookup_pos(this,(int *)(ulong)uVar28,&local_fc);
  if (cVar26 == '\0') {
    if ((float)uVar29 * __LC20 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar28 = *(uint *)(this + 0x28);
      if (uVar28 == 0x1c) {
        pauVar32 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_001128f7;
      }
      uVar30 = (ulong)(uVar28 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)uVar28 * 4);
      if (uVar28 + 1 < 2) {
        uVar30 = 2;
      }
      uVar28 = *(uint *)(hash_table_size_primes + uVar30 * 4);
      uVar37 = (ulong)uVar28;
      *(int *)(this + 0x28) = (int)uVar30;
      pvVar33 = *(void **)(this + 8);
      uVar30 = uVar37 * 4;
      uVar41 = uVar37 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar31 = Memory::alloc_static(uVar30,false);
      *(undefined8 *)(this + 0x10) = uVar31;
      __s_00 = (void *)Memory::alloc_static(uVar41,false);
      *(void **)(this + 8) = __s_00;
      if (uVar28 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar30))) {
          uVar30 = 0;
          do {
            *(undefined4 *)((long)__s + uVar30 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar30 * 8) = 0;
            uVar30 = uVar30 + 1;
          } while (uVar37 != uVar30);
        }
        else {
          memset(__s,0,uVar30);
          memset(__s_00,0,uVar41);
        }
      }
      if (uVar29 == 0) {
        uVar28 = *param_1;
      }
      else {
        uVar30 = 0;
        do {
          uVar28 = *(uint *)((long)pvVar4 + uVar30 * 4);
          if (uVar28 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar39 = 0;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar41 = CONCAT44(0,uVar3);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar28 * lVar6;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar41;
            lVar35 = SUB168(auVar7 * auVar15,8);
            puVar1 = (uint *)(lVar5 + lVar35 * 4);
            iVar34 = SUB164(auVar7 * auVar15,8);
            uVar40 = *puVar1;
            uVar31 = *(undefined8 *)((long)pvVar33 + uVar30 * 8);
            while (uVar40 != 0) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar40 * lVar6;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar41;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar3 + iVar34) - SUB164(auVar8 * auVar16,8)) * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar41;
              uVar27 = SUB164(auVar9 * auVar17,8);
              uVar38 = uVar31;
              if (uVar27 < uVar39) {
                *puVar1 = uVar28;
                puVar2 = (undefined8 *)((long)__s_00 + lVar35 * 8);
                uVar38 = *puVar2;
                *puVar2 = uVar31;
                uVar28 = uVar40;
                uVar39 = uVar27;
              }
              uVar39 = uVar39 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar34 + 1) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar41;
              lVar35 = SUB168(auVar10 * auVar18,8);
              puVar1 = (uint *)(lVar5 + lVar35 * 4);
              iVar34 = SUB164(auVar10 * auVar18,8);
              uVar31 = uVar38;
              uVar40 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar35 * 8) = uVar31;
            *puVar1 = uVar28;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar30 = uVar30 + 1;
        } while (uVar29 != uVar30);
        Memory::free_static(pvVar33,false);
        Memory::free_static(pvVar4,false);
        uVar28 = *param_1;
      }
    }
    local_a8 = (undefined1  [16])0x0;
    local_88 = local_f8._8_8_;
    uStack_80 = local_e8._0_8_;
    local_68 = local_d8._8_8_;
    uStack_60 = local_c8._0_8_;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_58 = 0;
    local_50 = 1;
    local_98 = uVar28;
    pauVar32 = (undefined1 (*) [16])operator_new(0x60,"");
    *(uint *)pauVar32[1] = uVar28;
    pauVar32[1][8] = 0;
    *(undefined4 *)(pauVar32[1] + 0xc) = 0;
    *(undefined8 *)pauVar32[3] = 0;
    *pauVar32 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar32[2] = local_88;
    *(undefined8 *)(pauVar32[2] + 8) = uStack_80;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)(pauVar32 + 3),(Ref *)0x0);
    pauVar32[3][8] = 0;
    *(undefined4 *)(pauVar32[3] + 0xc) = 0;
    *(undefined8 *)pauVar32[5] = 0;
    *(undefined8 *)pauVar32[4] = local_68;
    *(undefined8 *)(pauVar32[4] + 8) = uStack_60;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)(pauVar32 + 5),(Ref *)0x0);
    pauVar32[5][8] = 1;
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
    puVar2 = *(undefined8 **)(this + 0x20);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar32;
    }
    else {
      *puVar2 = pauVar32;
      *(undefined8 **)(*pauVar32 + 8) = puVar2;
    }
    uVar28 = *param_1;
    *(undefined1 (**) [16])(this + 0x20) = pauVar32;
    uVar28 = (uVar28 >> 0x10 ^ uVar28) * -0x7a143595;
    uVar29 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar28 = uVar29 ^ uVar29 >> 0x10;
    if (uVar29 == uVar29 >> 0x10) {
      uVar30 = 1;
      uVar28 = 1;
    }
    else {
      uVar30 = (ulong)uVar28;
    }
    uVar40 = 0;
    lVar5 = *(long *)(this + 0x10);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar41 = CONCAT44(0,uVar29);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar30 * lVar6;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar41;
    lVar36 = SUB168(auVar11 * auVar19,8);
    lVar35 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar36 * 4);
    iVar34 = SUB164(auVar11 * auVar19,8);
    uVar3 = *puVar1;
    pauVar25 = pauVar32;
    while (uVar3 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar3 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar41;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((iVar34 + uVar29) - SUB164(auVar12 * auVar20,8)) * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar41;
      uVar39 = SUB164(auVar13 * auVar21,8);
      pauVar42 = pauVar25;
      if (uVar39 < uVar40) {
        *puVar1 = uVar28;
        puVar2 = (undefined8 *)(lVar35 + lVar36 * 8);
        pauVar42 = (undefined1 (*) [16])*puVar2;
        *puVar2 = pauVar25;
        uVar28 = uVar3;
        uVar40 = uVar39;
      }
      uVar40 = uVar40 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar34 + 1) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar41;
      lVar36 = SUB168(auVar14 * auVar22,8);
      puVar1 = (uint *)(lVar5 + lVar36 * 4);
      iVar34 = SUB164(auVar14 * auVar22,8);
      pauVar25 = pauVar42;
      uVar3 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar35 + lVar36 * 8) = pauVar25;
    *puVar1 = uVar28;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar30 = (ulong)local_fc;
    lVar5 = *(long *)(*(long *)(this + 8) + uVar30 * 8);
    *(undefined1 *)(lVar5 + 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x1c) = 0;
    *(undefined8 *)(lVar5 + 0x20) = local_f8._8_8_;
    *(undefined8 *)(lVar5 + 0x28) = local_e8._0_8_;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)(lVar5 + 0x30),(Ref *)0x0);
    *(undefined1 *)(lVar5 + 0x38) = 0;
    *(undefined4 *)(lVar5 + 0x3c) = 0;
    *(undefined8 *)(lVar5 + 0x40) = local_d8._8_8_;
    *(undefined8 *)(lVar5 + 0x48) = local_c8._0_8_;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)(lVar5 + 0x50),(Ref *)0x0);
    lVar6 = *(long *)(this + 8);
    *(undefined1 *)(lVar5 + 0x58) = 1;
    pauVar32 = *(undefined1 (**) [16])(lVar6 + uVar30 * 8);
  }
LAB_001128f7:
  Ref<Texture2D>::unref((Ref<Texture2D> *)(local_c8 + 8));
  Ref<Texture2D>::unref((Ref<Texture2D> *)(local_e8 + 8));
LAB_00112912:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar32[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphNode::_setv(StringName const&, Variant const&) */

undefined8 __thiscall GraphNode::_setv(GraphNode *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = CanvasItem::_set((StringName *)this,(Variant *)param_1);
  if ((cVar1 == '\0') &&
     (((code *)PTR__set_00129020 == CanvasItem::_set ||
      (cVar1 = Control::_set((StringName *)this,(Variant *)param_1), cVar1 == '\0')))) {
    uVar2 = _set(this,param_1,param_2);
    return uVar2;
  }
  return 1;
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



/* GraphNode::_notificationv(int, bool) */

void __thiscall GraphNode::_notificationv(GraphNode *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x1e) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00129060 != Container::_notification) {
      GraphElement::_notification(iVar1);
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
  if ((code *)PTR__notification_00129060 != Container::_notification) {
    GraphElement::_notification(iVar1);
  }
  if (param_1 != 0x1e) {
    return;
  }
  _notification(iVar1);
  return;
}



/* MethodBind* create_method_bind<GraphNode, String const&>(void (GraphNode::*)(String const&)) */

MethodBind * create_method_bind<GraphNode,String_const&>(_func_void_String_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00121690;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, String>(String (GraphNode::*)() const) */

MethodBind * create_method_bind<GraphNode,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001216f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, HBoxContainer*>(HBoxContainer* (GraphNode::*)()) */

MethodBind * create_method_bind<GraphNode,HBoxContainer*>(_func_HBoxContainer_ptr *param_1)

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
  *(_func_HBoxContainer_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121750;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int, bool, int, Color const&, bool, int, Color const&,
   Ref<Texture2D> const&, Ref<Texture2D> const&, bool>(void (GraphNode::*)(int, bool, int, Color
   const&, bool, int, Color const&, Ref<Texture2D> const&, Ref<Texture2D> const&, bool)) */

MethodBind *
create_method_bind<GraphNode,int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
          (_func_void_int_bool_int_Color_ptr_bool_int_Color_ptr_Ref_ptr_Ref_ptr_bool *param_1)

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
  *(_func_void_int_bool_int_Color_ptr_bool_int_Color_ptr_Ref_ptr_Ref_ptr_bool **)(this + 0x58) =
       param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001217b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 10;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int>(void (GraphNode::*)(int)) */

MethodBind * create_method_bind<GraphNode,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00121810;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode>(void (GraphNode::*)()) */

MethodBind * create_method_bind<GraphNode>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00121870;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, bool, int>(bool (GraphNode::*)(int) const) */

MethodBind * create_method_bind<GraphNode,bool,int>(_func_bool_int *param_1)

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
  *(_func_bool_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001218d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int, bool>(void (GraphNode::*)(int, bool)) */

MethodBind * create_method_bind<GraphNode,int,bool>(_func_void_int_bool *param_1)

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
  *(_func_void_int_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121930;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int, int>(void (GraphNode::*)(int, int)) */

MethodBind * create_method_bind<GraphNode,int,int>(_func_void_int_int *param_1)

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
  *(_func_void_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121990;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int, int>(int (GraphNode::*)(int) const) */

MethodBind * create_method_bind<GraphNode,int,int>(_func_int_int *param_1)

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
  *(_func_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001219f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int, Color const&>(void (GraphNode::*)(int, Color
   const&)) */

MethodBind * create_method_bind<GraphNode,int,Color_const&>(_func_void_int_Color_ptr *param_1)

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
  *(_func_void_int_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121a50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, Color, int>(Color (GraphNode::*)(int) const) */

MethodBind * create_method_bind<GraphNode,Color,int>(_func_Color_int *param_1)

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
  *(_func_Color_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121ab0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int, Ref<Texture2D> const&>(void (GraphNode::*)(int,
   Ref<Texture2D> const&)) */

MethodBind * create_method_bind<GraphNode,int,Ref<Texture2D>const&>(_func_void_int_Ref_ptr *param_1)

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
  *(_func_void_int_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121b10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, Ref<Texture2D>, int>(Ref<Texture2D> (GraphNode::*)(int)
   const) */

MethodBind * create_method_bind<GraphNode,Ref<Texture2D>,int>(_func_Ref_int *param_1)

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
  *(_func_Ref_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121b70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, bool>(void (GraphNode::*)(bool)) */

MethodBind * create_method_bind<GraphNode,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00121bd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, bool>(bool (GraphNode::*)() const) */

MethodBind * create_method_bind<GraphNode,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00121c30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int>(int (GraphNode::*)()) */

MethodBind * create_method_bind<GraphNode,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00121c90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, Vector2, int>(Vector2 (GraphNode::*)(int)) */

MethodBind * create_method_bind<GraphNode,Vector2,int>(_func_Vector2_int *param_1)

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
  *(_func_Vector2_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121cf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, int, int>(int (GraphNode::*)(int)) */

MethodBind * create_method_bind<GraphNode,int,int>(_func_int_int *param_1)

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
  *(_func_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121d50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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



/* MethodBind* create_method_bind<GraphNode, Color, int>(Color (GraphNode::*)(int)) */

MethodBind * create_method_bind<GraphNode,Color,int>(_func_Color_int *param_1)

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
  *(_func_Color_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121db0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GraphNode";
  local_30 = 9;
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
LAB_001145b0:
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
  if (lVar9 == 0) goto LAB_001145b0;
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
    goto LAB_00114606;
  }
  if (lVar9 == lVar5) {
LAB_0011452b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00114606:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011449f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011452b;
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
LAB_0011449f:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00114890:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00114890;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_001147a1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001147a1:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GraphNode::_initialize_classv() */

void GraphNode::_initialize_classv(void)

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
    if (GraphElement::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00129048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00129038 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "GraphElement";
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
      if ((code *)PTR__bind_methods_00129068 != Container::_bind_methods) {
        GraphElement::_bind_methods();
      }
      GraphElement::initialize_class()::initialized = '\x01';
    }
    local_58 = "GraphElement";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GraphNode";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<GraphNode::PortCache>::_realloc(long) */

undefined8 __thiscall
CowData<GraphNode::PortCache>::_realloc(CowData<GraphNode::PortCache> *this,long param_1)

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
/* Error CowData<GraphNode::PortCache>::resize<false>(long) */

undefined8 __thiscall
CowData<GraphNode::PortCache>::resize<false>(CowData<GraphNode::PortCache> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
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
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
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
    lVar4 = lVar10 * 0x20;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_001151c0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x20 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_001151c0;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar8 = _realloc(this,lVar11), (int)uVar8 != 0)) {
      return uVar8;
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
LAB_0011512c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_001150c3;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_0011512c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar4 = 0;
  }
  uVar3 = _UNK_00122048;
  uVar8 = __LC34;
  puVar6 = puVar9 + lVar4 * 4;
  do {
    *puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined4 *)((long)puVar6 + 0xc) = 0;
    puVar6[2] = uVar8;
    puVar6[3] = uVar3;
    puVar6 = puVar7;
  } while (puVar9 + param_1 * 4 != puVar7);
LAB_001150c3:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00115358) */
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



/* MethodBindTR<Color, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTR<Color,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115611;
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
LAB_00115611:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Color, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindTR<Color,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001157ef;
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
LAB_001157ef:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<int,int>::validated_call
          (MethodBindTR<int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001159ca;
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
LAB_001159ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int,int>::ptrcall
          (MethodBindTR<int,int> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115ba8;
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
LAB_00115ba8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector2, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector2,int>::validated_call
          (MethodBindTR<Vector2,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115d8a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00115d8a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector2, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector2,int>::ptrcall
          (MethodBindTR<Vector2,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115f69;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar3;
LAB_00115f69:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116250;
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
LAB_00116250:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<int>::validated_call
          (MethodBindTR<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116464;
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
LAB_00116464:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int>::ptrcall(MethodBindTR<int> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116613;
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
LAB_00116613:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116840;
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
LAB_00116840:
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
      goto LAB_00116a52;
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
LAB_00116a52:
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
      goto LAB_00116c01;
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
LAB_00116c01:
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
      goto LAB_00116f41;
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
                    /* WARNING: Could not recover jumptable at 0x00116dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00116f41:
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
      goto LAB_00117129;
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
                    /* WARNING: Could not recover jumptable at 0x00116fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00117129:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Color,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00117181;
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
LAB_00117181:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Color,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011735f;
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
LAB_0011735f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Color_const&>::validated_call
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001176af;
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
                    /* WARNING: Could not recover jumptable at 0x00117559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001176af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Color_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00117899;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00117722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00117899:
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
      goto LAB_001178ea;
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
LAB_001178ea:
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
      goto LAB_00117ac8;
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
LAB_00117ac8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00117e39;
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
                    /* WARNING: Could not recover jumptable at 0x00117cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00117e39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00118019;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00117ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_00118019:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00118201;
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
                    /* WARNING: Could not recover jumptable at 0x00118086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00118201:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001183f1;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0011827a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_001183f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int>::validated_call
          (MethodBindTRC<bool,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
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
      goto LAB_00118448;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_00118448:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int>::ptrcall
          (MethodBindTRC<bool,int> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
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
      goto LAB_00118627;
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
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_00118627:
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001188d0;
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
LAB_001188d0:
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00118c4f;
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
                    /* WARNING: Could not recover jumptable at 0x00118af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00118c4f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00118e0f;
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
                    /* WARNING: Could not recover jumptable at 0x00118cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00118e0f:
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
      goto LAB_00118ff1;
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
                    /* WARNING: Could not recover jumptable at 0x00118e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118ff1:
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
      goto LAB_001191d1;
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
                    /* WARNING: Could not recover jumptable at 0x0011905b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001191d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<HBoxContainer*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<HBoxContainer*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001192a0;
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
      pOVar2 = (Object *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pOVar2);
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
LAB_001192a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119540;
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
LAB_00119540:
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
      local_48 = (Variant **)0x1154d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011977c;
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
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0011977c:
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
      local_48 = (void **)0x1154d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011994d;
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
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0011994d:
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
      goto LAB_00119c81;
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
                    /* WARNING: Could not recover jumptable at 0x00119b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00119c81:
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
      goto LAB_00119e61;
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
                    /* WARNING: Could not recover jumptable at 0x00119ce9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00119e61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::ptrcall
          (MethodBindTRC<Ref<Texture2D>,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
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
      local_48 = (Object *)0x1154d8;
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
      goto LAB_00119f29;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00119f29;
    *(undefined8 *)param_3 = 0;
    goto LAB_00119f71;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00119f71;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00119f71:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00119f29;
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
LAB_00119f29:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
     ::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined1 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x1154d8;
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a359;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = *(undefined1 *)(*(long *)(param_3 + 0x48) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 0x40) + 0x10));
  local_70 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_70;
  if (pOVar5 != local_70) {
    if (pOVar5 == (Object *)0x0) {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
LAB_0011a221:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_70 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_70 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_0011a221;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 0x38) + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0011a2b8:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_0011a2b8;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),*(undefined8 *)(*(long *)param_3 + 8),
            *(undefined1 *)(*(long *)(param_3 + 8) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x10) + 8),*(long *)(param_3 + 0x18) + 8,
            *(undefined1 *)(*(long *)(param_3 + 0x20) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x28) + 8),*(long *)(param_3 + 0x30) + 8,
            (StringName *)&local_68,&local_70,uVar1);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0011a359:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<int,Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x1154d8;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a719;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar4 != local_68) {
    if (pOVar4 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0011a6d0:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0011a6d0;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(undefined4 *)(*(long *)param_3 + 8),
            (StringName *)&local_68);
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011a719:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
     ::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x1154d8;
      local_50 = (Object *)0x0;
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
      goto LAB_0011aa55;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  cVar4 = **(char **)((long)param_3 + 0x48);
  if ((*(long **)((long)param_3 + 0x40) == (long *)0x0) ||
     (local_50 = (Object *)**(long **)((long)param_3 + 0x40), local_50 == (Object *)0x0)) {
LAB_0011a9ad:
    local_50 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011a9ad;
  }
  if ((*(long **)((long)param_3 + 0x38) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 0x38), local_48 == (Object *)0x0)) {
LAB_0011aa80:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011aa80;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar6)((long *)((long)param_2 + lVar1),**param_3,**(char **)((long)param_3 + 8) != '\0',
            **(undefined8 **)((long)param_3 + 0x10),*(undefined8 *)((long)param_3 + 0x18),
            **(char **)((long)param_3 + 0x20) != '\0',**(undefined8 **)((long)param_3 + 0x28),
            *(undefined8 *)((long)param_3 + 0x30),(StringName *)&local_48,&local_50,cVar4 != '\0');
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_50;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011aa55:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Ref<Texture2D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1154d8;
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011acc8;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_0011ac9d:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011ac9d;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),**param_3,(StringName *)&local_48);
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
LAB_0011acc8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<HBoxContainer*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<HBoxContainer*>::validated_call
          (MethodBindTR<HBoxContainer*> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
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
      goto LAB_0011b01f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_0011b01f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<HBoxContainer*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<HBoxContainer*>::ptrcall
          (MethodBindTR<HBoxContainer*> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b071;
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
LAB_0011b071:
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
  int local_48 [6];
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b320;
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
      if (in_R8D != 1) goto LAB_0011b360;
LAB_0011b350:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011b360:
        uVar7 = 4;
        goto LAB_0011b315;
      }
      if (in_R8D == 1) goto LAB_0011b350;
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
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0011b315:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011b320:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Color,int>::call
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
  int local_48 [6];
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b680;
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
      if (in_R8D != 1) goto LAB_0011b6c0;
LAB_0011b6b0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011b6c0:
        uVar7 = 4;
        goto LAB_0011b675;
      }
      if (in_R8D == 1) goto LAB_0011b6b0;
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
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    local_58[0] = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Color *)local_58);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0011b675:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011b680:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<Texture2D>,int>::call
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
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x1154d8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b9d0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011ba20;
LAB_0011ba10:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011ba20:
        uVar7 = 4;
        goto LAB_0011b9c5;
      }
      if (in_R8D == 1) goto LAB_0011ba10;
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
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Ref<Texture2D> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,local_68);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0011b9c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011b9d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bd70;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011bdb0;
LAB_0011bda0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011bdb0:
        uVar8 = 4;
        goto LAB_0011bd65;
      }
      if (in_R8D == 1) goto LAB_0011bda0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,bVar6);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar8 = 3;
LAB_0011bd65:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011bd70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector2, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Vector2,int>::call
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
  undefined8 local_50;
  int local_48 [6];
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c0c8;
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
      if (in_R8D != 1) goto LAB_0011c110;
LAB_0011c100:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011c110:
        uVar7 = 4;
        goto LAB_0011c0bd;
      }
      if (in_R8D == 1) goto LAB_0011c100;
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
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    local_50 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0011c0bd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011c0c8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Color, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Color,int>::call
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
  int local_48 [6];
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c430;
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
      if (in_R8D != 1) goto LAB_0011c470;
LAB_0011c460:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011c470:
        uVar7 = 4;
        goto LAB_0011c425;
      }
      if (in_R8D == 1) goto LAB_0011c460;
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
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    local_58[0] = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Color *)local_58);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0011c425:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011c430:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int,int>::call
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
  int local_48 [6];
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c780;
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
      if (in_R8D != 1) goto LAB_0011c7c0;
LAB_0011c7b0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011c7c0:
        uVar7 = 4;
        goto LAB_0011c775;
      }
      if (in_R8D == 1) goto LAB_0011c7b0;
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
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    Variant::operator=((Variant *)param_1,(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0011c775:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011c780:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  Object *pOVar15;
  long *plVar16;
  uint uVar17;
  undefined4 in_register_00000014;
  long *plVar18;
  long lVar19;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar20;
  long in_FS_OFFSET;
  long local_d8;
  Object *local_d0;
  Object *local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8 [2];
  Variant *local_98 [11];
  long local_40;
  
  plVar18 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar18 != (long *)0x0) && (plVar18[1] != 0)) && (*(char *)(plVar18[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_c8,(StringName *)(param_2 + 3));
    if (plVar18[1] == 0) {
      plVar16 = (long *)plVar18[0x23];
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)(**(code **)(*plVar18 + 0x40))();
      }
    }
    else {
      plVar16 = (long *)(plVar18[1] + 0x20);
    }
    if (local_c8 == (Object *)*plVar16) {
      if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_c8 = (Object *)0x1154d8;
      local_d0 = (Object *)0x0;
      local_c0 = 0x35;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<StringName>((StringName *)&local_c8,(StrRange *)&local_d0,&local_d8);
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ce1f;
    }
    if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar20 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 0xb) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar10 = 0;
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(pVVar2 + -8);
      iVar10 = (int)lVar19;
    }
    if ((int)(10 - in_R8D) <= iVar10) {
      lVar14 = 0;
      do {
        while ((int)in_R8D <= (int)lVar14) {
          uVar17 = iVar10 + -10 + (int)lVar14;
          if (lVar19 <= (int)uVar17) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar17,lVar19,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_98[lVar14] = pVVar2 + (ulong)uVar17 * 0x18;
          lVar14 = lVar14 + 1;
          if (lVar14 == 10) goto LAB_0011ca50;
        }
        local_98[lVar14] = *(Variant **)(param_4 + lVar14 * 8);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 10);
LAB_0011ca50:
      *in_R9 = 0;
      if (((ulong)pVVar20 & 1) != 0) {
        pVVar20 = *(Variant **)(pVVar20 + *(long *)((long)plVar18 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[9],1);
      uVar4 = _LC176;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_98[9]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[8]);
      uVar4 = _LC177;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_d0 = (Object *)0x0;
      pOVar15 = (Object *)Variant::get_validated_object();
      pOVar5 = local_d0;
      if (pOVar15 != local_d0) {
        if (pOVar15 == (Object *)0x0) {
          if (local_d0 != (Object *)0x0) {
            local_d0 = (Object *)0x0;
LAB_0011ce72:
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
          pOVar15 = (Object *)__dynamic_cast(pOVar15,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar15) {
            local_d0 = pOVar15;
            if (pOVar15 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_d0 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0011ce72;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[7]);
      uVar4 = _LC178;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_c8 = (Object *)0x0;
      pOVar15 = (Object *)Variant::get_validated_object();
      pOVar5 = local_c8;
      if (pOVar15 != local_c8) {
        if (pOVar15 == (Object *)0x0) {
          if (local_c8 != (Object *)0x0) {
            local_c8 = (Object *)0x0;
LAB_0011cec2:
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
          pOVar15 = (Object *)__dynamic_cast(pOVar15,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar15) {
            local_c8 = pOVar15;
            if (pOVar15 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_c8 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0011cec2;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[6],0x14);
      uVar4 = _LC179;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_b8[0] = Variant::operator_cast_to_Color(local_98[6]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[5],2);
      uVar4 = _LC180;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar10 = Variant::operator_cast_to_int(local_98[5]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[4],1);
      uVar4 = _LC181;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar8 = Variant::operator_cast_to_bool(local_98[4]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[3],0x14);
      uVar4 = _LC182;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_a8[0] = Variant::operator_cast_to_Color(local_98[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[2],2);
      uVar4 = _LC183;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar11 = Variant::operator_cast_to_int(local_98[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[1],1);
      uVar4 = _LC184;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar9 = Variant::operator_cast_to_bool(local_98[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[0],2);
      uVar4 = _LC174;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar12 = Variant::operator_cast_to_int(local_98[0]);
      (*(code *)pVVar20)((Variant *)((long)plVar18 + (long)pVVar1),iVar12,bVar9,iVar11,local_a8,
                         bVar8,iVar10,local_b8,&local_c8,&local_d0,bVar7);
      if (local_c8 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_c8;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_c8);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_d0 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_d0;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_d0);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_0011ce1f;
    }
    uVar13 = 4;
  }
  else {
    uVar13 = 3;
  }
  *in_R9 = uVar13;
  in_R9[2] = 10;
LAB_0011ce1f:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d220;
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
      if (in_R8D != 1) goto LAB_0011d270;
LAB_0011d260:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d270:
        uVar6 = 4;
        goto LAB_0011d215;
      }
      if (in_R8D == 1) goto LAB_0011d260;
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
    uVar4 = _LC185;
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
LAB_0011d215:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011d220:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::validated_call
          (MethodBindTRC<Ref<Texture2D>,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      goto LAB_0011d4bc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
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
LAB_0011d4bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    goto LAB_0011d77d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011d7e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011d7e0:
      uVar6 = 4;
LAB_0011d77d:
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
      goto LAB_0011d6fb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011d6fb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC186;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011d757. Too many branches */
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011d846;
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
LAB_0011d846:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0011dc49) */
/* WARNING: Removing unreachable block (ram,0x0011dc51) */
/* WARNING: Removing unreachable block (ram,0x0011dc61) */
/* WARNING: Removing unreachable block (ram,0x0011dc71) */
/* void call_with_variant_args_dv<__UnexistingClass, int, Ref<Texture2D> const&>(__UnexistingClass*,
   void (__UnexistingClass::*)(int, Ref<Texture2D> const&), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Ref<Texture2D>const&>
               (__UnexistingClass *param_1,_func_void_int_Ref_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  Variant *this;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Object *local_38;
  
  plVar10 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)param_5;
  if (uVar12 < 3) {
    lVar8 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar12;
    if (lVar8 == 0) {
      if (iVar6 != 0) goto LAB_0011dbe0;
      this = (Variant *)*plVar10;
LAB_0011dc2d:
      puVar14 = (undefined4 *)plVar10[1];
    }
    else {
      lVar2 = *(long *)(lVar8 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_0011dbe0:
        uVar7 = 4;
        goto LAB_0011dbe5;
      }
      if (uVar12 == 0) {
        lVar11 = (long)(iVar13 + -2);
        if (lVar2 <= lVar11) goto LAB_0011dc98;
        this = (Variant *)(lVar8 + lVar11 * 0x18);
      }
      else {
        this = (Variant *)*plVar10;
        if (uVar12 == 2) goto LAB_0011dc2d;
      }
      lVar11 = (long)(int)((uVar12 ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar11) {
LAB_0011dc98:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar14 = (undefined4 *)(lVar8 + lVar11 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Ref_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar14);
    uVar4 = _LC187;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_38 = (Object *)0x0;
    lVar8 = Variant::get_validated_object();
    if ((((lVar8 != 0) && (lVar8 != 0)) &&
        (pOVar9 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Texture2D::typeinfo,0),
        pOVar9 != (Object *)0x0)) &&
       ((local_38 = pOVar9, pOVar9 != (Object *)0x0 &&
        (cVar5 = RefCounted::reference(), cVar5 == '\0')))) {
      local_38 = (Object *)0x0;
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Ref *)iVar6);
    if (((local_38 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_38), cVar5 != '\0')) {
      (**(code **)(*(long *)local_38 + 0x140))(local_38);
      Memory::free_static(local_38,false);
    }
  }
  else {
    uVar7 = 3;
LAB_0011dbe5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int, Ref<Texture2D> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,Ref<Texture2D>const&>::call
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011dd36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Ref<Texture2D>const&>
            (p_Var2,(_func_void_int_Ref_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011dd36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Color const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Color const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Color_const&>
               (__UnexistingClass *param_1,_func_void_int_Color_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_0011e040;
      this = (Variant *)*plVar9;
LAB_0011e08d:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_0011e040:
        uVar8 = 4;
        goto LAB_0011e045;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_0011e0a8;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0011e08d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_0011e0a8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this_00 = (Variant *)(lVar2 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Color_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,0x14);
    uVar5 = _LC188;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Color(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC174;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Color *)iVar7);
  }
  else {
    uVar8 = 3;
LAB_0011e045:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Color_const&>::call
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e146;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Color_const&>
            (p_Var2,(_func_void_int_Color_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e146:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,int>
               (__UnexistingClass *param_1,_func_void_int_int *param_2,Variant **param_3,int param_4
               ,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0011e43d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0011e46d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0011e3a5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011e488;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011e46d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011e488:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0011e3a5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC189;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC174;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011e42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),iVar6);
      return;
    }
  }
  uVar7 = 4;
LAB_0011e43d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,int>::call
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e526;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,int>
            (p_Var2,(_func_void_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e526:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,bool>
               (__UnexistingClass *param_1,_func_void_int_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0011e81d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0011e84d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0011e785;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011e868;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011e84d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011e868:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0011e785:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC184;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC174;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011e80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_0011e81d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e906;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var2,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e906:
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
    goto LAB_0011ebcd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011ec30;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011ec30:
      uVar6 = 4;
LAB_0011ebcd:
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
      goto LAB_0011eb4b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011eb4b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC174;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011eba6. Too many branches */
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
      _err_print_error(&_LC172,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011ec96;
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
LAB_0011ec96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_58);
    *(undefined4 *)param_3 = local_58[0];
    if (*(long *)(param_3 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_50;
      local_50 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_48) {
      StringName::unref();
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_40;
    if (*(long *)(param_3 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTRC<int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
    *(undefined8 *)(pPVar5 + 0x10) = uVar4;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar5 + 0x20) = local_48;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = &_LC24;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo
              (pPVar5,2,(CowData<char32_t> *)&local_68,0,(StrRange *)&local_70,6,&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTRC<Color,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
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
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
    *(undefined8 *)(pPVar5 + 0x10) = uVar4;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar5 + 0x20) = local_48;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = &_LC24;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo(pPVar5,0x14,(CowData<char32_t> *)&local_68,0,&local_78,6,&local_70);
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



/* MethodBindTRC<Ref<Texture2D>, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTRC<Ref<Texture2D>,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar4 = local_68._0_4_;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
    *(undefined8 *)(pPVar4 + 0x10) = uVar3;
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar4 + 0x20) = local_48;
    *(undefined4 *)(pPVar4 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = "Texture2D";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 9;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (char *)0x0;
    PropertyInfo::PropertyInfo
              (pPVar4,0x18,(CowData<char32_t> *)&local_68,0x11,&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
    *(undefined8 *)(pPVar5 + 0x10) = uVar4;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar5 + 0x20) = local_48;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = &_LC24;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo
              (pPVar5,1,(CowData<char32_t> *)&local_68,0,(StrRange *)&local_70,6,&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector2, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<Vector2,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
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
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
    *(undefined8 *)(pPVar5 + 0x10) = uVar4;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar5 + 0x20) = local_48;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = &_LC24;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo(pPVar5,5,(CowData<char32_t> *)&local_68,0,&local_78,6,&local_70);
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



/* MethodBindTR<Color, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<Color,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
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
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
    *(undefined8 *)(pPVar5 + 0x10) = uVar4;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar5 + 0x20) = local_48;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = &_LC24;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo(pPVar5,0x14,(CowData<char32_t> *)&local_68,0,&local_78,6,&local_70);
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



/* MethodBindTR<int, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
    *(undefined8 *)(pPVar5 + 0x10) = uVar4;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar5 + 0x20) = local_48;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = &_LC24;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo
              (pPVar5,2,(CowData<char32_t> *)&local_68,0,(StrRange *)&local_70,6,&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_5c;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  local_5c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_5c,pPVar2);
  if (in_EDX == local_5c) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_58);
    *(undefined4 *)pPVar2 = local_58[0];
    if (*(long *)(pPVar2 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_50;
      local_50 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_48) {
      StringName::unref();
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_40;
    if (*(long *)(pPVar2 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_84;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  local_84 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_84,pPVar2);
  if (in_EDX == local_84) {
    local_80 = 0;
    local_78 = 0;
    local_68 = &_LC24;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_70 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_70,0,(StrRange *)&local_78,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar2 = local_68._0_4_;
    if (*(long *)(pPVar2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_50;
    if (*(long *)(pPVar2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Color_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_84;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  local_84 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_84,pPVar2);
  if (in_EDX == local_84) {
    local_80 = 0;
    local_78 = 0;
    local_68 = &_LC24;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_70 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x14,(CowData<char32_t> *)&local_70,0,(StrRange *)&local_78
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar2 = local_68._0_4_;
    if (*(long *)(pPVar2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_50;
    if (*(long *)(pPVar2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<bool>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_90 = 0;
    local_88 = 0;
    local_78 = &_LC24;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_88,6,
               &local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<Texture2D> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Texture2D>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
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
    local_78 = "Texture2D";
    local_70 = 9;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x18,(CowData<char32_t> *)&local_90,0x11,
               (StrRange *)&local_88,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<int, bool, int, Color const&, bool, int, Color const&,
   Ref<Texture2D> const&, Ref<Texture2D> const&, bool>(int, PropertyInfo&) */

void call_get_argument_type_info<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_94;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<bool>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  iVar1 = local_94;
  if (param_1 == local_94) {
    local_90 = 0;
    local_88 = 0;
    local_78 = &_LC24;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x14,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_88
               ,6,&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = iVar1 + 1;
  call_get_argument_type_info_helper<bool>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  iVar1 = local_94;
  if (param_1 == local_94) {
    local_90 = 0;
    local_88 = 0;
    local_78 = &_LC24;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x14,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_88
               ,6,&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = iVar1 + 1;
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<bool>(param_1,&local_94,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* MethodBindT<int, Ref<Texture2D> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_5c;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  local_5c = 0;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_58);
    *(undefined4 *)pPVar2 = local_58[0];
    if (*(long *)(pPVar2 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_50;
      local_50 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_48) {
      StringName::unref();
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_40;
    if (*(long *)(pPVar2 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  local_5c = 1;
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(in_EDX,&local_5c,pPVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GraphNode::~GraphNode() */

void __thiscall GraphNode::~GraphNode(GraphNode *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* MethodBindTR<int, int>::~MethodBindTR() */

void __thiscall MethodBindTR<int,int>::~MethodBindTR(MethodBindTR<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Color, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Color,int>::~MethodBindTR(MethodBindTR<Color,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector2, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector2,int>::~MethodBindTR(MethodBindTR<Vector2,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

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
/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Color, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color,int>::~MethodBindTRC(MethodBindTRC<Color,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Color const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Color_const&>::~MethodBindT(MethodBindT<int,Color_const&> *this)

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
/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

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
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, bool, int, Color const&, bool, int, Color const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
::~MethodBindT(MethodBindT<int,bool,int,Color_const&,bool,int,Color_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,bool>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<HBoxContainer*>::~MethodBindTR() */

void __thiscall MethodBindTR<HBoxContainer*>::~MethodBindTR(MethodBindTR<HBoxContainer*> *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


