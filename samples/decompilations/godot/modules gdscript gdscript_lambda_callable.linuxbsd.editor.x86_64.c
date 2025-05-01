
/* GDScriptLambdaCallable::compare_equal(CallableCustom const*, CallableCustom const*) */

bool GDScriptLambdaCallable::compare_equal(CallableCustom *param_1,CallableCustom *param_2)

{
  return param_2 == param_1;
}



/* GDScriptLambdaCallable::compare_less(CallableCustom const*, CallableCustom const*) */

bool GDScriptLambdaCallable::compare_less(CallableCustom *param_1,CallableCustom *param_2)

{
  return param_1 < param_2;
}



/* GDScriptLambdaCallable::hash() const */

undefined4 __thiscall GDScriptLambdaCallable::hash(GDScriptLambdaCallable *this)

{
  return *(undefined4 *)(this + 0x30);
}



/* GDScriptLambdaCallable::get_compare_equal_func() const */

undefined8 GDScriptLambdaCallable::get_compare_equal_func(void)

{
  return 0x100000;
}



/* GDScriptLambdaCallable::get_compare_less_func() const */

code * GDScriptLambdaCallable::get_compare_less_func(void)

{
  return compare_less;
}



/* GDScriptLambdaCallable::get_object() const */

undefined8 __thiscall GDScriptLambdaCallable::get_object(GDScriptLambdaCallable *this)

{
  return *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
}



/* GDScriptLambdaCallable::get_argument_count(bool&) const */

ulong __thiscall
GDScriptLambdaCallable::get_argument_count(GDScriptLambdaCallable *this,bool *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (uVar1 != 0) {
    lVar2 = *(long *)(this + 0x40);
    uVar3 = *(uint *)(uVar1 + 0xf4);
    *param_1 = true;
    if (lVar2 != 0) {
      uVar3 = uVar3 - *(int *)(lVar2 + -8);
    }
    return (ulong)uVar3;
  }
  *param_1 = false;
  return uVar1;
}



/* GDScriptLambdaSelfCallable::hash() const */

undefined4 __thiscall GDScriptLambdaSelfCallable::hash(GDScriptLambdaSelfCallable *this)

{
  return *(undefined4 *)(this + 0x38);
}



/* GDScriptLambdaSelfCallable::get_compare_equal_func() const */

code * GDScriptLambdaSelfCallable::get_compare_equal_func(void)

{
  return compare_equal;
}



/* GDScriptLambdaSelfCallable::get_compare_less_func() const */

code * GDScriptLambdaSelfCallable::get_compare_less_func(void)

{
  return compare_less;
}



/* GDScriptLambdaSelfCallable::get_object() const */

undefined8 __thiscall GDScriptLambdaSelfCallable::get_object(GDScriptLambdaSelfCallable *this)

{
  return *(undefined8 *)(*(long *)(this + 0x30) + 0x60);
}



/* GDScriptLambdaSelfCallable::get_argument_count(bool&) const */

ulong __thiscall
GDScriptLambdaSelfCallable::get_argument_count(GDScriptLambdaSelfCallable *this,bool *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (uVar1 != 0) {
    lVar2 = *(long *)(this + 0x48);
    uVar3 = *(uint *)(uVar1 + 0xf4);
    *param_1 = true;
    if (lVar2 != 0) {
      uVar3 = uVar3 - *(int *)(lVar2 + -8);
    }
    return (ulong)uVar3;
  }
  *param_1 = false;
  return uVar1;
}



/* GDScriptLambdaSelfCallable::is_valid() const */

char __thiscall GDScriptLambdaSelfCallable::is_valid(GDScriptLambdaSelfCallable *this)

{
  char cVar1;
  
  cVar1 = CallableCustom::is_valid();
  if (cVar1 != '\0') {
    cVar1 = *(long *)(this + 0x10) != 0;
  }
  return cVar1;
}



/* GDScriptLambdaSelfCallable::get_method() const */

void GDScriptLambdaSelfCallable::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(StringName **)(in_RSI + 0x10));
  return;
}



/* GDScriptLambdaSelfCallable::compare_equal(CallableCustom const*, CallableCustom const*) */

bool GDScriptLambdaSelfCallable::compare_equal(CallableCustom *param_1,CallableCustom *param_2)

{
  return param_2 == param_1;
}



/* GDScriptLambdaSelfCallable::compare_less(CallableCustom const*, CallableCustom const*) */

bool GDScriptLambdaSelfCallable::compare_less(CallableCustom *param_1,CallableCustom *param_2)

{
  return param_1 < param_2;
}



/* GDScriptLambdaSelfCallable::get_as_text() const */

