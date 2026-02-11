
/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* GDScriptUtilityFunctions::get_function(StringName const&) */

undefined8 GDScriptUtilityFunctions::get_function(StringName *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(long *)param_1 == 0) {
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar5 = (ulong)uVar1 % (ulong)DAT_00107498;
  uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
  if (uVar2 != 0) {
    uVar4 = 0;
    while ((uVar1 != uVar2 || (*(long *)(DAT_00107488 + uVar5 * 8) != *(long *)param_1))) {
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)DAT_00107498;
      uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
      if ((uVar2 == 0) ||
         (((DAT_00107498 + (int)uVar5) - uVar2 % DAT_00107498) % DAT_00107498 < uVar4))
      goto LAB_001002d0;
    }
    puVar3 = (undefined8 *)(uVar5 * 0x80 + utility_function_table);
    if (puVar3 != (undefined8 *)0x0) {
      return *puVar3;
    }
  }
LAB_001002d0:
  _err_print_error("get_function","modules/gdscript/gdscript_utility_functions.cpp",0x25a,
                   "Parameter \"info\" is null.",0,0);
  return 0;
}



/* GDScriptUtilityFunctions::has_function_return_value(StringName const&) */

uint GDScriptUtilityFunctions::has_function_return_value(StringName *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(long *)param_1 == 0) {
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar5 = (ulong)uVar1 % (ulong)DAT_00107498;
  uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
  if (uVar2 != 0) {
    uVar4 = 0;
    while ((uVar1 != uVar2 || (*(long *)(DAT_00107488 + uVar5 * 8) != *(long *)param_1))) {
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)DAT_00107498;
      uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
      if ((uVar2 == 0) ||
         (((DAT_00107498 + (int)uVar5) - uVar2 % DAT_00107498) % DAT_00107498 < uVar4))
      goto LAB_001003e0;
    }
    lVar3 = uVar5 * 0x80 + utility_function_table;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x10) != 0) {
        return 1;
      }
      return *(uint *)(lVar3 + 0x38) >> 0x11 & 1;
    }
  }
LAB_001003e0:
  _err_print_error("has_function_return_value","modules/gdscript/gdscript_utility_functions.cpp",
                   0x260,"Parameter \"info\" is null.",0,0);
  return 0;
}



/* GDScriptUtilityFunctions::get_function_return_type(StringName const&) */

undefined4 GDScriptUtilityFunctions::get_function_return_type(StringName *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(long *)param_1 == 0) {
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar5 = (ulong)uVar1 % (ulong)DAT_00107498;
  uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
  if (uVar2 != 0) {
    uVar4 = 0;
    while ((uVar1 != uVar2 || (*(long *)(DAT_00107488 + uVar5 * 8) != *(long *)param_1))) {
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)DAT_00107498;
      uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
      if ((uVar2 == 0) ||
         (((DAT_00107498 + (int)uVar5) - uVar2 % DAT_00107498) % DAT_00107498 < uVar4))
      goto LAB_001004d0;
    }
    lVar3 = uVar5 * 0x80 + utility_function_table;
    if (lVar3 != 0) {
      return *(undefined4 *)(lVar3 + 0x10);
    }
  }
LAB_001004d0:
  _err_print_error("get_function_return_type","modules/gdscript/gdscript_utility_functions.cpp",
                   0x266,"Parameter \"info\" is null.",0,0);
  return 0;
}



/* GDScriptUtilityFunctions::get_function_return_class(StringName const&) */

GDScriptUtilityFunctions * __thiscall
GDScriptUtilityFunctions::get_function_return_class
          (GDScriptUtilityFunctions *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(long *)param_1 == 0) {
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar5 = (ulong)uVar1 % (ulong)DAT_00107498;
  uVar3 = *(uint *)(DAT_00107490 + uVar5 * 4);
  if (uVar3 != 0) {
    uVar4 = 0;
    while ((uVar1 != uVar3 || (*(long *)(DAT_00107488 + uVar5 * 8) != *(long *)param_1))) {
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)DAT_00107498;
      uVar3 = *(uint *)(DAT_00107490 + uVar5 * 4);
      if ((uVar3 == 0) ||
         (((DAT_00107498 + (int)uVar5) - uVar3 % DAT_00107498) % DAT_00107498 < uVar4))
      goto LAB_001005e8;
    }
    lVar2 = uVar5 * 0x80 + utility_function_table;
    if (lVar2 != 0) {
      StringName::StringName((StringName *)this,(StringName *)(lVar2 + 0x20));
      return this;
    }
  }
LAB_001005e8:
  _err_print_error("get_function_return_class","modules/gdscript/gdscript_utility_functions.cpp",
                   0x26c,"Parameter \"info\" is null.",0,0);
  *(undefined8 *)this = 0;
  return this;
}



/* GDScriptUtilityFunctions::get_function_argument_type(StringName const&, int) */

undefined4 GDScriptUtilityFunctions::get_function_argument_type(StringName *param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if (*(long *)param_1 == 0) {
    uVar3 = StringName::get_empty_hash();
  }
  else {
    uVar3 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  uVar9 = (ulong)uVar3 % (ulong)DAT_00107498;
  uVar6 = *(uint *)(DAT_00107490 + uVar9 * 4);
  if (uVar6 != 0) {
    uVar8 = 0;
    while ((uVar6 != uVar3 || (*(long *)(DAT_00107488 + uVar9 * 8) != *(long *)param_1))) {
      uVar8 = uVar8 + 1;
      uVar9 = (ulong)((int)uVar9 + 1) % (ulong)DAT_00107498;
      uVar6 = *(uint *)(DAT_00107490 + uVar9 * 4);
      if ((uVar6 == 0) ||
         (((DAT_00107498 + (int)uVar9) - uVar6 % DAT_00107498) % DAT_00107498 < uVar8))
      goto LAB_001007a0;
    }
    lVar7 = uVar9 * 0x80 + utility_function_table;
    if (lVar7 != 0) {
      puVar1 = *(undefined8 **)(lVar7 + 0x48);
      if (puVar1 == (undefined8 *)0x0) {
        lVar7 = 0;
        if (-1 < param_2) goto LAB_001007cc;
      }
      else {
        if (*(int *)(puVar1 + 2) <= param_2) {
LAB_001007cc:
          _err_print_error("get_function_argument_type",
                           "modules/gdscript/gdscript_utility_functions.cpp",0x273,
                           "Condition \"p_arg >= info->info.arguments.size()\" is true. Returning: Variant::NIL"
                           ,0,0);
          return 0;
        }
        if (-1 < param_2) {
          puVar4 = (undefined4 *)*puVar1;
          iVar5 = 0;
          if (param_2 == 0) goto LAB_0010072f;
          if ((param_2 & 1U) == 0) goto LAB_00100720;
          puVar4 = *(undefined4 **)(puVar4 + 0xc);
          iVar5 = 1;
          if (param_2 != 1) {
LAB_00100720:
            do {
              iVar5 = iVar5 + 2;
              puVar4 = *(undefined4 **)(*(long *)(puVar4 + 0xc) + 0x30);
            } while (param_2 != iVar5);
          }
LAB_0010072f:
          return *puVar4;
        }
        lVar7 = (long)*(int *)(puVar1 + 2);
      }
      _err_print_index_error
                ("get","./core/templates/list.h",0x21c,(long)param_2,lVar7,"p_index","size()","",
                 false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
LAB_001007a0:
  _err_print_error("get_function_argument_type","modules/gdscript/gdscript_utility_functions.cpp",
                   0x272,"Parameter \"info\" is null.",0,0);
  return 0;
}



/* GDScriptUtilityFunctions::get_function_argument_count(StringName const&) */

undefined4 GDScriptUtilityFunctions::get_function_argument_count(StringName *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(long *)param_1 == 0) {
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar5 = (ulong)uVar1 % (ulong)DAT_00107498;
  uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
  if (uVar2 != 0) {
    uVar4 = 0;
    while ((uVar2 != uVar1 || (*(long *)(DAT_00107488 + uVar5 * 8) != *(long *)param_1))) {
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)DAT_00107498;
      uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
      if ((uVar2 == 0) ||
         (((DAT_00107498 + (int)uVar5) - uVar2 % DAT_00107498) % DAT_00107498 < uVar4))
      goto LAB_001008d0;
    }
    lVar3 = uVar5 * 0x80 + utility_function_table;
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x48);
      if (lVar3 == 0) {
        return 0;
      }
      return *(undefined4 *)(lVar3 + 0x10);
    }
  }
LAB_001008d0:
  _err_print_error("get_function_argument_count","modules/gdscript/gdscript_utility_functions.cpp",
                   0x279,"Parameter \"info\" is null.",0,0);
  return 0;
}



/* GDScriptUtilityFunctions::is_function_vararg(StringName const&) */

uint GDScriptUtilityFunctions::is_function_vararg(StringName *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(long *)param_1 == 0) {
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar5 = (ulong)uVar1 % (ulong)DAT_00107498;
  uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
  if (uVar2 != 0) {
    uVar4 = 0;
    while ((uVar1 != uVar2 || (*(long *)(DAT_00107488 + uVar5 * 8) != *(long *)param_1))) {
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)DAT_00107498;
      uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
      if ((uVar2 == 0) ||
         (((DAT_00107498 + (int)uVar5) - uVar2 % DAT_00107498) % DAT_00107498 < uVar4))
      goto LAB_001009c8;
    }
    lVar3 = uVar5 * 0x80 + utility_function_table;
    if (lVar3 != 0) {
      return *(uint *)(lVar3 + 0x40) >> 4 & 1;
    }
  }
LAB_001009c8:
  _err_print_error("is_function_vararg","modules/gdscript/gdscript_utility_functions.cpp",0x27f,
                   "Parameter \"info\" is null.",0,0);
  return 0;
}



/* GDScriptUtilityFunctions::is_function_constant(StringName const&) */

undefined1 GDScriptUtilityFunctions::is_function_constant(StringName *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(long *)param_1 == 0) {
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar5 = (ulong)uVar1 % (ulong)DAT_00107498;
  uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
  if (uVar2 != 0) {
    uVar4 = 0;
    while ((uVar1 != uVar2 || (*(long *)(DAT_00107488 + uVar5 * 8) != *(long *)param_1))) {
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)DAT_00107498;
      uVar2 = *(uint *)(DAT_00107490 + uVar5 * 4);
      if ((uVar2 == 0) ||
         (((DAT_00107498 + (int)uVar5) - uVar2 % DAT_00107498) % DAT_00107498 < uVar4))
      goto LAB_00100ac0;
    }
    lVar3 = uVar5 * 0x80 + utility_function_table;
    if (lVar3 != 0) {
      return *(undefined1 *)(lVar3 + 0x78);
    }
  }
LAB_00100ac0:
  _err_print_error("is_function_constant","modules/gdscript/gdscript_utility_functions.cpp",0x285,
                   "Parameter \"info\" is null.",0,0);
  return 0;
}



/* GDScriptUtilityFunctions::function_exists(StringName const&) */

undefined8 GDScriptUtilityFunctions::function_exists(StringName *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(long *)param_1 == 0) {
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar4 = (ulong)uVar1 % (ulong)DAT_00107498;
  uVar2 = *(uint *)(DAT_00107490 + uVar4 * 4);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if ((uVar1 == uVar2) && (*(long *)(DAT_00107488 + uVar4 * 8) == *(long *)param_1)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar4 = (ulong)((int)uVar4 + 1) % (ulong)DAT_00107498;
      uVar2 = *(uint *)(DAT_00107490 + uVar4 * 4);
    } while ((uVar2 != 0) &&
            (uVar3 <= ((DAT_00107498 + (int)uVar4) - uVar2 % DAT_00107498) % DAT_00107498));
  }
  return 0;
}



/* GDScriptUtilityFunctions::get_function_list(List<StringName, DefaultAllocator>*) */

void GDScriptUtilityFunctions::get_function_list(List *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  StringName *this;
  StringName *pSVar4;
  
  if (utility_function_name_table == (long *)0x0) {
    return;
  }
  pSVar4 = (StringName *)*utility_function_name_table;
  if (pSVar4 != (StringName *)0x0) {
    if (*(long *)param_1 == 0) {
      pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar3;
      *(undefined4 *)pauVar3[1] = 0;
      *pauVar3 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        this = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(this,pSVar4);
        plVar1 = *(long **)param_1;
        lVar2 = plVar1[1];
        *(undefined8 *)(this + 8) = 0;
        *(long **)(this + 0x18) = plVar1;
        *(long *)(this + 0x10) = lVar2;
        if (lVar2 != 0) {
          *(StringName **)(lVar2 + 8) = this;
        }
        plVar1[1] = (long)this;
        if (*plVar1 == 0) break;
        pSVar4 = *(StringName **)(pSVar4 + 8);
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
        if (pSVar4 == (StringName *)0x0) {
          return;
        }
      }
      pSVar4 = *(StringName **)(pSVar4 + 8);
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      *plVar1 = (long)this;
    } while (pSVar4 != (StringName *)0x0);
  }
  return;
}



/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */

void __thiscall CowData<Variant>::_ref(CowData<Variant> *this,CowData *param_1)

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



/* GDScriptUtilityFunctions::get_function_info(StringName const&) */

GDScriptUtilityFunctions * __thiscall
GDScriptUtilityFunctions::get_function_info(GDScriptUtilityFunctions *this,StringName *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  if (*(long *)param_1 == 0) {
    uVar5 = StringName::get_empty_hash();
  }
  else {
    uVar5 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  uVar11 = (ulong)uVar5 % (ulong)DAT_00107498;
  uVar9 = *(uint *)(DAT_00107490 + uVar11 * 4);
  if (uVar9 != 0) {
    uVar10 = 0;
    while ((uVar5 != uVar9 || (*(long *)(DAT_00107488 + uVar11 * 8) != *(long *)param_1))) {
      uVar10 = uVar10 + 1;
      uVar11 = (ulong)((int)uVar11 + 1) % (ulong)DAT_00107498;
      uVar9 = *(uint *)(DAT_00107490 + uVar11 * 4);
      if ((uVar9 == 0) ||
         (((DAT_00107498 + (int)uVar11) - uVar9 % DAT_00107498) % DAT_00107498 < uVar10))
      goto LAB_00100fd0;
    }
    lVar12 = uVar11 * 0x80 + utility_function_table;
    if (lVar12 != 0) {
      *(undefined8 *)this = 0;
      if (*(long *)(lVar12 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)(lVar12 + 8));
      }
      uVar1 = *(undefined4 *)(lVar12 + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      lVar4 = *(long *)(lVar12 + 0x18);
      *(undefined4 *)(this + 8) = uVar1;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(lVar12 + 0x18));
      }
      StringName::StringName((StringName *)(this + 0x18),(StringName *)(lVar12 + 0x20));
      uVar1 = *(undefined4 *)(lVar12 + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      lVar4 = *(long *)(lVar12 + 0x30);
      *(undefined4 *)(this + 0x20) = uVar1;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(lVar12 + 0x30));
      }
      *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar12 + 0x38);
      uVar2 = *(undefined8 *)(lVar12 + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = uVar2;
      if ((*(undefined8 **)(lVar12 + 0x48) != (undefined8 *)0x0) &&
         (puVar8 = (undefined4 *)**(undefined8 **)(lVar12 + 0x48), puVar8 != (undefined4 *)0x0)) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0x40) = pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
        do {
          puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
          *(undefined8 *)(puVar7 + 8) = 0;
          *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
          lVar4 = *(long *)(puVar8 + 2);
          *puVar7 = 0;
          puVar7[6] = 0;
          puVar7[10] = 6;
          *(undefined8 *)(puVar7 + 0x10) = 0;
          *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
          *puVar7 = *puVar8;
          if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)(puVar8 + 2));
          }
          StringName::operator=((StringName *)(puVar7 + 4),(StringName *)(puVar8 + 4));
          puVar7[6] = puVar8[6];
          if (*(long *)(puVar7 + 8) != *(long *)(puVar8 + 8)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)(puVar8 + 8));
          }
          puVar7[10] = puVar8[10];
          plVar3 = *(long **)(this + 0x40);
          lVar4 = plVar3[1];
          *(undefined8 *)(puVar7 + 0xc) = 0;
          *(long **)(puVar7 + 0x10) = plVar3;
          *(long *)(puVar7 + 0xe) = lVar4;
          if (lVar4 != 0) {
            *(undefined4 **)(lVar4 + 0x30) = puVar7;
          }
          plVar3[1] = (long)puVar7;
          if (*plVar3 == 0) {
            puVar8 = *(undefined4 **)(puVar8 + 0xc);
            *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
            *plVar3 = (long)puVar7;
          }
          else {
            puVar8 = *(undefined4 **)(puVar8 + 0xc);
            *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
          }
        } while (puVar8 != (undefined4 *)0x0);
      }
      *(undefined8 *)(this + 0x50) = 0;
      if (*(long *)(lVar12 + 0x58) != 0) {
        CowData<Variant>::_ref((CowData<Variant> *)(this + 0x50),(CowData *)(lVar12 + 0x58));
      }
      uVar1 = *(undefined4 *)(lVar12 + 0x60);
      *(undefined8 *)(this + 0x68) = 0;
      lVar4 = *(long *)(lVar12 + 0x70);
      *(undefined4 *)(this + 0x58) = uVar1;
      if (lVar4 == 0) {
        return this;
      }
      CowData<int>::_ref((CowData<int> *)(this + 0x68),(CowData *)(lVar12 + 0x70));
      return this;
    }
  }
