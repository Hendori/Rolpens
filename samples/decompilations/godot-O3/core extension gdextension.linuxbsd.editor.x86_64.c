
/* GDExtension::_open_library_bind_compat_88418(String const&, String const&) */

undefined8 GDExtension::_open_library_bind_compat_88418(String *param_1,String *param_2)

{
  return 2;
}



/* GDExtension::_close_library_bind_compat_88418() */

void GDExtension::_close_library_bind_compat_88418(void)

{
  return;
}



/* GDExtension::_initialize_library_bind_compat_88418(GDExtension::InitializationLevel) */

void GDExtension::_initialize_library_bind_compat_88418(void)

{
  return;
}



/* GDExtension::is_library_open() const */

undefined8 __thiscall GDExtension::is_library_open(GDExtension *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x240) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x240) + 0x168))();
    return uVar1;
  }
  return 0;
}



/* GDExtension::_register_extension_class_virtual_method(void*, void const*,
   GDExtensionClassVirtualMethodInfo const*) */

void GDExtension::_register_extension_class_virtual_method
               (void *param_1,void *param_2,GDExtensionClassVirtualMethodInfo *param_3)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,(StringName *)param_2);
  ClassDB::add_extension_class_virtual_method((StringName *)&local_28,param_3);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionResourceLoader::handles_type(String const&) const */

void __thiscall
GDExtensionResourceLoader::handles_type(GDExtensionResourceLoader *this,String *param_1)

{
  String::operator==(param_1,"GDExtension");
  return;
}



/* CowData<ObjectID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<ObjectID>::_copy_on_write(CowData<ObjectID> *this)

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



/* CowData<GDExtensionMethodBind*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GDExtensionMethodBind*>::_copy_on_write(CowData<GDExtensionMethodBind*> *this)

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



/* GDExtension::get_minimum_library_initialization_level() const */

undefined4 __thiscall GDExtension::get_minimum_library_initialization_level(GDExtension *this)

{
  char cVar1;
  
  if (*(long **)(this + 0x240) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(this + 0x240) + 0x168))();
    if (cVar1 != '\0') {
      return *(undefined4 *)(this + 0x280);
    }
  }
  _err_print_error("get_minimum_library_initialization_level","core/extension/gdextension.cpp",0x2dd
                   ,"Condition \"!is_library_open()\" is true. Returning: INITIALIZATION_LEVEL_CORE"
                   ,0,0);
  return 0;
}



/* GDExtension::_untrack_instance(void*, void*) */

void GDExtension::_untrack_instance(void *param_1,void *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  
  lVar6 = *(long *)((long)param_1 + 0x140);
  if ((lVar6 != 0) && (*(int *)((long)param_1 + 0x164) != 0)) {
    lVar7 = *(long *)((long)param_1 + 0x158);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x160) * 4);
    uVar42 = CONCAT44(0,uVar31);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x160) * 8);
    uVar32 = *(long *)((long)param_2 + 0x60) * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar40 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar40 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar40 * lVar8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    lVar37 = SUB168(auVar11 * auVar21,8);
    uVar44 = *(uint *)(lVar7 + lVar37 * 4);
    iVar35 = SUB164(auVar11 * auVar21,8);
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        if ((uint)uVar40 == uVar44) {
          lVar9 = *(long *)((long)param_1 + 0x148);
          uVar44 = *(uint *)(lVar9 + lVar37 * 4);
          uVar32 = (ulong)uVar44;
          if (*(long *)((long)param_2 + 0x60) == *(long *)(lVar6 + uVar32 * 8)) {
            lVar10 = *(long *)((long)param_1 + 0x150);
            puVar1 = (uint *)(lVar10 + uVar32 * 4);
            uVar33 = *puVar1;
            uVar40 = (ulong)uVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(uVar33 + 1) * lVar8;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            lVar37 = SUB168(auVar15 * auVar25,8) * 4;
            uVar36 = SUB164(auVar15 * auVar25,8);
            uVar43 = (ulong)uVar36;
            puVar39 = (uint *)(lVar7 + lVar37);
            if ((*puVar39 == 0) ||
               (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar39 * lVar8, auVar26._8_8_ = 0,
               auVar26._0_8_ = uVar42, auVar17._8_8_ = 0,
               auVar17._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar8,
               auVar27._8_8_ = 0, auVar27._0_8_ = uVar42, SUB164(auVar17 * auVar27,8) == 0)) {
              uVar43 = (ulong)uVar33;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar37 + lVar9);
                puVar4 = (uint *)(lVar9 + uVar40 * 4);
                puVar41 = (uint *)(uVar40 * 4 + lVar7);
                puVar2 = (undefined4 *)(lVar10 + (ulong)*puVar34 * 4);
                puVar3 = (undefined4 *)(lVar10 + (ulong)*puVar4 * 4);
                uVar5 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar5;
                uVar33 = *puVar39;
                *puVar39 = *puVar41;
                *puVar41 = uVar33;
                uVar33 = *puVar34;
                *puVar34 = *puVar4;
                *puVar4 = uVar33;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)((int)uVar43 + 1) * lVar8;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar42;
                uVar38 = SUB168(auVar20 * auVar30,8);
                lVar37 = uVar38 * 4;
                puVar39 = (uint *)(lVar7 + lVar37);
                if ((*puVar39 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar39 * lVar8, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar42, auVar19._8_8_ = 0,
                   auVar19._0_8_ =
                        (ulong)((SUB164(auVar20 * auVar30,8) + uVar31) - SUB164(auVar18 * auVar28,8)
                               ) * lVar8, auVar29._8_8_ = 0, auVar29._0_8_ = uVar42,
                   SUB164(auVar19 * auVar29,8) == 0)) break;
                uVar40 = uVar43;
                uVar43 = uVar38 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar7 + uVar43 * 4) = 0;
            uVar31 = *(int *)((long)param_1 + 0x164) - 1;
            *(uint *)((long)param_1 + 0x164) = uVar31;
            if (uVar31 <= uVar44) {
              return;
            }
            uVar33 = *(uint *)(lVar10 + (ulong)uVar31 * 4);
            *(undefined8 *)(lVar6 + uVar32 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar31 * 8);
            *puVar1 = uVar33;
            *(uint *)(lVar9 + (ulong)*(uint *)(lVar10 + (ulong)*(uint *)((long)param_1 + 0x164) * 4)
                              * 4) = uVar44;
            return;
          }
        }
        uVar33 = uVar33 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar8;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        lVar37 = SUB168(auVar12 * auVar22,8);
        uVar44 = *(uint *)(lVar7 + lVar37 * 4);
        iVar35 = SUB164(auVar12 * auVar22,8);
      } while ((uVar44 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar8, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar23,8)) * lVar8,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar33 <= SUB164(auVar14 * auVar24,8)));
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



/* GDExtensionResourceLoader::get_resource_type(String const&) const */

String * GDExtensionResourceLoader::get_resource_type(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar3 + -0x10),false);
    }
  }
  cVar4 = String::operator==((String *)&local_40,"gdextension");
  *(undefined8 *)param_1 = 0;
  if (cVar4 == '\0') {
    local_30 = 0;
    local_38 = "";
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    local_30 = 0xb;
    local_38 = "GDExtension";
    String::parse_latin1((StrRange *)param_1);
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionResourceLoader::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
GDExtensionResourceLoader::get_recognized_extensions(GDExtensionResourceLoader *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "gdextension";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (local_40 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
  }
  lVar3 = local_40;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 == 0) {
    *plVar1 = (long)this_00;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::_get_library_path(void*, void*) */

void GDExtension::_get_library_path(void *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  Object *pOVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)((long)param_1 + 0x240) == 0) ||
      (pOVar4 = (Object *)
                __dynamic_cast(*(long *)((long)param_1 + 0x240),&Object::typeinfo,
                               &GDExtensionLibraryLoader::typeinfo,0), pOVar4 == (Object *)0x0)) ||
     (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    *(undefined8 *)param_2 = 0;
  }
  else {
    local_28 = 0;
    if (*(long *)(pOVar4 + 400) == 0) {
      *(undefined8 *)param_2 = 0;
    }
    else {
      plVar1 = (long *)(*(long *)(pOVar4 + 400) + -0x10);
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00100a80;
        LOCK();
        lVar5 = *plVar1;
        bVar6 = lVar2 == lVar5;
        if (bVar6) {
          *plVar1 = lVar2 + 1;
          lVar5 = lVar2;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar5 == -1) {
LAB_00100a80:
        *(undefined8 *)param_2 = 0;
      }
      else {
        lVar2 = *(long *)(pOVar4 + 400);
        *(undefined8 *)param_2 = 0;
        local_28 = lVar2;
        if (lVar2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)param_2,(CowData *)&local_28);
          LOCK();
          plVar1 = (long *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_28 + -0x10),false);
          }
        }
      }
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_00100a97;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100a97:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::get_extension_list_config_file() */

GDExtension * __thiscall GDExtension::get_extension_list_config_file(GDExtension *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  ProjectSettings::get_project_data_path();
  local_38 = "extension_list.cfg";
  local_40 = 0;
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  String::path_join((String *)this);
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
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_48 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::deinitialize_library(GDExtension::InitializationLevel) */

void __thiscall GDExtension::deinitialize_library(GDExtension *this,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (*(long **)(this + 0x240) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(this + 0x240) + 0x168))();
    if (cVar1 != '\0') {
      if (*(int *)(this + 0x2a0) < param_2) {
        uVar3 = 0x2ed;
        pcVar2 = "Condition \"p_level > int32_t(level_initialized)\" is true.";
      }
      else {
        *(int *)(this + 0x2a0) = param_2 + -1;
        if (*(code **)(this + 0x298) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(this + 0x298))(*(undefined8 *)(this + 0x288),param_2);
          return;
        }
        uVar3 = 0x2f1;
        pcVar2 = "Parameter \"initialization.deinitialize\" is null.";
      }
      goto LAB_00100c02;
    }
  }
  uVar3 = 0x2ec;
  pcVar2 = "Condition \"!is_library_open()\" is true.";
LAB_00100c02:
  _err_print_error("deinitialize_library","core/extension/gdextension.cpp",uVar3,pcVar2,0,0);
  return;
}



/* GDExtension::GDExtension() */

void __thiscall GDExtension::GDExtension(GDExtension *this)

{
  undefined8 uVar1;
  
  Resource::Resource((Resource *)this);
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011ace0;
  uVar1 = _LC25;
  this[0x248] = (GDExtension)0x0;
  *(undefined8 *)(this + 0x278) = uVar1;
  *(undefined4 *)(this + 0x2a0) = 0xffffffff;
  this[0x2a4] = (GDExtension)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2f0) = uVar1;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2e0) = (undefined1  [16])0x0;
  return;
}



/* GDExtension::finalize_gdextensions() */

void GDExtension::finalize_gdextensions(void)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  
  if ((gdextension_interface_functions._8_8_ != 0) && (gdextension_interface_functions._44_4_ != 0))
  {
    uVar1 = *(uint *)(hash_table_size_primes +
                     (ulong)(uint)gdextension_interface_functions._40_4_ * 4);
    if (uVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(gdextension_interface_functions._16_8_ + lVar3) != 0) {
          *(int *)(gdextension_interface_functions._16_8_ + lVar3) = 0;
          pvVar2 = *(void **)(gdextension_interface_functions._8_8_ + lVar3 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(gdextension_interface_functions._8_8_ + lVar3 * 2) = 0;
        }
        lVar3 = lVar3 + 4;
      } while ((ulong)uVar1 << 2 != lVar3);
    }
    gdextension_interface_functions._44_4_ = 0;
    gdextension_interface_functions._24_16_ = (undefined1  [16])0x0;
    return;
  }
  return;
}



/* GDExtensionResourceLoader::load_gdextension_resource(String const&, Ref<GDExtension>&) */

undefined4 GDExtensionResourceLoader::load_gdextension_resource(String *param_1,Ref *param_2)

{
  Object *pOVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  String *pSVar5;
  Object *pOVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_2 != 0) &&
      (plVar2 = *(long **)(*(long *)param_2 + 0x240), plVar2 != (long *)0x0)) &&
     (cVar3 = (**(code **)(*plVar2 + 0x168))(), cVar3 != '\0')) {
    uVar7 = 0x16;
    _err_print_error("load_gdextension_resource","core/extension/gdextension.cpp",0x329,
                     "Condition \"p_extension.is_valid() && p_extension->is_library_open()\" is true. Returning: ERR_ALREADY_IN_USE"
                     ,"Cannot load GDExtension resource into already opened library.",0,0);
    goto LAB_00100e0d;
  }
  pSVar5 = (String *)GDExtensionManager::get_singleton();
  uVar4 = GDExtensionManager::load_extension(pSVar5);
  if ((uVar4 & 0xfffffffd) != 0) {
    uVar7 = 1;
    goto LAB_00100e0d;
  }
  GDExtensionManager::get_extension((String *)&local_38);
  pOVar1 = *(Object **)param_2;
  uVar7 = 0;
  pOVar6 = pOVar1;
  if (local_38 != pOVar1) {
    *(Object **)param_2 = local_38;
    if (local_38 == (Object *)0x0) {
      if (pOVar1 == (Object *)0x0) goto LAB_00100e0d;
    }
    else {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)param_2 = 0;
      }
      pOVar6 = local_38;
      if (pOVar1 == (Object *)0x0) goto LAB_00100e7e;
    }
    cVar3 = RefCounted::unreference();
    pOVar6 = local_38;
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), pOVar6 = local_38, cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
      pOVar6 = local_38;
    }
  }
LAB_00100e7e:
  if (((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
    (**(code **)(*(long *)local_38 + 0x140))(local_38);
    Memory::free_static(local_38,false);
  }
LAB_00100e0d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* GDExtensionResourceLoader::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */

long * GDExtensionResourceLoader::load
                 (long *param_1,undefined8 param_2,String *param_3,undefined8 param_4,int *param_5)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  String *pSVar4;
  long lVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar4 = (String *)GDExtensionManager::get_singleton();
  cVar2 = GDExtensionManager::is_extension_loaded(pSVar4);
  if (cVar2 == '\0') {
    local_38 = (Object *)0x0;
    iVar3 = load_gdextension_resource(param_3,(Ref *)&local_38);
    pOVar1 = local_38;
    if ((iVar3 != 0) && (param_5 != (int *)0x0)) {
      *param_5 = iVar3;
    }
    *param_1 = 0;
    if (local_38 == (Object *)0x0) goto LAB_00101020;
    lVar5 = __dynamic_cast(local_38,&Object::typeinfo,&Resource::typeinfo,0);
    if (lVar5 != 0) {
      *param_1 = lVar5;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *param_1 = 0;
      }
    }
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') goto LAB_00101020;
    cVar2 = predelete_handler(pOVar1);
  }
  else {
    GDExtensionManager::get_extension((String *)&local_38);
    *param_1 = 0;
    if (local_38 == (Object *)0x0) goto LAB_00101020;
    lVar5 = __dynamic_cast(local_38,&Object::typeinfo,&Resource::typeinfo,0);
    if (lVar5 != 0) {
      *param_1 = lVar5;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *param_1 = 0;
      }
      if (local_38 == (Object *)0x0) goto LAB_00101020;
    }
    cVar2 = RefCounted::unreference();
    pOVar1 = local_38;
    if (cVar2 == '\0') goto LAB_00101020;
    cVar2 = predelete_handler(local_38);
  }
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_00101020:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::has_library_changed() const */

void __thiscall GDExtension::has_library_changed(GDExtension *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010111e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x240) + 0x170))();
  return;
}



/* GDExtension::_clear_extension(GDExtension::Extension*) */

void __thiscall GDExtension::_clear_extension(GDExtension *this,Extension *param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  
  plVar8 = *(long **)(param_1 + 0x10);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar8 != (long *)0x0) {
    do {
      pvVar3 = (void *)*plVar8;
      if (pvVar3 == (void *)0x0) goto LAB_001011cb;
      if (plVar8 == *(long **)((long)pvVar3 + 0x18)) {
        lVar5 = *(long *)((long)pvVar3 + 8);
        lVar9 = *(long *)((long)pvVar3 + 0x10);
        *plVar8 = lVar5;
        if (pvVar3 == (void *)plVar8[1]) {
          plVar8[1] = lVar9;
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 8) = lVar5;
          lVar5 = *(long *)((long)pvVar3 + 8);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar9;
        }
        Memory::free_static(pvVar3,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)(param_1 + 0x10);
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
LAB_001011cb:
  iVar1 = *(int *)(param_1 + 0x164);
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x140);
    lVar9 = 0;
    while( true ) {
      uVar4 = *(ulong *)(lVar5 + lVar9 * 8);
      uVar6 = (uint)uVar4 & 0xffffff;
      if (uVar6 < (uint)ObjectDB::slot_max) {
        while( true ) {
          LOCK();
          bVar10 = (char)ObjectDB::spin_lock == '\0';
          if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar10) break;
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
        if ((uVar4 >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
          ObjectDB::spin_lock._0_1_ = '\0';
          if (puVar7[1] != 0) {
            Object::clear_internal_extension();
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
      if (iVar1 <= (int)lVar9 + 1) break;
      lVar9 = lVar9 + 1;
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDExtensionEditorHelp::load_xml_buffer(unsigned char const*, int) */

void GDExtensionEditorHelp::load_xml_buffer(uchar *param_1,int param_2)

{
  undefined4 in_register_00000034;
  
  if (editor_help_load_xml_buffer != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*editor_help_load_xml_buffer)(param_1,CONCAT44(in_register_00000034,param_2));
    return;
  }
  _err_print_error("load_xml_buffer","core/extension/gdextension.cpp",0x425,
                   "Parameter \"editor_help_load_xml_buffer\" is null.",0,0);
  return;
}



/* GDExtensionEditorHelp::remove_class(String const&) */

void GDExtensionEditorHelp::remove_class(String *param_1)

{
  if (editor_help_remove_class != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*editor_help_remove_class)();
    return;
  }
  _err_print_error("remove_class","core/extension/gdextension.cpp",0x42a,
                   "Parameter \"editor_help_remove_class\" is null.",0,0);
  return;
}



/* HashMap<StringName, GDExtension::Extension, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDExtension::Extension> > >::erase(StringName const&) [clone .isra.0] */

ulong __thiscall
HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
::erase(HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
        *this,StringName *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
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
  uint uVar32;
  ulong in_RAX;
  uint uVar33;
  uint uVar34;
  int iVar35;
  long lVar36;
  long *plVar37;
  ulong uVar38;
  uint uVar39;
  
  if (*(long *)(this + 8) == 0) {
    return in_RAX;
  }
  if (*(uint *)(this + 0x2c) == 0) {
    return (ulong)*(uint *)(this + 0x2c);
  }
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar6);
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  if (*(long *)param_1 == 0) {
    uVar32 = StringName::get_empty_hash();
  }
  else {
    uVar32 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar8 = *(long *)(this + 0x10);
  if (uVar32 == 0) {
    uVar32 = 1;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (ulong)uVar32 * lVar7;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar38;
  auVar12 = auVar12 * auVar22;
  lVar36 = auVar12._8_8_;
  uVar34 = *(uint *)(lVar8 + lVar36 * 4);
  uVar33 = auVar12._8_4_;
  if (uVar34 == 0) {
    return auVar12._0_8_;
  }
  uVar39 = 0;
  while ((uVar32 != uVar34 ||
         (lVar9 = *(long *)(this + 8),
         *(long *)(*(long *)(lVar9 + lVar36 * 8) + 0x10) != *(long *)param_1))) {
    uVar39 = uVar39 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar33 + 1) * lVar7;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar38;
    auVar13 = auVar13 * auVar23;
    lVar36 = auVar13._8_8_;
    uVar34 = *(uint *)(lVar8 + lVar36 * 4);
    uVar33 = auVar13._8_4_;
    if (uVar34 == 0) {
      return auVar13._0_8_;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar34 * lVar7;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar38;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar6 + uVar33) - SUB164(auVar14 * auVar24,8)) * lVar7;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar38;
    if (SUB164(auVar15 * auVar25,8) < uVar39) {
      return SUB168(auVar15 * auVar25,0);
    }
  }
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar6);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)(uVar33 + 1) * lVar7;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar38;
  lVar36 = SUB168(auVar16 * auVar26,8);
  puVar1 = (uint *)(lVar8 + lVar36 * 4);
  uVar34 = SUB164(auVar16 * auVar26,8);
  uVar32 = *puVar1;
  if (uVar32 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar32 * lVar7;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar38;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar6 + uVar34) - SUB164(auVar17 * auVar27,8)) * lVar7;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar38;
    iVar35 = SUB164(auVar18 * auVar28,8);
    while (uVar39 = uVar34, iVar35 != 0) {
      puVar2 = (uint *)(lVar8 + (ulong)uVar33 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar9 + lVar36 * 8);
      *puVar2 = uVar32;
      puVar4 = (undefined8 *)(lVar9 + (ulong)uVar33 * 8);
      uVar10 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar10;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = (ulong)(uVar39 + 1) * lVar7;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar38;
      lVar36 = SUB168(auVar21 * auVar31,8);
      puVar1 = (uint *)(lVar8 + lVar36 * 4);
      uVar34 = SUB164(auVar21 * auVar31,8);
      uVar32 = *puVar1;
      uVar33 = uVar39;
      if (uVar32 == 0) break;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)uVar32 * lVar7;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = (ulong)((uVar34 + uVar6) - SUB164(auVar19 * auVar29,8)) * lVar7;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar38;
      iVar35 = SUB164(auVar20 * auVar30,8);
    }
  }
  uVar38 = (ulong)uVar33;
  plVar5 = (long *)(lVar9 + uVar38 * 8);
  *(undefined4 *)(lVar8 + uVar38 * 4) = 0;
  plVar37 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar37) {
    *(long *)(this + 0x18) = *plVar37;
    plVar37 = (long *)*plVar5;
  }
  if (*(long **)(this + 0x20) == plVar37) {
    *(long *)(this + 0x20) = plVar37[1];
    plVar37 = (long *)*plVar5;
  }
  if ((long *)plVar37[1] != (long *)0x0) {
    *(long *)plVar37[1] = *plVar37;
    plVar37 = (long *)*plVar5;
  }
  if (*plVar37 != 0) {
    *(long *)(*plVar37 + 8) = plVar37[1];
    plVar37 = (long *)*plVar5;
  }
  GDExtension::Extension::~Extension((Extension *)(plVar37 + 3));
  if ((StringName::configured != '\0') && (plVar37[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar37,false);
  uVar11 = *(ulong *)(this + 8);
  *(undefined8 *)(uVar11 + uVar38 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return uVar11;
}



/* GDExtension::_track_instance(void*, void*) */

void GDExtension::_track_instance(void *param_1,void *param_2)

{
  long in_FS_OFFSET;
  ObjectID local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::initialize_library(GDExtension::InitializationLevel) */

void __thiscall GDExtension::initialize_library(GDExtension *this,int param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x240) != (long *)0x0) {
    cVar2 = (**(code **)(**(long **)(this + 0x240) + 0x168))();
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0x2a0);
      if (iVar1 < param_2) {
        *(int *)(this + 0x2a0) = param_2;
        if (*(code **)(this + 0x290) != (code *)0x0) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(this + 0x290))(*(undefined8 *)(this + 0x288),param_2);
            return;
          }
          goto LAB_0010185f;
        }
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010185f;
        uVar4 = 0x2e7;
        pcVar3 = "Parameter \"initialization.initialize\" is null.";
        goto LAB_00101776;
      }
      local_50 = 0;
      local_40 = 0x35;
      local_48 = "Level \'%d\' must be higher than the current level \'%d\'";
      String::parse_latin1((StrRange *)&local_50);
      vformat<GDExtension::InitializationLevel,int>
                ((CowData<char32_t> *)&local_48,(StrRange *)&local_50,param_2,iVar1);
      _err_print_error("initialize_library","core/extension/gdextension.cpp",0x2e3,
                       "Condition \"p_level <= int32_t(level_initialized)\" is true.",
                       (CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010185f;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar4 = 0x2e2;
    pcVar3 = "Condition \"!is_library_open()\" is true.";
LAB_00101776:
    _err_print_error("initialize_library","core/extension/gdextension.cpp",uVar4,pcVar3,0,0);
    return;
  }
LAB_0010185f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::get_interface_function(StringName const&) */

undefined8 GDExtension::get_interface_function(StringName *param_1)

{
  uint uVar1;
  long lVar2;
  char *__s;
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
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = *(long *)param_1;
  if ((gdextension_interface_functions._8_8_ != 0) && (gdextension_interface_functions._44_4_ != 0))
  {
    uVar1 = *(uint *)(hash_table_size_primes +
                     (ulong)(uint)gdextension_interface_functions._40_4_ * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv +
                     (ulong)(uint)gdextension_interface_functions._40_4_ * 8);
    if (lVar14 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(lVar14 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    uVar16 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(gdextension_interface_functions._16_8_ + lVar14 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      do {
        if ((uVar15 == uVar11) &&
           (*(long *)(*(long *)(gdextension_interface_functions._8_8_ + lVar14 * 8) + 0x10) ==
            *(long *)param_1)) {
          uVar12 = *(undefined8 *)
                    (*(long *)(gdextension_interface_functions._8_8_ + (ulong)uVar13 * 8) + 0x18);
          goto LAB_0010197c;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(gdextension_interface_functions._16_8_ + lVar14 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
    lVar14 = *(long *)param_1;
  }
  if (lVar14 != 0) {
    __s = *(char **)(lVar14 + 8);
    local_58 = 0;
    if (__s != (char *)0x0) {
      local_40 = strlen(__s);
      local_48 = __s;
      String::parse_latin1((StrRange *)&local_58);
      goto LAB_001019e7;
    }
    if (*(long *)(lVar14 + 0x10) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar14 + 0x10));
      goto LAB_001019e7;
    }
  }
  local_58 = 0;
LAB_001019e7:
  local_50 = 0;
  local_48 = "Attempt to get non-existent interface function: \'%s\'.";
  local_40 = 0x35;
  String::parse_latin1((StrRange *)&local_50);
  vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
  _err_print_error("get_interface_function","core/extension/gdextension.cpp",0x2b3,
                   "Parameter \"function\" is null.",(CowData<char32_t> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  uVar12 = 0;
LAB_0010197c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* GDExtension::open_library(String const&, Ref<GDExtensionLoader> const&) */

int __thiscall GDExtension::open_library(GDExtension *this,String *param_1,Ref *param_2)

{
  Object *pOVar1;
  long *plVar2;
  code *pcVar3;
  GDExtension *pGVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  GDExtension *local_48;
  undefined8 local_40;
  long local_30;
  
  pOVar1 = *(Object **)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 == (Object *)0x0) {
    iVar6 = 1;
    _err_print_error("open_library","core/extension/gdextension.cpp",0x2b8,
                     "Condition \"p_loader.is_null()\" is true. Returning: FAILED",
                     "Can\'t open GDExtension without a loader.",0,0);
  }
  else {
    pOVar7 = *(Object **)(this + 0x240);
    if (pOVar1 != pOVar7) {
      *(Object **)(this + 0x240) = pOVar1;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x240) = 0;
      }
      if (pOVar7 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar7);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
      }
      pOVar7 = *(Object **)(this + 0x240);
    }
    iVar6 = (**(code **)(*(long *)pOVar7 + 0x150))(pOVar7,param_1);
    if (iVar6 == 7) {
      local_50 = 0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
      }
      local_58 = 0;
      local_48 = (GDExtension *)0x109960;
      local_40 = 0x2c;
      String::parse_latin1((StrRange *)&local_58);
      vformat<String>((CowData<char32_t> *)&local_48,&local_58,(CowData<char32_t> *)&local_50);
      _err_print_error("open_library","core/extension/gdextension.cpp",0x2bd,
                       "Condition \"err == ERR_FILE_NOT_FOUND\" is true. Returning: err",
                       (CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    else if (iVar6 == 0) {
      plVar2 = *(long **)(this + 0x240);
      pcVar3 = *(code **)(*plVar2 + 0x158);
      local_48 = this;
      cVar5 = RefCounted::init_ref();
      if (cVar5 == '\0') {
        local_48 = (GDExtension *)0x0;
      }
      iVar6 = (*pcVar3)(plVar2,gdextension_get_proc_address,&local_48,this + 0x280);
      if (local_48 != (GDExtension *)0x0) {
        cVar5 = RefCounted::unreference();
        pGVar4 = local_48;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler((Object *)local_48);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pGVar4 + 0x140))(pGVar4);
            Memory::free_static(pGVar4,false);
          }
        }
      }
      if (iVar6 == 0) {
        *(undefined4 *)(this + 0x2a0) = 0xffffffff;
      }
      else {
        (**(code **)(**(long **)(this + 0x240) + 0x160))();
      }
    }
    else {
      local_50 = 0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
      }
      local_58 = 0;
      local_48 = (GDExtension *)0x1099d0;
      local_40 = 0x2d;
      String::parse_latin1((StrRange *)&local_58);
      vformat<String>((CowData<char32_t> *)&local_48,&local_58,(CowData<char32_t> *)&local_50);
      _err_print_error("open_library","core/extension/gdextension.cpp",0x2be,
                       "Condition \"err != OK\" is true. Returning: err",
                       (CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::register_interface_function(StringName const&, void (*)()) */

void GDExtension::register_interface_function(StringName *param_1,_func_void *param_2)

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
  uint uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((gdextension_interface_functions._8_8_ != 0) && (gdextension_interface_functions._44_4_ != 0))
  {
    uVar1 = *(uint *)(hash_table_size_primes +
                     (ulong)(uint)gdextension_interface_functions._40_4_ * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv +
                     (ulong)(uint)gdextension_interface_functions._40_4_ * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(gdextension_interface_functions._16_8_ + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(gdextension_interface_functions._8_8_ + lVar13 * 8) + 0x10) ==
            *(long *)param_1)) {
          StringName::StringName((StringName *)&local_58,param_1);
          local_48 = 
          "Attempt to register interface function \'%s\', which appears to be already registered.";
          local_50 = 0;
          local_40 = 0x54;
          String::parse_latin1((StrRange *)&local_50);
          vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,
                              (StringName *)&local_58);
          _err_print_error("register_interface_function","core/extension/gdextension.cpp",0x2ad,
                           "Condition \"gdextension_interface_functions.has(p_function_name)\" is true."
                           ,(CowData<char32_t> *)&local_48,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          goto LAB_00101fec;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(gdextension_interface_functions._16_8_ + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  HashMap<StringName,void(*)(),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,void(*)()>>>
  ::insert((StringName *)&local_48,(_func_void *)gdextension_interface_functions,SUB81(param_1,0));
LAB_00101fec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::initialize_gdextensions() */

void GDExtension::initialize_gdextensions(void)

{
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gdextension_setup_interface();
  StringName::StringName((StringName *)&local_18,"classdb_register_extension_class",false);
  register_interface_function((StringName *)&local_18,_register_extension_class);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_18,"classdb_register_extension_class2",false);
  register_interface_function((StringName *)&local_18,_register_extension_class2);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_18,"classdb_register_extension_class3",false);
  register_interface_function((StringName *)&local_18,_register_extension_class3);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_18,"classdb_register_extension_class4",false);
  register_interface_function((StringName *)&local_18,_register_extension_class4);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_18,"classdb_register_extension_class_method",false);
  register_interface_function((StringName *)&local_18,_register_extension_class_method);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_18,"classdb_register_extension_class_virtual_method",false);
  register_interface_function((StringName *)&local_18,_register_extension_class_virtual_method);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_18,"classdb_register_extension_class_integer_constant",false);
  register_interface_function((StringName *)&local_18,_register_extension_class_integer_constant);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_18,"classdb_register_extension_class_property",false);
  register_interface_function((StringName *)&local_18,_register_extension_class_property);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_18,"classdb_register_extension_class_property_indexed",false);
  register_interface_function((StringName *)&local_18,_register_extension_class_property_indexed);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_18,"classdb_register_extension_class_property_group",false);
  register_interface_function((StringName *)&local_18,_register_extension_class_property_group);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_18,"classdb_register_extension_class_property_subgroup",false);
  register_interface_function((StringName *)&local_18,_register_extension_class_property_subgroup);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_18,"classdb_register_extension_class_signal",false);
  register_interface_function((StringName *)&local_18,_register_extension_class_signal);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_18,"classdb_unregister_extension_class",false);
  register_interface_function((StringName *)&local_18,_unregister_extension_class);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_18,"get_library_path",false);
  register_interface_function((StringName *)&local_18,_get_library_path);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* GDExtension::_bind_compatibility_methods() */

void GDExtension::_bind_compatibility_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_88 [2];
  CowData<StringName> local_78 [16];
  char *local_68;
  char *pcStack_60;
  undefined8 local_58;
  char **local_48;
  undefined1 auStack_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_68 = "path";
  pcStack_60 = "entry_symbol";
  auStack_40._8_8_ = auStack_40._0_8_;
  auStack_40._0_8_ = &pcStack_60;
  local_48 = &local_68;
  D_METHODP((char *)local_88,(char ***)"open_library",(uint)&local_48);
  auStack_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<GDExtension,Error,String_const&,String_const&>
                     (_open_library_bind_compat_88418);
  ClassDB::bind_methodfi(1,pMVar1,true,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_88,(char ***)"close_library",0);
  auStack_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<GDExtension>(_close_library_bind_compat_88418);
  ClassDB::bind_methodfi(1,pMVar1,true,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  pcStack_60 = (char *)0x0;
  local_68 = "level";
  local_48 = &local_68;
  D_METHODP((char *)local_88,(char ***)"initialize_library",(uint)&local_48);
  auStack_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar1 = create_method_bind<GDExtension,GDExtension::InitializationLevel>
                     (_initialize_library_bind_compat_88418);
  ClassDB::bind_methodfi(1,pMVar1,true,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::_bind_methods() */

void GDExtension::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  long local_78 [2];
  CowData<char32_t> local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_88,(char ***)"is_library_open",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<GDExtension,bool>(is_library_open);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_78);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_88,(char ***)"get_minimum_library_initialization_level",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<GDExtension,GDExtension::InitializationLevel>
                     (get_minimum_library_initialization_level);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_78);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"INITIALIZATION_LEVEL_CORE",false);
  local_88 = "INITIALIZATION_LEVEL_CORE";
  local_a0 = 0;
  local_80 = 0x19;
  String::parse_latin1((StrRange *)&local_a0);
  GetTypeInfo<GDExtension::InitializationLevel,void>::get_class_info
            ((GetTypeInfo<GDExtension::InitializationLevel,void> *)&local_88);
  local_98 = local_78[0];
  local_78[0] = 0;
  CowData<char32_t>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_88 = "GDExtension";
  local_a8 = 0;
  local_80 = 0xb;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_88,(StringName *)&local_98,(StringName *)&local_90,0,false);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"INITIALIZATION_LEVEL_SERVERS",false);
  local_88 = "INITIALIZATION_LEVEL_SERVERS";
  local_a0 = 0;
  local_80 = 0x1c;
  String::parse_latin1((StrRange *)&local_a0);
  GetTypeInfo<GDExtension::InitializationLevel,void>::get_class_info
            ((GetTypeInfo<GDExtension::InitializationLevel,void> *)&local_88);
  local_98 = local_78[0];
  local_78[0] = 0;
  CowData<char32_t>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_88 = "GDExtension";
  local_a8 = 0;
  local_80 = 0xb;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_88,(StringName *)&local_98,(StringName *)&local_90,1,false);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"INITIALIZATION_LEVEL_SCENE",false);
  local_88 = "INITIALIZATION_LEVEL_SCENE";
  local_a0 = 0;
  local_80 = 0x1a;
  String::parse_latin1((StrRange *)&local_a0);
  GetTypeInfo<GDExtension::InitializationLevel,void>::get_class_info
            ((GetTypeInfo<GDExtension::InitializationLevel,void> *)&local_88);
  local_98 = local_78[0];
  local_78[0] = 0;
  CowData<char32_t>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_88 = "GDExtension";
  local_a8 = 0;
  local_80 = 0xb;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_88,(StringName *)&local_98,(StringName *)&local_90,2,false);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"INITIALIZATION_LEVEL_EDITOR",false);
  local_88 = "INITIALIZATION_LEVEL_EDITOR";
  local_a0 = 0;
  local_80 = 0x1b;
  String::parse_latin1((StrRange *)&local_a0);
  GetTypeInfo<GDExtension::InitializationLevel,void>::get_class_info
            ((GetTypeInfo<GDExtension::InitializationLevel,void> *)&local_88);
  local_98 = local_78[0];
  local_78[0] = 0;
  CowData<char32_t>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_88 = "GDExtension";
  local_a8 = 0;
  local_80 = 0xb;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_88,(StringName *)&local_98,(StringName *)&local_90,3,false);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionEditorPlugins::remove_extension_class(StringName const&) */

