
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



/* EngineDebugger::has_profiler(StringName const&) */

undefined8 EngineDebugger::has_profiler(StringName *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((profilers._8_8_ == 0) || (profilers._44_4_ == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)profilers._40_4_ * 8);
  if (*(long *)param_1 == 0) {
    uVar11 = StringName::get_empty_hash();
  }
  else {
    uVar11 = *(uint *)(*(long *)param_1 + 0x20);
  }
  uVar15 = CONCAT44(0,uVar1);
  if (uVar11 == 0) {
    uVar11 = 1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (ulong)uVar11 * lVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  lVar13 = SUB168(auVar3 * auVar7,8);
  uVar14 = *(uint *)(profilers._16_8_ + lVar13 * 4);
  iVar12 = SUB164(auVar3 * auVar7,8);
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      if ((uVar11 == uVar14) &&
         (*(long *)(*(long *)(profilers._8_8_ + lVar13 * 8) + 0x10) == *(long *)param_1)) {
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      lVar13 = SUB168(auVar4 * auVar8,8);
      uVar14 = *(uint *)(profilers._16_8_ + lVar13 * 4);
      iVar12 = SUB164(auVar4 * auVar8,8);
    } while ((uVar14 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
            auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
            auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
  }
  return 0;
}



/* EngineDebugger::has_capture(StringName const&) */

undefined8 EngineDebugger::has_capture(StringName *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((captures._8_8_ == 0) || (captures._44_4_ == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)captures._40_4_ * 4);
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)captures._40_4_ * 8);
  if (*(long *)param_1 == 0) {
    uVar11 = StringName::get_empty_hash();
  }
  else {
    uVar11 = *(uint *)(*(long *)param_1 + 0x20);
  }
  uVar15 = CONCAT44(0,uVar1);
  if (uVar11 == 0) {
    uVar11 = 1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (ulong)uVar11 * lVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  lVar13 = SUB168(auVar3 * auVar7,8);
  uVar14 = *(uint *)(captures._16_8_ + lVar13 * 4);
  iVar12 = SUB164(auVar3 * auVar7,8);
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      if ((uVar11 == uVar14) &&
         (*(long *)(*(long *)(captures._8_8_ + lVar13 * 8) + 0x10) == *(long *)param_1)) {
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      lVar13 = SUB168(auVar4 * auVar8,8);
      uVar14 = *(uint *)(captures._16_8_ + lVar13 * 4);
      iVar12 = SUB164(auVar4 * auVar8,8);
    } while ((uVar14 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
            auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
            auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
  }
  return 0;
}



/* EngineDebugger::iteration(unsigned long, unsigned long, unsigned long, double) */

void __thiscall
EngineDebugger::iteration
          (EngineDebugger *this,ulong param_1,ulong param_2,ulong param_3,double param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = _LC0;
  dVar3 = (double)param_2 / _LC0;
  *(double *)(this + 8) = (double)param_1 / _LC0;
  *(double *)(this + 0x10) = dVar3;
  puVar1 = (undefined8 *)profilers._24_8_;
  *(double *)(this + 0x18) = (double)param_3 / dVar2;
  *(double *)(this + 0x20) = param_4;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    if ((*(char *)(puVar1 + 7) != '\0') && ((code *)puVar1[5] != (code *)0x0)) {
      (*(code *)puVar1[5])
                (*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18)
                 ,*(undefined8 *)(this + 0x20),puVar1[6]);
    }
  }
  if (*(code **)*singleton == poll_events) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001003fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*singleton)(singleton,1);
  return;
}



/* EngineDebugger::unregister_message_capture(StringName const&) */

void EngineDebugger::unregister_message_capture(StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
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
  undefined8 uVar36;
  undefined8 uVar37;
  char *pcVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  ulong uVar43;
  long *plVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((captures._8_8_ != 0) && (captures._44_4_ != 0)) {
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)(uint)captures._40_4_ * 4);
    uVar43 = CONCAT44(0,uVar5);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)captures._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar39 = StringName::get_empty_hash();
    }
    else {
      uVar39 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar39 == 0) {
      uVar39 = 1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar39 * lVar6;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar43;
    lVar42 = SUB168(auVar8 * auVar22,8);
    uVar41 = *(uint *)(captures._16_8_ + lVar42 * 4);
    iVar40 = SUB164(auVar8 * auVar22,8);
    if (uVar41 != 0) {
      uVar46 = 0;
      do {
        if ((uVar39 == uVar41) &&
           (lVar42 = *(long *)(*(long *)(captures._8_8_ + lVar42 * 8) + 0x10),
           lVar42 == *(long *)param_1)) {
          if ((captures._8_8_ == 0) || (captures._44_4_ == 0)) goto LAB_00100732;
          uVar5 = *(uint *)(hash_table_size_primes + (ulong)(uint)captures._40_4_ * 4);
          uVar43 = CONCAT44(0,uVar5);
          lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)captures._40_4_ * 8);
          if (lVar42 == 0) {
            uVar39 = StringName::get_empty_hash();
          }
          else {
            uVar39 = *(uint *)(lVar42 + 0x20);
          }
          uVar37 = captures._16_8_;
          uVar36 = captures._8_8_;
          if (uVar39 == 0) {
            uVar39 = 1;
          }
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar39 * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar43;
          lVar42 = SUB168(auVar12 * auVar26,8);
          uVar41 = *(uint *)(captures._16_8_ + lVar42 * 4);
          uVar46 = SUB164(auVar12 * auVar26,8);
          if (uVar41 == 0) goto LAB_00100732;
          uVar45 = 0;
          goto LAB_001005c9;
        }
        uVar46 = uVar46 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(iVar40 + 1) * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar43;
        lVar42 = SUB168(auVar9 * auVar23,8);
        uVar41 = *(uint *)(captures._16_8_ + lVar42 * 4);
        iVar40 = SUB164(auVar9 * auVar23,8);
      } while ((uVar41 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar41 * lVar6, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar43, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar5 + iVar40) - SUB164(auVar10 * auVar24,8)) * lVar6,
              auVar25._8_8_ = 0, auVar25._0_8_ = uVar43, uVar46 <= SUB164(auVar11 * auVar25,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,param_1);
  local_50 = 0x1d;
  local_58 = "Capture not registered: \'%s\'.";
  local_68 = 0;
  String::parse_latin1((StrRange *)&local_68);
  vformat<StringName>(&local_58,&local_68,(StringName *)&local_60);
  _err_print_error("unregister_message_capture","core/debugger/engine_debugger.cpp",0x45,
                   "Condition \"!captures.has(p_name)\" is true.",&local_58,0,0);
  pcVar38 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)(local_58 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar38 + -0x10,false);
    }
  }
  lVar6 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar4 = (long *)(local_68 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  goto LAB_00100732;
  while( true ) {
    uVar45 = uVar45 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar46 + 1) * lVar6;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar43;
    lVar42 = SUB168(auVar13 * auVar27,8);
    uVar41 = *(uint *)(captures._16_8_ + lVar42 * 4);
    uVar46 = SUB164(auVar13 * auVar27,8);
    if ((uVar41 == 0) ||
       (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar41 * lVar6, auVar28._8_8_ = 0,
       auVar28._0_8_ = uVar43, auVar15._8_8_ = 0,
       auVar15._0_8_ = (ulong)((uVar5 + uVar46) - SUB164(auVar14 * auVar28,8)) * lVar6,
       auVar29._8_8_ = 0, auVar29._0_8_ = uVar43, SUB164(auVar15 * auVar29,8) < uVar45)) break;
LAB_001005c9:
    if ((uVar39 == uVar41) &&
       (*(long *)(*(long *)(captures._8_8_ + lVar42 * 8) + 0x10) == *(long *)param_1)) {
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)captures._40_4_ * 8);
      uVar5 = *(uint *)(hash_table_size_primes + (ulong)(uint)captures._40_4_ * 4);
      uVar43 = CONCAT44(0,uVar5);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)(uVar46 + 1) * lVar6;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar43;
      lVar42 = SUB168(auVar16 * auVar30,8);
      puVar47 = (uint *)(captures._16_8_ + lVar42 * 4);
      uVar41 = SUB164(auVar16 * auVar30,8);
      uVar39 = *puVar47;
      if ((uVar39 == 0) ||
         (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar39 * lVar6, auVar31._8_8_ = 0,
         auVar31._0_8_ = uVar43, auVar18._8_8_ = 0,
         auVar18._0_8_ = (ulong)((uVar5 + uVar41) - SUB164(auVar17 * auVar31,8)) * lVar6,
         auVar32._8_8_ = 0, auVar32._0_8_ = uVar43, uVar45 = uVar46,
         SUB164(auVar18 * auVar32,8) == 0)) goto LAB_001006a8;
      goto LAB_00100666;
    }
  }
  goto LAB_00100732;
  while (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar39 * lVar6, auVar33._8_8_ = 0,
        auVar33._0_8_ = uVar43, auVar20._8_8_ = 0,
        auVar20._0_8_ = (ulong)((uVar41 + uVar5) - SUB164(auVar19 * auVar33,8)) * lVar6,
        auVar34._8_8_ = 0, auVar34._0_8_ = uVar43, uVar45 = uVar46, SUB164(auVar20 * auVar34,8) != 0
        ) {
LAB_00100666:
    uVar46 = uVar41;
    puVar1 = (uint *)(uVar37 + (ulong)uVar45 * 4);
    *puVar47 = *puVar1;
    puVar2 = (undefined8 *)(uVar36 + lVar42 * 8);
    *puVar1 = uVar39;
    puVar3 = (undefined8 *)(uVar36 + (ulong)uVar45 * 8);
    uVar7 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar7;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(uVar46 + 1) * lVar6;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar42 = SUB168(auVar21 * auVar35,8);
    puVar47 = (uint *)(uVar37 + lVar42 * 4);
    uVar41 = SUB164(auVar21 * auVar35,8);
    uVar39 = *puVar47;
    if (uVar39 == 0) break;
  }