void GDScriptLambdaSelfCallable::get_as_text(void)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  bool bVar5;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(StringName **)(in_RSI + 0x10) == (StringName *)0x0) {
    *(undefined8 *)in_RDI = 0;
    local_58 = "<invalid self lambda>";
    local_50 = 0x15;
    String::parse_latin1(in_RDI);
    goto LAB_0010030f;
  }
  local_58 = (char *)0x0;
  StringName::StringName((StringName *)&local_60,*(StringName **)(in_RSI + 0x10));
  pcVar2 = local_58;
  lVar3 = local_60;
  if (local_60 == 0) {
LAB_001001d9:
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else if (StringName::configured != '\0') {
    StringName::unref();
    goto LAB_001001d9;
  }
  if ((char *)lVar3 == pcVar2) {
    *(undefined8 *)in_RDI = 0;
    local_58 = "(anonymous self lambda)";
    local_50 = 0x17;
    String::parse_latin1(in_RDI);
    goto LAB_0010030f;
  }
  local_60 = 0;
  local_58 = "(self lambda)";
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_70,*(StringName **)(in_RSI + 0x10));
  if (local_70 == 0) {
LAB_00100389:
    local_68 = 0;
  }
  else {
    pcVar2 = *(char **)(local_70 + 8);
    local_68 = 0;
    if (pcVar2 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(local_70 + 0x10) + -0x10);
      if (*(long *)(local_70 + 0x10) == 0) goto LAB_00100389;
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00100389;
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
        local_68 = *(long *)(local_70 + 0x10);
      }
    }
    else {
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_68);
    }
  }
  String::operator+((String_conflict *)in_RDI,(String_conflict *)&local_68);
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
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
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
LAB_0010030f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptLambdaCallable::get_as_text() const */

void GDScriptLambdaCallable::get_as_text(void)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  bool bVar5;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(StringName **)(in_RSI + 0x10) == (StringName *)0x0) {
    *(undefined8 *)in_RDI = 0;
    local_58 = "<invalid lambda>";
    local_50 = 0x10;
    String::parse_latin1(in_RDI);
    goto LAB_0010058f;
  }
  local_58 = (char *)0x0;
  StringName::StringName((StringName *)&local_60,*(StringName **)(in_RSI + 0x10));
  pcVar2 = local_58;
  lVar3 = local_60;
  if (local_60 == 0) {
LAB_00100459:
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else if (StringName::configured != '\0') {
    StringName::unref();
    goto LAB_00100459;
  }
  if ((char *)lVar3 == pcVar2) {
    *(undefined8 *)in_RDI = 0;
    local_58 = "(anonymous lambda)";
    local_50 = 0x12;
    String::parse_latin1(in_RDI);
    goto LAB_0010058f;
  }
  local_60 = 0;
  local_58 = "(lambda)";
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_70,*(StringName **)(in_RSI + 0x10));
  if (local_70 == 0) {
LAB_00100609:
    local_68 = 0;
  }
  else {
    pcVar2 = *(char **)(local_70 + 8);
    local_68 = 0;
    if (pcVar2 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(local_70 + 0x10) + -0x10);
      if (*(long *)(local_70 + 0x10) == 0) goto LAB_00100609;
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00100609;
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
        local_68 = *(long *)(local_70 + 0x10);
      }
    }
    else {
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_68);
    }
  }
  String::operator+((String_conflict *)in_RDI,(String_conflict *)&local_68);
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
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
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
LAB_0010058f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptLambdaCallable::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
GDScriptLambdaCallable::call
          (GDScriptLambdaCallable *this,Variant **param_1,int param_2,Variant *param_3,
          CallError *param_4)

