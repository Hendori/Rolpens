
/* EditorExportPlatformWindows::get_options_count() const */

undefined4 __thiscall
EditorExportPlatformWindows::get_options_count(EditorExportPlatformWindows *this)

{
  return *(undefined4 *)(this + 0x1d8);
}



/* EditorExportPlatformWindows::get_run_icon() const */

void EditorExportPlatformWindows::get_run_icon(void)

{
  char cVar1;
  long lVar2;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x1b0) != 0) {
    lVar2 = __dynamic_cast(*(long *)(in_RSI + 0x1b0),&Object::typeinfo,&Texture2D::typeinfo,0);
    if (lVar2 != 0) {
      *in_RDI = lVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *in_RDI = 0;
      }
    }
  }
  return;
}



/* EditorExportPlatformWindows::poll_export() */

ulong __thiscall EditorExportPlatformWindows::poll_export(EditorExportPlatformWindows *this)

{
  EditorExportPlatformWindows *pEVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Object *pOVar6;
  undefined7 uVar8;
  ulong uVar7;
  long in_FS_OFFSET;
  Object *local_58;
  EditorExportPlatformWindows *local_50;
  int local_48 [6];
  long local_30;
  
  iVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = EditorExport::get_export_preset_count();
    uVar8 = (undefined7)((ulong)this >> 8);
    if (iVar4 <= iVar5) {
LAB_001002a8:
      iVar5 = *(int *)(this + 0x1d8);
LAB_001002af:
      *(undefined4 *)(this + 0x1d8) = 0;
      if ((*(long *)(this + 0x1d0) == 0) && (*(long *)(this + 0x1c8) == 0)) {
        uVar7 = CONCAT71(uVar8,iVar5 != 0);
      }
      else {
        pOVar6 = (Object *)0x0;
LAB_001002e2:
        (**(code **)(*(long *)this + 0x228))(this);
        uVar7 = CONCAT71(uVar8,*(int *)(this + 0x1d8) != iVar5);
        if (pOVar6 != (Object *)0x0) {
LAB_00100256:
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7 & 0xffffffff;
    }
    EditorExport::get_export_preset((int)&local_58);
    cVar2 = EditorExportPreset::is_runnable();
    if (cVar2 != '\0') {
      EditorExportPreset::get_platform();
      if (this == local_50) {
        cVar2 = RefCounted::unreference();
        pEVar1 = local_50;
        if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)local_50), cVar2 != '\0')) {
          (**(code **)(*(long *)pEVar1 + 0x140))(pEVar1);
          Memory::free_static(pEVar1,false);
        }
        pOVar6 = local_58;
        if (local_58 == (Object *)0x0) goto LAB_001002a8;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          if ((local_58 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0'))
          goto LAB_001002a8;
          pOVar6 = (Object *)0x0;
          cVar2 = predelete_handler(local_58);
          if (cVar2 == '\0') goto LAB_001002a8;
LAB_00100380:
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
          iVar5 = *(int *)(this + 0x1d8);
          if (pOVar6 == (Object *)0x0) goto LAB_001002af;
        }
        else {
          if (((local_58 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
             (cVar2 = predelete_handler(local_58), cVar2 != '\0')) goto LAB_00100380;
          iVar5 = *(int *)(this + 0x1d8);
        }
        StringName::StringName((StringName *)&local_50,"ssh_remote_deploy/enabled",false);
        Object::get((StringName *)local_48,(bool *)pOVar6);
        bVar3 = Variant::operator_cast_to_bool((Variant *)local_48);
        *(uint *)(this + 0x1d8) = (uint)bVar3;
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_50 != (EditorExportPlatformWindows *)0x0)) {
          StringName::unref();
        }
        iVar4 = *(int *)(this + 0x1d8);
        if ((*(long *)(this + 0x1d0) == 0) && (*(long *)(this + 0x1c8) == 0)) {
          uVar7 = CONCAT71(uVar8,iVar4 != iVar5);
          goto LAB_00100256;
        }
        if (iVar4 == 0) goto LAB_001002e2;
        *(int *)(this + 0x1d8) = iVar4 + 1;
        uVar7 = CONCAT71(uVar8,iVar4 + 1 != iVar5);
        goto LAB_00100256;
      }
      if (((local_50 != (EditorExportPlatformWindows *)0x0) &&
          (cVar2 = RefCounted::unreference(), pEVar1 = local_50, cVar2 != '\0')) &&
         (cVar2 = predelete_handler((Object *)local_50), cVar2 != '\0')) {
        (**(code **)(*(long *)pEVar1 + 0x140))(pEVar1);
        Memory::free_static(pEVar1,false);
      }
    }
    if (((local_58 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar6 = local_58, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* EditorExportPlatformWindows::get_option_icon(int) const */

long * EditorExportPlatformWindows::get_option_icon(int param_1)

{
  long lVar1;
  char cVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar3;
  long in_FS_OFFSET;
  
  plVar3 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 1) {
    *plVar3 = 0;
    if (*(long *)(in_RSI + 0x1b8) != 0) {
      *plVar3 = *(long *)(in_RSI + 0x1b8);
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *plVar3 = 0;
      }
    }
  }
  else {
    EditorExportPlatform::get_option_icon(param_1);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned char, EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset> const&,
   String const&, String const&)::IconData, HashMapHasherDefault, HashMapComparatorDefault<unsigned
   char>, DefaultTypedAllocator<HashMapElement<unsigned char,
   EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset> const&, String const&, String
   const&)::IconData> > >::operator[](unsigned char const&) [clone .part.0] */

undefined1 * __thiscall
HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
::operator[](HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
             *this,uchar *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uchar uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
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
  undefined1 (*pauVar30) [16];
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  void *__s_00;
  undefined1 (*pauVar36) [16];
  int iVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  undefined8 uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined1 (*pauVar48) [16];
  long in_FS_OFFSET;
  void *local_80;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_46;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_50 = 0;
  local_46 = _LC11;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_80 = *(void **)(this + 8);
  if (local_80 == (void *)0x0) {
    uVar42 = (ulong)uVar47;
    uVar34 = uVar42 * 4;
    uVar38 = uVar42 * 8;
    uVar35 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(this + 0x10) = uVar35;
    local_80 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = local_80;
    if (uVar47 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_80 + uVar38)) &&
         (local_80 < (void *)((long)pvVar4 + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar34 * 4) = 0;
          *(undefined8 *)((long)local_80 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar42 != uVar34);
        goto LAB_00100530;
      }
      memset(pvVar4,0,uVar34);
      memset(local_80,0,uVar38);
      uVar33 = (uint)*param_1;
      iVar37 = *(int *)(this + 0x2c);
      goto LAB_00100541;
    }
    uVar33 = (uint)*param_1;
    iVar37 = *(int *)(this + 0x2c);
    if (local_80 != (void *)0x0) goto LAB_00100541;
  }
  else {
LAB_00100530:
    uVar33 = (uint)*param_1;
    iVar37 = *(int *)(this + 0x2c);
LAB_00100541:
    if (iVar37 != 0) {
      uVar34 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar32 = (uVar33 * -0x7a143595 ^ uVar33 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar46 = uVar32 ^ uVar32 >> 0x10;
      if (uVar32 == uVar32 >> 0x10) {
        uVar46 = 1;
        uVar38 = uVar34;
      }
      else {
        uVar38 = uVar46 * uVar34;
      }
      uVar42 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
      uVar45 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar42;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      lVar39 = SUB168(auVar6 * auVar18,8);
      uVar44 = SUB164(auVar6 * auVar18,8);
      uVar32 = *(uint *)(*(long *)(this + 0x10) + lVar39 * 4);
      if (uVar32 != 0) {
        do {
          if ((uVar32 == uVar46) &&
             (*(char *)(*(long *)((long)local_80 + lVar39 * 8) + 0x10) == (char)uVar33)) {
            lVar39 = *(long *)((long)local_80 + (ulong)uVar44 * 8);
            if (*(long *)(lVar39 + 0x20) != 0) {
              CowData<unsigned_char>::_ref
                        ((CowData<unsigned_char> *)(lVar39 + 0x20),(CowData *)&local_50);
            }
            uVar31 = _LC11;
            *(undefined1 *)(lVar39 + 0x28) = 0;
            *(undefined4 *)(lVar39 + 0x2a) = uVar31;
            pauVar36 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar44 * 8);
            goto LAB_001009e3;
          }
          uVar45 = uVar45 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (uVar44 + 1) * uVar34;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar42;
          lVar39 = SUB168(auVar7 * auVar19,8);
          uVar32 = *(uint *)(*(long *)(this + 0x10) + lVar39 * 4);
          uVar44 = SUB164(auVar7 * auVar19,8);
        } while ((uVar32 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar32 * uVar34, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar42, auVar9._8_8_ = 0,
                auVar9._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(this + 0x28) * 4) + uVar44) -
                               SUB164(auVar8 * auVar20,8)) * uVar34, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar42, uVar45 <= SUB164(auVar9 * auVar21,8)));
      }
    }
  }
  if ((float)uVar47 * __LC12 < (float)(iVar37 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar36 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001009e3;
    }
    uVar34 = (ulong)(uVar47 + 1);
    uVar33 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar47 + 1 < 2) {
      uVar34 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar34 * 4);
    *(int *)(this + 0x28) = (int)uVar34;
    pvVar4 = *(void **)(this + 0x10);
    uVar42 = (ulong)uVar47;
    uVar34 = uVar42 * 4;
    uVar38 = uVar42 * 8;
    uVar35 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(this + 0x10) = uVar35;
    __s_00 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar42);
      }
      else {
        memset(__s,0,uVar34);
        memset(__s_00,0,uVar38);
      }
    }
    uVar34 = 0;
    if (uVar33 != 0) {
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar34 * 4);
        if (uVar47 != 0) {
          uVar44 = 0;
          lVar39 = *(long *)(this + 0x10);
          uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar38 = CONCAT44(0,uVar32);
          lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar47 * lVar5;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar38;
          lVar40 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar39 + lVar40 * 4);
          iVar37 = SUB164(auVar10 * auVar22,8);
          uVar46 = *puVar1;
          uVar35 = *(undefined8 *)((long)local_80 + uVar34 * 8);
          while (uVar46 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar46 * lVar5;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar32 + iVar37) - SUB164(auVar11 * auVar23,8)) * lVar5;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar38;
            uVar45 = SUB164(auVar12 * auVar24,8);
            uVar43 = uVar35;
            if (uVar45 < uVar44) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar40 * 8);
              uVar43 = *puVar2;
              *puVar2 = uVar35;
              uVar47 = uVar46;
              uVar44 = uVar45;
            }
            uVar44 = uVar44 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar5;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar38;
            lVar40 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar39 + lVar40 * 4);
            iVar37 = SUB164(auVar13 * auVar25,8);
            uVar35 = uVar43;
            uVar46 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar40 * 8) = uVar35;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar34 = uVar34 + 1;
      } while (uVar33 != uVar34);
      Memory::free_static(local_80,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar3 = *param_1;
  pauVar36 = (undefined1 (*) [16])operator_new(0x30,"");
  *(undefined8 *)pauVar36[2] = 0;
  pauVar36[1][0] = uVar3;
  pauVar36[2][8] = 0;
  *pauVar36 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar36[2] + 10) = _LC11;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar36;
  }
  else {
    *puVar2 = pauVar36;
    *(undefined8 **)(*pauVar36 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar36;
  uVar33 = ((uint)*param_1 * -0x7a143595 ^ (uint)*param_1 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
  uVar47 = uVar33 ^ uVar33 >> 0x10;
  if (uVar33 == uVar33 >> 0x10) {
    uVar34 = 1;
    uVar47 = 1;
  }
  else {
    uVar34 = (ulong)uVar47;
  }
  uVar46 = 0;
  lVar39 = *(long *)(this + 0x10);
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar33);
  lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar34 * lVar5;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar38;
  lVar41 = SUB168(auVar14 * auVar26,8);
  lVar40 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar39 + lVar41 * 4);
  iVar37 = SUB164(auVar14 * auVar26,8);
  uVar32 = *puVar1;
  pauVar30 = pauVar36;
  while (uVar32 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar32 * lVar5;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar38;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((iVar37 + uVar33) - SUB164(auVar15 * auVar27,8)) * lVar5;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar38;
    uVar44 = SUB164(auVar16 * auVar28,8);
    pauVar48 = pauVar30;
    if (uVar44 < uVar46) {
      *puVar1 = uVar47;
      puVar2 = (undefined8 *)(lVar40 + lVar41 * 8);
      pauVar48 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar30;
      uVar47 = uVar32;
      uVar46 = uVar44;
    }
    uVar46 = uVar46 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar37 + 1) * lVar5;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar38;
    lVar41 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(lVar39 + lVar41 * 4);
    iVar37 = SUB164(auVar17 * auVar29,8);
    pauVar30 = pauVar48;
    uVar32 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar40 + lVar41 * 8) = pauVar30;
  *puVar1 = uVar47;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001009e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar36[1] + 8;
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



/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */

void __thiscall
List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)this_00;
  return;
}



/* List<EditorExportPlatform::ExportOption,
   DefaultAllocator>::push_back(EditorExportPlatform::ExportOption const&) [clone .isra.0] */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this,ExportOption *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[0xc] = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  lVar4 = *(long *)(param_1 + 8);
  *(undefined2 *)(puVar5 + 0x12) = 0;
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *puVar5 = uVar1;
  *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
  if (lVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)(param_1 + 0x10));
  puVar5[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar5 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar5[10] = *(undefined4 *)(param_1 + 0x28);
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)(param_1 + 0x30));
  *(ExportOption *)(puVar5 + 0x12) = param_1[0x48];
  *(ExportOption *)((long)puVar5 + 0x49) = param_1[0x49];
  uVar2 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar5 + 0x18) = *(long *)this;
  plVar3 = *(long **)this;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = uVar2;
  if (plVar3[1] != 0) {
    *(undefined4 **)(plVar3[1] + 0x50) = puVar5;
  }
  plVar3[1] = (long)puVar5;
  if (*plVar3 != 0) {
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    return;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  *plVar3 = (long)puVar5;
  return;
}



/* EditorExportPlatformWindows::get_template_file_name(String const&, String const&) const */

String * EditorExportPlatformWindows::get_template_file_name(String *param_1,String *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = &_LC21;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = &_LC22;
  local_70 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  operator+((char *)&local_78,(String *)"windows_");
  String::operator+((String *)&local_68,(String *)&local_78);
  String::operator+((String *)&local_58,(String *)&local_68);
  String::operator+(param_1,(String *)&local_58);
  puVar3 = local_58;
  if (local_58 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::get_binary_extensions(Ref<EditorExportPreset> const&) const */

Ref * EditorExportPlatformWindows::get_binary_extensions(Ref *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *pCVar4;
  undefined1 (*pauVar5) [16];
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_50 = 0;
  local_48 = &_LC24;
  local_40 = 3;
  String::parse_latin1((StrRange *)&local_50);
  if (*(long *)param_1 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  pCVar4 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar4 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar4 + 0x10) = (undefined1  [16])0x0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref(pCVar4,(CowData *)&local_50);
  }
  lVar3 = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar4 + 8) = 0;
  *(long **)(pCVar4 + 0x18) = plVar1;
  *(long *)(pCVar4 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar4;
  }
  plVar1[1] = (long)pCVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_50 = 0;
  local_48 = &_LC25;
  local_40 = 3;
  String::parse_latin1((StrRange *)&local_50);
  if (*(long *)param_1 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  pCVar4 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar4 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar4 + 0x10) = (undefined1  [16])0x0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref(pCVar4,(CowData *)&local_50);
  }
  lVar3 = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar4 + 8) = 0;
  *(long **)(pCVar4 + 0x18) = plVar1;
  *(long *)(pCVar4 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar4;
  }
  plVar1[1] = (long)pCVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* EditorExportPlatformWindows::_get_exe_arch(String const&) const */

String * EditorExportPlatformWindows::_get_exe_arch(String *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_EDX;
  long in_FS_OFFSET;
  Object *local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_40,in_EDX,(Error *)0x1);
  if (local_40 == (Object *)0x0) {
LAB_001014e0:
    *(undefined8 *)param_1 = 0;
    local_38 = "invalid";
  }
  else {
    (**(code **)(*(long *)local_40 + 0x1b8))(local_40,0x3c);
    uVar3 = (**(code **)(*(long *)local_40 + 0x1f0))();
    (**(code **)(*(long *)local_40 + 0x1b8))(local_40,uVar3);
    iVar4 = (**(code **)(*(long *)local_40 + 0x1f0))();
    if (iVar4 != 0x4550) goto LAB_001014e0;
    uVar2 = (**(code **)(*(long *)local_40 + 0x1e8))();
    (**(code **)(*(long *)local_40 + 0x2d8))();
    if (uVar2 == 0x8664) {
      *(undefined8 *)param_1 = 0;
      local_38 = "x86_64";
LAB_0010149b:
      local_30 = 6;
      String::parse_latin1((StrRange *)param_1);
      goto joined_r0x00101511;
    }
    if (uVar2 < 0x8665) {
      if ((uVar2 & 0xfffb) != 0x1c0) {
        if (uVar2 != 0x14c) goto LAB_001015a0;
        *(undefined8 *)param_1 = 0;
        local_38 = "x86_32";
        goto LAB_0010149b;
      }
      *(undefined8 *)param_1 = 0;
      local_38 = "arm32";
LAB_0010155e:
      local_30 = 5;
      String::parse_latin1((StrRange *)param_1);
      goto joined_r0x00101511;
    }
    if (uVar2 == 0xaa64) {
      *(undefined8 *)param_1 = 0;
      local_38 = "arm64";
      goto LAB_0010155e;
    }
LAB_001015a0:
    *(undefined8 *)param_1 = 0;
    local_38 = "unknown";
  }
  local_30 = 7;
  String::parse_latin1((StrRange *)param_1);
joined_r0x00101511:
  if (((local_40 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_40), cVar1 != '\0')) {
    (**(code **)(*(long *)local_40 + 0x140))(local_40);
    Memory::free_static(local_40,false);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::has_valid_project_configuration(Ref<EditorExportPreset> const&,
   String&) const */

undefined1 __thiscall
EditorExportPlatformWindows::has_valid_project_configuration
          (EditorExportPlatformWindows *this,Ref *param_1,String *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 local_91;
  long local_78;
  long *local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = (long *)0x0;
  (**(code **)(*(long *)this + 0x1b8))();
  if (local_70 == (long *)0x0) {
    local_91 = 1;
LAB_00101700:
    if (((local_78 != 0) && (1 < *(uint *)(local_78 + -8))) && (local_78 != *(long *)param_2)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)param_2,(CowData *)&local_78);
    }
    List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
              ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)&local_70);
    lVar6 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_91;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar6 = *local_70;
  local_91 = 1;
joined_r0x0010163e:
  if (lVar6 != 0) {
    do {
      cVar5 = (**(code **)(*(long *)this + 0x1c8))
                        (this,*(undefined8 *)param_1,(String *)(lVar6 + 8));
      if (cVar5 != '\0') {
        pcVar2 = *(code **)(*(long *)this + 0x1d0);
        StringName::StringName((StringName *)&local_58,(String *)(lVar6 + 8),false);
        (*pcVar2)((String *)&local_68,this,*(undefined8 *)param_1,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        if (local_68 != 0) {
          if (1 < *(uint *)(local_68 + -8)) {
            local_60 = 0;
            local_58 = &_LC41;
            local_50 = 1;
            String::parse_latin1((StrRange *)&local_60);
            String::operator+((String *)&local_58,(String *)&local_68);
            String::operator+=((String *)&local_78,(String *)&local_58);
            puVar4 = local_58;
            if (local_58 != (undefined *)0x0) {
              LOCK();
              plVar1 = (long *)(local_58 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (undefined *)0x0;
                Memory::free_static(puVar4 + -0x10,false);
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
            if (*(char *)(lVar6 + 0x49) != '\0') {
              local_91 = 0;
            }
            if (local_68 == 0) goto LAB_00101648;
          }
          lVar3 = local_68;
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) goto code_r0x001016da;
        }
      }
LAB_00101648:
      lVar6 = *(long *)(lVar6 + 0x50);
      if (lVar6 == 0) break;
    } while( true );
  }
  goto LAB_00101700;
code_r0x001016da:
  local_68 = 0;
  Memory::free_static((void *)(lVar3 + -0x10),false);
  lVar6 = *(long *)(lVar6 + 0x50);
  goto joined_r0x0010163e;
}



/* EditorExportPlatformWindows::get_export_option_visibility(EditorExportPreset const*, String
   const&) const */

undefined4 __thiscall
EditorExportPlatformWindows::get_export_option_visibility
          (EditorExportPlatformWindows *this,EditorExportPreset *param_1,String *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (EditorExportPreset *)0x0) {
LAB_00101b68:
    uVar3 = 1;
  }
  else {
    pSVar4 = (String *)OS::get_singleton();
    local_70 = 0;
    local_60 = 7;
    local_68 = "windows";
    String::parse_latin1((StrRange *)&local_70);
    cVar1 = OS::has_feature(pSVar4);
    if ((cVar1 == '\0') &&
       (cVar1 = String::operator==(param_2,"codesign/identity_type"), cVar1 != '\0')) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      uVar3 = EditorExportPreset::are_advanced_options_enabled();
      StringName::StringName((StringName *)&local_68,"codesign/enable",false);
      Object::get((StringName *)local_58,(bool *)param_1);
      bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      if (((bVar2) || (cVar1 = String::operator!=(param_2,"codesign/enable"), cVar1 == '\0')) ||
         (cVar1 = String::begins_with((char *)param_2), cVar1 == '\0')) {
        StringName::StringName((StringName *)&local_68,"application/modify_resources",false);
        Object::get((StringName *)local_58,(bool *)param_1);
        bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (((bVar2) ||
            (cVar1 = String::operator!=(param_2,"application/modify_resources"), cVar1 == '\0')) ||
           ((cVar1 = String::operator!=(param_2,"application/export_angle"), cVar1 == '\0' ||
            (((cVar1 = String::operator!=(param_2,"application/export_d3d12"), cVar1 == '\0' ||
              (cVar1 = String::operator!=(param_2,"application/d3d12_agility_sdk_multiarch"),
              cVar1 == '\0')) || (cVar1 = String::begins_with((char *)param_2), cVar1 == '\0'))))))
        {
          StringName::StringName((StringName *)&local_68,"ssh_remote_deploy/enabled",false);
          Object::get((StringName *)local_58,(bool *)param_1);
          bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
            StringName::unref();
          }
          if (((bVar2) ||
              (cVar1 = String::operator!=(param_2,"ssh_remote_deploy/enabled"), cVar1 == '\0')) ||
             (cVar1 = String::begins_with((char *)param_2), cVar1 == '\0')) {
            cVar1 = String::operator==(param_2,"dotnet/embed_build_outputs");
            if (((((cVar1 != '\0') ||
                  (cVar1 = String::operator==(param_2,"custom_template/debug"), cVar1 != '\0')) ||
                 (cVar1 = String::operator==(param_2,"custom_template/release"), cVar1 != '\0')) ||
                ((cVar1 = String::operator==(param_2,"application/d3d12_agility_sdk_multiarch"),
                 cVar1 != '\0' ||
                 (cVar1 = String::operator==(param_2,"application/export_angle"), cVar1 != '\0'))))
               || ((cVar1 = String::operator==(param_2,"application/export_d3d12"), cVar1 != '\0' ||
                   (cVar1 = String::operator==(param_2,"application/icon_interpolation"),
                   cVar1 != '\0')))) goto LAB_00101a8b;
            goto LAB_00101b68;
          }
        }
      }
    }
    uVar3 = 0;
  }
LAB_00101a8b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* EditorExportPlatformWindows::get_option_label(int) const */

