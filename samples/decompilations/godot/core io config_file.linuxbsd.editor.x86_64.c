
/* ConfigFile::has_section(String const&) const */

undefined8 __thiscall ConfigFile::has_section(ConfigFile *this,String *param_1)

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
  
  if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
    uVar11 = String::hash();
    lVar17 = *(long *)(this + 400);
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
                                      (*(long *)(*(long *)(this + 0x188) + lVar15 * 8) + 0x10),
                                      param_1);
          if ((char)uVar12 != '\0') {
            return uVar12;
          }
          lVar17 = *(long *)(this + 400);
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



/* ConfigFile::clear() */

void __thiscall ConfigFile::clear(ConfigFile *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  
  if (*(long *)(this + 0x188) == 0) {
    return;
  }
  if (*(int *)(this + 0x1ac) != 0) {
    lVar7 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(this + 400) + lVar7) != 0) {
          *(int *)(*(long *)(this + 400) + lVar7) = 0;
          pvVar4 = *(void **)(*(long *)(this + 0x188) + lVar7 * 2);
          pvVar8 = *(void **)((long)pvVar4 + 0x20);
          if (pvVar8 != (void *)0x0) {
            if (*(int *)((long)pvVar4 + 0x44) != 0) {
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar4 + 0x40) * 4);
              if (uVar3 == 0) {
                *(undefined4 *)((long)pvVar4 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar4 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar9 = 0;
                do {
                  piVar6 = (int *)(*(long *)((long)pvVar4 + 0x28) + lVar9);
                  if (*piVar6 != 0) {
                    *piVar6 = 0;
                    pvVar8 = *(void **)((long)pvVar8 + lVar9 * 2);
                    if (Variant::needs_deinit[*(int *)((long)pvVar8 + 0x18)] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (*(long *)((long)pvVar8 + 0x10) != 0) {
                      LOCK();
                      plVar1 = (long *)(*(long *)((long)pvVar8 + 0x10) + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        lVar5 = *(long *)((long)pvVar8 + 0x10);
                        *(undefined8 *)((long)pvVar8 + 0x10) = 0;
                        Memory::free_static((void *)(lVar5 + -0x10),false);
                      }
                    }
                    Memory::free_static(pvVar8,false);
                    pvVar8 = *(void **)((long)pvVar4 + 0x20);
                    *(undefined8 *)((long)pvVar8 + lVar9 * 2) = 0;
                  }
                  lVar9 = lVar9 + 4;
                } while (lVar9 != (ulong)uVar3 << 2);
                *(undefined4 *)((long)pvVar4 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar4 + 0x30) = (undefined1  [16])0x0;
                if (pvVar8 == (void *)0x0) goto LAB_0010031f;
              }
            }
            Memory::free_static(pvVar8,false);
            Memory::free_static(*(void **)((long)pvVar4 + 0x28),false);
          }
LAB_0010031f:
          if (*(long *)((long)pvVar4 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar4 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar9 = *(long *)((long)pvVar4 + 0x10);
              *(undefined8 *)((long)pvVar4 + 0x10) = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(this + 0x188) + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while ((ulong)uVar2 << 2 != lVar7);
    }
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  }
  return;
}



/* ConfigFile::get_sections(List<String, DefaultAllocator>*) const */

void __thiscall ConfigFile::get_sections(ConfigFile *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  CowData<char32_t> *this_00;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x198);
  if (plVar4 != (long *)0x0) {
    if (*(long *)param_1 == 0) {
      pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar3;
      *(undefined4 *)pauVar3[1] = 0;
      *pauVar3 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        if (plVar4[2] != 0) {
          CowData<char32_t>::_ref(this_00,(CowData *)(plVar4 + 2));
        }
        plVar1 = *(long **)param_1;
        lVar2 = plVar1[1];
        *(undefined8 *)(this_00 + 8) = 0;
        *(long **)(this_00 + 0x18) = plVar1;
        *(long *)(this_00 + 0x10) = lVar2;
        if (lVar2 != 0) {
          *(CowData<char32_t> **)(lVar2 + 8) = this_00;
        }
        plVar1[1] = (long)this_00;
        if (*plVar1 == 0) break;
        plVar4 = (long *)*plVar4;
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      plVar4 = (long *)*plVar4;
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      *plVar1 = (long)this_00;
    } while (plVar4 != (long *)0x0);
  }
  return;
}



/* ConfigFile::encode_to_text() const */

undefined8 ConfigFile::encode_to_text(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_RSI;
  undefined8 in_RDI;
  long *plVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  plVar5 = *(long **)(in_RSI + 0x198);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (plVar5 != (long *)0x0) {
    while( true ) {
      if ((plVar5[2] != 0) && (1 < *(uint *)(plVar5[2] + -8))) {
        local_90 = 0;
        local_88 = &_LC1;
        local_80 = 3;
        String::parse_latin1((StrRange *)&local_90);
        operator+((char *)&local_98,(String *)&_LC2);
        String::operator+((String *)&local_88,(String *)&local_98);
        StringBuilder::append((String *)&local_78);
        puVar3 = local_88;
        if (local_88 != (undefined *)0x0) {
          LOCK();
          plVar4 = (long *)(local_88 + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            local_88 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
        }
        lVar2 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar4 = (long *)(local_98 + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar4 = (long *)(local_90 + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
      }
      plVar4 = (long *)plVar5[6];
      if (plVar4 != (long *)0x0) {
        do {
          local_b8 = 0;
          VariantWriter::write_to_string
                    ((Variant *)(plVar4 + 3),(String *)&local_b8,
                     (_func_String_void_ptr_Ref_ptr *)0x0,(void *)0x0,true);
          local_88 = &_LC3;
          local_90 = 0;
          local_80 = 1;
          String::parse_latin1((StrRange *)&local_90);
          local_88 = &_LC4;
          local_a8 = 0;
          local_80 = 1;
          String::parse_latin1((StrRange *)&local_a8);
          String::property_name_encode();
          String::operator+((String *)&local_a0,(String *)&local_b0);
          String::operator+((String *)&local_98,(String *)&local_a0);
          String::operator+((String *)&local_88,(String *)&local_98);
          StringBuilder::append((String *)&local_78);
          puVar3 = local_88;
          if (local_88 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (undefined *)0x0;
              Memory::free_static(puVar3 + -0x10,false);
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
          lVar2 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar2 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar2 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
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
          lVar2 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) break;
      StringBuilder::append((char *)&local_78);
    }
  }
  StringBuilder::as_string();
  StringBuilder::~StringBuilder((StringBuilder *)&local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* ConfigFile::_internal_save(Ref<FileAccess>) */

undefined8 __thiscall ConfigFile::_internal_save(ConfigFile *this,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = *(long **)(this + 0x198);
  if (local_90 != (long *)0x0) {
    while( true ) {
      if ((local_90[2] != 0) && (1 < *(uint *)(local_90[2] + -8))) {
        plVar5 = (long *)*param_2;
        pcVar2 = *(code **)(*plVar5 + 0x2a8);
        local_60 = 0;
        local_58 = &_LC1;
        local_50 = 3;
        String::parse_latin1((StrRange *)&local_60);
        String::replace((char *)&local_70,(char *)(local_90 + 2));
        operator+((char *)&local_68,(String *)&_LC2);
        String::operator+((String *)&local_58,(String *)&local_68);
        (*pcVar2)(plVar5);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        lVar3 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar5 = (long *)(local_68 + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar5 = (long *)(local_70 + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar5 = (long *)(local_60 + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      plVar5 = (long *)local_90[6];
      if (plVar5 != (long *)0x0) {
        do {
          local_88 = 0;
          VariantWriter::write_to_string
                    ((Variant *)(plVar5 + 3),(String *)&local_88,
                     (_func_String_void_ptr_Ref_ptr *)0x0,(void *)0x0,true);
          plVar1 = (long *)*param_2;
          pcVar2 = *(code **)(*plVar1 + 0x2a8);
          local_58 = &_LC3;
          local_60 = 0;
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_60);
          local_58 = &_LC4;
          local_78 = 0;
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_78);
          String::property_name_encode();
          String::operator+((String *)&local_70,(String *)&local_80);
          String::operator+((String *)&local_68,(String *)&local_70);
          String::operator+((String *)&local_58,(String *)&local_68);
          (*pcVar2)(plVar1);
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
          lVar3 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
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
          lVar3 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
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
          lVar3 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      local_90 = (long *)*local_90;
      if (local_90 == (long *)0x0) break;
      plVar5 = (long *)*param_2;
      pcVar2 = *(code **)(*plVar5 + 0x2a8);
      local_60 = 0;
      local_58 = &_LC3;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_60);
      (*pcVar2)(plVar5);
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::save(String const&) */

int __thiscall ConfigFile::save(ConfigFile *this,String *param_1)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  int local_34;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_30,(int)param_1,(Error *)0x2);
  pOVar1 = local_30;
  if (local_34 == 0) {
    if (local_30 != (Object *)0x0) {
      local_28 = local_30;
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        local_34 = _internal_save(this);
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
        goto LAB_00100e4b;
      }
    }
    local_28 = (Object *)0x0;
    local_34 = _internal_save(this);
  }
LAB_00100e4b:
  if (((local_30 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_30), cVar2 != '\0')) {
    (**(code **)(*(long *)local_30 + 0x140))(local_30);
    Memory::free_static(local_30,false);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_34;
}



/* ConfigFile::save_encrypted(String const&, Vector<unsigned char> const&) */

int __thiscall ConfigFile::save_encrypted(ConfigFile *this,String *param_1,Vector *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  int local_64;
  Object *local_60;
  Object *local_58;
  Object *local_50;
  Object *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_60,(int)param_1,(Error *)0x2);
  if (local_64 != 0) goto LAB_00100fa2;
  local_58 = (Object *)0x0;
  Ref<FileAccessEncrypted>::instantiate<>((Ref<FileAccessEncrypted> *)&local_58);
  pOVar5 = local_58;
  local_40 = 0;
  local_50 = (Object *)0x0;
  if (local_60 != (Object *)0x0) {
    local_50 = local_60;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_50 = (Object *)0x0;
    }
  }
  local_64 = FileAccessEncrypted::open_and_parse(pOVar5,&local_50,param_2,1,1,&local_48);
  if (local_50 == (Object *)0x0) {
    if (local_40 != 0) goto LAB_00101079;
    if (local_64 == 0) goto LAB_001010a4;
  }
  else {
    cVar3 = RefCounted::unreference();
    pOVar4 = local_50;
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_50), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    if (local_40 != 0) {
LAB_00101079:
      lVar2 = local_40;
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pOVar5 = local_58;
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pOVar5 = local_58;
      }
    }
    if (local_64 == 0) {
      local_48 = (Object *)0x0;
      if (pOVar5 == (Object *)0x0) {
        local_64 = _internal_save(this);
        goto LAB_00100fa2;
      }
LAB_001010a4:
      local_48 = (Object *)0x0;
      pOVar4 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&FileAccess::typeinfo,0);
      if (pOVar4 == (Object *)0x0) {
        local_64 = _internal_save(this);
      }
      else {
        local_48 = pOVar4;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_48 = (Object *)0x0;
          local_64 = _internal_save(this);
        }
        else {
          local_64 = _internal_save(this);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    if (pOVar5 == (Object *)0x0) goto LAB_00100fa2;
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_00100fa2:
  if (((local_60 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
    (**(code **)(*(long *)local_60 + 0x140))(local_60);
    Memory::free_static(local_60,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_64;
}



/* ConfigFile::save_encrypted_pass(String const&, String const&) */

int __thiscall ConfigFile::save_encrypted_pass(ConfigFile *this,String *param_1,String *param_2)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  int local_4c;
  Object *local_48;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_48,(int)param_1,(Error *)0x2);
  if (local_4c != 0) goto LAB_001012b2;
  local_40 = (Object *)0x0;
  Ref<FileAccessEncrypted>::instantiate<>((Ref<FileAccessEncrypted> *)&local_40);
  pOVar1 = local_40;
  local_38 = (Object *)0x0;
  if (local_48 != (Object *)0x0) {
    local_38 = local_48;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_38 = (Object *)0x0;
    }
  }
  local_4c = FileAccessEncrypted::open_and_parse_password(pOVar1,&local_38,param_2,1);
  if (((local_38 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar3 = local_38, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if (local_4c == 0) {
    local_38 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(pOVar1,&Object::typeinfo,&FileAccess::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      local_38 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        local_4c = _internal_save(this);
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        goto LAB_001013c8;
      }
      local_38 = (Object *)0x0;
    }
    local_4c = _internal_save(this);
  }
LAB_001013c8:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_001012b2:
  if (((local_48 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_4c;
}



/* ConfigFile::get_section_keys(String const&, List<String, DefaultAllocator>*) const */

void __thiscall ConfigFile::get_section_keys(ConfigFile *this,String *param_1,List *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
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
  undefined1 (*pauVar24) [16];
  CowData<char32_t> *this_00;
  uint uVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
    uVar23 = String::hash();
    uVar21 = CONCAT44(0,uVar1);
    lVar29 = *(long *)(this + 400);
    uVar25 = 1;
    if (uVar23 != 0) {
      uVar25 = uVar23;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar25 * lVar2;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar21;
    lVar27 = SUB168(auVar4 * auVar12,8);
    uVar23 = *(uint *)(lVar29 + lVar27 * 4);
    iVar26 = SUB164(auVar4 * auVar12,8);
    if (uVar23 != 0) {
      uVar30 = 0;
      do {
        if (uVar25 == uVar23) {
          cVar22 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x188) + lVar27 * 8) + 0x10),
                                      param_1);
          if (cVar22 != '\0') {
            if ((*(long *)(this + 0x188) == 0) || (*(int *)(this + 0x1ac) == 0)) goto LAB_001018b0;
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
            uVar23 = String::hash();
            uVar21 = CONCAT44(0,uVar1);
            lVar29 = *(long *)(this + 400);
            uVar25 = 1;
            if (uVar23 != 0) {
              uVar25 = uVar23;
            }
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar25 * lVar2;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar21;
            lVar27 = SUB168(auVar8 * auVar16,8);
            uVar23 = *(uint *)(lVar29 + lVar27 * 4);
            uVar30 = SUB164(auVar8 * auVar16,8);
            if (uVar23 == 0) goto LAB_001018b0;
            uVar31 = 0;
            goto LAB_001017bf;
          }
          lVar29 = *(long *)(this + 400);
        }
        uVar30 = uVar30 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar26 + 1) * lVar2;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21;
        lVar27 = SUB168(auVar5 * auVar13,8);
        uVar23 = *(uint *)(lVar29 + lVar27 * 4);
        iVar26 = SUB164(auVar5 * auVar13,8);
      } while ((uVar23 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar23 * lVar2, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar21, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar1 + iVar26) - SUB164(auVar6 * auVar14,8)) * lVar2,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar21, uVar30 <= SUB164(auVar7 * auVar15,8)));
    }
  }
  local_68 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
  }
  local_60 = 0;
  local_50 = 0x2e;
  local_58 = "Cannot get keys from nonexistent section \"%s\".";
  String::parse_latin1((StrRange *)&local_60);
  vformat<String>((CowData<char32_t> *)&local_58,(StrRange *)&local_60,
                  (CowData<char32_t> *)&local_68);
  _err_print_error("get_section_keys","core/io/config_file.cpp",0x6f,
                   "Condition \"!values.has(p_section)\" is true.",(CowData<char32_t> *)&local_58,0)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_001015b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001017bf:
  if (uVar25 == uVar23) {
    cVar22 = String::operator==((String *)(*(long *)(*(long *)(this + 0x188) + lVar27 * 8) + 0x10),
                                param_1);
    if (cVar22 != '\0') {
      plVar28 = *(long **)(*(long *)(*(long *)(this + 0x188) + (ulong)uVar30 * 8) + 0x30);
      if (plVar28 != (long *)0x0) {
        if (*(long *)param_2 == 0) {
          pauVar24 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_2 = pauVar24;
          *(undefined4 *)pauVar24[1] = 0;
          *pauVar24 = (undefined1  [16])0x0;
        }
        do {
          this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
          if (plVar28[2] != 0) {
            CowData<char32_t>::_ref(this_00,(CowData *)(plVar28 + 2));
          }
          plVar3 = *(long **)param_2;
          lVar2 = plVar3[1];
          *(undefined8 *)(this_00 + 8) = 0;
          *(long **)(this_00 + 0x18) = plVar3;
          *(long *)(this_00 + 0x10) = lVar2;
          if (lVar2 != 0) {
            *(CowData<char32_t> **)(lVar2 + 8) = this_00;
          }
          plVar3[1] = (long)this_00;
          if (*plVar3 == 0) {
            *plVar3 = (long)this_00;
          }
          plVar28 = (long *)*plVar28;
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        } while (plVar28 != (long *)0x0);
      }
      goto LAB_001015b0;
    }
    lVar29 = *(long *)(this + 400);
  }
  uVar31 = uVar31 + 1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)(uVar30 + 1) * lVar2;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar21;
  lVar27 = SUB168(auVar9 * auVar17,8);
  uVar23 = *(uint *)(lVar29 + lVar27 * 4);
  uVar30 = SUB164(auVar9 * auVar17,8);
  if ((uVar23 == 0) ||
     (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar23 * lVar2, auVar18._8_8_ = 0,
     auVar18._0_8_ = uVar21, auVar11._8_8_ = 0,
     auVar11._0_8_ = (ulong)((uVar1 + uVar30) - SUB164(auVar10 * auVar18,8)) * lVar2,
     auVar19._8_8_ = 0, auVar19._0_8_ = uVar21, SUB164(auVar11 * auVar19,8) < uVar31)) {
LAB_001018b0:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar20 = (code *)invalidInstructionException();
    (*pcVar20)();
  }
  goto LAB_001017bf;
}



/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::erase(String const&) [clone .isra.0]
    */

ulong __thiscall
HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
::erase(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
        *this,String *param_1)

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
  char cVar28;
  uint uVar29;
  ulong in_RAX;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  uint *puVar37;
  ulong uVar38;
  uint uVar39;
  
  if (*(long *)(this + 8) == 0) {
    return in_RAX;
  }
  uVar30 = (ulong)*(uint *)(this + 0x2c);
  if (*(uint *)(this + 0x2c) != 0) {
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar38 = CONCAT44(0,uVar5);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = String::hash();
    lVar36 = *(long *)(this + 0x10);
    uVar31 = 1;
    if (uVar29 != 0) {
      uVar31 = uVar29;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar31 * lVar6;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar38;
    auVar8 = auVar8 * auVar18;
    lVar33 = auVar8._8_8_;
    uVar30 = auVar8._0_8_;
    uVar29 = *(uint *)(lVar36 + lVar33 * 4);
    uVar32 = auVar8._8_4_;
    if (uVar29 != 0) {
      uVar39 = 0;
      do {
        if (uVar31 == uVar29) {
          cVar28 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar33 * 8) + 0x10)
                                      ,param_1);
          if (cVar28 != '\0') {
            lVar6 = *(long *)(this + 0x10);
            lVar36 = *(long *)(this + 8);
            uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar30 = CONCAT44(0,uVar5);
            lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar32 + 1) * lVar33;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar30;
            lVar34 = SUB168(auVar12 * auVar22,8);
            puVar37 = (uint *)(lVar6 + lVar34 * 4);
            uVar29 = SUB164(auVar12 * auVar22,8);
            uVar31 = *puVar37;
            if ((uVar31 == 0) ||
               (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar31 * lVar33, auVar23._8_8_ = 0,
               auVar23._0_8_ = uVar30, auVar14._8_8_ = 0,
               auVar14._0_8_ = (ulong)((uVar5 + uVar29) - SUB164(auVar13 * auVar23,8)) * lVar33,
               auVar24._8_8_ = 0, auVar24._0_8_ = uVar30, uVar39 = uVar32,
               SUB164(auVar14 * auVar24,8) == 0)) goto LAB_00101aeb;
            goto LAB_00101aa5;
          }
          lVar36 = *(long *)(this + 0x10);
        }
        uVar39 = uVar39 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar32 + 1) * lVar6;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        auVar9 = auVar9 * auVar19;
        lVar33 = auVar9._8_8_;
        uVar30 = auVar9._0_8_;
        uVar29 = *(uint *)(lVar36 + lVar33 * 4);
        uVar32 = auVar9._8_4_;
      } while ((uVar29 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar29 * lVar6, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar38, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar5 + uVar32) - SUB164(auVar10 * auVar20,8)) * lVar6,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar38, uVar30 = SUB168(auVar11 * auVar21,0),
              uVar39 <= SUB164(auVar11 * auVar21,8)));
    }
  }
  return uVar30;
  while (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar31 * lVar33, auVar25._8_8_ = 0,
        auVar25._0_8_ = uVar30, auVar16._8_8_ = 0,
        auVar16._0_8_ = (ulong)((uVar29 + uVar5) - SUB164(auVar15 * auVar25,8)) * lVar33,
        auVar26._8_8_ = 0, auVar26._0_8_ = uVar30, uVar39 = uVar32, SUB164(auVar16 * auVar26,8) != 0
        ) {
LAB_00101aa5:
    uVar32 = uVar29;
    puVar1 = (uint *)(lVar6 + (ulong)uVar39 * 4);
    *puVar37 = *puVar1;
    puVar2 = (undefined8 *)(lVar36 + lVar34 * 8);
    *puVar1 = uVar31;
    puVar3 = (undefined8 *)(lVar36 + (ulong)uVar39 * 8);
    uVar7 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar7;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(uVar32 + 1) * lVar33;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar30;
    lVar34 = SUB168(auVar17 * auVar27,8);
    puVar37 = (uint *)(lVar6 + lVar34 * 4);
    uVar29 = SUB164(auVar17 * auVar27,8);
    uVar31 = *puVar37;
    if (uVar31 == 0) break;
  }