{
  long *plVar1;
  bool *pbVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  StrRange *pSVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar14;
  CallState *pCVar15;
  long lVar16;
  StrRange *pSVar17;
  CallError *pCVar18;
  int iVar19;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [8];
  StrRange *local_b0;
  StrRange *local_a8;
  Variant **local_a0;
  uint local_98;
  uint local_94;
  StrRange *local_90;
  StrRange *local_88;
  undefined8 local_80;
  char local_71;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  undefined1 *puVar13;
  
  puVar12 = auStack_b8;
  puVar13 = auStack_b8;
  puVar14 = auStack_b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(this + 0x40);
  ppVVar3 = *(Variant ***)(this + 0x10);
  if (lVar9 == 0) {
    if (ppVVar3 == (Variant **)0x0) goto LAB_00100bc0;
  }
  else {
    pSVar10 = *(StrRange **)(lVar9 + -8);
    if (ppVVar3 == (Variant **)0x0) {
LAB_00100bc0:
      local_50 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_3] != '\0') {
        local_88 = (StrRange *)param_4;
        local_80 = param_3;
        Variant::_clear_internal();
        param_3 = local_80;
        param_4 = (CallError *)local_88;
      }
      *(undefined4 *)param_3 = 0;
      *(undefined8 *)((StrRange *)param_3 + 8) = local_50._0_8_;
      *(undefined8 *)((StrRange *)param_3 + 0x10) = local_50._8_8_;
      *(undefined4 *)param_4 = 5;
      goto LAB_00100a37;
    }
    iVar19 = (int)pSVar10;
    if (0 < iVar19) {
      local_94 = param_2 + iVar19;
      uVar11 = (long)(int)local_94 * 8 + 0x17;
      puVar14 = auStack_b8;
      while (puVar13 != auStack_b8 + -(uVar11 & 0xfffffffffffff000)) {
        puVar12 = puVar14 + -0x1000;
        *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
        puVar13 = puVar14 + -0x1000;
        puVar14 = puVar14 + -0x1000;
      }
      uVar11 = (ulong)((uint)uVar11 & 0xff0);
      lVar5 = -uVar11;
      if (uVar11 != 0) {
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      }
      uVar11 = 0;
      pCVar18 = (CallError *)((ulong)(puVar12 + lVar5 + 0xf) & 0xfffffffffffffff0);
      local_b0 = (StrRange *)param_4;
      local_a8 = (StrRange *)param_3;
      local_a0 = param_1;
      local_98 = param_2;
      local_90 = pSVar10;
      local_80 = (Variant *)&local_71;
      do {
        if (lVar9 == 0) {
          lVar16 = 0;
LAB_0010099b:
          *(undefined8 *)(puVar12 + lVar5 + -8) = 1;
          *(undefined8 *)(puVar12 + lVar5 + -0x10) = 0;
          *(undefined **)(puVar12 + lVar5 + -0x18) = &_LC15;
          *(char **)(puVar12 + lVar5 + -0x20) = "size()";
          *(undefined8 *)(puVar12 + lVar5 + -0x28) = 0x1009d1;
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar11,lVar16,"p_index",
                     *(char **)(puVar12 + lVar5 + -0x20),*(char **)(puVar12 + lVar5 + -0x18),
                     (bool)puVar12[lVar5 + -0x10],(bool)puVar12[lVar5 + -8]);
          *(undefined8 *)(puVar12 + lVar5 + -8) = 0x1009da;
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar16 = *(long *)(lVar9 + -8);
        if (lVar16 <= (long)uVar11) goto LAB_0010099b;
        pbVar2 = (bool *)(lVar9 + uVar11 * 0x18);
        iVar8 = *(int *)pbVar2;
        *(bool **)(pCVar18 + uVar11 * 8) = pbVar2;
        pSVar17 = local_a8;
        uVar7 = local_94;
        pSVar10 = local_88;
        pcVar6 = (char *)local_80;
        if (iVar8 == 0x18) {
          local_71 = '\0';
          *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100799;
          Variant::get_validated_object_with_check(pbVar2);
          pSVar17 = local_a8;
          uVar7 = local_94;
          pSVar10 = local_88;
          pcVar6 = (char *)local_80;
          if (local_71 != '\0') {
            local_70 = 0;
            local_68 = "Lambda capture at index %d was freed. Passed \"null\" instead.";
            local_88 = (StrRange *)&local_70;
            local_60 = 0x3c;
            *(undefined8 *)(puVar12 + lVar5 + -8) = 0x1007d1;
            String::parse_latin1(local_88);
            *(undefined8 *)(puVar12 + lVar5 + -8) = 0x1007df;
            vformat<int>((String_conflict *)&local_68,(int)local_88);
            *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100800;
            _err_print_error(&_LC19,"modules/gdscript/gdscript_lambda_callable.cpp",0x6c,
                             (String_conflict *)&local_68,0,0);
            pcVar6 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = (char *)0x0;
                *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100828;
                Memory::free_static(pcVar6 + -0x10,false);
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
                *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100850;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            pSVar10 = (StrRange *)call(Variant_const**,int,Variant&,Callable::CallError&)::nil;
            if (call(Variant_const**,int,Variant&,Callable::CallError&)::nil == '\0') {
              *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100a7f;
              iVar8 = __cxa_guard_acquire(&call(Variant_const**,int,Variant&,Callable::CallError&)::
                                           nil);
              pSVar10 = (StrRange *)call(Variant_const**,int,Variant&,Callable::CallError&)::nil;
              if (iVar8 != 0) {
                local_88 = (StrRange *)call(Variant_const**,int,Variant&,Callable::CallError&)::nil;
                call(Variant_const**,int,Variant&,Callable::CallError&)::nil._8_16_ =
                     (undefined1  [16])0x0;
                call(Variant_const**,int,Variant&,Callable::CallError&)::nil._0_8_ = 0;
                *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100abe;
                __cxa_atexit(Variant::~Variant,
                             call(Variant_const**,int,Variant&,Callable::CallError&)::nil,
                             &__dso_handle);
                *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100ac6;
                __cxa_guard_release(&call(Variant_const**,int,Variant&,Callable::CallError&)::nil);
                pSVar10 = local_88;
              }
            }
            *(StrRange **)(pCVar18 + uVar11 * 8) = pSVar10;
            pSVar17 = local_a8;
            uVar7 = local_94;
            pSVar10 = local_88;
            pcVar6 = (char *)local_80;
          }
        }
        local_80._0_4_ = uVar7;
        local_88 = pSVar17;
        local_a8 = local_88;
        local_94 = (uint)local_80;
        if (iVar19 - 1 == uVar11) {
          iVar19 = (int)local_90;
          pSVar10 = local_b0;
          if (0 < (int)local_98) {
            local_80._4_4_ = (undefined4)((ulong)pcVar6 >> 0x20);
            *(undefined8 *)(puVar12 + lVar5 + -8) = 0x1008ce;
            local_90 = local_b0;
            memcpy(pCVar18 + (long)iVar19 * 8,local_a0,(ulong)local_98 << 3);
            pSVar10 = local_90;
          }
          ppVVar3 = *(Variant ***)(this + 0x10);
          *(undefined8 *)(puVar12 + lVar5 + -0x10) = 0;
          pCVar15 = (CallState *)(ulong)(uint)local_80;
          *(undefined8 *)(puVar12 + lVar5 + -0x18) = 0x100903;
          local_80 = (Variant *)pSVar10;
          GDScriptFunction::call((GDScriptInstance *)local_58,ppVVar3,0,pCVar18,pCVar15);
          pSVar10 = local_88;
          pSVar17 = (StrRange *)local_80;
          if (Variant::needs_deinit[*(int *)local_88] != '\0') {
            local_88 = (StrRange *)local_80;
            local_80 = (Variant *)pSVar10;
            *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100c05;
            Variant::_clear_internal();
            pSVar10 = (StrRange *)local_80;
            pSVar17 = local_88;
          }
          *(undefined4 *)pSVar10 = local_58[0];
          *(undefined8 *)(pSVar10 + 8) = local_50._0_8_;
          *(undefined8 *)(pSVar10 + 0x10) = local_50._8_8_;
          if (*(int *)pSVar17 == 2) {
            iVar8 = *(int *)(pSVar17 + 4);
            *(int *)(pSVar17 + 4) = iVar8 - iVar19;
            puVar14 = puVar12 + lVar5;
            if (iVar8 - iVar19 < 0) {
              local_70 = 0;
              local_68 = 
              "GDScript bug (please report): Invalid value of lambda capture at index %d.";
              local_60 = 0x4a;
              *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100b15;
              local_80 = (Variant *)pSVar17;
              String::parse_latin1((StrRange *)&local_70);
              *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100b22;
              vformat<int>((String_conflict *)&local_68,(int)(StrRange *)&local_70);
              *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100b43;
              _err_print_error(&_LC19,"modules/gdscript/gdscript_lambda_callable.cpp",0x7c,
                               (String_conflict *)&local_68,0,0);
              pcVar6 = local_68;
              if (local_68 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_68 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_68 = (char *)0x0;
                  *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100b73;
                  Memory::free_static(pcVar6 + -0x10,false);
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
                  *(undefined8 *)(puVar12 + lVar5 + -8) = 0x100ba3;
                  Memory::free_static((void *)(lVar9 + -0x10),false);
                }
              }
              *(undefined4 *)local_80 = 1;
              *(undefined8 *)((StrRange *)local_80 + 4) = 0;
              puVar14 = puVar12 + lVar5;
            }
          }
          else {
            puVar14 = puVar12 + lVar5;
            if (*(int *)pSVar17 - 3U < 2) {
              pSVar10 = pSVar17 + 8;
              *(int *)pSVar10 = *(int *)pSVar10 - iVar19;
              puVar14 = puVar12 + lVar5;
              if (*(int *)pSVar10 < 0) {
                *(undefined8 *)(puVar12 + lVar5 + -8) = 0x10097c;
                local_80 = (Variant *)pSVar17;
                _err_print_error(&_LC19,"modules/gdscript/gdscript_lambda_callable.cpp",0x88,
                                 "GDScript bug (please report): Invalid lambda captures count.",0,0)
                ;
                *(undefined4 *)local_80 = 1;
                *(undefined8 *)((StrRange *)local_80 + 4) = 0;
                puVar14 = puVar12 + lVar5;
              }
            }
          }
          goto LAB_00100a37;
        }
        uVar11 = uVar11 + 1;
        lVar9 = *(long *)(this + 0x40);
        local_88 = pSVar10;
        local_80 = (Variant *)pcVar6;
      } while( true );
    }
  }
  local_80 = param_3;
  GDScriptFunction::call
            ((GDScriptInstance *)local_58,ppVVar3,0,(CallError *)param_1,
             (CallState *)(ulong)(uint)param_2);
  puVar14 = auStack_b8;
  if (Variant::needs_deinit[*(int *)local_80] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)local_80 = local_58[0];
  *(undefined8 *)((StrRange *)local_80 + 8) = local_50._0_8_;
  *(undefined8 *)((StrRange *)local_80 + 0x10) = local_50._8_8_;
