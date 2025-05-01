
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



/* EditorPropertyNameProcessor::~EditorPropertyNameProcessor() */

void __thiscall
EditorPropertyNameProcessor::~EditorPropertyNameProcessor(EditorPropertyNameProcessor *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  bool bVar11;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b2e8;
  pvVar9 = *(void **)(this + 0x480);
  singleton = 0;
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x4a4) != 0) {
      uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x4a0)];
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x4a4) = 0;
        *(undefined1 (*) [16])(this + 0x490) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x488) + lVar7) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x488) + lVar7) = 0;
            pvVar8 = *(void **)((long)pvVar9 + 0x20);
            if (pvVar8 != (void *)0x0) {
              if (*(int *)((long)pvVar9 + 0x44) != 0) {
                uVar4 = (&hash_table_size_primes)[*(uint *)((long)pvVar9 + 0x40)];
                if (uVar4 == 0) {
                  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar9 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar10 = 0;
                  do {
                    piVar6 = (int *)(*(long *)((long)pvVar9 + 0x28) + lVar10);
                    if (*piVar6 != 0) {
                      bVar11 = StringName::configured != '\0';
                      *piVar6 = 0;
                      pvVar8 = *(void **)((long)pvVar8 + lVar10 * 2);
                      if ((bVar11) && (*(long *)((long)pvVar8 + 0x18) != 0)) {
                        StringName::unref();
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
                      pvVar8 = *(void **)((long)pvVar9 + 0x20);
                      *(undefined8 *)((long)pvVar8 + lVar10 * 2) = 0;
                    }
                    lVar10 = lVar10 + 4;
                  } while ((ulong)uVar4 << 2 != lVar10);
                  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar9 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar8 == (void *)0x0) goto LAB_0010020f;
                }
              }
              Memory::free_static(pvVar8,false);
              Memory::free_static(*(void **)((long)pvVar9 + 0x28),false);
            }
LAB_0010020f:
            if (*(long *)((long)pvVar9 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar9 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar10 = *(long *)((long)pvVar9 + 0x10);
                *(undefined8 *)((long)pvVar9 + 0x10) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x480);
            *(undefined8 *)((long)pvVar9 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar3 * 4);
        *(undefined4 *)(this + 0x4a4) = 0;
        *(undefined1 (*) [16])(this + 0x490) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00100285;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x488),false);
  }
LAB_00100285:
  pvVar9 = *(void **)(this + 0x470);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x468) != 0) {
      lVar7 = 0;
      do {
        plVar1 = (long *)((long)pvVar9 + lVar7 * 8);
        if (*plVar1 != 0) {
          LOCK();
          plVar2 = (long *)(*plVar1 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar10 = *plVar1;
            *plVar1 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
          pvVar9 = *(void **)(this + 0x470);
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x468));
      *(undefined4 *)(this + 0x468) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_001002f7;
    }
    Memory::free_static(pvVar9,false);
  }
LAB_001002f7:
  pvVar9 = *(void **)(this + 0x440);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x464) != 0) {
      uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x460)];
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x464) = 0;
        *(undefined1 (*) [16])(this + 0x450) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x448) + lVar7) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x448) + lVar7) = 0;
            if (*(long *)((long)pvVar9 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar9 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar10 = *(long *)((long)pvVar9 + 0x18);
                *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar9 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar9 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar10 = *(long *)((long)pvVar9 + 0x10);
                *(undefined8 *)((long)pvVar9 + 0x10) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x440);
            *(undefined8 *)((long)pvVar9 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x464) = 0;
        *(undefined1 (*) [16])(this + 0x450) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_001003f9;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x448),false);
  }
LAB_001003f9:
  pvVar9 = *(void **)(this + 0x410);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x434) != 0) {
      uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x430)];
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x434) = 0;
        *(undefined1 (*) [16])(this + 0x420) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x418) + lVar7) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x418) + lVar7) = 0;
            if (*(long *)((long)pvVar9 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar9 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar10 = *(long *)((long)pvVar9 + 0x18);
                *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar9 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar9 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar10 = *(long *)((long)pvVar9 + 0x10);
                *(undefined8 *)((long)pvVar9 + 0x10) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x410);
            *(undefined8 *)((long)pvVar9 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x434) = 0;
        *(undefined1 (*) [16])(this + 0x420) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_001004f5;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x418),false);
  }
LAB_001004f5:
  Node::~Node((Node *)this);
  return;
}



/* EditorPropertyNameProcessor::~EditorPropertyNameProcessor() */

void __thiscall
EditorPropertyNameProcessor::~EditorPropertyNameProcessor(EditorPropertyNameProcessor *this)

{
  ~EditorPropertyNameProcessor(this);
  operator_delete(this,0x4a8);
  return;
}



/* EditorPropertyNameProcessor::get_settings_style() */

char EditorPropertyNameProcessor::get_settings_style(void)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EditorSettings::get_singleton();
  if (lVar4 == 0) {
    cVar3 = '\x02';
  }
  else {
    local_50 = 0;
    local_48 = "interface/editor/localize_settings";
    local_40 = 0x22;
    String::parse_latin1((StrRange *)&local_50);
    _EDITOR_GET((String *)local_38);
    bVar2 = Variant::operator_cast_to_bool((Variant *)local_38);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar4 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    cVar3 = bVar2 + '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyNameProcessor::get_tooltip_style(EditorPropertyNameProcessor::Style) */

char EditorPropertyNameProcessor::get_tooltip_style(int param_1)

{
  return (param_1 != 2) + '\x01';
}



/* EditorPropertyNameProcessor::_get_context(String const&, String const&, StringName const&) const
    */

String * EditorPropertyNameProcessor::_get_context
                   (String *param_1,String *param_2,StringName *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
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
  ulong uVar29;
  char cVar30;
  uint uVar31;
  String *in_RCX;
  uint uVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  StringName *pSVar36;
  long *in_R8;
  long lVar37;
  uint uVar38;
  long in_FS_OFFSET;
  bool bVar39;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(long *)in_RCX != 0) && (1 < *(uint *)(*(long *)in_RCX + -8))) || (*in_R8 != 0)) &&
     ((*(long *)(param_2 + 0x480) != 0 && (*(int *)(param_2 + 0x4a4) != 0)))) {
    uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x4a0)];
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x4a0) * 8);
    uVar31 = String::hash();
    uVar29 = CONCAT44(0,uVar2);
    lVar37 = *(long *)(param_2 + 0x488);
    uVar32 = 1;
    if (uVar31 != 0) {
      uVar32 = uVar31;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar32 * lVar3;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar29;
    lVar34 = SUB168(auVar5 * auVar17,8);
    uVar31 = *(uint *)(lVar37 + lVar34 * 4);
    uVar33 = SUB164(auVar5 * auVar17,8);
    if (uVar31 != 0) {
      uVar38 = 0;
      do {
        if (uVar32 == uVar31) {
          cVar30 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_2 + 0x480) + lVar34 * 8) + 0x10),
                                      (String *)param_3);
          if (cVar30 != '\0') {
            lVar3 = *(long *)(*(long *)(param_2 + 0x480) + (ulong)uVar33 * 8);
            if ((*(long *)(lVar3 + 0x20) == 0) || (*(int *)(lVar3 + 0x44) == 0)) goto LAB_001009f5;
            uVar2 = (&hash_table_size_primes)[*(uint *)(lVar3 + 0x40)];
            lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar3 + 0x40) * 8);
            uVar31 = String::hash();
            uVar29 = CONCAT44(0,uVar2);
            lVar34 = *(long *)(lVar3 + 0x28);
            uVar32 = 1;
            if (uVar31 != 0) {
              uVar32 = uVar31;
            }
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar32 * lVar37;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar29;
            lVar35 = SUB168(auVar9 * auVar21,8);
            uVar31 = *(uint *)(lVar34 + lVar35 * 4);
            uVar33 = SUB164(auVar9 * auVar21,8);
            if (uVar31 == 0) goto LAB_001009f5;
            uVar38 = 0;
            goto LAB_0010098f;
          }
          lVar37 = *(long *)(param_2 + 0x488);
        }
        uVar38 = uVar38 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar33 + 1) * lVar3;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar29;
        lVar34 = SUB168(auVar6 * auVar18,8);
        uVar31 = *(uint *)(lVar37 + lVar34 * 4);
        uVar33 = SUB164(auVar6 * auVar18,8);
      } while ((uVar31 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar31 * lVar3, auVar19._8_8_ = 0,
              auVar19._0_8_ = uVar29, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar2 + uVar33) - SUB164(auVar7 * auVar19,8)) * lVar3,
              auVar20._8_8_ = 0, auVar20._0_8_ = uVar29, uVar38 <= SUB164(auVar8 * auVar20,8)));
    }
  }
  goto LAB_00100761;
  while( true ) {
    uVar38 = uVar38 + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)(uVar33 + 1) * lVar37;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar29;
    lVar35 = SUB168(auVar10 * auVar22,8);
    uVar31 = *(uint *)(lVar34 + lVar35 * 4);
    uVar33 = SUB164(auVar10 * auVar22,8);
    if ((uVar31 == 0) ||
       (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar31 * lVar37, auVar23._8_8_ = 0,
       auVar23._0_8_ = uVar29, auVar12._8_8_ = 0,
       auVar12._0_8_ = (ulong)((uVar2 + uVar33) - SUB164(auVar11 * auVar23,8)) * lVar37,
       auVar24._8_8_ = 0, auVar24._0_8_ = uVar29, SUB164(auVar12 * auVar24,8) < uVar38)) break;