void GDExtensionEditorPlugins::remove_extension_class(StringName *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (editor_node_remove_plugin != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*editor_node_remove_plugin)();
    return;
  }
  if ((extension_classes._8_8_ != 0) && (lVar4 = *(long *)(extension_classes._8_8_ + -8), 0 < lVar4)
     ) {
    lVar2 = 0;
    do {
      if (*(long *)param_1 == *(long *)(extension_classes._8_8_ + lVar2 * 8)) {
        if (lVar4 <= lVar2) {
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,lVar2,lVar4,"p_index","size()",""
                     ,false,false);
          return;
        }
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(extension_classes + 8));
        if (extension_classes._8_8_ == 0) {
          lVar4 = -1;
        }
        else {
          lVar4 = *(long *)(extension_classes._8_8_ + -8) + -1;
          if (lVar2 < lVar4) {
            plVar3 = (long *)(extension_classes._8_8_ + lVar2 * 8);
            do {
              if (*plVar3 != plVar3[1]) {
                StringName::unref();
                lVar1 = plVar3[1];
                plVar3[1] = 0;
                *plVar3 = lVar1;
              }
              lVar2 = lVar2 + 1;
              plVar3 = plVar3 + 1;
            } while (lVar4 != lVar2);
          }
        }
        CowData<StringName>::resize<false>((CowData<StringName> *)(extension_classes + 8),lVar4);
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar4 != lVar2);
    return;
  }
  return;
}



/* Vector<StringName>::push_back(StringName) [clone .isra.0] */

void __thiscall Vector<StringName>::push_back(Vector<StringName> *this,StringName *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        StringName::operator=((StringName *)(*(long *)(this + 8) + lVar3 * 8),param_2);
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



/* GDExtensionEditorPlugins::add_extension_class(StringName const&) */

void GDExtensionEditorPlugins::add_extension_class(StringName *param_1)

{
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (editor_node_add_plugin == (code *)0x0) {
    StringName::StringName((StringName *)&local_18,param_1);
    Vector<StringName>::push_back((Vector<StringName> *)extension_classes,&local_18);
    if ((StringName::configured != '\0') && (local_18 != 0)) {
      StringName::unref();
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*editor_node_add_plugin)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::prepare_reload() */

void __thiscall GDExtension::prepare_reload(GDExtension *this)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  List *pLVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 (*pauVar8) [16];
  char cVar9;
  long lVar10;
  CowData<char32_t> *pCVar11;
  StringName *pSVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  CowData *pCVar17;
  uint uVar18;
  ulong *puVar19;
  long *plVar20;
  int *piVar21;
  long in_FS_OFFSET;
  bool bVar22;
  ObjectID *local_100;
  bool local_c9;
  undefined1 (*local_c8) [16];
  undefined8 *local_c0;
  undefined1 (*local_b8) [16];
  undefined1 local_b0;
  int local_a8 [8];
  int local_88 [8];
  ulong local_68;
  undefined1 local_60 [2] [16];
  long local_40;
  
  puVar3 = *(undefined8 **)(this + 0x268);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x2a4] = (GDExtension)0x1;
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar15 = (undefined8 *)puVar3[0x28];
    *(undefined1 *)(puVar3 + 0x24) = 1;
    while (puVar15 != (undefined8 *)0x0) {
      plVar20 = puVar15 + 3;
      puVar15 = (undefined8 *)*puVar15;
      *(undefined1 *)(*plVar20 + 0xd0) = 1;
    }
    iVar2 = *(int *)((long)puVar3 + 0x17c);
    if (iVar2 != 0) break;
LAB_0010316c:
    puVar3 = (undefined8 *)*puVar3;
  }
  local_100 = (ObjectID *)puVar3[0x2b];
  iVar16 = 0;
  do {
    uVar18 = (uint)*(ulong *)local_100 & 0xffffff;
    if (uVar18 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar14 = (ulong)local_b8 >> 8;
        local_b8 = (undefined1 (*) [16])(uVar14 << 8);
        LOCK();
        bVar22 = (char)ObjectDB::spin_lock == '\0';
        if (bVar22) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar22) break;
        local_b8 = (undefined1 (*) [16])(uVar14 << 8);
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar19 = (ulong *)((ulong)uVar18 * 0x10 + ObjectDB::object_slots);
      if ((*(ulong *)local_100 >> 0x18 & 0x7fffffffff) == (*puVar19 & 0x7fffffffff)) {
        pLVar4 = (List *)puVar19[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (pLVar4 != (List *)0x0) {
          local_c8 = (undefined1 (*) [16])0x0;
          local_c0 = (undefined8 *)0x0;
          Object::get_property_list
                    (pLVar4,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_c0,0));
          if (local_c0 == (undefined8 *)0x0) {
LAB_00103897:
            local_b8 = (undefined1 (*) [16])0x0;
          }
          else {
            piVar21 = (int *)*local_c0;
            if (piVar21 == (int *)0x0) goto LAB_00103897;
LAB_00103417:
            do {
              if ((*(byte *)(piVar21 + 10) & 2) != 0) {
                StringName::StringName((StringName *)&local_b8,(String *)(piVar21 + 2),false);
                Object::get((StringName *)local_a8,(bool *)pLVar4);
                if ((StringName::configured != '\0') && (local_b8 != (undefined1 (*) [16])0x0)) {
                  StringName::unref();
                }
                StringName::StringName((StringName *)&local_b8,(String *)(piVar21 + 2),false);
                pSVar12 = (StringName *)(*(long *)(pLVar4 + 8) + 0x20);
                if ((*(long *)(pLVar4 + 8) == 0) &&
                   (pSVar12 = *(StringName **)(pLVar4 + 0x118), pSVar12 == (StringName *)0x0)) {
                  pSVar12 = (StringName *)(**(code **)(*(long *)pLVar4 + 0x40))(pLVar4);
                }
                ClassDB::class_get_default_property_value
                          ((StringName *)local_88,pSVar12,(bool *)&local_b8);
                if ((StringName::configured != '\0') && (local_b8 != (undefined1 (*) [16])0x0)) {
                  StringName::unref();
                }
                if (local_88[0] == 0) {
LAB_0010323f:
                  if (((*piVar21 != 0x18) || (cVar9 = Variant::is_zero(), cVar9 == '\0')) ||
                     ((*(byte *)((long)piVar21 + 0x29) & 0x20) != 0)) {
                    local_b8 = (undefined1 (*) [16])0x0;
                    plVar20 = (long *)(*(long *)(piVar21 + 2) + -0x10);
                    if (*(long *)(piVar21 + 2) == 0) {
                      local_68 = 0;
                      pauVar13 = (undefined1 (*) [16])0x0;
                    }
                    else {
                      do {
                        lVar5 = *plVar20;
                        if (lVar5 == 0) goto LAB_0010328e;
                        LOCK();
                        lVar10 = *plVar20;
                        bVar22 = lVar5 == lVar10;
                        if (bVar22) {
                          *plVar20 = lVar5 + 1;
                          lVar10 = lVar5;
                        }
                        UNLOCK();
                      } while (!bVar22);
                      if (lVar10 != -1) {
                        local_b8 = *(undefined1 (**) [16])(piVar21 + 2);
                      }
LAB_0010328e:
                      pauVar13 = local_b8;
                      local_68 = 0;
                      if (local_b8 != (undefined1 (*) [16])0x0) {
                        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8)
                        ;
                      }
                    }
                    Variant::Variant((Variant *)local_60,(Variant *)local_a8);
                    if (local_c8 == (undefined1 (*) [16])0x0) {
                      local_c8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                      *(undefined4 *)local_c8[1] = 0;
                      *local_c8 = (undefined1  [16])0x0;
                    }
                    pauVar8 = local_c8;
                    pCVar11 = (CowData<char32_t> *)operator_new(0x38,DefaultAllocator::alloc);
                    *(undefined1 (*) [16])(pCVar11 + 0x10) = (undefined1  [16])0x0;
                    *(undefined8 *)pCVar11 = 0;
                    *(undefined4 *)(pCVar11 + 8) = 0;
                    *(undefined8 *)(pCVar11 + 0x30) = 0;
                    *(undefined1 (*) [16])(pCVar11 + 0x20) = (undefined1  [16])0x0;
                    if (local_68 != 0) {
                      CowData<char32_t>::_ref(pCVar11,(CowData *)&local_68);
                    }
                    Variant::operator=((Variant *)(pCVar11 + 8),(Variant *)local_60);
                    *(undefined8 *)(pCVar11 + 0x28) = *(undefined8 *)(*pauVar8 + 8);
                    *(undefined8 *)(pCVar11 + 0x20) = 0;
                    lVar5 = *(long *)(*pauVar8 + 8);
                    *(undefined1 (**) [16])(pCVar11 + 0x30) = pauVar8;
                    if (lVar5 != 0) {
                      *(CowData<char32_t> **)(lVar5 + 0x20) = pCVar11;
                    }
                    lVar5 = *(long *)*pauVar8;
                    *(CowData<char32_t> **)(*pauVar8 + 8) = pCVar11;
                    if (lVar5 == 0) {
                      *(CowData<char32_t> **)*pauVar8 = pCVar11;
                    }
                    *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
                    if (Variant::needs_deinit[(int)local_60[0]._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    uVar14 = local_68;
                    if (local_68 != 0) {
                      LOCK();
                      plVar20 = (long *)(local_68 - 0x10);
                      *plVar20 = *plVar20 + -1;
                      UNLOCK();
                      pauVar13 = local_b8;
                      if (*plVar20 == 0) {
                        local_68 = 0;
                        Memory::free_static((void *)(uVar14 - 0x10),false);
                        pauVar13 = local_b8;
                      }
                    }
                    if (pauVar13 != (undefined1 (*) [16])0x0) {
                      LOCK();
                      plVar20 = (long *)((long)pauVar13 - 0x10);
                      *plVar20 = *plVar20 + -1;
                      UNLOCK();
                      if (*plVar20 == 0) {
                        Memory::free_static((void *)((long)local_b8 - 0x10),false);
                      }
                    }
                  }
                  if (Variant::needs_deinit[local_88[0]] != '\0') goto LAB_00103519;
LAB_001033fa:
                  cVar9 = Variant::needs_deinit[local_a8[0]];
                }
                else {
                  local_60[0] = (undefined1  [16])0x0;
                  local_c9 = true;
                  local_b8 = (undefined1 (*) [16])((ulong)local_b8 & 0xffffffff00000000);
                  local_68 = local_68 & 0xffffffff00000000;
                  Variant::evaluate((Operator *)&local_b8,(Variant *)local_a8,(Variant *)local_88,
                                    (Variant *)&local_68,&local_c9);
                  bVar22 = Variant::operator_cast_to_bool((Variant *)&local_68);
                  if (Variant::needs_deinit[(int)local_68] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (!bVar22) goto LAB_0010323f;
                  if (Variant::needs_deinit[local_88[0]] == '\0') goto LAB_001033fa;
LAB_00103519:
                  Variant::_clear_internal();
                  cVar9 = Variant::needs_deinit[local_a8[0]];
                }
                if (cVar9 != '\0') {
                  Variant::_clear_internal();
                  piVar21 = *(int **)(piVar21 + 0xc);
                  if (piVar21 == (int *)0x0) break;
                  goto LAB_00103417;
                }
              }
              piVar21 = *(int **)(piVar21 + 0xc);
            } while (piVar21 != (int *)0x0);
            local_b8 = (undefined1 (*) [16])0x0;
            if ((local_c8 != (undefined1 (*) [16])0x0) &&
               (pCVar17 = *(CowData **)*local_c8, pCVar17 != (CowData *)0x0)) {
              pauVar13 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar13[1] = 0;
              *pauVar13 = (undefined1  [16])0x0;
              local_b8 = pauVar13;
              do {
                while( true ) {
                  pCVar11 = (CowData<char32_t> *)operator_new(0x38,DefaultAllocator::alloc);
                  *(undefined8 *)pCVar11 = 0;
                  *(undefined1 (*) [16])(pCVar11 + 0x10) = (undefined1  [16])0x0;
                  lVar5 = *(long *)pCVar17;
                  *(undefined4 *)(pCVar11 + 8) = 0;
                  *(undefined8 *)(pCVar11 + 0x30) = 0;
                  *(undefined1 (*) [16])(pCVar11 + 0x20) = (undefined1  [16])0x0;
                  if (lVar5 != 0) {
                    CowData<char32_t>::_ref(pCVar11,pCVar17);
                  }
                  Variant::operator=((Variant *)(pCVar11 + 8),(Variant *)(pCVar17 + 8));
                  uVar6 = *(undefined8 *)(*pauVar13 + 8);
                  *(undefined1 (**) [16])(pCVar11 + 0x30) = pauVar13;
                  *(undefined8 *)(pCVar11 + 0x20) = 0;
                  *(undefined8 *)(pCVar11 + 0x28) = uVar6;
                  if (*(long *)(*pauVar13 + 8) != 0) {
                    *(CowData<char32_t> **)(*(long *)(*pauVar13 + 8) + 0x20) = pCVar11;
                  }
                  lVar5 = *(long *)*pauVar13;
                  *(CowData<char32_t> **)(*pauVar13 + 8) = pCVar11;
                  if (lVar5 != 0) break;
                  *(CowData<char32_t> **)*pauVar13 = pCVar11;
                  pCVar17 = *(CowData **)(pCVar17 + 0x20);
                  *(int *)pauVar13[1] = *(int *)pauVar13[1] + 1;
                  if (pCVar17 == (CowData *)0x0) goto LAB_0010366a;
                }
                pCVar17 = *(CowData **)(pCVar17 + 0x20);
                *(int *)pauVar13[1] = *(int *)pauVar13[1] + 1;
              } while (pCVar17 != (CowData *)0x0);
            }
          }
LAB_0010366a:
          uVar14 = *(ulong *)(pLVar4 + 8);
          if (uVar14 != 0) {
            uVar14 = (ulong)*(byte *)(uVar14 + 0x2e);
          }
          local_b0 = (undefined1)uVar14;
          puVar15 = (undefined8 *)
                    HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
                    ::operator[]((HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
                                  *)(puVar3 + 0x30),local_100);
          plVar20 = (long *)*puVar15;
          if (plVar20 != (long *)0x0) {
            do {
              plVar7 = (long *)*plVar20;
              if (plVar7 == (long *)0x0) goto LAB_0010374f;
              if ((long *)plVar7[6] == plVar20) {
                *plVar20 = plVar7[4];
                if (plVar7 == (long *)plVar20[1]) {
                  plVar20[1] = plVar7[5];
                }
                if (plVar7[5] != 0) {
                  *(long *)(plVar7[5] + 0x20) = plVar7[4];
                }
                if (plVar7[4] != 0) {
                  *(long *)(plVar7[4] + 0x28) = plVar7[5];
                }
                if (Variant::needs_deinit[(int)plVar7[1]] != '\0') {
                  Variant::_clear_internal();
                }
                if (*plVar7 != 0) {
                  LOCK();
                  plVar1 = (long *)(*plVar7 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar5 = *plVar7;
                    *plVar7 = 0;
                    Memory::free_static((void *)(lVar5 + -0x10),false);
                  }
                }
                Memory::free_static(plVar7,false);
                *(int *)(plVar20 + 2) = (int)plVar20[2] + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              plVar20 = (long *)*puVar15;
            } while ((int)plVar20[2] != 0);
            Memory::free_static(plVar20,false);
          }
LAB_0010374f:
          *puVar15 = local_b8;
          local_b8 = (undefined1 (*) [16])0x0;
          *(undefined1 *)(puVar15 + 1) = local_b0;
          List<Pair<String,Variant>,DefaultAllocator>::~List
                    ((List<Pair<String,Variant>,DefaultAllocator> *)&local_b8);
          List<PropertyInfo,DefaultAllocator>::~List
                    ((List<PropertyInfo,DefaultAllocator> *)&local_c0);
          List<Pair<String,Variant>,DefaultAllocator>::~List
                    ((List<Pair<String,Variant>,DefaultAllocator> *)&local_c8);
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    iVar16 = iVar16 + 1;
    if (iVar2 <= iVar16) goto LAB_0010316c;
    local_100 = local_100 + 8;
  } while( true );
}



/* GDExtension::_register_extension_class_integer_constant(void*, void const*, void const*, void
   const*, long, unsigned char) */

void GDExtension::_register_extension_class_integer_constant
               (void *param_1,void *param_2,void *param_3,void *param_4,long param_5,uchar param_6)

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
  uint uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_88,(StringName *)param_2);
  StringName::StringName((StringName *)&local_80,(StringName *)param_3);
  StringName::StringName((StringName *)&local_78,(StringName *)param_4);
  if ((*(long *)((long)param_1 + 600) != 0) && (*(int *)((long)param_1 + 0x27c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar11 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8);
    if (local_88 == 0) {
      uVar10 = StringName::get_empty_hash();
    }
    else {
      uVar10 = *(uint *)(local_88 + 0x20);
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar10 * lVar11;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar13 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar14 == uVar10) &&
           (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar13 * 8) + 0x10) == local_88)) {
          lVar11 = HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                   ::operator[]((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                                 *)((long)param_1 + 0x250),(StringName *)&local_88);
          if (*(char *)(lVar11 + 0x108) == '\0') {
            ClassDB::bind_integer_constant
                      ((StringName *)&local_88,(StringName *)&local_80,(StringName *)&local_78,
                       param_5,param_6 != '\0');
          }
          goto joined_r0x00103bd8;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar11;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar13 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar14 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar14 * lVar11, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar4 * auVar8,8)) * lVar11,
              auVar9._8_8_ = 0, auVar9._0_8_ = uVar16, uVar15 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = "Attempt to register extension constant \'%s\' for unexisting class \'%s\'.";
  local_70 = 0;
  local_50 = 0x46;
  String::parse_latin1((StrRange *)&local_70);
  vformat<StringName,StringName>
            ((CowData<char32_t> *)&local_58,(StrRange *)&local_70,(StringName *)&local_68,
             (StringName *)&local_60);
  _err_print_error("_register_extension_class_integer_constant","core/extension/gdextension.cpp",
                   0x216,"Condition \"!self->extension_classes.has(class_name)\" is true.",
                   (CowData<char32_t> *)&local_58,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') &&
     ((local_68 == 0 || (StringName::unref(), StringName::configured != '\0')))) {
    if (local_60 != 0) {
      StringName::unref();
joined_r0x00103bd8:
      if (StringName::configured == '\0') goto LAB_00103a8d;
    }
    if ((((local_78 == 0) || (StringName::unref(), StringName::configured != '\0')) &&
        ((local_80 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_88 != 0)) {
      StringName::unref();
    }
  }
LAB_00103a8d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDExtension::_register_extension_class_property_indexed(void*, void const*,
   GDExtensionPropertyInfo const*, void const*, void const*, long) */

void GDExtension::_register_extension_class_property_indexed
               (void *param_1,void *param_2,GDExtensionPropertyInfo *param_3,void *param_4,
               void *param_5,long param_6)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  CowData<char32_t> *local_d8;
  int local_c8;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  size_t local_80;
  char *local_78;
  size_t local_70;
  long local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_b8,(StringName *)param_2);
  StringName::StringName((StringName *)&local_b0,(StringName *)param_4);
  StringName::StringName((StringName *)&local_a8,(StringName *)param_5);
  lVar12 = **(long **)(param_3 + 8);
  if (lVar12 == 0) {
    local_a0 = 0;
  }
  else {
    pcVar2 = *(char **)(lVar12 + 8);
    local_a0 = 0;
    if (pcVar2 == (char *)0x0) {
      if (*(long *)(lVar12 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(lVar12 + 0x10));
      }
    }
    else {
      local_70 = strlen(pcVar2);
      local_78 = pcVar2;
      String::parse_latin1((StrRange *)&local_a0);
    }
  }
  local_d8 = (CowData<char32_t> *)&local_a0;
  if ((*(long *)((long)param_1 + 600) != 0) && (*(int *)((long)param_1 + 0x27c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8);
    if (local_b8 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_b8 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar12;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        if ((uVar15 == uVar11) &&
           (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar14 * 8) + 0x10) == local_b8)) {
          lVar12 = HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                   ::operator[]((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                                 *)((long)param_1 + 0x250),(StringName *)&local_b8);
          if (*(char *)(lVar12 + 0x108) == '\0') {
            local_78 = (char *)CONCAT44(local_78._4_4_,*(undefined4 *)param_3);
            lVar12 = **(long **)(param_3 + 8);
            if (lVar12 == 0) {
              local_70 = 0;
            }
            else {
              pcVar2 = *(char **)(lVar12 + 8);
              local_70 = 0;
              if (pcVar2 == (char *)0x0) {
                if (*(long *)(lVar12 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar12 + 0x10))
                  ;
                }
              }
              else {
                local_80 = strlen(pcVar2);
                local_88 = pcVar2;
                String::parse_latin1((StrRange *)&local_70);
              }
            }
            StringName::StringName((StringName *)&local_68,*(StringName **)(param_3 + 0x10));
            local_60 = *(undefined4 *)(param_3 + 0x18);
            local_58 = 0;
            if (*(long *)*(CowData **)(param_3 + 0x20) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,*(CowData **)(param_3 + 0x20));
            }
            local_50 = *(undefined4 *)(param_3 + 0x28);
            local_c8 = (int)param_6;
            ClassDB::add_property
                      ((StringName *)&local_b8,(PropertyInfo *)&local_78,(StringName *)&local_b0,
                       (StringName *)&local_a8,local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          }
          goto LAB_00103ed0;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar12;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar14 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar12, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar12,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  StringName::StringName((StringName *)&local_88,(StringName *)&local_b8);
  local_90 = 0;
  if (local_a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)local_d8);
  }
  local_98 = 0;
  local_70 = 0x4c;
  local_78 = "Attempt to register extension class property \'%s\' for unexisting class \'%s\'.";
  String::parse_latin1((StrRange *)&local_98);
  vformat<String,StringName>
            ((CowData<char32_t> *)&local_78,(StrRange *)&local_98,(CowData<char32_t> *)&local_90,
             (StringName *)&local_88);
  _err_print_error("_register_extension_class_property_indexed","core/extension/gdextension.cpp",
                   0x22e,"Condition \"!self->extension_classes.has(class_name)\" is true.",
                   (CowData<char32_t> *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
LAB_00103ed0:
  CowData<char32_t>::_unref(local_d8);
  if (StringName::configured != '\0') {
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103f28;
    }
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103f28;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00103f28:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::_register_extension_class_property(void*, void const*, GDExtensionPropertyInfo
   const*, void const*, void const*) */

void GDExtension::_register_extension_class_property
               (void *param_1,void *param_2,GDExtensionPropertyInfo *param_3,void *param_4,
               void *param_5)

{
  _register_extension_class_property_indexed(param_1,param_2,param_3,param_4,param_5,-1);
  return;
}



/* GDExtension::_register_extension_class_property_group(void*, void const*, void const*, void
   const*) */

void GDExtension::_register_extension_class_property_group
               (void *param_1,void *param_2,void *param_3,void *param_4)

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
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_88,(StringName *)param_2);
                    /* WARNING: Load size is inaccurate */
  local_80 = 0;
  if (*param_3 != 0) {
    plVar1 = (long *)(*param_3 + -0x10);
    do {
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_00104150;
      LOCK();
      lVar14 = *plVar1;
      bVar18 = lVar12 == lVar14;
      if (bVar18) {
        *plVar1 = lVar12 + 1;
        lVar14 = lVar12;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar14 != -1) {
                    /* WARNING: Load size is inaccurate */
      local_80 = *param_3;
    }
  }
LAB_00104150:
  local_78 = 0;
                    /* WARNING: Load size is inaccurate */
  plVar1 = (long *)(*param_4 + -0x10);
  if (*param_4 != 0) {
    do {
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_00104186;
      LOCK();
      lVar14 = *plVar1;
      bVar18 = lVar12 == lVar14;
      if (bVar18) {
        *plVar1 = lVar12 + 1;
        lVar14 = lVar12;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar14 != -1) {
                    /* WARNING: Load size is inaccurate */
      local_78 = *param_4;
    }
  }
LAB_00104186:
  if ((*(long *)((long)param_1 + 600) != 0) && (*(int *)((long)param_1 + 0x27c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
    uVar17 = CONCAT44(0,uVar2);
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8);
    if (local_88 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_88 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar12;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        if ((uVar15 == uVar11) &&
           (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar14 * 8) + 0x10) == local_88)) {
          lVar12 = HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                   ::operator[]((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                                 *)((long)param_1 + 0x250),(StringName *)&local_88);
          if (*(char *)(lVar12 + 0x108) != '\0') goto LAB_001043f0;
          ClassDB::add_property_group
                    ((StringName *)&local_88,(String *)&local_80,(String *)&local_78,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          goto LAB_001042c5;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar12;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar14 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar12, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar2 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar12,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,(StringName *)&local_88);
  local_68 = 0;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_80);
  }
  local_70 = 0;
  local_50 = 0x52;
  local_58 = 
  "Attempt to register extension class property group \'%s\' for unexisting class \'%s\'.";
  String::parse_latin1((StrRange *)&local_70);
  vformat<String,StringName>
            ((CowData<char32_t> *)&local_58,(StrRange *)&local_70,(CowData<char32_t> *)&local_68,
             (StringName *)&local_60);
  _err_print_error("_register_extension_class_property_group","core/extension/gdextension.cpp",0x243
                   ,"Condition \"!self->extension_classes.has(class_name)\" is true.",
                   (CowData<char32_t> *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
LAB_001043f0:
  lVar12 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
LAB_001042c5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDExtension::_register_extension_class_property_subgroup(void*, void const*, void const*, void
   const*) */

void GDExtension::_register_extension_class_property_subgroup
               (void *param_1,void *param_2,void *param_3,void *param_4)

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
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_88,(StringName *)param_2);
                    /* WARNING: Load size is inaccurate */
  local_80 = 0;
  if (*param_3 != 0) {
    plVar1 = (long *)(*param_3 + -0x10);
    do {
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_001044c0;
      LOCK();
      lVar14 = *plVar1;
      bVar18 = lVar12 == lVar14;
      if (bVar18) {
        *plVar1 = lVar12 + 1;
        lVar14 = lVar12;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar14 != -1) {
                    /* WARNING: Load size is inaccurate */
      local_80 = *param_3;
    }
  }
LAB_001044c0:
  local_78 = 0;
                    /* WARNING: Load size is inaccurate */
  plVar1 = (long *)(*param_4 + -0x10);
  if (*param_4 != 0) {
    do {
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_001044f6;
      LOCK();
      lVar14 = *plVar1;
      bVar18 = lVar12 == lVar14;
      if (bVar18) {
        *plVar1 = lVar12 + 1;
        lVar14 = lVar12;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar14 != -1) {
                    /* WARNING: Load size is inaccurate */
      local_78 = *param_4;
    }
  }
LAB_001044f6:
  if ((*(long *)((long)param_1 + 600) != 0) && (*(int *)((long)param_1 + 0x27c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
    uVar17 = CONCAT44(0,uVar2);
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8);
    if (local_88 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_88 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar12;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        if ((uVar15 == uVar11) &&
           (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar14 * 8) + 0x10) == local_88)) {
          lVar12 = HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                   ::operator[]((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                                 *)((long)param_1 + 0x250),(StringName *)&local_88);
          if (*(char *)(lVar12 + 0x108) != '\0') goto LAB_00104760;
          ClassDB::add_property_subgroup
                    ((StringName *)&local_88,(String *)&local_80,(String *)&local_78,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          goto LAB_00104635;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar12;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar14 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar12, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar2 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar12,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,(StringName *)&local_88);
  local_68 = 0;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_80);
  }
  local_70 = 0;
  local_50 = 0x55;
  local_58 = 
  "Attempt to register extension class property subgroup \'%s\' for unexisting class \'%s\'.";
  String::parse_latin1((StrRange *)&local_70);
  vformat<String,StringName>
            ((CowData<char32_t> *)&local_58,(StrRange *)&local_70,(CowData<char32_t> *)&local_68,
             (StringName *)&local_60);
  _err_print_error("_register_extension_class_property_subgroup","core/extension/gdextension.cpp",
                   0x256,"Condition \"!self->extension_classes.has(class_name)\" is true.",
                   (CowData<char32_t> *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
LAB_00104760:
  lVar12 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
LAB_00104635:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDExtension::_register_extension_class_signal(void*, void const*, void const*,
   GDExtensionPropertyInfo const*, long) */

void GDExtension::_register_extension_class_signal
               (void *param_1,void *param_2,void *param_3,GDExtensionPropertyInfo *param_4,
               long param_5)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  size_t sVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  CowData<char32_t> *local_138;
  long local_110;
  long local_108;
  undefined8 local_100;
  char *local_f8;
  size_t local_f0;
  char *local_e8;
  size_t local_e0;
  long local_d8;
  undefined4 local_d0;
  long local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 (*local_78 [2]) [16];
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_110,(StringName *)param_2);
  StringName::StringName((StringName *)&local_108,(StringName *)param_3);
  if ((*(long *)((long)param_1 + 600) != 0) && (*(int *)((long)param_1 + 0x27c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
    uVar21 = CONCAT44(0,uVar2);
    lVar15 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8);
    if (local_110 == 0) {
      uVar14 = StringName::get_empty_hash();
    }
    else {
      uVar14 = *(uint *)(local_110 + 0x20);
    }
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar14 * lVar15;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar21;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar19 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar18 * 4);
    iVar17 = SUB164(auVar4 * auVar8,8);
    if (uVar19 != 0) {
      uVar20 = 0;
LAB_00104902:
      if ((uVar19 != uVar14) ||
         (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar18 * 8) + 0x10) != local_110))
      goto LAB_001048b8;
      lVar15 = HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
               ::operator[]((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                             *)((long)param_1 + 0x250),(StringName *)&local_110);
      if (*(char *)(lVar15 + 0x108) == '\0') {
        local_b8 = (char *)0x0;
        local_b0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 6;
        local_80 = 1;
        local_78[0] = (undefined1 (*) [16])0x0;
        local_68 = 0;
        local_60 = 0;
        local_50 = 0;
        _local_a8 = (undefined1  [16])0x0;
        if (local_108 == 0) {
LAB_00104ee1:
          local_f8 = (char *)0x0;
        }
        else {
          pcVar3 = *(char **)(local_108 + 8);
          local_f8 = (char *)0x0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(local_108 + 0x10) == 0) goto LAB_00104ee1;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(local_108 + 0x10));
          }
          else {
            local_e0 = strlen(pcVar3);
            local_e8 = pcVar3;
            String::parse_latin1((StrRange *)&local_f8);
          }
          if (local_b8 != local_f8) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            local_b8 = local_f8;
            local_f8 = (char *)0x0;
          }
        }
        local_138 = (CowData<char32_t> *)&local_f8;
        CowData<char32_t>::_unref(local_138);
        if (0 < param_5) {
          lVar15 = 0;
          do {
            local_e8 = (char *)CONCAT44(local_e8._4_4_,*(undefined4 *)param_4);
            lVar18 = **(long **)(param_4 + 8);
            if (lVar18 == 0) {
              local_e0 = 0;
            }
            else {
              pcVar3 = *(char **)(lVar18 + 8);
              local_e0 = 0;
              if (pcVar3 == (char *)0x0) {
                if (*(long *)(lVar18 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)(lVar18 + 0x10))
                  ;
                }
              }
              else {
                local_f0 = strlen(pcVar3);
                local_f8 = pcVar3;
                String::parse_latin1((StrRange *)&local_e0);
              }
            }
            StringName::StringName((StringName *)&local_d8,*(StringName **)(param_4 + 0x10));
            local_d0 = *(undefined4 *)(param_4 + 0x18);
            local_c8 = 0;
            if (*(long *)*(CowData **)(param_4 + 0x20) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,*(CowData **)(param_4 + 0x20));
            }
            local_c0 = *(undefined4 *)(param_4 + 0x28);
            if (local_78[0] == (undefined1 (*) [16])0x0) {
              local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)local_78[0][1] = 0;
              *local_78[0] = (undefined1  [16])0x0;
            }
            puVar16 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
            *(undefined8 *)(puVar16 + 8) = 0;
            *(undefined1 (*) [16])(puVar16 + 2) = (undefined1  [16])0x0;
            *puVar16 = 0;
            puVar16[6] = 0;
            puVar16[10] = 6;
            *(undefined8 *)(puVar16 + 0x10) = 0;
            *(undefined1 (*) [16])(puVar16 + 0xc) = (undefined1  [16])0x0;
            *puVar16 = local_e8._0_4_;
            if (local_e0 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar16 + 2),(CowData *)&local_e0);
            }
            StringName::operator=((StringName *)(puVar16 + 4),(StringName *)&local_d8);
            puVar16[6] = local_d0;
            if (*(long *)(puVar16 + 8) != local_c8) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar16 + 8),(CowData *)&local_c8);
            }
            lVar13 = local_c8;
            puVar16[10] = local_c0;
            lVar18 = *(long *)(*local_78[0] + 8);
            *(undefined8 *)(puVar16 + 0xc) = 0;
            *(undefined1 (**) [16])(puVar16 + 0x10) = local_78[0];
            *(long *)(puVar16 + 0xe) = lVar18;
            if (lVar18 != 0) {
              *(undefined4 **)(lVar18 + 0x30) = puVar16;
            }
            lVar18 = *(long *)*local_78[0];
            *(undefined4 **)(*local_78[0] + 8) = puVar16;
            if (lVar18 == 0) {
              *(undefined4 **)*local_78[0] = puVar16;
            }
            *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
            if (local_c8 != 0) {
              LOCK();
              plVar1 = (long *)(local_c8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_c8 = 0;
                Memory::free_static((void *)(lVar13 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (local_d8 != 0)) {
              StringName::unref();
            }
            sVar12 = local_e0;
            if (local_e0 != 0) {
              LOCK();
              plVar1 = (long *)(local_e0 - 0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_e0 = 0;
                Memory::free_static((void *)(sVar12 - 0x10),false);
              }
            }
            lVar15 = lVar15 + 1;
            param_4 = param_4 + 0x30;
          } while (param_5 != lVar15);
        }
        ClassDB::add_signal((StringName *)&local_110,(MethodInfo *)&local_b8);
        lVar15 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        CowData<Variant>::_unref((CowData<Variant> *)&local_68);
        List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref(local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      goto joined_r0x00104d5a;
    }
  }