String * EditorExportPlatformWindows::get_option_label(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Run on remote Windows system";
    local_40 = 0x1c;
  }
  else {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Stop and uninstall";
    local_40 = 0x12;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)CONCAT44(in_register_0000003c,param_1),(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (String *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::get_option_tooltip(int) const */

String * EditorExportPlatformWindows::get_option_tooltip(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Run exported project on remote Windows system";
    local_40 = 0x2d;
  }
  else {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Stop and uninstall running project from the remote system";
    local_40 = 0x39;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)CONCAT44(in_register_0000003c,param_1),(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (String *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::has_valid_export_configuration(Ref<EditorExportPreset> const&,
   String&, bool&, bool) const */

undefined1
EditorExportPlatformWindows::has_valid_export_configuration
          (Ref *param_1,String *param_2,bool *param_3,bool param_4)

{
  bool *pbVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  long in_FS_OFFSET;
  String *local_130;
  long local_c8;
  long local_c0;
  long local_b8;
  Variant local_b0 [8];
  String local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 0;
  uVar2 = EditorExportPlatformPC::has_valid_export_configuration
                    (param_1,param_2,(bool *)&local_c8,param_4);
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_70,"custom_template/debug",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String((Variant *)&local_68);
  bVar3 = SUB81((Variant *)&local_68,0);
  String::strip_edges(SUB81((String *)&local_c0,0),bVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_70,"custom_template/release",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String((Variant *)&local_68);
  String::strip_edges(SUB81((String *)&local_b8,0),bVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_68,"binary_format/architecture",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String(local_b0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (((local_c0 != 0) && (1 < *(uint *)(local_c0 + -8))) &&
     (cVar4 = FileAccess::exists((String *)&local_c0), cVar4 != '\0')) {
    _get_exe_arch(local_a8);
    cVar4 = String::operator!=((String *)local_b0,local_a8);
    if (cVar4 != '\0') {
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"\n");
      local_80 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)local_b0);
      local_88 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_a8);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1
                ((String *)&local_a0,
                 "Mismatching custom debug export template executable architecture: found \"%s\", expected \"%s\"."
                );
      TTR((String *)&local_90,(String *)&local_a0);
      vformat<String,String>
                (local_78,(String *)&local_90,(CowData<char32_t> *)&local_88,
                 (CowData<char32_t> *)&local_80);
      String::operator+((String *)&local_68,local_78);
      String::operator+=((String *)&local_c8,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  }
  local_130 = (String *)&local_90;
  if (((local_b8 != 0) && (1 < *(uint *)(local_b8 + -8))) &&
     (cVar4 = FileAccess::exists((String *)&local_b8), cVar4 != '\0')) {
    _get_exe_arch(local_a8);
    cVar4 = String::operator!=((String *)local_b0,local_a8);
    if (cVar4 != '\0') {
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"\n");
      local_80 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)local_b0);
      local_88 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_a8);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1
                ((String *)&local_a0,
                 "Mismatching custom release export template executable architecture: found \"%s\", expected \"%s\"."
                );
      TTR(local_130,(String *)&local_a0);
      vformat<String,String>
                (local_78,local_130,(CowData<char32_t> *)&local_88,(CowData<char32_t> *)&local_80);
      String::operator+((String *)&local_68,local_78);
      String::operator+=((String *)&local_c8,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  }
  local_70 = 0;
  local_68 = "export/windows/rcedit";
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)local_130);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_68,"application/modify_resources",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (bVar3) {
    cVar4 = Variant::needs_deinit[local_58[0]];
    if ((local_90 == 0) || (*(uint *)(local_90 + -8) < 2)) {
      if (cVar4 != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      local_68 = "\n";
      local_70 = 0;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "";
      local_80 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_80);
      local_68 = 
      "The rcedit tool must be configured in the Editor Settings (Export > Windows > rcedit) to change the icon or app information data."
      ;
      local_88 = 0;
      local_60 = 0x81;
      String::parse_latin1((StrRange *)&local_88);
      TTR(local_78,(String *)&local_88);
      String::operator+((String *)&local_68,local_78);
      String::operator+=((String *)&local_c8,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_0010215f;
    }
  }
  else {
    cVar4 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010215f:
  if (((local_c8 != 0) && (1 < *(uint *)(local_c8 + -8))) && (local_c8 != *(long *)param_3)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_c8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorExportPlatformWindows::fixup_embedded_pck(String const&, long, long) */

undefined8 __thiscall
EditorExportPlatformWindows::fixup_embedded_pck
          (EditorExportPlatformWindows *this,String *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  code *local_c0;
  Object *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_49 [2];
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 + param_3 < 0x100000000) {
    FileAccess::open((String *)&local_a8,(int)param_1,(Error *)0x3);
    if (local_a8 == (Object *)0x0) {
      pcVar2 = *(code **)(*(long *)this + 0x178);
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)param_1);
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"Failed to open executable file \"%s\".");
      TTR((String *)&local_78,(String *)&local_88);
      vformat<String>((CowData<char32_t> *)&local_68,(String *)&local_78,
                      (CowData<char32_t> *)&local_70);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"PCK Embedding");
      TTR((String *)&local_90,(String *)&local_a0);
      uVar10 = 0x13;
      (*pcVar2)(this,3,(String *)&local_90,(CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    else {
      (**(code **)(*(long *)local_a8 + 0x1b8))(local_a8,0x3c);
      uVar7 = (**(code **)(*(long *)local_a8 + 0x1f0))();
      (**(code **)(*(long *)local_a8 + 0x1b8))(local_a8,uVar7);
      iVar8 = (**(code **)(*(long *)local_a8 + 0x1f0))();
      if (iVar8 == 0x4550) {
        lVar9 = (**(code **)(*(long *)local_a8 + 0x1c8))();
        (**(code **)(*(long *)local_a8 + 0x1b8))(local_a8,lVar9 + 2);
        uVar5 = (**(code **)(*(long *)local_a8 + 0x1e8))();
        (**(code **)(*(long *)local_a8 + 0x1b8))(local_a8,lVar9 + 0x10);
        uVar6 = (**(code **)(*(long *)local_a8 + 0x1e8))();
        pOVar3 = local_a8;
        pcVar2 = *(code **)(*(long *)local_a8 + 0x1b8);
        lVar9 = (**(code **)(*(long *)local_a8 + 0x1c8))(local_a8);
        (*pcVar2)(pOVar3,(ulong)uVar6 + 2 + lVar9);
        lVar9 = (**(code **)(*(long *)local_a8 + 0x1c8))();
        if (uVar5 != 0) {
          lVar1 = lVar9 + 0x28;
          do {
            (**(code **)(*(long *)local_a8 + 0x1b8))(local_a8,lVar9);
            (**(code **)(*(long *)local_a8 + 0x220))(local_a8,local_49,8);
            local_41 = 0;
            if (local_49[0] == 0x6b6370) {
              uVar10 = 0;
              (**(code **)(*(long *)local_a8 + 0x1b8))(local_a8,lVar9 + 8);
              (**(code **)(*(long *)local_a8 + 0x278))(local_a8,8);
              (**(code **)(*(long *)local_a8 + 0x1b8))(local_a8,lVar9 + 0x10);
              (**(code **)(*(long *)local_a8 + 0x278))(local_a8,param_3 & 0xffffffff);
              (**(code **)(*(long *)local_a8 + 0x1b8))(local_a8,lVar9 + 0x14);
              (**(code **)(*(long *)local_a8 + 0x278))();
              goto LAB_00102973;
            }
            lVar9 = lVar9 + 0x28;
          } while (lVar9 != lVar1 + (ulong)(uVar5 - 1) * 0x28);
        }
        local_c0 = *(code **)(*(long *)this + 0x178);
        local_68 = "";
        local_78 = 0;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_78);
        local_68 = "Executable \"pck\" section not found.";
        local_60 = 0x23;
      }
      else {
        local_c0 = *(code **)(*(long *)this + 0x178);
        local_68 = "";
        local_78 = 0;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_78);
        local_68 = "Executable file header corrupted.";
        local_60 = 0x21;
      }
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      TTR((String *)&local_70,(String *)&local_80);
      local_68 = "";
      local_88 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_88);
      local_68 = "PCK Embedding";
      local_90 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange *)&local_90);
      TTR((String *)&local_68,(String *)&local_90);
      uVar10 = 0x10;
      (*local_c0)(this,3,(String *)&local_68,(String *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
LAB_00102973:
    if (local_a8 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_a8);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_a8 + 0x140))(local_a8);
          Memory::free_static(local_a8,false);
        }
      }
    }
  }
  else {
    pcVar2 = *(code **)(*(long *)this + 0x178);
    local_78 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "Windows executables cannot be >= 4 GiB.";
    local_80 = 0;
    local_60 = 0x27;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_70,(String *)&local_80);
    local_68 = "";
    local_88 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_68 = "PCK Embedding";
    local_90 = 0;
    local_60 = 0xd;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_68,(String *)&local_90);
    uVar10 = 0x1e;
    (*pcVar2)(this,3,(String *)&local_68,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::get_export_options(List<EditorExportPlatform::ExportOption,
   DefaultAllocator>*) const */

void __thiscall
EditorExportPlatformWindows::get_export_options(EditorExportPlatformWindows *this,List *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  int local_b8 [8];
  PropertyInfo local_98 [48];
  Variant local_68 [24];
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorExportPlatformPC::get_export_options((List *)this);
  Variant::Variant((Variant *)local_b8,"x86_64");
  local_f8 = 0;
  local_e8 = "x86_64,x86_32,arm64";
  local_100 = 0;
  local_e0 = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "binary_format/architecture";
  local_e0 = 0x1a;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,2,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,false);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "codesign/enable";
  local_108 = 0;
  local_e0 = 0xf;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = _LC85;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,0);
  local_e8 = 
  "Select automatically,Use PKCS12 file (specify *.PFX/*.P12 file),Use certificate store (specify SHA-1 hash)"
  ;
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0x6a;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "codesign/identity_type";
  local_e0 = 0x16;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,2,(StrRange *)&local_108,2,(StrRange *)&local_100,0x20000006,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "*.pfx,*.p12";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "codesign/identity";
  local_e0 = 0x11;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0xf,(StrRange *)&local_100,
             0x20000006,(Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "codesign/password";
  local_e0 = 0x11;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x24,(StrRange *)&local_100,
             0x20000006,(Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,true);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "codesign/timestamp";
  local_e0 = 0x12;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "codesign/timestamp_server_url";
  local_e0 = 0x1d;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,1);
  local_e8 = "SHA1,SHA256";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "codesign/digest_algorithm";
  local_e0 = 0x19;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,2,(StrRange *)&local_108,2,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "codesign/description";
  local_e0 = 0x14;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_f0 = 0;
  Variant::Variant((Variant *)local_b8,(Vector *)&local_f8);
  local_e8 = "";
  local_100 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_e8 = "codesign/custom_options";
  local_e0 = 0x17;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0x22,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             (StrRange *)&local_100);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  Variant::Variant((Variant *)local_b8,true);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "application/modify_resources";
  local_108 = 0;
  local_e0 = 0x1c;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = _LC85;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "*.ico,*.png,*.webp,*.svg";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/icon";
  local_e0 = 0x10;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0xd,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0x100;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "*.ico,*.png,*.webp,*.svg";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/console_wrapper_icon";
  local_e0 = 0x20;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0xd,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,4);
  local_e8 = "Nearest neighbor,Bilinear,Cubic,Trilinear,Lanczos";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0x31;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/icon_interpolation";
  local_e0 = 0x1e;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,2,(StrRange *)&local_108,2,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "Leave empty to use project version";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0x22;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/file_version";
  local_e0 = 0x18;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x14,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "Leave empty to use project version";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0x22;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/product_version";
  local_e0 = 0x1b;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x14,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "Company Name";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0xc;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/company_name";
  local_e0 = 0x18;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x14,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "Game Name";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 9;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/product_name";
  local_e0 = 0x18;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x14,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/file_description";
  local_e0 = 0x1c;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "application/copyright";
  local_108 = 0;
  local_e0 = 0x15;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "application/trademarks";
  local_e0 = 0x16;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,0);
  local_e8 = "Auto,Yes,No";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "application/export_angle";
  local_108 = 0;
  local_e0 = 0x18;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,2,(StrRange *)&local_108,2,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = _LC85;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,0);
  local_e8 = "Auto,Yes,No";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "application/export_d3d12";
  local_108 = 0;
  local_e0 = 0x18;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,2,(StrRange *)&local_108,2,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = _LC85;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,true);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "application/d3d12_agility_sdk_multiarch";
  local_108 = 0;
  local_e0 = 0x27;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = _LC85;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_118 = 0;
  local_e8 = 
  "Expand-Archive -LiteralPath \'{temp_dir}\\{archive_name}\' -DestinationPath \'{temp_dir}\'\n$action = New-ScheduledTaskAction -Execute \'{temp_dir}\\{exe_name}\' -Argument \'{cmd_args}\'\n$trigger = New-ScheduledTaskTrigger -Once -At 00:00\n$settings = New-ScheduledTaskSettingsSet -AllowStartIfOnBatteries -DontStopIfGoingOnBatteries\n$task = New-ScheduledTask -Action $action -Trigger $trigger -Settings $settings\nRegister-ScheduledTask godot_remote_debug -InputObject $task -Force:$true\nStart-ScheduledTask -TaskName godot_remote_debug\nwhile (Get-ScheduledTask -TaskName godot_remote_debug | ? State -eq running) { Start-Sleep -Milliseconds 100 }\nUnregister-ScheduledTask -TaskName godot_remote_debug -Confirm:$false -ErrorAction:SilentlyContinue"
  ;
  local_e0 = 0x2df;
  String::parse_latin1((StrRange *)&local_118);
  local_e8 = 
  "Stop-ScheduledTask -TaskName godot_remote_debug -ErrorAction:SilentlyContinue\nUnregister-ScheduledTask -TaskName godot_remote_debug -Confirm:$false -ErrorAction:SilentlyContinue\nRemove-Item -Recurse -Force \'{temp_dir}\'"
  ;
  local_110 = 0;
  local_e0 = 0xda;
  String::parse_latin1((StrRange *)&local_110);
  Variant::Variant((Variant *)local_b8,false);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "ssh_remote_deploy/enabled";
  local_108 = 0;
  local_e0 = 0x19;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = _LC85;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"user@host_ip");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/host";
  local_e0 = 0x16;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"22");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/port";
  local_e0 = 0x16;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "ssh_remote_deploy/extra_args_ssh";
  local_108 = 0;
  local_e0 = 0x20;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x12,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/extra_args_scp";
  local_e0 = 0x20;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x12,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,(String *)&local_118);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/run_script";
  local_e0 = 0x1c;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x12,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,(String *)&local_110);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "ssh_remote_deploy/cleanup_script";
  local_108 = 0;
  local_e0 = 0x20;
  String::parse_latin1((StrRange *)&local_108);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)&local_108,0x12,(StrRange *)&local_100,6,
             (Vector *)&local_f8);
  PropertyInfo::PropertyInfo(local_98,(PropertyInfo *)&local_e8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::get_export_option_warning(EditorExportPreset const*, StringName
   const&) const */

EditorExportPreset *
EditorExportPlatformWindows::get_export_option_warning
          (EditorExportPreset *param_1,StringName *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  StringName *in_RCX;
  long lVar4;
  bool *in_RDX;
  String *this;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDX != (bool *)0x0) {
    cVar2 = StringName::operator==(in_RCX,"application/icon");
    if (cVar2 == '\0') {
      cVar2 = StringName::operator==(in_RCX,"application/file_version");
      if (cVar2 == '\0') {
        cVar2 = StringName::operator==(in_RCX,"application/product_version");
        if (cVar2 == '\0') goto LAB_00105353;
        StringName::StringName((StringName *)&local_68,"application/product_version",false);
        this = (String *)&local_80;
        Object::get((StringName *)local_58,in_RDX);
        Variant::operator_cast_to_String((Variant *)this);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        if ((local_80 == 0) || (*(uint *)(local_80 + -8) < 2)) goto LAB_0010534b;
        String::split((char *)&local_68,SUB81(this,0),0x113eed);
        if ((local_60 != 0) &&
           ((*(long *)(local_60 + -8) == 4 && (cVar2 = String::is_valid_int(), cVar2 != '\0')))) {
          if (local_60 == 0) goto LAB_001057c3;
          lVar6 = *(long *)(local_60 + -8);
          if (lVar6 < 2) goto LAB_001057c6;
          cVar2 = String::is_valid_int();
          if (cVar2 != '\0') {
            if (local_60 == 0) goto LAB_0010580e;
            lVar6 = *(long *)(local_60 + -8);
            if (lVar6 < 3) goto LAB_00105811;
            cVar2 = String::is_valid_int();
            if (cVar2 != '\0') {
              if (local_60 == 0) goto LAB_00105833;
              lVar6 = *(long *)(local_60 + -8);
              if (lVar6 < 4) goto LAB_00105836;
              cVar2 = String::is_valid_int();
              if ((cVar2 != '\0') && (iVar3 = String::find_char((wchar32)this,0x2d), iVar3 == -1))
              goto LAB_001056d4;
            }
          }
        }
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"");
        pcVar5 = "Invalid product version.";
LAB_00105476:
        local_78 = 0;
        String::parse_latin1((String *)&local_78,pcVar5);
        TTR((String *)param_1,(String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<String>::_unref((CowData<String> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        goto LAB_0010535a;
      }
      StringName::StringName((StringName *)&local_68,"application/file_version",false);
      this = (String *)&local_80;
      Object::get((StringName *)local_58,in_RDX);
      Variant::operator_cast_to_String((Variant *)this);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      if ((local_80 != 0) && (1 < *(uint *)(local_80 + -8))) {
        String::split((char *)&local_68,SUB81(this,0),0x113eed);
        if ((local_60 == 0) ||
           ((*(long *)(local_60 + -8) != 4 || (cVar2 = String::is_valid_int(), cVar2 == '\0'))))
        goto LAB_00105444;
        if (local_60 == 0) {
LAB_001057c3:
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(local_60 + -8);
          if (1 < lVar6) {
            cVar2 = String::is_valid_int();
            if (cVar2 == '\0') goto LAB_00105444;
            if (local_60 == 0) {
LAB_0010580e:
              lVar6 = 0;
            }
            else {
              lVar6 = *(long *)(local_60 + -8);
              if (2 < lVar6) {
                cVar2 = String::is_valid_int();
                if (cVar2 != '\0') {
                  if (local_60 == 0) {
LAB_00105833:
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = *(long *)(local_60 + -8);
                    if (3 < lVar6) {
                      cVar2 = String::is_valid_int();
                      if ((cVar2 != '\0') &&
                         (iVar3 = String::find_char((wchar32)this,0x2d), iVar3 == -1)) {
LAB_001056d4:
                        this = (String *)&local_80;
                        CowData<String>::_unref((CowData<String> *)&local_60);
                        goto LAB_0010534b;
                      }
                      goto LAB_00105444;
                    }
                  }
LAB_00105836:
                  lVar4 = 3;
                  goto LAB_001057e6;
                }
LAB_00105444:
                local_70 = 0;
                String::parse_latin1((String *)&local_70,"");
                pcVar5 = "Invalid file version.";
                goto LAB_00105476;
              }
            }
LAB_00105811:
            lVar4 = 2;
            goto LAB_001057e6;
          }
        }
LAB_001057c6:
        lVar4 = 1;
LAB_001057e6:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    else {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_70,"application/icon",false);
      this = (String *)&local_78;
      Object::get((StringName *)local_58,in_RDX);
      Variant::operator_cast_to_String((Variant *)&local_68);
      ProjectSettings::globalize_path(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      if (((local_78 != 0) && (1 < *(uint *)(local_78 + -8))) &&
         (cVar2 = FileAccess::exists(this), cVar2 == '\0')) {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Invalid icon path.");
        TTR((String *)param_1,(String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)this);
        goto LAB_0010535a;
      }
    }
LAB_0010534b:
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
  }
LAB_00105353:
  *(undefined8 *)param_1 = 0;
LAB_0010535a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* EditorExportPlatformWindows::_code_sign(Ref<EditorExportPreset> const&, String const&) */

int __thiscall
EditorExportPlatformWindows::_code_sign
          (EditorExportPlatformWindows *this,Ref *param_1,String *param_2)

{
  String *pSVar1;
  bool *pbVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  List<String,DefaultAllocator> *local_140;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  Object *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = 0;
  local_88 = "export/windows/osslsigncode";
  local_98 = 0;
  local_80 = 0x1b;
  String::parse_latin1((StrRange *)&local_98);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_f0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if ((local_f0 == 0) || (*(uint *)(local_f0 + -8) < 2)) {
LAB_0010598e:
    local_80 = 0xc;
    local_88 = "osslsigncode";
    String::parse_latin1((StrRange *)&local_f0);
  }
  else {
    cVar5 = FileAccess::exists((String *)&local_f0);
    if (cVar5 == '\0') {
      pcVar3 = *(code **)(*(long *)this + 0x178);
      local_98 = 0;
      if (local_f0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_f0);
      }
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"");
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0,"Could not find osslsigncode executable at \"%s\".");
      TTR((String *)&local_a0,(String *)&local_b0);
      vformat<String>((StringName *)&local_88,(String *)&local_a0,(StrRange *)&local_98);
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"");
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"Code Signing");
      TTR((String *)&local_b8,(String *)&local_c8);
      (*pcVar3)(this,2,(String *)&local_b8,(StringName *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      iVar7 = 7;
      goto LAB_001062ce;
    }
    if ((local_f0 == 0) || (*(uint *)(local_f0 + -8) < 2)) goto LAB_0010598e;
  }
  local_98 = 0;
  local_88 = "sign";
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_98);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)&local_f8,(String *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Variant::Variant((Variant *)local_58,"");
  pSVar1 = *(String **)param_1;
  StringName::StringName((StringName *)&local_88,"codesign/identity",false);
  EditorExportPreset::get_or_env((StringName *)local_78,pSVar1,(bool *)&local_88);
  cVar5 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_140 = (List<String,DefaultAllocator> *)&local_f8;
  if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar5 == '\0') {
    pcVar3 = *(code **)(*(long *)this + 0x178);
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "No identity found.";
    local_a8 = 0;
    local_80 = 0x12;
    String::parse_latin1((StrRange *)&local_a8);
    TTR((String *)&local_98,(String *)&local_a8);
    local_88 = "";
    local_b0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_b0);
    local_88 = "Code Signing";
    local_b8 = 0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_b8);
    TTR((String *)&local_88,(String *)&local_b8);
    (*pcVar3)(this,2,(StringName *)&local_88,(StrRange *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00106558:
    iVar7 = 1;
  }
  else {
    local_98 = 0;
    local_88 = "-pkcs12";
    local_80 = 7;
    String::parse_latin1((StrRange *)&local_98);
    List<String,DefaultAllocator>::push_back(local_140,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    pSVar1 = *(String **)param_1;
    StringName::StringName((StringName *)&local_98,"codesign/identity",false);
    EditorExportPreset::get_or_env((StringName *)local_58,pSVar1,(bool *)&local_98);
    Variant::operator_cast_to_String((Variant *)&local_88);
    List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    Variant::Variant((Variant *)local_58,"");
    pSVar1 = *(String **)param_1;
    StringName::StringName((StringName *)&local_88,"codesign/password",false);
    EditorExportPreset::get_or_env((StringName *)local_78,pSVar1,(bool *)&local_88);
    cVar5 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar5 != '\0') {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"-pass");
      List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      pSVar1 = *(String **)param_1;
      StringName::StringName((StringName *)&local_98,"codesign/password",false);
      EditorExportPreset::get_or_env((StringName *)local_58,pSVar1,(bool *)&local_98);
      Variant::operator_cast_to_String((Variant *)&local_88);
      List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
    }
    pbVar2 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"codesign/timestamp",false);
    Object::get((StringName *)local_58,pbVar2);
    bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (bVar6) {
      Variant::Variant((Variant *)local_58,"");
      pbVar2 = *(bool **)param_1;
      StringName::StringName((StringName *)&local_88,"codesign/timestamp_server",false);
      Object::get((StringName *)local_78,pbVar2);
      cVar5 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar5 == '\0') {
        pcVar3 = *(code **)(*(long *)this + 0x178);
        local_98 = 0;
        String::parse_latin1((String *)&local_98,"");
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,"Invalid timestamp server.");
        TTR((String *)&local_88,(String *)&local_a0);
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"");
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"Code Signing");
        TTR((String *)&local_a8,(String *)&local_b8);
        (*pcVar3)(this,2,(String *)&local_a8,(StringName *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        goto LAB_00106558;
      }
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"-ts");
      List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      pbVar2 = *(bool **)param_1;
      StringName::StringName((StringName *)&local_98,"codesign/timestamp_server_url",false);
      Object::get((StringName *)local_58,pbVar2);
      Variant::operator_cast_to_String((Variant *)&local_88);
      List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
    }
    local_98 = 0;
    local_88 = "-h";
    local_80 = 2;
    String::parse_latin1((StrRange *)&local_98);
    List<String,DefaultAllocator>::push_back(local_140,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    pbVar2 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"codesign/digest_algorithm",false);
    Object::get((StringName *)local_58,pbVar2);
    iVar7 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
      StringName::unref();
    }
    local_88 = (char *)0x0;
    pcVar11 = "sha1";
    if (iVar7 != 0) {
      pcVar11 = "sha256";
    }
    String::parse_latin1((String *)&local_88,pcVar11);
    List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    Variant::Variant((Variant *)local_58,"");
    pbVar2 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"codesign/description",false);
    Object::get((StringName *)local_78,pbVar2);
    cVar5 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar5 != '\0') {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,(char *)((long)&DAT_0011141f + 4));
      List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      pbVar2 = *(bool **)param_1;
      StringName::StringName((StringName *)&local_98,"codesign/description",false);
      Object::get((StringName *)local_58,pbVar2);
      Variant::operator_cast_to_String((Variant *)&local_88);
      List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
    }
    pbVar2 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"codesign/custom_options",false);
    Object::get((StringName *)local_58,pbVar2);
    Variant::operator_cast_to_Vector((Variant *)&local_98);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    for (lVar10 = 0; (local_90 != 0 && (lVar10 < *(long *)(local_90 + -8))); lVar10 = lVar10 + 1) {
      String::strip_edges(SUB81((StringName *)&local_88,0),
                          (bool)((char)local_90 + (char)lVar10 * '\b'));
      if ((local_88 != (char *)0x0) && (1 < *(uint *)((long)local_88 + -8))) {
        List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    local_a0 = 0;
    local_88 = (char *)0x111426;
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_a0);
    List<String,DefaultAllocator>::push_back(local_140,(String *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    List<String,DefaultAllocator>::push_back(local_140,param_2);
    local_88 = "-out";
    local_a0 = 0;
    local_80 = 4;
    String::parse_latin1((StrRange *)&local_a0);
    List<String,DefaultAllocator>::push_back(local_140,(String *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    local_88 = "_signed";
    local_a0 = 0;
    local_80 = 7;
    String::parse_latin1((StrRange *)&local_a0);
    String::operator+((String *)&local_88,param_2);
    List<String,DefaultAllocator>::push_back(local_140,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    local_e8 = 0;
    plVar9 = (long *)OS::get_singleton();
    iVar7 = (**(code **)(*plVar9 + 0x108))
                      (plVar9,(Variant *)&local_f0,local_140,(CowData *)&local_e8,0,1,0,0);
    if (((iVar7 == 0) && (iVar8 = String::find((char *)&local_e8,0x111437), iVar8 == -1)) &&
       (iVar8 = String::find((char *)&local_e8,0x111441), iVar8 == -1)) {
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0,"): ");
      operator+((char *)&local_b8,(String *)"codesign (");
      String::operator+((String *)&local_a8,(String *)&local_b8);
      String::operator+((String *)&local_a0,(String *)&local_a8);
      Variant::Variant((Variant *)local_58,(String *)&local_a0);
      stringify_variants((Variant *)&local_88);
      __print_line((String *)&local_88);
      pcVar11 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar9 = (long *)(local_88 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar11 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      iVar7 = String::find((char *)&local_e8,0x11145f);
      if (iVar7 == -1) {
        String::get_base_dir();
        DirAccess::create_for_path((String *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        pOVar4 = local_e0;
        pcVar3 = *(code **)(*(long *)local_e0 + 0x208);
        local_88 = (char *)0x0;
        if (*(long *)param_2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_2);
        }
        iVar7 = (*pcVar3)(pOVar4,(StringName *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        pOVar4 = local_e0;
        if (iVar7 == 0) {
          pcVar3 = *(code **)(*(long *)local_e0 + 0x200);
          local_88 = (char *)0x0;
          if (*(long *)param_2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_2);
          }
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"_signed");
          String::operator+((String *)&local_a0,param_2);
          iVar7 = (*pcVar3)(pOVar4,(StrRange *)&local_a0,(StringName *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          if (iVar7 != 0) {
            pcVar3 = *(code **)(*(long *)this + 0x178);
            local_a8 = 0;
            String::parse_latin1((String *)&local_a8,"_signed");
            String::operator+((String *)&local_a0,param_2);
            local_b8 = 0;
            String::parse_latin1((String *)&local_b8,"");
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"Failed to rename temporary file \"%s\".");
            TTR((String *)&local_b0,(String *)&local_c0);
            vformat<String>((StringName *)&local_88,(String *)&local_b0,(StrRange *)&local_a0);
            local_d0 = 0;
            String::parse_latin1((String *)&local_d0,"");
            local_d8 = 0;
            String::parse_latin1((String *)&local_d8,"Code Signing");
            TTR((String *)&local_c8,(String *)&local_d8);
            (*pcVar3)(this,2,(String *)&local_c8,(StringName *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
        }
        else {
          pcVar3 = *(code **)(*(long *)this + 0x178);
          local_a0 = 0;
          if (*(long *)param_2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)param_2);
          }
          local_b0 = 0;
          String::parse_latin1((String *)&local_b0,"");
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"Failed to remove temporary file \"%s\".");
          TTR((String *)&local_a8,(String *)&local_b8);
          vformat<String>((StringName *)&local_88,(String *)&local_a8,(StrRange *)&local_a0);
          local_c8 = 0;
          String::parse_latin1((String *)&local_c8,"");
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"Code Signing");
          TTR((String *)&local_c0,(String *)&local_d0);
          (*pcVar3)(this,2,(String *)&local_c0,(StringName *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        }
        if (((local_e0 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_e0), cVar5 != '\0')) {
          (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
          Memory::free_static(local_e0,false);
        }
      }
      else {
        pcVar3 = *(code **)(*(long *)this + 0x178);
        local_a0 = 0;
        if (local_e8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_e8);
        }
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"");
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"Signtool failed to sign executable: %s.");
        TTR((String *)&local_a8,(String *)&local_b8);
        vformat<String>((StringName *)&local_88,(String *)&local_a8,(StrRange *)&local_a0);
        local_c8 = 0;
        String::parse_latin1((String *)&local_c8,"");
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"Code Signing");
        TTR((String *)&local_c0,(String *)&local_d0);
        (*pcVar3)(this,2,(String *)&local_c0,(StringName *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        iVar7 = 1;
      }
    }
    else {
      pcVar3 = *(code **)(*(long *)this + 0x178);
      local_88 = "";
      local_a8 = 0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_a8);
      local_88 = 
      "Could not start osslsigncode executable. Configure signtool path in the Editor Settings (Export > Windows > osslsigncode), or disable \"Codesign\" in the export preset."
      ;
      local_b0 = 0;
      local_80 = 0xa6;
      String::parse_latin1((StrRange *)&local_b0);
      TTR((String *)&local_a0,(String *)&local_b0);
      local_88 = "";
      local_b8 = 0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_b8);
      local_88 = "Code Signing";
      local_c0 = 0;
      local_80 = 0xc;
      String::parse_latin1((StrRange *)&local_c0);
      TTR((String *)&local_88,(String *)&local_c0);
      (*pcVar3)(this,2,(StringName *)&local_88,(StrRange *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<String>::_unref((CowData<String> *)&local_90);
  }
LAB_001062ce:
  local_140 = (List<String,DefaultAllocator> *)&local_f8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  List<String,DefaultAllocator>::~List(local_140);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::sign_shared_object(Ref<EditorExportPreset> const&, bool, String
   const&) */

undefined8 __thiscall
EditorExportPlatformWindows::sign_shared_object
          (EditorExportPlatformWindows *this,Ref *param_1,bool param_2,String *param_3)

{
  bool *pbVar1;
  bool bVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  pbVar1 = *(bool **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_60,"codesign/enable",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (bVar2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = _code_sign(this,param_1,param_3);
      return uVar3;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::export_project(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

int __thiscall
EditorExportPlatformWindows::export_project
          (EditorExportPlatformWindows *this,Ref *param_1,char param_2,CowData *param_3,
          undefined8 param_5)

{
  code *pcVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  bool *pbVar11;
  undefined8 uVar12;
  long *plVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  String *local_218;
  CowData<char32_t> *local_1e8;
  CowData<char32_t> *local_1c8;
  Variant local_150 [8];
  Variant local_148 [8];
  long local_140;
  Object *local_138;
  Object *local_130;
  Object *local_128;
  long local_120;
  Object *local_118;
  Object *local_110;
  Object *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  Object *local_c8;
  undefined8 local_c0;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  pbVar11 = *(bool **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_c8,"custom_template/debug",false);
  Object::get((StringName *)local_58,pbVar11);
  Variant::operator_cast_to_String(local_150);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
    StringName::unref();
  }
  pbVar11 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_c8,"custom_template/release",false);
  Object::get((StringName *)local_58,pbVar11);
  Variant::operator_cast_to_String(local_148);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
    StringName::unref();
  }
  pbVar11 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_c8,"binary_format/architecture",false);
  Object::get((StringName *)local_58,pbVar11);
  Variant::operator_cast_to_String((Variant *)&local_140);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_138 = (Object *)0x0;
  pVVar14 = local_150;
  if (param_2 == '\0') {
    pVVar14 = local_148;
  }
  if (*(long *)pVVar14 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)pVVar14);
  }
  String::strip_edges(SUB81((StringName *)&local_c8,0),SUB81((CowData<char32_t> *)&local_138,0));
  if (local_138 != local_c8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    local_138 = local_c8;
    local_c8 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((local_138 == (Object *)0x0) || (*(uint *)(local_138 + -8) < 2)) {
    local_c8 = (Object *)0x111476;
    pcVar1 = *(code **)(*(long *)this + 0x2b0);
    local_c0 = 5;
    local_d8 = 0;
    if (param_2 == '\0') {
      local_c0 = 7;
      local_c8 = (Object *)0x11146e;
    }
    String::parse_latin1((StrRange *)&local_d8);
    (*pcVar1)((CowData<char32_t> *)&local_d0,this,(StrRange *)&local_d8,(Variant *)&local_140);
    EditorExportPlatform::find_export_template((String *)&local_c8,(String *)this);
    if (local_138 != local_c8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      local_138 = local_c8;
      local_c8 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  }
  else {
    _get_exe_arch((String *)&local_110);
    cVar4 = String::operator!=((String *)&local_140,(String *)&local_110);
    if (cVar4 != '\0') {
      pcVar1 = *(code **)(*(long *)this + 0x178);
      local_d0 = 0;
      if (local_140 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_140);
      }
      local_d8 = 0;
      if (local_110 != (Object *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_110);
      }
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"");
      local_f0 = 0;
      String::parse_latin1
                ((String *)&local_f0,
                 "Mismatching custom export template executable architecture: found \"%s\", expected \"%s\"."
                );
      TTR((String *)&local_e0,(String *)&local_f0);
      vformat<String,String>
                ((StringName *)&local_c8,(String *)&local_e0,(CowData<char32_t> *)&local_d8,
                 (CowData<char32_t> *)&local_d0);
      local_100 = 0;
      String::parse_latin1((String *)&local_100,"");
      local_108 = (Object *)0x0;
      String::parse_latin1((String *)&local_108,"Prepare Templates");
      TTR((String *)&local_f8,(String *)&local_108);
      (*pcVar1)(this,3,(String *)&local_f8,(StringName *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      iVar8 = 0x14;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      goto LAB_00107a8d;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  }
  cVar4 = String::ends_with((char *)param_3);
  pbVar11 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_c8,"binary_format/embed_pck",false);
  Object::get((StringName *)local_58,pbVar11);
  bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_130 = (Object *)0x0;
  pbVar11 = (bool *)ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_d0,"application/config/name",false);
  Object::get((StringName *)local_58,pbVar11);
  Variant::operator_cast_to_String((Variant *)&local_c8);
  cVar6 = String::operator!=((String *)&local_c8,"");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (cVar6 == '\0') {
    local_c0 = 7;
    local_c8 = (Object *)0x1114be;
    String::parse_latin1((StrRange *)&local_130);
  }
  else {
    pbVar11 = (bool *)ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_d0,"application/config/name",false);
    Object::get((StringName *)local_58,pbVar11);
    Variant::operator_cast_to_String((Variant *)&local_c8);
    if (local_130 != local_c8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      local_130 = local_c8;
      local_c8 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
  }
  local_1e8 = (CowData<char32_t> *)&local_130;
  bVar7 = (bool)OS::get_singleton();
  OS::get_safe_dir_name((String *)&local_c8,bVar7);
  if (local_130 != local_c8) {
    CowData<char32_t>::_unref(local_1e8);
    local_130 = local_c8;
    local_c8 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_128 = (Object *)0x0;
  if (*(long *)param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,param_3);
  }
  EditorPaths::get_temp_dir();
  String::path_join((String *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  DirAccess::create_for_path((String *)&local_118);
  if (cVar4 == '\0') {
LAB_00107816:
    pbVar11 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_c8,"application/export_angle",false);
    Object::get((StringName *)local_58,pbVar11);
    iVar8 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
      StringName::unref();
    }
    if (iVar8 == 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_e0,"rendering/gl_compatibility/driver.windows",false);
      ProjectSettings::get_setting_with_override((StringName *)local_78);
      Variant::operator_cast_to_String((Variant *)&local_d8);
      cVar6 = String::operator==((String *)&local_d8,"opengl3_angle");
      if (cVar6 != '\0') {
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_d0,"rendering/renderer/rendering_method",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        Variant::operator_cast_to_String((Variant *)&local_c8);
        cVar6 = String::operator==((String *)&local_c8,"gl_compatibility");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      if (cVar6 != '\0') goto LAB_00108472;
    }
    else if (iVar8 == 1) {
LAB_00108472:
      local_218 = (String *)&local_e0;
      DirAccess::create(&local_108,2);
      pOVar2 = local_108;
      pcVar1 = *(code **)(*(long *)local_108 + 0x1d0);
      String::get_base_dir();
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,".dll");
      operator+((char *)local_218,(String *)"libEGL.");
      String::operator+((String *)&local_d0,local_218);
      String::path_join((String *)&local_c8);
      cVar6 = (*pcVar1)(pOVar2,(StringName *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pOVar2 = local_108;
      if (cVar6 != '\0') {
        pcVar1 = *(code **)(*(long *)local_108 + 0x1f8);
        uVar9 = EditorExportPlatformPC::get_chmod_flags();
        String::get_base_dir();
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"libEGL.dll");
        String::path_join((String *)&local_c8);
        String::get_base_dir();
        local_f0 = 0;
        String::parse_latin1((String *)&local_f0,".dll");
        operator+((char *)&local_f8,(String *)"libEGL.");
        String::operator+((String *)&local_e8,(String *)&local_f8);
        String::path_join(local_218);
        (*pcVar1)(pOVar2,local_218,(StringName *)&local_c8,uVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      pOVar2 = local_108;
      pcVar1 = *(code **)(*(long *)local_108 + 0x1d0);
      String::get_base_dir();
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,".dll");
      operator+((char *)local_218,(String *)"libGLESv2.");
      String::operator+((String *)&local_d0,local_218);
      String::path_join((String *)&local_c8);
      cVar6 = (*pcVar1)(pOVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pOVar2 = local_108;
      if (cVar6 != '\0') {
        pcVar1 = *(code **)(*(long *)local_108 + 0x1f8);
        uVar9 = EditorExportPlatformPC::get_chmod_flags();
        String::get_base_dir();
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"libGLESv2.dll");
        String::path_join((String *)&local_c8);
        String::get_base_dir();
        local_f0 = 0;
        String::parse_latin1((String *)&local_f0,".dll");
        operator+((char *)&local_f8,(String *)"libGLESv2.");
        String::operator+((String *)&local_e8,(String *)&local_f8);
        String::path_join(local_218);
        (*pcVar1)(pOVar2,local_218,(StringName *)&local_c8,uVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      if (((local_108 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar2 = local_108, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_108), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    pbVar11 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_c8,"application/export_d3d12",false);
    Object::get((StringName *)local_58,pbVar11);
    iVar8 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
      StringName::unref();
    }
    pbVar11 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_c8,"application/d3d12_agility_sdk_multiarch",false);
    Object::get((StringName *)local_58,pbVar11);
    bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
      StringName::unref();
    }
    if (iVar8 == 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_e0,"rendering/rendering_device/driver.windows",false);
      ProjectSettings::get_setting_with_override((StringName *)local_78);
      Variant::operator_cast_to_String((Variant *)&local_d8);
      cVar6 = String::operator==((String *)&local_d8,"d3d12");
      if (cVar6 != '\0') {
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_d0,"rendering/renderer/rendering_method",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        Variant::operator_cast_to_String((Variant *)&local_c8);
        cVar6 = String::operator!=((String *)&local_c8,"gl_compatibility");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      if (cVar6 != '\0') goto LAB_00107d02;
    }
    else if (iVar8 == 1) {
LAB_00107d02:
      local_218 = (String *)&local_e0;
      DirAccess::create(&local_110,2);
      pOVar2 = local_110;
      pcVar1 = *(code **)(*(long *)local_110 + 0x1d0);
      String::get_base_dir();
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,".dll");
      operator+((char *)local_218,(String *)"D3D12Core.");
      String::operator+((String *)&local_d0,local_218);
      String::path_join((String *)&local_c8);
      cVar6 = (*pcVar1)(pOVar2,(StringName *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pOVar2 = local_110;
      if (cVar6 != '\0') {
        if (bVar7) {
          pcVar1 = *(code **)(*(long *)local_110 + 0x1c0);
          String::get_base_dir();
          String::path_join((String *)&local_c8);
          (*pcVar1)(pOVar2,(StringName *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          pOVar2 = local_110;
          pcVar1 = *(code **)(*(long *)local_110 + 0x1f8);
          uVar9 = EditorExportPlatformPC::get_chmod_flags();
          String::get_base_dir();
          String::path_join((String *)&local_d8);
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"D3D12Core.dll");
          String::path_join((String *)&local_c8);
          String::get_base_dir();
          local_f8 = 0;
          String::parse_latin1((String *)&local_f8,".dll");
          operator+((char *)&local_100,(String *)"D3D12Core.");
          String::operator+((String *)&local_f0,(String *)&local_100);
          String::path_join((String *)&local_e8);
          (*pcVar1)(pOVar2,(CowData<char32_t> *)&local_e8,(StringName *)&local_c8,uVar9);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
        }
        else {
          pcVar1 = *(code **)(*(long *)local_110 + 0x1f8);
          uVar9 = EditorExportPlatformPC::get_chmod_flags();
          String::get_base_dir();
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"D3D12Core.dll");
          String::path_join((String *)&local_c8);
          String::get_base_dir();
          local_f0 = 0;
          String::parse_latin1((String *)&local_f0,".dll");
          operator+((char *)&local_f8,(String *)"D3D12Core.");
          String::operator+((String *)&local_e8,(String *)&local_f8);
          String::path_join(local_218);
          (*pcVar1)(pOVar2,local_218,(StringName *)&local_c8,uVar9);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        }
      }
      pOVar2 = local_110;
      pcVar1 = *(code **)(*(long *)local_110 + 0x1d0);
      String::get_base_dir();
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,".dll");
      operator+((char *)local_218,(String *)"d3d12SDKLayers.");
      String::operator+((String *)&local_d0,local_218);
      String::path_join((String *)&local_c8);
      cVar6 = (*pcVar1)(pOVar2,(StringName *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pOVar2 = local_110;
      if (cVar6 != '\0') {
        if (bVar7) {
          pcVar1 = *(code **)(*(long *)local_110 + 0x1c0);
          String::get_base_dir();
          String::path_join((String *)&local_c8);
          (*pcVar1)(pOVar2,(StringName *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          pOVar2 = local_110;
          pcVar1 = *(code **)(*(long *)local_110 + 0x1f8);
          uVar9 = EditorExportPlatformPC::get_chmod_flags();
          String::get_base_dir();
          String::path_join((String *)&local_d8);
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"d3d12SDKLayers.dll");
          String::path_join((String *)&local_c8);
          String::get_base_dir();
          local_f8 = 0;
          String::parse_latin1((String *)&local_f8,".dll");
          operator+((char *)&local_100,(String *)"d3d12SDKLayers.");
          String::operator+((String *)&local_f0,(String *)&local_100);
          String::path_join((String *)&local_e8);
          (*pcVar1)(pOVar2,(CowData<char32_t> *)&local_e8,(StringName *)&local_c8,uVar9);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
        }
        else {
          pcVar1 = *(code **)(*(long *)local_110 + 0x1f8);
          uVar9 = EditorExportPlatformPC::get_chmod_flags();
          String::get_base_dir();
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"d3d12SDKLayers.dll");
          String::path_join((String *)&local_c8);
          String::get_base_dir();
          local_f0 = 0;
          String::parse_latin1((String *)&local_f0,".dll");
          operator+((char *)&local_f8,(String *)"d3d12SDKLayers.");
          String::operator+((String *)&local_e8,(String *)&local_f8);
          String::path_join(local_218);
          (*pcVar1)(pOVar2,local_218,(StringName *)&local_c8,uVar9);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        }
      }
      pOVar2 = local_110;
      pcVar1 = *(code **)(*(long *)local_110 + 0x1d0);
      String::get_base_dir();
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,".dll");
      operator+((char *)local_218,(String *)"WinPixEventRuntime.");
      String::operator+((String *)&local_d0,local_218);
      String::path_join((String *)&local_c8);
      cVar6 = (*pcVar1)(pOVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pOVar2 = local_110;
      if (cVar6 != '\0') {
        pcVar1 = *(code **)(*(long *)local_110 + 0x1f8);
        uVar9 = EditorExportPlatformPC::get_chmod_flags();
        String::get_base_dir();
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"WinPixEventRuntime.dll");
        String::path_join((String *)&local_c8);
        String::get_base_dir();
        local_f0 = 0;
        String::parse_latin1((String *)&local_f0,".dll");
        operator+((char *)&local_f8,(String *)"WinPixEventRuntime.");
        String::operator+((String *)&local_e8,(String *)&local_f8);
        String::path_join(local_218);
        (*pcVar1)(pOVar2,local_218,(StringName *)&local_c8,uVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      if (((local_110 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_110), cVar6 != '\0')) {
        (**(code **)(*(long *)local_110 + 0x140))(local_110);
        Memory::free_static(local_110,false);
      }
    }
    local_1c8 = (CowData<char32_t> *)&local_110;
    local_110 = (Object *)0x0;
    if (local_128 != (Object *)0x0) {
      CowData<char32_t>::_ref(local_1c8,(CowData *)&local_128);
    }
    if (bVar5) {
      local_d0 = 0;
      String::parse_latin1((String *)&local_d0,".tmp");
      String::get_basename();
      String::operator+((String *)&local_c8,(String *)&local_d8);
      if (local_110 != local_c8) {
        CowData<char32_t>::_unref(local_1c8);
        local_110 = local_c8;
        local_c8 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    }
    iVar8 = EditorExportPlatformPC::export_project(this,param_1,param_2,local_1c8,param_5);
    if (iVar8 == 0) {
      pbVar11 = *(bool **)param_1;
      StringName::StringName((StringName *)&local_c8,"codesign/enable",false);
      Object::get((StringName *)local_58,pbVar11);
      bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
        StringName::unref();
      }
      if (bVar7) {
        _code_sign(this,param_1,(String *)local_1c8);
        local_c8 = (Object *)0x0;
        String::parse_latin1((String *)&local_c8,".console.exe");
        String::get_basename();
        String::operator+((String *)&local_d8,(String *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        cVar6 = FileAccess::exists((String *)&local_d8);
        if (cVar6 != '\0') {
          _code_sign(this,param_1,(String *)&local_d8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      if (bVar5) {
        String::get_base_dir();
        DirAccess::create_for_path((String *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        pOVar2 = local_108;
        pcVar1 = *(code **)(*(long *)local_108 + 0x200);
        local_c8 = (Object *)0x0;
        if (local_128 != (Object *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_128);
        }
        local_d0 = 0;
        if (local_110 != (Object *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_1c8);
        }
        iVar8 = (*pcVar1)(pOVar2,(StringName *)&local_d0,(StringName *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if (iVar8 != 0) {
          pcVar1 = *(code **)(*(long *)this + 0x178);
          local_d0 = 0;
          if (local_110 != (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_1c8);
          }
          local_e0 = 0;
          String::parse_latin1((String *)&local_e0,"");
          local_e8 = 0;
          String::parse_latin1((String *)&local_e8,"Failed to rename temporary file \"%s\".");
          TTR((String *)&local_d8,(String *)&local_e8);
          vformat<String>((StringName *)&local_c8,(String *)&local_d8,(StringName *)&local_d0);
          local_f8 = 0;
          String::parse_latin1((String *)&local_f8,"");
          local_100 = 0;
          String::parse_latin1((String *)&local_100,"PCK Embedding");
          TTR((String *)&local_f0,(String *)&local_100);
          (*pcVar1)(this,3,(String *)&local_f0,(StringName *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        }
        if (((local_108 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar2 = local_108, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_108), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      if (cVar4 != '\0') {
        cVar4 = FileAccess::exists((String *)param_3);
        if (cVar4 != '\0') {
          plVar13 = (long *)OS::get_singleton();
          if (*(code **)(*plVar13 + 0x2c0) != OS::move_to_trash) {
            (**(code **)(*plVar13 + 0x2c0))(plVar13,param_3);
          }
        }
        local_e0 = 0;
        zipio_create_io((Ref *)&local_c8);
        String::utf8();
        uVar12 = CharString::get_data();
        local_d8 = zipOpen2(uVar12,0,0,(StringName *)&local_c8);
        lVar3 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar13 = (long *)(local_d0 + -0x10);
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (*plVar13 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        pcVar1 = *(code **)(*(long *)this + 0x150);
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"");
        (*pcVar1)(this,&local_d8,(String *)&local_120,(StringName *)&local_d0,local_1e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        zipClose(local_d8,0);
        pOVar2 = local_118;
        pcVar1 = *(code **)(*(long *)local_118 + 0x1a8);
        local_d0 = 0;
        if (local_120 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_120);
        }
        iVar10 = (*pcVar1)(pOVar2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        if (iVar10 == 0) {
          (**(code **)(*(long *)local_118 + 0x1c8))();
          pOVar2 = local_118;
          pcVar1 = *(code **)(*(long *)local_118 + 0x1a8);
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"..");
          (*pcVar1)(pOVar2,(StringName *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          pOVar2 = local_118;
          pcVar1 = *(code **)(*(long *)local_118 + 0x208);
          local_d0 = 0;
          if (local_130 != (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_1e8);
          }
          (*pcVar1)(pOVar2);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        }
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_e0);
      }
    }
    CowData<char32_t>::_unref(local_1c8);
  }
  else {
    if (local_118 != (Object *)0x0) {
      cVar6 = DirAccess::exists((String *)&local_120);
      pOVar2 = local_118;
      if (cVar6 != '\0') {
        pcVar1 = *(code **)(*(long *)local_118 + 0x1a8);
        local_c8 = (Object *)0x0;
        if (local_120 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_120);
        }
        iVar8 = (*pcVar1)(pOVar2,(StringName *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if (iVar8 == 0) {
          (**(code **)(*(long *)local_118 + 0x1c8))();
        }
      }
      (**(code **)(*(long *)local_118 + 0x1c0))(local_118,(String *)&local_120);
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,".exe");
      String::get_file();
      String::get_basename();
      String::operator+((String *)&local_d0,(String *)&local_e0);
      String::path_join((String *)&local_c8);
      if (local_128 != local_c8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        local_128 = local_c8;
        local_c8 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      goto LAB_00107816;
    }
    pcVar1 = *(code **)(*(long *)this + 0x178);
    local_d0 = 0;
    if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_120);
    }
    local_e0 = 0;
    String::parse_latin1((String *)&local_e0,"");
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8,"Could not create and open the directory: \"%s\"");
    TTR((String *)&local_d8,(String *)&local_e8);
    vformat<String>((StringName *)&local_c8,(String *)&local_d8,(StringName *)&local_d0);
    local_f8 = 0;
    String::parse_latin1((String *)&local_f8,"");
    local_100 = 0;
    String::parse_latin1((String *)&local_100,"Prepare Templates");
    TTR((String *)&local_f0,(String *)&local_100);
    (*pcVar1)(this,3,(String *)&local_f0,(StringName *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    iVar8 = 0x14;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  }
  if (((local_118 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_118), cVar4 != '\0')) {
    (**(code **)(*(long *)local_118 + 0x140))(local_118);
    Memory::free_static(local_118,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref(local_1e8);
LAB_00107a8d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}



/* EditorExportPlatformWindows::EditorExportPlatformWindows() */

void __thiscall
EditorExportPlatformWindows::EditorExportPlatformWindows(EditorExportPlatformWindows *this)

{
  uint uVar1;
  code *pcVar2;
  Image *pIVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  ImageTexture *this_00;
  Object *pOVar7;
  Object *pOVar8;
  void *pvVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  Image *local_98;
  undefined8 local_90;
  Image *local_88;
  undefined8 local_80;
  Object *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorExportPlatform::EditorExportPlatform((EditorExportPlatform *)this);
  bVar11 = EditorNode::singleton == 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined ***)this = &PTR__initialize_classv_00117c88;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  if (bVar11) goto LAB_00109e00;
  local_98 = (Image *)operator_new(0x268,"");
  Resource::Resource((Resource *)local_98);
  ((Resource *)local_98)[0x260] = (Resource)0x0;
  *(code **)local_98 = memset;
  *(undefined4 *)((Resource *)local_98 + 0x240) = 0;
  *(undefined8 *)((Resource *)local_98 + 0x250) = 0;
  *(undefined8 *)((Resource *)local_98 + 600) = 0;
  postinitialize_handler((Object *)local_98);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    local_98 = (Image *)0x0;
  }
  fVar12 = (float)EditorScale::get_scale();
  fVar13 = (float)EditorScale::get_scale();
  fVar13 = roundf(fVar13);
  bVar11 = false;
  if (fVar12 != fVar13) {
    fVar15 = _LC182;
    if (_LC182 <= ABS(fVar13) * _LC182) {
      fVar15 = ABS(fVar13) * _LC182;
    }
    bVar11 = fVar15 <= ABS(fVar13 - fVar12);
  }
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar14 = EditorScale::get_scale();
  local_90 = 0;
  local_88 = (Image *)0x1126a8;
  local_80 = 0xd4;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = (Image *)0x0;
  if (local_98 != (Image *)0x0) {
    local_88 = local_98;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_88 = (Image *)0x0;
    }
  }
  ImageLoaderSVG::create_image_from_string
            (uVar14,(Ref *)&local_88,(StrRange *)&local_90,bVar11,(Ref *)&local_78);
  if ((local_88 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<Image>(local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((void *)local_70._0_8_ != (void *)0x0) {
    pvVar9 = (void *)local_70._0_8_;
    if (local_50._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(local_70._8_8_ + lVar10) != 0) {
            *(int *)(local_70._8_8_ + lVar10) = 0;
            Memory::free_static(*(void **)((long)pvVar9 + lVar10 * 2),false);
            *(undefined8 *)(local_70._0_8_ + lVar10 * 2) = 0;
            pvVar9 = (void *)local_70._0_8_;
          }
          lVar10 = lVar10 + 4;
        } while ((ulong)uVar1 << 2 != lVar10);
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00109b27;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static((void *)local_70._8_8_,false);
  }
LAB_00109b27:
  ImageTexture::create_from_image((Ref *)&local_88);
  local_78 = (Object *)0x0;
  if (((local_88 != (Image *)0x0) &&
      (pOVar6 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&Texture2D::typeinfo,0),
      pOVar6 != (Object *)0x0)) &&
     (local_78 = pOVar6, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_78 = (Object *)0x0;
  }
  EditorExportPlatformPC::set_logo((Ref *)this);
  if (((local_78 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar6 = local_78, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_78), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))();
    Memory::free_static(pOVar6,false);
  }
  if (((local_88 != (Image *)0x0) &&
      (cVar4 = RefCounted::unreference(), pIVar3 = local_88, cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_88), cVar4 != '\0')) {
    (**(code **)(*(long *)pIVar3 + 0x140))();
    Memory::free_static(pIVar3,false);
  }
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar14 = EditorScale::get_scale();
  local_90 = 0;
  local_88 = (Image *)0x112780;
  local_80 = 0xf2;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = (Image *)0x0;
  if (local_98 != (Image *)0x0) {
    local_88 = local_98;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_88 = (Image *)0x0;
    }
  }
  ImageLoaderSVG::create_image_from_string
            (uVar14,(Ref *)&local_88,(StrRange *)&local_90,bVar11,(Ref *)&local_78);
  if ((local_88 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<Image>(local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((void *)local_70._0_8_ != (void *)0x0) {
    pvVar9 = (void *)local_70._0_8_;
    if (local_50._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(local_70._8_8_ + lVar10) != 0) {
            *(int *)(local_70._8_8_ + lVar10) = 0;
            Memory::free_static(*(void **)((long)pvVar9 + lVar10 * 2),false);
            *(undefined8 *)(local_70._0_8_ + lVar10 * 2) = 0;
            pvVar9 = (void *)local_70._0_8_;
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 != (ulong)uVar1 << 2);
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00109cef;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static((void *)local_70._8_8_,false);
  }
LAB_00109cef:
  ImageTexture::create_from_image((Ref *)&local_78);
  pOVar6 = *(Object **)(this + 0x1b0);
  pOVar8 = pOVar6;
  if (local_78 == pOVar6) {
LAB_00109d49:
    if (((pOVar8 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar6 = local_78, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_78), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  else {
    *(Object **)(this + 0x1b0) = local_78;
    if (local_78 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x1b0) = 0;
      }
      pOVar8 = local_78;
      if (pOVar6 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        goto joined_r0x00109d3e;
      }
      goto LAB_00109d49;
    }
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
joined_r0x00109d3e:
      pOVar8 = local_78;
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), pOVar8 = local_78, cVar4 != '\0'))
      {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        pOVar8 = local_78;
      }
      goto LAB_00109d49;
    }
  }
  pOVar6 = *(Object **)(EditorNode::singleton + 0x838);
  if ((pOVar6 == (Object *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    this_00 = (ImageTexture *)operator_new(0x318,"");
    ImageTexture::ImageTexture(this_00);
    postinitialize_handler((Object *)this_00);
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      pOVar6 = *(Object **)(this + 0x1b8);
      if (pOVar6 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1b8) = 0;
        goto LAB_00109dd0;
      }
    }
    else {
      pOVar6 = *(Object **)(this + 0x1b8);
      pOVar8 = pOVar6;
      if (this_00 != (ImageTexture *)pOVar6) {
        *(ImageTexture **)(this + 0x1b8) = this_00;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0x1b8) = 0;
        }
        pOVar8 = (Object *)this_00;
        if (((pOVar6 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
  }
  else {
    pcVar2 = *(code **)(*(long *)pOVar6 + 0x1c8);
    lVar10 = EditorStringNames::singleton + 0x10;
    if ((EditorExportPlatformWindows()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&EditorExportPlatformWindows()::{lambda()#1}::operator()()::
                                     sname), iVar5 != 0)) {
      _scs_create((char *)&EditorExportPlatformWindows()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorExportPlatformWindows()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorExportPlatformWindows()::{lambda()#1}::operator()()::sname);
    }
    (*pcVar2)((Ref *)&local_78,pOVar6,
              &EditorExportPlatformWindows()::{lambda()#1}::operator()()::sname,lVar10);
    if (local_78 == (Object *)0x0) {
      pOVar8 = *(Object **)(this + 0x1b8);
      if (pOVar8 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1b8) = 0;
        goto LAB_0010a121;
      }
    }
    else {
      pOVar7 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&ImageTexture::typeinfo,0);
      pOVar8 = *(Object **)(this + 0x1b8);
      if (pOVar8 != pOVar7) {
        *(Object **)(this + 0x1b8) = pOVar7;
        if (pOVar7 == (Object *)0x0) {
          if (pOVar8 != (Object *)0x0) goto LAB_0010a121;
        }
        else {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *(undefined8 *)(this + 0x1b8) = 0;
          }
          if (pOVar8 != (Object *)0x0) {
LAB_0010a121:
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
              Memory::free_static(pOVar8,false);
            }
          }
          if (local_78 == (Object *)0x0) goto LAB_00109dd0;
        }
      }
      cVar4 = RefCounted::unreference();
      pOVar8 = local_78;
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_78), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
LAB_00109dd0:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  if ((local_98 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<Image>(local_98);
  }
LAB_00109e00:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset> const&, String const&, String
   const&) */

ulong __thiscall
EditorExportPlatformWindows::_process_icon
          (EditorExportPlatformWindows *this,Ref *param_1,String *param_2,String *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool *pbVar3;
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
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  Ref *pRVar88;
  long lVar89;
  char cVar90;
  String SVar91;
  String SVar92;
  undefined1 uVar93;
  short sVar94;
  short sVar95;
  undefined2 uVar96;
  undefined2 uVar97;
  uint uVar98;
  undefined4 uVar99;
  uint uVar100;
  int iVar101;
  String *pSVar102;
  Image *pIVar103;
  undefined8 *puVar104;
  ulong uVar105;
  ulong uVar106;
  uint uVar107;
  long lVar108;
  ulong uVar109;
  String *pSVar110;
  String *extraout_RDX;
  undefined8 *puVar111;
  long lVar112;
  uint uVar113;
  void *pvVar114;
  uint uVar115;
  String *pSVar116;
  Ref *pRVar117;
  CowData<unsigned_char> *this_00;
  byte *pbVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  Object *pOVar122;
  byte bVar123;
  long in_FS_OFFSET;
  byte *local_140;
  byte *local_138;
  byte *local_120;
  short local_100;
  uint local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  String local_a8 [8];
  String local_a0;
  undefined7 uStack_9f;
  Object *local_98;
  long local_90;
  HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
  local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_60 = 2;
  String::get_extension();
  cVar90 = String::operator==((String *)&local_98,"ico");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (cVar90 != '\0') {
    FileAccess::open((String *)&local_98,(int)param_2,(Error *)0x1);
    uVar109 = (ulong)local_cc;
    if (local_cc == 0) {
      (**(code **)(*(long *)local_98 + 0x1e8))();
      sVar94 = (**(code **)(*(long *)local_98 + 0x1e8))();
      sVar95 = (**(code **)(*(long *)local_98 + 0x1e8))();
      if (sVar94 == 1) {
        local_138 = (byte *)0x0;
        if (sVar95 != 0) {
          local_138._0_2_ = 0;
          pvVar114 = (void *)0x0;
          sVar94 = (short)local_138;
          do {
            local_138._0_2_ = sVar94;
            SVar91 = (String)(**(code **)(*(long *)local_98 + 0x1e0))();
            SVar92 = (String)(**(code **)(*(long *)local_98 + 0x1e0))();
            uVar93 = (**(code **)(*(long *)local_98 + 0x1e0))();
            (**(code **)(*(long *)local_98 + 0x1e0))();
            uVar96 = (**(code **)(*(long *)local_98 + 0x1e8))();
            uVar97 = (**(code **)(*(long *)local_98 + 0x1e8))();
            uVar98 = (**(code **)(*(long *)local_98 + 0x1f0))();
            uVar99 = (**(code **)(*(long *)local_98 + 0x1f0))();
            if (SVar91 == SVar92) {
              (**(code **)(*(long *)local_98 + 0x1c8))();
              if ((pvVar114 != (void *)0x0) && (local_60._4_4_ != 0)) {
                uVar106 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4)
                                  );
                uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
                uVar100 = ((uint)(byte)SVar91 * -0x7a143595 ^
                          (uint)(byte)SVar91 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
                uVar121 = uVar100 ^ uVar100 >> 0x10;
                if (uVar100 == uVar100 >> 0x10) {
                  uVar121 = 1;
                  uVar105 = uVar109;
                }
                else {
                  uVar105 = uVar121 * uVar109;
                }
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar106;
                auVar46._8_8_ = 0;
                auVar46._0_8_ = uVar105;
                lVar108 = SUB168(auVar4 * auVar46,8);
                uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                uVar113 = SUB164(auVar4 * auVar46,8);
                if (uVar100 != 0) {
                  uVar115 = 0;
                  do {
                    if ((uVar121 == uVar100) &&
                       (SVar91 == *(String *)(*(long *)((long)pvVar114 + lVar108 * 8) + 0x10))) {
                      *(undefined1 *)(*(long *)((long)pvVar114 + (ulong)uVar113 * 8) + 0x28) =
                           uVar93;
                      goto LAB_0010a580;
                    }
                    uVar115 = uVar115 + 1;
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = (uVar113 + 1) * uVar109;
                    auVar47._8_8_ = 0;
                    auVar47._0_8_ = uVar106;
                    lVar108 = SUB168(auVar5 * auVar47,8);
                    uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                    uVar113 = SUB164(auVar5 * auVar47,8);
                  } while ((uVar100 != 0) &&
                          (auVar6._8_8_ = 0, auVar6._0_8_ = uVar100 * uVar109, auVar48._8_8_ = 0,
                          auVar48._0_8_ = uVar106, auVar7._8_8_ = 0,
                          auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                                    (local_60 & 0xffffffff) * 4) + uVar113) -
                                         SUB164(auVar6 * auVar48,8)) * uVar109, auVar49._8_8_ = 0,
                          auVar49._0_8_ = uVar106, uVar115 <= SUB164(auVar7 * auVar49,8)));
                }
              }
              local_a0 = SVar91;
              lVar108 = HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
                        ::operator[](local_88,(uchar *)&local_a0);
              *(undefined1 *)(lVar108 + 0x10) = uVar93;
              pvVar114 = (void *)local_80._0_8_;
              if ((void *)local_80._0_8_ != (void *)0x0) {
LAB_0010a580:
                if (local_60._4_4_ != 0) {
                  uVar106 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                (local_60 & 0xffffffff) * 4));
                  uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
                  uVar100 = ((uint)(byte)SVar91 * -0x7a143595 ^
                            (uint)(byte)SVar91 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
                  uVar121 = uVar100 ^ uVar100 >> 0x10;
                  if (uVar100 == uVar100 >> 0x10) {
                    uVar121 = 1;
                    uVar105 = uVar109;
                  }
                  else {
                    uVar105 = uVar121 * uVar109;
                  }
                  uVar115 = 0;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar106;
                  auVar50._8_8_ = 0;
                  auVar50._0_8_ = uVar105;
                  lVar108 = SUB168(auVar8 * auVar50,8);
                  uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                  uVar113 = SUB164(auVar8 * auVar50,8);
                  if (uVar100 != 0) {
                    do {
                      if ((uVar100 == uVar121) &&
                         (SVar91 == *(String *)(*(long *)((long)pvVar114 + lVar108 * 8) + 0x10))) {
                        *(undefined2 *)(*(long *)((long)pvVar114 + (ulong)uVar113 * 8) + 0x2a) =
                             uVar96;
                        goto LAB_0010a676;
                      }
                      uVar115 = uVar115 + 1;
                      auVar9._8_8_ = 0;
                      auVar9._0_8_ = (uVar113 + 1) * uVar109;
                      auVar51._8_8_ = 0;
                      auVar51._0_8_ = uVar106;
                      lVar108 = SUB168(auVar9 * auVar51,8);
                      uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                      uVar113 = SUB164(auVar9 * auVar51,8);
                    } while ((uVar100 != 0) &&
                            (auVar10._8_8_ = 0, auVar10._0_8_ = uVar100 * uVar109, auVar52._8_8_ = 0
                            , auVar52._0_8_ = uVar106, auVar11._8_8_ = 0,
                            auVar11._0_8_ =
                                 ((*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) +
                                  uVar113) - SUB164(auVar10 * auVar52,8)) * uVar109,
                            auVar53._8_8_ = 0, auVar53._0_8_ = uVar106,
                            uVar115 <= SUB164(auVar11 * auVar53,8)));
                  }
                }
              }
              local_a0 = SVar91;
              lVar108 = HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
                        ::operator[](local_88,(uchar *)&local_a0);
              *(undefined2 *)(lVar108 + 0x12) = uVar96;
              pvVar114 = (void *)local_80._0_8_;
              if ((void *)local_80._0_8_ != (void *)0x0) {
LAB_0010a676:
                if (local_60._4_4_ != 0) {
                  uVar106 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                (local_60 & 0xffffffff) * 4));
                  uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
                  uVar100 = ((uint)(byte)SVar91 * -0x7a143595 ^
                            (uint)(byte)SVar91 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
                  uVar121 = uVar100 ^ uVar100 >> 0x10;
                  if (uVar100 == uVar100 >> 0x10) {
                    uVar121 = 1;
                    uVar105 = uVar109;
                  }
                  else {
                    uVar105 = uVar121 * uVar109;
                  }
                  uVar115 = 0;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = uVar106;
                  auVar54._8_8_ = 0;
                  auVar54._0_8_ = uVar105;
                  lVar108 = SUB168(auVar12 * auVar54,8);
                  uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                  uVar113 = SUB164(auVar12 * auVar54,8);
                  if (uVar100 != 0) {
                    do {
                      if ((uVar100 == uVar121) &&
                         (SVar91 == *(String *)(*(long *)((long)pvVar114 + lVar108 * 8) + 0x10))) {
                        *(undefined2 *)(*(long *)((long)pvVar114 + (ulong)uVar113 * 8) + 0x2c) =
                             uVar97;
                        goto LAB_0010a76e;
                      }
                      uVar115 = uVar115 + 1;
                      auVar13._8_8_ = 0;
                      auVar13._0_8_ = (uVar113 + 1) * uVar109;
                      auVar55._8_8_ = 0;
                      auVar55._0_8_ = uVar106;
                      lVar108 = SUB168(auVar13 * auVar55,8);
                      uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                      uVar113 = SUB164(auVar13 * auVar55,8);
                    } while ((uVar100 != 0) &&
                            (auVar14._8_8_ = 0, auVar14._0_8_ = uVar100 * uVar109, auVar56._8_8_ = 0
                            , auVar56._0_8_ = uVar106, auVar15._8_8_ = 0,
                            auVar15._0_8_ =
                                 ((*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) +
                                  uVar113) - SUB164(auVar14 * auVar56,8)) * uVar109,
                            auVar57._8_8_ = 0, auVar57._0_8_ = uVar106,
                            uVar115 <= SUB164(auVar15 * auVar57,8)));
                  }
                }
              }
              local_a0 = SVar91;
              lVar108 = HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
                        ::operator[](local_88,(uchar *)&local_a0);
              *(undefined2 *)(lVar108 + 0x14) = uVar97;
              pvVar114 = (void *)local_80._0_8_;
              if ((void *)local_80._0_8_ != (void *)0x0) {
LAB_0010a76e:
                if (local_60._4_4_ != 0) {
                  uVar106 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                (local_60 & 0xffffffff) * 4));
                  uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
                  uVar100 = ((uint)(byte)SVar91 * -0x7a143595 ^
                            (uint)(byte)SVar91 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
                  uVar121 = uVar100 ^ uVar100 >> 0x10;
                  if (uVar100 == uVar100 >> 0x10) {
                    uVar121 = 1;
                    uVar105 = uVar109;
                  }
                  else {
                    uVar105 = uVar121 * uVar109;
                  }
                  uVar115 = 0;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar106;
                  auVar58._8_8_ = 0;
                  auVar58._0_8_ = uVar105;
                  lVar108 = SUB168(auVar16 * auVar58,8);
                  uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                  uVar113 = SUB164(auVar16 * auVar58,8);
                  if (uVar100 != 0) {
                    do {
                      if ((uVar100 == uVar121) &&
                         (SVar91 == *(String *)(*(long *)((long)pvVar114 + lVar108 * 8) + 0x10))) {
                        lVar108 = *(long *)((long)pvVar114 + (ulong)uVar113 * 8) + 0x18;
                        local_a0 = SVar91;
                        goto LAB_0010a85a;
                      }
                      uVar115 = uVar115 + 1;
                      auVar17._8_8_ = 0;
                      auVar17._0_8_ = (uVar113 + 1) * uVar109;
                      auVar59._8_8_ = 0;
                      auVar59._0_8_ = uVar106;
                      lVar108 = SUB168(auVar17 * auVar59,8);
                      uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                      uVar113 = SUB164(auVar17 * auVar59,8);
                    } while ((uVar100 != 0) &&
                            (auVar18._8_8_ = 0, auVar18._0_8_ = uVar100 * uVar109, auVar60._8_8_ = 0
                            , auVar60._0_8_ = uVar106, auVar19._8_8_ = 0,
                            auVar19._0_8_ =
                                 ((*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) +
                                  uVar113) - SUB164(auVar18 * auVar60,8)) * uVar109,
                            auVar61._8_8_ = 0, auVar61._0_8_ = uVar106,
                            uVar115 <= SUB164(auVar19 * auVar61,8)));
                  }
                }
              }
              local_a0 = SVar91;
              lVar108 = HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
                        ::operator[](local_88,(uchar *)&local_a0);
LAB_0010a85a:
              pRVar88 = (Ref *)(ulong)uVar98;
              this_00 = (CowData<unsigned_char> *)(lVar108 + 8);
              lVar112 = *(long *)(lVar108 + 8);
              if (lVar112 == 0) {
                if (uVar98 != 0) {
                  CowData<unsigned_char>::_copy_on_write(this_00);
LAB_0010bc91:
                  uVar109 = (ulong)(pRVar88 + -1) >> 1 | (ulong)(pRVar88 + -1);
                  uVar109 = uVar109 | uVar109 >> 2;
                  uVar109 = uVar109 >> 4 | uVar109;
                  uVar109 = uVar109 | uVar109 >> 8;
                  puVar104 = (undefined8 *)
                             Memory::alloc_static((uVar109 >> 0x10 | uVar109) + 0x11,false);
                  if (puVar104 == (undefined8 *)0x0) {
                    _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                     "Parameter \"mem_new\" is null.",0,0);
                  }
                  else {
                    puVar111 = puVar104 + 2;
                    *puVar104 = 1;
                    puVar104[1] = 0;
                    *(undefined8 **)(lVar108 + 8) = puVar111;
LAB_0010b6e2:
                    puVar111[-1] = pRVar88;
                  }
                }
              }
              else {
                pRVar117 = *(Ref **)(lVar112 + -8);
                if (pRVar88 != pRVar117) {
                  if (uVar98 == 0) {
                    LOCK();
                    plVar1 = (long *)(lVar112 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      lVar112 = *(long *)(lVar108 + 8);
                      *(undefined8 *)(lVar108 + 8) = 0;
                      Memory::free_static((void *)(lVar112 + -0x10),false);
                    }
                    else {
                      *(undefined8 *)(lVar108 + 8) = 0;
                    }
                  }
                  else {
                    CowData<unsigned_char>::_copy_on_write(this_00);
                    uVar109 = (ulong)(pRVar88 + -1) >> 1 | (ulong)(pRVar88 + -1);
                    uVar109 = uVar109 >> 2 | uVar109;
                    uVar109 = uVar109 >> 4 | uVar109;
                    uVar109 = uVar109 >> 8 | uVar109;
                    pSVar110 = (String *)(uVar109 >> 0x10 | uVar109);
                    if (pRVar117 == (Ref *)0x0) goto LAB_0010bc91;
                    pSVar116 = pSVar110 + 1;
                    uVar109 = (ulong)(pRVar117 + -1) | (ulong)(pRVar117 + -1) >> 1;
                    uVar109 = uVar109 | uVar109 >> 2;
                    uVar109 = uVar109 | uVar109 >> 4;
                    uVar109 = uVar109 | uVar109 >> 8;
                    uVar109 = uVar109 | uVar109 >> 0x10;
                    pSVar102 = (String *)(uVar109 | uVar109 >> 0x20);
                    if ((long)pRVar117 < (long)pRVar88) {
                      if ((pSVar102 == pSVar110) ||
                         (iVar101 = CowData<unsigned_char>::_realloc(this_00,(long)pSVar116),
                         iVar101 == 0)) {
                        puVar111 = *(undefined8 **)(lVar108 + 8);
                        if (puVar111 == (undefined8 *)0x0) {
                          uVar109 = FUN_00113544();
                          return uVar109;
                        }
                        goto LAB_0010b6e2;
                      }
                    }
                    else {
                      pRVar117 = pRVar88;
                      if ((pSVar102 == pSVar110) ||
                         (iVar101 = CowData<unsigned_char>::_realloc(this_00,(long)pSVar116),
                         pSVar110 = extraout_RDX, pRVar117 = (Ref *)this_00, iVar101 == 0)) {
                        if (*(long *)(lVar108 + 8) == 0) {
                          uVar109 = _process_icon(pRVar117,pSVar116,pSVar110);
                          return uVar109;
                        }
                        *(Ref **)(*(long *)(lVar108 + 8) + -8) = pRVar88;
                      }
                    }
                  }
                }
              }
              (**(code **)(*(long *)local_98 + 0x1b8))(local_98,uVar99);
              pOVar122 = local_98;
              pcVar2 = *(code **)(*(long *)local_98 + 0x220);
              if (((void *)local_80._0_8_ != (void *)0x0) && (local_60._4_4_ != 0)) {
                uVar106 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4)
                                  );
                uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
                uVar98 = ((uint)(byte)SVar91 * -0x7a143595 ^ (uint)(byte)SVar91 * -0x7a143595 >> 0xd
                         ) * -0x3d4d51cb;
                uVar100 = uVar98 ^ uVar98 >> 0x10;
                if (uVar98 == uVar98 >> 0x10) {
                  uVar100 = 1;
                  uVar105 = uVar109;
                }
                else {
                  uVar105 = uVar100 * uVar109;
                }
                auVar20._8_8_ = 0;
                auVar20._0_8_ = uVar106;
                auVar62._8_8_ = 0;
                auVar62._0_8_ = uVar105;
                lVar108 = SUB168(auVar20 * auVar62,8);
                uVar98 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                uVar121 = SUB164(auVar20 * auVar62,8);
                if (uVar98 != 0) {
                  uVar113 = 0;
                  do {
                    if ((uVar98 == uVar100) &&
                       (SVar91 == *(String *)(*(long *)(local_80._0_8_ + lVar108 * 8) + 0x10))) {
                      lVar108 = *(long *)(local_80._0_8_ + (ulong)uVar121 * 8) + 0x18;
                      pvVar114 = (void *)local_80._0_8_;
                      local_a0 = SVar91;
                      goto LAB_0010aa71;
                    }
                    uVar113 = uVar113 + 1;
                    auVar21._8_8_ = 0;
                    auVar21._0_8_ = (uVar121 + 1) * uVar109;
                    auVar63._8_8_ = 0;
                    auVar63._0_8_ = uVar106;
                    lVar108 = SUB168(auVar21 * auVar63,8);
                    uVar98 = *(uint *)(local_80._8_8_ + lVar108 * 4);
                    uVar121 = SUB164(auVar21 * auVar63,8);
                  } while ((uVar98 != 0) &&
                          (auVar22._8_8_ = 0, auVar22._0_8_ = uVar98 * uVar109, auVar64._8_8_ = 0,
                          auVar64._0_8_ = uVar106, auVar23._8_8_ = 0,
                          auVar23._0_8_ =
                               ((*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) +
                                uVar121) - SUB164(auVar22 * auVar64,8)) * uVar109, auVar65._8_8_ = 0
                          , auVar65._0_8_ = uVar106, uVar113 <= SUB164(auVar23 * auVar65,8)));
                }
              }
              local_a0 = SVar91;
              lVar108 = HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
                        ::operator[](local_88,(uchar *)&local_a0);
              pvVar114 = (void *)local_80._0_8_;
LAB_0010aa71:
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(lVar108 + 8));
              (*pcVar2)(pOVar122,*(undefined8 *)(lVar108 + 8),pRVar88);
              (**(code **)(*(long *)local_98 + 0x1b8))();
            }
            sVar94 = (short)local_138 + 1;
            local_138 = (byte *)pvVar114;
          } while (sVar95 != sVar94);
        }
        if (((local_98 != (Object *)0x0) &&
            (cVar90 = RefCounted::unreference(), pOVar122 = local_98, cVar90 != '\0')) &&
           (cVar90 = predelete_handler(local_98), cVar90 != '\0')) {
          (**(code **)(*(long *)pOVar122 + 0x140))(pOVar122);
          Memory::free_static(pOVar122,false);
        }
        goto LAB_0010aaf2;
      }
      uVar109 = 0x13;
      _err_print_error("_process_icon","platform/windows/export/export_plugin.cpp",0x45,
                       "Condition \"icon_type != 1\" is true. Returning: ERR_CANT_OPEN",0,0);
    }
    if (((local_98 != (Object *)0x0) &&
        (cVar90 = RefCounted::unreference(), pOVar122 = local_98, cVar90 != '\0')) &&
       (cVar90 = predelete_handler(local_98), cVar90 != '\0')) {
      (**(code **)(*(long *)pOVar122 + 0x140))(pOVar122);
      Memory::free_static(pOVar122,false);
    }
    goto LAB_0010ae90;
  }
  EditorExportPlatform::_load_icon_or_splash_image(&local_a0,this);
  if (((local_cc == 0) && (CONCAT71(uStack_9f,local_a0) != 0)) &&
     (cVar90 = Image::is_empty(), cVar90 == '\0')) {
    local_138 = &_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::icon_size
    ;
    do {
      bVar123 = *local_138;
      uVar98 = (uint)bVar123;
      if (bVar123 == 0) {
        uVar98 = 0x100;
      }
      (**(code **)(*(long *)CONCAT71(uStack_9f,local_a0) + 0x198))
                ((String *)&local_98,(long *)CONCAT71(uStack_9f,local_a0),0);
      if (local_98 == (Object *)0x0) {
LAB_0010b0f0:
        _err_print_error("_process_icon","platform/windows/export/export_plugin.cpp",0x67,
                         "Condition \"res_image.is_null() || res_image->is_empty()\" is true. Returning: ERR_CANT_OPEN"
                         ,0,0);
LAB_0010b115:
        local_138 = (byte *)local_80._0_8_;
        if (CONCAT71(uStack_9f,local_a0) == 0) goto LAB_0010b148;
        goto LAB_0010b12f;
      }
      pIVar103 = (Image *)__dynamic_cast(local_98,&Object::typeinfo,&Image::typeinfo,0);
      if (pIVar103 == (Image *)0x0) {
        cVar90 = RefCounted::unreference();
        pOVar122 = local_98;
        if ((cVar90 != '\0') && (cVar90 = predelete_handler(local_98), cVar90 != '\0'))
        goto LAB_0010b0c9;
        goto LAB_0010b0f0;
      }
      cVar90 = RefCounted::reference();
      if (cVar90 == '\0') {
        if (((local_98 == (Object *)0x0) ||
            (cVar90 = RefCounted::unreference(), pOVar122 = local_98, cVar90 == '\0')) ||
           (cVar90 = predelete_handler(local_98), cVar90 == '\0')) goto LAB_0010b0f0;
        pIVar103 = (Image *)0x0;
LAB_0010b0c9:
        (**(code **)(*(long *)pOVar122 + 0x140))(pOVar122);
        Memory::free_static(pOVar122,false);
        if (pIVar103 == (Image *)0x0) goto LAB_0010b0f0;
      }
      else if (((local_98 != (Object *)0x0) &&
               (cVar90 = RefCounted::unreference(), pOVar122 = local_98, cVar90 != '\0')) &&
              (cVar90 = predelete_handler(local_98), cVar90 != '\0')) goto LAB_0010b0c9;
      cVar90 = Image::is_empty();
      if (cVar90 != '\0') {
        _err_print_error("_process_icon","platform/windows/export/export_plugin.cpp",0x67,
                         "Condition \"res_image.is_null() || res_image->is_empty()\" is true. Returning: ERR_CANT_OPEN"
                         ,0,0);
        cVar90 = RefCounted::unreference();
        if (cVar90 != '\0') {
          memdelete<Image>(pIVar103);
        }
        goto LAB_0010b115;
      }
      pbVar3 = *(bool **)param_1;
      StringName::StringName((StringName *)&local_98,"application/icon_interpolation",false);
      Object::get((StringName *)local_58,pbVar3);
      iVar101 = Variant::operator_cast_to_int((Variant *)local_58);
      Image::resize(pIVar103,uVar98,uVar98,iVar101);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
        StringName::unref();
      }
      Image::save_png_to_buffer();
      if ((local_80._0_8_ != 0) && (local_60._4_4_ != 0)) {
        uVar106 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4));
        uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
        uVar98 = ((uint)bVar123 * -0x7a143595 ^ (uint)bVar123 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
        uVar100 = uVar98 ^ uVar98 >> 0x10;
        if (uVar98 == uVar98 >> 0x10) {
          uVar100 = 1;
          uVar105 = uVar109;
        }
        else {
          uVar105 = uVar100 * uVar109;
        }
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar106;
        auVar66._8_8_ = 0;
        auVar66._0_8_ = uVar105;
        lVar108 = SUB168(auVar24 * auVar66,8);
        uVar98 = *(uint *)(local_80._8_8_ + lVar108 * 4);
        uVar121 = SUB164(auVar24 * auVar66,8);
        if (uVar98 != 0) {
          uVar113 = 0;
          do {
            if ((uVar98 == uVar100) &&
               (bVar123 == *(byte *)(*(long *)(local_80._0_8_ + lVar108 * 8) + 0x10))) {
              lVar108 = *(long *)(local_80._0_8_ + (ulong)uVar121 * 8) + 0x18;
              goto LAB_0010b401;
            }
            uVar113 = uVar113 + 1;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = (uVar121 + 1) * uVar109;
            auVar67._8_8_ = 0;
            auVar67._0_8_ = uVar106;
            lVar108 = SUB168(auVar25 * auVar67,8);
            uVar98 = *(uint *)(local_80._8_8_ + lVar108 * 4);
            uVar121 = SUB164(auVar25 * auVar67,8);
          } while ((uVar98 != 0) &&
                  (auVar26._8_8_ = 0, auVar26._0_8_ = uVar98 * uVar109, auVar68._8_8_ = 0,
                  auVar68._0_8_ = uVar106, auVar27._8_8_ = 0,
                  auVar27._0_8_ =
                       ((*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) + uVar121)
                       - SUB164(auVar26 * auVar68,8)) * uVar109, auVar69._8_8_ = 0,
                  auVar69._0_8_ = uVar106, uVar113 <= SUB164(auVar27 * auVar69,8)));
        }
      }
      lVar108 = HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
                ::operator[](local_88,local_138);
LAB_0010b401:
      lVar89 = local_90;
      lVar112 = *(long *)(lVar108 + 8);
      if (lVar112 == local_90) {
        if (lVar112 == 0) goto LAB_0010b43b;
        LOCK();
        plVar1 = (long *)(lVar112 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_0010b43b;
        local_90 = 0;
        Memory::free_static((void *)(lVar89 + -0x10),false);
        cVar90 = RefCounted::unreference();
      }
      else {
        if (lVar112 != 0) {
          LOCK();
          plVar1 = (long *)(lVar112 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar112 = *(long *)(lVar108 + 8);
            *(undefined8 *)(lVar108 + 8) = 0;
            Memory::free_static((void *)(lVar112 + -0x10),false);
          }
          else {
            *(undefined8 *)(lVar108 + 8) = 0;
          }
        }
        *(long *)(lVar108 + 8) = local_90;
LAB_0010b43b:
        cVar90 = RefCounted::unreference();
      }
      if (cVar90 != '\0') {
        memdelete<Image>(pIVar103);
      }
      local_138 = local_138 + 1;
    } while (local_138 != (byte *)0x117f66);
    if ((CONCAT71(uStack_9f,local_a0) != 0) && (cVar90 = RefCounted::unreference(), cVar90 != '\0'))
    {
      memdelete<Image>((Image *)CONCAT71(uStack_9f,local_a0));
    }
    local_138 = (byte *)local_80._0_8_;
LAB_0010aaf2:
    local_120 = &_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::icon_size
    ;
    pbVar118 = &_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::icon_size;
    local_100 = 0;
    do {
      bVar123 = *pbVar118;
      if (local_138 != (byte *)0x0) {
        while (local_60._4_4_ != 0) {
          uVar106 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4));
          uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
          uVar98 = ((uint)bVar123 * -0x7a143595 ^ (uint)bVar123 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
          uVar100 = uVar98 ^ uVar98 >> 0x10;
          if (uVar98 == uVar98 >> 0x10) {
            uVar100 = 1;
            uVar105 = uVar109;
          }
          else {
            uVar105 = uVar100 * uVar109;
          }
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar106;
          auVar70._8_8_ = 0;
          auVar70._0_8_ = uVar105;
          lVar108 = SUB168(auVar28 * auVar70,8);
          uVar98 = *(uint *)(local_80._8_8_ + lVar108 * 4);
          iVar101 = SUB164(auVar28 * auVar70,8);
          if (uVar98 == 0) break;
          uVar121 = 0;
          while ((uVar98 != uVar100 ||
                 (*(byte *)(*(long *)((long)local_138 + lVar108 * 8) + 0x10) != bVar123))) {
            uVar121 = uVar121 + 1;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = (iVar101 + 1) * uVar109;
            auVar71._8_8_ = 0;
            auVar71._0_8_ = uVar106;
            lVar108 = SUB168(auVar29 * auVar71,8);
            uVar98 = *(uint *)(local_80._8_8_ + lVar108 * 4);
            iVar101 = SUB164(auVar29 * auVar71,8);
            if ((uVar98 == 0) ||
               (auVar30._8_8_ = 0, auVar30._0_8_ = uVar98 * uVar109, auVar72._8_8_ = 0,
               auVar72._0_8_ = uVar106, auVar31._8_8_ = 0,
               auVar31._0_8_ =
                    ((*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) + iVar101) -
                    SUB164(auVar30 * auVar72,8)) * uVar109, auVar73._8_8_ = 0,
               auVar73._0_8_ = uVar106, SUB164(auVar31 * auVar73,8) < uVar121)) goto LAB_0010ab26;
          }
          local_100 = local_100 + 1;
          pbVar118 = pbVar118 + 1;
          if (pbVar118 == (byte *)0x117f66) goto LAB_0010acf3;
          bVar123 = *pbVar118;
        }
      }
LAB_0010ab26:
      local_b0 = 0;
      pcVar2 = *(code **)(*(long *)this + 0x178);
      local_98 = (Object *)&_LC5;
      local_90 = 0;
      String::parse_latin1((StrRange *)&local_b0);
      local_b8 = 0;
      local_98 = (Object *)0x1115b6;
      local_90 = 0x1a;
      String::parse_latin1((StrRange *)&local_b8);
      TTR(local_a8,(String *)&local_b8);
      vformat<int>(&local_a0,(int)local_a8);
      local_98 = (Object *)&_LC5;
      local_c0 = 0;
      local_90 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_98 = (Object *)0x1115d1;
      local_c8 = 0;
      local_90 = 0x16;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String *)&local_98,(String *)&local_c8);
      (*pcVar2)(this,2,(String *)&local_98,&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      pbVar118 = pbVar118 + 1;
    } while (pbVar118 != (byte *)0x117f66);
LAB_0010acf3:
    if (local_100 == 0) {
      _err_print_error("_process_icon","platform/windows/export/export_plugin.cpp",0x76,
                       "Condition \"valid_icon_count == 0\" is true. Returning: ERR_CANT_OPEN",0,0);
      goto LAB_0010b148;
    }
    FileAccess::open((String *)&local_98,(int)param_3,(Error *)0x2);
    if (local_cc == 0) {
      (**(code **)(*(long *)local_98 + 0x270))(local_98,0);
      (**(code **)(*(long *)local_98 + 0x270))(local_98,1);
      (**(code **)(*(long *)local_98 + 0x270))();
      local_140 = &_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::
                   icon_size;
LAB_0010ad92:
      if (local_138 == (byte *)0x0) goto LAB_0010ad9e;
      do {
        while (local_60._4_4_ != 0) {
          bVar123 = *local_140;
          uVar98 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
          uVar106 = CONCAT44(0,uVar98);
          uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
          uVar100 = (uint)bVar123;
          uVar121 = (uVar100 * -0x7a143595 ^ uVar100 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
          uVar113 = uVar121 ^ uVar121 >> 0x10;
          if (uVar121 == uVar121 >> 0x10) {
            uVar113 = 1;
            uVar105 = uVar109;
          }
          else {
            uVar105 = uVar113 * uVar109;
          }
          auVar32._8_8_ = 0;
          auVar32._0_8_ = uVar106;
          auVar74._8_8_ = 0;
          auVar74._0_8_ = uVar105;
          lVar108 = SUB168(auVar32 * auVar74,8);
          uVar121 = *(uint *)(local_80._8_8_ + lVar108 * 4);
          if (uVar121 != 0) {
            uVar119 = 0;
            uVar107 = SUB164(auVar32 * auVar74,8);
            lVar112 = lVar108;
            uVar115 = uVar121;
            uVar120 = uVar107;
            do {
              if ((uVar115 == uVar113) &&
                 (bVar123 == *(byte *)(*(long *)((long)local_138 + lVar112 * 8) + 0x10))) {
                uVar115 = 0;
                goto LAB_0010b889;
              }
              uVar119 = uVar119 + 1;
              auVar33._8_8_ = 0;
              auVar33._0_8_ = (uVar120 + 1) * uVar109;
              auVar75._8_8_ = 0;
              auVar75._0_8_ = uVar106;
              lVar112 = SUB168(auVar33 * auVar75,8);
              uVar115 = *(uint *)(local_80._8_8_ + lVar112 * 4);
              uVar120 = SUB164(auVar33 * auVar75,8);
            } while ((uVar115 != 0) &&
                    (auVar34._8_8_ = 0, auVar34._0_8_ = uVar115 * uVar109, auVar76._8_8_ = 0,
                    auVar76._0_8_ = uVar106, auVar35._8_8_ = 0,
                    auVar35._0_8_ = ((uVar98 + uVar120) - SUB164(auVar34 * auVar76,8)) * uVar109,
                    auVar77._8_8_ = 0, auVar77._0_8_ = uVar106,
                    uVar119 <= SUB164(auVar35 * auVar77,8)));
          }
          local_140 = local_140 + 1;
          if (local_140 == (byte *)0x117f66) goto LAB_0010adb3;
        }
        local_140 = local_140 + 1;
      } while (local_140 != (byte *)0x117f66);
      goto LAB_0010adb3;
    }
LAB_0010aded:
    uVar109 = (ulong)local_cc;
    if (((local_98 != (Object *)0x0) &&
        (cVar90 = RefCounted::unreference(), pOVar122 = local_98, cVar90 != '\0')) &&
       (cVar90 = predelete_handler(local_98), cVar90 != '\0')) {
      (**(code **)(*(long *)pOVar122 + 0x140))(pOVar122);
      Memory::free_static(pOVar122,false);
    }
  }
  else {
    _err_print_error("_process_icon","platform/windows/export/export_plugin.cpp",0x61,
                     "Condition \"err != OK || src_image.is_null() || src_image->is_empty()\" is true. Returning: ERR_CANT_OPEN"
                     ,0,0);
    local_138 = (byte *)0x0;
    if (CONCAT71(uStack_9f,local_a0) == 0) {
      uVar109 = 0x13;
      goto LAB_0010ae90;
    }
LAB_0010b12f:
    cVar90 = RefCounted::unreference();
    if (cVar90 != '\0') {
      memdelete<Image>((Image *)CONCAT71(uStack_9f,local_a0));
    }
LAB_0010b148:
    uVar109 = 0x13;
  }
  if (local_138 != (byte *)0x0) {
    if ((local_60._4_4_ != 0) &&
       (uVar98 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4), uVar98 != 0)) {
      lVar108 = 0;
      do {
        if (*(int *)(local_80._8_8_ + lVar108) != 0) {
          *(int *)(local_80._8_8_ + lVar108) = 0;
          puVar104 = (undefined8 *)((long)local_138 + lVar108 * 2);
          pvVar114 = (void *)*puVar104;
          if (*(long *)((long)pvVar114 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar114 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar112 = *(long *)((long)pvVar114 + 0x20);
              *(undefined8 *)((long)pvVar114 + 0x20) = 0;
              Memory::free_static((void *)(lVar112 + -0x10),false);
            }
            puVar104 = (undefined8 *)(local_80._0_8_ + lVar108 * 2);
            local_138 = (byte *)local_80._0_8_;
          }
          Memory::free_static(pvVar114,false);
          *puVar104 = 0;
        }
        lVar108 = lVar108 + 4;
      } while (lVar108 != (ulong)uVar98 << 2);
      local_60 = local_60 & 0xffffffff;
      local_70 = (undefined1  [16])0x0;
      if (local_138 == (byte *)0x0) goto LAB_0010ae90;
    }
    Memory::free_static(local_138,false);
    Memory::free_static((void *)local_80._8_8_,false);
  }
LAB_0010ae90:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar109;
  while( true ) {
    uVar115 = uVar115 + 1;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = (uVar107 + 1) * uVar109;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar106;
    lVar108 = SUB168(auVar36 * auVar78,8);
    uVar121 = *(uint *)(local_80._8_8_ + lVar108 * 4);
    uVar107 = SUB164(auVar36 * auVar78,8);
    if ((uVar121 == 0) ||
       (auVar37._8_8_ = 0, auVar37._0_8_ = uVar121 * uVar109, auVar79._8_8_ = 0,
       auVar79._0_8_ = uVar106, auVar38._8_8_ = 0,
       auVar38._0_8_ = ((uVar98 + uVar107) - SUB164(auVar37 * auVar79,8)) * uVar109,
       auVar80._8_8_ = 0, auVar80._0_8_ = uVar106, SUB164(auVar38 * auVar80,8) < uVar115)) break;
LAB_0010b889:
    if ((uVar113 == uVar121) &&
       (bVar123 == *(byte *)(*(long *)((long)local_138 + lVar108 * 8) + 0x10))) {
      lVar108 = *(long *)((long)local_138 + (ulong)uVar107 * 8) + 0x18;
      goto LAB_0010b8a5;
    }
  }
  lVar108 = HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
            ::operator[](local_88,local_140);
  local_138 = (byte *)local_80._0_8_;
LAB_0010b8a5:
  (**(code **)(*(long *)local_98 + 0x268))(local_98,uVar100);
  (**(code **)(*(long *)local_98 + 0x268))(local_98,uVar100);
  (**(code **)(*(long *)local_98 + 0x268))(local_98,*(undefined1 *)(lVar108 + 0x10));
  (**(code **)(*(long *)local_98 + 0x268))(local_98,0);
  (**(code **)(*(long *)local_98 + 0x270))(local_98,*(undefined2 *)(lVar108 + 0x12));
  (**(code **)(*(long *)local_98 + 0x270))(local_98,*(undefined2 *)(lVar108 + 0x14));
  if (*(long *)(lVar108 + 8) == 0) {
    uVar99 = 0;
  }
  else {
    uVar99 = *(undefined4 *)(*(long *)(lVar108 + 8) + -8);
  }
  (**(code **)(*(long *)local_98 + 0x278))(local_98,uVar99);
  (**(code **)(*(long *)local_98 + 0x278))();
LAB_0010ad9e:
  local_140 = local_140 + 1;
  if (local_140 == (byte *)0x117f66) goto LAB_0010adb3;
  goto LAB_0010ad92;
LAB_0010adb3:
LAB_0010adc8:
  if (local_138 == (byte *)0x0) goto LAB_0010add4;
  do {
    if (local_60._4_4_ != 0) {
      bVar123 = *local_120;
      uVar98 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
      uVar109 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
      uVar100 = ((uint)bVar123 * -0x7a143595 ^ (uint)bVar123 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar121 = uVar100 ^ uVar100 >> 0x10;
      if (uVar100 == uVar100 >> 0x10) {
        uVar121 = 1;
        uVar106 = uVar109;
      }
      else {
        uVar106 = uVar121 * uVar109;
      }
      uVar105 = CONCAT44(0,uVar98);
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar105;
      auVar81._8_8_ = 0;
      auVar81._0_8_ = uVar106;
      lVar108 = SUB168(auVar39 * auVar81,8);
      uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
      uVar113 = SUB164(auVar39 * auVar81,8);
      if (uVar100 != 0) {
        uVar120 = 0;
        lVar112 = lVar108;
        uVar115 = uVar100;
        uVar107 = uVar113;
        do {
          if ((uVar121 == uVar115) &&
             (bVar123 == *(byte *)(*(long *)((long)local_138 + lVar112 * 8) + 0x10))) {
            uVar115 = 0;
            goto LAB_0010bb57;
          }
          uVar120 = uVar120 + 1;
          auVar40._8_8_ = 0;
          auVar40._0_8_ = (uVar107 + 1) * uVar109;
          auVar82._8_8_ = 0;
          auVar82._0_8_ = uVar105;
          lVar112 = SUB168(auVar40 * auVar82,8);
          uVar115 = *(uint *)(local_80._8_8_ + lVar112 * 4);
          uVar107 = SUB164(auVar40 * auVar82,8);
        } while ((uVar115 != 0) &&
                (auVar41._8_8_ = 0, auVar41._0_8_ = uVar115 * uVar109, auVar83._8_8_ = 0,
                auVar83._0_8_ = uVar105, auVar42._8_8_ = 0,
                auVar42._0_8_ = ((uVar98 + uVar107) - SUB164(auVar41 * auVar83,8)) * uVar109,
                auVar84._8_8_ = 0, auVar84._0_8_ = uVar105, uVar120 <= SUB164(auVar42 * auVar84,8)))
        ;
      }
    }
    local_120 = local_120 + 1;
  } while (local_120 != (byte *)0x117f66);
  goto LAB_0010aded;
  while( true ) {
    uVar115 = uVar115 + 1;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = (uVar113 + 1) * uVar109;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = uVar105;
    lVar108 = SUB168(auVar43 * auVar85,8);
    uVar100 = *(uint *)(local_80._8_8_ + lVar108 * 4);
    uVar113 = SUB164(auVar43 * auVar85,8);
    if ((uVar100 == 0) ||
       (auVar44._8_8_ = 0, auVar44._0_8_ = uVar100 * uVar109, auVar86._8_8_ = 0,
       auVar86._0_8_ = uVar105, auVar45._8_8_ = 0,
       auVar45._0_8_ = ((uVar98 + uVar113) - SUB164(auVar44 * auVar86,8)) * uVar109,
       auVar87._8_8_ = 0, auVar87._0_8_ = uVar105, SUB164(auVar45 * auVar87,8) < uVar115)) break;
LAB_0010bb57:
    if ((uVar121 == uVar100) &&
       (bVar123 == *(byte *)(*(long *)((long)local_138 + lVar108 * 8) + 0x10))) {
      lVar108 = *(long *)((long)local_138 + (ulong)uVar113 * 8) + 0x18;
      goto LAB_0010bb73;
    }
  }
  lVar108 = HashMap<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char>,DefaultTypedAllocator<HashMapElement<unsigned_char,EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset>const&,String_const&,String_const&)::IconData>>>
            ::operator[](local_88,local_120);
  local_138 = (byte *)local_80._0_8_;
LAB_0010bb73:
  lVar108 = *(long *)(lVar108 + 8);
  if (lVar108 == 0) {
    (**(code **)(*(long *)local_98 + 0x2d0))(local_98,0,0);
  }
  else {
    (**(code **)(*(long *)local_98 + 0x2d0))(local_98,lVar108,*(undefined8 *)(lVar108 + -8));
  }
LAB_0010add4:
  local_120 = local_120 + 1;
  if (local_120 == (byte *)0x117f66) goto LAB_0010aded;
  goto LAB_0010adc8;
}



/* EditorExportPlatformWindows::_rcedit_add_data(Ref<EditorExportPreset> const&, String const&,
   bool) */

int __thiscall
EditorExportPlatformWindows::_rcedit_add_data
          (EditorExportPlatformWindows *this,Ref *param_1,String *param_2,bool param_3)

{
  bool *pbVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  CowData<char32_t> *this_00;
  long *plVar9;
  long in_FS_OFFSET;
  String *local_1b8;
  String *local_1b0;
  CowData<char32_t> *local_198;
  long local_130;
  long local_128;
  char *local_120;
  String local_118 [8];
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  Variant local_d8 [8];
  undefined1 (*local_d0) [16];
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  local_88 = "export/windows/rcedit";
  local_80 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_130);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = (char *)0x0;
  cVar6 = String::operator!=((String *)&local_130,(String *)&local_88);
  if ((cVar6 != '\0') && (cVar6 = FileAccess::exists((String *)&local_130), cVar6 == '\0')) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    pcVar4 = *(code **)(*(long *)this + 0x178);
    local_98 = (char *)0x0;
    if (local_130 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_130);
    }
    local_a8 = 0;
    local_80 = 0;
    local_88 = "";
    String::parse_latin1((StrRange *)&local_a8);
    local_88 = "Could not find rcedit executable at \"%s\".";
    local_b0 = 0;
    local_80 = 0x29;
    String::parse_latin1((StrRange *)&local_b0);
    TTR((String *)&local_a0,(String *)&local_b0);
    vformat<String>((StrRange *)&local_90,(String *)&local_a0,(CowData<char32_t> *)&local_98);
    local_b8 = 0;
    local_88 = "";
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_b8);
    local_88 = "Resources Modification";
    local_c0 = 0;
    local_80 = 0x16;
    String::parse_latin1((StrRange *)&local_c0);
    TTR((String *)&local_88,(String *)&local_c0);
    (*pcVar4)(this,2,(CowData<char32_t> *)&local_88,(StrRange *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    iVar7 = 7;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    goto LAB_0010cca2;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = (char *)0x0;
  cVar6 = String::operator==((String *)&local_130,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (cVar6 != '\0') {
    String::parse_latin1((String *)&local_130,"rcedit");
  }
  local_90 = 0;
  local_88 = "export/windows/wine";
  local_80 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_128);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((local_128 == 0) || (*(uint *)(local_128 + -8) < 2)) {
LAB_0010c065:
    local_80 = 4;
    local_88 = "wine";
    String::parse_latin1((StrRange *)&local_128);
LAB_0010c08d:
    local_120 = (char *)0x0;
    Variant::Variant((Variant *)local_58,"");
    pbVar1 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"application/icon",false);
    Object::get((StringName *)local_78,pbVar1);
    cVar6 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar6 == '\0') {
      Variant::Variant((Variant *)local_58,"");
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_88,"application/config/windows_native_icon",false)
      ;
      ProjectSettings::get_setting_with_override((StringName *)local_78);
      cVar6 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar6 != '\0') {
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_90,"application/config/windows_native_icon",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        Variant::operator_cast_to_String((Variant *)&local_88);
        if (local_120 != local_88) goto LAB_0010c195;
        goto LAB_0010c1b9;
      }
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_90,"application/config/icon",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      Variant::operator_cast_to_String((Variant *)&local_88);
      if (local_120 != local_88) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
        local_120 = local_88;
        local_88 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      cVar6 = Variant::needs_deinit[local_58[0]];
    }
    else {
      pbVar1 = *(bool **)param_1;
      StringName::StringName((StringName *)&local_90,"application/icon",false);
      Object::get((StringName *)local_58,pbVar1);
      Variant::operator_cast_to_String((Variant *)&local_88);
      if (local_120 != local_88) {
LAB_0010c195:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
        local_120 = local_88;
        local_88 = (char *)0x0;
      }
LAB_0010c1b9:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      cVar6 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar6 != '\0') {
      Variant::_clear_internal();
    }
    local_198 = (CowData<char32_t> *)&local_120;
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    ProjectSettings::get_singleton();
    ProjectSettings::globalize_path((String *)&local_88);
    if (local_120 != local_88) {
      CowData<char32_t>::_unref(local_198);
      local_120 = local_88;
      local_88 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (param_3) {
      ProjectSettings::get_singleton();
      pbVar1 = *(bool **)param_1;
      StringName::StringName((StringName *)&local_90,"application/console_wrapper_icon",false);
      Object::get((StringName *)local_58,pbVar1);
      Variant::operator_cast_to_String((Variant *)&local_88);
      ProjectSettings::globalize_path((String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      if ((((local_98 != (char *)0x0) && (1 < *(uint *)(local_98 + -8))) &&
          (cVar6 = FileAccess::exists((String *)&local_98), cVar6 != '\0')) &&
         (local_120 != local_98)) {
        CowData<char32_t>::_ref(local_198,(CowData *)&local_98);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
    EditorPaths::get_temp_dir();
    local_88 = "_rcedit.ico";
    local_90 = 0;
    local_80 = 0xb;
    String::parse_latin1((StrRange *)&local_90);
    String::path_join(local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (((local_120 != (char *)0x0) && (1 < *(uint *)(local_120 + -8))) &&
       (iVar7 = _process_icon(this,param_1,(String *)local_198,local_118), iVar7 != 0)) {
      pcVar4 = *(code **)(*(long *)this + 0x178);
      local_90 = 0;
      if (local_120 != (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)local_198);
      }
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"");
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"Invalid icon file \"%s\".");
      TTR((String *)&local_98,(String *)&local_a8);
      vformat<String>((CowData<char32_t> *)&local_88,(CowData<char32_t> *)&local_98,
                      (StrRange *)&local_90);
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Resources Modification");
      TTR((String *)&local_b0,(String *)&local_c0);
      (*pcVar4)(this,2,(String *)&local_b0,(CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      local_88 = (char *)0x0;
      if (local_120 != (char *)0x0) {
        CowData<char32_t>::_unref(local_198);
        local_120 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    local_1b0 = (String *)&local_a0;
    local_1b8 = (String *)&local_a8;
    uVar2 = *(undefined8 *)param_1;
    StringName::StringName((StringName *)&local_88,"application/file_version",false);
    EditorExportPreset::get_version((StringName *)&local_110,SUB81(uVar2,0));
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    uVar2 = *(undefined8 *)param_1;
    StringName::StringName((StringName *)&local_88,"application/product_version",false);
    EditorExportPreset::get_version((StringName *)&local_108,SUB81(uVar2,0));
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    pbVar1 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"application/company_name",false);
    Object::get((StringName *)local_58,pbVar1);
    Variant::operator_cast_to_String((Variant *)&local_100);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    pbVar1 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"application/product_name",false);
    Object::get((StringName *)local_58,pbVar1);
    Variant::operator_cast_to_String((Variant *)&local_f8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    pbVar1 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"application/file_description",false);
    Object::get((StringName *)local_58,pbVar1);
    Variant::operator_cast_to_String((Variant *)&local_f0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    pbVar1 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"application/copyright",false);
    Object::get((StringName *)local_58,pbVar1);
    Variant::operator_cast_to_String((Variant *)&local_e8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    pbVar1 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"application/trademarks",false);
    Object::get((StringName *)local_58,pbVar1);
    Variant::operator_cast_to_String((Variant *)&local_e0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    pbVar1 = *(bool **)param_1;
    StringName::StringName((StringName *)&local_88,"application/comments",false);
    Object::get((StringName *)local_58,pbVar1);
    Variant::operator_cast_to_String(local_d8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    local_d0 = (undefined1 (*) [16])0x0;
    List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator> *)&local_d0,param_2);
    if ((local_120 != (char *)0x0) && (1 < *(uint *)(local_120 + -8))) {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"--set-icon");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator> *)&local_d0,local_118)
      ;
    }
    if ((local_110 != 0) && (1 < *(uint *)(local_110 + -8))) {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"--set-file-version");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_110);
    }
    if ((local_108 != 0) && (1 < *(uint *)(local_108 + -8))) {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"--set-product-version");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_108);
    }
    if ((local_100 != 0) && (1 < *(uint *)(local_100 + -8))) {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"--set-version-string");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"CompanyName");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_100);
    }
    if ((local_f8 != 0) && (1 < *(uint *)(local_f8 + -8))) {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"--set-version-string");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"ProductName");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_f8);
    }
    if ((local_f0 != 0) && (1 < *(uint *)(local_f0 + -8))) {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"--set-version-string");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"FileDescription");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_f0);
    }
    if ((local_e8 != 0) && (1 < *(uint *)(local_e8 + -8))) {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"--set-version-string");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"LegalCopyright");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_e8);
    }
    if ((local_e0 != 0) && (1 < *(uint *)(local_e0 + -8))) {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"--set-version-string");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"LegalTrademarks");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)&local_d0,(String *)&local_e0);
    }
    if (local_d0 == (undefined1 (*) [16])0x0) {
      local_d0 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d0[1] = 0;
      *local_d0 = (undefined1  [16])0x0;
    }
    this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
    CowData<char32_t>::_ref(this_00,(CowData *)&local_130);
    *(undefined8 *)(this_00 + 0x10) = 0;
    lVar3 = *(long *)*local_d0;
    *(undefined1 (**) [16])(this_00 + 0x18) = local_d0;
    *(long *)(this_00 + 8) = lVar3;
    if (lVar3 != 0) {
      *(CowData<char32_t> **)(lVar3 + 0x10) = this_00;
    }
    lVar3 = *(long *)(*local_d0 + 8);
    *(CowData<char32_t> **)*local_d0 = this_00;
    if (lVar3 == 0) {
      *(CowData<char32_t> **)(*local_d0 + 8) = this_00;
    }
    *(int *)local_d0[1] = *(int *)local_d0[1] + 1;
    if (local_130 != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)&local_128);
    }
    local_c8 = 0;
    plVar9 = (long *)OS::get_singleton();
    iVar7 = (**(code **)(*plVar9 + 0x108))
                      (plVar9,(Variant *)&local_130,(List<String,DefaultAllocator> *)&local_d0,
                       (CowData<char32_t> *)&local_c8,0,1,0,0);
    cVar6 = FileAccess::exists(local_118);
    if (cVar6 != '\0') {
      DirAccess::remove_file_or_error(local_118);
    }
    if (((iVar7 == 0) && (iVar8 = String::find((char *)&local_c8,0x111437), iVar8 == -1)) &&
       (iVar8 = String::find((char *)&local_c8,0x111441), iVar8 == -1)) {
      local_a0 = 0;
      String::parse_latin1(local_1b0,"): ");
      operator+((char *)local_1b8,(String *)"rcedit (");
      String::operator+((String *)&local_98,local_1b8);
      String::operator+((String *)&local_90,(String *)&local_98);
      Variant::Variant((Variant *)local_58,(String *)&local_90);
      stringify_variants((Variant *)&local_88);
      __print_line((String *)&local_88);
      pcVar5 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar9 = (long *)(local_88 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
      iVar8 = String::find((char *)&local_c8,0x1116f2);
      if (iVar8 != -1) {
        pcVar4 = *(code **)(*(long *)this + 0x178);
        local_90 = 0;
        if (local_c8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_c8);
        }
        local_a0 = 0;
        String::parse_latin1(local_1b0,"");
        local_a8 = 0;
        String::parse_latin1(local_1b8,"rcedit failed to modify executable: %s.");
        TTR((String *)&local_98,local_1b8);
        vformat<String>((CowData<char32_t> *)&local_88,(CowData<char32_t> *)&local_98,
                        (StrRange *)&local_90);
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Resources Modification");
        TTR((String *)&local_b0,(String *)&local_c0);
        (*pcVar4)(this,2,(String *)&local_b0,(CowData<char32_t> *)&local_88);
        iVar7 = 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      }
    }
    else {
      pcVar4 = *(code **)(*(long *)this + 0x178);
      local_88 = "";
      local_98 = (char *)0x0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_98);
      local_88 = 
      "Could not start rcedit executable. Configure rcedit path in the Editor Settings (Export > Windows > rcedit), or disable \"Application > Modify Resources\" in the export preset."
      ;
      local_a0 = 0;
      local_80 = 0xae;
      String::parse_latin1((StrRange *)local_1b0);
      TTR((String *)&local_90,local_1b0);
      local_88 = "";
      local_a8 = 0;
      local_80 = 0;
      String::parse_latin1((StrRange *)local_1b8);
      local_88 = "Resources Modification";
      local_b0 = 0;
      local_80 = 0x16;
      String::parse_latin1((StrRange *)&local_b0);
      TTR((String *)&local_88,(String *)&local_b0);
      (*pcVar4)(this,2,(CowData<char32_t> *)&local_88,(StrRange *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    CowData<char32_t>::_unref(local_198);
  }
  else {
    cVar6 = FileAccess::exists((String *)&local_128);
    if (cVar6 != '\0') {
      if ((local_128 == 0) || (*(uint *)(local_128 + -8) < 2)) goto LAB_0010c065;
      goto LAB_0010c08d;
    }
    pcVar4 = *(code **)(*(long *)this + 0x178);
    local_90 = 0;
    if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_128);
    }
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"Could not find wine executable at \"%s\".");
    TTR((String *)&local_98,(String *)&local_a8);
    vformat<String>((CowData<char32_t> *)&local_88,(String *)&local_98,(StrRange *)&local_90);
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"Resources Modification");
    TTR((String *)&local_b0,(String *)&local_c0);
    (*pcVar4)(this,2,(String *)&local_b0,(CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    iVar7 = 7;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
LAB_0010cca2:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::modify_template(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

undefined8
EditorExportPlatformWindows::modify_template
          (EditorExportPlatformWindows *param_1,Ref *param_2,undefined8 param_3,String *param_4)

{
  bool *pbVar1;
  bool bVar2;
  char cVar3;
  long in_FS_OFFSET;
  String aSStack_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pbVar1 = *(bool **)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_68,"application/modify_resources",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (bVar2) {
    _rcedit_add_data(param_1,param_2,param_4,false);
    local_68 = ".console.exe";
    local_70 = 0;
    local_60 = 0xc;
    String::parse_latin1((StrRange *)&local_70);
    String::get_basename();
    String::operator+(aSStack_78,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    cVar3 = FileAccess::exists(aSStack_78);
    if (cVar3 != '\0') {
      _rcedit_add_data(param_1,param_2,aSStack_78,true);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorExportPlatform::ExportMessage>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorExportPlatform::ExportMessage>::_copy_on_write
          (CowData<EditorExportPlatform::ExportMessage> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
  if (lVar2 * 0x18 != 0) {
    uVar7 = lVar2 * 0x18 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    puVar9 = puVar5 + 2;
    if (lVar2 != 0) {
      do {
        puVar6 = (undefined4 *)((long)puVar9 + *(long *)this + (-0x10 - (long)puVar5));
        uVar1 = *puVar6;
        puVar9[1] = 0;
        lVar3 = *(long *)(puVar6 + 2);
        *(undefined4 *)puVar9 = uVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 1),(CowData *)(puVar6 + 2));
        }
        puVar9[2] = 0;
        if (*(long *)(puVar6 + 4) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)(puVar6 + 4));
        }
        lVar8 = lVar8 + 1;
        puVar9 = puVar9 + 3;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_copy_on_write
          (CowData<EditorExportPlatformWindows::SSHCleanupCommand> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData *pCVar4;
  CowData<char32_t> *this_00;
  ulong uVar5;
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
  if (lVar1 * 0x30 != 0) {
    uVar5 = lVar1 * 0x30 - 1;
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
        pCVar4 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar3));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar4 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar4);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar4 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar4 + 8);
        }
        *(undefined8 *)(this_00 + 0x18) = 0;
        if (*(long *)(pCVar4 + 0x18) != 0) {
          CowData<String>::_ref((CowData<String> *)(this_00 + 0x18),pCVar4 + 0x18);
        }
        *(undefined8 *)(this_00 + 0x20) = 0;
        if (*(long *)(pCVar4 + 0x20) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar4 + 0x20);
        }
        lVar6 = lVar6 + 1;
        *(CowData *)(this_00 + 0x28) = pCVar4[0x28];
        this_00 = this_00 + 0x30;
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



/* EditorExportPlatformWindows::cleanup() */

void __thiscall EditorExportPlatformWindows::cleanup(EditorExportPlatformWindows *this)

{
  CowData<EditorExportPlatformWindows::SSHCleanupCommand> *this_00;
  char cVar1;
  long lVar2;
  long *plVar3;
  String *pSVar4;
  String *pSVar5;
  String *pSVar6;
  long in_FS_OFFSET;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1d0) != 0) {
    plVar3 = (long *)OS::get_singleton();
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,this + 0x1d0);
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_48,"Terminating connection...");
      stringify_variants(local_50);
      __print_line((String *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar3 = (long *)OS::get_singleton();
      (**(code **)(*plVar3 + 0x128))(plVar3,this + 0x1d0);
      plVar3 = (long *)OS::get_singleton();
      (**(code **)(*plVar3 + 0x1f8))(plVar3,1000);
    }
  }
  if (*(long *)(this + 0x1c8) == 0) {
LAB_0010df40:
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  else {
    Variant::Variant((Variant *)local_48,"Stopping and deleting previous version...");
    stringify_variants(local_50);
    __print_line((String *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    this_00 = (CowData<EditorExportPlatformWindows::SSHCleanupCommand> *)(this + 0x1c8);
    CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_copy_on_write(this_00);
    pSVar4 = *(String **)(this + 0x1c8);
    CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_copy_on_write(this_00);
    lVar2 = *(long *)(this + 0x1c8);
    if (lVar2 == 0) {
      pSVar6 = (String *)0x0;
      if (pSVar4 == (String *)0x0) goto LAB_0010df40;
LAB_0010dec3:
      do {
        while( true ) {
          if (pSVar4[0x28] != (String)0x0) break;
          pSVar5 = pSVar4 + 0x30;
          EditorExportPlatform::ssh_run_on_remote_no_wait
                    ((String *)this,pSVar4,(Vector *)(pSVar4 + 8),pSVar4 + 0x10,
                     (long *)(pSVar4 + 0x20),0);
          pSVar4 = pSVar5;
          if (pSVar5 == pSVar6) goto LAB_0010def4;
        }
        pSVar5 = pSVar4 + 0x30;
        EditorExportPlatform::ssh_run_on_remote
                  ((String *)this,pSVar4,(Vector *)(pSVar4 + 8),pSVar4 + 0x10,pSVar4 + 0x20,0);
        pSVar4 = pSVar5;
      } while (pSVar5 != pSVar6);
LAB_0010def4:
      lVar2 = *(long *)(this + 0x1c8);
      *(undefined8 *)(this + 0x1d0) = 0;
      if (lVar2 == 0) goto LAB_0010df4b;
    }
    else {
      pSVar6 = (String *)(*(long *)(lVar2 + -8) * 0x30 + lVar2);
      if (pSVar4 != pSVar6) goto LAB_0010dec3;
      *(undefined8 *)(this + 0x1d0) = 0;
    }
    if (*(long *)(lVar2 + -8) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_unref(this_00);
        return;
      }
      goto LAB_0010e03a;
    }
  }
LAB_0010df4b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e03a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::run(Ref<EditorExportPreset> const&, int,
   BitField<EditorExportPlatform::DebugFlags>) */

int __thiscall
EditorExportPlatformWindows::run
          (EditorExportPlatformWindows *this,undefined8 *param_1,int param_2,undefined8 param_4)

{
  CowData<EditorExportPlatformWindows::SSHCleanupCommand> *this_00;
  CowData<String> *this_01;
  code *pcVar1;
  undefined1 auVar2 [16];
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
  String *pSVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  bool *pbVar17;
  CowData<char32_t> *this_02;
  long lVar18;
  long lVar19;
  bool bVar20;
  int iVar21;
  Object *pOVar22;
  long lVar23;
  long in_FS_OFFSET;
  code *local_1b0;
  CowData<char32_t> *local_158;
  long local_120;
  Object *local_118;
  long local_110;
  long local_108;
  String local_100 [8];
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long *local_c8;
  long local_c0;
  EditorProgress local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  long local_98;
  CowData<String> local_90 [8];
  undefined1 local_88 [16];
  undefined1 local_70 [16];
  undefined1 local_60;
  int local_58 [6];
  long local_40;
  
  iVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x228))();
  if (param_2 != 0) goto LAB_0010e087;
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Running...");
  TTR((String *)&local_98,(String *)&local_c0);
  local_88._0_8_ = 0;
  String::parse_latin1((String *)local_88,"run");
  EditorProgress::EditorProgress(local_b8,(String *)local_88,(String *)&local_98,5,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  EditorPaths::get_temp_dir();
  local_88._0_8_ = 0;
  String::parse_latin1((String *)local_88,"windows");
  String::path_join((String *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  DirAccess::create(&local_118,2);
  pOVar22 = local_118;
  pcVar1 = *(code **)(*(long *)local_118 + 0x1d8);
  local_88._0_8_ = 0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)&local_120);
  }
  cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if ((cVar14 == '\0') &&
     (iVar15 = (**(code **)(*(long *)local_118 + 0x1c0))(local_118,(String *)&local_120),
     pSVar13 = EditorNode::singleton, iVar15 != 0)) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_88._8_8_;
    local_88 = auVar12 << 0x40;
    String::parse_latin1((String *)local_88,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Warning!");
    TTR((String *)&local_a8,(String *)&local_98);
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"\n");
    local_e0 = 0;
    String::parse_latin1((String *)&local_e0,"");
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8,"Could not create temp directory:");
    TTR((String *)&local_d8,(String *)&local_e8);
    String::operator+((String *)&local_c8,(String *)&local_d8);
    String::operator+((String *)&local_c0,(String *)&local_c8);
    EditorNode::show_warning(pSVar13,(String *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  }
  else {
    pbVar17 = (bool *)*param_1;
    StringName::StringName((StringName *)local_88,"ssh_remote_deploy/host",false);
    Object::get((StringName *)local_58,pbVar17);
    Variant::operator_cast_to_String((Variant *)&local_110);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
      StringName::unref();
    }
    pbVar17 = (bool *)*param_1;
    StringName::StringName((StringName *)local_88,"ssh_remote_deploy/port",false);
    Object::get((StringName *)local_58,pbVar17);
    Variant::operator_cast_to_String((Variant *)&local_108);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
      StringName::unref();
    }
    if ((local_108 == 0) || (*(uint *)(local_108 + -8) < 2)) {
      String::parse_latin1((String *)&local_108,"22");
    }
    pbVar17 = (bool *)*param_1;
    StringName::StringName((StringName *)&local_98,"ssh_remote_deploy/extra_args_ssh",false);
    Object::get((StringName *)local_58,pbVar17);
    Variant::operator_cast_to_String((Variant *)local_88);
    bVar20 = SUB81((String *)local_88,0);
    String::split((char *)&local_a8,bVar20,0x111730);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    pbVar17 = (bool *)*param_1;
    StringName::StringName((StringName *)&local_c0,"ssh_remote_deploy/extra_args_scp",false);
    Object::get((StringName *)local_58,pbVar17);
    Variant::operator_cast_to_String((Variant *)local_88);
    String::split((char *)&local_98,bVar20,0x111730);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_88._8_8_;
    local_88 = auVar11 << 0x40;
    String::parse_latin1((String *)local_88,"tmp_windows_export");
    String::path_join(local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = (long *)0x0;
    String::parse_latin1((String *)&local_c8,"Exporting project...");
    TTR((String *)local_88,(String *)&local_c8);
    iVar21 = (int)(String *)local_88;
    cVar14 = EditorProgress::step((String *)local_b8,iVar21,true);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (cVar14 == '\0') {
      pcVar1 = *(code **)(*(long *)this + 0x260);
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,".zip");
      String::operator+((String *)local_88,local_100);
      iVar15 = (*pcVar1)(this,param_1,1,(String *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (iVar15 == 0) {
        local_f8 = 0;
        EditorExportPlatform::gen_export_flags((String *)local_88,this,param_4);
        for (lVar19 = 0; (local_88._8_8_ != 0 && (lVar19 < *(long *)(local_88._8_8_ + -8)));
            lVar19 = lVar19 + 1) {
          lVar18 = local_88._8_8_;
          if (lVar19 != 0) {
            String::operator+=((String *)&local_f8," ");
            lVar18 = local_88._8_8_;
          }
          if (lVar18 == 0) {
            lVar23 = 0;
LAB_0010e786:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar19,lVar23,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar23 = *(long *)(lVar18 + -8);
          if (lVar23 <= lVar19) goto LAB_0010e786;
          String::operator+=((String *)&local_f8,(String *)(lVar18 + lVar19 * 8));
        }
        local_158 = (CowData<char32_t> *)&local_f8;
        this_01 = (CowData<String> *)(local_88 + 8);
        CowData<String>::_unref(this_01);
        pbVar17 = (bool *)EditorSettings::get_singleton();
        StringName::StringName((StringName *)local_88,"network/debug/remote_port",false);
        Object::get((StringName *)local_58,pbVar17);
        Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
          StringName::unref();
        }
        Variant::Variant((Variant *)local_58,"Creating temporary directory...");
        print_line((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"");
        local_c8 = (long *)0x0;
        String::parse_latin1((String *)&local_c8,"Creating temporary directory...");
        TTR((String *)local_88,(String *)&local_c8);
        EditorProgress::step((String *)local_b8,iVar21,true);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        local_f0 = 0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_88._8_8_;
        local_88 = auVar2 << 0x40;
        String::parse_latin1
                  ((String *)local_88,
                   "powershell -command \\\"\\$tmp = Join-Path \\$Env:Temp \\$(New-Guid); New-Item -Type Directory -Path \\$tmp | Out-Null; Write-Output \\$tmp\\\""
                  );
        iVar16 = EditorExportPlatform::ssh_run_on_remote
                           ((String *)this,(String *)&local_110,(Vector *)&local_108,
                            (String *)&local_a8,(String *)local_88,
                            (int)(CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        pOVar22 = local_118;
        if (((iVar16 == 0) && (local_f0 != 0)) && (1 < *(uint *)(local_f0 + -8))) {
          Variant::Variant((Variant *)local_58,"Uploading archive...");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"");
          local_c8 = (long *)0x0;
          String::parse_latin1((String *)&local_c8,"Uploading archive...");
          TTR((String *)local_88,(String *)&local_c8);
          EditorProgress::step((String *)local_b8,iVar21,true);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,".zip");
          String::operator+((String *)local_88,local_100);
          iVar16 = EditorExportPlatform::ssh_push_to_remote
                             ((String *)this,(String *)&local_110,(Vector *)&local_108,
                              (String *)&local_98,(String *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          pOVar22 = local_118;
          iVar15 = iVar16;
          if (iVar16 == 0) {
            if ((local_f8 == 0) || (*(uint *)(local_f8 + -8) < 2)) {
              String::parse_latin1((String *)local_158," ");
            }
            pbVar17 = (bool *)*param_1;
            StringName::StringName((StringName *)local_88,"ssh_remote_deploy/run_script",false);
            Object::get((StringName *)local_58,pbVar17);
            Variant::operator_cast_to_String((Variant *)&local_e0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
              StringName::unref();
            }
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"{temp_dir}");
            String::replace((String *)local_88,(String *)&local_e0);
            if (local_e0 != local_88._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_88._0_8_;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = local_88._8_8_;
              local_88 = auVar3 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            local_d0 = 0;
            String::parse_latin1((String *)&local_d0,".zip");
            String::get_file();
            String::operator+((String *)&local_c8,(String *)&local_d8);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"{archive_name}");
            String::replace((String *)local_88,(String *)&local_e0);
            if (local_e0 != local_88._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_88._0_8_;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = local_88._8_8_;
              local_88 = auVar4 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            local_d0 = 0;
            String::parse_latin1((String *)&local_d0,".exe");
            String::get_file();
            String::operator+((String *)&local_c8,(String *)&local_d8);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"{exe_name}");
            String::replace((String *)local_88,(String *)&local_e0);
            if (local_e0 != local_88._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_88._0_8_;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = local_88._8_8_;
              local_88 = auVar5 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"{cmd_args}");
            String::replace((String *)local_88,(String *)&local_e0);
            if (local_e0 != local_88._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_88._0_8_;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = local_88._8_8_;
              local_88 = auVar6 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_start.ps1");
            String::operator+((String *)local_88,local_100);
            FileAccess::open((String *)&local_c8,iVar21,(Error *)0x2);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            pOVar22 = local_118;
            if (local_c8 == (long *)0x0) {
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,".zip");
              String::operator+((String *)local_88,local_100);
              cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar22 = local_118;
              if (cVar14 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,".zip");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar22,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              pOVar22 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_start.ps1");
              String::operator+((String *)local_88,local_100);
              cVar14 = (*pcVar1)(pOVar22);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar22 = local_118;
              if (cVar14 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_start.ps1");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar22);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              pOVar22 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_clean.ps1");
              String::operator+((String *)local_88,local_100);
              cVar14 = (*pcVar1)(pOVar22);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar22 = local_118;
              if (cVar14 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_clean.ps1");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar22);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
            }
            else {
              (**(code **)(*local_c8 + 0x2a8))(local_c8,(Variant *)&local_e0);
              Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              pbVar17 = (bool *)*param_1;
              StringName::StringName
                        ((StringName *)local_88,"ssh_remote_deploy/cleanup_script",false);
              Object::get((StringName *)local_58,pbVar17);
              Variant::operator_cast_to_String((Variant *)&local_e0);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
                StringName::unref();
              }
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"{temp_dir}");
              String::replace((String *)local_88,(String *)&local_e0);
              if (local_e0 != local_88._0_8_) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                local_e0 = local_88._0_8_;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = local_88._8_8_;
                local_88 = auVar7 << 0x40;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              local_d0 = 0;
              String::parse_latin1((String *)&local_d0,".zip");
              String::get_file();
              String::operator+((String *)&local_c8,(String *)&local_d8);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"{archive_name}");
              String::replace((String *)local_88,(String *)&local_e0);
              if (local_e0 != local_88._0_8_) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                local_e0 = local_88._0_8_;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = local_88._8_8_;
                local_88 = auVar8 << 0x40;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
              local_d0 = 0;
              String::parse_latin1((String *)&local_d0,".exe");
              String::get_file();
              String::operator+((String *)&local_c8,(String *)&local_d8);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"{exe_name}");
              String::replace((String *)local_88,(String *)&local_e0);
              if (local_e0 != local_88._0_8_) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                local_e0 = local_88._0_8_;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = local_88._8_8_;
                local_88 = auVar9 << 0x40;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"{cmd_args}");
              String::replace((String *)local_88,(String *)&local_e0);
              if (local_e0 != local_88._0_8_) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                local_e0 = local_88._0_8_;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = local_88._8_8_;
                local_88 = auVar10 << 0x40;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_clean.ps1");
              String::operator+((String *)local_88,local_100);
              FileAccess::open((String *)&local_c8,iVar21,(Error *)0x2);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar22 = local_118;
              if (local_c8 != (long *)0x0) {
                (**(code **)(*local_c8 + 0x2a8))(local_c8,(Variant *)&local_e0);
                Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                Variant::Variant((Variant *)local_58,"Uploading scripts...");
                print_line((Variant *)local_58);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"");
                local_c8 = (long *)0x0;
                String::parse_latin1((String *)&local_c8,"Uploading scripts...");
                TTR((String *)local_88,(String *)&local_c8);
                EditorProgress::step((String *)local_b8,iVar21,true);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_start.ps1");
                String::operator+((String *)local_88,local_100);
                iVar15 = EditorExportPlatform::ssh_push_to_remote
                                   ((String *)this,(String *)&local_110,(Vector *)&local_108,
                                    (String *)&local_98,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar22 = local_118;
                if (iVar15 != 0) {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,".zip");
                  String::operator+((String *)local_88,local_100);
                  cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  pOVar22 = local_118;
                  if (cVar14 != '\0') {
                    pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,".zip");
                    String::operator+((String *)local_88,local_100);
                    (*pcVar1)(pOVar22,(String *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  }
                  pOVar22 = local_118;
                  pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"_start.ps1");
                  String::operator+((String *)local_88,local_100);
                  cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  pOVar22 = local_118;
                  if (cVar14 != '\0') {
                    pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,"_start.ps1");
                    String::operator+((String *)local_88,local_100);
                    (*pcVar1)(pOVar22,(String *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  }
                  pOVar22 = local_118;
                  pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"_clean.ps1");
                  String::operator+((String *)local_88,local_100);
                  cVar14 = (*pcVar1)(pOVar22);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  pOVar22 = local_118;
                  if (cVar14 != '\0') {
                    pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,"_clean.ps1");
                    String::operator+((String *)local_88,local_100);
                    (*pcVar1)(pOVar22);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  }
                  goto LAB_0010ec36;
                }
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_clean.ps1");
                String::operator+((String *)local_88,local_100);
                iVar15 = EditorExportPlatform::ssh_push_to_remote
                                   ((String *)this,(String *)&local_110,(Vector *)&local_108,
                                    (String *)&local_98,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                if (iVar15 == 0) {
                  Variant::Variant((Variant *)local_58,"Starting project...");
                  print_line((Variant *)local_58);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"");
                  local_c8 = (long *)0x0;
                  String::parse_latin1((String *)&local_c8,"Starting project...");
                  TTR((String *)local_88,(String *)&local_c8);
                  EditorProgress::step((String *)local_b8,iVar21,true);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  local_d8 = 0;
                  String::parse_latin1((String *)&local_d8,"_start.ps1");
                  String::get_file();
                  String::operator+((String *)&local_d0,(String *)&local_e0);
                  local_c0 = 0;
                  if (local_f0 != 0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_f0);
                  }
                  local_c8 = (long *)0x0;
                  String::parse_latin1((String *)&local_c8,"powershell -file \"%s\\%s\"");
                  vformat<String,String>
                            ((String *)local_88,(String *)&local_c8,(String *)&local_c0,
                             (String *)&local_d0);
                  iVar15 = EditorExportPlatform::ssh_run_on_remote_no_wait
                                     ((String *)this,(String *)&local_110,(Vector *)&local_108,
                                      (String *)&local_a8,(long *)local_88,(int)this + 0x1d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                  if (iVar15 == 0) {
                    this_00 = (CowData<EditorExportPlatformWindows::SSHCleanupCommand> *)
                              (this + 0x1c8);
                    CowData<EditorExportPlatformWindows::SSHCleanupCommand>::resize<false>
                              (this_00,0);
                    local_e0 = 0;
                    String::parse_latin1((String *)&local_e0,"_clean.ps1");
                    String::get_file();
                    String::operator+((String *)&local_d8,(String *)&local_e8);
                    local_c8 = (long *)0x0;
                    if (local_f0 != 0) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f0);
                    }
                    local_d0 = 0;
                    String::parse_latin1((String *)&local_d0,"powershell -file \"%s\\%s\"");
                    vformat<String,String>
                              ((String *)&local_c0,(String *)&local_d0,(String *)&local_c8);
                    local_60 = 0;
                    local_88 = (undefined1  [16])0x0;
                    local_70 = (undefined1  [16])0x0;
                    if (local_110 != 0) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)&local_110);
                    }
                    if (local_88._8_8_ != local_108) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)this_01,(CowData *)&local_108);
                    }
                    if (local_70._0_8_ != local_a0) {
                      CowData<String>::_ref((CowData<String> *)local_70,(CowData *)&local_a0);
                    }
                    if (local_70._8_8_ != local_c0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)(local_70 + 8),(CowData *)&local_c0);
                    }
                    local_60 = 0;
                    if (*(long *)(this + 0x1c8) == 0) {
                      lVar19 = 0;
                    }
                    else {
                      lVar19 = *(long *)(*(long *)(this + 0x1c8) + -8);
                    }
                    iVar15 = CowData<EditorExportPlatformWindows::SSHCleanupCommand>::resize<false>
                                       (this_00,lVar19 + 1);
                    if (iVar15 == 0) {
                      if (*(long *)(this + 0x1c8) == 0) {
                        lVar18 = -1;
                        lVar19 = 0;
                      }
                      else {
                        lVar19 = *(long *)(*(long *)(this + 0x1c8) + -8);
                        lVar18 = lVar19 + -1;
                        if (-1 < lVar18) {
                          CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_copy_on_write
                                    (this_00);
                          this_02 = (CowData<char32_t> *)(lVar18 * 0x30 + *(long *)(this + 0x1c8));
                          if (*(long *)this_02 != local_88._0_8_) {
                            CowData<char32_t>::_ref(this_02,(CowData *)local_88);
                          }
                          if (*(long *)(this_02 + 8) != local_88._8_8_) {
                            CowData<char32_t>::_ref(this_02 + 8,(CowData *)this_01);
                          }
                          if (*(long *)(this_02 + 0x18) != local_70._0_8_) {
                            CowData<String>::_ref
                                      ((CowData<String> *)(this_02 + 0x18),(CowData *)local_70);
                          }
                          if (*(long *)(this_02 + 0x20) != local_70._8_8_) {
                            CowData<char32_t>::_ref(this_02 + 0x20,(CowData *)(local_70 + 8));
                          }
                          this_02[0x28] = (CowData<char32_t>)0x0;
                          goto LAB_0010fc54;
                        }
                      }
                      _err_print_index_error
                                ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar19,"p_index",
                                 "size()","",false,false);
                    }
                    else {
                      _err_print_error("push_back","./core/templates/vector.h",0x142,
                                       "Condition \"err\" is true. Returning: true",0,0);
                    }