LAB_00101aeb:
  uVar30 = (ulong)uVar32;
  plVar4 = (long *)(lVar36 + uVar30 * 8);
  *(undefined4 *)(lVar6 + uVar30 * 4) = 0;
  plVar35 = (long *)*plVar4;
  if (*(long **)(this + 0x18) == plVar35) {
    *(long *)(this + 0x18) = *plVar35;
    plVar35 = (long *)*plVar4;
    if (*(long **)(this + 0x20) != plVar35) goto LAB_00101b09;
  }
  else if (*(long **)(this + 0x20) != plVar35) goto LAB_00101b09;
  *(long *)(this + 0x20) = plVar35[1];
  plVar35 = (long *)*plVar4;
LAB_00101b09:
  if ((long *)plVar35[1] != (long *)0x0) {
    *(long *)plVar35[1] = *plVar35;
    plVar35 = (long *)*plVar4;
  }
  if (*plVar35 != 0) {
    *(long *)(*plVar35 + 8) = plVar35[1];
    plVar35 = (long *)*plVar4;
  }
  if (Variant::needs_deinit[(int)plVar35[3]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar35 + 2));
  Memory::free_static(plVar35,false);
  uVar38 = *(ulong *)(this + 8);
  *(undefined8 *)(uVar38 + uVar30 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return uVar38;
}



/* HashMap<String, HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > > > > >::erase(String const&) [clone
   .isra.0] */

void __thiscall
HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
::erase(HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
        *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
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
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  void *pvVar35;
  long lVar36;
  uint *puVar37;
  uint uVar38;
  long *plVar39;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar34 = CONCAT44(0,uVar5);
    lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = String::hash();
    lVar36 = *(long *)(this + 0x10);
    uVar29 = 1;
    if (uVar28 != 0) {
      uVar29 = uVar28;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)uVar29 * lVar33;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar34;
    lVar31 = SUB168(auVar7 * auVar17,8);
    uVar28 = *(uint *)(lVar36 + lVar31 * 4);
    uVar30 = SUB164(auVar7 * auVar17,8);
    if (uVar28 != 0) {
      uVar38 = 0;
      do {
        if (uVar29 == uVar28) {
          cVar27 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar31 * 8) + 0x10)
                                      ,param_1);
          if (cVar27 != '\0') {
            lVar33 = *(long *)(this + 0x10);
            lVar36 = *(long *)(this + 8);
            uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar34 = CONCAT44(0,uVar5);
            lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(uVar30 + 1) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar34;
            lVar32 = SUB168(auVar11 * auVar21,8);
            puVar37 = (uint *)(lVar33 + lVar32 * 4);
            uVar28 = SUB164(auVar11 * auVar21,8);
            uVar29 = *puVar37;
            if ((uVar29 == 0) ||
               (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar29 * lVar31, auVar22._8_8_ = 0,
               auVar22._0_8_ = uVar34, auVar13._8_8_ = 0,
               auVar13._0_8_ = (ulong)((uVar5 + uVar28) - SUB164(auVar12 * auVar22,8)) * lVar31,
               auVar23._8_8_ = 0, auVar23._0_8_ = uVar34, uVar38 = uVar30,
               SUB164(auVar13 * auVar23,8) == 0)) goto LAB_00101dbb;
            goto LAB_00101d75;
          }
          lVar36 = *(long *)(this + 0x10);
        }
        uVar38 = uVar38 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(uVar30 + 1) * lVar33;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar34;
        lVar31 = SUB168(auVar8 * auVar18,8);
        uVar28 = *(uint *)(lVar36 + lVar31 * 4);
        uVar30 = SUB164(auVar8 * auVar18,8);
      } while ((uVar28 != 0) &&
              (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar28 * lVar33, auVar19._8_8_ = 0,
              auVar19._0_8_ = uVar34, auVar10._8_8_ = 0,
              auVar10._0_8_ = (ulong)((uVar5 + uVar30) - SUB164(auVar9 * auVar19,8)) * lVar33,
              auVar20._8_8_ = 0, auVar20._0_8_ = uVar34, uVar38 <= SUB164(auVar10 * auVar20,8)));
    }
  }
  return;
  while (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar29 * lVar31, auVar24._8_8_ = 0,
        auVar24._0_8_ = uVar34, auVar15._8_8_ = 0,
        auVar15._0_8_ = (ulong)((uVar28 + uVar5) - SUB164(auVar14 * auVar24,8)) * lVar31,
        auVar25._8_8_ = 0, auVar25._0_8_ = uVar34, uVar38 = uVar30, SUB164(auVar15 * auVar25,8) != 0
        ) {
LAB_00101d75:
    uVar30 = uVar28;
    puVar1 = (uint *)(lVar33 + (ulong)uVar38 * 4);
    *puVar37 = *puVar1;
    puVar2 = (undefined8 *)(lVar36 + lVar32 * 8);
    *puVar1 = uVar29;
    puVar3 = (undefined8 *)(lVar36 + (ulong)uVar38 * 8);
    uVar6 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar6;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(uVar30 + 1) * lVar31;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar34;
    lVar32 = SUB168(auVar16 * auVar26,8);
    puVar37 = (uint *)(lVar33 + lVar32 * 4);
    uVar28 = SUB164(auVar16 * auVar26,8);
    uVar29 = *puVar37;
    if (uVar29 == 0) break;
  }
LAB_00101dbb:
  uVar34 = (ulong)uVar30;
  plVar4 = (long *)(lVar36 + uVar34 * 8);
  *(undefined4 *)(lVar33 + uVar34 * 4) = 0;
  plVar39 = (long *)*plVar4;
  if (*(long **)(this + 0x18) == plVar39) {
    *(long *)(this + 0x18) = *plVar39;
    plVar39 = (long *)*plVar4;
    if (*(long **)(this + 0x20) == plVar39) goto LAB_00101f2c;
  }
  else if (*(long **)(this + 0x20) == plVar39) {
LAB_00101f2c:
    *(long *)(this + 0x20) = plVar39[1];
    plVar39 = (long *)*plVar4;
  }
  if ((long *)plVar39[1] != (long *)0x0) {
    *(long *)plVar39[1] = *plVar39;
    plVar39 = (long *)*plVar4;
  }
  if (*plVar39 != 0) {
    *(long *)(*plVar39 + 8) = plVar39[1];
    plVar39 = (long *)*plVar4;
  }
  pvVar35 = (void *)plVar39[4];
  if (pvVar35 != (void *)0x0) {
    if (*(int *)((long)plVar39 + 0x44) != 0) {
      uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar39 + 8) * 4);
      if (uVar5 == 0) {
        *(undefined4 *)((long)plVar39 + 0x44) = 0;
        *(undefined1 (*) [16])(plVar39 + 6) = (undefined1  [16])0x0;
      }
      else {
        lVar33 = 0;
        do {
          if (*(int *)(plVar39[5] + lVar33) != 0) {
            pvVar35 = *(void **)((long)pvVar35 + lVar33 * 2);
            *(int *)(plVar39[5] + lVar33) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar35 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar35 + 0x10));
            Memory::free_static(pvVar35,false);
            pvVar35 = (void *)plVar39[4];
            *(undefined8 *)((long)pvVar35 + lVar33 * 2) = 0;
          }
          lVar33 = lVar33 + 4;
        } while (lVar33 != (ulong)uVar5 << 2);
        *(undefined4 *)((long)plVar39 + 0x44) = 0;
        *(undefined1 (*) [16])(plVar39 + 6) = (undefined1  [16])0x0;
        if (pvVar35 == (void *)0x0) goto LAB_00101eba;
      }
    }
    Memory::free_static(pvVar35,false);
    Memory::free_static((void *)plVar39[5],false);
  }