LAB_0010098f:
    if (uVar31 == uVar32) {
      cVar30 = String::operator==((String *)(*(long *)(*(long *)(lVar3 + 0x20) + lVar35 * 8) + 0x10)
                                  ,in_RCX);
      if (cVar30 != '\0') {
        pSVar36 = (StringName *)(*(long *)(*(long *)(lVar3 + 0x20) + (ulong)uVar33 * 8) + 0x18);
        goto LAB_001009d2;
      }
      lVar34 = *(long *)(lVar3 + 0x28);
    }
  }
LAB_001009f5:
  if (*in_R8 != 0) {
    local_68 = 0;
    local_58 = "::";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_68);
    lVar37 = *in_R8;
    if (lVar37 == 0) {
LAB_00100bd9:
      local_70 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar37 + 8);
      local_70 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar37 + 0x10) + -0x10);
        if (*(long *)(lVar37 + 0x10) == 0) goto LAB_00100bd9;
        do {
          lVar34 = *plVar1;
          if (lVar34 == 0) goto LAB_00100bd9;
          LOCK();
          lVar35 = *plVar1;
          bVar39 = lVar34 == lVar35;
          if (bVar39) {
            *plVar1 = lVar34 + 1;
            lVar35 = lVar34;
          }
          UNLOCK();
        } while (!bVar39);
        if (lVar35 != -1) {
          local_70 = *(long *)(lVar37 + 0x10);
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_70);
      }
    }
    String::operator+((String *)&local_60,(String *)&local_70);
    String::operator+((String *)&local_58,(String *)&local_60);
    if ((*(long *)(lVar3 + 0x20) != 0) && (*(int *)(lVar3 + 0x44) != 0)) {
      uVar2 = (&hash_table_size_primes)[*(uint *)(lVar3 + 0x40)];
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar3 + 0x40) * 8);
      uVar31 = String::hash();
      uVar29 = CONCAT44(0,uVar2);
      lVar34 = *(long *)(lVar3 + 0x28);
      uVar32 = 1;
      if (uVar31 != 0) {
        uVar32 = uVar31;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar32 * lVar37;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar29;
      lVar35 = SUB168(auVar13 * auVar25,8);
      uVar31 = *(uint *)(lVar34 + lVar35 * 4);
      uVar33 = SUB164(auVar13 * auVar25,8);
      if (uVar31 != 0) {
        uVar38 = 0;
        do {
          if (uVar31 == uVar32) {
            cVar30 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar3 + 0x20) + lVar35 * 8) + 0x10),
                                        (String *)&local_58);
            if (cVar30 != '\0') {
              pSVar36 = (StringName *)
                        (*(long *)(*(long *)(lVar3 + 0x20) + (ulong)uVar33 * 8) + 0x18);
              goto LAB_00100bef;
            }
            lVar34 = *(long *)(lVar3 + 0x28);
          }
          uVar38 = uVar38 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar33 + 1) * lVar37;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar29;
          lVar35 = SUB168(auVar14 * auVar26,8);
          uVar31 = *(uint *)(lVar34 + lVar35 * 4);
          uVar33 = SUB164(auVar14 * auVar26,8);
        } while ((uVar31 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar31 * lVar37, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar29, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar2 + uVar33) - SUB164(auVar15 * auVar27,8)) * lVar37,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar29, uVar38 <= SUB164(auVar16 * auVar28,8)));
      }
    }
    pSVar36 = (StringName *)0x0;
LAB_00100bef:
    pcVar4 = local_58;
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
    if (pSVar36 != (StringName *)0x0) {
LAB_001009d2:
      StringName::StringName((StringName *)param_1,pSVar36);
      goto LAB_00100769;
    }
  }
LAB_00100761:
  *(undefined8 *)param_1 = 0;
LAB_00100769:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorPropertyNameProcessor::translate_group_name(String const&) const */

String * EditorPropertyNameProcessor::translate_group_name(String *param_1)

{
  char *__s;
  StringName *pSVar1;
  CowData *in_RDX;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  pSVar1 = TranslationServer::singleton;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (TranslationServer::singleton == (StringName *)0x0) {
    *(undefined8 *)param_1 = 0;
    if (*(long *)in_RDX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)param_1,in_RDX);
    }
    goto LAB_00100e12;
  }
  StringName::StringName((StringName *)&local_58,"",false);
  StringName::StringName((StringName *)&local_60,(String *)in_RDX,false);
  TranslationServer::property_translate((StringName *)&local_50,pSVar1);
  if (local_50 == 0) {
    *(undefined8 *)param_1 = 0;
LAB_00100de5:
    if (StringName::configured == '\0') goto LAB_00100e12;
  }
  else {
    __s = *(char **)(local_50 + 8);
    *(undefined8 *)param_1 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(local_50 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(local_50 + 0x10));
        goto LAB_00100dc5;
      }
      if (StringName::configured == '\0') goto LAB_00100e12;
LAB_00100dd6:
      StringName::unref();
      goto LAB_00100de5;
    }
    local_40 = strlen(__s);
    local_48 = __s;
    String::parse_latin1((StrRange *)param_1);
LAB_00100dc5:
    if (StringName::configured == '\0') goto LAB_00100e12;
    if (local_50 != 0) goto LAB_00100dd6;
  }
  if (((local_60 == 0) || (StringName::unref(), StringName::configured != '\0')) && (local_58 != 0))
  {
    StringName::unref();
  }
LAB_00100e12:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorPropertyNameProcessor::is_localization_available() */

