
/* SortArray<StringName::_Data*, StringName::DebugSortReferences, true>::introsort(long, long,
   StringName::_Data**, long) const [clone .isra.0] */

void SortArray<StringName::_Data*,StringName::DebugSortReferences,true>::introsort
               (long param_1,long param_2,_Data **param_3,long param_4)

{
  uint uVar1;
  _Data *p_Var2;
  long lVar3;
  long lVar4;
  long lVar5;
  _Data **pp_Var6;
  uint uVar7;
  _Data **pp_Var8;
  long lVar9;
  long lVar10;
  long lVar11;
  _Data *p_Var12;
  uint uVar13;
  _Data *p_Var14;
  _Data **pp_Var15;
  long lVar16;
  long local_58;
  
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_0010020e:
    lVar10 = lVar16 + -2 >> 1;
    lVar11 = lVar10 * 2 + 2;
    pp_Var8 = param_3 + param_1 + lVar10;
    p_Var12 = *pp_Var8;
    lVar5 = lVar10;
    lVar9 = lVar11;
    if (lVar16 <= lVar11) goto LAB_0010031e;
LAB_00100253:
    do {
      p_Var2 = param_3[param_1 + lVar11];
      p_Var14 = param_3[param_1 + lVar11 + -1];
      lVar3 = lVar11 + -1;
      lVar4 = lVar11;
      pp_Var6 = param_3 + param_1 + lVar11 + -1;
      if (*(uint *)(p_Var2 + 0x18) <= *(uint *)(p_Var14 + 0x18)) {
        lVar4 = lVar11 + 1;
        lVar3 = lVar11;
        p_Var14 = p_Var2;
        pp_Var6 = param_3 + param_1 + lVar11;
      }
      lVar11 = lVar4 * 2;
      param_3[lVar5 + param_1] = p_Var14;
      lVar5 = lVar3;
    } while (lVar16 != lVar11 && SBORROW8(lVar16,lVar11) == lVar16 + lVar4 * -2 < 0);
    pp_Var15 = pp_Var6;
    if (lVar16 == lVar11) goto LAB_00100324;
    do {
      lVar11 = lVar9;
      lVar9 = lVar3 + -1;
      if (lVar3 <= lVar10) goto LAB_00100462;
      uVar13 = *(uint *)(p_Var12 + 0x18);
      do {
        lVar5 = lVar9 >> 1;
        p_Var2 = param_3[param_1 + lVar5];
        if (*(uint *)(p_Var2 + 0x18) <= uVar13) {
          param_3[lVar3 + param_1] = p_Var12;
          goto joined_r0x001002fe;
        }
        param_3[lVar3 + param_1] = p_Var2;
        lVar9 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
        lVar3 = lVar5;
      } while (lVar10 < lVar5);
      param_3[param_1 + lVar5] = p_Var12;
joined_r0x001002fe:
      if (lVar10 == 0) {
        pp_Var8 = param_3 + param_1;
        lVar16 = (param_2 + -1) - param_1;
        goto LAB_00100360;
      }
      while( true ) {
        pp_Var8 = pp_Var8 + -1;
        lVar11 = lVar11 + -2;
        lVar10 = lVar10 + -1;
        p_Var12 = *pp_Var8;
        lVar5 = lVar10;
        lVar9 = lVar11;
        if (lVar11 < lVar16) goto LAB_00100253;
LAB_0010031e:
        lVar9 = lVar11;
        pp_Var15 = pp_Var8;
        pp_Var6 = pp_Var8;
        if (lVar11 == lVar16) break;
LAB_00100462:
        *pp_Var6 = p_Var12;
      }
LAB_00100324:
      lVar3 = lVar11 + -1;
      pp_Var6 = param_3 + param_1 + lVar3;
      *pp_Var15 = *pp_Var6;
    } while( true );
  }
  lVar11 = param_2;
  local_58 = param_4;
LAB_00100051:
  p_Var12 = param_3[lVar11 + -1];
  local_58 = local_58 + -1;
  uVar13 = *(uint *)(p_Var12 + 0x18);
  uVar7 = *(uint *)(param_3[param_1] + 0x18);
  uVar1 = *(uint *)(param_3[(lVar16 >> 1) + param_1] + 0x18);
  if (uVar1 < uVar7) {
    if (uVar13 < uVar1) {
LAB_001001e1:
      p_Var12 = param_3[(lVar16 >> 1) + param_1];
      uVar13 = uVar1;
      goto LAB_00100092;
    }
    if (uVar13 < uVar7) goto LAB_00100092;
  }
  else if (uVar7 <= uVar13) {
    if (uVar13 < uVar1) goto LAB_00100092;
    goto LAB_001001e1;
  }
  p_Var12 = param_3[param_1];
  uVar13 = uVar7;