LAB_00101eba:
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar39 + 2));
  Memory::free_static(plVar39,false);
  *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return;
}



/* ConfigFile::erase_section(String const&) */

void __thiscall ConfigFile::erase_section(ConfigFile *this,String *param_1)

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
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
    uVar12 = String::hash();
    uVar16 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(this + 400);
    uVar13 = 1;
    if (uVar12 != 0) {
      uVar13 = uVar12;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(lVar17 + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar12) {
          cVar11 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x188) + lVar15 * 8) + 0x10),
                                      param_1);
          if (cVar11 != '\0') {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
              ::erase((HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                       *)(this + 0x180),param_1);
              return;
            }
            goto LAB_001021a3;
          }
          lVar17 = *(long *)(this + 400);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(lVar17 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar12 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar12 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  local_68 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
  }
  local_60 = 0;
  local_50 = 0x26;
  local_58 = "Cannot erase nonexistent section \"%s\".";
  String::parse_latin1((StrRange *)&local_60);
  vformat<String>((CowData<char32_t> *)&local_58,(StrRange *)&local_60,
                  (CowData<char32_t> *)&local_68);
  _err_print_error("erase_section","core/io/config_file.cpp",0x77,
                   "Condition \"!values.has(p_section)\" is true.",(CowData<char32_t> *)&local_58,0,
                   0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001021a3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::has_section_key(String const&, String const&) const */

undefined8 __thiscall ConfigFile::has_section_key(ConfigFile *this,String *param_1,String *param_2)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  char cVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    uVar27 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
    uVar21 = String::hash();
    lVar28 = *(long *)(this + 400);
    uVar23 = 1;
    if (uVar21 != 0) {
      uVar23 = uVar21;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar23 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar27;
    lVar25 = SUB168(auVar3 * auVar11,8);
    uVar21 = *(uint *)(lVar28 + lVar25 * 4);
    iVar24 = SUB164(auVar3 * auVar11,8);
    if (uVar21 != 0) {
      uVar29 = 0;
      do {
        if (uVar23 == uVar21) {
          cVar20 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x188) + lVar25 * 8) + 0x10),
                                      param_1);
          if (cVar20 != '\0') {
            local_44 = 0;
            cVar20 = HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                     ::_lookup_pos((HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                                    *)(this + 0x180),param_1,&local_44);
            if (cVar20 == '\0') {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
            lVar2 = *(long *)(*(long *)(this + 0x188) + (ulong)local_44 * 8);
            if ((*(long *)(lVar2 + 0x20) != 0) && (*(int *)(lVar2 + 0x44) != 0)) {
              uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar2 + 0x40) * 4);
              uVar27 = CONCAT44(0,uVar1);
              lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar2 + 0x40) * 8);
              uVar21 = String::hash();
              lVar25 = *(long *)(lVar2 + 0x28);
              uVar23 = 1;
              if (uVar21 != 0) {
                uVar23 = uVar21;
              }
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar23 * lVar28;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar27;
              lVar26 = SUB168(auVar7 * auVar15,8);
              uVar21 = *(uint *)(lVar25 + lVar26 * 4);
              iVar24 = SUB164(auVar7 * auVar15,8);
              if (uVar21 != 0) {
                uVar29 = 0;
                goto LAB_0010241b;
              }
            }
            break;
          }
          lVar28 = *(long *)(this + 400);
        }
        uVar29 = uVar29 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar24 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar27;
        lVar25 = SUB168(auVar4 * auVar12,8);
        uVar21 = *(uint *)(lVar28 + lVar25 * 4);
        iVar24 = SUB164(auVar4 * auVar12,8);
        if ((uVar21 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar21 * lVar2, auVar13._8_8_ = 0,
           auVar13._0_8_ = uVar27, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar1 + iVar24) - SUB164(auVar5 * auVar13,8)) * lVar2,
           auVar14._8_8_ = 0, auVar14._0_8_ = uVar27, SUB164(auVar6 * auVar14,8) < uVar29)) break;
      } while( true );
    }
  }
  goto LAB_001021ee;
LAB_0010241b:
  do {
    if (uVar23 == uVar21) {
      uVar22 = String::operator==((String *)(*(long *)(*(long *)(lVar2 + 0x20) + lVar26 * 8) + 0x10)
                                  ,param_2);
      if ((char)uVar22 != '\0') goto LAB_001021f0;
      lVar25 = *(long *)(lVar2 + 0x28);
    }
    uVar29 = uVar29 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(iVar24 + 1) * lVar28;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar27;
    lVar26 = SUB168(auVar8 * auVar16,8);
    uVar21 = *(uint *)(lVar25 + lVar26 * 4);
    iVar24 = SUB164(auVar8 * auVar16,8);
  } while ((uVar21 != 0) &&
          (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar21 * lVar28, auVar17._8_8_ = 0,
          auVar17._0_8_ = uVar27, auVar10._8_8_ = 0,
          auVar10._0_8_ = (ulong)((uVar1 + iVar24) - SUB164(auVar9 * auVar17,8)) * lVar28,
          auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, uVar29 <= SUB164(auVar10 * auVar18,8)));
LAB_001021ee:
  uVar22 = 0;
LAB_001021f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::get_value(String const&, String const&, Variant const&) const */

String * ConfigFile::get_value(String *param_1,String *param_2,Variant *param_3)

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
  code *pcVar11;
  char cVar12;
  uint uVar13;
  String *in_RCX;
  uint uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  Variant *in_R8;
  long lVar18;
  uint uVar19;
  long in_FS_OFFSET;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0x188) != 0) && (*(int *)(param_2 + 0x1ac) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x1a8) * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x1a8) * 8);
    uVar13 = String::hash();
    lVar18 = *(long *)(param_2 + 400);
    uVar14 = 1;
    if (uVar13 != 0) {
      uVar14 = uVar13;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar14 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar16 = SUB168(auVar3 * auVar7,8);
    uVar13 = *(uint *)(lVar18 + lVar16 * 4);
    iVar15 = SUB164(auVar3 * auVar7,8);
    if (uVar13 != 0) {
      uVar19 = 0;
      do {
        if (uVar13 == uVar14) {
          cVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_2 + 0x188) + lVar16 * 8) + 0x10),
                                      (String *)param_3);
          if (cVar12 != '\0') {
            local_68 = local_68 & 0xffffffff00000000;
            cVar12 = HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                     ::_lookup_pos((HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                                    *)(param_2 + 0x180),(String *)param_3,(uint *)&local_68);
            if (cVar12 != '\0') {
              local_58 = (char *)((ulong)local_58 & 0xffffffff00000000);
              cVar12 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                       ::_lookup_pos((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                                      *)(*(long *)(*(long *)(param_2 + 0x188) +
                                                  (local_68 & 0xffffffff) * 8) + 0x18),in_RCX,
                                     (uint *)&local_58);
              if (cVar12 == '\0') break;
              local_58 = (char *)((ulong)local_58 & 0xffffffff00000000);
              cVar12 = HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                       ::_lookup_pos((HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                                      *)(param_2 + 0x180),(String *)param_3,(uint *)&local_58);
              if (cVar12 != '\0') {
                lVar2 = *(long *)(*(long *)(param_2 + 0x188) + ((ulong)local_58 & 0xffffffff) * 8);
                local_60 = local_60 & 0xffffffff00000000;
                cVar12 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                         ::_lookup_pos((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                                        *)(lVar2 + 0x18),in_RCX,(uint *)&local_60);
                if (cVar12 != '\0') {
                  Variant::Variant((Variant *)param_1,
                                   (Variant *)
                                   (*(long *)(*(long *)(lVar2 + 0x20) + (local_60 & 0xffffffff) * 8)
                                   + 0x18));
                  goto LAB_001024eb;
                }
              }
            }
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          lVar18 = *(long *)(param_2 + 400);
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar13 = *(uint *)(lVar18 + lVar16 * 4);
        iVar15 = SUB164(auVar4 * auVar8,8);
        if ((uVar13 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar13 * lVar2, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, SUB164(auVar6 * auVar10,8) < uVar19)) break;
      } while( true );
    }
  }
  if (*(int *)in_R8 == 0) {
    local_60 = 0;
    if (*(long *)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)in_RCX);
    }
    local_68 = 0;
    if (*(long *)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_3);
    }
    local_70 = 0;
    local_50 = 0x4c;
    local_58 = "Couldn\'t find the given section \"%s\" and key \"%s\", and no default was given.";
    String::parse_latin1((StrRange *)&local_70);
    vformat<String,String>
              ((CowData<char32_t> *)&local_58,(StrRange *)&local_70,(CowData<char32_t> *)&local_68,
               (CowData<char32_t> *)&local_60);
    _err_print_error("get_value","core/io/config_file.cpp",0x55,
                     "Condition \"p_default.get_type() == Variant::NIL\" is true. Returning: Variant()"
                     ,(CowData<char32_t> *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    Variant::Variant((Variant *)param_1,in_R8);
  }
LAB_001024eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  
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
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 8;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar10 = param_1 * 8 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    lVar12 = uVar10 + 1;
    if (lVar12 != 0) {
      if (param_1 <= lVar7) {
        lVar7 = *(long *)this;
        uVar10 = param_1;
        while( true ) {
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (*(ulong *)(lVar7 + -8) <= uVar10) break;
          while( true ) {
            plVar2 = (long *)(lVar7 + uVar10 * 8);
            if (*plVar2 != 0) break;
            uVar10 = uVar10 + 1;
            if (*(ulong *)(lVar7 + -8) <= uVar10) goto LAB_00102ac2;
          }
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar7 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
          lVar7 = *(long *)this;
          uVar10 = uVar10 + 1;
        }
LAB_00102ac2:
        if (lVar12 != lVar9) {
          iVar4 = _realloc(this,lVar12);
          if (iVar4 != 0) {
            return;
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
        return;
      }
      if (lVar12 == lVar9) {
LAB_00102b73:
        puVar11 = *(undefined8 **)this;
        if (puVar11 == (undefined8 *)0x0) {
          FUN_0010903e();
          return;
        }
        lVar7 = puVar11[-1];
        if (param_1 <= lVar7) goto LAB_00102b53;
      }
      else {
        if (lVar7 != 0) {
          iVar4 = _realloc(this,lVar12);
          if (iVar4 != 0) {
            return;
          }
          goto LAB_00102b73;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00102be2;
        }
        puVar11 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar11;
        lVar7 = 0;
      }
      memset(puVar11 + lVar7,0,(param_1 - lVar7) * 8);
LAB_00102b53:
      puVar11[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00102be2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* ConfigFile::_get_section_keys(String const&) const */

String * ConfigFile::_get_section_keys(String *param_1)

{
  CowData<char32_t> *this;
  long *plVar1;
  String *in_RDX;
  CowData *pCVar2;
  long lVar3;
  ConfigFile *in_RSI;
  long lVar4;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (long *)0x0;
  get_section_keys(in_RSI,in_RDX,(List *)&local_38);
  plVar1 = local_38;
  *(undefined8 *)(param_1 + 8) = 0;
  if (local_38 == (long *)0x0) {
    CowData<String>::resize<false>((CowData<String> *)(param_1 + 8),0);
  }
  else {
    CowData<String>::resize<false>((CowData<String> *)(param_1 + 8),(long)(int)local_38[2]);
    pCVar2 = (CowData *)*plVar1;
    if (pCVar2 != (CowData *)0x0) {
      lVar3 = 0;
      do {
        if (*(long *)(param_1 + 8) == 0) {
          lVar4 = 0;
LAB_00102d03:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false
                     ,false);
        }
        else {
          lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
          if (lVar4 <= lVar3) goto LAB_00102d03;
          CowData<String>::_copy_on_write((CowData<String> *)(param_1 + 8));
          this = (CowData<char32_t> *)(*(long *)(param_1 + 8) + lVar3 * 8);
          if (*(long *)this != *(long *)pCVar2) {
            CowData<char32_t>::_ref(this,pCVar2);
          }
        }
        pCVar2 = *(CowData **)(pCVar2 + 8);
        lVar3 = lVar3 + 1;
      } while (pCVar2 != (CowData *)0x0);
    }
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_get_sections() const */

void ConfigFile::_get_sections(void)

{
  int iVar1;
  CowData *pCVar2;
  undefined1 (*pauVar3) [16];
  CowData<char32_t> *pCVar4;
  long lVar5;
  long in_RSI;
  long in_RDI;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  undefined1 (*local_38) [16];
  long local_30;
  
  plVar7 = *(long **)(in_RSI + 0x198);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1 (*) [16])0x0;
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)(in_RDI + 8) = 0;
    CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),0);
  }
  else {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
    local_38 = pauVar3;
    do {
      pCVar4 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pCVar4 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar4 + 0x10) = (undefined1  [16])0x0;
      if (plVar7[2] != 0) {
        CowData<char32_t>::_ref(pCVar4,(CowData *)(plVar7 + 2));
      }
      lVar5 = *(long *)(*pauVar3 + 8);
      *(undefined8 *)(pCVar4 + 8) = 0;
      *(undefined1 (**) [16])(pCVar4 + 0x18) = pauVar3;
      *(long *)(pCVar4 + 0x10) = lVar5;
      if (lVar5 != 0) {
        *(CowData<char32_t> **)(lVar5 + 8) = pCVar4;
      }
      lVar5 = *(long *)*pauVar3;
      *(CowData<char32_t> **)(*pauVar3 + 8) = pCVar4;
      if (lVar5 == 0) {
        *(CowData<char32_t> **)*pauVar3 = pCVar4;
      }
      plVar7 = (long *)*plVar7;
      iVar1 = *(int *)pauVar3[1] + 1;
      *(int *)pauVar3[1] = iVar1;
    } while (plVar7 != (long *)0x0);
    *(undefined8 *)(in_RDI + 8) = 0;
    CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),(long)iVar1);
    lVar5 = 0;
    for (pCVar2 = *(CowData **)*pauVar3; pCVar2 != (CowData *)0x0;
        pCVar2 = *(CowData **)(pCVar2 + 8)) {
      if (*(long *)(in_RDI + 8) == 0) {
        lVar6 = 0;
LAB_00102edb:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar6,"p_index","size()","",false,
                   false);
      }
      else {
        lVar6 = *(long *)(*(long *)(in_RDI + 8) + -8);
        if (lVar6 <= lVar5) goto LAB_00102edb;
        CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
        pCVar4 = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar5 * 8);
        if (*(long *)pCVar4 != *(long *)pCVar2) {
          CowData<char32_t>::_ref(pCVar4,pCVar2);
        }
      }
      lVar5 = lVar5 + 1;
    }
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConfigFile::_bind_methods() */