undefined8 EditorPropertyNameProcessor::is_localization_available(void)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  uVar6 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EditorSettings::get_singleton();
  if (lVar4 != 0) {
    local_60 = 0;
    local_40 = 2;
    local_48 = "en";
    String::parse_latin1((StrRange *)&local_60);
    String::split(local_58,SUB81((StrRange *)&local_60,0),0x10875f);
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
    local_48 = "interface/editor/editor_language";
    local_60 = 0;
    local_40 = 0x20;
    String::parse_latin1((StrRange *)&local_60);
    _EDITOR_GET((String *)local_38);
    Variant::operator_cast_to_String((Variant *)&local_48);
    if ((local_50 != 0) && (lVar4 = *(long *)(local_50 + -8), lVar4 != 0)) {
      lVar5 = 0;
      while (lVar5 < lVar4) {
        cVar3 = String::operator==((String *)(local_50 + lVar5 * 8),(String *)&local_48);
        if (cVar3 != '\0') {
          uVar6 = 0;
          goto LAB_00100fe8;
        }
        lVar5 = lVar5 + 1;
        if (local_50 == 0) break;
        lVar4 = *(long *)(local_50 + -8);
      }
    }
    uVar6 = 1;
LAB_00100fe8:
    pcVar2 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
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
    CowData<String>::_unref((CowData<String> *)&local_50);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyNameProcessor::get_default_inspector_style() */

int EditorPropertyNameProcessor::get_default_inspector_style(void)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  iVar3 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EditorSettings::get_singleton();
  if (lVar4 != 0) {
    local_50 = 0;
    local_48 = "interface/inspector/default_property_name_style";
    local_40 = 0x2f;
    String::parse_latin1((StrRange *)&local_50);
    _EDITOR_GET((String *)local_38);
    iVar3 = Variant::operator_cast_to_int((Variant *)local_38);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar4 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (iVar3 == 2) {
      bVar2 = is_localization_available();
      iVar3 = bVar2 + 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
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



/* EditorPropertyNameProcessor::_capitalize_name(String const&) const */

String * EditorPropertyNameProcessor::_capitalize_name(String *param_1)

{
  long *plVar1;
  long *plVar2;
  String *pSVar3;
  uint uVar4;
  undefined *puVar5;
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
  code *pcVar22;
  undefined *puVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  CowData<char32_t> *this;
  uint uVar27;
  String *in_RDX;
  long lVar28;
  long lVar29;
  long in_RSI;
  long lVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  long local_a8;
  long local_70;
  char local_68 [8];
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RSI + 0x410) != 0) && (*(int *)(in_RSI + 0x434) != 0)) {
    uVar4 = (&hash_table_size_primes)[*(uint *)(in_RSI + 0x430)];
    uVar33 = CONCAT44(0,uVar4);
    lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x430) * 8);
    uVar25 = String::hash();
    lVar30 = *(long *)(in_RSI + 0x418);
    uVar27 = 1;
    if (uVar25 != 0) {
      uVar27 = uVar25;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)uVar27 * lVar29;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    lVar28 = SUB168(auVar6 * auVar14,8);
    uVar25 = *(uint *)(lVar30 + lVar28 * 4);
    uVar26 = SUB164(auVar6 * auVar14,8);
    if (uVar25 != 0) {
      uVar31 = 0;
      do {
        if (uVar25 == uVar27) {
          cVar24 = String::operator==((String *)
                                      (*(long *)(*(long *)(in_RSI + 0x410) + lVar28 * 8) + 0x10),
                                      in_RDX);
          if (cVar24 != '\0') {
            lVar29 = *(long *)(*(long *)(in_RSI + 0x410) + (ulong)uVar26 * 8);
            if (lVar29 != 0) {
              *(undefined8 *)param_1 = 0;
              if (*(long *)(lVar29 + 0x18) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(lVar29 + 0x18));
              }
              goto LAB_001016b3;
            }
            break;
          }
          lVar30 = *(long *)(in_RSI + 0x418);
        }
        uVar31 = uVar31 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(uVar26 + 1) * lVar29;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar33;
        lVar28 = SUB168(auVar7 * auVar15,8);
        uVar25 = *(uint *)(lVar30 + lVar28 * 4);
        uVar26 = SUB164(auVar7 * auVar15,8);
        if ((uVar25 == 0) ||
           (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar25 * lVar29, auVar16._8_8_ = 0,
           auVar16._0_8_ = uVar33, auVar9._8_8_ = 0,
           auVar9._0_8_ = (ulong)((uVar4 + uVar26) - SUB164(auVar8 * auVar16,8)) * lVar29,
           auVar17._8_8_ = 0, auVar17._0_8_ = uVar33, SUB164(auVar9 * auVar17,8) < uVar31)) break;
      } while( true );
    }
  }
  String::split(local_68,SUB81(in_RDX,0),0x1087a8);
  uVar4 = 1;
  local_a8 = 0;
  uVar33 = 0;
  do {
    if ((local_60 == 0) || (*(long *)(local_60 + -8) <= (long)uVar33)) {
      local_70 = 0;
      local_50 = 1;
      local_58 = &_LC21;
      String::parse_latin1((StrRange *)&local_70);
      String::join((Vector *)&local_58);
      lVar29 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar2 = (long *)(local_70 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar29 + -0x10),false);
        }
      }
      this = (CowData<char32_t> *)
             HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                           *)(in_RSI + 0x408),in_RDX);
      if (*(undefined **)this != local_58) {
        CowData<char32_t>::_ref(this,(CowData *)&local_58);
      }
      *(undefined8 *)param_1 = 0;
      if ((local_58 != (undefined *)0x0) &&
         (CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)&local_58),
         puVar5 = local_58, local_58 != (undefined *)0x0)) {
        LOCK();
        plVar2 = (long *)(local_58 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar5 + -0x10,false);
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_60);
LAB_001016b3:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((uVar4 != 1) &&
       ((uVar34 = (ulong)(int)uVar4, (long)uVar34 < *(long *)(local_60 + -8) &&
        (pSVar3 = (String *)(local_60 + local_a8), *(int *)(in_RSI + 0x468) != 0)))) {
      lVar29 = 0;
      do {
        cVar24 = String::operator==((String *)(*(long *)(in_RSI + 0x470) + lVar29 * 8),pSVar3);
        if (cVar24 != '\0') goto LAB_00101758;
        lVar29 = lVar29 + 1;
      } while ((uint)lVar29 < *(uint *)(in_RSI + 0x468));
    }
    if (local_60 == 0) {
LAB_00101872:
      lVar29 = 0;
LAB_00101878:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar33,lVar29,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar22 = (code *)invalidInstructionException();
      (*pcVar22)();
    }
    lVar29 = *(long *)(local_60 + -8);
    if (lVar29 <= (long)uVar33) goto LAB_00101878;
    if ((*(long *)(in_RSI + 0x440) != 0) && (*(int *)(in_RSI + 0x464) != 0)) {
      pSVar3 = (String *)(local_60 + local_a8);
      uVar27 = (&hash_table_size_primes)[*(uint *)(in_RSI + 0x460)];
      lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x460) * 8);
      uVar26 = String::hash();
      uVar34 = CONCAT44(0,uVar27);
      lVar30 = *(long *)(in_RSI + 0x448);
      uVar25 = 1;
      if (uVar26 != 0) {
        uVar25 = uVar26;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar25 * lVar29;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      lVar28 = SUB168(auVar10 * auVar18,8);
      uVar26 = *(uint *)(lVar30 + lVar28 * 4);
      uVar31 = SUB164(auVar10 * auVar18,8);
      if (uVar26 != 0) {
        uVar32 = 0;
        do {
          if (uVar26 == uVar25) {
            cVar24 = String::operator==((String *)
                                        (*(long *)(*(long *)(in_RSI + 0x440) + lVar28 * 8) + 0x10),
                                        pSVar3);
            if (cVar24 != '\0') {
              lVar29 = *(long *)(*(long *)(in_RSI + 0x440) + (ulong)uVar31 * 8);
              if (lVar29 != 0) {
                if (local_60 == 0) goto LAB_00101918;
                lVar30 = *(long *)(local_60 + -8);
                if (lVar30 <= (long)uVar33) goto LAB_0010191e;
                CowData<String>::_copy_on_write((CowData<String> *)&local_60);
                uVar34 = (ulong)uVar4;
                if (*(long *)(local_60 + local_a8) != *(long *)(lVar29 + 0x18)) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(local_60 + local_a8),(CowData *)(lVar29 + 0x18));
                }
                goto LAB_00101758;
              }
              break;
            }
            lVar30 = *(long *)(in_RSI + 0x448);
          }
          uVar32 = uVar32 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(uVar31 + 1) * lVar29;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar34;
          lVar28 = SUB168(auVar11 * auVar19,8);
          uVar26 = *(uint *)(lVar30 + lVar28 * 4);
          uVar31 = SUB164(auVar11 * auVar19,8);
          if ((uVar26 == 0) ||
             (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar26 * lVar29, auVar20._8_8_ = 0,
             auVar20._0_8_ = uVar34, auVar13._8_8_ = 0,
             auVar13._0_8_ = (ulong)((uVar27 + uVar31) - SUB164(auVar12 * auVar20,8)) * lVar29,
             auVar21._8_8_ = 0, auVar21._0_8_ = uVar34, SUB164(auVar13 * auVar21,8) < uVar32))
          break;
        } while( true );
      }
      if (local_60 == 0) goto LAB_00101872;
      lVar29 = *(long *)(local_60 + -8);
      if (lVar29 <= (long)uVar33) goto LAB_00101878;
    }
    String::capitalize();
    if (local_60 == 0) {
LAB_00101918:
      lVar30 = 0;
LAB_0010191e:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar33,lVar30,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar22 = (code *)invalidInstructionException();
      (*pcVar22)();
    }
    lVar30 = *(long *)(local_60 + -8);
    if (lVar30 <= (long)uVar33) goto LAB_0010191e;
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    puVar23 = local_58;
    plVar2 = (long *)(local_60 + local_a8);
    puVar5 = (undefined *)*plVar2;
    if (puVar5 == local_58) {
      if (puVar5 != (undefined *)0x0) {
        LOCK();
        plVar2 = (long *)(puVar5 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar23 + -0x10,false);
        }
      }
    }
    else {
      if (puVar5 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(puVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar29 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar29 + -0x10),false);
        }
        else {
          *plVar2 = 0;
        }
      }
      *plVar2 = (long)local_58;
    }
    uVar34 = (ulong)uVar4;
LAB_00101758:
    uVar4 = uVar4 + 1;
    local_a8 = local_a8 + 8;
    uVar33 = uVar34;
  } while( true );
}



/* EditorPropertyNameProcessor::process_name(String const&, EditorPropertyNameProcessor::Style,
   String const&, StringName const&) const */

String * EditorPropertyNameProcessor::process_name
                   (String *param_1,String *param_2,CowData *param_3,int param_4)

{
  long *plVar1;
  char *__s;
  long lVar2;
  StringName *pSVar3;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 1) {
    _capitalize_name(param_1);
    goto LAB_001019e7;
  }
  if (param_4 != 2) {
    if (param_4 == 0) {
      *(undefined8 *)param_1 = 0;
      lVar2 = *(long *)param_3;
    }
    else {
      _err_print_error("process_name","editor/editor_property_name_processor.cpp",0x84,
                       "Method/function failed. Returning: p_name","Unexpected property name style."
                       ,0,0);
      *(undefined8 *)param_1 = 0;
      lVar2 = *(long *)param_3;
    }
    if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)param_1,param_3);
    }
    goto LAB_001019e7;
  }
  _capitalize_name((String *)&local_78);
  pSVar3 = TranslationServer::singleton;
  if (TranslationServer::singleton == (StringName *)0x0) {
    *(undefined8 *)param_1 = 0;
    if (local_78 == 0) goto LAB_001019e7;
    CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)&local_78);
  }
  else {
    _get_context((String *)&local_70,param_2,(StringName *)param_3);
    StringName::StringName((StringName *)&local_68,(String *)&local_78,false);
    TranslationServer::property_translate((StringName *)&local_60,pSVar3);
    if (local_60 == 0) {
      *(undefined8 *)param_1 = 0;
LAB_00101ae4:
      if (StringName::configured == '\0') goto LAB_00101b11;
    }
    else {
      __s = *(char **)(local_60 + 8);
      *(undefined8 *)param_1 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(local_60 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(local_60 + 0x10));
          goto LAB_00101ac4;
        }
        if (StringName::configured == '\0') goto LAB_00101b11;
LAB_00101ad5:
        StringName::unref();
        goto LAB_00101ae4;
      }
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)param_1);
LAB_00101ac4:
      if (StringName::configured == '\0') goto LAB_00101b11;
      if (local_60 != 0) goto LAB_00101ad5;
    }
    if (((local_68 == 0) || (StringName::unref(), StringName::configured != '\0')) &&
       (local_70 != 0)) {
      StringName::unref();
    }
  }
LAB_00101b11:
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
LAB_001019e7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyNameProcessor::EditorPropertyNameProcessor() */

void __thiscall
EditorPropertyNameProcessor::EditorPropertyNameProcessor(EditorPropertyNameProcessor *this)