LAB_00104db8:
  StringName::StringName((StringName *)&local_e8,(StringName *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StringName *)&local_108);
  local_b8 = "Attempt to register extension class signal \'%s\' for unexisting class \'%s\'.";
  local_100 = 0;
  local_b0 = 0x4a;
  String::parse_latin1((StrRange *)&local_100);
  vformat<StringName,StringName>
            ((CowData<char32_t> *)&local_b8,(StrRange *)&local_100,(StringName *)&local_f8,
             (StringName *)&local_e8);
  _err_print_error("_register_extension_class_signal","core/extension/gdextension.cpp",0x268,
                   "Condition \"!self->extension_classes.has(class_name)\" is true.",
                   (CowData<char32_t> *)&local_b8,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') &&
     ((local_f8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) {
    if (local_e8 != (char *)0x0) {
      StringName::unref();
joined_r0x00104d5a:
      if (StringName::configured == '\0') goto LAB_00104d89;
    }
    if (((local_108 == 0) || (StringName::unref(), StringName::configured != '\0')) &&
       (local_110 != 0)) {
      StringName::unref();
    }
  }
LAB_00104d89:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001048b8:
  uVar20 = uVar20 + 1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar15;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar21;
  lVar18 = SUB168(auVar5 * auVar9,8);
  uVar19 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar18 * 4);
  iVar17 = SUB164(auVar5 * auVar9,8);
  if ((uVar19 == 0) ||
     (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar19 * lVar15, auVar10._8_8_ = 0,
     auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
     auVar7._0_8_ = (ulong)((uVar2 + iVar17) - SUB164(auVar6 * auVar10,8)) * lVar15,
     auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, SUB164(auVar7 * auVar11,8) < uVar20))
  goto LAB_00104db8;
  goto LAB_00104902;
}



/* GDExtension::_unregister_extension_class(void*, void const*) */

void GDExtension::_unregister_extension_class(void *param_1,void *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  Extension *pEVar16;
  char *pcVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_70,(StringName *)param_2);
  if ((*(long *)((long)param_1 + 600) != 0) && (*(int *)((long)param_1 + 0x27c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
    uVar24 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8);
    if (local_70 == 0) {
      uVar15 = StringName::get_empty_hash();
    }
    else {
      uVar15 = *(uint *)(local_70 + 0x20);
    }
    if (uVar15 == 0) {
      uVar15 = 1;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)uVar15 * lVar3;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar24;
    lVar19 = SUB168(auVar7 * auVar11,8);
    uVar21 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar19 * 4);
    iVar18 = SUB164(auVar7 * auVar11,8);
    if (uVar21 != 0) {
      uVar23 = 0;
      do {
        if ((uVar21 == uVar15) &&
           (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar19 * 8) + 0x10) == local_70)) {
          pEVar16 = (Extension *)
                    HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                    ::operator[]((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                                  *)((long)param_1 + 0x250),(StringName *)&local_70);
          if (pEVar16[0x108] != (Extension)0x0) {
            _clear_extension((GDExtension *)param_1,pEVar16);
          }
          if ((*(long *)(pEVar16 + 0x10) != 0) && (*(int *)(*(long *)(pEVar16 + 0x10) + 0x10) != 0))
          {
            StringName::StringName((StringName *)&local_60,(StringName *)&local_70);
            local_58 = 
            "Attempt to unregister class \'%s\' while other extension classes inherit from it.";
            local_68 = 0;
            local_50 = 0x4f;
            String::parse_latin1((StrRange *)&local_68);
            vformat<StringName>(&local_58,(StrRange *)&local_68,(StringName *)&local_60);
            pcVar17 = "Condition \"ext->gdextension.children.size()\" is true.";
            uVar20 = 0x287;
            goto LAB_00105259;
          }
          ClassDB::unregister_extension_class
                    ((StringName *)&local_70,(bool)((byte)pEVar16[0x108] ^ 1));
          lVar3 = *(long *)(pEVar16 + 8);
          if (((lVar3 == 0) || (plVar4 = *(long **)(lVar3 + 0x10), plVar4 == (long *)0x0)) ||
             (plVar5 = (long *)*plVar4, plVar22 = plVar5, plVar5 == (long *)0x0)) goto LAB_00105138;
          goto LAB_001050d9;
        }
        uVar23 = uVar23 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(iVar18 + 1) * lVar3;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar24;
        lVar19 = SUB168(auVar8 * auVar12,8);
        uVar21 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar19 * 4);
        iVar18 = SUB164(auVar8 * auVar12,8);
      } while ((uVar21 != 0) &&
              (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar21 * lVar3, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar24, auVar10._8_8_ = 0,
              auVar10._0_8_ = (ulong)((uVar2 + iVar18) - SUB164(auVar9 * auVar13,8)) * lVar3,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar24, uVar23 <= SUB164(auVar10 * auVar14,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,(StringName *)&local_70);
  local_58 = "Attempt to unregister unexisting extension class \'%s\'.";
  local_68 = 0;
  local_50 = 0x36;
  String::parse_latin1((StrRange *)&local_68);
  vformat<StringName>(&local_58,(StrRange *)&local_68,(StringName *)&local_60);
  pcVar17 = "Condition \"!self->extension_classes.has(class_name)\" is true.";
  uVar20 = 0x27f;
LAB_00105259:
  _err_print_error("_unregister_extension_class","core/extension/gdextension.cpp",uVar20,pcVar17,
                   (CowData<char32_t> *)&local_58,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (StringName::configured == '\0') goto LAB_001051c3;
  if (local_60 != 0) {
    StringName::unref();
    goto joined_r0x001051b1;
  }
  goto LAB_001051b3;
  while (plVar1 = plVar22 + 1, plVar22 = (long *)*plVar1, (long *)*plVar1 != (long *)0x0) {
LAB_001050d9:
    if (pEVar16 == (Extension *)*plVar22) {
      if (plVar4 == (long *)plVar22[3]) {
        lVar19 = plVar22[1];
        if (plVar22 == plVar5) {
          *plVar4 = lVar19;
        }
        lVar6 = plVar22[2];
        if (plVar22 == (long *)plVar4[1]) {
          plVar4[1] = lVar6;
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 8) = lVar19;
          lVar19 = plVar22[1];
        }
        if (lVar19 != 0) {
          *(long *)(lVar19 + 0x10) = lVar6;
        }
        Memory::free_static(plVar22,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      if (*(int *)((long)*(void **)(lVar3 + 0x10) + 0x10) == 0) {
        Memory::free_static(*(void **)(lVar3 + 0x10),false);
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      break;
    }
  }
LAB_00105138:
  if (pEVar16[0x108] == (Extension)0x0) {
    HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
    ::erase((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
             *)((long)param_1 + 0x250),(StringName *)&local_70);
    if (local_70 == 0) goto LAB_001052eb;
LAB_00105153:
    pcVar17 = *(char **)(local_70 + 8);
    local_60 = 0;
    if (pcVar17 == (char *)0x0) {
      if (*(long *)(local_70 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(local_70 + 0x10));
      }
    }
    else {
      local_50 = strlen(pcVar17);
      local_58 = pcVar17;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
  else {
    if (local_70 != 0) goto LAB_00105153;
LAB_001052eb:
    local_60 = 0;
  }
  if (GDExtensionEditorHelp::editor_help_remove_class == (code *)0x0) {
    _err_print_error("remove_class","core/extension/gdextension.cpp",0x42a,
                     "Parameter \"editor_help_remove_class\" is null.",0,0);
  }
  else {
    (*GDExtensionEditorHelp::editor_help_remove_class)((CowData<char32_t> *)&local_60);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
joined_r0x001051b1:
  if (StringName::configured == '\0') goto LAB_001051c3;
LAB_001051b3:
  if (local_70 != 0) {
    StringName::unref();
  }
LAB_001051c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::_register_extension_class_internal(void*, void const*, void const*,
   GDExtensionClassCreationInfo4 const*, GDExtension::ClassCreationDeprecatedInfo const*) */

void GDExtension::_register_extension_class_internal
               (void *param_1,void *param_2,void *param_3,GDExtensionClassCreationInfo4 *param_4,
               ClassCreationDeprecatedInfo *param_5)

{
  HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
  *this;
  HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
  *this_00;
  void *pvVar1;
  CowData *pCVar2;
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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  ObjectGDExtension *pOVar27;
  undefined8 *puVar28;
  long *plVar30;
  CowData<char32_t> *this_01;
  undefined1 (*pauVar31) [16];
  char *pcVar32;
  long lVar33;
  long lVar34;
  ObjectGDExtension *pOVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  Extension *pEVar39;
  uint uVar40;
  long *plVar41;
  long in_FS_OFFSET;
  byte bVar42;
  code *pcVar43;
  code *pcVar44;
  CowData<char32_t> *local_250;
  ObjectGDExtension local_221;
  long local_208;
  long local_200;
  undefined8 local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  char *local_1d8;
  size_t sStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  long local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  HashMap local_c8 [40];
  ulong local_a0;
  HashSet local_98 [32];
  ulong local_78;
  HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
  local_70 [8];
  long local_68;
  undefined8 *local_58;
  ulong local_48;
  long local_40;
  ulong uVar29;
  
  bVar42 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_208,(StringName *)param_2);
  StringName::StringName((StringName *)&local_200,(StringName *)param_3);
  if (local_208 == 0) {
    local_1e0 = 0;
  }
  else {
    pcVar32 = *(char **)(local_208 + 8);
    local_1e0 = 0;
    if (pcVar32 == (char *)0x0) {
      if (*(long *)(local_208 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e0,(CowData *)(local_208 + 0x10));
      }
    }
    else {
      sStack_1d0 = strlen(pcVar32);
      local_1d8 = pcVar32;
      String::parse_latin1((StrRange *)&local_1e0);
    }
  }
  local_250 = (CowData<char32_t> *)&local_1e0;
  cVar23 = String::is_valid_unicode_identifier();
  CowData<char32_t>::_unref(local_250);
  if (cVar23 == '\0') {
    StringName::StringName((StringName *)local_250,(StringName *)&local_208);
    local_1d8 = "Attempt to register extension class \'%s\', which is not a valid class identifier."
    ;
    local_1e8 = 0;
    sStack_1d0 = 0x50;
    String::parse_latin1((StrRange *)&local_1e8);
    vformat<StringName>(&local_1d8,(StrRange *)&local_1e8,local_250);
    pcVar32 = "Condition \"!String(class_name).is_valid_unicode_identifier()\" is true.";
    uVar36 = 0x16f;
LAB_0010618b:
    _err_print_error("_register_extension_class_internal","core/extension/gdextension.cpp",uVar36,
                     pcVar32,(CowData<char32_t> *)&local_1d8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
    if (StringName::configured == '\0') goto LAB_00105d75;
    if (local_1e0 != 0) {
      StringName::unref();
      goto joined_r0x00105d47;
    }
  }
  else {
    cVar23 = ClassDB::class_exists((StringName *)&local_208);
    if (cVar23 != '\0') {
      StringName::StringName((StringName *)local_250,(StringName *)&local_208);
      local_1d8 = 
      "Attempt to register extension class \'%s\', which appears to be already registered.";
      local_1e8 = 0;
      sStack_1d0 = 0x51;
      String::parse_latin1((StrRange *)&local_1e8);
      vformat<StringName>(&local_1d8,(StrRange *)&local_1e8,local_250);
      pcVar32 = "Condition \"ClassDB::class_exists(class_name)\" is true.";
      uVar36 = 0x170;
      goto LAB_0010618b;
    }
    this = (HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
            *)((long)param_1 + 0x250);
    if ((*(long *)((long)param_1 + 600) != 0) && (*(int *)((long)param_1 + 0x27c) != 0)) {
      uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
      uVar29 = CONCAT44(0,uVar38);
      lVar26 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8);
      if (local_200 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(local_200 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar24 * lVar26;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar29;
      lVar33 = SUB168(auVar3 * auVar11,8);
      uVar37 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar33 * 4);
      iVar25 = SUB164(auVar3 * auVar11,8);
      if (uVar37 != 0) {
        uVar40 = 0;
        do {
          if ((uVar24 == uVar37) &&
             (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar33 * 8) + 0x10) == local_200)
             ) {
            lVar26 = HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                     ::operator[](this,(StringName *)&local_200);
            goto LAB_00105622;
          }
          uVar40 = uVar40 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar25 + 1) * lVar26;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar29;
          lVar33 = SUB168(auVar4 * auVar12,8);
          uVar37 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar33 * 4);
          iVar25 = SUB164(auVar4 * auVar12,8);
        } while ((uVar37 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar37 * lVar26, auVar13._8_8_ = 0,
                auVar13._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar38 + iVar25) - SUB164(auVar5 * auVar13,8)) * lVar26,
                auVar14._8_8_ = 0, auVar14._0_8_ = uVar29, uVar40 <= SUB164(auVar6 * auVar14,8)));
      }
    }
    cVar23 = ClassDB::class_exists((StringName *)&local_200);
    if (cVar23 == '\0') {
      if (local_200 == 0) {
        local_1e8 = 0;
      }
      else {
        local_1e8 = 0;
        if (*(char **)(local_200 + 8) == (char *)0x0) {
          if (*(long *)(local_200 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e8,(CowData *)(local_200 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_1e8,*(char **)(local_200 + 8));
        }
      }
      if (local_208 == 0) {
        local_1f0 = 0;
      }
      else {
        local_1f0 = 0;
        if (*(char **)(local_208 + 8) == (char *)0x0) {
          if (*(long *)(local_208 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1f0,(CowData *)(local_208 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_1f0,*(char **)(local_208 + 8));
        }
      }
      local_1e0 = 0;
      local_1d8 = 
      "Attempt to register an extension class \'%s\' using non-existing parent class \'%s\'.";
      sStack_1d0 = 0x51;
      String::parse_latin1((StrRange *)local_250);
      vformat<String,String>
                ((CowData<char32_t> *)&local_1d8,local_250,(CowData<char32_t> *)&local_1f0,
                 (CowData<char32_t> *)&local_1e8);
      _err_print_error("_register_extension_class_internal","core/extension/gdextension.cpp",0x17e,
                       "Method/function failed.",(CowData<char32_t> *)&local_1d8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
      CowData<char32_t>::_unref(local_250);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
    }
    else {
      iVar25 = ClassDB::get_api_type((StringName *)&local_200);
      if ((iVar25 == 2) || (iVar25 = ClassDB::get_api_type((StringName *)&local_200), iVar25 == 3))
      {
        _err_print_error("_register_extension_class_internal","core/extension/gdextension.cpp",0x178
                         ,"Unimplemented yet",0,0);
      }
      lVar26 = 0;
LAB_00105622:
      local_221 = (ObjectGDExtension)(param_4[3] != (GDExtensionClassCreationInfo4)0x0);
      if (((*(char *)((long)param_1 + 0x2a4) != '\0') && (*(long *)((long)param_1 + 600) != 0)) &&
         (*(int *)((long)param_1 + 0x27c) != 0)) {
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
        uVar29 = CONCAT44(0,uVar38);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8)
        ;
        if (local_208 == 0) {
          uVar24 = StringName::get_empty_hash();
        }
        else {
          uVar24 = *(uint *)(local_208 + 0x20);
        }
        if (uVar24 == 0) {
          uVar24 = 1;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)uVar24 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar29;
        lVar34 = SUB168(auVar7 * auVar15,8);
        uVar37 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar34 * 4);
        iVar25 = SUB164(auVar7 * auVar15,8);
        if (uVar37 != 0) {
          uVar40 = 0;
          do {
            if ((uVar37 == uVar24) &&
               (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar34 * 8) + 0x10) ==
                local_208)) {
              pOVar27 = (ObjectGDExtension *)
                        HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                        ::operator[](this,(StringName *)&local_208);
              if (lVar26 == 0) {
                if (local_200 != *(long *)(pOVar27 + 0x18)) {
                  StringName::StringName((StringName *)local_250,(StringName *)&local_200);
                  StringName::StringName((StringName *)&local_1e8,(StringName *)(pOVar27 + 0x18));
                  StringName::StringName((StringName *)&local_1f0,(StringName *)&local_208);
                  local_1f8 = 0;
                  String::parse_latin1
                            ((String *)&local_1f8,
                             "GDExtension class \'%s\' cannot change parent type from \'%s\' to \'%s\' on hot reload. Restart Godot for this change to take effect."
                            );
                  vformat<StringName,StringName,StringName>
                            ((CowData<char32_t> *)&local_1d8,(String *)&local_1f8,
                             (StringName *)&local_1f0,(StringName *)&local_1e8,local_250);
                  _err_print_error("_register_extension_class_internal",
                                   "core/extension/gdextension.cpp",0x187,"Method/function failed.",
                                   (CowData<char32_t> *)&local_1d8,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                  if (((StringName::configured == '\0') ||
                      ((local_1f0 != 0 && (StringName::unref(), StringName::configured == '\0'))))
                     || ((local_1e8 != 0 && (StringName::unref(), StringName::configured == '\0'))))
                  goto LAB_00105d75;
                  if (local_1e0 == 0) goto LAB_00105d49;
                  StringName::unref();
                  goto joined_r0x00105d47;
                }
                if (local_221 == pOVar27[0x2d]) {
                  pOVar27[0x108] = (ObjectGDExtension)0x0;
                  goto LAB_00105b97;
                }
              }
              else if (local_221 == pOVar27[0x2d]) {
                pOVar27[0x108] = (ObjectGDExtension)0x0;
                goto LAB_00105b41;
              }
              StringName::StringName((StringName *)local_250,(StringName *)&local_208);
              local_1e8 = 0;
              String::parse_latin1
                        ((String *)&local_1e8,
                         "GDExtension class \'%s\' cannot change to/from runtime class on hot reload. Restart Godot for this change to take effect."
                        );
              vformat<StringName>((CowData<char32_t> *)&local_1d8,(String *)&local_1e8,local_250);
              _err_print_error("_register_extension_class_internal","core/extension/gdextension.cpp"
                               ,0x18a,(CowData<char32_t> *)&local_1d8,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
              if ((StringName::configured != '\0') && (local_1e0 != 0)) {
                StringName::unref();
              }
              local_221 = pOVar27[0x2d];
              pOVar27[0x108] = (ObjectGDExtension)0x0;
              goto LAB_00105b3c;
            }
            uVar40 = uVar40 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar25 + 1) * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar29;
            lVar34 = SUB168(auVar8 * auVar16,8);
            uVar37 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar34 * 4);
            iVar25 = SUB164(auVar8 * auVar16,8);
          } while ((uVar37 != 0) &&
                  (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar37 * lVar33, auVar17._8_8_ = 0,
                  auVar17._0_8_ = uVar29, auVar10._8_8_ = 0,
                  auVar10._0_8_ = (ulong)((uVar38 + iVar25) - SUB164(auVar9 * auVar17,8)) * lVar33,
                  auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar40 <= SUB164(auVar10 * auVar18,8)))
          ;
        }
      }
      pEVar39 = (Extension *)&local_1d8;
      for (lVar33 = 0x33; lVar33 != 0; lVar33 = lVar33 + -1) {
        *(undefined8 *)pEVar39 = 0;
        pEVar39 = pEVar39 + (ulong)bVar42 * -0x10 + 8;
      }
      local_1ac = CONCAT11(local_1ac._1_1_,1);
      local_a0 = _LC25;
      local_78 = _LC25;
      local_48 = _LC25;
      puVar28 = (undefined8 *)
                HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                ::operator[](this,(StringName *)&local_208);
      *puVar28 = local_1d8;
      puVar28[1] = sStack_1d0;
      if (&local_1c8 != puVar28 + 2) {
        plVar41 = (long *)puVar28[2];
        if (plVar41 != (long *)0x0) {
          do {
            pvVar1 = (void *)*plVar41;
            if (pvVar1 == (void *)0x0) goto LAB_0010587f;
            if (*(long **)((long)pvVar1 + 0x18) == plVar41) {
              lVar33 = *(long *)((long)pvVar1 + 8);
              lVar34 = *(long *)((long)pvVar1 + 0x10);
              *plVar41 = lVar33;
              if (pvVar1 == (void *)plVar41[1]) {
                plVar41[1] = lVar34;
              }
              if (lVar34 != 0) {
                *(long *)(lVar34 + 8) = lVar33;
                lVar33 = *(long *)((long)pvVar1 + 8);
              }
              if (lVar33 != 0) {
                *(long *)(lVar33 + 0x10) = lVar34;
              }
              Memory::free_static(pvVar1,false);
              *(int *)(plVar41 + 2) = (int)plVar41[2] + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
            plVar41 = (long *)puVar28[2];
          } while ((int)plVar41[2] != 0);
          Memory::free_static(plVar41,false);
          puVar28[2] = 0;
        }
LAB_0010587f:
        puVar28[2] = local_1c8;
        local_1c8 = 0;
      }
      if (puVar28[3] != local_1c0) {
        StringName::unref();
        puVar28[3] = local_1c0;
        local_1c0 = 0;
      }
      if (puVar28[4] != local_1b8) {
        StringName::unref();
        puVar28[4] = local_1b8;
        local_1b8 = 0;
      }
      this_00 = (HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
                 *)(puVar28 + 0x2d);
      *(undefined4 *)(puVar28 + 5) = local_1b0;
      *(undefined2 *)((long)puVar28 + 0x2c) = local_1ac;
      *(undefined1 *)((long)puVar28 + 0x2e) = local_1aa;
      puVar28[6] = local_1a8;
      puVar28[7] = uStack_1a0;
      puVar28[10] = local_188;
      puVar28[0xb] = uStack_180;
      puVar28[0xc] = local_178;
      puVar28[0xd] = uStack_170;
      puVar28[8] = local_198;
      puVar28[9] = uStack_190;
      puVar28[0xe] = local_168;
      puVar28[0xf] = uStack_160;
      puVar28[0x10] = local_158;
      puVar28[0x11] = uStack_150;
      puVar28[0x12] = local_148;
      puVar28[0x13] = uStack_140;
      puVar28[0x14] = local_138;
      puVar28[0x17] = local_120;
      puVar28[0x18] = uStack_118;
      puVar28[0x19] = local_110;
      puVar28[0x1a] = uStack_108;
      puVar28[0x15] = local_130;
      puVar28[0x16] = uStack_128;
      puVar28[0x1b] = local_100;
      puVar28[0x1c] = uStack_f8;
      puVar28[0x1d] = local_f0;
      puVar28[0x1e] = local_e8;
      *(undefined1 *)(puVar28 + 0x21) = local_d0;
      puVar28[0x1f] = local_e0;
      puVar28[0x20] = uStack_d8;
      HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
      ::operator=((HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
                   *)(puVar28 + 0x22),local_c8);
      HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator=
                ((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *)
                 (puVar28 + 0x28),local_98);
      if (this_00 != local_70) {
        uVar38 = *(uint *)(puVar28 + 0x32);
        uVar24 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
        if ((*(int *)((long)puVar28 + 0x194) != 0) && (puVar28[0x2e] != 0)) {
          if (uVar24 != 0) {
            lVar33 = 0;
            do {
              if (*(int *)(puVar28[0x2f] + lVar33) != 0) {
                *(int *)(puVar28[0x2f] + lVar33) = 0;
                pvVar1 = *(void **)(puVar28[0x2e] + lVar33 * 2);
                List<Pair<String,Variant>,DefaultAllocator>::~List
                          ((List<Pair<String,Variant>,DefaultAllocator> *)((long)pvVar1 + 0x18));
                Memory::free_static(pvVar1,false);
                *(undefined8 *)(puVar28[0x2e] + lVar33 * 2) = 0;
              }
              lVar33 = lVar33 + 4;
            } while (lVar33 != (ulong)uVar24 * 4);
            uVar38 = *(uint *)(puVar28 + 0x32);
            uVar24 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
          }
          *(undefined4 *)((long)puVar28 + 0x194) = 0;
          *(undefined1 (*) [16])(puVar28 + 0x30) = (undefined1  [16])0x0;
        }
        if (uVar24 < *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4)) {
          if (uVar38 != 0x1c) {
            uVar29 = (ulong)uVar38;
            do {
              uVar24 = (int)uVar29 + 1;
              uVar29 = (ulong)uVar24;
              if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) <=
                  *(uint *)(hash_table_size_primes + uVar29 * 4)) {
                if (uVar38 != uVar24) {
                  if (puVar28[0x2e] == 0) {
                    *(uint *)(puVar28 + 0x32) = uVar24;
                  }
                  else {
                    HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
                    ::_resize_and_rehash(this_00,uVar24);
                  }
                }
                goto LAB_00105ad1;
              }
            } while (uVar24 != 0x1c);
          }
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0,0);
        }
LAB_00105ad1:
        puVar28 = local_58;
        if (local_68 != 0) {
          for (; puVar28 != (undefined8 *)0x0; puVar28 = (undefined8 *)*puVar28) {
            HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
            ::insert((ObjectID *)local_250,(InstanceState *)this_00,(bool)((char)puVar28 + '\x10'));
          }
        }
      }
      Extension::~Extension((Extension *)&local_1d8);
      pOVar27 = (ObjectGDExtension *)
                HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                ::operator[](this,(StringName *)&local_208);
LAB_00105b3c:
      if (lVar26 != 0) {
LAB_00105b41:
        lVar33 = *(long *)(lVar26 + 0x10);
        *(long *)(pOVar27 + 8) = lVar26;
        if (lVar33 == 0) {
          pauVar31 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])(lVar26 + 0x10) = pauVar31;
          *(undefined4 *)pauVar31[1] = 0;
          *pauVar31 = (undefined1  [16])0x0;
        }
        plVar30 = (long *)operator_new(0x20,DefaultAllocator::alloc);
        plVar41 = *(long **)(lVar26 + 0x10);
        plVar30[1] = 0;
        lVar26 = plVar41[1];
        *plVar30 = (long)pOVar27;
        plVar30[3] = (long)plVar41;
        plVar30[2] = lVar26;
        if (lVar26 != 0) {
          *(long **)(lVar26 + 8) = plVar30;
        }
        plVar41[1] = (long)plVar30;
        if (*plVar41 == 0) {
          *plVar41 = (long)plVar30;
        }
        *(int *)(plVar41 + 2) = (int)plVar41[2] + 1;
      }
LAB_00105b97:
      if ((*(char *)((long)param_1 + 0x248) != '\0') && (*(long *)(param_4 + 0x78) == 0)) {
        StringName::StringName((StringName *)local_250,(StringName *)&local_208);
        local_1e8 = 0;
        String::parse_latin1
                  ((String *)&local_1e8,
                   "Extension marked as reloadable, but attempted to register class \'%s\' which doesn\'t support reloading. Perhaps your language binding don\'t support it? Reloading disabled for this extension."
                  );
        vformat<StringName>((CowData<char32_t> *)&local_1d8,(String *)&local_1e8,local_250);
        _err_print_error("_register_extension_class_internal","core/extension/gdextension.cpp",0x19d
                         ,(CowData<char32_t> *)&local_1d8,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
        if ((StringName::configured != '\0') && (local_1e0 != 0)) {
          StringName::unref();
        }
        *(undefined1 *)((long)param_1 + 0x248) = 0;
      }
      *(void **)pOVar27 = param_1;
      StringName::operator=((StringName *)(pOVar27 + 0x18),(StringName *)&local_200);
      StringName::operator=((StringName *)(pOVar27 + 0x20),(StringName *)&local_208);
      pOVar27[0x28] = (ObjectGDExtension)(*(int *)((long)param_1 + 0x2a0) == 3);
      pOVar27[0x2a] = (ObjectGDExtension)(*param_4 != (GDExtensionClassCreationInfo4)0x0);
      pOVar27[0x2b] = (ObjectGDExtension)(param_4[1] != (GDExtensionClassCreationInfo4)0x0);
      pOVar27[0x2c] = (ObjectGDExtension)(param_4[2] != (GDExtensionClassCreationInfo4)0x0);
      pOVar27[0x2d] = local_221;
      uVar36 = *(undefined8 *)(param_4 + 0x28);
      uVar19 = *(undefined8 *)(param_4 + 0x30);
      uVar20 = *(undefined8 *)(param_4 + 0x38);
      uVar21 = *(undefined8 *)(param_4 + 0x10);
      uVar22 = *(undefined8 *)(param_4 + 0x18);
      *(undefined8 *)(pOVar27 + 0x40) = *(undefined8 *)(param_4 + 0x20);
      *(undefined8 *)(pOVar27 + 0x48) = uVar36;
      *(undefined8 *)(pOVar27 + 0x30) = uVar21;
      *(undefined8 *)(pOVar27 + 0x38) = uVar22;
      *(undefined8 *)(pOVar27 + 0x50) = uVar19;
      *(undefined8 *)(pOVar27 + 0x58) = uVar20;
      *(undefined8 *)(pOVar27 + 0x60) = *(undefined8 *)(param_4 + 0x40);
      if (param_5 != (ClassCreationDeprecatedInfo *)0x0) {
        uVar36 = *(undefined8 *)(param_5 + 8);
        *(undefined8 *)(pOVar27 + 0x68) = *(undefined8 *)param_5;
        *(undefined8 *)(pOVar27 + 0x70) = uVar36;
        *(undefined8 *)(pOVar27 + 0xa8) = *(undefined8 *)(param_5 + 0x10);
        *(undefined8 *)(pOVar27 + 0x98) = *(undefined8 *)(param_5 + 0x18);
        uVar36 = *(undefined8 *)(param_5 + 0x28);
        *(undefined8 *)(pOVar27 + 0xc0) = *(undefined8 *)(param_5 + 0x20);
        *(undefined8 *)(pOVar27 + 200) = uVar36;
      }
      uVar36 = *(undefined8 *)(param_4 + 0x60);
      uVar19 = *(undefined8 *)(param_4 + 0x48);
      uVar20 = *(undefined8 *)(param_4 + 0x50);
      *(undefined8 *)(pOVar27 + 0x88) = *(undefined8 *)(param_4 + 0x58);
      *(undefined8 *)(pOVar27 + 0x90) = uVar36;
      *(undefined8 *)(pOVar27 + 0x78) = uVar19;
      *(undefined8 *)(pOVar27 + 0x80) = uVar20;
      *(undefined8 *)(pOVar27 + 0xa0) = *(undefined8 *)(param_4 + 0x98);
      uVar36 = *(undefined8 *)(param_4 + 0x70);
      *(undefined8 *)(pOVar27 + 0xb0) = *(undefined8 *)(param_4 + 0x68);
      *(undefined8 *)(pOVar27 + 0xb8) = uVar36;
      uVar36 = *(undefined8 *)(param_4 + 0x78);
      uVar19 = *(undefined8 *)(param_4 + 0x88);
      uVar20 = *(undefined8 *)(param_4 + 0x90);
      *(undefined8 *)(pOVar27 + 0xd0) = *(undefined8 *)(param_4 + 0x80);
      *(undefined8 *)(pOVar27 + 0xd8) = uVar19;
      *(undefined8 *)(pOVar27 + 0xe0) = uVar20;
      *(undefined8 *)(pOVar27 + 0xe8) = uVar36;
      if (*(ObjectGDExtension *)((long)param_1 + 0x248) == (ObjectGDExtension)0x0) {
        pcVar43 = (code *)0x0;
        pcVar44 = (code *)0x0;
        pOVar35 = (ObjectGDExtension *)0x0;
      }
      else {
        pcVar44 = _untrack_instance;
        pcVar43 = _track_instance;
        pOVar35 = pOVar27;
      }
      pOVar27[0x29] = *(ObjectGDExtension *)((long)param_1 + 0x248);
      *(ObjectGDExtension **)(pOVar27 + 0xf0) = pOVar35;
      *(code **)(pOVar27 + 0xf8) = pcVar43;
      *(code **)(pOVar27 + 0x100) = pcVar44;
      ClassDB::register_extension_class(pOVar27);
      pCVar2 = *(CowData **)(param_4 + 8);
      if (pCVar2 != (CowData *)0x0) {
        local_1e0 = 0;
        if (((*(long *)pCVar2 != 0) &&
            (CowData<char32_t>::_ref(local_250,pCVar2), lVar26 = local_1e0, local_1e0 != 0)) &&
           (1 < *(uint *)(local_1e0 + -8))) {
          if (local_208 == 0) {
            local_1d8 = (char *)0x0;
          }
          else {
            local_1d8 = (char *)0x0;
            if (*(char **)(local_208 + 8) == (char *)0x0) {
              if (*(long *)(local_208 + 0x10) != 0) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)&local_1d8,(CowData *)(local_208 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)&local_1d8,*(char **)(local_208 + 8));
            }
          }
          this_01 = (CowData<char32_t> *)
                    HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                    ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                  *)((long)param_1 + 0x2c8),(String *)&local_1d8);
          if (lVar26 != *(long *)this_01) {
            CowData<char32_t>::_ref(this_01,(CowData *)local_250);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
        }
        CowData<char32_t>::_unref(local_250);
      }
    }
joined_r0x00105d47:
    if (StringName::configured == '\0') goto LAB_00105d75;
  }
LAB_00105d49:
  if (((local_200 == 0) || (StringName::unref(), StringName::configured != '\0')) &&
     (local_208 != 0)) {
    StringName::unref();
  }
LAB_00105d75:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDExtension::_register_extension_class(void*, void const*, void const*,
   GDExtensionClassCreationInfo const*) */