LAB_001006a8:
  uVar43 = (ulong)uVar46;
  plVar4 = (long *)(uVar36 + uVar43 * 8);
  *(undefined4 *)(uVar37 + uVar43 * 4) = 0;
  plVar44 = (long *)*plVar4;
  if ((long *)captures._24_8_ == plVar44) {
    captures._24_8_ = *plVar44;
    plVar44 = (long *)*plVar4;
  }
  if ((long *)captures._32_8_ == plVar44) {
    captures._32_8_ = plVar44[1];
    plVar44 = (long *)*plVar4;
  }
  if ((long *)plVar44[1] != (long *)0x0) {
    *(long *)plVar44[1] = *plVar44;
    plVar44 = (long *)*plVar4;
  }
  if (*plVar44 != 0) {
    *(long *)(*plVar44 + 8) = plVar44[1];
    plVar44 = (long *)*plVar4;
  }
  if ((StringName::configured != '\0') && (plVar44[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar44,false);
  *(undefined8 *)(captures._8_8_ + uVar43 * 8) = 0;
  captures._44_4_ = captures._44_4_ + -1;
LAB_00100732:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EngineDebugger::~EngineDebugger() */

void __thiscall EngineDebugger::~EngineDebugger(EngineDebugger *this)

{
  *(undefined ***)this = &PTR_poll_events_00106428;
  if (script_debugger != (ScriptDebugger *)0x0) {
    memdelete<ScriptDebugger>(script_debugger);
  }
  script_debugger = (ScriptDebugger *)0x0;
  singleton = 0;
  return;
}



/* EngineDebugger::~EngineDebugger() */

void __thiscall EngineDebugger::~EngineDebugger(EngineDebugger *this)

{
  *(undefined ***)this = &PTR_poll_events_00106428;
  if (script_debugger != (ScriptDebugger *)0x0) {
    memdelete<ScriptDebugger>(script_debugger);
  }
  script_debugger = (ScriptDebugger *)0x0;
  singleton = 0;
  operator_delete(this,0x30);
  return;
}



/* EngineDebugger::register_profiler(StringName const&, EngineDebugger::Profiler const&) */

void EngineDebugger::register_profiler(StringName *param_1,Profiler *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char *pcVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((profilers._8_8_ != 0) && (profilers._44_4_ != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
    uVar18 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)profilers._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar16 = *(uint *)(profilers._16_8_ + lVar15 * 4);
    iVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((uVar16 == uVar13) &&
           (*(long *)(*(long *)(profilers._8_8_ + lVar15 * 8) + 0x10) == *(long *)param_1)) {
          StringName::StringName((StringName *)&local_60,param_1);
          local_50 = 0x22;
          local_58 = "Profiler already registered: \'%s\'.";
          local_68 = 0;
          String::parse_latin1((StrRange *)&local_68);
          vformat<StringName>(&local_58,&local_68,(StringName *)&local_60);
          _err_print_error("register_profiler","core/debugger/engine_debugger.cpp",0x31,
                           "Condition \"profilers.has(p_name)\" is true.",&local_58,0,0);
          pcVar12 = local_58;
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar12 + -0x10,false);
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
          goto LAB_00100b52;
        }
        uVar17 = uVar17 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar16 = *(uint *)(profilers._16_8_ + lVar15 * 4);
        iVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar16 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar18, uVar17 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
  ::insert((StringName *)&local_58,(Profiler *)profilers,SUB81(param_1,0));
LAB_00100b52:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineDebugger::unregister_profiler(StringName const&) */

void EngineDebugger::unregister_profiler(StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
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
  undefined8 uVar36;
  undefined8 uVar37;
  char *pcVar38;
  uint uVar39;
  undefined8 *puVar40;
  int iVar41;
  uint uVar42;
  long lVar43;
  ulong uVar44;
  long *plVar45;
  uint uVar46;
  uint uVar47;
  uint *puVar48;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((profilers._8_8_ != 0) && (profilers._44_4_ != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
    uVar44 = CONCAT44(0,uVar4);
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)profilers._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar39 = StringName::get_empty_hash();
    }
    else {
      uVar39 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar39 == 0) {
      uVar39 = 1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar39 * lVar5;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar44;
    lVar43 = SUB168(auVar8 * auVar22,8);
    uVar42 = *(uint *)(profilers._16_8_ + lVar43 * 4);
    iVar41 = SUB164(auVar8 * auVar22,8);
    if (uVar42 != 0) {
      uVar46 = 0;
      do {
        if ((uVar39 == uVar42) &&
           (*(long *)(*(long *)(profilers._8_8_ + lVar43 * 8) + 0x10) == *(long *)param_1)) {
          puVar40 = (undefined8 *)
                    HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                    ::operator[]((HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                                  *)profilers,param_1);
          if ((*(char *)(puVar40 + 4) != '\0') && (pcVar6 = (code *)*puVar40, pcVar6 != (code *)0x0)
             ) {
            Array::Array((Array *)&local_58);
            (*pcVar6)(puVar40[3],0,(Array *)&local_58);
            Array::~Array((Array *)&local_58);
            *(undefined1 *)(puVar40 + 4) = 0;
          }
          if ((profilers._8_8_ == 0) || (profilers._44_4_ == 0)) goto LAB_00100f62;
          uVar4 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
          uVar44 = CONCAT44(0,uVar4);
          lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)profilers._40_4_ * 8);
          if (*(long *)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
          }
          else {
            uVar39 = *(uint *)(*(long *)param_1 + 0x20);
          }
          uVar37 = profilers._16_8_;
          uVar36 = profilers._8_8_;
          if (uVar39 == 0) {
            uVar39 = 1;
          }
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar39 * lVar5;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar44;
          lVar43 = SUB168(auVar12 * auVar26,8);
          uVar42 = *(uint *)(profilers._16_8_ + lVar43 * 4);
          uVar46 = SUB164(auVar12 * auVar26,8);
          if (uVar42 == 0) goto LAB_00100f62;
          uVar47 = 0;
          goto LAB_00100df9;
        }
        uVar46 = uVar46 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(iVar41 + 1) * lVar5;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar44;
        lVar43 = SUB168(auVar9 * auVar23,8);
        uVar42 = *(uint *)(profilers._16_8_ + lVar43 * 4);
        iVar41 = SUB164(auVar9 * auVar23,8);
      } while ((uVar42 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar42 * lVar5, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar44, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar4 + iVar41) - SUB164(auVar10 * auVar24,8)) * lVar5,
              auVar25._8_8_ = 0, auVar25._0_8_ = uVar44, uVar46 <= SUB164(auVar11 * auVar25,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,param_1);
  local_50 = 0x1e;
  local_58 = "Profiler not registered: \'%s\'.";
  local_68 = 0;
  String::parse_latin1((StrRange *)&local_68);
  vformat<StringName>(&local_58,&local_68,(StringName *)&local_60);
  _err_print_error("unregister_profiler","core/debugger/engine_debugger.cpp",0x36,
                   "Condition \"!profilers.has(p_name)\" is true.",&local_58,0,0);
  pcVar38 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_58 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar38 + -0x10,false);
    }
  }
  lVar5 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar3 = (long *)(local_68 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  goto LAB_00100f62;
  while( true ) {
    uVar47 = uVar47 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar46 + 1) * lVar5;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar44;
    lVar43 = SUB168(auVar13 * auVar27,8);
    uVar42 = *(uint *)(profilers._16_8_ + lVar43 * 4);
    uVar46 = SUB164(auVar13 * auVar27,8);
    if ((uVar42 == 0) ||
       (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar42 * lVar5, auVar28._8_8_ = 0,
       auVar28._0_8_ = uVar44, auVar15._8_8_ = 0,
       auVar15._0_8_ = (ulong)((uVar4 + uVar46) - SUB164(auVar14 * auVar28,8)) * lVar5,
       auVar29._8_8_ = 0, auVar29._0_8_ = uVar44, SUB164(auVar15 * auVar29,8) < uVar47)) break;
LAB_00100df9:
    if ((uVar39 == uVar42) &&
       (*(long *)(*(long *)(profilers._8_8_ + lVar43 * 8) + 0x10) == *(long *)param_1)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)profilers._40_4_ * 8);
      uVar44 = CONCAT44(0,uVar4);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)(uVar46 + 1) * lVar5;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar44;
      lVar43 = SUB168(auVar16 * auVar30,8);
      puVar48 = (uint *)(profilers._16_8_ + lVar43 * 4);
      uVar42 = SUB164(auVar16 * auVar30,8);
      uVar39 = *puVar48;
      if ((uVar39 == 0) ||
         (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar39 * lVar5, auVar31._8_8_ = 0,
         auVar31._0_8_ = uVar44, auVar18._8_8_ = 0,
         auVar18._0_8_ = (ulong)((uVar4 + uVar42) - SUB164(auVar17 * auVar31,8)) * lVar5,
         auVar32._8_8_ = 0, auVar32._0_8_ = uVar44, uVar47 = uVar46,
         SUB164(auVar18 * auVar32,8) == 0)) goto LAB_00100ed8;
      goto LAB_00100e96;
    }
  }
  goto LAB_00100f62;
  while (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar39 * lVar5, auVar33._8_8_ = 0,
        auVar33._0_8_ = uVar44, auVar20._8_8_ = 0,
        auVar20._0_8_ = (ulong)((uVar42 + uVar4) - SUB164(auVar19 * auVar33,8)) * lVar5,
        auVar34._8_8_ = 0, auVar34._0_8_ = uVar44, uVar47 = uVar46, SUB164(auVar20 * auVar34,8) != 0
        ) {
LAB_00100e96:
    uVar46 = uVar42;
    puVar1 = (uint *)(uVar37 + (ulong)uVar47 * 4);
    *puVar48 = *puVar1;
    puVar40 = (undefined8 *)(uVar36 + lVar43 * 8);
    *puVar1 = uVar39;
    puVar2 = (undefined8 *)(uVar36 + (ulong)uVar47 * 8);
    uVar7 = *puVar40;
    *puVar40 = *puVar2;
    *puVar2 = uVar7;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(uVar46 + 1) * lVar5;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar44;
    lVar43 = SUB168(auVar21 * auVar35,8);
    puVar48 = (uint *)(uVar37 + lVar43 * 4);
    uVar42 = SUB164(auVar21 * auVar35,8);
    uVar39 = *puVar48;
    if (uVar39 == 0) break;
  }