void ConfigFile::_bind_methods(void)

{
  ulong *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  ulong *puVar13;
  long *plVar14;
  MethodBind *pMVar15;
  long *plVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  size_t __n;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined8 local_1b8;
  long local_1b0;
  Vector local_1a8 [8];
  ulong *local_1a0;
  char *local_198;
  undefined8 local_190;
  long *local_188;
  char *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  char *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  undefined *local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  Variant *local_b8;
  undefined *puStack_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  Variant *local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar12 = PTR__LC53_00113000;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_98 = "section";
  auStack_90._8_8_ = "value";
  auStack_90._0_8_ = &_LC55;
  auStack_70._8_8_ = auStack_90 + 8;
  auStack_70._0_8_ = auStack_90;
  uVar19 = (uint)(Variant *)&local_78;
  local_78 = (Variant *)&local_98;
  D_METHODP((char *)&local_198,(char ***)"set_value",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,String_const&,String_const&,Variant_const&>(set_value);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  local_a8 = "default";
  local_b8 = (Variant *)0x106954;
  puStack_b0 = &_LC55;
  auStack_70._8_8_ = &local_a8;
  auStack_70._0_8_ = &puStack_b0;
  auStack_90 = (undefined1  [16])0x0;
  local_98 = (char *)0x0;
  local_a0 = 0;
  local_78 = (Variant *)&local_b8;
  D_METHODP((char *)&local_198,(char ***)"get_value",uVar19);
  Variant::Variant((Variant *)&local_78,(Variant *)&local_98);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_b8 = (Variant *)&local_78;
  pMVar15 = create_method_bind<ConfigFile,Variant,String_const&,String_const&,Variant_const&>
                      (get_value);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,&local_b8,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auStack_90._8_8_;
  auStack_90 = auVar6 << 0x40;
  local_98 = "section";
  local_78 = (Variant *)&local_98;
  D_METHODP((char *)&local_198,(char ***)"has_section",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,bool,String_const&>(has_section);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  local_148 = 0;
  local_158 = "section";
  puStack_150 = &_LC55;
  auStack_70._0_8_ = &puStack_150;
  local_78 = (Variant *)&local_158;
  D_METHODP((char *)&local_198,(char ***)"has_section_key",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,bool,String_const&,String_const&>(has_section_key);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"get_sections",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Vector<String>>(_get_sections);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auStack_90._8_8_;
  auStack_90 = auVar7 << 0x40;
  local_98 = "section";
  local_78 = (Variant *)&local_98;
  D_METHODP((char *)&local_198,(char ***)"get_section_keys",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Vector<String>,String_const&>(_get_section_keys);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auStack_90._8_8_;
  auStack_90 = auVar8 << 0x40;
  local_98 = "section";
  local_78 = (Variant *)&local_98;
  D_METHODP((char *)&local_198,(char ***)"erase_section",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,String_const&>(erase_section);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  local_168 = 0;
  local_178 = "section";
  puStack_170 = &_LC55;
  auStack_70._0_8_ = &puStack_170;
  local_78 = (Variant *)&local_178;
  D_METHODP((char *)&local_198,(char ***)"erase_section_key",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,String_const&,String_const&>(erase_section_key);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = "path";
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auStack_90._8_8_;
  auStack_90 = auVar9 << 0x40;
  local_78 = (Variant *)&local_98;
  D_METHODP((char *)&local_198,(char ***)&_LC64,uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Error,String_const&>(load);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = "data";
  auVar10._8_8_ = 0;
  auVar10._0_8_ = auStack_90._8_8_;
  auStack_90 = auVar10 << 0x40;
  local_78 = (Variant *)&local_98;
  D_METHODP((char *)&local_198,(char ***)"parse",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Error,String_const&>(parse);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = "path";
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auStack_90._8_8_;
  auStack_90 = auVar11 << 0x40;
  local_78 = (Variant *)&local_98;
  D_METHODP((char *)&local_198,(char ***)&_LC67,uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Error,String_const&>(save);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"encode_to_text",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,String>(encode_to_text);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  local_1a0 = (ulong *)0x0;
  puVar17 = (ulong *)Memory::alloc_static(0x14,false);
  if (puVar17 == (ulong *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.");
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true");
  }
  else {
    local_1a0 = puVar17 + 2;
    *puVar17 = 1;
    puVar17[1] = 1;
    if (1 < *puVar17) {
      if (local_1a0 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar4 = puVar17[1];
      uVar21 = 0x10;
      __n = uVar4 * 4;
      if (__n != 0) {
        uVar21 = __n - 1 | __n - 1 >> 1;
        uVar21 = uVar21 | uVar21 >> 2;
        uVar21 = uVar21 | uVar21 >> 4;
        uVar21 = uVar21 | uVar21 >> 8;
        uVar21 = uVar21 | uVar21 >> 0x10;
        uVar21 = (uVar21 | uVar21 >> 0x20) + 0x11;
      }
      puVar18 = (undefined8 *)Memory::alloc_static(uVar21,false);
      puVar17 = local_1a0;
      if (puVar18 == (undefined8 *)0x0) {
        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                         "Parameter \"mem_new\" is null.");
      }
      else {
        puVar1 = puVar18 + 2;
        *puVar18 = 1;
        puVar18[1] = uVar4;
        memcpy(puVar1,local_1a0,__n);
        puVar13 = local_1a0;
        LOCK();
        puVar17 = puVar17 + -2;
        *puVar17 = *puVar17 - 1;
        UNLOCK();
        local_1a0 = puVar1;
        if (*puVar17 == 0) {
          local_1a0 = (ulong *)0x0;
          Memory::free_static(puVar13 + -2,false);
          local_1a0 = puVar1;
        }
      }
    }
    *(undefined4 *)local_1a0 = 0xc;
  }
  StringName::StringName((StringName *)&local_1b0,"load",false);
  local_198 = "ConfigFile";
  local_1b8 = 0;
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_198,(String *)&local_1b8,false);
  ClassDB::set_method_error_return_values
            ((StringName *)&local_198,(StringName *)&local_1b0,local_1a8);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  puVar17 = local_1a0;
  if (local_1a0 != (ulong *)0x0) {
    LOCK();
    puVar1 = local_1a0 + -2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      local_1a0 = (ulong *)0x0;
      Memory::free_static(puVar17 + -2,false);
    }
  }
  local_c8 = 0;
  local_d8 = puVar12;
  puStack_d0 = &_LC55;
  auStack_70._0_8_ = &puStack_d0;
  local_78 = (Variant *)&local_d8;
  D_METHODP((char *)&local_198,(char ***)"load_encrypted",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Error,String_const&,Vector<unsigned_char>const&>
                      (load_encrypted);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  local_e8 = 0;
  local_f8 = puVar12;
  pcStack_f0 = "password";
  auStack_70._0_8_ = &pcStack_f0;
  local_78 = (Variant *)&local_f8;
  D_METHODP((char *)&local_198,(char ***)"load_encrypted_pass",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Error,String_const&,String_const&>(load_encrypted_pass);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_118 = puVar12;
  puStack_110 = &_LC55;
  auStack_70._0_8_ = &puStack_110;
  local_78 = (Variant *)&local_118;
  D_METHODP((char *)&local_198,(char ***)"save_encrypted",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Error,String_const&,Vector<unsigned_char>const&>
                      (save_encrypted);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  local_128 = 0;
  local_138 = puVar12;
  pcStack_130 = "password";
  auStack_70._0_8_ = &pcStack_130;
  local_78 = (Variant *)&local_138;
  D_METHODP((char *)&local_198,(char ***)"save_encrypted_pass",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile,Error,String_const&,String_const&>(save_encrypted_pass);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"clear",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar15 = create_method_bind<ConfigFile>(clear);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar14 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar16 = local_188 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = local_188[-1];
      lVar20 = 0;
      local_188 = (long *)0x0;
      plVar16 = plVar14;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar20 = lVar20 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar3 != lVar20);
      }
      Memory::free_static(plVar14 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::erase_section_key(String const&, String const&) */

void __thiscall ConfigFile::erase_section_key(ConfigFile *this,String *param_1,String *param_2)

{
  HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
  *this_00;
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
  ulong uVar18;
  char cVar19;
  uint uVar20;
  long lVar21;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  *this_01;
  char *pcVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
             *)(this + 0x180);
  if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    lVar21 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
    uVar20 = String::hash();
    uVar18 = CONCAT44(0,uVar1);
    uVar23 = 1;
    if (uVar20 != 0) {
      uVar23 = uVar20;
    }
    lVar28 = *(long *)(this + 400);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar23 * lVar21;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar18;
    lVar26 = SUB168(auVar2 * auVar10,8);
    uVar20 = *(uint *)(lVar28 + lVar26 * 4);
    iVar24 = SUB164(auVar2 * auVar10,8);
    if (uVar20 != 0) {
      uVar29 = 0;
      do {
        if (uVar23 == uVar20) {
          cVar19 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x188) + lVar26 * 8) + 0x10),
                                      param_1);
          if (cVar19 != '\0') {
            lVar21 = HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                     ::operator[](this_00,param_1);
            if ((*(long *)(lVar21 + 8) == 0) || (*(int *)(lVar21 + 0x2c) == 0)) goto LAB_00104a5a;
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar21 + 0x28) * 4);
            lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar21 + 0x28) * 8);
            uVar20 = String::hash();
            uVar18 = CONCAT44(0,uVar1);
            uVar23 = 1;
            if (uVar20 != 0) {
              uVar23 = uVar20;
            }
            lVar26 = *(long *)(lVar21 + 0x10);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar23 * lVar28;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar18;
            lVar27 = SUB168(auVar6 * auVar14,8);
            uVar20 = *(uint *)(lVar26 + lVar27 * 4);
            iVar24 = SUB164(auVar6 * auVar14,8);
            if (uVar20 == 0) goto LAB_00104a5a;
            uVar29 = 0;
            goto LAB_001049c1;
          }
          lVar28 = *(long *)(this + 400);
        }
        uVar29 = uVar29 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar24 + 1) * lVar21;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar18;
        lVar26 = SUB168(auVar3 * auVar11,8);
        uVar20 = *(uint *)(lVar28 + lVar26 * 4);
        iVar24 = SUB164(auVar3 * auVar11,8);
      } while ((uVar20 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar20 * lVar21, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar18, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((uVar1 + iVar24) - SUB164(auVar4 * auVar12,8)) * lVar21,
              auVar13._8_8_ = 0, auVar13._0_8_ = uVar18, uVar29 <= SUB164(auVar5 * auVar13,8)));
    }
  }
  local_60 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_1);
  }
  local_68 = 0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_2);
  }
  local_70 = 0;
  local_50 = 0x34;
  local_58 = "Cannot erase key \"%s\" from nonexistent section \"%s\".";
  String::parse_latin1((StrRange *)&local_70);
  vformat<String,String>
            (&local_58,(StrRange *)&local_70,(CowData<char32_t> *)&local_68,
             (CowData<char32_t> *)&local_60);
  pcVar22 = "Condition \"!values.has(p_section)\" is true.";
  uVar25 = 0x7c;
  goto LAB_0010478a;
LAB_001049c1:
  do {
    if (uVar23 == uVar20) {
      cVar19 = String::operator==((String *)(*(long *)(*(long *)(lVar21 + 8) + lVar27 * 8) + 0x10),
                                  param_2);
      if (cVar19 != '\0') {
        this_01 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                   *)HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                     ::operator[](this_00,param_1);
        HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
        ::erase(this_01,param_2);
        lVar21 = HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                 ::operator[](this_00,param_1);
        if (*(int *)(lVar21 + 0x2c) != 0) goto LAB_00104a2a;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
          ::erase(this_00,param_1);
          return;
        }
        goto LAB_00104b3a;
      }
      lVar26 = *(long *)(lVar21 + 0x10);
    }
    uVar29 = uVar29 + 1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)(iVar24 + 1) * lVar28;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar18;
    lVar27 = SUB168(auVar7 * auVar15,8);
    uVar20 = *(uint *)(lVar26 + lVar27 * 4);
    iVar24 = SUB164(auVar7 * auVar15,8);
  } while ((uVar20 != 0) &&
          (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar20 * lVar28, auVar16._8_8_ = 0,
          auVar16._0_8_ = uVar18, auVar9._8_8_ = 0,
          auVar9._0_8_ = (ulong)((uVar1 + iVar24) - SUB164(auVar8 * auVar16,8)) * lVar28,
          auVar17._8_8_ = 0, auVar17._0_8_ = uVar18, uVar29 <= SUB164(auVar9 * auVar17,8)));
LAB_00104a5a:
  local_60 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_1);
  }
  local_68 = 0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_2);
  }
  local_70 = 0;
  local_50 = 0x34;
  local_58 = "Cannot erase nonexistent key \"%s\" from section \"%s\".";
  String::parse_latin1((StrRange *)&local_70);
  vformat<String,String>
            (&local_58,(StrRange *)&local_70,(CowData<char32_t> *)&local_68,
             (CowData<char32_t> *)&local_60);
  pcVar22 = "Condition \"!values[p_section].has(p_key)\" is true.";
  uVar25 = 0x7d;
LAB_0010478a:
  _err_print_error("erase_section_key","core/io/config_file.cpp",uVar25,pcVar22,
                   (CowData<char32_t> *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00104a2a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104b3a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::set_value(String const&, String const&, Variant const&) */

void __thiscall
ConfigFile::set_value(ConfigFile *this,String *param_1,String *param_2,Variant *param_3)

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
  ulong uVar10;
  char cVar11;
  uint uVar12;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  *pHVar13;
  long lVar14;
  Variant *this_00;
  uint uVar15;
  int iVar16;
  long lVar17;
  HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
  *this_01;
  long lVar18;
  uint uVar19;
  long in_FS_OFFSET;
  String local_80 [8];
  uint local_78 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 == 0) {
    this_01 = (HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
               *)(this + 0x180);
    local_78[0] = 0;
    cVar11 = HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
             ::_lookup_pos(this_01,param_1,local_78);
    if (cVar11 != '\0') {
      pHVar13 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                 *)HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                   ::operator[](this_01,param_1);
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::erase(pHVar13,param_2);
      lVar14 = HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
               ::operator[](this_01,param_1);
      if (*(int *)(lVar14 + 0x2c) == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
          ::erase(this_01,param_1);
          return;
        }
        goto LAB_00104e2f;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      lVar14 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
      uVar12 = String::hash();
      uVar10 = CONCAT44(0,uVar1);
      lVar18 = *(long *)(this + 400);
      uVar15 = 1;
      if (uVar12 != 0) {
        uVar15 = uVar12;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar15 * lVar14;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar10;
      lVar17 = SUB168(auVar2 * auVar6,8);
      uVar12 = *(uint *)(lVar18 + lVar17 * 4);
      iVar16 = SUB164(auVar2 * auVar6,8);
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          if (uVar12 == uVar15) {
            cVar11 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 0x188) + lVar17 * 8) + 0x10),
                                        param_1);
            if (cVar11 != '\0') goto LAB_00104dc2;
            lVar18 = *(long *)(this + 400);
          }
          uVar19 = uVar19 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(iVar16 + 1) * lVar14;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar10;
          lVar17 = SUB168(auVar3 * auVar7,8);
          uVar12 = *(uint *)(lVar18 + lVar17 * 4);
          iVar16 = SUB164(auVar3 * auVar7,8);
        } while ((uVar12 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar12 * lVar14, auVar8._8_8_ = 0,
                auVar8._0_8_ = uVar10, auVar5._8_8_ = 0,
                auVar5._0_8_ = (ulong)((uVar1 + iVar16) - SUB164(auVar4 * auVar8,8)) * lVar14,
                auVar9._8_8_ = 0, auVar9._0_8_ = uVar10, uVar19 <= SUB164(auVar5 * auVar9,8)));
      }
    }
    local_50 = 2;
    local_70 = (undefined1  [16])0x0;
    local_60 = (undefined1  [16])0x0;
    HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
    ::insert(local_80,(HashMap *)(this + 0x180),SUB81(param_1,0));