LAB_0010fc54:
                    SSHCleanupCommand::~SSHCleanupCommand((SSHCleanupCommand *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                    Variant::Variant((Variant *)local_58,"Project started.");
                    print_line((Variant *)local_58);
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    pOVar22 = local_118;
                    pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,".zip");
                    String::operator+((String *)local_88,local_100);
                    cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    pOVar22 = local_118;
                    if (cVar14 != '\0') {
                      pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                      local_c0 = 0;
                      String::parse_latin1((String *)&local_c0,".zip");
                      String::operator+((String *)local_88,local_100);
                      (*pcVar1)(pOVar22,(String *)local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    }
                    pOVar22 = local_118;
                    pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,"_start.ps1");
                    String::operator+((String *)local_88,local_100);
                    cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    pOVar22 = local_118;
                    if (cVar14 != '\0') {
                      pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                      local_c0 = 0;
                      String::parse_latin1((String *)&local_c0,"_start.ps1");
                      String::operator+((String *)local_88,local_100);
                      (*pcVar1)(pOVar22,(String *)local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    }
                    pOVar22 = local_118;
                    pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,"_clean.ps1");
                    String::operator+((String *)local_88,local_100);
                    cVar14 = (*pcVar1)(pOVar22);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    pOVar22 = local_118;
                    iVar15 = iVar16;
                    if (cVar14 != '\0') {
                      pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                      local_c0 = 0;
                      String::parse_latin1((String *)&local_c0,"_clean.ps1");
                      String::operator+((String *)local_88,local_100);
                      (*pcVar1)(pOVar22);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    }
                    goto LAB_0010ec36;
                  }
                }
                pOVar22 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,".zip");
                String::operator+((String *)local_88,local_100);
                cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar22 = local_118;
                if (cVar14 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,".zip");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar22,(String *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
                pOVar22 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_start.ps1");
                String::operator+((String *)local_88,local_100);
                cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar22 = local_118;
                if (cVar14 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"_start.ps1");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar22,(String *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
                pOVar22 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_clean.ps1");
                String::operator+((String *)local_88,local_100);
                cVar14 = (*pcVar1)(pOVar22);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar22 = local_118;
                if (cVar14 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"_clean.ps1");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar22);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
                goto LAB_0010ec36;
              }
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,".zip");
              String::operator+((String *)local_88,local_100);
              cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar22 = local_118;
              if (cVar14 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,".zip");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar22,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              pOVar22 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_start.ps1");
              String::operator+((String *)local_88,local_100);
              cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar22 = local_118;
              if (cVar14 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_start.ps1");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar22,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              pOVar22 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_clean.ps1");
              String::operator+((String *)local_88,local_100);
              cVar14 = (*pcVar1)(pOVar22);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar22 = local_118;
              if (cVar14 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_clean.ps1");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar22);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
            }
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          }
          else {
            pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,".zip");
            String::operator+((String *)local_88,local_100);
            cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            pOVar22 = local_118;
            if (cVar14 != '\0') {
              pcVar1 = *(code **)(*(long *)local_118 + 0x208);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,".zip");
              String::operator+((String *)local_88,local_100);
              (*pcVar1)(pOVar22,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            }
            pOVar22 = local_118;
            pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_start.ps1");
            String::operator+((String *)local_88,local_100);
            cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            pOVar22 = local_118;
            if (cVar14 != '\0') {
              pcVar1 = *(code **)(*(long *)local_118 + 0x208);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_start.ps1");
              String::operator+((String *)local_88,local_100);
              (*pcVar1)(pOVar22,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            }
            pOVar22 = local_118;
            pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_clean.ps1");
            String::operator+((String *)local_88,local_100);
            cVar14 = (*pcVar1)(pOVar22);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            pOVar22 = local_118;
            if (cVar14 != '\0') {
              local_1b0 = *(code **)(*(long *)local_118 + 0x208);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_clean.ps1");
              String::operator+((String *)local_88,local_100);
              goto LAB_0010ece5;
            }
          }
        }
        else {
          pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,".zip");
          String::operator+((String *)local_88,local_100);
          cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          pOVar22 = local_118;
          if (cVar14 != '\0') {
            pcVar1 = *(code **)(*(long *)local_118 + 0x208);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,".zip");
            String::operator+((String *)local_88,local_100);
            (*pcVar1)(pOVar22,(String *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          }
          pOVar22 = local_118;
          pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"_start.ps1");
          String::operator+((String *)local_88,local_100);
          cVar14 = (*pcVar1)(pOVar22,(String *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          pOVar22 = local_118;
          if (cVar14 != '\0') {
            pcVar1 = *(code **)(*(long *)local_118 + 0x208);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_start.ps1");
            String::operator+((String *)local_88,local_100);
            (*pcVar1)(pOVar22,(String *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          }
          pOVar22 = local_118;
          pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"_clean.ps1");
          String::operator+((String *)local_88,local_100);
          cVar14 = (*pcVar1)(pOVar22);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          pOVar22 = local_118;
          iVar15 = iVar16;
          if (cVar14 != '\0') {
            local_1b0 = *(code **)(*(long *)local_118 + 0x208);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_clean.ps1");
            String::operator+((String *)local_88,local_100);
LAB_0010ece5:
            (*local_1b0)(pOVar22);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            iVar15 = iVar16;
          }
        }
LAB_0010ec36:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref(local_158);
      }
      else {
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,".zip");
        String::operator+((String *)local_88,local_100);
        DirAccess::remove_file_or_error((String *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
    }
    else {
      iVar15 = 0x2d;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
    CowData<String>::_unref(local_90);
    CowData<String>::_unref((CowData<String> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  }
  if (((local_118 != (Object *)0x0) && (cVar14 = RefCounted::unreference(), cVar14 != '\0')) &&
     (cVar14 = predelete_handler(local_118), cVar14 != '\0')) {
    (**(code **)(*(long *)local_118 + 0x140))(local_118);
    Memory::free_static(local_118,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  EditorProgress::~EditorProgress(local_b8);
LAB_0010e087:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar15;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1180,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1180,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* OS::move_to_trash(String const&) */

undefined8 OS::move_to_trash(String *param_1)

{
  return 1;
}



/* EditorExportPlatform::is_executable(String const&) const */

undefined8 EditorExportPlatform::is_executable(String *param_1)

{
  return 0;
}



/* EditorExportPlatform::get_message_count() const */

undefined4 __thiscall EditorExportPlatform::get_message_count(EditorExportPlatform *this)

{
  if (*(long *)(this + 0x188) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x188) + -8);
  }
  return 0;
}



/* EditorExportPlatform::get_worst_message_type() const */

int __thiscall EditorExportPlatform::get_worst_message_type(EditorExportPlatform *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(this + 0x188);
  if ((piVar3 == (int *)0x0) || (lVar2 = *(long *)(piVar3 + -2), lVar2 < 1)) {
    return 0;
  }
  iVar4 = 0;
  piVar1 = piVar3 + lVar2 * 6;
  if (((int)lVar2 * 3 & 1U) != 0) {
    iVar4 = 0;
    if (0 < *piVar3) {
      iVar4 = *piVar3;
    }
    piVar3 = piVar3 + 6;
    if (piVar1 == piVar3) {
      return iVar4;
    }
  }
  do {
    if (iVar4 < *piVar3) {
      iVar4 = *piVar3;
    }
    if (iVar4 < piVar3[6]) {
      iVar4 = piVar3[6];
    }
    piVar3 = piVar3 + 0xc;
  } while (piVar1 != piVar3);
  return iVar4;
}



/* EditorExportPlatform::should_update_export_options() */

undefined8 EditorExportPlatform::should_update_export_options(void)

{
  return 0;
}



/* EditorExportPlatform::get_custom_project_settings(Ref<EditorExportPreset> const&) const */

Ref * EditorExportPlatform::get_custom_project_settings(Ref *param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 2;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  return param_1;
}



/* EditorExportPlatformWindows::is_class_ptr(void*) const */

uint __thiscall
EditorExportPlatformWindows::is_class_ptr(EditorExportPlatformWindows *this,void *param_1)

{
  return (uint)CONCAT71(0x117f,(undefined4 *)param_1 ==
                               &EditorExportPlatformPC::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117f,(undefined4 *)param_1 ==
                               &EditorExportPlatform::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1180,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1180,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorExportPlatformWindows::_getv(StringName const&, Variant&) const */

undefined8 EditorExportPlatformWindows::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformWindows::_setv(StringName const&, Variant const&) */

undefined8 EditorExportPlatformWindows::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformWindows::_validate_propertyv(PropertyInfo&) const */

void EditorExportPlatformWindows::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorExportPlatformWindows::_property_can_revertv(StringName const&) const */

undefined8 EditorExportPlatformWindows::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorExportPlatformWindows::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorExportPlatformWindows::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformWindows::_notificationv(int, bool) */

void EditorExportPlatformWindows::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117b28;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117b28;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorExportPlatform::_get_message_type(int) const */

undefined4 __thiscall
EditorExportPlatform::_get_message_type(EditorExportPlatform *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x188);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00110e99;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + lVar2 * 0x18);
    }
    goto LAB_00110e99;
  }
  lVar3 = 0;
LAB_00110e99:
  _err_print_index_error
            ("_get_message_type","./editor/export/editor_export_platform.h",0x104,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  return 0;
}



/* EditorExportPlatformWindows::_get_class_namev() const */

undefined8 * EditorExportPlatformWindows::_get_class_namev(void)

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
LAB_00111893:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111893;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportPlatformWindows"
                );
      goto LAB_001118fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportPlatformWindows");
LAB_001118fe:
  return &_get_class_namev()::_class_name_static;
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
LAB_00111973:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111973;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001119de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001119de:
  return &_get_class_namev()::_class_name_static;
}



/* EditorExportPlatform::get_options_tooltip() const */

EditorExportPlatform * __thiscall
EditorExportPlatform::get_options_tooltip(EditorExportPlatform *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatform::get_device_architecture(int) const */

undefined8 EditorExportPlatform::get_device_architecture(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatform::get_debug_protocol() const */

EditorExportPlatform * __thiscall
EditorExportPlatform::get_debug_protocol(EditorExportPlatform *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = memset;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
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



/* EditorExportPlatform::_get_message_category(int) const */

CowData<char32_t> * EditorExportPlatform::_get_message_category(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  long lVar3;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x188);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00112d29;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      *(undefined8 *)this = 0;
      lVar1 = lVar1 + lVar2 * 0x18;
      if (*(long *)(lVar1 + 8) != 0) {
        CowData<char32_t>::_ref(this,(CowData *)(lVar1 + 8));
      }
      return this;
    }
    goto LAB_00112d29;
  }
  lVar3 = 0;
LAB_00112d29:
  _err_print_index_error
            ("_get_message_category","./editor/export/editor_export_platform.h",0x109,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* EditorExportPlatform::_get_message_text(int) const */

CowData<char32_t> * EditorExportPlatform::_get_message_text(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  long lVar3;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x188);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00112de9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      *(undefined8 *)this = 0;
      lVar1 = lVar1 + lVar2 * 0x18;
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref(this,(CowData *)(lVar1 + 0x10));
      }
      return this;
    }
    goto LAB_00112de9;
  }
  lVar3 = 0;