LAB_00100fd0:
  _err_print_error("get_function_info","modules/gdscript/gdscript_utility_functions.cpp",0x295,
                   "Parameter \"info\" is null.",0,0);
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 6;
  *(undefined8 *)(this + 0x38) = 1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return this;
}



/* GDScriptUtilityFunctions::unregister_functions() */

void GDScriptUtilityFunctions::unregister_functions(void)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (utility_function_name_table != (long *)0x0) {
    do {
      plVar4 = utility_function_name_table;
      plVar2 = (long *)*utility_function_name_table;
      if (plVar2 == (long *)0x0) goto LAB_00101101;
      if (utility_function_name_table == (long *)plVar2[3]) {
        lVar5 = plVar2[1];
        lVar3 = plVar2[2];
        *utility_function_name_table = lVar5;
        if (plVar2 == (long *)plVar4[1]) {
          plVar4[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar5;
          lVar5 = plVar2[1];
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar3;
        }
        if ((StringName::configured != '\0') && (*plVar2 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
    } while ((int)utility_function_name_table[2] != 0);
    Memory::free_static(utility_function_name_table,false);
    utility_function_name_table = (long *)0x0;
  }
LAB_00101101:
  lVar5 = 0;
  if (DAT_00107498 != 0) {
    do {
      piVar1 = (int *)(DAT_00107490 + lVar5 * 4);
      if (*piVar1 != 0) {
        *piVar1 = 0;
        MethodInfo::~MethodInfo((MethodInfo *)(lVar5 * 0x80 + utility_function_table + 8));
        if ((StringName::configured != '\0') && (*(long *)(DAT_00107488 + lVar5 * 8) != 0)) {
          StringName::unref();
        }
      }
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < DAT_00107498);
  }
  DAT_0010749c = 0;
  return;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Variant>::resize<false>(CowData<Variant> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
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
    lVar4 = 0;
    lVar9 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar9 = lVar4 * 0x18;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 != 0) {
    uVar10 = param_1 * 0x18 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    lVar11 = uVar10 + 1;
    if (lVar11 != 0) {
      if (param_1 <= lVar4) {
        puVar5 = *(undefined8 **)this;
        uVar10 = param_1;
        while( true ) {
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((ulong)puVar5[-1] <= uVar10) break;
          if (Variant::needs_deinit[*(int *)(puVar5 + uVar10 * 3)] != '\0') {
            Variant::_clear_internal();
            puVar5 = *(undefined8 **)this;
          }
          uVar10 = uVar10 + 1;
        }
        if (lVar11 != lVar9) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          puVar5 = *(undefined8 **)this;
          if (puVar5 == (undefined8 *)0x0) {
            FUN_0010d03c();
            return;
          }
        }
        goto LAB_00101d1f;
      }
      if (lVar11 == lVar9) {
LAB_00101dcb:
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar4 = puVar5[-1];
        if (param_1 <= lVar4) goto LAB_00101d1f;
      }
      else {
        if (lVar4 != 0) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00101dcb;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00101e52;
        }
        puVar5 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar5;
        lVar4 = 0;
      }
      lVar9 = lVar4 + 1;
      *(undefined4 *)(puVar5 + lVar4 * 3) = 0;
      *(undefined1 (*) [16])(puVar5 + lVar4 * 3 + 1) = (undefined1  [16])0x0;
      if (lVar9 < param_1) {
        lVar4 = lVar9 * 0x18;
        do {
          lVar9 = lVar9 + 1;
          puVar7 = (undefined4 *)(*(long *)this + lVar4);
          lVar4 = lVar4 + 0x18;
          *puVar7 = 0;
          *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
        } while (param_1 != lVar9);
      }
      puVar5 = *(undefined8 **)this;
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
LAB_00101d1f:
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101e52:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* GDScriptUtilityFunctions::register_functions() */

void GDScriptUtilityFunctions::register_functions(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  Variant *pVVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  StringName *local_358;
  StringName *local_350;
  char *local_338;
  long local_330;
  long local_328;
  long local_320;
  long local_318;
  long local_310;
  long local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  long local_2f0;
  long local_2e8;
  long local_2e0;
  long local_2d8;
  char *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined *local_2b8;
  int local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  long local_290;
  undefined *local_288;
  int local_280;
  long local_278;
  undefined4 local_270;
  long local_268;
  long local_260;
  StringName local_258 [8];
  undefined4 local_250;
  long local_248;
  undefined4 local_240;
  undefined8 local_238;
  long local_230;
  undefined *local_228;
  int local_220;
  long local_218;
  undefined4 local_210;
  char *local_208;
  undefined8 local_200;
  StringName local_1f8 [8];
  int local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  char *local_1d8;
  long local_1d0;
  StringName local_1c8 [8];
  undefined4 local_1c0;
  long local_1b8;
  undefined4 local_1b0;
  long local_1a8;
  long local_1a0;
  StringName local_198 [8];
  int local_190;
  long local_188;
  undefined4 local_180;
  long local_178;
  undefined8 local_170;
  StringName local_168 [8];
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  long local_148;
  long local_140;
  StringName local_138 [8];
  int local_130;
  long local_128;
  undefined4 local_120;
  char *local_118;
  Variant *local_110;
  char *local_108;
  int local_100;
  long local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8 [2];
  Variant *local_98;
  undefined8 local_90;
  undefined8 local_80;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2d0 = (char *)0x0;
  local_e8 = "convert";
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_2d0);
  cVar3 = String::begins_with((char *)&local_2d0);
  iVar9 = (int)(CowData<char32_t> *)&local_e8;
  iVar6 = (int)(StrRange *)&local_2d0;
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar6);
    if (local_2d0 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d0);
      local_2d0 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  StringName::StringName((StringName *)&local_1d8,"Variant.Type",false);
  local_208 = (char *)0x0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_238 = 0;
  local_e8 = "type";
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,2,(StrRange *)&local_238,0,(StrRange *)&local_208,0x10000,
             (StringName *)&local_1d8);
  local_268 = 0;
  local_298 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_298);
  local_2c8 = 0;
  local_e8 = "what";
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_2c8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,0,(StrRange *)&local_2c8,0,(StrRange *)&local_298,0x20000,
             (PropertyInfo *)&local_268);
  local_1a8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_1a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_1a8);
  }
  local_110 = (Variant *)0x0;
  local_118 = (char *)CONCAT44(local_118._4_4_,(undefined4)local_148);
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_140);
  }
  StringName::StringName((StringName *)&local_108,local_138);
  local_f8 = 0;
  local_100 = local_130;
  if (local_128 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_128);
  }
  local_f0 = local_120;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_178);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  if ((StringName::configured != '\0') && (local_268 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_e8 != local_2d0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_2d0);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)((ulong)local_118 & 0xffffffff00000000);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_0010242b:
    local_f0 = 0x20000;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 0x20000;
    if (local_100 != 0x11) goto LAB_0010242b;
    StringName::StringName((StringName *)&local_148,(String *)&local_f8,false);
    if (local_108 == (char *)local_148) {
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = (char *)local_148;
    }
  }
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_2d0,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::convert,true);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d0);
  local_208 = (char *)0x0;
  local_e8 = "type_exists";
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_208);
  cVar3 = String::begins_with((char *)&local_208);
  iVar7 = (int)(StrRange *)&local_208;
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar7);
    if (local_208 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
      local_208 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_e8 = "type";
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x15);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (undefined *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_001027b3:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_001027b3;
    StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
    if (local_108 == local_e8) {
      if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_e8;
    }
  }
  local_148 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_148);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  if (local_e8 != local_208) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_208);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,1);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_00102a2b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_00102a2b;
    StringName::StringName((StringName *)&local_148,(String *)&local_f8,false);
    if (local_108 == (char *)local_148) {
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = (char *)local_148;
    }
  }
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_208,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::type_exists,true);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_208 = (char *)0x0;
  local_e8 = "_char";
  local_e0 = 5;
  String::parse_latin1((StrRange *)&local_208);
  cVar3 = String::begins_with((char *)&local_208);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar7);
    if (local_208 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
      local_208 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_e8 = "char";
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_1d8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,2,(StringName *)&local_1d8,0,(StrRange *)&local_1a8,6,
             (PropertyInfo *)&local_178);
  local_148 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_148);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  if (local_e8 != local_208) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_208);
  }
  local_148 = 0;
  local_178 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_178);
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,4,(StrRange *)&local_1a8,0,(PropertyInfo *)&local_178,6,
             (PropertyInfo *)&local_148);
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_148 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_208,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::_char,true);
  if ((StringName::configured != '\0') && (local_118 != (undefined *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_208 = (char *)0x0;
  local_e8 = "range";
  local_e0 = 5;
  String::parse_latin1((StrRange *)&local_208);
  cVar3 = String::begins_with((char *)&local_208);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar7);
    if (local_208 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
      local_208 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_208 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_208);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x1c);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_001032d3:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_001032d3;
    StringName::StringName((StringName *)&local_148,(String *)&local_f8,false);
    if (local_108 == (char *)local_148) {
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = (char *)local_148;
    }
  }
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  local_b0 = local_b0 | 0x10;
  StringName::StringName((StringName *)&local_118,(String *)&local_208,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::range,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_208 = (undefined *)0x0;
  local_e8 = "load";
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_208);
  cVar3 = String::begins_with((char *)&local_208);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar7);
    if (local_208 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
      local_208 = local_e8;
      local_e8 = (undefined *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_e8 = "path";
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,4);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (undefined *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_0010365b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_0010365b;
    StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
    if (local_108 == local_e8) {
      if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_e8;
    }
  }
  local_148 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_e8 = (undefined *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_148);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  if (local_e8 != local_208) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_208);
  }
  local_178 = 0;
  local_118 = "Resource";
  local_1a8 = 0;
  local_110 = (Variant *)0x8;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x18);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0x11;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_00106c63:
    local_f0 = 6;
    StringName::StringName((StringName *)&local_148,(String *)&local_f8,false);
    if (local_108 == (char *)local_148) {
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = (char *)local_148;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 == 0x11) goto LAB_00106c63;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_208,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::load,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_208 = (char *)0x0;
  local_e8 = "inst_to_dict";
  local_e0 = 0xc;
  String::parse_latin1((StrRange *)&local_208);
  cVar3 = String::begins_with((char *)&local_208);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar7);
    if (local_208 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
      local_208 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_e8 = "instance";
  local_e0 = 8;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x18);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_00103c0b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_00103c0b;
    StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
    if (local_108 == local_e8) {
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_e8;
    }
  }
  local_148 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_148);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  if (local_e8 != local_208) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_208);
  }
  local_148 = 0;
  local_178 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_178);
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,0x1b,(StrRange *)&local_1a8,0,(PropertyInfo *)&local_178,6,
             (PropertyInfo *)&local_148);
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_148 != 0)) {
    StringName::unref();
  }
  local_110 = (Variant *)0x0;
  if (local_98 != (Variant *)0x0) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_98 = (Variant *)0x0;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_208,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::inst_to_dict,false);
  if ((StringName::configured != '\0') && (local_118 != (undefined *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_208 = (char *)0x0;
  local_e8 = "dict_to_inst";
  local_e0 = 0xc;
  String::parse_latin1((StrRange *)&local_208);
  cVar3 = String::begins_with((char *)&local_208);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar7);
    if (local_208 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
      local_208 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_e8 = "dictionary";
  local_e0 = 10;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x1b);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_0010413b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_0010413b;
    StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
    if (local_108 == local_e8) {
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_e8;
    }
  }
  local_148 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_148);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  if (local_e8 != local_208) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_208);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x18);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_001043b3:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_001043b3;
    StringName::StringName((StringName *)&local_148,(String *)&local_f8,false);
    if (local_108 == (char *)local_148) {
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = (char *)local_148;
    }
  }
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_208,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::dict_to_inst,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_338 = (char *)0x0;
  local_e8 = "Color8";
  local_e0 = 6;
  String::parse_latin1((StrRange *)&local_338);
  cVar3 = String::begins_with((char *)&local_338);
  if (cVar3 != '\0') {
    String::substr(iVar9,(int)(StrRange *)&local_338);
    if (local_338 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_338);
      local_338 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_2d8 = 0;
  local_2e0 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_2e0);
  local_2e8 = 0;
  local_e8 = "a8";
  local_e0 = 2;
  String::parse_latin1((StrRange *)&local_2e8);
  local_238 = CONCAT44(local_238._4_4_,2);
  local_230 = 0;
  if (local_2e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_230,(CowData *)&local_2e8);
  }
  local_228 = (undefined *)0x0;
  local_220 = 0;
  local_218 = 0;
  if (local_2e0 == 0) {
LAB_0010478b:
    local_210 = 6;
    StringName::operator=((StringName *)&local_228,(StringName *)&local_2d8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_218,(CowData *)&local_2e0);
    local_210 = 6;
    if (local_220 != 0x11) goto LAB_0010478b;
    StringName::StringName((StringName *)&local_e8,(String *)&local_218,false);
    if (local_228 == local_e8) {
      if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_228 = local_e8;
    }
  }
  local_350 = (StringName *)&local_228;
  local_2f0 = 0;
  local_2f8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_2f8);
  local_300 = 0;
  local_e8 = "b8";
  local_e0 = 2;
  String::parse_latin1((StrRange *)&local_300);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_268,2,(StrRange *)&local_300,0,(StrRange *)&local_2f8,6,
             &local_2f0);
  local_308 = 0;
  local_310 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_310);
  local_318 = 0;
  local_e8 = "g8";
  local_e0 = 2;
  String::parse_latin1((StrRange *)&local_318);
  local_298 = CONCAT44(local_298._4_4_,2);
  local_290 = 0;
  if (local_318 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_290,(CowData *)&local_318);
  }
  local_288 = (undefined *)0x0;
  local_280 = 0;
  local_278 = 0;
  if (local_310 == 0) {
LAB_001049f3:
    local_270 = 6;
    StringName::operator=((StringName *)&local_288,(StringName *)&local_308);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_278,(CowData *)&local_310);
    local_270 = 6;
    if (local_280 != 0x11) goto LAB_001049f3;
    StringName::StringName((StringName *)&local_e8,(String *)&local_278,false);
    if (local_288 == local_e8) {
      if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_288 = local_e8;
    }
  }
  local_358 = (StringName *)&local_288;
  local_320 = 0;
  local_328 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_328);
  local_330 = 0;
  local_e8 = "r8";
  local_e0 = 2;
  String::parse_latin1((StrRange *)&local_330);
  local_2c8 = CONCAT44(local_2c8._4_4_,2);
  local_2c0 = 0;
  if (local_330 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_2c0,(CowData *)&local_330);
  }
  local_2b8 = (undefined *)0x0;
  local_2b0 = 0;
  local_2a8 = 0;
  if (local_328 == 0) {
LAB_00104b8b:
    local_2a0 = 6;
    StringName::operator=((StringName *)&local_2b8,(StringName *)&local_320);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_2a8,(CowData *)&local_328);
    local_2a0 = 6;
    if (local_2b0 != 0x11) goto LAB_00104b8b;
    StringName::StringName((StringName *)&local_e8,(String *)&local_2a8,false);
    if (local_2b8 == local_e8) {
      if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_2b8 = local_e8;
    }
  }
  local_2d0 = (char *)0x0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_2d0);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_2d0 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_2d0);
  }
  local_1a0 = 0;
  local_1a8 = CONCAT44(local_1a8._4_4_,(undefined4)local_238);
  if (local_230 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)&local_230);
  }
  StringName::StringName(local_198,local_350);
  local_188 = 0;
  local_190 = local_220;
  if (local_218 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_218);
  }
  local_1d0 = 0;
  local_180 = local_210;
  local_1d8 = (char *)CONCAT44(local_1d8._4_4_,(undefined4)local_268);
  if (local_260 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d0,(CowData *)&local_260);
  }
  StringName::StringName(local_1c8,local_258);
  local_1b8 = 0;
  local_1c0 = local_250;
  if (local_248 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)&local_248);
  }
  local_200 = 0;
  local_1b0 = local_240;
  local_208 = (char *)CONCAT44(local_208._4_4_,(undefined4)local_298);
  if (local_290 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_200,(CowData *)&local_290);
  }
  StringName::StringName(local_1f8,local_358);
  local_1e8 = 0;
  local_1f0 = local_280;
  if (local_278 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e8,(CowData *)&local_278);
  }
  local_1e0 = local_270;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_2c8);
  local_140 = 0;
  local_148 = CONCAT44(local_148._4_4_,(undefined4)local_1a8);
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)&local_1a0);
  }
  StringName::StringName(local_138,local_198);
  local_128 = 0;
  local_130 = local_190;
  if (local_188 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_188);
  }
  local_170 = 0;
  local_120 = local_180;
  local_178 = CONCAT44(local_178._4_4_,local_1d8._0_4_);
  if (local_1d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1d0);
  }
  StringName::StringName(local_168,local_1c8);
  local_158 = 0;
  local_160 = local_1c0;
  if (local_1b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1b8);
  }
  local_150 = local_1b0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_208);
  local_110 = (Variant *)0x0;
  local_118 = (char *)CONCAT44(local_118._4_4_,(undefined4)local_148);
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_140);
  }
  StringName::StringName((StringName *)&local_108,local_138);
  local_f8 = 0;
  local_100 = local_130;
  if (local_128 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_128);
  }
  local_f0 = local_120;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_178);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_2c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_320 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_298);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
  if ((StringName::configured != '\0') && (local_308 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_300);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f8);
  if ((StringName::configured != '\0') && (local_2f0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  if (local_e8 != local_338) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_338);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x14);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_001052d3:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_001052d3;
    StringName::StringName((StringName *)&local_148,(String *)&local_f8,false);
    if (local_108 == (char *)local_148) {
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = (char *)local_148;
    }
  }
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  local_110 = (Variant *)0x0;
  Variant::Variant((Variant *)local_78,0xff);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  CowData<Variant>::resize<false>((CowData<Variant> *)&local_110,1);
  CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_110);
  pVVar4 = local_110;
  Variant::operator=(local_110,(Variant *)local_78);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_98 != pVVar4) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_338,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::Color8,true);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_338);
  local_208 = (char *)0x0;
  local_e8 = "print_debug";
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_208);
  cVar3 = String::begins_with((char *)&local_208);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar7);
    if (local_208 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
      local_208 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_208 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_208);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)((ulong)local_118 & 0xffffffff00000000);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_0010577b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_0010577b;
    StringName::StringName((StringName *)&local_148,(String *)&local_f8,false);
    if (local_108 == (char *)local_148) {
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = (char *)local_148;
    }
  }
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  local_b0 = local_b0 | 0x10;
  StringName::StringName((StringName *)&local_118,(String *)&local_208,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::print_debug,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_1d8 = (char *)0x0;
  local_e8 = "print_stack";
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_1d8);
  cVar3 = String::begins_with((char *)&local_1d8);
  iVar8 = (int)(StringName *)&local_1d8;
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar8);
    if (local_1d8 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
      local_1d8 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_1d8);
  }
  local_148 = 0;
  local_178 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_178);
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,0,(StrRange *)&local_1a8,0,(PropertyInfo *)&local_178,6,
             (PropertyInfo *)&local_148);
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_148 != 0)) {
    StringName::unref();
  }
  local_110 = (Variant *)0x0;
  if (local_98 != (Variant *)0x0) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_98 = (Variant *)0x0;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_1d8,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::print_stack,false);
  if ((StringName::configured != '\0') && (local_118 != (undefined *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  local_1d8 = (char *)0x0;
  local_e8 = "get_stack";
  local_e0 = 9;
  String::parse_latin1((StrRange *)&local_1d8);
  cVar3 = String::begins_with((char *)&local_1d8);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar8);
    if (local_1d8 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
      local_1d8 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_1d8);
  }
  local_148 = 0;
  local_178 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_178);
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,0x1c,(StrRange *)&local_1a8,0,(PropertyInfo *)&local_178,6,
             (PropertyInfo *)&local_148);
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_148 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_1d8,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::get_stack,false);
  if ((StringName::configured != '\0') && (local_118 != (undefined *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  local_208 = (undefined *)0x0;
  local_e8 = "len";
  local_e0 = 3;
  String::parse_latin1((StrRange *)&local_208);
  cVar3 = String::begins_with((char *)&local_208);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar7);
    if (local_208 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
      local_208 = local_e8;
      local_e8 = (undefined *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_e8 = "var";
  local_e0 = 3;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)((ulong)local_118 & 0xffffffff00000000);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (undefined *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 == 0) {
LAB_001061b3:
    local_f0 = 0x20000;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 0x20000;
    if (local_100 != 0x11) goto LAB_001061b3;
    StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
    if (local_108 == local_e8) {
      if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_e8;
    }
  }
  local_148 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_e8 = (undefined *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (undefined *)0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_148);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  if (local_e8 != local_208) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_208);
  }
  local_148 = 0;
  local_178 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_178);
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,2,(StrRange *)&local_1a8,0,(PropertyInfo *)&local_178,6,
             (PropertyInfo *)&local_148);
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (undefined *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_148 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_110 = (Variant *)0x0;
    local_98 = pVVar4;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_208,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::len,true);
  if ((StringName::configured != '\0') && (local_118 != (undefined *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_2d0 = (char *)0x0;
  local_e8 = "is_instance_of";
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_2d0);
  cVar3 = String::begins_with((char *)&local_2d0);
  if (cVar3 != '\0') {
    String::substr(iVar9,iVar6);
    if (local_2d0 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d0);
      local_2d0 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_1d8 = (char *)0x0;
  local_208 = (char *)0x0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_e8 = "type";
  local_238 = 0;
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,0,(StrRange *)&local_238,0,(StrRange *)&local_208,0x20000,
             (StringName *)&local_1d8);
  local_268 = 0;
  local_298 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_298);
  local_2c8 = 0;
  local_e8 = "value";
  local_e0 = 5;
  String::parse_latin1((StrRange *)&local_2c8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,0,(StrRange *)&local_2c8,0,(StrRange *)&local_298,0x20000,
             (PropertyInfo *)&local_268);
  local_1a8 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (Variant *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = 0;
  pcStack_d0 = (char *)0x0;
  if (local_1a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_1a8);
  }
  local_110 = (Variant *)0x0;
  local_118 = (char *)CONCAT44(local_118._4_4_,(undefined4)local_148);
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_140);
  }
  StringName::StringName((StringName *)&local_108,local_138);
  local_f8 = 0;
  local_100 = local_130;
  if (local_128 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_128);
  }
  local_f0 = local_120;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_178);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,(PropertyInfo *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  if ((StringName::configured != '\0') && (local_268 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_e8 != local_2d0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_2d0);
  }
  local_178 = 0;
  local_1a8 = 0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8 = (char *)0x0;
  local_118 = "";
  local_110 = (Variant *)0x0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_118 = (char *)CONCAT44(local_118._4_4_,1);
  local_110 = (Variant *)0x0;
  if (local_1d8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_1d8);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_1a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1a8);
    local_f0 = 6;
    if (local_100 == 0x11) {
      StringName::StringName((StringName *)&local_148,(String *)&local_f8,false);
      if (local_108 == (char *)local_148) {
        if ((StringName::configured != '\0') && (local_148 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_108 = (char *)local_148;
      }
      goto LAB_00106a3a;
    }
  }
  local_f0 = 6;
  StringName::operator=((StringName *)&local_108,(StringName *)&local_178);
LAB_00106a3a:
  lVar2 = local_d8;
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if ((Variant *)local_d8 != local_110) {
    pVVar4 = local_110;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pVVar4 = local_110;
      }
    }
    local_110 = (Variant *)0x0;
    local_d8 = (long)pVVar4;
  }
  if (pcStack_d0 != local_108) {
    StringName::unref();
    pcStack_d0 = local_108;
    local_108 = (char *)0x0;
  }
  lVar2 = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 != local_f8) {
    lVar5 = local_f8;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar5 = local_f8;
      }
    }
    local_f8 = 0;
    local_c0 = lVar5;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  varray<>();
  pVVar4 = local_110;
  if (local_98 != local_110) {
    CowData<Variant>::_unref((CowData<Variant> *)&local_98);
    local_98 = pVVar4;
    local_110 = (Variant *)0x0;
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_110);
  StringName::StringName((StringName *)&local_118,(String *)&local_2d0,false);
  _register_function((StringName *)&local_118,(MethodInfo *)&local_e8,
                     GDScriptUtilityFunctionsDefinitions::is_instance_of,true);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d0);
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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* GDScriptUtilityFunctionsDefinitions::type_exists(Variant*, Variant const**, int,
   Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::type_exists
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long in_FS_OFFSET;
  long local_40;
  undefined4 local_38 [2];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    local_30 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_30._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_30._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 1;
  }
  else if (param_3 == 1) {
    cVar2 = Variant::can_convert_strict(*(undefined4 *)*param_2,0x15);
    if (cVar2 == '\0') {
      local_30 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      uVar1 = _LC5;
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_30._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_30._8_8_;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar1;
    }
    else {
      Variant::operator_cast_to_StringName((Variant *)&local_40);
      bVar3 = (bool)ClassDB::class_exists((StringName *)&local_40);
      Variant::Variant((Variant *)local_38,bVar3);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      bVar3 = StringName::configured != '\0';
      *(undefined4 *)param_1 = local_38[0];
      *(undefined8 *)(param_1 + 8) = local_30._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_30._8_8_;
      if ((bVar3) && (local_40 != 0)) {
        StringName::unref();
      }
    }
  }
  else {
    local_30 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_30._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_30._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptUtilityFunctionsDefinitions::_char(Variant*, Variant const**, int, Callable::CallError&)
    */

void GDScriptUtilityFunctionsDefinitions::_char
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  wchar32 wVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  long local_60;
  undefined8 *local_58;
  long local_50;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    local_30 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    uVar6 = 4;
    *(undefined8 *)(param_1 + 8) = local_30._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_30._8_8_;
LAB_00107992:
    *(undefined4 *)param_4 = uVar6;
    uVar6 = 1;
  }
  else {
    if (param_3 != 1) {
      local_30 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = 0;
      uVar6 = 3;
      *(undefined8 *)(param_1 + 8) = local_30._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_30._8_8_;
      goto LAB_00107992;
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_2,2);
    if (cVar4 != '\0') {
      local_40 = 0;
      wVar5 = Variant::operator_cast_to_char32_t(*param_2);
      local_60 = 0;
      local_40 = CONCAT44(local_40._4_4_,wVar5);
      if (wVar5 == L'\0') {
        local_50 = 0;
      }
      else {
        puVar7 = &local_40;
        do {
          piVar1 = (int *)((long)puVar7 + 4);
          puVar7 = (undefined8 *)((long)puVar7 + 4);
        } while (*piVar1 != 0);
        local_50 = (long)puVar7 - (long)&local_40 >> 2;
      }
      local_58 = &local_40;
      String::parse_utf32((StrRange *)&local_60);
      Variant::Variant((Variant *)local_38,(String *)&local_60);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar3 = local_60;
      *(undefined4 *)param_1 = local_38[0];
      *(undefined8 *)(param_1 + 8) = local_30._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_30._8_8_;
      if (local_60 != 0) {
        LOCK();
        plVar2 = (long *)(local_60 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      goto LAB_00107921;
    }
    local_30 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    uVar6 = 2;
    *(undefined8 *)(param_1 + 8) = local_30._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_30._8_8_;
    *(undefined8 *)param_4 = 2;
  }
  *(undefined4 *)(param_4 + 8) = uVar6;
LAB_00107921:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptUtilityFunctionsDefinitions::load(Variant*, Variant const**, int, Callable::CallError&)
    */

void GDScriptUtilityFunctionsDefinitions::load
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_40._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 1;
  }
  else if (param_3 == 1) {
    cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_2,4);
    if (cVar5 == '\0') {
      local_40 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = _LC7;
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_40._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar2;
    }
    else {
      local_60 = 0;
      local_50 = 0;
      local_58 = (Object *)&_LC8;
      String::parse_latin1((StrRange *)&local_60);
      Variant::operator_cast_to_String((Variant *)&local_68);
      ResourceLoader::load(&local_58,&local_68,(StrRange *)&local_60,1,0);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
      if (local_58 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_58;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_58);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
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
    }
  }
  else {
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_40._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptUtilityFunctionsDefinitions::get_stack(Variant*, Variant const**, int,
   Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::get_stack
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  Variant *pVVar5;
  int iVar6;
  long in_FS_OFFSET;
  Array local_90 [8];
  Array local_88 [8];
  long local_80;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar2 = GDScriptLanguage::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else if (param_3 == 0) {
    if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      Thread::caller_id();
    }
    if (*(long *)(in_FS_OFFSET + lRam0000000000107d8f) == 1) {
      Array::Array(local_90);
      local_58 = 0;
      local_80 = 0;
      local_50 = (undefined1  [16])0x0;
      Array::set_typed((uint)local_90,(StringName *)0x1b,(Variant *)&local_80);
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      iVar6 = 0;
      while( true ) {
        iVar4 = (**(code **)(*plVar2 + 0x268))(plVar2);
        if (iVar4 <= iVar6) break;
        Dictionary::Dictionary((Dictionary *)local_88);
        (**(code **)(*plVar2 + 0x280))((Variant *)&local_80,plVar2,iVar6);
        Variant::Variant((Variant *)&local_58,(String *)&local_80);
        Variant::Variant((Variant *)local_78,"source");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar5 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = (int)local_58;
          *(undefined8 *)(pVVar5 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar5 + 0x10) = local_50._8_8_;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        lVar3 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        (**(code **)(*plVar2 + 0x278))((Variant *)&local_80,plVar2,iVar6);
        Variant::Variant((Variant *)&local_58,(String *)&local_80);
        Variant::Variant((Variant *)local_78,"function");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar5 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = (int)local_58;
          *(undefined8 *)(pVVar5 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar5 + 0x10) = local_50._8_8_;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        lVar3 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        iVar4 = (**(code **)(*plVar2 + 0x270))(plVar2,iVar6);
        Variant::Variant((Variant *)&local_58,iVar4);
        Variant::Variant((Variant *)local_78,"line");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar5 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = (int)local_58;
          *(undefined8 *)(pVVar5 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar5 + 0x10) = local_50._8_8_;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_58,(Dictionary *)local_88);
        Array::push_back((Variant *)local_90);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        iVar6 = iVar6 + 1;
        Dictionary::~Dictionary((Dictionary *)local_88);
      }
      Variant::Variant((Variant *)&local_58,local_90);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = (int)local_58;
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      Array::~Array(local_90);
    }
    else {
      Array::Array(local_88);
      local_58 = 0;
      local_80 = 0;
      local_50 = (undefined1  [16])0x0;
      Array::set_typed((uint)local_88,(StringName *)0x1b,(Variant *)&local_80);
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_58,local_88);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = (int)local_58;
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      Array::~Array(local_88);
    }
  }
  else {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptUtilityFunctionsDefinitions::Color8(Variant*, Variant const**, int, Callable::CallError&)
    */

void GDScriptUtilityFunctionsDefinitions::Color8
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_58 [2];
  undefined4 local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 3) {
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_40._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 3;
  }
  else if (param_3 < 5) {
    cVar2 = Variant::can_convert_strict(*(undefined4 *)*param_2,2);
    if (cVar2 == '\0') {
      local_40 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      uVar1 = _LC12;
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_40._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar1;
    }
    else {
      cVar2 = Variant::can_convert_strict(*(undefined4 *)param_2[1],2);
      if (cVar2 == '\0') {
        local_40 = (undefined1  [16])0x0;
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        uVar1 = _LC13;
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = local_40._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar1;
      }
      else {
        cVar2 = Variant::can_convert_strict(*(undefined4 *)param_2[2],2);
        if (cVar2 == '\0') {
          local_40 = (undefined1  [16])0x0;
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          uVar1 = _LC14;
          *(undefined4 *)param_1 = 0;
          *(undefined8 *)(param_1 + 8) = local_40._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar1;
        }
        else {
          lVar6 = 0xff;
          if (param_3 == 4) {
            cVar2 = Variant::can_convert_strict(*(undefined4 *)param_2[3],2);
            if (cVar2 == '\0') {
              local_40 = (undefined1  [16])0x0;
              if (Variant::needs_deinit[*(int *)param_1] != '\0') {
                Variant::_clear_internal();
              }
              uVar1 = _LC15;
              *(undefined4 *)param_1 = 0;
              *(undefined8 *)(param_1 + 8) = local_40._0_8_;
              *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar1;
              goto LAB_00108454;
            }
            lVar6 = Variant::operator_cast_to_long(param_2[3]);
          }
          lVar3 = Variant::operator_cast_to_long(param_2[2]);
          lVar4 = Variant::operator_cast_to_long(param_2[1]);
          lVar5 = Variant::operator_cast_to_long(*param_2);
          local_58[0] = Color::from_rgba8(lVar5,lVar4,lVar3,lVar6);
          Variant::Variant((Variant *)local_48,(Color *)local_58);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_1 = local_48[0];
          *(undefined8 *)(param_1 + 8) = local_40._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
        }
      }
    }
  }
  else {
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_40._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 4;
  }
