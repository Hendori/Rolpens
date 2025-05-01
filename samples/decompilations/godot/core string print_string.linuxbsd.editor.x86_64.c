
/* add_print_handler(PrintHandlerList*) */

void add_print_handler(PrintHandlerList *param_1)

{
  PrintHandlerList *pPVar1;
  
  _global_lock();
  pPVar1 = param_1;
  *(PrintHandlerList **)(param_1 + 0x10) = print_handler_list;
  print_handler_list = pPVar1;
  _global_unlock();
  return;
}



/* remove_print_handler(PrintHandlerList const*) */

void remove_print_handler(PrintHandlerList *param_1)

{
  PrintHandlerList *pPVar1;
  PrintHandlerList *pPVar2;
  
  _global_lock();
  if (print_handler_list != (PrintHandlerList *)0x0) {
    pPVar1 = print_handler_list;
    if (print_handler_list == param_1) {
      print_handler_list = *(PrintHandlerList **)(print_handler_list + 0x10);
      _global_unlock();
      return;
    }
    while (pPVar2 = pPVar1, pPVar1 = *(PrintHandlerList **)(pPVar2 + 0x10),
          pPVar1 != (PrintHandlerList *)0x0) {
      if (param_1 == pPVar1) {
        *(undefined8 *)(pPVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
        _global_unlock();
        return;
      }
    }
  }
  _global_unlock();
  _err_print_error("remove_print_handler","core/string/print_string.cpp",0x42,
                   "Parameter \"l\" is null.",0,0);
  return;
}



/* print_error(String const&) */

void print_error(String *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)CoreGlobals::print_error_enabled == '\0') {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pcVar4 = (char *)OS::get_singleton();
    String::utf8();
    uVar5 = CharString::get_data();
    OS::printerr(pcVar4,&_LC3,uVar5);
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_28 + -0x10),false);
      }
    }
    _global_lock();
    for (puVar3 = print_handler_list; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[2])
    {
      (*(code *)*puVar3)(puVar3[1],param_1,1,0);
    }
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* is_print_verbose_enabled() */

void is_print_verbose_enabled(void)

{
  OS::get_singleton();
  OS::is_stdout_verbose();
  return;
}



/* stringify_variants(Variant const&) */

Variant * stringify_variants(Variant *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_String(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* WARNING: Removing unreachable block (ram,0x00101798) */
/* WARNING: Removing unreachable block (ram,0x001018c8) */
/* WARNING: Removing unreachable block (ram,0x00101a40) */
/* WARNING: Removing unreachable block (ram,0x001018d4) */
/* WARNING: Removing unreachable block (ram,0x001018de) */
/* WARNING: Removing unreachable block (ram,0x00101a22) */
/* WARNING: Removing unreachable block (ram,0x001018ea) */
/* WARNING: Removing unreachable block (ram,0x001018f4) */
/* WARNING: Removing unreachable block (ram,0x00101a04) */
/* WARNING: Removing unreachable block (ram,0x00101900) */
/* WARNING: Removing unreachable block (ram,0x0010190a) */
/* WARNING: Removing unreachable block (ram,0x001019e6) */
/* WARNING: Removing unreachable block (ram,0x00101916) */
/* WARNING: Removing unreachable block (ram,0x00101920) */
/* WARNING: Removing unreachable block (ram,0x001019c8) */
/* WARNING: Removing unreachable block (ram,0x0010192c) */
/* WARNING: Removing unreachable block (ram,0x00101936) */
/* WARNING: Removing unreachable block (ram,0x001019aa) */
/* WARNING: Removing unreachable block (ram,0x0010193e) */
/* WARNING: Removing unreachable block (ram,0x00101948) */
/* WARNING: Removing unreachable block (ram,0x0010198f) */
/* WARNING: Removing unreachable block (ram,0x00101950) */
/* WARNING: Removing unreachable block (ram,0x00101965) */
/* WARNING: Removing unreachable block (ram,0x00101971) */
/* String vformat<float, float, float>(String const&, float const, float const, float const) */

String * vformat<float,float,float>(String *param_1,float param_2,float param_3,float param_4)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  bool *in_RSI;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_2);
  Variant::Variant(local_90,param_3);
  iVar2 = 0;
  Variant::Variant(local_78,param_4);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,in_RSI);
  *(undefined8 *)param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101c28) */