void GDExtension::_register_extension_class
               (void *param_1,void *param_2,void *param_3,GDExtensionClassCreationInfo *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_e0 = *(undefined8 *)(param_4 + 0x20);
  uStack_d0 = *(undefined8 *)(param_4 + 0x70);
  local_c0 = 0;
  uVar1 = *(undefined8 *)(param_4 + 8);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  uVar4 = *(undefined8 *)(param_4 + 0x30);
  uVar5 = *(undefined8 *)(param_4 + 0x40);
  uVar6 = *(undefined8 *)(param_4 + 0x48);
  local_e8 = *(undefined8 *)(param_4 + 0x38);
  local_d8 = *(undefined8 *)(param_4 + 0x58);
  puVar8 = &local_b8;
  for (lVar7 = 0x13; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_b8._0_2_ = *(undefined2 *)param_4;
  local_b8._2_1_ = 1;
  local_98 = *(undefined8 *)(param_4 + 0x18);
  local_58 = *(undefined8 *)(param_4 + 0x50);
  local_48 = *(undefined8 *)(param_4 + 0x60);
  local_20 = *(undefined8 *)(param_4 + 0x78);
  local_c8 = *(undefined8 *)(param_4 + 0x68);
  local_a8 = uVar1;
  uStack_a0 = uVar2;
  local_88 = uVar3;
  uStack_80 = uVar4;
  local_68 = uVar5;
  uStack_60 = uVar6;
  _register_extension_class_internal
            (param_1,param_2,param_3,(GDExtensionClassCreationInfo4 *)&local_b8,
             (ClassCreationDeprecatedInfo *)&local_e8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::_register_extension_class2(void*, void const*, void const*,
   GDExtensionClassCreationInfo2 const*) */

void GDExtension::_register_extension_class2
               (void *param_1,void *param_2,void *param_3,GDExtensionClassCreationInfo2 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(param_4 + 8);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  local_e0 = *(undefined8 *)(param_4 + 0x20);
  local_e8 = 0;
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  uVar4 = *(undefined8 *)(param_4 + 0x30);
  uVar5 = *(undefined8 *)(param_4 + 0x38);
  uVar6 = *(undefined8 *)(param_4 + 0x40);
  uVar7 = *(undefined8 *)(param_4 + 0x48);
  uVar8 = *(undefined8 *)(param_4 + 0x50);
  uVar9 = *(undefined8 *)(param_4 + 0x68);
  uVar10 = *(undefined8 *)(param_4 + 0x70);
  local_d0 = *(undefined8 *)(param_4 + 0x90);
  uStack_c8 = *(undefined8 *)(param_4 + 0x78);
  puVar12 = &local_b8;
  for (lVar11 = 0x12; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_b8._0_2_ = *(undefined2 *)param_4;
  uStack_d8 = *(undefined8 *)(param_4 + 0x60);
  local_b8._2_1_ = param_4[2];
  local_98 = *(undefined8 *)(param_4 + 0x18);
  local_58 = *(undefined8 *)(param_4 + 0x58);
  local_28 = *(undefined8 *)(param_4 + 0x88);
  local_20 = *(undefined8 *)(param_4 + 0x98);
  local_c0 = *(undefined8 *)(param_4 + 0x80);
  local_a8 = uVar1;
  uStack_a0 = uVar2;
  local_88 = uVar3;
  uStack_80 = uVar4;
  local_78 = uVar5;
  uStack_70 = uVar6;
  local_68 = uVar7;
  uStack_60 = uVar8;
  local_48 = uVar9;
  uStack_40 = uVar10;
  _register_extension_class_internal
            (param_1,param_2,param_3,(GDExtensionClassCreationInfo4 *)&local_b8,
             (ClassCreationDeprecatedInfo *)&local_e8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::_register_extension_class3(void*, void const*, void const*,
   GDExtensionClassCreationInfo3 const*) */

void GDExtension::_register_extension_class3
               (void *param_1,void *param_2,void *param_3,GDExtensionClassCreationInfo3 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ClassCreationDeprecatedInfo local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [4];
  undefined8 auStack_b0 [4];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _local_b4 = 0;
  local_30 = 0;
  puVar2 = (undefined8 *)(local_b4 + 4);
  for (lVar1 = 0x11; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_e8[0] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[1] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[2] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[3] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[4] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[5] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[6] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[7] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[8] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[9] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[10] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[0xb] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[0xc] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[0xd] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[0xe] = (ClassCreationDeprecatedInfo)0x0;
  local_e8[0xf] = (ClassCreationDeprecatedInfo)0x0;
  local_b8 = *(undefined4 *)param_4;
  local_48 = *(undefined8 *)(param_4 + 0x68);
  uStack_40 = *(undefined8 *)(param_4 + 0x70);
  local_d8 = *(undefined8 *)(param_4 + 0x60);
  uStack_d0 = *(undefined8 *)(param_4 + 0x90);
  auStack_b0[1] = *(undefined8 *)(param_4 + 8);
  auStack_b0[2] = *(undefined8 *)(param_4 + 0x10);
  auStack_b0[3] = *(undefined8 *)(param_4 + 0x18);
  uStack_90 = *(undefined8 *)(param_4 + 0x20);
  local_58 = *(undefined8 *)(param_4 + 0x58);
  local_88 = *(undefined8 *)(param_4 + 0x28);
  uStack_80 = *(undefined8 *)(param_4 + 0x30);
  local_78 = *(undefined8 *)(param_4 + 0x38);
  uStack_70 = *(undefined8 *)(param_4 + 0x40);
  local_68 = *(undefined8 *)(param_4 + 0x48);
  uStack_60 = *(undefined8 *)(param_4 + 0x50);
  local_28 = *(undefined8 *)(param_4 + 0x88);
  local_c8 = *(undefined8 *)(param_4 + 0x78);
  uStack_c0 = *(undefined8 *)(param_4 + 0x80);
  local_20 = *(undefined8 *)(param_4 + 0x98);
  _register_extension_class_internal
            (param_1,param_2,param_3,(GDExtensionClassCreationInfo4 *)&local_b8,local_e8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::_register_extension_class4(void*, void const*, void const*,
   GDExtensionClassCreationInfo4 const*) */

void GDExtension::_register_extension_class4
               (void *param_1,void *param_2,void *param_3,GDExtensionClassCreationInfo4 *param_4)

{
  _register_extension_class_internal
            (param_1,param_2,param_3,param_4,(ClassCreationDeprecatedInfo *)0x0);
  return;
}



/* Vector<GDExtensionMethodBind*>::push_back(GDExtensionMethodBind*) [clone .isra.0] */

void __thiscall
Vector<GDExtensionMethodBind*>::push_back
          (Vector<GDExtensionMethodBind*> *this,GDExtensionMethodBind *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<GDExtensionMethodBind*>::resize<false>
                    ((CowData<GDExtensionMethodBind*> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<GDExtensionMethodBind*>::_copy_on_write
                  ((CowData<GDExtensionMethodBind*> *)(this + 8));
        *(GDExtensionMethodBind **)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* GDExtension::finish_reload() */

void __thiscall GDExtension::finish_reload(GDExtension *this)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  GDExtensionMethodBind *pGVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ObjectGDExtension *pOVar8;
  String *pSVar9;
  void *pvVar10;
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
  uint uVar31;
  uint uVar32;
  ulong *puVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  long *plVar38;
  StringName *pSVar39;
  long *plVar40;
  undefined8 *puVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  uint uVar46;
  uint *puVar47;
  StringName *pSVar48;
  uint uVar49;
  long *plVar50;
  long in_FS_OFFSET;
  bool bVar51;
  long *local_b0;
  long local_70;
  Vector<StringName> local_68 [8];
  StringName *local_60;
  StringName local_58;
  undefined7 uStack_57;
  long *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar41 = *(undefined8 **)(this + 0x268);
  this[0x2a4] = (GDExtension)0x0;
  local_60 = (StringName *)0x0;
  for (; puVar41 != (undefined8 *)0x0; puVar41 = (undefined8 *)*puVar41) {
    if (*(char *)(puVar41 + 0x24) != '\0') {
      *(undefined1 *)(puVar41 + 0x24) = 0;
      StringName::StringName(&local_58,(StringName *)(puVar41 + 2));
      Vector<StringName>::push_back(local_68);
      if ((StringName::configured != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        StringName::unref();
      }
    }
    local_50[0] = (long *)0x0;
    plVar40 = (long *)puVar41[0x28];
joined_r0x00106a9f:
    if (plVar40 != (long *)0x0) {
      do {
        pGVar4 = (GDExtensionMethodBind *)plVar40[3];
        if (pGVar4[0xd0] != (GDExtensionMethodBind)0x0) {
          pGVar4[0xd1] = (GDExtensionMethodBind)0x0;
          Vector<GDExtensionMethodBind*>::push_back
                    ((Vector<GDExtensionMethodBind*> *)(this + 0x2a8),pGVar4);
          *(undefined1 *)(plVar40[3] + 0xd0) = 0;
          StringName::StringName((StringName *)&local_70,(StringName *)(plVar40 + 2));
          Vector<StringName>::push_back((Vector<StringName> *)&local_58);
          if ((StringName::configured != '\0') && (local_70 != 0)) goto code_r0x00106b05;
        }
        plVar40 = (long *)*plVar40;
        if (plVar40 == (long *)0x0) break;
      } while( true );
    }
    CowData<StringName>::_copy_on_write((CowData<StringName> *)local_50);
    plVar40 = local_50[0];
    CowData<StringName>::_copy_on_write((CowData<StringName> *)local_50);
    local_b0 = local_50[0];
    if (local_50[0] != (long *)0x0) {
      local_b0 = local_50[0] + local_50[0][-1];
    }
    for (; plVar40 != local_b0; plVar40 = plVar40 + 1) {
      if ((puVar41[0x26] != 0) && (*(int *)((long)puVar41 + 0x154) != 0)) {
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar41 + 0x2a) * 4);
        lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(puVar41 + 0x2a) * 8);
        if (*plVar40 == 0) {
          uVar31 = StringName::get_empty_hash();
        }
        else {
          uVar31 = *(uint *)(*plVar40 + 0x20);
        }
        uVar44 = CONCAT44(0,uVar32);
        lVar5 = puVar41[0x27];
        if (uVar31 == 0) {
          uVar31 = 1;
        }
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar31 * lVar42;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar44;
        lVar35 = SUB168(auVar11 * auVar21,8);
        uVar49 = *(uint *)(lVar5 + lVar35 * 4);
        uVar34 = SUB164(auVar11 * auVar21,8);
        if (uVar49 != 0) {
          uVar46 = 0;
LAB_00106c41:
          uVar43 = (ulong)uVar34;
          if ((uVar31 != uVar49) ||
             (lVar6 = puVar41[0x26], *(long *)(*(long *)(lVar6 + lVar35 * 8) + 0x10) != *plVar40))
          goto LAB_00106bf8;
          lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(puVar41 + 0x2a) * 8);
          uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar41 + 0x2a) * 4);
          uVar37 = CONCAT44(0,uVar32);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(uVar34 + 1) * lVar42;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar37;
          uVar36 = SUB168(auVar15 * auVar25,8);
          puVar47 = (uint *)(lVar5 + uVar36 * 4);
          uVar31 = SUB164(auVar15 * auVar25,8);
          uVar44 = (ulong)uVar31;
          uVar45 = (ulong)*puVar47;
          if ((*puVar47 != 0) &&
             (auVar16._8_8_ = 0, auVar16._0_8_ = uVar45 * lVar42, auVar26._8_8_ = 0,
             auVar26._0_8_ = uVar37, auVar17._8_8_ = 0,
             auVar17._0_8_ = (ulong)((uVar32 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar42,
             auVar27._8_8_ = 0, auVar27._0_8_ = uVar37, SUB164(auVar17 * auVar27,8) != 0)) {
            while( true ) {
              puVar1 = (uint *)(lVar5 + uVar43 * 4);
              *puVar47 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar36 * 8);
              *puVar1 = (uint)uVar45;
              puVar3 = (undefined8 *)(lVar6 + uVar43 * 8);
              uVar7 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar7;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = (ulong)((int)uVar44 + 1) * lVar42;
              auVar30._8_8_ = 0;
              auVar30._0_8_ = uVar37;
              uVar36 = SUB168(auVar20 * auVar30,8);
              puVar47 = (uint *)(lVar5 + uVar36 * 4);
              uVar45 = (ulong)*puVar47;
              uVar43 = uVar44;
              if ((*puVar47 == 0) ||
                 (auVar18._8_8_ = 0, auVar18._0_8_ = uVar45 * lVar42, auVar28._8_8_ = 0,
                 auVar28._0_8_ = uVar37, auVar19._8_8_ = 0,
                 auVar19._0_8_ =
                      (ulong)((SUB164(auVar20 * auVar30,8) + uVar32) - SUB164(auVar18 * auVar28,8))
                      * lVar42, auVar29._8_8_ = 0, auVar29._0_8_ = uVar37,
                 SUB164(auVar19 * auVar29,8) == 0)) break;
              uVar44 = uVar36 & 0xffffffff;
            }
          }
          plVar50 = (long *)(lVar6 + uVar43 * 8);
          *(undefined4 *)(lVar5 + uVar43 * 4) = 0;
          plVar38 = (long *)*plVar50;
          if ((long *)puVar41[0x28] == plVar38) {
            puVar41[0x28] = *plVar38;
            plVar38 = (long *)*plVar50;
          }
          if ((long *)puVar41[0x29] == plVar38) {
            puVar41[0x29] = plVar38[1];
            plVar38 = (long *)*plVar50;
          }
          if ((long *)plVar38[1] != (long *)0x0) {
            *(long *)plVar38[1] = *plVar38;
            plVar38 = (long *)*plVar50;
          }
          if (*plVar38 != 0) {
            *(long *)(*plVar38 + 8) = plVar38[1];
            plVar38 = (long *)*plVar50;
          }
          if ((StringName::configured != '\0') && (plVar38[2] != 0)) {
            StringName::unref();
          }
          Memory::free_static(plVar38,false);
          *(undefined8 *)(puVar41[0x26] + uVar43 * 8) = 0;
          *(int *)((long)puVar41 + 0x154) = *(int *)((long)puVar41 + 0x154) + -1;
        }
      }
LAB_00106dd5:
    }
    CowData<StringName>::_unref((CowData<StringName> *)local_50);
  }
  CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60);
  pSVar39 = local_60;
  CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60);
  pSVar48 = local_60;
  if (local_60 != (StringName *)0x0) {
    pSVar48 = local_60 + *(long *)(local_60 + -8) * 8;
  }
  for (; pSVar39 != pSVar48; pSVar39 = pSVar39 + 8) {
    HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
    ::erase((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
             *)(this + 0x250),pSVar39);
  }
  plVar40 = *(long **)(this + 0x268);
  if (plVar40 == (long *)0x0) {
LAB_0010727b:
    CowData<StringName>::_unref((CowData<StringName> *)&local_60);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  do {
    plVar50 = (long *)plVar40[0x33];
joined_r0x00106e9a:
    if (plVar50 != (long *)0x0) {
      do {
        uVar32 = (uint)plVar50[2] & 0xffffff;
        if (uVar32 < (uint)ObjectDB::slot_max) {
          while( true ) {
            local_58 = (StringName)0x0;
            LOCK();
            bVar51 = (char)ObjectDB::spin_lock == '\0';
            if (bVar51) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar51) break;
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar33 = (ulong *)((ulong)uVar32 * 0x10 + ObjectDB::object_slots);
          if (((ulong)plVar50[2] >> 0x18 & 0x7fffffffff) == (*puVar33 & 0x7fffffffff)) {
            pOVar8 = (ObjectGDExtension *)puVar33[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (pOVar8 != (ObjectGDExtension *)0x0) {
              if ((char)plVar50[4] == '\0') goto LAB_00106f4f;
              ClassDB::get_placeholder_extension((StringName *)(plVar40 + 7));
              Object::reset_internal_extension(pOVar8);
            }
          }
          else {
            ObjectDB::spin_lock._0_1_ = '\0';
          }
        }
        else {
          _err_print_error("get_instance","./core/object/object.h",0x418,
                           "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        }
        plVar50 = (long *)*plVar50;
        if (plVar50 == (long *)0x0) break;
      } while( true );
    }
    plVar40 = (long *)*plVar40;
    if (plVar40 == (long *)0x0) {
      plVar40 = *(long **)(this + 0x268);
      if (plVar40 != (long *)0x0) {
        do {
          for (puVar41 = (undefined8 *)plVar40[0x33]; puVar41 != (undefined8 *)0x0;
              puVar41 = (undefined8 *)*puVar41) {
            while( true ) {
              uVar32 = (uint)puVar41[2] & 0xffffff;
              if ((uint)ObjectDB::slot_max <= uVar32) break;
              while( true ) {
                local_58 = (StringName)0x0;
                LOCK();
                bVar51 = (char)ObjectDB::spin_lock == '\0';
                if (bVar51) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
                }
                UNLOCK();
                if (bVar51) break;
                do {
                } while ((char)ObjectDB::spin_lock != '\0');
              }
              puVar33 = (ulong *)((ulong)uVar32 * 0x10 + ObjectDB::object_slots);
              if (((ulong)puVar41[2] >> 0x18 & 0x7fffffffff) == (*puVar33 & 0x7fffffffff)) {
                pSVar48 = (StringName *)puVar33[1];
                ObjectDB::spin_lock._0_1_ = '\0';
                if ((pSVar48 != (StringName *)0x0) &&
                   ((undefined8 *)puVar41[3] != (undefined8 *)0x0)) {
                  for (pSVar9 = *(String **)puVar41[3]; pSVar9 != (String *)0x0;
                      pSVar9 = *(String **)(pSVar9 + 0x20)) {
                    StringName::StringName(&local_58,pSVar9,false);
                    Object::set(pSVar48,(Variant *)&local_58,(bool *)(pSVar9 + 8));
                    if ((StringName::configured != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
                      StringName::unref();
                    }
                  }
                }
                puVar41 = (undefined8 *)*puVar41;
              }
              else {
                ObjectDB::spin_lock._0_1_ = '\0';
                puVar41 = (undefined8 *)*puVar41;
              }
              if (puVar41 == (undefined8 *)0x0) goto LAB_0010707f;
            }
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
          }
LAB_0010707f:
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
        for (puVar41 = *(undefined8 **)(this + 0x268); puVar41 != (undefined8 *)0x0;
            puVar41 = (undefined8 *)*puVar41) {
          for (puVar2 = (undefined8 *)puVar41[0x33]; puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)*puVar2) {
            uVar32 = (uint)puVar2[2] & 0xffffff;
            if (uVar32 < (uint)ObjectDB::slot_max) {
              while( true ) {
                local_58 = (StringName)0x0;
                LOCK();
                bVar51 = (char)ObjectDB::spin_lock == '\0';
                if (bVar51) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
                }
                UNLOCK();
                if (bVar51) break;
                do {
                } while ((char)ObjectDB::spin_lock != '\0');
              }
              puVar33 = (ulong *)((ulong)uVar32 * 0x10 + ObjectDB::object_slots);
              if (((ulong)puVar2[2] >> 0x18 & 0x7fffffffff) == (*puVar33 & 0x7fffffffff)) {
                uVar44 = puVar33[1];
                ObjectDB::spin_lock._0_1_ = '\0';
                if (uVar44 != 0) {
                  Object::notification((int)uVar44,true);
                }
              }
              else {
                ObjectDB::spin_lock._0_1_ = '\0';
              }
            }
            else {
              _err_print_error("get_instance","./core/object/object.h",0x418,
                               "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
            }
          }
          if ((puVar41[0x31] != 0) && (*(int *)((long)puVar41 + 0x1ac) != 0)) {
            lVar42 = 0;
            uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar41 + 0x35) * 4);
            if (uVar32 != 0) {
              do {
                if (*(int *)(puVar41[0x32] + lVar42) != 0) {
                  *(int *)(puVar41[0x32] + lVar42) = 0;
                  pvVar10 = *(void **)(puVar41[0x31] + lVar42 * 2);
                  List<Pair<String,Variant>,DefaultAllocator>::~List
                            ((List<Pair<String,Variant>,DefaultAllocator> *)((long)pvVar10 + 0x18));
                  Memory::free_static(pvVar10,false);
                  *(undefined8 *)(puVar41[0x31] + lVar42 * 2) = 0;
                }
                lVar42 = lVar42 + 4;
              } while (lVar42 != (ulong)uVar32 * 4);
            }
            *(undefined4 *)((long)puVar41 + 0x1ac) = 0;
            *(undefined1 (*) [16])(puVar41 + 0x33) = (undefined1  [16])0x0;
          }
        }
      }
      goto LAB_0010727b;
    }
  } while( true );
code_r0x00106b05:
  StringName::unref();
  plVar40 = (long *)*plVar40;
  goto joined_r0x00106a9f;
LAB_00106bf8:
  uVar46 = uVar46 + 1;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (ulong)(uVar34 + 1) * lVar42;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar44;
  lVar35 = SUB168(auVar12 * auVar22,8);
  uVar49 = *(uint *)(lVar5 + lVar35 * 4);
  uVar34 = SUB164(auVar12 * auVar22,8);
  if ((uVar49 == 0) ||
     (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar49 * lVar42, auVar23._8_8_ = 0,
     auVar23._0_8_ = uVar44, auVar14._8_8_ = 0,
     auVar14._0_8_ = (ulong)((uVar32 + uVar34) - SUB164(auVar13 * auVar23,8)) * lVar42,
     auVar24._8_8_ = 0, auVar24._0_8_ = uVar44, SUB164(auVar14 * auVar24,8) < uVar46))
  goto LAB_00106dd5;
  goto LAB_00106c41;
LAB_00106f4f:
  Object::reset_internal_extension(pOVar8);
  plVar50 = (long *)*plVar50;
  goto joined_r0x00106e9a;
}



/* GDExtension::_register_extension_class_method(void*, void const*, GDExtensionClassMethodInfo
   const*) */

void GDExtension::_register_extension_class_method
               (void *param_1,void *param_2,GDExtensionClassMethodInfo *param_3)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  int *piVar21;
  GDExtensionMethodBind *this;
  int *piVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_80,(StringName *)param_2);
  StringName::StringName((StringName *)&local_78,*(StringName **)param_3);
  if ((*(long *)((long)param_1 + 600) != 0) && (*(int *)((long)param_1 + 0x27c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)param_1 + 0x278) * 4);
    uVar28 = CONCAT44(0,uVar1);
    lVar19 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)((long)param_1 + 0x278) * 8);
    if (local_80 == 0) {
      uVar18 = StringName::get_empty_hash();
    }
    else {
      uVar18 = *(uint *)(local_80 + 0x20);
    }
    if (uVar18 == 0) {
      uVar18 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar18 * lVar19;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar28;
    lVar24 = SUB168(auVar2 * auVar10,8);
    uVar27 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar24 * 4);
    iVar23 = SUB164(auVar2 * auVar10,8);
    if (uVar27 != 0) {
      uVar29 = 0;
      do {
        if ((uVar27 == uVar18) &&
           (*(long *)(*(long *)(*(long *)((long)param_1 + 600) + lVar24 * 8) + 0x10) == local_80)) {
          lVar19 = HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                   ::operator[]((HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
                                 *)((long)param_1 + 0x250),(StringName *)&local_80);
          if (*(char *)(lVar19 + 0x108) != '\0') goto LAB_0010791f;
          if (((*(char *)((long)param_1 + 0x2a4) == '\0') || (*(long *)(lVar19 + 0x118) == 0)) ||
             (*(int *)(lVar19 + 0x13c) == 0)) goto LAB_0010770f;
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar19 + 0x138) * 4);
          lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar19 + 0x138) * 8);
          if (local_78 == 0) {
            uVar18 = StringName::get_empty_hash();
          }
          else {
            uVar18 = *(uint *)(local_78 + 0x20);
          }
          uVar28 = CONCAT44(0,uVar1);
          if (uVar18 == 0) {
            uVar18 = 1;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar18 * lVar24;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar28;
          lVar25 = SUB168(auVar6 * auVar14,8);
          uVar27 = *(uint *)(*(long *)(lVar19 + 0x120) + lVar25 * 4);
          iVar23 = SUB164(auVar6 * auVar14,8);
          if (uVar27 == 0) goto LAB_0010770f;
          uVar29 = 0;
          goto LAB_00107609;
        }
        uVar29 = uVar29 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar23 + 1) * lVar19;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar28;
        lVar24 = SUB168(auVar3 * auVar11,8);
        uVar27 = *(uint *)(*(long *)((long)param_1 + 0x260) + lVar24 * 4);
        iVar23 = SUB164(auVar3 * auVar11,8);
      } while ((uVar27 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar27 * lVar19, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar28, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((uVar1 + iVar23) - SUB164(auVar4 * auVar12,8)) * lVar19,
              auVar13._8_8_ = 0, auVar13._0_8_ = uVar28, uVar29 <= SUB164(auVar5 * auVar13,8)));
    }
  }
  StringName::StringName((StringName *)&local_60,(StringName *)&local_80);
  if (local_78 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = 0;
    if (*(char **)(local_78 + 8) == (char *)0x0) {
      if (*(long *)(local_78 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
      }
    }
    else {
      String::parse_latin1((String *)&local_70,*(char **)(local_78 + 8));
    }
  }
  local_68 = 0;
  local_50 = 0x44;
  local_58 = "Attempt to register extension method \'%s\' for unexisting class \'%s\'.";
  String::parse_latin1((StrRange *)&local_68);
  vformat<String,StringName>
            ((CowData<char32_t> *)&local_58,(StrRange *)&local_68,(CowData<char32_t> *)&local_70,
             (StringName *)&local_60);
  _err_print_error("_register_extension_class_method","core/extension/gdextension.cpp",0x1e4,
                   "Condition \"!self->extension_classes.has(class_name)\" is true.",
                   (CowData<char32_t> *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (StringName::configured == '\0') goto LAB_001077f6;
  if (local_60 != 0) {
    StringName::unref();
LAB_0010791f:
    if (StringName::configured == '\0') goto LAB_001077f6;
  }
  goto LAB_001077cb;
  while( true ) {
    piVar21 = piVar21 + 0xc;
    piVar26 = *(int **)(piVar26 + 0xc);
    if (piVar22 == piVar21) break;
LAB_001076df:
    if (*piVar26 != *piVar21) goto LAB_001076e8;
  }
LAB_00107983:
  GDExtensionMethodBind::update(this,param_3);
  this[0xd0] = (GDExtensionMethodBind)0x0;
  goto LAB_001077b7;
LAB_001076e8:
  this[0xd1] = (GDExtensionMethodBind)0x0;
  Vector<GDExtensionMethodBind*>::push_back
            ((Vector<GDExtensionMethodBind*> *)((long)param_1 + 0x2a8),this);
  goto LAB_0010770f;
  while( true ) {
    uVar29 = uVar29 + 1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)(iVar23 + 1) * lVar24;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar28;
    lVar25 = SUB168(auVar7 * auVar15,8);
    uVar27 = *(uint *)(*(long *)(lVar19 + 0x120) + lVar25 * 4);
    iVar23 = SUB164(auVar7 * auVar15,8);
    if ((uVar27 == 0) ||
       (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar27 * lVar24, auVar16._8_8_ = 0,
       auVar16._0_8_ = uVar28, auVar9._8_8_ = 0,
       auVar9._0_8_ = (ulong)((uVar1 + iVar23) - SUB164(auVar8 * auVar16,8)) * lVar24,
       auVar17._8_8_ = 0, auVar17._0_8_ = uVar28, SUB164(auVar9 * auVar17,8) < uVar29)) break;
LAB_00107609:
    if ((uVar27 == uVar18) &&
       (*(long *)(*(long *)(*(long *)(lVar19 + 0x118) + lVar25 * 8) + 0x10) == local_78)) {
      puVar20 = (undefined8 *)
                HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
                ::operator[]((HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
                              *)(lVar19 + 0x110),(StringName *)&local_78);
      this = (GDExtensionMethodBind *)*puVar20;
      if ((((this[0xd0] == (GDExtensionMethodBind)0x0) ||
           ((this[0x38] != (GDExtensionMethodBind)((byte)(*(uint *)(param_3 + 0x20) >> 5) & 1) ||
            (this[0x78] != (GDExtensionMethodBind)((byte)(*(uint *)(param_3 + 0x20) >> 4) & 1)))))
          || (this[0x3a] !=
              (GDExtensionMethodBind)(param_3[0x24] != (GDExtensionClassMethodInfo)0x0))) ||
         ((this[0x3a] != (GDExtensionMethodBind)0x0 &&
          (*(int *)(this + 0x80) != **(int **)(param_3 + 0x28))))) goto LAB_001076e8;
      uVar1 = *(uint *)(param_3 + 0x34);
      if (*(uint *)(this + 0x7c) != uVar1) goto LAB_001076e8;
      piVar26 = *(int **)(this + 0xb8);
      if (piVar26 != (int *)0x0) {
        piVar26 = *(int **)piVar26;
      }
      if (uVar1 == 0) goto LAB_00107983;
      piVar21 = *(int **)(param_3 + 0x38);
      piVar22 = piVar21 + (ulong)uVar1 * 0xc;
      goto LAB_001076df;
    }
  }
LAB_0010770f:
  this = (GDExtensionMethodBind *)operator_new(0xd8,"");
  MethodBind::MethodBind((MethodBind *)this);
  *(undefined ***)this = &PTR__gen_argument_type_0011ac80;
  *(undefined2 *)((MethodBind *)this + 0xd0) = 0x100;
  *(undefined4 *)((MethodBind *)this + 0x80) = 0;
  *(undefined4 *)((MethodBind *)this + 0x98) = 0;
  *(undefined8 *)((MethodBind *)this + 0xa0) = 0;
  *(undefined4 *)((MethodBind *)this + 0xa8) = 6;
  *(undefined8 *)((MethodBind *)this + 200) = 0;
  *(undefined1 (*) [16])((MethodBind *)this + 0x88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((MethodBind *)this + 0xb8) = (undefined1  [16])0x0;
  GDExtensionMethodBind::update(this,param_3);
  StringName::operator=((StringName *)((MethodBind *)this + 0x18),(StringName *)&local_80);
  puVar20 = (undefined8 *)
            HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
            ::operator[]((HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
                          *)(lVar19 + 0x110),(StringName *)&local_78);
  *puVar20 = this;
LAB_001077b7:
  ClassDB::bind_method_custom((StringName *)&local_80,(MethodBind *)this);
  if (StringName::configured != '\0') {
LAB_001077cb:
    if (((local_78 == 0) || (StringName::unref(), StringName::configured != '\0')) &&
       (local_80 != 0)) {
      StringName::unref();
    }
  }
LAB_001077f6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDExtension::untrack_instance_binding(Object*) */

void __thiscall GDExtension::untrack_instance_binding(GDExtension *this,Object *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2c0);
  if ((lVar1 != 0) && (lVar3 = *(long *)(lVar1 + -8), 0 < lVar3)) {
    lVar2 = 0;
    do {
      if (*(long *)(param_1 + 0x60) == *(long *)(lVar1 + lVar2 * 8)) {
        if (lVar3 <= lVar2) {
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,lVar2,lVar3,"p_index","size()",""
                     ,false,false);
          return;
        }
        CowData<ObjectID>::_copy_on_write((CowData<ObjectID> *)(this + 0x2c0));
        lVar1 = *(long *)(this + 0x2c0);
        if (lVar1 == 0) {
          lVar3 = -1;
        }
        else {
          lVar3 = *(long *)(lVar1 + -8) + -1;
          if (lVar2 < lVar3) {
            memmove((void *)(lVar1 + lVar2 * 8),(void *)(lVar1 + 8 + lVar2 * 8),(lVar3 - lVar2) * 8)
            ;
          }
        }
        CowData<ObjectID>::resize<false>((CowData<ObjectID> *)(this + 0x2c0),lVar3);
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar3 != lVar2);
    return;
  }
  return;
}



/* GDExtension::clear_instance_bindings() */

void __thiscall GDExtension::clear_instance_bindings(GDExtension *this)

{
  CowData<ObjectID> *this_00;
  long lVar1;
  void *pvVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  this_00 = (CowData<ObjectID> *)(this + 0x2c0);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<ObjectID>::_copy_on_write(this_00);
  puVar5 = *(ulong **)(this + 0x2c0);
  CowData<ObjectID>::_copy_on_write(this_00);
  puVar6 = *(ulong **)(this + 0x2c0);
  if (puVar6 != (ulong *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    uVar3 = (uint)*puVar5 & 0xffffff;
    if (uVar3 < (uint)ObjectDB::slot_max) {
      while( true ) {
        LOCK();
        bVar7 = (char)ObjectDB::spin_lock == '\0';
        if (bVar7) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar7) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
      if ((*puVar5 >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
        pvVar2 = (void *)puVar4[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (pvVar2 != (void *)0x0) {
          Object::free_instance_binding(pvVar2);
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CowData<ObjectID>::resize<false>(this_00,0);
  return;
}



/* GDExtension::track_instance_binding(Object*) */

void __thiscall GDExtension::track_instance_binding(GDExtension *this,Object *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (*(long *)(this + 0x2c0) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0x2c0) + -8) + 1;
  }
  iVar2 = CowData<ObjectID>::resize<false>((CowData<ObjectID> *)(this + 0x2c0),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 0x2c0) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 0x2c0) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<ObjectID>::_copy_on_write((CowData<ObjectID> *)(this + 0x2c0));
        *(undefined8 *)(*(long *)(this + 0x2c0) + lVar4 * 8) = uVar1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* GDExtension::close_library() */

void __thiscall GDExtension::close_library(GDExtension *this)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  
  if (*(long **)(this + 0x240) != (long *)0x0) {
    cVar5 = (**(code **)(**(long **)(this + 0x240) + 0x168))();
    if (cVar5 != '\0') {
      (**(code **)(**(long **)(this + 0x240) + 0x160))();
      if ((*(long *)(this + 0x2d0) != 0) && (*(int *)(this + 0x2f4) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2f0) * 4);
        if (uVar2 != 0) {
          lVar6 = 0;
          do {
            if (*(int *)(*(long *)(this + 0x2d8) + lVar6) != 0) {
              *(int *)(*(long *)(this + 0x2d8) + lVar6) = 0;
              pvVar3 = *(void **)(*(long *)(this + 0x2d0) + lVar6 * 2);
              if (*(long *)((long)pvVar3 + 0x18) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)((long)pvVar3 + 0x18) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)((long)pvVar3 + 0x18);
                  *(undefined8 *)((long)pvVar3 + 0x18) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              if (*(long *)((long)pvVar3 + 0x10) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)((long)pvVar3 + 0x10) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)((long)pvVar3 + 0x10);
                  *(undefined8 *)((long)pvVar3 + 0x10) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              Memory::free_static(pvVar3,false);
              *(undefined8 *)(*(long *)(this + 0x2d0) + lVar6 * 2) = 0;
            }
            lVar6 = lVar6 + 4;
          } while (lVar6 != (ulong)uVar2 << 2);
        }
        *(undefined4 *)(this + 0x2f4) = 0;
        *(undefined1 (*) [16])(this + 0x2e0) = (undefined1  [16])0x0;
      }
      CowData<ObjectID>::resize<false>((CowData<ObjectID> *)(this + 0x2c0),0);
      return;
    }
  }
  _err_print_error("close_library","core/extension/gdextension.cpp",0x2ce,
                   "Condition \"!is_library_open()\" is true.",0,0);
  return;
}



/* GDExtension::~GDExtension() */

void __thiscall GDExtension::~GDExtension(GDExtension *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  *(undefined ***)this = &PTR__initialize_classv_0011ace0;
  if ((*(long **)(this + 0x240) != (long *)0x0) &&
     (cVar5 = (**(code **)(**(long **)(this + 0x240) + 0x168))(), cVar5 != '\0')) {
    close_library(this);
  }
  CowData<GDExtensionMethodBind*>::_copy_on_write((CowData<GDExtensionMethodBind*> *)(this + 0x2b0))
  ;
  puVar6 = *(undefined8 **)(this + 0x2b0);
  CowData<GDExtensionMethodBind*>::_copy_on_write((CowData<GDExtensionMethodBind*> *)(this + 0x2b0))
  ;
  puVar9 = *(undefined8 **)(this + 0x2b0);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9 = puVar9 + puVar9[-1];
  }
  for (; puVar6 != puVar9; puVar6 = puVar6 + 1) {
    plVar2 = (long *)*puVar6;
    (**(code **)(*plVar2 + 0x40))(plVar2);
    Memory::free_static(plVar2,false);
  }
  pvVar8 = *(void **)(this + 0x2d0);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x2f4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2f0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x2f4) = 0;
        *(undefined1 (*) [16])(this + 0x2e0) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2d8) + lVar7) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x2d8) + lVar7) = 0;
            if (*(long *)((long)pvVar8 + 0x18) != 0) {
              LOCK();
              plVar2 = (long *)(*(long *)((long)pvVar8 + 0x18) + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar3 = *(long *)((long)pvVar8 + 0x18);
                *(undefined8 *)((long)pvVar8 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar8 + 0x10) != 0) {
              LOCK();
              plVar2 = (long *)(*(long *)((long)pvVar8 + 0x10) + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar3 = *(long *)((long)pvVar8 + 0x10);
                *(undefined8 *)((long)pvVar8 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 0x2d0);
            *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar1 << 2 != lVar7);
        *(undefined4 *)(this + 0x2f4) = 0;
        *(undefined1 (*) [16])(this + 0x2e0) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00108038;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0x2d8),false);
  }