LAB_00108454:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010877a) */
/* WARNING: Removing unreachable block (ram,0x00108da0) */
/* WARNING: Removing unreachable block (ram,0x00108da5) */
/* WARNING: Removing unreachable block (ram,0x00108790) */
/* WARNING: Removing unreachable block (ram,0x00108d1c) */
/* WARNING: Removing unreachable block (ram,0x00108d34) */
/* WARNING: Removing unreachable block (ram,0x00108f98) */
/* WARNING: Removing unreachable block (ram,0x00108d5a) */
/* WARNING: Removing unreachable block (ram,0x001087a8) */
/* WARNING: Removing unreachable block (ram,0x001089f2) */
/* WARNING: Removing unreachable block (ram,0x001089fa) */
/* WARNING: Removing unreachable block (ram,0x00108a19) */
/* WARNING: Removing unreachable block (ram,0x00108e90) */
/* WARNING: Removing unreachable block (ram,0x00108a32) */
/* WARNING: Removing unreachable block (ram,0x00108a3f) */
/* WARNING: Removing unreachable block (ram,0x00108a47) */
/* WARNING: Removing unreachable block (ram,0x00108a66) */
/* WARNING: Removing unreachable block (ram,0x00108a73) */
/* WARNING: Removing unreachable block (ram,0x00108a7b) */
/* WARNING: Removing unreachable block (ram,0x00108a9a) */
/* WARNING: Removing unreachable block (ram,0x00108aa7) */
/* WARNING: Removing unreachable block (ram,0x00108aaf) */
/* WARNING: Removing unreachable block (ram,0x00108ace) */
/* WARNING: Removing unreachable block (ram,0x00108ad8) */
/* WARNING: Removing unreachable block (ram,0x00108ae0) */
/* WARNING: Removing unreachable block (ram,0x00108af9) */
/* WARNING: Removing unreachable block (ram,0x00108b03) */
/* WARNING: Removing unreachable block (ram,0x00108b0b) */
/* WARNING: Removing unreachable block (ram,0x00108b24) */
/* WARNING: Removing unreachable block (ram,0x00108b2e) */
/* WARNING: Removing unreachable block (ram,0x00108b36) */
/* WARNING: Removing unreachable block (ram,0x00108b4f) */
/* WARNING: Removing unreachable block (ram,0x00108b59) */
/* WARNING: Removing unreachable block (ram,0x00108b61) */
/* WARNING: Removing unreachable block (ram,0x00108b7a) */
/* WARNING: Removing unreachable block (ram,0x00108b84) */
/* WARNING: Removing unreachable block (ram,0x00108b8c) */
/* WARNING: Removing unreachable block (ram,0x00108ba5) */
/* WARNING: Removing unreachable block (ram,0x00108baf) */
/* WARNING: Removing unreachable block (ram,0x00108bb7) */
/* WARNING: Removing unreachable block (ram,0x00108bd0) */
/* WARNING: Removing unreachable block (ram,0x00108bda) */
/* WARNING: Removing unreachable block (ram,0x00108be2) */
/* WARNING: Removing unreachable block (ram,0x00108bfb) */
/* WARNING: Removing unreachable block (ram,0x00108c05) */
/* WARNING: Removing unreachable block (ram,0x00108c0d) */
/* WARNING: Removing unreachable block (ram,0x00108c26) */
/* WARNING: Removing unreachable block (ram,0x00108c30) */
/* WARNING: Removing unreachable block (ram,0x00108c38) */
/* WARNING: Removing unreachable block (ram,0x00108c51) */
/* WARNING: Removing unreachable block (ram,0x00108c5b) */
/* WARNING: Removing unreachable block (ram,0x00108c63) */
/* WARNING: Removing unreachable block (ram,0x00108c7c) */
/* WARNING: Removing unreachable block (ram,0x00108c89) */
/* WARNING: Removing unreachable block (ram,0x00108c91) */
/* WARNING: Removing unreachable block (ram,0x00108cb0) */
/* WARNING: Removing unreachable block (ram,0x00108cbd) */
/* WARNING: Removing unreachable block (ram,0x00108cc5) */
/* WARNING: Removing unreachable block (ram,0x00108ce4) */
/* WARNING: Removing unreachable block (ram,0x00108cf1) */
/* WARNING: Removing unreachable block (ram,0x00108cf9) */
/* WARNING: Removing unreachable block (ram,0x00108d18) */
/* WARNING: Removing unreachable block (ram,0x00108daf) */
/* WARNING: Removing unreachable block (ram,0x00108e14) */
/* WARNING: Removing unreachable block (ram,0x00108ec8) */
/* WARNING: Removing unreachable block (ram,0x00108e20) */
/* WARNING: Removing unreachable block (ram,0x00108f88) */
/* WARNING: Removing unreachable block (ram,0x00108e39) */
/* WARNING: Removing unreachable block (ram,0x00108e46) */
/* WARNING: Removing unreachable block (ram,0x00108ea0) */
/* WARNING: Removing unreachable block (ram,0x00108e4e) */
/* WARNING: Removing unreachable block (ram,0x00108e5f) */
/* WARNING: Removing unreachable block (ram,0x00108e6b) */
/* GDScriptUtilityFunctionsDefinitions::print_stack(Variant*, Variant const**, int,
   Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::print_stack
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0) {
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      Thread::caller_id();
    }
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptUtilityFunctionsDefinitions::convert(Variant*, Variant const**, int,
   Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::convert
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 2) {
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_40._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 2;
  }
  else if (param_3 == 2) {
    cVar5 = Variant::can_convert_strict(*(undefined4 *)param_2[1],2);
    if (cVar5 == '\0') {
      local_40 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = _LC13;
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_40._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar2;
    }
    else {
      uVar6 = Variant::operator_cast_to_int(param_2[1]);
      if (uVar6 < 0x27) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Variant::construct(uVar6,param_1,param_2,1,param_4);
          return;
        }
        goto LAB_0010931e;
      }
      local_60 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "Invalid type argument to convert(), use TYPE_* constants.";
      local_68 = 0;
      local_50 = 0x39;
      String::parse_latin1((StrRange *)&local_68);
      RTR((String *)&local_58,(String *)&local_68);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar4 = local_58;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
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
      uVar2 = _LC13;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar2;
    }
  }
  else {
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_40._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010931e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010943c) */
/* WARNING: Removing unreachable block (ram,0x00109610) */
/* WARNING: Removing unreachable block (ram,0x0010962b) */
/* WARNING: Removing unreachable block (ram,0x001097ae) */
/* WARNING: Removing unreachable block (ram,0x001099fb) */
/* WARNING: Removing unreachable block (ram,0x001097ba) */
/* WARNING: Removing unreachable block (ram,0x001097c4) */
/* WARNING: Removing unreachable block (ram,0x001099dd) */
/* WARNING: Removing unreachable block (ram,0x001097d0) */
/* WARNING: Removing unreachable block (ram,0x001097da) */
/* WARNING: Removing unreachable block (ram,0x001099bf) */
/* WARNING: Removing unreachable block (ram,0x001097e6) */
/* WARNING: Removing unreachable block (ram,0x001097f0) */
/* WARNING: Removing unreachable block (ram,0x001099a1) */
/* WARNING: Removing unreachable block (ram,0x001097fc) */
/* WARNING: Removing unreachable block (ram,0x00109806) */
/* WARNING: Removing unreachable block (ram,0x00109983) */
/* WARNING: Removing unreachable block (ram,0x00109812) */
/* WARNING: Removing unreachable block (ram,0x0010981c) */
/* WARNING: Removing unreachable block (ram,0x00109965) */
/* WARNING: Removing unreachable block (ram,0x00109828) */
/* WARNING: Removing unreachable block (ram,0x00109832) */
/* WARNING: Removing unreachable block (ram,0x00109947) */
/* WARNING: Removing unreachable block (ram,0x0010983e) */
/* WARNING: Removing unreachable block (ram,0x00109848) */
/* WARNING: Removing unreachable block (ram,0x00109929) */
/* WARNING: Removing unreachable block (ram,0x00109854) */
/* WARNING: Removing unreachable block (ram,0x0010985e) */
/* WARNING: Removing unreachable block (ram,0x0010990b) */
/* WARNING: Removing unreachable block (ram,0x0010986a) */
/* WARNING: Removing unreachable block (ram,0x00109874) */
/* WARNING: Removing unreachable block (ram,0x001098ed) */
/* WARNING: Removing unreachable block (ram,0x0010987c) */
/* WARNING: Removing unreachable block (ram,0x0010988a) */
/* WARNING: Removing unreachable block (ram,0x00109896) */
/* WARNING: Removing unreachable block (ram,0x00109451) */
/* WARNING: Removing unreachable block (ram,0x00109456) */
/* WARNING: Removing unreachable block (ram,0x0010945f) */
/* WARNING: Removing unreachable block (ram,0x00109496) */
/* WARNING: Removing unreachable block (ram,0x0010949e) */
/* WARNING: Removing unreachable block (ram,0x001094bd) */
/* WARNING: Removing unreachable block (ram,0x001094c7) */
/* WARNING: Removing unreachable block (ram,0x001095e8) */
/* WARNING: Removing unreachable block (ram,0x001094d3) */
/* WARNING: Removing unreachable block (ram,0x00109506) */
/* WARNING: Removing unreachable block (ram,0x001095c0) */
/* WARNING: Removing unreachable block (ram,0x00109512) */
/* WARNING: Removing unreachable block (ram,0x001098d0) */
/* WARNING: Removing unreachable block (ram,0x0010952c) */
/* WARNING: Removing unreachable block (ram,0x001098e0) */
/* WARNING: Removing unreachable block (ram,0x00109547) */
/* WARNING: Removing unreachable block (ram,0x00109568) */
/* WARNING: Removing unreachable block (ram,0x001095a0) */
/* WARNING: Removing unreachable block (ram,0x00109570) */
/* WARNING: Removing unreachable block (ram,0x00109587) */
/* WARNING: Removing unreachable block (ram,0x00109a1f) */
/* GDScriptUtilityFunctionsDefinitions::print_debug(Variant*, Variant const**, int,
   Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::print_debug
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant **ppVVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_c8 [12];
  long local_68 [5];
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_c8[0] = 0;
  if (0 < param_3) {
    ppVVar2 = param_2 + param_3;
    do {
      Variant::operator_cast_to_String((Variant *)local_68);
      String::operator+=((String *)local_c8,(String *)local_68);
      lVar3 = local_68[0];
      if (local_68[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_68[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68[0] = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      param_2 = param_2 + 1;
    } while (ppVVar2 != param_2);
  }
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Ref<GDScript>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<GDScript> > > >::operator[](StringName
   const&) */

