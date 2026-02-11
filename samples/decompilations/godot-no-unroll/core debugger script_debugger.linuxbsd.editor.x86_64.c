
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



/* ScriptDebugger::set_lines_left(int) */

void __thiscall ScriptDebugger::set_lines_left(ScriptDebugger *this,int param_1)

{
  int *in_FS_OFFSET;
  
  *in_FS_OFFSET = param_1;
  return;
}



/* ScriptDebugger::set_depth(int) */

void __thiscall ScriptDebugger::set_depth(ScriptDebugger *this,int param_1)

{
  int *in_FS_OFFSET;
  
  *in_FS_OFFSET = param_1;
  return;
}



/* ScriptDebugger::breakpoint_find_source(String const&) const */

String * ScriptDebugger::breakpoint_find_source(String *param_1)

{
  CowData *in_RDX;
  
  *(undefined8 *)param_1 = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_1,in_RDX);
  }
  return param_1;
}



/* ScriptDebugger::clear_breakpoints() */

void __thiscall ScriptDebugger::clear_breakpoints(ScriptDebugger *this)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) == 0) {
    return;
  }
  if (*(int *)(this + 0x34) != 0) {
    lVar5 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x18) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0x18) + lVar5) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0x10) + lVar5 * 2);
          pvVar4 = *(void **)((long)pvVar2 + 0x18);
          if (pvVar4 != (void *)0x0) {
            if ((*(int *)((long)pvVar2 + 0x3c) != 0) &&
               ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar2 + 0x38) * 4) == 0
                || (memset(*(void **)((long)pvVar2 + 0x30),0,
                           (ulong)*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)((long)pvVar2 + 0x38) * 4) << 2),
                   *(int *)((long)pvVar2 + 0x3c) != 0)))) {
              lVar3 = 0;
              do {
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar3 * 8) != 0))
                {
                  StringName::unref();
                  pvVar4 = *(void **)((long)pvVar2 + 0x18);
                }
                lVar3 = lVar3 + 1;
              } while ((uint)lVar3 < *(uint *)((long)pvVar2 + 0x3c));
              *(undefined4 *)((long)pvVar2 + 0x3c) = 0;
              if (pvVar4 == (void *)0x0) goto LAB_001001c1;
            }
            Memory::free_static(pvVar4,false);
            Memory::free_static(*(void **)((long)pvVar2 + 0x28),false);
            Memory::free_static(*(void **)((long)pvVar2 + 0x20),false);
            Memory::free_static(*(void **)((long)pvVar2 + 0x30),false);
          }
LAB_001001c1:
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0x10) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  }
  return;
}



/* ScriptDebugger::set_skip_breakpoints(bool) */

void __thiscall ScriptDebugger::set_skip_breakpoints(ScriptDebugger *this,bool param_1)

{
  *this = (ScriptDebugger)param_1;
  return;
}



/* ScriptDebugger::is_skipping_breakpoints() */

ScriptDebugger __thiscall ScriptDebugger::is_skipping_breakpoints(ScriptDebugger *this)

{
  return *this;
}



/* ScriptDebugger::debug(ScriptLanguage*, bool, bool) */

void __thiscall
ScriptDebugger::debug(ScriptDebugger *this,ScriptLanguage *param_1,bool param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 *in_FS_OFFSET;
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = param_1;
  (**(code **)(*EngineDebugger::singleton + 0x18))(EngineDebugger::singleton,param_2,param_3);
  *in_FS_OFFSET = uVar1;
  return;
}



/* ScriptDebugger::get_break_language() const */

undefined8 ScriptDebugger::get_break_language(void)

{
  undefined8 *in_FS_OFFSET;
  
  return *in_FS_OFFSET;
}



/* ScriptDebugger::remove_breakpoint(int, StringName const&) */