LAB_00112de9:
  _err_print_index_error
            ("_get_message_text","./editor/export/editor_export_platform.h",0x10e,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* EditorExportPlatform::get_message(int) const */

undefined4 * EditorExportPlatform::get_message(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long lVar6;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  lVar4 = (long)in_EDX;
  lVar3 = *(long *)(in_RSI + 0x188);
  if (in_EDX < 0) {
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar3 + -8);
      goto LAB_00112ed9;
    }
  }
  else if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + -8);
    if (lVar4 < lVar6) {
      puVar1 = (undefined4 *)(lVar3 + lVar4 * 0x18);
      uVar2 = *puVar1;
      *(undefined8 *)(puVar5 + 2) = 0;
      lVar3 = *(long *)(puVar1 + 2);
      *puVar5 = uVar2;
      if (lVar3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar1 + 2));
      }
      *(undefined8 *)(puVar5 + 4) = 0;
      if (*(long *)(puVar1 + 4) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 4),(CowData *)(puVar1 + 4));
      }
      return puVar5;
    }
    goto LAB_00112ed9;
  }
  lVar6 = 0;
LAB_00112ed9:
  _err_print_index_error
            ("get_message","./editor/export/editor_export_platform.h",0xff,lVar4,lVar6,"p_index",
             "messages.size()","",false,false);
  *puVar5 = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  return puVar5;
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