LAB_00100a37:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_00100c42;
  __stack_chk_fail();
}



/* GDScriptLambdaSelfCallable::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
GDScriptLambdaSelfCallable::call
          (GDScriptLambdaSelfCallable *this,Variant **param_1,int param_2,Variant *param_3,
          CallError *param_4)

{
  bool *pbVar1;
  uint uVar2;
  long *plVar3;
  Variant **ppVVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  CallError *pCVar8;
  CallError *__src;
  char *pcVar9;
  int iVar10;
  long lVar11;
  StrRange *pSVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  CallError *pCVar18;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [8];
  CallError *local_b0;
  StrRange *local_a8;
  CallError *local_a0;
  uint local_98;
  uint local_94;
  StrRange *local_90;
  StrRange *local_88;
  StrRange *local_80;
  char local_71;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  puVar16 = auStack_b8;
  puVar15 = auStack_b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = *(long **)(*(long *)(this + 0x30) + 0x98);
  if (plVar3 != (long *)0x0) {
    if (*(code **)(*plVar3 + 0xb8) == PlaceHolderScriptInstance::get_language) {
      lVar11 = plVar3[0xf];
    }
    else {
      local_88 = (StrRange *)CONCAT44(local_88._4_4_,param_2);
      local_90 = (StrRange *)param_3;
      local_80 = (StrRange *)param_1;
      lVar11 = (**(code **)(*plVar3 + 0xb8))();
      param_1 = (Variant **)local_80;
      param_3 = (Variant *)local_90;
      param_2 = (uint)local_88;
    }
    if (lVar11 == GDScriptLanguage::singleton) {
      lVar11 = *(long *)(this + 0x48);
      ppVVar4 = *(Variant ***)(this + 0x10);
      if (lVar11 == 0) {
        if (ppVVar4 == (Variant **)0x0) goto LAB_00101100;
      }
      else {
        pSVar12 = *(StrRange **)(lVar11 + -8);
        if (ppVVar4 == (Variant **)0x0) {
LAB_00101100:
          local_50 = (undefined1  [16])0x0;
          if (Variant::needs_deinit[*(int *)param_3] != '\0') {
            local_80 = (StrRange *)param_3;
            Variant::_clear_internal();
            param_3 = (Variant *)local_80;
          }
          *(undefined4 *)param_3 = 0;
          *(undefined8 *)((StrRange *)param_3 + 8) = local_50._0_8_;
          *(undefined8 *)((StrRange *)param_3 + 0x10) = local_50._8_8_;
          *(undefined4 *)param_4 = 5;
          goto LAB_00100ce2;
        }
        iVar17 = (int)pSVar12;
        if (0 < iVar17) {
          uVar14 = (long)(param_2 + iVar17) * 8 + 0x17;
          for (; puVar16 != auStack_b8 + -(uVar14 & 0xfffffffffffff000); puVar16 = puVar16 + -0x1000
              ) {
            *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
          }
          uVar14 = (ulong)((uint)uVar14 & 0xff0);
          lVar7 = -uVar14;
          if (uVar14 != 0) {
            *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
          }
          local_b0 = param_4;
          local_98 = param_2;
          pCVar18 = (CallError *)((ulong)(puVar16 + lVar7 + 0xf) & 0xfffffffffffffff0);
          local_80 = (StrRange *)&local_71;
          local_90 = pSVar12;
          local_94 = param_2 + iVar17;
          local_a0 = (CallError *)param_1;
          local_a8 = (StrRange *)param_3;
          uVar14 = 0;
          do {
            if (lVar11 == 0) {
              lVar13 = 0;
LAB_00100efa:
              *(undefined8 *)(puVar16 + lVar7 + -8) = 1;
              *(undefined8 *)(puVar16 + lVar7 + -0x10) = 0;
              *(undefined **)(puVar16 + lVar7 + -0x18) = &_LC15;
              *(char **)(puVar16 + lVar7 + -0x20) = "size()";
              *(undefined8 *)(puVar16 + lVar7 + -0x28) = 0x100f33;
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar13,"p_index",
                         *(char **)(puVar16 + lVar7 + -0x20),*(char **)(puVar16 + lVar7 + -0x18),
                         (bool)puVar16[lVar7 + -0x10],(bool)puVar16[lVar7 + -8]);
              *(undefined8 *)(puVar16 + lVar7 + -8) = 0x100f3c;
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            lVar13 = *(long *)(lVar11 + -8);
            if (lVar13 <= (long)uVar14) goto LAB_00100efa;
            pbVar1 = (bool *)(lVar11 + uVar14 * 0x18);
            iVar10 = *(int *)pbVar1;
            *(bool **)(pCVar18 + uVar14 * 8) = pbVar1;
            if (iVar10 == 0x18) {
              local_71 = '\0';
              *(undefined8 *)(puVar16 + lVar7 + -8) = 0x100e18;
              Variant::get_validated_object_with_check(pbVar1);
              if (local_71 != '\0') {
                local_70 = 0;
                local_68 = "Lambda capture at index %d was freed. Passed \"null\" instead.";
                local_60 = 0x3c;
                local_88 = (StrRange *)&local_70;
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x100e50;
                String::parse_latin1((StrRange *)&local_70);
                pSVar12 = local_88;
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x100e5e;
                vformat<int>((String_conflict *)&local_68,(int)pSVar12);
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x100e7f;
                _err_print_error(&_LC19,"modules/gdscript/gdscript_lambda_callable.cpp",0xf0,
                                 (String_conflict *)&local_68,0,0);
                pcVar9 = local_68;
                if (local_68 != (char *)0x0) {
                  LOCK();
                  plVar3 = (long *)(local_68 + -0x10);
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                    local_68 = (char *)0x0;
                    *(undefined8 *)(puVar16 + lVar7 + -8) = 0x1010f7;
                    Memory::free_static(pcVar9 + -0x10,false);
                  }
                }
                lVar11 = local_70;
                if (local_70 != 0) {
                  LOCK();
                  plVar3 = (long *)(local_70 + -0x10);
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                    local_70 = 0;
                    *(undefined8 *)(puVar16 + lVar7 + -8) = 0x1010d7;
                    Memory::free_static((void *)(lVar11 + -0x10),false);
                  }
                }
                pSVar12 = (StrRange *)call(Variant_const**,int,Variant&,Callable::CallError&)::nil;
                if (call(Variant_const**,int,Variant&,Callable::CallError&)::nil == '\0') {
                  *(undefined8 *)(puVar16 + lVar7 + -8) = 0x10114f;
                  iVar10 = __cxa_guard_acquire(&call(Variant_const**,int,Variant&,Callable::CallError&)
                                                ::nil);
                  pSVar12 = (StrRange *)call(Variant_const**,int,Variant&,Callable::CallError&)::nil
                  ;
                  if (iVar10 != 0) {
                    local_88 = (StrRange *)
                               call(Variant_const**,int,Variant&,Callable::CallError&)::nil;
                    call(Variant_const**,int,Variant&,Callable::CallError&)::nil._8_16_ =
                         (undefined1  [16])0x0;
                    call(Variant_const**,int,Variant&,Callable::CallError&)::nil._0_8_ = 0;
                    *(undefined8 *)(puVar16 + lVar7 + -8) = 0x10118e;
                    __cxa_atexit(Variant::~Variant,
                                 call(Variant_const**,int,Variant&,Callable::CallError&)::nil,
                                 &__dso_handle);
                    *(undefined8 *)(puVar16 + lVar7 + -8) = 0x101196;
                    __cxa_guard_release(&call(Variant_const**,int,Variant&,Callable::CallError&)::
                                         nil);
                    pSVar12 = local_88;
                  }
                }
                *(StrRange **)(pCVar18 + uVar14 * 8) = pSVar12;
              }
            }
            __src = local_a0;
            pCVar8 = local_b0;
            if (iVar17 - 1 == uVar14) {
              uVar14 = (ulong)local_98;
              iVar17 = (int)local_90;
              pSVar12 = local_a8;
              uVar2 = local_94;
              if (0 < (int)local_98) {
                local_88 = local_a8;
                local_80 = (StrRange *)CONCAT44(local_80._4_4_,local_94);
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x100f85;
                memcpy(pCVar18 + (long)iVar17 * 8,__src,uVar14 << 3);
                pSVar12 = local_88;
                uVar2 = (uint)local_80;
              }
              ppVVar4 = *(Variant ***)(this + 0x10);
              uVar5 = *(undefined8 *)(*(long *)(this + 0x30) + 0x98);
              local_80 = pSVar12;
              *(undefined8 *)(puVar16 + lVar7 + -0x10) = 0;
              *(undefined8 *)(puVar16 + lVar7 + -0x18) = 0x100fb5;
              GDScriptFunction::call
                        ((GDScriptInstance *)local_58,ppVVar4,(int)uVar5,pCVar18,
                         (CallState *)(ulong)uVar2);
              if (Variant::needs_deinit[*(int *)local_80] != '\0') {
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x10127a;
                Variant::_clear_internal();
              }
              *(undefined4 *)local_80 = local_58[0];
              *(undefined8 *)(local_80 + 8) = local_50._0_8_;
              *(undefined8 *)(local_80 + 0x10) = local_50._8_8_;
              if (*(int *)pCVar8 == 2) {
                iVar10 = *(int *)(pCVar8 + 4);
                *(int *)(pCVar8 + 4) = iVar10 - iVar17;
                puVar15 = puVar16 + lVar7;
                if (-1 < iVar10 - iVar17) goto LAB_00100ce2;
                local_70 = 0;
                local_60 = 0x4a;
                local_68 = 
                "GDScript bug (please report): Invalid value of lambda capture at index %d.";
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x1011e3;
                String::parse_latin1((StrRange *)&local_70);
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x1011f0;
                vformat<int>((String_conflict *)&local_68,(int)(StrRange *)&local_70);
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x101211;
                _err_print_error(&_LC19,"modules/gdscript/gdscript_lambda_callable.cpp",0x100,
                                 (String_conflict *)&local_68,0,0);
                pcVar9 = local_68;
                if (local_68 != (char *)0x0) {
                  LOCK();
                  plVar3 = (long *)(local_68 + -0x10);
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                    local_68 = (char *)0x0;
                    *(undefined8 *)(puVar16 + lVar7 + -8) = 0x101239;
                    Memory::free_static(pcVar9 + -0x10,false);
                  }
                }
                lVar11 = local_70;
                if (local_70 != 0) {
                  LOCK();
                  plVar3 = (long *)(local_70 + -0x10);
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                    local_70 = 0;
                    *(undefined8 *)(puVar16 + lVar7 + -8) = 0x101269;
                    Memory::free_static((void *)(lVar11 + -0x10),false);
                  }
                }
              }
              else {
                puVar15 = puVar16 + lVar7;
                if (1 < *(int *)pCVar8 - 3U) goto LAB_00100ce2;
                pCVar18 = pCVar8 + 8;
                *(int *)pCVar18 = *(int *)pCVar18 - iVar17;
                puVar15 = puVar16 + lVar7;
                if (-1 < *(int *)pCVar18) goto LAB_00100ce2;
                *(undefined8 *)(puVar16 + lVar7 + -8) = 0x101028;
                _err_print_error(&_LC19,"modules/gdscript/gdscript_lambda_callable.cpp",0x10c,
                                 "GDScript bug (please report): Invalid lambda captures count.",0,0)
                ;
              }
              *(int *)pCVar8 = 1;
              *(undefined8 *)(pCVar8 + 4) = 0;
              puVar15 = puVar16 + lVar7;
              goto LAB_00100ce2;
            }
            lVar11 = *(long *)(this + 0x48);
            uVar14 = uVar14 + 1;
          } while( true );
        }
      }
      local_80 = (StrRange *)param_3;
      GDScriptFunction::call
                ((GDScriptInstance *)local_58,ppVVar4,
                 (int)*(undefined8 *)(*(long *)(this + 0x30) + 0x98),(CallError *)param_1,
                 (CallState *)(ulong)(uint)param_2);
      if (Variant::needs_deinit[*(int *)local_80] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)local_80 = local_58[0];
      *(undefined8 *)(local_80 + 8) = local_50._0_8_;
      *(undefined8 *)(local_80 + 0x10) = local_50._8_8_;
      puVar15 = auStack_b8;
      goto LAB_00100ce2;
    }
  }
  _err_print_error(&_LC19,"modules/gdscript/gdscript_lambda_callable.cpp",0xd9,
                   "Trying to call a lambda with an invalid instance.",0,0);
  *(undefined4 *)param_4 = 5;
  puVar15 = auStack_b8;
LAB_00100ce2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_001012ae;
  __stack_chk_fail();
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



/* GDScriptLambdaCallable::GDScriptLambdaCallable(Ref<GDScript>, GDScriptFunction*, Vector<Variant>
   const&) */