void __thiscall
ScriptDebugger::remove_breakpoint(ScriptDebugger *this,int param_1,StringName *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar58;
  uint uVar59;
  long *plVar60;
  uint uVar61;
  uint *puVar62;
  int iVar63;
  long lVar64;
  long lVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  uint uVar70;
  uint uVar71;
  long *plVar72;
  ulong uVar73;
  uint *puVar74;
  uint uVar75;
  ulong uVar76;
  uint *puVar77;
  uint uVar78;
  uint uVar79;
  void *pvVar80;
  int local_3c [3];
  
  if ((*(long *)(this + 0x10) != 0) && (*(int *)(this + 0x34) != 0)) {
    uVar67 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    uVar58 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar61 = (uVar58 ^ uVar58 >> 0xd) * -0x3d4d51cb;
    uVar70 = uVar61 >> 0x10;
    uVar58 = uVar61 ^ uVar70;
    if (uVar61 == uVar70) {
      uVar78 = 1;
      uVar68 = uVar67;
    }
    else {
      uVar68 = uVar58 * uVar67;
      uVar78 = uVar58;
    }
    uVar73 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar73;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar68;
    lVar64 = SUB168(auVar12 * auVar35,8);
    iVar63 = SUB164(auVar12 * auVar35,8);
    uVar59 = *(uint *)(*(long *)(this + 0x18) + lVar64 * 4);
    if (uVar59 != 0) {
      uVar71 = 0;
      do {
        if ((uVar78 == uVar59) &&
           (param_1 == *(int *)(*(long *)(*(long *)(this + 0x10) + lVar64 * 8) + 0x10))) {
          local_3c[0] = param_1;
          plVar60 = (long *)HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                            ::operator[]((HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                                          *)(this + 8),local_3c);
          if ((*plVar60 == 0) || (*(int *)((long)plVar60 + 0x24) == 0)) goto LAB_001006c0;
          uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar60 + 4) * 4);
          lVar64 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar60 + 4) * 8);
          if (*(long *)param_2 == 0) {
            uVar71 = StringName::get_empty_hash();
          }
          else {
            uVar71 = *(uint *)(*(long *)param_2 + 0x20);
          }
          uVar67 = CONCAT44(0,uVar59);
          lVar7 = plVar60[3];
          if (uVar71 == 0) {
            uVar71 = 1;
          }
          auVar16._8_8_ = 0;
          auVar16._0_8_ = (ulong)uVar71 * lVar64;
          auVar39._8_8_ = 0;
          auVar39._0_8_ = uVar67;
          lVar65 = SUB168(auVar16 * auVar39,8);
          uVar79 = *(uint *)(lVar7 + lVar65 * 4);
          iVar63 = SUB164(auVar16 * auVar39,8);
          if (uVar79 == 0) goto LAB_001006c0;
          uVar75 = 0;
          goto LAB_001004d0;
        }
        uVar71 = uVar71 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (iVar63 + 1) * uVar67;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar73;
        lVar64 = SUB168(auVar13 * auVar36,8);
        uVar59 = *(uint *)(*(long *)(this + 0x18) + lVar64 * 4);
        iVar63 = SUB164(auVar13 * auVar36,8);
      } while ((uVar59 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = uVar59 * uVar67, auVar37._8_8_ = 0,
              auVar37._0_8_ = uVar73, auVar15._8_8_ = 0,
              auVar15._0_8_ =
                   ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) + iVar63)
                   - SUB164(auVar14 * auVar37,8)) * uVar67, auVar38._8_8_ = 0,
              auVar38._0_8_ = uVar73, uVar71 <= SUB164(auVar15 * auVar38,8)));
    }
  }
  return;
LAB_001004d0:
  if (uVar71 == uVar79) {
    lVar8 = plVar60[1];
    lVar9 = *plVar60;
    uVar79 = *(uint *)(lVar8 + lVar65 * 4);
    uVar68 = (ulong)uVar79;
    if (*(long *)(lVar9 + uVar68 * 8) == *(long *)param_2) {
      lVar65 = plVar60[2];
      uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar60 + 4) * 4);
      uVar73 = CONCAT44(0,uVar59);
      uVar71 = *(uint *)(lVar65 + uVar68 * 4);
      uVar67 = (ulong)uVar71;
      lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar60 + 4) * 8);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = (ulong)(uVar71 + 1) * lVar10;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar73;
      lVar64 = SUB168(auVar20 * auVar43,8) * 4;
      uVar71 = SUB164(auVar20 * auVar43,8);
      puVar77 = (uint *)(lVar7 + lVar64);
      if ((*puVar77 != 0) &&
         (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)*puVar77 * lVar10, auVar44._8_8_ = 0,
         auVar44._0_8_ = uVar73, auVar22._8_8_ = 0,
         auVar22._0_8_ = (ulong)((uVar59 + uVar71) - SUB164(auVar21 * auVar44,8)) * lVar10,
         auVar45._8_8_ = 0, auVar45._0_8_ = uVar73, uVar66 = (ulong)uVar71, uVar69 = uVar67,
         SUB164(auVar22 * auVar45,8) != 0)) {
        while( true ) {
          uVar67 = uVar66;
          puVar62 = (uint *)(lVar64 + lVar8);
          puVar3 = (uint *)(lVar8 + uVar69 * 4);
          puVar74 = (uint *)(uVar69 * 4 + lVar7);
          puVar1 = (undefined4 *)(lVar65 + (ulong)*puVar62 * 4);
          puVar2 = (undefined4 *)(lVar65 + (ulong)*puVar3 * 4);
          uVar6 = *puVar2;
          *puVar2 = *puVar1;
          *puVar1 = uVar6;
          uVar71 = *puVar77;
          *puVar77 = *puVar74;
          *puVar74 = uVar71;
          uVar71 = *puVar62;
          *puVar62 = *puVar3;
          *puVar3 = uVar71;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = (ulong)((int)uVar67 + 1) * lVar10;
          auVar48._8_8_ = 0;
          auVar48._0_8_ = uVar73;
          uVar66 = SUB168(auVar25 * auVar48,8);
          lVar64 = uVar66 * 4;
          puVar77 = (uint *)(lVar7 + lVar64);
          if ((*puVar77 == 0) ||
             (auVar23._8_8_ = 0, auVar23._0_8_ = (ulong)*puVar77 * lVar10, auVar46._8_8_ = 0,
             auVar46._0_8_ = uVar73, auVar24._8_8_ = 0,
             auVar24._0_8_ =
                  (ulong)((SUB164(auVar25 * auVar48,8) + uVar59) - SUB164(auVar23 * auVar46,8)) *
                  lVar10, auVar47._8_8_ = 0, auVar47._0_8_ = uVar73,
             SUB164(auVar24 * auVar47,8) == 0)) break;
          uVar66 = uVar66 & 0xffffffff;
          uVar69 = uVar67;
        }
      }
      *(undefined4 *)(lVar7 + uVar67 * 4) = 0;
      if ((StringName::configured != '\0') && (*(long *)(lVar9 + uVar68 * 8) != 0)) {
        StringName::unref();
      }
      uVar59 = *(int *)((long)plVar60 + 0x24) - 1;
      *(uint *)((long)plVar60 + 0x24) = uVar59;
      if (uVar79 < uVar59) {
        StringName::StringName
                  ((StringName *)(*plVar60 + uVar68 * 8),
                   (StringName *)(*plVar60 + (ulong)uVar59 * 8));
        uVar67 = (ulong)*(uint *)((long)plVar60 + 0x24);
        if ((StringName::configured != '\0') && (*(long *)(*plVar60 + uVar67 * 8) != 0)) {
          StringName::unref();
          uVar67 = (ulong)*(uint *)((long)plVar60 + 0x24);
        }
        lVar64 = plVar60[2];
        *(undefined4 *)(lVar64 + uVar68 * 4) = *(undefined4 *)(lVar64 + uVar67 * 4);
        *(uint *)(plVar60[1] +
                 (ulong)*(uint *)(lVar64 + (ulong)*(uint *)((long)plVar60 + 0x24) * 4) * 4) = uVar79
        ;
      }