LAB_00100092:
  lVar16 = lVar11;
  param_2 = param_1;
  do {
    if (uVar13 < uVar7) {
      if (lVar11 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        uVar13 = *(uint *)(p_Var12 + 0x18);
        goto LAB_001000ce;
      }
    }
    else {
LAB_001000ce:
      lVar9 = lVar16 + -1;
      pp_Var8 = param_3 + lVar9;
      if (*(uint *)(*pp_Var8 + 0x18) < uVar13) {
        pp_Var6 = param_3 + lVar16 + -2;
        while (param_1 != lVar9) {
          lVar9 = lVar9 + -1;
          pp_Var8 = pp_Var6;
          if (uVar13 <= *(uint *)(*pp_Var6 + 0x18)) goto LAB_00100135;
          pp_Var6 = pp_Var6 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_00100135:
      if (lVar9 <= param_2) break;
      p_Var2 = param_3[param_2];
      param_3[param_2] = *pp_Var8;
      uVar13 = *(uint *)(p_Var12 + 0x18);
      *pp_Var8 = p_Var2;
      lVar16 = lVar9;
    }
    lVar9 = param_2 + 1;
    param_2 = param_2 + 1;
    uVar7 = *(uint *)(param_3[lVar9] + 0x18);
  } while( true );
  introsort(param_2,lVar11,param_3,local_58);
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  lVar11 = param_2;
  if (local_58 == 0) goto LAB_0010020e;
  goto LAB_00100051;
LAB_00100360:
  p_Var12 = pp_Var8[lVar16];
  pp_Var8[lVar16] = *pp_Var8;
  if (lVar16 < 3) {
    if (lVar16 != 2) {
      *pp_Var8 = p_Var12;
      return;
    }
    lVar11 = param_1 + 1;
    lVar9 = 0;
    lVar16 = 1;
    *pp_Var8 = param_3[lVar11];
LAB_001003e6:
    uVar13 = *(uint *)(p_Var12 + 0x18);
    while( true ) {
      pp_Var6 = param_3 + lVar11;
      p_Var2 = param_3[param_1 + lVar9];
      if (*(uint *)(p_Var2 + 0x18) <= uVar13) break;
      *pp_Var6 = p_Var2;
      if (lVar9 == 0) {
        param_3[param_1 + lVar9] = p_Var12;
        goto LAB_00100360;
      }
      lVar11 = param_1 + lVar9;
      lVar9 = (lVar9 + -1) / 2;
    }
  }
  else {
    lVar11 = 2;
    lVar9 = 0;
    do {
      p_Var2 = param_3[param_1 + lVar11];
      p_Var14 = param_3[param_1 + lVar11 + -1];
      lVar5 = lVar11 + -1;
      pp_Var6 = param_3 + param_1 + lVar11 + -1;
      lVar10 = lVar11;
      if (*(uint *)(p_Var2 + 0x18) <= *(uint *)(p_Var14 + 0x18)) {
        lVar10 = lVar11 + 1;
        lVar5 = lVar11;
        pp_Var6 = param_3 + param_1 + lVar11;
        p_Var14 = p_Var2;
      }
      lVar11 = lVar10 * 2;
      param_3[lVar9 + param_1] = p_Var14;
      lVar9 = lVar5;
    } while (lVar16 != lVar11 && SBORROW8(lVar16,lVar11) == lVar16 + lVar10 * -2 < 0);
    if (lVar16 == lVar11) {
      lVar11 = param_1 + lVar16 + -1;
      lVar9 = lVar16 + -2 >> 1;
      *pp_Var6 = param_3[lVar11];
      lVar16 = lVar16 + -1;
      goto LAB_001003e6;
    }
    lVar11 = param_1 + lVar5;
    lVar16 = lVar16 + -1;
    lVar9 = (lVar5 + -1) / 2;
    if (0 < lVar5) goto LAB_001003e6;
  }
  *pp_Var6 = p_Var12;
  goto LAB_00100360;
}



/* CowData<StringName::_Data*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName::_Data*>::_copy_on_write(CowData<StringName::_Data*> *this)

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



/* StaticCString::create(char const*) */

char * StaticCString::create(char *param_1)

{
  return param_1;
}



/* StringName::_Data::TEMPNAMEPLACEHOLDERVALUE(String const&) const */

void __thiscall StringName::_Data::operator==(_Data *this,String *param_1)

{
  if (*(char **)(this + 8) != (char *)0x0) {
    String::operator==(param_1,*(char **)(this + 8));
    return;
  }
  String::operator==((String *)(this + 0x10),param_1);
  return;
}



/* StringName::_Data::TEMPNAMEPLACEHOLDERVALUE(String const&) const */

uint __thiscall StringName::_Data::operator!=(_Data *this,String *param_1)

{
  uint uVar1;
  
  if (*(char **)(this + 8) != (char *)0x0) {
    uVar1 = String::operator==(param_1,*(char **)(this + 8));
    return uVar1 ^ 1;
  }
  uVar1 = String::operator==((String *)(this + 0x10),param_1);
  return uVar1 ^ 1;
}



/* StringName::_Data::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

undefined8 __thiscall StringName::_Data::operator==(_Data *this,char *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (*(char **)(this + 8) != (char *)0x0) {
    iVar1 = strcmp(*(char **)(this + 8),param_1);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  uVar2 = String::operator==((String *)(this + 0x10),param_1);
  return uVar2;
}



/* StringName::_Data::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

uint __thiscall StringName::_Data::operator!=(_Data *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char **)(this + 8) != (char *)0x0) {
    iVar1 = strcmp(*(char **)(this + 8),param_1);
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0) ^ 1;
  }
  uVar2 = String::operator==((String *)(this + 0x10),param_1);
  return uVar2 ^ 1;
}



/* StringName::setup() */

void StringName::setup(void)

{
  if (configured == '\0') {
    memset(&_table,0,0x80000);
    configured = 1;
    return;
  }
  _err_print_error("setup","core/string/string_name.cpp",0x47,"Condition \"configured\" is true.",0,
                   0);
  return;
}



/* StringName::unref() */

void __thiscall StringName::unref(StringName *this)

{
  long *plVar1;
  int *piVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (configured == '\0') {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("unref","core/string/string_name.cpp",0x87,
                       "Condition \"!configured\" is true.",0,0);
      return;
    }
  }
  else {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        iVar5 = pthread_mutex_lock((pthread_mutex_t *)mutex);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar5);
        }
        pvVar6 = *(void **)this;
        if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
          if (*(int *)((long)pvVar6 + 4) != 0) {
            lVar8 = *(long *)this;
            pcVar3 = *(char **)(lVar8 + 8);
            local_50 = 0;
            if (pcVar3 == (char *)0x0) {
              plVar1 = (long *)(*(long *)(lVar8 + 0x10) + -0x10);
              if (*(long *)(lVar8 + 0x10) != 0) {
                do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00100a61;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar11 = lVar4 == lVar7;
                  if (bVar11) {
                    *plVar1 = lVar4 + 1;
                    lVar7 = lVar4;
                  }
                  UNLOCK();
                } while (!bVar11);
                if (lVar7 != -1) {
                  local_50 = *(long *)(lVar8 + 0x10);
                }
              }
LAB_00100a61:
              operator+((char *)&local_48,(String *)"BUG: Unreferenced static string to 0: ");
              uVar9 = 0x90;
            }
            else {
              local_40 = strlen(pcVar3);
              local_48 = pcVar3;
              String::parse_latin1((StrRange *)&local_50);
              operator+((char *)&local_48,(String *)"BUG: Unreferenced static string to 0: ");
              uVar9 = 0x8e;
            }
            _err_print_error("unref","core/string/string_name.cpp",uVar9,&local_48,0,0);
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
            lVar8 = local_50;
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
          }
          pvVar6 = *(void **)this;
        }
        if (*(long *)((long)pvVar6 + 0x28) == 0) {
          lVar8 = (long)*(int *)((long)pvVar6 + 0x1c);
          pvVar10 = (void *)(&_table)[lVar8];
          if (pvVar6 != pvVar10) {
            _err_print_error("unref","core/string/string_name.cpp",0x97,&_LC13,0,0);
            pvVar10 = *(void **)this;
            lVar8 = (long)*(int *)((long)pvVar10 + 0x1c);
          }
          (&_table)[lVar8] = *(undefined8 *)((long)pvVar10 + 0x30);
          pvVar6 = *(void **)this;
        }
        else {
          *(undefined8 *)(*(long *)((long)pvVar6 + 0x28) + 0x30) =
               *(undefined8 *)((long)pvVar6 + 0x30);
        }
        if (*(long *)((long)pvVar6 + 0x30) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar6 + 0x30) + 0x28) =
               *(undefined8 *)((long)pvVar6 + 0x28);
        }
        if (*(long *)((long)pvVar6 + 0x10) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar8 = *(long *)((long)pvVar6 + 0x10);
            *(undefined8 *)((long)pvVar6 + 0x10) = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        Memory::free_static(pvVar6,false);
        pthread_mutex_unlock((pthread_mutex_t *)mutex);
      }
    }
    *(undefined8 *)this = 0;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StringName::get_empty_hash() */

undefined4 StringName::get_empty_hash(void)

{
  int iVar1;
  
  if (get_empty_hash()::empty_hash != '\0') {
    return get_empty_hash()::empty_hash;
  }
  iVar1 = __cxa_guard_acquire(&get_empty_hash()::empty_hash);
  if (iVar1 == 0) {
    return get_empty_hash()::empty_hash;
  }
  get_empty_hash()::empty_hash = String::hash("");
  __cxa_guard_release(&get_empty_hash()::empty_hash);
  return get_empty_hash()::empty_hash;
}



/* StringName::TEMPNAMEPLACEHOLDERVALUE(String const&) const */

undefined8 __thiscall StringName::operator==(StringName *this,String *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    lVar1 = *(long *)param_1;
    if (lVar1 != 0) {
      return CONCAT71((int7)((ulong)lVar1 >> 8),*(uint *)(lVar1 + -8) < 2);
    }
    return 1;
  }
  if (*(char **)(lVar1 + 8) != (char *)0x0) {
    uVar2 = String::operator==(param_1,*(char **)(lVar1 + 8));
    return uVar2;
  }
  uVar2 = String::operator==((String *)(lVar1 + 0x10),param_1);
  return uVar2;
}



/* StringName::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

bool __thiscall StringName::operator==(StringName *this,char *param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    return *param_1 == '\0';
  }
  if (*(char **)(lVar1 + 8) != (char *)0x0) {
    iVar3 = strcmp(*(char **)(lVar1 + 8),param_1);
    return iVar3 == 0;
  }
  uVar2 = String::operator==((String *)(lVar1 + 0x10),param_1);
  return (bool)uVar2;
}



/* StringName::TEMPNAMEPLACEHOLDERVALUE(String const&) const */

uint __thiscall StringName::operator!=(StringName *this,String *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    if (*(char **)(lVar1 + 8) != (char *)0x0) {
      uVar2 = String::operator==(param_1,*(char **)(lVar1 + 8));
      return uVar2 ^ 1;
    }
    uVar2 = String::operator==((String *)(lVar1 + 0x10),param_1);
    return uVar2 ^ 1;
  }
  if (*(long *)param_1 == 0) {
    return 0;
  }
  iVar3 = (int)*(undefined8 *)(*(long *)param_1 + -8);
  if (iVar3 != 0) {
    return (uint)(iVar3 != 1);
  }
  return 0;
}



