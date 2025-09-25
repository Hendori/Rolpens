/* WARNING: Removing unreachable block (ram,0x0010d81a) */
/* WARNING: Removing unreachable block (ram,0x00103879) */
/* WARNING: Removing unreachable block (ram,0x0010d079) */
/* WARNING: Removing unreachable block (ram,0x0010d089) */
/* GDScriptFunction::disassemble(Vector<String> const&) const */

void __thiscall GDScriptFunction::disassemble(GDScriptFunction *this,Vector *param_1)

{
  Object *pOVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  Object OVar6;
  Object *pOVar7;
  Object *pOVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long in_FS_OFFSET;
  GDScript *local_140;
  CowData<char32_t> *local_120;
  Object *local_f0;
  long local_e8;
  Object *local_e0;
  Object *local_d8;
  Object *local_d0;
  Object *local_c8;
  Object *local_c0;
  long local_b8;
  Object *local_b0;
  Object *local_a8;
  size_t local_a0;
  int local_98 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)(this + 0x280)) {
    iVar15 = 0;
    do {
      lVar12 = (long)iVar15;
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      local_98[3] = 0;
      local_98[4] = 0;
      local_98[5] = 0;
      local_98[6] = 0;
      local_98[7] = 0;
      local_98[8] = 0;
      local_98[9] = 0;
      local_98[10] = 0;
      local_98[0xb] = 0;
      local_98[0xc] = 0;
      local_98[0xd] = 0;
      StringBuilder::append((char *)local_98);
      itos((long)&local_a8);
      StringBuilder::append((String *)local_98);
      pOVar7 = local_a8;
      if (local_a8 != (Object *)0x0) {
        LOCK();
        pOVar8 = local_a8 + -0x10;
        *(long *)pOVar8 = *(long *)pOVar8 + -1;
        UNLOCK();
        if (*(long *)pOVar8 == 0) {
          local_a8 = (Object *)0x0;
          Memory::free_static(pOVar7 + -0x10,false);
        }
      }
      StringBuilder::append((char *)local_98);
      lVar10 = *(long *)(this + 0x2c8);
      iVar11 = *(int *)(lVar10 + lVar12 * 4);
      iVar9 = (int)this;
      switch(iVar11) {
      case 0:
        uVar2 = *(undefined4 *)(lVar10 + (lVar12 + 4) * 4);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 9;
        StringBuilder::append((char *)local_98);
        Variant::get_operator_name((GDScript *)&local_a8,uVar2);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 1:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        lVar10 = *(long *)(this + 0x368);
        lVar12 = (long)*(int *)(*(long *)(this + 0x2c8) + 4 + (lVar12 + 3) * 4);
        if (lVar12 < 0) {
LAB_0010c40c:
          if (lVar10 == 0) goto LAB_0010c6e0;
        }
        else {
          if (lVar10 == 0) {
LAB_0010c6e0:
            lVar10 = 0;
            goto LAB_0010c434;
          }
          if (lVar12 < *(long *)(lVar10 + -8)) {
            iVar15 = iVar15 + 5;
            StringBuilder::append((String *)local_98);
            StringBuilder::append((char *)local_98);
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            break;
          }
        }
LAB_0010c415:
        lVar10 = *(long *)(lVar10 + -8);
LAB_0010c434:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      case 2:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        Variant::get_type_name
                  ((GDScript *)&local_a8,
                   *(undefined4 *)(*(long *)(this + 0x2c8) + 8 + (lVar12 + 1) * 4));
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 4;
        break;
      case 3:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        GDScriptFunction::get_constant((int)local_58);
        local_c0 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar7 = local_c0;
        if (pOVar8 != local_c0) {
          if (pOVar8 == (Object *)0x0) {
            if (local_c0 != (Object *)0x0) {
              local_c0 = (Object *)0x0;
LAB_0010bf7b:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
            if (pOVar7 != pOVar8) {
              local_c0 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_c0 = (Object *)0x0;
              }
              if (pOVar7 != (Object *)0x0) goto LAB_0010bf7b;
            }
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar2 = *(undefined4 *)(*(long *)(this + 0x2c8) + 0xc + (lVar12 + 1) * 4);
        GDScriptFunction::get_global_name((int)&local_b8);
        if (local_c0 == (Object *)0x0) {
LAB_0010bffe:
          if (local_b8 == 0) {
            Variant::get_type_name((GDScript *)&local_a8,uVar2);
            StringBuilder::append((String *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          else {
            pOVar7 = *(Object **)(local_b8 + 8);
            local_b0 = (Object *)0x0;
            if (pOVar7 == (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
            }
            else {
              local_a0 = strlen((char *)pOVar7);
              local_a8 = pOVar7;
              String::parse_latin1((StrRange *)&local_b0);
            }
            StringBuilder::append((String *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
        }
        else {
          if (*(code **)(*(long *)local_c0 + 0x278) == GDScript::is_valid) {
            OVar6 = local_c0[0x241];
          }
          else {
            OVar6 = (Object)(**(code **)(*(long *)local_c0 + 0x278))();
          }
          if (OVar6 == (Object)0x0) goto LAB_0010bffe;
          StringBuilder::append((char *)local_98);
          GDScript::debug_get_script_name((Ref *)&local_a8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          StringBuilder::append((char *)local_98);
        }
        StringBuilder::append((char *)local_98);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        if (((local_c0 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_c0, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_c0), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        iVar15 = iVar15 + 6;
        break;
      case 4:
        StringBuilder::append((char *)local_98);
        lVar12 = (lVar12 + 1) * 4;
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        GDScriptFunction::get_constant((int)local_58);
        local_d0 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar7 = local_d0;
        if (pOVar8 != local_d0) {
          if (pOVar8 == (Object *)0x0) {
            if (local_d0 != (Object *)0x0) {
              local_d0 = (Object *)0x0;
LAB_00100fd9:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
            if (pOVar7 != pOVar8) {
              local_d0 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_d0 = (Object *)0x0;
              }
              if (pOVar7 != (Object *)0x0) goto LAB_00100fd9;
            }
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar2 = *(undefined4 *)(*(long *)(this + 0x2c8) + 0x10 + lVar12);
        GDScriptFunction::get_global_name((int)&local_c8);
        if (local_d0 == (Object *)0x0) {
LAB_00101061:
          if (local_c8 == (Object *)0x0) {
            Variant::get_type_name((GDScript *)&local_a8,uVar2);
            StringBuilder::append((String *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          else {
            pOVar7 = *(Object **)(local_c8 + 8);
            local_b0 = (Object *)0x0;
            if (pOVar7 == (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_c8 + 0x10));
            }
            else {
              local_a0 = strlen((char *)pOVar7);
              local_a8 = pOVar7;
              String::parse_latin1((StrRange *)&local_b0);
            }
            StringBuilder::append((String *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
        }
        else {
          if (*(code **)(*(long *)local_d0 + 0x278) == GDScript::is_valid) {
            OVar6 = local_d0[0x241];
          }
          else {
            OVar6 = (Object)(**(code **)(*(long *)local_d0 + 0x278))();
          }
          if (OVar6 == (Object)0x0) goto LAB_00101061;
          StringBuilder::append((char *)local_98);
          GDScript::debug_get_script_name((Ref *)&local_a8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          StringBuilder::append((char *)local_98);
        }
        StringBuilder::append((char *)local_98);
        GDScriptFunction::get_constant((int)local_58);
        local_c0 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar7 = local_c0;
        if (pOVar8 != local_c0) {
          if (pOVar8 == (Object *)0x0) {
            if (local_c0 != (Object *)0x0) {
              local_c0 = (Object *)0x0;
LAB_0010116f:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
            if (pOVar7 != pOVar8) {
              local_c0 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_c0 = (Object *)0x0;
              }
              if (pOVar7 != (Object *)0x0) goto LAB_0010116f;
            }
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar2 = *(undefined4 *)(*(long *)(this + 0x2c8) + 0x18 + lVar12);
        GDScriptFunction::get_global_name((int)&local_b8);
        if (local_c0 == (Object *)0x0) {
LAB_001011f0:
          if (local_b8 == 0) {
            Variant::get_type_name((GDScript *)&local_a8,uVar2);
            StringBuilder::append((String *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          else {
            pOVar7 = *(Object **)(local_b8 + 8);
            local_b0 = (Object *)0x0;
            if (pOVar7 == (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
            }
            else {
              local_a0 = strlen((char *)pOVar7);
              local_a8 = pOVar7;
              String::parse_latin1((StrRange *)&local_b0);
            }
            StringBuilder::append((String *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
        }
        else {
          if (*(code **)(*(long *)local_c0 + 0x278) == GDScript::is_valid) {
            OVar6 = local_c0[0x241];
          }
          else {
            OVar6 = (Object)(**(code **)(*(long *)local_c0 + 0x278))();
          }
          if (OVar6 == (Object)0x0) goto LAB_001011f0;
          StringBuilder::append((char *)local_98);
          GDScript::debug_get_script_name((Ref *)&local_a8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          StringBuilder::append((char *)local_98);
        }
        StringBuilder::append((char *)local_98);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        if (((local_c0 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_c0, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_c0), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
          StringName::unref();
        }
        if (((local_d0 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_d0, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_d0), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        iVar15 = iVar15 + 9;
        break;
      case 5:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        GDScriptFunction::get_global_name((int)&local_b8);
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        iVar15 = iVar15 + 4;
        break;
      case 6:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 4;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 7:
        iVar15 = iVar15 + 4;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 8:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 9:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 10:
        iVar15 = iVar15 + 4;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        break;
      case 0xb:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        break;
      case 0xc:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        break;
      case 0xd:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + 8 + (lVar12 + 1) * 4) * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        iVar15 = iVar15 + 4;
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0xe:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        lVar10 = *(long *)(this + 0x378);
        lVar12 = (long)*(int *)(*(long *)(this + 0x2c8) + 8 + (lVar12 + 1) * 4);
        if (lVar12 < 0) goto LAB_0010c40c;
        if (lVar10 == 0) goto LAB_0010c6e0;
        if (*(long *)(lVar10 + -8) <= lVar12) goto LAB_0010c415;
        iVar15 = iVar15 + 4;
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0xf:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + 4 + (lVar12 + 2) * 4) * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_b0 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 4;
        StringBuilder::append((char *)local_98);
        break;
      case 0x10:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        lVar10 = *(long *)(this + 0x388);
        lVar12 = (long)*(int *)(*(long *)(this + 0x2c8) + 4 + (lVar12 + 2) * 4);
        if (lVar12 < 0) goto LAB_0010c40c;
        if (lVar10 == 0) goto LAB_0010c6e0;
        if (*(long *)(lVar10 + -8) <= lVar12) goto LAB_0010c415;
        iVar15 = iVar15 + 4;
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        break;
      case 0x11:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + (lVar12 + 2) * 4) * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_b0 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 3;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x12:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + 4 + (lVar12 + 1) * 4) * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        iVar15 = iVar15 + 3;
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        StringBuilder::append((char *)local_98);
        break;
      case 0x13:
        if (*(int *)(lVar10 + (lVar12 + 2) * 4) == 1) {
          pOVar7 = *(Object **)(this + 0xe8);
          if (pOVar7 != (Object *)0x0) {
            cVar5 = RefCounted::init_ref();
            if (cVar5 != '\0') {
              cVar5 = RefCounted::reference();
              pOVar8 = (Object *)0x0;
              if (cVar5 != '\0') {
                pOVar8 = pOVar7;
              }
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
              goto LAB_00102da5;
            }
            StringBuilder::append((char *)local_98);
            goto LAB_0010c4b5;
          }
          pOVar8 = (Object *)0x0;
          StringBuilder::append((char *)local_98);
          local_b0 = (Object *)0x0;
        }
        else {
          GDScriptFunction::get_constant((int)local_58);
          pOVar8 = (Object *)Variant::get_validated_object();
          if (((pOVar8 != (Object *)0x0) &&
              (pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&GDScript::typeinfo,0),
              pOVar8 != (Object *)0x0)) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            pOVar8 = (Object *)0x0;
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
LAB_00102da5:
          StringBuilder::append((char *)local_98);
          local_b0 = (Object *)0x0;
          if (pOVar8 == (Object *)0x0) {
LAB_0010c4b5:
            local_b0 = (Object *)0x0;
            pOVar8 = (Object *)0x0;
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
            if ((pOVar7 != (Object *)0x0) &&
               (local_b0 = pOVar7, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              local_b0 = (Object *)0x0;
            }
          }
        }
        GDScript::debug_get_script_name((Ref *)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar1 = local_a8 + -0x10;
          *(long *)pOVar1 = *(long *)pOVar1 + -1;
          UNLOCK();
          if (*(long *)pOVar1 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        if (((local_b0 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_b0, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_b0), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))();
          Memory::free_static(pOVar7,false);
        }
        StringBuilder::append((char *)local_98);
        local_b0 = (Object *)0x0;
        if (pOVar8 == (Object *)0x0) {
          local_a0 = 2;
          local_a8 = (Object *)&_LC49;
          String::parse_latin1((StrRange *)&local_b0);
          itos((long)&local_c0);
          operator+((char *)&local_b8,(String *)"[<index ");
          String::operator+((String *)&local_a8,(String *)&local_b8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          StringBuilder::append((char *)local_98);
          _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
        else {
          local_a0 = 2;
          local_a8 = (Object *)&_LC44;
          String::parse_latin1((StrRange *)&local_b0);
          GDScript::debug_get_static_var_by_index((int)&local_c8);
          if (local_c8 == (Object *)0x0) {
            local_c0 = (Object *)0x0;
          }
          else {
            pOVar7 = *(Object **)(local_c8 + 8);
            local_c0 = (Object *)0x0;
            if (pOVar7 == (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_c8 + 0x10));
            }
            else {
              local_a0 = strlen((char *)pOVar7);
              local_a8 = pOVar7;
              String::parse_latin1((StrRange *)&local_c0);
            }
          }
          local_120 = (CowData<char32_t> *)&local_c0;
          operator+((char *)&local_b8,(String *)&_LC40);
          String::operator+((String *)&local_a8,(String *)&local_b8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref(local_120);
          if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          StringBuilder::append((char *)local_98);
          _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
        iVar15 = iVar15 + 4;
        break;
      case 0x14:
        if (*(int *)(lVar10 + (lVar12 + 2) * 4) == 1) {
          pOVar7 = *(Object **)(this + 0xe8);
          if ((pOVar7 == (Object *)0x0) || (cVar5 = RefCounted::init_ref(), cVar5 == '\0')) {
            pOVar8 = (Object *)0x0;
          }
          else {
            cVar5 = RefCounted::reference();
            pOVar8 = (Object *)0x0;
            if (cVar5 != '\0') {
              pOVar8 = pOVar7;
            }
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        else {
          GDScriptFunction::get_constant((int)local_58);
          pOVar8 = (Object *)Variant::get_validated_object();
          if (((pOVar8 != (Object *)0x0) &&
              (pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&GDScript::typeinfo,0),
              pOVar8 != (Object *)0x0)) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            pOVar8 = (Object *)0x0;
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        local_b0 = (Object *)0x0;
        if (pOVar8 == (Object *)0x0) {
          GDScript::debug_get_script_name((Ref *)&local_a8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if (local_b0 != (Object *)0x0) goto LAB_0010328d;
          StringBuilder::append((char *)local_98);
LAB_0010c72e:
          local_b0 = (Object *)0x0;
          local_a8 = (Object *)&_LC49;
          local_a0 = 2;
          String::parse_latin1((StrRange *)&local_b0);
          itos((long)&local_c0);
          operator+((char *)&local_b8,(String *)"[<index ");
          String::operator+((String *)&local_a8,(String *)&local_b8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        else {
          pOVar7 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
          if ((pOVar7 != (Object *)0x0) &&
             (local_b0 = pOVar7, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            local_b0 = (Object *)0x0;
          }
          GDScript::debug_get_script_name((Ref *)&local_a8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if (local_b0 == (Object *)0x0) {
            StringBuilder::append((char *)local_98);
          }
          else {
LAB_0010328d:
            cVar5 = RefCounted::unreference();
            pOVar7 = local_b0;
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_b0), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))();
              Memory::free_static(pOVar7,false);
            }
            StringBuilder::append((char *)local_98);
            if (pOVar8 == (Object *)0x0) goto LAB_0010c72e;
          }
          local_b0 = (Object *)0x0;
          local_a8 = (Object *)&_LC44;
          local_a0 = 2;
          String::parse_latin1((StrRange *)&local_b0);
          GDScript::debug_get_static_var_by_index((int)&local_c8);
          if (local_c8 == (Object *)0x0) {
            local_c0 = (Object *)0x0;
          }
          else {
            pOVar7 = *(Object **)(local_c8 + 8);
            local_c0 = (Object *)0x0;
            if (pOVar7 == (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_c8 + 0x10));
            }
            else {
              local_a0 = strlen((char *)pOVar7);
              local_a8 = pOVar7;
              String::parse_latin1((StrRange *)&local_c0);
            }
          }
          local_120 = (CowData<char32_t> *)&local_c0;
          operator+((char *)&local_b8,(String *)&_LC40);
          String::operator+((String *)&local_a8,(String *)&local_b8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref(local_120);
          if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
        iVar15 = iVar15 + 4;
        break;
      case 0x15:
        iVar15 = iVar15 + 3;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x16:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        break;
      case 0x17:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        break;
      case 0x18:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        break;
      case 0x19:
        StringBuilder::append((char *)local_98);
        Variant::get_type_name
                  ((GDScript *)&local_a8,*(undefined4 *)(*(long *)(this + 0x2c8) + (lVar12 + 3) * 4)
                  );
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 4;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x1a:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 6;
        break;
      case 0x1b:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 9;
        break;
      case 0x1c:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 4;
        break;
      case 0x1d:
        GDScriptFunction::get_constant((int)local_58);
        local_b0 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar7 = local_b0;
        if (pOVar8 != local_b0) {
          if (pOVar8 == (Object *)0x0) {
            if (local_b0 != (Object *)0x0) {
              local_b0 = (Object *)0x0;
LAB_0010257e:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
            if (pOVar7 != pOVar8) {
              local_b0 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_b0 = (Object *)0x0;
              }
              if (pOVar7 != (Object *)0x0) goto LAB_0010257e;
            }
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        StringBuilder::append((char *)local_98);
        GDScript::debug_get_script_name((Ref *)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        if (((local_b0 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_b0, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_b0), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        iVar15 = iVar15 + 4;
        break;
      case 0x1e:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        Variant::get_type_name
                  ((GDScript *)&local_a8,
                   *(undefined4 *)(*(long *)(this + 0x2c8) + -4 + (lVar12 + 2) * 4));
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 4;
        break;
      case 0x1f:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 4;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x20:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 4;
        break;
      case 0x21:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        uVar2 = *(undefined4 *)(lVar10 + (long)(iVar15 + 4 + iVar11) * 4);
        iVar14 = *(int *)(lVar10 + (long)(iVar15 + 2 + iVar11) * 4);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        local_a8 = (Object *)&_LC68;
        local_b0 = (Object *)0x0;
        local_a0 = 1;
        String::parse_latin1((StrRange *)&local_b0);
        Variant::get_type_name((String *)&local_b8,uVar2);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar13 = 0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar13 = iVar13 + 1;
            if (iVar14 == iVar13) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 4 + iVar11;
        break;
      case 0x22:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        iVar14 = *(int *)(lVar10 + (long)(iVar11 + iVar15 + 2) * 4);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        lVar12 = (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 4 + iVar14) * 4);
        lVar10 = *(long *)(this + 0x3a8);
        if (lVar12 < 0) goto LAB_0010c40c;
        if (lVar10 == 0) goto LAB_0010c6e0;
        if (*(long *)(lVar10 + -8) <= lVar12) goto LAB_0010c415;
        iVar13 = 0;
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar13 = iVar13 + 1;
            if (iVar14 == iVar13) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 4 + iVar11;
        break;
      case 0x23:
        iVar11 = *(int *)(lVar10 + (long)(*(int *)(lVar10 + (long)(iVar15 + 1) * 4) + iVar15 + 2) *
                                   4);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar14 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 4 + iVar11;
        break;
      case 0x24:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 2 + *(int *)(lVar10 + (long)(iVar15 + 1) * 4)) *
                                   4);
        GDScriptFunction::get_constant((int)local_58);
        local_d8 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar7 = local_d8;
        if (pOVar8 != local_d8) {
          if (pOVar8 == (Object *)0x0) {
            if (local_d8 != (Object *)0x0) {
              local_d8 = (Object *)0x0;
LAB_001020d5:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
            if (pOVar7 != pOVar8) {
              local_d8 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_d8 = (Object *)0x0;
              }
              if (pOVar7 != (Object *)0x0) goto LAB_001020d5;
            }
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        GDScriptFunction::get_global_name((int)&local_d0);
        local_c8 = (Object *)0x0;
        if (local_d8 == (Object *)0x0) {
LAB_00102164:
          if (local_d0 == (Object *)0x0) {
            Variant::get_type_name((GDScript *)&local_a8);
            pOVar7 = local_c8;
            if (local_c8 != local_a8) {
              pOVar8 = local_a8;
              if (local_c8 != (Object *)0x0) {
                LOCK();
                local_c8 = local_c8 + -0x10;
                *(long *)local_c8 = *(long *)local_c8 + -1;
                UNLOCK();
                if (*(long *)local_c8 == 0) {
                  local_c8 = (Object *)0x0;
                  Memory::free_static(pOVar7 + -0x10,false);
                  pOVar8 = local_a8;
                }
              }
              local_a8 = (Object *)0x0;
              local_c8 = pOVar8;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          else {
            pOVar7 = *(Object **)(local_d0 + 8);
            local_b0 = (Object *)0x0;
            if (pOVar7 == (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_d0 + 0x10));
            }
            else {
              local_a0 = strlen((char *)pOVar7);
              local_a8 = pOVar7;
              String::parse_latin1((StrRange *)&local_b0);
            }
            pOVar7 = local_c8;
            if (local_c8 != local_b0) {
              pOVar8 = local_b0;
              if (local_c8 != (Object *)0x0) {
                LOCK();
                local_c8 = local_c8 + -0x10;
                *(long *)local_c8 = *(long *)local_c8 + -1;
                UNLOCK();
                if (*(long *)local_c8 == 0) {
                  local_c8 = (Object *)0x0;
                  Memory::free_static(pOVar7 + -0x10,false);
                  pOVar8 = local_b0;
                }
              }
              local_b0 = (Object *)0x0;
              local_c8 = pOVar8;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
        }
        else {
          if (*(code **)(*(long *)local_d8 + 0x278) == GDScript::is_valid) {
            OVar6 = local_d8[0x241];
          }
          else {
            OVar6 = (Object)(**(code **)(*(long *)local_d8 + 0x278))();
          }
          if (OVar6 == (Object)0x0) goto LAB_00102164;
          local_b0 = (Object *)0x0;
          local_a8 = (Object *)&_LC3;
          local_a0 = 1;
          String::parse_latin1((StrRange *)&local_b0);
          GDScript::debug_get_script_name((Ref *)&local_c0);
          operator+((char *)&local_b8,(String *)"script(");
          String::operator+((String *)&local_a8,(String *)&local_b8);
          pOVar7 = local_c8;
          if (local_c8 != local_a8) {
            pOVar8 = local_a8;
            if (local_c8 != (Object *)0x0) {
              LOCK();
              local_c8 = local_c8 + -0x10;
              *(long *)local_c8 = *(long *)local_c8 + -1;
              UNLOCK();
              if (*(long *)local_c8 == 0) {
                local_c8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
                pOVar8 = local_a8;
              }
            }
            local_a8 = (Object *)0x0;
            local_c8 = pOVar8;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        iVar14 = 0;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if ((StringName::configured != '\0') && (local_d0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (((local_d8 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_d8, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_d8), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        iVar15 = iVar11 + 6 + iVar15 + 1;
        break;
      case 0x25:
        iVar11 = *(int *)(lVar10 + (long)(*(int *)(lVar10 + (long)(iVar15 + 1) * 4) + iVar15 + 2) *
                                   4);
        StringBuilder::append((char *)local_98);
        iVar14 = 0;
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            StringBuilder::append((char *)local_98);
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar11 * 2 + 3 + iVar15 + 1;
        break;
      case 0x26:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 2 + *(int *)(lVar10 + (long)(iVar15 + 1) * 4)) *
                                   4);
        GDScriptFunction::get_constant((int)local_58);
        local_f0 = (Object *)0x0;
        lVar12 = Variant::get_validated_object();
        if ((((lVar12 != 0) && (lVar12 != 0)) &&
            (pOVar7 = (Object *)__dynamic_cast(lVar12,&Object::typeinfo,&Script::typeinfo,0),
            pOVar7 != (Object *)0x0)) &&
           ((local_f0 = pOVar7, pOVar7 != (Object *)0x0 &&
            (cVar5 = RefCounted::reference(), cVar5 == '\0')))) {
          local_f0 = (Object *)0x0;
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        GDScriptFunction::get_global_name((int)&local_e8);
        local_e0 = (Object *)0x0;
        if (local_f0 == (Object *)0x0) {
LAB_00103904:
          if (local_e8 == 0) {
            Variant::get_type_name((GDScript *)&local_a8);
            pOVar7 = local_e0;
            if (local_e0 != local_a8) {
              pOVar8 = local_a8;
              if (local_e0 != (Object *)0x0) {
                LOCK();
                local_e0 = local_e0 + -0x10;
                *(long *)local_e0 = *(long *)local_e0 + -1;
                UNLOCK();
                if (*(long *)local_e0 == 0) {
                  local_e0 = (Object *)0x0;
                  Memory::free_static(pOVar7 + -0x10,false);
                  pOVar8 = local_a8;
                }
              }
              local_a8 = (Object *)0x0;
              local_e0 = pOVar8;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          else {
            pOVar7 = *(Object **)(local_e8 + 8);
            local_b0 = (Object *)0x0;
            if (pOVar7 == (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_e8 + 0x10));
            }
            else {
              local_a0 = strlen((char *)pOVar7);
              local_a8 = pOVar7;
              String::parse_latin1((StrRange *)&local_b0);
            }
            pOVar7 = local_e0;
            if (local_e0 != local_b0) {
              pOVar8 = local_b0;
              if (local_e0 != (Object *)0x0) {
                LOCK();
                local_e0 = local_e0 + -0x10;
                *(long *)local_e0 = *(long *)local_e0 + -1;
                UNLOCK();
                if (*(long *)local_e0 == 0) {
                  local_e0 = (Object *)0x0;
                  Memory::free_static(pOVar7 + -0x10,false);
                  pOVar8 = local_b0;
                }
              }
              local_b0 = (Object *)0x0;
              local_e0 = pOVar8;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
        }
        else {
          if (*(code **)(*(long *)local_f0 + 0x278) == GDScript::is_valid) {
            OVar6 = local_f0[0x241];
          }
          else {
            OVar6 = (Object)(**(code **)(*(long *)local_f0 + 0x278))();
          }
          if (OVar6 == (Object)0x0) goto LAB_00103904;
          local_b0 = (Object *)0x0;
          local_a8 = (Object *)&_LC3;
          local_a0 = 1;
          String::parse_latin1((StrRange *)&local_b0);
          GDScript::debug_get_script_name((Ref *)&local_c0);
          operator+((char *)&local_b8,(String *)"script(");
          String::operator+((String *)&local_a8,(String *)&local_b8);
          pOVar7 = local_e0;
          if (local_e0 != local_a8) {
            pOVar8 = local_a8;
            if (local_e0 != (Object *)0x0) {
              LOCK();
              local_e0 = local_e0 + -0x10;
              *(long *)local_e0 = *(long *)local_e0 + -1;
              UNLOCK();
              if (*(long *)local_e0 == 0) {
                local_e0 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
                pOVar8 = local_a8;
              }
            }
            local_a8 = (Object *)0x0;
            local_e0 = pOVar8;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        GDScriptFunction::get_constant((int)local_58);
        local_d8 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar7 = local_d8;
        if (pOVar8 != local_d8) {
          if (pOVar8 == (Object *)0x0) {
            if (local_d8 != (Object *)0x0) {
              local_d8 = (Object *)0x0;
LAB_00103a29:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
            if (pOVar7 != pOVar8) {
              local_d8 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_d8 = (Object *)0x0;
              }
              if (pOVar7 != (Object *)0x0) goto LAB_00103a29;
            }
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        GDScriptFunction::get_global_name((int)&local_d0);
        local_c8 = (Object *)0x0;
        if (local_d8 == (Object *)0x0) {
LAB_00103ab6:
          if (local_d0 == (Object *)0x0) {
            Variant::get_type_name((GDScript *)&local_a8);
            pOVar7 = local_c8;
            if (local_c8 != local_a8) {
              pOVar8 = local_a8;
              if (local_c8 != (Object *)0x0) {
                LOCK();
                local_c8 = local_c8 + -0x10;
                *(long *)local_c8 = *(long *)local_c8 + -1;
                UNLOCK();
                if (*(long *)local_c8 == 0) {
                  local_c8 = (Object *)0x0;
                  Memory::free_static(pOVar7 + -0x10,false);
                  pOVar8 = local_a8;
                }
              }
              local_a8 = (Object *)0x0;
              local_c8 = pOVar8;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          else {
            pOVar7 = *(Object **)(local_d0 + 8);
            local_b0 = (Object *)0x0;
            if (pOVar7 == (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_d0 + 0x10));
            }
            else {
              local_a0 = strlen((char *)pOVar7);
              local_a8 = pOVar7;
              String::parse_latin1((StrRange *)&local_b0);
            }
            pOVar7 = local_c8;
            if (local_c8 != local_b0) {
              pOVar8 = local_b0;
              if (local_c8 != (Object *)0x0) {
                LOCK();
                local_c8 = local_c8 + -0x10;
                *(long *)local_c8 = *(long *)local_c8 + -1;
                UNLOCK();
                if (*(long *)local_c8 == 0) {
                  local_c8 = (Object *)0x0;
                  Memory::free_static(pOVar7 + -0x10,false);
                  pOVar8 = local_b0;
                }
              }
              local_b0 = (Object *)0x0;
              local_c8 = pOVar8;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
        }
        else {
          if (*(code **)(*(long *)local_d8 + 0x278) == GDScript::is_valid) {
            OVar6 = local_d8[0x241];
          }
          else {
            OVar6 = (Object)(**(code **)(*(long *)local_d8 + 0x278))();
          }
          if (OVar6 == (Object)0x0) goto LAB_00103ab6;
          local_b0 = (Object *)0x0;
          local_a8 = (Object *)&_LC3;
          local_a0 = 1;
          String::parse_latin1((StrRange *)&local_b0);
          GDScript::debug_get_script_name((Ref *)&local_c0);
          operator+((char *)&local_b8,(String *)"script(");
          String::operator+((String *)&local_a8,(String *)&local_b8);
          pOVar7 = local_c8;
          if (local_c8 != local_a8) {
            pOVar8 = local_a8;
            if (local_c8 != (Object *)0x0) {
              LOCK();
              local_c8 = local_c8 + -0x10;
              *(long *)local_c8 = *(long *)local_c8 + -1;
              UNLOCK();
              if (*(long *)local_c8 == 0) {
                local_c8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
                pOVar8 = local_a8;
              }
            }
            local_a8 = (Object *)0x0;
            local_c8 = pOVar8;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        iVar14 = 0;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            StringBuilder::append((char *)local_98);
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        pOVar7 = local_c8;
        if (local_c8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_c8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_c8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        if ((StringName::configured != '\0') && (local_d0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (((local_d8 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_d8, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_d8), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        if ((StringName::configured != '\0') && (local_e8 != 0)) {
          StringName::unref();
        }
        if (((local_f0 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_f0), cVar5 != '\0')) {
          (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
          Memory::free_static(local_f0,false);
        }
        iVar15 = iVar11 * 2 + 9 + iVar15 + 1;
        break;
      case 0x27:
      case 0x28:
      case 0x29:
        iVar14 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        lVar12 = (long)(iVar14 + iVar15 + 2);
        if (iVar11 == 0x28) {
          StringBuilder::append((char *)local_98);
          iVar11 = *(int *)(*(long *)(this + 0x2c8) + lVar12 * 4);
LAB_0010c950:
          local_b0 = (Object *)0x0;
          local_a8 = (Object *)&_LC19;
          local_a0 = 3;
          String::parse_latin1((StrRange *)&local_b0);
          _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
          String::operator+((String *)&local_a8,(String *)&local_b8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        else {
          if (iVar11 == 0x29) {
            StringBuilder::append((char *)local_98);
            iVar11 = *(int *)(*(long *)(this + 0x2c8) + lVar12 * 4);
            goto LAB_0010c950;
          }
          StringBuilder::append((char *)local_98);
          iVar11 = *(int *)(*(long *)(this + 0x2c8) + lVar12 * 4);
        }
        local_140 = (GDScript *)&local_b8;
        local_b0 = (Object *)0x0;
        local_a8 = (Object *)&_LC80;
        local_a0 = 1;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address(local_140,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)local_140);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        lVar12 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar3 = (long *)(local_b8 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          plVar3 = (long *)((long)local_b0 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static((void *)((long)pOVar7 + -0x10),false);
          }
        }
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar14 + iVar15 + 3) * 4)
                          * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        iVar14 = 0;
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar14 == iVar11) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 6 + iVar11;
        break;
      case 0x2a:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        StringBuilder::append((char *)local_98);
        iVar14 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar11) * 4);
        local_a8 = (Object *)&_LC19;
        local_b0 = (Object *)0x0;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 3 + iVar11) * 4)
                          * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_b0 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar11 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar11 = iVar11 + 1;
            if (iVar14 == iVar11) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar14;
        break;
      case 0x2b:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        StringBuilder::append((char *)local_98);
        iVar11 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar11) * 4);
        local_a8 = (Object *)&_LC19;
        local_b0 = (Object *)0x0;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        lVar12 = (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 4 + iVar11) * 4);
        lVar10 = *(long *)(this + 0x3b8);
        if (lVar12 < 0) goto LAB_0010c40c;
        if (lVar10 == 0) goto LAB_0010c6e0;
        if (*(long *)(lVar10 + -8) <= lVar12) goto LAB_0010c415;
        iVar14 = 0;
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar11;
        break;
      case 0x2c:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        StringBuilder::append((char *)local_98);
        iVar11 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar11) * 4);
        local_a8 = (Object *)&_LC19;
        local_b0 = (Object *)0x0;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        lVar12 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar3 = (long *)(local_b8 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        lVar12 = (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 4 + iVar11) * 4);
        lVar10 = *(long *)(this + 0x3c8);
        if (lVar12 < 0) goto LAB_0010c40c;
        if (lVar10 == 0) goto LAB_0010c6e0;
        if (*(long *)(lVar10 + -8) <= lVar12) goto LAB_0010c415;
        iVar14 = 0;
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar11;
        break;
      case 0x2d:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 2 + *(int *)(lVar10 + (long)(iVar15 + 1) * 4)) *
                                   4);
        StringBuilder::append((char *)local_98);
        local_a8 = (Object *)&_LC19;
        local_b0 = (Object *)0x0;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        lVar12 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar3 = (long *)(local_b8 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_a8 = (Object *)&_LC80;
        local_b0 = (Object *)0x0;
        local_a0 = 1;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        lVar12 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar3 = (long *)(local_b8 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        lVar12 = (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 5 + iVar11) * 4);
        lVar10 = *(long *)(this + 0x398);
        if (lVar12 < 0) goto LAB_0010c40c;
        if (lVar10 == 0) goto LAB_0010c6e0;
        if (*(long *)(lVar10 + -8) <= lVar12) goto LAB_0010c415;
        iVar14 = 0;
        StringBuilder::append((String *)local_98);
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 6 + iVar11;
        break;
      case 0x2e:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        StringBuilder::append((char *)local_98);
        iVar14 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar11) * 4);
        local_b0 = (Object *)0x0;
        local_a8 = (Object *)&_LC19;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 3 + iVar11) * 4)
                          * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_b0 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar11 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar11 = iVar11 + 1;
            if (iVar14 == iVar11) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar14;
        break;
      case 0x2f:
      case 0x30:
        iVar14 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        if (iVar11 == 0x30) {
          StringBuilder::append((char *)local_98);
        }
        else {
          StringBuilder::append((char *)local_98);
        }
        iVar14 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar14) * 4);
        if (iVar11 == 0x30) {
          local_a8 = (Object *)&_LC19;
          local_b0 = (Object *)0x0;
          local_a0 = 3;
          String::parse_latin1((StrRange *)&local_b0);
          _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
          String::operator+((String *)&local_a8,(String *)&local_b8);
          StringBuilder::append((String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        local_a8 = (Object *)&_LC80;
        local_b0 = (Object *)0x0;
        local_a0 = 1;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          plVar3 = (long *)((long)local_b0 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static((void *)((long)pOVar7 + -0x10),false);
          }
        }
        MethodBind::get_name();
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        iVar11 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar11 = iVar11 + 1;
            if (iVar14 == iVar11) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 6 + iVar14;
        break;
      case 0x31:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        uVar2 = *(undefined4 *)(lVar10 + (long)(iVar15 + 2 + iVar11) * 4);
        iVar14 = *(int *)(lVar10 + (long)(iVar15 + 4 + iVar11) * 4);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        Variant::get_type_name((GDScript *)&local_a8,uVar2);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 3 + iVar11) * 4)
                          * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_b0 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar11 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar11 = iVar11 + 1;
            if (iVar14 == iVar11) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 6 + iVar14;
        break;
      case 0x32:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        lVar12 = *(long *)(*(long *)(this + 0x340) +
                          (long)*(int *)(lVar10 + (long)(iVar15 + 2 + iVar11) * 4) * 8);
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 3 + iVar11) * 4);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        StringName::StringName((StringName *)&local_b8,(StringName *)(lVar12 + 0x18));
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        StringBuilder::append((char *)local_98);
        MethodBind::get_name();
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        iVar14 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar11;
        break;
      case 0x33:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        StringBuilder::append((char *)local_98);
        lVar12 = *(long *)(*(long *)(this + 0x340) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 3 + iVar11) * 4)
                          * 8);
        iVar11 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar11) * 4);
        local_b0 = (Object *)0x0;
        local_a8 = (Object *)&_LC19;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        StringName::StringName((StringName *)&local_b8,(StringName *)(lVar12 + 0x18));
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        StringBuilder::append((char *)local_98);
        MethodBind::get_name();
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_b0 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        iVar14 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar11;
        break;
      case 0x34:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        StringBuilder::append((char *)local_98);
        iVar14 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar11) * 4);
        StringName::StringName
                  ((StringName *)&local_b8,
                   (StringName *)
                   (*(long *)(*(long *)(this + 0x340) +
                             (long)*(int *)(*(long *)(this + 0x2c8) +
                                           (long)(iVar15 + 3 + iVar11) * 4) * 8) + 0x18));
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        StringBuilder::append((char *)local_98);
        MethodBind::get_name();
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        iVar11 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar11 = iVar11 + 1;
            if (iVar14 == iVar11) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar14;
        break;
      case 0x35:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        StringBuilder::append((char *)local_98);
        iVar11 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar11) * 4);
        local_a8 = (Object *)&_LC19;
        local_b0 = (Object *)0x0;
        local_a0 = 3;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_a8 = (Object *)&_LC80;
        local_b0 = (Object *)0x0;
        local_a0 = 1;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        MethodBind::get_name();
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        iVar14 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 6 + iVar11;
        break;
      case 0x36:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        StringBuilder::append((char *)local_98);
        iVar11 = *(int *)(*(long *)(this + 0x2c8) + (long)(iVar15 + 2 + iVar11) * 4);
        local_b0 = (Object *)0x0;
        local_a8 = (Object *)&_LC80;
        local_a0 = 1;
        String::parse_latin1((StrRange *)&local_b0);
        _disassemble_address((GDScript *)&local_b8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        lVar12 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar3 = (long *)(local_b8 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        MethodBind::get_name();
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(local_b8 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        iVar14 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar11) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar14 = iVar14 + 1;
            if (iVar11 == iVar14) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 6 + iVar11;
        break;
      case 0x37:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x38:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x39:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        iVar14 = *(int *)(lVar10 + (long)(iVar15 + 2 + iVar11) * 4);
        plVar3 = *(long **)(*(long *)(this + 0x348) +
                           (long)*(int *)(lVar10 + (long)(iVar15 + 3 + iVar11) * 4) * 8);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        lVar12 = *plVar3;
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        iVar11 = 0;
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        StringBuilder::append((char *)local_98);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar11 = iVar11 + 1;
            if (iVar14 == iVar11) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar14;
        break;
      case 0x3a:
        iVar11 = *(int *)(lVar10 + (long)(iVar15 + 1) * 4);
        iVar14 = *(int *)(lVar10 + (long)(iVar15 + 2 + iVar11) * 4);
        plVar3 = *(long **)(*(long *)(this + 0x348) +
                           (long)*(int *)(lVar10 + (long)(iVar15 + 3 + iVar11) * 4) * 8);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        lVar12 = *plVar3;
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        StringBuilder::append((String *)local_98);
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_b0 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar11 = 0;
        StringBuilder::append((char *)local_98);
        if (0 < iVar14) {
          while( true ) {
            _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
            StringBuilder::append((String *)local_98);
            pOVar7 = local_a8;
            if (local_a8 != (Object *)0x0) {
              LOCK();
              pOVar8 = local_a8 + -0x10;
              *(long *)pOVar8 = *(long *)pOVar8 + -1;
              UNLOCK();
              if (*(long *)pOVar8 == 0) {
                local_a8 = (Object *)0x0;
                Memory::free_static(pOVar7 + -0x10,false);
              }
            }
            iVar11 = iVar11 + 1;
            if (iVar14 == iVar11) break;
            StringBuilder::append((char *)local_98);
          }
        }
        StringBuilder::append((char *)local_98);
        iVar15 = iVar15 + 5 + iVar14;
        break;
      case 0x3b:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x3c:
        iVar15 = iVar15 + 3;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x3d:
        iVar15 = iVar15 + 3;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x3e:
        iVar15 = iVar15 + 1;
        StringBuilder::append((char *)local_98);
        break;
      case 0x3f:
        iVar15 = iVar15 + 3;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x40:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x41:
        iVar15 = iVar15 + 3;
        StringBuilder::append((char *)local_98);
        Variant::get_type_name
                  ((GDScript *)&local_a8,*(undefined4 *)(*(long *)(this + 0x2c8) + (lVar12 + 2) * 4)
                  );
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x42:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x43:
        iVar15 = iVar15 + 8;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x44:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 3;
        break;
      case 0x45:
        GDScriptFunction::get_constant((int)local_58);
        local_b0 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar7 = local_b0;
        if (pOVar8 != local_b0) {
          if (pOVar8 == (Object *)0x0) {
            if (local_b0 != (Object *)0x0) {
              local_b0 = (Object *)0x0;
LAB_0010690d:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Script::typeinfo,0);
            if (pOVar7 != pOVar8) {
              local_b0 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_b0 = (Object *)0x0;
              }
              if (pOVar7 != (Object *)0x0) goto LAB_0010690d;
            }
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        StringBuilder::append((char *)local_98);
        GDScript::debug_get_script_name((Ref *)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (((local_b0 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_b0, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_b0), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        iVar15 = iVar15 + 3;
        break;
      case 0x46:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x47:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x48:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x49:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x4a:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x4b:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x4c:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x4d:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x4e:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x4f:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x50:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x51:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x52:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x53:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x54:
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x55:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x56:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x57:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x58:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x59:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x5a:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x5b:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x5c:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x5d:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x5e:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x5f:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x60:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x61:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x62:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 99:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 100:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x65:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x66:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x67:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x68:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x69:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x6a:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x6b:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x6c:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x6d:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x6e:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x6f:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        itos((long)&local_a8);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 5;
        break;
      case 0x70:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        String::num_int64((long)&local_a8,*(int *)(*(long *)(this + 0x2c8) + 4 + (lVar12 + 1) * 4),
                          true);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 3;
        break;
      case 0x71:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        lVar12 = *(long *)(*(long *)(this + 0x2e0) +
                          (long)*(int *)(*(long *)(this + 0x2c8) + 4 + (lVar12 + 1) * 4) * 8);
        if (lVar12 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          pOVar7 = *(Object **)(lVar12 + 8);
          local_b0 = (Object *)0x0;
          if (pOVar7 == (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar12 + 0x10));
          }
          else {
            local_a0 = strlen((char *)pOVar7);
            local_a8 = pOVar7;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        iVar15 = iVar15 + 3;
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        break;
      case 0x72:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x73:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x74:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x75:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x76:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x77:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x78:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x79:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x7a:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x7b:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x7c:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x7d:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x7e:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x7f:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x80:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x81:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x82:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x83:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x84:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x85:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x86:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x87:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x88:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x89:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x8a:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x8b:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x8c:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x8d:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x8e:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x8f:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x90:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x91:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x92:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x93:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x94:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x95:
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        break;
      case 0x96:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x97:
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 2;
        break;
      case 0x98:
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        StringBuilder::append((char *)local_98);
        _disassemble_address((GDScript *)&local_a8,*(GDScriptFunction **)(this + 0xe8),iVar9);
        StringBuilder::append((String *)local_98);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        iVar15 = iVar15 + 3;
        StringBuilder::append((char *)local_98);
        break;
      case 0x99:
        iVar15 = iVar15 + 1;
        StringBuilder::append((char *)local_98);
        break;
      case 0x9a:
        iVar11 = *(int *)(lVar10 + 4 + lVar12 * 4) + -1;
        if (-1 < iVar11) {
          lVar12 = (long)iVar11;
          if ((*(long *)(param_1 + 8) != 0) && (lVar12 < *(long *)(*(long *)(param_1 + 8) + -8))) {
            StringBuilder::append((char *)local_98);
            itos((long)&local_a8);
            StringBuilder::append((String *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            StringBuilder::append((char *)local_98);
            if (*(long *)(param_1 + 8) == 0) {
              lVar10 = 0;
              goto LAB_0010c434;
            }
            lVar10 = *(long *)(*(long *)(param_1 + 8) + -8);
            if (lVar10 <= lVar12) goto LAB_0010c434;
            iVar15 = iVar15 + 2;
            StringBuilder::append((String *)local_98);
            break;
          }
        }
        iVar15 = iVar15 + 2;
        StringBuilder::append((char *)local_98);
        break;
      case 0x9b:
        iVar15 = iVar15 + 1;
        StringBuilder::append((char *)local_98);
      }
      if (local_98[0] != 0) {
        StringBuilder::as_string();
        Variant::Variant((Variant *)local_58,(String *)&local_b0);
        stringify_variants((Variant *)&local_a8);
        __print_line((String *)&local_a8);
        pOVar7 = local_a8;
        if (local_a8 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_a8 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_a8 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        pOVar7 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar8 = local_b0 + -0x10;
          *(long *)pOVar8 = *(long *)pOVar8 + -1;
          UNLOCK();
          if (*(long *)pOVar8 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar7 + -0x10,false);
          }
        }
      }
      StringBuilder::~StringBuilder((StringBuilder *)local_98);
    } while (iVar15 < *(int *)(this + 0x280));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScript::is_valid() const */

GDScript __thiscall GDScript::is_valid(GDScript *this)

{
  return this[0x241];
}



/* PlaceHolderScriptInstance::get_script() const */

void PlaceHolderScriptInstance::get_script(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x80) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x80);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* StringBuilder::~StringBuilder() */

void __thiscall StringBuilder::~StringBuilder(StringBuilder *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  if (*(void **)(this + 0x30) != (void *)0x0) {
    if (*(int *)(this + 0x28) != 0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    Memory::free_static(*(void **)(this + 0x30),false);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    if (*(int *)(this + 0x18) != 0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
    Memory::free_static(*(void **)(this + 0x20),false);
  }
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 8) != 0) {
    lVar4 = 0;
    do {
      plVar2 = (long *)((long)pvVar5 + lVar4 * 8);
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
        pvVar5 = *(void **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
    if (pvVar5 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar5,false);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)param_1;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)param_1;
    }
    else {
      *(undefined8 *)this = 0;
      lVar2 = *(long *)param_1;
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
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



/* WARNING: Control flow encountered bad instruction data */
/* StringBuilder::~StringBuilder() */

void __thiscall StringBuilder::~StringBuilder(StringBuilder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