LAB_00108038:
  if (*(long *)(this + 0x2c0) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(this + 0x2c0) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar7 = *(long *)(this + 0x2c0);
      *(undefined8 *)(this + 0x2c0) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2b0) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(this + 0x2b0) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar7 = *(long *)(this + 0x2b0);
      *(undefined8 *)(this + 0x2b0) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  pvVar8 = *(void **)(this + 600);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x27c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x278) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x27c) = 0;
        *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x260) + lVar7) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x260) + lVar7) = 0;
            Extension::~Extension((Extension *)((long)pvVar8 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar8 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 600);
            *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x27c) = 0;
        *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00108132;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0x260),false);
  }
LAB_00108132:
  if ((*(long *)(this + 0x240) != 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
    pOVar4 = *(Object **)(this + 0x240);
    cVar5 = predelete_handler(pOVar4);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* GDExtension::~GDExtension() */

void __thiscall GDExtension::~GDExtension(GDExtension *this)

{
  ~GDExtension(this);
  operator_delete(this,0x2f8);
  return;
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



/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
  return;
}



/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
  operator_delete(this,0x10);
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
  return (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* ResourceFormatLoader::is_class_ptr(void*) const */

uint __thiscall ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this,void *param_1)

{
  return (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatLoader::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */

void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */

undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_notificationv(int, bool) */

void ResourceFormatLoader::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceFormatLoader::is_import_valid(String const&) const */

undefined8 ResourceFormatLoader::is_import_valid(String *param_1)

{
  return 1;
}



/* ResourceFormatLoader::is_imported(String const&) const */

undefined8 ResourceFormatLoader::is_imported(String *param_1)

{
  return 0;
}



/* ResourceFormatLoader::get_import_order(String const&) const */

undefined8 ResourceFormatLoader::get_import_order(String *param_1)

{
  return 0;
}



/* GDExtension::is_class_ptr(void*) const */

uint __thiscall GDExtension::is_class_ptr(GDExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GDExtension::_getv(StringName const&, Variant&) const */

undefined8 GDExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDExtension::_setv(StringName const&, Variant const&) */

undefined8 GDExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDExtension::_validate_propertyv(PropertyInfo&) const */

void GDExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GDExtension::_property_can_revertv(StringName const&) const */

undefined8 GDExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GDExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GDExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDExtension::_notificationv(int, bool) */

void GDExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GDExtension::editor_can_reload_from_file() */

undefined8 GDExtension::editor_can_reload_from_file(void)

{
  return 0;
}



/* GDExtensionMethodBind::is_valid() const */

GDExtensionMethodBind __thiscall GDExtensionMethodBind::is_valid(GDExtensionMethodBind *this)

{
  return this[0xd1];
}



/* GDExtensionMethodBind::is_vararg() const */

GDExtensionMethodBind __thiscall GDExtensionMethodBind::is_vararg(GDExtensionMethodBind *this)

{
  return this[0x78];
}



/* Vector<StringName>::~Vector() */

void __thiscall Vector<StringName>::~Vector(Vector<StringName> *this)

{
  CowData<StringName>::_unref((CowData<StringName> *)(this + 8));
  return;
}



/* MethodBindTRC<GDExtension::InitializationLevel>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<GDExtension::InitializationLevel>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<GDExtension::InitializationLevel>::get_argument_meta(int) const */

undefined8 MethodBindTRC<GDExtension::InitializationLevel>::get_argument_meta(int param_1)

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



/* MethodBindT<GDExtension::InitializationLevel>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<GDExtension::InitializationLevel>::_gen_argument_type
          (MethodBindT<GDExtension::InitializationLevel> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<GDExtension::InitializationLevel>::get_argument_meta(int) const */

undefined8 MethodBindT<GDExtension::InitializationLevel>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&,String_const&>::_gen_argument_type
          (MethodBindTR<Error,String_const&,String_const&> *this,int param_1)

{
  return (-((uint)param_1 < 2) & 2U) + 2;
}



/* MethodBindTR<Error, String const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b0a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b0a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b100;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b100;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<GDExtension::InitializationLevel>::~MethodBindT() */

void __thiscall
MethodBindT<GDExtension::InitializationLevel>::~MethodBindT
          (MethodBindT<GDExtension::InitializationLevel> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b160;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<GDExtension::InitializationLevel>::~MethodBindT() */

void __thiscall
MethodBindT<GDExtension::InitializationLevel>::~MethodBindT
          (MethodBindT<GDExtension::InitializationLevel> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b160;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b1c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b1c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GDExtension::InitializationLevel>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GDExtension::InitializationLevel>::~MethodBindTRC
          (MethodBindTRC<GDExtension::InitializationLevel> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b220;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GDExtension::InitializationLevel>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GDExtension::InitializationLevel>::~MethodBindTRC
          (MethodBindTRC<GDExtension::InitializationLevel> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b220;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011ab20;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011ab20;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<ObjectID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ObjectID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GDExtensionMethodBind*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GDExtensionMethodBind*>::_copy_on_write(void)

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



/* GDExtensionMethodBind::get_argument_meta(int) const */

undefined4 __thiscall
GDExtensionMethodBind::get_argument_meta(GDExtensionMethodBind *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  
  if (param_1 < 0) {
    return *(undefined4 *)(this + 0xb0);
  }
  puVar1 = *(undefined8 **)(this + 0xc0);
  if (puVar1 == (undefined8 *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (long)*(int *)(puVar1 + 2);
    if (param_1 < *(int *)(puVar1 + 2)) {
      puVar3 = (undefined4 *)*puVar1;
      if (param_1 != 0) {
        iVar4 = 0;
        if ((param_1 & 1U) != 0) {
          puVar3 = *(undefined4 **)(puVar3 + 2);
          iVar4 = 1;
          if (param_1 == 1) goto LAB_00108bdf;
        }
        do {
          iVar4 = iVar4 + 2;
          puVar3 = *(undefined4 **)(*(long *)(puVar3 + 2) + 8);
        } while (param_1 != iVar4);
      }
LAB_00108bdf:
      return *puVar3;
    }
  }
  _err_print_index_error
            ("get","./core/templates/list.h",0x22b,(long)param_1,lVar5,"p_index","size()","",false,
             true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ResourceFormatLoader::_get_class_namev() const */

undefined8 * ResourceFormatLoader::_get_class_namev(void)

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
LAB_00108c83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108c83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
      goto LAB_00108cee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
LAB_00108cee:
  return &_get_class_namev()::_class_name_static;
}



/* HashMap<StringName, void (*)(), HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, void (*)()> > >::~HashMap() */

void __thiscall
HashMap<StringName,void(*)(),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,void(*)()>>>
::~HashMap(HashMap<StringName,void(*)(),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,void(*)()>>>
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



/* GDExtensionMethodBind::_gen_argument_type(int) const */

undefined4 __thiscall
GDExtensionMethodBind::_gen_argument_type(GDExtensionMethodBind *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  
  if (param_1 < 0) {
    return *(undefined4 *)(this + 0x80);
  }
  puVar1 = *(undefined8 **)(this + 0xb8);
  if (puVar1 == (undefined8 *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (long)*(int *)(puVar1 + 2);
    if (param_1 < *(int *)(puVar1 + 2)) {
      puVar3 = (undefined4 *)*puVar1;
      if (param_1 != 0) {
        iVar4 = 0;
        if ((param_1 & 1U) != 0) {
          puVar3 = *(undefined4 **)(puVar3 + 0xc);
          iVar4 = 1;
          if (param_1 == 1) goto LAB_00108e6f;
        }
        do {
          iVar4 = iVar4 + 2;
          puVar3 = *(undefined4 **)(*(long *)(puVar3 + 0xc) + 0x30);
        } while (param_1 != iVar4);
      }
LAB_00108e6f:
      return *puVar3;
    }
  }
  _err_print_index_error
            ("get","./core/templates/list.h",0x22b,(long)param_1,lVar5,"p_index","size()","",false,
             true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aae0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aaa0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa60;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011a9e0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aac0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa40;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa20;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011ab00;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aac0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa20;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011ab00;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aaa0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011a9e0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa60;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aae0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa40;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* ResourceFormatLoader::get_import_group_file(String const&) const */

String * ResourceFormatLoader::get_import_group_file(String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  String::parse_latin1((StrRange *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

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



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa00;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa00;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* GDExtension::_get_class_namev() const */

undefined8 * GDExtension::_get_class_namev(void)

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
LAB_0010a4e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a4e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GDExtension");
      goto LAB_0010a54e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GDExtension");
LAB_0010a54e:
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
LAB_0010a5c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a5c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010a62e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010a62e:
  return &_get_class_namev()::_class_name_static;
}



/* GDExtensionMethodBind::_gen_argument_type_info(int) const */

undefined4 * GDExtensionMethodBind::_gen_argument_type_info(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  uint in_EDX;
  undefined4 *puVar5;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long lVar7;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  if ((int)in_EDX < 0) {
    uVar1 = *(undefined4 *)(in_RSI + 0x80);
    *(undefined8 *)(puVar6 + 2) = 0;
    lVar7 = *(long *)(in_RSI + 0x88);
    *puVar6 = uVar1;
    if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(in_RSI + 0x88));
    }
    StringName::StringName((StringName *)(puVar6 + 4),(StringName *)(in_RSI + 0x90));
    uVar1 = *(undefined4 *)(in_RSI + 0x98);
    *(undefined8 *)(puVar6 + 8) = 0;
    lVar7 = *(long *)(in_RSI + 0xa0);
    puVar6[6] = uVar1;
    if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)(in_RSI + 0xa0));
    }
    puVar6[10] = *(undefined4 *)(in_RSI + 0xa8);
    return puVar6;
  }
  puVar2 = *(undefined8 **)(in_RSI + 0xb8);
  if (puVar2 == (undefined8 *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (long)*(int *)(puVar2 + 2);
    if ((int)in_EDX < *(int *)(puVar2 + 2)) {
      puVar5 = (undefined4 *)*puVar2;
      if (in_EDX != 0) {
        uVar4 = 0;
        if ((in_EDX & 1) != 0) {
          puVar5 = *(undefined4 **)(puVar5 + 0xc);
          uVar4 = 1;
          if (in_EDX == 1) goto LAB_0010a6d7;
        }
        do {
          uVar4 = uVar4 + 2;
          puVar5 = *(undefined4 **)(*(long *)(puVar5 + 0xc) + 0x30);
        } while (in_EDX != uVar4);
      }
LAB_0010a6d7:
      uVar1 = *puVar5;
      *(undefined8 *)(puVar6 + 2) = 0;
      lVar7 = *(long *)(puVar5 + 2);
      *puVar6 = uVar1;
      if (lVar7 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
      }
      StringName::StringName((StringName *)(puVar6 + 4),(StringName *)(puVar5 + 4));
      uVar1 = puVar5[6];
      *(undefined8 *)(puVar6 + 8) = 0;
      lVar7 = *(long *)(puVar5 + 8);
      puVar6[6] = uVar1;
      if (lVar7 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)(puVar5 + 8));
      }
      puVar6[10] = puVar5[10];
      return puVar6;
    }
  }
  _err_print_index_error
            ("get","./core/templates/list.h",0x22b,(long)(int)in_EDX,lVar7,"p_index","size()","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
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



/* GDExtension::get_class() const */

void GDExtension::get_class(void)

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



/* ResourceFormatLoader::get_class() const */

void ResourceFormatLoader::get_class(void)

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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
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
      goto joined_r0x0010abbc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010abbc:
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
            if (lVar3 == 0) goto LAB_0010ac7f;
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
LAB_0010ac7f:
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
    if (cVar6 != '\0') goto LAB_0010ad33;
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
      if (cVar6 != '\0') goto LAB_0010ad33;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010ad33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::is_class(String const&) const */

undefined8 __thiscall ResourceFormatLoader::is_class(ResourceFormatLoader *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010aedf;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010aedf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010af93;
  }
  cVar5 = String::operator==(param_1,"ResourceFormatLoader");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010af93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtension::is_class(String const&) const */

undefined8 __thiscall GDExtension::is_class(GDExtension *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010b06f;
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
LAB_0010b06f:
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
    if (cVar6 != '\0') goto LAB_0010b123;
  }
  cVar6 = String::operator==(param_1,"GDExtension");
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
      if (cVar6 != '\0') goto LAB_0010b123;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_0010b268;
    }
  }
LAB_0010b123:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b268:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "RefCounted";
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
LAB_0010b578:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b578;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010b596;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010b596:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
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



/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatLoader";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatLoader";
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
LAB_0010b978:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b978;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010b995;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010b995:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"ResourceFormatLoader",false);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_0010be28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010be28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010be45;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010be45:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* GDExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GDExtension::_get_property_listv(GDExtension *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GDExtension";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GDExtension";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_0010c278:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c278;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c295;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c295:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"GDExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = ProjectSettings::get_project_data_path;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6d3;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010c6d3:
  *(undefined ***)this = &PTR__initialize_classv_0011ab20;
  Object::~Object((Object *)this);
  return;
}



/* GDExtensionResourceLoader::~GDExtensionResourceLoader() */

void __thiscall
GDExtensionResourceLoader::~GDExtensionResourceLoader(GDExtensionResourceLoader *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011aeb8;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* GDExtensionResourceLoader::~GDExtensionResourceLoader() */

void __thiscall
GDExtensionResourceLoader::~GDExtensionResourceLoader(GDExtensionResourceLoader *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011aeb8;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  operator_delete(this,0x288);
  return;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  ~ResourceFormatLoader(this);
  operator_delete(this,0x288);
  return;
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



/* GDExtensionMethodBind::~GDExtensionMethodBind() */

void __thiscall GDExtensionMethodBind::~GDExtensionMethodBind(GDExtensionMethodBind *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__gen_argument_type_0011ac80;
  if ((bVar5) && (*(long *)(this + 200) != 0)) {
    StringName::unref();
  }
  plVar4 = *(long **)(this + 0xc0);
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010c9b6;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x18) == plVar4) {
        lVar3 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0xc0);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_0010c9b6:
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0xb8));
  if (*(long *)(this + 0xa0) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0xa0) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar3 = *(long *)(this + 0xa0);
      *(undefined8 *)(this + 0xa0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x90) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x88) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0x88) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar3 = *(long *)(this + 0x88);
      *(undefined8 *)(this + 0x88) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      MethodBind::~MethodBind((MethodBind *)this);
      return;
    }
  }
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* GDExtensionMethodBind::~GDExtensionMethodBind() */

void __thiscall GDExtensionMethodBind::~GDExtensionMethodBind(GDExtensionMethodBind *this)

{
  ~GDExtensionMethodBind(this);
  operator_delete(this,0xd8);
  return;
}



/* Variant::Pools::BucketSmall* PagedAllocator<Variant::Pools::BucketSmall, true, 4096u>::alloc<>()
    */

BucketSmall * __thiscall
PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> PVar2;
  long lVar3;
  BucketSmall *pBVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar13 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x18,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar14 = *(long **)(this + 8);
    }
    else {
      plVar14 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      plVar6 = (long *)*plVar14;
      lVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar12 = plVar11 + 1;
        lVar15 = *(long *)(lVar5 + lVar13) + lVar10;
        lVar10 = lVar10 + 0x18;
        *plVar11 = lVar15;
        plVar11 = plVar12;
      } while (plVar6 + uVar7 != plVar12);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar14 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketSmall **)
            (plVar14[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Variant::Pools::BucketMedium* PagedAllocator<Variant::Pools::BucketMedium, true,
   4096u>::alloc<>() */

BucketMedium * __thiscall
PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> PVar2;
  long lVar3;
  BucketMedium *pBVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar13 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar14 = *(long **)(this + 8);
    }
    else {
      plVar14 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      plVar6 = (long *)*plVar14;
      lVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar12 = plVar11 + 1;
        lVar15 = *(long *)(lVar5 + lVar13) + lVar10;
        lVar10 = lVar10 + 0x30;
        *plVar11 = lVar15;
        plVar11 = plVar12;
      } while (plVar6 + uVar7 != plVar12);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar14 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketMedium **)
            (plVar14[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Variant::Pools::BucketLarge* PagedAllocator<Variant::Pools::BucketLarge, true, 4096u>::alloc<>()
    */

BucketLarge * __thiscall
PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> PVar2;
  long lVar3;
  BucketLarge *pBVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar11 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) << 6,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar12 = *(long **)(this + 8);
    }
    else {
      plVar12 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      uVar10 = 0;
      lVar6 = *plVar12;
      do {
        *(ulong *)(lVar6 + uVar10 * 8) = uVar10 * 0x40 + *(long *)(lVar5 + lVar11);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar7);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar12 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketLarge **)
            (plVar12[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<ObjectID, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID> > const&) */

void __thiscall
HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator=
          (HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *this,
          HashSet *param_1)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (this == (HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *)param_1)
  {
    return;
  }
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) != 0) {
        memset(*(void **)(this + 0x18),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2);
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x10),false);
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x18),false);
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  *(ulong *)(this + 0x20) = uVar1;
  if ((int)(uVar1 >> 0x20) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
    uVar1 = (ulong)uVar2 * 4;
    uVar8 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x18) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar2 * 8,false);
    *(undefined8 *)this = uVar8;
    uVar8 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x10) = uVar8;
    lVar9 = Memory::alloc_static(uVar1,false);
    *(long *)(this + 8) = lVar9;
    if (*(int *)(this + 0x24) != 0) {
      lVar4 = *(long *)this;
      lVar5 = *(long *)param_1;
      lVar10 = 0;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(this + 0x10);
      do {
        *(undefined8 *)(lVar4 + lVar10 * 8) = *(undefined8 *)(lVar5 + lVar10 * 8);
        *(undefined4 *)(lVar7 + lVar10 * 4) = *(undefined4 *)(lVar6 + lVar10 * 4);
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x24));
    }
    if (uVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(this + 0x18);
      uVar11 = 0;
      lVar6 = *(long *)(param_1 + 8);
      do {
        *(undefined4 *)(lVar5 + uVar11) = *(undefined4 *)(lVar4 + uVar11);
        *(undefined4 *)(lVar9 + uVar11) = *(undefined4 *)(lVar6 + uVar11);
        uVar11 = uVar11 + 4;
      } while (uVar11 != uVar1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, void (*)(), HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, void (*)()> > >::insert(StringName const&, void
   (* const&)(), bool) */

StringName *
HashMap<StringName,void(*)(),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,void(*)()>>>
::insert(StringName *param_1,_func_void *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
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
  long *plVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  long lVar34;
  void *pvVar35;
  long *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  StringName *pSVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  long *plVar47;
  long in_FS_OFFSET;
  bool bVar48;
  long *local_b0;
  long local_58;
  long local_50;
  long local_40;
  
  pSVar37 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar41 = (ulong)uVar30;
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar35;
    if (uVar30 != 0) {
      pvVar4 = *(void **)(param_2 + 0x10);
      if ((pvVar4 < (void *)((long)pvVar35 + uVar45)) && (pvVar35 < (void *)((long)pvVar4 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar41 != uVar32);
      }
      else {
        memset(pvVar4,0,uVar32);
        memset(pvVar35,0,uVar45);
      }
      goto LAB_0010d1b8;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    if (pvVar35 == (void *)0x0) goto LAB_0010d2e0;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010d1c4;
LAB_0010d306:
    uVar30 = *(uint *)(param_2 + 0x28);
    if (uVar30 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b0 = (long *)0x0;
      goto LAB_0010d299;
    }
    uVar32 = (ulong)(uVar30 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    uVar41 = (ulong)uVar30;
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar35 = *(void **)(param_2 + 8);
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar41);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar3 != 0) {
      uVar32 = 0;
      do {
        uVar30 = *(uint *)((long)pvVar4 + uVar32 * 4);
        if (uVar30 != 0) {
          lVar34 = *(long *)(param_2 + 0x10);
          uVar43 = 0;
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar31);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar30 * lVar38;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar45;
          lVar39 = SUB168(auVar9 * auVar21,8);
          puVar1 = (uint *)(lVar34 + lVar39 * 4);
          iVar36 = SUB164(auVar9 * auVar21,8);
          uVar44 = *puVar1;
          uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar44 * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar10 * auVar22,8)) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar46 = SUB164(auVar11 * auVar23,8);
            uVar42 = uVar33;
            if (uVar46 < uVar43) {
              *puVar1 = uVar30;
              puVar2 = (undefined8 *)((long)__s_00 + lVar39 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar33;
              uVar30 = uVar44;
              uVar43 = uVar46;
            }
            uVar43 = uVar43 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar36 + 1) * lVar38;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar39 = SUB168(auVar12 * auVar24,8);
            puVar1 = (uint *)(lVar34 + lVar39 * 4);
            iVar36 = SUB164(auVar12 * auVar24,8);
            uVar33 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar39 * 8) = uVar33;
          *puVar1 = uVar30;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar3 != uVar32);
      Memory::free_static(pvVar35,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
LAB_0010d1b8:
    iVar36 = *(int *)(param_2 + 0x2c);
    if (iVar36 != 0) {
LAB_0010d1c4:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar37 == 0) {
        uVar31 = StringName::get_empty_hash();
      }
      else {
        uVar31 = *(uint *)(*(long *)pSVar37 + 0x20);
      }
      if (uVar31 == 0) {
        uVar31 = 1;
      }
      uVar46 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar31 * lVar34;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar32;
      lVar38 = SUB168(auVar5 * auVar17,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar43 = SUB164(auVar5 * auVar17,8);
      if (uVar44 != 0) {
        do {
          if ((uVar31 == uVar44) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10) == *(long *)pSVar37))
          {
            local_b0 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            local_b0[3] = *in_RCX;
            goto LAB_0010d299;
          }
          uVar46 = uVar46 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar43 + 1) * lVar34;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar32;
          lVar38 = SUB168(auVar6 * auVar18,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar43 = SUB164(auVar6 * auVar18,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar34, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar43) - SUB164(auVar7 * auVar19,8)) * lVar34,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar32, uVar46 <= SUB164(auVar8 * auVar20,8)));
      }
      iVar36 = *(int *)(param_2 + 0x2c);
    }
LAB_0010d2e0:
    if ((float)uVar30 * __LC41 < (float)(iVar36 + 1)) goto LAB_0010d306;
  }
  StringName::StringName((StringName *)&local_58,pSVar37);
  local_50 = *in_RCX;
  local_b0 = (long *)operator_new(0x20,"");
  *local_b0 = 0;
  local_b0[1] = 0;
  StringName::StringName((StringName *)(local_b0 + 2),(StringName *)&local_58);
  bVar48 = StringName::configured != '\0';
  local_b0[3] = local_50;
  if ((bVar48) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_b0;
    *(long **)(param_2 + 0x20) = local_b0;
LAB_0010d5a7:
    lVar34 = *(long *)pSVar37;
    if (lVar34 != 0) goto LAB_0010d5b3;
LAB_0010d6b4:
    uVar30 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar34 = *(long *)(param_2 + 0x18);
      *(long **)(lVar34 + 8) = local_b0;
      *local_b0 = lVar34;
      *(long **)(param_2 + 0x18) = local_b0;
      goto LAB_0010d5a7;
    }
    *puVar2 = local_b0;
    local_b0[1] = (long)puVar2;
    lVar34 = *(long *)pSVar37;
    *(long **)(param_2 + 0x20) = local_b0;
    if (lVar34 == 0) goto LAB_0010d6b4;
LAB_0010d5b3:
    uVar30 = *(uint *)(lVar34 + 0x20);
  }
  lVar34 = *(long *)(param_2 + 0x10);
  if (uVar30 == 0) {
    uVar30 = 1;
  }
  uVar32 = (ulong)uVar30;
  uVar44 = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar3);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar32 * lVar38;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar45;
  lVar40 = SUB168(auVar13 * auVar25,8);
  lVar39 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar34 + lVar40 * 4);
  iVar36 = SUB164(auVar13 * auVar25,8);
  uVar31 = *puVar1;
  plVar29 = local_b0;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar3 + iVar36) - SUB164(auVar14 * auVar26,8)) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    uVar30 = SUB164(auVar15 * auVar27,8);
    plVar47 = plVar29;
    if (uVar30 < uVar44) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar31;
      puVar2 = (undefined8 *)(lVar39 + lVar40 * 8);
      plVar47 = (long *)*puVar2;
      *puVar2 = plVar29;
      uVar44 = uVar30;
    }
    uVar30 = (uint)uVar32;
    uVar44 = uVar44 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar36 + 1) * lVar38;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    lVar40 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar34 + lVar40 * 4);
    iVar36 = SUB164(auVar16 * auVar28,8);
    plVar29 = plVar47;
    uVar31 = *puVar1;
  }
  *(long **)(lVar39 + lVar40 * 8) = plVar29;
  *puVar1 = uVar30;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010d299:
  *(long **)param_1 = local_b0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* List<Pair<String, Variant>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<String,Variant>,DefaultAllocator>::~List
          (List<Pair<String,Variant>,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar4;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[6] == plVar4) {
      *plVar4 = plVar2[4];
      if (plVar2 == (long *)plVar4[1]) {
        plVar4[1] = plVar2[5];
      }
      if (plVar2[5] != 0) {
        *(long *)(plVar2[5] + 0x20) = plVar2[4];
      }
      if (plVar2[4] != 0) {
        *(long *)(plVar2[4] + 0x28) = plVar2[5];
      }
      if (Variant::needs_deinit[(int)plVar2[1]] != '\0') {
        Variant::_clear_internal();
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
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



/* GDExtension::Extension::~Extension() */

void __thiscall GDExtension::Extension::~Extension(Extension *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  bool bVar6;
  
  pvVar5 = *(void **)(this + 0x170);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x194) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 400) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x194) = 0;
        *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x178) + lVar3) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar3 * 2);
            *(int *)(*(long *)(this + 0x178) + lVar3) = 0;
            List<Pair<String,Variant>,DefaultAllocator>::~List
                      ((List<Pair<String,Variant>,DefaultAllocator> *)((long)pvVar5 + 0x18));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x170);
            *(undefined8 *)((long)pvVar5 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while ((ulong)uVar1 << 2 != lVar3);
        *(undefined4 *)(this + 0x194) = 0;
        *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010da45;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x178),false);
  }
LAB_0010da45:
  pvVar5 = *(void **)(this + 0x140);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x164) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x160) * 4) != 0) {
        memset(*(void **)(this + 0x158),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x160) * 4) << 2);
      }
      *(undefined4 *)(this + 0x164) = 0;
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x150),false);
    Memory::free_static(*(void **)(this + 0x148),false);
    Memory::free_static(*(void **)(this + 0x158),false);
  }
  pvVar5 = *(void **)(this + 0x118);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x13c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x138) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x13c) = 0;
        *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x120) + lVar3) != 0) {
            bVar6 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x120) + lVar3) = 0;
            pvVar5 = *(void **)((long)pvVar5 + lVar3 * 2);
            if ((bVar6) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x118);
            *(undefined8 *)((long)pvVar5 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x13c) = 0;
        *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010db7a;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x120),false);
  }
LAB_0010db7a:
  if (StringName::configured != '\0') {
    if (*(long *)(this + 0x20) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dbac;
    }
    if (*(long *)(this + 0x18) != 0) {
      StringName::unref();
    }
  }
LAB_0010dbac:
  plVar4 = *(long **)(this + 0x10);
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar5 = (void *)*plVar4;
    if (pvVar5 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (plVar4 == *(long **)((long)pvVar5 + 0x18)) {
      lVar3 = *(long *)((long)pvVar5 + 8);
      lVar2 = *(long *)((long)pvVar5 + 0x10);
      *plVar4 = lVar3;
      if (pvVar5 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = *(long *)((long)pvVar5 + 8);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      Memory::free_static(pvVar5,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)(this + 0x10);
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::insert(ObjectID
   const&) */

undefined1  [16]
HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(ObjectID *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
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
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_0010ddcf;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_0010ddcf:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_0010e281;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC41 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_0010e281;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_0010e281:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
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



/* WARNING: Removing unreachable block (ram,0x0010e588) */
/* WARNING: Removing unreachable block (ram,0x0010e71d) */
/* WARNING: Removing unreachable block (ram,0x0010e729) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindTRC<GDExtension::InitializationLevel>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<GDExtension::InitializationLevel>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
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
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
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
      _err_print_error(&_LC57,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e920;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_0010e920:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
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
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
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
      _err_print_error(&_LC57,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ec00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_0010ec00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
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
      _err_print_error(&_LC57,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
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
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ef30;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar4)();
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
LAB_0010ef30:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f3bb;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010f3bb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f5bb;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010f5bb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionMethodBind::ptrcall(Object*, void const**, void*) const */

void __thiscall
GDExtensionMethodBind::ptrcall
          (GDExtensionMethodBind *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xd1] == (GDExtensionMethodBind)0x0) {
    StringName::StringName((StringName *)&local_40,(StringName *)(this + 200));
    local_38 = 
    "Cannot call invalid GDExtension method bind \'%s\'. It\'s probably cached - you may need to restart Godot."
    ;
    local_48 = 0;
    local_30 = 0x67;
    String::parse_latin1((StrRange *)&local_48);
    vformat<StringName>((CowData<char32_t> *)&local_38,&local_48,(StringName *)&local_40);
    _err_print_error("ptrcall","core/extension/gdextension.cpp",0x94,"Condition \"!valid\" is true."
                     ,(CowData<char32_t> *)&local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
joined_r0x0010f857:
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
  }
  else {
    if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
       (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
      StringName::StringName((StringName *)&local_40,(StringName *)(this + 200));
      local_48 = 0;
      String::parse_latin1
                ((String *)&local_48,
                 "Cannot call GDExtension method bind \'%s\' on placeholder instance.");
      vformat<StringName>((CowData<char32_t> *)&local_38,&local_48,(StringName *)&local_40);
      _err_print_error("ptrcall","core/extension/gdextension.cpp",0x95,
                       "Condition \"p_object && p_object->is_extension_placeholder()\" is true.",
                       (CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      goto joined_r0x0010f857;
    }
    if (this[0x78] == (GDExtensionMethodBind)0x0) {
      uVar1 = 0;
      if (this[0x38] == (GDExtensionMethodBind)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0x10);
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f7aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(this + 0x68))
                  (*(undefined8 *)(this + 0x70),uVar1,param_2,param_3,*(code **)(this + 0x68));
        return;
      }
      goto LAB_0010f976;
    }
    _err_print_error("ptrcall","core/extension/gdextension.cpp",0x97,"Condition \"vararg\" is true."
                     ,
                     "Vararg methods don\'t have ptrcall support. This is most likely an engine bug."
                     ,0,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f976:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDExtensionMethodBind::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * GDExtensionMethodBind::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  undefined4 in_register_00000014;
  long lVar1;
  undefined8 uVar2;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)((long)param_2 + 0xd1) == '\0') {
    StringName::StringName((StringName *)&local_60,(StringName *)(param_2 + 0x19));
    local_58 = 0x10f5c0;
    uStack_54 = 0;
    local_68 = 0;
    uStack_50 = 0x67;
    uStack_4c = 0;
    String::parse_latin1((StrRange *)&local_68);
    vformat<StringName>((CowData<char32_t> *)&local_58,&local_68,(StringName *)&local_60);
    _err_print_error(&_LC57,"core/extension/gdextension.cpp",0x66,
                     "Condition \"!valid\" is true. Returning: Variant()",
                     (CowData<char32_t> *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    if (((lVar1 == 0) || (*(long *)(lVar1 + 8) == 0)) ||
       (*(char *)(*(long *)(lVar1 + 8) + 0x2e) == '\0')) {
      local_48 = 0;
      uVar2 = 0;
      local_40 = (undefined1  [16])0x0;
      if (*(char *)(param_2 + 7) == '\0') {
        uVar2 = *(undefined8 *)(lVar1 + 0x10);
      }
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      (*(code *)param_2[0xb])(param_2[0xe],uVar2,param_4,(long)in_R8D,&local_48,&local_58);
      *in_R9 = local_58;
      *(ulong *)(in_R9 + 1) = CONCAT44(uStack_50,uStack_54);
      *(undefined8 *)(param_1 + 8) = local_40._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_40._8_8_;
      *(undefined4 *)param_1 = (undefined4)local_48;
      goto LAB_0010fac2;
    }
    StringName::StringName((StringName *)&local_60,(StringName *)(param_2 + 0x19));
    local_68 = 0;
    String::parse_latin1
              ((String *)&local_68,
               "Cannot call GDExtension method bind \'%s\' on placeholder instance.");
    vformat<StringName>((CowData<char32_t> *)&local_58,&local_68,(StringName *)&local_60);
    _err_print_error(&_LC57,"core/extension/gdextension.cpp",0x67,
                     "Condition \"p_object && p_object->is_extension_placeholder()\" is true. Returning: Variant()"
                     ,(CowData<char32_t> *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010fac2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010fda0) */
/* WARNING: Removing unreachable block (ram,0x0010ff35) */
/* WARNING: Removing unreachable block (ram,0x0010ff41) */
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



/* WARNING: Removing unreachable block (ram,0x001100d0) */
/* WARNING: Removing unreachable block (ram,0x00110265) */
/* WARNING: Removing unreachable block (ram,0x00110271) */
/* String vformat<StringName, StringName, StringName>(String const&, StringName const, StringName
   const, StringName const) */

undefined8 *
vformat<StringName,StringName,StringName>
          (undefined8 *param_1,bool *param_2,StringName *param_3,StringName *param_4,
          StringName *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
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
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001103f0) */
/* WARNING: Removing unreachable block (ram,0x00110585) */
/* WARNING: Removing unreachable block (ram,0x00110591) */
/* String vformat<String, StringName>(String const&, String const, StringName const) */

undefined8 *
vformat<String,StringName>(undefined8 *param_1,bool *param_2,String *param_3,StringName *param_4)

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



/* WARNING: Removing unreachable block (ram,0x00110710) */
/* WARNING: Removing unreachable block (ram,0x001108a5) */
/* WARNING: Removing unreachable block (ram,0x001108b1) */
/* String vformat<StringName, StringName>(String const&, StringName const, StringName const) */

undefined8 *
vformat<StringName,StringName>
          (undefined8 *param_1,bool *param_2,StringName *param_3,StringName *param_4)

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



/* WARNING: Removing unreachable block (ram,0x00110a08) */
/* WARNING: Removing unreachable block (ram,0x00110b9d) */
/* WARNING: Removing unreachable block (ram,0x00110ba9) */
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



/* WARNING: Removing unreachable block (ram,0x00110d40) */
/* WARNING: Removing unreachable block (ram,0x00110ed5) */
/* WARNING: Removing unreachable block (ram,0x00110ee1) */
/* String vformat<GDExtension::InitializationLevel, int>(String const&,
   GDExtension::InitializationLevel const, int const) */

undefined8 *
vformat<GDExtension::InitializationLevel,int>
          (undefined8 *param_1,bool *param_2,int param_3,int param_4)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
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
  undefined1 (*pauVar37) [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  void *pvVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_001115cc:
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar44 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar52)) && (pvVar44 < (void *)((long)pvVar3 + uVar41))
         ) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar41 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
      }
      else {
        memset(pvVar3,0,uVar41);
        memset(pvVar44,0,uVar52);
      }
LAB_001114b5:
      iVar45 = *(int *)(this + 0x2c);
      if (iVar45 != 0) {
LAB_001114c5:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar41 = CONCAT44(0,uVar39);
        lVar53 = *(long *)(this + 0x10);
        uVar40 = 1;
        if (uVar51 != 0) {
          uVar40 = uVar51;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar40 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar41;
        lVar46 = SUB168(auVar17 * auVar33,8);
        uVar51 = *(uint *)(lVar53 + lVar46 * 4);
        uVar50 = SUB164(auVar17 * auVar33,8);
        if (uVar51 != 0) {
          do {
            if (uVar40 == uVar51) {
              cVar38 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar38 != '\0') {
                pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                if (*(long *)(pauVar43[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(pauVar43[1] + 8),(CowData *)&local_70);
                  pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                }
                goto LAB_00111363;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar50 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar41;
            lVar46 = SUB168(auVar18 * auVar34,8);
            uVar51 = *(uint *)(lVar53 + lVar46 * 4);
            uVar50 = SUB164(auVar18 * auVar34,8);
          } while ((uVar51 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar51 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar41, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar39 + uVar50) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar41, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar48 = (ulong)uVar55;
      goto LAB_00110f87;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00110f87;
    if (*(int *)(this + 0x2c) != 0) goto LAB_001114c5;
LAB_00110fad:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00111363;
    }
    uVar41 = (ulong)(uVar55 + 1);
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar55 + 1 < 2) {
      uVar41 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar44 = *(void **)(this + 8);
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    pvVar3 = *(void **)(this + 0x10);
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar48);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    uVar41 = 0;
    if (uVar39 != 0) {
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar55 != 0) {
          uVar50 = 0;
          lVar4 = *(long *)(this + 0x10);
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar40);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar53;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar52;
          lVar46 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar46 * 4);
          iVar45 = SUB164(auVar5 * auVar21,8);
          uVar51 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar44 + uVar41 * 8);
          while (uVar51 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar51 * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar52;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar6 * auVar22,8)) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar52;
            uVar54 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar42;
            if (uVar54 < uVar50) {
              *puVar1 = uVar55;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar42;
              uVar55 = uVar51;
              uVar50 = uVar54;
            }
            uVar50 = uVar50 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            lVar46 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar46 * 4);
            iVar45 = SUB164(auVar8 * auVar24,8);
            uVar42 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar41 = CONCAT44(0,uVar55);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
        uVar39 = uVar40;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar46 = SUB168(auVar13 * auVar29,8);
      lVar53 = *(long *)(this + 0x10);
      uVar51 = SUB164(auVar13 * auVar29,8);
      uVar40 = *(uint *)(lVar53 + lVar46 * 4);
      if (uVar40 == 0) {
        lVar47 = *(long *)(this + 8);
      }
      else {
        uVar50 = 0;
        lVar47 = *(long *)(this + 8);
        do {
          if (uVar39 == uVar40) {
            cVar38 = String::operator==((String *)(*(long *)(lVar47 + lVar46 * 8) + 0x10),param_1);
            if (cVar38 != '\0') {
              pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0011136f;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar47 = *(long *)(this + 8);
          }
          uVar50 = uVar50 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar51 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar41;
          lVar46 = SUB168(auVar14 * auVar30,8);
          uVar40 = *(uint *)(lVar53 + lVar46 * 4);
          uVar51 = SUB164(auVar14 * auVar30,8);
        } while ((uVar40 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar40 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar41, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar51 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar41, uVar50 <= SUB164(auVar16 * auVar32,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar47 == 0) goto LAB_001115cc;
      goto LAB_001114b5;
    }
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    iVar45 = 0;
LAB_00110f87:
    if ((float)uVar48 * __LC41 < (float)(iVar45 + 1)) goto LAB_00110fad;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_50[0] = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *pauVar43 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar4 = local_58;
    uVar42 = local_68._0_8_;
    uVar49 = local_68._8_8_;
    local_50[0] = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *(undefined8 *)*pauVar43 = uVar42;
    *(undefined8 *)(*pauVar43 + 8) = uVar49;
    if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar43 + 1),(CowData *)&local_58);
    }
  }
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar39 != 0) {
    uVar55 = uVar39;
  }
  uVar51 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar53;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar41;
  lVar47 = SUB168(auVar9 * auVar25,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar47 * 4);
  iVar45 = SUB164(auVar9 * auVar25,8);
  uVar40 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar40 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar40 * lVar53;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar53;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    uVar50 = SUB164(auVar11 * auVar27,8);
    pauVar56 = pauVar37;
    if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar50;
      uVar55 = uVar40;
    }
    uVar51 = uVar51 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar53;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar41;
    lVar47 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar47 * 4);
    iVar45 = SUB164(auVar12 * auVar28,8);
    pauVar37 = pauVar56;
    uVar40 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar37;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00111363:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011136f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar43[1] + 8;
}