/* WARNING: Removing unreachable block (ram,0x00101d58) */
/* WARNING: Removing unreachable block (ram,0x00101ed1) */
/* WARNING: Removing unreachable block (ram,0x00101d64) */
/* WARNING: Removing unreachable block (ram,0x00101d6e) */
/* WARNING: Removing unreachable block (ram,0x00101eb3) */
/* WARNING: Removing unreachable block (ram,0x00101d7a) */
/* WARNING: Removing unreachable block (ram,0x00101d84) */
/* WARNING: Removing unreachable block (ram,0x00101e95) */
/* WARNING: Removing unreachable block (ram,0x00101d90) */
/* WARNING: Removing unreachable block (ram,0x00101d9a) */
/* WARNING: Removing unreachable block (ram,0x00101e77) */
/* WARNING: Removing unreachable block (ram,0x00101da6) */
/* WARNING: Removing unreachable block (ram,0x00101db0) */
/* WARNING: Removing unreachable block (ram,0x00101e59) */
/* WARNING: Removing unreachable block (ram,0x00101dbc) */
/* WARNING: Removing unreachable block (ram,0x00101dc6) */
/* WARNING: Removing unreachable block (ram,0x00101e3b) */
/* WARNING: Removing unreachable block (ram,0x00101dce) */
/* WARNING: Removing unreachable block (ram,0x00101dd8) */
/* WARNING: Removing unreachable block (ram,0x00101e20) */
/* WARNING: Removing unreachable block (ram,0x00101de0) */
/* WARNING: Removing unreachable block (ram,0x00101df6) */
/* WARNING: Removing unreachable block (ram,0x00101e02) */
/* String vformat<float, float, float, float, float, float>(String const&, float const, float const,
   float const, float const, float const, float const) */

String * vformat<float,float,float,float,float,float>
                   (String *param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,float param_7)

{
  Variant *this;
  bool *in_RSI;
  int iVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  Array local_138 [8];
  undefined8 local_130 [9];
  Variant local_e8 [24];
  Variant local_d0 [24];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_e8,param_2);
  Variant::Variant(local_d0,param_3);
  Variant::Variant(local_b8,param_4);
  iVar3 = 0;
  Variant::Variant(local_a0,param_5);
  Variant::Variant(local_88,param_6);
  Variant::Variant(local_70,param_7);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_138);
  iVar1 = (int)local_138;
  Array::resize(iVar1);
  pVVar2 = local_e8;
  do {
    iVar3 = iVar3 + 1;
    this = (Variant *)Array::operator[](iVar1);
    Variant::operator=(this,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar3 != 6);
  String::sprintf((Array *)local_130,in_RSI);
  *(undefined8 *)param_1 = local_130[0];
  Array::~Array(local_138);
  pVVar2 = (Variant *)&local_58;
  do {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    bVar4 = pVVar2 != local_e8;
    pVVar2 = pVVar2 + -0x18;
  } while (bVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102018) */
/* WARNING: Removing unreachable block (ram,0x00102148) */
/* WARNING: Removing unreachable block (ram,0x00102310) */
/* WARNING: Removing unreachable block (ram,0x00102154) */
/* WARNING: Removing unreachable block (ram,0x0010215e) */
/* WARNING: Removing unreachable block (ram,0x001022f0) */
/* WARNING: Removing unreachable block (ram,0x0010216a) */
/* WARNING: Removing unreachable block (ram,0x00102174) */
/* WARNING: Removing unreachable block (ram,0x001022d0) */
/* WARNING: Removing unreachable block (ram,0x00102180) */
/* WARNING: Removing unreachable block (ram,0x0010218a) */
/* WARNING: Removing unreachable block (ram,0x001022b0) */
/* WARNING: Removing unreachable block (ram,0x00102196) */
/* WARNING: Removing unreachable block (ram,0x001021a0) */
/* WARNING: Removing unreachable block (ram,0x00102290) */
/* WARNING: Removing unreachable block (ram,0x001021ac) */
/* WARNING: Removing unreachable block (ram,0x001021b6) */
/* WARNING: Removing unreachable block (ram,0x00102270) */
/* WARNING: Removing unreachable block (ram,0x001021c2) */
/* WARNING: Removing unreachable block (ram,0x001021cc) */
/* WARNING: Removing unreachable block (ram,0x00102250) */
/* WARNING: Removing unreachable block (ram,0x001021d4) */
/* WARNING: Removing unreachable block (ram,0x001021ea) */
/* WARNING: Removing unreachable block (ram,0x001021f6) */
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