LAB_00104dc2:
    pHVar13 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
               *)HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                 ::operator[]((HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                               *)(this + 0x180),param_1);
    this_00 = (Variant *)
              HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              ::operator[](pHVar13,param_2);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Variant::operator=(this_00,param_3);
      return;
    }
  }
LAB_00104e2f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_parse(String const&, VariantParser::Stream*) */

int __thiscall ConfigFile::_parse(ConfigFile *this,String *param_1,Stream *param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  long in_FS_OFFSET;
  int local_fc;
  char *local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  long local_b8 [2];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_78 = 0;
  local_b8[0] = 0;
  local_88 = 2;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
LAB_00104f40:
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Variant::operator_cast_to_String((Variant *)&local_c8);
  pcVar7 = local_c8;
  pcVar6 = local_f8;
  if (local_f8 == local_c8) {
    if (local_f8 == (char *)0x0) goto LAB_00104fae;
    LOCK();
    plVar1 = (long *)(local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00104fae;
    local_c8 = (char *)0x0;
    Memory::free_static(pcVar7 + -0x10,false);
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  else {
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
    local_f8 = local_c8;
LAB_00104fae:
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((local_a8._0_8_ != 0) && (local_88._4_4_ != 0)) {
    lVar9 = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4);
    if (uVar3 != 0) {
      do {
        if (*(int *)(local_a8._8_8_ + lVar9) != 0) {
          *(int *)(local_a8._8_8_ + lVar9) = 0;
          pvVar10 = *(void **)(local_a8._0_8_ + lVar9 * 2);
          if (Variant::needs_deinit[*(int *)((long)pvVar10 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if (*(long *)((long)pvVar10 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar10 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar10 + 0x10);
              *(undefined8 *)((long)pvVar10 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          Memory::free_static(pvVar10,false);
          *(undefined8 *)(local_a8._0_8_ + lVar9 * 2) = 0;
        }
        lVar9 = lVar9 + 4;
      } while ((ulong)uVar3 << 2 != lVar9);
    }
    local_88 = local_88 & 0xffffffff;
    local_98 = (undefined1  [16])0x0;
  }
  lVar9 = local_b8[0];
  if (local_b8[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_b8[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8[0] = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
    local_b8[0] = 0;
  }
  iVar8 = VariantParser::parse_tag_assign_eof
                    (param_2,&local_fc,(String *)&local_f0,(Tag *)local_b8,(String *)&local_f8,
                     (Variant *)&local_78,(ResourceParser *)0x0,true);
  if (iVar8 == 0x12) {
    iVar8 = 0;
    goto LAB_00105242;
  }
  if (iVar8 == 0) {
    if ((local_f8 == (char *)0x0) || (*(uint *)(local_f8 + -8) < 2)) {
      if ((local_b8[0] != 0) && (1 < *(uint *)(local_b8[0] + -8))) {
        String::replace((char *)&local_c8,(char *)local_b8);
        if (local_e8 != local_c8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          local_e8 = local_c8;
          local_c8 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      }
    }
    else {
      set_value(this,(String *)&local_e8,(String *)&local_f8,(Variant *)&local_78);
    }
    goto LAB_00104f40;
  }
  local_d0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f0);
  }
  iVar5 = local_fc;
  local_d8 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)param_1);
  }
  local_c8 = "ConfigFile parse error at %s:%d: %s.";
  local_e0 = 0;
  local_c0 = 0x24;
  String::parse_latin1((StrRange *)&local_e0);
  vformat<String,int,String>
            ((Variant *)&local_c8,(StrRange *)&local_e0,(CowData<char32_t> *)&local_d8,iVar5,
             (CowData<char32_t> *)&local_d0);
  _err_print_error("_parse","core/io/config_file.cpp",0x12f,(Variant *)&local_c8,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
LAB_00105242:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((void *)local_a8._0_8_ != (void *)0x0) {
    pvVar10 = (void *)local_a8._0_8_;
    if (local_88._4_4_ != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4);
      if (uVar3 == 0) {
        local_88 = local_88 & 0xffffffff;
        local_98 = (undefined1  [16])0x0;
      }
      else {
        lVar9 = 0;
        do {
          if (*(int *)(local_a8._8_8_ + lVar9) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar9 * 2);
            *(int *)(local_a8._8_8_ + lVar9) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar10 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x10));
            Memory::free_static(pvVar10,false);
            *(undefined8 *)(local_a8._0_8_ + lVar9 * 2) = 0;
            pvVar10 = (void *)local_a8._0_8_;
          }
          lVar9 = lVar9 + 4;
        } while (lVar9 != (ulong)uVar3 * 4);
        local_88 = local_88 & 0xffffffff;
        local_98 = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00105329;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static((void *)local_a8._8_8_,false);
  }
LAB_00105329:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_internal_load(String const&, Ref<FileAccess>) */

undefined4 __thiscall ConfigFile::_internal_load(ConfigFile *this,String *param_1,long *param_3)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  code *local_2048 [1025];
  undefined8 local_40;
  undefined2 local_38;
  undefined4 local_34;
  Object *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_34 = 0;
  local_2048[0] = Variant::Variant;
  local_30 = (Object *)0x0;
  local_38 = 0x100;
  if ((Object *)*param_3 != (Object *)0x0) {
    local_30 = (Object *)*param_3;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_30 = (Object *)0x0;
    }
  }
  uVar3 = _parse(this,param_1,(Stream *)local_2048);
  local_2048[0] = Variant::Variant;
  if (local_30 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_30;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_30);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::load(String const&) */

undefined4 __thiscall ConfigFile::load(ConfigFile *this,String *param_1)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined4 local_34;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_30,(int)param_1,(Error *)0x1);
  pOVar1 = local_30;
  if (local_30 != (Object *)0x0) {
    local_28 = local_30;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_28 = (Object *)0x0;
      local_34 = _internal_load(this,param_1,&local_28);
    }
    else {
      local_34 = _internal_load(this,param_1,&local_28);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    if (((local_30 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_30), cVar2 != '\0')) {
      (**(code **)(*(long *)local_30 + 0x140))(local_30);
      Memory::free_static(local_30,false);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_34;
}



/* ConfigFile::load_encrypted(String const&, Vector<unsigned char> const&) */

int __thiscall ConfigFile::load_encrypted(ConfigFile *this,String *param_1,Vector *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  int local_74;
  Object *local_70;
  Object *local_68;
  Object *local_60;
  Object *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_70,(int)param_1,(Error *)0x1);
  if (local_74 != 0) goto LAB_001057b7;
  local_68 = (Object *)0x0;
  Ref<FileAccessEncrypted>::instantiate<>((Ref<FileAccessEncrypted> *)&local_68);
  pOVar5 = local_68;
  local_50 = 0;
  local_60 = (Object *)0x0;
  if (local_70 != (Object *)0x0) {
    local_60 = local_70;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_60 = (Object *)0x0;
    }
  }
  local_74 = FileAccessEncrypted::open_and_parse(pOVar5,&local_60,param_2,0,1,&local_58);
  if (local_60 == (Object *)0x0) {
    if (local_50 != 0) goto LAB_0010588e;
    if (local_74 == 0) goto LAB_001058b9;
  }
  else {
    cVar3 = RefCounted::unreference();
    pOVar4 = local_60;
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    if (local_50 != 0) {
LAB_0010588e:
      lVar2 = local_50;
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pOVar5 = local_68;
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pOVar5 = local_68;
      }
    }
    if (local_74 == 0) {
      local_58 = (Object *)0x0;
      if (pOVar5 == (Object *)0x0) {
        local_74 = _internal_load(this,param_1,&local_58);
        goto LAB_001057b7;
      }
LAB_001058b9:
      local_58 = (Object *)0x0;
      pOVar4 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&FileAccess::typeinfo,0);
      if (pOVar4 != (Object *)0x0) {
        local_58 = pOVar4;
        cVar3 = RefCounted::reference();
        if (cVar3 != '\0') {
          local_74 = _internal_load(this,param_1,&local_58);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
          goto LAB_00105910;
        }
        local_58 = (Object *)0x0;
      }
      local_74 = _internal_load(this,param_1,&local_58);
    }
LAB_00105910:
    if (pOVar5 == (Object *)0x0) goto LAB_001057b7;
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_001057b7:
  if (((local_70 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
    (**(code **)(*(long *)local_70 + 0x140))(local_70);
    Memory::free_static(local_70,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_74;
}



/* ConfigFile::load_encrypted_pass(String const&, String const&) */

int __thiscall ConfigFile::load_encrypted_pass(ConfigFile *this,String *param_1,String *param_2)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  int local_5c;
  Object *local_58;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_58,(int)param_1,(Error *)0x1);
  if (local_5c != 0) goto LAB_00105ac7;
  local_50 = (Object *)0x0;
  Ref<FileAccessEncrypted>::instantiate<>((Ref<FileAccessEncrypted> *)&local_50);
  pOVar1 = local_50;
  local_48 = (Object *)0x0;
  if (local_58 != (Object *)0x0) {
    local_48 = local_58;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_48 = (Object *)0x0;
    }
  }
  local_5c = FileAccessEncrypted::open_and_parse_password(pOVar1,&local_48,param_2,0);
  if (((local_48 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar3 = local_48, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if (local_5c == 0) {
    local_48 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(pOVar1,&Object::typeinfo,&FileAccess::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      local_48 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        local_5c = _internal_load(this,param_1,&local_48);
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        goto LAB_00105be0;
      }
      local_48 = (Object *)0x0;
    }
    local_5c = _internal_load(this,param_1,&local_48);
  }
LAB_00105be0:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_00105ac7:
  if (((local_58 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
    (**(code **)(*(long *)local_58 + 0x140))(local_58);
    Memory::free_static(local_58,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_5c;
}



/* ConfigFile::parse(String const&) */

undefined4 __thiscall ConfigFile::parse(ConfigFile *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_2060;
  char *local_2058;
  undefined8 local_2050;
  code *local_2048 [1025];
  undefined8 local_40;
  undefined2 local_38;
  undefined4 local_34;
  long local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2048[0] = StringName::StringName;
  local_38 = 0x100;
  local_40 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00105da1;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar2 == lVar4;
      if (bVar5) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_30 = *(long *)param_1;
    }
  }
LAB_00105da1:
  local_2060 = 0;
  local_2058 = "<string>";
  local_2050 = 8;
  String::parse_latin1((StrRange *)&local_2060);
  uVar3 = _parse(this,(String *)&local_2060,(Stream *)local_2048);
  lVar2 = local_2060;
  if (local_2060 != 0) {
    LOCK();
    plVar1 = (long *)(local_2060 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_2060 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_30;
  local_2048[0] = StringName::StringName;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
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



/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::_gen_argument_type(int) const
    */

int __thiscall
MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::_gen_argument_type
          (MethodBindTR<Error,String_const&,Vector<unsigned_char>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffe7) + 0x1d;
  }
  return iVar1;
}



/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::get_argument_meta(int) const */

undefined8
MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&>::_gen_argument_type
          (MethodBindTR<Error,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<Error, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&,String_const&>::_gen_argument_type
          (MethodBindT<String_const&,String_const&> *this,int param_1)

{
  return (ulong)((uint)param_1 < 2) << 2;
}



/* MethodBindT<String const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<String>, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector<String>,String_const&>::_gen_argument_type
          (MethodBindTRC<Vector<String>,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe2) + 0x22;
}



/* MethodBindTRC<Vector<String>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<String>,String_const&>::get_argument_meta(int param_1)

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



/* MethodBindTRC<bool, String const&, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,String_const&,String_const&>::_gen_argument_type
          (MethodBindTRC<bool,String_const&,String_const&> *this,int param_1)

{
  return (-((uint)param_1 < 2) & 3U) + 1;
}



/* MethodBindTRC<bool, String const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,String_const&,String_const&>::get_argument_meta(int param_1)

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



/* MethodBindTRC<Variant, String const&, String const&, Variant const&>::_gen_argument_type(int)
   const */

long __thiscall
MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::_gen_argument_type
          (MethodBindTRC<Variant,String_const&,String_const&,Variant_const&> *this,int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if ((uint)param_1 < 3) {
    lVar1 = (ulong)((uint)param_1 < 2) << 2;
  }
  return lVar1;
}



/* MethodBindTRC<Variant, String const&, String const&, Variant const&>::get_argument_meta(int)
   const */

undefined8
MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, String const&, Variant const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&,String_const&,Variant_const&>::_gen_argument_type
          (MethodBindT<String_const&,String_const&,Variant_const&> *this,int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if ((uint)param_1 < 3) {
    lVar1 = (ulong)((uint)param_1 < 2) << 2;
  }
  return lVar1;
}



/* MethodBindT<String const&, String const&, Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&,String_const&,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, String const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&,Variant_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112960;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, String const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&,Variant_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112960;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Variant, String const&, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Variant,String_const&,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001129c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Variant, String const&, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Variant,String_const&,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001129c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, String const&, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&,String_const&>::~MethodBindTRC
          (MethodBindTRC<bool,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, String const&, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&,String_const&>::~MethodBindTRC
          (MethodBindTRC<bool,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ae0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ae0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<String>, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<String>,String_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<String>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112b40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<String>, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<String>,String_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<String>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112b40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ba0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ba0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112c00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112c00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112c60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112c60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112cc0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112cc0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112d20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112d20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112d80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112d80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112de0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112de0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
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
      goto joined_r0x001065fc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001065fc:
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
  local_48 = &_LC0;
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
      goto joined_r0x0010677c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010677c:
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



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* void Ref<FileAccessEncrypted>::instantiate<>() */

void __thiscall Ref<FileAccessEncrypted>::instantiate<>(Ref<FileAccessEncrypted> *this)

{
  char cVar1;
  RefCounted *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (RefCounted *)operator_new(0x1f0,"");
  RefCounted::RefCounted(this_00);
  *(undefined2 *)(this_00 + 0x17c) = 0;
  *(undefined4 *)(this_00 + 0x180) = 2;
  *(undefined2 *)(this_00 + 0x184) = 0;
  *(undefined8 *)(this_00 + 0x188) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined8 *)(this_00 + 0x198) = 0;
  *(undefined8 *)(this_00 + 0x1a8) = 0;
  this_00[0x1b0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b8) = 0;
  *(undefined8 *)(this_00 + 0x1d8) = 0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  *(undefined2 *)(this_00 + 0x1e8) = 0x100;
  *(undefined1 (*) [16])(this_00 + 0x1c0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (RefCounted *)pOVar3) goto LAB_00106c35;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00106c35;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00106c35:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
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



/* WARNING: Removing unreachable block (ram,0x00106ee0) */
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
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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



/* WARNING: Removing unreachable block (ram,0x00107198) */
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



/* WARNING: Removing unreachable block (ram,0x001074e0) */
/* String vformat<String, int, String>(String const&, String const, int const, String const) */

undefined8 *
vformat<String,int,String>
          (undefined8 *param_1,bool *param_2,String *param_3,int param_4,String *param_5)

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
  local_f0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
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



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
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



/* HashMap<String, HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > > > > >::_lookup_pos(String const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
::_lookup_pos(HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
              *this,String *param_1,uint *param_2)

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
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
::_lookup_pos(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              *this,String *param_1,uint *param_2)

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
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* MethodBind* create_method_bind<ConfigFile, String const&, String const&, Variant const&>(void
   (ConfigFile::*)(String const&, String const&, Variant const&)) */

MethodBind *
create_method_bind<ConfigFile,String_const&,String_const&,Variant_const&>
          (_func_void_String_ptr_String_ptr_Variant_ptr *param_1)

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
  *(_func_void_String_ptr_String_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112960;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, Variant, String const&, String const&, Variant
   const&>(Variant (ConfigFile::*)(String const&, String const&, Variant const&) const) */

MethodBind *
create_method_bind<ConfigFile,Variant,String_const&,String_const&,Variant_const&>
          (_func_Variant_String_ptr_String_ptr_Variant_ptr *param_1)

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
  *(_func_Variant_String_ptr_String_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001129c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, bool, String const&>(bool (ConfigFile::*)(String
   const&) const) */

MethodBind * create_method_bind<ConfigFile,bool,String_const&>(_func_bool_String_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00112a20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, bool, String const&, String const&>(bool
   (ConfigFile::*)(String const&, String const&) const) */

MethodBind *
create_method_bind<ConfigFile,bool,String_const&,String_const&>
          (_func_bool_String_ptr_String_ptr *param_1)

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
  *(_func_bool_String_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112a80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, Vector<String>>(Vector<String> (ConfigFile::*)()
   const) */

MethodBind * create_method_bind<ConfigFile,Vector<String>>(_func_Vector *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00112ae0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, Vector<String>, String const&>(Vector<String>
   (ConfigFile::*)(String const&) const) */

MethodBind *
create_method_bind<ConfigFile,Vector<String>,String_const&>(_func_Vector_String_ptr *param_1)

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
  *(_func_Vector_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112b40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, String const&>(void (ConfigFile::*)(String const&)) */

MethodBind * create_method_bind<ConfigFile,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112ba0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, String const&, String const&>(void
   (ConfigFile::*)(String const&, String const&)) */

MethodBind *
create_method_bind<ConfigFile,String_const&,String_const&>
          (_func_void_String_ptr_String_ptr *param_1)

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
  *(_func_void_String_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112c00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, Error, String const&>(Error (ConfigFile::*)(String
   const&)) */

MethodBind * create_method_bind<ConfigFile,Error,String_const&>(_func_Error_String_ptr *param_1)

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
  *(_func_Error_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112c60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, String>(String (ConfigFile::*)() const) */

MethodBind * create_method_bind<ConfigFile,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112cc0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, Error, String const&, Vector<unsigned char>
   const&>(Error (ConfigFile::*)(String const&, Vector<unsigned char> const&)) */

MethodBind *
create_method_bind<ConfigFile,Error,String_const&,Vector<unsigned_char>const&>
          (_func_Error_String_ptr_Vector_ptr *param_1)

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
  *(_func_Error_String_ptr_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112d20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile, Error, String const&, String const&>(Error
   (ConfigFile::*)(String const&, String const&)) */

MethodBind *
create_method_bind<ConfigFile,Error,String_const&,String_const&>
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
  *(undefined ***)this = &PTR__gen_argument_type_00112d80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* MethodBind* create_method_bind<ConfigFile>(void (ConfigFile::*)()) */

MethodBind * create_method_bind<ConfigFile>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00112de0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ConfigFile";
  local_30 = 10;
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



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "Error";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x108d70);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00108e85;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
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
LAB_00108e85:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<String>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<String>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010903e(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ConfigFile::_bind_methods() [clone .cold] */

void ConfigFile::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* HashMap<String, HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > > > > >::_resize_and_rehash(unsigned int)
    */

void __thiscall
HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
::_resize_and_rehash
          (HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
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



/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
::_resize_and_rehash
          (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
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
/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::operator[](String const&) */

Variant * __thiscall
HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
::operator[](HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
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
  char cVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  void *__s_00;
  int iVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  undefined8 *puVar34;
  uint uVar35;
  long in_FS_OFFSET;
  uint local_d8;
  Variant *local_b8;
  uint local_9c;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00109a45:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar30 = (ulong)uVar21;
    uVar29 = uVar30 * 4;
    uVar32 = uVar30 * 8;
    uVar24 = Memory::alloc_static(uVar29,false);
    *(undefined8 *)(this + 0x10) = uVar24;
    __s_00 = (void *)Memory::alloc_static(uVar32,false);
    *(void **)(this + 8) = __s_00;
    if (uVar21 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar32)) && (__s_00 < (void *)((long)__s + uVar29))) {
        uVar29 = 0;
        do {
          *(undefined4 *)((long)__s + uVar29 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar29 * 8) = 0;
          uVar29 = uVar29 + 1;
        } while (uVar30 != uVar29);
      }
      else {
        memset(__s,0,uVar29);
        memset(__s_00,0,uVar32);
      }
    }
  }
  else if (*(int *)(this + 0x2c) == 0) {
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
  }
  else {
    uVar29 = CONCAT44(0,uVar21);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar22 = String::hash();
    lVar33 = *(long *)(this + 0x10);
    uVar26 = 1;
    if (uVar22 != 0) {
      uVar26 = uVar22;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar26 * lVar3;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar29;
    lVar28 = SUB168(auVar8 * auVar16,8);
    uVar22 = *(uint *)(lVar33 + lVar28 * 4);
    uVar31 = SUB164(auVar8 * auVar16,8);
    if (uVar22 == 0) {
      lVar27 = *(long *)(this + 8);
    }
    else {
      lVar27 = *(long *)(this + 8);
      uVar35 = 0;
      do {
        if (uVar22 == uVar26) {
          cVar20 = String::operator==((String *)(*(long *)(lVar27 + lVar28 * 8) + 0x10),param_1);
          if (cVar20 != '\0') {
            local_b8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar31 * 8) + 0x18);
            goto LAB_00109909;
          }
          lVar33 = *(long *)(this + 0x10);
          lVar27 = *(long *)(this + 8);
        }
        uVar35 = uVar35 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar31 + 1) * lVar3;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar29;
        lVar28 = SUB168(auVar9 * auVar17,8);
        uVar22 = *(uint *)(lVar33 + lVar28 * 4);
        uVar31 = SUB164(auVar9 * auVar17,8);
      } while ((uVar22 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar22 * lVar3, auVar18._8_8_ = 0,
              auVar18._0_8_ = uVar29, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar31 + uVar21) - SUB164(auVar10 * auVar18,8)) * lVar3,
              auVar19._8_8_ = 0, auVar19._0_8_ = uVar29, uVar35 <= SUB164(auVar11 * auVar19,8)));
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
    uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (lVar27 == 0) goto LAB_00109a45;
  }
  local_9c = 0;
  cVar20 = _lookup_pos(this,param_1,&local_9c);
  if (cVar20 == '\0') {
    if ((float)uVar21 * __LC48 < (float)(*(int *)(this + 0x2c) + 1)) {
      if (*(int *)(this + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_b8 = (Variant *)0x18;
        goto LAB_001098f0;
      }
      _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    }
    local_68 = 0;
    local_78 = (undefined1  [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
    }
    Variant::Variant((Variant *)local_60,(Variant *)local_98);
    puVar23 = (undefined8 *)operator_new(0x30,"");
    puVar23[2] = 0;
    *puVar23 = local_78._0_8_;
    puVar23[1] = local_78._8_8_;
    if (local_68 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar23 + 2),(CowData *)&local_68);
    }
    local_b8 = (Variant *)(puVar23 + 3);
    Variant::Variant(local_b8,(Variant *)local_60);
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar23;
    }
    else {
      **(undefined8 **)(this + 0x20) = puVar23;
      puVar23[1] = *(undefined8 *)(this + 0x20);
    }
    *(undefined8 **)(this + 0x20) = puVar23;
    uVar21 = String::hash();
    lVar3 = *(long *)(this + 0x10);
    uVar29 = 1;
    if (uVar21 != 0) {
      uVar29 = (ulong)uVar21;
    }
    uVar31 = 0;
    lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar22 = (uint)uVar29;
    uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar32 = CONCAT44(0,uVar21);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar29 * lVar33;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar32;
    lVar27 = SUB168(auVar4 * auVar12,8);
    lVar28 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar3 + lVar27 * 4);
    iVar25 = SUB164(auVar4 * auVar12,8);
    uVar26 = *puVar1;
    while (uVar26 != 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar26 * lVar33;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)((iVar25 + uVar21) - SUB164(auVar5 * auVar13,8)) * lVar33;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar32;
      local_d8 = SUB164(auVar6 * auVar14,8);
      puVar34 = puVar23;
      if (local_d8 < uVar31) {
        *puVar1 = (uint)uVar29;
        uVar29 = (ulong)uVar26;
        puVar2 = (undefined8 *)(lVar28 + lVar27 * 8);
        puVar34 = (undefined8 *)*puVar2;
        *puVar2 = puVar23;
        uVar31 = local_d8;
      }
      uVar22 = (uint)uVar29;
      uVar31 = uVar31 + 1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)(iVar25 + 1) * lVar33;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar32;
      lVar27 = SUB168(auVar7 * auVar15,8);
      puVar1 = (uint *)(lVar3 + lVar27 * 4);
      iVar25 = SUB164(auVar7 * auVar15,8);
      puVar23 = puVar34;
      uVar26 = *puVar1;
    }
    *(undefined8 **)(lVar28 + lVar27 * 8) = puVar23;
    *puVar1 = uVar22;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar29 = (ulong)local_9c;
    Variant::operator=((Variant *)(*(long *)(*(long *)(this + 8) + uVar29 * 8) + 0x18),
                       (Variant *)local_98);
    local_b8 = (Variant *)(*(long *)(*(long *)(this + 8) + uVar29 * 8) + 0x18);
  }
LAB_001098f0:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00109909:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Error>::_realloc(long) */

undefined8 __thiscall CowData<Error>::_realloc(CowData<Error> *this,long param_1)

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
/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::insert(String const&, Variant const&,
   bool) */

String * HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
         ::insert(String *param_1,Variant *param_2,bool param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
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
  undefined8 *puVar20;
  char cVar21;
  uint uVar22;
  undefined8 uVar23;
  void *__s_00;
  ulong uVar24;
  Variant *in_RCX;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined7 in_register_00000011;
  String *pSVar29;
  long lVar30;
  long lVar31;
  char in_R8B;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  undefined8 *puVar36;
  uint uVar37;
  long in_FS_OFFSET;
  uint local_a8;
  undefined8 *local_90;
  long local_68;
  int local_60 [8];
  long local_40;
  
  pSVar29 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar35 = (ulong)uVar25;
    uVar24 = uVar35 * 4;
    uVar33 = uVar35 * 8;
    uVar23 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 0x10) = uVar23;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar25 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar35 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar33);
      }
      goto LAB_00109c8f;
    }
    iVar26 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00109c9d;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00109ee0;
LAB_00109cbf:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (undefined8 *)0x0;
      goto LAB_00109e8f;
    }
    _resize_and_rehash((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00109c8f:
    iVar26 = *(int *)(param_2 + 0x2c);
    if (iVar26 != 0) {
LAB_00109ee0:
      uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = String::hash();
      uVar24 = CONCAT44(0,uVar22);
      lVar34 = *(long *)(param_2 + 0x10);
      uVar27 = 1;
      if (uVar32 != 0) {
        uVar27 = uVar32;
      }
      uVar37 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar27 * lVar3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar24;
      lVar31 = SUB168(auVar8 * auVar16,8);
      uVar32 = *(uint *)(lVar34 + lVar31 * 4);
      uVar28 = SUB164(auVar8 * auVar16,8);
      if (uVar32 != 0) {
        do {
          if (uVar32 == uVar27) {
            cVar21 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10),
                                        pSVar29);
            if (cVar21 != '\0') {
              Variant::operator=((Variant *)
                                 (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8) + 0x18),
                                 in_RCX);
              local_90 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
              goto LAB_00109e8f;
            }
            lVar34 = *(long *)(param_2 + 0x10);
          }
          uVar37 = uVar37 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar28 + 1) * lVar3;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar24;
          lVar31 = SUB168(auVar9 * auVar17,8);
          uVar32 = *(uint *)(lVar34 + lVar31 * 4);
          uVar28 = SUB164(auVar9 * auVar17,8);
        } while ((uVar32 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar32 * lVar3, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar24, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar22 + uVar28) - SUB164(auVar10 * auVar18,8)) * lVar3,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar24, uVar37 <= SUB164(auVar11 * auVar19,8)));
      }
      iVar26 = *(int *)(param_2 + 0x2c);
    }
LAB_00109c9d:
    if ((float)uVar25 * __LC48 < (float)(iVar26 + 1)) goto LAB_00109cbf;
  }
  local_68 = 0;
  if (*(long *)pSVar29 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pSVar29);
  }
  Variant::Variant((Variant *)local_60,in_RCX);
  local_90 = (undefined8 *)operator_new(0x30,"");
  local_90[2] = 0;
  *local_90 = 0;
  local_90[1] = 0;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 2),(CowData *)&local_68);
  }
  Variant::Variant((Variant *)(local_90 + 3),(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = local_90;
    *(undefined8 **)(param_2 + 0x20) = local_90;
  }
  else if (in_R8B == '\0') {
    **(undefined8 **)(param_2 + 0x20) = local_90;
    local_90[1] = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 **)(param_2 + 0x20) = local_90;
  }
  else {
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = local_90;
    *local_90 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = local_90;
  }
  uVar22 = String::hash();
  lVar3 = *(long *)(param_2 + 0x10);
  uVar25 = 1;
  if (uVar22 != 0) {
    uVar25 = uVar22;
  }
  uVar32 = 0;
  uVar24 = (ulong)uVar25;
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar22);
  lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar24 * lVar34;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar33;
  lVar30 = SUB168(auVar4 * auVar12,8);
  lVar31 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar3 + lVar30 * 4);
  iVar26 = SUB164(auVar4 * auVar12,8);
  uVar27 = *puVar2;
  puVar20 = local_90;
  while (uVar27 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar27 * lVar34;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)((uVar22 + iVar26) - SUB164(auVar5 * auVar13,8)) * lVar34;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    local_a8 = SUB164(auVar6 * auVar14,8);
    puVar36 = puVar20;
    if (local_a8 < uVar32) {
      *puVar2 = (uint)uVar24;
      uVar24 = (ulong)uVar27;
      puVar1 = (undefined8 *)(lVar31 + lVar30 * 8);
      puVar36 = (undefined8 *)*puVar1;
      *puVar1 = puVar20;
      uVar32 = local_a8;
    }
    uVar25 = (uint)uVar24;
    uVar32 = uVar32 + 1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)(iVar26 + 1) * lVar34;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar33;
    lVar30 = SUB168(auVar7 * auVar15,8);
    puVar2 = (uint *)(lVar3 + lVar30 * 4);
    iVar26 = SUB164(auVar7 * auVar15,8);
    puVar20 = puVar36;
    uVar27 = *puVar2;
  }
  *(undefined8 **)(lVar31 + lVar30 * 8) = puVar20;
  *puVar2 = uVar25;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00109e8f:
  *(undefined8 **)param_1 = local_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > >
   const&) */