/* StringName::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

uint __thiscall StringName::operator!=(StringName *this,char *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_RAX;
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),*param_1 == '\0') ^ 1;
  }
  if (*(char **)(lVar1 + 8) != (char *)0x0) {
    iVar2 = strcmp(*(char **)(lVar1 + 8),param_1);
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0) ^ 1;
  }
  uVar3 = String::operator==((String *)(lVar1 + 0x10),param_1);
  return uVar3 ^ 1;
}



/* StringName::operator[](int) const */

int __thiscall StringName::operator[](StringName *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  lVar6 = (long)param_1;
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    sVar4 = 0;
    iVar3 = 0xcc;
    pcVar7 = "0";
LAB_00100d26:
    _err_print_index_error
              ("operator[]","core/string/string_name.cpp",iVar3,lVar6,sVar4,"p_index",pcVar7,"",
               false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pcVar7 = *(char **)(lVar1 + 8);
  if (pcVar7 == (char *)0x0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar1 + -8);
    }
    if (lVar5 != lVar6) {
      if ((lVar6 < lVar5) && (-1 < lVar6)) {
        return *(int *)(lVar1 + lVar6 * 4);
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar5,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    iVar3 = 0;
  }
  else {
    sVar4 = strlen(pcVar7);
    if ((param_1 < 0) || ((long)sVar4 <= lVar6)) {
      iVar3 = 0xc5;
      pcVar7 = "static_cast<long>(strlen(_data->cname))";
      goto LAB_00100d26;
    }
    iVar3 = (int)pcVar7[lVar6];
  }
  return iVar3;
}



/* StringName::length() const */

size_t __thiscall StringName::length(StringName *this)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    if (*(char **)(lVar1 + 8) != (char *)0x0) {
      sVar3 = strlen(*(char **)(lVar1 + 8));
      return sVar3;
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      iVar2 = (int)*(undefined8 *)(*(long *)(lVar1 + 0x10) + -8);
      return (ulong)(iVar2 + -1 + (uint)(iVar2 == 0));
    }
  }
  return 0;
}



/* StringName::is_empty() const */

bool __thiscall StringName::is_empty(StringName *this)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)this;
  bVar2 = true;
  if (lVar1 != 0) {
    if (*(char **)(lVar1 + 8) == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        return *(uint *)(*(long *)(lVar1 + 0x10) + -8) < 2;
      }
    }
    else {
      bVar2 = **(char **)(lVar1 + 8) == '\0';
    }
  }
  return bVar2;
}



/* StringName::TEMPNAMEPLACEHOLDERVALUE(StringName const&) */

StringName * __thiscall StringName::operator=(StringName *this,StringName *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (this != param_1) {
    unref(this);
    piVar2 = *(int **)param_1;
    if (piVar2 != (int *)0x0) {
      do {
        iVar1 = *piVar2;
        if (iVar1 == 0) {
          return this;
        }
        LOCK();
        iVar3 = *piVar2;
        bVar4 = iVar1 == iVar3;
        if (bVar4) {
          *piVar2 = iVar1 + 1;
          iVar3 = iVar1;
        }
        UNLOCK();
      } while (!bVar4);
      if (iVar3 != -1) {
        *(undefined8 *)this = *(undefined8 *)param_1;
      }
    }
  }
  return this;
}



/* StringName::StringName(StringName const&) */

void __thiscall StringName::StringName(StringName *this,StringName *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = configured == '\0';
  *(undefined8 *)this = 0;
  if (bVar4) {
    _err_print_error("StringName","core/string/string_name.cpp",0xf9,
                     "Condition \"!configured\" is true.",0,0);
    return;
  }
  piVar2 = *(int **)param_1;
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        return;
      }
      LOCK();
      iVar3 = *piVar2;
      bVar4 = iVar1 == iVar3;
      if (bVar4) {
        *piVar2 = iVar1 + 1;
        iVar3 = iVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (iVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* StringName::StringName(char const*, bool) */

void __thiscall StringName::StringName(StringName *this,char *param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar11 = configured == '\0';
  *(undefined8 *)this = 0;
  if (bVar11) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("StringName","core/string/string_name.cpp",0x10a,
                       "Condition \"!configured\" is true.",0,0);
      return;
    }
    goto LAB_001011df;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001011df;
  }
  uVar4 = String::hash(param_1);
  uVar5 = uVar4 & 0xffff;
  iVar6 = pthread_mutex_lock((pthread_mutex_t *)mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  lVar10 = (&_table)[uVar5];
  *(long *)this = lVar10;
  while (lVar10 != 0) {
    while (*(uint *)(lVar10 + 0x20) == uVar4) {
      if (*(char **)(lVar10 + 8) != (char *)0x0) {
        iVar6 = strcmp(*(char **)(lVar10 + 8),param_1);
        if (iVar6 == 0) {
LAB_00101021:
          piVar9 = *(int **)this;
          if (piVar9 == (int *)0x0) goto LAB_00101080;
          goto LAB_00101029;
        }
        break;
      }
      cVar3 = String::operator==((String *)(lVar10 + 0x10),param_1);
      if (cVar3 != '\0') goto LAB_00101021;
      lVar10 = *(long *)(*(long *)this + 0x30);
      *(long *)this = lVar10;
      if (lVar10 == 0) goto LAB_00101080;
    }
    lVar10 = *(long *)(*(long *)this + 0x30);
    *(long *)this = lVar10;
  }
LAB_00101080:
  puVar8 = (undefined4 *)operator_new(0x38,"");
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 10) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar8 + 6) = 0;
  puVar8[8] = 0;
  *(undefined4 **)this = puVar8;
  strlen(param_1);
  String::parse_latin1((StrRange *)(puVar8 + 4));
  **(undefined4 **)this = 1;
  *(uint *)(*(long *)this + 4) = (uint)param_2;
  piVar9 = *(int **)this;
  bVar11 = debug_stringname != '\0';
  piVar9[7] = uVar5;
  uVar2 = (&_table)[uVar5];
  piVar9[8] = uVar4;
  piVar9[2] = 0;
  piVar9[3] = 0;
  *(undefined8 *)(piVar9 + 0xc) = uVar2;
  piVar9[10] = 0;
  piVar9[0xb] = 0;
  if (bVar11) {
    do {
      iVar6 = *piVar9;
      if (iVar6 == 0) break;
      LOCK();
      iVar7 = *piVar9;
      if (iVar6 == iVar7) {
        *piVar9 = iVar6 + 1;
      }
      UNLOCK();
    } while (iVar6 != iVar7);
    LOCK();
    *(int *)(*(long *)this + 4) = *(int *)(*(long *)this + 4) + 1;
    UNLOCK();
    piVar9 = *(int **)this;
  }
  if ((&_table)[uVar5] != 0) {
    *(int **)((&_table)[uVar5] + 0x28) = piVar9;
  }
  (&_table)[uVar5] = piVar9;
  goto LAB_00101142;
  while( true ) {
    LOCK();
    iVar7 = *piVar9;
    bVar11 = iVar6 == iVar7;
    if (bVar11) {
      *piVar9 = iVar6 + 1;
      iVar7 = iVar6;
    }
    UNLOCK();
    if (bVar11) break;
LAB_00101029:
    iVar6 = *piVar9;
    if (iVar6 == 0) goto LAB_00101080;
  }
  if (iVar7 == -1) goto LAB_00101080;
  if (param_2) {
    LOCK();
    *(int *)(*(long *)this + 4) = *(int *)(*(long *)this + 4) + 1;
    UNLOCK();
  }
  if (debug_stringname != '\0') {
    *(int *)(*(long *)this + 0x18) = *(int *)(*(long *)this + 0x18) + 1;
  }
LAB_00101142:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock((pthread_mutex_t *)mutex);
    return;
  }
LAB_001011df:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StringName::assign_static_unique_class_name(StringName*, char const*) */

