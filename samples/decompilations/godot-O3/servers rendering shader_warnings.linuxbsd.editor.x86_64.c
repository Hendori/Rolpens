
/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */

void __thiscall CowData<Variant>::_ref(CowData<Variant> *this,CowData *param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  bool bVar7;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)this;
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
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
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) {
        return;
      }
      LOCK();
      lVar6 = *plVar1;
      bVar7 = lVar3 == lVar6;
      if (bVar7) {
        *plVar1 = lVar3 + 1;
        lVar6 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar6 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* ShaderWarning::get_code() const */

undefined4 __thiscall ShaderWarning::get_code(ShaderWarning *this)

{
  return *(undefined4 *)this;
}



/* ShaderWarning::get_line() const */

undefined4 __thiscall ShaderWarning::get_line(ShaderWarning *this)

{
  return *(undefined4 *)(this + 4);
}



/* ShaderWarning::get_subject() const */

ShaderWarning * __thiscall ShaderWarning::get_subject(ShaderWarning *this)

{
  return this + 8;
}



/* ShaderWarning::get_name() const */

void ShaderWarning::get_name(void)

{
  uint uVar1;
  long lVar2;
  uint *in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  uVar1 = *in_RSI;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 < 10) {
    *(undefined8 *)in_RDI = 0;
    if (*(char **)(get_name_from_code(ShaderWarning::Code)::names + (long)(int)uVar1 * 8) !=
        (char *)0x0) {
      strlen(*(char **)(get_name_from_code(ShaderWarning::Code)::names + (long)(int)uVar1 * 8));
    }
    String::parse_latin1(in_RDI);
  }
  else {
    _err_print_index_error
              ("get_name_from_code","servers/rendering/shader_warnings.cpp",0x55,(ulong)uVar1,10,
               "p_code","WARNING_MAX","",false,false);
    *(undefined8 *)in_RDI = 0;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderWarning::get_extra_args() const */

void ShaderWarning::get_extra_args(void)

{
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 0x18) != 0) {
    CowData<Variant>::_ref((CowData<Variant> *)(in_RDI + 8),(CowData *)(in_RSI + 0x18));
  }
  return;
}



/* ShaderWarning::get_name_from_code(ShaderWarning::Code) */

ShaderWarning * __thiscall ShaderWarning::get_name_from_code(ShaderWarning *this,uint param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 10) {
    *(undefined8 *)this = 0;
    if (*(char **)(get_name_from_code(ShaderWarning::Code)::names + (long)(int)param_2 * 8) !=
        (char *)0x0) {
      strlen(*(char **)(get_name_from_code(ShaderWarning::Code)::names + (long)(int)param_2 * 8));
    }
    String::parse_latin1((StrRange *)this);
  }
  else {
    _err_print_index_error
              ("get_name_from_code","servers/rendering/shader_warnings.cpp",0x55,(ulong)param_2,10,
               "p_code","WARNING_MAX","",false,false);
    *(undefined8 *)this = 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderWarning::get_code_from_name(String const&) */

int ShaderWarning::get_code_from_name(String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  iVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    get_name_from_code((ShaderWarning *)&local_38,iVar4);
    cVar3 = String::operator==((String *)&local_38,param_1);
    lVar2 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (cVar3 != '\0') goto LAB_001003cd;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 10);
  operator+((char *)&local_38,(String *)"Invalid shader warning name: ");
  _err_print_error("get_code_from_name","servers/rendering/shader_warnings.cpp",0x70,
                   "Method/function failed. Returning: WARNING_MAX",&local_38,0);
  lVar2 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  iVar4 = 10;
LAB_001003cd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderWarning::ShaderWarning(ShaderWarning::Code, int, StringName const&, Vector<Variant> const&)
    */

void __thiscall
ShaderWarning::ShaderWarning
          (ShaderWarning *this,undefined4 param_2,undefined4 param_3,StringName *param_4,
          long param_5)

{
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  StringName::StringName((StringName *)(this + 8),param_4);
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long *)(param_5 + 8) != 0) {
    CowData<Variant>::_ref((CowData<Variant> *)(this + 0x18),(CowData *)(param_5 + 8));
    return;
  }
  return;
}



/* ShaderWarning::get_message() const */

void ShaderWarning::get_message(void)