LAB_001006c0:
      lVar64 = HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
               ::operator[]((HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                             *)(this + 8),local_3c);
      if (*(int *)(lVar64 + 0x24) != 0) {
        return;
      }
      lVar64 = *(long *)(this + 0x10);
      if (lVar64 == 0) {
        return;
      }
      if (*(int *)(this + 0x34) == 0) {
        return;
      }
      uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
      uVar73 = CONCAT44(0,uVar59);
      uVar67 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
      uVar68 = uVar67;
      if (uVar61 != uVar70) {
        uVar68 = uVar58 * uVar67;
      }
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar73;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar68;
      uVar68 = SUB168(auVar26 * auVar49,8);
      lVar7 = *(long *)(this + 0x18);
      uVar66 = (ulong)SUB164(auVar26 * auVar49,8);
      uVar58 = *(uint *)(lVar7 + uVar68 * 4);
      uVar61 = 0;
      if (uVar58 == 0) {
        return;
      }
      while( true ) {
        auVar29._8_8_ = 0;
        auVar29._0_8_ = ((int)uVar66 + 1) * uVar67;
        auVar52._8_8_ = 0;
        auVar52._0_8_ = uVar73;
        uVar69 = SUB168(auVar29 * auVar52,8);
        uVar70 = SUB164(auVar29 * auVar52,8);
        if ((uVar78 == uVar58) && (param_1 == *(int *)(*(long *)(lVar64 + uVar68 * 8) + 0x10)))
        break;
        uVar58 = *(uint *)(lVar7 + uVar69 * 4);
        uVar66 = uVar69 & 0xffffffff;
        uVar61 = uVar61 + 1;
        if (uVar58 == 0) {
          return;
        }
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar58 * uVar67;
        auVar50._8_8_ = 0;
        auVar50._0_8_ = uVar73;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = ((uVar59 + uVar70) - SUB164(auVar27 * auVar50,8)) * uVar67;
        auVar51._8_8_ = 0;
        auVar51._0_8_ = uVar73;
        uVar68 = uVar69;
        if (SUB164(auVar28 * auVar51,8) < uVar61) {
          return;
        }
      }
      puVar77 = (uint *)(lVar7 + uVar69 * 4);
      uVar58 = *puVar77;
      if ((uVar58 != 0) &&
         (auVar30._8_8_ = 0, auVar30._0_8_ = uVar58 * uVar67, auVar53._8_8_ = 0,
         auVar53._0_8_ = uVar73, auVar31._8_8_ = 0,
         auVar31._0_8_ = ((uVar70 + uVar59) - SUB164(auVar30 * auVar53,8)) * uVar67,
         auVar54._8_8_ = 0, auVar54._0_8_ = uVar73, uVar68 = (ulong)uVar70, uVar76 = uVar66,
         SUB164(auVar31 * auVar54,8) != 0)) {
        while( true ) {
          uVar66 = uVar68;
          puVar3 = (uint *)(lVar7 + uVar76 * 4);
          *puVar77 = *puVar3;
          puVar4 = (undefined8 *)(lVar64 + uVar69 * 8);
          *puVar3 = uVar58;
          puVar5 = (undefined8 *)(lVar64 + uVar76 * 8);
          uVar11 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar11;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = ((int)uVar66 + 1) * uVar67;
          auVar57._8_8_ = 0;
          auVar57._0_8_ = uVar73;
          uVar69 = SUB168(auVar34 * auVar57,8);
          puVar77 = (uint *)(lVar7 + uVar69 * 4);
          uVar58 = *puVar77;
          if ((uVar58 == 0) ||
             (auVar32._8_8_ = 0, auVar32._0_8_ = uVar58 * uVar67, auVar55._8_8_ = 0,
             auVar55._0_8_ = uVar73, auVar33._8_8_ = 0,
             auVar33._0_8_ =
                  ((SUB164(auVar34 * auVar57,8) + uVar59) - SUB164(auVar32 * auVar55,8)) * uVar67,
             auVar56._8_8_ = 0, auVar56._0_8_ = uVar73, SUB164(auVar33 * auVar56,8) == 0)) break;
          uVar68 = uVar69 & 0xffffffff;
          uVar76 = uVar66;
        }
      }
      plVar60 = (long *)(lVar64 + uVar66 * 8);
      *(undefined4 *)(lVar7 + uVar66 * 4) = 0;
      plVar72 = (long *)*plVar60;
      if (*(long **)(this + 0x20) == plVar72) {
        *(long *)(this + 0x20) = *plVar72;
        plVar72 = (long *)*plVar60;
      }
      if (*(long **)(this + 0x28) == plVar72) {
        *(long *)(this + 0x28) = plVar72[1];
        plVar72 = (long *)*plVar60;
      }
      if ((long *)plVar72[1] != (long *)0x0) {
        *(long *)plVar72[1] = *plVar72;
        plVar72 = (long *)*plVar60;
      }
      if (*plVar72 != 0) {
        *(long *)(*plVar72 + 8) = plVar72[1];
        plVar72 = (long *)*plVar60;
      }
      pvVar80 = (void *)plVar72[3];
      if (pvVar80 != (void *)0x0) {
        if ((*(int *)((long)plVar72 + 0x3c) != 0) &&
           ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar72 + 7) * 4) == 0 ||
            (memset((void *)plVar72[6],0,
                    (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar72 + 7) * 4) * 4
                   ), *(int *)((long)plVar72 + 0x3c) != 0)))) {
          lVar64 = 0;
          do {
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar80 + lVar64 * 8) != 0)) {
              StringName::unref();
              pvVar80 = (void *)plVar72[3];
            }
            lVar64 = lVar64 + 1;
          } while ((uint)lVar64 < *(uint *)((long)plVar72 + 0x3c));
          *(undefined4 *)((long)plVar72 + 0x3c) = 0;
          if (pvVar80 == (void *)0x0) goto LAB_00100923;
        }
        Memory::free_static(pvVar80,false);
        Memory::free_static((void *)plVar72[5],false);
        Memory::free_static((void *)plVar72[4],false);
        Memory::free_static((void *)plVar72[6],false);
      }