/* EditorExportPlatformWindows::get_class() const */

void EditorExportPlatformWindows::get_class(void)

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
            if (lVar3 == 0) goto LAB_0011315f;
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
LAB_0011315f:
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
    if (cVar6 != '\0') goto LAB_00113213;
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
      if (cVar6 != '\0') goto LAB_00113213;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00113213:
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
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
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
        if (pvVar5 == (void *)0x0) goto LAB_001134a4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001134a4:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset> const&, String const&, String
   const&) [clone .cold] */

void EditorExportPlatformWindows::_process_icon(Ref *param_1,String *param_2,String *param_3)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00113544(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorExportPlatform::ExportMessage>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorExportPlatform::ExportMessage>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

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
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
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
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  StringName::StringName((StringName *)(this + 0x10),(StringName *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
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



/* print_line(Variant const&) */

void print_line(Variant *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stringify_variants((Variant *)&local_18);
  __print_line((String *)&local_18);
  lVar2 = local_18;
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_18 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = memset;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* EditorExportPlatform::ExportOption::~ExportOption() */

void __thiscall EditorExportPlatform::ExportOption::~ExportOption(ExportOption *this)

{
  long *plVar1;
  long lVar2;
  
  if (Variant::needs_deinit[*(int *)(this + 0x30)] != '\0') {
    Variant::_clear_internal();
  }
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[3] == plVar5) {
      lVar4 = plVar2[1];
      lVar3 = plVar2[2];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = plVar2[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
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



/* List<EditorExportPlatform::ExportOption, DefaultAllocator>::~List() */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)this;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*puVar4;
    if (pvVar2 == (void *)0x0) {
      if (*(int *)(puVar4 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar2 + 0x60) == puVar4) {
      *puVar4 = *(undefined8 *)((long)pvVar2 + 0x50);
      if (pvVar2 == (void *)puVar4[1]) {
        puVar4[1] = *(undefined8 *)((long)pvVar2 + 0x58);
      }
      if (*(long *)((long)pvVar2 + 0x58) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x58) + 0x50) =
             *(undefined8 *)((long)pvVar2 + 0x50);
      }
      if (*(long *)((long)pvVar2 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x50) + 0x58) =
             *(undefined8 *)((long)pvVar2 + 0x58);
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x30)] != '\0') {
        Variant::_clear_internal();
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
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
          lVar3 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar4 = *(undefined8 **)this;
  } while (*(int *)(puVar4 + 2) != 0);
  Memory::free_static(puVar4,false);
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



/* WARNING: Removing unreachable block (ram,0x00114088) */
/* WARNING: Removing unreachable block (ram,0x0011421d) */
/* WARNING: Removing unreachable block (ram,0x00114229) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001143c0) */
/* WARNING: Removing unreachable block (ram,0x00114555) */
/* WARNING: Removing unreachable block (ram,0x00114561) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

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



/* EditorExportPlatformWindows::_initialize_classv() */

void EditorExportPlatformWindows::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorExportPlatformPC::initialize_class()::initialized == '\0') {
      if (EditorExportPlatform::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0011b010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_58 = "RefCounted";
        local_68 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "EditorExportPlatform";
        local_70 = 0;
        local_50 = 0x14;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0011b008 != RefCounted::_bind_methods) {
          EditorExportPlatform::_bind_methods();
        }
        EditorExportPlatform::initialize_class()::initialized = '\x01';
      }
      local_58 = "EditorExportPlatform";
      local_68 = 0;
      local_50 = 0x14;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorExportPlatformPC";
      local_70 = 0;
      local_50 = 0x16;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      EditorExportPlatformPC::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorExportPlatformPC";
    local_68 = 0;
    local_50 = 0x16;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorExportPlatformWindows";
    local_70 = 0;
    local_50 = 0x1b;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00114af8) */