void StringName::assign_static_unique_class_name(StringName *param_1,char *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (*(long *)param_1 == 0) {
    StringName((StringName *)&local_38,param_2,true);
    if (*(long *)param_1 == local_38) {
      if ((configured != '\0') && (local_38 != 0)) {
        unref((StringName *)&local_38);
      }
    }
    else {
      unref(param_1);
      *(long *)param_1 = local_38;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock((pthread_mutex_t *)mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StringName::StringName(StaticCString const&, bool) */

void __thiscall StringName::StringName(StringName *this,StaticCString *param_1,bool param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  long lVar10;
  bool bVar11;
  
  bVar11 = configured == '\0';
  *(undefined8 *)this = 0;
  if (bVar11) {
    _err_print_error("StringName","core/string/string_name.cpp",0x145,
                     "Condition \"!configured\" is true.",0,0);
    return;
  }
  pcVar1 = *(char **)param_1;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    _err_print_error("StringName","core/string/string_name.cpp",0x147,
                     "Condition \"!p_static_string.ptr || !p_static_string.ptr[0]\" is true.",0,0);
    return;
  }
  uVar4 = String::hash(pcVar1);
  uVar5 = uVar4 & 0xffff;
  iVar6 = pthread_mutex_lock((pthread_mutex_t *)mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  lVar10 = (&_table)[uVar5];
  *(long *)this = lVar10;
  while (lVar10 != 0) {
    while (*(uint *)(lVar10 + 0x20) == uVar4) {
      if (*(char **)(lVar10 + 8) != (char *)0x0) {
        iVar6 = strcmp(*(char **)(lVar10 + 8),*(char **)param_1);
        if (iVar6 == 0) {
LAB_00101369:
          piVar9 = *(int **)this;
          if (piVar9 == (int *)0x0) goto LAB_001013d0;
          goto LAB_00101371;
        }
        break;
      }
      cVar3 = String::operator==((String *)(lVar10 + 0x10),*(char **)param_1);
      if (cVar3 != '\0') goto LAB_00101369;
      lVar10 = *(long *)(*(long *)this + 0x30);
      *(long *)this = lVar10;
      if (lVar10 == 0) goto LAB_001013d0;
    }
    lVar10 = *(long *)(*(long *)this + 0x30);
    *(long *)this = lVar10;
  }
  goto LAB_001013d0;
  while( true ) {
    LOCK();
    iVar7 = *piVar9;
    bVar11 = iVar6 == iVar7;
    if (bVar11) {
      *piVar9 = iVar6 + 1;
      iVar7 = iVar6;
    }
    UNLOCK();
    if (bVar11) break;
LAB_00101371:
    iVar6 = *piVar9;
    if (iVar6 == 0) goto LAB_001013d0;
  }
  if (iVar7 != -1) {
    if (param_2) {
      LOCK();
      *(int *)(*(long *)this + 4) = *(int *)(*(long *)this + 4) + 1;
      UNLOCK();
    }
    if (debug_stringname != '\0') {
      *(int *)(*(long *)this + 0x18) = *(int *)(*(long *)this + 0x18) + 1;
    }
    goto LAB_0010145b;
  }
LAB_001013d0:
  puVar8 = (undefined4 *)operator_new(0x38,"");
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 10) = (undefined1  [16])0x0;
  puVar8[8] = 0;
  *(undefined4 **)this = puVar8;
  *puVar8 = 1;
  *(uint *)(*(long *)this + 4) = (uint)param_2;
  piVar9 = *(int **)this;
  bVar11 = debug_stringname != '\0';
  piVar9[7] = uVar5;
  uVar2 = *(undefined8 *)param_1;
  piVar9[8] = uVar4;
  *(undefined8 *)(piVar9 + 2) = uVar2;
  uVar2 = (&_table)[uVar5];
  piVar9[10] = 0;
  piVar9[0xb] = 0;
  *(undefined8 *)(piVar9 + 0xc) = uVar2;
  if (bVar11) {
    do {
      iVar6 = *piVar9;
      if (iVar6 == 0) break;
      LOCK();
      iVar7 = *piVar9;
      if (iVar6 == iVar7) {
        *piVar9 = iVar6 + 1;
      }
      UNLOCK();
    } while (iVar6 != iVar7);
    LOCK();
    *(int *)(*(long *)this + 4) = *(int *)(*(long *)this + 4) + 1;
    UNLOCK();
    piVar9 = *(int **)this;
  }
  if ((&_table)[uVar5] != 0) {
    *(int **)((&_table)[uVar5] + 0x28) = piVar9;
  }
  (&_table)[uVar5] = piVar9;
LAB_0010145b:
  pthread_mutex_unlock((pthread_mutex_t *)mutex);
  return;
}



/* StringName::StringName(String const&, bool) */

void __thiscall StringName::StringName(StringName *this,String *param_1,bool param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  long lVar9;
  bool bVar10;
  
  bVar10 = configured == '\0';
  *(undefined8 *)this = 0;
  if (bVar10) {
    _err_print_error("StringName","core/string/string_name.cpp",0x17d,
                     "Condition \"!configured\" is true.",0,0);
    return;
  }
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    return;
  }
  uVar3 = String::hash();
  uVar4 = uVar3 & 0xffff;
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)mutex);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  lVar9 = (&_table)[uVar4];
  *(long *)this = lVar9;
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x20) == uVar3) goto LAB_00101625;
    do {
      do {
        lVar9 = *(long *)(*(long *)this + 0x30);
        *(long *)this = lVar9;
        if (lVar9 == 0) goto LAB_0010165e;
      } while (*(uint *)(lVar9 + 0x20) != uVar3);
LAB_00101625:
      if (*(char **)(lVar9 + 8) == (char *)0x0) {
        cVar2 = String::operator==((String *)(lVar9 + 0x10),param_1);
      }
      else {
        cVar2 = String::operator==(param_1,*(char **)(lVar9 + 8));
      }
    } while (cVar2 == '\0');
    piVar8 = *(int **)this;
    if (piVar8 != (int *)0x0) {
      do {
        iVar5 = *piVar8;
        if (iVar5 == 0) goto LAB_0010165e;
        LOCK();
        iVar6 = *piVar8;
        bVar10 = iVar5 == iVar6;
        if (bVar10) {
          *piVar8 = iVar5 + 1;
          iVar6 = iVar5;
        }
        UNLOCK();
      } while (!bVar10);
      if (iVar6 != -1) {
        if (param_2) {
          LOCK();
          *(int *)(*(long *)this + 4) = *(int *)(*(long *)this + 4) + 1;
          UNLOCK();
        }
        if (debug_stringname != '\0') {
          *(int *)(*(long *)this + 0x18) = *(int *)(*(long *)this + 0x18) + 1;
        }
        goto LAB_00101705;
      }
    }
  }
LAB_0010165e:
  puVar7 = (undefined4 *)operator_new(0x38,"");
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  lVar9 = *(long *)param_1;
  puVar7[8] = 0;
  *(undefined1 (*) [16])(puVar7 + 10) = (undefined1  [16])0x0;
  *(undefined4 **)this = puVar7;
  if (lVar9 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 4),(CowData *)param_1);
    puVar7 = *(undefined4 **)this;
  }
  *puVar7 = 1;
  *(uint *)(*(long *)this + 4) = (uint)param_2;
  piVar8 = *(int **)this;
  bVar10 = debug_stringname != '\0';
  piVar8[7] = uVar4;
  uVar1 = (&_table)[uVar4];
  piVar8[8] = uVar3;
  piVar8[2] = 0;
  piVar8[3] = 0;
  *(undefined8 *)(piVar8 + 0xc) = uVar1;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  if (bVar10) {
    do {
      iVar5 = *piVar8;
      if (iVar5 == 0) break;
      LOCK();
      iVar6 = *piVar8;
      if (iVar5 == iVar6) {
        *piVar8 = iVar5 + 1;
      }
      UNLOCK();
    } while (iVar5 != iVar6);
    LOCK();
    *(int *)(*(long *)this + 4) = *(int *)(*(long *)this + 4) + 1;
    UNLOCK();
    piVar8 = *(int **)this;
  }
  if ((&_table)[uVar4] != 0) {
    *(int **)((&_table)[uVar4] + 0x28) = piVar8;
  }
  (&_table)[uVar4] = piVar8;
