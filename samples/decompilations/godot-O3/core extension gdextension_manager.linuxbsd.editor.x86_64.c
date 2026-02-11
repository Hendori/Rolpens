
/* GDExtensionManager::_reload_all_scripts() */

void GDExtensionManager::_reload_all_scripts(void)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  
  if (0 < (int)ScriptServer::_language_count) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      plVar1 = (long *)ScriptServer::get_language(iVar2);
      (**(code **)(*plVar1 + 0x2b8))(plVar1);
      iVar2 = iVar3;
    } while (iVar3 < (int)ScriptServer::_language_count);
    return;
  }
  return;
}



/* GDExtensionManager::is_extension_loaded(String const&) const */

undefined8 __thiscall
GDExtensionManager::is_extension_loaded(GDExtensionManager *this,String *param_1)

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
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    uVar11 = String::hash();
    lVar17 = *(long *)(this + 0x188);
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x180) + lVar15 * 8) + 0x10),
                                      param_1);
          if ((char)uVar12 != '\0') {
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x188);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* GDExtensionManager::get_extension(String const&) */

String * GDExtensionManager::get_extension(String *param_1)

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
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  String *in_RDX;
  long lVar15;
  long in_RSI;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  
  if ((*(long *)(in_RSI + 0x180) != 0) && (*(int *)(in_RSI + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x1a0) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x1a0) * 8);
    uVar12 = String::hash();
    uVar17 = CONCAT44(0,uVar1);
    lVar16 = *(long *)(in_RSI + 0x188);
    uVar13 = 1;
    if (uVar12 != 0) {
      uVar13 = uVar12;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(lVar16 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar18 = 0;
      do {
        if (uVar12 == uVar13) {
          cVar11 = String::operator==((String *)
                                      (*(long *)(*(long *)(in_RSI + 0x180) + lVar15 * 8) + 0x10),
                                      in_RDX);
          if (cVar11 != '\0') {
            lVar2 = *(long *)(*(long *)(in_RSI + 0x180) + (ulong)uVar14 * 8);
            if (lVar2 != 0) {
              *(undefined8 *)param_1 = 0;
              lVar2 = *(long *)(lVar2 + 0x18);
              if (lVar2 == 0) {
                return param_1;
              }
              *(long *)param_1 = lVar2;
              cVar11 = RefCounted::reference();
              if (cVar11 != '\0') {
                return param_1;
              }
              *(undefined8 *)param_1 = 0;
              return param_1;
            }
            break;
          }
          lVar16 = *(long *)(in_RSI + 0x188);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(lVar16 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
        if ((uVar12 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar12 * lVar2, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, SUB164(auVar6 * auVar10,8) < uVar18)) break;
      } while( true );
    }
  }
  _err_print_error("get_extension","core/extension/gdextension_manager.cpp",0xcc,
                   "Condition \"!E\" is true. Returning: Ref<GDExtension>()",0,0);
  *(undefined8 *)param_1 = 0;
  return param_1;
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



/* GDExtensionManager::~GDExtensionManager() */

void __thiscall GDExtensionManager::~GDExtensionManager(GDExtensionManager *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  bool bVar8;
  
  bVar8 = singleton == this;
  *(undefined ***)this = &PTR__initialize_classv_0010c358;
  if (bVar8) {
    singleton = (GDExtensionManager *)0x0;
  }
  GDExtensionSpecialCompatHashes::finalize();
  pvVar7 = *(void **)(this + 0x1b0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x1d4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1b8) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x1b8) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x18);
                *(undefined8 *)((long)pvVar7 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x1b0);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 << 2 != lVar6);
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_001004e1;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
  }
LAB_001004e1:
  pvVar7 = *(void **)(this + 0x180);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x1a4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x188) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x188) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                pOVar4 = *(Object **)((long)pvVar7 + 0x18);
                cVar5 = predelete_handler(pOVar4);
                if (cVar5 != '\0') {
                  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                  Memory::free_static(pOVar4,false);
                }
              }
            }
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x180);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_001005c1;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x188),false);
  }
LAB_001005c1:
  Object::~Object((Object *)this);
  return;
}



/* GDExtensionManager::~GDExtensionManager() */

void __thiscall GDExtensionManager::~GDExtensionManager(GDExtensionManager *this)

{
  ~GDExtensionManager(this);
  operator_delete(this,0x1d8);
  return;
}



/* GDExtensionManager::_unload_extension_internal(Ref<GDExtension> const&) */

undefined8 __thiscall
GDExtensionManager::_unload_extension_internal(GDExtensionManager *this,Ref *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
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
  char cVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  Object *pOVar36;
  long *plVar37;
  uint uVar38;
  uint *puVar39;
  ulong uVar40;
  long lVar41;
  long in_FS_OFFSET;
  bool bVar42;
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pOVar36 = *(Object **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar36 != (Object *)0x0) && (cVar29 = RefCounted::reference(), cVar29 == '\0')) {
    pOVar36 = (Object *)0x0;
  }
  StringName::StringName((StringName *)&local_90,"extension_unloading",false);
  Variant::Variant((Variant *)local_78,pOVar36);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_90,local_88,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar29 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar29 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar29 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  if (((pOVar36 != (Object *)0x0) && (cVar29 = RefCounted::unreference(), cVar29 != '\0')) &&
     (cVar29 = predelete_handler(pOVar36), cVar29 != '\0')) {
    (**(code **)(*(long *)pOVar36 + 0x140))(pOVar36);
    Memory::free_static(pOVar36,false);
  }
  iVar35 = *(int *)(this + 0x174);
  if (-1 < iVar35) {
    do {
      GDExtension::deinitialize_library(*(undefined8 *)param_1,iVar35);
      bVar42 = iVar35 != 0;
      iVar35 = iVar35 + -1;
    } while (bVar42);
  }
  puVar6 = *(undefined8 **)(*(long *)param_1 + 0x2e0);
joined_r0x00100807:
  while( true ) {
    if (puVar6 == (undefined8 *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((*(long *)(this + 0x1b0) == 0) || (*(int *)(this + 0x1d4) == 0)) break;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
    uVar30 = String::hash();
    uVar40 = CONCAT44(0,uVar5);
    lVar41 = *(long *)(this + 0x1b8);
    uVar31 = 1;
    if (uVar30 != 0) {
      uVar31 = uVar30;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar31 * lVar7;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar40;
    lVar33 = SUB168(auVar9 * auVar19,8);
    uVar30 = *(uint *)(lVar41 + lVar33 * 4);
    uVar32 = SUB164(auVar9 * auVar19,8);
    if (uVar30 == 0) break;
    uVar38 = 0;
    do {
      if (uVar30 == uVar31) {
        cVar29 = String::operator==((String *)
                                    (*(long *)(*(long *)(this + 0x1b0) + lVar33 * 8) + 0x10),
                                    (String *)(puVar6 + 2));
        if (cVar29 != '\0') {
          lVar7 = *(long *)(this + 0x1b8);
          uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
          uVar40 = CONCAT44(0,uVar5);
          lVar41 = *(long *)(this + 0x1b0);
          lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar32 + 1) * lVar33;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar40;
          lVar34 = SUB168(auVar13 * auVar23,8);
          puVar39 = (uint *)(lVar7 + lVar34 * 4);
          uVar30 = SUB164(auVar13 * auVar23,8);
          uVar31 = *puVar39;
          if ((uVar31 == 0) ||
             (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar31 * lVar33, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar40, auVar15._8_8_ = 0,
             auVar15._0_8_ = (ulong)((uVar5 + uVar30) - SUB164(auVar14 * auVar24,8)) * lVar33,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar40, uVar38 = uVar32,
             SUB164(auVar15 * auVar25,8) == 0)) goto LAB_00100a27;
          goto LAB_001009dd;
        }
        lVar41 = *(long *)(this + 0x1b8);
      }
      uVar38 = uVar38 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(uVar32 + 1) * lVar7;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar33 = SUB168(auVar10 * auVar20,8);
      uVar30 = *(uint *)(lVar41 + lVar33 * 4);
      uVar32 = SUB164(auVar10 * auVar20,8);
    } while ((uVar30 != 0) &&
            (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar30 * lVar7, auVar21._8_8_ = 0,
            auVar21._0_8_ = uVar40, auVar12._8_8_ = 0,
            auVar12._0_8_ = (ulong)((uVar5 + uVar32) - SUB164(auVar11 * auVar21,8)) * lVar7,
            auVar22._8_8_ = 0, auVar22._0_8_ = uVar40, uVar38 <= SUB164(auVar12 * auVar22,8)));
    puVar6 = (undefined8 *)*puVar6;
  }
LAB_00100ae9:
  puVar6 = (undefined8 *)*puVar6;
  goto joined_r0x00100807;
  while (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar31 * lVar33, auVar26._8_8_ = 0,
        auVar26._0_8_ = uVar40, auVar17._8_8_ = 0,
        auVar17._0_8_ = (ulong)((uVar30 + uVar5) - SUB164(auVar16 * auVar26,8)) * lVar33,
        auVar27._8_8_ = 0, auVar27._0_8_ = uVar40, uVar38 = uVar32, SUB164(auVar17 * auVar27,8) != 0
        ) {
LAB_001009dd:
    uVar32 = uVar30;
    puVar1 = (uint *)(lVar7 + (ulong)uVar38 * 4);
    *puVar39 = *puVar1;
    puVar2 = (undefined8 *)(lVar41 + lVar34 * 8);
    *puVar1 = uVar31;
    puVar3 = (undefined8 *)(lVar41 + (ulong)uVar38 * 8);
    uVar8 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar8;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(uVar32 + 1) * lVar33;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    lVar34 = SUB168(auVar18 * auVar28,8);
    puVar39 = (uint *)(lVar7 + lVar34 * 4);
    uVar30 = SUB164(auVar18 * auVar28,8);
    uVar31 = *puVar39;
    if (uVar31 == 0) break;
  }
LAB_00100a27:
  uVar40 = (ulong)uVar32;
  plVar4 = (long *)(lVar41 + uVar40 * 8);
  *(undefined4 *)(lVar7 + uVar40 * 4) = 0;
  plVar37 = (long *)*plVar4;
  if (*(long **)(this + 0x1c0) == plVar37) {
    *(long *)(this + 0x1c0) = *plVar37;
    plVar37 = (long *)*plVar4;
  }
  if (*(long **)(this + 0x1c8) == plVar37) {
    *(long *)(this + 0x1c8) = plVar37[1];
    plVar37 = (long *)*plVar4;
  }
  if ((long *)plVar37[1] != (long *)0x0) {
    *(long *)plVar37[1] = *plVar37;
    plVar37 = (long *)*plVar4;
  }
  if (*plVar37 != 0) {
    *(long *)(*plVar37 + 8) = plVar37[1];
    plVar37 = (long *)*plVar4;
  }
  if (plVar37[3] != 0) {
    LOCK();
    plVar4 = (long *)(plVar37[3] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar7 = plVar37[3];
      plVar37[3] = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (plVar37[2] != 0) {
    LOCK();
    plVar4 = (long *)(plVar37[2] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar7 = plVar37[2];
      plVar37[2] = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  Memory::free_static(plVar37,false);
  *(undefined8 *)(*(long *)(this + 0x1b0) + uVar40 * 8) = 0;
  *(int *)(this + 0x1d4) = *(int *)(this + 0x1d4) + -1;
  goto LAB_00100ae9;
}



/* GDExtensionManager::class_has_icon_path(String const&) const */

undefined8 __thiscall
GDExtensionManager::class_has_icon_path(GDExtensionManager *this,String *param_1)

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
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 0x1b0) != 0) && (*(int *)(this + 0x1d4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
    uVar11 = String::hash();
    lVar17 = *(long *)(this + 0x1b8);
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x1b0) + lVar15 * 8) + 0x10),
                                      param_1);
          if ((char)uVar12 != '\0') {
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x1b8);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* GDExtensionManager::class_get_icon_path(String const&) const */

String * GDExtensionManager::class_get_icon_path(String *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
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
  code *pcVar20;
  ulong uVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  String *in_RDX;
  long lVar26;
  long in_RSI;
  long lVar27;
  uint uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RSI + 0x1b0) != 0) && (*(int *)(in_RSI + 0x1d4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x1d0) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x1d0) * 8);
    uVar23 = String::hash();
    uVar21 = CONCAT44(0,uVar1);
    lVar27 = *(long *)(in_RSI + 0x1b8);
    uVar24 = 1;
    if (uVar23 != 0) {
      uVar24 = uVar23;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar24 * lVar3;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar21;
    lVar26 = SUB168(auVar4 * auVar12,8);
    uVar23 = *(uint *)(lVar27 + lVar26 * 4);
    iVar25 = SUB164(auVar4 * auVar12,8);
    if (uVar23 != 0) {
      uVar28 = 0;
      do {
        if (uVar24 == uVar23) {
          cVar22 = String::operator==((String *)
                                      (*(long *)(*(long *)(in_RSI + 0x1b0) + lVar26 * 8) + 0x10),
                                      in_RDX);
          if (cVar22 != '\0') {
            if ((*(long *)(in_RSI + 0x1b0) == 0) || (*(int *)(in_RSI + 0x1d4) == 0))
            goto LAB_00100fd8;
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x1d0) * 4);
            lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x1d0) * 8);
            uVar23 = String::hash();
            uVar21 = CONCAT44(0,uVar1);
            lVar27 = *(long *)(in_RSI + 0x1b8);
            uVar24 = 1;
            if (uVar23 != 0) {
              uVar24 = uVar23;
            }
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar24 * lVar3;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar21;
            lVar26 = SUB168(auVar8 * auVar16,8);
            uVar23 = *(uint *)(lVar27 + lVar26 * 4);
            uVar28 = SUB164(auVar8 * auVar16,8);
            if (uVar23 == 0) goto LAB_00100fd8;
            uVar29 = 0;
            goto LAB_00100fa0;
          }
          lVar27 = *(long *)(in_RSI + 0x1b8);
        }
        uVar28 = uVar28 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar25 + 1) * lVar3;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21;
        lVar26 = SUB168(auVar5 * auVar13,8);
        uVar23 = *(uint *)(lVar27 + lVar26 * 4);
        iVar25 = SUB164(auVar5 * auVar13,8);
      } while ((uVar23 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar23 * lVar3, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar21, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar1 + iVar25) - SUB164(auVar6 * auVar14,8)) * lVar3,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar21, uVar28 <= SUB164(auVar7 * auVar15,8)));
    }
  }
  *(undefined8 *)param_1 = 0;
  String::parse_latin1((StrRange *)param_1);