/* MethodBindTRC<GDExtension::InitializationLevel>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<GDExtension::InitializationLevel>::validated_call
          (MethodBindTRC<GDExtension::InitializationLevel> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001117d4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_001117d4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GDExtension::InitializationLevel>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<GDExtension::InitializationLevel>::ptrcall
          (MethodBindTRC<GDExtension::InitializationLevel> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001119b3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_001119b3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant VVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111b92;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar2;
LAB_00111b92:
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
  long lVar1;
  undefined1 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111d71;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar2;
LAB_00111d71:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GDExtension::InitializationLevel>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<GDExtension::InitializationLevel>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001120f2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001120f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GDExtension::InitializationLevel>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<GDExtension::InitializationLevel>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001122f4;
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
                    /* WARNING: Could not recover jumptable at 0x0011215b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001122f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::validated_call
          (MethodBindTR<Error,String_const&,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112359;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_00112359:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::ptrcall
          (MethodBindTR<Error,String_const&,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011253d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  *(ulong *)param_3 = (ulong)uVar2;
LAB_0011253d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC57,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00112887;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_001128c8;
      pVVar11 = *(Variant **)param_4;
LAB_001128dd:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_001128c8:
        uVar7 = 4;
        goto LAB_001128b5;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_001129b0;
        pVVar11 = pVVar14 + lVar9 * 0x18;
      }
      else {
        pVVar11 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001128dd;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001129b0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar14,4);
    uVar4 = _LC101;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_70);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC102;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar6 = (*(code *)pVVar13)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68,
                               (Variant *)&local_70);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    uVar7 = 3;
LAB_001128b5:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_00112887:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::_initialize_classv() */

void ResourceFormatLoader::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_00120010 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceFormatLoader";
    local_70 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    if ((code *)PTR__bind_methods_00120008 != RefCounted::_bind_methods) {
      ResourceFormatLoader::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBind* create_method_bind<GDExtension, Error, String const&, String const&>(Error
   (GDExtension::*)(String const&, String const&)) */

MethodBind *
create_method_bind<GDExtension,Error,String_const&,String_const&>
          (_func_Error_String_ptr_String_ptr *param_1)

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
  *(_func_Error_String_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b0a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GDExtension";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<GDExtension>(void (GDExtension::*)()) */

MethodBind * create_method_bind<GDExtension>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0011b100;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GDExtension";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<GDExtension, GDExtension::InitializationLevel>(void
   (GDExtension::*)(GDExtension::InitializationLevel)) */

MethodBind *
create_method_bind<GDExtension,GDExtension::InitializationLevel>
          (_func_void_InitializationLevel *param_1)

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
  *(_func_void_InitializationLevel **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b160;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDExtension";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<GDExtension, bool>(bool (GDExtension::*)() const) */

MethodBind * create_method_bind<GDExtension,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b1c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GDExtension";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<GDExtension,
   GDExtension::InitializationLevel>(GDExtension::InitializationLevel (GDExtension::*)() const) */

MethodBind *
create_method_bind<GDExtension,GDExtension::InitializationLevel>(_func_InitializationLevel *param_1)

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
  *(_func_InitializationLevel **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b220;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GDExtension";
  local_30 = 0xb;
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



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* CowData<long>::_unref() */

void __thiscall CowData<long>::_unref(CowData<long> *this)

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



/* CowData<float>::_unref() */

void __thiscall CowData<float>::_unref(CowData<float> *this)

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



/* CowData<double>::_unref() */

void __thiscall CowData<double>::_unref(CowData<double> *this)

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



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa80;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  return;
}



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_0011aa80;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  operator_delete(this,0x20);
  return;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x1136ca);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC48;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0011378b;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC48;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
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
LAB_0011378b:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GDExtension::InitializationLevel, void>::get_class_info() */

GetTypeInfo<GDExtension::InitializationLevel,void> * __thiscall
GetTypeInfo<GDExtension::InitializationLevel,void>::get_class_info
          (GetTypeInfo<GDExtension::InitializationLevel,void> *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
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
  local_48 = "GDExtension::InitializationLevel";
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_70);
  String::split(local_58,SUB81((StrRange *)&local_70,0),0x1136ca);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar3 = -2;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)&local_68,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_001139b6;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
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
LAB_001139b6:
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
  lVar4 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GDExtension::InitializationLevel>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<GDExtension::InitializationLevel>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<GDExtension::InitializationLevel,void>::get_class_info
              ((GetTypeInfo<GDExtension::InitializationLevel,void> *)local_48);
    *puVar3 = local_48[0];
    if (*(long *)(puVar3 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 2));
      lVar2 = local_40;
      local_40 = 0;
      *(long *)(puVar3 + 2) = lVar2;
    }
    if (*(long *)(puVar3 + 4) != local_38) {
      StringName::unref();
      lVar2 = local_38;
      local_38 = 0;
      *(long *)(puVar3 + 4) = lVar2;
    }
    puVar3[6] = local_30;
    if (*(long *)(puVar3 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
      lVar2 = local_28;
      local_28 = 0;
      *(long *)(puVar3 + 8) = lVar2;
    }
    puVar3[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GDExtension::InitializationLevel>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<GDExtension::InitializationLevel>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
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
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_48 = "GDExtension::InitializationLevel";
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_68);
  String::split(local_58,SUB81((StrRange *)&local_68,0),0x1136ca);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar3 = -2;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar3 = lVar5 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)&local_70,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00113dd6;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false,true)
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
  String::join((Vector *)&local_70);
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
LAB_00113dd6:
  CowData<String>::_unref((CowData<String> *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_70,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
    StringName::unref();
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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



/* CowData<Vector4>::_unref() */

void __thiscall CowData<Vector4>::_unref(CowData<Vector4> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GDExtensionMethodBind::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
GDExtensionMethodBind::validated_call
          (GDExtensionMethodBind *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  Variant *pVVar7;
  undefined8 *puVar8;
  long lVar9;
  BucketLarge *this_00;
  BucketMedium *pBVar10;
  BucketSmall *pBVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  long local_50 [2];
  long local_40;
  
  puVar14 = auStack_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xd1] == (GDExtensionMethodBind)0x0) {
    StringName::StringName((StringName *)&local_60,(StringName *)(this + 200));
    local_58 = 
    "Cannot call invalid GDExtension method bind \'%s\'. It\'s probably cached - you may need to restart Godot."
    ;
    local_68 = 0;
    local_50[0] = 0x67;
    String::parse_latin1((StrRange *)&local_68);
    vformat<StringName>((CowData<char32_t> *)&local_58,(StrRange *)&local_68,(StringName *)&local_60
                       );
    _err_print_error("validated_call","core/extension/gdextension.cpp",0x74,
                     "Condition \"!valid\" is true.",(CowData<char32_t> *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
joined_r0x00114354:
    puVar13 = auStack_78;
    if (StringName::configured != '\0') {
      puVar13 = auStack_78;
      if (local_60 != 0) {
        StringName::unref();
        puVar13 = auStack_78;
      }
    }
    goto LAB_0011414e;
  }
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_60,(StringName *)(this + 200));
    local_68 = 0;
    String::parse_latin1
              ((String *)&local_68,
               "Cannot call GDExtension method bind \'%s\' on placeholder instance.");
    vformat<StringName>((CowData<char32_t> *)&local_58,(String *)&local_68,(StringName *)&local_60);
    _err_print_error("validated_call","core/extension/gdextension.cpp",0x75,
                     "Condition \"p_object && p_object->is_extension_placeholder()\" is true.",
                     (CowData<char32_t> *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    goto joined_r0x00114354;
  }
  if (this[0x78] != (GDExtensionMethodBind)0x0) {
    _err_print_error("validated_call","core/extension/gdextension.cpp",0x77,
                     "Condition \"vararg\" is true.",
                     "Vararg methods don\'t have validated call support. This is most likely an engine bug."
                     ,0,0);
    puVar13 = auStack_78;
    goto LAB_0011414e;
  }
  uVar15 = 0;
  if (this[0x38] == (GDExtensionMethodBind)0x0) {
    pcVar4 = *(code **)(this + 0x60);
    uVar15 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    pcVar4 = *(code **)(this + 0x60);
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(*(undefined8 *)(this + 0x70),uVar15,param_2,param_3);
    puVar13 = auStack_78;
    goto LAB_0011414e;
  }
  uVar2 = *(uint *)(this + 0x7c);
  uVar17 = (ulong)uVar2 * 8 + 0x17;
  for (; puVar14 != auStack_78 + -(uVar17 & 0xfffffffffffff000); puVar14 = puVar14 + -0x1000) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  uVar17 = (ulong)((uint)uVar17 & 0xff0);
  lVar5 = -uVar17;
  if (uVar17 != 0) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  lVar16 = 0;
  uVar17 = (ulong)(puVar14 + lVar5 + 0xf) & 0xfffffffffffffff0;
  if (uVar2 != 0) {
    do {
      pVVar7 = param_2[lVar16];
      switch(*(undefined4 *)pVVar7) {
      case 0:
        goto switchD_00114207_caseD_0;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
        pVVar7 = pVVar7 + 8;
        break;
      case 0xb:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        pVVar7 = *(Variant **)(pVVar7 + 8);
        break;
      case 0x18:
        pVVar7 = pVVar7 + 0x10;
        break;
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
        pVVar7 = (Variant *)(*(long *)(pVVar7 + 8) + 0x10);
        break;
      case 0x27:
        uVar12 = 0x20d;
        goto LAB_0011449e;
      default:
        uVar12 = 0x20f;
LAB_0011449e:
        local_70 = uVar15;
        *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1144b1;
        _err_print_error("get_opaque_pointer","./core/variant/variant_internal.h",uVar12,
                         "Method/function failed. Returning: nullptr",0,0);
        uVar15 = local_70;
switchD_00114207_caseD_0:
        pVVar7 = (Variant *)0x0;
      }
      *(Variant **)(uVar17 + lVar16 * 8) = pVVar7;
      lVar16 = lVar16 + 1;
    } while ((uint)lVar16 < *(uint *)(this + 0x7c));
  }
  if (param_3 == (Variant *)0x0) {
    uVar12 = *(undefined8 *)(this + 0x70);
    pcVar4 = *(code **)(this + 0x68);
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x11446f;
    (*pcVar4)(uVar12,uVar15,uVar17,0);
    puVar13 = puVar14 + lVar5;
    goto LAB_0011414e;
  }
  iVar3 = *(int *)(this + 0x80);
  if (Variant::needs_deinit[*(int *)param_3] != '\0') {
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114ea0;
    Variant::_clear_internal();
    uVar15 = local_70;
  }
  *(int *)param_3 = iVar3;
  uVar6 = _UNK_0011b4d8;
  uVar12 = __LC112;
  switch(iVar3) {
  case 4:
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined4 *)param_3 = 4;
    goto LAB_00114c00;
  default:
    pVVar7 = param_3;
    if (iVar3 != 0) {
      switch(iVar3) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
        goto LAB_00114c00;
      case 0xb:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        goto switchD_00114e54_caseD_b;
      case 0x18:
        goto switchD_00114e54_caseD_18;
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
        goto switchD_00114e54_caseD_1d;
      case 0x27:
        local_70 = uVar15;
        *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114e89;
        _err_print_error("get_opaque_pointer","./core/variant/variant_internal.h",0x1b7,
                         "Method/function failed. Returning: nullptr",0,0);
        pVVar7 = (Variant *)0x0;
        uVar15 = local_70;
        break;
      default:
        local_70 = uVar15;
        *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114ed2;
        _err_print_error("get_opaque_pointer","./core/variant/variant_internal.h",0x1b9,
                         "Method/function failed. Returning: nullptr",0,0);
        pVVar7 = (Variant *)0x0;
        uVar15 = local_70;
      }
    }
    goto LAB_0011428c;
  case 0xb:
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114dd2;
    pBVar11 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                        ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                         &Variant::Pools::_bucket_small);
    *(BucketSmall **)(param_3 + 8) = pBVar11;
    *(undefined8 *)pBVar11 = 0x3f800000;
    *(undefined8 *)(pBVar11 + 8) = 0x3f80000000000000;
    *(undefined8 *)(pBVar11 + 0x10) = 0;
    *(undefined4 *)param_3 = 0xb;
    uVar15 = local_70;
    goto switchD_00114e54_caseD_b;
  case 0x10:
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114d91;
    pBVar11 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                        ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                         &Variant::Pools::_bucket_small);
    *(BucketSmall **)(param_3 + 8) = pBVar11;
    *(undefined8 *)pBVar11 = 0;
    *(undefined4 *)(pBVar11 + 8) = 0;
    *(undefined8 *)(pBVar11 + 0xc) = 0;
    *(undefined4 *)(pBVar11 + 0x14) = 0;
    *(undefined4 *)param_3 = 0x10;
    uVar15 = local_70;
    goto switchD_00114e54_caseD_b;
  case 0x11:
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114d57;
    pBVar10 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                        ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                         &Variant::Pools::_bucket_medium);
    uVar2 = _LC110;
    *(BucketMedium **)(param_3 + 8) = pBVar10;
    *(undefined4 *)(pBVar10 + 0x20) = 0x3f800000;
    *(undefined1 (*) [16])pBVar10 = ZEXT416(uVar2);
    *(undefined1 (*) [16])(pBVar10 + 0x10) = ZEXT416(uVar2);
    *(undefined4 *)param_3 = 0x11;
    uVar15 = local_70;
    goto switchD_00114e54_caseD_b;
  case 0x12:
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114d11;
    pBVar10 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                        ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                         &Variant::Pools::_bucket_medium);
    uVar2 = _LC110;
    *(BucketMedium **)(param_3 + 8) = pBVar10;
    *(undefined4 *)(pBVar10 + 0x20) = 0x3f800000;
    *(undefined8 *)(pBVar10 + 0x24) = 0;
    *(undefined4 *)(pBVar10 + 0x2c) = 0;
    *(undefined1 (*) [16])pBVar10 = ZEXT416(uVar2);
    *(undefined1 (*) [16])(pBVar10 + 0x10) = ZEXT416(uVar2);
    *(undefined4 *)param_3 = 0x12;
    uVar15 = local_70;
    goto switchD_00114e54_caseD_b;
  case 0x13:
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114cdb;
    this_00 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                        ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                         &Variant::Pools::_bucket_large);
    *(BucketLarge **)(param_3 + 8) = this_00;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114ce7;
    Projection::Projection((Projection *)this_00);
    *(undefined4 *)param_3 = 0x13;
    uVar15 = local_70;
switchD_00114e54_caseD_b:
    pVVar7 = *(Variant **)(param_3 + 8);
    goto LAB_0011428c;
  case 0x14:
    *(undefined4 *)param_3 = 0x14;
    *(undefined8 *)(param_3 + 8) = uVar12;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    goto LAB_00114c00;
  case 0x15:
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined4 *)param_3 = 0x15;
    goto LAB_00114c00;
  case 0x16:
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined4 *)param_3 = 0x16;
    goto LAB_00114c00;
  case 0x18:
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0x18;
switchD_00114e54_caseD_18:
    pVVar7 = param_3 + 0x10;
    goto LAB_0011428c;
  case 0x19:
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0x19;
    goto LAB_00114c00;
  case 0x1a:
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)param_3 = 0x1a;
    goto LAB_00114c00;
  case 0x1b:
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114c18;
    Dictionary::Dictionary((Dictionary *)(param_3 + 8));
    *(undefined4 *)param_3 = 0x1b;
    uVar15 = local_70;
    goto LAB_00114c00;
  case 0x1c:
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114bf0;
    Array::Array((Array *)(param_3 + 8));
    *(undefined4 *)param_3 = 0x1c;
    uVar15 = local_70;
LAB_00114c00:
    pVVar7 = param_3 + 8;
    goto LAB_0011428c;
  case 0x1d:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114b4a;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011a9e0;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114b8c;
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_00114bb6;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_00114bb6:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114bd0;
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_50);
    *(undefined4 *)param_3 = 0x1d;
    uVar15 = local_70;
    break;
  case 0x1e:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114a97;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011aa00;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114ad9;
      CowData<int>::_unref((CowData<int> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_00114b03;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_00114b03:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114b1d;
    CowData<int>::_unref((CowData<int> *)local_50);
    *(undefined4 *)param_3 = 0x1e;
    uVar15 = local_70;
    break;
  case 0x1f:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1149e4;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011aa20;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114a26;
      CowData<long>::_unref((CowData<long> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_00114a50;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_00114a50:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114a6a;
    CowData<long>::_unref((CowData<long> *)local_50);
    *(undefined4 *)param_3 = 0x1f;
    uVar15 = local_70;
    break;
  case 0x20:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114931;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011aa40;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114973;
      CowData<float>::_unref((CowData<float> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_0011499d;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_0011499d:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1149b7;
    CowData<float>::_unref((CowData<float> *)local_50);
    *(undefined4 *)param_3 = 0x20;
    uVar15 = local_70;
    break;
  case 0x21:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x11487e;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011aa60;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1148c0;
      CowData<double>::_unref((CowData<double> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_001148ea;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_001148ea:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114904;
    CowData<double>::_unref((CowData<double> *)local_50);
    *(undefined4 *)param_3 = 0x21;
    uVar15 = local_70;
    break;
  case 0x22:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1147cb;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011aa80;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x11480d;
      CowData<String>::_unref((CowData<String> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_00114837;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_00114837:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114851;
    CowData<String>::_unref((CowData<String> *)local_50);
    *(undefined4 *)param_3 = 0x22;
    uVar15 = local_70;
    break;
  case 0x23:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114718;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011aaa0;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x11475a;
      CowData<Vector2>::_unref((CowData<Vector2> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_00114784;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_00114784:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x11479e;
    CowData<Vector2>::_unref((CowData<Vector2> *)local_50);
    *(undefined4 *)param_3 = 0x23;
    uVar15 = local_70;
    break;
  case 0x24:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114665;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011aac0;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1146a7;
      CowData<Vector3>::_unref((CowData<Vector3> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_001146d1;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_001146d1:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1146eb;
    CowData<Vector3>::_unref((CowData<Vector3> *)local_50);
    *(undefined4 *)param_3 = 0x24;
    uVar15 = local_70;
    break;
  case 0x25:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1145b2;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011aae0;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1145f4;
      CowData<Color>::_unref((CowData<Color> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_0011461e;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_0011461e:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114638;
    CowData<Color>::_unref((CowData<Color> *)local_50);
    *(undefined4 *)param_3 = 0x25;
    uVar15 = local_70;
    break;
  case 0x26:
    local_50[0] = 0;
    local_70 = uVar15;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1144f0;
    puVar8 = (undefined8 *)operator_new(0x20,"");
    lVar16 = local_50[0];
    *puVar8 = &PTR__PackedArrayRefBase_0011a9c0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__PackedArrayRef_0011ab00;
    puVar8[3] = 0;
    if (local_50[0] != 0) {
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114532;
      CowData<Vector4>::_unref((CowData<Vector4> *)(puVar8 + 3));
      plVar1 = (long *)(lVar16 + -0x10);
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_0011455c;
        LOCK();
        lVar9 = *plVar1;
        bVar18 = lVar16 == lVar9;
        if (bVar18) {
          *plVar1 = lVar16 + 1;
          lVar9 = lVar16;
        }
        UNLOCK();
      } while (!bVar18);
      if (lVar9 != -1) {
        puVar8[3] = local_50[0];
      }
    }
LAB_0011455c:
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined8 **)(param_3 + 8) = puVar8;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114576;
    CowData<Vector4>::_unref((CowData<Vector4> *)local_50);
    *(undefined4 *)param_3 = 0x26;
    uVar15 = local_70;
  }
switchD_00114e54_caseD_1d:
  pVVar7 = (Variant *)(*(long *)(param_3 + 8) + 0x10);
LAB_0011428c:
  uVar12 = *(undefined8 *)(this + 0x70);
  pcVar4 = *(code **)(this + 0x68);
  *(undefined8 *)(puVar14 + lVar5 + -8) = 0x114299;
  (*pcVar4)(uVar12,uVar15,uVar17,pVVar7);
  puVar13 = puVar14 + lVar5;
  if ((*(int *)param_3 == 0x18) && (puVar13 = puVar14 + lVar5, *(long *)(param_3 + 0x10) != 0)) {
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x60);
    puVar13 = puVar14 + lVar5;
  }
LAB_0011414e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar13 + -8) = 0x114ee2;
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



/* GDExtension::_initialize_classv() */

void GDExtension::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00120010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
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
      if ((code *)PTR__bind_methods_00120018 != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GDExtension";
    local_70 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    _bind_methods();
    _bind_compatibility_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_00115880:
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
  if (lVar8 == 0) goto LAB_00115880;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0011575a:
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
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0011575a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_00115727;
  }
  if (lVar8 == lVar5) {
LAB_001157fb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00115727:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001157db;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_001157fb;
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
LAB_001157db:
  puVar7[-1] = param_1;
  return 0;
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
/* GDExtensionMethodBind::update(GDExtensionClassMethodInfo const*) */

void __thiscall
GDExtensionMethodBind::update(GDExtensionMethodBind *this,GDExtensionClassMethodInfo *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  Variant *pVVar5;
  code *pcVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long in_FS_OFFSET;
  undefined8 *local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::operator=((StringName *)(this + 200),*(StringName **)param_1);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x18);
  MethodBind::set_name((StringName *)this);
  if (param_1[0x24] != (GDExtensionClassMethodInfo)0x0) {
    puVar12 = *(undefined4 **)(param_1 + 0x28);
    uVar1 = *puVar12;
    lVar10 = **(long **)(puVar12 + 2);
    if (lVar10 == 0) {
      local_70 = (undefined8 *)0x0;
    }
    else {
      local_70 = (undefined8 *)0x0;
      if (*(char **)(lVar10 + 8) == (char *)0x0) {
        if (*(long *)(lVar10 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar10 + 0x10));
        }
      }
      else {
        strlen(*(char **)(lVar10 + 8));
        String::parse_latin1((StrRange *)&local_70);
      }
    }
    StringName::StringName((StringName *)&local_68,*(StringName **)(puVar12 + 4));
    local_60 = puVar12[6];
    local_58 = 0;
    if (*(long *)*(CowData **)(puVar12 + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,*(CowData **)(puVar12 + 8));
    }
    local_50 = puVar12[10];
    *(undefined4 *)(this + 0x80) = uVar1;
    if ((undefined8 *)*(long *)(this + 0x88) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x88));
      puVar9 = local_70;
      local_70 = (undefined8 *)0x0;
      *(undefined8 **)(this + 0x88) = puVar9;
    }
    if (*(long *)(this + 0x90) != local_68) {
      StringName::unref();
      lVar10 = local_68;
      local_68 = 0;
      *(long *)(this + 0x90) = lVar10;
    }
    lVar10 = local_58;
    *(undefined4 *)(this + 0x98) = local_60;
    if (*(long *)(this + 0xa0) == local_58) {
      *(undefined4 *)(this + 0xa8) = local_50;
      if (local_58 != 0) {
        LOCK();
        plVar13 = (long *)(local_58 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa0));
      *(long *)(this + 0xa0) = local_58;
      *(undefined4 *)(this + 0xa8) = local_50;
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    puVar9 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      LOCK();
      plVar13 = (long *)((long)local_70 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_70 = (undefined8 *)0x0;
        Memory::free_static((void *)((long)puVar9 + -0x10),false);
      }
    }
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0x30);
  }
  plVar13 = *(long **)(this + 0xb8);
  if (plVar13 != (long *)0x0) {
    do {
      pvVar4 = (void *)*plVar13;
      if (pvVar4 == (void *)0x0) goto LAB_00115aa7;
      if (*(long **)((long)pvVar4 + 0x40) == plVar13) {
        lVar10 = *(long *)((long)pvVar4 + 0x30);
        lVar14 = *(long *)((long)pvVar4 + 0x38);
        *plVar13 = lVar10;
        if (pvVar4 == (void *)plVar13[1]) {
          plVar13[1] = lVar14;
        }
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x30) = lVar10;
          lVar10 = *(long *)((long)pvVar4 + 0x30);
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x38) = lVar14;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 8));
        Memory::free_static(pvVar4,false);
        *(int *)(plVar13 + 2) = (int)plVar13[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar13 = *(long **)(this + 0xb8);
    } while ((int)plVar13[2] != 0);
    Memory::free_static(plVar13,false);
    *(undefined8 *)(this + 0xb8) = 0;
  }
LAB_00115aa7:
  plVar13 = *(long **)(this + 0xc0);
  if (plVar13 != (long *)0x0) {
    do {
      pvVar4 = (void *)*plVar13;
      if (pvVar4 == (void *)0x0) goto LAB_00115b1e;
      if (*(long **)((long)pvVar4 + 0x18) == plVar13) {
        lVar10 = *(long *)((long)pvVar4 + 8);
        lVar14 = *(long *)((long)pvVar4 + 0x10);
        *plVar13 = lVar10;
        if (pvVar4 == (void *)plVar13[1]) {
          plVar13[1] = lVar14;
        }
        if (lVar14 != 0) {
          *(long *)(lVar14 + 8) = lVar10;
          lVar10 = *(long *)((long)pvVar4 + 8);
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x10) = lVar14;
        }
        Memory::free_static(pvVar4,false);
        *(int *)(plVar13 + 2) = (int)plVar13[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar13 = *(long **)(this + 0xc0);
    } while ((int)plVar13[2] != 0);
    Memory::free_static(plVar13,false);
    *(undefined8 *)(this + 0xc0) = 0;
  }
LAB_00115b1e:
  lVar10 = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar7 = 0;
  }
  else {
    do {
      puVar12 = (undefined4 *)(lVar10 * 0x30 + *(long *)(param_1 + 0x38));
      uVar1 = *puVar12;
      lVar14 = **(long **)(puVar12 + 2);
      if (lVar14 == 0) {
        local_70 = (undefined8 *)0x0;
      }
      else {
        local_70 = (undefined8 *)0x0;
        if (*(char **)(lVar14 + 8) == (char *)0x0) {
          if (*(long *)(lVar14 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar14 + 0x10));
          }
        }
        else {
          strlen(*(char **)(lVar14 + 8));
          String::parse_latin1((StrRange *)&local_70);
        }
      }
      StringName::StringName((StringName *)&local_68,*(StringName **)(puVar12 + 4));
      local_60 = puVar12[6];
      local_58 = 0;
      if (*(long *)*(CowData **)(puVar12 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,*(CowData **)(puVar12 + 8));
      }
      local_50 = puVar12[10];
      if (*(long *)(this + 0xb8) == 0) {
        pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0xb8) = pauVar8;
        *(undefined4 *)pauVar8[1] = 0;
        *pauVar8 = (undefined1  [16])0x0;
      }
      puVar12 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
      *(undefined8 *)(puVar12 + 8) = 0;
      *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
      *puVar12 = 0;
      puVar12[6] = 0;
      puVar12[10] = 6;
      *(undefined8 *)(puVar12 + 0x10) = 0;
      *(undefined1 (*) [16])(puVar12 + 0xc) = (undefined1  [16])0x0;
      *puVar12 = uVar1;
      if (local_70 != (undefined8 *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar12 + 2),(CowData *)&local_70);
      }
      StringName::operator=((StringName *)(puVar12 + 4),(StringName *)&local_68);
      puVar12[6] = local_60;
      if (*(long *)(puVar12 + 8) != local_58) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar12 + 8),(CowData *)&local_58);
      }
      lVar11 = local_58;
      puVar12[10] = local_50;
      plVar13 = *(long **)(this + 0xb8);
      lVar14 = plVar13[1];
      *(undefined8 *)(puVar12 + 0xc) = 0;
      *(long **)(puVar12 + 0x10) = plVar13;
      *(long *)(puVar12 + 0xe) = lVar14;
      if (lVar14 != 0) {
        *(undefined4 **)(lVar14 + 0x30) = puVar12;
      }
      plVar13[1] = (long)puVar12;
      if (*plVar13 == 0) {
        *plVar13 = (long)puVar12;
      }
      *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
      if (local_58 != 0) {
        LOCK();
        plVar13 = (long *)(local_58 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      puVar9 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        LOCK();
        plVar13 = (long *)((long)local_70 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_70 = (undefined8 *)0x0;
          Memory::free_static((void *)((long)puVar9 + -0x10),false);
        }
      }
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar10 * 4);
      if (*(long *)(this + 0xc0) == 0) {
        pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0xc0) = pauVar8;
        *(undefined4 *)pauVar8[1] = 0;
        *pauVar8 = (undefined1  [16])0x0;
      }
      puVar12 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
      plVar13 = *(long **)(this + 0xc0);
      *(undefined8 *)(puVar12 + 2) = 0;
      lVar14 = plVar13[1];
      *puVar12 = uVar1;
      *(long **)(puVar12 + 6) = plVar13;
      *(long *)(puVar12 + 4) = lVar14;
      if (lVar14 != 0) {
        *(undefined4 **)(lVar14 + 8) = puVar12;
      }
      plVar13[1] = (long)puVar12;
      if (*plVar13 == 0) {
        *plVar13 = (long)puVar12;
      }
      uVar7 = *(uint *)(param_1 + 0x34);
      lVar10 = lVar10 + 1;
      *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
    } while ((uint)lVar10 < uVar7);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  *(uint *)(this + 0x7c) = uVar7;
  *(uint *)(this + 0xc) = uVar2;
  this[0x78] = (GDExtensionMethodBind)((byte)(uVar2 >> 4) & 1);
  bVar15 = SUB81(this,0);
  MethodBind::_set_returns(bVar15);
  MethodBind::_set_const(bVar15);
  MethodBind::_set_static(bVar15);
  MethodBind::_generate_argument_types((int)this);
  uVar17 = (ulong)*(uint *)(param_1 + 0x48);
  local_70 = (undefined8 *)0x0;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  if (uVar17 != 0) {
    uVar16 = uVar17 * 0x18 - 1;
    uVar16 = uVar16 | uVar16 >> 1;
    uVar16 = uVar16 | uVar16 >> 2;
    uVar16 = uVar16 | uVar16 >> 4;
    uVar16 = uVar16 | uVar16 >> 8;
    uVar16 = uVar16 | uVar16 >> 0x10;
    puVar9 = (undefined8 *)Memory::alloc_static((uVar16 | uVar16 >> 0x20) + 0x11,false);
    if (puVar9 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      local_70 = puVar9 + 2;
      *puVar9 = 1;
      puVar9[1] = 0;
      *(undefined4 *)(puVar9 + 2) = 0;
      *(undefined1 (*) [16])(puVar9 + 3) = (undefined1  [16])0x0;
      if (uVar17 != 1) {
        lVar10 = 0x18;
        do {
          puVar12 = (undefined4 *)((long)local_70 + lVar10);
          lVar10 = lVar10 + 0x18;
          *puVar12 = 0;
          *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
        } while (uVar17 * 0x18 != lVar10);
      }
      if (local_70 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      puVar9[1] = uVar17;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      lVar10 = 0;
      do {
        pVVar5 = *(Variant **)(*(long *)(param_1 + 0x50) + lVar10 * 8);
        if (local_70 == (undefined8 *)0x0) {
          lVar14 = 0;
LAB_00115fd6:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar14,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar14 = local_70[-1];
        if (lVar14 <= lVar10) goto LAB_00115fd6;
        if (1 < (ulong)local_70[-2]) {
          if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          lVar14 = local_70[-1];
          uVar17 = 0x10;
          if (lVar14 * 0x18 != 0) {
            uVar17 = lVar14 * 0x18 - 1;
            uVar17 = uVar17 | uVar17 >> 1;
            uVar17 = uVar17 | uVar17 >> 2;
            uVar17 = uVar17 | uVar17 >> 4;
            uVar17 = uVar17 | uVar17 >> 8;
            uVar17 = uVar17 | uVar17 >> 0x10;
            uVar17 = (uVar17 | uVar17 >> 0x20) + 0x11;
          }
          puVar9 = (undefined8 *)Memory::alloc_static(uVar17,false);
          if (puVar9 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            lVar18 = 0;
            *puVar9 = 1;
            puVar9[1] = lVar14;
            lVar11 = 0;
            if (lVar14 != 0) {
              do {
                lVar18 = lVar18 + 1;
                Variant::Variant((Variant *)((long)(puVar9 + 2) + lVar11),
                                 (Variant *)((long)local_70 + lVar11));
                lVar11 = lVar11 + 0x18;
              } while (lVar14 != lVar18);
            }
            CowData<Variant>::_unref((CowData<Variant> *)&local_70);
            local_70 = puVar9 + 2;
          }
        }
        lVar14 = lVar10 + 1;
        Variant::operator=((Variant *)(local_70 + lVar10 * 3),pVVar5);
        lVar10 = lVar14;
      } while ((uint)lVar14 < *(uint *)(param_1 + 0x48));
    }
  }
  MethodBind::set_default_arguments((Vector *)this);
  CowData<Variant>::_unref((CowData<Variant> *)&local_70);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HashMap<StringName, GDExtensionMethodBind*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDExtensionMethodBind*> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
::_resize_and_rehash
          (HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
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
/* HashMap<StringName, GDExtensionMethodBind*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDExtensionMethodBind*> > >::insert(StringName const&, GDExtensionMethodBind* const&, bool) */

StringName *
HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
::insert(StringName *param_1,GDExtensionMethodBind **param_2,bool param_3)

{
  GDExtensionMethodBind *pGVar1;
  uint uVar2;
  GDExtensionMethodBind *pGVar3;
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
  GDExtensionMethodBind *pGVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  GDExtensionMethodBind *pGVar25;
  long *in_RCX;
  uint uVar26;
  int iVar27;
  undefined7 in_register_00000011;
  StringName *pSVar28;
  long lVar29;
  ulong uVar30;
  char in_R8B;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  GDExtensionMethodBind *pGVar34;
  long in_FS_OFFSET;
  bool bVar35;
  GDExtensionMethodBind *local_80;
  long local_58;
  long local_50;
  long local_40;
  
  pSVar28 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == (GDExtensionMethodBind *)0x0) {
    uVar20 = (ulong)uVar22;
    uVar30 = uVar20 * 4;
    uVar32 = uVar20 * 8;
    pGVar25 = (GDExtensionMethodBind *)Memory::alloc_static(uVar30,false);
    param_2[2] = pGVar25;
    pGVar25 = (GDExtensionMethodBind *)Memory::alloc_static(uVar32,false);
    param_2[1] = pGVar25;
    if (uVar22 != 0) {
      pGVar1 = param_2[2];
      if ((pGVar1 < pGVar25 + uVar32) && (pGVar25 < pGVar1 + uVar30)) {
        uVar30 = 0;
        do {
          *(undefined4 *)(pGVar1 + uVar30 * 4) = 0;
          *(undefined8 *)(pGVar25 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar20 != uVar30);
      }
      else {
        memset(pGVar1,0,uVar30);
        memset(pGVar25,0,uVar32);
      }
      goto LAB_001166e2;
    }
    iVar27 = *(int *)((long)param_2 + 0x2c);
    if (pGVar25 == (GDExtensionMethodBind *)0x0) goto LAB_00116809;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_001166ee;
LAB_0011682b:
    if (*(int *)(param_2 + 5) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (GDExtensionMethodBind *)0x0;
      goto LAB_001167c1;
    }
    _resize_and_rehash((HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
                        *)param_2,*(int *)(param_2 + 5) + 1);
  }
  else {
LAB_001166e2:
    iVar27 = *(int *)((long)param_2 + 0x2c);
    if (iVar27 != 0) {
LAB_001166ee:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
      uVar30 = CONCAT44(0,uVar2);
      lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      if (*(long *)pSVar28 == 0) {
        uVar23 = StringName::get_empty_hash();
      }
      else {
        uVar23 = *(uint *)(*(long *)pSVar28 + 0x20);
      }
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar33 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar23 * lVar24;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar30;
      lVar29 = SUB168(auVar4 * auVar12,8);
      uVar31 = *(uint *)(param_2[2] + lVar29 * 4);
      uVar26 = SUB164(auVar4 * auVar12,8);
      if (uVar31 != 0) {
        do {
          if ((uVar23 == uVar31) &&
             (*(long *)(*(long *)(param_2[1] + lVar29 * 8) + 0x10) == *(long *)pSVar28)) {
            local_80 = *(GDExtensionMethodBind **)(param_2[1] + (ulong)uVar26 * 8);
            *(long *)(local_80 + 0x18) = *in_RCX;
            goto LAB_001167c1;
          }
          uVar33 = uVar33 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar26 + 1) * lVar24;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar30;
          lVar29 = SUB168(auVar5 * auVar13,8);
          uVar31 = *(uint *)(param_2[2] + lVar29 * 4);
          uVar26 = SUB164(auVar5 * auVar13,8);
        } while ((uVar31 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar31 * lVar24, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar30, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar2 + uVar26) - SUB164(auVar6 * auVar14,8)) * lVar24,
                auVar15._8_8_ = 0, auVar15._0_8_ = uVar30, uVar33 <= SUB164(auVar7 * auVar15,8)));
      }
      iVar27 = *(int *)((long)param_2 + 0x2c);
    }
LAB_00116809:
    if ((float)uVar22 * __LC41 < (float)(iVar27 + 1)) goto LAB_0011682b;
  }
  StringName::StringName((StringName *)&local_58,pSVar28);
  local_50 = *in_RCX;
  local_80 = (GDExtensionMethodBind *)operator_new(0x20,"");
  *(long *)local_80 = 0;
  *(long *)(local_80 + 8) = 0;
  StringName::StringName((StringName *)(local_80 + 0x10),(StringName *)&local_58);
  bVar35 = StringName::configured != '\0';
  *(long *)(local_80 + 0x18) = local_50;
  if ((bVar35) && (local_58 != 0)) {
    StringName::unref();
  }
  pGVar25 = param_2[4];
  if (pGVar25 == (GDExtensionMethodBind *)0x0) {
    param_2[3] = local_80;
    param_2[4] = local_80;
LAB_001168e4:
    lVar24 = *(long *)pSVar28;
    if (lVar24 != 0) goto LAB_001168f1;
LAB_001169ed:
    uVar22 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      pGVar25 = param_2[3];
      *(GDExtensionMethodBind **)(pGVar25 + 8) = local_80;
      *(GDExtensionMethodBind **)local_80 = pGVar25;
      param_2[3] = local_80;
      goto LAB_001168e4;
    }
    *(GDExtensionMethodBind **)pGVar25 = local_80;
    *(GDExtensionMethodBind **)(local_80 + 8) = pGVar25;
    lVar24 = *(long *)pSVar28;
    param_2[4] = local_80;
    if (lVar24 == 0) goto LAB_001169ed;
LAB_001168f1:
    uVar22 = *(uint *)(lVar24 + 0x20);
  }
  pGVar25 = param_2[2];
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  uVar30 = (ulong)uVar22;
  uVar31 = 0;
  lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar32 = CONCAT44(0,uVar2);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar30 * lVar24;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar32;
  lVar29 = SUB168(auVar8 * auVar16,8);
  pGVar3 = param_2[1];
  pGVar1 = pGVar25 + lVar29 * 4;
  iVar27 = SUB164(auVar8 * auVar16,8);
  uVar23 = *(uint *)pGVar1;
  pGVar21 = local_80;
  while (uVar23 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar23 * lVar24;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar32;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar9 * auVar17,8)) * lVar24;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32;
    uVar22 = SUB164(auVar10 * auVar18,8);
    pGVar34 = pGVar21;
    if (uVar22 < uVar31) {
      *(uint *)pGVar1 = (uint)uVar30;
      uVar30 = (ulong)uVar23;
      pGVar1 = pGVar3 + lVar29 * 8;
      pGVar34 = *(GDExtensionMethodBind **)pGVar1;
      *(GDExtensionMethodBind **)pGVar1 = pGVar21;
      uVar31 = uVar22;
    }
    uVar22 = (uint)uVar30;
    uVar31 = uVar31 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar27 + 1) * lVar24;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    lVar29 = SUB168(auVar11 * auVar19,8);
    pGVar1 = pGVar25 + lVar29 * 4;
    iVar27 = SUB164(auVar11 * auVar19,8);
    pGVar21 = pGVar34;
    uVar23 = *(uint *)pGVar1;
  }
  *(GDExtensionMethodBind **)(pGVar3 + lVar29 * 8) = pGVar21;
  *(uint *)pGVar1 = uVar22;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_001167c1:
  *(GDExtensionMethodBind **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, GDExtensionMethodBind*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDExtensionMethodBind*> > >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName, GDExtensionMethodBind*,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, GDExtensionMethodBind*> > > const&) */

