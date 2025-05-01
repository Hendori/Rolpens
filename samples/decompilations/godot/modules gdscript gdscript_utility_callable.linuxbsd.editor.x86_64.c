
/* GDScriptUtilityCallable::hash() const */

undefined4 __thiscall GDScriptUtilityCallable::hash(GDScriptUtilityCallable *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* GDScriptUtilityCallable::get_compare_equal_func() const */

code * GDScriptUtilityCallable::get_compare_equal_func(void)

{
  return compare_equal;
}



/* GDScriptUtilityCallable::get_compare_less_func() const */

code * GDScriptUtilityCallable::get_compare_less_func(void)

{
  return compare_less;
}



/* GDScriptUtilityCallable::is_valid() const */

undefined4 __thiscall GDScriptUtilityCallable::is_valid(GDScriptUtilityCallable *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x18) >> 8),*(int *)(this + 0x18) != 0);
}



/* GDScriptUtilityCallable::get_object() const */

undefined8 GDScriptUtilityCallable::get_object(void)

{
  return 0;
}



/* GDScriptUtilityCallable::get_method() const */

void GDScriptUtilityCallable::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,(StringName *)(in_RSI + 0x10));
  return;
}



/* GDScriptUtilityCallable::get_argument_count(bool&) const */

undefined8 __thiscall
GDScriptUtilityCallable::get_argument_count(GDScriptUtilityCallable *this,bool *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 1) {
    *param_1 = true;
    uVar2 = Variant::get_utility_function_argument_count((StringName *)(this + 0x10));
    return uVar2;
  }
  if (iVar1 != 2) {
    if (iVar1 == 0) {
      *param_1 = false;
      return 0;
    }
    _err_print_error("get_argument_count","modules/gdscript/gdscript_utility_callable.cpp",0x5d,
                     "Method/function failed. Returning: 0","Invalid type.",0,0);
    return 0;
  }
  *param_1 = true;
  uVar2 = GDScriptUtilityFunctions::get_function_argument_count((StringName *)(this + 0x10));
  return uVar2;
}



/* GDScriptUtilityCallable::compare_equal(CallableCustom const*, CallableCustom const*) */