/* WARNING: Removing unreachable block (ram,0x00114c8d) */
/* WARNING: Removing unreachable block (ram,0x00114c99) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* DirAccess::remove_file_or_error(String const&) */

void DirAccess::remove_file_or_error(String *param_1)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  Object *local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_60,2);
  pOVar3 = local_60;
  pcVar2 = *(code **)(*(long *)local_60 + 0x1d0);
  local_48 = (char *)0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
  }
  cVar5 = (*pcVar2)(pOVar3);
  pcVar4 = local_48;
  if (local_48 == (char *)0x0) {
LAB_00114e11:
    lVar7 = *(long *)param_1;
    if (cVar5 != '\0') goto LAB_00114e1d;
LAB_00114ec5:
    local_50 = 0;
    if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
    }
    local_58 = 0;
    local_48 = "Cannot remove non-existent file or directory: \'%s\'.";
    local_40 = 0x33;
    String::parse_latin1((StrRange *)&local_58);
    vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_58,
                    (CowData<char32_t> *)&local_50);
    uVar8 = 0x81;
  }
  else {
    LOCK();
    plVar1 = (long *)((long)local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00114e11;
    local_48 = (char *)0x0;
    Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    lVar7 = *(long *)param_1;
    if (cVar5 == '\0') goto LAB_00114ec5;
LAB_00114e1d:
    pOVar3 = local_60;
    pcVar2 = *(code **)(*(long *)local_60 + 0x208);
    local_48 = (char *)0x0;
    if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
    }
    iVar6 = (*pcVar2)(pOVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (iVar6 == 0) goto LAB_00114e63;
    local_50 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
    }
    local_58 = 0;
    local_48 = "Cannot remove file or directory: \'%s\'.";
    local_40 = 0x26;
    String::parse_latin1((StrRange *)&local_58);
    vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_58,
                    (CowData<char32_t> *)&local_50);
    uVar8 = 0x7e;
  }
  _err_print_error("remove_file_or_error","./core/io/dir_access.h",uVar8,"Method/function failed.",
                   (CowData<char32_t> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00114e63:
  if (local_60 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_60);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::is_class(String const&) const */

undefined8 __thiscall
EditorExportPlatformWindows::is_class(EditorExportPlatformWindows *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011508f;
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
LAB_0011508f:
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
    if (cVar6 != '\0') goto LAB_00115143;
  }
  cVar6 = String::operator==(param_1,"EditorExportPlatformWindows");
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
      if (cVar6 != '\0') goto LAB_00115143;
    }
    cVar6 = String::operator==(param_1,"EditorExportPlatformPC");
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
        if (cVar6 != '\0') goto LAB_00115143;
      }
      cVar6 = String::operator==(param_1,"EditorExportPlatform");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
          return uVar8;
        }
        goto LAB_0011532e;
      }
    }
  }