LAB_00100923:
      Memory::free_static(plVar72,false);
      *(undefined8 *)(*(long *)(this + 0x10) + uVar66 * 8) = 0;
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + -1;
      return;
    }
  }
  uVar75 = uVar75 + 1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (ulong)(iVar63 + 1) * lVar64;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar67;
  lVar65 = SUB168(auVar17 * auVar40,8);
  uVar79 = *(uint *)(lVar7 + lVar65 * 4);
  iVar63 = SUB164(auVar17 * auVar40,8);
  if ((uVar79 == 0) ||
     (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar79 * lVar64, auVar41._8_8_ = 0,
     auVar41._0_8_ = uVar67, auVar19._8_8_ = 0,
     auVar19._0_8_ = (ulong)((uVar59 + iVar63) - SUB164(auVar18 * auVar41,8)) * lVar64,
     auVar42._8_8_ = 0, auVar42._0_8_ = uVar67, SUB164(auVar19 * auVar42,8) < uVar75))
  goto LAB_001006c0;
  goto LAB_001004d0;
}



/* ScriptDebugger::insert_breakpoint(int, StringName const&) */

void ScriptDebugger::insert_breakpoint(int param_1,StringName *param_2)

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
  undefined1 (*pauVar11) [16];
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined4 in_register_0000003c;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  void *pvVar19;
  long in_FS_OFFSET;
  uint local_5c;
  StringName local_58 [24];
  long local_40;
  
  lVar16 = CONCAT44(in_register_0000003c,param_1);
  local_5c = (uint)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(lVar16 + 0x10) != 0) && (*(int *)(lVar16 + 0x34) != 0)) {
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar16 + 0x30) * 8);
    uVar10 = ((uint)((ulong)param_2 >> 0x10) & 0xffff ^ local_5c) * -0x7a143595;
    uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
    uVar15 = uVar10 ^ uVar10 >> 0x10;
    if (uVar10 == uVar10 >> 0x10) {
      uVar15 = 1;
      uVar13 = uVar1;
    }
    else {
      uVar13 = uVar15 * uVar1;
    }
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar16 + 0x30) * 4));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar17;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar13;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar10 = *(uint *)(*(long *)(lVar16 + 0x18) + lVar14 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar10 != 0) {
      uVar18 = 0;
      do {
        if ((uVar15 == uVar10) &&
           (local_5c == *(uint *)(*(long *)(*(long *)(lVar16 + 0x10) + lVar14 * 8) + 0x10)))
        goto LAB_00100bce;
        uVar18 = uVar18 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (iVar12 + 1) * uVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar10 = *(uint *)(*(long *)(lVar16 + 0x18) + lVar14 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar10 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
              auVar5._0_8_ = ((*(uint *)(hash_table_size_primes +
                                        (ulong)*(uint *)(lVar16 + 0x30) * 4) + iVar12) -
                             SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, uVar18 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  pauVar11 = (undefined1 (*) [16])
             HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
             ::operator[]((HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                           *)(lVar16 + 8),(int *)&local_5c);
  pvVar19 = *(void **)*pauVar11;
  if (pvVar19 != (void *)0x0) {
    if ((*(int *)(pauVar11[2] + 4) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)pauVar11[2] * 4) == 0 ||
        (memset(*(void **)(pauVar11[1] + 8),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)pauVar11[2] * 4) * 4),
        *(int *)(pauVar11[2] + 4) != 0)))) {
      lVar14 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar19 + lVar14 * 8) != 0)) {
          StringName::unref();
          pvVar19 = *(void **)*pauVar11;
        }
        lVar14 = lVar14 + 1;
      } while ((uint)lVar14 < *(uint *)(pauVar11[2] + 4));
      *(undefined4 *)(pauVar11[2] + 4) = 0;
      if (pvVar19 == (void *)0x0) goto LAB_00100bc6;
    }
    Memory::free_static(pvVar19,false);
    Memory::free_static(*(void **)pauVar11[1],false);
    Memory::free_static(*(void **)(*pauVar11 + 8),false);
    Memory::free_static(*(void **)(pauVar11[1] + 8),false);
    *pauVar11 = (undefined1  [16])0x0;
    pauVar11[1] = (undefined1  [16])0x0;
  }