bool GDScriptUtilityCallable::compare_equal(CallableCustom *param_1,CallableCustom *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((code *)**(undefined8 **)param_1 == hash) {
    iVar2 = *(int *)(param_1 + 0x28);
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  else {
    iVar2 = (*(code *)**(undefined8 **)param_1)();
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  if (pcVar1 == hash) {
    return iVar2 == *(int *)(param_2 + 0x28);
  }
  iVar3 = (*pcVar1)(param_2);
  return iVar2 == iVar3;
}



/* GDScriptUtilityCallable::compare_less(CallableCustom const*, CallableCustom const*) */

bool GDScriptUtilityCallable::compare_less(CallableCustom *param_1,CallableCustom *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if ((code *)**(undefined8 **)param_1 == hash) {
    uVar2 = *(uint *)(param_1 + 0x28);
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)param_1)();
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  if (pcVar1 == hash) {
    return uVar2 < *(uint *)(param_2 + 0x28);
  }
  uVar3 = (*pcVar1)(param_2);
  return uVar2 < uVar3;
}



/* GDScriptUtilityCallable::get_as_text() const */

void GDScriptUtilityCallable::get_as_text(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  long in_FS_OFFSET;
  bool bVar5;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(in_RSI + 0x18);
  local_68 = 0;
  if (iVar2 == 1) {
    local_40 = 0xc;
    local_48 = "@GlobalScope";
    String::parse_latin1((StrRange *)&local_68);
  }
  else if (iVar2 == 2) {
    local_40 = 9;
    local_48 = "@GDScript";
    String::parse_latin1((StrRange *)&local_68);
  }
  else if (iVar2 == 0) {
    local_40 = 0xf;
    local_48 = "<invalid scope>";
    String::parse_latin1((StrRange *)&local_68);
  }
  StringName::StringName((StringName *)&local_50,(StringName *)(in_RSI + 0x10));
  local_58 = 0;
  plVar1 = (long *)(local_68 + -0x10);
  if (local_68 != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00100263;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *plVar1 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_58 = local_68;
    }
  }
LAB_00100263:
  local_60 = 0;
  local_48 = "%s::%s (Callable)";
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_60);
  vformat<String,StringName>();
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptUtilityCallable::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
GDScriptUtilityCallable::call
          (GDScriptUtilityCallable *this,Variant **param_1,int param_2,Variant *param_3,
          CallError *param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  iVar2 = *(int *)(this + 0x18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar2 == 1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Variant::call_utility_function((StringName *)(this + 0x10),param_3,param_1,param_2,param_4);
      return;
    }
  }
  else if (iVar2 == 2) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this + 0x20))(param_3,param_1,CONCAT44(in_register_00000014,param_2),param_4);
      return;
    }
  }
  else {
    if (iVar2 == 0) {
      StringName::StringName((StringName *)&local_60,(StringName *)(this + 0x10));
      local_58 = "Trying to call invalid utility function \"%s\".";
      local_68 = 0;
      local_50 = 0x2d;
      String::parse_latin1((StrRange *)&local_68);
      vformat<StringName>((String_conflict *)&local_58,&local_68,(StringName *)&local_60);
      Variant::Variant((Variant *)local_48,(String_conflict *)&local_58);
      if (Variant::needs_deinit[*(int *)param_3] != '\0') {
        Variant::_clear_internal();
      }
      pcVar4 = local_58;
      *(undefined4 *)param_3 = local_48[0];
      *(undefined8 *)(param_3 + 8) = local_40;
      *(undefined8 *)(param_3 + 0x10) = uStack_38;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_4 = 1;
      *(undefined8 *)(param_4 + 4) = 0;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptUtilityCallable::GDScriptUtilityCallable(StringName const&) */

void __thiscall
GDScriptUtilityCallable::GDScriptUtilityCallable(GDScriptUtilityCallable *this,StringName *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CallableCustom::CallableCustom((CallableCustom *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_hash_00101228;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  StringName::operator=((StringName *)(this + 0x10),param_1);
  cVar4 = GDScriptUtilityFunctions::function_exists(param_1);
  if (cVar4 == '\0') {
    cVar4 = Variant::has_utility_function(param_1);
    if (cVar4 != '\0') {
      lVar2 = *(long *)param_1;
      *(undefined4 *)(this + 0x18) = 1;
      goto joined_r0x0010067a;
    }
    StringName::StringName((StringName *)&local_50,param_1);
    local_48 = "Unknown utility function \"%s\".";
    local_58 = 0;
    local_40 = 0x1e;
    String::parse_latin1((StrRange *)&local_58);
    vformat<StringName>(&local_48,&local_58,(StringName *)&local_50);
    _err_print_error("GDScriptUtilityCallable","modules/gdscript/gdscript_utility_callable.cpp",0x79
                     ,&local_48,0,0);
    pcVar3 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
  }
  else {
    *(undefined4 *)(this + 0x18) = 2;
    uVar6 = GDScriptUtilityFunctions::get_function(param_1);
    *(undefined8 *)(this + 0x20) = uVar6;
  }
  lVar2 = *(long *)param_1;
joined_r0x0010067a:
  if (lVar2 == 0) {
    uVar5 = StringName::get_empty_hash();
  }
  else {
    uVar5 = *(undefined4 *)(lVar2 + 0x20);
  }
  *(undefined4 *)(this + 0x28) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptUtilityCallable::~GDScriptUtilityCallable() */

void __thiscall GDScriptUtilityCallable::~GDScriptUtilityCallable(GDScriptUtilityCallable *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR_hash_00101228;
  if ((bVar1) && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* GDScriptUtilityCallable::~GDScriptUtilityCallable() */

void __thiscall GDScriptUtilityCallable::~GDScriptUtilityCallable(GDScriptUtilityCallable *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR_hash_00101228;
  if ((bVar1) && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  operator_delete(this,0x30);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100ad0) */
/* WARNING: Removing unreachable block (ram,0x00100c00) */
/* WARNING: Removing unreachable block (ram,0x00100d79) */
/* WARNING: Removing unreachable block (ram,0x00100c0c) */
/* WARNING: Removing unreachable block (ram,0x00100c16) */
/* WARNING: Removing unreachable block (ram,0x00100d5b) */
/* WARNING: Removing unreachable block (ram,0x00100c22) */
/* WARNING: Removing unreachable block (ram,0x00100c2c) */
/* WARNING: Removing unreachable block (ram,0x00100d3d) */
/* WARNING: Removing unreachable block (ram,0x00100c38) */
/* WARNING: Removing unreachable block (ram,0x00100c42) */
/* WARNING: Removing unreachable block (ram,0x00100d1f) */
/* WARNING: Removing unreachable block (ram,0x00100c4e) */
/* WARNING: Removing unreachable block (ram,0x00100c58) */
/* WARNING: Removing unreachable block (ram,0x00100d01) */
/* WARNING: Removing unreachable block (ram,0x00100c64) */
/* WARNING: Removing unreachable block (ram,0x00100c6e) */
/* WARNING: Removing unreachable block (ram,0x00100ce3) */
/* WARNING: Removing unreachable block (ram,0x00100c76) */
/* WARNING: Removing unreachable block (ram,0x00100c80) */
/* WARNING: Removing unreachable block (ram,0x00100cc8) */
/* WARNING: Removing unreachable block (ram,0x00100c88) */
/* WARNING: Removing unreachable block (ram,0x00100c9e) */
/* WARNING: Removing unreachable block (ram,0x00100caa) */
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



/* WARNING: Removing unreachable block (ram,0x00100eb8) */
/* WARNING: Removing unreachable block (ram,0x00100fe8) */
/* WARNING: Removing unreachable block (ram,0x001011b0) */
/* WARNING: Removing unreachable block (ram,0x00100ff4) */
/* WARNING: Removing unreachable block (ram,0x00100ffe) */
/* WARNING: Removing unreachable block (ram,0x00101190) */
/* WARNING: Removing unreachable block (ram,0x0010100a) */
/* WARNING: Removing unreachable block (ram,0x00101014) */
/* WARNING: Removing unreachable block (ram,0x00101170) */
/* WARNING: Removing unreachable block (ram,0x00101020) */
/* WARNING: Removing unreachable block (ram,0x0010102a) */
/* WARNING: Removing unreachable block (ram,0x00101150) */
/* WARNING: Removing unreachable block (ram,0x00101036) */
/* WARNING: Removing unreachable block (ram,0x00101040) */
/* WARNING: Removing unreachable block (ram,0x00101130) */
/* WARNING: Removing unreachable block (ram,0x0010104c) */
/* WARNING: Removing unreachable block (ram,0x00101056) */
/* WARNING: Removing unreachable block (ram,0x00101110) */
/* WARNING: Removing unreachable block (ram,0x00101062) */
/* WARNING: Removing unreachable block (ram,0x0010106c) */
/* WARNING: Removing unreachable block (ram,0x001010f0) */
/* WARNING: Removing unreachable block (ram,0x00101074) */
/* WARNING: Removing unreachable block (ram,0x0010108a) */
/* WARNING: Removing unreachable block (ram,0x00101096) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptUtilityCallable::~GDScriptUtilityCallable() */

void __thiscall GDScriptUtilityCallable::~GDScriptUtilityCallable(GDScriptUtilityCallable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


