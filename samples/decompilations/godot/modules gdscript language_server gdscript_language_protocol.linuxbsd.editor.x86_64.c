
/* HashMap<int, Ref<GDScriptLanguageProtocol::LSPeer>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   Ref<GDScriptLanguageProtocol::LSPeer> > > >::_lookup_pos(int const&, unsigned int&) const [clone
   .isra.0] */

undefined8 __thiscall
HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
::_lookup_pos(HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
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



/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */

void __thiscall CowData<char>::_ref(CowData<char> *this,CowData *param_1)

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



/* GDScriptLanguageProtocol::is_smart_resolve_enabled() const */

ulong GDScriptLanguageProtocol::is_smart_resolve_enabled(void)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "network/language_server/enable_smart_resolve";
  local_40 = 0x2c;
  String::parse_latin1((StrRange *)&local_50);
  _EDITOR_GET((String *)local_38);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(extraout_var,bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptLanguageProtocol::on_client_disconnected(int const&) */

void __thiscall
GDScriptLanguageProtocol::on_client_disconnected(GDScriptLanguageProtocol *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  Object *pOVar10;
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
  char cVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  uint *puVar40;
  ulong uVar41;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar6 = *(long *)(this + 0x1b0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar6 != 0) && (*(int *)(this + 0x1d4) != 0)) {
    uVar35 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
    uVar41 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
    uVar30 = (uVar35 >> 0x10 ^ uVar35) * -0x7a143595;
    uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
    uVar34 = uVar30 ^ uVar30 >> 0x10;
    if (uVar30 == uVar30 >> 0x10) {
      uVar34 = 1;
      uVar32 = uVar7;
    }
    else {
      uVar32 = uVar34 * uVar7;
    }
    lVar8 = *(long *)(this + 0x1b8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar41;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar32;
    uVar32 = SUB168(auVar11 * auVar20,8);
    uVar30 = *(uint *)(lVar8 + uVar32 * 4);
    uVar37 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar30 != 0) {
      uVar39 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = ((int)uVar37 + 1) * uVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar41;
        uVar33 = SUB168(auVar14 * auVar23,8);
        uVar31 = SUB164(auVar14 * auVar23,8);
        if ((uVar34 == uVar30) && (uVar35 == *(uint *)(*(long *)(lVar6 + uVar32 * 8) + 0x10))) {
          puVar40 = (uint *)(lVar8 + uVar33 * 4);
          uVar35 = *puVar40;
          if ((uVar35 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = uVar35 * uVar7, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar41, auVar16._8_8_ = 0,
             auVar16._0_8_ = ((uVar31 + uVar5) - SUB164(auVar15 * auVar24,8)) * uVar7,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar41, uVar32 = (ulong)uVar31, uVar38 = uVar37,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar37 = uVar32;
              puVar1 = (uint *)(lVar8 + uVar38 * 4);
              *puVar40 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar33 * 8);
              *puVar1 = uVar35;
              puVar3 = (undefined8 *)(lVar6 + uVar38 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ((int)uVar37 + 1) * uVar7;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar41;
              uVar33 = SUB168(auVar19 * auVar28,8);
              puVar40 = (uint *)(lVar8 + uVar33 * 4);
              uVar35 = *puVar40;
              if ((uVar35 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = uVar35 * uVar7, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar41, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      ((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) * uVar7,
                 auVar27._8_8_ = 0, auVar27._0_8_ = uVar41, SUB164(auVar18 * auVar27,8) == 0))
              break;
              uVar32 = uVar33 & 0xffffffff;
              uVar38 = uVar37;
            }
          }
          plVar4 = (long *)(lVar6 + uVar37 * 8);
          *(undefined4 *)(lVar8 + uVar37 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x1c0) == plVar36) {
            *(long *)(this + 0x1c0) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x1c8) == plVar36) {
            *(long *)(this + 0x1c8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((plVar36[3] != 0) && (cVar29 = RefCounted::unreference(), cVar29 != '\0')) {
            pOVar10 = (Object *)plVar36[3];
            cVar29 = predelete_handler(pOVar10);
            if (cVar29 != '\0') {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 0x1b0) + uVar37 * 8) = 0;
          *(int *)(this + 0x1d4) = *(int *)(this + 0x1d4) + -1;
          break;
        }
        uVar30 = *(uint *)(lVar8 + uVar33 * 4);
        uVar37 = uVar33 & 0xffffffff;
        uVar39 = uVar39 + 1;
      } while ((uVar30 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = uVar30 * uVar7, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar41, auVar13._8_8_ = 0,
              auVar13._0_8_ = ((uVar5 + uVar31) - SUB164(auVar12 * auVar21,8)) * uVar7,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar41, uVar32 = uVar33,
              uVar39 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  local_60 = 0;
  local_50 = 0x12;
  uVar9 = *(undefined8 *)(EditorNode::singleton + 0x5d0);
  local_58 = "[LSP] Disconnected";
  String::parse_latin1((StrRange *)&local_60);
  EditorLog::add_message(uVar9,(StrRange *)&local_60,4);
  lVar6 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar4 = (long *)(local_60 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* GDScriptLanguageProtocol::start(int, IPAddress const&) */

void GDScriptLanguageProtocol::start(int param_1,IPAddress *param_2)

{
  undefined4 in_register_0000003c;
  
  TCPServer::listen((ushort)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x1d8),
                    (IPAddress *)((ulong)param_2 & 0xffff));
  return;
}



/* GDScriptLanguageProtocol::stop() */

void __thiscall GDScriptLanguageProtocol::stop(GDScriptLanguageProtocol *this)

{
  uint uVar1;
  undefined8 *puVar2;
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
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  Object *pOVar20;
  ulong uVar21;
  uint uVar22;
  
  puVar2 = *(undefined8 **)(this + 0x1c0);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      TCPServer::stop();
      return;
    }
    uVar1 = *(uint *)(puVar2 + 2);
    lVar3 = *(long *)(this + 0x1b0);
    if ((lVar3 == 0) || (*(int *)(this + 0x1d4) == 0)) break;
    uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
    uVar15 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar15 ^ uVar15 >> 0x10;
    if (uVar15 == uVar15 >> 0x10) {
      uVar19 = 1;
      uVar17 = uVar4;
    }
    else {
      uVar17 = uVar19 * uVar4;
    }
    uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar21;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar17;
    lVar18 = SUB168(auVar5 * auVar9,8);
    uVar16 = SUB164(auVar5 * auVar9,8);
    uVar15 = *(uint *)(*(long *)(this + 0x1b8) + lVar18 * 4);
    if (uVar15 == 0) break;
    uVar22 = 0;
    while ((uVar15 != uVar19 || (uVar1 != *(uint *)(*(long *)(lVar3 + lVar18 * 8) + 0x10)))) {
      uVar22 = uVar22 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (uVar16 + 1) * uVar4;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar21;
      lVar18 = SUB168(auVar6 * auVar10,8);
      uVar15 = *(uint *)(*(long *)(this + 0x1b8) + lVar18 * 4);
      uVar16 = SUB164(auVar6 * auVar10,8);
      if ((uVar15 == 0) ||
         (auVar7._8_8_ = 0, auVar7._0_8_ = uVar15 * uVar4, auVar11._8_8_ = 0, auVar11._0_8_ = uVar21
         , auVar8._8_8_ = 0,
         auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4) +
                         uVar16) - SUB164(auVar7 * auVar11,8)) * uVar4, auVar12._8_8_ = 0,
         auVar12._0_8_ = uVar21, SUB164(auVar8 * auVar12,8) < uVar22)) goto LAB_00100998;
    }
    pOVar20 = *(Object **)(*(long *)(lVar3 + (ulong)uVar16 * 8) + 0x18);
    if (pOVar20 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    cVar14 = RefCounted::reference();
    if (cVar14 == '\0') {
      pOVar20 = (Object *)0x0;
    }
    StreamPeerTCP::disconnect_from_host();
    cVar14 = RefCounted::unreference();
    if ((cVar14 != '\0') && (cVar14 = predelete_handler(pOVar20), cVar14 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
    puVar2 = (undefined8 *)*puVar2;
  }
LAB_00100998:
  _err_print_error(&_LC28,"./core/templates/hash_map.h",0x140,
                   "FATAL: Condition \"!exists\" is true.","HashMap key not found.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar13 = (code *)invalidInstructionException();
  (*pcVar13)();
}



/* GDScriptLanguageProtocol::is_goto_native_symbols_enabled() const */

ulong GDScriptLanguageProtocol::is_goto_native_symbols_enabled(void)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "network/language_server/show_native_symbols_in_editor";
  local_40 = 0x35;
  String::parse_latin1((StrRange *)&local_50);
  _EDITOR_GET((String *)local_38);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(extraout_var,bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptLanguageProtocol::format_output(String const&) */

String * GDScriptLanguageProtocol::format_output(String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "Content-Length: ";
  local_58 = 0;
  local_40 = 0x10;
  String::parse_latin1((StrRange *)&local_58);
  String::utf8();
  itos((long)&local_48);
  String::operator+=((String *)&local_58,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  String::operator+=((String *)&local_58,"\r\n\r\n");
  String::operator+(param_1,(String *)&local_58);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GDScriptLanguageProtocol::process_message(String const&) */

String * GDScriptLanguageProtocol::process_message(String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JSONRPC::process_string((String *)&local_28);
  if ((local_28 == 0) || (*(uint *)(local_28 + -8) < 2)) {
    *(long *)param_1 = local_28;
  }
  else {
    format_output(param_1);
    lVar2 = local_28;
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptLanguageProtocol::on_client_connected() */

undefined8 __thiscall GDScriptLanguageProtocol::on_client_connected(GDScriptLanguageProtocol *this)

{
  Object *pOVar1;
  char cVar2;
  RefCounted *this_00;
  undefined8 uVar3;
  long in_FS_OFFSET;
  Object *local_60;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TCPServer::take_connection();
  if (*(uint *)(this + 0x1d4) < 8) {
    this_00 = (RefCounted *)operator_new(0x4001b0,"");
    RefCounted::RefCounted(this_00);
    *(undefined8 *)(this_00 + 0x180) = 0;
    *(undefined ***)this_00 = &PTR__initialize_classv_00112218;
    *(undefined4 *)(this_00 + 0x400188) = 0;
    *(undefined2 *)(this_00 + 0x40018c) = 0;
    *(undefined4 *)(this_00 + 0x400190) = 0;
    *(undefined8 *)(this_00 + 0x4001a0) = 0;
    *(undefined4 *)(this_00 + 0x4001a8) = 0;
    postinitialize_handler((Object *)this_00);
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') {
      this_00 = (RefCounted *)0x0;
    }
    pOVar1 = *(Object **)((Object *)this_00 + 0x180);
    if (local_60 != pOVar1) {
      *(Object **)((Object *)this_00 + 0x180) = local_60;
      if (local_60 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)((Object *)this_00 + 0x180) = 0;
        }
      }
      if (pOVar1 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
    }
    HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
    ::insert((int *)&local_48,(Ref *)(this + 0x1a8),(bool)((char)this + -0x1c));
    *(int *)(this + 0x1e4) = *(int *)(this + 0x1e4) + 1;
    local_50 = 0;
    uVar3 = *(undefined8 *)(EditorNode::singleton + 0x5d0);
    local_40 = 0x16;
    local_48 = "[LSP] Connection Taken";
    String::parse_latin1((StrRange *)&local_50);
    EditorLog::add_message(uVar3,(StrRange *)&local_50,4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object *)this_00);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    _err_print_error("on_client_connected",
                     "modules/gdscript/language_server/gdscript_language_protocol.cpp",0x80,
                     "Condition \"clients.size() >= 8\" is true. Returning: FAILED",
                     "Max client limits reached",0);
  }
  if (local_60 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_60);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptLanguageProtocol::GDScriptLanguageProtocol() */

void __thiscall GDScriptLanguageProtocol::GDScriptLanguageProtocol(GDScriptLanguageProtocol *this)

{
  long lVar1;
  char cVar2;
  TCPServer *this_00;
  GDScriptWorkspace *this_01;
  GDScriptTextDocument *this_02;
  Object *pOVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JSONRPC::JSONRPC((JSONRPC *)this);
  *(undefined ***)this = &PTR__initialize_classv_00112378;
  *(undefined8 *)(this + 0x1d0) = 2;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  this[0x200] = (GDScriptLanguageProtocol)0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  this_00 = (TCPServer *)operator_new(0x188,"");
  TCPServer::TCPServer(this_00);
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar4 = *(Object **)(this + 0x1d8);
    if (pOVar4 == (Object *)0x0) goto LAB_0010101b;
    *(undefined8 *)(this + 0x1d8) = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') goto LAB_0010101b;
    this_00 = (TCPServer *)0x0;
    cVar2 = predelete_handler(pOVar4);
    if (cVar2 == '\0') goto LAB_0010101b;
LAB_001013c3:
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    pOVar3 = (Object *)this_00;
    if (this_00 == (TCPServer *)0x0) goto LAB_0010101b;
  }
  else {
    pOVar4 = *(Object **)(this + 0x1d8);
    pOVar3 = pOVar4;
    if (this_00 != (TCPServer *)pOVar4) {
      *(TCPServer **)(this + 0x1d8) = this_00;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x1d8) = 0;
      }
      pOVar3 = (Object *)this_00;
      if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) goto LAB_001013c3;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_0010101b:
  singleton = this;
  this_01 = (GDScriptWorkspace *)operator_new(0x250,"");
  GDScriptWorkspace::GDScriptWorkspace(this_01);
  postinitialize_handler((Object *)this_01);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar4 = *(Object **)(this + 0x1f8);
    if (pOVar4 != (Object *)0x0) {
      *(undefined8 *)(this + 0x1f8) = 0;
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  else {
    pOVar4 = *(Object **)(this + 0x1f8);
    pOVar3 = pOVar4;
    if (this_01 != (GDScriptWorkspace *)pOVar4) {
      *(GDScriptWorkspace **)(this + 0x1f8) = this_01;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x1f8) = 0;
      }
      pOVar3 = (Object *)this_01;
      if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  this_02 = (GDScriptTextDocument *)operator_new(400,"");
  GDScriptTextDocument::GDScriptTextDocument(this_02);
  postinitialize_handler((Object *)this_02);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar4 = *(Object **)(this + 0x1f0);
    if (pOVar4 != (Object *)0x0) {
      *(undefined8 *)(this + 0x1f0) = 0;
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  else {
    pOVar4 = *(Object **)(this + 0x1f0);
    pOVar3 = pOVar4;
    if (this_02 != (GDScriptTextDocument *)pOVar4) {
      *(GDScriptTextDocument **)(this + 0x1f0) = this_02;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x1f0) = 0;
      }
      pOVar3 = (Object *)this_02;
      if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  local_50 = 0;
  local_40 = 0xc;
  local_48 = "textDocument";
  String::parse_latin1((StrRange *)&local_50);
  JSONRPC::set_scope((String *)this,(Object *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_50 = 0;
  local_48 = "completionItem";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_50);
  JSONRPC::set_scope((String *)this,(Object *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_50 = 0;
  local_48 = "workspace";
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_50);
  JSONRPC::set_scope((String *)this,(Object *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  ProjectSettings::get_singleton();
  ProjectSettings::get_resource_path();
  lVar1 = *(long *)(this + 0x1f8);
  if (*(char **)(lVar1 + 0x1b0) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(lVar1 + 0x1b0));
    *(char **)(lVar1 + 0x1b0) = local_48;
    local_48 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptLanguageProtocol::_bind_methods() */

void GDScriptLanguageProtocol::_bind_methods(void)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  long *plVar7;
  MethodBind *pMVar8;
  long *plVar9;
  uint uVar10;
  Variant *pVVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_108 [2];
  long *local_f8;
  char *local_e8;
  undefined1 local_e0 [16];
  char *local_c8;
  undefined *puStack_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  undefined1 auStack_a0 [24];
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  puVar6 = PTR__LC64_00112c40;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_e0._0_8_;
  local_e0 = auVar4 << 0x40;
  local_e8 = "params";
  uVar10 = (uint)&local_a8;
  local_a8 = (Variant *)&local_e8;
  D_METHODP((char *)local_108,(char ***)"initialize",uVar10);
  auStack_a0._0_16_ = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,Dictionary,Dictionary_const&>(initialize);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_e8 = "params";
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_e0._8_8_;
  local_e0 = auVar5 << 0x40;
  local_a8 = (Variant *)&local_e8;
  D_METHODP((char *)local_108,(char ***)"initialized",uVar10);
  auStack_a0._0_16_ = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,Variant_const&>(initialized);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"on_client_connected",0);
  auStack_a0._0_16_ = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,Error>(on_client_connected);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"on_client_disconnected",0);
  auStack_a0._0_16_ = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,int_const&>(on_client_disconnected);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_b8 = "client_id";
  auStack_a0._8_8_ = &local_b8;
  local_c8 = "method";
  puStack_c0 = puVar6;
  local_e0 = (undefined1  [16])0x0;
  local_e8 = (char *)0x0;
  local_b0 = 0;
  local_a8 = (Variant *)&local_c8;
  auStack_a0._0_8_ = &puStack_c0;
  D_METHODP((char *)local_108,(char ***)"notify_client",uVar10);
  Variant::Variant((Variant *)local_88,(Variant *)&local_e8);
  Variant::Variant(local_70,-1);
  local_50 = (undefined1  [16])0x0;
  auStack_a0._0_8_ = local_70;
  local_58 = 0;
  local_a8 = (Variant *)local_88;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,String_const&,Variant_const&,int>
                     (notify_client);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,&local_a8,2);
  pVVar11 = (Variant *)local_40;
  do {
    pVVar1 = pVVar11 + -0x18;
    pVVar11 = pVVar11 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar7 = local_f8;
  } while (pVVar11 != (Variant *)local_88);
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_e8] != '\0') {
    Variant::_clear_internal();
  }
  D_METHODP((char *)local_108,(char ***)"is_smart_resolve_enabled",0);
  local_80 = (undefined1  [16])0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,bool>(is_smart_resolve_enabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"get_text_document",0);
  local_80 = (undefined1  [16])0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,Ref<GDScriptTextDocument>>(get_text_document)
  ;
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"get_workspace",0);
  local_80 = (undefined1  [16])0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,Ref<GDScriptWorkspace>>(get_workspace);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"is_initialized",0);
  local_80 = (undefined1  [16])0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  pMVar8 = create_method_bind<GDScriptLanguageProtocol,bool>(is_initialized);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar12 = 0;
        plVar9 = plVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar12);
      }
      Memory::free_static(plVar7 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<lsp::FileOperationFilter>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<lsp::FileOperationFilter>::_copy_on_write(CowData<lsp::FileOperationFilter> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData *pCVar4;
  ulong uVar5;
  CowData<char32_t> *this_00;
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
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar4 = (CowData *)(lVar6 * 0x10 + *(long *)this);
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar4 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar4);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar4 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar4 + 8);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 0x10;
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



/* CowData<CharString>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<CharString>::_copy_on_write(CowData<CharString> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char> *this_00;
  
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
    this_00 = (CowData<char> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char> **)this = (CowData<char> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* GDScriptLanguageProtocol::LSPeer::send_data() */

int __thiscall GDScriptLanguageProtocol::LSPeer::send_data(LSPeer *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_48;
  long local_40;
  
  plVar8 = *(long **)(this + 0x4001a0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
joined_r0x001024cc:
  do {
    if (plVar8 == (long *)0x0) {
      iVar4 = 0;
LAB_001026c5:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (plVar8[-1] < 1) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,plVar8[-1],"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_48 = 0;
    if (*plVar8 == 0) {
      iVar7 = *(int *)(this + 0x4001a8);
      iVar4 = 0;
    }
    else {
      plVar1 = (long *)(*plVar8 + -0x10);
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) goto LAB_00102574;
        LOCK();
        lVar9 = *plVar1;
        bVar10 = lVar5 == lVar9;
        if (bVar10) {
          *plVar1 = lVar5 + 1;
          lVar9 = lVar5;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar9 != -1) {
        local_48 = *plVar8;
      }
LAB_00102574:
      iVar7 = *(int *)(this + 0x4001a8);
      if (local_48 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_48 + -8);
      }
    }
    if (iVar7 < iVar4) {
      plVar8 = *(long **)(this + 0x180);
      pcVar2 = *(code **)(*plVar8 + 0x158);
      lVar5 = CharString::get_data();
      iVar4 = (*pcVar2)(plVar8,*(int *)(this + 0x4001a8) + lVar5,(iVar4 - iVar7) + -1);
      if (iVar4 != 0) {
        CowData<char>::_unref((CowData<char> *)&local_48);
        goto LAB_001026c5;
      }
      iVar7 = *(int *)(this + 0x4001a8);
      *(int *)(this + 0x4001a8) = iVar7;
      if (local_48 != 0) goto LAB_001024e6;
LAB_001025eb:
      if (-2 < iVar7) {
LAB_001025f8:
        *(undefined4 *)(this + 0x4001a8) = 0;
        if (*(long *)(this + 0x4001a0) == 0) {
          lVar5 = 0;
LAB_00102753:
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,0,lVar5,"p_index","size()","",
                     false,false);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 0x4001a0) + -8);
          if (lVar5 < 1) goto LAB_00102753;
          CowData<CharString>::_copy_on_write((CowData<CharString> *)(this + 0x4001a0));
          plVar8 = *(long **)(this + 0x4001a0);
          if (plVar8 == (long *)0x0) {
            lVar5 = -1;
          }
          else {
            lVar5 = plVar8[-1] + -1;
            if (0 < lVar5) {
              lVar9 = 0;
              do {
                lVar3 = *plVar8;
                lVar6 = plVar8[1];
                if (lVar3 != lVar6) {
                  if (lVar3 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar3 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      lVar3 = *plVar8;
                      *plVar8 = 0;
                      Memory::free_static((void *)(lVar3 + -0x10),false);
                    }
                    lVar6 = plVar8[1];
                  }
                  *plVar8 = lVar6;
                  plVar8[1] = 0;
                }
                lVar9 = lVar9 + 1;
                plVar8 = plVar8 + 1;
              } while (lVar5 != lVar9);
            }
          }
          CowData<CharString>::resize<false>((CowData<CharString> *)(this + 0x4001a0),lVar5);
        }
        if (local_48 != 0) goto LAB_001024f4;
        plVar8 = *(long **)(this + 0x4001a0);
        goto joined_r0x001024cc;
      }
    }
    else {
      if (local_48 == 0) goto LAB_001025eb;
LAB_001024e6:
      if (*(int *)(local_48 + -8) + -1 <= iVar7) goto LAB_001025f8;
LAB_001024f4:
      lVar5 = local_48;
      LOCK();
      plVar8 = (long *)(local_48 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    plVar8 = *(long **)(this + 0x4001a0);
  } while( true );
}



/* Vector<CharString>::push_back(CharString) [clone .isra.0] */

void __thiscall Vector<CharString>::push_back(Vector<CharString> *this,CowData *param_2)

{
  CowData<char> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<CharString>::resize<false>((CowData<CharString> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<CharString>::_copy_on_write((CowData<CharString> *)(this + 8));
        this_00 = (CowData<char> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char>::_ref(this_00,param_2);
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



/* GDScriptLanguageProtocol::request_client(String const&, Variant const&, int) */

void __thiscall
GDScriptLanguageProtocol::request_client
          (GDScriptLanguageProtocol *this,String *param_1,Variant *param_2,int param_3)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_78;
  String local_70 [8];
  ulong local_68;
  ulong local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == -1) && (param_3 = *(int *)(this + 0x1e0), param_3 == 0xffffffff)) {
    _err_print_error("request_client",
                     "modules/gdscript/language_server/gdscript_language_protocol.cpp",0x13c,
                     "Condition \"latest_client_id == -1\" is true.",
                     "GDScript LSP: Can\'t notify client as none was connected.",0,0);
  }
  else {
    cVar4 = HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
            ::_lookup_pos((HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
                           *)(this + 0x1a8),(int *)(ulong)(uint)param_3,(uint *)&local_60);
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("request_client",
                         "modules/gdscript/language_server/gdscript_language_protocol.cpp",0x140,
                         "Condition \"!clients.has(p_client_id)\" is true.",0,0);
        return;
      }
      goto LAB_00102c4d;
    }
    local_60 = local_60 & 0xffffffff00000000;
    cVar4 = HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
            ::_lookup_pos((HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
                           *)(this + 0x1a8),(int *)(ulong)(uint)param_3,(uint *)&local_60);
    if (cVar4 == '\0') {
      _err_print_error(&_LC28,"./core/templates/hash_map.h",0x140,
                       "FATAL: Condition \"!exists\" is true.","HashMap key not found.",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pOVar5 = *(Object **)(*(long *)(*(long *)(this + 0x1b0) + (local_60 & 0xffffffff) * 8) + 0x18);
    if ((pOVar5 == (Object *)0x0) ||
       (local_78 = pOVar5, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_78 = (Object *)0x0;
      _err_print_error("request_client",
                       "modules/gdscript/language_server/gdscript_language_protocol.cpp",0x142,
                       "Condition \"peer.is_null()\" is true.",0,0);
      Ref<GDScriptLanguageProtocol::LSPeer>::unref
                ((Ref<GDScriptLanguageProtocol::LSPeer> *)&local_78);
    }
    else {
      Variant::Variant((Variant *)local_58,*(int *)(this + 0x1e8));
      JSONRPC::make_request(local_70,(Variant *)this,(Variant *)param_1);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)(this + 0x1e8) = *(int *)(this + 0x1e8) + 1;
      Variant::Variant((Variant *)local_58,(Dictionary *)local_70);
      Variant::to_json_string();
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      format_output((String *)&local_60);
      if (local_68 != local_60) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        local_68 = local_60;
        local_60 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      String::utf8();
      Vector<CharString>::push_back((Vector<CharString> *)(pOVar5 + 0x400198));
      uVar3 = local_60;
      if (local_60 == 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Dictionary::~Dictionary((Dictionary *)local_70);
      }
      else {
        LOCK();
        plVar1 = (long *)(local_60 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(uVar3 - 0x10),false);
        }
        pOVar5 = local_78;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Dictionary::~Dictionary((Dictionary *)local_70);
        if (pOVar5 == (Object *)0x0) goto LAB_00102aaa;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00102aaa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102c4d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptLanguageProtocol::notify_client(String const&, Variant const&, int) */

void __thiscall
GDScriptLanguageProtocol::notify_client
          (GDScriptLanguageProtocol *this,String *param_1,Variant *param_2,int param_3)

{
  long *plVar1;
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
  int iVar15;
  ulong uVar16;
  long lVar17;
  Object *pOVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  Object *local_78;
  String local_70 [8];
  ulong local_68;
  ulong local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == -1) && (param_3 = *(int *)(this + 0x1e0), param_3 == 0xffffffff)) {
    _err_print_error("notify_client",
                     "modules/gdscript/language_server/gdscript_language_protocol.cpp",0x127,
                     "Condition \"latest_client_id == -1\" is true.",
                     "GDScript LSP: Can\'t notify client as none was connected.",0);
LAB_00102f24:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(this + 0x1b0);
    if ((lVar2 != 0) && (*(int *)(this + 0x1d4) != 0)) {
      uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
      uVar14 = ((uint)param_3 >> 0x10 ^ param_3) * -0x7a143595;
      uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
      uVar21 = uVar14 ^ uVar14 >> 0x10;
      if (uVar14 == uVar14 >> 0x10) {
        uVar21 = 1;
        uVar16 = uVar3;
      }
      else {
        uVar16 = uVar21 * uVar3;
      }
      uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar19;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar16;
      lVar17 = SUB168(auVar4 * auVar8,8);
      uVar14 = *(uint *)(*(long *)(this + 0x1b8) + lVar17 * 4);
      iVar15 = SUB164(auVar4 * auVar8,8);
      if (uVar14 != 0) {
        uVar20 = 0;
        do {
          if ((uVar21 == uVar14) && (*(uint *)(*(long *)(lVar2 + lVar17 * 8) + 0x10) == param_3)) {
            local_60 = local_60 & 0xffffffff00000000;
            cVar13 = HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
                     ::_lookup_pos((HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
                                    *)(this + 0x1a8),(int *)(ulong)(uint)param_3,(uint *)&local_60);
            if (cVar13 == '\0') {
              _err_print_error(&_LC28,"./core/templates/hash_map.h",0x140,
                               "FATAL: Condition \"!exists\" is true.","HashMap key not found.",0,0)
              ;
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            pOVar18 = *(Object **)(*(long *)(lVar2 + (local_60 & 0xffffffff) * 8) + 0x18);
            if ((pOVar18 == (Object *)0x0) ||
               (local_78 = pOVar18, cVar13 = RefCounted::reference(), cVar13 == '\0')) {
              local_78 = (Object *)0x0;
              _err_print_error("notify_client",
                               "modules/gdscript/language_server/gdscript_language_protocol.cpp",
                               0x12d,"Condition \"peer.is_null()\" is true.",0,0);
              Ref<GDScriptLanguageProtocol::LSPeer>::unref
                        ((Ref<GDScriptLanguageProtocol::LSPeer> *)&local_78);
              goto LAB_00102f24;
            }
            JSONRPC::make_notification(local_70,(Variant *)this);
            Variant::Variant((Variant *)local_58,(Dictionary *)local_70);
            Variant::to_json_string();
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            format_output((String *)&local_60);
            if (local_68 != local_60) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              local_68 = local_60;
              local_60 = 0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            String::utf8();
            Vector<CharString>::push_back((Vector<CharString> *)(pOVar18 + 0x400198));
            uVar3 = local_60;
            if (local_60 == 0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              Dictionary::~Dictionary((Dictionary *)local_70);
            }
            else {
              LOCK();
              plVar1 = (long *)(local_60 - 0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(uVar3 - 0x10),false);
              }
              pOVar18 = local_78;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              Dictionary::~Dictionary((Dictionary *)local_70);
              if (pOVar18 == (Object *)0x0) goto LAB_00102f24;
            }
            cVar13 = RefCounted::unreference();
            if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar18), cVar13 != '\0')) {
              (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
              Memory::free_static(pOVar18,false);
            }
            goto LAB_00102f24;
          }
          uVar20 = uVar20 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (iVar15 + 1) * uVar3;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar19;
          lVar17 = SUB168(auVar5 * auVar9,8);
          uVar14 = *(uint *)(*(long *)(this + 0x1b8) + lVar17 * 4);
          iVar15 = SUB164(auVar5 * auVar9,8);
        } while ((uVar14 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar14 * uVar3, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(this + 0x1d0) * 4) + iVar15) -
                               SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
                auVar11._0_8_ = uVar19, uVar20 <= SUB164(auVar7 * auVar11,8)));
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("notify_client",
                       "modules/gdscript/language_server/gdscript_language_protocol.cpp",299,
                       "Condition \"!clients.has(p_client_id)\" is true.",0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GDScriptLanguageProtocol::initialized(Variant const&) */

void GDScriptLanguageProtocol::initialized(Variant *param_1)

{
  long *plVar1;
  String *pSVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 (*pauVar13) [16];
  uint uVar14;
  long lVar15;
  CowData<char32_t> *this;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined1 (*local_90) [16];
  Dictionary local_88 [8];
  long local_80;
  undefined1 local_78 [16];
  long local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined1 (*) [16])0x0;
  lVar15 = EditorHelp::get_doc_data();
  puVar4 = *(undefined8 **)(lVar15 + 0x20);
  do {
    if (puVar4 == (undefined8 *)0x0) {
      lsp::GodotCapabilities::to_json();
      Variant::Variant((Variant *)local_58,local_88);
      local_80 = 0;
      local_78._8_8_ = 0x15;
      local_78._0_8_ = "gdscript/capabilities";
      String::parse_latin1((StrRange *)&local_80);
      notify_client((GDScriptLanguageProtocol *)param_1,(String *)&local_80,(Variant *)local_58,-1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary(local_88);
      List<lsp::GodotNativeClassInfo,DefaultAllocator>::~List
                ((List<lsp::GodotNativeClassInfo,DefaultAllocator> *)&local_90);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_68 = 0;
    local_78._0_8_ = 0;
    lVar15 = puVar4[3];
    if (lVar15 != 0) {
      plVar1 = (long *)(lVar15 + -0x10);
      do {
        lVar18 = *plVar1;
        lVar15 = local_78._0_8_;
        if (lVar18 == 0) goto LAB_00103139;
        LOCK();
        lVar17 = *plVar1;
        bVar22 = lVar18 == lVar17;
        if (bVar22) {
          *plVar1 = lVar18 + 1;
          lVar17 = lVar18;
        }
        UNLOCK();
      } while (!bVar22);
      if (lVar17 != -1) {
        local_78._0_8_ = puVar4[3];
        lVar15 = local_78._0_8_;
      }
    }
LAB_00103139:
    pSVar2 = (String *)(puVar4 + 3);
    local_78._8_8_ = pSVar2;
    StringName::StringName((StringName *)&local_80,pSVar2,false);
    if ((_get_empty_hash != 0) && (_DAT_0011631c != 0)) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)_lstrip * 4);
      uVar21 = CONCAT44(0,uVar3);
      lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)_lstrip * 8);
      if (local_80 == 0) {
        uVar14 = StringName::get_empty_hash();
      }
      else {
        uVar14 = *(uint *)(local_80 + 0x20);
      }
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar14 * lVar18;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar21;
      lVar17 = SUB168(auVar5 * auVar9,8);
      uVar19 = *(uint *)(_operator__ + lVar17 * 4);
      uVar16 = SUB164(auVar5 * auVar9,8);
      if (uVar19 != 0) {
        uVar20 = 0;
        do {
          if ((uVar19 == uVar14) &&
             (*(long *)(*(long *)(_get_empty_hash + lVar17 * 8) + 0x10) == local_80)) {
            lVar18 = *(long *)(_get_empty_hash + (ulong)uVar16 * 8) + 0x18;
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
            local_68 = lVar18;
            if (local_90 != (undefined1 (*) [16])0x0) goto LAB_0010329e;
            goto LAB_00103440;
          }
          uVar20 = uVar20 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar16 + 1) * lVar18;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar21;
          lVar17 = SUB168(auVar6 * auVar10,8);
          uVar19 = *(uint *)(_operator__ + lVar17 * 4);
          uVar16 = SUB164(auVar6 * auVar10,8);
        } while ((uVar19 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar19 * lVar18, auVar11._8_8_ = 0,
                auVar11._0_8_ = uVar21, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar16) - SUB164(auVar7 * auVar11,8)) * lVar18,
                auVar12._8_8_ = 0, auVar12._0_8_ = uVar21, uVar20 <= SUB164(auVar8 * auVar12,8)));
      }
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    lVar18 = local_68;
    if (local_90 == (undefined1 (*) [16])0x0) {
LAB_00103440:
      lVar18 = local_68;
      local_90 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_90[1] = 0;
      *local_90 = (undefined1  [16])0x0;
    }
LAB_0010329e:
    pauVar13 = local_90;
    this = (CowData<char32_t> *)operator_new(0x30,DefaultAllocator::alloc);
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
    if (lVar15 != 0) {
      CowData<char32_t>::_ref(this,(CowData *)local_78);
    }
    lVar17 = *(long *)(*pauVar13 + 8);
    *(String **)(this + 8) = pSVar2;
    *(long *)(this + 0x10) = lVar18;
    *(long *)(this + 0x20) = lVar17;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined1 (**) [16])(this + 0x28) = pauVar13;
    if (lVar17 != 0) {
      *(CowData<char32_t> **)(lVar17 + 0x18) = this;
    }
    lVar18 = *(long *)*pauVar13;
    *(CowData<char32_t> **)(*pauVar13 + 8) = this;
    if (lVar18 == 0) {
      *(CowData<char32_t> **)*pauVar13 = this;
    }
    *(int *)pauVar13[1] = *(int *)pauVar13[1] + 1;
    if (lVar15 != 0) {
      LOCK();
      plVar1 = (long *)(lVar15 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78._0_8_ + -0x10),false);
      }
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
}