LAB_00100ed8:
  uVar44 = (ulong)uVar46;
  plVar3 = (long *)(uVar36 + uVar44 * 8);
  *(undefined4 *)(uVar37 + uVar44 * 4) = 0;
  plVar45 = (long *)*plVar3;
  if ((long *)profilers._24_8_ == plVar45) {
    profilers._24_8_ = *plVar45;
    plVar45 = (long *)*plVar3;
  }
  if ((long *)profilers._32_8_ == plVar45) {
    profilers._32_8_ = plVar45[1];
    plVar45 = (long *)*plVar3;
  }
  if ((long *)plVar45[1] != (long *)0x0) {
    *(long *)plVar45[1] = *plVar45;
    plVar45 = (long *)*plVar3;
  }
  if (*plVar45 != 0) {
    *(long *)(*plVar45 + 8) = plVar45[1];
    plVar45 = (long *)*plVar3;
  }
  if ((StringName::configured != '\0') && (plVar45[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar45,false);
  *(undefined8 *)(profilers._8_8_ + uVar44 * 8) = 0;
  profilers._44_4_ = profilers._44_4_ + -1;
LAB_00100f62:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EngineDebugger::profiler_enable(StringName const&, bool, Array const&) */

void __thiscall
EngineDebugger::profiler_enable
          (EngineDebugger *this,StringName *param_1,bool param_2,Array *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char *pcVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((profilers._8_8_ != 0) && (profilers._44_4_ != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)profilers._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar16 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(profilers._16_8_ + lVar16 * 4);
    iVar15 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) &&
           (*(long *)(*(long *)(profilers._8_8_ + lVar16 * 8) + 0x10) == *(long *)param_1)) {
          puVar14 = (undefined8 *)
                    HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                    ::operator[]((HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                                  *)profilers,param_1);
          if ((code *)*puVar14 != (code *)0x0) {
            (*(code *)*puVar14)(puVar14[3],param_2,param_3);
          }
          *(bool *)(puVar14 + 4) = param_2;
          goto LAB_0010123e;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar15 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar16 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(profilers._16_8_ + lVar16 * 4);
        iVar15 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar15) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,param_1);
  local_58 = "Can\'t change profiler state, no profiler: \'%s\'.";
  local_68 = 0;
  local_50 = 0x2f;
  String::parse_latin1((StrRange *)&local_68);
  vformat<StringName>(&local_58,(StrRange *)&local_68,(StringName *)&local_60);
  _err_print_error("profiler_enable","core/debugger/engine_debugger.cpp",0x4f,
                   "Condition \"!profilers.has(p_name)\" is true.",&local_58,0);
  pcVar12 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar12 + -0x10,false);
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
LAB_0010123e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EngineDebugger::deinitialize() */

void EngineDebugger::deinitialize(void)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  EngineDebugger *pEVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  Array aAStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (singleton != (EngineDebugger *)0x0) {
    pEVar4 = singleton;
    for (plVar6 = (long *)profilers._24_8_; singleton = pEVar4, plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      while ((char)plVar6[7] == '\0') {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0010140e;
      }
      Array::Array(aAStack_38);
      profiler_enable(pEVar4,(StringName *)(plVar6 + 2),false,aAStack_38);
      Array::~Array(aAStack_38);
      pEVar4 = singleton;
    }
LAB_0010140e:
    puVar5 = *(undefined8 **)pEVar4;
    if ((code *)*puVar5 != poll_events) {
      (*(code *)*puVar5)(pEVar4);
      puVar5 = *(undefined8 **)singleton;
    }
    pEVar4 = singleton;
    (*(code *)puVar5[4])(singleton);
    Memory::free_static(pEVar4,false);
    singleton = (EngineDebugger *)0x0;
  }
  if ((profilers._8_8_ != 0) && (profilers._44_4_ != 0)) {
    lVar7 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(profilers._16_8_ + lVar7) != 0) {
          *(int *)(profilers._16_8_ + lVar7) = 0;
          pvVar2 = *(void **)(profilers._8_8_ + lVar7 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(profilers._8_8_ + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while ((ulong)uVar1 << 2 != lVar7);
    }
    profilers._44_4_ = 0;
    profilers._24_16_ = (undefined1  [16])0x0;
  }
  if ((captures._8_8_ != 0) && (captures._44_4_ != 0)) {
    lVar7 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)captures._40_4_ * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(captures._16_8_ + lVar7) != 0) {
          *(int *)(captures._16_8_ + lVar7) = 0;
          pvVar2 = *(void **)(captures._8_8_ + lVar7 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(captures._8_8_ + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while ((ulong)uVar1 << 2 != lVar7);
    }
    captures._44_4_ = 0;
    captures._24_16_ = (undefined1  [16])0x0;
  }
  if ((protocols._8_8_ != 0) && (protocols._44_4_ != 0)) {
    lVar7 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)protocols._40_4_ * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(protocols._16_8_ + lVar7) != 0) {
          *(int *)(protocols._16_8_ + lVar7) = 0;
          pvVar2 = *(void **)(protocols._8_8_ + lVar7 * 2);
          if (*(long *)((long)pvVar2 + 0x10) != 0) {
            LOCK();
            plVar6 = (long *)(*(long *)((long)pvVar2 + 0x10) + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              lVar3 = *(long *)((long)pvVar2 + 0x10);
              *(undefined8 *)((long)pvVar2 + 0x10) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(protocols._8_8_ + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
    }
    protocols._44_4_ = 0;
    protocols._24_16_ = (undefined1  [16])0x0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineDebugger::profiler_add_frame_data(StringName const&, Array const&) */

void EngineDebugger::profiler_add_frame_data(StringName *param_1,Array *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char *pcVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((profilers._8_8_ != 0) && (profilers._44_4_ != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
    uVar18 = CONCAT44(0,uVar2);
    lVar13 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)profilers._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar12 * lVar13;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(profilers._16_8_ + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((uVar16 == uVar12) &&
           (*(long *)(*(long *)(profilers._8_8_ + lVar15 * 8) + 0x10) == *(long *)param_1)) {
          lVar13 = HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                   ::operator[]((HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                                 *)profilers,param_1);
          if (*(code **)(lVar13 + 8) == (code *)0x0) goto LAB_001018d0;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar13 + 8))(*(undefined8 *)(lVar13 + 0x18),param_2);
            return;
          }
          goto LAB_00101934;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar13;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(profilers._16_8_ + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar13, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar2 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar13,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,param_1);
  local_50 = 0x28;
  local_58 = "Can\'t add frame data, no profiler: \'%s\'.";
  local_68 = 0;
  String::parse_latin1((StrRange *)&local_68);
  vformat<StringName>(&local_58,&local_68,(StringName *)&local_60);
  _err_print_error("profiler_add_frame_data","core/debugger/engine_debugger.cpp",0x58,
                   "Condition \"!profilers.has(p_name)\" is true.",&local_58,0,0);
  pcVar11 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar11 + -0x10,false);
    }
  }
  lVar13 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
LAB_001018d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101934:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineDebugger::is_profiling(StringName const&) */

undefined1 EngineDebugger::is_profiling(StringName *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((profilers._8_8_ == 0) || (profilers._44_4_ == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)profilers._40_4_ * 4);
  lVar11 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)profilers._40_4_ * 8);
  if (*(long *)param_1 == 0) {
    uVar10 = StringName::get_empty_hash();
  }
  else {
    uVar10 = *(uint *)(*(long *)param_1 + 0x20);
  }
  uVar15 = CONCAT44(0,uVar1);
  if (uVar10 == 0) {
    uVar10 = 1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (ulong)uVar10 * lVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar15;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar14 = *(uint *)(profilers._16_8_ + lVar13 * 4);
  iVar12 = SUB164(auVar2 * auVar6,8);
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      if ((uVar10 == uVar14) &&
         (*(long *)(*(long *)(profilers._8_8_ + lVar13 * 8) + 0x10) == *(long *)param_1)) {
        lVar11 = HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                 ::operator[]((HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                               *)profilers,param_1);
        return *(undefined1 *)(lVar11 + 0x20);
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar11;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar14 = *(uint *)(profilers._16_8_ + lVar13 * 4);
      iVar12 = SUB164(auVar3 * auVar7,8);
    } while ((uVar14 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar14 * lVar11, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar4 * auVar8,8)) * lVar11,
            auVar9._8_8_ = 0, auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* EngineDebugger::register_message_capture(StringName const&, EngineDebugger::Capture) */

void EngineDebugger::register_message_capture(StringName *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char *pcVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((captures._8_8_ != 0) && (captures._44_4_ != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)captures._40_4_ * 4);
    uVar18 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)captures._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar16 = *(uint *)(captures._16_8_ + lVar15 * 4);
    iVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((uVar16 == uVar13) &&
           (*(long *)(*(long *)(captures._8_8_ + lVar15 * 8) + 0x10) == *(long *)param_1)) {
          StringName::StringName((StringName *)&local_50,param_1);
          local_48 = "Capture already registered: \'%s\'.";
          local_58 = 0;
          local_40 = 0x21;
          String::parse_latin1((StrRange *)&local_58);
          vformat<StringName>(&local_48,(StrRange *)&local_58,(StringName *)&local_50);
          _err_print_error("register_message_capture","core/debugger/engine_debugger.cpp",0x40,
                           "Condition \"captures.has(p_name)\" is true.",&local_48,0);
          pcVar12 = local_48;
          if (local_48 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (char *)0x0;
              Memory::free_static(pcVar12 + -0x10,false);
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
          goto LAB_00101c7a;
        }
        uVar17 = uVar17 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar16 = *(uint *)(captures._16_8_ + lVar15 * 4);
        iVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar16 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar18, uVar17 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
  ::insert((StringName *)&local_48,captures,SUB81(param_1,0));
LAB_00101c7a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineDebugger::capture_parse(StringName const&, String const&, Array const&, bool&) */

undefined8 __thiscall
EngineDebugger::capture_parse
          (EngineDebugger *this,StringName *param_1,String *param_2,Array *param_3,bool *param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char *pcVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar21 = captures._8_8_ != 0;
  *param_4 = false;
  if ((bVar21) && (captures._44_4_ != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)captures._40_4_ * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)captures._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar19 = CONCAT44(0,uVar2);
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar18 = *(uint *)(captures._16_8_ + lVar17 * 4);
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar18 != 0) {
      uVar20 = 0;
      do {
        if ((uVar18 == uVar13) &&
           (*(long *)(*(long *)(captures._8_8_ + lVar17 * 8) + 0x10) == *(long *)param_1)) {
          puVar14 = (undefined8 *)
                    HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
                    ::operator[]((HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
                                  *)captures,param_1);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar15 = (*(code *)*puVar14)(puVar14[1],param_2,param_3,param_4);
            return uVar15;
          }
          goto LAB_00101f75;
        }
        uVar20 = uVar20 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar16 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar18 = *(uint *)(captures._16_8_ + lVar17 * 4);
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar18 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar20 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,param_1);
  local_58 = "Capture not registered: \'%s\'.";
  local_68 = 0;
  local_50 = 0x1d;
  String::parse_latin1((StrRange *)&local_68);
  vformat<StringName>(&local_58,(StrRange *)&local_68,(StringName *)&local_60);
  _err_print_error("capture_parse","core/debugger/engine_debugger.cpp",0x6d,
                   "Condition \"!captures.has(p_name)\" is true. Returning: ERR_UNCONFIGURED",
                   &local_58,0);
  pcVar12 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar12 + -0x10,false);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 3;
  }
LAB_00101f75:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineDebugger::register_uri_handler(String const&, RemoteDebuggerPeer* (*)(String const&)) */