void __thiscall
GDScriptLambdaCallable::GDScriptLambdaCallable
          (GDScriptLambdaCallable *this,long *param_2,GDScriptFunction *param_3,long param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  
  CallableCustom::CallableCustom((CallableCustom *)this);
  *(undefined ***)this = &PTR_hash_00102168;
  GDScript::UpdatableFuncPtr::UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10),param_3);
  *(undefined8 *)(this + 0x28) = 0;
  lVar1 = *param_2;
  *(undefined8 *)(this + 0x40) = 0;
  if (lVar1 == 0) {
    uVar6 = 0x99;
    pcVar4 = "Condition \"p_script.is_null()\" is true.";
  }
  else {
    if (param_3 != (GDScriptFunction *)0x0) {
      *(long *)(this + 0x28) = lVar1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x28) = 0;
      }
      if (*(long *)(this + 0x40) != *(long *)(param_4 + 8)) {
        CowData<Variant>::_ref((CowData<Variant> *)(this + 0x40),(CowData *)(param_4 + 8));
      }
      iVar5 = (int)((ulong)this >> 0x20);
      uVar3 = ((int)this * 0x16a88000 | (uint)((int)this * -0x3361d2af) >> 0x11) * 0x1b873593 ^
              0x7f07c65;
      uVar3 = (iVar5 * 0x16a88000 | (uint)(iVar5 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
              (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
      *(uint *)(this + 0x30) = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + -0x19ab949c;
      return;
    }
    uVar6 = 0x9a;
    pcVar4 = "Parameter \"p_function\" is null.";
  }
  _err_print_error("GDScriptLambdaCallable","modules/gdscript/gdscript_lambda_callable.cpp",uVar6,
                   pcVar4,0,0);
  return;
}