LAB_00115143:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011532e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_90 == 0) {
LAB_001154c5:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001154c5;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001154e7;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001154e7:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatform::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorExportPlatform::_get_property_listv(EditorExportPlatform *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorExportPlatform";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportPlatform";
  local_98 = 0;
  local_70 = 0x14;
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
LAB_0011586d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011586d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011588f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011588f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"EditorExportPlatform",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformPC::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorExportPlatformPC::_get_property_listv(EditorExportPlatformPC *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorExportPlatform::_get_property_listv((EditorExportPlatform *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorExportPlatformPC";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportPlatformPC";
  local_98 = 0;
  local_70 = 0x16;
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
LAB_00115c4d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115c4d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00115c6f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00115c6f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"EditorExportPlatformPC",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorExportPlatform::_get_property_listv((EditorExportPlatform *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWindows::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorExportPlatformWindows::_get_property_listv
          (EditorExportPlatformWindows *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorExportPlatformPC::_get_property_listv((EditorExportPlatformPC *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorExportPlatformWindows";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportPlatformWindows";
  local_98 = 0;
  local_70 = 0x1b;
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
LAB_0011602d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011602d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011604f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011604f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"EditorExportPlatformWindows",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorExportPlatformPC::_get_property_listv((EditorExportPlatformPC *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

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



/* EditorExportPlatformWindows::SSHCleanupCommand::~SSHCleanupCommand() */

void __thiscall
EditorExportPlatformWindows::SSHCleanupCommand::~SSHCleanupCommand(SSHCleanupCommand *this)

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
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = memset;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* CowData<EditorExportPlatform::ExportMessage>::_unref() */

void __thiscall
CowData<EditorExportPlatform::ExportMessage>::_unref
          (CowData<EditorExportPlatform::ExportMessage> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* EditorExportPlatform::clear_messages() */

void __thiscall EditorExportPlatform::clear_messages(EditorExportPlatform *this)

{
  if ((*(long *)(this + 0x188) != 0) && (*(long *)(*(long *)(this + 0x188) + -8) != 0)) {
    CowData<EditorExportPlatform::ExportMessage>::_unref
              ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
    return;
  }
  return;
}



/* CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_unref() */

void __thiscall
CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_unref
          (CowData<EditorExportPlatformWindows::SSHCleanupCommand> *this)

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
          CowData<String>::_unref((CowData<String> *)(plVar6 + 3));
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
          plVar6 = plVar6 + 6;
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



/* EditorExportPlatformWindows::~EditorExportPlatformWindows() */

void __thiscall
EditorExportPlatformWindows::~EditorExportPlatformWindows(EditorExportPlatformWindows *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00117c88;
  CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_unref
            ((CowData<EditorExportPlatformWindows::SSHCleanupCommand> *)(this + 0x1c8));
  if (*(long *)(this + 0x1b8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x1b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(code **)this = EditorExportPlatform::ssh_run_on_remote;
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 400);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(code **)this = EditorExportPlatform::ssh_run_on_remote_no_wait;
  CowData<EditorExportPlatform::ExportMessage>::_unref
            ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
  *(undefined ***)this = &PTR__initialize_classv_00117b28;
  Object::~Object((Object *)this);
  return;
}



/* EditorExportPlatformWindows::~EditorExportPlatformWindows() */

void __thiscall
EditorExportPlatformWindows::~EditorExportPlatformWindows(EditorExportPlatformWindows *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00117c88;
  CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_unref
            ((CowData<EditorExportPlatformWindows::SSHCleanupCommand> *)(this + 0x1c8));
  if (*(long *)(this + 0x1b8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x1b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(code **)this = EditorExportPlatform::ssh_run_on_remote;
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 400);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(code **)this = EditorExportPlatform::ssh_run_on_remote_no_wait;
  CowData<EditorExportPlatform::ExportMessage>::_unref
            ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
  *(undefined ***)this = &PTR__initialize_classv_00117b28;
  Object::~Object((Object *)this);
  operator_delete(this,0x1e0);
  return;
}



/* CowData<EditorExportPlatform::ExportMessage>::_realloc(long) */

undefined8 __thiscall
CowData<EditorExportPlatform::ExportMessage>::_realloc
          (CowData<EditorExportPlatform::ExportMessage> *this,long param_1)

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
/* Error CowData<EditorExportPlatform::ExportMessage>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorExportPlatform::ExportMessage>::resize<false>
          (CowData<EditorExportPlatform::ExportMessage> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
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
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x18;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00116f40:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x18 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar13 = uVar10 + 1;
  if (lVar13 == 0) goto LAB_00116f40;
  uVar11 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar11) {
        if (lVar13 != lVar9) {
          uVar6 = _realloc(this,lVar13);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      lVar7 = lVar7 + uVar11 * 0x18;
      if (*(long *)(lVar7 + 0x10) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x10);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar11 = uVar11 + 1;
    }
    goto LAB_00116f96;
  }
  if (lVar13 == lVar9) {
LAB_00116eab:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_00116f96:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00116dc1;
  }
  else {
    if (lVar7 != 0) {
      uVar6 = _realloc(this,lVar13);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00116eab;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  puVar12 = puVar8 + param_1 * 3;
  puVar4 = puVar8 + lVar7 * 3;
  puVar5 = puVar4;
  if (((int)puVar12 - (int)puVar4 & 8U) != 0) {
    *(undefined1 (*) [16])(puVar4 + 1) = (undefined1  [16])0x0;
    puVar5 = puVar4 + 3;
    if (puVar4 + 3 == puVar12) goto LAB_00116dc1;
  }
  do {
    *(undefined1 (*) [16])(puVar5 + 1) = (undefined1  [16])0x0;
    puVar4 = puVar5 + 6;
    *(undefined1 (*) [16])(puVar5 + 4) = (undefined1  [16])0x0;
    puVar5 = puVar4;
  } while (puVar4 != puVar12);
LAB_00116dc1:
  puVar8[-1] = param_1;
  return 0;
}



/* EditorExportPlatform::add_message(EditorExportPlatform::ExportMessageType, String const&, String
   const&) */

void __thiscall
EditorExportPlatform::add_message
          (EditorExportPlatform *this,int param_2,CowData *param_3,CowData *param_4)

{
  undefined4 *puVar1;
  CowData<char32_t> *this_00;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  undefined1 local_90 [16];
  char *local_78;
  long local_70;
  long local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined1  [16])0x0;
  lVar7 = *(long *)param_3;
  if (*(long *)param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_90,param_3);
    lVar7 = local_90._8_8_;
  }
  this_00 = (CowData<char32_t> *)(local_90 + 8);
  if (*(long *)param_4 != lVar7) {
    CowData<char32_t>::_ref(this_00,param_4);
    lVar7 = local_90._8_8_;
  }
  uVar4 = local_90._0_8_;
  local_78 = (char *)CONCAT44(local_78._4_4_,param_2);
  local_70 = 0;
  local_98 = param_2;
  if (local_90._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)local_90);
  }
  local_68[0] = 0;
  if (lVar7 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)this_00);
  }
  if (*(long *)(this + 0x188) == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(this + 0x188) + -8) + 1;
  }
  iVar2 = CowData<EditorExportPlatform::ExportMessage>::resize<false>
                    ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188),lVar5);
  if (iVar2 == 0) {
    if (*(long *)(this + 0x188) == 0) {
      lVar3 = -1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 0x188) + -8);
      lVar3 = lVar5 + -1;
      if (-1 < lVar3) {
        CowData<EditorExportPlatform::ExportMessage>::_copy_on_write
                  ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
        puVar1 = (undefined4 *)(*(long *)(this + 0x188) + lVar3 * 0x18);
        *puVar1 = local_78._0_4_;
        if (*(long *)(puVar1 + 2) != local_70) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)&local_70);
        }
        if (*(long *)(puVar1 + 4) != local_68[0]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 4),(CowData *)local_68);
        }
        goto LAB_00117181;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00117181:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (param_2 == 2) {
    local_a0 = 0;
    if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)this_00);
    }
    local_a8 = 0;
    if (uVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_90);
    }
    local_b0 = 0;
    local_70 = 6;
    local_78 = "%s: %s";
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String,String>
              (&local_78,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
               (CowData<char32_t> *)&local_a0);
    uVar4 = 0xf0;
    uVar6 = 1;
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 1) {
        local_a8 = 0;
        if (lVar7 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)this_00);
        }
        local_b0 = 0;
        if (uVar4 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_90);
        }
        local_b8 = 0;
        local_78 = "%s: %s";
        local_70 = 6;
        String::parse_latin1((StrRange *)&local_b8);
        vformat<String,String>
                  ((CowData<char32_t> *)&local_a0,(StrRange *)&local_b8,
                   (CowData<char32_t> *)&local_b0,(CowData<char32_t> *)&local_a8);
        Variant::Variant((Variant *)local_58,(String *)&local_a0);
        stringify_variants((Variant *)&local_78);
        __print_line((String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      goto LAB_00117379;
    }
    local_a0 = 0;
    if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)this_00);
    }
    local_a8 = 0;
    if (uVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_90);
    }
    local_b0 = 0;
    local_70 = 6;
    local_78 = "%s: %s";
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String,String>
              (&local_78,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
               (CowData<char32_t> *)&local_a0);
    uVar6 = 0;
    uVar4 = 0xf3;
  }
  _err_print_error("add_message","./editor/export/editor_export_platform.h",uVar4,
                   (CowData<char32_t> *)&local_78,0,uVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00117379:
  CowData<char32_t>::_unref(this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_realloc(long) */

undefined8 __thiscall
CowData<EditorExportPlatformWindows::SSHCleanupCommand>::_realloc
          (CowData<EditorExportPlatformWindows::SSHCleanupCommand> *this,long param_1)

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
/* Error CowData<EditorExportPlatformWindows::SSHCleanupCommand>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorExportPlatformWindows::SSHCleanupCommand>::resize<false>
          (CowData<EditorExportPlatformWindows::SSHCleanupCommand> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
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
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar10 = lVar9 * 0x30;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_00117890:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x30 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar12 = uVar11 + 1;
  if (lVar12 == 0) goto LAB_00117890;
  uVar13 = param_1;
  if (param_1 <= lVar9) {
    while (lVar9 = *(long *)this, lVar9 != 0) {
      if (*(ulong *)(lVar9 + -8) <= uVar13) {
        if (lVar12 != lVar10) {
          uVar6 = _realloc(this,lVar12);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar9 = *(long *)this;
          if (lVar9 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar9 + -8) = param_1;
        return 0;
      }
      plVar8 = (long *)(lVar9 + uVar13 * 0x30);
      if (plVar8[4] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[4] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[4];
          plVar8[4] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      CowData<String>::_unref((CowData<String> *)(plVar8 + 3));
      if (plVar8[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[1];
          plVar8[1] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (*plVar8 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = *plVar8;
          *plVar8 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      uVar13 = uVar13 + 1;
    }
    goto LAB_001178e6;
  }
  if (lVar12 == lVar10) {
LAB_001177fb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_001178e6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar9 = puVar7[-1];
    if (param_1 <= lVar9) goto LAB_001176d5;
  }
  else {
    if (lVar9 != 0) {
      uVar6 = _realloc(this,lVar12);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001177fb;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar9 = 0;
  }
  pauVar4 = (undefined1 (*) [16])(puVar7 + lVar9 * 6);
  do {
    pauVar4[2][8] = 0;
    pauVar5 = pauVar4 + 3;
    *pauVar4 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar4[1] + 8) = (undefined1  [16])0x0;
    pauVar4 = pauVar5;
  } while (pauVar5 != (undefined1 (*) [16])(puVar7 + param_1 * 6));
LAB_001176d5:
  puVar7[-1] = param_1;
  return 0;
}



/* EditorExportPlatformWindows::_process_icon(Ref<EditorExportPreset> const&, String const&, String
   const&) */

void EditorExportPlatformWindows::_GLOBAL__sub_I__process_icon(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  ENV_WIN_CODESIGN_ID_TYPE = 0;
  String::parse_latin1((String *)&ENV_WIN_CODESIGN_ID_TYPE,"GODOT_WINDOWS_CODESIGN_IDENTITY_TYPE");
  __cxa_atexit(String::~String,&ENV_WIN_CODESIGN_ID_TYPE,&__dso_handle);
  ENV_WIN_CODESIGN_ID = 0;
  String::parse_latin1((String *)&ENV_WIN_CODESIGN_ID,"GODOT_WINDOWS_CODESIGN_IDENTITY");
  __cxa_atexit(String::~String,&ENV_WIN_CODESIGN_ID,&__dso_handle);
  ENV_WIN_CODESIGN_PASS = 0;
  String::parse_latin1((String *)&ENV_WIN_CODESIGN_PASS,"GODOT_WINDOWS_CODESIGN_PASSWORD");
  __cxa_atexit(String::~String,&ENV_WIN_CODESIGN_PASS,&__dso_handle);
  if (EditorExport::_export_presets_updated == '\0') {
    EditorExport::_export_presets_updated = '\x01';
    EditorExport::_export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_updated,&__dso_handle);
  }
  if (EditorExport::_export_presets_runnable_updated != '\0') {
    return;
  }
  EditorExport::_export_presets_runnable_updated = 1;
  EditorExport::_export_presets_runnable_updated = 0;
  __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorExportPlatformWindows::~EditorExportPlatformWindows() */

void __thiscall
EditorExportPlatformWindows::~EditorExportPlatformWindows(EditorExportPlatformWindows *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorExportPlatformWindows::SSHCleanupCommand::~SSHCleanupCommand() */

void __thiscall
EditorExportPlatformWindows::SSHCleanupCommand::~SSHCleanupCommand(SSHCleanupCommand *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorExportPlatform::ExportOption, DefaultAllocator>::~List() */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorExportPlatform::ExportOption::~ExportOption() */

void __thiscall EditorExportPlatform::ExportOption::~ExportOption(ExportOption *this)

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
/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

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
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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


// This is taking way too long.