undefined8 * __thiscall
HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>
::operator[](HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
  Object *pOVar5;
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
  undefined1 auVar37 [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined8 *puVar44;
  long lVar45;
  void *pvVar46;
  ulong uVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined8 *puVar57;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  long local_40;
  
  lVar45 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar40);
  if (lVar45 == 0) {
LAB_0010a660:
    uVar47 = uVar42 * 4;
    uVar52 = uVar42 * 8;
    uVar43 = Memory::alloc_static(uVar47,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar46 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar46;
    if ((int)uVar42 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar46 + uVar52)) && (pvVar46 < (void *)((long)pvVar3 + uVar47))
         ) {
        uVar47 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar47 * 4) = 0;
          *(undefined8 *)((long)pvVar46 + uVar47 * 8) = 0;
          uVar47 = uVar47 + 1;
        } while (uVar42 != uVar47);
        goto LAB_0010a4a8;
      }
      memset(pvVar3,0,uVar47);
      memset(pvVar46,0,uVar52);
      iVar48 = *(int *)(this + 0x2c);
LAB_0010a4ac:
      if (iVar48 != 0) {
LAB_0010a4b4:
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar47 = CONCAT44(0,uVar40);
        lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar41 = StringName::get_empty_hash();
        }
        else {
          uVar41 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar41 == 0) {
          uVar41 = 1;
        }
        uVar56 = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (ulong)uVar41 * lVar45;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar47;
        lVar51 = SUB168(auVar18 * auVar34,8);
        uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
        uVar55 = SUB164(auVar18 * auVar34,8);
        if (uVar54 != 0) {
          do {
            if ((uVar41 == uVar54) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar51 * 8) + 0x10) == *(long *)param_1))
            {
              puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              pOVar5 = (Object *)puVar44[3];
              if (pOVar5 != (Object *)0x0) {
                puVar44[3] = 0;
                cVar38 = RefCounted::unreference();
                if ((cVar38 != '\0') && (cVar38 = predelete_handler(pOVar5), cVar38 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
                puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              }
              goto LAB_0010a07c;
            }
            uVar56 = uVar56 + 1;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = (ulong)(uVar55 + 1) * lVar45;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar47;
            lVar51 = SUB168(auVar19 * auVar35,8);
            uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
            uVar55 = SUB164(auVar19 * auVar35,8);
          } while ((uVar54 != 0) &&
                  (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar54 * lVar45, auVar36._8_8_ = 0,
                  auVar36._0_8_ = uVar47, auVar21._8_8_ = 0,
                  auVar21._0_8_ = (ulong)((uVar40 + uVar55) - SUB164(auVar20 * auVar36,8)) * lVar45,
                  auVar37._8_8_ = 0, auVar37._0_8_ = uVar47, uVar56 <= SUB164(auVar21 * auVar37,8)))
          ;
        }
        iVar48 = *(int *)(this + 0x2c);
      }
      goto LAB_0010a0af;
    }
    iVar48 = *(int *)(this + 0x2c);
    if (pvVar46 == (void *)0x0) goto LAB_0010a0af;
    if (iVar48 != 0) goto LAB_0010a4b4;
LAB_0010a0d5:
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      puVar44 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a07c;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar52 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar46 = *(void **)(this + 8);
    uVar42 = uVar52 * 4;
    uVar47 = uVar52 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar47)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar52);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar47);
      }
    }
    if (uVar41 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar45 = *(long *)(this + 0x10);
          uVar56 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar47 = CONCAT44(0,uVar54);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar40 * lVar51;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar47;
          lVar49 = SUB168(auVar10 * auVar26,8);
          puVar1 = (uint *)(lVar45 + lVar49 * 4);
          iVar48 = SUB164(auVar10 * auVar26,8);
          uVar55 = *puVar1;
          uVar43 = *(undefined8 *)((long)pvVar46 + uVar42 * 8);
          while (uVar55 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar55 * lVar51;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar47;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar54 + iVar48) - SUB164(auVar11 * auVar27,8)) * lVar51;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar47;
            uVar39 = SUB164(auVar12 * auVar28,8);
            uVar53 = uVar43;
            if (uVar39 < uVar56) {
              *puVar1 = uVar40;
              puVar44 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar53 = *puVar44;
              *puVar44 = uVar43;
              uVar40 = uVar55;
              uVar56 = uVar39;
            }
            uVar56 = uVar56 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar48 + 1) * lVar51;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar47;
            lVar49 = SUB168(auVar13 * auVar29,8);
            puVar1 = (uint *)(lVar45 + lVar49 * 4);
            iVar48 = SUB164(auVar13 * auVar29,8);
            uVar43 = uVar53;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar41 != uVar42);
      Memory::free_static(pvVar46,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar48 = *(int *)(this + 0x2c);
    if (iVar48 != 0) {
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar41 = StringName::get_empty_hash();
        lVar45 = *(long *)(this + 8);
      }
      else {
        uVar41 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar41 == 0) {
        uVar41 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar41 * lVar51;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar42;
      lVar49 = SUB168(auVar6 * auVar22,8);
      uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
      uVar55 = SUB164(auVar6 * auVar22,8);
      if (uVar54 != 0) {
        uVar56 = 0;
        do {
          if ((uVar54 == uVar41) &&
             (*(long *)(*(long *)(lVar45 + lVar49 * 8) + 0x10) == *(long *)param_1)) {
            puVar44 = *(undefined8 **)(lVar45 + (ulong)uVar55 * 8);
            goto LAB_0010a07c;
          }
          uVar56 = uVar56 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar55 + 1) * lVar51;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar42;
          lVar49 = SUB168(auVar7 * auVar23,8);
          uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
          uVar55 = SUB164(auVar7 * auVar23,8);
        } while ((uVar54 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar54 * lVar51, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar42, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar55 + uVar40) - SUB164(auVar8 * auVar24,8)) * lVar51,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar42, uVar56 <= SUB164(auVar9 * auVar25,8)));
      }
      uVar42 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar45 == 0) goto LAB_0010a660;