/* GDScriptLambdaSelfCallable::GDScriptLambdaSelfCallable(Ref<RefCounted>, GDScriptFunction*,
   Vector<Variant> const&) */

void __thiscall
GDScriptLambdaSelfCallable::GDScriptLambdaSelfCallable
          (GDScriptLambdaSelfCallable *this,long *param_2,GDScriptFunction *param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  CallableCustom::CallableCustom((CallableCustom *)this);
  *(undefined ***)this = &PTR_hash_001021f8;
  GDScript::UpdatableFuncPtr::UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10),param_3);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  if (*param_2 == 0) {
    uVar5 = 0x11d;
    pcVar3 = "Condition \"p_self.is_null()\" is true.";
  }
  else {
    if (param_3 != (GDScriptFunction *)0x0) {
      *(long *)(this + 0x28) = *param_2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)(this + 0x28) = 0;
      }
      *(long *)(this + 0x30) = *param_2;
      if (*(long *)(this + 0x48) != *(long *)(param_4 + 8)) {
        CowData<Variant>::_ref((CowData<Variant> *)(this + 0x48),(CowData *)(param_4 + 8));
      }
      iVar4 = (int)((ulong)this >> 0x20);
      uVar2 = ((int)this * 0x16a88000 | (uint)((int)this * -0x3361d2af) >> 0x11) * 0x1b873593 ^
              0x7f07c65;
      uVar2 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
              (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
      *(uint *)(this + 0x38) = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + -0x19ab949c;
      return;
    }
    uVar5 = 0x11e;
    pcVar3 = "Parameter \"p_function\" is null.";
  }
  _err_print_error("GDScriptLambdaSelfCallable","modules/gdscript/gdscript_lambda_callable.cpp",
                   uVar5,pcVar3,0,0);
  return;
}