void EngineDebugger::register_uri_handler
               (String *param_1,_func_RemoteDebuggerPeer_ptr_String_ptr *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char *pcVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((protocols._8_8_ != 0) && (protocols._44_4_ != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)protocols._40_4_ * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)protocols._40_4_ * 8);
    uVar14 = String::hash();
    uVar18 = CONCAT44(0,uVar2);
    uVar15 = 1;
    if (uVar14 != 0) {
      uVar15 = uVar14;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar15 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(protocols._16_8_ + lVar17 * 4);
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar20 = 0;
      lVar19 = protocols._16_8_;
      do {
        if ((uVar14 == uVar15) &&
           (cVar13 = String::operator==((String *)(*(long *)(protocols._8_8_ + lVar17 * 8) + 0x10),
                                        param_1), lVar19 = protocols._16_8_, cVar13 != '\0')) {
          local_68 = 0;
          plVar1 = (long *)(*(long *)param_1 + -0x10);
          if (*(long *)param_1 == 0) goto LAB_0010211b;
          goto LAB_001020fa;
        }
        uVar20 = uVar20 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar16 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar14 = *(uint *)(lVar19 + lVar17 * 4);
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar14 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar18, uVar20 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
  ::insert((String *)&local_58,(_func_RemoteDebuggerPeer_ptr_String_ptr *)protocols,SUB81(param_1,0)
          );
  goto LAB_00101fda;
LAB_001020fa:
  do {
    lVar3 = *plVar1;
    if (lVar3 == 0) goto LAB_0010211b;
    LOCK();
    lVar17 = *plVar1;
    bVar21 = lVar3 == lVar17;
    if (bVar21) {
      *plVar1 = lVar3 + 1;
      lVar17 = lVar3;
    }
    UNLOCK();
  } while (!bVar21);
  if (lVar17 != -1) {
    local_68 = *(long *)param_1;
  }
LAB_0010211b:
  local_60 = 0;
  local_50 = 0x2a;
  local_58 = "Protocol handler already registered: \'%s\'.";
  String::parse_latin1((StrRange *)&local_60);
  vformat<String>(&local_58,(StrRange *)&local_60,&local_68);
  _err_print_error("register_uri_handler","core/debugger/engine_debugger.cpp",0x4a,
                   "Condition \"protocols.has(p_protocol)\" is true.",&local_58,0);
  pcVar12 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar12 + -0x10,false);
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
LAB_00101fda:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EngineDebugger::initialize(String const&, bool, Vector<String> const&, void (*)()) */

void EngineDebugger::initialize(String *param_1,bool param_2,Vector *param_3,_func_void *param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined1 *puVar13;
  _func_void *p_Var14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  LocalDebugger *pLVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  Object *pOVar23;
  RemoteDebugger *pRVar24;
  uint uVar25;
  wchar32 wVar26;
  uint uVar27;
  long lVar28;
  long in_FS_OFFSET;
  bool bVar29;
  long local_80;
  long local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = (Object *)0x103346;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_70);
  register_uri_handler((String *)&local_70,RemoteDebuggerPeerTCP::create);
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar20 = (long *)(local_70 + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  p_Var14 = allow_focus_steal_fn;
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    cVar15 = String::operator==(param_1,"local://");
    if (cVar15 == '\0') {
      iVar17 = String::find((char *)param_1,0x103356);
      if (iVar17 != -1) {
        String::find((char *)param_1,0x103356);
        String::substr((int)(String *)&local_80,(int)param_1);
        if ((protocols._8_8_ != 0) && (protocols._44_4_ != 0)) {
          uVar16 = *(uint *)(hash_table_size_primes + (ulong)(uint)protocols._40_4_ * 4);
          lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)protocols._40_4_ * 8);
          uVar18 = String::hash();
          uVar12 = CONCAT44(0,uVar16);
          uVar25 = 1;
          if (uVar18 != 0) {
            uVar25 = uVar18;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar25 * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar12;
          lVar28 = SUB168(auVar4 * auVar8,8);
          uVar18 = *(uint *)(protocols._16_8_ + lVar28 * 4);
          if (uVar18 != 0) {
            uVar27 = 0;
            iVar17 = SUB164(auVar4 * auVar8,8);
            lVar21 = protocols._16_8_;
            while ((uVar18 != uVar25 ||
                   (cVar15 = String::operator==((String *)
                                                (*(long *)(protocols._8_8_ + lVar28 * 8) + 0x10),
                                                (String *)&local_80), lVar21 = protocols._16_8_,
                   cVar15 == '\0'))) {
              uVar27 = uVar27 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar2;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar12;
              lVar28 = SUB168(auVar5 * auVar9,8);
              uVar18 = *(uint *)(lVar21 + lVar28 * 4);
              iVar17 = SUB164(auVar5 * auVar9,8);
              if ((uVar18 == 0) ||
                 (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar2, auVar10._8_8_ = 0,
                 auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
                 auVar7._0_8_ = (ulong)((uVar16 + iVar17) - SUB164(auVar6 * auVar10,8)) * lVar2,
                 auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, SUB164(auVar7 * auVar11,8) < uVar27))
              goto LAB_00102790;
            }
            puVar22 = (undefined8 *)
                      HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
                      ::operator[]((HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
                                    *)protocols,(String *)&local_80);
            pOVar23 = (Object *)(*(code *)*puVar22)(param_1);
            if (pOVar23 != (Object *)0x0) {
              pRVar24 = (RemoteDebugger *)operator_new(0x120,"");
              local_68 = pOVar23;
              cVar15 = RefCounted::init_ref();
              if (cVar15 == '\0') {
                local_68 = (Object *)0x0;
              }
              RemoteDebugger::RemoteDebugger(pRVar24);
              singleton = (LocalDebugger *)pRVar24;
              if (((local_68 != (Object *)0x0) &&
                  (cVar15 = RefCounted::unreference(), pOVar23 = local_68, cVar15 != '\0')) &&
                 (cVar15 = predelete_handler(local_68), cVar15 != '\0')) {
                (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
                Memory::free_static(pOVar23,false);
              }
              script_debugger = (undefined1 *)operator_new(0x38,"");
              *script_debugger = 0;
              *(undefined8 *)(script_debugger + 0x30) = 2;
              *(undefined1 (*) [16])(script_debugger + 0x10) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(script_debugger + 0x20) = (undefined1  [16])0x0;
              Array::Array((Array *)&local_78);
              plVar20 = (long *)OS::get_singleton();
              iVar17 = (**(code **)(*plVar20 + 0x130))(plVar20);
              Variant::Variant((Variant *)local_58,iVar17);
              Array::push_back((Variant *)&local_78);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              pLVar19 = singleton;
              pcVar3 = *(code **)(*(long *)singleton + 8);
              local_70 = 0;
              local_60 = 7;
              local_68 = (Object *)0x10335a;
              String::parse_latin1((StrRange *)&local_70);
              (*pcVar3)(pLVar19,(StrRange *)&local_70,(Array *)&local_78);
              lVar2 = local_70;
              if (local_70 != 0) {
                LOCK();
                plVar20 = (long *)(local_70 + -0x10);
                *plVar20 = *plVar20 + -1;
                UNLOCK();
                if (*plVar20 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar2 + -0x10),false);
                }
              }
              Array::~Array((Array *)&local_78);
              lVar2 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar20 = (long *)(local_80 + -0x10);
                *plVar20 = *plVar20 + -1;
                UNLOCK();
                if (*plVar20 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(lVar2 + -0x10),false);
                }
              }
              goto LAB_0010239a;
            }
          }
        }