LAB_0010a4a8:
      iVar48 = *(int *)(this + 0x2c);
      goto LAB_0010a4ac;
    }
LAB_0010a0af:
    if ((float)uVar42 * __LC40 < (float)(iVar48 + 1)) goto LAB_0010a0d5;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = (Object *)0x0;
  puVar44 = (undefined8 *)operator_new(0x20,"");
  *puVar44 = 0;
  puVar44[1] = 0;
  StringName::StringName((StringName *)(puVar44 + 2),(StringName *)&local_58);
  puVar44[3] = 0;
  if (local_50 != (Object *)0x0) {
    puVar44[3] = local_50;
    cVar38 = RefCounted::reference();
    if (cVar38 == '\0') {
      puVar44[3] = 0;
    }
    if (((local_50 != (Object *)0x0) &&
        (cVar38 = RefCounted::unreference(), pOVar5 = local_50, cVar38 != '\0')) &&
       (cVar38 = predelete_handler(local_50), cVar38 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar44;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 == 0) goto LAB_0010a625;
LAB_0010a398:
    uVar40 = *(uint *)(lVar45 + 0x20);
  }
  else {
    *puVar4 = puVar44;
    puVar44[1] = puVar4;
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 != 0) goto LAB_0010a398;
LAB_0010a625:
    uVar40 = StringName::get_empty_hash();
  }
  lVar45 = *(long *)(this + 0x10);
  if (uVar40 == 0) {
    uVar40 = 1;
  }
  uVar42 = (ulong)uVar40;
  uVar55 = 0;
  uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar47 = CONCAT44(0,uVar41);
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar42 * lVar51;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar47;
  lVar50 = SUB168(auVar14 * auVar30,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar45 + lVar50 * 4);
  iVar48 = SUB164(auVar14 * auVar30,8);
  uVar54 = *puVar1;
  puVar4 = puVar44;
  while (uVar54 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar54 * lVar51;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar47;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((iVar48 + uVar41) - SUB164(auVar15 * auVar31,8)) * lVar51;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar47;
    uVar40 = SUB164(auVar16 * auVar32,8);
    puVar57 = puVar4;
    if (uVar40 < uVar55) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar54;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      puVar57 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar55 = uVar40;
    }
    uVar40 = (uint)uVar42;
    uVar55 = uVar55 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar48 + 1) * lVar51;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar47;
    lVar50 = SUB168(auVar17 * auVar33,8);
    puVar1 = (uint *)(lVar45 + lVar50 * 4);
    iVar48 = SUB164(auVar17 * auVar33,8);
    puVar4 = puVar57;
    uVar54 = *puVar1;
  }
  *(undefined8 **)(lVar49 + lVar50 * 8) = puVar4;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a07c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar44 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010a938) */
/* WARNING: Removing unreachable block (ram,0x0010aa68) */
/* WARNING: Removing unreachable block (ram,0x0010ac30) */
/* WARNING: Removing unreachable block (ram,0x0010aa74) */
/* WARNING: Removing unreachable block (ram,0x0010aa7e) */
/* WARNING: Removing unreachable block (ram,0x0010ac10) */
/* WARNING: Removing unreachable block (ram,0x0010aa8a) */
/* WARNING: Removing unreachable block (ram,0x0010aa94) */
/* WARNING: Removing unreachable block (ram,0x0010abf0) */
/* WARNING: Removing unreachable block (ram,0x0010aaa0) */
/* WARNING: Removing unreachable block (ram,0x0010aaaa) */
/* WARNING: Removing unreachable block (ram,0x0010abd0) */
/* WARNING: Removing unreachable block (ram,0x0010aab6) */
/* WARNING: Removing unreachable block (ram,0x0010aac0) */
/* WARNING: Removing unreachable block (ram,0x0010abb0) */
/* WARNING: Removing unreachable block (ram,0x0010aacc) */
/* WARNING: Removing unreachable block (ram,0x0010aad6) */
/* WARNING: Removing unreachable block (ram,0x0010ab90) */
/* WARNING: Removing unreachable block (ram,0x0010aae2) */
/* WARNING: Removing unreachable block (ram,0x0010aaec) */
/* WARNING: Removing unreachable block (ram,0x0010ab70) */
/* WARNING: Removing unreachable block (ram,0x0010aaf4) */
/* WARNING: Removing unreachable block (ram,0x0010ab0a) */
/* WARNING: Removing unreachable block (ram,0x0010ab16) */
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



/* GDScriptUtilityFunctionsDefinitions::len(Variant*, Variant const**, int, Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::len
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  long *local_60;
  undefined4 local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 1;
    goto LAB_0010aea0;
  }
  if (param_3 != 1) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 1;
    goto LAB_0010aea0;
  }
  switch(*(undefined4 *)*param_2) {
  case 4:
  case 0x15:
    Variant::operator_cast_to_String((Variant *)&local_68);
    if (local_68 == (char *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)*(undefined8 *)(local_68 + -8) + -1 +
              (uint)((int)*(undefined8 *)(local_68 + -8) == 0);
    }
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    pcVar5 = local_68;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    goto LAB_0010aea0;
  default:
    Variant::get_type_name(&local_70,*(undefined4 *)*param_2);
    local_68 = "";
    local_80 = 0;
    local_60 = (long *)0x0;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "Value of type \'%s\' can\'t provide a length.";
    local_88 = 0;
    local_60 = (long *)0x2a;
    String::parse_latin1((StrRange *)&local_88);
    RTR((String *)&local_78,(String *)&local_88);
    vformat<String>((String *)&local_68,(String *)&local_78,&local_70);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    pcVar5 = local_68;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar9 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = 0;
    goto LAB_0010aea0;
  case 0x1b:
    Variant::operator_cast_to_Dictionary((Variant *)&local_68);
    iVar6 = Dictionary::size();
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    Dictionary::~Dictionary((Dictionary *)&local_68);
    goto LAB_0010aea0;
  case 0x1c:
    Variant::operator_cast_to_Array((Variant *)&local_68);
    iVar6 = Array::size();
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    Array::~Array((Array *)&local_68);
    goto LAB_0010aea0;
  case 0x1d:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_60[-1];
    }
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    break;
  case 0x1e:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 == (long *)0x0) goto LAB_0010b2f8;
LAB_0010af68:
    lVar9 = local_60[-1];
    goto LAB_0010af6c;
  case 0x1f:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 == (long *)0x0) goto LAB_0010b3d8;
LAB_0010aff0:
    lVar9 = local_60[-1];
    goto LAB_0010aff4;
  case 0x20:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_60[-1];
    }
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    break;
  case 0x21:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_60[-1];
    }
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    break;
  case 0x22:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_60[-1];
    }
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    plVar1 = local_60;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar7 = local_60 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        if (local_60 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar9 = local_60[-1];
        local_60 = (long *)0x0;
        if (lVar9 != 0) {
          lVar8 = 0;
          plVar7 = plVar1;
          do {
            if (*plVar7 != 0) {
              LOCK();
              plVar2 = (long *)(*plVar7 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar3 = *plVar7;
                *plVar7 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            lVar8 = lVar8 + 1;
            plVar7 = plVar7 + 1;
          } while (lVar9 != lVar8);
        }
        Memory::free_static(plVar1 + -2,false);
      }
    }
    goto LAB_0010aea0;
  case 0x23:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 != (long *)0x0) goto LAB_0010af68;
LAB_0010b2f8:
    lVar9 = 0;
LAB_0010af6c:
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
joined_r0x0010b352:
    if (local_60 == (long *)0x0) goto LAB_0010aea0;
    goto LAB_0010afa8;
  case 0x24:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_60[-1];
    }
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    goto joined_r0x0010b352;
  case 0x25:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_60[-1];
    }
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    break;
  case 0x26:
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    if (local_60 != (long *)0x0) goto LAB_0010aff0;
LAB_0010b3d8:
    lVar9 = 0;
LAB_0010aff4:
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
  }
  if (local_60 != (long *)0x0) {
LAB_0010afa8:
    plVar7 = local_60;
    LOCK();
    plVar1 = local_60 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = (long *)0x0;
      Memory::free_static(plVar7 + -2,false);
    }
  }
LAB_0010aea0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Vector<Variant> varray<>() */

void varray<>(void)

{
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  return;
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



/* GDScriptUtilityFunctionsDefinitions::range(Variant*, Variant const**, int, Callable::CallError&)
    */

void GDScriptUtilityFunctionsDefinitions::range
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Variant *pVVar8;
  int iVar9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_a0;
  CowData<char32_t> *local_98;
  Array local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 1;
    goto LAB_0010b910;
  }
  if (3 < param_3) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 3;
    goto LAB_0010b910;
  }
  uVar1 = *(undefined4 *)*param_2;
  if (param_3 == 2) {
    cVar3 = Variant::can_convert_strict(uVar1,2);
    if (cVar3 == '\0') {
      local_50 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = _LC12;
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar2;
      goto LAB_0010b910;
    }
    cVar3 = Variant::can_convert_strict(*(undefined4 *)param_2[1],2);
    if (cVar3 == '\0') {
      local_50 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = _LC13;
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar2;
      goto LAB_0010b910;
    }
    iVar4 = Variant::operator_cast_to_int(*param_2);
    iVar5 = Variant::operator_cast_to_int(param_2[1]);
    Array::Array(local_80);
    if (iVar4 < iVar5) {
      iVar9 = (int)local_80;
      iVar6 = Array::resize(iVar9);
      if (iVar6 == 0) {
        iVar6 = 0;
        do {
          Variant::Variant((Variant *)local_58,iVar4 + iVar6);
          pVVar8 = (Variant *)Array::operator[](iVar9);
          if (pVVar8 == (Variant *)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar8 = 0;
            *(int *)pVVar8 = local_58[0];
            *(undefined8 *)(pVVar8 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar8 + 0x10) = local_50._8_8_;
          }
          iVar6 = iVar6 + 1;
        } while (iVar5 - iVar4 != iVar6);
        Variant::Variant((Variant *)local_58,local_80);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_1 = local_58[0];
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
        Array::~Array(local_80);
        goto LAB_0010b910;
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_78 = 0;
      local_68 = "Cannot resize array.";
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_78);
      RTR((String *)&local_68,(String *)&local_78);
      Variant::Variant((Variant *)local_58,(String *)&local_68);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      goto LAB_0010c0a2;
    }
LAB_0010ba5c:
    Variant::Variant((Variant *)local_58,local_80);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
  }
  else {
    if (param_3 == 3) {
      cVar3 = Variant::can_convert_strict(uVar1,2);
      if (cVar3 == '\0') {
        local_50 = (undefined1  [16])0x0;
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        uVar2 = _LC12;
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar2;
        goto LAB_0010b910;
      }
      cVar3 = Variant::can_convert_strict(*(undefined4 *)param_2[1],2);
      if (cVar3 == '\0') {
        local_50 = (undefined1  [16])0x0;
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        uVar2 = _LC13;
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar2;
        goto LAB_0010b910;
      }
      cVar3 = Variant::can_convert_strict(*(undefined4 *)param_2[2],2);
      if (cVar3 == '\0') {
        local_50 = (undefined1  [16])0x0;
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        uVar2 = _LC14;
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar2;
        goto LAB_0010b910;
      }
      iVar4 = Variant::operator_cast_to_int(*param_2);
      iVar5 = Variant::operator_cast_to_int(param_2[1]);
      iVar6 = Variant::operator_cast_to_int(param_2[2]);
      if (iVar6 == 0) {
        local_70 = 0;
        local_60 = 0;
        local_68 = "";
        String::parse_latin1((StrRange *)&local_70);
        local_78 = 0;
        local_68 = "Step argument is zero!";
        local_60 = 0x16;
        String::parse_latin1((StrRange *)&local_78);
        RTR((String *)&local_68,(String *)&local_78);
        Variant::Variant((Variant *)local_58,(String *)&local_68);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_1 = local_58[0];
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        uVar2 = _LC14;
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar2;
        goto LAB_0010b910;
      }
      Array::Array(local_80);
      if (iVar4 < iVar5) {
LAB_0010ba50:
        if (iVar6 < 0) goto LAB_0010ba5c;
      }
      else {
        if (0 < iVar6) {
          Variant::Variant((Variant *)local_58,local_80);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(int *)param_1 = local_58[0];
          *(undefined8 *)(param_1 + 8) = local_50._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
          goto LAB_0010ba91;
        }
        if (iVar4 <= iVar5) goto LAB_0010ba50;
      }
      iVar9 = (int)local_80;
      if (iVar6 < 1) {
        iVar7 = Array::resize(iVar9);
        if (iVar7 != 0) goto LAB_0010c199;
        for (; iVar5 < iVar4; iVar4 = iVar4 + iVar6) {
          Variant::Variant((Variant *)local_58,iVar4);
          pVVar8 = (Variant *)Array::operator[](iVar9);
          if (pVVar8 == (Variant *)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar8 = 0;
            *(int *)pVVar8 = local_58[0];
            *(undefined8 *)(pVVar8 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar8 + 0x10) = local_50._8_8_;
          }
        }
      }
      else {
        iVar7 = Array::resize(iVar9);
        if (iVar7 != 0) {
LAB_0010c199:
          local_70 = 0;
          local_60 = 0;
          local_68 = "";
          String::parse_latin1((StrRange *)&local_70);
          local_78 = 0;
          local_68 = "Cannot resize array.";
          local_60 = 0x14;
          String::parse_latin1((StrRange *)&local_78);
          RTR((String *)&local_68,(String *)&local_78);
          Variant::Variant((Variant *)local_58,(String *)&local_68);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(int *)param_1 = local_58[0];
          *(undefined8 *)(param_1 + 8) = local_50._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
          goto LAB_0010c0a2;
        }
        if (iVar4 < iVar5) {
          do {
            Variant::Variant((Variant *)local_58,iVar4);
            pVVar8 = (Variant *)Array::operator[](iVar9);
            if (pVVar8 == (Variant *)local_58) {
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            else {
              if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar8 = 0;
              *(int *)pVVar8 = local_58[0];
              *(undefined8 *)(pVVar8 + 8) = local_50._0_8_;
              *(undefined8 *)(pVVar8 + 0x10) = local_50._8_8_;
            }
            iVar4 = iVar4 + iVar6;
          } while (iVar4 < iVar5);
        }
      }
      Variant::Variant((Variant *)local_58,local_80);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      Array::~Array(local_80);
      goto LAB_0010b910;
    }
    cVar3 = Variant::can_convert_strict(uVar1,2);
    if (cVar3 == '\0') {
      local_50 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = _LC12;
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar2;
      goto LAB_0010b910;
    }
    iVar4 = Variant::operator_cast_to_int(*param_2);
    Array::Array(local_80);
    if (iVar4 < 1) {
      Variant::Variant((Variant *)local_58,local_80);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      goto LAB_0010ba91;
    }
    iVar6 = 0;
    iVar9 = (int)local_80;
    iVar5 = Array::resize(iVar9);
    if (iVar5 == 0) {
      do {
        Variant::Variant((Variant *)local_58,iVar6);
        pVVar8 = (Variant *)Array::operator[](iVar9);
        if (pVVar8 == (Variant *)local_58) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar8 = 0;
          *(int *)pVVar8 = local_58[0];
          *(undefined8 *)(pVVar8 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar8 + 0x10) = local_50._8_8_;
        }
        iVar6 = iVar6 + 1;
      } while (iVar4 != iVar6);
      Variant::Variant((Variant *)local_58,local_80);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      Array::~Array(local_80);
      goto LAB_0010b910;
    }
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_78 = 0;
    local_68 = "Cannot resize array.";
    local_60 = 0x14;
    String::parse_latin1((StrRange *)&local_78);
    RTR((String *)&local_68,(String *)&local_78);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
LAB_0010c0a2:
    local_98 = (CowData<char32_t> *)&local_70;
    local_a0 = (CowData<char32_t> *)&local_78;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_a0);
    CowData<char32_t>::_unref(local_98);
    *(undefined4 *)param_4 = 1;
  }