/* GDScriptLambdaSelfCallable::GDScriptLambdaSelfCallable(Object*, GDScriptFunction*,
   Vector<Variant> const&) */

void __thiscall
GDScriptLambdaSelfCallable::GDScriptLambdaSelfCallable
          (GDScriptLambdaSelfCallable *this,Object *param_1,GDScriptFunction *param_2,
          Vector *param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  CallableCustom::CallableCustom((CallableCustom *)this);
  *(undefined ***)this = &PTR_hash_001021f8;
  GDScript::UpdatableFuncPtr::UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10),param_2);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  if (param_1 == (Object *)0x0) {
    uVar5 = 0x128;
    pcVar3 = "Parameter \"p_self\" is null.";
  }
  else {
    if (param_2 != (GDScriptFunction *)0x0) {
      lVar1 = *(long *)(param_3 + 8);
      *(Object **)(this + 0x30) = param_1;
      if (lVar1 != 0) {
        CowData<Variant>::_ref((CowData<Variant> *)(this + 0x48),(CowData *)(param_3 + 8));
      }
      iVar4 = (int)((ulong)this >> 0x20);
      uVar2 = ((int)this * 0x16a88000 | (uint)((int)this * -0x3361d2af) >> 0x11) * 0x1b873593 ^
              0x7f07c65;
      uVar2 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
              (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
      *(uint *)(this + 0x38) = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + -0x19ab949c;
      return;
    }
    uVar5 = 0x129;
    pcVar3 = "Parameter \"p_function\" is null.";
  }
  _err_print_error("GDScriptLambdaSelfCallable","modules/gdscript/gdscript_lambda_callable.cpp",
                   uVar5,pcVar3,0,0);
  return;
}