LAB_00102790:
        lVar2 = local_80;
        p_Var14 = allow_focus_steal_fn;
        if (local_80 != 0) {
          LOCK();
          plVar20 = (long *)(local_80 + -0x10);
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          p_Var14 = allow_focus_steal_fn;
          if (*plVar20 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
            p_Var14 = allow_focus_steal_fn;
          }
        }
        goto LAB_001022c6;
      }
    }
    else {
      pLVar19 = (LocalDebugger *)operator_new(0x70,"");
      LocalDebugger::LocalDebugger(pLVar19);
      singleton = pLVar19;
      script_debugger = (undefined1 *)operator_new(0x38,"");
      *script_debugger = 0;
      *(undefined8 *)(script_debugger + 0x30) = 2;
      *(undefined1 (*) [16])(script_debugger + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(script_debugger + 0x20) = (undefined1  [16])0x0;
      plVar20 = (long *)OS::get_singleton();
      if (*(code **)(*plVar20 + 0x238) != OS::initialize_debugging) {
        (**(code **)(*plVar20 + 0x238))(plVar20);
      }
    }
LAB_0010239a:
    puVar13 = script_debugger;
    p_Var14 = allow_focus_steal_fn;
    if (singleton != (LocalDebugger *)0x0) {
      ScriptDebugger::set_skip_breakpoints(SUB81(script_debugger,0));
      lVar2 = *(long *)(param_3 + 8);
      for (lVar28 = 0;
          (p_Var14 = param_4, lVar2 != 0 && (p_Var14 = param_4, lVar28 < *(long *)(lVar2 + -8)));
          lVar28 = lVar28 + 1) {
        plVar20 = (long *)(lVar2 + lVar28 * 8);
        wVar26 = (wchar32)plVar20;
        iVar17 = String::rfind_char(wVar26,0x3a);
        if (iVar17 == -1) {
          local_70 = 0;
          plVar1 = (long *)(*plVar20 + -0x10);
          if (*plVar20 != 0) {
            do {
              lVar2 = *plVar1;
              if (lVar2 == 0) goto LAB_0010252a;
              LOCK();
              lVar21 = *plVar1;
              bVar29 = lVar2 == lVar21;
              if (bVar29) {
                *plVar1 = lVar2 + 1;
                lVar21 = lVar2;
              }
              UNLOCK();
            } while (!bVar29);
            if (lVar21 != -1) {
              local_70 = *plVar20;
            }
          }
LAB_0010252a:
          local_78 = 0;
          local_68 = (Object *)0x1035d0;
          local_60 = 0x34;
          String::parse_latin1((StrRange *)&local_78);
          vformat<String>((StringName *)&local_68,(StrRange *)&local_78,(StrRange *)&local_70);
          _err_print_error("initialize","core/debugger/engine_debugger.cpp",0xa7,
                           "Condition \"sp == -1\" is true. Continuing.",(StringName *)&local_68,0,0
                          );
          pOVar23 = local_68;
          if (local_68 != (Object *)0x0) {
            LOCK();
            plVar20 = (long *)(local_68 + -0x10);
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (*plVar20 == 0) {
              local_68 = (Object *)0x0;
              Memory::free_static(pOVar23 + -0x10,false);
            }
          }
          lVar2 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar20 = (long *)(local_78 + -0x10);
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (*plVar20 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
        }
        else {
          String::substr((int)(StrRange *)&local_70,wVar26);
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          String::substr((int)&local_78,wVar26);
          uVar16 = String::to_int();
          ScriptDebugger::insert_breakpoint((int)puVar13,(StringName *)(ulong)uVar16);
          lVar2 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar20 = (long *)(local_78 + -0x10);
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (*plVar20 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar20 = (long *)(local_70 + -0x10);
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (*plVar20 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = *(long *)(param_3 + 8);
      }
    }
  }
LAB_001022c6:
  allow_focus_steal_fn = p_Var14;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineDebugger::poll_events(bool) */

void EngineDebugger::poll_events(bool param_1)

{
  return;
}



/* OS::initialize_debugging() */

void OS::initialize_debugging(void)

{
  return;
}



/* HashMap<StringName, EngineDebugger::Profiler, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Profiler> > >::~HashMap() */

void __thiscall
HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
::~HashMap(HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          bVar4 = StringName::configured != '\0';
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, EngineDebugger::Capture, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Capture> > >::~HashMap() */

void __thiscall
HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
::~HashMap(HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          bVar4 = StringName::configured != '\0';
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<String, RemoteDebuggerPeer* (*)(String const&), HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   RemoteDebuggerPeer* (*)(String const&)> > >::~HashMap() */

void __thiscall
HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
::~HashMap(HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
           *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          if (*(long *)((long)pvVar5 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x10);
              *(undefined8 *)((long)pvVar5 + 0x10) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          Memory::free_static(pvVar5,false);
          pvVar5 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00102f68) */
/* WARNING: Removing unreachable block (ram,0x00103098) */
/* WARNING: Removing unreachable block (ram,0x00103260) */
/* WARNING: Removing unreachable block (ram,0x001030a4) */
/* WARNING: Removing unreachable block (ram,0x001030ae) */
/* WARNING: Removing unreachable block (ram,0x00103240) */
/* WARNING: Removing unreachable block (ram,0x001030ba) */
/* WARNING: Removing unreachable block (ram,0x001030c4) */
/* WARNING: Removing unreachable block (ram,0x00103220) */
/* WARNING: Removing unreachable block (ram,0x001030d0) */
/* WARNING: Removing unreachable block (ram,0x001030da) */
/* WARNING: Removing unreachable block (ram,0x00103200) */
/* WARNING: Removing unreachable block (ram,0x001030e6) */
/* WARNING: Removing unreachable block (ram,0x001030f0) */
/* WARNING: Removing unreachable block (ram,0x001031e0) */
/* WARNING: Removing unreachable block (ram,0x001030fc) */
/* WARNING: Removing unreachable block (ram,0x00103106) */
/* WARNING: Removing unreachable block (ram,0x001031c0) */
/* WARNING: Removing unreachable block (ram,0x00103112) */
/* WARNING: Removing unreachable block (ram,0x0010311c) */
/* WARNING: Removing unreachable block (ram,0x001031a0) */
/* WARNING: Removing unreachable block (ram,0x00103124) */
/* WARNING: Removing unreachable block (ram,0x0010313a) */
/* WARNING: Removing unreachable block (ram,0x00103146) */
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



/* WARNING: Removing unreachable block (ram,0x00103758) */
/* WARNING: Removing unreachable block (ram,0x00103888) */
/* WARNING: Removing unreachable block (ram,0x00103a50) */
/* WARNING: Removing unreachable block (ram,0x00103894) */
/* WARNING: Removing unreachable block (ram,0x0010389e) */
/* WARNING: Removing unreachable block (ram,0x00103a30) */
/* WARNING: Removing unreachable block (ram,0x001038aa) */
/* WARNING: Removing unreachable block (ram,0x001038b4) */
/* WARNING: Removing unreachable block (ram,0x00103a10) */
/* WARNING: Removing unreachable block (ram,0x001038c0) */
/* WARNING: Removing unreachable block (ram,0x001038ca) */
/* WARNING: Removing unreachable block (ram,0x001039f0) */
/* WARNING: Removing unreachable block (ram,0x001038d6) */
/* WARNING: Removing unreachable block (ram,0x001038e0) */
/* WARNING: Removing unreachable block (ram,0x001039d0) */
/* WARNING: Removing unreachable block (ram,0x001038ec) */
/* WARNING: Removing unreachable block (ram,0x001038f6) */
/* WARNING: Removing unreachable block (ram,0x001039b0) */
/* WARNING: Removing unreachable block (ram,0x00103902) */
/* WARNING: Removing unreachable block (ram,0x0010390c) */
/* WARNING: Removing unreachable block (ram,0x00103990) */
/* WARNING: Removing unreachable block (ram,0x00103914) */
/* WARNING: Removing unreachable block (ram,0x0010392a) */
/* WARNING: Removing unreachable block (ram,0x00103936) */
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



/* void memdelete<ScriptDebugger>(ScriptDebugger*) */

void memdelete<ScriptDebugger>(ScriptDebugger *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  
  pvVar3 = *(void **)(param_1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x30) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x18) + lVar5) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar5 * 2);
            *(int *)(*(long *)(param_1 + 0x18) + lVar5) = 0;
            pvVar4 = *(void **)((long)pvVar3 + 0x18);
            if (pvVar4 != (void *)0x0) {
              if (*(int *)((long)pvVar3 + 0x3c) != 0) {
                if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar3 + 0x38) * 4) !=
                    0) {
                  memset(*(void **)((long)pvVar3 + 0x30),0,
                         (ulong)*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)((long)pvVar3 + 0x38) * 4) << 2);
                  if (*(int *)((long)pvVar3 + 0x3c) == 0) goto LAB_00103bf8;
                }
                lVar2 = 0;
                do {
                  if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar2 * 8) != 0)
                     ) {
                    StringName::unref();
                    pvVar4 = *(void **)((long)pvVar3 + 0x18);
                  }
                  lVar2 = lVar2 + 1;
                } while ((uint)lVar2 < *(uint *)((long)pvVar3 + 0x3c));
                *(undefined4 *)((long)pvVar3 + 0x3c) = 0;
                if (pvVar4 == (void *)0x0) goto LAB_00103b75;
              }
LAB_00103bf8:
              Memory::free_static(pvVar4,false);
              Memory::free_static(*(void **)((long)pvVar3 + 0x28),false);
              Memory::free_static(*(void **)((long)pvVar3 + 0x20),false);
              Memory::free_static(*(void **)((long)pvVar3 + 0x30),false);
            }
LAB_00103b75:
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(param_1 + 0x10);
            *(undefined8 *)((long)pvVar3 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00103bb1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x18),false);
  }
LAB_00103bb1:
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EngineDebugger::Profiler, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Profiler> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
::_resize_and_rehash
          (HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
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
/* HashMap<StringName, EngineDebugger::Profiler, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Profiler> > >::insert(StringName const&, EngineDebugger::Profiler const&, bool)
    */

StringName *
HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
::insert(StringName *param_1,Profiler *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
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
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  void *__s_00;
  long *in_RCX;
  uint uVar28;
  int iVar29;
  undefined7 in_register_00000011;
  StringName *pSVar30;
  long lVar31;
  long lVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  long *plVar37;
  long in_FS_OFFSET;
  bool bVar38;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long local_40;
  
  pSVar30 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar36 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar27 = Memory::alloc_static(uVar36,false);
    *(undefined8 *)(param_2 + 0x10) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar36))) {
        uVar36 = 0;
        do {
          *(undefined4 *)((long)__s + uVar36 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar36 * 8) = 0;
          uVar36 = uVar36 + 1;
        } while (uVar21 != uVar36);
      }
      else {
        memset(__s,0,uVar36);
        memset(__s_00,0,uVar34);
      }
      goto LAB_00103f83;
    }
    iVar29 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001040b8;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00103f8f;
LAB_001040da:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar25 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104075;
    }
    _resize_and_rehash((HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00103f83:
    iVar29 = *(int *)(param_2 + 0x2c);
    if (iVar29 != 0) {
LAB_00103f8f:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar36 = CONCAT44(0,uVar2);
      lVar26 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar30 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar30 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar26;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar36;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
      uVar28 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar24 == uVar33) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10) == *(long *)pSVar30))
          {
            plVar25 = (long *)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
            lVar31 = in_RCX[1];
            lVar26 = *plVar25;
            *(long *)(lVar26 + 0x18) = *in_RCX;
            *(long *)(lVar26 + 0x20) = lVar31;
            lVar31 = in_RCX[3];
            *(long *)(lVar26 + 0x28) = in_RCX[2];
            *(long *)(lVar26 + 0x30) = lVar31;
            *(char *)(lVar26 + 0x38) = (char)in_RCX[4];
            plVar25 = (long *)*plVar25;
            goto LAB_00104075;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar28 + 1) * lVar26;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar36;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
          uVar28 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar26, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar36, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar28) - SUB164(auVar7 * auVar15,8)) * lVar26,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar36, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar29 = *(int *)(param_2 + 0x2c);
    }
LAB_001040b8:
    if ((float)uVar23 * __LC11 < (float)(iVar29 + 1)) goto LAB_001040da;
  }
  StringName::StringName((StringName *)&local_78,pSVar30);
  local_70 = *in_RCX;
  lStack_68 = in_RCX[1];
  local_60 = in_RCX[2];
  lStack_58 = in_RCX[3];
  local_50 = in_RCX[4];
  plVar25 = (long *)operator_new(0x40,"");
  *plVar25 = 0;
  plVar25[1] = 0;
  StringName::StringName((StringName *)(plVar25 + 2),(StringName *)&local_78);
  bVar38 = StringName::configured != '\0';
  plVar25[3] = local_70;
  plVar25[4] = lStack_68;
  plVar25[7] = local_50;
  plVar25[5] = local_60;
  plVar25[6] = lStack_58;
  if ((bVar38) && (local_78 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar25;
    *(long **)(param_2 + 0x20) = plVar25;
LAB_001041b2:
    lVar26 = *(long *)pSVar30;
    if (lVar26 != 0) goto LAB_001041bf;
LAB_001042d0:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar26 = *(long *)(param_2 + 0x18);
      *(long **)(lVar26 + 8) = plVar25;
      *plVar25 = lVar26;
      *(long **)(param_2 + 0x18) = plVar25;
      goto LAB_001041b2;
    }
    *puVar3 = plVar25;
    plVar25[1] = (long)puVar3;
    lVar26 = *(long *)pSVar30;
    *(long **)(param_2 + 0x20) = plVar25;
    if (lVar26 == 0) goto LAB_001042d0;
LAB_001041bf:
    uVar23 = *(uint *)(lVar26 + 0x20);
  }
  lVar26 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar36 = (ulong)uVar23;
  uVar33 = 0;
  lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar36 * lVar31;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar26 + lVar32 * 4);
  iVar29 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  plVar22 = plVar25;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar31;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar2 + iVar29) - SUB164(auVar10 * auVar18,8)) * lVar31;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    plVar37 = plVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar36;
      uVar36 = (ulong)uVar24;
      puVar3 = (undefined8 *)(lVar4 + lVar32 * 8);
      plVar37 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar36;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar29 + 1) * lVar31;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar26 + lVar32 * 4);
    iVar29 = SUB164(auVar12 * auVar20,8);
    plVar22 = plVar37;
    uVar24 = *puVar1;
  }
  *(long **)(lVar4 + lVar32 * 8) = plVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00104075:
  *(long **)param_1 = plVar25;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, EngineDebugger::Profiler, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Profiler> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