LAB_00100bc6:
  *(undefined8 *)pauVar11[2] = 2;
LAB_00100bce:
  HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
  ::operator[]((HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                *)(lVar16 + 8),(int *)&local_5c);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<ScriptLanguage::StackInfo>::_ref(CowData<ScriptLanguage::StackInfo> const&) [clone
   .part.0] */

void __thiscall
CowData<ScriptLanguage::StackInfo>::_ref(CowData<ScriptLanguage::StackInfo> *this,CowData *param_1)

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



/* ScriptDebugger::get_error_stack_info() const */

ScriptDebugger * __thiscall ScriptDebugger::get_error_stack_info(ScriptDebugger *this)

{
  long lVar1;
  long *in_FS_OFFSET;
  
  if ((char)*in_FS_OFFSET == '\0') {
    lVar1 = *in_FS_OFFSET;
    *(char *)in_FS_OFFSET = '\x01';
    *in_FS_OFFSET = 0;
    __cxa_thread_atexit(Vector<ScriptLanguage::StackInfo>::~Vector,lVar1,&__dso_handle);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*in_FS_OFFSET != 0) {
    CowData<ScriptLanguage::StackInfo>::_ref
              ((CowData<ScriptLanguage::StackInfo> *)(this + 8),(CowData *)*in_FS_OFFSET);
  }
  return this;
}



/* ScriptDebugger::send_error(String const&, String const&, int, String const&, String const&, bool,
   ErrorHandlerType, Vector<ScriptLanguage::StackInfo> const&) */

void __thiscall
ScriptDebugger::send_error
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,undefined4 param_3,
          undefined8 param_4,undefined8 param_5,undefined1 param_6,undefined8 param_8,long param_9)

{
  Vector<ScriptLanguage::StackInfo> *pVVar1;
  long lVar2;
  long *in_FS_OFFSET;
  undefined1 local_58 [8];
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  if ((char)*in_FS_OFFSET == '\0') {
    lVar2 = *in_FS_OFFSET;
    *(char *)in_FS_OFFSET = '\x01';
    *in_FS_OFFSET = 0;
    __cxa_thread_atexit(Vector<ScriptLanguage::StackInfo>::~Vector,lVar2,&__dso_handle);
  }
  local_50[0] = 0;
  if (*(long *)(param_9 + 8) != 0) {
    CowData<ScriptLanguage::StackInfo>::_ref
              ((CowData<ScriptLanguage::StackInfo> *)local_50,(CowData *)(param_9 + 8));
  }
  pVVar1 = (Vector<ScriptLanguage::StackInfo> *)*in_FS_OFFSET;
  Vector<ScriptLanguage::StackInfo>::append_array(pVVar1,local_58);
  CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)local_50);
  (**(code **)(*EngineDebugger::singleton + 0x10))
            (EngineDebugger::singleton,param_1,param_2,param_3,param_4,param_5,param_6);
  if ((char)*in_FS_OFFSET == '\0') {
    *(char *)in_FS_OFFSET = '\x01';
    *in_FS_OFFSET = 0;
    __cxa_thread_atexit(Vector<ScriptLanguage::StackInfo>::~Vector,pVVar1,&__dso_handle);
  }
  if ((*in_FS_OFFSET == 0) || (*(long *)(*in_FS_OFFSET + -8) == 0)) {
    if (local_40 == in_FS_OFFSET[5]) {
      return;
    }
  }
  else if (local_40 == in_FS_OFFSET[5]) {
    CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)*in_FS_OFFSET);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TLS init function for ScriptDebugger::error_stack_info */

void ScriptDebugger::error_stack_info(void)

{
  undefined8 uVar1;
  char *in_FS_OFFSET;
  
  if (*in_FS_OFFSET != '\0') {
    return;
  }
  uVar1 = *(undefined8 *)in_FS_OFFSET;
  *in_FS_OFFSET = '\x01';
  in_FS_OFFSET[0] = '\0';
  in_FS_OFFSET[1] = '\0';
  in_FS_OFFSET[2] = '\0';
  in_FS_OFFSET[3] = '\0';
  in_FS_OFFSET[4] = '\0';
  in_FS_OFFSET[5] = '\0';
  in_FS_OFFSET[6] = '\0';
  in_FS_OFFSET[7] = '\0';
  __cxa_thread_atexit(Vector<ScriptLanguage::StackInfo>::~Vector,uVar1,&__dso_handle);
  return;
}



/* Vector<ScriptLanguage::StackInfo>::~Vector() */

void __thiscall Vector<ScriptLanguage::StackInfo>::~Vector(Vector<ScriptLanguage::StackInfo> *this)