/* GDScriptLanguageProtocol::initialize(Dictionary const&) */

Dictionary * GDScriptLanguageProtocol::initialize(Dictionary *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 uVar9;
  char cVar10;
  int iVar11;
  Variant *pVVar12;
  Variant *in_RDX;
  long lVar13;
  CowData<char32_t> *this;
  Variant *in_RSI;
  long lVar14;
  long in_FS_OFFSET;
  long local_150;
  Variant local_148 [8];
  long local_140;
  Dictionary local_138 [8];
  String local_130 [8];
  long local_128;
  long local_120;
  undefined1 local_118 [8];
  ulong uStack_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined2 local_100;
  undefined1 local_fe;
  bool local_fc;
  undefined1 local_f8;
  Vector<String> local_f0 [8];
  undefined8 local_e8;
  Vector local_e0 [8];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  bool local_ca;
  long local_c0;
  undefined4 local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined2 local_98;
  bool local_94;
  Vector local_90 [8];
  undefined8 local_88 [2];
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  uStack_110 = (ulong)local_118;
  uVar9 = _LC103;
  local_100 = _LC103;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 1;
  local_104 = 1;
  local_fe = 1;
  local_fc = true;
  local_f8 = 1;
  local_e8 = 0;
  local_118 = (undefined1  [8])0x0;
  String::parse_latin1((String *)local_118,".");
  Vector<String>::push_back(local_f0,(String *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  local_118 = (undefined1  [8])0x0;
  String::parse_latin1((String *)local_118,"$");
  Vector<String>::push_back(local_f0,(String *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  local_118 = (undefined1  [8])0x0;
  String::parse_latin1((String *)local_118,"\'");
  Vector<String>::push_back(local_f0,(String *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uStack_110;
  _local_118 = auVar8 << 0x40;
  String::parse_latin1((String *)local_118,"\"");
  Vector<String>::push_back(local_f0,(String *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  local_cc = uVar9;
  _local_118 = (undefined1  [16])0x0;
  local_d8 = 0;
  local_d0 = 0x1000001;
  local_ca = true;
  local_c0 = 0;
  String::parse_latin1((String *)local_118,"**/*.gd");
  uStack_110 = 0;
  String::parse_latin1((String *)&uStack_110,"file");
  if (local_c0 == 0) {
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(local_c0 + -8) + 1;
  }
  iVar11 = CowData<lsp::FileOperationFilter>::resize<false>
                     ((CowData<lsp::FileOperationFilter> *)&local_c0,lVar14);
  if (iVar11 == 0) {
    if (local_c0 == 0) {
      lVar13 = -1;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(local_c0 + -8);
      lVar13 = lVar14 + -1;
      if (-1 < lVar13) {
        CowData<lsp::FileOperationFilter>::_copy_on_write
                  ((CowData<lsp::FileOperationFilter> *)&local_c0);
        this = (CowData<char32_t> *)(lVar13 * 0x10 + local_c0);
        CowData<char32_t>::_ref(this,(CowData *)local_118);
        CowData<char32_t>::_ref(this + 8,(CowData *)&uStack_110);
        goto LAB_001036e7;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar14,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001036e7:
  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  local_b8 = 0;
  local_98 = 1;
  local_b0[0] = 0;
  local_a0 = 0;
  local_94 = true;
  local_88[0] = 0;
  Variant::Variant((Variant *)local_58,"rootUri");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_String((Variant *)&local_150);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"rootPath");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_String(local_148);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  String::to_lower();
  String::to_lower();
  cVar10 = String::operator==((String *)&local_120,(String *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  if (((local_150 == 0) || (*(uint *)(local_150 + -8) < 2)) || (cVar10 == '\0')) {
    local_140 = 0;
    if (*(long *)(*(long *)(in_RSI + 0x1f8) + 0x1b0) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_140,(CowData *)(*(long *)(in_RSI + 0x1f8) + 0x1b0));
    }
    local_120 = 0;
    String::parse_latin1((String *)&local_120,"/");
    String::lstrip((String *)local_118);
    if ((undefined1  [8])local_140 != local_118) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      local_140 = (long)local_118;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uStack_110;
      _local_118 = auVar3 << 0x40;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    operator+((char *)local_118,(String *)"file:///");
    lVar14 = *(long *)(in_RSI + 0x1f8);
    if ((undefined1  [8])*(long *)(lVar14 + 0x1b8) != local_118) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar14 + 0x1b8));
      *(undefined1 (*) [8])(lVar14 + 0x1b8) = local_118;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uStack_110;
      _local_118 = auVar4 << 0x40;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Dictionary::Dictionary(local_138);
    Variant::Variant((Variant *)local_58,(String *)(*(long *)(in_RSI + 0x1f8) + 0x1b0));
    Variant::Variant((Variant *)local_78,"path");
    pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar12,(Variant *)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,local_138);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_110;
    _local_118 = auVar5 << 0x40;
    String::parse_latin1((String *)local_118,"gdscript_client/changeWorkspace");
    JSONRPC::make_notification(local_130,in_RSI);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = *(uint *)(in_RSI + 0x1e0);
    cVar10 = HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
             ::_lookup_pos((HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
                            *)(in_RSI + 0x1a8),(int *)(ulong)uVar1,(uint *)local_118);
    if (cVar10 == '\0') {
      local_120 = 0;
      String::parse_latin1
                ((String *)&local_120,
                 "GDScriptLanguageProtocol: Can\'t initialize invalid peer \'%d\'.");
      vformat<int>((String *)local_118,(int)(String *)&local_120);
      _err_print_error("initialize",
                       "modules/gdscript/language_server/gdscript_language_protocol.cpp",0xc4,
                       "Condition \"!clients.has(latest_client_id)\" is true. Returning: ret.to_json()"
                       ,(String *)local_118,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      Dictionary::Dictionary(param_1);
      Dictionary::Dictionary((Dictionary *)local_118);
      lsp::TextDocumentSyncOptions::to_json();
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
      Variant::Variant((Variant *)local_58,"textDocumentSync");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_120);
      lsp::CompletionOptions::to_json();
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
      Variant::Variant((Variant *)local_58,"completionProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_120);
      local_120 = 0;
      String::parse_latin1((String *)&local_120,",");
      Vector<String>::push_back((Vector<String> *)local_e0,(String *)&local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      local_120 = 0;
      String::parse_latin1((String *)&local_120,"(");
      Vector<String>::push_back((Vector<String> *)local_e0,(String *)&local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      lsp::SignatureHelpOptions::to_json();
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
      Variant::Variant((Variant *)local_58,"signatureHelpProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_120);
      lsp::DocumentOnTypeFormattingOptions::to_json();
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
      Variant::Variant((Variant *)local_58,"documentOnTypeFormattingProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_120);
      lsp::RenameOptions::to_json();
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
      Variant::Variant((Variant *)local_58,"renameProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_120);
      lsp::DocumentLinkOptions::to_json();
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
      Variant::Variant((Variant *)local_58,"documentLinkProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_120);
      Variant::Variant((Variant *)local_78,false);
      Variant::Variant((Variant *)local_58,"colorProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,false);
      Variant::Variant((Variant *)local_58,"foldingRangeProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      lsp::ExecuteCommandOptions::to_json();
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
      Variant::Variant((Variant *)local_58,"executeCommandProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_120);
      Variant::Variant((Variant *)local_78,local_fc);
      Variant::Variant((Variant *)local_58,"hoverProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d0._0_1_);
      Variant::Variant((Variant *)local_58,"definitionProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d0._1_1_);
      Variant::Variant((Variant *)local_58,"typeDefinitionProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d0._2_1_);
      Variant::Variant((Variant *)local_58,"implementationProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d0._3_1_);
      Variant::Variant((Variant *)local_58,"referencesProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_cc._0_1_);
      Variant::Variant((Variant *)local_58,"documentHighlightProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_cc._1_1_);
      Variant::Variant((Variant *)local_58,"documentSymbolProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_ca);
      Variant::Variant((Variant *)local_58,"workspaceSymbolProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      lsp::Workspace::to_json((Workspace *)&local_120);
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
      Variant::Variant((Variant *)local_58,"workspace");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_120);
      Variant::Variant((Variant *)local_78,local_b8._0_1_);
      Variant::Variant((Variant *)local_58,"codeActionProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_b8._2_1_);
      Variant::Variant((Variant *)local_58,"documentFormattingProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_b8._3_1_);
      Variant::Variant((Variant *)local_58,"documentRangeFormattingProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_94);
      Variant::Variant((Variant *)local_58,"declarationProvider");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar12,(Variant *)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(Dictionary *)local_118);
      Variant::Variant((Variant *)local_78,"capabilities");
      pVVar12 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      Variant::operator=(pVVar12,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_118);
      Dictionary::~Dictionary((Dictionary *)local_130);
      Dictionary::~Dictionary(local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      goto LAB_001046c2;
    }
    auVar6._12_4_ = 0;
    auVar6._0_12_ = stack0xfffffffffffffeec;
    _local_118 = auVar6 << 0x20;
    cVar10 = HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
             ::_lookup_pos((HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
                            *)(in_RSI + 0x1a8),(int *)(ulong)uVar1,(uint *)local_118);
    if (cVar10 == '\0') {
      _err_print_error(&_LC28,"./core/templates/hash_map.h",0x140,
                       "FATAL: Condition \"!exists\" is true.","HashMap key not found.",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_128 = 0;
    lVar14 = *(long *)(*(long *)(*(long *)(in_RSI + 0x1b0) + (ulong)(uint)local_118._0_4_ * 8) +
                      0x18);
    if (lVar14 != 0) {
      local_128 = lVar14;
      cVar10 = RefCounted::reference();
      if (cVar10 == '\0') {
        local_128 = 0;
      }
      else {
        Variant::Variant((Variant *)local_58,(Dictionary *)local_130);
        Variant::to_json_string();
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        format_output((String *)local_118);
        if ((undefined1  [8])local_120 != local_118) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
          local_120 = (long)local_118;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uStack_110;
          _local_118 = auVar7 << 0x40;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
        String::utf8();
        Vector<CharString>::push_back((Vector<CharString> *)(lVar14 + 0x400198),(String *)local_118)
        ;
        CowData<char>::_unref((CowData<char> *)local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      }
    }
    Ref<GDScriptLanguageProtocol::LSPeer>::unref
              ((Ref<GDScriptLanguageProtocol::LSPeer> *)&local_128);
    Dictionary::~Dictionary((Dictionary *)local_130);
    Dictionary::~Dictionary(local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  }
  else if (local_150 != *(long *)(*(long *)(in_RSI + 0x1f8) + 0x1b8)) {
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)(*(long *)(in_RSI + 0x1f8) + 0x1b8),(CowData *)&local_150);
  }
  if (in_RSI[0x200] == (Variant)0x0) {
    GDScriptWorkspace::initialize();
    GDScriptTextDocument::initialize();
    in_RSI[0x200] = (Variant)0x1;
  }
  Dictionary::Dictionary(param_1);
  Dictionary::Dictionary((Dictionary *)local_118);
  lsp::TextDocumentSyncOptions::to_json();
  Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
  Variant::Variant((Variant *)local_58,"textDocumentSync");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_120);
  lsp::CompletionOptions::to_json();
  Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
  Variant::Variant((Variant *)local_58,"completionProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_120);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,",");
  Vector<String>::push_back((Vector<String> *)local_e0,(String *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"(");
  Vector<String>::push_back((Vector<String> *)local_e0,(String *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  Dictionary::Dictionary((Dictionary *)&local_120);
  Variant::Variant((Variant *)local_78,local_e0);
  Variant::Variant((Variant *)local_58,"triggerCharacters");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)&local_120);
  if (pVVar12 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar12] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar12 = 0;
    *(int *)pVVar12 = local_78[0];
    *(undefined8 *)(pVVar12 + 8) = local_70;
    *(undefined8 *)(pVVar12 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
  Variant::Variant((Variant *)local_58,"signatureHelpProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_120);
  lsp::DocumentOnTypeFormattingOptions::to_json();
  Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
  Variant::Variant((Variant *)local_58,"documentOnTypeFormattingProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_120);
  Dictionary::Dictionary((Dictionary *)&local_120);
  Variant::Variant((Variant *)local_78,local_98._0_1_);
  Variant::Variant((Variant *)local_58,"prepareProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)&local_120);
  if (pVVar12 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar12] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar12 = 0;
    *(int *)pVVar12 = local_78[0];
    *(undefined8 *)(pVVar12 + 8) = local_70;
    *(undefined8 *)(pVVar12 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
  Variant::Variant((Variant *)local_58,"renameProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_120);
  Dictionary::Dictionary((Dictionary *)&local_120);
  Variant::Variant((Variant *)local_78,local_98._1_1_);
  Variant::Variant((Variant *)local_58,"resolveProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)&local_120);
  if (pVVar12 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar12] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar12 = 0;
    *(int *)pVVar12 = local_78[0];
    *(undefined8 *)(pVVar12 + 8) = local_70;
    *(undefined8 *)(pVVar12 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
  Variant::Variant((Variant *)local_58,"documentLinkProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_120);
  Variant::Variant((Variant *)local_78,false);
  Variant::Variant((Variant *)local_58,"colorProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  Variant::Variant((Variant *)local_58,"foldingRangeProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary((Dictionary *)&local_120);
  Variant::Variant((Variant *)local_78,local_90);
  Variant::Variant((Variant *)local_58,"commands");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)&local_120);
  if (pVVar12 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar12] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar12 = 0;
    *(int *)pVVar12 = local_78[0];
    *(undefined8 *)(pVVar12 + 8) = local_70;
    *(undefined8 *)(pVVar12 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
  Variant::Variant((Variant *)local_58,"executeCommandProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_120);
  Variant::Variant((Variant *)local_78,local_fc);
  Variant::Variant((Variant *)local_58,"hoverProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_d0._0_1_);
  Variant::Variant((Variant *)local_58,"definitionProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_d0._1_1_);
  Variant::Variant((Variant *)local_58,"typeDefinitionProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_d0._2_1_);
  Variant::Variant((Variant *)local_58,"implementationProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_d0._3_1_);
  Variant::Variant((Variant *)local_58,"referencesProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_cc._0_1_);
  Variant::Variant((Variant *)local_58,"documentHighlightProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_cc._1_1_);
  Variant::Variant((Variant *)local_58,"documentSymbolProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_ca);
  Variant::Variant((Variant *)local_58,"workspaceSymbolProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  lsp::Workspace::to_json((Workspace *)&local_120);
  Variant::Variant((Variant *)local_78,(Dictionary *)&local_120);
  Variant::Variant((Variant *)local_58,"workspace");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_120);
  Variant::Variant((Variant *)local_78,local_b8._0_1_);
  Variant::Variant((Variant *)local_58,"codeActionProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_b8._2_1_);
  Variant::Variant((Variant *)local_58,"documentFormattingProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_b8._3_1_);
  Variant::Variant((Variant *)local_58,"documentRangeFormattingProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_94);
  Variant::Variant((Variant *)local_58,"declarationProvider");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_118);
  Variant::operator=(pVVar12,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(Dictionary *)local_118);
  Variant::Variant((Variant *)local_78,"capabilities");
  pVVar12 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar12,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_118);
LAB_001046c2:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<String>::_unref((CowData<String> *)local_88);
  CowData<String>::_unref((CowData<String> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<lsp::FileOperationFilter>::_unref((CowData<lsp::FileOperationFilter> *)&local_c0);
  CowData<String>::_unref((CowData<String> *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptLanguageProtocol::LSPeer::handle_data() */

undefined8 __thiscall GDScriptLanguageProtocol::LSPeer::handle_data(LSPeer *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  long local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  iVar1 = *(int *)(this + 0x400188);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  if (this[0x40018c] == (LSPeer)0x0) {
    while (iVar1 < 0x400000) {
      while( true ) {
        iVar1 = (**(code **)(**(long **)(this + 0x180) + 0x168))
                          (*(long **)(this + 0x180),this + (iVar1 + 0x188),1,&local_4c);
        if (iVar1 != 0) goto LAB_00105b40;
        if (local_4c != 1) goto LAB_00105b68;
        iVar1 = *(int *)(this + 0x400188);
        if (3 < iVar1) break;
        iVar1 = iVar1 + 1;
        *(int *)(this + 0x400188) = iVar1;
      }
      if (((((this + 0x188)[iVar1] == (LSPeer)0xa) && (this[(long)iVar1 + 0x187] == (LSPeer)0xd)) &&
          (this[(long)iVar1 + 0x186] == (LSPeer)0xa)) && (this[(long)iVar1 + 0x185] == (LSPeer)0xd))
      {
        this[(long)iVar1 + 0x185] = (LSPeer)0x0;
        local_40 = 0;
        String::parse_utf8((char *)&local_40,(int)(this + 0x188),true);
        String::substr((int)local_38,(int)(CowData<char32_t> *)&local_40);
        uVar2 = String::to_int();
        *(undefined4 *)(this + 0x400190) = uVar2;
        CowData<char32_t>::_unref(local_38);
        this[0x40018c] = (LSPeer)0x1;
        *(undefined4 *)(this + 0x400188) = 0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
        if (this[0x40018c] == (LSPeer)0x0) {
          uVar3 = 0;
          goto LAB_00105b45;
        }
        iVar1 = *(int *)(this + 0x400188);
        goto LAB_00105aaa;
      }
      iVar1 = iVar1 + 1;
      *(int *)(this + 0x400188) = iVar1;
    }
    *(undefined4 *)(this + 0x400188) = 0;
    _err_print_error("handle_data","modules/gdscript/language_server/gdscript_language_protocol.cpp"
                     ,0x31,"Method/function failed. Returning: ERR_OUT_OF_MEMORY",
                     "Response header too big",0,0);
    uVar3 = 6;
  }
  else {
LAB_00105aaa:
    if (iVar1 < *(int *)(this + 0x400190)) {
      do {
        if (iVar1 < 0x400000) {
          lVar4 = (long)*(int *)(this + 0x400188) + 0x188;
        }
        else {
          this[0x40018c] = (LSPeer)0x0;
          lVar4 = 0x188;
          *(undefined4 *)(this + 0x400188) = 0;
        }
        iVar1 = (**(code **)(**(long **)(this + 0x180) + 0x168))
                          (*(long **)(this + 0x180),this + lVar4,1,&local_4c);
        if (iVar1 != 0) goto LAB_00105b40;
        if (local_4c != 1) goto LAB_00105b68;
        iVar1 = *(int *)(this + 0x400188) + 1;
        *(int *)(this + 0x400188) = iVar1;
      } while (iVar1 < *(int *)(this + 0x400190));
    }
    local_48 = 0;
    String::parse_utf8((char *)&local_48,(int)this + 0x188,SUB41(iVar1,0));
    *(undefined4 *)(this + 0x400188) = 0;
    this[0x40018c] = (LSPeer)0x0;
    process_message((String *)&local_40);
    if ((local_40 != 0) && (1 < *(uint *)(local_40 + -8))) {
      String::utf8();
      Vector<CharString>::push_back
                ((Vector<CharString> *)(this + 0x400198),(CowData<char> *)local_38);
      CowData<char>::_unref((CowData<char> *)local_38);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    uVar3 = 0;
  }
LAB_00105b45:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105b40:
  uVar3 = 1;
  goto LAB_00105b45;
LAB_00105b68:
  uVar3 = 0x2c;
  goto LAB_00105b45;
}



/* GDScriptLanguageProtocol::poll(int) */

void __thiscall GDScriptLanguageProtocol::poll(GDScriptLanguageProtocol *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  LSPeer *this_00;
  undefined8 *puVar7;
  
  plVar4 = (long *)OS::get_singleton();
  lVar5 = (**(code **)(*plVar4 + 0x208))(plVar4);
  cVar2 = TCPServer::is_connection_available();
  if (cVar2 != '\0') {
    on_client_connected(this);
  }
  puVar7 = *(undefined8 **)(this + 0x1c0);
joined_r0x00105c73:
  do {
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    this_00 = (LSPeer *)puVar7[3];
    if (this_00 == (LSPeer *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      this_00 = (LSPeer *)0x0;
    }
    StreamPeerTCP::poll();
    iVar3 = StreamPeerTCP::get_status();
    if ((iVar3 == 0) || (iVar3 == 3)) goto LAB_00105d70;
    do {
      iVar3 = (**(code **)(**(long **)(this_00 + 0x180) + 0x170))();
      if (iVar3 < 1) break;
      *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(puVar7 + 2);
      iVar3 = LSPeer::handle_data(this_00);
      if (iVar3 != 0) {
        if (iVar3 != 0x2c) goto LAB_00105d70;
        break;
      }
      plVar4 = (long *)OS::get_singleton();
      uVar6 = (**(code **)(*plVar4 + 0x208))(plVar4);
    } while (uVar6 < (ulong)(param_1 + lVar5));
    iVar3 = LSPeer::send_data(this_00);
    if ((iVar3 != 0) && (iVar3 != 0x2c)) goto LAB_00105d70;
    puVar7 = (undefined8 *)*puVar7;
    cVar2 = RefCounted::unreference();
  } while (cVar2 == '\0');
  goto LAB_00105d16;
LAB_00105d70:
  on_client_disconnected(this,(int *)(puVar7 + 2));
  puVar7 = *(undefined8 **)(this + 0x1c0);
  cVar2 = RefCounted::unreference();
  if (cVar2 != '\0') {
LAB_00105d16:
    cVar2 = predelete_handler((Object *)this_00);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
  }
  goto joined_r0x00105c73;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GDScriptLanguageProtocol::is_class_ptr(void*) const */

uint __thiscall GDScriptLanguageProtocol::is_class_ptr(GDScriptLanguageProtocol *this,void *param_1)

{
  return (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &JSONRPC::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GDScriptLanguageProtocol::_getv(StringName const&, Variant&) const */

undefined8 GDScriptLanguageProtocol::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptLanguageProtocol::_setv(StringName const&, Variant const&) */

undefined8 GDScriptLanguageProtocol::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptLanguageProtocol::_validate_propertyv(PropertyInfo&) const */

void GDScriptLanguageProtocol::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GDScriptLanguageProtocol::_property_can_revertv(StringName const&) const */

undefined8 GDScriptLanguageProtocol::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GDScriptLanguageProtocol::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GDScriptLanguageProtocol::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptLanguageProtocol::_notificationv(int, bool) */

void GDScriptLanguageProtocol::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GDScriptLanguageProtocol::get_workspace() */

void GDScriptLanguageProtocol::get_workspace(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x1f8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x1f8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* GDScriptLanguageProtocol::get_text_document() */

void GDScriptLanguageProtocol::get_text_document(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x1f0) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x1f0);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* GDScriptLanguageProtocol::is_initialized() const */

GDScriptLanguageProtocol __thiscall
GDScriptLanguageProtocol::is_initialized(GDScriptLanguageProtocol *this)

{
  return this[0x200];
}



/* MethodBindTR<Ref<GDScriptWorkspace>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<GDScriptWorkspace>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<GDScriptWorkspace>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<GDScriptWorkspace>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<GDScriptTextDocument>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<GDScriptTextDocument>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<GDScriptTextDocument>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<GDScriptTextDocument>>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindT<String const&, Variant const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindT<String_const&,Variant_const&,int>::get_argument_meta
          (MethodBindT<String_const&,Variant_const&,int> *this,int param_1)

{
  return (param_1 == 2) * '\x03';
}



/* MethodBindT<int const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int_const&>::_gen_argument_type(MethodBindT<int_const&> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int_const&>::get_argument_meta(MethodBindT<int_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Error>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Error>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<Error>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Variant const&>::_gen_argument_type(int) const */

undefined8 MethodBindT<Variant_const&>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Dictionary, Dictionary const&>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Dictionary,Dictionary_const&>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTR<Dictionary, Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Dictionary,Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001120b8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001120b8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindTR<Dictionary, Dictionary const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,Dictionary_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001124d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary, Dictionary const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,Dictionary_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001124d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112538;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112538;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112598;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112598;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int const&>::~MethodBindT() */

void __thiscall MethodBindT<int_const&>::~MethodBindT(MethodBindT<int_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001125f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int const&>::~MethodBindT() */

void __thiscall MethodBindT<int_const&>::~MethodBindT(MethodBindT<int_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001125f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, Variant const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Variant_const&,int>::~MethodBindT
          (MethodBindT<String_const&,Variant_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112658;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, Variant const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Variant_const&,int>::~MethodBindT
          (MethodBindT<String_const&,Variant_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112658;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<GDScriptTextDocument>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDScriptTextDocument>>::~MethodBindTR
          (MethodBindTR<Ref<GDScriptTextDocument>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112718;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<GDScriptTextDocument>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDScriptTextDocument>>::~MethodBindTR
          (MethodBindTR<Ref<GDScriptTextDocument>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112718;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<GDScriptWorkspace>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDScriptWorkspace>>::~MethodBindTR(MethodBindTR<Ref<GDScriptWorkspace>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112778;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<GDScriptWorkspace>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDScriptWorkspace>>::~MethodBindTR(MethodBindTR<Ref<GDScriptWorkspace>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112778;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001126b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001126b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, Variant const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<String_const&,Variant_const&,int>::_gen_argument_type
          (MethodBindT<String_const&,Variant_const&,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 3) && (cVar1 = '\x04', param_1 != 0)) {
    cVar1 = (param_1 != 1) * '\x02';
  }
  return cVar1;
}



/* GDScriptLanguageProtocol::~GDScriptLanguageProtocol() */

void __thiscall GDScriptLanguageProtocol::~GDScriptLanguageProtocol(GDScriptLanguageProtocol *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00112378;
  if (*(long *)(this + 0x1f8) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x1f8);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0x1f0) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x1f0);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0x1d8) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x1d8);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pvVar5 = *(void **)(this + 0x1b0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1d4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1b8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1b8) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x18);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x1b0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00106530;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
  }
LAB_00106530:
  JSONRPC::~JSONRPC((JSONRPC *)this);
  return;
}



/* GDScriptLanguageProtocol::~GDScriptLanguageProtocol() */

void __thiscall GDScriptLanguageProtocol::~GDScriptLanguageProtocol(GDScriptLanguageProtocol *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00112378;
  if (*(long *)(this + 0x1f8) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x1f8);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0x1f0) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x1f0);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0x1d8) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x1d8);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pvVar5 = *(void **)(this + 0x1b0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1d4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1b8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1b8) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x18);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x1b0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00106780;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
  }
LAB_00106780:
  JSONRPC::~JSONRPC((JSONRPC *)this);
  operator_delete(this,0x208);
  return;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_001068f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001068f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010695e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010695e:
  return &_get_class_namev()::_class_name_static;
}



/* GDScriptLanguageProtocol::_get_class_namev() const */

undefined8 * GDScriptLanguageProtocol::_get_class_namev(void)

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
LAB_001069e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001069e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GDScriptLanguageProtocol");
      goto LAB_00106a4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GDScriptLanguageProtocol");
LAB_00106a4e:
  return &_get_class_namev()::_class_name_static;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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



/* lsp::CompletionOptions::to_json() const */

void lsp::CompletionOptions::to_json(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Variant::Variant((Variant *)local_58,*(bool *)in_RSI);
  Variant::Variant((Variant *)local_78,"resolveProvider");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(Vector *)(in_RSI + 8));
  Variant::Variant((Variant *)local_78,"triggerCharacters");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* lsp::SignatureHelpOptions::to_json() */

void lsp::SignatureHelpOptions::to_json(void)

{
  char cVar1;
  Variant *pVVar2;
  Vector *in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Variant::Variant((Variant *)local_48,in_RSI);
  Variant::Variant((Variant *)local_68,"triggerCharacters");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* lsp::RenameOptions::to_json() */

void lsp::RenameOptions::to_json(void)

{
  char cVar1;
  Variant *pVVar2;
  undefined8 in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Variant::Variant((Variant *)local_48,*(bool *)in_RSI);
  Variant::Variant((Variant *)local_68,"prepareProvider");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* lsp::DocumentLinkOptions::to_json() */

void lsp::DocumentLinkOptions::to_json(void)

{
  char cVar1;
  Variant *pVVar2;
  undefined8 in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Variant::Variant((Variant *)local_48,*(bool *)in_RSI);
  Variant::Variant((Variant *)local_68,"resolveProvider");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* lsp::ExecuteCommandOptions::to_json() */

void lsp::ExecuteCommandOptions::to_json(void)

{
  char cVar1;
  Variant *pVVar2;
  Vector *in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Variant::Variant((Variant *)local_48,in_RSI);
  Variant::Variant((Variant *)local_68,"commands");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* lsp::TextDocumentSyncOptions::to_json() */

void lsp::TextDocumentSyncOptions::to_json(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Variant::Variant((Variant *)local_58,*(bool *)(in_RSI + 9));
  Variant::Variant((Variant *)local_78,"willSaveWaitUntil");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(bool *)(in_RSI + 8));
  Variant::Variant((Variant *)local_78,"willSave");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(bool *)in_RSI);
  Variant::Variant((Variant *)local_78,"openClose");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(int *)(in_RSI + 4));
  Variant::Variant((Variant *)local_78,"change");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,*(bool *)(in_RSI + 10));
  Variant::Variant((Variant *)local_78,"includeText");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"save");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* lsp::DocumentOnTypeFormattingOptions::to_json() */

void lsp::DocumentOnTypeFormattingOptions::to_json(void)

{
  char cVar1;
  Variant *pVVar2;
  String *in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Variant::Variant((Variant *)local_58,in_RSI);
  Variant::Variant((Variant *)local_78,"firstTriggerCharacter");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(Vector *)(in_RSI + 8));
  Variant::Variant((Variant *)local_78,"moreTriggerCharacter");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* lsp::FileOperationRegistrationOptions::to_json() const */

Dictionary * lsp::FileOperationRegistrationOptions::to_json(void)

{
  char cVar1;
  String *pSVar2;
  Variant *pVVar3;
  long in_RSI;
  long lVar4;
  Dictionary *in_RDI;
  long lVar5;
  long in_FS_OFFSET;
  Array local_90 [8];
  Variant local_88 [8];
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Array::Array(local_90);
  lVar4 = *(long *)(in_RSI + 8);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (*(long *)(lVar4 + -8) <= lVar5) break;
      pSVar2 = (String *)(lVar5 * 0x10 + lVar4);
      Dictionary::Dictionary((Dictionary *)local_88);
      Dictionary::Dictionary((Dictionary *)local_80);
      Variant::Variant((Variant *)local_58,pSVar2);
      Variant::Variant((Variant *)local_78,"glob");
      pVVar3 = (Variant *)Dictionary::operator[](local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar1 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar1 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,pSVar2 + 8);
      Variant::Variant((Variant *)local_78,"matches");
      pVVar3 = (Variant *)Dictionary::operator[](local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(Dictionary *)local_80);
      Variant::Variant((Variant *)local_78,"pattern");
      pVVar3 = (Variant *)Dictionary::operator[](local_88);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_80);
      Variant::Variant((Variant *)local_58,(Dictionary *)local_88);
      Array::push_back((Variant *)local_90);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar5 = lVar5 + 1;
      Dictionary::~Dictionary((Dictionary *)local_88);
      lVar4 = *(long *)(in_RSI + 8);
    } while (lVar4 != 0);
  }
  Variant::Variant((Variant *)local_58,local_90);
  Variant::Variant((Variant *)local_78,"filters");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* lsp::Workspace::to_json() const */

Workspace * __thiscall lsp::Workspace::to_json(Workspace *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Dictionary aDStack_88 [8];
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)this);
  Dictionary::Dictionary(aDStack_88);
  FileOperationRegistrationOptions::to_json();
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"didDelete");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)aDStack_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  Variant::Variant((Variant *)local_58,aDStack_88);
  Variant::Variant((Variant *)local_78,"fileOperations");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(aDStack_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* lsp::GodotCapabilities::to_json() */

Dictionary * lsp::GodotCapabilities::to_json(void)

{
  char cVar1;
  String *pSVar2;
  Variant *pVVar3;
  long *in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  Array local_88 [8];
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Array::Array(local_88);
  if ((undefined8 *)*in_RSI != (undefined8 *)0x0) {
    for (pSVar2 = *(String **)*in_RSI; pSVar2 != (String *)0x0; pSVar2 = *(String **)(pSVar2 + 0x18)
        ) {
      Dictionary::Dictionary(local_80);
      Variant::Variant((Variant *)local_58,pSVar2);
      Variant::Variant((Variant *)local_78,"name");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(String *)(*(long *)(pSVar2 + 8) + 8));
      Variant::Variant((Variant *)local_78,"inherits");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_80);
      Array::push_back((Variant *)local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary(local_80);
    }
  }
  Variant::Variant((Variant *)local_58,local_88);
  Variant::Variant((Variant *)local_78,"native_classes");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array(local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* GDScriptLanguageProtocol::stop() [clone .cold] */

void GDScriptLanguageProtocol::stop(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptLanguageProtocol::_bind_methods() [clone .cold] */

void GDScriptLanguageProtocol::_bind_methods(void)

{
  code *pcVar1;
  
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



/* CowData<lsp::FileOperationFilter>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<lsp::FileOperationFilter>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<CharString>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<CharString>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptLanguageProtocol::poll(int) [clone .cold] */

void GDScriptLanguageProtocol::poll(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* GDScriptLanguageProtocol::get_class() const */

void GDScriptLanguageProtocol::get_class(void)

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



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Ref<GDScriptLanguageProtocol::LSPeer>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   Ref<GDScriptLanguageProtocol::LSPeer> > > >::insert(int const&,
   Ref<GDScriptLanguageProtocol::LSPeer> const&, bool) */

int * HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
      ::insert(int *param_1,Ref *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
  Object *pOVar7;
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
  undefined1 (*pauVar24) [16];
  char cVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  long *in_RCX;
  int iVar32;
  undefined7 in_register_00000011;
  uint *puVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  Object *pOVar38;
  char in_R8B;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined1 (*pauVar42) [16];
  long in_FS_OFFSET;
  uint local_a8;
  uint local_44;
  long local_40;
  
  puVar33 = (uint *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar36 = (ulong)uVar26;
    uVar28 = uVar36 * 4;
    uVar41 = uVar36 * 8;
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(param_2 + 0x10) = uVar29;
    pvVar31 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(param_2 + 8) = pvVar31;
    if (uVar26 != 0) {
      pvVar4 = *(void **)(param_2 + 0x10);
      if ((pvVar4 < (void *)((long)pvVar31 + uVar41)) && (pvVar31 < (void *)((long)pvVar4 + uVar28))
         ) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar28 * 4) = 0;
          *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar36 != uVar28);
      }
      else {
        memset(pvVar4,0,uVar28);
        memset(pvVar31,0,uVar41);
      }
    }
  }
  uVar27 = *puVar33;
  local_44 = 0;
  cVar25 = _lookup_pos((HashMap<int,Ref<GDScriptLanguageProtocol::LSPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<GDScriptLanguageProtocol::LSPeer>>>>
                        *)param_2,(int *)(ulong)uVar27,&local_44);
  if (cVar25 != '\0') {
    uVar28 = (ulong)local_44;
    pOVar38 = (Object *)*in_RCX;
    pauVar30 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + uVar28 * 8);
    pOVar7 = *(Object **)(pauVar30[1] + 8);
    if (pOVar38 != pOVar7) {
      *(Object **)(pauVar30[1] + 8) = pOVar38;
      if ((pOVar38 != (Object *)0x0) && (cVar25 = RefCounted::reference(), cVar25 == '\0')) {
        *(undefined8 *)(pauVar30[1] + 8) = 0;
      }
      if (((pOVar7 != (Object *)0x0) && (cVar25 = RefCounted::unreference(), cVar25 != '\0')) &&
         (cVar25 = predelete_handler(pOVar7), cVar25 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      pauVar30 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + uVar28 * 8);
    }
    goto LAB_00109317;
  }
  if ((float)(*(int *)(param_2 + 0x2c) + 1) <= (float)uVar26 * __LC31) {
LAB_001093c4:
    pOVar38 = (Object *)*in_RCX;
    if (pOVar38 == (Object *)0x0) goto LAB_001091be;
LAB_001091a2:
    cVar25 = RefCounted::reference();
    if (cVar25 == '\0') goto LAB_001091be;
    pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
    *(uint *)pauVar30[1] = uVar27;
    *(Object **)(pauVar30[1] + 8) = pOVar38;
    *pauVar30 = (undefined1  [16])0x0;
    cVar25 = RefCounted::reference();
    if (cVar25 == '\0') {
      *(undefined8 *)(pauVar30[1] + 8) = 0;
    }
    cVar25 = RefCounted::unreference();
    if ((cVar25 != '\0') && (cVar25 = predelete_handler(pOVar38), cVar25 != '\0')) {
      (**(code **)(*(long *)pOVar38 + 0x140))(pOVar38);
      Memory::free_static(pOVar38,false);
    }
  }
  else {
    uVar26 = *(uint *)(param_2 + 0x28);
    if (uVar26 == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00109317;
    }
    uVar28 = (ulong)(uVar26 + 1);
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar26 + 1 < 2) {
      uVar28 = 2;
    }
    uVar26 = *(uint *)(hash_table_size_primes + uVar28 * 4);
    uVar36 = (ulong)uVar26;
    *(int *)(param_2 + 0x28) = (int)uVar28;
    pvVar31 = *(void **)(param_2 + 8);
    uVar28 = uVar36 * 4;
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(param_2 + 0x10) = uVar29;
    uVar41 = uVar36 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar26 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar28))) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)__s + uVar28 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar36);
      }
      else {
        memset(__s,0,uVar28);
        memset(__s_00,0,uVar41);
      }
    }
    if (uVar27 == 0) {
      uVar27 = *puVar33;
      goto LAB_001093c4;
    }
    uVar28 = 0;
    do {
      uVar26 = *(uint *)((long)pvVar4 + uVar28 * 4);
      if (uVar26 != 0) {
        uVar39 = 0;
        lVar5 = *(long *)(param_2 + 0x10);
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
        uVar41 = CONCAT44(0,uVar3);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar26 * lVar6;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar41;
        lVar34 = SUB168(auVar8 * auVar16,8);
        puVar1 = (uint *)(lVar5 + lVar34 * 4);
        iVar32 = SUB164(auVar8 * auVar16,8);
        uVar40 = *puVar1;
        uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
        while (uVar40 != 0) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar40 * lVar6;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)((uVar3 + iVar32) - SUB164(auVar9 * auVar17,8)) * lVar6;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar41;
          local_a8 = SUB164(auVar10 * auVar18,8);
          uVar37 = uVar29;
          if (local_a8 < uVar39) {
            *puVar1 = uVar26;
            puVar2 = (undefined8 *)((long)__s_00 + lVar34 * 8);
            uVar37 = *puVar2;
            *puVar2 = uVar29;
            uVar26 = uVar40;
            uVar39 = local_a8;
          }
          uVar39 = uVar39 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(iVar32 + 1) * lVar6;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar41;
          lVar34 = SUB168(auVar11 * auVar19,8);
          puVar1 = (uint *)(lVar5 + lVar34 * 4);
          iVar32 = SUB164(auVar11 * auVar19,8);
          uVar29 = uVar37;
          uVar40 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar34 * 8) = uVar29;
        *puVar1 = uVar26;
        *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
      }
      uVar28 = uVar28 + 1;
    } while (uVar27 != uVar28);
    Memory::free_static(pvVar31,false);
    Memory::free_static(pvVar4,false);
    pOVar38 = (Object *)*in_RCX;
    uVar27 = *puVar33;
    if (pOVar38 != (Object *)0x0) goto LAB_001091a2;
LAB_001091be:
    pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
    *(uint *)pauVar30[1] = uVar27;
    *(undefined8 *)(pauVar30[1] + 8) = 0;
    *pauVar30 = (undefined1  [16])0x0;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar30;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar30;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar30;
    *(undefined8 **)(*pauVar30 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar30;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar5 + 8) = pauVar30;
    *(long *)*pauVar30 = lVar5;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar30;
  }
  uVar26 = (*puVar33 >> 0x10 ^ *puVar33) * -0x7a143595;
  uVar27 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
  uVar26 = uVar27 ^ uVar27 >> 0x10;
  if (uVar27 == uVar27 >> 0x10) {
    uVar28 = 1;
    uVar26 = 1;
  }
  else {
    uVar28 = (ulong)uVar26;
  }
  uVar40 = 0;
  lVar5 = *(long *)(param_2 + 0x10);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar27);
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar28 * lVar6;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar41;
  lVar35 = SUB168(auVar12 * auVar20,8);
  lVar34 = *(long *)(param_2 + 8);
  puVar33 = (uint *)(lVar5 + lVar35 * 4);
  iVar32 = SUB164(auVar12 * auVar20,8);
  uVar3 = *puVar33;
  pauVar24 = pauVar30;
  while (uVar3 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar3 * lVar6;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar41;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar27 + iVar32) - SUB164(auVar13 * auVar21,8)) * lVar6;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar41;
    local_a8 = SUB164(auVar14 * auVar22,8);
    pauVar42 = pauVar24;
    if (local_a8 < uVar40) {
      *puVar33 = uVar26;
      puVar2 = (undefined8 *)(lVar34 + lVar35 * 8);
      pauVar42 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar24;
      uVar26 = uVar3;
      uVar40 = local_a8;
    }
    uVar40 = uVar40 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar32 + 1) * lVar6;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar41;
    lVar35 = SUB168(auVar15 * auVar23,8);
    puVar33 = (uint *)(lVar5 + lVar35 * 4);
    iVar32 = SUB164(auVar15 * auVar23,8);
    pauVar24 = pauVar42;
    uVar3 = *puVar33;
  }
  *(undefined1 (**) [16])(lVar34 + lVar35 * 8) = pauVar24;
  *puVar33 = uVar26;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00109317:
  *(undefined1 (**) [16])param_1 = pauVar30;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<char>::_unref() */

void __thiscall CowData<char>::_unref(CowData<char> *this)

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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC35;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
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
      goto LAB_00109745;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00109745:
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



/* WARNING: Removing unreachable block (ram,0x00109958) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* List<lsp::GodotNativeClassInfo, DefaultAllocator>::~List() */

void __thiscall
List<lsp::GodotNativeClassInfo,DefaultAllocator>::~List
          (List<lsp::GodotNativeClassInfo,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x28) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x18);
      lVar1 = *(long *)(this_00 + 0x20);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar2;
        lVar2 = *(long *)(this_00 + 0x18);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* MethodBindTR<Ref<GDScriptWorkspace>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<GDScriptWorkspace>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "GDScriptWorkspace";
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00109d75;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_00109d75:
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



/* MethodBindTR<Ref<GDScriptTextDocument>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<GDScriptTextDocument>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "GDScriptTextDocument";
  local_40 = 0x14;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00109ef5;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_00109ef5:
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



/* GDScriptLanguageProtocol::is_class(String const&) const */

undefined8 __thiscall
GDScriptLanguageProtocol::is_class(GDScriptLanguageProtocol *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010a01f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a01f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010a0d3;
  }
  cVar6 = String::operator==(param_1,"GDScriptLanguageProtocol");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010a0d3;
    }
    cVar6 = String::operator==(param_1,"JSONRPC");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar6 != '\0') goto LAB_0010a0d3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_0010a2b8;
    }
  }
LAB_0010a0d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a2b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010a47f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a47f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010a533;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010a533;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010a533:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
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
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010a775;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010a775:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* JSONRPC::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void JSONRPC::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
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
  local_78 = "JSONRPC";
  local_88 = 0;
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JSONRPC";
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
      goto LAB_0010a92c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a92c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"JSONRPC",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
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
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
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
      goto LAB_0010ab7c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ab7c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptLanguageProtocol::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
GDScriptLanguageProtocol::_get_property_listv
          (GDScriptLanguageProtocol *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
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
    local_90 = 0;
    local_88 = 0;
    local_78 = "JSONRPC";
    local_70 = 7;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "JSONRPC";
    local_80 = 0;
    local_70 = 7;
    String::parse_latin1((StrRange *)&local_80);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_80,0,(StrRange *)&local_88,0x80,
               &local_90);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"JSONRPC",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b0 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
  local_88 = 0;
  local_90 = 0;
  local_78 = "GDScriptLanguageProtocol";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GDScriptLanguageProtocol";
  local_98 = 0;
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_b0,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010addf;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010addf:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GDScriptLanguageProtocol",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      JSONRPC::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Dictionary,Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x1b,(CowData<char32_t> *)&local_b0,0,(String *)&local_a8,6
               ,&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0010b31a;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC35;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0x1b;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0010b2df:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010b2df;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0010b31a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Variant_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68 [2];
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
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_68,0,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_78,0x20006,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68[0];
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int_const&>::_gen_argument_type_info(int param_1)

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
    local_68 = &_LC35;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<GDScriptLanguageProtocol::LSPeer>::unref() */

void __thiscall
Ref<GDScriptLanguageProtocol::LSPeer>::unref(Ref<GDScriptLanguageProtocol::LSPeer> *this)

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



/* MethodBind* create_method_bind<GDScriptLanguageProtocol, Dictionary, Dictionary
   const&>(Dictionary (GDScriptLanguageProtocol::*)(Dictionary const&)) */

MethodBind *
create_method_bind<GDScriptLanguageProtocol,Dictionary,Dictionary_const&>
          (_func_Dictionary_Dictionary_ptr *param_1)

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
  *(_func_Dictionary_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001124d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDScriptLanguageProtocol";
  local_30 = 0x18;
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



/* MethodBind* create_method_bind<GDScriptLanguageProtocol, Variant const&>(void
   (GDScriptLanguageProtocol::*)(Variant const&)) */

MethodBind *
create_method_bind<GDScriptLanguageProtocol,Variant_const&>(_func_void_Variant_ptr *param_1)

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
  *(_func_void_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112538;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDScriptLanguageProtocol";
  local_30 = 0x18;
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



/* MethodBind* create_method_bind<GDScriptLanguageProtocol, Error>(Error
   (GDScriptLanguageProtocol::*)()) */

MethodBind * create_method_bind<GDScriptLanguageProtocol,Error>(_func_Error *param_1)

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
  *(_func_Error **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112598;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GDScriptLanguageProtocol";
  local_30 = 0x18;
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



/* MethodBind* create_method_bind<GDScriptLanguageProtocol, int const&>(void
   (GDScriptLanguageProtocol::*)(int const&)) */

MethodBind * create_method_bind<GDScriptLanguageProtocol,int_const&>(_func_void_int_ptr *param_1)

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
  *(_func_void_int_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001125f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDScriptLanguageProtocol";
  local_30 = 0x18;
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



/* MethodBind* create_method_bind<GDScriptLanguageProtocol, String const&, Variant const&, int>(void
   (GDScriptLanguageProtocol::*)(String const&, Variant const&, int)) */

MethodBind *
create_method_bind<GDScriptLanguageProtocol,String_const&,Variant_const&,int>
          (_func_void_String_ptr_Variant_ptr_int *param_1)

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
  *(_func_void_String_ptr_Variant_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112658;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "GDScriptLanguageProtocol";
  local_30 = 0x18;
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



/* MethodBind* create_method_bind<GDScriptLanguageProtocol, bool>(bool
   (GDScriptLanguageProtocol::*)() const) */

MethodBind * create_method_bind<GDScriptLanguageProtocol,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001126b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GDScriptLanguageProtocol";
  local_30 = 0x18;
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



/* MethodBind* create_method_bind<GDScriptLanguageProtocol,
   Ref<GDScriptTextDocument>>(Ref<GDScriptTextDocument> (GDScriptLanguageProtocol::*)()) */

MethodBind *
create_method_bind<GDScriptLanguageProtocol,Ref<GDScriptTextDocument>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112718;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GDScriptLanguageProtocol";
  local_30 = 0x18;
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



/* MethodBind* create_method_bind<GDScriptLanguageProtocol,
   Ref<GDScriptWorkspace>>(Ref<GDScriptWorkspace> (GDScriptLanguageProtocol::*)()) */

MethodBind * create_method_bind<GDScriptLanguageProtocol,Ref<GDScriptWorkspace>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112778;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GDScriptLanguageProtocol";
  local_30 = 0x18;
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



/* GDScriptLanguageProtocol::_initialize_classv() */

void GDScriptLanguageProtocol::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (JSONRPC::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "JSONRPC";
      local_60 = 0;
      local_40 = 7;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)PTR__bind_methods_00117008 != Object::_bind_methods) {
        JSONRPC::_bind_methods();
      }
      JSONRPC::initialize_class()::initialized = '\x01';
    }
    local_48 = "JSONRPC";
    local_58 = 0;
    local_40 = 7;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GDScriptLanguageProtocol";
    local_60 = 0;
    local_40 = 0x18;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* MethodBindTR<Error>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error>::_gen_argument_type_info(int param_1)

{
  code *pcVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "Error";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x10c240);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_60 + -8);
      lVar2 = lVar4 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_0010c345;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010c345:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010c860:
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
  if (lVar9 == 0) goto LAB_0010c860;
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
    goto LAB_0010c8b6;
  }
  if (lVar9 == lVar5) {
LAB_0010c7db:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010c8b6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010c74f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010c7db;
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
LAB_0010c74f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<lsp::FileOperationFilter>::_unref() */

void __thiscall CowData<lsp::FileOperationFilter>::_unref(CowData<lsp::FileOperationFilter> *this)

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
          plVar6 = plVar6 + 2;
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



/* CowData<CharString>::_unref() */

void __thiscall CowData<CharString>::_unref(CowData<CharString> *this)

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



/* GDScriptLanguageProtocol::LSPeer::~LSPeer() */

void __thiscall GDScriptLanguageProtocol::LSPeer::~LSPeer(LSPeer *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00112218;
  CowData<CharString>::_unref((CowData<CharString> *)(this + 0x4001a0));
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_001120b8;
  Object::~Object((Object *)this);
  return;
}



/* GDScriptLanguageProtocol::LSPeer::~LSPeer() */

void __thiscall GDScriptLanguageProtocol::LSPeer::~LSPeer(LSPeer *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00112218;
  CowData<CharString>::_unref((CowData<CharString> *)(this + 0x4001a0));
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_001120b8;
  Object::~Object((Object *)this);
  operator_delete(this,0x4001b0);
  return;
}



/* CowData<lsp::FileOperationFilter>::_realloc(long) */

undefined8 __thiscall
CowData<lsp::FileOperationFilter>::_realloc(CowData<lsp::FileOperationFilter> *this,long param_1)

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
/* Error CowData<lsp::FileOperationFilter>::resize<false>(long) */

undefined8 __thiscall
CowData<lsp::FileOperationFilter>::resize<false>
          (CowData<lsp::FileOperationFilter> *this,long param_1)

{
  CowData<char32_t> *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  StrRange *pSVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    uVar5 = 0x1f;
    goto LAB_0010cdbd;
  }
  if (*(long *)this == 0) {
    if (param_1 != 0) {
      _copy_on_write(this);
      lVar4 = 0;
      lVar8 = 0;
LAB_0010cca4:
      if (param_1 * 0x10 == 0) {
LAB_0010cf00:
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
      }
      else {
        uVar9 = param_1 * 0x10 - 1;
        uVar9 = uVar9 >> 1 | uVar9;
        uVar9 = uVar9 | uVar9 >> 2;
        uVar9 = uVar9 | uVar9 >> 4;
        uVar9 = uVar9 | uVar9 >> 8;
        uVar9 = uVar9 | uVar9 >> 0x10;
        uVar9 = uVar9 | uVar9 >> 0x20;
        lVar10 = uVar9 + 1;
        if (lVar10 == 0) goto LAB_0010cf00;
        uVar11 = param_1;
        if (param_1 <= lVar4) {
          while (lVar4 = *(long *)this, lVar4 != 0) {
            if (*(ulong *)(lVar4 + -8) <= uVar11) {
              if (lVar10 != lVar8) {
                uVar5 = _realloc(this,lVar10);
                if ((int)uVar5 != 0) goto LAB_0010cdbd;
                lVar4 = *(long *)this;
                if (lVar4 == 0) goto LAB_0010ce4c;
              }
              *(long *)(lVar4 + -8) = param_1;
              goto LAB_0010cdbb;
            }
            this_00 = (CowData<char32_t> *)(lVar4 + uVar11 * 0x10);
            CowData<char32_t>::_unref(this_00 + 8);
            CowData<char32_t>::_unref(this_00);
            uVar11 = uVar11 + 1;
          }
          goto LAB_0010cf5b;
        }
        if (lVar10 == lVar8) {
LAB_0010ce73:
          puVar6 = *(undefined8 **)this;
          if (puVar6 == (undefined8 *)0x0) {
LAB_0010cf5b:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar4 = puVar6[-1];
          if (lVar4 < param_1) goto LAB_0010cd50;
LAB_0010cdb7:
          puVar6[-1] = param_1;
          goto LAB_0010cdbb;
        }
        if (lVar4 != 0) {
          uVar5 = _realloc(this,lVar10);
          if ((int)uVar5 != 0) goto LAB_0010cdbd;
          goto LAB_0010ce73;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
        if (puVar3 != (undefined8 *)0x0) {
          puVar6 = puVar3 + 2;
          *puVar3 = 1;
          puVar3[1] = 0;
          *(undefined8 **)this = puVar6;
          lVar4 = 0;
LAB_0010cd50:
          do {
            lVar8 = lVar4 + 1;
            pSVar7 = (StrRange *)(puVar6 + lVar4 * 2);
            *(undefined8 *)pSVar7 = 0;
            String::parse_latin1(pSVar7);
            *(undefined8 *)(pSVar7 + 8) = 0;
            String::parse_latin1(pSVar7 + 8);
            puVar6 = *(undefined8 **)this;
            lVar4 = lVar8;
          } while (param_1 != lVar8);
          if (puVar6 == (undefined8 *)0x0) {
LAB_0010ce4c:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          goto LAB_0010cdb7;
        }
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      uVar5 = 6;
      goto LAB_0010cdbd;
    }
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 != lVar4) {
      if (param_1 != 0) {
        _copy_on_write(this);
        lVar8 = lVar4 * 0x10;
        if (lVar8 != 0) {
          uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
          uVar9 = uVar9 | uVar9 >> 2;
          uVar9 = uVar9 | uVar9 >> 4;
          uVar9 = uVar9 | uVar9 >> 8;
          uVar9 = uVar9 | uVar9 >> 0x10;
          lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
        }
        goto LAB_0010cca4;
      }
      _unref(this);
    }
  }
LAB_0010cdbb:
  uVar5 = 0;
LAB_0010cdbd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* CowData<CharString>::_realloc(long) */

undefined8 __thiscall CowData<CharString>::_realloc(CowData<CharString> *this,long param_1)

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
/* Error CowData<CharString>::resize<false>(long) */

undefined8 __thiscall CowData<CharString>::resize<false>(CowData<CharString> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010d250:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_0010d250;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010d129:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010d129;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010d2a6;
  }
  if (lVar10 == lVar7) {
LAB_0010d1cf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010d2a6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010d1ba;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010d1cf;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010d1ba:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010d3d8) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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
      _err_print_error(&_LC148,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d750;
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
LAB_0010d750:
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
      goto LAB_0010d9f2;
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
LAB_0010d9f2:
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
      goto LAB_0010dbb1;
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
LAB_0010dbb1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Variant const&, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<String_const&,Variant_const&,int>::validated_call
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
      goto LAB_0010df01;
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
                    /* WARNING: Could not recover jumptable at 0x0010dd8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined8 *)(param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_0010df01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Variant const&, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,Variant_const&,int>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010e0f1;
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
                    /* WARNING: Could not recover jumptable at 0x0010df76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),**(undefined4 **)((long)param_3 + 0x10));
    return;
  }
LAB_0010e0f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == (char *)*(long *)pVVar2) {
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
      goto LAB_0010e14d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  local_48 = (char *)CONCAT44(local_48._4_4_,(int)*(undefined8 *)(*(long *)param_3 + 8));
  (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),(StringName *)&local_48);
LAB_0010e14d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e32c;
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
  local_48 = (char *)CONCAT44(local_48._4_4_,(int)**param_3);
  (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),(StringName *)&local_48);
LAB_0010e32c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC148,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e580;
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
LAB_0010e580:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error>::validated_call
          (MethodBindTR<Error> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
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
      goto LAB_0010e794;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010e794:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error>::ptrcall(MethodBindTR<Error> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
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
      goto LAB_0010e943;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010e943:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Variant_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010ec81;
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
                    /* WARNING: Could not recover jumptable at 0x0010eb09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(undefined8 *)param_3);
    return;
  }
LAB_0010ec81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Variant_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010ee61;
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
                    /* WARNING: Could not recover jumptable at 0x0010ece9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010ee61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, Dictionary const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Dictionary,Dictionary_const&>::validated_call
          (MethodBindTR<Dictionary,Dictionary_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eed1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010eed1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Dictionary,Dictionary_const&>::ptrcall
          (MethodBindTR<Dictionary,Dictionary_const&> *this,Object *param_1,void **param_2,
          void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f0bb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010f0bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<GDScriptWorkspace>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Ref<GDScriptWorkspace>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10d5a8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC148,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f360;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      Variant::operator=((Variant *)param_1,(Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_0010f360:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<GDScriptWorkspace>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<GDScriptWorkspace>>::ptrcall
          (MethodBindTR<Ref<GDScriptWorkspace>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
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
      local_48 = (Object *)0x10d5a8;
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
      goto LAB_0010f5e6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010f5e6;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010f629;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010f629;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010f629:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010f5e6;
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
LAB_0010f5e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<GDScriptTextDocument>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<GDScriptTextDocument>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10d5a8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC148,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f900;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      Variant::operator=((Variant *)param_1,(Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_0010f900:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<GDScriptTextDocument>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<GDScriptTextDocument>>::ptrcall
          (MethodBindTR<Ref<GDScriptTextDocument>> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
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
      local_48 = (Object *)0x10d5a8;
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
      goto LAB_0010fb86;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010fb86;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010fbc9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010fbc9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010fbc9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010fb86;
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
LAB_0010fb86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar6 = (long *)plVar8[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar6 = (long *)(plVar8[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC148,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ff38;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar10 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar9 = param_2[5];
    if (pVVar9 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ff90;
LAB_0010ff80:
      pVVar9 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar9 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ff90:
        uVar5 = 4;
        goto LAB_0010ff2d;
      }
      if (in_R8D == 1) goto LAB_0010ff80;
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
      pVVar9 = pVVar9 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar10 & 1) != 0) {
      pVVar10 = *(Variant **)(pVVar10 + *(long *)((long)plVar8 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar9,0);
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 0;
    }
    Variant::Variant((Variant *)local_48,pVVar9);
    (*(code *)pVVar10)((Variant *)((long)plVar8 + (long)pVVar1),(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar5 = 3;
LAB_0010ff2d:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_0010ff38:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<String const&, Variant const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String_const&,Variant_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  long lVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  int local_58 [6];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_88 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC148,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00110302;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar13;
    }
    if ((int)(3 - in_R8D) <= iVar7) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar10 = iVar7 + -3 + (int)lVar8;
          if (lVar13 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_78[lVar8] = pVVar12;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar14 & 1) != 0) {
        pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar4 = _LC153;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],0);
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 1;
      }
      Variant::Variant((Variant *)local_58,local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],4);
      uVar4 = _LC155;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_88,
                         (Variant *)local_58,iVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00110302;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_00110302:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, Dictionary const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Dictionary,Dictionary_const&>::call
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC148,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00110670;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001106c0;
LAB_001106b0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001106c0:
        uVar6 = 4;
        goto LAB_00110665;
      }
      if (in_R8D == 1) goto LAB_001106b0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1b);
    uVar4 = _LC157;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_68);
    (*(code *)pVVar11)((Dictionary *)&local_70,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_70);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_70);
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00110665:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00110670:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<GDScriptWorkspace>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<GDScriptWorkspace>>::validated_call
          (MethodBindTR<Ref<GDScriptWorkspace>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10d5a8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00110946;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
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
LAB_00110946:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<GDScriptTextDocument>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<Ref<GDScriptTextDocument>>::validated_call
          (MethodBindTR<Ref<GDScriptTextDocument>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10d5a8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00110b76;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
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
LAB_00110b76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int const&), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int_const&>
               (__UnexistingClass *param_1,_func_void_int_ptr *param_2,Variant **param_3,int param_4
               ,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long lVar8;
  uint uVar9;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_5;
  if (uVar9 < 2) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    if (lVar2 == 0) {
      if (uVar9 != 1) goto LAB_00110e98;
LAB_00110e18:
      this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      if ((int)lVar3 < (int)(uVar9 ^ 1)) {
LAB_00110e98:
        uVar7 = 4;
        goto LAB_00110e25;
      }
      if (uVar9 == 1) goto LAB_00110e18;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this = (Variant *)(lVar2 + lVar8 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC158;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_int(this);
    (*param_2)((int *)(param_1 + (long)param_3));
  }
  else {
    uVar7 = 3;
LAB_00110e25:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 1;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int_const&>::call
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
      _err_print_error(&_LC148,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00110f06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int_const&>
            (p_Var2,(_func_void_int_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00110f06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Variant const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Variant_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68 [2];
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_68,0,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_78,0x20006,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_68[0];
    if (*(long *)(param_3 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, Variant const&, int>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,Variant_const&,int>
               (int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  if (param_1 == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC35;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,4,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = 1;
  call_get_argument_type_info_helper<Variant_const&>(param_1,&local_94,param_2);
  if (param_1 == local_94) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC35;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Variant const&, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,Variant_const&,int>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<String_const&,Variant_const&,int>(in_EDX,pPVar1);
  return pPVar1;
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
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
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
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



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_001118d9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_001118d9:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* GDScriptLanguageProtocol::singleton */

void GDScriptLanguageProtocol::_GLOBAL__sub_I_singleton(void)

{
  lsp::MarkupKind::PlainText = 0;
  String::parse_latin1((String *)&lsp::MarkupKind::PlainText,"plaintext");
  __cxa_atexit(String::~String,&lsp::MarkupKind::PlainText,&__dso_handle);
  lsp::MarkupKind::Markdown = 0;
  String::parse_latin1((String *)&lsp::MarkupKind::Markdown,"markdown");
  __cxa_atexit(String::~String,&lsp::MarkupKind::Markdown,&__dso_handle);
  lsp::FoldingRangeKind::Comment = 0;
  String::parse_latin1((String *)&lsp::FoldingRangeKind::Comment,"comment");
  __cxa_atexit(String::~String,&lsp::FoldingRangeKind::Comment,&__dso_handle);
  lsp::FoldingRangeKind::Imports = 0;
  String::parse_latin1((String *)&lsp::FoldingRangeKind::Imports,"imports");
  __cxa_atexit(String::~String,&lsp::FoldingRangeKind::Imports,&__dso_handle);
  lsp::FoldingRangeKind::Region = 0;
  String::parse_latin1((String *)&lsp::FoldingRangeKind::Region,"region");
  __cxa_atexit(String::~String,&lsp::FoldingRangeKind::Region,&__dso_handle);
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    PopupMenu::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache != '\0') {
    return;
  }
  EditorHelpBit::doc_annotation_cache = 1;
  EditorHelpBit::doc_annotation_cache._40_8_ = 2;
  EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
  EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
               ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptLanguageProtocol::LSPeer::~LSPeer() */

void __thiscall GDScriptLanguageProtocol::LSPeer::~LSPeer(LSPeer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<lsp::GodotNativeClassInfo, DefaultAllocator>::~List() */

void __thiscall
List<lsp::GodotNativeClassInfo,DefaultAllocator>::~List
          (List<lsp::GodotNativeClassInfo,DefaultAllocator> *this)

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
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptLanguageProtocol::~GDScriptLanguageProtocol() */

void __thiscall GDScriptLanguageProtocol::~GDScriptLanguageProtocol(GDScriptLanguageProtocol *this)

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
/* MethodBindTR<Ref<GDScriptWorkspace>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDScriptWorkspace>>::~MethodBindTR(MethodBindTR<Ref<GDScriptWorkspace>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<GDScriptTextDocument>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDScriptTextDocument>>::~MethodBindTR
          (MethodBindTR<Ref<GDScriptTextDocument>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, Variant const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Variant_const&,int>::~MethodBindT
          (MethodBindT<String_const&,Variant_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int const&>::~MethodBindT() */

void __thiscall MethodBindT<int_const&>::~MethodBindT(MethodBindT<int_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Dictionary, Dictionary const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,Dictionary_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