LAB_0010ba91:
  Array::~Array(local_80);
LAB_0010b910:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010c980) */
/* WARNING: Removing unreachable block (ram,0x0010cc31) */
/* WARNING: Removing unreachable block (ram,0x0010ca10) */
/* WARNING: Removing unreachable block (ram,0x0010ca2a) */
/* WARNING: Removing unreachable block (ram,0x0010ca32) */
/* WARNING: Removing unreachable block (ram,0x0010ca4b) */
/* WARNING: Removing unreachable block (ram,0x0010ca55) */
/* WARNING: Removing unreachable block (ram,0x0010ca5d) */
/* WARNING: Removing unreachable block (ram,0x0010ca76) */
/* WARNING: Removing unreachable block (ram,0x0010ca80) */
/* WARNING: Removing unreachable block (ram,0x0010ca88) */
/* WARNING: Removing unreachable block (ram,0x0010caa1) */
/* WARNING: Removing unreachable block (ram,0x0010c680) */
/* WARNING: Removing unreachable block (ram,0x0010c96c) */
/* WARNING: Removing unreachable block (ram,0x0010c710) */
/* GDScriptUtilityFunctionsDefinitions::is_instance_of(Variant*, Variant const**, int,
   Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::is_instance_of
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *this;
  Object *pOVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  Object *pOVar9;
  StringName *pSVar10;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 2) {
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_40._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 2;
  }
  else if (param_3 == 2) {
    this = param_2[1];
    if (*(int *)this == 2) {
      uVar5 = Variant::operator_cast_to_int(this);
      if (uVar5 < 0x27) {
        Variant::Variant((Variant *)local_48,*(uint *)*param_2 == uVar5);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = local_48[0];
        *(undefined8 *)(param_1 + 8) = local_40._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
      }
      else {
        local_60 = 0;
        local_58 = (Object *)&_LC8;
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_60);
        local_58 = (Object *)0x10c320;
        local_68 = 0;
        local_50 = 0x54;
        String::parse_latin1((StrRange *)&local_68);
        RTR((String *)&local_58,(String *)&local_68);
        Variant::Variant((Variant *)local_48,(String *)&local_58);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = local_48[0];
        *(undefined8 *)(param_1 + 8) = local_40._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = 1;
      }
    }
    else {
      lVar6 = Variant::get_validated_object_with_check((bool *)this);
      if (lVar6 != 0) {
        plVar7 = (long *)Variant::get_validated_object_with_check((bool *)*param_2);
        if (plVar7 == (long *)0x0) {
          Variant::Variant((Variant *)local_48,false);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_1 = local_48[0];
          *(undefined8 *)(param_1 + 8) = local_40._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
          goto LAB_0010c598;
        }
        lVar8 = __dynamic_cast(lVar6,&Object::typeinfo,&GDScriptNativeClass::typeinfo,0);
        if (lVar8 != 0) {
          if (plVar7[1] == 0) {
            pSVar10 = (StringName *)plVar7[0x23];
            if (pSVar10 == (StringName *)0x0) {
              pSVar10 = (StringName *)(**(code **)(*plVar7 + 0x40))(plVar7);
            }
          }
          else {
            pSVar10 = (StringName *)(plVar7[1] + 0x20);
          }
          bVar3 = (bool)ClassDB::is_parent_class(pSVar10,(StringName *)(lVar8 + 0x180));
          Variant::Variant((Variant *)local_48,bVar3);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_1 = local_48[0];
          *(undefined8 *)(param_1 + 8) = local_40._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
          goto LAB_0010c598;
        }
        pOVar9 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&Script::typeinfo,0);
        if (pOVar9 != (Object *)0x0) {
          if ((long *)plVar7[0x13] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[0x13] + 0x90))(&local_58);
            pOVar1 = local_58;
            while (local_58 = pOVar1, pOVar1 != (Object *)0x0) {
              cVar4 = RefCounted::unreference();
              pOVar2 = local_58;
              if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
              if (pOVar1 == pOVar9) {
                bVar3 = true;
                goto LAB_0010c645;
              }
              (**(code **)(*(long *)pOVar1 + 0x1d8))(&local_58);
              pOVar1 = local_58;
            }
          }
          bVar3 = false;
LAB_0010c645:
          Variant::Variant((Variant *)local_48,bVar3);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_1 = local_48[0];
          *(undefined8 *)(param_1 + 8) = local_40._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
          goto LAB_0010c598;
        }
      }
      local_60 = 0;
      local_58 = (Object *)&_LC8;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      local_58 = (Object *)0x10c3a8;
      local_68 = 0;
      local_50 = 0x5d;
      String::parse_latin1((StrRange *)&local_68);
      RTR((String *)&local_58,(String *)&local_68);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pOVar9 = local_58;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar9 + -0x10,false);
        }
      }
      lVar6 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar7 = (long *)(local_68 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = 1;
    }
  }
  else {
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_40._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 2;
  }
LAB_0010c598:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar5 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      lVar4 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x50));
  plVar5 = *(long **)(this + 0x40);
  if (plVar5 != (long *)0x0) {
    do {
      pvVar2 = (void *)*plVar5;
      if (pvVar2 == (void *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010cde6;
        }
        break;
      }
      if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
        lVar4 = *(long *)((long)pvVar2 + 0x30);
        lVar3 = *(long *)((long)pvVar2 + 0x38);
        *plVar5 = lVar4;
        if (pvVar2 == (void *)plVar5[1]) {
          plVar5[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar4;
          lVar4 = *(long *)((long)pvVar2 + 0x30);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x38) = lVar3;
        }
        if (*(long *)((long)pvVar2 + 0x20) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *(long *)((long)pvVar2 + 0x20);
            *(undefined8 *)((long)pvVar2 + 0x20) = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
          StringName::unref();
        }
        if (*(long *)((long)pvVar2 + 8) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *(long *)((long)pvVar2 + 8);
            *(undefined8 *)((long)pvVar2 + 8) = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Memory::free_static(pvVar2,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x40);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_0010cde6:
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar5 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      lVar4 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar5 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      lVar4 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar5 = (long *)(*(long *)this + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* OAHashMap<StringName, GDScriptUtilityFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::~OAHashMap() */

void __thiscall
OAHashMap<StringName,GDScriptUtilityFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
::~OAHashMap(OAHashMap<StringName,GDScriptUtilityFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
             *this)

{
  long lVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(*(long *)(this + 0x10) + lVar1 * 4) != 0) {
        MethodInfo::~MethodInfo((MethodInfo *)(lVar1 * 0x80 + *(long *)this + 8));
        if ((StringName::configured != '\0') && (*(long *)(*(long *)(this + 8) + lVar1 * 8) != 0)) {
          StringName::unref();
        }
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(this + 0x18));
  }
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)this,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Variant>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010d03c(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptUtilityFunctionsDefinitions::dict_to_inst(Variant*, Variant const**, int,
   Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::dict_to_inst
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  long *plVar8;
  Variant *pVVar9;
  long lVar10;
  Object *pOVar11;
  int iVar12;
  long lVar13;
  long in_FS_OFFSET;
  Object *local_c8;
  Object *local_a8;
  Variant local_88 [8];
  undefined8 local_80;
  long local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 1;
    goto LAB_0010d79b;
  }
  if (param_3 != 1) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 1;
    goto LAB_0010d79b;
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_2,0x1b);
  if (cVar5 == '\0') {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    uVar4 = _LC65;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = uVar4;
    goto LAB_0010d79b;
  }
  Variant::operator_cast_to_Dictionary(local_88);
  Variant::Variant((Variant *)local_58,"@path");
  cVar5 = Dictionary::has(local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_70 = 0;
  local_68 = (Object *)&_LC8;
  local_60 = 0;
  if (cVar5 == '\0') {
    String::parse_latin1((StrRange *)&local_70);
    local_68 = (Object *)0x10d088;
    local_78 = 0;
    local_60 = 0x33;
    String::parse_latin1((StrRange *)&local_78);
    RTR((String *)&local_68,(String *)&local_78);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    pOVar7 = local_68;
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    if (local_68 != (Object *)0x0) {
      LOCK();
      pOVar11 = local_68 + -0x10;
      *(long *)pOVar11 = *(long *)pOVar11 + -1;
      UNLOCK();
      if (*(long *)pOVar11 == 0) {
        local_68 = (Object *)0x0;
        Memory::free_static(pOVar7 + -0x10,false);
      }
    }
    lVar13 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar8 = (long *)(local_78 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar8 = (long *)(local_70 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    uVar4 = _LC65;
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = uVar4;
  }
  else {
    String::parse_latin1((StrRange *)&local_70);
    Variant::Variant((Variant *)local_58,"@path");
    Dictionary::operator[](local_88);
    Variant::operator_cast_to_String((Variant *)&local_78);
    ResourceLoader::load((String *)&local_68,(Variant *)&local_78,(StrRange *)&local_70,1,0);
    if (local_68 == (Object *)0x0) {
      local_c8 = (Object *)0x0;
    }
    else {
      pOVar7 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&Script::typeinfo,0);
      local_c8 = pOVar7;
      if (pOVar7 != (Object *)0x0) {
        cVar5 = RefCounted::reference();
        local_c8 = (Object *)0x0;
        if (cVar5 != '\0') {
          local_c8 = pOVar7;
        }
        if (local_68 == (Object *)0x0) goto LAB_0010d365;
      }
      cVar5 = RefCounted::unreference();
      pOVar7 = local_68;
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
LAB_0010d365:
    lVar13 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar8 = (long *)(local_78 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar13 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar8 = (long *)(local_70 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    if (local_c8 == (Object *)0x0) {
      local_70 = 0;
      local_68 = (Object *)&_LC8;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = (Object *)0x10d0c0;
      local_78 = 0;
      local_60 = 0x40;
      String::parse_latin1((StrRange *)&local_78);
      RTR((String *)&local_68,(String *)&local_78);
      Variant::Variant((Variant *)local_58,(String *)&local_68);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pOVar7 = local_68;
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      if (local_68 != (Object *)0x0) {
        LOCK();
        pOVar11 = local_68 + -0x10;
        *(long *)pOVar11 = *(long *)pOVar11 + -1;
        UNLOCK();
        if (*(long *)pOVar11 == 0) {
          local_68 = (Object *)0x0;
          Memory::free_static(pOVar7 + -0x10,false);
        }
      }
      lVar13 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar8 = (long *)(local_78 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar8 = (long *)(local_70 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      uVar4 = _LC65;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar4;
    }
    else {
      pOVar7 = (Object *)__dynamic_cast(local_c8,&Object::typeinfo,&GDScript::typeinfo,0);
      if ((pOVar7 == (Object *)0x0) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        local_70 = 0;
        local_68 = (Object *)&_LC8;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        local_68 = (Object *)0x10d108;
        local_78 = 0;
        local_60 = 0x3d;
        String::parse_latin1((StrRange *)&local_78);
        RTR((String *)&local_68,(String *)&local_78);
        Variant::Variant((Variant *)local_58,(String *)&local_68);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        pOVar7 = local_68;
        *(int *)param_1 = local_58[0];
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
        if (local_68 != (Object *)0x0) {
          LOCK();
          pOVar11 = local_68 + -0x10;
          *(long *)pOVar11 = *(long *)pOVar11 + -1;
          UNLOCK();
          if (*(long *)pOVar11 == 0) {
            local_68 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        lVar13 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar8 = (long *)(local_78 + -0x10);
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar13 + -0x10),false);
          }
        }
        lVar13 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar8 = (long *)(local_70 + -0x10);
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar13 + -0x10),false);
          }
        }
        uVar4 = _LC65;
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar4;
      }
      else {
        local_80 = 0;
        Variant::Variant((Variant *)local_58,"@subpath");
        cVar5 = Dictionary::has(local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar5 != '\0') {
          Variant::Variant((Variant *)local_58,"@subpath");
          Dictionary::operator[](local_88);
          Variant::operator_cast_to_NodePath((Variant *)&local_68);
          NodePath::operator=((NodePath *)&local_80,(NodePath *)&local_68);
          NodePath::~NodePath((NodePath *)&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        for (iVar12 = 0; iVar6 = NodePath::get_name_count(), iVar12 < iVar6; iVar12 = iVar12 + 1) {
          NodePath::get_name((int)(String *)&local_68);
          plVar8 = (long *)HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>
                           ::operator[]((HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>
                                         *)(pOVar7 + 0x360),(StringName *)&local_68);
          pOVar11 = (Object *)*plVar8;
          if (pOVar11 == pOVar7) {
            if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          else {
            if ((pOVar11 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              pOVar11 = (Object *)0x0;
            }
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
            if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
              StringName::unref();
            }
            pOVar7 = pOVar11;
            if (pOVar11 == (Object *)0x0) {
              local_68 = (Object *)&_LC8;
              local_70 = 0;
              local_60 = 0;
              String::parse_latin1((StrRange *)&local_70);
              local_68 = (Object *)0x10d148;
              local_78 = 0;
              local_60 = 0x31;
              String::parse_latin1((StrRange *)&local_78);
              RTR((String *)&local_68,(String *)&local_78);
              Variant::Variant((Variant *)local_58,(String *)&local_68);
              if (Variant::needs_deinit[*(int *)param_1] != '\0') {
                Variant::_clear_internal();
              }
              pOVar7 = local_68;
              *(int *)param_1 = local_58[0];
              *(undefined8 *)(param_1 + 8) = local_50._0_8_;
              *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
              if (local_68 != (Object *)0x0) {
                LOCK();
                pOVar11 = local_68 + -0x10;
                *(long *)pOVar11 = *(long *)pOVar11 + -1;
                UNLOCK();
                if (*(long *)pOVar11 == 0) {
                  local_68 = (Object *)0x0;
                  Memory::free_static(pOVar7 + -0x10,false);
                }
              }
              lVar13 = local_78;
              if (local_78 != 0) {
                LOCK();
                plVar8 = (long *)(local_78 + -0x10);
                *plVar8 = *plVar8 + -1;
                UNLOCK();
                if (*plVar8 == 0) {
                  local_78 = 0;
                  Memory::free_static((void *)(lVar13 + -0x10),false);
                }
              }
              lVar13 = local_70;
              if (local_70 != 0) {
                LOCK();
                plVar8 = (long *)(local_70 + -0x10);
                *plVar8 = *plVar8 + -1;
                UNLOCK();
                if (*plVar8 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar13 + -0x10),false);
                }
              }
              uVar4 = _LC65;
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
              NodePath::~NodePath((NodePath *)&local_80);
              goto LAB_0010d780;
            }
          }
        }
        GDScript::_new((Variant **)local_58,(int)pOVar7,(CallError *)0x0);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_1 = local_58[0];
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
        if (*(int *)param_4 == 0) {
          pOVar11 = Variant::operator_cast_to_Object_(param_1);
          plVar8 = *(long **)(pOVar11 + 0x98);
          (**(code **)(*plVar8 + 0x90))((String *)&local_68);
          if (local_68 == (Object *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pOVar11 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&GDScript::typeinfo,0);
          local_a8 = pOVar11;
          if (pOVar11 == (Object *)0x0) {
LAB_0010d926:
            cVar5 = RefCounted::unreference();
            pOVar11 = local_68;
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
              Memory::free_static(pOVar11,false);
            }
          }
          else {
            cVar5 = RefCounted::reference();
            local_a8 = (Object *)0x0;
            if (cVar5 != '\0') {
              local_a8 = pOVar11;
            }
            if (local_68 != (Object *)0x0) goto LAB_0010d926;
          }
          for (puVar2 = *(undefined8 **)(local_a8 + 0x280); puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)*puVar2) {
            Variant::Variant((Variant *)local_58,(StringName *)(puVar2 + 2));
            cVar5 = Dictionary::has(local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar5 != '\0') {
              Variant::Variant((Variant *)local_58,(StringName *)(puVar2 + 2));
              pVVar9 = (Variant *)Dictionary::operator[](local_88);
              lVar13 = (long)*(int *)(puVar2 + 3);
              if (lVar13 < 0) {
                lVar10 = plVar8[0xb];
                if (lVar10 != 0) {
LAB_0010dcf5:
                  lVar10 = *(long *)(lVar10 + -8);
                  goto LAB_0010dcf9;
                }
              }
              else {
                lVar10 = plVar8[0xb];
                if (lVar10 != 0) {
                  if (*(long *)(lVar10 + -8) <= lVar13) goto LAB_0010dcf5;
                  CowData<Variant>::_copy_on_write((CowData<Variant> *)(plVar8 + 0xb));
                  Variant::operator=((Variant *)(plVar8[0xb] + lVar13 * 0x18),pVVar9);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  goto LAB_0010d978;
                }
              }
              lVar10 = 0;
LAB_0010dcf9:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar13,lVar10,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
LAB_0010d978:
          }
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_a8), cVar5 != '\0')) {
            (**(code **)(*(long *)local_a8 + 0x140))(local_a8);
            Memory::free_static(local_a8,false);
          }
        }
        else {
          local_70 = 0;
          local_68 = (Object *)&_LC8;
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_70);
          local_68 = (Object *)0x10d180;
          local_78 = 0;
          local_60 = 0x22;
          String::parse_latin1((StrRange *)&local_78);
          RTR((String *)&local_68,(String *)&local_78);
          Variant::Variant((Variant *)local_58,(String *)&local_68);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          pOVar11 = local_68;
          *(int *)param_1 = local_58[0];
          *(undefined8 *)(param_1 + 8) = local_50._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
          if (local_68 != (Object *)0x0) {
            LOCK();
            pOVar1 = local_68 + -0x10;
            *(long *)pOVar1 = *(long *)pOVar1 + -1;
            UNLOCK();
            if (*(long *)pOVar1 == 0) {
              local_68 = (Object *)0x0;
              Memory::free_static(pOVar11 + -0x10,false);
            }
          }
          lVar13 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar8 = (long *)(local_78 + -0x10);
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar13 + -0x10),false);
            }
          }
          lVar13 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar8 = (long *)(local_70 + -0x10);
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar13 + -0x10),false);
            }
          }
        }
        NodePath::~NodePath((NodePath *)&local_80);
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
LAB_0010d780:
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_c8), cVar5 != '\0')) {
        (**(code **)(*(long *)local_c8 + 0x140))(local_c8);
        Memory::free_static(local_c8,false);
      }
    }
  }
  Dictionary::~Dictionary((Dictionary *)local_88);