LAB_00101705:
  pthread_mutex_unlock((pthread_mutex_t *)mutex);
  return;
}



/* StringName::search(char const*) */

StringName * __thiscall StringName::search(StringName *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  if (configured == '\0') {
    _err_print_error("search","core/string/string_name.cpp",0x1b5,
                     "Condition \"!configured\" is true. Returning: StringName()",0,0);
    *(undefined8 *)this = 0;
    return this;
  }
  if (param_1 == (char *)0x0) {
    _err_print_error("search","core/string/string_name.cpp",0x1b7,"Parameter \"p_name\" is null.",0,
                     0);
    *(undefined8 *)this = 0;
    return this;
  }
  if (*param_1 == '\0') {
    *(undefined8 *)this = 0;
    return this;
  }
  uVar2 = String::hash(param_1);
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  for (piVar5 = (int *)(&_table)[uVar2 & 0xffff]; piVar5 != (int *)0x0;
      piVar5 = *(int **)(piVar5 + 0xc)) {
    while (piVar5[8] == uVar2) {
      if (*(char **)(piVar5 + 2) != (char *)0x0) {
        iVar3 = strcmp(*(char **)(piVar5 + 2),param_1);
        if (iVar3 == 0) goto LAB_00101854;
        break;
      }
      cVar1 = String::operator==((String *)(piVar5 + 4),param_1);
      if (cVar1 != '\0') goto LAB_00101854;
      piVar5 = *(int **)(piVar5 + 0xc);
      if (piVar5 == (int *)0x0) goto LAB_001018b0;
    }
  }
  goto LAB_001018b0;
  while( true ) {
    LOCK();
    iVar4 = *piVar5;
    bVar6 = iVar3 == iVar4;
    if (bVar6) {
      *piVar5 = iVar3 + 1;
      iVar4 = iVar3;
    }
    UNLOCK();
    if (bVar6) break;
LAB_00101854:
    iVar3 = *piVar5;
    if (iVar3 == 0) goto LAB_001018b0;
  }
  if (iVar4 != -1) {
    if (debug_stringname != '\0') {
      piVar5[6] = piVar5[6] + 1;
    }
    *(int **)this = piVar5;
    goto LAB_00101879;
  }
LAB_001018b0:
  *(undefined8 *)this = 0;
LAB_00101879:
  pthread_mutex_unlock((pthread_mutex_t *)mutex);
  return this;
}



/* StringName::search(char32_t const*) */

StringName * __thiscall StringName::search(StringName *this,wchar32 *param_1)

{
  wchar32 *pwVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  wchar32 *pwVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_60;
  wchar32 *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (configured == '\0') {
    _err_print_error("search","core/string/string_name.cpp",0x1d8,
                     "Condition \"!configured\" is true. Returning: StringName()",0,0);
    *(undefined8 *)this = 0;
    goto LAB_0010199b;
  }
  if (param_1 == (wchar32 *)0x0) {
    _err_print_error("search","core/string/string_name.cpp",0x1da,"Parameter \"p_name\" is null.",0,
                     0);
    *(undefined8 *)this = 0;
    goto LAB_0010199b;
  }
  if (*param_1 == L'\0') {
    *(undefined8 *)this = 0;
    goto LAB_0010199b;
  }
  uVar6 = String::hash(param_1);
  iVar7 = pthread_mutex_lock((pthread_mutex_t *)mutex);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  for (piVar3 = (int *)(&_table)[uVar6 & 0xffff]; piVar3 != (int *)0x0;
      piVar3 = *(int **)(piVar3 + 0xc)) {
    if (piVar3[8] == uVar6) {
      local_60 = 0;
      pwVar9 = param_1;
      if (*param_1 == L'\0') {
        local_50 = 0;
      }
      else {
        do {
          pwVar1 = pwVar9 + 1;
          pwVar9 = pwVar9 + 1;
        } while (*pwVar1 != L'\0');
        local_50 = (long)pwVar9 - (long)param_1 >> 2;
      }
      local_58 = param_1;
      String::parse_utf32((StrRange *)&local_60);
      if (*(char **)(piVar3 + 2) == (char *)0x0) {
        cVar5 = String::operator==((String *)(piVar3 + 4),(String *)&local_60);
      }
      else {
        cVar5 = String::operator==((String *)&local_60,*(char **)(piVar3 + 2));
      }
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar2 = (long *)(local_60 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
          if (cVar5 == '\0') goto LAB_00101a10;
          goto LAB_00101a9c;
        }
      }
      if (cVar5 != '\0') goto LAB_00101a9c;
    }
LAB_00101a10:
  }
LAB_00101af8:
  *(undefined8 *)this = 0;
  goto LAB_00101ab4;
  while( true ) {
    LOCK();
    iVar8 = *piVar3;
    bVar10 = iVar7 == iVar8;
    if (bVar10) {
      *piVar3 = iVar7 + 1;
      iVar8 = iVar7;
    }
    UNLOCK();
    if (bVar10) break;
LAB_00101a9c:
    iVar7 = *piVar3;
    if (iVar7 == 0) goto LAB_00101af8;
  }
  if (iVar8 == -1) goto LAB_00101af8;
  *(int **)this = piVar3;
LAB_00101ab4:
  pthread_mutex_unlock((pthread_mutex_t *)mutex);
LAB_0010199b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StringName::search(String const&) */

StringName * __thiscall StringName::search(StringName *this,String *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    _err_print_error("search","core/string/string_name.cpp",0x1f5,
                     "Condition \"p_name.is_empty()\" is true. Returning: StringName()",0,0);
    *(undefined8 *)this = 0;
    return this;
  }
  uVar3 = String::hash();
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)mutex);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  for (piVar1 = (int *)(&_table)[uVar3 & 0xffff]; piVar1 != (int *)0x0;
      piVar1 = *(int **)(piVar1 + 0xc)) {
    if (piVar1[8] == uVar3) {
      if (*(char **)(piVar1 + 2) == (char *)0x0) {
        cVar2 = String::operator==((String *)(piVar1 + 4),param_1);
      }
      else {
        cVar2 = String::operator==(param_1,*(char **)(piVar1 + 2));
      }
      if (cVar2 != '\0') goto LAB_00101c33;
    }
  }
  goto LAB_00101c60;
  while( true ) {
    LOCK();
    iVar5 = *piVar1;
    bVar6 = iVar4 == iVar5;
    if (bVar6) {
      *piVar1 = iVar4 + 1;
      iVar5 = iVar4;
    }
    UNLOCK();
    if (bVar6) break;
LAB_00101c33:
    iVar4 = *piVar1;
    if (iVar4 == 0) goto LAB_00101c60;
  }
  if (iVar5 != -1) {
    if (debug_stringname != '\0') {
      piVar1[6] = piVar1[6] + 1;
    }
    *(int **)this = piVar1;
    goto LAB_00101c68;
  }
LAB_00101c60:
  *(undefined8 *)this = 0;
LAB_00101c68:
  pthread_mutex_unlock((pthread_mutex_t *)mutex);
  return this;
}



/* TEMPNAMEPLACEHOLDERVALUE(String const&, StringName const&) */

undefined8 operator==(String *param_1,StringName *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)param_2;
  if (lVar1 == 0) {
    lVar1 = *(long *)param_1;
    if (lVar1 != 0) {
      return CONCAT71((int7)((ulong)lVar1 >> 8),*(uint *)(lVar1 + -8) < 2);
    }
    return 1;
  }
  if (*(char **)(lVar1 + 8) != (char *)0x0) {
    uVar2 = String::operator==(param_1,*(char **)(lVar1 + 8));
    return uVar2;
  }
  uVar2 = String::operator==((String *)(lVar1 + 0x10),param_1);
  return uVar2;
}



/* TEMPNAMEPLACEHOLDERVALUE(String const&, StringName const&) */