void __thiscall
HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
::operator=(HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  StringName local_48 [8];
  long local_40;
  ulong uVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
               *)param_1) {
    uVar4 = *(uint *)(this + 0x28);
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar6 * 2);
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 * 4 - lVar6 != 0);
        uVar4 = *(uint *)(this + 0x28);
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar2 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)) {
      if (uVar4 != 0x1c) {
        uVar3 = (ulong)uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar2;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar3 * 4)) {
            if (uVar2 != uVar4) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar2;
              }
              else {
                _resize_and_rehash(this,uVar2);
              }
            }
            goto LAB_00116c31;
          }
        } while (uVar2 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00116c31:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
      do {
        insert(local_48,(GDExtensionMethodBind **)this,(bool)((char)plVar5 + '\x10'));
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, GDExtensionMethodBind*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDExtensionMethodBind*> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
::operator[](HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
             *this,StringName *param_1)

{
  undefined8 *puVar1;
  ulong __n;
  uint *puVar2;
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
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 uVar32;
  void *__s_00;
  ulong uVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined8 *puVar42;
  long in_FS_OFFSET;
  bool bVar43;
  uint local_88;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  lVar31 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar28);
  if (lVar31 == 0) {
LAB_001171c0:
    uVar33 = uVar38 * 4;
    __n = uVar38 * 8;
    uVar32 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar38 != uVar33);
        goto LAB_00117088;
      }
      memset(__s,0,uVar33);
      memset(__s_00,0,__n);
      iVar34 = *(int *)(this + 0x2c);
LAB_0011708c:
      if (iVar34 != 0) {
LAB_00117094:
        uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar29 = StringName::get_empty_hash();
        }
        else {
          uVar29 = *(uint *)(*(long *)param_1 + 0x20);
        }
        uVar33 = CONCAT44(0,uVar28);
        if (uVar29 == 0) {
          uVar29 = 1;
        }
        uVar41 = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar29 * lVar31;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar33;
        lVar37 = SUB168(auVar12 * auVar24,8);
        uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
        uVar40 = SUB164(auVar12 * auVar24,8);
        if (uVar39 != 0) {
          do {
            if ((uVar29 == uVar39) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10) == *(long *)param_1))
            {
              puVar30 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar40 * 8);
              puVar30[3] = 0;
              goto LAB_00116e74;
            }
            uVar41 = uVar41 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(uVar40 + 1) * lVar31;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar33;
            lVar37 = SUB168(auVar13 * auVar25,8);
            uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
            uVar40 = SUB164(auVar13 * auVar25,8);
          } while ((uVar39 != 0) &&
                  (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar39 * lVar31, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar33, auVar15._8_8_ = 0,
                  auVar15._0_8_ = (ulong)((uVar28 + uVar40) - SUB164(auVar14 * auVar26,8)) * lVar31,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar33, uVar41 <= SUB164(auVar15 * auVar27,8)))
          ;
        }
        iVar34 = *(int *)(this + 0x2c);
      }
      goto LAB_00116eab;
    }
    iVar34 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00116eab;
    if (iVar34 != 0) goto LAB_00117094;
LAB_00116ecd:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar30 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00116e74;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    iVar34 = *(int *)(this + 0x2c);
    if (iVar34 != 0) {
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar29 = StringName::get_empty_hash();
        lVar31 = *(long *)(this + 8);
      }
      else {
        uVar29 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar29 == 0) {
        uVar29 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar29 * lVar37;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar38;
      lVar35 = SUB168(auVar4 * auVar16,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
      uVar40 = SUB164(auVar4 * auVar16,8);
      if (uVar39 != 0) {
        uVar41 = 0;
        do {
          if ((uVar29 == uVar39) &&
             (*(long *)(*(long *)(lVar31 + lVar35 * 8) + 0x10) == *(long *)param_1)) {
            puVar30 = *(undefined8 **)(lVar31 + (ulong)uVar40 * 8);
            goto LAB_00116e74;
          }
          uVar41 = uVar41 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar40 + 1) * lVar37;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar38;
          lVar35 = SUB168(auVar5 * auVar17,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
          uVar40 = SUB164(auVar5 * auVar17,8);
        } while ((uVar39 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar39 * lVar37, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar38, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar40 + uVar28) - SUB164(auVar6 * auVar18,8)) * lVar37,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar38, uVar41 <= SUB164(auVar7 * auVar19,8)));
      }
      uVar38 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar31 == 0) goto LAB_001171c0;
LAB_00117088:
      iVar34 = *(int *)(this + 0x2c);
      goto LAB_0011708c;
    }
LAB_00116eab:
    if ((float)uVar38 * __LC41 < (float)(iVar34 + 1)) goto LAB_00116ecd;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar30 = (undefined8 *)operator_new(0x20,"");
  *puVar30 = 0;
  puVar30[1] = 0;
  StringName::StringName((StringName *)(puVar30 + 2),(StringName *)&local_58);
  bVar43 = StringName::configured != '\0';
  puVar30[3] = local_50;
  if ((bVar43) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar30;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 == 0) goto LAB_0011719d;
LAB_00116f77:
    uVar28 = *(uint *)(lVar31 + 0x20);
  }
  else {
    *puVar3 = puVar30;
    puVar30[1] = puVar3;
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 != 0) goto LAB_00116f77;
LAB_0011719d:
    uVar28 = StringName::get_empty_hash();
  }
  lVar31 = *(long *)(this + 0x10);
  if (uVar28 == 0) {
    uVar28 = 1;
  }
  uVar38 = (ulong)uVar28;
  uVar40 = 0;
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar29);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar38 * lVar37;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar33;
  lVar36 = SUB168(auVar8 * auVar20,8);
  lVar35 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar31 + lVar36 * 4);
  iVar34 = SUB164(auVar8 * auVar20,8);
  uVar39 = *puVar2;
  puVar3 = puVar30;
  while (uVar39 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar39 * lVar37;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar33;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar29 + iVar34) - SUB164(auVar9 * auVar21,8)) * lVar37;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar33;
    local_88 = SUB164(auVar10 * auVar22,8);
    puVar42 = puVar3;
    if (local_88 < uVar40) {
      *puVar2 = (uint)uVar38;
      uVar38 = (ulong)uVar39;
      puVar1 = (undefined8 *)(lVar35 + lVar36 * 8);
      puVar42 = (undefined8 *)*puVar1;
      *puVar1 = puVar3;
      uVar40 = local_88;
    }
    uVar28 = (uint)uVar38;
    uVar40 = uVar40 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar34 + 1) * lVar37;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar33;
    lVar36 = SUB168(auVar11 * auVar23,8);
    puVar2 = (uint *)(lVar31 + lVar36 * 4);
    iVar34 = SUB164(auVar11 * auVar23,8);
    puVar3 = puVar42;
    uVar39 = *puVar2;
  }
  *(undefined8 **)(lVar35 + lVar36 * 8) = puVar3;
  *puVar2 = uVar28;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00116e74:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar30 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<ObjectID, GDExtension::Extension::InstanceState, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   GDExtension::Extension::InstanceState> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
::_resize_and_rehash
          (HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
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
/* HashMap<ObjectID, GDExtension::Extension::InstanceState, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   GDExtension::Extension::InstanceState> > >::insert(ObjectID const&,
   GDExtension::Extension::InstanceState const&, bool) */

ObjectID *
HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
::insert(ObjectID *param_1,InstanceState *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
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
  uint uVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  CowData<char32_t> *pCVar24;
  undefined8 uVar25;
  void *__s_00;
  long *in_RCX;
  int iVar26;
  undefined7 in_register_00000011;
  long *plVar27;
  long lVar28;
  long lVar29;
  CowData *pCVar30;
  uint uVar31;
  char in_R8B;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 (*pauVar35) [16];
  undefined1 uVar36;
  undefined8 *puVar37;
  long lVar38;
  long in_FS_OFFSET;
  undefined1 (*pauStack_a0) [16];
  undefined1 (*local_50) [16];
  undefined1 local_48;
  long local_40;
  
  plVar27 = (long *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  __s_00 = *(void **)(param_2 + 8);
  if (__s_00 == (void *)0x0) {
    uVar33 = (ulong)uVar2;
    uVar22 = uVar33 * 4;
    uVar34 = uVar33 * 8;
    uVar25 = Memory::alloc_static(uVar22,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar2 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar22))) {
        uVar22 = 0;
        do {
          *(undefined4 *)((long)__s + uVar22 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar22 * 8) = 0;
          uVar22 = uVar22 + 1;
        } while (uVar33 != uVar22);
        goto LAB_00117546;
      }
      memset(__s,0,uVar22);
      memset(__s_00,0,uVar34);
      lVar38 = *plVar27;
      iVar26 = *(int *)(param_2 + 0x2c);
      goto LAB_00117552;
    }
    lVar38 = *plVar27;
    iVar26 = *(int *)(param_2 + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00117552;
  }
  else {
LAB_00117546:
    lVar38 = *plVar27;
    iVar26 = *(int *)(param_2 + 0x2c);
LAB_00117552:
    if (iVar26 != 0) {
      uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar22 = lVar38 * 0x3ffff - 1;
      uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
      uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
      uVar22 = uVar22 >> 0x16 ^ uVar22;
      uVar33 = uVar22 & 0xffffffff;
      if ((int)uVar22 == 0) {
        uVar33 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar33 * lVar3;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar34;
      lVar28 = SUB168(auVar5 * auVar13,8);
      uVar31 = *(uint *)(*(long *)(param_2 + 0x10) + lVar28 * 4);
      uVar21 = SUB164(auVar5 * auVar13,8);
      if (uVar31 != 0) {
        uVar32 = 0;
        do {
          if ((uVar31 == (uint)uVar33) &&
             (*(long *)(*(long *)((long)__s_00 + lVar28 * 8) + 0x10) == lVar38)) {
            lVar38 = *(long *)((long)__s_00 + (ulong)uVar21 * 8);
            puVar37 = *(undefined8 **)(lVar38 + 0x18);
            if (puVar37 != (undefined8 *)0x0) goto LAB_00117666;
            goto LAB_001176ff;
          }
          uVar32 = uVar32 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar21 + 1) * lVar3;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar34;
          lVar28 = SUB168(auVar6 * auVar14,8);
          uVar31 = *(uint *)(*(long *)(param_2 + 0x10) + lVar28 * 4);
          uVar21 = SUB164(auVar6 * auVar14,8);
        } while ((uVar31 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar31 * lVar3, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar34, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar21) -
                                      SUB164(auVar7 * auVar15,8)) * lVar3, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar34, uVar32 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar2 * __LC41 < (float)(iVar26 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      pauStack_a0 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00117c1d;
    }
    _resize_and_rehash((HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  lVar38 = *plVar27;
  local_50 = (undefined1 (*) [16])0x0;
  if (((long *)*in_RCX == (long *)0x0) ||
     (pCVar30 = *(CowData **)*in_RCX, pCVar30 == (CowData *)0x0)) {
    uVar36 = (undefined1)in_RCX[1];
    local_48 = uVar36;
    pauStack_a0 = (undefined1 (*) [16])operator_new(0x28,"");
    *pauStack_a0 = (undefined1  [16])0x0;
    *(undefined8 *)(pauStack_a0[1] + 8) = 0;
    *(long *)pauStack_a0[1] = lVar38;
  }
  else {
    pauVar23 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar23[1] = 0;
    *pauVar23 = (undefined1  [16])0x0;
    local_50 = pauVar23;
    do {
      while( true ) {
        pCVar24 = (CowData<char32_t> *)operator_new(0x38,DefaultAllocator::alloc);
        *(undefined8 *)pCVar24 = 0;
        *(undefined1 (*) [16])(pCVar24 + 0x10) = (undefined1  [16])0x0;
        lVar3 = *(long *)pCVar30;
        *(undefined4 *)(pCVar24 + 8) = 0;
        *(undefined8 *)(pCVar24 + 0x30) = 0;
        *(undefined1 (*) [16])(pCVar24 + 0x20) = (undefined1  [16])0x0;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(pCVar24,pCVar30);
        }
        Variant::operator=((Variant *)(pCVar24 + 8),(Variant *)(pCVar30 + 8));
        uVar25 = *(undefined8 *)(*pauVar23 + 8);
        *(undefined1 (**) [16])(pCVar24 + 0x30) = pauVar23;
        *(undefined8 *)(pCVar24 + 0x20) = 0;
        *(undefined8 *)(pCVar24 + 0x28) = uVar25;
        if (*(long *)(*pauVar23 + 8) != 0) {
          *(CowData<char32_t> **)(*(long *)(*pauVar23 + 8) + 0x20) = pCVar24;
        }
        lVar3 = *(long *)*pauVar23;
        *(CowData<char32_t> **)(*pauVar23 + 8) = pCVar24;
        if (lVar3 != 0) break;
        *(CowData<char32_t> **)*pauVar23 = pCVar24;
        pCVar30 = *(CowData **)(pCVar30 + 0x20);
        *(int *)pauVar23[1] = *(int *)pauVar23[1] + 1;
        if (pCVar30 == (CowData *)0x0) goto LAB_00117986;
      }
      pCVar30 = *(CowData **)(pCVar30 + 0x20);
      *(int *)pauVar23[1] = *(int *)pauVar23[1] + 1;
    } while (pCVar30 != (CowData *)0x0);
LAB_00117986:
    uVar36 = (undefined1)in_RCX[1];
    local_48 = uVar36;
    pauStack_a0 = (undefined1 (*) [16])operator_new(0x28,"");
    pCVar30 = *(CowData **)*pauVar23;
    *pauStack_a0 = (undefined1  [16])0x0;
    *(undefined8 *)(pauStack_a0[1] + 8) = 0;
    *(long *)pauStack_a0[1] = lVar38;
    if (pCVar30 != (CowData *)0x0) {
      pauVar23 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(pauStack_a0[1] + 8) = pauVar23;
      *(undefined4 *)pauVar23[1] = 0;
      *pauVar23 = (undefined1  [16])0x0;
      do {
        while( true ) {
          pCVar24 = (CowData<char32_t> *)operator_new(0x38,DefaultAllocator::alloc);
          *(undefined8 *)pCVar24 = 0;
          *(undefined1 (*) [16])(pCVar24 + 0x10) = (undefined1  [16])0x0;
          lVar38 = *(long *)pCVar30;
          *(undefined4 *)(pCVar24 + 8) = 0;
          *(undefined8 *)(pCVar24 + 0x30) = 0;
          *(undefined1 (*) [16])(pCVar24 + 0x20) = (undefined1  [16])0x0;
          if (lVar38 != 0) {
            CowData<char32_t>::_ref(pCVar24,pCVar30);
          }
          Variant::operator=((Variant *)(pCVar24 + 8),(Variant *)(pCVar30 + 8));
          uVar25 = *(undefined8 *)(*(long *)(pauStack_a0[1] + 8) + 8);
          *(long *)(pCVar24 + 0x30) = *(long *)(pauStack_a0[1] + 8);
          plVar4 = *(long **)(pauStack_a0[1] + 8);
          *(undefined8 *)(pCVar24 + 0x20) = 0;
          *(undefined8 *)(pCVar24 + 0x28) = uVar25;
          if (plVar4[1] != 0) {
            *(CowData<char32_t> **)(plVar4[1] + 0x20) = pCVar24;
          }
          plVar4[1] = (long)pCVar24;
          if (*plVar4 != 0) break;
          *plVar4 = (long)pCVar24;
          pCVar30 = *(CowData **)(pCVar30 + 0x20);
          *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
          if (pCVar30 == (CowData *)0x0) goto LAB_00117ab4;
        }
        pCVar30 = *(CowData **)(pCVar30 + 0x20);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
      } while (pCVar30 != (CowData *)0x0);
    }
  }
LAB_00117ab4:
  pauStack_a0[2][0] = uVar36;
  List<Pair<String,Variant>,DefaultAllocator>::~List
            ((List<Pair<String,Variant>,DefaultAllocator> *)&local_50);
  puVar37 = *(undefined8 **)(param_2 + 0x20);
  if (puVar37 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_a0;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_a0;
  }
  else if (in_R8B == '\0') {
    *puVar37 = pauStack_a0;
    *(undefined8 **)(*pauStack_a0 + 8) = puVar37;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_a0;
  }
  else {
    lVar38 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar38 + 8) = pauStack_a0;
    *(long *)*pauStack_a0 = lVar38;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_a0;
  }
  lVar38 = *(long *)(param_2 + 0x10);
  uVar22 = *plVar27 * 0x3ffff - 1;
  uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
  uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
  uVar22 = uVar22 >> 0x16 ^ uVar22;
  uVar34 = uVar22 & 0xffffffff;
  if ((int)uVar22 == 0) {
    uVar34 = 1;
  }
  uVar32 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar21 = (uint)uVar34;
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar22 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar34 * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar22;
  lVar29 = SUB168(auVar9 * auVar17,8);
  lVar28 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar38 + lVar29 * 4);
  iVar26 = SUB164(auVar9 * auVar17,8);
  uVar31 = *puVar1;
  pauVar23 = pauStack_a0;
  while (uVar31 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar31 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar22;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar26 + uVar2) - SUB164(auVar10 * auVar18,8)) * lVar3;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar22;
    uVar21 = SUB164(auVar11 * auVar19,8);
    pauVar35 = pauVar23;
    if (uVar21 < uVar32) {
      *puVar1 = (uint)uVar34;
      uVar34 = (ulong)uVar31;
      puVar37 = (undefined8 *)(lVar28 + lVar29 * 8);
      pauVar35 = (undefined1 (*) [16])*puVar37;
      *puVar37 = pauVar23;
      uVar32 = uVar21;
    }
    uVar21 = (uint)uVar34;
    uVar32 = uVar32 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar26 + 1) * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar22;
    lVar29 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar38 + lVar29 * 4);
    iVar26 = SUB164(auVar12 * auVar20,8);
    pauVar23 = pauVar35;
    uVar31 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar28 + lVar29 * 8) = pauVar23;
  *puVar1 = uVar21;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00117c1d:
  *(undefined1 (**) [16])param_1 = pauStack_a0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if (*(undefined8 **)(pCVar24 + 0x30) == puVar37) {
      *puVar37 = *(undefined8 *)(pCVar24 + 0x20);
      if (pCVar24 == (CowData<char32_t> *)puVar37[1]) {
        puVar37[1] = *(undefined8 *)(pCVar24 + 0x28);
      }
      if (*(long *)(pCVar24 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(pCVar24 + 0x28) + 0x20) = *(undefined8 *)(pCVar24 + 0x20);
      }
      if (*(long *)(pCVar24 + 0x20) != 0) {
        *(undefined8 *)(*(long *)(pCVar24 + 0x20) + 0x28) = *(undefined8 *)(pCVar24 + 0x28);
      }
      if (Variant::needs_deinit[*(int *)(pCVar24 + 8)] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref(pCVar24);
      Memory::free_static(pCVar24,false);
      *(int *)(puVar37 + 2) = *(int *)(puVar37 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar37 = *(undefined8 **)(lVar38 + 0x18);
    if (*(int *)(puVar37 + 2) == 0) break;
LAB_00117666:
    pCVar24 = (CowData<char32_t> *)*puVar37;
    if (pCVar24 == (CowData<char32_t> *)0x0) goto LAB_00117702;
  }
  Memory::free_static(puVar37,false);
  *(undefined8 *)(lVar38 + 0x18) = 0;
LAB_001176ff:
  puVar37 = (undefined8 *)0x0;
LAB_00117702:
  if (((long *)*in_RCX != (long *)0x0) &&
     (pCVar30 = *(CowData **)*in_RCX, pCVar30 != (CowData *)0x0)) {
    if (puVar37 == (undefined8 *)0x0) {
      pauVar23 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(lVar38 + 0x18) = pauVar23;
      *(undefined4 *)pauVar23[1] = 0;
      *pauVar23 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        pCVar24 = (CowData<char32_t> *)operator_new(0x38,DefaultAllocator::alloc);
        *(undefined8 *)pCVar24 = 0;
        *(undefined1 (*) [16])(pCVar24 + 0x10) = (undefined1  [16])0x0;
        lVar3 = *(long *)pCVar30;
        *(undefined4 *)(pCVar24 + 8) = 0;
        *(undefined8 *)(pCVar24 + 0x30) = 0;
        *(undefined1 (*) [16])(pCVar24 + 0x20) = (undefined1  [16])0x0;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(pCVar24,pCVar30);
        }
        Variant::operator=((Variant *)(pCVar24 + 8),(Variant *)(pCVar30 + 8));
        uVar25 = *(undefined8 *)(*(long *)(lVar38 + 0x18) + 8);
        *(long *)(pCVar24 + 0x30) = *(long *)(lVar38 + 0x18);
        plVar27 = *(long **)(lVar38 + 0x18);
        *(undefined8 *)(pCVar24 + 0x20) = 0;
        *(undefined8 *)(pCVar24 + 0x28) = uVar25;
        if (plVar27[1] != 0) {
          *(CowData<char32_t> **)(plVar27[1] + 0x20) = pCVar24;
        }
        plVar27[1] = (long)pCVar24;
        if (*plVar27 != 0) break;
        *plVar27 = (long)pCVar24;
        pCVar30 = *(CowData **)(pCVar30 + 0x20);
        *(int *)(plVar27 + 2) = (int)plVar27[2] + 1;
        if (pCVar30 == (CowData *)0x0) goto LAB_00117802;
      }
      pCVar30 = *(CowData **)(pCVar30 + 0x20);
      *(int *)(plVar27 + 2) = (int)plVar27[2] + 1;
    } while (pCVar30 != (CowData *)0x0);
  }
LAB_00117802:
  *(char *)(lVar38 + 0x20) = (char)in_RCX[1];
  pauStack_a0 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar21 * 8);
  goto LAB_00117c1d;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, GDExtension::Extension::InstanceState, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   GDExtension::Extension::InstanceState> > >::operator[](ObjectID const&) */

undefined1 * __thiscall
HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
::operator[](HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
             *this,ObjectID *param_1)

{
  uint *puVar1;
  long lVar2;
  CowData<char32_t> *this_00;
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
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  undefined1 (*pauVar29) [16];
  ulong uVar30;
  undefined8 uVar31;
  void *__s_00;
  uint uVar32;
  int iVar33;
  long lVar34;
  undefined8 *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  undefined1 (*pauVar43) [16];
  long lVar44;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  
  __s_00 = *(void **)(this + 8);
  lVar44 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = (ulong)*(uint *)(this + 0x28);
  uVar36 = *(uint *)(hash_table_size_primes + uVar30 * 4);
  uVar42 = CONCAT44(0,uVar36);
  if (__s_00 == (void *)0x0) {
    local_70 = 0;
    uVar30 = uVar42 * 4;
    uVar28 = uVar42 * 8;
    local_78 = 0;
    uVar31 = Memory::alloc_static(uVar30,false);
    *(undefined8 *)(this + 0x10) = uVar31;
    __s_00 = (void *)Memory::alloc_static(uVar28,false);
    *(void **)(this + 8) = __s_00;
    if (uVar36 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar28)) && (__s_00 < (void *)((long)__s + uVar30))) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)__s + uVar30 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar42 != uVar30);
        lVar44 = *(long *)param_1;
        iVar33 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar30);
        memset(__s_00,0,uVar28);
        lVar44 = *(long *)param_1;
        iVar33 = *(int *)(this + 0x2c);
      }