{
  long *plVar1;
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  *this_00;
  CowData<char32_t> *this_01;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  StrRange *pSVar8;
  void *pvVar9;
  HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
  *pHVar10;
  long *plVar11;
  undefined *puVar12;
  ulong uVar13;
  uint uVar14;
  HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
  *this_02;
  uint uVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  uVar6 = _UNK_0010b6a8;
  uVar4 = _LC36;
  *(undefined ***)this = &PTR__initialize_classv_0010b2e8;
  uVar5 = _LC36;
  bVar17 = singleton != (EditorPropertyNameProcessor *)0x0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x430) = uVar5;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x4a0) = uVar5;
  *(undefined1 (*) [16])(this + 0x420) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x440) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x450) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x460) = uVar4;
  *(undefined8 *)(this + 0x468) = uVar6;
  *(undefined1 (*) [16])(this + 0x480) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x490) = (undefined1  [16])0x0;
  if (bVar17) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("EditorPropertyNameProcessor","editor/editor_property_name_processor.cpp",
                       0x8f,"Condition \"singleton != nullptr\" is true.",0,0);
      return;
    }
    goto LAB_001073b3;
  }
  local_e0 = 0;
  local_d0 = (void *)0x2;
  this_00 = (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *)(this + 0x438);
  local_d8 = &_LC39;
  singleton = this;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC40;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC41;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC42;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC43;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC44;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC45;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC46;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC47;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC48;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC49;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC50;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC51;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC52;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC53;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC54;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC55;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC56;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "arm32";
  local_e0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "arm32";
  local_d0 = (void *)0x5;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "arm64";
  local_e0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "arm64";
  local_d0 = (void *)0x5;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "arm64-v8a";
  local_d0 = (void *)0x9;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "arm64-v8a";
  local_d0 = (void *)0x9;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "armeabi-v7a";
  local_e0 = 0;
  local_d0 = (void *)0xb;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "armeabi-v7a";
  local_d0 = (void *)0xb;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC61;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC62;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC63;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC64;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "bbcode";
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x6;
  local_d8 = "BBCode";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC67;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC68;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC69;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC70;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC71;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC72;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC73;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC74;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC75;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC76;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC77;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC78;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC79;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC80;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC81;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC82;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "ccdik";
  local_e0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "CCDIK";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC85;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC86;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC87;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC88;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC89;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC90;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "d3d12";
  local_e0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "D3D12";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC93;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC94;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC95;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC96;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC97;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC98;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC99;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC100;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC101;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC102;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC103;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC104;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC105;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC106;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "fabrik";
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x6;
  local_d8 = "FABRIK";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC109;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC110;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "fbx2gltf";
  local_d0 = (void *)0x8;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x8;
  local_d8 = "FBX2glTF";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC113;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC114;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC115;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC116;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "filesystem";
  local_e0 = 0;
  local_d0 = (void *)0xa;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0xa;
  local_d8 = "FileSystem";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC119;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC120;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC121;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC122;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC123;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC124;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC125;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC126;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC127;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC128;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "gdscript";
  local_e0 = 0;
  local_d0 = (void *)0x8;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x8;
  local_d8 = "GDScript";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC131;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC132;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC133;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC134;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC135;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC136;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC137;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC138;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC139;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC140;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "gles2";
  local_e0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "GLES2";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "gles3";
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "GLES3";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC145;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC146;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "gridmap";
  local_e0 = 0;
  local_d0 = (void *)0x7;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x7;
  local_d8 = "GridMap";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC149;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC150;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC151;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC152;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC153;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC154;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC155;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC156;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "hidpi";
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "hiDPI";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "hipass";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x9;
  local_d8 = "High-pass";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC161;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC162;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC163;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC164;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC165;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC166;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC167;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC168;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC169;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC170;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC171;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC172;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC173;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC174;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC175;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC176;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "image@2x";
  local_e0 = 0;
  local_d0 = (void *)0x8;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x9;
  local_d8 = "Image @2x";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "image@3x";
  local_e0 = 0;
  local_d0 = (void *)0x8;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x9;
  local_d8 = "Image @3x";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC181;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC182;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC183;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC184;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC185;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC186;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC187;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC188;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "iphone";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x6;
  local_d8 = "iPhone";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC191;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC192;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC193;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC194;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "itunes";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x6;
  local_d8 = "iTunes";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC197;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC198;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC199;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC200;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC201;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC202;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC203;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC204;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC205;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC206;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC207;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC208;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "linuxbsd";
  local_d0 = (void *)0x8;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0xa;
  local_d8 = "Linux/*BSD";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC211;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC212;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC213;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC214;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "loongarch64";
  local_d0 = (void *)0xb;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "loongarch64";
  local_d0 = (void *)0xb;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "lowpass";
  local_e0 = 0;
  local_d0 = (void *)0x7;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x8;
  local_d8 = "Low-pass";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "macos";
  local_e0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "macOS";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC220;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC221;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "mjpeg";
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "MJPEG";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC224;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC225;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC226;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC227;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC228;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC229;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC230;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC231;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "navmesh";
  local_d0 = (void *)0x7;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x7;
  local_d8 = "NavMesh";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC234;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC235;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC236;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC237;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC238;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC239;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "opengl";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x6;
  local_d8 = "OpenGL";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "opengl3";
  local_e0 = 0;
  local_d0 = (void *)0x7;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x8;
  local_d8 = "OpenGL 3";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "opentype";
  local_e0 = 0;
  local_d0 = (void *)0x8;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x8;
  local_d8 = "OpenType";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "openxr";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x6;
  local_d8 = "OpenXR";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "osslsigncode";
  local_e0 = 0;
  local_d0 = (void *)0xc;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "osslsigncode";
  local_d0 = (void *)0xc;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC249;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC250;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC251;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC252;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC253;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0xc;
  local_d8 = "(Power of 2)";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "ppc32";
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "ppc32";
  local_d0 = (void *)0x5;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "ppc64";
  local_e0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "ppc64";
  local_d0 = (void *)0x5;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "pvrtc";
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "PVRTC";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC259;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC260;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "rcedit";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "rcedit";
  local_d0 = (void *)0x6;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "rcodesign";
  local_e0 = 0;
  local_d0 = (void *)0x9;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "rcodesign";
  local_d0 = (void *)0x9;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC263;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC264;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC265;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC266;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC267;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC268;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC269;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC270;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC271;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = &_LC271;
  local_d0 = (void *)0x4;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC272;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC273;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC274;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC275;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC276;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC277;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "sdfgi";
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "SDFGI";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC280;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC281;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC282;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "(sec)";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "signtool";
  local_e0 = 0;
  local_d0 = (void *)0x8;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "signtool";
  local_d0 = (void *)0x8;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC285;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC286;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC287;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC288;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC289;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC290;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC291;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC292;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC293;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC294;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC295;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC296;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC297;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC298;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "stderr";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "stderr";
  local_d0 = (void *)0x6;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "stdout";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "stdout";
  local_d0 = (void *)0x6;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC301;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC302;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC303;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC304;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC305;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC306;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC307;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC308;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "textfile";
  local_e0 = 0;
  local_d0 = (void *)0x8;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x8;
  local_d8 = "TextFile";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC311;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC312;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC313;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC314;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC315;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC316;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC317;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC318;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC319;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC320;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC321;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC322;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC323;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  puVar7 = &_LC34;
  do {
    puVar12 = puVar7;
    puVar7 = puVar12 + 4;
  } while (*(int *)(puVar12 + 4) != 0);
  local_d8 = &_LC34;
  local_d0 = (void *)((long)(puVar12 + -0x10b264) >> 2);
  String::parse_utf32(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC324;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC325;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC326;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  puVar7 = &_LC35;
  do {
    puVar12 = puVar7;
    puVar7 = puVar12 + 4;
  } while (*(int *)(puVar12 + 4) != 0);
  local_d8 = &_LC35;
  local_d0 = (void *)((long)(puVar12 + -0x10b278) >> 2);
  String::parse_utf32(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC327;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC328;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC329;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC330;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC331;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC332;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC333;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC334;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "vector2";
  local_e0 = 0;
  local_d0 = (void *)0x7;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x7;
  local_d8 = "Vector2";
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC337;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC338;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC339;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC340;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC341;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC342;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "vsync";
  local_e0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x6;
  local_d8 = "V-Sync";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC345;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x3;
  local_d8 = &_LC346;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC347;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x4;
  local_d8 = &_LC348;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "webrtc";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x6;
  local_d8 = "WebRTC";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "websocket";
  local_e0 = 0;
  local_d0 = (void *)0x9;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x9;
  local_d8 = "WebSocket";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC353;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = &_LC353;
  local_d0 = (void *)0x4;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC354;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "Wi-Fi";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC356;
  local_e0 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = &_LC356;
  local_d0 = (void *)0x3;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = "x86_32";
  local_e0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "x86_32";
  local_d0 = (void *)0x6;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = "x86_64";
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d8 = "x86_64";
  local_d0 = (void *)0x6;
  String::parse_latin1(pSVar8);
  lVar16 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar11 = (long *)(local_e0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  local_e0 = 0;
  local_d8 = &_LC359;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC360;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC361;
  local_e0 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x5;
  local_d8 = "X-Ray";
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC363;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC364;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC365;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC366;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_d8 = &_LC367;
  local_e0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_e0);
  pSVar8 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[](this_00,(String *)&local_e0);
  local_d0 = (void *)0x2;
  local_d8 = &_LC368;
  String::parse_latin1(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_c8 = 0;
  local_d8 = &_LC369;
  local_d0 = (void *)0x1;
  String::parse_latin1((StrRange *)&local_c8);
  local_d8 = &_LC370;
  local_c0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_c0);
  local_d8 = &_LC371;
  local_b8 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_b8);
  local_d8 = &_LC372;
  local_b0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_b0);
  local_d8 = &_LC373;
  local_a8 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_a8);
  local_d8 = &_LC374;
  local_a0 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_a0);
  local_d8 = &_LC375;
  local_98 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_98);
  local_d8 = &_LC376;
  local_90 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_90);
  local_d8 = &_LC377;
  local_88 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_88);
  local_d8 = &_LC378;
  local_80 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_80);
  local_d8 = &_LC379;
  local_78 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_78);
  local_d8 = &_LC380;
  local_70 = 0;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_70);
  local_d8 = &_LC381;
  local_68 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_68);
  local_d8 = &_LC382;
  local_60 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_60);
  local_d8 = &_LC383;
  local_58 = 0;
  local_d0 = (void *)0x3;
  String::parse_latin1((StrRange *)&local_58);
  local_d8 = &_LC384;
  local_50 = 0;
  local_d0 = (void *)0x4;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = 0;
  local_d8 = &_LC385;
  local_d0 = (void *)0x2;
  String::parse_latin1((StrRange *)&local_48);
  local_d8 = (char *)_LC386;
  local_d0 = (void *)Memory::realloc_static((void *)0x0,0x100,false);
  if (local_d0 == (void *)0x0) {
    _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                     "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pSVar8 = (StrRange *)&local_c8;
  uVar14 = 0;
  uVar15 = 0x20;
  while( true ) {
    pvVar9 = local_d0;
    local_e0 = 0;
    if (*(long *)pSVar8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)pSVar8);
    }
    if (uVar14 == uVar15) {
      uVar13 = (ulong)(uVar14 * 2);
      if (uVar14 * 2 == 0) {
        uVar13 = 1;
      }
      local_d8 = (char *)CONCAT44((int)uVar13,(uint)local_d8);
      pvVar9 = (void *)Memory::realloc_static(pvVar9,uVar13 << 3,false);
      local_d0 = pvVar9;
      if (pvVar9 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    lVar16 = local_e0;
    this_01 = (CowData<char32_t> *)((long)pvVar9 + (ulong)uVar14 * 8);
    local_d8 = (char *)CONCAT44(local_d8._4_4_,uVar14 + 1);
    *(undefined8 *)this_01 = 0;
    if (local_e0 != 0) {
      CowData<char32_t>::_ref(this_01,(CowData *)&local_e0);
      LOCK();
      plVar11 = (long *)(lVar16 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        Memory::free_static((void *)(local_e0 + -0x10),false);
      }
    }
    pSVar8 = (StrRange *)((CowData *)pSVar8 + 8);
    if ((CowData *)local_40 == (CowData *)pSVar8) break;
    uVar14 = (uint)local_d8;
    uVar15 = local_d8._4_4_;
  }
  pSVar8 = (StrRange *)&local_48;
  if ((EditorPropertyNameProcessor *)&local_d8 == this + 0x468) {
    if (local_d0 != (void *)0x0) {
      pvVar9 = local_d0;
      if ((uint)local_d8 != 0) {
        lVar16 = 0;
        do {
          plVar11 = (long *)((long)pvVar9 + lVar16 * 8);
          if (*plVar11 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar11 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            pvVar9 = local_d0;
            if (*plVar1 == 0) {
              lVar2 = *plVar11;
              *plVar11 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
              pvVar9 = local_d0;
            }
          }
          lVar16 = lVar16 + 1;
        } while ((uint)lVar16 < (uint)local_d8);
        if (pvVar9 == (void *)0x0) goto LAB_00106333;
      }
      Memory::free_static(pvVar9,false);
    }
  }
  else {
    if (*(int *)(this + 0x468) == 0) {
      pvVar9 = *(void **)(this + 0x470);
    }
    else {
      lVar16 = 0;
      pvVar9 = *(void **)(this + 0x470);
      do {
        plVar11 = (long *)((long)pvVar9 + lVar16 * 8);
        if (*plVar11 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *plVar11;
            *plVar11 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
          pvVar9 = *(void **)(this + 0x470);
        }
        lVar16 = lVar16 + 1;
      } while ((uint)lVar16 < *(uint *)(this + 0x468));
      *(undefined4 *)(this + 0x468) = 0;
    }
    if (pvVar9 != (void *)0x0) {
      Memory::free_static(pvVar9,false);
    }
    *(void **)(this + 0x470) = local_d0;
    *(char **)(this + 0x468) = local_d8;
  }
LAB_00106333:
  do {
    if (*(long *)pSVar8 != 0) {
      LOCK();
      plVar11 = (long *)(*(long *)pSVar8 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        lVar16 = *(long *)pSVar8;
        *(undefined8 *)pSVar8 = 0;
        Memory::free_static((void *)(lVar16 + -0x10),false);
      }
    }
    bVar17 = (StrRange *)&local_c8 != pSVar8;
    pSVar8 = pSVar8 + -8;
  } while (bVar17);
  StringName::StringName((StringName *)&local_e0,"Physics",false);
  local_f0 = 0;
  this_02 = (HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
             *)(this + 0x478);
  local_d8 = "force";
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "constant_force";
  local_e8 = 0;
  local_d0 = (void *)0xe;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Enforce",false);
  local_d8 = "force";
  local_f0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "force/8_bit";
  local_e8 = 0;
  local_d0 = (void *)0xb;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Enforce",false);
  local_d8 = "force";
  local_f0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "force/mono";
  local_e8 = 0;
  local_d0 = (void *)0xa;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Enforce",false);
  local_d8 = "force";
  local_f0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "force/max_rate";
  local_e8 = 0;
  local_d0 = (void *)0xe;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Enforce",false);
  local_d8 = "force";
  local_f0 = 0;
  local_d0 = (void *)0x5;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_e8 = 0;
  local_d0 = (void *)0x11;
  local_d8 = "force/max_rate_hz";
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Ordinary",false);
  local_f0 = 0;
  local_d8 = "normal";
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "theme_override_styles/normal";
  local_e8 = 0;
  local_d0 = (void *)0x1c;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Ordinary",false);
  local_d8 = "normal";
  local_f0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "TextureButton::texture_normal";
  local_e8 = 0;
  local_d0 = (void *)0x1d;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Geometry",false);
  local_d8 = "normal";
  local_f0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "Decal::texture_normal";
  local_e8 = 0;
  local_d0 = (void *)0x15;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Geometry",false);
  local_d8 = "normal";
  local_f0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "detail_normal";
  local_e8 = 0;
  local_d0 = (void *)0xd;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e0,"Geometry",false);
  local_d8 = "normal";
  local_f0 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_f0);
  pHVar10 = (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *)HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
               ::operator[](this_02,(String *)&local_f0);
  local_d8 = "normal";
  local_e8 = 0;
  local_d0 = (void *)0x6;
  String::parse_latin1((StrRange *)&local_e8);
  plVar11 = (long *)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                    ::operator[](pHVar10,(String *)&local_e8);
  if (*plVar11 != local_e0) {
    StringName::unref();
    *plVar11 = local_e0;
    local_e0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001073b3:
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* EditorPropertyNameProcessor::is_class_ptr(void*) const */

uint __thiscall
EditorPropertyNameProcessor::is_class_ptr(EditorPropertyNameProcessor *this,void *param_1)

{
  return (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorPropertyNameProcessor::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyNameProcessor::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPropertyNameProcessor::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyNameProcessor::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPropertyNameProcessor::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyNameProcessor::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorPropertyNameProcessor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyNameProcessor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPropertyNameProcessor::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyNameProcessor::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* EditorPropertyNameProcessor::_notificationv(int, bool) */

void __thiscall
EditorPropertyNameProcessor::_notificationv
          (EditorPropertyNameProcessor *this,int param_1,bool param_2)

{
  if (param_2) {
    if ((code *)PTR__notification_0010d008 == Object::_notification) {
      return;
    }
  }
  else if ((code *)PTR__notification_0010d008 == Object::_notification) {
    return;
  }
  Node::_notification((int)this);
  return;
}



/* EditorPropertyNameProcessor::_get_class_namev() const */

undefined8 * EditorPropertyNameProcessor::_get_class_namev(void)

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
LAB_00107583:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107583;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyNameProcessor"
                );
      goto LAB_001075ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyNameProcessor");
LAB_001075ee:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyNameProcessor::get_class() const */

void EditorPropertyNameProcessor::get_class(void)

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



/* EditorPropertyNameProcessor::_initialize_classv() */

void EditorPropertyNameProcessor::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00107864;
  if (Node::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Node";
    local_60 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010796e:
      if ((code *)PTR__bind_methods_0010d010 != Object::_bind_methods) {
LAB_0010797e:
        Node::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010796e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010d010 != Object::_bind_methods) goto LAB_0010797e;
    }
    Node::initialize_class()::initialized = '\x01';
  }
  local_48 = "Node";
  local_58 = 0;
  local_40 = 4;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "EditorPropertyNameProcessor";
  local_60 = 0;
  local_40 = 0x1b;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  initialize_class()::initialized = '\x01';
LAB_00107864:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyNameProcessor::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyNameProcessor::is_class(EditorPropertyNameProcessor *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00107a5f;
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
LAB_00107a5f:
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
    if (cVar6 != '\0') goto LAB_00107b13;
  }
  cVar6 = String::operator==(param_1,"EditorPropertyNameProcessor");
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
              if (lVar5 == 0) goto LAB_00107beb;
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
LAB_00107beb:
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
      if (cVar6 != '\0') goto LAB_00107b13;
    }
    cVar6 = String::operator==(param_1,"Node");
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
                if (lVar5 == 0) goto LAB_00107ccb;
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
LAB_00107ccb:
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
        if (cVar6 != '\0') goto LAB_00107b13;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00107d74;
    }
  }