void __thiscall
HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
::operator=(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  String local_48 [8];
  long local_40;
  ulong uVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
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
            if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 * 4 != lVar6);
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
            goto LAB_0010a259;
          }
        } while (uVar2 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_0010a259:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
      do {
        insert(local_48,(Variant *)this,(bool)((char)plVar5 + '\x10'));
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
/* HashMap<String, HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > > > > >::insert(String const&,
   HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > > const&, bool) */

String * HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
         ::insert(String *param_1,HashMap *param_2,bool param_3)

{
  int *piVar1;
  uint *puVar2;
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
  long *plVar19;
  char cVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  void *pvVar26;
  HashMap *in_RCX;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined7 in_register_00000011;
  String *pSVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  undefined8 *puVar35;
  char in_R8B;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  int *piVar39;
  ulong uVar40;
  long *plVar41;
  undefined8 *puVar42;
  uint uVar43;
  long in_FS_OFFSET;
  uint local_d8;
  String local_90 [8];
  undefined1 local_88 [16];
  long local_78;
  Variant local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pSVar31 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar40 = (ulong)uVar28;
    uVar22 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    uVar25 = Memory::alloc_static(uVar22,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    pvVar26 = (void *)Memory::alloc_static(uVar37,false);
    *(void **)(param_2 + 8) = pvVar26;
    if (uVar28 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)pvVar26 + uVar37)) && (pvVar26 < (void *)((long)__s + uVar22))) {
        uVar22 = 0;
        do {
          *(undefined4 *)((long)__s + uVar22 * 4) = 0;
          *(undefined8 *)((long)pvVar26 + uVar22 * 8) = 0;
          uVar22 = uVar22 + 1;
        } while (uVar40 != uVar22);
      }
      else {
        memset(__s,0,uVar22);
        memset(pvVar26,0,uVar37);
      }
      goto LAB_0010a3f7;
    }
    iVar34 = *(int *)(param_2 + 0x2c);
    if (pvVar26 == (void *)0x0) goto LAB_0010a40a;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010a860;