::operator[](HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
             *this,StringName *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong __n;
  uint *puVar3;
  undefined8 *puVar4;
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
  uint uVar29;
  uint uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 uVar33;
  void *__s_00;
  ulong uVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  long in_FS_OFFSET;
  bool bVar44;
  long local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  long local_40;
  
  lVar32 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar29);
  if (lVar32 == 0) {
LAB_00104898:
    uVar34 = uVar42 * 4;
    __n = uVar42 * 8;
    uVar33 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar42 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar42 != uVar34);
        goto LAB_00104748;
      }
      memset(__s,0,uVar34);
      memset(__s_00,0,__n);
      iVar35 = *(int *)(this + 0x2c);
LAB_0010474c:
      if (iVar35 != 0) {
LAB_00104754:
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar30 = StringName::get_empty_hash();
        }
        else {
          uVar30 = *(uint *)(*(long *)param_1 + 0x20);
        }
        uVar34 = CONCAT44(0,uVar29);
        if (uVar30 == 0) {
          uVar30 = 1;
        }
        uVar41 = 0;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar30 * lVar32;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar34;
        lVar38 = SUB168(auVar13 * auVar25,8);
        uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
        uVar40 = SUB164(auVar13 * auVar25,8);
        if (uVar39 != 0) {
          do {
            if ((uVar30 == uVar39) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar38 * 8) + 0x10) == *(long *)param_1))
            {
              plVar2 = (long *)(*(long *)(this + 8) + (ulong)uVar40 * 8);
              lVar32 = *plVar2;
              *(undefined8 *)(lVar32 + 0x28) = 0;
              *(undefined8 *)(lVar32 + 0x30) = 0;
              *(undefined1 *)(lVar32 + 0x38) = 0;
              *(undefined1 (*) [16])(lVar32 + 0x18) = (undefined1  [16])0x0;
              puVar31 = (undefined8 *)*plVar2;
              goto LAB_00104504;
            }
            uVar41 = uVar41 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(uVar40 + 1) * lVar32;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar34;
            lVar38 = SUB168(auVar14 * auVar26,8);
            uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
            uVar40 = SUB164(auVar14 * auVar26,8);
          } while ((uVar39 != 0) &&
                  (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar32, auVar27._8_8_ = 0,
                  auVar27._0_8_ = uVar34, auVar16._8_8_ = 0,
                  auVar16._0_8_ = (ulong)((uVar29 + uVar40) - SUB164(auVar15 * auVar27,8)) * lVar32,
                  auVar28._8_8_ = 0, auVar28._0_8_ = uVar34, uVar41 <= SUB164(auVar16 * auVar28,8)))
          ;
        }
        iVar35 = *(int *)(this + 0x2c);
      }
      goto LAB_0010453b;
    }
    iVar35 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010453b;
    if (iVar35 != 0) goto LAB_00104754;
LAB_0010455d:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar31 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104504;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    iVar35 = *(int *)(this + 0x2c);
    if (iVar35 != 0) {
      lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar30 = StringName::get_empty_hash();
        lVar32 = *(long *)(this + 8);
      }
      else {
        uVar30 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar30 == 0) {
        uVar30 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar38;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar42;
      lVar36 = SUB168(auVar5 * auVar17,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
      uVar40 = SUB164(auVar5 * auVar17,8);
      if (uVar39 != 0) {
        uVar41 = 0;
        do {
          if ((uVar30 == uVar39) &&
             (*(long *)(*(long *)(lVar32 + lVar36 * 8) + 0x10) == *(long *)param_1)) {
            puVar31 = *(undefined8 **)(lVar32 + (ulong)uVar40 * 8);
            goto LAB_00104504;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar40 + 1) * lVar38;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar42;
          lVar36 = SUB168(auVar6 * auVar18,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
          uVar40 = SUB164(auVar6 * auVar18,8);
        } while ((uVar39 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar39 * lVar38, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar42, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar40 + uVar29) - SUB164(auVar7 * auVar19,8)) * lVar38,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar42, uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
      uVar42 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar32 == 0) goto LAB_00104898;
LAB_00104748:
      iVar35 = *(int *)(this + 0x2c);
      goto LAB_0010474c;
    }
LAB_0010453b:
    if ((float)uVar42 * __LC11 < (float)(iVar35 + 1)) goto LAB_0010455d;
  }
  StringName::StringName((StringName *)&local_78,param_1);
  local_70 = (undefined1  [16])0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  puVar31 = (undefined8 *)operator_new(0x40,"");
  *puVar31 = 0;
  puVar31[1] = 0;
  StringName::StringName((StringName *)(puVar31 + 2),(StringName *)&local_78);
  bVar44 = StringName::configured != '\0';
  puVar31[3] = local_70._0_8_;
  puVar31[4] = local_70._8_8_;
  puVar31[7] = CONCAT71(uStack_4f,local_50);
  puVar31[5] = local_60;
  puVar31[6] = uStack_58;
  if ((bVar44) && (local_78 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar32 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar31;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar32 == 0) goto LAB_00104875;
LAB_00104632:
    uVar29 = *(uint *)(lVar32 + 0x20);
  }
  else {
    *puVar4 = puVar31;
    puVar31[1] = puVar4;
    lVar32 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar32 != 0) goto LAB_00104632;
LAB_00104875:
    uVar29 = StringName::get_empty_hash();
  }
  lVar32 = *(long *)(this + 0x10);
  if (uVar29 == 0) {
    uVar29 = 1;
  }
  uVar42 = (ulong)uVar29;
  uVar40 = 0;
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar30);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar42 * lVar38;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar34;
  lVar37 = SUB168(auVar9 * auVar21,8);
  lVar36 = *(long *)(this + 8);
  puVar3 = (uint *)(lVar32 + lVar37 * 4);
  iVar35 = SUB164(auVar9 * auVar21,8);
  uVar39 = *puVar3;
  puVar4 = puVar31;
  while (uVar39 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar39 * lVar38;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar30 + iVar35) - SUB164(auVar10 * auVar22,8)) * lVar38;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar34;
    uVar29 = SUB164(auVar11 * auVar23,8);
    puVar43 = puVar4;
    if (uVar29 < uVar40) {
      *puVar3 = (uint)uVar42;
      uVar42 = (ulong)uVar39;
      puVar1 = (undefined8 *)(lVar36 + lVar37 * 8);
      puVar43 = (undefined8 *)*puVar1;
      *puVar1 = puVar4;
      uVar40 = uVar29;
    }
    uVar29 = (uint)uVar42;
    uVar40 = uVar40 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar38;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar34;
    lVar37 = SUB168(auVar12 * auVar24,8);
    puVar3 = (uint *)(lVar32 + lVar37 * 4);
    iVar35 = SUB164(auVar12 * auVar24,8);
    puVar4 = puVar43;
    uVar39 = *puVar3;
  }
  *(undefined8 **)(lVar36 + lVar37 * 8) = puVar4;
  *puVar3 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00104504:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar31 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, EngineDebugger::Capture, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Capture> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
::_resize_and_rehash
          (HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
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
/* HashMap<StringName, EngineDebugger::Capture, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Capture> > >::insert(StringName const&, EngineDebugger::Capture const&, bool) */

StringName *
HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
::insert(StringName *param_1,Capture *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
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
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  long *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  bool bVar37;
  long *local_80;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar32 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar21 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_00104c22;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00104d49;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00104c2e;
LAB_00104d6b:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_00104d08;
    }
    _resize_and_rehash((HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00104c22:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_00104c2e:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar2);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar24 == uVar33) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            local_80 = (long *)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            lVar25 = *local_80;
            lVar30 = in_RCX[1];
            *(long *)(lVar25 + 0x18) = *in_RCX;
            *(long *)(lVar25 + 0x20) = lVar30;
            local_80 = (long *)*local_80;
            goto LAB_00104d08;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar32;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_00104d49:
    if ((float)uVar23 * __LC11 < (float)(iVar28 + 1)) goto LAB_00104d6b;
  }
  StringName::StringName((StringName *)&local_58,pSVar29);
  local_50 = *in_RCX;
  lStack_48 = in_RCX[1];
  local_80 = (long *)operator_new(0x28,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)&local_58);
  bVar37 = StringName::configured != '\0';
  local_80[3] = local_50;
  local_80[4] = lStack_48;
  if ((bVar37) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
LAB_00104e27:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_00104e34;
LAB_00104f2d:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar25 = *(long *)(param_2 + 0x18);
      *(long **)(lVar25 + 8) = local_80;
      *local_80 = lVar25;
      *(long **)(param_2 + 0x18) = local_80;
      goto LAB_00104e27;
    }
    *puVar3 = local_80;
    local_80[1] = (long)puVar3;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x20) = local_80;
    if (lVar25 == 0) goto LAB_00104f2d;
LAB_00104e34:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar32 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  plVar22 = local_80;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar2 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    plVar36 = plVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar3 = (undefined8 *)(lVar4 + lVar31 * 8);
      plVar36 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    plVar22 = plVar36;
    uVar24 = *puVar1;
  }
  *(long **)(lVar4 + lVar31 * 8) = plVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00104d08:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, EngineDebugger::Capture, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Capture> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
::operator[](HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
             *this,StringName *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong __n;
  uint *puVar3;
  undefined8 *puVar4;
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
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  void *__s_00;
  ulong uVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  undefined8 *puVar42;
  long in_FS_OFFSET;
  bool bVar43;
  uint local_88;
  undefined8 *local_78;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar41 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar37 = CONCAT44(0,uVar29);
  if (lVar41 == 0) {
LAB_001054f0:
    uVar32 = uVar37 * 4;
    __n = uVar37 * 8;
    uVar31 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(this + 0x10) = uVar31;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar37 != uVar32);
        goto LAB_001053a8;
      }
      memset(__s,0,uVar32);
      memset(__s_00,0,__n);
      iVar33 = *(int *)(this + 0x2c);