LAB_00107b13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107d74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC2;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC2;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00107ee8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107ee8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107f06;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107f06:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyNameProcessor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPropertyNameProcessor::_get_property_listv
          (EditorPropertyNameProcessor *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyNameProcessor";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyNameProcessor";
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
LAB_001082e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001082e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108305;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108305:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyNameProcessor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  uVar55 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (*(long *)(this + 8) == 0) {
LAB_001096f4:
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
LAB_001095d4:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_001095e0:
        uVar36 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
                goto LAB_001094a0;
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
      goto LAB_001090a0;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_001090a0;
    if (*(int *)(this + 0x2c) != 0) goto LAB_001095e0;
LAB_001090c6:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_001094a0;
    }
    uVar38 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar36 = (&hash_table_size_primes)[uVar55];
    if (uVar55 + 1 < 2) {
      uVar38 = 2;
    }
    uVar55 = (&hash_table_size_primes)[uVar38];
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
          uVar37 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
              goto LAB_001094a0;
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
      uVar55 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
      if (lVar52 == 0) goto LAB_001096f4;
      goto LAB_001095d4;
    }
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    iVar42 = 0;
LAB_001090a0:
    if ((float)uVar45 * __LC6 < (float)(iVar42 + 1)) goto LAB_001090c6;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_001097a5:
    lVar48 = 0;
    *(undefined8 *)(local_a0[1] + 8) = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_0010936a;