LAB_00100d8b:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_00100fa0:
  if (uVar24 == uVar23) {
    cVar22 = String::operator==((String *)(*(long *)(*(long *)(in_RSI + 0x1b0) + lVar26 * 8) + 0x10)
                                ,in_RDX);
    if (cVar22 != '\0') {
      lVar3 = *(long *)(*(long *)(in_RSI + 0x1b0) + (ulong)uVar28 * 8);
      *(undefined8 *)param_1 = 0;
      if (*(long *)(lVar3 + 0x18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(lVar3 + 0x18));
      }
      goto LAB_00100d8b;
    }
    lVar27 = *(long *)(in_RSI + 0x1b8);
  }
  uVar29 = uVar29 + 1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)(uVar28 + 1) * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar21;
  lVar26 = SUB168(auVar9 * auVar17,8);
  uVar23 = *(uint *)(lVar27 + lVar26 * 4);
  uVar28 = SUB164(auVar9 * auVar17,8);
  if ((uVar23 == 0) ||
     (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar23 * lVar3, auVar18._8_8_ = 0,
     auVar18._0_8_ = uVar21, auVar11._8_8_ = 0,
     auVar11._0_8_ = (ulong)((uVar1 + uVar28) - SUB164(auVar10 * auVar18,8)) * lVar3,
     auVar19._8_8_ = 0, auVar19._0_8_ = uVar21, SUB164(auVar11 * auVar19,8) < uVar29)) {
LAB_00100fd8:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar20 = (code *)invalidInstructionException();
    (*pcVar20)();
  }
  goto LAB_00100fa0;
}



/* GDExtensionManager::deinitialize_extensions(GDExtension::InitializationLevel) */

void __thiscall GDExtensionManager::deinitialize_extensions(GDExtensionManager *this,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = Engine::get_singleton();
  if (*(char *)(lVar2 + 0xc4) == '\0') {
    if (*(int *)(this + 0x174) != param_2) {
      _err_print_error("deinitialize_extensions","core/extension/gdextension_manager.cpp",0xf4,
                       "Condition \"int32_t(p_level) != level\" is true.",0,0);
      return;
    }
    for (puVar1 = *(undefined8 **)(this + 400); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      GDExtension::deinitialize_library(puVar1[3],param_2);
    }
    *(int *)(this + 0x174) = param_2 + -1;
  }
  return;
}



/* GDExtensionManager::track_instance_binding(void*, Object*) */

void GDExtensionManager::track_instance_binding(void *param_1,Object *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)((long)param_1 + 400);
  if (plVar1 == (long *)0x0) {
    return;
  }
  while ((param_2 != (Object *)plVar1[3] || (param_2[0x248] == (Object)0x0))) {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  GDExtension::track_instance_binding(param_2);
  return;
}



/* GDExtensionManager::untrack_instance_binding(void*, Object*) */

void GDExtensionManager::untrack_instance_binding(void *param_1,Object *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)((long)param_1 + 400);
  if (plVar1 == (long *)0x0) {
    return;
  }
  while ((param_2 != (Object *)plVar1[3] || (param_2[0x248] == (Object)0x0))) {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  GDExtension::untrack_instance_binding(param_2);
  return;
}



/* GDExtensionManager::get_singleton() */

undefined8 GDExtensionManager::get_singleton(void)

{
  return singleton;
}



/* GDExtensionManager::GDExtensionManager() */

void __thiscall GDExtensionManager::GDExtensionManager(GDExtensionManager *this)

{
  undefined8 uVar1;
  bool bVar2;
  
  Object::Object((Object *)this);
  bVar2 = singleton == (GDExtensionManager *)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010c358;
  uVar1 = _LC12;
  *(undefined4 *)(this + 0x174) = 0xffffffff;
  *(undefined8 *)(this + 0x1a0) = uVar1;
  *(undefined8 *)(this + 0x1d0) = uVar1;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  if (bVar2) {
    singleton = this;
    GDExtensionSpecialCompatHashes::initialize();
    return;
  }
  _err_print_error("GDExtensionManager","core/extension/gdextension_manager.cpp",0x1a1,
                   "Condition \"singleton != nullptr\" is true.",0,0);
  return;
}



/* GDExtensionManager::_load_extension_internal(Ref<GDExtension> const&, bool) */

undefined8 __thiscall
GDExtensionManager::_load_extension_internal(GDExtensionManager *this,Ref *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  CowData<char32_t> *this_00;
  int iVar5;
  long *plVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  pOVar7 = *(Object **)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < *(int *)(this + 0x174)) {
    iVar2 = 0;
    if (param_2) goto LAB_0010129c;
    iVar2 = GDExtension::get_minimum_library_initialization_level();
    iVar5 = *(int *)(this + 0x174);
    iVar3 = 2;
    if (iVar5 < 3) {
      iVar3 = iVar5;
    }
    uVar4 = 4;
    if (iVar2 < iVar3) goto LAB_001013bb;
    if (iVar2 <= iVar5) {
      do {
        pOVar7 = *(Object **)param_1;
LAB_0010129c:
        iVar5 = iVar2 + 1;
        GDExtension::initialize_library(pOVar7,iVar2);
        iVar2 = iVar5;
      } while (iVar5 <= *(int *)(this + 0x174));
    }
    pOVar7 = *(Object **)param_1;
  }
  plVar6 = *(long **)(pOVar7 + 0x2e0);
  if (plVar6 == (long *)0x0) {
LAB_00101302:
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      pOVar7 = (Object *)0x0;
    }
  }
  else {
    do {
      this_00 = (CowData<char32_t> *)
                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                              *)(this + 0x1a8),(String *)(plVar6 + 2));
      if (*(long *)this_00 != plVar6[3]) {
        CowData<char32_t>::_ref(this_00,(CowData *)(plVar6 + 3));
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    pOVar7 = *(Object **)param_1;
    if (pOVar7 != (Object *)0x0) goto LAB_00101302;
  }
  StringName::StringName((StringName *)&local_80,"extension_loaded",false);
  Variant::Variant((Variant *)local_68,pOVar7);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_80,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (((pOVar7 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler(pOVar7), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  uVar4 = 0;
LAB_001013bb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GDExtensionManager::initialize_extensions(GDExtension::InitializationLevel) */

void __thiscall GDExtensionManager::initialize_extensions(GDExtensionManager *this,int param_2)

{
  long lVar1;
  CowData<char32_t> *this_00;
  long *plVar2;
  long *plVar3;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc4) == '\0') {
    if (param_2 + -1 != *(int *)(this + 0x174)) {
      _err_print_error("initialize_extensions","core/extension/gdextension_manager.cpp",0xe2,
                       "Condition \"int32_t(p_level) - 1 != level\" is true.",0,0);
      return;
    }
    plVar3 = *(long **)(this + 400);
    if (plVar3 != (long *)0x0) {
      do {
        while ((GDExtension::initialize_library(plVar3[3],param_2), param_2 == 3 &&
               (plVar2 = *(long **)(plVar3[3] + 0x2e0), plVar2 != (long *)0x0))) {
          do {
            this_00 = (CowData<char32_t> *)
                      HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                      ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                    *)(this + 0x1a8),(String *)(plVar2 + 2));
            if (*(long *)this_00 != plVar2[3]) {
              CowData<char32_t>::_ref(this_00,(CowData *)(plVar2 + 3));
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_001014e8;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
LAB_001014e8:
    *(int *)(this + 0x174) = param_2;
  }
  return;
}



/* GDExtensionManager::load_extension_with_loader(String const&, Ref<GDExtensionLoader> const&) */

int GDExtensionManager::load_extension_with_loader(String *param_1,Ref *param_2)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  GDExtension *this;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  GDExtension *pGVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  GDExtension *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x180) != 0) && (*(int *)(param_1 + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x1a0) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x1a0) * 8);
    uVar14 = String::hash();
    uVar22 = CONCAT44(0,uVar1);
    lVar19 = *(long *)(param_1 + 0x188);
    uVar17 = 1;
    if (uVar14 != 0) {
      uVar17 = uVar14;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar17 * lVar2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar22;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(lVar19 + lVar18 * 4);
    iVar15 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar20 = 0;
      do {
        if (uVar14 == uVar17) {
          cVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_1 + 0x180) + lVar18 * 8) + 0x10),
                                      (String *)param_2);
          if (cVar12 != '\0') {
            iVar15 = 2;
            goto LAB_0010160d;
          }
          lVar19 = *(long *)(param_1 + 0x188);
        }
        uVar20 = uVar20 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar15 + 1) * lVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar22;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar14 = *(uint *)(lVar19 + lVar18 * 4);
        iVar15 = SUB164(auVar5 * auVar9,8);
      } while ((uVar14 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar22, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar6 * auVar10,8)) * lVar2,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar22, uVar20 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  local_48 = (GDExtension *)0x0;
  this = (GDExtension *)operator_new(0x2f8,"");
  GDExtension::GDExtension(this);
  postinitialize_handler((Object *)this);
  cVar12 = RefCounted::init_ref();
  pGVar21 = (GDExtension *)(String *)0x0;
  if (cVar12 != '\0') {
    local_48 = this;
    cVar12 = RefCounted::reference();
    if (cVar12 == '\0') {
      local_48 = (GDExtension *)0x0;
    }
    cVar12 = RefCounted::unreference();
    pGVar21 = local_48;
    if ((cVar12 != '\0') &&
       (cVar12 = predelete_handler((Object *)this), pGVar21 = local_48, cVar12 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  iVar15 = 1;
  iVar13 = GDExtension::open_library((String *)pGVar21,param_2);
  if ((iVar13 == 0) &&
     (iVar15 = _load_extension_internal((GDExtensionManager *)param_1,(Ref *)&local_48,true),
     iVar15 == 0)) {
    (**(code **)(*(long *)pGVar21 + 0x188))(pGVar21,param_2,0);
    puVar16 = (undefined8 *)
              HashMap<String,Ref<GDExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDExtension>>>>
              ::operator[]((HashMap<String,Ref<GDExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDExtension>>>>
                            *)(param_1 + 0x178),(String *)param_2);
    pOVar3 = (Object *)*puVar16;
    if (pOVar3 != (Object *)pGVar21) {
      *puVar16 = pGVar21;
      cVar12 = RefCounted::reference();
      if (cVar12 == '\0') {
        *puVar16 = 0;
      }
      if (((pOVar3 != (Object *)0x0) && (cVar12 = RefCounted::unreference(), cVar12 != '\0')) &&
         (cVar12 = predelete_handler(pOVar3), cVar12 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  cVar12 = RefCounted::unreference();
  if ((cVar12 != '\0') && (cVar12 = predelete_handler((Object *)pGVar21), cVar12 != '\0')) {
    (**(code **)(*(long *)pGVar21 + 0x140))(pGVar21);
    Memory::free_static(pGVar21,false);
  }
LAB_0010160d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar15;
}



/* WARNING: Removing unreachable block (ram,0x001019f5) */
/* WARNING: Removing unreachable block (ram,0x001019fe) */
/* GDExtensionManager::load_extension(String const&) [clone .part.0] */

undefined4 GDExtensionManager::load_extension(String *param_1)

{
  long lVar1;
  String *pSVar2;
  char cVar3;
  undefined4 uVar4;
  RefCounted *this;
  Object *pOVar5;
  long lVar6;
  RefCounted *pRVar7;
  long in_FS_OFFSET;
  byte bVar8;
  Object *local_38;
  
  bVar8 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RefCounted *)operator_new(0x1f8,"");
  pRVar7 = this;
  for (lVar6 = 0x3f; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined8 *)pRVar7 = 0;
    pRVar7 = pRVar7 + (ulong)bVar8 * -0x10 + 8;
  }
  RefCounted::RefCounted(this);
  *(code **)this = __dynamic_cast;
  *(undefined2 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1e0) = 2;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar3 = RefCounted::init_ref();
  if (cVar3 != '\0') {
    cVar3 = RefCounted::reference();
    if (cVar3 != '\0') {
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') &&
         (cVar3 = predelete_handler((Object *)this), pRVar7 = this, cVar3 != '\0')) {
LAB_00101a83:
        (**(code **)(*(long *)this + 0x140))(this);
        Memory::free_static(this,false);
        this = pRVar7;
        if (pRVar7 == (RefCounted *)0x0) goto LAB_001019dc;
      }
      pSVar2 = singleton;
      local_38 = (Object *)0x0;
      pOVar5 = (Object *)__dynamic_cast(this,&Object::typeinfo,&GDExtensionLoader::typeinfo,0);
      if ((pOVar5 != (Object *)0x0) &&
         (cVar3 = RefCounted::reference(), local_38 = pOVar5, cVar3 == '\0')) {
        local_38 = (Object *)0x0;
      }
      uVar4 = load_extension_with_loader(pSVar2,(Ref *)param_1);
      if ((local_38 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
        cVar3 = predelete_handler(local_38);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
        if (this == (RefCounted *)0x0) goto LAB_0010199b;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this), cVar3 != '\0')) {
        (**(code **)(*(long *)this + 0x140))(this);
        Memory::free_static(this,false);
      }
      goto LAB_0010199b;
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this), cVar3 != '\0')) {
      pRVar7 = (RefCounted *)0x0;
      goto LAB_00101a83;
    }
  }
LAB_001019dc:
  uVar4 = load_extension_with_loader(singleton,(Ref *)param_1);
LAB_0010199b:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionManager::load_extension(String const&) */

undefined8 __thiscall GDExtensionManager::load_extension(GDExtensionManager *this,String *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc4) != '\0') {
    return 1;
  }
  uVar2 = load_extension(param_1);
  return uVar2;
}