{
  long *plVar1;
  Variant *this;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined4 *in_RSI;
  String *in_RDI;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*in_RSI) {
  case 0:
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = 
    "Direct floating-point comparison (this may not evaluate to `true` as you expect). Instead, use `abs(a - b) < 0.0001` for an approximate but predictable comparison."
    ;
    local_50 = 0xa3;
    goto LAB_001006c1;
  case 1:
    StringName::StringName((StringName *)&local_60,(StringName *)(in_RSI + 2));
    local_58 = "";
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "The const \'%s\' is declared but never used.";
    local_50 = 0x2a;
    break;
  case 2:
    StringName::StringName((StringName *)&local_60,(StringName *)(in_RSI + 2));
    local_58 = "";
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "The function \'%s\' is declared but never used.";
    local_50 = 0x2d;
    break;
  case 3:
    StringName::StringName((StringName *)&local_60,(StringName *)(in_RSI + 2));
    local_58 = "";
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "The struct \'%s\' is declared but never used.";
    local_50 = 0x2b;
    break;
  case 4:
    StringName::StringName((StringName *)&local_60,(StringName *)(in_RSI + 2));
    local_58 = "";
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "The uniform \'%s\' is declared but never used.";
    goto LAB_001009c4;
  case 5:
    StringName::StringName((StringName *)&local_60,(StringName *)(in_RSI + 2));
    local_58 = "";
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "The varying \'%s\' is declared but never used.";
LAB_001009c4:
    local_50 = 0x2c;
    break;
  case 6:
    StringName::StringName((StringName *)&local_60,(StringName *)(in_RSI + 2));
    local_58 = "";
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "The local variable \'%s\' is declared but never used.";
    local_50 = 0x33;
    break;
  case 7:
    lVar5 = *(long *)(in_RSI + 2);
    if (lVar5 != 0) {
      pcVar2 = *(char **)(lVar5 + 8);
      *(undefined8 *)in_RDI = 0;
      if (pcVar2 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar6 = *plVar1;
            if (lVar6 == 0) goto LAB_00100640;
            LOCK();
            lVar4 = *plVar1;
            bVar7 = lVar6 == lVar4;
            if (bVar7) {
              *plVar1 = lVar6 + 1;
              lVar4 = lVar6;
            }
            UNLOCK();
          } while (!bVar7);
          if (lVar4 != -1) {
            *(undefined8 *)in_RDI = *(undefined8 *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)in_RDI);
      }
      goto LAB_00100640;
    }
  default:
    *(undefined8 *)in_RDI = 0;
    goto LAB_00100640;
  case 8:
    lVar5 = *(long *)(in_RSI + 6);
    if (lVar5 == 0) {
      lVar6 = 0;
LAB_00100b42:
      lVar5 = 1;
LAB_00100b62:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = *(long *)(lVar5 + -8);
    if (lVar6 < 2) goto LAB_00100b42;
    Variant::operator_cast_to_int((Variant *)(lVar5 + 0x18));
    this = *(Variant **)(in_RSI + 6);
    if (this == (Variant *)0x0) {
      lVar6 = 0;
LAB_00100b88:
      lVar5 = 0;
      goto LAB_00100b62;
    }
    lVar6 = *(long *)(this + -8);
    if (lVar6 < 1) goto LAB_00100b88;
    Variant::operator_cast_to_int(this);
    StringName::StringName((StringName *)&local_60,(StringName *)(in_RSI + 2));
    local_58 = "";
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = 
    "The total size of the %s for this shader on this device has been exceeded (%d/%d). The shader may not work correctly."
    ;
    local_70 = 0;
    local_50 = 0x75;
    String::parse_latin1((StrRange *)&local_70);
    RTR((String *)&local_58,(String *)&local_70);
    vformat<StringName,int,int>();
    pcVar2 = local_58;
    goto joined_r0x001005a8;
  case 9:
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = 
    "You are attempting to assign the VERTEX position in model space to the vertex POSITION in clip space. The definition of clip space changed in version 4.3, so if this code was written prior to 4.3, it will not continue to work. Consider specifying the clip space z-component directly i.e. use `vec4(VERTEX.xy, 1.0, 1.0)`."
    ;
    local_50 = 0x140;
LAB_001006c1:
    local_68 = 0;
    String::parse_latin1((StrRange *)&local_68);
    RTR((String *)&local_58,(String *)&local_68);
    vformat<>(in_RDI);
    pcVar2 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar5 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
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
    goto LAB_00100640;
  }
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_70);
  RTR((String *)&local_58,(String *)&local_70);
  vformat<StringName>();
  pcVar2 = local_58;