LAB_0010d79b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OAHashMap<StringName, GDScriptUtilityFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::_insert_with_hash(unsigned int, StringName const&,
   GDScriptUtilityFunctionInfo const&) */

void __thiscall
OAHashMap<StringName,GDScriptUtilityFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
::_insert_with_hash(OAHashMap<StringName,GDScriptUtilityFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                    *this,uint param_1,StringName *param_2,GDScriptUtilityFunctionInfo *param_3)

{
  long *plVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long in_FS_OFFSET;
  long local_150;
  undefined8 local_148;
  long local_140;
  undefined4 local_138;
  undefined1 local_130 [16];
  undefined4 local_120;
  long local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined1 (*local_100 [2]) [16];
  long local_f0;
  undefined4 local_e8;
  long local_d8;
  GDScriptUtilityFunctionInfo local_d0;
  long local_c8;
  long local_c0;
  undefined4 local_b8;
  long local_b0;
  long lStack_a8;
  undefined4 local_a0;
  long local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 (*local_80 [2]) [16];
  long local_70;
  undefined4 local_68;
  long local_58;
  GDScriptUtilityFunctionInfo local_50;
  long local_40;
  
  local_130._8_8_ = local_130._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = (ulong)param_1 % (ulong)*(uint *)(this + 0x18);
  StringName::StringName((StringName *)&local_150,param_2);
  local_148 = *(undefined8 *)param_3;
  local_140 = 0;
  if (*(long *)(param_3 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(param_3 + 8));
  }
  local_138 = *(undefined4 *)(param_3 + 0x10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_130._8_8_;
  local_130 = auVar3 << 0x40;
  if (*(long *)(param_3 + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_130,(CowData *)(param_3 + 0x18));
  }
  StringName::StringName((StringName *)(local_130 + 8),(StringName *)(param_3 + 0x20));
  local_120 = *(undefined4 *)(param_3 + 0x28);
  local_118 = 0;
  if (*(long *)(param_3 + 0x30) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)(param_3 + 0x30));
  }
  local_100[0] = (undefined1 (*) [16])0x0;
  local_110 = *(undefined4 *)(param_3 + 0x38);
  local_108 = *(undefined8 *)(param_3 + 0x40);
  if ((*(undefined8 **)(param_3 + 0x48) != (undefined8 *)0x0) &&
     (puVar16 = (undefined4 *)**(undefined8 **)(param_3 + 0x48), puVar16 != (undefined4 *)0x0)) {
    local_100[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_100[0][1] = 0;
    *local_100[0] = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
        lVar7 = *(long *)(puVar16 + 2);
        *puVar4 = 0;
        puVar4[6] = 0;
        puVar4[10] = 6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
        *puVar4 = *puVar16;
        if (lVar7 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)(puVar16 + 2));
        }
        StringName::operator=((StringName *)(puVar4 + 4),(StringName *)(puVar16 + 4));
        puVar4[6] = puVar16[6];
        if (*(long *)(puVar4 + 8) != *(long *)(puVar16 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)(puVar16 + 8));
        }
        puVar4[10] = puVar16[10];
        lVar7 = *(long *)(*local_100[0] + 8);
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(undefined1 (**) [16])(puVar4 + 0x10) = local_100[0];
        *(long *)(puVar4 + 0xe) = lVar7;
        if (lVar7 != 0) {
          *(undefined4 **)(lVar7 + 0x30) = puVar4;
        }
        lVar7 = *(long *)*local_100[0];
        *(undefined4 **)(*local_100[0] + 8) = puVar4;
        if (lVar7 != 0) break;
        puVar16 = *(undefined4 **)(puVar16 + 0xc);
        *(int *)local_100[0][1] = *(int *)local_100[0][1] + 1;
        *(undefined4 **)*local_100[0] = puVar4;
        if (puVar16 == (undefined4 *)0x0) goto LAB_0010e3b6;
      }
      puVar16 = *(undefined4 **)(puVar16 + 0xc);
      *(int *)local_100[0][1] = *(int *)local_100[0][1] + 1;
    } while (puVar16 != (undefined4 *)0x0);
  }
LAB_0010e3b6:
  local_f0 = 0;
  if (*(long *)(param_3 + 0x58) != 0) {
    CowData<Variant>::_ref((CowData<Variant> *)&local_f0,(CowData *)(param_3 + 0x58));
  }
  local_e8 = *(undefined4 *)(param_3 + 0x60);
  local_d8 = 0;
  if (*(long *)(param_3 + 0x70) != 0) {
    CowData<int>::_ref((CowData<int> *)&local_d8,(CowData *)(param_3 + 0x70));
  }
  lVar14 = *(long *)(this + 0x10);
  local_d0 = param_3[0x78];
  lVar7 = uVar15 * 4;
  puVar13 = (uint *)(lVar14 + lVar7);
  uVar10 = *puVar13;
  if (uVar10 != 0) {
    uVar11 = (ulong)*(uint *)(this + 0x18);
    uVar12 = 0;
    do {
      lVar7 = local_150;
      uVar8 = (uint)((ulong)(uint)(((int)uVar11 + (int)uVar15) - (int)((ulong)uVar10 % uVar11)) %
                    uVar11);
      if (uVar8 < uVar12) {
        plVar9 = (long *)(*(long *)(this + 8) + uVar15 * 8);
        *puVar13 = param_1;
        local_150 = 0;
        local_c8 = lVar7;
        if (*plVar9 != 0) {
          StringName::unref();
          local_150 = *plVar9;
          *plVar9 = 0;
        }
        if (local_c8 != 0) {
          StringName::unref();
          *plVar9 = local_c8;
        }
        local_58 = local_d8;
        local_70 = local_f0;
        local_80[0] = local_100[0];
        local_98 = local_118;
        local_c0 = local_140;
        local_b0 = local_130._0_8_;
        lStack_a8 = local_130._8_8_;
        puVar5 = (undefined8 *)(uVar15 * 0x80 + *(long *)this);
        local_130 = (undefined1  [16])0x0;
        local_c8 = local_148;
        local_140 = 0;
        local_b8 = local_138;
        local_a0 = local_120;
        local_118 = 0;
        local_90 = local_110;
        local_88 = local_108;
        local_100[0] = (undefined1 (*) [16])0x0;
        local_f0 = 0;
        local_68 = local_e8;
        local_d8 = 0;
        local_50 = local_d0;
        local_148 = *puVar5;
        lVar7 = puVar5[1];
        if (lVar7 != 0) {
          puVar5[1] = 0;
          local_140 = lVar7;
        }
        local_138 = *(undefined4 *)(puVar5 + 2);
        if (puVar5[3] != 0) {
          local_130._8_8_ = 0;
          local_130._0_8_ = puVar5[3];
          puVar5[3] = 0;
        }
        if (puVar5[4] != 0) {
          StringName::unref();
          local_130._8_8_ = puVar5[4];
          puVar5[4] = 0;
        }
        lVar14 = local_118;
        local_120 = *(undefined4 *)(puVar5 + 5);
        lVar7 = puVar5[6];
        if (local_118 != lVar7) {
          if (local_118 != 0) {
            LOCK();
            plVar9 = (long *)(local_118 + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              local_118 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
              lVar7 = puVar5[6];
            }
            else {
              lVar7 = puVar5[6];
            }
          }
          puVar5[6] = 0;
          local_118 = lVar7;
        }
        local_110 = *(undefined4 *)(puVar5 + 7);
        local_108 = puVar5[8];
        if ((undefined1 (**) [16])(puVar5 + 9) != local_100) {
          if (local_100[0] != (undefined1 (*) [16])0x0) {
            do {
              pauVar6 = local_100[0];
              pvVar2 = *(void **)*local_100[0];
              if (pvVar2 == (void *)0x0) goto LAB_0010e7d1;
              if (*(undefined1 (**) [16])((long)pvVar2 + 0x40) == local_100[0]) {
                lVar7 = *(long *)((long)pvVar2 + 0x30);
                lVar14 = *(long *)((long)pvVar2 + 0x38);
                *(long *)*local_100[0] = lVar7;
                if (pvVar2 == *(void **)(*local_100[0] + 8)) {
                  *(long *)(*local_100[0] + 8) = lVar14;
                }
                if (lVar14 != 0) {
                  *(long *)(lVar14 + 0x30) = lVar7;
                  lVar7 = *(long *)((long)pvVar2 + 0x30);
                }
                if (lVar7 != 0) {
                  *(long *)(lVar7 + 0x38) = lVar14;
                }
                if (*(long *)((long)pvVar2 + 0x20) != 0) {
                  LOCK();
                  plVar9 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (*plVar9 == 0) {
                    lVar7 = *(long *)((long)pvVar2 + 0x20);
                    *(undefined8 *)((long)pvVar2 + 0x20) = 0;
                    Memory::free_static((void *)(lVar7 + -0x10),false);
                  }
                }
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
                  StringName::unref();
                }
                if (*(long *)((long)pvVar2 + 8) != 0) {
                  LOCK();
                  plVar9 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (*plVar9 == 0) {
                    lVar7 = *(long *)((long)pvVar2 + 8);
                    *(undefined8 *)((long)pvVar2 + 8) = 0;
                    Memory::free_static((void *)(lVar7 + -0x10),false);
                  }
                }
                Memory::free_static(pvVar2,false);
                *(int *)pauVar6[1] = *(int *)pauVar6[1] + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
            } while (*(int *)local_100[0][1] != 0);
            Memory::free_static(local_100[0],false);
          }
LAB_0010e7d1:
          local_100[0] = (undefined1 (*) [16])puVar5[9];
          puVar5[9] = 0;
        }
        if (local_f0 != puVar5[0xb]) {
          CowData<Variant>::_unref((CowData<Variant> *)&local_f0);
          local_f0 = puVar5[0xb];
          puVar5[0xb] = 0;
        }
        lVar14 = local_d8;
        local_e8 = *(undefined4 *)(puVar5 + 0xc);
        lVar7 = puVar5[0xe];
        if (local_d8 != lVar7) {
          if (local_d8 != 0) {
            LOCK();
            plVar9 = (long *)(local_d8 + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              local_d8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
              lVar7 = puVar5[0xe];
            }
            else {
              lVar7 = puVar5[0xe];
            }
          }
          puVar5[0xe] = 0;
          local_d8 = lVar7;
        }
        local_d0 = *(GDScriptUtilityFunctionInfo *)(puVar5 + 0xf);
        *puVar5 = local_c8;
        lVar7 = puVar5[1];
        if (lVar7 != local_c0) {
          if (lVar7 != 0) {
            LOCK();
            plVar9 = (long *)(lVar7 + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              lVar7 = puVar5[1];
              puVar5[1] = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
            else {
              puVar5[1] = 0;
            }
          }
          puVar5[1] = local_c0;
          local_c0 = 0;
        }
        *(undefined4 *)(puVar5 + 2) = local_b8;
        lVar7 = puVar5[3];
        if (lVar7 != local_b0) {
          if (lVar7 != 0) {
            LOCK();
            plVar9 = (long *)(lVar7 + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              lVar7 = puVar5[3];
              puVar5[3] = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
            else {
              puVar5[3] = 0;
            }
          }
          puVar5[3] = local_b0;
          local_b0 = 0;
        }
        if (puVar5[4] != lStack_a8) {
          StringName::unref();
          puVar5[4] = lStack_a8;
          lStack_a8 = 0;
        }
        *(undefined4 *)(puVar5 + 5) = local_a0;
        lVar7 = puVar5[6];
        if (lVar7 != local_98) {
          if (lVar7 != 0) {
            LOCK();
            plVar9 = (long *)(lVar7 + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              lVar7 = puVar5[6];
              puVar5[6] = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
            else {
              puVar5[6] = 0;
            }
          }
          puVar5[6] = local_98;
          local_98 = 0;
        }
        *(undefined4 *)(puVar5 + 7) = local_90;
        *(undefined4 *)(puVar5 + 8) = (undefined4)local_88;
        *(undefined4 *)((long)puVar5 + 0x44) = local_88._4_4_;
        if ((undefined1 (**) [16])(puVar5 + 9) != local_80) {
          plVar9 = (long *)puVar5[9];
          if (plVar9 != (long *)0x0) {
            do {
              pvVar2 = (void *)*plVar9;
              if (pvVar2 == (void *)0x0) goto LAB_0010eac5;
              if (*(long **)((long)pvVar2 + 0x40) == plVar9) {
                lVar7 = *(long *)((long)pvVar2 + 0x30);
                lVar14 = *(long *)((long)pvVar2 + 0x38);
                *plVar9 = lVar7;
                if (pvVar2 == (void *)plVar9[1]) {
                  plVar9[1] = lVar14;
                }
                if (lVar14 != 0) {
                  *(long *)(lVar14 + 0x30) = lVar7;
                  lVar7 = *(long *)((long)pvVar2 + 0x30);
                }
                if (lVar7 != 0) {
                  *(long *)(lVar7 + 0x38) = lVar14;
                }
                if (*(long *)((long)pvVar2 + 0x20) != 0) {
                  LOCK();
                  plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar7 = *(long *)((long)pvVar2 + 0x20);
                    *(undefined8 *)((long)pvVar2 + 0x20) = 0;
                    Memory::free_static((void *)(lVar7 + -0x10),false);
                  }
                }
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
                  StringName::unref();
                }
                if (*(long *)((long)pvVar2 + 8) != 0) {
                  LOCK();
                  plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar7 = *(long *)((long)pvVar2 + 8);
                    *(undefined8 *)((long)pvVar2 + 8) = 0;
                    Memory::free_static((void *)(lVar7 + -0x10),false);
                  }
                }
                Memory::free_static(pvVar2,false);
                *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              plVar9 = (long *)puVar5[9];
            } while ((int)plVar9[2] != 0);
            Memory::free_static(plVar9,false);
            puVar5[9] = 0;
          }
LAB_0010eac5:
          puVar5[9] = local_80[0];
          local_80[0] = (undefined1 (*) [16])0x0;
        }
        if (puVar5[0xb] != local_70) {
          CowData<Variant>::_unref((CowData<Variant> *)(puVar5 + 0xb));
          puVar5[0xb] = local_70;
          local_70 = 0;
        }
        *(undefined4 *)(puVar5 + 0xc) = local_68;
        lVar7 = puVar5[0xe];
        if (lVar7 != local_58) {
          if (lVar7 != 0) {
            LOCK();
            plVar9 = (long *)(lVar7 + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              lVar7 = puVar5[0xe];
              puVar5[0xe] = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
            else {
              puVar5[0xe] = 0;
            }
          }
          puVar5[0xe] = local_58;
          local_58 = 0;
        }
        *(GDScriptUtilityFunctionInfo *)(puVar5 + 0xf) = local_50;
        MethodInfo::~MethodInfo((MethodInfo *)&local_c0);
        uVar11 = (ulong)*(uint *)(this + 0x18);
        lVar14 = *(long *)(this + 0x10);
        uVar12 = uVar8;
        param_1 = uVar10;
      }
      uVar12 = uVar12 + 1;
      uVar15 = (ulong)((int)uVar15 + 1) % uVar11;
      lVar7 = uVar15 * 4;
      puVar13 = (uint *)(lVar14 + lVar7);
      uVar10 = *puVar13;
    } while (uVar10 != 0);
  }
  StringName::StringName((StringName *)(*(long *)(this + 8) + uVar15 * 8),(StringName *)&local_150);
  puVar5 = (undefined8 *)(uVar15 * 0x80 + *(long *)this);
  puVar5[1] = 0;
  *puVar5 = local_148;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 1),(CowData *)&local_140);
  }
  puVar5[3] = 0;
  *(undefined4 *)(puVar5 + 2) = local_138;
  if (local_130._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 3),(CowData *)local_130);
  }
  StringName::StringName((StringName *)(puVar5 + 4),(StringName *)(local_130 + 8));
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 5) = local_120;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 6),(CowData *)&local_118);
  }
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 7) = local_110;
  puVar5[8] = local_108;
  if ((local_100[0] != (undefined1 (*) [16])0x0) &&
     (puVar16 = *(undefined4 **)*local_100[0], puVar16 != (undefined4 *)0x0)) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    puVar5[9] = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
        lVar14 = *(long *)(puVar16 + 2);
        *puVar4 = 0;
        puVar4[6] = 0;
        puVar4[10] = 6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
        *puVar4 = *puVar16;
        if (lVar14 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)(puVar16 + 2));
        }
        StringName::operator=((StringName *)(puVar4 + 4),(StringName *)(puVar16 + 4));
        puVar4[6] = puVar16[6];
        if (*(long *)(puVar4 + 8) != *(long *)(puVar16 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)(puVar16 + 8));
        }
        puVar4[10] = puVar16[10];
        plVar9 = (long *)puVar5[9];
        lVar14 = plVar9[1];
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(long **)(puVar4 + 0x10) = plVar9;
        *(long *)(puVar4 + 0xe) = lVar14;
        if (lVar14 != 0) {
          *(undefined4 **)(lVar14 + 0x30) = puVar4;
        }
        plVar9[1] = (long)puVar4;
        if (*plVar9 != 0) break;
        puVar16 = *(undefined4 **)(puVar16 + 0xc);
        *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
        *plVar9 = (long)puVar4;
        if (puVar16 == (undefined4 *)0x0) goto LAB_0010ed72;
      }
      puVar16 = *(undefined4 **)(puVar16 + 0xc);
      *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
    } while (puVar16 != (undefined4 *)0x0);
  }