{
  CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)(this + 8));
  return;
}



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          HashSet *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  
  if (this == (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
              param_1) {
    return;
  }
  pvVar9 = *(void **)this;
  if (pvVar9 != (void *)0x0) {
    if ((*(int *)(this + 0x24) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0 ||
        (memset(*(void **)(this + 0x18),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
        *(int *)(this + 0x24) != 0)))) {
      lVar8 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar8 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)this;
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x24));
      *(undefined4 *)(this + 0x24) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_00100fd4;
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x10),false);
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x18),false);
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  }
LAB_00100fd4:
  uVar1 = *(ulong *)(param_1 + 0x20);
  *(ulong *)(this + 0x20) = uVar1;
  if ((int)(uVar1 >> 0x20) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
    uVar1 = (ulong)uVar2 * 4;
    uVar6 = Memory::alloc_static(uVar1,false);
    lVar8 = 0;
    *(undefined8 *)(this + 0x18) = uVar6;
    uVar6 = Memory::alloc_static((ulong)uVar2 * 8,false);
    *(undefined8 *)this = uVar6;
    uVar6 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x10) = uVar6;
    uVar6 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 8) = uVar6;
    if (*(int *)(this + 0x24) != 0) {
      do {
        StringName::StringName
                  ((StringName *)(lVar8 * 8 + *(long *)this),
                   (StringName *)(*(long *)param_1 + lVar8 * 8));
        *(undefined4 *)(*(long *)(this + 0x10) + lVar8 * 4) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar8 * 4);
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x24));
    }
    if (uVar2 != 0) {
      lVar8 = *(long *)(param_1 + 0x18);
      lVar3 = *(long *)(this + 0x18);
      uVar7 = 0;
      lVar4 = *(long *)(param_1 + 8);
      lVar5 = *(long *)(this + 8);
      do {
        *(undefined4 *)(lVar3 + uVar7) = *(undefined4 *)(lVar8 + uVar7);
        *(undefined4 *)(lVar5 + uVar7) = *(undefined4 *)(lVar4 + uVar7);
        uVar7 = uVar7 + 4;
      } while (uVar7 != uVar1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >,
   HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::operator[](HashMap<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  undefined8 uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  int iVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  uint uVar55;
  long lVar56;
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  void *local_a8;
  HashSet local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  uVar37 = _LC6;
  local_a8 = *(void **)(this + 8);
  uVar40 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar53 = CONCAT44(0,uVar39);
  if (local_a8 == (void *)0x0) {
    uVar41 = uVar53 * 4;
    local_68[0] = (HashSet)0x0;
    local_68[1] = (HashSet)0x0;
    local_68[2] = (HashSet)0x0;
    local_68[3] = (HashSet)0x0;
    local_68[4] = (HashSet)0x0;
    local_68[5] = (HashSet)0x0;
    local_68[6] = (HashSet)0x0;
    local_68[7] = (HashSet)0x0;
    local_68[8] = (HashSet)0x0;
    local_68[9] = (HashSet)0x0;
    local_68[10] = (HashSet)0x0;
    local_68[0xb] = (HashSet)0x0;
    local_68[0xc] = (HashSet)0x0;
    local_68[0xd] = (HashSet)0x0;
    local_68[0xe] = (HashSet)0x0;
    local_68[0xf] = (HashSet)0x0;
    uVar50 = uVar53 * 8;
    local_58 = (undefined1  [16])0x0;
    local_48 = _LC6;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    local_a8 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = local_a8;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar40 = *param_1;
      if (local_a8 == (void *)0x0) goto LAB_00101443;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_a8 + uVar50)) &&
         (local_a8 < (void *)((long)pvVar3 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_a8 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar53 != uVar41);
        iVar44 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar41);
        memset(local_a8,0,uVar50);
        iVar44 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar56 = *(long *)(this + 0x10);
      goto LAB_00101352;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 == 0) {
      local_48 = _LC6;
      local_68[0] = (HashSet)0x0;
      local_68[1] = (HashSet)0x0;
      local_68[2] = (HashSet)0x0;
      local_68[3] = (HashSet)0x0;
      local_68[4] = (HashSet)0x0;
      local_68[5] = (HashSet)0x0;
      local_68[6] = (HashSet)0x0;
      local_68[7] = (HashSet)0x0;
      local_68[8] = (HashSet)0x0;
      local_68[9] = (HashSet)0x0;
      local_68[10] = (HashSet)0x0;
      local_68[0xb] = (HashSet)0x0;
      local_68[0xc] = (HashSet)0x0;
      local_68[0xd] = (HashSet)0x0;
      local_68[0xe] = (HashSet)0x0;
      local_68[0xf] = (HashSet)0x0;
      local_58 = (undefined1  [16])0x0;
    }
    else {
      uVar50 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar45 = uVar50;
      }
      else {
        uVar45 = uVar54 * uVar50;
      }
      lVar56 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar53;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar38 = *(uint *)(lVar56 + lVar46 * 4);
      uVar55 = SUB164(auVar4 * auVar20,8);
      if (uVar38 != 0) {
        uVar52 = 0;
        do {
          if ((uVar54 == uVar38) &&
             (uVar40 == *(uint *)(*(long *)((long)local_a8 + lVar46 * 8) + 0x10))) {
            pauVar43 = *(undefined1 (**) [16])((long)local_a8 + (ulong)uVar55 * 8);
            goto LAB_00101301;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar55 + 1) * uVar50;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar53;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar38 = *(uint *)(lVar56 + lVar46 * 4);
          uVar55 = SUB164(auVar5 * auVar21,8);
        } while ((uVar38 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar38 * uVar50, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar53, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar39 + uVar55) - SUB164(auVar6 * auVar22,8)) * uVar50,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar53, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
      local_68[0] = (HashSet)0x0;
      local_68[1] = (HashSet)0x0;
      local_68[2] = (HashSet)0x0;
      local_68[3] = (HashSet)0x0;
      local_68[4] = (HashSet)0x0;
      local_68[5] = (HashSet)0x0;
      local_68[6] = (HashSet)0x0;
      local_68[7] = (HashSet)0x0;
      local_68[8] = (HashSet)0x0;
      local_68[9] = (HashSet)0x0;
      local_68[10] = (HashSet)0x0;
      local_68[0xb] = (HashSet)0x0;
      local_68[0xc] = (HashSet)0x0;
      local_68[0xd] = (HashSet)0x0;
      local_68[0xe] = (HashSet)0x0;
      local_68[0xf] = (HashSet)0x0;
      local_48 = _LC6;
      local_58 = (undefined1  [16])0x0;
LAB_00101352:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar50 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar39 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar38 = 1;
        uVar47 = uVar50;
      }
      else {
        uVar47 = uVar38 * uVar50;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar45;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar47;
      lVar46 = SUB168(auVar8 * auVar24,8);
      uVar39 = *(uint *)(lVar56 + lVar46 * 4);
      uVar54 = SUB164(auVar8 * auVar24,8);
      if (uVar39 != 0) {
        uVar55 = 0;
        do {
          if ((uVar38 == uVar39) &&
             (*(uint *)(*(long *)((long)local_a8 + lVar46 * 8) + 0x10) == uVar40)) {
            HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator=
                      ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                        *)(*(long *)((long)local_a8 + (ulong)uVar54 * 8) + 0x18),local_68);
            pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar54 * 8);
            goto LAB_00101301;
          }
          uVar55 = uVar55 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (uVar54 + 1) * uVar50;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar46 = SUB168(auVar9 * auVar25,8);
          uVar39 = *(uint *)(lVar56 + lVar46 * 4);
          uVar54 = SUB164(auVar9 * auVar25,8);
        } while ((uVar39 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar39 * uVar50, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar45, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar10 * auVar26,8)) * uVar50, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar45, uVar55 <= SUB164(auVar11 * auVar27,8)));
      }
    }
  }