LAB_001097c1:
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
    if (lVar48 == 0) goto LAB_001097a5;
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
    if (puVar40 == (undefined8 *)0x0) goto LAB_001097c1;
LAB_0010936a:
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
  uVar36 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
LAB_001094a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* HashMap<String, StringName, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, StringName> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
::_resize_and_rehash
          (HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
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
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
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
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
/* HashMap<String, StringName, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, StringName> > >::operator[](String const&) */

StringName * __thiscall
HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
::operator[](HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
             *this,String *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulong __n;
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
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  void *__s_00;
  ulong uVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  long in_FS_OFFSET;
  uint local_98;
  StringName *local_80;
  long local_70;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar40 = (ulong)uVar30;
  if (*(long *)(this + 8) == 0) {
LAB_0010a100:
    local_70 = 0;
    uVar35 = uVar40 * 4;
    __n = uVar40 * 8;
    uVar34 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(this + 0x10) = uVar34;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar35))) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)__s + uVar35 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar40 != uVar35);
      }
      else {
        memset(__s,0,uVar35);
        memset(__s_00,0,__n);
      }
LAB_00109f9a:
      uVar30 = (uint)uVar40;
      iVar36 = *(int *)(this + 0x2c);
      if (iVar36 != 0) {
LAB_00109fa7:
        uVar37 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar41 = String::hash();
        uVar40 = CONCAT44(0,uVar37);
        lVar42 = *(long *)(this + 0x10);
        uVar31 = 1;
        if (uVar41 != 0) {
          uVar31 = uVar41;
        }
        uVar44 = 0;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar31 * lVar4;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar40;
        lVar39 = SUB168(auVar13 * auVar25,8);
        uVar41 = *(uint *)(lVar42 + lVar39 * 4);
        uVar43 = SUB164(auVar13 * auVar25,8);
        if (uVar41 != 0) {
          do {
            if (uVar31 == uVar41) {
              cVar29 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar39 * 8) + 0x10),
                                          param_1);
              if (cVar29 != '\0') {
                StringName::operator=
                          ((StringName *)(*(long *)(*(long *)(this + 8) + (ulong)uVar43 * 8) + 0x18)
                           ,(StringName *)&local_70);
                local_80 = (StringName *)(*(long *)(*(long *)(this + 8) + (ulong)uVar43 * 8) + 0x18)
                ;
                goto LAB_00109e38;
              }
              lVar42 = *(long *)(this + 0x10);
            }
            uVar44 = uVar44 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(uVar43 + 1) * lVar4;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar40;
            lVar39 = SUB168(auVar14 * auVar26,8);
            uVar41 = *(uint *)(lVar42 + lVar39 * 4);
            uVar43 = SUB164(auVar14 * auVar26,8);
          } while ((uVar41 != 0) &&
                  (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar41 * lVar4, auVar27._8_8_ = 0,
                  auVar27._0_8_ = uVar40, auVar16._8_8_ = 0,
                  auVar16._0_8_ = (ulong)((uVar37 + uVar43) - SUB164(auVar15 * auVar27,8)) * lVar4,
                  auVar28._8_8_ = 0, auVar28._0_8_ = uVar40, uVar44 <= SUB164(auVar16 * auVar28,8)))
          ;
        }
        uVar40 = (ulong)uVar30;
        iVar36 = *(int *)(this + 0x2c);
      }
      goto LAB_00109c48;
    }
    iVar36 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00109c48;
    uVar30 = 0;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00109fa7;
LAB_00109c6a:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (StringName *)0x18;
      goto LAB_00109e38;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar31 = String::hash();
      uVar40 = CONCAT44(0,uVar30);
      lVar42 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar31 != 0) {
        uVar37 = uVar31;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar37 * lVar4;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar39 = SUB168(auVar9 * auVar21,8);
      uVar31 = *(uint *)(lVar42 + lVar39 * 4);
      uVar41 = SUB164(auVar9 * auVar21,8);
      if (uVar31 == 0) {
        lVar38 = *(long *)(this + 8);
      }
      else {
        lVar38 = *(long *)(this + 8);
        uVar43 = 0;
        do {
          if (uVar37 == uVar31) {
            cVar29 = String::operator==((String *)(*(long *)(lVar38 + lVar39 * 8) + 0x10),param_1);
            if (cVar29 != '\0') {
              local_80 = (StringName *)(*(long *)(*(long *)(this + 8) + (ulong)uVar41 * 8) + 0x18);
              goto LAB_00109e58;
            }
            lVar42 = *(long *)(this + 0x10);
            lVar38 = *(long *)(this + 8);
          }
          uVar43 = uVar43 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar41 + 1) * lVar4;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar39 = SUB168(auVar10 * auVar22,8);
          uVar31 = *(uint *)(lVar42 + lVar39 * 4);
          uVar41 = SUB164(auVar10 * auVar22,8);
        } while ((uVar31 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar31 * lVar4, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar41 + uVar30) - SUB164(auVar11 * auVar23,8)) * lVar4,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar43 <= SUB164(auVar12 * auVar24,8)));
      }
      local_70 = 0;
      uVar40 = (ulong)(uint)(&hash_table_size_primes)[*(uint *)(this + 0x28)];
      if (lVar38 == 0) goto LAB_0010a100;
      goto LAB_00109f9a;
    }
    local_70 = 0;
    iVar36 = 0;
LAB_00109c48:
    if ((float)uVar40 * __LC6 < (float)(iVar36 + 1)) goto LAB_00109c6a;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
  }
  StringName::StringName((StringName *)local_50,(StringName *)&local_70);
  puVar32 = (undefined8 *)operator_new(0x20,"");
  puVar32[2] = 0;
  *puVar32 = local_68._0_8_;
  puVar32[1] = local_68._8_8_;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar32 + 2),(CowData *)&local_58);
  }
  local_80 = (StringName *)(puVar32 + 3);
  StringName::StringName(local_80,(StringName *)local_50);
  if ((StringName::configured != '\0') && (local_50[0] != 0)) {
    StringName::unref();
  }
  lVar4 = local_58;
  if (local_58 == 0) {
LAB_00109d39:
    puVar33 = *(undefined8 **)(this + 0x20);
    if (puVar33 != (undefined8 *)0x0) goto LAB_00109d47;
LAB_0010a0e7:
    *(undefined8 **)(this + 0x18) = puVar32;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00109d39;
    local_58 = 0;
    Memory::free_static((void *)(lVar4 + -0x10),false);
    puVar33 = *(undefined8 **)(this + 0x20);
    if (puVar33 == (undefined8 *)0x0) goto LAB_0010a0e7;
LAB_00109d47:
    *puVar33 = puVar32;
    puVar32[1] = puVar33;
  }
  *(undefined8 **)(this + 0x20) = puVar32;
  uVar30 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar40 = 1;
  if (uVar30 != 0) {
    uVar40 = (ulong)uVar30;
  }
  uVar41 = 0;
  lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar31 = (uint)uVar40;
  uVar30 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar35 = CONCAT44(0,uVar30);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar40 * lVar42;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar35;
  lVar38 = SUB168(auVar5 * auVar17,8);
  lVar39 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar4 + lVar38 * 4);
  iVar36 = SUB164(auVar5 * auVar17,8);
  uVar37 = *puVar2;
  while (uVar37 != 0) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)uVar37 * lVar42;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar35;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)((uVar30 + iVar36) - SUB164(auVar6 * auVar18,8)) * lVar42;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar35;
    local_98 = SUB164(auVar7 * auVar19,8);
    puVar33 = puVar32;
    if (local_98 < uVar41) {
      *puVar2 = (uint)uVar40;
      uVar40 = (ulong)uVar37;
      puVar3 = (undefined8 *)(lVar39 + lVar38 * 8);
      puVar33 = (undefined8 *)*puVar3;
      *puVar3 = puVar32;
      uVar41 = local_98;
    }
    uVar31 = (uint)uVar40;
    uVar41 = uVar41 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(iVar36 + 1) * lVar42;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar38 = SUB168(auVar8 * auVar20,8);
    puVar2 = (uint *)(lVar4 + lVar38 * 4);
    iVar36 = SUB164(auVar8 * auVar20,8);
    puVar32 = puVar33;
    uVar37 = *puVar2;
  }
  *(undefined8 **)(lVar39 + lVar38 * 8) = puVar32;
  *puVar2 = uVar31;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00109e38:
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00109e58:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, StringName, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, StringName> > >::insert(String const&, StringName
   const&, bool) */

String * HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
         ::insert(String *param_1,StringName *param_2,bool param_3)

{
  long *plVar1;
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
  char cVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  void *__s_00;
  ulong uVar24;
  StringName *in_RCX;
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
  long *plVar36;
  uint uVar37;
  long in_FS_OFFSET;
  uint local_98;
  long *local_80;
  long local_58;
  long local_50 [2];
  long local_40;
  
  pSVar29 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar25 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
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
      goto LAB_0010a29f;
    }
    iVar26 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010a2ad;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010a4f8;
LAB_0010a2cf:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_0010a4a7;
    }
    _resize_and_rehash((HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0010a29f:
    iVar26 = *(int *)(param_2 + 0x2c);
    if (iVar26 != 0) {
LAB_0010a4f8:
      uVar21 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = String::hash();
      uVar24 = CONCAT44(0,uVar21);
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
            cVar20 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10),
                                        pSVar29);
            if (cVar20 != '\0') {
              StringName::operator=
                        ((StringName *)
                         (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8) + 0x18),in_RCX);
              local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
              goto LAB_0010a4a7;
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
                auVar11._0_8_ = (ulong)((uVar21 + uVar28) - SUB164(auVar10 * auVar18,8)) * lVar3,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar24, uVar37 <= SUB164(auVar11 * auVar19,8)));
      }
      iVar26 = *(int *)(param_2 + 0x2c);
    }
LAB_0010a2ad:
    if ((float)uVar25 * __LC6 < (float)(iVar26 + 1)) goto LAB_0010a2cf;
  }
  local_58 = 0;
  if (*(long *)pSVar29 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar29);
  }
  StringName::StringName((StringName *)local_50,in_RCX);
  local_80 = (long *)operator_new(0x20,"");
  local_80[2] = 0;
  *local_80 = 0;
  local_80[1] = 0;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + 2),(CowData *)&local_58);
  }
  StringName::StringName((StringName *)(local_80 + 3),(StringName *)local_50);
  if ((StringName::configured != '\0') && (local_50[0] != 0)) {
    StringName::unref();
  }
  lVar3 = local_58;
  if (local_58 == 0) {
LAB_0010a399:
    puVar22 = *(undefined8 **)(param_2 + 0x20);
    if (puVar22 != (undefined8 *)0x0) goto LAB_0010a3a6;
LAB_0010a63e:
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010a399;
    local_58 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    puVar22 = *(undefined8 **)(param_2 + 0x20);
    if (puVar22 == (undefined8 *)0x0) goto LAB_0010a63e;
LAB_0010a3a6:
    if (in_R8B == '\0') {
      *puVar22 = local_80;
      local_80[1] = (long)puVar22;
      *(long **)(param_2 + 0x20) = local_80;
    }
    else {
      lVar3 = *(long *)(param_2 + 0x18);
      *(long **)(lVar3 + 8) = local_80;
      *local_80 = lVar3;
      *(long **)(param_2 + 0x18) = local_80;
    }
  }
  uVar21 = String::hash();
  lVar3 = *(long *)(param_2 + 0x10);
  uVar25 = 1;
  if (uVar21 != 0) {
    uVar25 = uVar21;
  }
  uVar32 = 0;
  uVar24 = (ulong)uVar25;
  uVar21 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar33 = CONCAT44(0,uVar21);
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
  plVar1 = local_80;
  while (uVar27 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar27 * lVar34;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)((iVar26 + uVar21) - SUB164(auVar5 * auVar13,8)) * lVar34;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    local_98 = SUB164(auVar6 * auVar14,8);
    plVar36 = plVar1;
    if (local_98 < uVar32) {
      *puVar2 = (uint)uVar24;
      uVar24 = (ulong)uVar27;
      puVar22 = (undefined8 *)(lVar31 + lVar30 * 8);
      plVar36 = (long *)*puVar22;
      *puVar22 = plVar1;
      uVar32 = local_98;
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
    plVar1 = plVar36;
    uVar27 = *puVar2;
  }
  *(long **)(lVar31 + lVar30 * 8) = plVar1;
  *puVar2 = uVar25;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010a4a7:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, HashMap<String, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, StringName> > >,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, HashMap<String, StringName, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, StringName> > > >
   > >::operator[](String const&) */

undefined8 * __thiscall
HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
::operator[](HashMap<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>>>>
             *this,String *param_1)

{
  long *plVar1;
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
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  long lVar42;
  undefined8 *puVar43;
  void *pvVar44;
  int *piVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  long lVar51;
  uint *puVar52;
  uint uVar53;
  uint uVar54;
  ulong uVar55;
  uint uVar56;
  uint uVar57;
  undefined8 *puVar58;
  long in_FS_OFFSET;
  long local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar57 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (*(long *)(this + 8) == 0) {
LAB_0010af48:
    uVar49 = (ulong)uVar57;
    uVar39 = uVar49 * 4;
    uVar55 = uVar49 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar44 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar57 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar55)) && (pvVar44 < (void *)((long)pvVar3 + uVar39))
         ) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar39 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar49 != uVar39);
      }
      else {
        memset(pvVar3,0,uVar39);
        memset(pvVar44,0,uVar55);
      }
LAB_0010adfb:
      iVar46 = *(int *)(this + 0x2c);
      if (iVar46 != 0) {
LAB_0010ae07:
        uVar37 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar54 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar42 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar54 != 0) {
          uVar38 = uVar54;
        }
        uVar56 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar51;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar47 = SUB168(auVar16 * auVar32,8);
        uVar54 = *(uint *)(lVar42 + lVar47 * 4);
        uVar53 = SUB164(auVar16 * auVar32,8);
        if (uVar54 != 0) {
          do {
            if (uVar38 == uVar54) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                lVar51 = *(long *)(*(long *)(this + 8) + (ulong)uVar53 * 8);
                uVar57 = *(uint *)(lVar51 + 0x40);
                uVar37 = (&hash_table_size_primes)[uVar57];
                if ((*(int *)(lVar51 + 0x44) == 0) || (*(long *)(lVar51 + 0x20) == 0))
                goto LAB_0010b056;
                lVar42 = 0;
                if (uVar37 != 0) goto LAB_0010b170;
                *(undefined4 *)(lVar51 + 0x44) = 0;
                *(undefined1 (*) [16])(lVar51 + 0x30) = (undefined1  [16])0x0;
                goto LAB_0010b05b;
              }
              lVar42 = *(long *)(this + 0x10);
            }
            uVar56 = uVar56 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar53 + 1) * lVar51;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar47 = SUB168(auVar17 * auVar33,8);
            uVar54 = *(uint *)(lVar42 + lVar47 * 4);
            uVar53 = SUB164(auVar17 * auVar33,8);
          } while ((uVar54 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar54 * lVar51, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar53) - SUB164(auVar18 * auVar34,8)) * lVar51,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar56 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0010a834;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010a837;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010ae07;