joined_r0x001005a8:
  local_58 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(pcVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  lVar5 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  lVar5 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
LAB_00100640:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderWarning::get_flags_from_codemap(HashMap<ShaderWarning::Code, bool, HashMapHasherDefault,
   HashMapComparatorDefault<ShaderWarning::Code>,
   DefaultTypedAllocator<HashMapElement<ShaderWarning::Code, bool> > > const&) */

uint ShaderWarning::get_flags_from_codemap(HashMap *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  long in_FS_OFFSET;
  uint local_6c;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (code_to_flags_map ==
      (HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
       *)0x0) {
    code_to_flags_map =
         (HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
          *)operator_new(0x30,"");
    *(undefined1 (*) [16])(code_to_flags_map + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(code_to_flags_map + 0x28) = 2;
    *(undefined1 (*) [16])(code_to_flags_map + 0x18) = (undefined1  [16])0x0;
    local_4c = 1;
    local_50 = 0;
    bVar13 = SUB81(&local_50,0);
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 2;
    local_50 = 1;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 4;
    local_50 = 2;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 8;
    local_50 = 3;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 0x10;
    local_50 = 4;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 0x20;
    local_50 = 5;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 0x40;
    local_50 = 6;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 0x80;
    local_50 = 7;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 0x100;
    local_50 = 8;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
    local_4c = 0x200;
    local_50 = 9;
    HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
    ::insert((int *)local_48,(uint *)code_to_flags_map,bVar13);
  }
  plVar20 = *(long **)(param_1 + 0x18);
  if (plVar20 == (long *)0x0) {
LAB_00100d95:
    local_6c = 0;
  }
  else {
    local_6c = 0;
LAB_00100c14:
    do {
      if (*(char *)((long)plVar20 + 0x14) != '\0') {
        uVar1 = *(uint *)(plVar20 + 2);
        if ((*(long *)(code_to_flags_map + 8) != 0) && (*(int *)(code_to_flags_map + 0x2c) != 0)) {
          uVar2 = *(ulong *)(hash_table_size_primes_inv +
                            (ulong)*(uint *)(code_to_flags_map + 0x28) * 8);
          uVar11 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
          uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
          uVar17 = uVar11 ^ uVar11 >> 0x10;
          if (uVar11 == uVar11 >> 0x10) {
            uVar17 = 1;
            uVar15 = uVar2;
          }
          else {
            uVar15 = uVar17 * uVar2;
          }
          uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(code_to_flags_map + 0x28) * 4));
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar18;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar15;
          lVar16 = SUB168(auVar3 * auVar7,8);
          uVar11 = *(uint *)(*(long *)(code_to_flags_map + 0x10) + lVar16 * 4);
          iVar14 = SUB164(auVar3 * auVar7,8);
          if (uVar11 != 0) {
            uVar19 = 0;
            while ((uVar17 != uVar11 ||
                   (uVar1 != *(uint *)(*(long *)(*(long *)(code_to_flags_map + 8) + lVar16 * 8) +
                                      0x10)))) {
              uVar19 = uVar19 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (iVar14 + 1) * uVar2;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar18;
              lVar16 = SUB168(auVar4 * auVar8,8);
              uVar11 = *(uint *)(*(long *)(code_to_flags_map + 0x10) + lVar16 * 4);
              iVar14 = SUB164(auVar4 * auVar8,8);
              if ((uVar11 == 0) ||
                 (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11 * uVar2, auVar9._8_8_ = 0,
                 auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
                 auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(code_to_flags_map + 0x28) * 4) + iVar14)
                                - SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
                 auVar10._0_8_ = uVar18, SUB164(auVar6 * auVar10,8) < uVar19)) goto LAB_00100d70;
            }
            local_48[0] = uVar1;
            puVar12 = (uint *)HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
                              ::operator[](code_to_flags_map,(int *)local_48);
            plVar20 = (long *)*plVar20;
            local_6c = local_6c | *puVar12;
            if (plVar20 == (long *)0x0) break;
            goto LAB_00100c14;
          }
        }
LAB_00100d70:
        _err_print_error("get_flags_from_codemap","servers/rendering/shader_warnings.cpp",0x8c,
                         "Condition \"!code_to_flags_map->has((int)E.key)\" is true. Returning: ShaderWarning::NONE_FLAG"
                         ,0,0);
        goto LAB_00100d95;
      }
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_6c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] [clone .cold] */