/* GDExtensionManager::unload_extension(String const&) */

int __thiscall GDExtensionManager::unload_extension(GDExtensionManager *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  Object *pOVar6;
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
  char cVar35;
  uint uVar36;
  int iVar37;
  long lVar38;
  long *plVar39;
  uint uVar40;
  long lVar41;
  long lVar42;
  long *plVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  uint uVar47;
  uint uVar48;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar38 = Engine::get_singleton();
  iVar37 = 1;
  if (*(char *)(lVar38 + 0xc4) == '\0') {
    if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
      lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
      uVar36 = String::hash();
      uVar45 = CONCAT44(0,uVar4);
      lVar44 = *(long *)(this + 0x188);
      uVar40 = 1;
      if (uVar36 != 0) {
        uVar40 = uVar36;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar40 * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar45;
      lVar41 = SUB168(auVar7 * auVar21,8);
      uVar36 = *(uint *)(lVar44 + lVar41 * 4);
      iVar37 = SUB164(auVar7 * auVar21,8);
      if (uVar36 != 0) {
        uVar47 = 0;
        do {
          if (uVar40 == uVar36) {
            cVar35 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 0x180) + lVar41 * 8) + 0x10),
                                        param_1);
            if (cVar35 != '\0') {
              plVar39 = (long *)HashMap<String,Ref<GDExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDExtension>>>>
                                ::operator[]((HashMap<String,Ref<GDExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDExtension>>>>
                                              *)(this + 0x178),param_1);
              local_48 = (Object *)0x0;
              if (((Object *)*plVar39 != (Object *)0x0) &&
                 (local_48 = (Object *)*plVar39, cVar35 = RefCounted::reference(), cVar35 == '\0'))
              {
                local_48 = (Object *)0x0;
              }
              iVar37 = _unload_extension_internal(this,(Ref *)&local_48);
              if (((iVar37 != 0) || (*(long *)(this + 0x180) == 0)) || (*(int *)(this + 0x1a4) == 0)
                 ) goto LAB_00101fc2;
              uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
              lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
              uVar36 = String::hash();
              uVar45 = CONCAT44(0,uVar4);
              lVar44 = *(long *)(this + 0x188);
              uVar40 = 1;
              if (uVar36 != 0) {
                uVar40 = uVar36;
              }
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)uVar40 * lVar38;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = uVar45;
              lVar41 = SUB168(auVar11 * auVar25,8);
              uVar36 = *(uint *)(lVar44 + lVar41 * 4);
              uVar47 = SUB164(auVar11 * auVar25,8);
              if (uVar36 == 0) goto LAB_00101fc2;
              uVar48 = 0;
              goto LAB_00101dda;
            }
            lVar44 = *(long *)(this + 0x188);
          }
          uVar47 = uVar47 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar37 + 1) * lVar38;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar45;
          lVar41 = SUB168(auVar8 * auVar22,8);
          uVar36 = *(uint *)(lVar44 + lVar41 * 4);
          iVar37 = SUB164(auVar8 * auVar22,8);
        } while ((uVar36 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar36 * lVar38, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar45, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar4 + iVar37) - SUB164(auVar9 * auVar23,8)) * lVar38,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar45, uVar47 <= SUB164(auVar10 * auVar24,8)));
      }
    }
    iVar37 = 3;
  }
  goto LAB_00101b4c;
  while( true ) {
    uVar48 = uVar48 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(uVar47 + 1) * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar45;
    lVar41 = SUB168(auVar12 * auVar26,8);
    uVar36 = *(uint *)(lVar44 + lVar41 * 4);
    uVar47 = SUB164(auVar12 * auVar26,8);
    if ((uVar36 == 0) ||
       (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar36 * lVar38, auVar27._8_8_ = 0,
       auVar27._0_8_ = uVar45, auVar14._8_8_ = 0,
       auVar14._0_8_ = (ulong)((uVar4 + uVar47) - SUB164(auVar13 * auVar27,8)) * lVar38,
       auVar28._8_8_ = 0, auVar28._0_8_ = uVar45, SUB164(auVar14 * auVar28,8) < uVar48)) break;
LAB_00101dda:
    if (uVar40 == uVar36) {
      cVar35 = String::operator==((String *)(*(long *)(*(long *)(this + 0x180) + lVar41 * 8) + 0x10)
                                  ,param_1);
      if (cVar35 != '\0') {
        lVar38 = *(long *)(this + 0x188);
        lVar44 = *(long *)(this + 0x180);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
        uVar45 = CONCAT44(0,uVar4);
        lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)(uVar47 + 1) * lVar41;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar45;
        lVar42 = SUB168(auVar15 * auVar29,8);
        puVar46 = (uint *)(lVar38 + lVar42 * 4);
        uVar36 = SUB164(auVar15 * auVar29,8);
        uVar40 = *puVar46;
        if ((uVar40 == 0) ||
           (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar40 * lVar41, auVar30._8_8_ = 0,
           auVar30._0_8_ = uVar45, auVar17._8_8_ = 0,
           auVar17._0_8_ = (ulong)((uVar4 + uVar36) - SUB164(auVar16 * auVar30,8)) * lVar41,
           auVar31._8_8_ = 0, auVar31._0_8_ = uVar45, uVar48 = uVar47,
           SUB164(auVar17 * auVar31,8) == 0)) goto LAB_00101f10;
        goto LAB_00101ec4;
      }
      lVar44 = *(long *)(this + 0x188);
    }
  }
  goto LAB_00101fc2;
  while (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar40 * lVar41, auVar32._8_8_ = 0,
        auVar32._0_8_ = uVar45, auVar19._8_8_ = 0,
        auVar19._0_8_ = (ulong)((uVar36 + uVar4) - SUB164(auVar18 * auVar32,8)) * lVar41,
        auVar33._8_8_ = 0, auVar33._0_8_ = uVar45, uVar48 = uVar47, SUB164(auVar19 * auVar33,8) != 0
        ) {
LAB_00101ec4:
    uVar47 = uVar36;
    puVar1 = (uint *)(lVar38 + (ulong)uVar48 * 4);
    *puVar46 = *puVar1;
    puVar2 = (undefined8 *)(lVar44 + lVar42 * 8);
    *puVar1 = uVar40;
    puVar3 = (undefined8 *)(lVar44 + (ulong)uVar48 * 8);
    uVar5 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar5;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(uVar47 + 1) * lVar41;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar45;
    lVar42 = SUB168(auVar20 * auVar34,8);
    puVar46 = (uint *)(lVar38 + lVar42 * 4);
    uVar36 = SUB164(auVar20 * auVar34,8);
    uVar40 = *puVar46;
    if (uVar40 == 0) break;
  }