LAB_001053ac:
      if (iVar33 != 0) {
LAB_001053b4:
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar30 = StringName::get_empty_hash();
        }
        else {
          uVar30 = *(uint *)(*(long *)param_1 + 0x20);
        }
        uVar32 = CONCAT44(0,uVar29);
        if (uVar30 == 0) {
          uVar30 = 1;
        }
        uVar40 = 0;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar30 * lVar41;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar32;
        lVar36 = SUB168(auVar13 * auVar25,8);
        uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
        uVar39 = SUB164(auVar13 * auVar25,8);
        if (uVar38 != 0) {
          do {
            if ((uVar30 == uVar38) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar36 * 8) + 0x10) == *(long *)param_1))
            {
              plVar2 = (long *)(*(long *)(this + 8) + (ulong)uVar39 * 8);
              lVar41 = *plVar2;
              *(undefined8 *)(lVar41 + 0x18) = 0;
              *(undefined8 *)(lVar41 + 0x20) = 0;
              local_78 = (undefined8 *)*plVar2;
              goto LAB_00105184;
            }
            uVar40 = uVar40 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(uVar39 + 1) * lVar41;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar32;
            lVar36 = SUB168(auVar14 * auVar26,8);
            uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
            uVar39 = SUB164(auVar14 * auVar26,8);
          } while ((uVar38 != 0) &&
                  (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar38 * lVar41, auVar27._8_8_ = 0,
                  auVar27._0_8_ = uVar32, auVar16._8_8_ = 0,
                  auVar16._0_8_ = (ulong)((uVar29 + uVar39) - SUB164(auVar15 * auVar27,8)) * lVar41,
                  auVar28._8_8_ = 0, auVar28._0_8_ = uVar32, uVar40 <= SUB164(auVar16 * auVar28,8)))
          ;
        }
        iVar33 = *(int *)(this + 0x2c);
      }
      goto LAB_001051bb;
    }
    iVar33 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001051bb;
    if (iVar33 != 0) goto LAB_001053b4;
LAB_001051dd:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_78 = (undefined8 *)0x0;
      goto LAB_00105184;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    iVar33 = *(int *)(this + 0x2c);
    if (iVar33 != 0) {
      lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar30 = StringName::get_empty_hash();
        lVar41 = *(long *)(this + 8);
      }
      else {
        uVar30 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar30 == 0) {
        uVar30 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar36;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar37;
      lVar34 = SUB168(auVar5 * auVar17,8);
      uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar34 * 4);
      uVar39 = SUB164(auVar5 * auVar17,8);
      if (uVar38 != 0) {
        uVar40 = 0;
        do {
          if ((uVar30 == uVar38) &&
             (*(long *)(*(long *)(lVar41 + lVar34 * 8) + 0x10) == *(long *)param_1)) {
            local_78 = *(undefined8 **)(lVar41 + (ulong)uVar39 * 8);
            goto LAB_00105184;
          }
          uVar40 = uVar40 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar39 + 1) * lVar36;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar37;
          lVar34 = SUB168(auVar6 * auVar18,8);
          uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar34 * 4);
          uVar39 = SUB164(auVar6 * auVar18,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar38 * lVar36, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar37, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar39 + uVar29) - SUB164(auVar7 * auVar19,8)) * lVar36,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar37, uVar40 <= SUB164(auVar8 * auVar20,8)));
      }
      uVar37 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar41 == 0) goto LAB_001054f0;
LAB_001053a8:
      iVar33 = *(int *)(this + 0x2c);
      goto LAB_001053ac;
    }
LAB_001051bb:
    if ((float)uVar37 * __LC11 < (float)(iVar33 + 1)) goto LAB_001051dd;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  uStack_48 = 0;
  local_78 = (undefined8 *)operator_new(0x28,"");
  *local_78 = 0;
  local_78[1] = 0;
  StringName::StringName((StringName *)(local_78 + 2),(StringName *)&local_58);
  bVar43 = StringName::configured != '\0';
  local_78[3] = local_50;
  local_78[4] = uStack_48;
  if ((bVar43) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = local_78;
  }
  else {
    *puVar4 = local_78;
    local_78[1] = puVar4;
  }
  *(undefined8 **)(this + 0x20) = local_78;
  if (*(long *)param_1 == 0) {
    uVar29 = StringName::get_empty_hash();
  }
  else {
    uVar29 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar41 = *(long *)(this + 0x10);
  if (uVar29 == 0) {
    uVar29 = 1;
  }
  uVar37 = (ulong)uVar29;
  uVar39 = 0;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar32 = CONCAT44(0,uVar30);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar37 * lVar36;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar32;
  lVar35 = SUB168(auVar9 * auVar21,8);
  lVar34 = *(long *)(this + 8);
  puVar3 = (uint *)(lVar41 + lVar35 * 4);
  iVar33 = SUB164(auVar9 * auVar21,8);
  uVar38 = *puVar3;
  puVar4 = local_78;
  while (uVar38 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar38 * lVar36;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar32;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar30 + iVar33) - SUB164(auVar10 * auVar22,8)) * lVar36;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar32;
    local_88 = SUB164(auVar11 * auVar23,8);
    puVar42 = puVar4;
    if (local_88 < uVar39) {
      *puVar3 = (uint)uVar37;
      uVar37 = (ulong)uVar38;
      puVar1 = (undefined8 *)(lVar34 + lVar35 * 8);
      puVar42 = (undefined8 *)*puVar1;
      *puVar1 = puVar4;
      uVar39 = local_88;
    }
    uVar29 = (uint)uVar37;
    uVar39 = uVar39 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar33 + 1) * lVar36;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar32;
    lVar35 = SUB168(auVar12 * auVar24,8);
    puVar3 = (uint *)(lVar41 + lVar35 * 4);
    iVar33 = SUB164(auVar12 * auVar24,8);
    puVar4 = puVar42;
    uVar38 = *puVar3;
  }
  *(undefined8 **)(lVar34 + lVar35 * 8) = puVar4;
  *puVar3 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00105184:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_78 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, RemoteDebuggerPeer* (*)(String const&), HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   RemoteDebuggerPeer* (*)(String const&)> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
::_resize_and_rehash
          (HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
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
/* HashMap<String, RemoteDebuggerPeer* (*)(String const&), HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   RemoteDebuggerPeer* (*)(String const&)> > >::insert(String const&, RemoteDebuggerPeer* (*
   const&)(String const&), bool) */

String * HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
         ::insert(String *param_1,_func_RemoteDebuggerPeer_ptr_String_ptr *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  void *__s;
  undefined1 auVar3 [16];
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
  char cVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  void *__s_00;
  ulong uVar24;
  undefined8 *in_RCX;
  int iVar25;
  uint uVar26;
  undefined7 in_register_00000011;
  String *pSVar27;
  long lVar28;
  long lVar29;
  uint *puVar30;
  uint uVar31;
  char in_R8B;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  undefined1 (*pauStack_a0) [16];
  long local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar27 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar34 = (ulong)uVar21;
    uVar24 = uVar34 * 4;
    uVar38 = uVar34 * 8;
    uVar23 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 0x10) = uVar23;
    __s_00 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar21 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar34 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar38);
      }
      goto LAB_0010587f;
    }
    iVar25 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010588f;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00105ae8;
LAB_001058b1:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      pauStack_a0 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00105a98;
    }
    _resize_and_rehash((HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0010587f:
    iVar25 = *(int *)(param_2 + 0x2c);
    if (iVar25 != 0) {
LAB_00105ae8:
      uVar20 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = String::hash();
      uVar24 = CONCAT44(0,uVar20);
      lVar33 = *(long *)(param_2 + 0x10);
      uVar31 = 1;
      if (uVar32 != 0) {
        uVar31 = uVar32;
      }
      uVar37 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar31 * lVar2;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar24;
      lVar29 = SUB168(auVar7 * auVar15,8);
      uVar32 = *(uint *)(lVar33 + lVar29 * 4);
      uVar26 = SUB164(auVar7 * auVar15,8);
      if (uVar32 != 0) {
        do {
          if (uVar31 == uVar32) {
            cVar19 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar29 * 8) + 0x10),
                                        pSVar27);
            if (cVar19 != '\0') {
              pauStack_a0 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar26 * 8);
              *(undefined8 *)(pauStack_a0[1] + 8) = *in_RCX;
              goto LAB_00105a98;
            }
            lVar33 = *(long *)(param_2 + 0x10);
          }
          uVar37 = uVar37 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar26 + 1) * lVar2;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar24;
          lVar29 = SUB168(auVar8 * auVar16,8);
          uVar32 = *(uint *)(lVar33 + lVar29 * 4);
          uVar26 = SUB164(auVar8 * auVar16,8);
        } while ((uVar32 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar32 * lVar2, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar24, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar20 + uVar26) - SUB164(auVar9 * auVar17,8)) * lVar2,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar24, uVar37 <= SUB164(auVar10 * auVar18,8)));
      }
      iVar25 = *(int *)(param_2 + 0x2c);
    }
LAB_0010588f:
    if ((float)uVar21 * __LC11 < (float)(iVar25 + 1)) goto LAB_001058b1;
  }
  local_58 = 0;
  if (*(long *)pSVar27 == 0) {
    uVar23 = *in_RCX;
    pauStack_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauStack_a0[1] = 0;
    *pauStack_a0 = (undefined1  [16])0x0;
LAB_00105c6f:
    puVar22 = *(undefined8 **)(param_2 + 0x20);
    *(undefined8 *)(pauStack_a0[1] + 8) = uVar23;
    if (puVar22 != (undefined8 *)0x0) goto LAB_00105984;
LAB_00105c81:
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_a0;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar27);
    lVar2 = local_58;
    uVar23 = *in_RCX;
    local_50 = uVar23;
    pauStack_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauStack_a0[1] = 0;
    *(undefined8 *)*pauStack_a0 = 0;
    *(undefined8 *)(*pauStack_a0 + 8) = 0;
    if (lVar2 == 0) goto LAB_00105c6f;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauStack_a0 + 1),(CowData *)&local_58);
    *(undefined8 *)(pauStack_a0[1] + 8) = uVar23;
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58 + -0x10),false);
    }
    puVar22 = *(undefined8 **)(param_2 + 0x20);
    if (puVar22 == (undefined8 *)0x0) goto LAB_00105c81;
