
/* VariantCallable::hash() const */

undefined4 __thiscall VariantCallable::hash(VariantCallable *this)

{
  return *(undefined4 *)(this + 0x30);
}



/* VariantCallable::get_compare_equal_func() const */

code * VariantCallable::get_compare_equal_func(void)

{
  return compare_equal;
}



/* VariantCallable::get_compare_less_func() const */

code * VariantCallable::get_compare_less_func(void)

{
  return compare_less;
}



/* VariantCallable::get_object() const */

undefined8 VariantCallable::get_object(void)

{
  return 0;
}



/* VariantCallable::get_method() const */

void VariantCallable::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,(StringName *)(in_RSI + 0x28));
  return;
}



/* VariantCallable::is_valid() const */

void __thiscall VariantCallable::is_valid(VariantCallable *this)

{
  Variant::has_builtin_method(*(undefined4 *)(this + 0x10),this + 0x28);
  return;
}



/* VariantCallable::get_argument_count(bool&) const */

undefined8 __thiscall VariantCallable::get_argument_count(VariantCallable *this,bool *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Variant::has_builtin_method(*(undefined4 *)(this + 0x10),this + 0x28);
  if (cVar1 == '\0') {
    *param_1 = false;
    return 0;
  }
  *param_1 = true;
  uVar2 = Variant::get_builtin_method_argument_count(*(undefined4 *)(this + 0x10),this + 0x28);
  return uVar2;
}



/* VariantCallable::call(Variant const**, int, Variant&, Callable::CallError&) const */

void VariantCallable::call(Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,(Variant *)(param_1 + 2));
  Variant::callp((StringName *)local_58,param_1 + 5,param_2,(Variant *)((ulong)param_3 & 0xffffffff)
                 ,param_4);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantCallable::compare_equal(CallableCustom const*, CallableCustom const*) */

bool VariantCallable::compare_equal(CallableCustom *param_1,CallableCustom *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((code *)**(undefined8 **)param_1 == hash) {
    iVar2 = *(int *)(param_1 + 0x30);
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  else {
    iVar2 = (*(code *)**(undefined8 **)param_1)();
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  if (pcVar1 == hash) {
    return iVar2 == *(int *)(param_2 + 0x30);
  }
  iVar3 = (*pcVar1)(param_2);
  return iVar2 == iVar3;
}



/* VariantCallable::compare_less(CallableCustom const*, CallableCustom const*) */

bool VariantCallable::compare_less(CallableCustom *param_1,CallableCustom *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if ((code *)**(undefined8 **)param_1 == hash) {
    uVar2 = *(uint *)(param_1 + 0x30);
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)param_1)();
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  if (pcVar1 == hash) {
    return uVar2 < *(uint *)(param_2 + 0x30);
  }
  uVar3 = (*pcVar1)(param_2);
  return uVar2 < uVar3;
}



/* VariantCallable::VariantCallable(Variant const&, StringName const&) */

void __thiscall
VariantCallable::VariantCallable(VariantCallable *this,Variant *param_1,StringName *param_2)

{
  uint uVar1;
  int iVar2;
  
  CallableCustom::CallableCustom((CallableCustom *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_hash_001009a0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  Variant::operator=((Variant *)(this + 0x10),param_1);
  StringName::operator=((StringName *)(this + 0x28),param_2);
  uVar1 = Variant::hash();
  *(uint *)(this + 0x30) = uVar1;
  iVar2 = Variant::get_builtin_method_hash(*(undefined4 *)(this + 0x10),(StringName *)(this + 0x28))
  ;
  uVar1 = (iVar2 * 0x16a88000 | (uint)(iVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar1;
  uVar1 = (uVar1 << 0xd | uVar1 >> 0x13) * 5 + 0xe6546b64;
  *(uint *)(this + 0x30) = (uVar1 * 0x2000 | uVar1 >> 0x13) * 5 + -0x19ab949c;
  return;
}



/* VariantCallable::get_as_text() const */

void VariantCallable::get_as_text(void)

{
  long *plVar1;
  long lVar2;
  long in_RSI;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,(StringName *)(in_RSI + 0x28));
  Variant::get_type_name(&local_60,*(undefined4 *)(in_RSI + 0x10));
  local_48 = "%s::%s (Callable)";
  local_58 = 0;
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  vformat<String,StringName>();
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
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VariantCallable::~VariantCallable() */

void __thiscall VariantCallable::~VariantCallable(VariantCallable *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR_hash_001009a0;
  if ((bVar1) && (*(long *)(this + 0x28) != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[*(int *)(this + 0x10)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* VariantCallable::~VariantCallable() */

void __thiscall VariantCallable::~VariantCallable(VariantCallable *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR_hash_001009a0;
  if ((bVar1) && (*(long *)(this + 0x28) != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[*(int *)(this + 0x10)] == '\0') {
    operator_delete(this,0x38);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x38);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100680) */
/* WARNING: Removing unreachable block (ram,0x001007b0) */
/* WARNING: Removing unreachable block (ram,0x00100929) */
/* WARNING: Removing unreachable block (ram,0x001007bc) */
/* WARNING: Removing unreachable block (ram,0x001007c6) */
/* WARNING: Removing unreachable block (ram,0x0010090b) */
/* WARNING: Removing unreachable block (ram,0x001007d2) */
/* WARNING: Removing unreachable block (ram,0x001007dc) */
/* WARNING: Removing unreachable block (ram,0x001008ed) */
/* WARNING: Removing unreachable block (ram,0x001007e8) */
/* WARNING: Removing unreachable block (ram,0x001007f2) */
/* WARNING: Removing unreachable block (ram,0x001008cf) */
/* WARNING: Removing unreachable block (ram,0x001007fe) */
/* WARNING: Removing unreachable block (ram,0x00100808) */
/* WARNING: Removing unreachable block (ram,0x001008b1) */
/* WARNING: Removing unreachable block (ram,0x00100814) */
/* WARNING: Removing unreachable block (ram,0x0010081e) */
/* WARNING: Removing unreachable block (ram,0x00100893) */
/* WARNING: Removing unreachable block (ram,0x00100826) */
/* WARNING: Removing unreachable block (ram,0x00100830) */
/* WARNING: Removing unreachable block (ram,0x00100878) */
/* WARNING: Removing unreachable block (ram,0x00100838) */
/* WARNING: Removing unreachable block (ram,0x0010084e) */
/* WARNING: Removing unreachable block (ram,0x0010085a) */
/* String vformat<String, StringName>(String const&, String const, StringName const) */

undefined8 *
vformat<String,StringName>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,StringName *param_4)

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



/* WARNING: Control flow encountered bad instruction data */
/* VariantCallable::~VariantCallable() */

void __thiscall VariantCallable::~VariantCallable(VariantCallable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