LAB_00101443:
  if ((float)uVar53 * __LC0 < (float)(iVar44 + 1)) {
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00101301;
    }
    uVar41 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar41 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar50 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = uVar50 * 4;
    uVar53 = uVar50 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar53)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar50);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar53);
      }
    }
    if (uVar39 != 0) {
      uVar41 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar40 != 0) {
          lVar56 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar53 = CONCAT44(0,uVar38);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar40 * lVar46;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar53;
          lVar48 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar56 + lVar48 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar54 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_a8 + uVar41 * 8);
          while (uVar54 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar54 * lVar46;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar53;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar53;
            uVar52 = SUB164(auVar14 * auVar30,8);
            uVar51 = uVar42;
            if (uVar52 < uVar55) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar51 = *puVar2;
              *puVar2 = uVar42;
              uVar40 = uVar54;
              uVar55 = uVar52;
            }
            uVar55 = uVar55 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar53;
            lVar48 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar56 + lVar48 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar42 = uVar51;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(local_a8,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar44 = *param_1;
  pauVar43 = (undefined1 (*) [16])operator_new(0x40,"");
  *pauVar43 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar43[1] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar43[2] + 8) = (undefined1  [16])0x0;
  *(int *)pauVar43[1] = iVar44;
  *(undefined8 *)(pauVar43[3] + 8) = uVar37;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar40 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
  uVar40 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar41 = 1;
    uVar40 = 1;
  }
  else {
    uVar41 = (ulong)uVar40;
  }
  uVar54 = 0;
  lVar56 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar53 = CONCAT44(0,uVar39);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar41 * lVar46;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar53;
  lVar49 = SUB168(auVar16 * auVar32,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar56 + lVar49 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar38 = *puVar1;
  pauVar36 = pauVar43;
  while (uVar38 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar38 * lVar46;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar53;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar53;
    uVar55 = SUB164(auVar18 * auVar34,8);
    pauVar57 = pauVar36;
    if (uVar55 < uVar54) {
      *puVar1 = uVar40;
      puVar2 = (undefined8 *)(lVar48 + lVar49 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar40 = uVar38;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar53;
    lVar49 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar56 + lVar49 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    pauVar36 = pauVar57;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar48 + lVar49 * 8) = pauVar36;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00101301:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar43[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  void *pvVar1;
  void *pvVar2;
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
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00101a6c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_00101a6c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00101eb8;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC0) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00101d95;
LAB_00101ef6:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_00101eb8;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_00101ef6;
LAB_00101d95:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_00101eb8:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* CowData<ScriptLanguage::StackInfo>::_unref() */

void __thiscall CowData<ScriptLanguage::StackInfo>::_unref(CowData<ScriptLanguage::StackInfo> *this)

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
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 3;
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



/* CowData<ScriptLanguage::StackInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ScriptLanguage::StackInfo>::_copy_on_write(CowData<ScriptLanguage::StackInfo> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData<char32_t> *this_00;
  ulong uVar4;
  CowData *pCVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar4 = lVar1 * 0x18 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar5 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar3));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar5 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar5);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar5 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar5 + 8);
        }
        lVar6 = lVar6 + 1;
        *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(pCVar5 + 0x10);
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<ScriptLanguage::StackInfo>::_realloc(long) */

undefined8 __thiscall
CowData<ScriptLanguage::StackInfo>::_realloc(CowData<ScriptLanguage::StackInfo> *this,long param_1)

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
/* Vector<ScriptLanguage::StackInfo>::append_array(Vector<ScriptLanguage::StackInfo>) */

void __thiscall
Vector<ScriptLanguage::StackInfo>::append_array
          (Vector<ScriptLanguage::StackInfo> *this,long param_2)

{
  long *plVar1;
  CowData *pCVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  CowData<char32_t> *this_00;
  CowData<ScriptLanguage::StackInfo> *local_50;
  long local_48;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  uVar4 = *(ulong *)(*(long *)(param_2 + 8) + -8);
  if (uVar4 == 0) {
    return;
  }
  if (*(long *)(this + 8) == 0) {
    if (-1 < (long)uVar4) {
      CowData<ScriptLanguage::StackInfo>::_copy_on_write
                ((CowData<ScriptLanguage::StackInfo> *)(this + 8));
      lVar13 = 0;
      local_48 = 0;
      uVar9 = uVar4;
      goto LAB_001024e1;
    }
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(this + 8) + -8);
    uVar9 = uVar4 + lVar13;
    if (-1 < (long)uVar9) {
      if (uVar9 == 0) {
        CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)(this + 8))
        ;
        goto LAB_00102608;
      }
      CowData<ScriptLanguage::StackInfo>::_copy_on_write
                ((CowData<ScriptLanguage::StackInfo> *)(this + 8));
      local_48 = lVar13 * 0x18;
      if (local_48 != 0) {
        uVar11 = local_48 - 1U | local_48 - 1U >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        local_48 = (uVar11 | uVar11 >> 0x20) + 1;
      }
LAB_001024e1:
      local_50 = (CowData<ScriptLanguage::StackInfo> *)(this + 8);
      if (uVar9 * 0x18 != 0) {
        uVar11 = uVar9 * 0x18 - 1;
        uVar11 = uVar11 | uVar11 >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        uVar11 = uVar11 | uVar11 >> 0x20;
        lVar15 = uVar11 + 1;
        if (lVar15 != 0) {
          uVar12 = uVar9;
          if ((long)uVar9 <= lVar13) {
            while (lVar10 = *(long *)(this + 8), lVar10 != 0) {
              if (*(ulong *)(lVar10 + -8) <= uVar12) {
                if (lVar15 != local_48) {
                  iVar6 = CowData<ScriptLanguage::StackInfo>::_realloc(local_50,lVar15);
                  if (iVar6 != 0) goto LAB_00102608;
                  lVar10 = *(long *)(this + 8);
                  if (lVar10 == 0) {
                    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
                }
                *(ulong *)(lVar10 + -8) = uVar9;
                goto LAB_00102608;
              }
              plVar3 = (long *)(lVar10 + uVar12 * 0x18);
              if (plVar3[1] != 0) {
                LOCK();
                plVar1 = (long *)(plVar3[1] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar10 = plVar3[1];
                  plVar3[1] = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              if (*plVar3 != 0) {
                LOCK();
                plVar1 = (long *)(*plVar3 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar10 = *plVar3;
                  *plVar3 = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              uVar12 = uVar12 + 1;
            }
            goto LAB_001028af;
          }
          if (lVar15 == local_48) {
LAB_001027ef:
            puVar14 = *(undefined8 **)(this + 8);
            if (puVar14 == (undefined8 *)0x0) {
LAB_001028af:
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            lVar15 = puVar14[-1];
            if (lVar15 < (long)uVar9) goto LAB_00102806;
          }
          else {
            if (lVar13 != 0) {
              iVar6 = CowData<ScriptLanguage::StackInfo>::_realloc(local_50,lVar15);
              if (iVar6 != 0) goto LAB_00102608;
              goto LAB_001027ef;
            }
            puVar7 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
            if (puVar7 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              goto LAB_00102608;
            }
            puVar14 = puVar7 + 2;
            *puVar7 = 1;
            puVar7[1] = 0;
            lVar15 = 0;
            *(undefined8 **)(this + 8) = puVar14;
LAB_00102806:
            pauVar8 = (undefined1 (*) [16])(puVar14 + lVar15 * 3);
            do {
              *pauVar8 = (undefined1  [16])0x0;
              pauVar8 = (undefined1 (*) [16])(pauVar8[1] + 8);
            } while (pauVar8 != (undefined1 (*) [16])(puVar14 + uVar9 * 3));
          }
          puVar14[-1] = uVar9;
          goto LAB_00102608;
        }
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
      goto LAB_00102608;
    }
  }
  _err_print_error("resize","./core/templates/cowdata.h",0x157,
                   "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_00102608:
  local_50 = (CowData<ScriptLanguage::StackInfo> *)(this + 8);
  if (0 < (long)uVar4) {
    uVar9 = 0;
    lVar13 = lVar13 * 0x18;
    do {
      lVar15 = *(long *)(param_2 + 8);
      if (lVar15 == 0) {
        lVar10 = 0;
LAB_00102696:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar9,lVar10,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar10 = *(long *)(lVar15 + -8);
      if (lVar10 <= (long)uVar9) goto LAB_00102696;
      pCVar2 = (CowData *)(lVar15 + uVar9 * 0x18);
      CowData<ScriptLanguage::StackInfo>::_copy_on_write(local_50);
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar13);
      if (*(long *)this_00 != *(long *)pCVar2) {
        CowData<char32_t>::_ref(this_00,pCVar2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(pCVar2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,pCVar2 + 8);
      }
      uVar9 = uVar9 + 1;
      lVar13 = lVar13 + 0x18;
      *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(pCVar2 + 0x10);
    } while (uVar9 != uVar4);
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* Vector<ScriptLanguage::StackInfo>::~Vector() */

void __thiscall Vector<ScriptLanguage::StackInfo>::~Vector(Vector<ScriptLanguage::StackInfo> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