LAB_0010a85d:
    uVar57 = *(uint *)(this + 0x28);
    if (uVar57 != 0x1c) {
      uVar39 = (ulong)(uVar57 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar37 = (&hash_table_size_primes)[uVar57];
      if (uVar57 + 1 < 2) {
        uVar39 = 2;
      }
      uVar57 = (&hash_table_size_primes)[uVar39];
      uVar49 = (ulong)uVar57;
      *(int *)(this + 0x28) = (int)uVar39;
      pvVar44 = *(void **)(this + 8);
      uVar39 = uVar49 * 4;
      uVar55 = uVar49 * 8;
      pvVar3 = *(void **)(this + 0x10);
      uVar40 = Memory::alloc_static(uVar39,false);
      *(undefined8 *)(this + 0x10) = uVar40;
      __s_00 = (void *)Memory::alloc_static(uVar55,false);
      *(void **)(this + 8) = __s_00;
      if (uVar57 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar39))) {
          uVar39 = 0;
          do {
            *(undefined4 *)((long)__s + uVar39 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
            uVar39 = uVar39 + 1;
          } while (uVar49 != uVar39);
        }
        else {
          memset(__s,0,uVar39);
          memset(__s_00,0,uVar55);
        }
      }
      if (uVar37 != 0) {
        uVar39 = 0;
        do {
          uVar57 = *(uint *)((long)pvVar3 + uVar39 * 4);
          if (uVar57 != 0) {
            lVar51 = *(long *)(this + 0x10);
            uVar53 = 0;
            uVar38 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
            uVar55 = CONCAT44(0,uVar38);
            lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar57 * lVar42;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar55;
            lVar47 = SUB168(auVar4 * auVar20,8);
            puVar52 = (uint *)(lVar51 + lVar47 * 4);
            iVar46 = SUB164(auVar4 * auVar20,8);
            uVar54 = *puVar52;
            uVar40 = *(undefined8 *)((long)pvVar44 + uVar39 * 8);
            while (uVar54 != 0) {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar54 * lVar42;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = uVar55;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)((uVar38 + iVar46) - SUB164(auVar5 * auVar21,8)) * lVar42;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = uVar55;
              uVar56 = SUB164(auVar6 * auVar22,8);
              uVar50 = uVar40;
              if (uVar56 < uVar53) {
                *puVar52 = uVar57;
                puVar41 = (undefined8 *)((long)__s_00 + lVar47 * 8);
                uVar50 = *puVar41;
                *puVar41 = uVar40;
                uVar57 = uVar54;
                uVar53 = uVar56;
              }
              uVar53 = uVar53 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(iVar46 + 1) * lVar42;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = uVar55;
              lVar47 = SUB168(auVar7 * auVar23,8);
              puVar52 = (uint *)(lVar51 + lVar47 * 4);
              iVar46 = SUB164(auVar7 * auVar23,8);
              uVar40 = uVar50;
              uVar54 = *puVar52;
            }
            *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar40;
            *puVar52 = uVar57;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar39 = uVar39 + 1;
        } while (uVar37 != uVar39);
        Memory::free_static(pvVar44,false);
        Memory::free_static(pvVar3,false);
      }
      goto LAB_0010aa50;
    }
    puVar41 = (undefined8 *)0x0;
    _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                     "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                     ,"Hash table maximum capacity reached, aborting insertion.",0,0);
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      uVar39 = CONCAT44(0,uVar57);
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar42 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar51;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar47 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar42 + lVar47 * 4);
      uVar54 = SUB164(auVar12 * auVar28,8);
      if (uVar38 == 0) {
        lVar48 = *(long *)(this + 8);
      }
      else {
        lVar48 = *(long *)(this + 8);
        uVar53 = 0;
        do {
          if (uVar38 == uVar37) {
            cVar36 = String::operator==((String *)(*(long *)(lVar48 + lVar47 * 8) + 0x10),param_1);
            if (cVar36 != '\0') {
              puVar41 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar54 * 8) + 0x18);
              goto LAB_0010accb;
            }
            lVar42 = *(long *)(this + 0x10);
            lVar48 = *(long *)(this + 8);
          }
          uVar53 = uVar53 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar54 + 1) * lVar51;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar47 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar42 + lVar47 * 4);
          uVar54 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar51, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar54 + uVar57) - SUB164(auVar14 * auVar30,8)) * lVar51,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar53 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar57 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
      if (lVar48 == 0) goto LAB_0010af48;
      goto LAB_0010adfb;
    }
LAB_0010a834:
    uVar49 = (ulong)uVar57;
LAB_0010a837:
    if ((float)uVar49 * __LC6 < (float)(iVar46 + 1)) goto LAB_0010a85d;
LAB_0010aa50:
    local_78[0] = 0;
    lVar51 = *(long *)param_1;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)param_1);
      lVar51 = local_78[0];
    }
    local_48 = 0;
    uVar39 = 1;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    do {
      if (0x16 < (uint)(&hash_table_size_primes)[uVar39]) {
        local_48 = uVar39 & 0xffffffff;
        uVar39 = uVar39 & 0xffffffff;
        goto LAB_0010aafd;
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 != 0x1d);
    uVar39 = 0;
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010aafd:
    puVar41 = (undefined8 *)operator_new(0x48,"");
    puVar41[2] = 0;
    *puVar41 = 0;
    puVar41[1] = 0;
    if (lVar51 == 0) {
      puVar41[8] = 0;
      *(undefined1 (*) [16])(puVar41 + 4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar41 + 6) = (undefined1  [16])0x0;
      uVar57 = (&hash_table_size_primes)[uVar39];
      if (5 < uVar57) goto LAB_0010ab5c;
LAB_0010abc0:
      puVar43 = *(undefined8 **)(this + 0x20);
      if (puVar43 != (undefined8 *)0x0) goto LAB_0010abcd;
LAB_0010af25:
      *(undefined8 **)(this + 0x18) = puVar41;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar41 + 2),(CowData *)local_78);
      puVar41[8] = 0;
      uVar57 = (&hash_table_size_primes)[uVar39];
      *(undefined1 (*) [16])(puVar41 + 4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar41 + 6) = (undefined1  [16])0x0;
      if (5 < uVar57) {
LAB_0010ab5c:
        lVar42 = 1;
        do {
          if (uVar57 <= (uint)(&hash_table_size_primes)[lVar42]) {
            *(int *)(puVar41 + 8) = (int)lVar42;
            goto LAB_0010abaf;
          }
          lVar42 = lVar42 + 1;
        } while (lVar42 != 0x1d);
        _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                         "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0
                         ,0);
LAB_0010abaf:
        if (lVar51 == 0) goto LAB_0010abc0;
      }
      LOCK();
      plVar1 = (long *)(lVar51 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010abc0;
      Memory::free_static((void *)(local_78[0] + -0x10),false);
      puVar43 = *(undefined8 **)(this + 0x20);
      if (puVar43 == (undefined8 *)0x0) goto LAB_0010af25;
LAB_0010abcd:
      *puVar43 = puVar41;
      puVar41[1] = puVar43;
    }
    *(undefined8 **)(this + 0x20) = puVar41;
    uVar37 = String::hash();
    lVar51 = *(long *)(this + 0x10);
    uVar57 = 1;
    if (uVar37 != 0) {
      uVar57 = uVar37;
    }
    lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar37 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    uVar39 = CONCAT44(0,uVar37);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar57 * lVar42;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar39;
    lVar48 = SUB168(auVar8 * auVar24,8);
    lVar47 = *(long *)(this + 8);
    puVar52 = (uint *)(lVar51 + lVar48 * 4);
    iVar46 = SUB164(auVar8 * auVar24,8);
    uVar38 = *puVar52;
    puVar43 = puVar41;
    if (uVar38 != 0) {
      uVar54 = 0;
      puVar58 = puVar41;
      do {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar38 * lVar42;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar39;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)((iVar46 + uVar37) - SUB164(auVar9 * auVar25,8)) * lVar42;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar39;
        uVar53 = SUB164(auVar10 * auVar26,8);
        puVar43 = puVar58;
        if (uVar53 < uVar54) {
          *puVar52 = uVar57;
          puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
          puVar43 = (undefined8 *)*puVar2;
          *puVar2 = puVar58;
          uVar54 = uVar53;
          uVar57 = uVar38;
        }
        uVar54 = uVar54 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(iVar46 + 1) * lVar42;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar39;
        lVar48 = SUB168(auVar11 * auVar27,8);
        puVar52 = (uint *)(lVar51 + lVar48 * 4);
        iVar46 = SUB164(auVar11 * auVar27,8);
        uVar38 = *puVar52;
        puVar58 = puVar43;
      } while (uVar38 != 0);
    }
    *(undefined8 **)(lVar47 + lVar48 * 8) = puVar43;
    *puVar52 = uVar57;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  puVar41 = puVar41 + 3;
LAB_0010accb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar41;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010b170:
  do {
    piVar45 = (int *)(*(long *)(lVar51 + 0x28) + lVar42);
    if (*piVar45 != 0) {
      *piVar45 = 0;
      pvVar44 = *(void **)(*(long *)(lVar51 + 0x20) + lVar42 * 2);
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar44 + 0x18) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar44 + 0x10) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar44 + 0x10) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar47 = *(long *)((long)pvVar44 + 0x10);
          *(undefined8 *)((long)pvVar44 + 0x10) = 0;
          Memory::free_static((void *)(lVar47 + -0x10),false);
        }
      }
      Memory::free_static(pvVar44,false);
      *(undefined8 *)(*(long *)(lVar51 + 0x20) + lVar42 * 2) = 0;
    }
    lVar42 = lVar42 + 4;
  } while ((ulong)uVar37 << 2 != lVar42);
  uVar57 = *(uint *)(lVar51 + 0x40);
  *(undefined4 *)(lVar51 + 0x44) = 0;
  *(undefined1 (*) [16])(lVar51 + 0x30) = (undefined1  [16])0x0;
  uVar37 = (&hash_table_size_primes)[uVar57];
LAB_0010b056:
  if (uVar37 < 0x17) {
LAB_0010b05b:
    if (uVar57 != 0x1c) {
      uVar39 = (ulong)uVar57;
      do {
        uVar37 = (int)uVar39 + 1;
        uVar39 = (ulong)uVar37;
        if (0x16 < (uint)(&hash_table_size_primes)[uVar39]) {
          if (uVar37 != uVar57) {
            if (*(long *)(lVar51 + 0x20) == 0) {
              *(uint *)(lVar51 + 0x40) = uVar37;
            }
            else {
              HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
              ::_resize_and_rehash
                        ((HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>
                          *)(lVar51 + 0x18),uVar37);
            }
          }
          goto LAB_0010b0b2;
        }
      } while (uVar37 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010b0b2:
  puVar41 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar53 * 8) + 0x18);
  goto LAB_0010accb;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