void CowData<Variant>::_ref(CowData *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00101670) */
/* WARNING: Removing unreachable block (ram,0x00101793) */
/* WARNING: Removing unreachable block (ram,0x00101930) */
/* WARNING: Removing unreachable block (ram,0x0010179f) */
/* WARNING: Removing unreachable block (ram,0x001017a9) */
/* WARNING: Removing unreachable block (ram,0x00101910) */
/* WARNING: Removing unreachable block (ram,0x001017b5) */
/* WARNING: Removing unreachable block (ram,0x001017bf) */
/* WARNING: Removing unreachable block (ram,0x001018f0) */
/* WARNING: Removing unreachable block (ram,0x001017cb) */
/* WARNING: Removing unreachable block (ram,0x001017d5) */
/* WARNING: Removing unreachable block (ram,0x001018d0) */
/* WARNING: Removing unreachable block (ram,0x001017e1) */
/* WARNING: Removing unreachable block (ram,0x001017eb) */
/* WARNING: Removing unreachable block (ram,0x001018b0) */
/* WARNING: Removing unreachable block (ram,0x001017f7) */
/* WARNING: Removing unreachable block (ram,0x00101801) */
/* WARNING: Removing unreachable block (ram,0x00101890) */
/* WARNING: Removing unreachable block (ram,0x0010180d) */
/* WARNING: Removing unreachable block (ram,0x00101817) */
/* WARNING: Removing unreachable block (ram,0x00101870) */
/* WARNING: Removing unreachable block (ram,0x0010181f) */
/* WARNING: Removing unreachable block (ram,0x00101834) */
/* WARNING: Removing unreachable block (ram,0x00101840) */
/* String vformat<>(String const&) */

String * vformat<>(String *param_1)