LAB_00118414:
      if (iVar33 == 0) goto LAB_00118371;
      uVar30 = (ulong)*(uint *)(this + 0x28);
      lVar40 = *(long *)(this + 0x10);
      goto LAB_00117faa;
    }
    lVar44 = *(long *)param_1;
    iVar33 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00118414;
  }
  else {
    iVar33 = *(int *)(this + 0x2c);
    if (iVar33 == 0) {
      local_70 = 0;
      local_78 = 0;
LAB_00118371:
      iVar33 = 0;
    }
    else {
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar30 * 8);
      uVar28 = lVar44 * 0x3ffff - 1;
      uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
      uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
      uVar28 = uVar28 >> 0x16 ^ uVar28;
      uVar39 = uVar28 & 0xffffffff;
      if ((int)uVar28 == 0) {
        uVar39 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar39 * lVar2;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar42;
      lVar34 = SUB168(auVar3 * auVar15,8);
      lVar40 = *(long *)(this + 0x10);
      uVar38 = SUB164(auVar3 * auVar15,8);
      uVar32 = *(uint *)(lVar40 + lVar34 * 4);
      if (uVar32 != 0) {
        uVar37 = 0;
        do {
          if (((uint)uVar39 == uVar32) &&
             (lVar44 == *(long *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10))) {
            pauVar29 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar38 * 8);
            goto LAB_00117f6b;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar38 + 1) * lVar2;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar42;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar32 = *(uint *)(lVar40 + lVar34 * 4);
          uVar38 = SUB164(auVar4 * auVar16,8);
        } while ((uVar32 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar32 * lVar2, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar42, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar38 + uVar36) - SUB164(auVar5 * auVar17,8)) * lVar2,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar42, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
      local_70 = 0;
      local_78 = 0;
LAB_00117faa:
      uVar39 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar30 * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar30 * 8);
      uVar28 = lVar44 * 0x3ffff - 1;
      uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
      uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
      uVar28 = uVar28 >> 0x16 ^ uVar28;
      uVar41 = uVar28 & 0xffffffff;
      if ((int)uVar28 == 0) {
        uVar41 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar41 * lVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar34 = SUB168(auVar7 * auVar19,8);
      uVar36 = *(uint *)(lVar40 + lVar34 * 4);
      uVar32 = SUB164(auVar7 * auVar19,8);
      if (uVar36 != 0) {
        uVar38 = 0;
        do {
          if ((uVar36 == (uint)uVar41) &&
             (*(long *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10) == lVar44)) {
            lVar44 = *(long *)((long)__s_00 + (ulong)uVar32 * 8);
            puVar35 = *(undefined8 **)(lVar44 + 0x18);
            if (puVar35 != (undefined8 *)0x0) goto LAB_001180a5;
            goto LAB_0011813e;
          }
          uVar38 = uVar38 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar32 + 1) * lVar2;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar39;
          lVar34 = SUB168(auVar8 * auVar20,8);
          uVar36 = *(uint *)(lVar40 + lVar34 * 4);
          uVar32 = SUB164(auVar8 * auVar20,8);
        } while ((uVar36 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar36 * lVar2, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar39, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar30 * 4) + uVar32) -
                            SUB164(auVar9 * auVar21,8)) * lVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, uVar38 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar42 * __LC41 < (float)(iVar33 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar29 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011834c;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  local_58 = *(undefined8 *)param_1;
  local_48 = 0;
  local_50 = 0;
  pauVar29 = (undefined1 (*) [16])operator_new(0x28,"");
  *pauVar29 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar29[1] + 8) = 0;
  *(undefined8 *)pauVar29[1] = local_58;
  pauVar29[2][0] = 0;
  List<Pair<String,Variant>,DefaultAllocator>::~List
            ((List<Pair<String,Variant>,DefaultAllocator> *)&local_50);
  puVar35 = *(undefined8 **)(this + 0x20);
  if (puVar35 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar29;
  }
  else {
    *puVar35 = pauVar29;
    *(undefined8 **)(*pauVar29 + 8) = puVar35;
  }
  lVar44 = *(long *)param_1;
  lVar40 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar29;
  uVar30 = lVar44 * 0x3ffff - 1;
  uVar30 = (uVar30 ^ uVar30 >> 0x1f) * 0x15;
  uVar30 = (uVar30 ^ uVar30 >> 0xb) * 0x41;
  uVar30 = uVar30 >> 0x16 ^ uVar30;
  uVar42 = uVar30 & 0xffffffff;
  if ((int)uVar30 == 0) {
    uVar42 = 1;
  }
  uVar37 = 0;
  lVar44 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar38 = (uint)uVar42;
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar36);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar42 * lVar44;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar30;
  lVar34 = SUB168(auVar11 * auVar23,8);
  lVar2 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar40 + lVar34 * 4);
  iVar33 = SUB164(auVar11 * auVar23,8);
  uVar32 = *puVar1;
  pauVar27 = pauVar29;
  while (uVar32 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar32 * lVar44;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar30;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((iVar33 + uVar36) - SUB164(auVar12 * auVar24,8)) * lVar44;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar30;
    uVar38 = SUB164(auVar13 * auVar25,8);
    pauVar43 = pauVar27;
    if (uVar38 < uVar37) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar32;
      puVar35 = (undefined8 *)(lVar2 + lVar34 * 8);
      pauVar43 = (undefined1 (*) [16])*puVar35;
      *puVar35 = pauVar27;
      uVar37 = uVar38;
    }
    uVar38 = (uint)uVar42;
    uVar37 = uVar37 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar33 + 1) * lVar44;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar30;
    lVar34 = SUB168(auVar14 * auVar26,8);
    puVar1 = (uint *)(lVar40 + lVar34 * 4);
    iVar33 = SUB164(auVar14 * auVar26,8);
    pauVar27 = pauVar43;
    uVar32 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar2 + lVar34 * 8) = pauVar27;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011834c:
  List<Pair<String,Variant>,DefaultAllocator>::~List
            ((List<Pair<String,Variant>,DefaultAllocator> *)&local_78);
LAB_00117f6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar29[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if (*(undefined8 **)(this_00 + 0x30) == puVar35) {
      *puVar35 = *(undefined8 *)(this_00 + 0x20);
      if (this_00 == (CowData<char32_t> *)puVar35[1]) {
        puVar35[1] = *(undefined8 *)(this_00 + 0x28);
      }
      if (*(long *)(this_00 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(this_00 + 0x28) + 0x20) = *(undefined8 *)(this_00 + 0x20);
      }
      if (*(long *)(this_00 + 0x20) != 0) {
        *(undefined8 *)(*(long *)(this_00 + 0x20) + 0x28) = *(undefined8 *)(this_00 + 0x28);
      }
      if (Variant::needs_deinit[*(int *)(this_00 + 8)] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(puVar35 + 2) = *(int *)(puVar35 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar35 = *(undefined8 **)(lVar44 + 0x18);
    if (*(int *)(puVar35 + 2) == 0) break;
LAB_001180a5:
    this_00 = (CowData<char32_t> *)*puVar35;
    if (this_00 == (CowData<char32_t> *)0x0) goto LAB_0011813e;
  }
  Memory::free_static(puVar35,false);
  *(undefined8 *)(lVar44 + 0x18) = 0;
LAB_0011813e:
  *(undefined1 *)(lVar44 + 0x20) = 0;
  pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar32 * 8);
  goto LAB_0011834c;
}



/* GDExtension::Extension::Extension(GDExtension::Extension const&) */

void __thiscall GDExtension::Extension::Extension(Extension *this,Extension *param_1)

{
  ulong uVar1;
  Extension EVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 (*pauVar22) [16];
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  undefined8 *puVar29;
  long in_FS_OFFSET;
  StringName aSStack_48 [8];
  long local_40;
  
  uVar25 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = uVar25;
  *(undefined8 *)(this + 8) = uVar8;
  if ((*(long **)(param_1 + 0x10) != (long *)0x0) &&
     (puVar29 = (undefined8 *)**(long **)(param_1 + 0x10), puVar29 != (undefined8 *)0x0)) {
    pauVar22 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x10) = pauVar22;
    *(undefined4 *)pauVar22[1] = 0;
    *pauVar22 = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar23 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
        uVar25 = *puVar29;
        puVar23[1] = 0;
        *puVar23 = uVar25;
        plVar28 = *(long **)(this + 0x10);
        lVar24 = plVar28[1];
        puVar23[3] = plVar28;
        puVar23[2] = lVar24;
        if (lVar24 != 0) {
          *(undefined8 **)(lVar24 + 8) = puVar23;
        }
        plVar28[1] = (long)puVar23;
        if (*plVar28 != 0) break;
        puVar29 = (undefined8 *)puVar29[1];
        *(int *)(plVar28 + 2) = (int)plVar28[2] + 1;
        *plVar28 = (long)puVar23;
        if (puVar29 == (undefined8 *)0x0) goto LAB_001185fc;
      }
      puVar29 = (undefined8 *)puVar29[1];
      *(int *)(plVar28 + 2) = (int)plVar28[2] + 1;
    } while (puVar29 != (undefined8 *)0x0);
  }
LAB_001185fc:
  StringName::StringName((StringName *)(this + 0x18),(StringName *)(param_1 + 0x18));
  StringName::StringName((StringName *)(this + 0x20),(StringName *)(param_1 + 0x20));
  uVar25 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  uVar17 = *(undefined8 *)(param_1 + 0x58);
  uVar18 = *(undefined8 *)(param_1 + 0x60);
  uVar19 = *(undefined8 *)(param_1 + 0x68);
  uVar20 = *(undefined8 *)(param_1 + 0x70);
  uVar21 = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined2 *)(param_1 + 0x2c);
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x30) = uVar25;
  *(undefined8 *)(this + 0x38) = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  uVar11 = *(undefined8 *)(param_1 + 0x98);
  uVar12 = *(undefined8 *)(param_1 + 0xa8);
  uVar13 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0x40) = uVar14;
  *(undefined8 *)(this + 0x48) = uVar15;
  *(undefined2 *)(this + 0x2c) = uVar3;
  EVar2 = param_1[0x2e];
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  uVar15 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0x50) = uVar16;
  *(undefined8 *)(this + 0x58) = uVar17;
  uVar16 = *(undefined8 *)(param_1 + 200);
  uVar17 = *(undefined8 *)(param_1 + 0xd0);
  this[0x2e] = EVar2;
  uVar25 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0x60) = uVar18;
  *(undefined8 *)(this + 0x68) = uVar19;
  uVar18 = *(undefined8 *)(param_1 + 0xd8);
  uVar19 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xa0) = uVar25;
  uVar25 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(this + 0x70) = uVar20;
  *(undefined8 *)(this + 0x78) = uVar21;
  *(undefined8 *)(this + 0xe8) = uVar25;
  *(undefined8 *)(this + 0x80) = uVar8;
  *(undefined8 *)(this + 0x88) = uVar9;
  *(undefined8 *)(this + 0x90) = uVar10;
  *(undefined8 *)(this + 0x98) = uVar11;
  *(undefined8 *)(this + 0xa8) = uVar12;
  *(undefined8 *)(this + 0xb0) = uVar13;
  *(undefined8 *)(this + 0xb8) = uVar14;
  *(undefined8 *)(this + 0xc0) = uVar15;
  *(undefined8 *)(this + 200) = uVar16;
  *(undefined8 *)(this + 0xd0) = uVar17;
  *(undefined8 *)(this + 0xd8) = uVar18;
  *(undefined8 *)(this + 0xe0) = uVar19;
  uVar25 = *(undefined8 *)(param_1 + 0xf8);
  uVar8 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  EVar2 = param_1[0x108];
  *(undefined8 *)(this + 0xf8) = uVar25;
  *(undefined8 *)(this + 0x100) = uVar8;
  this[0x108] = EVar2;
  uVar4 = *(uint *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x138) = 0;
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  lVar24 = 1;
  *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
  if (5 < uVar4) {
    do {
      if (uVar4 <= *(uint *)(hash_table_size_primes + lVar24 * 4)) {
        *(int *)(this + 0x138) = (int)lVar24;
        goto LAB_00118773;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00118773:
  if ((*(int *)(param_1 + 0x13c) != 0) &&
     (plVar28 = *(long **)(param_1 + 0x128), plVar28 != (long *)0x0)) {
    do {
      HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
      ::insert(aSStack_48,(GDExtensionMethodBind **)(this + 0x110),(bool)((char)plVar28 + '\x10'));
      plVar28 = (long *)*plVar28;
    } while (plVar28 != (long *)0x0);
  }
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x150) = (undefined1  [16])0x0;
  uVar1 = *(ulong *)(param_1 + 0x160);
  *(ulong *)(this + 0x160) = uVar1;
  if ((int)(uVar1 >> 0x20) != 0) {
    uVar4 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
    uVar1 = (ulong)uVar4 * 4;
    uVar25 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x158) = uVar25;
    uVar25 = Memory::alloc_static((ulong)uVar4 * 8,false);
    *(undefined8 *)(this + 0x140) = uVar25;
    uVar25 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x150) = uVar25;
    lVar24 = Memory::alloc_static(uVar1,false);
    *(long *)(this + 0x148) = lVar24;
    if (*(int *)(this + 0x164) != 0) {
      lVar5 = *(long *)(this + 0x140);
      lVar6 = *(long *)(param_1 + 0x140);
      lVar26 = 0;
      lVar7 = *(long *)(param_1 + 0x150);
      lVar27 = *(long *)(this + 0x150);
      do {
        *(undefined8 *)(lVar5 + lVar26 * 8) = *(undefined8 *)(lVar6 + lVar26 * 8);
        *(undefined4 *)(lVar27 + lVar26 * 4) = *(undefined4 *)(lVar7 + lVar26 * 4);
        lVar26 = lVar26 + 1;
      } while ((uint)lVar26 < *(uint *)(this + 0x164));
    }
    if (uVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x158);
      lVar6 = *(long *)(this + 0x158);
      lVar27 = 0;
      lVar7 = *(long *)(param_1 + 0x148);
      do {
        *(undefined4 *)(lVar6 + lVar27) = *(undefined4 *)(lVar5 + lVar27);
        *(undefined4 *)(lVar24 + lVar27) = *(undefined4 *)(lVar7 + lVar27);
        lVar27 = lVar27 + 4;
      } while (uVar1 - lVar27 != 0);
    }
  }
  uVar4 = *(uint *)(param_1 + 400);
  *(undefined8 *)(this + 400) = 0;
  *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  lVar24 = 1;
  if (5 < uVar4) {
    do {
      if (uVar4 <= *(uint *)(hash_table_size_primes + lVar24 * 4)) {
        *(int *)(this + 400) = (int)lVar24;
        goto LAB_00118871;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0);
  }
LAB_00118871:
  if ((*(int *)(param_1 + 0x194) != 0) &&
     (plVar28 = *(long **)(param_1 + 0x180), plVar28 != (long *)0x0)) {
    do {
      HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
      ::insert((ObjectID *)aSStack_48,(InstanceState *)(this + 0x168),(bool)((char)plVar28 + '\x10')
              );
      plVar28 = (long *)*plVar28;
    } while (plVar28 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, GDExtension::Extension, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDExtension::Extension> > >::operator[](StringName const&) */

Extension * __thiscall
HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
::operator[](HashMap<StringName,GDExtension::Extension,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtension::Extension>>>
             *this,StringName *param_1)

{
  HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
  *this_00;
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
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 (*pauVar39) [16];
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  undefined8 *puVar44;
  void *pvVar45;
  int *piVar46;
  long lVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  undefined8 uVar52;
  Extension *pEVar53;
  uint uVar54;
  ulong uVar55;
  uint uVar56;
  uint uVar57;
  long *plVar58;
  long in_FS_OFFSET;
  byte bVar59;
  Extension *local_3d0;
  undefined8 local_398;
  undefined8 uStack_390;
  long *local_388;
  StringName local_380 [8];
  StringName local_378 [8];
  undefined4 local_370;
  undefined2 local_36c;
  undefined1 local_36a;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  HashMap local_288 [40];
  ulong local_260;
  HashSet local_258 [32];
  ulong local_238;
  HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
  local_230 [8];
  long local_228;
  long *local_218;
  ulong local_208;
  undefined1 local_1f8 [16];
  long local_1e8;
  Extension local_1e0 [416];
  long local_40;
  
  bVar59 = 0;
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar37);
  if ((lVar43 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar38 = StringName::get_empty_hash();
      lVar43 = *(long *)(this + 8);
    }
    else {
      uVar38 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar38 == 0) {
      uVar38 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar38 * lVar47;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar40;
    lVar49 = SUB168(auVar4 * auVar20,8);
    uVar36 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
    uVar54 = SUB164(auVar4 * auVar20,8);
    if (uVar36 != 0) {
      uVar56 = 0;
      do {
        if ((uVar36 == uVar38) &&
           (*(long *)(*(long *)(lVar43 + lVar49 * 8) + 0x10) == *(long *)param_1)) {
          local_3d0 = (Extension *)(*(long *)(lVar43 + (ulong)uVar54 * 8) + 0x18);
          goto LAB_00118afc;
        }
        uVar56 = uVar56 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar54 + 1) * lVar47;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar40;
        lVar49 = SUB168(auVar5 * auVar21,8);
        uVar36 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar54 = SUB164(auVar5 * auVar21,8);
      } while ((uVar36 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar36 * lVar47, auVar22._8_8_ = 0,
              auVar22._0_8_ = uVar40, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar54 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar47,
              auVar23._8_8_ = 0, auVar23._0_8_ = uVar40, uVar56 <= SUB164(auVar7 * auVar23,8)));
    }
  }
  pEVar53 = (Extension *)&local_398;
  for (lVar47 = 0x33; lVar47 != 0; lVar47 = lVar47 + -1) {
    *(undefined8 *)pEVar53 = 0;
    pEVar53 = pEVar53 + (ulong)bVar59 * -0x10 + 8;
  }
  local_36c = CONCAT11(local_36c._1_1_,1);
  local_260 = _LC25;
  local_238 = _LC25;
  local_208 = _LC25;
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (lVar43 == 0) {
    uVar51 = (ulong)uVar37;
    uVar40 = uVar51 * 4;
    uVar55 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar45 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = pvVar45;
    if (uVar37 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar45 + uVar55)) && (pvVar45 < (void *)((long)pvVar3 + uVar40))
         ) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)pvVar45 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
      }
      else {
        memset(pvVar3,0,uVar40);
        memset(pvVar45,0,uVar55);
      }
      goto LAB_00118b80;
    }
    iVar48 = *(int *)(this + 0x2c);
    if (pvVar45 == (void *)0x0) goto LAB_00118d2f;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00118b8c;
LAB_00118d55:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_3d0 = (Extension *)0x18;
      goto LAB_001190eb;
    }
    uVar40 = (ulong)(uVar37 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    if (uVar37 + 1 < 2) {
      uVar40 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar51 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar45 = *(void **)(this + 8);
    uVar40 = uVar51 * 4;
    uVar55 = uVar51 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar51);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar37 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar56 = 0;
          uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar36);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar47;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar55;
          lVar49 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar43 + lVar49 * 4);
          iVar48 = SUB164(auVar12 * auVar28,8);
          uVar54 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar45 + uVar40 * 8);
          while (uVar54 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar54 * lVar47;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar55;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((iVar48 + uVar36) - SUB164(auVar13 * auVar29,8)) * lVar47;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar55;
            uVar57 = SUB164(auVar14 * auVar30,8);
            uVar52 = uVar41;
            if (uVar57 < uVar56) {
              *puVar1 = uVar37;
              puVar42 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar52 = *puVar42;
              *puVar42 = uVar41;
              uVar37 = uVar54;
              uVar56 = uVar57;
            }
            uVar56 = uVar56 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar48 + 1) * lVar47;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar55;
            lVar49 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar43 + lVar49 * 4);
            iVar48 = SUB164(auVar15 * auVar31,8);
            uVar41 = uVar52;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar41;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar45,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
LAB_00118b80:
    iVar48 = *(int *)(this + 0x2c);
    if (iVar48 != 0) {
LAB_00118b8c:
      uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar40 = CONCAT44(0,uVar38);
      lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar36 = StringName::get_empty_hash();
      }
      else {
        uVar36 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar36 == 0) {
        uVar36 = 1;
      }
      uVar57 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar36 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar40;
      lVar47 = SUB168(auVar8 * auVar24,8);
      uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar56 = SUB164(auVar8 * auVar24,8);
      if (uVar54 != 0) {
        do {
          if ((uVar36 == uVar54) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            lVar43 = *(long *)(*(long *)(this + 8) + (ulong)uVar56 * 8);
            plVar58 = *(long **)(lVar43 + 0x28);
            *(undefined8 *)(lVar43 + 0x18) = local_398;
            *(undefined8 *)(lVar43 + 0x20) = uStack_390;
            if (plVar58 != (long *)0x0) goto LAB_00118c6c;
            goto LAB_00118cd4;
          }
          uVar57 = uVar57 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar56 + 1) * lVar43;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar40;
          lVar47 = SUB168(auVar9 * auVar25,8);
          uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar56 = SUB164(auVar9 * auVar25,8);
        } while ((uVar54 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar54 * lVar43, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar40, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar38 + uVar56) - SUB164(auVar10 * auVar26,8)) * lVar43,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar40, uVar57 <= SUB164(auVar11 * auVar27,8)));
      }
      iVar48 = *(int *)(this + 0x2c);
    }
LAB_00118d2f:
    if ((float)uVar37 * __LC41 < (float)(iVar48 + 1)) goto LAB_00118d55;
  }
  local_1f8 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_1e8,param_1);
  GDExtension::Extension::Extension(local_1e0,(Extension *)&local_398);
  puVar42 = (undefined8 *)operator_new(0x1b0,"");
  *puVar42 = local_1f8._0_8_;
  puVar42[1] = local_1f8._8_8_;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_1e8);
  local_3d0 = (Extension *)(puVar42 + 3);
  GDExtension::Extension::Extension(local_3d0,local_1e0);
  GDExtension::Extension::~Extension(local_1e0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  puVar44 = *(undefined8 **)(this + 0x20);
  if (puVar44 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0011913d;
LAB_00119012:
    uVar37 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar44 = puVar42;
    puVar42[1] = puVar44;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00119012;
LAB_0011913d:
    uVar37 = StringName::get_empty_hash();
  }
  lVar43 = *(long *)(this + 0x10);
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar40 = (ulong)uVar37;
  uVar54 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar55 = CONCAT44(0,uVar38);
  lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar40 * lVar47;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar55;
  lVar50 = SUB168(auVar16 * auVar32,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar50 * 4);
  iVar48 = SUB164(auVar16 * auVar32,8);
  uVar36 = *puVar1;
  while (uVar36 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar36 * lVar47;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar55;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((iVar48 + uVar38) - SUB164(auVar17 * auVar33,8)) * lVar47;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar55;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar44 = puVar42;
    if (uVar37 < uVar54) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar36;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      puVar44 = (undefined8 *)*puVar2;
      *puVar2 = puVar42;
      uVar54 = uVar37;
    }
    uVar37 = (uint)uVar40;
    uVar54 = uVar54 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar48 + 1) * lVar47;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar55;
    lVar50 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar43 + lVar50 * 4);
    iVar48 = SUB164(auVar19 * auVar35,8);
    puVar42 = puVar44;
    uVar36 = *puVar1;
  }
  *(undefined8 **)(lVar49 + lVar50 * 8) = puVar42;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001190eb:
  GDExtension::Extension::~Extension((Extension *)&local_398);
LAB_00118afc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_3d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if (*(long **)((long)pvVar45 + 0x18) == plVar58) {
      lVar47 = *(long *)((long)pvVar45 + 8);
      lVar49 = *(long *)((long)pvVar45 + 0x10);
      *plVar58 = lVar47;
      if (pvVar45 == (void *)plVar58[1]) {
        plVar58[1] = lVar49;
      }
      if (lVar49 != 0) {
        *(long *)(lVar49 + 8) = lVar47;
        lVar47 = *(long *)((long)pvVar45 + 8);
      }
      if (lVar47 != 0) {
        *(long *)(lVar47 + 0x10) = lVar49;
      }
      Memory::free_static(pvVar45,false);
      *(int *)(plVar58 + 2) = (int)plVar58[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar58 = *(long **)(lVar43 + 0x28);
    if ((int)plVar58[2] == 0) break;
LAB_00118c6c:
    pvVar45 = (void *)*plVar58;
    if (pvVar45 == (void *)0x0) goto LAB_00118cd7;
  }
  Memory::free_static(plVar58,false);
  *(undefined8 *)(lVar43 + 0x28) = 0;
LAB_00118cd4:
  plVar58 = (long *)0x0;
LAB_00118cd7:
  if ((local_388 != (long *)0x0) &&
     (puVar42 = (undefined8 *)*local_388, puVar42 != (undefined8 *)0x0)) {
    if (plVar58 == (long *)0x0) {
      pauVar39 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(lVar43 + 0x28) = pauVar39;
      *(undefined4 *)pauVar39[1] = 0;
      *pauVar39 = (undefined1  [16])0x0;
    }
    do {
      puVar44 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
      uVar41 = *puVar42;
      puVar44[1] = 0;
      *puVar44 = uVar41;
      plVar58 = *(long **)(lVar43 + 0x28);
      lVar47 = plVar58[1];
      puVar44[3] = plVar58;
      puVar44[2] = lVar47;
      if (lVar47 != 0) {
        *(undefined8 **)(lVar47 + 8) = puVar44;
      }
      plVar58[1] = (long)puVar44;
      if (*plVar58 == 0) {
        *plVar58 = (long)puVar44;
      }
      puVar42 = (undefined8 *)puVar42[1];
      *(int *)(plVar58 + 2) = (int)plVar58[2] + 1;
    } while (puVar42 != (undefined8 *)0x0);
  }
  StringName::operator=((StringName *)(lVar43 + 0x30),local_380);
  StringName::operator=((StringName *)(lVar43 + 0x38),local_378);
  this_00 = (HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
             *)(lVar43 + 0x180);
  *(undefined4 *)(lVar43 + 0x40) = local_370;
  *(undefined2 *)(lVar43 + 0x44) = local_36c;
  *(undefined1 *)(lVar43 + 0x46) = local_36a;
  *(undefined8 *)(lVar43 + 0x48) = local_368;
  *(undefined8 *)(lVar43 + 0x50) = uStack_360;
  *(undefined8 *)(lVar43 + 0x58) = local_358;
  *(undefined8 *)(lVar43 + 0x60) = uStack_350;
  *(undefined8 *)(lVar43 + 0x68) = local_348;
  *(undefined8 *)(lVar43 + 0x70) = uStack_340;
  *(undefined8 *)(lVar43 + 0x78) = local_338;
  *(undefined8 *)(lVar43 + 0x80) = uStack_330;
  *(undefined8 *)(lVar43 + 0x88) = local_328;
  *(undefined8 *)(lVar43 + 0x90) = uStack_320;
  *(undefined8 *)(lVar43 + 0x98) = local_318;
  *(undefined8 *)(lVar43 + 0xa0) = uStack_310;
  *(undefined8 *)(lVar43 + 0xa8) = local_308;
  *(undefined8 *)(lVar43 + 0xb0) = uStack_300;
  *(undefined8 *)(lVar43 + 0xb8) = local_2f8;
  *(undefined8 *)(lVar43 + 0xc0) = local_2f0;
  *(undefined8 *)(lVar43 + 200) = uStack_2e8;
  *(undefined8 *)(lVar43 + 0xe0) = local_2d0;
  *(undefined8 *)(lVar43 + 0xe8) = uStack_2c8;
  *(undefined8 *)(lVar43 + 0xd0) = local_2e0;
  *(undefined8 *)(lVar43 + 0xd8) = uStack_2d8;
  *(undefined8 *)(lVar43 + 0xf0) = local_2c0;
  *(undefined8 *)(lVar43 + 0xf8) = uStack_2b8;
  *(undefined8 *)(lVar43 + 0x100) = local_2b0;
  *(undefined8 *)(lVar43 + 0x108) = local_2a8;
  *(undefined8 *)(lVar43 + 0x110) = local_2a0;
  *(undefined8 *)(lVar43 + 0x118) = uStack_298;
  *(undefined1 *)(lVar43 + 0x120) = local_290;
  HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
  ::operator=((HashMap<StringName,GDExtensionMethodBind*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDExtensionMethodBind*>>>
               *)(lVar43 + 0x128),local_288);
  HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator=
            ((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *)
             (lVar43 + 0x158),local_258);
  if (this_00 != local_230) {
    uVar37 = *(uint *)(lVar43 + 0x1a8);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    if ((*(int *)(lVar43 + 0x1ac) != 0) && (*(long *)(lVar43 + 0x188) != 0)) {
      if (uVar38 != 0) {
        lVar47 = 0;
        do {
          piVar46 = (int *)(*(long *)(lVar43 + 400) + lVar47);
          if (*piVar46 != 0) {
            *piVar46 = 0;
            pvVar45 = *(void **)(*(long *)(lVar43 + 0x188) + lVar47 * 2);
            List<Pair<String,Variant>,DefaultAllocator>::~List
                      ((List<Pair<String,Variant>,DefaultAllocator> *)((long)pvVar45 + 0x18));
            Memory::free_static(pvVar45,false);
            *(undefined8 *)(*(long *)(lVar43 + 0x188) + lVar47 * 2) = 0;
          }
          lVar47 = lVar47 + 4;
        } while ((ulong)uVar38 * 4 - lVar47 != 0);
        uVar37 = *(uint *)(lVar43 + 0x1a8);
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
      }
      *(undefined4 *)(lVar43 + 0x1ac) = 0;
      *(undefined1 (*) [16])(lVar43 + 0x198) = (undefined1  [16])0x0;
    }
    if (uVar38 < *(uint *)(hash_table_size_primes + (local_208 & 0xffffffff) * 4)) {
      if (uVar37 != 0x1c) {
        uVar40 = (ulong)uVar37;
        do {
          uVar38 = (int)uVar40 + 1;
          uVar40 = (ulong)uVar38;
          if (*(uint *)(hash_table_size_primes + (local_208 & 0xffffffff) * 4) <=
              *(uint *)(hash_table_size_primes + uVar40 * 4)) {
            if (uVar38 != uVar37) {
              if (*(long *)(lVar43 + 0x188) == 0) {
                *(uint *)(lVar43 + 0x1a8) = uVar38;
              }
              else {
                HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
                ::_resize_and_rehash(this_00,uVar38);
              }
            }
            goto LAB_001193a8;
          }
        } while (uVar38 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_001193a8:
    if ((local_228 != 0) && (local_218 != (long *)0x0)) {
      plVar58 = local_218;
      do {
        HashMap<ObjectID,GDExtension::Extension::InstanceState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,GDExtension::Extension::InstanceState>>>
        ::insert((ObjectID *)local_1f8,(InstanceState *)this_00,(bool)((char)plVar58 + '\x10'));
        plVar58 = (long *)*plVar58;
      } while (plVar58 != (long *)0x0);
    }
  }
  local_3d0 = (Extension *)(*(long *)(*(long *)(this + 8) + (ulong)uVar56 * 8) + 0x18);
  goto LAB_001190eb;
}



/* CowData<GDExtensionMethodBind*>::_realloc(long) */

undefined8 __thiscall
CowData<GDExtensionMethodBind*>::_realloc(CowData<GDExtensionMethodBind*> *this,long param_1)

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
/* Error CowData<GDExtensionMethodBind*>::resize<false>(long) */

undefined8 __thiscall
CowData<GDExtensionMethodBind*>::resize<false>(CowData<GDExtensionMethodBind*> *this,long param_1)

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
LAB_001198d0:
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
  if (lVar8 == 0) goto LAB_001198d0;
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
        goto LAB_001197e1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001197e1:
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



/* CowData<ObjectID>::_realloc(long) */

undefined8 __thiscall CowData<ObjectID>::_realloc(CowData<ObjectID> *this,long param_1)

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
/* Error CowData<ObjectID>::resize<false>(long) */

undefined8 __thiscall CowData<ObjectID>::resize<false>(CowData<ObjectID> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
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
LAB_00119be0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00119be0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_00119b4c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00119ae1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00119b4c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00119ae1:
  puVar9[-1] = param_1;
  return 0;
}



/* void call_with_variant_args_dv<__UnexistingClass,
   GDExtension::InitializationLevel>(__UnexistingClass*, void
   (__UnexistingClass::*)(GDExtension::InitializationLevel), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,GDExtension::InitializationLevel>
               (__UnexistingClass *param_1,_func_void_InitializationLevel *param_2,Variant **param_3
               ,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00119d3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00119da0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00119da0:
      uVar6 = 4;
LAB_00119d3d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
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
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00119cbb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00119cbb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_InitializationLevel **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC165;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00119d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<GDExtension::InitializationLevel>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<GDExtension::InitializationLevel>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC57,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00119e06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,GDExtension::InitializationLevel>
            (p_Var4,(_func_void_InitializationLevel *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119e06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0011a047;
  local_78 = 0;
  local_68 = &_LC9;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011a145:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011a145;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0011a047:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,String_const&,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_70,(String *)&local_78)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    *puVar7 = 2;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0x10006;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    uVar4 = local_70;
    lVar3 = local_78;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(uVar4 - 0x10),false);
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
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* GDExtension::_open_library_bind_compat_88418(String const&, String const&) */

void GDExtension::_GLOBAL__sub_I__open_library_bind_compat_88418(void)

{
  gdextension_interface_functions._40_8_ = 2;
  gdextension_interface_functions._8_16_ = (undefined1  [16])0x0;
  gdextension_interface_functions._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,void(*)(),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,void(*)()>>>
               ::~HashMap,gdextension_interface_functions,&__dso_handle);
  GDExtensionEditorPlugins::extension_classes._8_8_ = 0;
  __cxa_atexit(Vector<StringName>::~Vector,GDExtensionEditorPlugins::extension_classes,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDExtension::Extension::~Extension() */

void __thiscall GDExtension::Extension::~Extension(Extension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Pair<String, Variant>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<String,Variant>,DefaultAllocator>::~List
          (List<Pair<String,Variant>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDExtensionMethodBind::~GDExtensionMethodBind() */

void __thiscall GDExtensionMethodBind::~GDExtensionMethodBind(GDExtensionMethodBind *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* GDExtensionResourceLoader::~GDExtensionResourceLoader() */

void __thiscall
GDExtensionResourceLoader::~GDExtensionResourceLoader(GDExtensionResourceLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, void (*)(), HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, void (*)()> > >::~HashMap() */

void __thiscall
HashMap<StringName,void(*)(),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,void(*)()>>>
::~HashMap(HashMap<StringName,void(*)(),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,void(*)()>>>
           *this)

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
/* MethodBindTRC<GDExtension::InitializationLevel>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GDExtension::InitializationLevel>::~MethodBindTRC
          (MethodBindTRC<GDExtension::InitializationLevel> *this)

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
/* MethodBindT<GDExtension::InitializationLevel>::~MethodBindT() */

void __thiscall
MethodBindT<GDExtension::InitializationLevel>::~MethodBindT
          (MethodBindT<GDExtension::InitializationLevel> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Vector<StringName>::~Vector() */

void __thiscall Vector<StringName>::~Vector(Vector<StringName> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

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
/* GDExtension::Extension::Extension(GDExtension::Extension const&) */

void __thiscall GDExtension::Extension::Extension(Extension *this,Extension *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