LAB_0010a42c:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar23 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a809;
    }
    _resize_and_rehash((HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0010a3f7:
    iVar34 = *(int *)(param_2 + 0x2c);
    if (iVar34 != 0) {
LAB_0010a860:
      uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar36 = String::hash();
      uVar22 = CONCAT44(0,uVar21);
      lVar38 = *(long *)(param_2 + 0x10);
      uVar29 = 1;
      if (uVar36 != 0) {
        uVar29 = uVar36;
      }
      uVar43 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar29 * lVar24;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar22;
      lVar33 = SUB168(auVar7 * auVar15,8);
      uVar36 = *(uint *)(lVar38 + lVar33 * 4);
      uVar30 = SUB164(auVar7 * auVar15,8);
      if (uVar36 != 0) {
        do {
          if (uVar36 == uVar29) {
            cVar20 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar33 * 8) + 0x10),
                                        pSVar31);
            if (cVar20 != '\0') {
              HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              ::operator=((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                           *)(*(long *)(*(long *)(param_2 + 8) + (ulong)uVar30 * 8) + 0x18),in_RCX);
              plVar23 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar30 * 8);
              goto LAB_0010a809;
            }
            lVar38 = *(long *)(param_2 + 0x10);
          }
          uVar43 = uVar43 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar30 + 1) * lVar24;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar22;
          lVar33 = SUB168(auVar8 * auVar16,8);
          uVar36 = *(uint *)(lVar38 + lVar33 * 4);
          uVar30 = SUB164(auVar8 * auVar16,8);
        } while ((uVar36 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar36 * lVar24, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar22, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar21 + uVar30) - SUB164(auVar9 * auVar17,8)) * lVar24,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar22, uVar43 <= SUB164(auVar10 * auVar18,8)));
      }
      iVar34 = *(int *)(param_2 + 0x2c);
    }
LAB_0010a40a:
    if ((float)uVar28 * __LC48 < (float)(iVar34 + 1)) goto LAB_0010a42c;
  }
  local_78 = 0;
  local_88 = (undefined1  [16])0x0;
  if (*(long *)pSVar31 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pSVar31);
  }
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  uVar22 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4) <=
          *(uint *)(hash_table_size_primes + uVar22 * 4)) {
        local_48 = uVar22 & 0xffffffff;
        puVar42 = (undefined8 *)0x0;
        if (*(int *)(in_RCX + 0x2c) != 0) goto LAB_0010a4fc;
        iVar34 = 0;
        goto LAB_0010a542;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  puVar42 = (undefined8 *)0x0;
  iVar34 = *(int *)(in_RCX + 0x2c);
  if (*(int *)(in_RCX + 0x2c) != 0) {
LAB_0010a4fc:
    plVar23 = *(long **)(in_RCX + 0x18);
    if (plVar23 == (long *)0x0) {
      iVar34 = 0;
      puVar42 = (undefined8 *)0x0;
    }
    else {
      do {
        HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
        ::insert(local_90,local_70,(bool)((char)plVar23 + '\x10'));
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
      puVar42 = (undefined8 *)local_68._0_8_;
      iVar34 = local_48._4_4_;
    }
  }
LAB_0010a542:
  plVar23 = (long *)operator_new(0x48,"");
  plVar23[2] = 0;
  *plVar23 = local_88._0_8_;
  plVar23[1] = local_88._8_8_;
  if (local_78 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar23 + 2),(CowData *)&local_78);
  }
  plVar23[8] = 0;
  *(undefined1 (*) [16])(plVar23 + 4) = (undefined1  [16])0x0;
  uVar28 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
  *(undefined1 (*) [16])(plVar23 + 6) = (undefined1  [16])0x0;
  lVar24 = 1;
  if (5 < uVar28) {
    do {
      if (uVar28 <= *(uint *)(hash_table_size_primes + lVar24 * 4)) {
        *(int *)(plVar23 + 8) = (int)lVar24;
        if (iVar34 != 0) goto LAB_0010a5f9;
        goto LAB_0010a960;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  if (iVar34 == 0) {
LAB_0010a960:
    piVar27 = (int *)local_68._8_8_;
    if (puVar42 != (undefined8 *)0x0) goto LAB_0010a6cb;
  }
  else {
LAB_0010a5f9:
    for (puVar35 = (undefined8 *)local_58._0_8_; puVar35 != (undefined8 *)0x0;
        puVar35 = (undefined8 *)*puVar35) {
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::insert(local_90,(Variant *)(plVar23 + 3),(bool)((char)puVar35 + '\x10'));
    }
    if (puVar42 != (undefined8 *)0x0) {
      piVar27 = (int *)local_68._8_8_;
      if (uVar28 != 0) {
        piVar1 = (int *)(local_68._8_8_ + (ulong)uVar28 * 4);
        puVar35 = puVar42;
        piVar39 = (int *)local_68._8_8_;
        do {
          if (*piVar39 != 0) {
            pvVar26 = (void *)*puVar35;
            *piVar39 = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar26 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar26 + 0x10));
            Memory::free_static(pvVar26,false);
            *puVar35 = 0;
          }
          piVar39 = piVar39 + 1;
          puVar35 = puVar35 + 1;
        } while (piVar39 != piVar1);
      }
LAB_0010a6cb:
      Memory::free_static(puVar42,false);
      Memory::free_static(piVar27,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  puVar42 = *(undefined8 **)(param_2 + 0x20);
  if (puVar42 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar23;
    *(long **)(param_2 + 0x20) = plVar23;
  }
  else if (in_R8B == '\0') {
    *puVar42 = plVar23;
    plVar23[1] = (long)puVar42;
    *(long **)(param_2 + 0x20) = plVar23;
  }
  else {
    lVar24 = *(long *)(param_2 + 0x18);
    *(long **)(lVar24 + 8) = plVar23;
    *plVar23 = lVar24;
    *(long **)(param_2 + 0x18) = plVar23;
  }
  uVar21 = String::hash();
  uVar28 = 1;
  if (uVar21 != 0) {
    uVar28 = uVar21;
  }
  lVar24 = *(long *)(param_2 + 0x10);
  uVar36 = 0;
  uVar22 = (ulong)uVar28;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar37 = CONCAT44(0,uVar21);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar22 * lVar38;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar37;
  lVar32 = SUB168(auVar3 * auVar11,8);
  lVar33 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar24 + lVar32 * 4);
  iVar34 = SUB164(auVar3 * auVar11,8);
  uVar29 = *puVar2;
  plVar19 = plVar23;
  while (uVar29 != 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar29 * lVar38;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar37;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)((iVar34 + uVar21) - SUB164(auVar4 * auVar12,8)) * lVar38;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar37;
    local_d8 = SUB164(auVar5 * auVar13,8);
    plVar41 = plVar19;
    if (local_d8 < uVar36) {
      *puVar2 = (uint)uVar22;
      uVar22 = (ulong)uVar29;
      puVar42 = (undefined8 *)(lVar33 + lVar32 * 8);
      plVar41 = (long *)*puVar42;
      *puVar42 = plVar19;
      uVar36 = local_d8;
    }
    uVar28 = (uint)uVar22;
    uVar36 = uVar36 + 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)(iVar34 + 1) * lVar38;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar37;
    lVar32 = SUB168(auVar6 * auVar14,8);
    puVar2 = (uint *)(lVar24 + lVar32 * 4);
    iVar34 = SUB164(auVar6 * auVar14,8);
    plVar19 = plVar41;
    uVar29 = *puVar2;
  }
  *(long **)(lVar33 + lVar32 * 8) = plVar19;
  *puVar2 = uVar28;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010a809:
  *(long **)param_1 = plVar23;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > > > > >::operator[](String const&) */

undefined8 * __thiscall
HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
::operator[](HashMap<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  uint local_c0;
  uint local_bc;
  HashMap local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  long local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  cVar12 = _lookup_pos(this,param_1,&local_c0);
  if (cVar12 == '\0') {
    local_90 = 2;
    uVar14 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    if (*(long *)(this + 8) == 0) {
      uVar25 = (ulong)uVar14;
      uVar15 = uVar25 * 4;
      uVar23 = uVar25 * 8;
      uVar18 = Memory::alloc_static(uVar15,false);
      *(undefined8 *)(this + 0x10) = uVar18;
      __s_00 = (void *)Memory::alloc_static(uVar23,false);
      *(void **)(this + 8) = __s_00;
      if (uVar14 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar23)) && (__s_00 < (void *)((long)__s + uVar15))) {
          uVar15 = 0;
          do {
            *(undefined4 *)((long)__s + uVar15 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar15 * 8) = 0;
            uVar15 = uVar15 + 1;
          } while (uVar25 != uVar15);
        }
        else {
          memset(__s,0,uVar15);
          memset(__s_00,0,uVar23);
        }
      }
    }
    local_bc = 0;
    cVar12 = _lookup_pos(this,param_1,&local_bc);
    if (cVar12 == '\0') {
      if ((float)uVar14 * __LC48 < (float)(*(int *)(this + 0x2c) + 1)) {
        if (*(int *)(this + 0x28) == 0x1c) {
          puVar16 = (undefined8 *)0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0010ae8a;
        }
        _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
      }
      local_78[0] = 0;
      local_88 = (undefined1  [16])0x0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)param_1);
      }
      lVar17 = local_78[0];
      auVar4 = local_88;
      local_48 = 0;
      uVar15 = 1;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      do {
        if (0x16 < *(uint *)(hash_table_size_primes + uVar15 * 4)) {
          local_d8 = uVar15 & 0xffffffff;
          local_48 = uVar15 & 0xffffffff;
          goto LAB_0010acca;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x1d);
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
      local_d8 = 0;
LAB_0010acca:
      puVar16 = (undefined8 *)operator_new(0x48,"");
      local_e8 = auVar4._0_8_;
      uStack_e0 = auVar4._8_8_;
      puVar16[2] = 0;
      *puVar16 = local_e8;
      puVar16[1] = uStack_e0;
      if (lVar17 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar16 + 2),(CowData *)local_78);
      }
      lVar17 = 1;
      puVar16[8] = 0;
      *(undefined1 (*) [16])(puVar16 + 4) = (undefined1  [16])0x0;
      uVar14 = *(uint *)(hash_table_size_primes + local_d8 * 4);
      *(undefined1 (*) [16])(puVar16 + 6) = (undefined1  [16])0x0;
      if (5 < uVar14) {
        do {
          if (uVar14 <= *(uint *)(hash_table_size_primes + lVar17 * 4)) {
            *(int *)(puVar16 + 8) = (int)lVar17;
            goto LAB_0010ad71;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x1d);
        _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                         "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0
                         ,0);
      }