{
  bool *in_RSI;
  long in_FS_OFFSET;
  Array local_a8 [8];
  undefined8 local_a0 [9];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  Array::Array(local_a8);
  Array::resize((int)local_a8);
  String::sprintf((Array *)local_a0,in_RSI);
  *(undefined8 *)param_1 = local_a0[0];
  Array::~Array(local_a8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101a78) */
/* WARNING: Removing unreachable block (ram,0x00101ba8) */
/* WARNING: Removing unreachable block (ram,0x00101d70) */
/* WARNING: Removing unreachable block (ram,0x00101bb4) */
/* WARNING: Removing unreachable block (ram,0x00101bbe) */
/* WARNING: Removing unreachable block (ram,0x00101d50) */
/* WARNING: Removing unreachable block (ram,0x00101bca) */
/* WARNING: Removing unreachable block (ram,0x00101bd4) */
/* WARNING: Removing unreachable block (ram,0x00101d30) */
/* WARNING: Removing unreachable block (ram,0x00101be0) */
/* WARNING: Removing unreachable block (ram,0x00101bea) */
/* WARNING: Removing unreachable block (ram,0x00101d10) */
/* WARNING: Removing unreachable block (ram,0x00101bf6) */
/* WARNING: Removing unreachable block (ram,0x00101c00) */
/* WARNING: Removing unreachable block (ram,0x00101cf0) */
/* WARNING: Removing unreachable block (ram,0x00101c0c) */
/* WARNING: Removing unreachable block (ram,0x00101c16) */
/* WARNING: Removing unreachable block (ram,0x00101cd0) */
/* WARNING: Removing unreachable block (ram,0x00101c22) */
/* WARNING: Removing unreachable block (ram,0x00101c2c) */
/* WARNING: Removing unreachable block (ram,0x00101cb0) */
/* WARNING: Removing unreachable block (ram,0x00101c34) */
/* WARNING: Removing unreachable block (ram,0x00101c4a) */
/* WARNING: Removing unreachable block (ram,0x00101c56) */
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



/* WARNING: Removing unreachable block (ram,0x00101ef0) */
/* WARNING: Removing unreachable block (ram,0x00102020) */
/* WARNING: Removing unreachable block (ram,0x00102198) */
/* WARNING: Removing unreachable block (ram,0x0010202c) */
/* WARNING: Removing unreachable block (ram,0x00102036) */
/* WARNING: Removing unreachable block (ram,0x0010217a) */
/* WARNING: Removing unreachable block (ram,0x00102042) */
/* WARNING: Removing unreachable block (ram,0x0010204c) */
/* WARNING: Removing unreachable block (ram,0x0010215c) */
/* WARNING: Removing unreachable block (ram,0x00102058) */
/* WARNING: Removing unreachable block (ram,0x00102062) */
/* WARNING: Removing unreachable block (ram,0x0010213e) */
/* WARNING: Removing unreachable block (ram,0x0010206e) */
/* WARNING: Removing unreachable block (ram,0x00102078) */
/* WARNING: Removing unreachable block (ram,0x00102120) */
/* WARNING: Removing unreachable block (ram,0x00102084) */
/* WARNING: Removing unreachable block (ram,0x0010208e) */
/* WARNING: Removing unreachable block (ram,0x00102102) */
/* WARNING: Removing unreachable block (ram,0x00102096) */
/* WARNING: Removing unreachable block (ram,0x001020a0) */
/* WARNING: Removing unreachable block (ram,0x001020e7) */
/* WARNING: Removing unreachable block (ram,0x001020a8) */
/* WARNING: Removing unreachable block (ram,0x001020bd) */
/* WARNING: Removing unreachable block (ram,0x001020c9) */
/* String vformat<StringName, int, int>(String const&, StringName const, int const, int const) */

undefined8 *
vformat<StringName,int,int>
          (undefined8 *param_1,bool *param_2,StringName *param_3,int param_4,int param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
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
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
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
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
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



/* HashMap<int, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, unsigned int> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
::_resize_and_rehash
          (HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
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
/* HashMap<int, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, unsigned int> > >::insert(int const&, unsigned int
   const&, bool) */

void HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
     ::insert(int *param_1,uint *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  undefined8 uVar26;
  void *__s_00;
  undefined4 *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  uint *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  char in_R8B;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 (*pauVar38) [16];
  
  puVar29 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 2);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4);
  if (__s_00 == (void *)0x0) {
    uVar30 = (ulong)uVar23;
    uVar33 = uVar30 * 4;
    uVar35 = uVar30 * 8;
    uVar26 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 4) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar35)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar30 != uVar33);
        goto LAB_00102536;
      }
      memset(__s,0,uVar33);
      memset(__s_00,0,uVar35);
      uVar24 = param_2[0xb];
      uVar37 = *puVar29;
      goto LAB_00102541;
    }
    uVar24 = param_2[0xb];
    uVar37 = *puVar29;
    if (__s_00 != (void *)0x0) goto LAB_00102541;
  }
  else {
LAB_00102536:
    uVar24 = param_2[0xb];
    uVar37 = *puVar29;
LAB_00102541:
    if (uVar24 != 0) {
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4));
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)param_2[10] * 8);
      uVar22 = (uVar37 >> 0x10 ^ uVar37) * -0x7a143595;
      uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
      uVar34 = uVar22 ^ uVar22 >> 0x10;
      if (uVar22 == uVar22 >> 0x10) {
        uVar34 = 1;
        uVar30 = uVar33;
      }
      else {
        uVar30 = uVar34 * uVar33;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar30;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar22 = *(uint *)(*(long *)(param_2 + 4) + lVar31 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar22 != 0) {
        uVar36 = 0;
        do {
          if ((uVar34 == uVar22) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar31 * 8) + 0x10) == uVar37)) {
            pauVar25 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar27 * 8);
            *(undefined4 *)(pauVar25[1] + 4) = *in_RCX;
            goto LAB_001027c8;
          }
          uVar36 = uVar36 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar27 + 1) * uVar33;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar35;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar22 = *(uint *)(*(long *)(param_2 + 4) + lVar31 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar22 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar22 * uVar33, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar35, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4) + uVar27
                                ) - SUB164(auVar7 * auVar15,8)) * uVar33, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar35, uVar36 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar23 * __LC28 < (float)(uVar24 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar25 = (undefined1 (*) [16])0x0;
      goto LAB_001027c8;
    }
    _resize_and_rehash((HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
                        *)param_2,param_2[10] + 1);
  }
  uVar23 = *puVar29;
  uVar1 = *in_RCX;
  pauVar25 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar25[1] = uVar23;
  *(undefined4 *)(pauVar25[1] + 4) = uVar1;
  *pauVar25 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 6) = pauVar25;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar25;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar25;
    *(undefined8 **)(*pauVar25 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar25;
  }
  else {
    lVar31 = *(long *)(param_2 + 6);
    *(undefined1 (**) [16])(lVar31 + 8) = pauVar25;
    *(long *)*pauVar25 = lVar31;
    *(undefined1 (**) [16])(param_2 + 6) = pauVar25;
  }
  uVar23 = (*puVar29 >> 0x10 ^ *puVar29) * -0x7a143595;
  uVar24 = (uVar23 ^ uVar23 >> 0xd) * -0x3d4d51cb;
  uVar23 = uVar24 ^ uVar24 >> 0x10;
  if (uVar24 == uVar24 >> 0x10) {
    uVar33 = 1;
    uVar23 = 1;
  }
  else {
    uVar33 = (ulong)uVar23;
  }
  lVar31 = *(long *)(param_2 + 4);
  uVar22 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)param_2[10] * 8);
  uVar24 = *(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4);
  uVar35 = CONCAT44(0,uVar24);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar33 * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar35;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 2);
  puVar29 = (uint *)(lVar31 + lVar32 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar37 = *puVar29;
  pauVar21 = pauVar25;
  while (uVar37 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar37 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar35;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar24 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar3;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar35;
    uVar34 = SUB164(auVar11 * auVar19,8);
    pauVar38 = pauVar21;
    if (uVar34 < uVar22) {
      *puVar29 = uVar23;
      puVar2 = (undefined8 *)(lVar4 + lVar32 * 8);
      pauVar38 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar21;
      uVar23 = uVar37;
      uVar22 = uVar34;
    }
    uVar22 = uVar22 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar29 = (uint *)(lVar31 + lVar32 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    pauVar21 = pauVar38;
    uVar37 = *puVar29;
  }
  *(undefined1 (**) [16])(lVar4 + lVar32 * 8) = pauVar21;
  *puVar29 = uVar23;
  param_2[0xb] = param_2[0xb] + 1;
LAB_001027c8:
  *(undefined1 (**) [16])param_1 = pauVar25;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, unsigned int> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
::operator[](HashMap<int,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_int>>>
             *this,int *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__s;
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
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 (*pauVar32) [16];
  undefined8 uVar33;
  void *__s_00;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  undefined1 (*pauVar45) [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_70;
  uint local_68;
  
  uVar38 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  uVar31 = *param_1;
  uVar30 = *(uint *)(hash_table_size_primes + uVar38 * 4);
  uVar41 = CONCAT44(0,uVar30);
  if (__s_00 == (void *)0x0) {
    uVar38 = uVar41 * 4;
    uVar2 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    lStack_70 = 0x102d20;
    __s_00 = (void *)Memory::alloc_static(uVar2,false);
    *(void **)(this + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar2)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar41 != uVar38);
        uVar31 = *param_1;
        iVar39 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar38);
        lStack_70 = 0x102d6a;
        memset(__s_00,0,uVar2);
        uVar31 = *param_1;
        iVar39 = *(int *)(this + 0x2c);
      }
LAB_00102d79:
      if (iVar39 == 0) goto LAB_00102e30;
      uVar38 = (ulong)*(uint *)(this + 0x28);
      lVar42 = *(long *)(this + 0x10);
      goto LAB_00102a44;
    }
    uVar31 = *param_1;
    iVar39 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00102d79;
  }
  else {
    iVar39 = *(int *)(this + 0x2c);
    if (iVar39 == 0) {
LAB_00102e30:
      iVar39 = 0;
    }
    else {
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar43 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar43 = 1;
        uVar35 = uVar2;
      }
      else {
        uVar35 = uVar43 * uVar2;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar35;
      lVar36 = SUB168(auVar4 * auVar16,8);
      lVar42 = *(long *)(this + 0x10);
      uVar44 = SUB164(auVar4 * auVar16,8);
      uVar29 = *(uint *)(lVar42 + lVar36 * 4);
      if (uVar29 != 0) {
        uVar40 = 0;
        lVar37 = lVar36;
        do {
          if ((uVar43 == uVar29) &&
             (uVar31 == *(uint *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            auVar46._0_8_ = *(long *)((long)__s_00 + (ulong)uVar44 * 8) + 0x14;
            auVar46._8_8_ = lVar37;
            return auVar46;
          }
          uVar40 = uVar40 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar44 + 1) * uVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar36 = SUB168(auVar5 * auVar17,8);
          uVar29 = *(uint *)(lVar42 + lVar36 * 4);
          uVar44 = SUB164(auVar5 * auVar17,8);
        } while ((uVar29 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * uVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar41, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar44 + uVar30) - SUB164(auVar6 * auVar18,8)) * uVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar41, lVar37 = SUB168(auVar7 * auVar19,8),
                uVar40 <= SUB164(auVar7 * auVar19,8)));
      }
LAB_00102a44:
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar38 * 4));
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
      uVar29 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar29 = 1;
        uVar34 = uVar2;
      }
      else {
        uVar34 = uVar29 * uVar2;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar35;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      lVar36 = SUB168(auVar8 * auVar20,8);
      uVar30 = *(uint *)(lVar42 + lVar36 * 4);
      uVar43 = SUB164(auVar8 * auVar20,8);
      if (uVar30 != 0) {
        uVar44 = 0;
        lVar37 = lVar36;
        do {
          if ((uVar29 == uVar30) &&
             (uVar31 == *(uint *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            pauVar32 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar43 * 8);
            *(undefined4 *)(pauVar32[1] + 4) = 0;
            lStack_70 = lVar37;
            goto LAB_00102b16;
          }
          uVar44 = uVar44 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (uVar43 + 1) * uVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar35;
          lVar36 = SUB168(auVar9 * auVar21,8);
          uVar30 = *(uint *)(lVar42 + lVar36 * 4);
          uVar43 = SUB164(auVar9 * auVar21,8);
        } while ((uVar30 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar30 * uVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar35, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar38 * 4) + uVar43) -
                     SUB164(auVar10 * auVar22,8)) * uVar2, auVar23._8_8_ = 0, auVar23._0_8_ = uVar35
                , lVar37 = SUB168(auVar11 * auVar23,8), uVar44 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar41 * __LC28 < (float)(iVar39 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar32 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00102b16;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  iVar39 = *param_1;
  pauVar32 = (undefined1 (*) [16])operator_new(0x18,"");
  *(int *)pauVar32[1] = iVar39;
  *(undefined4 *)(pauVar32[1] + 4) = 0;
  *pauVar32 = (undefined1  [16])0x0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar32;
  }
  else {
    *puVar3 = pauVar32;
    *(undefined8 **)(*pauVar32 + 8) = puVar3;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar32;
  uVar31 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar30 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
  uVar31 = uVar30 ^ uVar30 >> 0x10;
  if (uVar30 == uVar30 >> 0x10) {
    uVar38 = 1;
    uVar31 = 1;
  }
  else {
    uVar38 = (ulong)uVar31;
  }
  uVar43 = 0;
  lVar42 = *(long *)(this + 0x10);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar30);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar38 * lVar36;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar41;
  lStack_70 = SUB168(auVar12 * auVar24,8);
  lVar37 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lStack_70 * 4);
  iVar39 = SUB164(auVar12 * auVar24,8);
  uVar29 = *puVar1;
  pauVar28 = pauVar32;
  while (uVar29 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar29 * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar41;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar30 + iVar39) - SUB164(auVar13 * auVar25,8)) * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    local_68 = SUB164(auVar14 * auVar26,8);
    pauVar45 = pauVar28;
    if (local_68 < uVar43) {
      *puVar1 = uVar31;
      puVar3 = (undefined8 *)(lVar37 + lStack_70 * 8);
      pauVar45 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar31 = uVar29;
      uVar43 = local_68;
    }
    uVar43 = uVar43 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar39 + 1) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    lStack_70 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar42 + lStack_70 * 4);
    iVar39 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar45;
    uVar29 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar37 + lStack_70 * 8) = pauVar28;
  *puVar1 = uVar31;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00102b16:
  auVar47._8_8_ = lStack_70;
  auVar47._0_8_ = pauVar32[1] + 4;
  return auVar47;
}


// This is taking way too long.