LAB_00101f10:
  uVar45 = (ulong)uVar47;
  plVar39 = (long *)(lVar44 + uVar45 * 8);
  *(undefined4 *)(lVar38 + uVar45 * 4) = 0;
  plVar43 = (long *)*plVar39;
  if (*(long **)(this + 400) == plVar43) {
    *(long *)(this + 400) = *plVar43;
    plVar43 = (long *)*plVar39;
  }
  if (*(long **)(this + 0x198) == plVar43) {
    *(long *)(this + 0x198) = plVar43[1];
    plVar43 = (long *)*plVar39;
  }
  if ((long *)plVar43[1] != (long *)0x0) {
    *(long *)plVar43[1] = *plVar43;
    plVar43 = (long *)*plVar39;
  }
  if (*plVar43 != 0) {
    *(long *)(*plVar43 + 8) = plVar43[1];
    plVar43 = (long *)*plVar39;
  }
  if ((plVar43[3] != 0) && (cVar35 = RefCounted::unreference(), cVar35 != '\0')) {
    pOVar6 = (Object *)plVar43[3];
    cVar35 = predelete_handler(pOVar6);
    if (cVar35 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  if (plVar43[2] != 0) {
    LOCK();
    plVar39 = (long *)(plVar43[2] + -0x10);
    *plVar39 = *plVar39 + -1;
    UNLOCK();
    if (*plVar39 == 0) {
      lVar38 = plVar43[2];
      plVar43[2] = 0;
      Memory::free_static((void *)(lVar38 + -0x10),false);
    }
  }
  Memory::free_static(plVar43,false);
  *(undefined8 *)(*(long *)(this + 0x180) + uVar45 * 8) = 0;
  *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + -1;
LAB_00101fc2:
  pOVar6 = local_48;
  if (((local_48 != (Object *)0x0) && (cVar35 = RefCounted::unreference(), cVar35 != '\0')) &&
     (cVar35 = predelete_handler(pOVar6), cVar35 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_00101b4c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar37;
}



/* GDExtensionManager::load_extensions() */

void GDExtensionManager::load_extensions(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  bool bVar7;
  Object *local_58;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Engine::get_singleton();
  if (*(char *)(lVar4 + 0xc4) == '\0') {
    GDExtension::get_extension_list_config_file();
    FileAccess::open((String *)&local_58,(int)&local_38,(Error *)0x1);
    pcVar1 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar6 = (long *)(local_38 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
    }
joined_r0x00102161:
    do {
      if ((local_58 == (Object *)0x0) ||
         (cVar2 = (**(code **)(*(long *)local_58 + 0x1d8))(), cVar2 != '\0')) goto LAB_00102360;
      (**(code **)(*(long *)local_58 + 0x228))(&local_38);
      String::strip_edges(SUB81((String *)&local_50,0),SUB81(&local_38,0));
      pcVar1 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_38 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
    } while (local_50 == 0);
    if (1 < *(uint *)(local_50 + -8)) {
      lVar4 = Engine::get_singleton();
      if ((*(char *)(lVar4 + 0xc4) != '\0') ||
         (iVar3 = load_extension((String *)&local_50), iVar3 == 1)) {
        local_40 = 0;
        plVar6 = (long *)(local_50 + -0x10);
        if (local_50 != 0) {
          do {
            lVar4 = *plVar6;
            if (lVar4 == 0) goto LAB_00102238;
            LOCK();
            lVar5 = *plVar6;
            bVar7 = lVar4 == lVar5;
            if (bVar7) {
              *plVar6 = lVar4 + 1;
              lVar5 = lVar4;
            }
            UNLOCK();
          } while (!bVar7);
          if (lVar5 != -1) {
            local_40 = local_50;
          }
        }
LAB_00102238:
        local_48 = 0;
        local_38 = "Error loading extension: \'%s\'.";
        local_30 = 0x1e;
        String::parse_latin1((StrRange *)&local_48);
        vformat<String>(&local_38,(StrRange *)&local_48,&local_40);
        _err_print_error("load_extensions","core/extension/gdextension_manager.cpp",0x123,
                         "Condition \"err == LOAD_STATUS_FAILED\" is true. Continuing.",&local_38,0,
                         0);
        pcVar1 = local_38;
        if (local_38 != (char *)0x0) {
          LOCK();
          plVar6 = (long *)(local_38 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_38 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        lVar4 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar6 = (long *)(local_48 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_40;
        if (local_40 != 0) {
          LOCK();
          plVar6 = (long *)(local_40 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_40 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
      }
      if (local_50 == 0) goto joined_r0x00102161;
    }
    lVar4 = local_50;
    LOCK();
    plVar6 = (long *)(local_50 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
    goto joined_r0x00102161;
  }
LAB_001020fa:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00102360:
  plVar6 = (long *)OS::get_singleton();
  if (*(code **)(*plVar6 + 0x348) != OS::load_platform_gdextensions) {
    (**(code **)(*plVar6 + 0x348))(plVar6);
  }
  if (((local_58 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
    (**(code **)(*(long *)local_58 + 0x140))(local_58);
    Memory::free_static(local_58,false);
  }
  goto LAB_001020fa;
}



/* GDExtensionManager::reload_extension(String const&) */

int __thiscall GDExtensionManager::reload_extension(GDExtensionManager *this,String *param_1)

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
  char cVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  String *pSVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  String *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = Engine::get_singleton();
  if (*(char *)(lVar13 + 0xc2) == '\0') {
    _err_print_error("reload_extension","core/extension/gdextension_manager.cpp",0x7c,
                     "Condition \"!Engine::get_singleton()->is_extension_reloading_enabled()\" is true. Returning: LOAD_STATUS_FAILED"
                     ,"GDExtension reloading is disabled.",0,0);
  }
  else {
    lVar13 = Engine::get_singleton();
    if (*(char *)(lVar13 + 0xc4) == '\0') {
      if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
        lVar13 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
        uVar11 = String::hash();
        uVar19 = CONCAT44(0,uVar1);
        lVar18 = *(long *)(this + 0x188);
        uVar15 = 1;
        if (uVar11 != 0) {
          uVar15 = uVar11;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)uVar15 * lVar13;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar19;
        lVar16 = SUB168(auVar2 * auVar6,8);
        uVar11 = *(uint *)(lVar18 + lVar16 * 4);
        iVar12 = SUB164(auVar2 * auVar6,8);
        if (uVar11 != 0) {
          uVar20 = 0;
          do {
            if (uVar11 == uVar15) {
              cVar10 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0x180) + lVar16 * 8) + 0x10),
                                          param_1);
              if (cVar10 != '\0') {
                plVar14 = (long *)HashMap<String,Ref<GDExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDExtension>>>>
                                  ::operator[]((HashMap<String,Ref<GDExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDExtension>>>>
                                                *)(this + 0x178),param_1);
                pSVar17 = (String *)*plVar14;
                if ((pSVar17 == (String *)0x0) ||
                   (local_70 = pSVar17, cVar10 = RefCounted::reference(), cVar10 == '\0')) {
                  local_70 = (String *)0x0;
                  pSVar17 = (String *)0x0;
                }
                if (pSVar17[0x248] == (String)0x0) {
                  local_68 = 0;
                  if (*(long *)param_1 != 0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
                  }
                  local_60 = 0;
                  local_50 = 0x50;
                  local_58 = 
                  "This GDExtension is not marked as \'reloadable\' or doesn\'t support reloading: %s."
                  ;
                  String::parse_latin1((StrRange *)&local_60);
                  vformat<String>((CowData<char32_t> *)&local_58,(StrRange *)&local_60,
                                  (CowData<char32_t> *)&local_68);
                  _err_print_error("reload_extension","core/extension/gdextension_manager.cpp",0x87,
                                   "Condition \"!extension->is_reloadable()\" is true. Returning: LOAD_STATUS_FAILED"
                                   ,(CowData<char32_t> *)&local_58,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00102644:
                  iVar12 = 1;
                }
                else {
                  GDExtension::prepare_reload();
                  cVar10 = GDExtension::is_library_open();
                  if (cVar10 == '\0') {
LAB_0010262e:
                    iVar12 = GDExtension::open_library(pSVar17,(Ref *)param_1);
                    if (iVar12 != 0) goto LAB_00102644;
                    iVar12 = _load_extension_internal(this,(Ref *)&local_70,false);
                    if (iVar12 == 0) {
                      GDExtension::finish_reload();
                    }
                  }
                  else {
                    iVar12 = _unload_extension_internal(this,(Ref *)&local_70);
                    if (iVar12 == 0) {
                      GDExtension::clear_instance_bindings();
                      GDExtension::close_library();
                      goto LAB_0010262e;
                    }
                    GDExtension::clear_instance_bindings();
                  }
                }
                cVar10 = RefCounted::unreference();
                if ((cVar10 != '\0') &&
                   (cVar10 = predelete_handler((Object *)pSVar17), cVar10 != '\0')) {
                  (**(code **)(*(long *)pSVar17 + 0x140))(pSVar17);
                  Memory::free_static(pSVar17,false);
                }
                goto LAB_0010246e;
              }
              lVar18 = *(long *)(this + 0x188);
            }
            uVar20 = uVar20 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar13;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar19;
            lVar16 = SUB168(auVar3 * auVar7,8);
            uVar11 = *(uint *)(lVar18 + lVar16 * 4);
            iVar12 = SUB164(auVar3 * auVar7,8);
          } while ((uVar11 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar11 * lVar13, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar19, auVar5._8_8_ = 0,
                  auVar5._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar4 * auVar8,8)) * lVar13,
                  auVar9._8_8_ = 0, auVar9._0_8_ = uVar19, uVar20 <= SUB164(auVar5 * auVar9,8)));
        }
      }
      iVar12 = 3;
      goto LAB_0010246e;
    }
  }
  iVar12 = 1;
LAB_0010246e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12;
}



/* GDExtensionManager::reload_extensions() */

void __thiscall GDExtensionManager::reload_extensions(GDExtensionManager *this)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char cVar3;
  long lVar4;
  CallableCustom *this_00;
  long *plVar5;
  char cVar6;
  long in_FS_OFFSET;
  Variant *local_58 [2];
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Engine::get_singleton();
  if ((*(char *)(lVar4 + 0xc4) == '\0') &&
     (plVar5 = *(long **)(this + 400), cVar6 = '\0', plVar5 != (long *)0x0)) {
    do {
      while (*(char *)(plVar5[3] + 0x248) == '\0') {
LAB_00102800:
        plVar5 = (long *)*plVar5;
        cVar3 = cVar6;
        if (plVar5 == (long *)0x0) goto LAB_00102858;
      }
      cVar3 = GDExtension::has_library_changed();
      if (cVar3 == '\0') goto LAB_00102800;
      Resource::get_path();
      reload_extension(this,(String *)local_58);
      pVVar2 = local_58[0];
      if (local_58[0] != (Variant *)0x0) {
        LOCK();
        pVVar1 = local_58[0] + -0x10;
        *(long *)pVVar1 = *(long *)pVVar1 + -1;
        UNLOCK();
        if (*(long *)pVVar1 == 0) {
          local_58[0] = (Variant *)0x0;
          Memory::free_static(pVVar2 + -0x10,false);
        }
      }
      plVar5 = (long *)*plVar5;
      cVar6 = cVar3;
    } while (plVar5 != (long *)0x0);
LAB_00102858:
    if (cVar3 != '\0') {
      StringName::StringName((StringName *)local_58,"extensions_reloaded",false);
      local_40 = (undefined1  [16])0x0;
      local_48[0] = 0;
      local_48[1] = 0;
      (**(code **)(*(long *)this + 0xd0))(this,local_58,0,0);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_58[0] != (Variant *)0x0)) {
        StringName::unref();
      }
      this_00 = (CallableCustom *)operator_new(0x30,"");
      CallableCustom::CallableCustom(this_00);
      *(undefined **)(this_00 + 0x20) = &_LC4;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined ***)this_00 = &PTR_hash_0010c4b8;
      *(undefined8 *)(this_00 + 0x28) = 0x100000;
      CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
      *(char **)(this_00 + 0x20) = "GDExtensionManager::_reload_all_scripts";
      Callable::Callable((Callable *)local_58,this_00);
      Variant::Variant((Variant *)local_48,0);
      Callable::call_deferredp(local_58,0);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)local_58);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDExtensionManager::_bind_methods() */

void GDExtensionManager::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
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
  char *pcVar16;
  undefined8 uVar17;
  int *piVar18;
  MethodBind *pMVar19;
  undefined4 *puVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  int *piVar24;
  long in_FS_OFFSET;
  CowData *local_180;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  long local_100;
  char *local_f8;
  int local_f0;
  long local_e8;
  undefined4 local_e0;
  char *local_d8;
  long local_d0;
  undefined1 local_c8 [16];
  long local_b8;
  long local_b0 [3];
  undefined1 (*local_98 [2]) [16];
  int *local_88;
  undefined8 local_80;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC49;
  uVar21 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"load_extension",uVar21);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar19 = create_method_bind<GDExtensionManager,GDExtensionManager::LoadStatus,String_const&>
                      (load_extension);
  ClassDB::bind_methodfi(1,pMVar19,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar17 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar22 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_c8._8_8_;
      local_c8 = auVar3 << 0x40;
      plVar23 = (long *)uVar17;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar22 = lVar22 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar22);
      }
      Memory::free_static((long *)(uVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = &_LC49;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"reload_extension",uVar21);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar19 = create_method_bind<GDExtensionManager,GDExtensionManager::LoadStatus,String_const&>
                      (reload_extension);
  ClassDB::bind_methodfi(1,pMVar19,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar17 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar22 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_c8._8_8_;
      local_c8 = auVar4 << 0x40;
      plVar23 = (long *)uVar17;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar22 = lVar22 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar22);
      }
      Memory::free_static((long *)(uVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = &_LC49;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"unload_extension",uVar21);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar19 = create_method_bind<GDExtensionManager,GDExtensionManager::LoadStatus,String_const&>
                      (unload_extension);
  ClassDB::bind_methodfi(1,pMVar19,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar17 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar22 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_c8._8_8_;
      local_c8 = auVar5 << 0x40;
      plVar23 = (long *)uVar17;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar22 = lVar22 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar22);
      }
      Memory::free_static((long *)(uVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = &_LC49;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"is_extension_loaded",uVar21);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar19 = create_method_bind<GDExtensionManager,bool,String_const&>(is_extension_loaded);
  ClassDB::bind_methodfi(1,pMVar19,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar17 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar22 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_c8._8_8_;
      local_c8 = auVar6 << 0x40;
      plVar23 = (long *)uVar17;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar22 = lVar22 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar22);
      }
      Memory::free_static((long *)(uVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_loaded_extensions",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar19 = create_method_bind<GDExtensionManager,Vector<String>>(get_loaded_extensions);
  ClassDB::bind_methodfi(1,pMVar19,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar17 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar22 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_c8._8_8_;
      local_c8 = auVar7 << 0x40;
      plVar23 = (long *)uVar17;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar22 = lVar22 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar22);
      }
      Memory::free_static((long *)(uVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = &_LC49;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"get_extension",uVar21);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar19 = create_method_bind<GDExtensionManager,Ref<GDExtension>,String_const&>(get_extension);
  ClassDB::bind_methodfi(1,pMVar19,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar17 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar22 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_c8._8_8_;
      local_c8 = auVar8 << 0x40;
      plVar23 = (long *)uVar17;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar22 = lVar22 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar22);
      }
      Memory::free_static((long *)(uVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"LOAD_STATUS_OK",false);
  local_120 = 0;
  local_d8 = "LOAD_STATUS_OK";
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<GDExtensionManager::LoadStatus,void>::get_class_info
            ((GetTypeInfo<GDExtensionManager::LoadStatus,void> *)&local_d8);
  lVar1 = local_b8;
  local_118 = (char *)local_c8._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_c8._8_8_;
  local_c8 = auVar9 << 0x40;
  if (local_b8 != 0) {
    LOCK();
    plVar23 = (long *)(local_b8 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8._0_8_ != 0)) {
    StringName::unref();
  }
  lVar1 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar23 = (long *)(local_d0 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  local_128 = 0;
  local_d8 = "GDExtensionManager";
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,0,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar23 = (long *)(local_128 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"LOAD_STATUS_FAILED",false);
  local_d8 = "LOAD_STATUS_FAILED";
  local_120 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<GDExtensionManager::LoadStatus,void>::get_class_info
            ((GetTypeInfo<GDExtensionManager::LoadStatus,void> *)&local_d8);
  local_118 = (char *)local_c8._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_c8._8_8_;
  local_c8 = auVar10 << 0x40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8._0_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  local_d8 = "GDExtensionManager";
  local_128 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,1,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar23 = (long *)(local_120 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"LOAD_STATUS_ALREADY_LOADED",false);
  local_d8 = "LOAD_STATUS_ALREADY_LOADED";
  local_120 = 0;
  local_d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<GDExtensionManager::LoadStatus,void>::get_class_info
            ((GetTypeInfo<GDExtensionManager::LoadStatus,void> *)&local_d8);
  lVar1 = local_b8;
  local_118 = (char *)local_c8._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_c8._8_8_;
  local_c8 = auVar11 << 0x40;
  if (local_b8 != 0) {
    LOCK();
    plVar23 = (long *)(local_b8 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8._0_8_ != 0)) {
    StringName::unref();
  }
  lVar1 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar23 = (long *)(local_d0 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  local_128 = 0;
  local_d8 = "GDExtensionManager";
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,2,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar23 = (long *)(local_128 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"LOAD_STATUS_NOT_LOADED",false);
  local_d8 = "LOAD_STATUS_NOT_LOADED";
  local_120 = 0;
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<GDExtensionManager::LoadStatus,void>::get_class_info
            ((GetTypeInfo<GDExtensionManager::LoadStatus,void> *)&local_d8);
  local_118 = (char *)local_c8._0_8_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_c8._8_8_;
  local_c8 = auVar12 << 0x40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8._0_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  local_d8 = "GDExtensionManager";
  local_128 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,3,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"LOAD_STATUS_NEEDS_RESTART",false);
  local_120 = 0;
  local_d8 = "LOAD_STATUS_NEEDS_RESTART";
  local_d0 = 0x19;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<GDExtensionManager::LoadStatus,void>::get_class_info
            ((GetTypeInfo<GDExtensionManager::LoadStatus,void> *)&local_d8);
  local_118 = (char *)local_c8._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = local_c8._8_8_;
  local_c8 = auVar13 << 0x40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8._0_8_ != 0)) {
    StringName::unref();
  }
  lVar1 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar23 = (long *)(local_d0 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  local_128 = 0;
  local_d8 = "GDExtensionManager";
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(String *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,4,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar23 = (long *)(local_128 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  local_118 = (char *)0x0;
  local_d8 = "extensions_reloaded";
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_118);
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0[0] = 0;
  local_b0[1] = 6;
  local_b0[2] = 1;
  local_98[0] = (undefined1 (*) [16])0x0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_c8 = (undefined1  [16])0x0;
  if (local_118 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_118);
  }
  local_120 = 0;
  local_108 = "GDExtensionManager";
  local_100 = 0x12;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_108,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_108,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar23 = (long *)(local_120 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar23 = (long *)(local_70 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar18 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar23 = (long *)(local_88 + -4);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_88 + -2);
      lVar22 = 0;
      local_88 = (int *)0x0;
      piVar24 = piVar18;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar22 = lVar22 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar22);
      }
      Memory::free_static(piVar18 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  lVar1 = local_b0[0];
  if (local_b0[0] != 0) {
    LOCK();
    plVar23 = (long *)(local_b0[0] + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_b0[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar17 = local_c8._0_8_;
  if (local_c8._0_8_ != 0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_c8._8_8_;
      local_c8 = auVar14 << 0x40;
      Memory::free_static((void *)(uVar17 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  local_128 = 0;
  local_d8 = "GDExtension";
  local_130 = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "extension";
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_138);
  local_108 = (char *)CONCAT44(local_108._4_4_,0x18);
  local_100 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_138);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0x11;
  local_e8 = 0;
  if (local_130 == 0) {
LAB_00104958:
    local_180 = (CowData *)&local_e8;
    local_e0 = 6;
    StringName::StringName((StringName *)&local_d8,(String *)local_180,false);
    if (local_f8 == local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_d8;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 == 0x11) goto LAB_00104958;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_128);
  }
  local_180 = (CowData *)&local_e8;
  local_120 = 0;
  local_d8 = "extension_loaded";
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_120);
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0[0] = 0;
  local_b0[1] = 6;
  local_b0[2] = 1;
  local_98[0] = (undefined1 (*) [16])0x0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_c8 = (undefined1  [16])0x0;
  if ((local_120 == 0) ||
     (CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120),
     local_98[0] == (undefined1 (*) [16])0x0)) {
    local_98[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_98[0][1] = 0;
    *local_98[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_108._0_4_;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)&local_100);
  }
  StringName::operator=((StringName *)(puVar20 + 4),(StringName *)&local_f8);
  puVar20[6] = local_f0;
  if (*(long *)(puVar20 + 8) != local_e8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),local_180);
  }
  puVar20[10] = local_e0;
  lVar1 = *(long *)(*local_98[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_98[0];
  *(long *)(puVar20 + 0xe) = lVar1;
  if (lVar1 != 0) {
    *(undefined4 **)(lVar1 + 0x30) = puVar20;
  }
  lVar1 = *(long *)*local_98[0];
  *(undefined4 **)(*local_98[0] + 8) = puVar20;
  if (lVar1 == 0) {
    *(undefined4 **)*local_98[0] = puVar20;
  }
  *(int *)local_98[0][1] = *(int *)local_98[0][1] + 1;
  local_118 = "GDExtensionManager";
  local_140 = 0;
  local_110 = 0x12;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_118,(String *)&local_140,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar23 = (long *)(local_140 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar23 = (long *)(local_70 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar18 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar23 = (long *)(local_88 + -4);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_88 + -2);
      lVar22 = 0;
      local_88 = (int *)0x0;
      piVar24 = piVar18;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar22 = lVar22 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar22);
      }
      Memory::free_static(piVar18 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  if ((StringName::configured != '\0') && (local_c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pcVar16 = local_d8;
  if (local_d8 != (char *)0x0) {
    LOCK();
    plVar23 = (long *)((long)local_d8 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_d8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar16 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar1 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar23 = (long *)(local_e8 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  lVar1 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar23 = (long *)(local_130 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  local_128 = 0;
  local_d8 = "GDExtension";
  local_130 = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "extension";
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_138);
  local_108 = (char *)CONCAT44(local_108._4_4_,0x18);
  local_100 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_138);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0x11;
  local_e8 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_180,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 != 0x11) {
      StringName::operator=((StringName *)&local_f8,(StringName *)&local_128);
      goto LAB_001040ef;
    }
  }
  local_e0 = 6;
  StringName::StringName((StringName *)&local_d8,(String *)local_180,false);
  if (local_f8 == local_d8) {
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_f8 = local_d8;
  }
LAB_001040ef:
  local_120 = 0;
  local_d8 = "extension_unloading";
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_120);
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0[0] = 0;
  local_b0[1] = 6;
  local_b0[2] = 1;
  local_98[0] = (undefined1 (*) [16])0x0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_c8 = (undefined1  [16])0x0;
  if ((local_120 == 0) ||
     (CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120),
     local_98[0] == (undefined1 (*) [16])0x0)) {
    local_98[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_98[0][1] = 0;
    *local_98[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_108._0_4_;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)&local_100);
  }
  StringName::operator=((StringName *)(puVar20 + 4),(StringName *)&local_f8);
  puVar20[6] = local_f0;
  if (*(long *)(puVar20 + 8) != local_e8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),local_180);
  }
  puVar20[10] = local_e0;
  lVar1 = *(long *)(*local_98[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_98[0];
  *(long *)(puVar20 + 0xe) = lVar1;
  if (lVar1 != 0) {
    *(undefined4 **)(lVar1 + 0x30) = puVar20;
  }
  lVar1 = *(long *)*local_98[0];
  *(undefined4 **)(*local_98[0] + 8) = puVar20;
  if (lVar1 == 0) {
    *(undefined4 **)*local_98[0] = puVar20;
  }
  *(int *)local_98[0][1] = *(int *)local_98[0][1] + 1;
  local_118 = "GDExtensionManager";
  local_140 = 0;
  local_110 = 0x12;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_118,(String *)&local_140,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar23 = (long *)(local_140 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar23 = (long *)(local_70 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar18 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar23 = (long *)(local_88 + -4);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_88 + -2);
      lVar22 = 0;
      local_88 = (int *)0x0;
      piVar24 = piVar18;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar22 = lVar22 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar22);
      }
      Memory::free_static(piVar18 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  lVar1 = local_b0[0];
  if (local_b0[0] != 0) {
    LOCK();
    plVar23 = (long *)(local_b0[0] + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_b0[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar17 = local_c8._0_8_;
  if (local_c8._0_8_ != 0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_c8._8_8_;
      local_c8 = auVar15 << 0x40;
      Memory::free_static((void *)(uVar17 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  lVar1 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar23 = (long *)(local_120 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar23 = (long *)(local_e8 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar23 = (long *)(local_100 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar23 = (long *)(local_138 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* GDExtensionManager::get_loaded_extensions() const */

void GDExtensionManager::get_loaded_extensions(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  bool bVar6;
  long local_38;
  
  puVar2 = *(undefined8 **)(in_RSI + 400);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  do {
    while( true ) {
      if (puVar2 == (undefined8 *)0x0) {
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_38 = 0;
      plVar1 = (long *)(puVar2[2] + -0x10);
      if (puVar2[2] != 0) break;
      Vector<String>::push_back();
      puVar2 = (undefined8 *)*puVar2;
    }
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00104dd9;
      LOCK();
      lVar5 = *plVar1;
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *plVar1 = lVar4 + 1;
        lVar5 = lVar4;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar5 != -1) {
      local_38 = puVar2[2];
    }
LAB_00104dd9:
    Vector<String>::push_back();
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_38 + -0x10),false);
      }
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



/* GDExtensionManager::ensure_extensions_loaded(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> > const&) */

undefined8 __thiscall
GDExtensionManager::ensure_extensions_loaded(GDExtensionManager *this,HashSet *param_1)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
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
  ulong uVar20;
  String *pSVar21;
  char cVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  CallableCustom *this_00;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  int iVar31;
  undefined8 *puVar32;
  Object *pOVar33;
  String *pSVar34;
  String *pSVar35;
  uint uVar36;
  Object *pOVar37;
  String *pSVar38;
  long in_FS_OFFSET;
  bool bVar39;
  int local_d0;
  long local_a8;
  Object *local_a0;
  Vector<String> local_98 [8];
  String *local_90;
  Vector<String> local_88 [8];
  String *local_80;
  Vector<String> local_78 [8];
  String *local_70;
  Object *local_68 [2];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  iVar25 = *(int *)(param_1 + 0x24);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (String *)0x0;
  local_80 = (String *)0x0;
  if (iVar25 != 0) {
    pSVar38 = *(String **)param_1;
    local_d0 = 1;
    do {
      if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
        lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
        uVar24 = String::hash();
        uVar20 = CONCAT44(0,uVar2);
        lVar26 = *(long *)(this + 0x188);
        uVar29 = 1;
        if (uVar24 != 0) {
          uVar29 = uVar24;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar29 * lVar27;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar20;
        lVar30 = SUB168(auVar4 * auVar12,8);
        uVar24 = *(uint *)(lVar26 + lVar30 * 4);
        iVar31 = SUB164(auVar4 * auVar12,8);
        if (uVar24 != 0) {
          uVar36 = 0;
          do {
            if (uVar29 == uVar24) {
              cVar22 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0x180) + lVar30 * 8) + 0x10),
                                          pSVar38);
              if (cVar22 != '\0') goto LAB_00105079;
              lVar26 = *(long *)(this + 0x188);
            }
            uVar36 = uVar36 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar31 + 1) * lVar27;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar20;
            lVar30 = SUB168(auVar5 * auVar13,8);
            uVar24 = *(uint *)(lVar26 + lVar30 * 4);
            iVar31 = SUB164(auVar5 * auVar13,8);
          } while ((uVar24 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar24 * lVar27, auVar14._8_8_ = 0,
                  auVar14._0_8_ = uVar20, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar2 + iVar31) - SUB164(auVar6 * auVar14,8)) * lVar27,
                  auVar15._8_8_ = 0, auVar15._0_8_ = uVar20, uVar36 <= SUB164(auVar7 * auVar15,8)));
        }
      }
      local_68[0] = (Object *)0x0;
      plVar1 = (long *)(*(long *)pSVar38 + -0x10);
      if (*(long *)pSVar38 == 0) {
        Vector<String>::push_back(local_98,local_68);
      }
      else {
        do {
          lVar27 = *plVar1;
          if (lVar27 == 0) goto LAB_0010504a;
          LOCK();
          lVar26 = *plVar1;
          bVar39 = lVar27 == lVar26;
          if (bVar39) {
            *plVar1 = lVar27 + 1;
            lVar26 = lVar27;
          }
          UNLOCK();
        } while (!bVar39);
        if (lVar26 != -1) {
          local_68[0] = *(Object **)pSVar38;
        }
LAB_0010504a:
        pOVar33 = local_68[0];
        Vector<String>::push_back(local_98);
        if (pOVar33 != (Object *)0x0) {
          LOCK();
          pOVar33 = pOVar33 + -0x10;
          *(long *)pOVar33 = *(long *)pOVar33 + -1;
          UNLOCK();
          if (*(long *)pOVar33 == 0) {
            Memory::free_static(local_68[0] + -0x10,false);
          }
        }
      }
LAB_00105079:
      if (iVar25 <= local_d0) break;
      local_d0 = local_d0 + 1;
      pSVar38 = pSVar38 + 8;
    } while( true );
  }
  puVar32 = *(undefined8 **)(this + 400);
  local_70 = (String *)0x0;
  for (; puVar32 != (undefined8 *)0x0; puVar32 = (undefined8 *)*puVar32) {
    while( true ) {
      local_68[0] = (Object *)0x0;
      plVar1 = (long *)(puVar32[2] + -0x10);
      if (puVar32[2] != 0) break;
      Vector<String>::push_back(local_78,local_68);
      puVar32 = (undefined8 *)*puVar32;
      if (puVar32 == (undefined8 *)0x0) goto LAB_00105160;
    }
    do {
      lVar27 = *plVar1;
      if (lVar27 == 0) goto LAB_001050fd;
      LOCK();
      lVar26 = *plVar1;
      bVar39 = lVar27 == lVar26;
      if (bVar39) {
        *plVar1 = lVar27 + 1;
        lVar26 = lVar27;
      }
      UNLOCK();
    } while (!bVar39);
    if (lVar26 != -1) {
      local_68[0] = (Object *)puVar32[2];
    }
LAB_001050fd:
    pOVar33 = local_68[0];
    Vector<String>::push_back(local_78);
    if (pOVar33 != (Object *)0x0) {
      LOCK();
      pOVar33 = pOVar33 + -0x10;
      *(long *)pOVar33 = *(long *)pOVar33 + -1;
      UNLOCK();
      if (*(long *)pOVar33 == 0) {
        Memory::free_static(local_68[0] + -0x10,false);
      }
    }
  }
LAB_00105160:
  CowData<String>::_copy_on_write((CowData<String> *)&local_70);
  pSVar38 = local_70;
  CowData<String>::_copy_on_write((CowData<String> *)&local_70);
  pSVar21 = local_70;
  if (local_70 == (String *)0x0) {
    pSVar35 = (String *)0x0;
  }
  else {
    pSVar35 = local_70 + *(long *)(local_70 + -8) * 8;
  }
  for (; pSVar38 != pSVar35; pSVar38 = pSVar38 + 8) {
    if ((*(long *)param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x20) * 4);
      lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x20) * 8);
      uVar24 = String::hash();
      uVar20 = CONCAT44(0,uVar2);
      lVar26 = *(long *)(param_1 + 0x18);
      uVar29 = 1;
      if (uVar24 != 0) {
        uVar29 = uVar24;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar29 * lVar27;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar20;
      lVar30 = SUB168(auVar8 * auVar16,8);
      uVar24 = *(uint *)(lVar26 + lVar30 * 4);
      if (uVar24 != 0) {
        uVar36 = 0;
        iVar25 = SUB164(auVar8 * auVar16,8);
        do {
          if (uVar29 == uVar24) {
            cVar22 = String::operator==((String *)
                                        (*(long *)param_1 +
                                        (ulong)*(uint *)(*(long *)(param_1 + 8) + lVar30 * 4) * 8),
                                        pSVar38);
            if (cVar22 != '\0') goto LAB_0010540a;
            lVar26 = *(long *)(param_1 + 0x18);
          }
          uVar36 = uVar36 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(iVar25 + 1) * lVar27;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar20;
          lVar30 = SUB168(auVar9 * auVar17,8);
          uVar24 = *(uint *)(lVar26 + lVar30 * 4);
          iVar25 = SUB164(auVar9 * auVar17,8);
        } while ((uVar24 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar24 * lVar27, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar20, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar2 + iVar25) - SUB164(auVar10 * auVar18,8)) * lVar27,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar20, uVar36 <= SUB164(auVar11 * auVar19,8)));
      }
    }
    pSVar34 = (String *)&local_a0;
    get_extension((String *)&local_a0);
    pOVar37 = local_a0;
    pOVar33 = *(Object **)(local_a0 + 0x240);
    if (pOVar33 == (Object *)0x0) {
      uVar28 = ensure_extensions_loaded((HashSet *)pSVar34);
      return uVar28;
    }
    cVar22 = RefCounted::reference();
    if (cVar22 == '\0') {
      pOVar33 = (Object *)0x0;
    }
    cVar22 = (**(code **)(*(long *)pOVar33 + 0x178))(pOVar33);
    cVar23 = RefCounted::unreference();
    if ((cVar23 != '\0') && (cVar23 = predelete_handler(pOVar33), cVar23 != '\0')) {
      (**(code **)(*(long *)pOVar33 + 0x140))(pOVar33);
      Memory::free_static(pOVar33,false);
    }
    if (cVar22 == '\0') {
      local_68[0] = (Object *)0x0;
      plVar1 = (long *)(*(long *)pSVar38 + -0x10);
      if (*(long *)pSVar38 == 0) {
        Vector<String>::push_back(local_88);
        pOVar37 = local_a0;
      }
      else {
        do {
          lVar27 = *plVar1;
          if (lVar27 == 0) goto LAB_001053be;
          LOCK();
          lVar26 = *plVar1;
          bVar39 = lVar27 == lVar26;
          if (bVar39) {
            *plVar1 = lVar27 + 1;
            lVar26 = lVar27;
          }
          UNLOCK();
        } while (!bVar39);
        if (lVar26 != -1) {
          local_68[0] = *(Object **)pSVar38;
        }
LAB_001053be:
        pOVar33 = local_68[0];
        Vector<String>::push_back(local_88);
        pOVar37 = local_a0;
        if (pOVar33 != (Object *)0x0) {
          LOCK();
          pOVar33 = pOVar33 + -0x10;
          *(long *)pOVar33 = *(long *)pOVar33 + -1;
          UNLOCK();
          if (*(long *)pOVar33 == 0) {
            Memory::free_static(local_68[0] + -0x10,false);
            pOVar37 = local_a0;
          }
        }
      }
    }
    if (((pOVar37 != (Object *)0x0) && (cVar22 = RefCounted::unreference(), cVar22 != '\0')) &&
       (cVar22 = predelete_handler(pOVar37), cVar22 != '\0')) {
      (**(code **)(*(long *)pOVar37 + 0x140))(pOVar37);
      Memory::free_static(pOVar37,false);
    }
LAB_0010540a:
  }
  GDExtension::get_extension_list_config_file();
  if (*(int *)(param_1 + 0x24) == 0) {
    if (((pSVar21 != (String *)0x0) && (*(long *)(pSVar21 + -8) != 0)) ||
       (cVar22 = FileAccess::exists((String *)&local_a8), cVar22 != '\0')) {
      DirAccess::create(&local_a0,0);
      pOVar33 = local_a0;
      pcVar3 = *(code **)(*(long *)local_a0 + 0x208);
      local_68[0] = (Object *)0x0;
      if (local_a8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)&local_a8);
      }
      (*pcVar3)(pOVar33);
      pOVar33 = local_68[0];
      if (local_68[0] != (Object *)0x0) {
        LOCK();
        pOVar37 = local_68[0] + -0x10;
        *(long *)pOVar37 = *(long *)pOVar37 + -1;
        UNLOCK();
        if (*(long *)pOVar37 == 0) {
          local_68[0] = (Object *)0x0;
          Memory::free_static(pOVar33 + -0x10,false);
        }
      }
      if ((local_a0 != (Object *)0x0) && (cVar22 = RefCounted::unreference(), cVar22 != '\0')) {
        cVar22 = predelete_handler(local_a0);
        pOVar33 = local_a0;
        goto joined_r0x001057c3;
      }
    }
  }
  else if (((local_90 != (String *)0x0) && (*(long *)(local_90 + -8) != 0)) ||
          ((local_80 != (String *)0x0 && (*(long *)(local_80 + -8) != 0)))) {
    FileAccess::open((String *)local_68,(int)(String *)&local_a8,(Error *)0x2);
    iVar25 = *(int *)(param_1 + 0x24);
    if (iVar25 != 0) {
      for (iVar31 = 1; (**(code **)(*(long *)local_68[0] + 0x2b0))(), iVar31 < iVar25;
          iVar31 = iVar31 + 1) {
      }
    }
    if ((local_68[0] != (Object *)0x0) &&
       (cVar22 = RefCounted::unreference(), pOVar33 = local_68[0], cVar22 != '\0')) {
      cVar22 = predelete_handler(local_68[0]);
joined_r0x001057c3:
      if (cVar22 != '\0') {
        (**(code **)(*(long *)pOVar33 + 0x140))(pOVar33);
        Memory::free_static(pOVar33,false);
      }
    }
  }
  CowData<String>::_copy_on_write((CowData<String> *)&local_90);
  pSVar38 = local_90;
  CowData<String>::_copy_on_write((CowData<String> *)&local_90);
  pSVar21 = local_90;
  if (local_90 == (String *)0x0) {
    pSVar35 = (String *)0x0;
  }
  else {
    pSVar35 = local_90 + *(long *)(local_90 + -8) * 8;
  }
  uVar28 = 0;
  for (; pSVar38 != pSVar35; pSVar38 = pSVar38 + 8) {
    lVar27 = Engine::get_singleton();
    if ((*(char *)(lVar27 + 0xc4) == '\0') && (iVar25 = load_extension(pSVar38), iVar25 == 4)) {
      uVar28 = 1;
    }
  }
  CowData<String>::_copy_on_write((CowData<String> *)&local_80);
  pSVar38 = local_80;
  CowData<String>::_copy_on_write((CowData<String> *)&local_80);
  pSVar35 = local_80;
  if (local_80 == (String *)0x0) {
    pSVar34 = (String *)0x0;
    if (pSVar38 != (String *)0x0) goto LAB_00105538;
    if (pSVar21 == (String *)0x0) goto LAB_0010569e;
    lVar27 = *(long *)(pSVar21 + -8);
joined_r0x0010597a:
    if (lVar27 == 0) goto LAB_0010569e;
  }
  else {
    pSVar34 = local_80 + *(long *)(local_80 + -8) * 8;
    if (pSVar34 == pSVar38) {
      if ((pSVar21 == (String *)0x0) || (*(long *)(pSVar21 + -8) == 0)) goto LAB_00105571;
    }
    else {
LAB_00105538:
      do {
        iVar25 = unload_extension(singleton,pSVar38);
        if (iVar25 == 4) {
          uVar28 = 1;
        }
        pSVar38 = pSVar38 + 8;
      } while (pSVar34 != pSVar38);
      if ((pSVar21 == (String *)0x0) || (*(long *)(pSVar21 + -8) == 0)) {
        if (pSVar35 == (String *)0x0) goto LAB_0010569e;
LAB_00105571:
        lVar27 = *(long *)(pSVar35 + -8);
        goto joined_r0x0010597a;
      }
    }
  }
  StringName::StringName((StringName *)local_68,"extensions_reloaded",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)local_68,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
    StringName::unref();
  }
  this_00 = (CallableCustom *)operator_new(0x30,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined ***)this_00 = &PTR_hash_0010c4b8;
  *(undefined **)(this_00 + 0x20) = &_LC4;
  *(undefined8 *)(this_00 + 0x28) = 0x100000;
  *(undefined8 *)(this_00 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "GDExtensionManager::_reload_all_scripts";
  Callable::Callable((Callable *)local_68,this_00);
  Variant::Variant((Variant *)&local_58,0);
  Callable::call_deferredp((Variant **)local_68,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)local_68);