uint operator!=(String *param_1,StringName *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *(long *)param_2;
  if (lVar1 != 0) {
    if (*(char **)(lVar1 + 8) != (char *)0x0) {
      uVar2 = String::operator==(param_1,*(char **)(lVar1 + 8));
      return uVar2 ^ 1;
    }
    uVar2 = String::operator==((String *)(lVar1 + 0x10),param_1);
    return uVar2 ^ 1;
  }
  if (*(long *)param_1 == 0) {
    return 0;
  }
  iVar3 = (int)*(undefined8 *)(*(long *)param_1 + -8);
  if (iVar3 != 0) {
    return (uint)(iVar3 != 1);
  }
  return 0;
}



/* TEMPNAMEPLACEHOLDERVALUE(char const*, StringName const&) */

ulong operator==(char *param_1,StringName *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 extraout_var;
  ulong uVar3;
  
  lVar1 = *(long *)param_2;
  if (lVar1 == 0) {
    return (ulong)(*param_1 == '\0');
  }
  if (*(char **)(lVar1 + 8) != (char *)0x0) {
    iVar2 = strcmp(*(char **)(lVar1 + 8),param_1);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
  }
  uVar3 = String::operator==((String *)(lVar1 + 0x10),param_1);
  return uVar3;
}



/* TEMPNAMEPLACEHOLDERVALUE(char const*, StringName const&) */

uint operator!=(char *param_1,StringName *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = *(long *)param_2;
  if (lVar1 == 0) {
    return *param_1 == '\0' ^ 1;
  }
  if (*(char **)(lVar1 + 8) != (char *)0x0) {
    iVar2 = strcmp(*(char **)(lVar1 + 8),param_1);
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0) ^ 1;
  }
  uVar3 = String::operator==((String *)(lVar1 + 0x10),param_1);
  return uVar3 ^ 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringName::cleanup() */