LAB_0010ad71:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      puVar27 = *(undefined8 **)(this + 0x20);
      if (puVar27 == (undefined8 *)0x0) {
        *(undefined8 **)(this + 0x18) = puVar16;
      }
      else {
        *puVar27 = puVar16;
        puVar16[1] = puVar27;
      }
      *(undefined8 **)(this + 0x20) = puVar16;
      uVar13 = String::hash();
      lVar17 = *(long *)(this + 0x10);
      uVar14 = 1;
      if (uVar13 != 0) {
        uVar14 = uVar13;
      }
      uVar23 = (ulong)uVar14;
      uVar13 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar15 = CONCAT44(0,uVar13);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar23 * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      lVar20 = SUB168(auVar4 * auVar8,8);
      lVar3 = *(long *)(this + 8);
      puVar24 = (uint *)(lVar17 + lVar20 * 4);
      iVar19 = SUB164(auVar4 * auVar8,8);
      uVar21 = *puVar24;
      puVar27 = puVar16;
      if (uVar21 != 0) {
        uVar22 = 0;
        puVar26 = puVar16;
        do {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar21 * lVar2;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar15;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)((uVar13 + iVar19) - SUB164(auVar5 * auVar9,8)) * lVar2;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar15;
          uVar14 = SUB164(auVar6 * auVar10,8);
          puVar27 = puVar26;
          if (uVar14 < uVar22) {
            *puVar24 = (uint)uVar23;
            uVar23 = (ulong)uVar21;
            puVar1 = (undefined8 *)(lVar3 + lVar20 * 8);
            puVar27 = (undefined8 *)*puVar1;
            *puVar1 = puVar26;
            uVar22 = uVar14;
          }
          uVar14 = (uint)uVar23;
          uVar22 = uVar22 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(iVar19 + 1) * lVar2;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar15;
          lVar20 = SUB168(auVar7 * auVar11,8);
          puVar24 = (uint *)(lVar17 + lVar20 * 4);
          iVar19 = SUB164(auVar7 * auVar11,8);
          uVar21 = *puVar24;
          puVar26 = puVar27;
        } while (uVar21 != 0);
      }
      *(undefined8 **)(lVar3 + lVar20 * 8) = puVar27;
      *puVar24 = uVar14;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      uVar15 = (ulong)local_bc;
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator=((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                   *)(*(long *)(*(long *)(this + 8) + uVar15 * 8) + 0x18),local_b8);
      puVar16 = *(undefined8 **)(*(long *)(this + 8) + uVar15 * 8);
    }
  }
  else {
    puVar16 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_c0 * 8);
  }
LAB_0010ae8a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar16 + 3;
}



/* WARNING: Removing unreachable block (ram,0x0010b148) */
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



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
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
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b490;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
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
LAB_0010b490:
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010b89f;
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
                    /* WARNING: Could not recover jumptable at 0x0010b746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b89f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010ba5f;
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
                    /* WARNING: Could not recover jumptable at 0x0010b906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010ba5f:
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
  uint uVar1;
  code *pcVar2;
  long *plVar3;
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
      goto LAB_0010bac9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010bac9:
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
  uint uVar1;
  code *pcVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010bc8d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010bc8d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::validated_call
          (MethodBindTR<Error,String_const&,Vector<unsigned_char>const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
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
      goto LAB_0010be7d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8,*(long *)(param_2[1] + 8) + 0x10);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010be7d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::ptrcall
          (MethodBindTR<Error,String_const&,Vector<unsigned_char>const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010c03d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010c03d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
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
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c330;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_0010c330:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10b318;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c56c;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010c56c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10b318;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c73d;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010c73d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&>::validated_call
          (MethodBindTR<Error,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010c8ec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010c8ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&>::ptrcall
          (MethodBindTR<Error,String_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010cac8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010cac8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<String_const&,String_const&>::validated_call
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010ce1f;
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
                    /* WARNING: Could not recover jumptable at 0x0010ccca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0010ce1f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010d009;
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
                    /* WARNING: Could not recover jumptable at 0x0010ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010d009:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010d1e1;
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
                    /* WARNING: Could not recover jumptable at 0x0010d06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010d1e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010d3c1;
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
                    /* WARNING: Could not recover jumptable at 0x0010d249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010d3c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Vector<String>,String_const&>::validated_call
          (MethodBindTRC<Vector<String>,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
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
      local_40[0] = 0x35;
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
      goto LAB_0010d44d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010d44d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<String>,String_const&>::ptrcall
          (MethodBindTRC<Vector<String>,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
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
      local_40[0] = 0x35;
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
      goto LAB_0010d644;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010d644:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
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
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d890;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Vector *)&local_58);
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
LAB_0010d890:
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
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
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
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10b318;
      local_40[0] = 0x35;
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
      goto LAB_0010dad7;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010dad7:
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
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10b318;
      local_40[0] = 0x35;
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
      goto LAB_0010dcb3;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010dcb3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<bool,String_const&,String_const&>::validated_call
          (MethodBindTRC<bool,String_const&,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
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
      goto LAB_0010de67;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  param_3[8] = VVar1;
LAB_0010de67:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,String_const&,String_const&>::ptrcall
          (MethodBindTRC<bool,String_const&,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010e02b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  *(undefined1 *)param_3 = uVar1;
LAB_0010e02b:
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
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010e209;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar1;
LAB_0010e209:
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010e3e5;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_0010e3e5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, String const&, String const&, Variant const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::validated_call
          (MethodBindTRC<Variant,String_const&,String_const&,Variant_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e5f5;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8,
            param_2[2]);
  Variant::operator=(param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010e5f5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, String const&, String const&, Variant const&>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::ptrcall
          (MethodBindTRC<Variant,String_const&,String_const&,Variant_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e7f4;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1],param_2[2]);
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010e7f4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&, Variant const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<String_const&,String_const&,Variant_const&>::validated_call
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010eb67;
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
                    /* WARNING: Could not recover jumptable at 0x0010ea0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8,*(undefined8 *)(param_3 + 0x10));
    return;
  }
LAB_0010eb67:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&, Variant const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<String_const&,String_const&,Variant_const&>::ptrcall
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
      goto LAB_0010ed51;
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
                    /* WARNING: Could not recover jumptable at 0x0010ebd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_0010ed51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
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
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eea0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010eef0;
LAB_0010eee0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010eef0:
        uVar7 = 4;
        goto LAB_0010ee95;
      }
      if (in_R8D == 1) goto LAB_0010eee0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC96;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68)
    ;
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010ee95:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010eea0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<bool,String_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
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
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f298;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_0010f2d8;
      pVVar12 = *(Variant **)param_4;
LAB_0010f2ed:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar7) {
LAB_0010f2d8:
        uVar8 = 4;
        goto LAB_0010f2c5;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_0010f3c0;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010f2ed;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
      if (lVar2 <= lVar10) {
LAB_0010f3c0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,4);
    uVar4 = _LC97;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_70);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC96;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    bVar6 = (bool)(*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68,
                                     (Variant *)&local_70);
    Variant::Variant((Variant *)local_58,bVar6);
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
    uVar8 = 3;
LAB_0010f2c5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0010f298:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>,String_const&>::call
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
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f670;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010f6b0;
LAB_0010f6a0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010f6b0:
        uVar6 = 4;
        goto LAB_0010f665;
      }
      if (in_R8D == 1) goto LAB_0010f6a0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC96;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_60);
    (*(code *)pVVar11)((Vector *)&local_58,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_60);
    Variant::Variant((Variant *)local_48,(Vector *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    CowData<String>::_unref((CowData<String> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    uVar6 = 3;
LAB_0010f665:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010f670:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f9d0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010fa20;
LAB_0010fa10:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010fa20:
        uVar6 = 4;
        goto LAB_0010f9c5;
      }
      if (in_R8D == 1) goto LAB_0010fa10;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC96;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010f9c5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010f9d0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Error,String_const&>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
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
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fd30;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010fd80;
LAB_0010fd70:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010fd80:
        uVar7 = 4;
        goto LAB_0010fd25;
      }
      if (in_R8D == 1) goto LAB_0010fd70;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC96;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010fd25:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010fd30:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00110127;
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
      if (iVar6 != 0) goto LAB_00110168;
      pVVar11 = *(Variant **)param_4;
LAB_0011017d:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00110168:
        uVar7 = 4;
        goto LAB_00110155;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00110250;
        pVVar11 = pVVar14 + lVar9 * 0x18;
      }
      else {
        pVVar11 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011017d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00110250:
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
    uVar4 = _LC97;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_70);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC96;
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
LAB_00110155:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_00110127:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::call
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
  Variant *pVVar12;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  long local_60;
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
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00110570;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_001105b8;
      pVVar12 = *(Variant **)param_4;
LAB_001105cd:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_001105b8:
        uVar7 = 4;
        goto LAB_001105a5;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar13 + -2);
        if (lVar2 <= lVar9) goto LAB_00110690;
        pVVar12 = pVVar11 + lVar9 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001105cd;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00110690:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1d);
    uVar4 = _LC98;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC96;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_70);
    iVar6 = (*(code *)pVVar14)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_70,
                               (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar10 = (long *)(local_60 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_001105a5:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_00110570:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&, Variant const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String_const&,String_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
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
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_88 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0011099a;
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
      iVar10 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar10 = (int)lVar13;
    }
    if ((int)(3 - in_R8D) <= iVar10) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar9 = iVar10 + -3 + (int)lVar7;
          if (lVar13 <= (int)uVar9) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar9,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar9 * 0x18;
        }
        local_78[lVar7] = pVVar12;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar14 & 1) != 0) {
        pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],0);
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 2;
      }
      Variant::Variant((Variant *)local_58,local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],4);
      uVar4 = _LC97;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_90);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],4);
      uVar4 = _LC96;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_88,
                         (Variant *)&local_90,(Variant *)local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0011099a;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_0011099a:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, String const&, String const&, Variant const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98 [4];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_00110dc2;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar14;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar10 = iVar11 + -3 + (int)lVar8;
          if (lVar14 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_98[lVar8] = pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[2],0);
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 2;
      }
      Variant::Variant((Variant *)local_58,local_98[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[1],4);
      uVar4 = _LC97;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_b0);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[0],4);
      uVar4 = _LC96;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_a8);
      (*(code *)pVVar15)(local_78,(Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_a8,
                         (Variant *)&local_b0,(Variant *)local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar5 = local_a8;
      *(undefined4 *)param_1 = local_78[0];
      *(undefined8 *)(param_1 + 8) = local_70;
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_a8 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00110dc2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00110dc2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, String const&, String
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(String const&, String const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,String_const&,String_const&>
               (__UnexistingClass *param_1,_func_void_String_ptr_String_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant local_50 [8];
  Variant local_48 [8];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00111138;
      puVar10 = (undefined4 *)*plVar8;
LAB_0011118d:
      puVar13 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00111138:
        uVar7 = 4;
        goto LAB_0011113d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_001111a8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0011118d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001111a8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_String_ptr_String_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,4);
    uVar4 = _LC97;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    cVar5 = Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC96;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(local_48);
    (*param_2)((String *)(param_1 + (long)param_3),(String *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar7 = 3;
LAB_0011113d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String_const&,String_const&>::call
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
      _err_print_error(&_LC91,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00111246;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,String_const&,String_const&>
            (p_Var2,(_func_void_String_ptr_String_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111246:
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
  if (iVar5 != param_1) goto LAB_00111447;
  local_78 = 0;
  local_68 = &_LC0;
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
LAB_00111545:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111545;
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
LAB_00111447:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<bool, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00111718;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001117ff:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001117ff;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111718:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<String>,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00111918;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x22;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001119ff:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001119ff;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111918:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_4c = 0;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,&local_4c,(PropertyInfo *)&local_48);
    uVar2 = local_40._0_8_;
    uVar3 = local_40._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_40._8_8_;
    local_40 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, Vector<unsigned char> const&>(int, PropertyInfo&)
    */

void call_get_argument_type_info<String_const&,Vector<unsigned_char>const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_8c;
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
  local_8c = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_8c,param_2);
  if (param_1 != local_8c) goto LAB_00111cee;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1d);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111de5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111de5;
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
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00111cee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::_gen_argument_type_info(int)
   const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,Vector<unsigned_char>const&>
              (in_EDX,(PropertyInfo *)&local_48);
    uVar2 = local_40._0_8_;
    uVar3 = local_40._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_40._8_8_;
    local_40 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, String const&, Variant const&>(int,
   PropertyInfo&) */

void call_get_argument_type_info<String_const&,String_const&,Variant_const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_74,param_2);
  call_get_argument_type_info_helper<String_const&>(param_1,&local_74,param_2);
  if (param_1 == local_74) {
    local_60 = 0;
    local_50 = (undefined1  [16])0x0;
    local_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0x20006;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = (undefined4)local_58;
    if (*(long *)(param_2 + 8) != local_50._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar2 = local_50._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_50._8_8_;
      local_50 = auVar1 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
      StringName::unref();
      uVar2 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = (undefined4)local_40;
    if (*(long *)(param_2 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar3 = local_38;
      local_38 = 0;
      *(long *)(param_2 + 0x20) = lVar3;
    }
    *(undefined4 *)(param_2 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&, Variant const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<String_const&,String_const&,Variant_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<String_const&,String_const&,Variant_const&>(in_EDX,pPVar1);
  return pPVar1;
}



/* MethodBindTRC<Variant, String const&, String const&, Variant
   const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (in_EDX < 3) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,String_const&,Variant_const&>
              (in_EDX,(PropertyInfo *)&local_58);
    uVar2 = local_50._0_8_;
    uVar3 = local_50._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_50._8_8_;
    local_50 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_58;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_40;
    *(undefined8 *)(puVar4 + 8) = local_38;
    puVar4[10] = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    *puVar4 = 0;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x20006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_60 = 0;
    local_68 = 0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,String_const&,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00112534;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011255f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011255f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00112534:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringBuilder::~StringBuilder() */

void __thiscall StringBuilder::~StringBuilder(StringBuilder *this)

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
/* MethodBindTR<Error, String const&, Vector<unsigned char> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Vector<unsigned_char>const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Vector<unsigned_char>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<String>, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<String>,String_const&>::~MethodBindTRC
          (MethodBindTRC<Vector<String>,String_const&> *this)

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
/* MethodBindTRC<bool, String const&, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&,String_const&>::~MethodBindTRC
          (MethodBindTRC<bool,String_const&,String_const&> *this)

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
/* MethodBindTRC<Variant, String const&, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Variant,String_const&,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Variant,String_const&,String_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, String const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&,Variant_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