LAB_0010569e:
  lVar27 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar27 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_70);
  CowData<String>::_unref((CowData<String> *)&local_80);
  CowData<String>::_unref((CowData<String> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* OS::load_platform_gdextensions() const */

void OS::load_platform_gdextensions(void)

{
  return;
}



/* GDExtensionManager::is_class_ptr(void*) const */

uint __thiscall GDExtensionManager::is_class_ptr(GDExtensionManager *this,void *param_1)

{
  return (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* GDExtensionManager::_getv(StringName const&, Variant&) const */

undefined8 GDExtensionManager::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDExtensionManager::_setv(StringName const&, Variant const&) */

undefined8 GDExtensionManager::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDExtensionManager::_validate_propertyv(PropertyInfo&) const */

void GDExtensionManager::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GDExtensionManager::_property_can_revertv(StringName const&) const */

undefined8 GDExtensionManager::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GDExtensionManager::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GDExtensionManager::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDExtensionManager::_notificationv(int, bool) */

void GDExtensionManager::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void> *this)

{
  return;
}



/* MethodBindTR<Ref<GDExtension>, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<GDExtension>,String_const&>::_gen_argument_type
          (MethodBindTR<Ref<GDExtension>,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
}



/* MethodBindTR<Ref<GDExtension>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<GDExtension>,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1)

{
  return 0x22;
}



/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,String_const&>::_gen_argument_type
          (MethodBindTRC<bool,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 3U) + 1;
}



/* MethodBindTRC<bool, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::_gen_argument_type
          (MethodBindTR<GDExtensionManager::LoadStatus,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::get_argument_meta(int) const */

undefined8
MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void>::is_valid() const */

undefined8 CallableCustomStaticMethodPointer<void>::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<void>::get_object() const */

undefined8 CallableCustomStaticMethodPointer<void>::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<void>::get_argument_count
          (CallableCustomStaticMethodPointer<void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void> *this)

{
  operator_delete(this,0x30);
  return;
}



/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::~MethodBindTR
          (MethodBindTR<GDExtensionManager::LoadStatus,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c548;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::~MethodBindTR
          (MethodBindTR<GDExtensionManager::LoadStatus,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c548;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c5a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c5a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c608;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c608;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<GDExtension>, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDExtension>,String_const&>::~MethodBindTR
          (MethodBindTR<Ref<GDExtension>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c668;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<GDExtension>, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDExtension>,String_const&>::~MethodBindTR
          (MethodBindTR<Ref<GDExtension>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c668;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CallableCustomStaticMethodPointer<void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<void>::call
          (CallableCustomStaticMethodPointer<void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x28);
  if (param_2 == 0) {
    *(undefined4 *)param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00105d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(undefined4 *)param_4 = 3;
  *(undefined4 *)(param_4 + 8) = 0;
  return;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionManager::_get_class_namev() const */

undefined8 * GDExtensionManager::_get_class_namev(void)

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
LAB_00105e23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105e23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GDExtensionManager");
      goto LAB_00105e8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GDExtensionManager");
LAB_00105e8e:
  return &_get_class_namev()::_class_name_static;
}



/* GDExtensionManager::get_class() const */

void GDExtensionManager::get_class(void)

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
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
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



/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x22;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001065dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001065dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionManager::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void GDExtensionManager::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "GDExtensionManager";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GDExtensionManager";
  local_98 = 0;
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00106788:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106788;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001067a6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001067a6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GDExtensionManager",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionManager::is_class(String const&) const */

undefined8 __thiscall GDExtensionManager::is_class(GDExtensionManager *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00106a7f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00106a7f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00106b33;
  }
  cVar6 = String::operator==(param_1,"GDExtensionManager");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00106be3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00106be3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00106b33;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00106b33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
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
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char cVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  void *__s_00;
  undefined8 *puVar40;
  void *pvVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  undefined8 uVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined1 (*local_a0) [16];
  long local_70;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_001075f4:
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    pvVar41 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar41;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar41 + uVar51)) && (pvVar41 < (void *)((long)pvVar2 + uVar38))
         ) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar38 * 4) = 0;
          *(undefined8 *)((long)pvVar41 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar45 != uVar38);
      }
      else {
        memset(pvVar2,0,uVar38);
        memset(pvVar41,0,uVar51);
      }
LAB_001074d4:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_001074e0:
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar50 = String::hash();
        uVar38 = CONCAT44(0,uVar36);
        lVar53 = *(long *)(this + 0x10);
        uVar37 = 1;
        if (uVar50 != 0) {
          uVar37 = uVar50;
        }
        uVar54 = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar37 * lVar48;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar38;
        lVar43 = SUB168(auVar15 * auVar31,8);
        uVar50 = *(uint *)(lVar53 + lVar43 * 4);
        uVar49 = SUB164(auVar15 * auVar31,8);
        if (uVar50 != 0) {
          do {
            if (uVar50 == uVar37) {
              cVar35 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar43 * 8) + 0x10),
                                          param_1);
              if (cVar35 != '\0') {
                local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                if (*(long *)(local_a0[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(local_a0[1] + 8),(CowData *)&local_70);
                  local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                }
                goto LAB_001073a0;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar49 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar38;
            lVar43 = SUB168(auVar16 * auVar32,8);
            uVar50 = *(uint *)(lVar53 + lVar43 * 4);
            uVar49 = SUB164(auVar16 * auVar32,8);
          } while ((uVar50 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar50 * lVar48, auVar33._8_8_ = 0,
                  auVar33._0_8_ = uVar38, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar36 + uVar49) - SUB164(auVar17 * auVar33,8)) * lVar48,
                  auVar34._8_8_ = 0, auVar34._0_8_ = uVar38, uVar54 <= SUB164(auVar18 * auVar34,8)))
          ;
        }
        iVar42 = *(int *)(this + 0x2c);
      }
      uVar45 = (ulong)uVar55;
      goto LAB_00106fa0;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_00106fa0;
    if (*(int *)(this + 0x2c) != 0) goto LAB_001074e0;