void StringName::cleanup(void)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  _Data **pp_Var13;
  _Data *p_Var14;
  _Data *p_Var15;
  _Data **pp_Var16;
  _Data **pp_Var17;
  _Data *p_Var18;
  long *plVar19;
  _Data **pp_Var20;
  _Data *p_Var21;
  _Data *p_Var22;
  _Data *p_Var23;
  long in_FS_OFFSET;
  bool bVar24;
  float fVar25;
  float fVar26;
  StrRange *local_f8;
  int local_f0;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  _Data **local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = pthread_mutex_lock((pthread_mutex_t *)mutex);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar9);
  }
  if (debug_stringname == '\0') goto LAB_00101ead;
  plVar19 = &_table;
  local_70 = (_Data **)0x0;
  do {
    for (p_Var22 = (_Data *)*plVar19; p_Var22 != (_Data *)0x0; p_Var22 = *(_Data **)(p_Var22 + 0x30)
        ) {
      if (local_70 == (_Data **)0x0) {
        p_Var21 = (_Data *)0x1;
      }
      else {
        p_Var21 = local_70[-1] + 1;
      }
      iVar9 = CowData<StringName::_Data*>::resize<false>
                        ((CowData<StringName::_Data*> *)&local_70,(long)p_Var21);
      if (iVar9 == 0) {
        if (local_70 == (_Data **)0x0) {
          p_Var23 = (_Data *)0xffffffffffffffff;
          p_Var21 = (_Data *)0x0;
        }
        else {
          p_Var21 = local_70[-1];
          p_Var23 = p_Var21 + -1;
          if (-1 < (long)p_Var23) {
            CowData<StringName::_Data*>::_copy_on_write((CowData<StringName::_Data*> *)&local_70);
            local_70[(long)p_Var23] = p_Var22;
            goto LAB_001023ef;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,(long)p_Var23,(long)p_Var21,"p_index",
                   "size()","",false,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_001023ef:
    }
    plVar19 = plVar19 + 1;
  } while (plVar19 != (long *)&_LC46);
  Variant::Variant((Variant *)local_58,
                   "\nStringName reference ranking (from most to least referenced):\n");
  stringify_variants((Variant *)&local_68);
  __print_line((String *)&local_68);
  pcVar6 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar19 = (long *)(local_68 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_70 == (_Data **)0x0) {
LAB_0010291d:
    fVar26 = 0.0;
    pp_Var20 = (_Data **)0x0;
    local_f0 = 0;
    fVar25 = 0.0;
    p_Var22 = (_Data *)0x0;
  }
  else {
    p_Var22 = local_70[-1];
    if (p_Var22 == (_Data *)0x0) {
      local_f0 = 0;
      p_Var22 = (_Data *)0x0;
      iVar9 = 0;
      pp_Var20 = local_70;
LAB_001024b0:
      fVar25 = (float)iVar9;
      fVar26 = (float)(long)p_Var22;
    }
    else {
      CowData<StringName::_Data*>::_copy_on_write((CowData<StringName::_Data*> *)&local_70);
      pp_Var20 = local_70;
      if (p_Var22 == (_Data *)0x1) {
        SortArray<StringName::_Data*,StringName::DebugSortReferences,true>::introsort
                  (0,1,local_70,0);
        if (pp_Var20 == (_Data **)0x0) goto LAB_0010291d;
      }
      else {
        lVar11 = 0;
        p_Var21 = p_Var22;
        do {
          p_Var21 = (_Data *)((long)p_Var21 >> 1);
          lVar11 = lVar11 + 1;
        } while (p_Var21 != (_Data *)0x1);
        SortArray<StringName::_Data*,StringName::DebugSortReferences,true>::introsort
                  (0,(long)p_Var22,local_70,lVar11 * 2);
        if ((long)p_Var22 < 0x11) {
          pp_Var13 = pp_Var20 + 1;
          p_Var21 = (_Data *)0x1;
          pp_Var17 = pp_Var13;
          do {
            p_Var23 = *pp_Var17;
            uVar4 = *(uint *)(p_Var23 + 0x18);
            if (*(uint *)(*pp_Var20 + 0x18) < uVar4) {
              memmove(pp_Var13,pp_Var20,(long)p_Var21 * 8);
              *pp_Var20 = p_Var23;
            }
            else {
              p_Var18 = pp_Var17[-1];
              p_Var14 = p_Var21 + -1;
              pp_Var16 = pp_Var17;
              if (*(uint *)(p_Var18 + 0x18) < uVar4) {
                do {
                  p_Var15 = p_Var14;
                  if (p_Var15 == (_Data *)0x0) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    pp_Var16 = pp_Var13;
                    goto LAB_001029f9;
                  }
                  pp_Var20[(long)(p_Var15 + 1)] = p_Var18;
                  p_Var18 = pp_Var20[(long)(p_Var15 + -1)];
                  p_Var14 = p_Var15 + -1;
                } while (*(uint *)(p_Var18 + 0x18) < uVar4);
                pp_Var16 = pp_Var20 + (long)p_Var15;
              }
LAB_001029f9:
              *pp_Var16 = p_Var23;
            }
            p_Var21 = p_Var21 + 1;
            pp_Var17 = pp_Var17 + 1;
          } while (p_Var22 != p_Var21);
        }
        else {
          lVar11 = 1;
          do {
            p_Var21 = pp_Var20[lVar11];
            uVar4 = *(uint *)(p_Var21 + 0x18);
            if (*(uint *)(*pp_Var20 + 0x18) < uVar4) {
              memmove(pp_Var20 + 1,pp_Var20,lVar11 * 8);
              *pp_Var20 = p_Var21;
            }
            else {
              p_Var23 = pp_Var20[lVar11 + -1];
              lVar10 = lVar11 + -1;
              if (*(uint *)(p_Var23 + 0x18) < uVar4) {
                do {
                  lVar12 = lVar10;
                  if (lVar12 == 0) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    pp_Var13 = pp_Var20 + 1;
                    goto LAB_001028ef;
                  }
                  pp_Var20[lVar12 + 1] = p_Var23;
                  p_Var23 = pp_Var20[lVar12 + -1];
                  lVar10 = lVar12 + -1;
                } while (*(uint *)(p_Var23 + 0x18) < uVar4);
                pp_Var13 = pp_Var20 + lVar12;
              }
              else {
                pp_Var13 = pp_Var20 + lVar11;
              }
LAB_001028ef:
              *pp_Var13 = p_Var21;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x10);
          pp_Var13 = pp_Var20 + 0x10;
          p_Var21 = (_Data *)0x10;
          do {
            p_Var23 = *pp_Var13;
            p_Var18 = pp_Var13[-1];
            uVar4 = *(uint *)(p_Var23 + 0x18);
            p_Var14 = p_Var21 + -1;
            pp_Var17 = pp_Var13;
            if (*(uint *)(p_Var18 + 0x18) < uVar4) {
              do {
                pp_Var20[(long)(p_Var14 + 1)] = p_Var18;
                p_Var15 = p_Var14 + -1;
                p_Var18 = pp_Var20[(long)p_Var15];
                if (uVar4 <= *(uint *)(p_Var18 + 0x18)) {
                  pp_Var17 = pp_Var20 + (long)p_Var14;
                  goto LAB_00102fac;
                }
                p_Var14 = p_Var15;
              } while (p_Var15 != (_Data *)0x0);
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pp_Var17 = pp_Var20 + 1;
            }
LAB_00102fac:
            p_Var21 = p_Var21 + 1;
            *pp_Var17 = p_Var23;
            pp_Var13 = pp_Var13 + 1;
          } while (p_Var22 != p_Var21);
        }
      }
      local_f0 = 0;
      iVar9 = 0;
      lVar11 = 0;
      do {
        local_f8 = (StrRange *)&local_88;
        p_Var22 = pp_Var20[-1];
        if ((long)p_Var22 <= lVar11) goto LAB_001024b0;
        itos((long)local_f8);
        local_98 = 0;
        local_68 = " - ";
        local_60 = 3;
        String::parse_latin1((StrRange *)&local_98);
        p_Var22 = pp_Var20[-1];
        if ((long)p_Var22 <= lVar11) {
LAB_00102ee4:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar11,(long)p_Var22,"p_index","size()"
                     ,"",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        p_Var22 = pp_Var20[lVar11];
        pcVar6 = *(char **)(p_Var22 + 8);
        local_a8 = 0;
        if (pcVar6 == (char *)0x0) {
          if (*(long *)(p_Var22 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(p_Var22 + 0x10));
          }
        }
        else {
          local_60 = strlen(pcVar6);
          local_68 = pcVar6;
          String::parse_latin1((StrRange *)&local_a8);
        }
        local_68 = ": ";
        local_b8 = 0;
        local_60 = 2;
        String::parse_latin1((StrRange *)&local_b8);
        itos((long)&local_c0);
        String::operator+((String *)&local_b0,(String *)&local_c0);
        String::operator+((String *)&local_a0,(String *)&local_b0);
        String::operator+((String *)&local_90,(String *)&local_a0);
        String::operator+((String *)&local_80,(String *)&local_90);
        Variant::Variant((Variant *)local_58,(String *)&local_80);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        pcVar6 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar19 = (long *)(local_68 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar10 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar19 = (long *)(local_80 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar19 = (long *)(local_90 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar19 = (long *)(local_a0 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar19 = (long *)(local_b0 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar19 = (long *)(local_c0 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar19 = (long *)(local_b8 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar19 = (long *)(local_a8 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar19 = (long *)(local_98 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar19 = (long *)(local_88 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        p_Var22 = pp_Var20[-1];
        if ((long)p_Var22 <= lVar11) goto LAB_00102ee4;
        uVar4 = *(uint *)(pp_Var20[lVar11] + 0x18);
        if (uVar4 == 0) {
          iVar9 = iVar9 + 1;
        }
        else {
          local_f0 = local_f0 + (uint)(uVar4 < 5);
        }
        pp_Var20 = local_70;
        lVar11 = lVar11 + 1;
      } while (local_70 != (_Data **)0x0);
      fVar26 = 0.0;
      p_Var22 = (_Data *)0x0;
      fVar25 = (float)iVar9;
    }
  }
  local_f8 = (StrRange *)&local_88;
  local_68 = 
  "\nOut of %d StringNames, %d StringNames were never referenced during this run (0 times) (%.2f%%)."
  ;
  local_88 = 0;
  local_60 = 0x60;
  fVar25 = (fVar25 / fVar26) * __LC46;
  String::parse_latin1(local_f8);
  vformat<long,int,float>((String *)&local_80,(long)local_f8,(int)p_Var22,fVar25);
  Variant::Variant((Variant *)local_58,(String *)&local_80);
  stringify_variants((Variant *)&local_68);
  __print_line((String *)&local_68);
  pcVar6 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar19 = (long *)(local_68 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar11 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar19 = (long *)(local_80 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  lVar11 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar19 = (long *)(local_88 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  if (pp_Var20 == (_Data **)0x0) {
    fVar25 = 0.0;
    p_Var22 = (_Data *)0x0;
  }
  else {
    p_Var22 = pp_Var20[-1];
    fVar25 = (float)(long)p_Var22;
  }
  local_68 = 
  "Out of %d StringNames, %d StringNames were rarely referenced during this run (1-4 times) (%.2f%%)."
  ;
  local_88 = 0;
  local_60 = 0x62;
  fVar25 = ((float)local_f0 / fVar25) * __LC46;
  String::parse_latin1(local_f8);
  vformat<long,int,float>((String *)&local_80,(long)local_f8,(int)p_Var22,fVar25);
  Variant::Variant((Variant *)local_58,(String *)&local_80);
  stringify_variants((Variant *)&local_68);
  __print_line((String *)&local_68);
  pcVar6 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar19 = (long *)(local_68 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar11 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar19 = (long *)(local_80 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  lVar11 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar19 = (long *)(local_88 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  if (local_70 != (_Data **)0x0) {
    LOCK();
    pp_Var20 = local_70 + -2;
    *pp_Var20 = *pp_Var20 + -1;
    UNLOCK();
    if (*pp_Var20 == (_Data *)0x0) {
      Memory::free_static(local_70 + -2,false);
    }
  }
LAB_00101ead:
  plVar19 = &_table;
  iVar9 = 0;
  do {
    piVar5 = (int *)*plVar19;
    while (piVar5 != (int *)0x0) {
      if (*piVar5 != piVar5[1]) {
        OS::get_singleton();
        cVar8 = OS::is_stdout_verbose();
        if (cVar8 != '\0') {
          pcVar6 = *(char **)(piVar5 + 2);
          local_90 = 0;
          if (pcVar6 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(piVar5 + 4) + -0x10);
            if (*(long *)(piVar5 + 4) != 0) {
              do {
                lVar11 = *plVar1;
                if (lVar11 == 0) goto LAB_00101f97;
                LOCK();
                lVar10 = *plVar1;
                bVar24 = lVar11 == lVar10;
                if (bVar24) {
                  *plVar1 = lVar11 + 1;
                  lVar10 = lVar11;
                }
                UNLOCK();
              } while (!bVar24);
              if (lVar10 != -1) {
                local_90 = *(long *)(piVar5 + 4);
              }
            }
          }
          else {
            local_60 = strlen(pcVar6);
            local_68 = pcVar6;
            String::parse_latin1((StrRange *)&local_90);
          }
LAB_00101f97:
          iVar2 = *piVar5;
          iVar3 = piVar5[1];
          local_80 = 0;
          plVar1 = (long *)(local_90 + -0x10);
          if (local_90 != 0) {
            do {
              lVar11 = *plVar1;
              if (lVar11 == 0) goto LAB_00101fde;
              LOCK();
              lVar10 = *plVar1;
              bVar24 = lVar11 == lVar10;
              if (bVar24) {
                *plVar1 = lVar11 + 1;
                lVar10 = lVar11;
              }
              UNLOCK();
            } while (!bVar24);
            if (lVar10 != -1) {
              local_80 = local_90;
            }
          }
LAB_00101fde:
          local_68 = "Orphan StringName: %s (static: %d, total: %d)";
          local_88 = 0;
          local_60 = 0x2d;
          String::parse_latin1((StrRange *)&local_88);
          vformat<String,unsigned_int,unsigned_int>
                    ((String *)&local_78,(StrRange *)&local_88,&local_80,iVar3,iVar2);
          Variant::Variant((Variant *)local_58,(String *)&local_78);
          stringify_variants((Variant *)&local_68);
          __print_line((String *)&local_68);
          pcVar6 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar6 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_90;
          if (local_90 != 0) {
            LOCK();
            plVar1 = (long *)(local_90 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
        }
        iVar9 = iVar9 + 1;
      }
      *plVar19 = *(long *)(*plVar19 + 0x30);
      if (*(long *)(piVar5 + 4) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(piVar5 + 4) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar11 = *(long *)(piVar5 + 4);
          piVar5[4] = 0;
          piVar5[5] = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      Memory::free_static(piVar5,false);
      piVar5 = (int *)*plVar19;
    }
    plVar19 = plVar19 + 1;
    if (plVar19 == (long *)&_LC46) {
      if ((iVar9 != 0) && (cVar8 = is_print_verbose_enabled(), cVar8 != '\0')) {
        local_80 = 0;
        local_60 = 0x2e;
        local_68 = "StringName: %d unclaimed string names at exit.";
        String::parse_latin1((StrRange *)&local_80);
        vformat<int>((String *)&local_78,(int)(StrRange *)&local_80);
        Variant::Variant((Variant *)local_58,(String *)&local_78);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        pcVar6 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar19 = (long *)(local_68 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar11 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar19 = (long *)(local_78 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar19 = (long *)(local_80 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
      }
      configured = 0;
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pthread_mutex_unlock((pthread_mutex_t *)mutex);
      return;
    }
  } while( true );
}



/* CowData<StringName::_Data*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName::_Data*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00103640) */
/* WARNING: Removing unreachable block (ram,0x00103770) */
/* WARNING: Removing unreachable block (ram,0x001038e8) */
/* WARNING: Removing unreachable block (ram,0x0010377c) */
/* WARNING: Removing unreachable block (ram,0x00103786) */
/* WARNING: Removing unreachable block (ram,0x001038ca) */
/* WARNING: Removing unreachable block (ram,0x00103792) */
/* WARNING: Removing unreachable block (ram,0x0010379c) */
/* WARNING: Removing unreachable block (ram,0x001038ac) */
/* WARNING: Removing unreachable block (ram,0x001037a8) */
/* WARNING: Removing unreachable block (ram,0x001037b2) */
/* WARNING: Removing unreachable block (ram,0x0010388e) */
/* WARNING: Removing unreachable block (ram,0x001037be) */
/* WARNING: Removing unreachable block (ram,0x001037c8) */
/* WARNING: Removing unreachable block (ram,0x00103870) */
/* WARNING: Removing unreachable block (ram,0x001037d4) */
/* WARNING: Removing unreachable block (ram,0x001037de) */
/* WARNING: Removing unreachable block (ram,0x00103852) */
/* WARNING: Removing unreachable block (ram,0x001037e6) */
/* WARNING: Removing unreachable block (ram,0x001037f0) */
/* WARNING: Removing unreachable block (ram,0x00103837) */
/* WARNING: Removing unreachable block (ram,0x001037f8) */
/* WARNING: Removing unreachable block (ram,0x0010380d) */
/* WARNING: Removing unreachable block (ram,0x00103819) */
/* String vformat<long, int, float>(String const&, long const, int const, float const) */

String * vformat<long,int,float>(String *param_1,long param_2,int param_3,float param_4)

{
  Variant *pVVar1;
  int in_ECX;
  undefined4 in_register_00000014;
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
  Variant::Variant(local_a8,CONCAT44(in_register_00000014,param_3));
  iVar2 = 0;
  Variant::Variant(local_90,in_ECX);
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
  String::sprintf((Array *)local_f0,(bool *)param_2);
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



/* WARNING: Removing unreachable block (ram,0x00103a60) */
/* WARNING: Removing unreachable block (ram,0x00103b90) */
/* WARNING: Removing unreachable block (ram,0x00103d08) */
/* WARNING: Removing unreachable block (ram,0x00103b9c) */
/* WARNING: Removing unreachable block (ram,0x00103ba6) */
/* WARNING: Removing unreachable block (ram,0x00103cea) */
/* WARNING: Removing unreachable block (ram,0x00103bb2) */
/* WARNING: Removing unreachable block (ram,0x00103bbc) */
/* WARNING: Removing unreachable block (ram,0x00103ccc) */
/* WARNING: Removing unreachable block (ram,0x00103bc8) */
/* WARNING: Removing unreachable block (ram,0x00103bd2) */
/* WARNING: Removing unreachable block (ram,0x00103cae) */
/* WARNING: Removing unreachable block (ram,0x00103bde) */
/* WARNING: Removing unreachable block (ram,0x00103be8) */
/* WARNING: Removing unreachable block (ram,0x00103c90) */
/* WARNING: Removing unreachable block (ram,0x00103bf4) */
/* WARNING: Removing unreachable block (ram,0x00103bfe) */
/* WARNING: Removing unreachable block (ram,0x00103c72) */
/* WARNING: Removing unreachable block (ram,0x00103c06) */
/* WARNING: Removing unreachable block (ram,0x00103c10) */
/* WARNING: Removing unreachable block (ram,0x00103c57) */
/* WARNING: Removing unreachable block (ram,0x00103c18) */
/* WARNING: Removing unreachable block (ram,0x00103c2d) */
/* WARNING: Removing unreachable block (ram,0x00103c39) */
/* String vformat<String, unsigned int, unsigned int>(String const&, String const, unsigned int
   const, unsigned int const) */

undefined8 *
vformat<String,unsigned_int,unsigned_int>
          (undefined8 *param_1,bool *param_2,String *param_3,uint param_4,uint param_5)

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



/* WARNING: Removing unreachable block (ram,0x00103e48) */
/* WARNING: Removing unreachable block (ram,0x00103f78) */
/* WARNING: Removing unreachable block (ram,0x00104140) */
/* WARNING: Removing unreachable block (ram,0x00103f84) */
/* WARNING: Removing unreachable block (ram,0x00103f8e) */
/* WARNING: Removing unreachable block (ram,0x00104120) */
/* WARNING: Removing unreachable block (ram,0x00103f9a) */
/* WARNING: Removing unreachable block (ram,0x00103fa4) */
/* WARNING: Removing unreachable block (ram,0x00104100) */
/* WARNING: Removing unreachable block (ram,0x00103fb0) */
/* WARNING: Removing unreachable block (ram,0x00103fba) */
/* WARNING: Removing unreachable block (ram,0x001040e0) */
/* WARNING: Removing unreachable block (ram,0x00103fc6) */
/* WARNING: Removing unreachable block (ram,0x00103fd0) */
/* WARNING: Removing unreachable block (ram,0x001040c0) */
/* WARNING: Removing unreachable block (ram,0x00103fdc) */
/* WARNING: Removing unreachable block (ram,0x00103fe6) */
/* WARNING: Removing unreachable block (ram,0x001040a0) */
/* WARNING: Removing unreachable block (ram,0x00103ff2) */
/* WARNING: Removing unreachable block (ram,0x00103ffc) */
/* WARNING: Removing unreachable block (ram,0x00104080) */
/* WARNING: Removing unreachable block (ram,0x00104004) */
/* WARNING: Removing unreachable block (ram,0x0010401a) */
/* WARNING: Removing unreachable block (ram,0x00104026) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

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



/* CowData<StringName::_Data*>::_realloc(long) */

undefined8 __thiscall
CowData<StringName::_Data*>::_realloc(CowData<StringName::_Data*> *this,long param_1)

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
/* Error CowData<StringName::_Data*>::resize<false>(long) */

undefined8 __thiscall
CowData<StringName::_Data*>::resize<false>(CowData<StringName::_Data*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
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
LAB_001044a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_001044a0;
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
        goto LAB_001043b1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001043b1:
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