LAB_00105984:
    if (in_R8B == '\0') {
      *puVar22 = pauStack_a0;
      *(undefined8 **)(*pauStack_a0 + 8) = puVar22;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_a0;
    }
    else {
      lVar2 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar2 + 8) = pauStack_a0;
      *(long *)*pauStack_a0 = lVar2;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_a0;
    }
  }
  uVar20 = String::hash();
  lVar2 = *(long *)(param_2 + 0x10);
  uVar21 = 1;
  if (uVar20 != 0) {
    uVar21 = uVar20;
  }
  uVar38 = (ulong)uVar21;
  uVar20 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar24 = CONCAT44(0,uVar20);
  lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar38 * lVar33;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar24;
  lVar28 = SUB168(auVar3 * auVar11,8);
  lVar29 = *(long *)(param_2 + 8);
  puVar30 = (uint *)(lVar2 + lVar28 * 4);
  iVar25 = SUB164(auVar3 * auVar11,8);
  uVar31 = *puVar30;
  pauVar36 = pauStack_a0;
  if (uVar31 != 0) {
    uVar32 = 0;
    pauVar35 = pauStack_a0;
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar31 * lVar33;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar24;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)((uVar20 + iVar25) - SUB164(auVar4 * auVar12,8)) * lVar33;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar24;
      uVar21 = SUB164(auVar5 * auVar13,8);
      pauVar36 = pauVar35;
      if (uVar21 < uVar32) {
        *puVar30 = (uint)uVar38;
        uVar38 = (ulong)uVar31;
        puVar22 = (undefined8 *)(lVar29 + lVar28 * 8);
        pauVar36 = (undefined1 (*) [16])*puVar22;
        *puVar22 = pauVar35;
        uVar32 = uVar21;
      }
      uVar21 = (uint)uVar38;
      uVar32 = uVar32 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)(iVar25 + 1) * lVar33;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar24;
      lVar28 = SUB168(auVar6 * auVar14,8);
      puVar30 = (uint *)(lVar2 + lVar28 * 4);
      iVar25 = SUB164(auVar6 * auVar14,8);
      uVar31 = *puVar30;
      pauVar35 = pauVar36;
    } while (uVar31 != 0);
  }
  *(undefined1 (**) [16])(lVar29 + lVar28 * 8) = pauVar36;
  *puVar30 = uVar21;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00105a98:
  *(undefined1 (**) [16])param_1 = pauStack_a0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, RemoteDebuggerPeer* (*)(String const&), HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   RemoteDebuggerPeer* (*)(String const&)> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
::operator[](HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
             *this,String *param_1)

{
  long *plVar1;
  ulong __n;
  long lVar2;
  void *__s;
  undefined1 auVar3 [16];
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
  char cVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 (*pauVar31) [16];
  undefined8 *puVar32;
  undefined8 uVar33;
  void *__s_00;
  ulong uVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  long lVar40;
  uint *puVar41;
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  uint uVar44;
  uint uVar45;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00106240:
    uVar38 = (ulong)uVar29;
    uVar34 = uVar38 * 4;
    __n = uVar38 * 8;
    uVar33 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if (uVar29 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar38 != uVar34);
        goto LAB_001060ea;
      }
      memset(__s,0,uVar34);
      memset(__s_00,0,__n);
      iVar35 = *(int *)(this + 0x2c);
LAB_001060ee:
      if (iVar35 != 0) {
LAB_001060f6:
        uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar39 = String::hash();
        uVar38 = CONCAT44(0,uVar28);
        lVar40 = *(long *)(this + 0x10);
        uVar30 = 1;
        if (uVar39 != 0) {
          uVar30 = uVar39;
        }
        uVar45 = 0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar30 * lVar2;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar37 = SUB168(auVar11 * auVar23,8);
        uVar39 = *(uint *)(lVar40 + lVar37 * 4);
        uVar44 = SUB164(auVar11 * auVar23,8);
        if (uVar39 != 0) {
          do {
            if (uVar30 == uVar39) {
              cVar27 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10),
                                          param_1);
              if (cVar27 != '\0') {
                pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar44 * 8);
                *(undefined8 *)(pauVar31[1] + 8) = 0;
                goto LAB_00105fa8;
              }
              lVar40 = *(long *)(this + 0x10);
            }
            uVar45 = uVar45 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar44 + 1) * lVar2;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar38;
            lVar37 = SUB168(auVar12 * auVar24,8);
            uVar39 = *(uint *)(lVar40 + lVar37 * 4);
            uVar44 = SUB164(auVar12 * auVar24,8);
          } while ((uVar39 != 0) &&
                  (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar39 * lVar2, auVar25._8_8_ = 0,
                  auVar25._0_8_ = uVar38, auVar14._8_8_ = 0,
                  auVar14._0_8_ = (ulong)((uVar28 + uVar44) - SUB164(auVar13 * auVar25,8)) * lVar2,
                  auVar26._8_8_ = 0, auVar26._0_8_ = uVar38, uVar45 <= SUB164(auVar14 * auVar26,8)))
          ;
        }
        iVar35 = *(int *)(this + 0x2c);
      }
      uVar38 = (ulong)uVar29;
      goto LAB_00105dd0;
    }
    iVar35 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00105dd0;
    if (iVar35 != 0) goto LAB_001060f6;
LAB_00105df2:
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar31 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00105fa8;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    iVar35 = *(int *)(this + 0x2c);
    uVar38 = CONCAT44(0,uVar29);
    if (iVar35 != 0) {
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar30 = String::hash();
      lVar40 = *(long *)(this + 0x10);
      uVar28 = 1;
      if (uVar30 != 0) {
        uVar28 = uVar30;
      }
      uVar44 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar28 * lVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar38;
      lVar37 = SUB168(auVar7 * auVar19,8);
      uVar30 = *(uint *)(lVar40 + lVar37 * 4);
      uVar39 = SUB164(auVar7 * auVar19,8);
      if (uVar30 != 0) {
        do {
          if (uVar28 == uVar30) {
            cVar27 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10),param_1
                                       );
            if (cVar27 != '\0') {
              pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar39 * 8);
              goto LAB_00105fa8;
            }
            lVar40 = *(long *)(this + 0x10);
          }
          uVar44 = uVar44 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar39 + 1) * lVar2;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar38;
          lVar37 = SUB168(auVar8 * auVar20,8);
          uVar30 = *(uint *)(lVar40 + lVar37 * 4);
          uVar39 = SUB164(auVar8 * auVar20,8);
        } while ((uVar30 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar30 * lVar2, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar38, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar39 + uVar29) - SUB164(auVar9 * auVar21,8)) * lVar2,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar38, uVar44 <= SUB164(auVar10 * auVar22,8)));
      }
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00106240;
LAB_001060ea:
      iVar35 = *(int *)(this + 0x2c);
      goto LAB_001060ee;
    }
LAB_00105dd0:
    if ((float)uVar38 * __LC11 < (float)(iVar35 + 1)) goto LAB_00105df2;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar31 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar31[1] = 0;
    *pauVar31 = (undefined1  [16])0x0;
LAB_0010622b:
    *(undefined8 *)(pauVar31[1] + 8) = 0;
LAB_00105e9e:
    puVar32 = *(undefined8 **)(this + 0x20);
    if (puVar32 != (undefined8 *)0x0) goto LAB_00105eab;
LAB_001060c5:
    *(undefined1 (**) [16])(this + 0x18) = pauVar31;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar2 = local_58[0];
    local_58[1] = 0;
    pauVar31 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar31[1] = 0;
    *(undefined8 *)*pauVar31 = 0;
    *(undefined8 *)(*pauVar31 + 8) = 0;
    if (lVar2 == 0) goto LAB_0010622b;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar31 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar31[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00105e9e;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar32 = *(undefined8 **)(this + 0x20);
    if (puVar32 == (undefined8 *)0x0) goto LAB_001060c5;
LAB_00105eab:
    *puVar32 = pauVar31;
    *(undefined8 **)(*pauVar31 + 8) = puVar32;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar31;
  uVar28 = String::hash();
  lVar2 = *(long *)(this + 0x10);
  uVar29 = 1;
  if (uVar28 != 0) {
    uVar29 = uVar28;
  }
  uVar34 = (ulong)uVar29;
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar28);
  lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar34 * lVar40;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar38;
  lVar36 = SUB168(auVar3 * auVar15,8);
  lVar37 = *(long *)(this + 8);
  puVar41 = (uint *)(lVar2 + lVar36 * 4);
  iVar35 = SUB164(auVar3 * auVar15,8);
  uVar30 = *puVar41;
  pauVar43 = pauVar31;
  if (uVar30 != 0) {
    uVar39 = 0;
    pauVar42 = pauVar31;
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar30 * lVar40;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar38;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)((uVar28 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar38;
      uVar29 = SUB164(auVar5 * auVar17,8);
      pauVar43 = pauVar42;
      if (uVar29 < uVar39) {
        *puVar41 = (uint)uVar34;
        uVar34 = (ulong)uVar30;
        puVar32 = (undefined8 *)(lVar37 + lVar36 * 8);
        pauVar43 = (undefined1 (*) [16])*puVar32;
        *puVar32 = pauVar42;
        uVar39 = uVar29;
      }
      uVar29 = (uint)uVar34;
      uVar39 = uVar39 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar40;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      lVar36 = SUB168(auVar6 * auVar18,8);
      puVar41 = (uint *)(lVar2 + lVar36 * 4);
      iVar35 = SUB164(auVar6 * auVar18,8);
      uVar30 = *puVar41;
      pauVar42 = pauVar43;
    } while (uVar30 != 0);
  }
  *(undefined1 (**) [16])(lVar37 + lVar36 * 8) = pauVar43;
  *puVar41 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00105fa8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar31[1] + 8;
}



/* EngineDebugger::singleton */

void EngineDebugger::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uVar1;
  
  uVar1 = _LC38;
  profilers._8_16_ = (undefined1  [16])0x0;
  profilers._24_16_ = (undefined1  [16])0x0;
  profilers._40_8_ = _LC38;
  __cxa_atexit(HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
               ::~HashMap,profilers,&__dso_handle);
  captures._40_8_ = uVar1;
  captures._8_16_ = (undefined1  [16])0x0;
  captures._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
               ::~HashMap,captures,&__dso_handle);
  protocols._40_8_ = uVar1;
  protocols._8_16_ = (undefined1  [16])0x0;
  protocols._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
               ::~HashMap,protocols,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<String, RemoteDebuggerPeer* (*)(String const&), HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   RemoteDebuggerPeer* (*)(String const&)> > >::~HashMap() */

void __thiscall
HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
::~HashMap(HashMap<String,RemoteDebuggerPeer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RemoteDebuggerPeer*(*)(String_const&)>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EngineDebugger::Capture, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Capture> > >::~HashMap() */

void __thiscall
HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
::~HashMap(HashMap<StringName,EngineDebugger::Capture,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Capture>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EngineDebugger::Profiler, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EngineDebugger::Profiler> > >::~HashMap() */

void __thiscall
HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
::~HashMap(HashMap<StringName,EngineDebugger::Profiler,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EngineDebugger::Profiler>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