LAB_00106fc6:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_001073a0;
    }
    uVar38 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar38 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    uVar45 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar38;
    pvVar41 = *(void **)(this + 8);
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar45);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar36 != 0) {
      uVar38 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar38 * 4);
        if (uVar55 != 0) {
          lVar48 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar55 * lVar53;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar51;
          lVar43 = SUB168(auVar3 * auVar19,8);
          puVar46 = (uint *)(lVar48 + lVar43 * 4);
          iVar42 = SUB164(auVar3 * auVar19,8);
          uVar50 = *puVar46;
          uVar39 = *(undefined8 *)((long)pvVar41 + uVar38 * 8);
          while (uVar50 != 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar50 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar51;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((iVar42 + uVar37) - SUB164(auVar4 * auVar20,8)) * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar51;
            uVar54 = SUB164(auVar5 * auVar21,8);
            uVar47 = uVar39;
            if (uVar54 < uVar49) {
              *puVar46 = uVar55;
              puVar40 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar47 = *puVar40;
              *puVar40 = uVar39;
              uVar55 = uVar50;
              uVar49 = uVar54;
            }
            uVar49 = uVar49 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar42 + 1) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar51;
            lVar43 = SUB168(auVar6 * auVar22,8);
            puVar46 = (uint *)(lVar48 + lVar43 * 4);
            iVar42 = SUB164(auVar6 * auVar22,8);
            uVar39 = uVar47;
            uVar50 = *puVar46;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar39;
          *puVar46 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar38 = uVar38 + 1;
      } while (uVar36 != uVar38);
      Memory::free_static(pvVar41,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar38 = CONCAT44(0,uVar55);
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar36 = 1;
      if (uVar37 != 0) {
        uVar36 = uVar37;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar43 = SUB168(auVar11 * auVar27,8);
      uVar37 = *(uint *)(lVar53 + lVar43 * 4);
      uVar50 = SUB164(auVar11 * auVar27,8);
      if (uVar37 == 0) {
        lVar52 = *(long *)(this + 8);
      }
      else {
        lVar52 = *(long *)(this + 8);
        uVar49 = 0;
        do {
          if (uVar36 == uVar37) {
            cVar35 = String::operator==((String *)(*(long *)(lVar52 + lVar43 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
              goto LAB_001073a0;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar52 = *(long *)(this + 8);
          }
          uVar49 = uVar49 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar50 + 1) * lVar48;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar38;
          lVar43 = SUB168(auVar12 * auVar28,8);
          uVar37 = *(uint *)(lVar53 + lVar43 * 4);
          uVar50 = SUB164(auVar12 * auVar28,8);
        } while ((uVar37 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar37 * lVar48, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar38, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar50 + uVar55) - SUB164(auVar13 * auVar29,8)) * lVar48,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar38, uVar49 <= SUB164(auVar14 * auVar30,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar52 == 0) goto LAB_001075f4;
      goto LAB_001074d4;
    }
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    iVar42 = 0;
LAB_00106fa0:
    if ((float)uVar45 * __LC20 < (float)(iVar42 + 1)) goto LAB_00106fc6;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_001076a5:
    lVar48 = 0;
    *(undefined8 *)(local_a0[1] + 8) = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_0010726a;
LAB_001076c1:
    *(undefined1 (**) [16])(this + 0x18) = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar48 = local_58[0];
    uVar39 = local_68._0_8_;
    uVar47 = local_68._8_8_;
    local_58[1] = 0;
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *(undefined8 *)*local_a0 = uVar39;
    *(undefined8 *)(*local_a0 + 8) = uVar47;
    if (lVar48 == 0) goto LAB_001076a5;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 1),(CowData *)local_58);
    *(undefined8 *)(local_a0[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58[0] + -0x10),false);
    }
    puVar40 = *(undefined8 **)(this + 0x20);
    lVar48 = local_70;
    if (puVar40 == (undefined8 *)0x0) goto LAB_001076c1;
LAB_0010726a:
    *puVar40 = local_a0;
    *(undefined8 **)(*local_a0 + 8) = puVar40;
  }
  *(undefined1 (**) [16])(this + 0x20) = local_a0;
  uVar36 = String::hash();
  lVar53 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar36 != 0) {
    uVar55 = uVar36;
  }
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar36);
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar55 * lVar43;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar38;
  lVar44 = SUB168(auVar7 * auVar23,8);
  lVar52 = *(long *)(this + 8);
  puVar46 = (uint *)(lVar53 + lVar44 * 4);
  iVar42 = SUB164(auVar7 * auVar23,8);
  uVar37 = *puVar46;
  pauVar57 = local_a0;
  if (uVar37 != 0) {
    uVar50 = 0;
    pauVar56 = local_a0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar37 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar42) - SUB164(auVar8 * auVar24,8)) * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      uVar49 = SUB164(auVar9 * auVar25,8);
      pauVar57 = pauVar56;
      if (uVar49 < uVar50) {
        *puVar46 = uVar55;
        puVar40 = (undefined8 *)(lVar52 + lVar44 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar40;
        *puVar40 = pauVar56;
        uVar50 = uVar49;
        uVar55 = uVar37;
      }
      uVar50 = uVar50 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar42 + 1) * lVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      lVar44 = SUB168(auVar10 * auVar26,8);
      puVar46 = (uint *)(lVar53 + lVar44 * 4);
      iVar42 = SUB164(auVar10 * auVar26,8);
      uVar37 = *puVar46;
      pauVar56 = pauVar57;
    } while (uVar37 != 0);
  }
  *(undefined1 (**) [16])(lVar52 + lVar44 * 8) = pauVar57;
  *puVar46 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar48 != 0) {
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_001073a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Ref<GDExtension>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<GDExtension> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Ref<GDExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDExtension>>>>
::operator[](HashMap<String,Ref<GDExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDExtension>>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  Object *pOVar4;
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
  undefined1 auVar36 [16];
  char cVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  undefined8 *puVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint *puVar51;
  uint uVar52;
  uint uVar53;
  long lVar54;
  uint uVar55;
  uint uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00107ec0:
    uVar40 = (ulong)uVar56;
    uVar45 = uVar40 * 4;
    uVar49 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar56 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar44 + uVar49)) && (pvVar44 < (void *)((long)pvVar2 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00107d42;
      }
      memset(pvVar2,0,uVar45);
      memset(pvVar44,0,uVar49);
      iVar46 = *(int *)(this + 0x2c);
LAB_00107d46:
      if (iVar46 != 0) {
LAB_00107d4e:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar53 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar54 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar53 != 0) {
          uVar39 = uVar53;
        }
        uVar55 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar3;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar47 = SUB168(auVar17 * auVar33,8);
        uVar53 = *(uint *)(lVar54 + lVar47 * 4);
        uVar52 = SUB164(auVar17 * auVar33,8);
        if (uVar53 != 0) {
          do {
            if (uVar53 == uVar39) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                pOVar4 = *(Object **)(pauVar42[1] + 8);
                if (pOVar4 != (Object *)0x0) {
                  *(undefined8 *)(pauVar42[1] + 8) = 0;
                  cVar37 = RefCounted::unreference();
                  if ((cVar37 != '\0') && (cVar37 = predelete_handler(pOVar4), cVar37 != '\0')) {
                    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                    Memory::free_static(pOVar4,false);
                  }
                  pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                }
                goto LAB_00107bcb;
              }
              lVar54 = *(long *)(this + 0x10);
            }
            uVar55 = uVar55 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar52 + 1) * lVar3;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar47 = SUB168(auVar18 * auVar34,8);
            uVar53 = *(uint *)(lVar54 + lVar47 * 4);
            uVar52 = SUB164(auVar18 * auVar34,8);
          } while ((uVar53 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar53 * lVar3, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar52) - SUB164(auVar19 * auVar35,8)) * lVar3,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar55 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      uVar40 = (ulong)uVar56;
      goto LAB_00107804;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00107804;
    if (iVar46 != 0) goto LAB_00107d4e;