/* Variant::~Variant() */

void __thiscall Variant::~Variant(Variant *this)

{
  if (needs_deinit[*(int *)this] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* PlaceHolderScriptInstance::get_language() */

undefined8 __thiscall PlaceHolderScriptInstance::get_language(PlaceHolderScriptInstance *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* WARNING: Removing unreachable block (ram,0x00101978) */
/* WARNING: Removing unreachable block (ram,0x00101aa8) */
/* WARNING: Removing unreachable block (ram,0x00101c70) */
/* WARNING: Removing unreachable block (ram,0x00101ab4) */
/* WARNING: Removing unreachable block (ram,0x00101abe) */
/* WARNING: Removing unreachable block (ram,0x00101c50) */
/* WARNING: Removing unreachable block (ram,0x00101aca) */
/* WARNING: Removing unreachable block (ram,0x00101ad4) */
/* WARNING: Removing unreachable block (ram,0x00101c30) */
/* WARNING: Removing unreachable block (ram,0x00101ae0) */
/* WARNING: Removing unreachable block (ram,0x00101aea) */
/* WARNING: Removing unreachable block (ram,0x00101c10) */
/* WARNING: Removing unreachable block (ram,0x00101af6) */
/* WARNING: Removing unreachable block (ram,0x00101b00) */
/* WARNING: Removing unreachable block (ram,0x00101bf0) */
/* WARNING: Removing unreachable block (ram,0x00101b0c) */
/* WARNING: Removing unreachable block (ram,0x00101b16) */
/* WARNING: Removing unreachable block (ram,0x00101bd0) */
/* WARNING: Removing unreachable block (ram,0x00101b22) */
/* WARNING: Removing unreachable block (ram,0x00101b2c) */
/* WARNING: Removing unreachable block (ram,0x00101bb0) */
/* WARNING: Removing unreachable block (ram,0x00101b34) */
/* WARNING: Removing unreachable block (ram,0x00101b4a) */
/* WARNING: Removing unreachable block (ram,0x00101b56) */
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



/* GDScriptLambdaCallable::~GDScriptLambdaCallable() */

void __thiscall GDScriptLambdaCallable::~GDScriptLambdaCallable(GDScriptLambdaCallable *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR_hash_00102168;
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        GDScript::UpdatableFuncPtr::~UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10));
        return;
      }
    }
  }
  GDScript::UpdatableFuncPtr::~UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10));
  return;
}



/* GDScriptLambdaSelfCallable::~GDScriptLambdaSelfCallable() */

void __thiscall
GDScriptLambdaSelfCallable::~GDScriptLambdaSelfCallable(GDScriptLambdaSelfCallable *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR_hash_001021f8;
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x48));
  if (*(long *)(this + 0x28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        GDScript::UpdatableFuncPtr::~UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10));
        return;
      }
    }
  }
  GDScript::UpdatableFuncPtr::~UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10));
  return;
}



/* GDScriptLambdaCallable::~GDScriptLambdaCallable() */

void __thiscall GDScriptLambdaCallable::~GDScriptLambdaCallable(GDScriptLambdaCallable *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR_hash_00102168;
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  GDScript::UpdatableFuncPtr::~UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10));
  operator_delete(this,0x48);
  return;
}



/* GDScriptLambdaSelfCallable::~GDScriptLambdaSelfCallable() */

void __thiscall
GDScriptLambdaSelfCallable::~GDScriptLambdaSelfCallable(GDScriptLambdaSelfCallable *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR_hash_001021f8;
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x48));
  if (*(long *)(this + 0x28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  GDScript::UpdatableFuncPtr::~UpdatableFuncPtr((UpdatableFuncPtr *)(this + 0x10));
  operator_delete(this,0x50);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptLambdaCallable::~GDScriptLambdaCallable() */

void __thiscall GDScriptLambdaCallable::~GDScriptLambdaCallable(GDScriptLambdaCallable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::~Variant() */

void __thiscall Variant::~Variant(Variant *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptLambdaSelfCallable::~GDScriptLambdaSelfCallable() */

void __thiscall
GDScriptLambdaSelfCallable::~GDScriptLambdaSelfCallable(GDScriptLambdaSelfCallable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