LAB_0010ed72:
  puVar5[0xb] = 0;
  if (local_f0 != 0) {
    CowData<Variant>::_ref((CowData<Variant> *)(puVar5 + 0xb),(CowData *)&local_f0);
  }
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xc) = local_e8;
  if (local_d8 != 0) {
    CowData<int>::_ref((CowData<int> *)(puVar5 + 0xe),(CowData *)&local_d8);
  }
  *(GDScriptUtilityFunctionInfo *)(puVar5 + 0xf) = local_d0;
  *(uint *)(*(long *)(this + 0x10) + lVar7) = param_1;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  MethodInfo::~MethodInfo((MethodInfo *)&local_140);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* Vector<StringName>::reverse() */

void __thiscall Vector<StringName>::reverse(Vector<StringName> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = 0;
  do {
    if (*(long *)(lVar3 + -8) / 2 <= lVar5) {
      return;
    }
    CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
    lVar3 = *(long *)(this + 8);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar3 + -8);
    }
    plVar1 = (long *)(lVar3 + lVar5 * 8);
    plVar2 = (long *)(lVar3 + -8 + (lVar4 - lVar5) * 8);
    lVar3 = *plVar1;
    *plVar1 = 0;
    if (*plVar2 != 0) {
      StringName::unref();
      *plVar1 = *plVar2;
      *plVar2 = 0;
    }
    if (lVar3 != 0) {
      StringName::unref();
      *plVar2 = lVar3;
    }
    lVar3 = *(long *)(this + 8);
    lVar5 = lVar5 + 1;
  } while (lVar3 != 0);
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
LAB_0010f4e0:
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
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_0010f4e0;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0010f3ba:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
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
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0010f3ba;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0010f387;
  }
  if (lVar8 == lVar5) {
LAB_0010f45b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010f387:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010f43b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010f45b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010f43b:
  puVar7[-1] = param_1;
  return 0;
}



/* GDScriptUtilityFunctionsDefinitions::inst_to_dict(Variant*, Variant const**, int,
   Callable::CallError&) */

void GDScriptUtilityFunctionsDefinitions::inst_to_dict
               (Variant *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  Object *pOVar8;
  long lVar9;
  Variant *pVVar10;
  long lVar11;
  long in_FS_OFFSET;
  Object *local_d8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 1;
  }
  else if (param_3 == 1) {
    cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_2,0x18);
    if (cVar6 == '\0') {
      local_50 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      uVar5 = _LC84;
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      *(undefined4 *)param_4 = 2;
      *(undefined8 *)(param_4 + 4) = uVar5;
    }
    else if (*(int *)*param_2 == 0) {
      local_50 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    }
    else {
      pOVar8 = Variant::operator_cast_to_Object_(*param_2);
      if (pOVar8 == (Object *)0x0) {
        local_50 = (undefined1  [16])0x0;
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = local_50._0_8_;
        *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      }
      else {
        if ((*(long **)(pOVar8 + 0x98) == (long *)0x0) ||
           (lVar9 = (**(code **)(**(long **)(pOVar8 + 0x98) + 0xb8))(),
           GDScriptLanguage::singleton != lVar9)) {
          local_98 = 0;
          local_88 = (Object *)&_LC8;
          local_80 = 0;
          String::parse_latin1((StrRange *)&local_98);
          local_88 = (Object *)0x10f538;
          local_a0 = 0;
          local_80 = 0x1e;
          String::parse_latin1((StrRange *)&local_a0);
          RTR((String *)&local_88,(String *)&local_a0);
          Variant::Variant((Variant *)local_58,(String *)&local_88);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          pOVar8 = local_88;
          *(int *)param_1 = local_58[0];
          *(undefined8 *)(param_1 + 8) = local_50._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
          if (local_88 != (Object *)0x0) {
            LOCK();
            pOVar1 = local_88 + -0x10;
            *(long *)pOVar1 = *(long *)pOVar1 + -1;
            UNLOCK();
            if (*(long *)pOVar1 == 0) {
              local_88 = (Object *)0x0;
              Memory::free_static(pOVar8 + -0x10,false);
            }
          }
          lVar9 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar2 = (long *)(local_a0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
        }
        else {
          plVar2 = *(long **)(pOVar8 + 0x98);
          (**(code **)(*plVar2 + 0x90))((StringName *)&local_88);
          if (local_88 != (Object *)0x0) {
            local_d8 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&GDScript::typeinfo);
            if (local_d8 == (Object *)0x0) {
              cVar6 = RefCounted::unreference();
              pOVar8 = local_88;
              if (cVar6 != '\0') {
                cVar6 = predelete_handler(local_88);
joined_r0x00110235:
                if (cVar6 != '\0') {
LAB_0010faa0:
                  (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                  Memory::free_static(pOVar8,false);
                  if (local_d8 != (Object *)0x0) goto LAB_0010f6e7;
                }
              }
            }
            else {
              cVar6 = RefCounted::reference();
              if (cVar6 != '\0') {
                if (((local_88 != (Object *)0x0) &&
                    (cVar6 = RefCounted::unreference(), pOVar8 = local_88, cVar6 != '\0')) &&
                   (cVar6 = predelete_handler(local_88), cVar6 != '\0')) goto LAB_0010faa0;
LAB_0010f6e7:
                GDScript::get_script_path();
                lVar9 = *(long *)(local_d8 + 0x260);
                local_90 = 0;
                pOVar8 = local_d8;
                while (lVar9 != 0) {
                  StringName::StringName((StringName *)&local_88,(StringName *)(pOVar8 + 0x6d8));
                  if (local_90 == 0) {
                    lVar9 = 1;
                  }
                  else {
                    lVar9 = *(long *)(local_90 + -8) + 1;
                  }
                  iVar7 = CowData<StringName>::resize<false>((CowData<StringName> *)&local_90,lVar9)
                  ;
                  if (iVar7 == 0) {
                    if (local_90 == 0) {
                      lVar11 = -1;
                      lVar9 = 0;
                    }
                    else {
                      lVar9 = *(long *)(local_90 + -8);
                      lVar11 = lVar9 + -1;
                      if (-1 < lVar11) {
                        CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_90);
                        StringName::operator=
                                  ((StringName *)(local_90 + lVar11 * 8),(StringName *)&local_88);
                        goto LAB_0010f78d;
                      }
                    }
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar9,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    _err_print_error("push_back","./core/templates/vector.h",0x142,
                                     "Condition \"err\" is true. Returning: true",0,0);
                  }
LAB_0010f78d:
                  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  pOVar8 = *(Object **)(pOVar8 + 0x260);
                  lVar9 = *(long *)(pOVar8 + 0x260);
                }
                Vector<StringName>::reverse((Vector<StringName> *)&local_98);
                cVar6 = String::is_resource_file();
                if (cVar6 == '\0') {
                  local_a0 = 0;
                  local_88 = (Object *)&_LC8;
                  local_80 = 0;
                  String::parse_latin1((StrRange *)&local_a0);
                  local_88 = (Object *)0x10f5a6;
                  local_a8 = 0;
                  local_80 = 0x1d;
                  String::parse_latin1((StrRange *)&local_a8);
                  RTR((String *)&local_88,(String *)&local_a8);
                  Variant::Variant((Variant *)local_58,(String *)&local_88);
                  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(int *)param_1 = local_58[0];
                  *(undefined8 *)(param_1 + 8) = local_50._0_8_;
                  *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                  uVar5 = _LC84;
                  *(undefined4 *)param_4 = 2;
                  *(undefined8 *)(param_4 + 4) = uVar5;
                  CowData<StringName>::_unref((CowData<StringName> *)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                  cVar6 = RefCounted::unreference();
                  if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
                    (**(code **)(*(long *)local_d8 + 0x140))(local_d8);
                    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                      Memory::free_static(local_d8,false);
                      return;
                    }
                    goto LAB_00110240;
                  }
                }
                else {
                  local_80 = 0;
                  NodePath::NodePath((NodePath *)&local_a0,(Vector<StringName> *)&local_98,
                                     (StringName *)&local_88,false);
                  CowData<StringName>::_unref((CowData<StringName> *)&local_80);
                  Dictionary::Dictionary((Dictionary *)&local_88);
                  Variant::Variant((Variant *)local_58,(NodePath *)&local_a0);
                  Variant::Variant((Variant *)local_78,"@subpath");
                  pVVar10 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
                  if (pVVar10 != (Variant *)local_58) {
                    if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
                      Variant::_clear_internal();
                    }
                    *(undefined4 *)pVVar10 = 0;
                    *(int *)pVVar10 = local_58[0];
                    *(undefined8 *)(pVVar10 + 8) = local_50._0_8_;
                    *(undefined8 *)(pVVar10 + 0x10) = local_50._8_8_;
                    local_58[0] = 0;
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)local_58,(String *)&local_b0);
                  Variant::Variant((Variant *)local_78,"@path");
                  pVVar10 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
                  if (pVVar10 != (Variant *)local_58) {
                    if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
                      Variant::_clear_internal();
                    }
                    *(undefined4 *)pVVar10 = 0;
                    *(int *)pVVar10 = local_58[0];
                    *(undefined8 *)(pVVar10 + 8) = local_50._0_8_;
                    *(undefined8 *)(pVVar10 + 0x10) = local_50._8_8_;
                    local_58[0] = 0;
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  for (puVar3 = *(undefined8 **)(local_d8 + 0x280); puVar3 != (undefined8 *)0x0;
                      puVar3 = (undefined8 *)*puVar3) {
                    Variant::Variant((Variant *)local_58,(StringName *)(puVar3 + 2));
                    cVar6 = Dictionary::has((Variant *)&local_88);
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (cVar6 == '\0') {
                      lVar11 = (long)*(int *)(puVar3 + 3);
                      lVar9 = plVar2[0xb];
                      if (lVar11 < 0) {
                        if (lVar9 != 0) {
LAB_0010fc55:
                          lVar9 = *(long *)(lVar9 + -8);
                          goto LAB_0010fc59;
                        }
                      }
                      else if (lVar9 != 0) {
                        if (*(long *)(lVar9 + -8) <= lVar11) goto LAB_0010fc55;
                        Variant::Variant((Variant *)local_58,(StringName *)(puVar3 + 2));
                        pVVar10 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
                        Variant::operator=(pVVar10,(Variant *)(lVar9 + lVar11 * 0x18));
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        goto LAB_0010f9b8;
                      }
                      lVar9 = 0;
LAB_0010fc59:
                      _err_print_index_error
                                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar9,"p_index",
                                 "size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar4 = (code *)invalidInstructionException();
                      (*pcVar4)();
                    }
LAB_0010f9b8:
                  }
                  Variant::Variant((Variant *)local_58,(Dictionary *)&local_88);
                  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(int *)param_1 = local_58[0];
                  *(undefined8 *)(param_1 + 8) = local_50._0_8_;
                  *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
                  Dictionary::~Dictionary((Dictionary *)&local_88);
                  NodePath::~NodePath((NodePath *)&local_a0);
                  CowData<StringName>::_unref((CowData<StringName> *)&local_90);
                  lVar9 = local_b0;
                  if (local_b0 != 0) {
                    LOCK();
                    plVar2 = (long *)(local_b0 + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      local_b0 = 0;
                      Memory::free_static((void *)(lVar9 + -0x10),false);
                    }
                  }
                  cVar6 = RefCounted::unreference();
                  if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
                    (**(code **)(*(long *)local_d8 + 0x140))(local_d8);
                    Memory::free_static(local_d8,false);
                  }
                }
                goto LAB_0010fa48;
              }
              if ((local_88 != (Object *)0x0) &&
                 (cVar6 = RefCounted::unreference(), pOVar8 = local_88, cVar6 != '\0')) {
                cVar6 = predelete_handler(local_88);
                local_d8 = (Object *)0x0;
                goto joined_r0x00110235;
              }
            }
          }
          local_98 = 0;
          local_88 = (Object *)&_LC8;
          local_80 = 0;
          String::parse_latin1((StrRange *)&local_98);
          local_a0 = 0;
          local_88 = (Object *)0x10f581;
          local_80 = 0x16;
          String::parse_latin1((StrRange *)&local_a0);
          RTR((String *)&local_88,(String *)&local_a0);
          Variant::Variant((Variant *)local_58,(String *)&local_88);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(int *)param_1 = local_58[0];
          *(undefined8 *)(param_1 + 8) = local_50._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        }
        lVar9 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar2 = (long *)(local_98 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        uVar5 = _LC84;
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar5;
      }
    }
  }
  else {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 1;
  }
LAB_0010fa48:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00110240:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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
/* GDScriptUtilityFunctions::register_functions() */

void GDScriptUtilityFunctions::_GLOBAL__sub_I_register_functions(void)

{
  undefined8 uVar1;
  
  _utility_function_table = (undefined1  [16])0x0;
  DAT_00107490 = (void *)0x0;
  _DAT_00107498 = 0x40;
  uVar1 = Memory::alloc_static(0x200,false);
  DAT_00107488 = uVar1;
  utility_function_table = Memory::alloc_static((_DAT_00107498 & 0xffffffff) << 7,false);
  DAT_00107490 = (void *)Memory::alloc_static((_DAT_00107498 & 0xffffffff) << 2,false);
  if (DAT_00107498 != 0) {
    memset(DAT_00107490,0,(_DAT_00107498 & 0xffffffff) << 2);
  }
  __cxa_atexit(OAHashMap<StringName,GDScriptUtilityFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
               ::~OAHashMap,&utility_function_table,&__dso_handle);
  utility_function_name_table = 0;
  __cxa_atexit(List<StringName,DefaultAllocator>::~List,&utility_function_name_table,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* OAHashMap<StringName, GDScriptUtilityFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::~OAHashMap() */

void __thiscall
OAHashMap<StringName,GDScriptUtilityFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
::~OAHashMap(OAHashMap<StringName,GDScriptUtilityFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
             *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