LAB_0010782a:
    uVar56 = *(uint *)(this + 0x28);
    if (uVar56 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00107bcb;
    }
    uVar40 = (ulong)(uVar56 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar56 * 4);
    if (uVar56 + 1 < 2) {
      uVar40 = 2;
    }
    uVar56 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar49 = (ulong)uVar56;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar49 * 4;
    uVar45 = uVar49 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar56 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar49);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar56 = *(uint *)((long)pvVar2 + uVar40 * 4);
        if (uVar56 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar39);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar56 * lVar54;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar45;
          lVar47 = SUB168(auVar5 * auVar21,8);
          puVar51 = (uint *)(lVar3 + lVar47 * 4);
          iVar46 = SUB164(auVar5 * auVar21,8);
          uVar53 = *puVar51;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar53 * lVar54;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar6 * auVar22,8)) * lVar54;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar55 = SUB164(auVar7 * auVar23,8);
            uVar50 = uVar41;
            if (uVar55 < uVar52) {
              *puVar51 = uVar56;
              puVar43 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar50 = *puVar43;
              *puVar43 = uVar41;
              uVar56 = uVar53;
              uVar52 = uVar55;
            }
            uVar52 = uVar52 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar46 + 1) * lVar54;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar47 = SUB168(auVar8 * auVar24,8);
            puVar51 = (uint *)(lVar3 + lVar47 * 4);
            iVar46 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar50;
            uVar53 = *puVar51;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar51 = uVar56;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    uVar40 = CONCAT44(0,uVar56);
    if (iVar46 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar54 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      uVar52 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar47 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar54 + lVar47 * 4);
      uVar53 = SUB164(auVar13 * auVar29,8);
      if (uVar39 != 0) {
        do {
          if (uVar39 == uVar38) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar53 * 8);
              goto LAB_00107bcb;
            }
            lVar54 = *(long *)(this + 0x10);
          }
          uVar52 = uVar52 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar47 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar54 + lVar47 * 4);
          uVar53 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar3, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar53 + uVar56) - SUB164(auVar15 * auVar31,8)) * lVar3,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar52 <= SUB164(auVar16 * auVar32,8)));
      }
      uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00107ec0;
LAB_00107d42:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_00107d46;
    }
LAB_00107804:
    if ((float)uVar40 * __LC20 < (float)(iVar46 + 1)) goto LAB_0010782a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *pauVar42 = (undefined1  [16])0x0;
LAB_00107e6b:
    *(undefined8 *)(pauVar42[1] + 8) = 0;
LAB_00107ab3:
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 != (undefined8 *)0x0) goto LAB_00107ac0;
LAB_00107cfd:
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *(undefined8 *)*pauVar42 = 0;
    *(undefined8 *)(*pauVar42 + 8) = 0;
    if (lVar3 == 0) goto LAB_00107e6b;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar42 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar42[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00107ab3;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 == (undefined8 *)0x0) goto LAB_00107cfd;
LAB_00107ac0:
    *puVar43 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar43;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar56 = 1;
  if (uVar38 != 0) {
    uVar56 = uVar38;
  }
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar56 * lVar54;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar48 = SUB168(auVar9 * auVar25,8);
  lVar47 = *(long *)(this + 8);
  puVar51 = (uint *)(lVar3 + lVar48 * 4);
  iVar46 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar51;
  pauVar58 = pauVar42;
  if (uVar39 != 0) {
    uVar53 = 0;
    pauVar57 = pauVar42;
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar54;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((iVar46 + uVar38) - SUB164(auVar10 * auVar26,8)) * lVar54;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar52 = SUB164(auVar11 * auVar27,8);
      pauVar58 = pauVar57;
      if (uVar52 < uVar53) {
        *puVar51 = uVar56;
        puVar43 = (undefined8 *)(lVar47 + lVar48 * 8);
        pauVar58 = (undefined1 (*) [16])*puVar43;
        *puVar43 = pauVar57;
        uVar53 = uVar52;
        uVar56 = uVar39;
      }
      uVar53 = uVar53 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar54;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      lVar48 = SUB168(auVar12 * auVar28,8);
      puVar51 = (uint *)(lVar3 + lVar48 * 4);
      iVar46 = SUB164(auVar12 * auVar28,8);
      uVar39 = *puVar51;
      pauVar57 = pauVar58;
    } while (uVar39 != 0);
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar58;
  *puVar51 = uVar56;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00107bcb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar42[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Removing unreachable block (ram,0x001081e8) */
/* WARNING: Removing unreachable block (ram,0x00108339) */
/* WARNING: Removing unreachable block (ram,0x00108440) */
/* WARNING: Removing unreachable block (ram,0x00108345) */
/* WARNING: Removing unreachable block (ram,0x0010834f) */
/* WARNING: Removing unreachable block (ram,0x00108420) */
/* WARNING: Removing unreachable block (ram,0x0010835b) */
/* WARNING: Removing unreachable block (ram,0x00108383) */
/* WARNING: Removing unreachable block (ram,0x00108400) */
/* WARNING: Removing unreachable block (ram,0x0010838b) */
/* WARNING: Removing unreachable block (ram,0x001083a1) */
/* WARNING: Removing unreachable block (ram,0x001083ad) */
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



/* MethodBind* create_method_bind<GDExtensionManager, GDExtensionManager::LoadStatus, String
   const&>(GDExtensionManager::LoadStatus (GDExtensionManager::*)(String const&)) */

MethodBind *
create_method_bind<GDExtensionManager,GDExtensionManager::LoadStatus,String_const&>
          (_func_LoadStatus_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_LoadStatus_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c548;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDExtensionManager";
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GDExtensionManager, bool, String const&>(bool
   (GDExtensionManager::*)(String const&) const) */

MethodBind *
create_method_bind<GDExtensionManager,bool,String_const&>(_func_bool_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c5a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDExtensionManager";
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GDExtensionManager, Vector<String>>(Vector<String>
   (GDExtensionManager::*)() const) */

MethodBind * create_method_bind<GDExtensionManager,Vector<String>>(_func_Vector *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c608;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GDExtensionManager";
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GDExtensionManager, Ref<GDExtension>, String
   const&>(Ref<GDExtension> (GDExtensionManager::*)(String const&)) */

MethodBind *
create_method_bind<GDExtensionManager,Ref<GDExtension>,String_const&>(_func_Ref_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c668;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDExtensionManager";
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* GetTypeInfo<GDExtensionManager::LoadStatus, void>::get_class_info() */

GetTypeInfo<GDExtensionManager::LoadStatus,void> * __thiscall
GetTypeInfo<GDExtensionManager::LoadStatus,void>::get_class_info
          (GetTypeInfo<GDExtensionManager::LoadStatus,void> *this)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_48 = "GDExtensionManager::LoadStatus";
  local_40 = 0x1e;
  String::parse_latin1((StrRange *)&local_70);
  String::split(local_58,SUB81((StrRange *)&local_70,0),0x108a0f);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = -2;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar4 = lVar5 + -2;
      if (-1 < lVar4) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar4 * 8));
        String::operator+((String *)&local_68,(String *)&local_48);
        pcVar3 = local_48;
        lVar5 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
            lVar5 = local_60;
          }
        }
        goto joined_r0x00108b13;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = ".";
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)&local_68);
  lVar5 = local_60;
joined_r0x00108b13:
  local_60 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_68,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
    StringName::unref();
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* GDExtensionManager::_bind_methods() [clone .cold] */

void GDExtensionManager::_bind_methods(void)

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



/* GDExtensionManager::ensure_extensions_loaded(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> > const&) [clone .cold] */

void GDExtensionManager::ensure_extensions_loaded(HashSet *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDExtensionManager::_initialize_classv() */

void GDExtensionManager::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "GDExtensionManager";
    local_50 = 0;
    local_30 = 0x12;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        _bind_methods();
        initialize_class()::initialized = '\x01';
        goto LAB_00108dc5;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_00108dc5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
LAB_001092d0:
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
  if (lVar10 == 0) goto LAB_001092d0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001091a9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001091a9;
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
    goto LAB_00109326;
  }
  if (lVar10 == lVar7) {
LAB_0010924f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00109326:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010923a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010924f;
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
LAB_0010923a:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00109448) */
/* WARNING: Removing unreachable block (ram,0x00109596) */
/* WARNING: Removing unreachable block (ram,0x00109690) */
/* WARNING: Removing unreachable block (ram,0x001095a2) */
/* WARNING: Removing unreachable block (ram,0x001095ac) */
/* WARNING: Removing unreachable block (ram,0x00109670) */
/* WARNING: Removing unreachable block (ram,0x001095b8) */
/* WARNING: Removing unreachable block (ram,0x001095c2) */
/* WARNING: Removing unreachable block (ram,0x00109650) */
/* WARNING: Removing unreachable block (ram,0x001095ce) */
/* WARNING: Removing unreachable block (ram,0x001095ec) */
/* WARNING: Removing unreachable block (ram,0x001095f8) */
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



/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109870;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<String>::_unref((CowData<String> *)&local_50);
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
LAB_00109870:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<String>>::validated_call
          (MethodBindTRC<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1096b8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109b97;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_00109b97:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<String>>::ptrcall
          (MethodBindTRC<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x1096b8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109db3;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_00109db3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,String_const&>::validated_call
          (MethodBindTRC<bool,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  Variant VVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109f99;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar3;
LAB_00109f99:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,String_const&>::ptrcall
          (MethodBindTRC<bool,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a1b5;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 *)param_3 = uVar3;
LAB_0010a1b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::validated_call
          (MethodBindTR<GDExtensionManager::LoadStatus,String_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a3dc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_0010a3dc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::ptrcall
          (MethodBindTR<GDExtensionManager::LoadStatus,String_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a5f8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2);
  *(ulong *)param_3 = (ulong)uVar3;
LAB_0010a5f8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<GDExtension>, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<GDExtension>,String_const&>::ptrcall
          (MethodBindTR<Ref<GDExtension>,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x1096b8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(long *)pOVar4 = *(long *)pOVar4 + -1;
        UNLOCK();
        if (*(long *)pOVar4 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a889;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_0010a889;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010a8d1;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_0010a8d1;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_0010a8d1:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010a889;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_48);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_0010a889:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar11 = (long *)(local_70 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ac40;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ac90;
LAB_0010ac80:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ac90:
        uVar8 = 4;
        goto LAB_0010ac35;
      }
      if (in_R8D == 1) goto LAB_0010ac80;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC81;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar7 = (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,iVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar8 = 3;
LAB_0010ac35:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010ac40:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar11 = (long *)(local_70 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b020;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010b070;
LAB_0010b060:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010b070:
        uVar8 = 4;
        goto LAB_0010b015;
      }
      if (in_R8D == 1) goto LAB_0010b060;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC81;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    bVar7 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68)
    ;
    Variant::Variant((Variant *)local_58,bVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar8 = 3;
LAB_0010b015:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010b020:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<GDExtension>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<GDExtension>,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char *pcVar7;
  char cVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar7 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_68 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar7 + -0x10,false);
        }
      }
      pOVar6 = local_70;
      if (local_70 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_70 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_70 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b440;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010b490;
LAB_0010b480:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar13 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_0010b490:
        uVar9 = 4;
        goto LAB_0010b435;
      }
      if (in_R8D == 1) goto LAB_0010b480;
      lVar11 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar2) + -1);
    }
    cVar8 = Variant::can_convert_strict(*(undefined4 *)pVVar13,4);
    uVar5 = _LC81;
    if (cVar8 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    (*(code *)pVVar14)(&local_70,(Variant *)((long)plVar12 + (long)pVVar2),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (((local_70 != (Object *)0x0) &&
        (cVar8 = RefCounted::unreference(), pOVar6 = local_70, cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_70), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar9 = 3;
LAB_0010b435:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_0010b440:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<GDExtension>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<GDExtension>,String_const&>::validated_call
          (MethodBindTR<Ref<GDExtension>,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  Object *pOVar2;
  char *pcVar3;
  char cVar4;
  code *pcVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      pOVar2 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_50 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar2 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b75d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar5)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_50;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010b75d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_0010b9a5;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010ba98:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ba98;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_0010b9a5:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::_gen_argument_type_info(int) const
    */

GetTypeInfo<GDExtensionManager::LoadStatus,void> *
MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<GDExtensionManager::LoadStatus,void> *this;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<GDExtensionManager::LoadStatus,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_4c = 0;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,&local_4c,(PropertyInfo *)&local_48);
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<GDExtensionManager::LoadStatus,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010bdc5;
  }
  local_70 = 0;
  local_68 = &_LC4;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010bed7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010bed7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010bdc5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<GDExtension>, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<GDExtension>,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar3 = local_68._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
    goto LAB_0010bfc5;
  }
  local_70 = 0;
  local_68 = "GDExtension";
  local_78 = 0;
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_78);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar3[10] = 6;
LAB_0010c0d7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar3 + 8),false);
    if (*(char **)(puVar3 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar3 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_78);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) goto LAB_0010c0d7;
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_70);
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010bfc5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<GDExtension>, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<GDExtension>,String_const&>::~MethodBindTR
          (MethodBindTR<Ref<GDExtension>,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<GDExtensionManager::LoadStatus, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<GDExtensionManager::LoadStatus,String_const&>::~MethodBindTR
          (MethodBindTR<GDExtensionManager::LoadStatus,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void> *this)

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


