
/* FindInFilesPanel::_on_replace_text_changed(String const&) */

void FindInFilesPanel::_on_replace_text_changed(String *param_1)

{
  BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xa80),0));
  return;
}



/* FindInFilesDialog::_on_folder_button_pressed() */

void FindInFilesDialog::_on_folder_button_pressed(void)

{
  FileDialog::popup_file_dialog();
  return;
}



/* WARNING: Removing unreachable block (ram,0x001000a4) */
/* FindInFilesPanel::_on_item_edited() */

void __thiscall FindInFilesPanel::_on_item_edited(FindInFilesPanel *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = Tree::get_selected();
  Control::get_theme_color
            (*(StringName **)(this + 0x9d8),(StringName *)(SceneStringNames::singleton + 0xb0));
  TreeItem::is_checked(iVar2);
  TreeItem::set_custom_color(iVar2,(Color *)0x1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<FindInFilesPanel::Result>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<FindInFilesPanel::Result>::_copy_on_write(CowData<FindInFilesPanel::Result> *this)

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
  __n = lVar2 * 0x10;
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



/* HashMap<TreeItem*, FindInFilesPanel::Result, HashMapHasherDefault,
   HashMapComparatorDefault<TreeItem*>, DefaultTypedAllocator<HashMapElement<TreeItem*,
   FindInFilesPanel::Result> > >::_lookup_pos(TreeItem* const&, unsigned int&) const [clone .isra.0]
    */

undefined8 __thiscall
HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
::_lookup_pos(HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
              *this,TreeItem **param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(TreeItem ***)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* find_next(String const&, String const&, int, bool, bool, int&, int&) */

ulong find_next(String *param_1,String *param_2,int param_3,bool param_4,bool param_5,int *param_6,
               int *param_7)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined7 in_register_00000081;
  long lVar10;
  
  uVar8 = CONCAT71(in_register_00000081,param_5) & 0xffffffff;
LAB_00100371:
  if (param_4) {
    iVar5 = String::find(param_1,(int)param_2);
  }
  else {
    iVar5 = String::findn(param_1,(int)param_2);
  }
  if (iVar5 == -1) {
    return 0;
  }
  iVar7 = iVar5;
  if ((*(long *)param_2 != 0) &&
     (iVar4 = (int)*(undefined8 *)(*(long *)param_2 + -8), iVar7 = iVar5 + -1 + iVar4, iVar4 == 0))
  {
    iVar7 = iVar5;
  }
  *param_6 = iVar5;
  *param_7 = iVar7;
  if ((char)uVar8 == '\0') {
    return 1;
  }
  lVar2 = *(long *)param_1;
  if (iVar5 < 1) {
    if (lVar2 == 0) goto LAB_001004c0;
    lVar10 = *(long *)(lVar2 + -8);
  }
  else {
    lVar9 = (long)(iVar5 + -1);
    if (lVar2 == 0) {
      if (iVar5 + -1 != 0) goto LAB_001004c7;
      if ((uint)String::_null < 0x3a) {
        if ((uint)String::_null < 0x30) {
LAB_001004c0:
          if (-1 < iVar7) {
            return uVar8;
          }
          lVar9 = (long)iVar7;
LAB_001004c7:
          lVar10 = 0;
LAB_001004ca:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else if ((0x39 < (uint)String::_null - 0x41) ||
              ((0x3ffffff43ffffffU >> ((ulong)((uint)String::_null - 0x41) & 0x3f) & 1) == 0))
      goto LAB_001004c0;
      goto LAB_00100371;
    }
    lVar10 = *(long *)(lVar2 + -8);
    if (lVar9 == lVar10) {
      puVar6 = (uint *)&String::_null;
    }
    else {
      if (lVar10 <= lVar9) goto LAB_001004ca;
      puVar6 = (uint *)(lVar2 + lVar9 * 4);
    }
    uVar1 = *puVar6;
    if (uVar1 < 0x3a) {
      if (uVar1 < 0x30) goto LAB_00100418;
      goto LAB_00100371;
    }
    if ((uVar1 - 0x41 < 0x3a) && ((0x3ffffff43ffffffU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) != 0))
    goto LAB_00100371;
  }
LAB_00100418:
  if ((int)lVar10 <= iVar7) {
    return uVar8;
  }
  lVar9 = (long)iVar7;
  if (lVar9 == lVar10) {
    puVar6 = (uint *)&String::_null;
  }
  else {
    if ((lVar10 <= lVar9) || (lVar9 < 0)) goto LAB_001004ca;
    puVar6 = (uint *)(lVar2 + lVar9 * 4);
  }
  uVar1 = *puVar6;
  if (uVar1 < 0x3a) {
    if (uVar1 < 0x30) {
      return uVar8;
    }
  }
  else {
    if (0x39 < uVar1 - 0x41) {
      return uVar8;
    }
    if ((0x3ffffff43ffffffU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
      return uVar8;
    }
  }
  goto LAB_00100371;
}



/* FindInFilesPanel::_on_close_button_clicked() */

void __thiscall FindInFilesPanel::_on_close_button_clicked(FindInFilesPanel *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_on_close_button_clicked()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_on_close_button_clicked()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_on_close_button_clicked()::{lambda()#1}::operator()()::sname,
                  SUB81(SIGNAL_CLOSE_BUTTON_CLICKED,0));
      __cxa_atexit(StringName::~StringName,
                   &_on_close_button_clicked()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_on_close_button_clicked()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_close_button_clicked()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<char>::_copy_on_write(CowData<char> *this)

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



/* HashMap<TreeItem*, FindInFilesPanel::Result, HashMapHasherDefault,
   HashMapComparatorDefault<TreeItem*>, DefaultTypedAllocator<HashMapElement<TreeItem*,
   FindInFilesPanel::Result> > >::erase(TreeItem* const&) [clone .isra.0] */

void __thiscall
HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
::erase(HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
        *this,TreeItem **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
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
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar7 = *(long *)(this + 0x10);
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar35 = CONCAT44(0,uVar5);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = (long)*param_1 * 0x3ffff - 1;
    uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
    uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
    uVar29 = uVar29 >> 0x16 ^ uVar29;
    uVar32 = uVar29 & 0xffffffff;
    if ((int)uVar29 == 0) {
      uVar32 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32 * lVar8;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    uVar29 = SUB168(auVar11 * auVar20,8);
    uVar37 = *(uint *)(lVar7 + uVar29 * 4);
    uVar33 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar37 != 0) {
      uVar36 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar35;
        uVar31 = SUB168(auVar14 * auVar23,8);
        uVar30 = SUB164(auVar14 * auVar23,8);
        if (((uint)uVar32 == uVar37) &&
           (*param_1 == *(TreeItem **)(*(long *)(lVar6 + uVar29 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar7 + uVar31 * 4);
          uVar37 = *puVar38;
          if ((uVar37 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar37 * lVar8, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar35, auVar16._8_8_ = 0,
             auVar16._0_8_ = (ulong)((uVar30 + uVar5) - SUB164(auVar15 * auVar24,8)) * lVar8,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar35, uVar29 = (ulong)uVar30, uVar32 = uVar33,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar33 = uVar29;
              puVar1 = (uint *)(lVar7 + uVar32 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar37;
              puVar3 = (undefined8 *)(lVar6 + uVar32 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar35;
              uVar31 = SUB168(auVar19 * auVar28,8);
              puVar38 = (uint *)(lVar7 + uVar31 * 4);
              uVar37 = *puVar38;
              if ((uVar37 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar37 * lVar8, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar35, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      (ulong)((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) *
                      lVar8, auVar27._8_8_ = 0, auVar27._0_8_ = uVar35,
                 SUB164(auVar18 * auVar27,8) == 0)) break;
              uVar29 = uVar31 & 0xffffffff;
              uVar32 = uVar33;
            }
          }
          plVar4 = (long *)(lVar6 + uVar33 * 8);
          *(undefined4 *)(lVar7 + uVar33 * 4) = 0;
          plVar34 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar34) {
            *(long *)(this + 0x18) = *plVar34;
            plVar34 = (long *)*plVar4;
            if (*(long **)(this + 0x20) != plVar34) goto LAB_00100979;
          }
          else if (*(long **)(this + 0x20) != plVar34) {
LAB_00100979:
            plVar10 = (long *)plVar34[1];
            goto joined_r0x00100980;
          }
          *(long *)(this + 0x20) = plVar34[1];
          plVar34 = (long *)*plVar4;
          plVar10 = (long *)plVar34[1];
joined_r0x00100980:
          if (plVar10 != (long *)0x0) {
            *plVar10 = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          Memory::free_static(plVar34,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar33 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar37 = *(uint *)(lVar7 + uVar31 * 4);
        uVar33 = uVar31 & 0xffffffff;
        uVar36 = uVar36 + 1;
      } while ((uVar37 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar37 * lVar8, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar35, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar5 + uVar30) - SUB164(auVar12 * auVar21,8)) * lVar8,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar35, uVar29 = uVar31,
              uVar36 <= SUB164(auVar13 * auVar22,8)));
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



/* FindInFiles::set_search_text(String const&) */

void __thiscall FindInFiles::set_search_text(FindInFiles *this,String *param_1)

{
  if (*(long *)(this + 0x408) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x408),(CowData *)param_1);
    return;
  }
  return;
}



/* FindInFiles::set_whole_words(bool) */

void __thiscall FindInFiles::set_whole_words(FindInFiles *this,bool param_1)

{
  this[0x440] = (FindInFiles)param_1;
  return;
}



/* FindInFiles::set_match_case(bool) */

void __thiscall FindInFiles::set_match_case(FindInFiles *this,bool param_1)

{
  this[0x441] = (FindInFiles)param_1;
  return;
}



/* FindInFiles::set_folder(String const&) */

void __thiscall FindInFiles::set_folder(FindInFiles *this,String *param_1)

{
  if (*(long *)(this + 0x438) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x438),(CowData *)param_1);
    return;
  }
  return;
}



/* FindInFiles::set_filter(HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >
   const&) */

void __thiscall FindInFiles::set_filter(FindInFiles *this,HashSet *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  CowData *pCVar11;
  CowData<char32_t> *this_00;
  void *pvVar12;
  
  if (param_1 == (HashSet *)(this + 0x410)) {
    return;
  }
  pvVar12 = *(void **)(this + 0x410);
  if (pvVar12 != (void *)0x0) {
    if ((*(int *)(this + 0x434) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x430) * 4) == 0 ||
        (memset(*(void **)(this + 0x428),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x430) * 4) << 2),
        *(int *)(this + 0x434) != 0)))) {
      lVar10 = 0;
      do {
        plVar2 = (long *)((long)pvVar12 + lVar10 * 8);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
          pvVar12 = *(void **)(this + 0x410);
        }
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x434));
      *(undefined4 *)(this + 0x434) = 0;
      if (pvVar12 == (void *)0x0) goto LAB_00100cff;
    }
    Memory::free_static(pvVar12,false);
    Memory::free_static(*(void **)(this + 0x420),false);
    Memory::free_static(*(void **)(this + 0x418),false);
    Memory::free_static(*(void **)(this + 0x428),false);
    *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x420) = (undefined1  [16])0x0;
  }
LAB_00100cff:
  uVar3 = *(ulong *)(param_1 + 0x20);
  *(ulong *)(this + 0x430) = uVar3;
  if ((int)(uVar3 >> 0x20) != 0) {
    uVar4 = *(uint *)(hash_table_size_primes + (uVar3 & 0xffffffff) * 4);
    uVar3 = (ulong)uVar4 * 4;
    uVar8 = Memory::alloc_static(uVar3,false);
    lVar10 = 0;
    *(undefined8 *)(this + 0x428) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar4 * 8,false);
    *(undefined8 *)(this + 0x410) = uVar8;
    uVar8 = Memory::alloc_static(uVar3,false);
    *(undefined8 *)(this + 0x420) = uVar8;
    uVar8 = Memory::alloc_static(uVar3,false);
    *(undefined8 *)(this + 0x418) = uVar8;
    if (*(int *)(this + 0x434) != 0) {
      do {
        this_00 = (CowData<char32_t> *)(*(long *)(this + 0x410) + lVar10 * 8);
        pCVar11 = (CowData *)(lVar10 * 8 + *(long *)param_1);
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar11 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar11);
        }
        *(undefined4 *)(*(long *)(this + 0x420) + lVar10 * 4) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar10 * 4);
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x434));
    }
    if (uVar4 != 0) {
      lVar10 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(this + 0x428);
      uVar9 = 0;
      lVar6 = *(long *)(param_1 + 8);
      lVar7 = *(long *)(this + 0x418);
      do {
        *(undefined4 *)(lVar5 + uVar9) = *(undefined4 *)(lVar10 + uVar9);
        *(undefined4 *)(lVar7 + uVar9) = *(undefined4 *)(lVar6 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar9 != uVar3);
      return;
    }
  }
  return;
}



/* FindInFiles::stop() */

void __thiscall FindInFiles::stop(FindInFiles *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x442] = (FindInFiles)0x0;
  String::parse_latin1((StrRange *)(this + 0x448));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_process(SUB81(this,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFiles::get_progress() const */

undefined8 __thiscall FindInFiles::get_progress(FindInFiles *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  iVar1 = *(int *)(this + 0x470);
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar2 = (long)iVar1;
    if (*(long *)(this + 0x468) != 0) {
      lVar2 = lVar2 - *(long *)(*(long *)(this + 0x468) + -8);
    }
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)lVar2 / (float)iVar1;
    uVar3 = auVar4._0_8_;
  }
  return uVar3;
}



/* FindInFilesDialog::set_replace_text(String const&) */

void __thiscall FindInFilesDialog::set_replace_text(FindInFilesDialog *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0xdc8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00100f93;
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
      local_18 = *(long *)param_1;
    }
  }
LAB_00100f93:
  LineEdit::set_text(uVar2);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindInFilesDialog::get_search_text() const */

FindInFilesDialog * __thiscall FindInFilesDialog::get_search_text(FindInFilesDialog *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::get_replace_text() const */

FindInFilesDialog * __thiscall FindInFilesDialog::get_replace_text(FindInFilesDialog *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::is_match_case() const */

void FindInFilesDialog::is_match_case(void)

{
  BaseButton::is_pressed();
  return;
}



/* FindInFilesDialog::is_whole_words() const */

void FindInFilesDialog::is_whole_words(void)

{
  BaseButton::is_pressed();
  return;
}



/* FindInFilesDialog::get_folder() const */

FindInFilesDialog * __thiscall FindInFilesDialog::get_folder(FindInFilesDialog *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81(this,0),true);
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_28 + -0x10),false);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::set_with_replace(bool) */

void __thiscall FindInFilesPanel::set_with_replace(FindInFilesPanel *this,bool param_1)

{
  undefined8 uVar1;
  
  this[0xa68] = (FindInFilesPanel)param_1;
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa70),0));
  if (param_1) {
    Tree::set_columns((int)*(undefined8 *)(this + 0x9d8));
    Tree::set_column_expand((int)*(undefined8 *)(this + 0x9d8),false);
    uVar1 = *(undefined8 *)(this + 0x9d8);
    EditorScale::get_scale();
    Tree::set_column_custom_minimum_width((int)uVar1,0);
    return;
  }
  Tree::set_column_expand((int)*(undefined8 *)(this + 0x9d8),false);
  Tree::set_columns((int)*(undefined8 *)(this + 0x9d8));
  return;
}



/* FindInFilesPanel::set_replace_text(String const&) */

void __thiscall FindInFilesPanel::set_replace_text(FindInFilesPanel *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_18;
  
  uVar2 = *(undefined8 *)(this + 0xa78);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00101233;
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
      local_18 = *(long *)param_1;
    }
  }
LAB_00101233:
  LineEdit::set_text(uVar2);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindInFilesPanel::clear() */

void __thiscall FindInFilesPanel::clear(FindInFilesPanel *this)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  if ((*(long *)(this + 0xa10) != 0) && (*(int *)(this + 0xa34) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa30) * 4);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(this + 0xa18) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0xa18) + lVar5) = 0;
          pvVar3 = *(void **)(*(long *)(this + 0xa10) + lVar5 * 2);
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
          *(undefined8 *)(*(long *)(this + 0xa10) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar2 << 2 != lVar5);
    }
    *(undefined4 *)(this + 0xa34) = 0;
    *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0xa40) != 0) && (*(int *)(this + 0xa64) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa60) * 4);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(this + 0xa48) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0xa48) + lVar5) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0xa40) + lVar5 * 2),false);
          *(undefined8 *)(*(long *)(this + 0xa40) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != (ulong)uVar2 << 2);
    }
    *(undefined4 *)(this + 0xa64) = 0;
    *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  }
  Tree::clear();
  Tree::create_item(*(TreeItem **)(this + 0x9d8),0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindInFilesPanel::stop_search() */

void __thiscall FindInFilesPanel::stop_search(FindInFilesPanel *this)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  lVar2 = *(long *)(this + 0x9c8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(lVar2 + 0x442) = 0;
  local_58 = &_LC11;
  local_50 = 0;
  String::parse_latin1((StrRange *)(lVar2 + 0x448));
  Node::set_process(SUB81(lVar2,0));
  local_58 = &_LC11;
  local_60 = 0;
  pSVar3 = *(String **)(this + 0x9e0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  Label::set_text(pSVar3);
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
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
  local_48 = (undefined4)_LC28;
  uStack_44 = _LC28._4_4_;
  uStack_40 = _UNK_0011c848;
  uStack_3c = _UNK_0011c84c;
  (**(code **)(**(long **)(this + 0xa00) + 0x270))(*(long **)(this + 0xa00),&local_48);
  CanvasItem::show();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::_on_cancel_button_clicked() */

void __thiscall FindInFilesPanel::_on_cancel_button_clicked(FindInFilesPanel *this)

{
  stop_search(this);
  return;
}



/* FindInFilesPanel::get_replace_text() */

FindInFilesPanel * __thiscall FindInFilesPanel::get_replace_text(FindInFilesPanel *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::update_replace_buttons() */

void __thiscall FindInFilesPanel::update_replace_buttons(FindInFilesPanel *this)

{
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
  return;
}



/* FindInFilesPanel::set_progress_visible(bool) */

void __thiscall FindInFilesPanel::set_progress_visible(FindInFilesPanel *this,bool param_1)

{
  long in_FS_OFFSET;
  undefined4 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (undefined4)_LC28;
  if (!param_1) {
    uVar1 = 0;
  }
  local_28 = CONCAT44(_LC28._4_4_,(undefined4)_LC28);
  _local_20 = CONCAT44(uVar1,0x3f800000);
  (**(code **)(**(long **)(this + 0xa00) + 0x270))(*(long **)(this + 0xa00),&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::get_filter() const */

void FindInFilesDialog::get_filter(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  long local_50;
  String local_48 [24];
  long local_30;
  
  iVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI[2] = 2;
  *in_RDI = (undefined1  [16])0x0;
  in_RDI[1] = (undefined1  [16])0x0;
  while( true ) {
    lVar2 = local_50;
    iVar4 = Node::get_child_count(SUB81(*(undefined8 *)(in_RSI + 0xe00),0));
    if (iVar4 <= iVar5) break;
    Node::get_child((int)*(undefined8 *)(in_RSI + 0xe00),SUB41(iVar5,0));
    cVar3 = BaseButton::is_pressed();
    if (cVar3 != '\0') {
      Button::get_text();
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_48);
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
    }
    iVar5 = iVar5 + 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<char>::push_back(char) [clone .isra.0] */

void __thiscall Vector<char>::push_back(Vector<char> *this,char param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<char>::resize<false>((CowData<char> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<char>::_copy_on_write((CowData<char> *)(this + 8));
        *(char *)(*(long *)(this + 8) + -1 + lVar3) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* FindInFilesDialog::set_find_in_files_mode(FindInFilesDialog::FindInFilesMode) */

void __thiscall FindInFilesDialog::set_find_in_files_mode(FindInFilesDialog *this,int param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  float local_40 [2];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xdb0) != param_2) {
    *(int *)(this + 0xdb0) = param_2;
    if (param_2 == 0) {
      local_60 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "Find in Files";
      local_68 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange *)&local_68);
      TTR((String *)&local_58,(String *)&local_68);
      Window::set_title((String *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CanvasItem::hide();
      CanvasItem::hide();
    }
    else if (param_2 == 1) {
      local_60 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "Replace in Files";
      local_68 = 0;
      local_50 = 0x10;
      String::parse_latin1((StrRange *)&local_68);
      TTR((String *)&local_58,(String *)&local_68);
      Window::set_title((String *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CanvasItem::show();
      CanvasItem::show();
    }
    iVar1 = Window::get_size();
    local_40[1] = 0.0;
    local_40[0] = (float)iVar1;
    local_38 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_40);
    Window::set_size(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::_on_search_text_submitted(String const&) */

void FindInFilesDialog::_on_search_text_submitted(String *param_1)

{
  code *pcVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = BaseButton::is_disabled();
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0xdb0) == 0)) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x260);
    local_40 = 0;
    local_38 = "find";
    local_30 = 4;
    String::parse_latin1((StrRange *)&local_40);
    (*pcVar1)(param_1,(StrRange *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  cVar2 = BaseButton::is_disabled();
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0xdb0) == 1)) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x260);
    local_40 = 0;
    local_38 = "replace";
    local_30 = 7;
    String::parse_latin1((StrRange *)&local_40);
    (*pcVar1)(param_1,(StrRange *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::_on_replace_text_submitted(String const&) */

void FindInFilesDialog::_on_replace_text_submitted(String *param_1)

{
  code *pcVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = BaseButton::is_disabled();
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0xdb0) == 1)) {
    local_40 = 0;
    local_30 = 7;
    pcVar1 = *(code **)(*(long *)param_1 + 0x260);
    local_38 = "replace";
    String::parse_latin1((StrRange *)&local_40);
    (*pcVar1)(param_1,(StrRange *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::_on_search_text_modified(String const&) */

void FindInFilesDialog::_on_search_text_modified(String *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_28 [8];
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0xde8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = 0x20b;
      pcVar2 = "Parameter \"_find_button\" is null.";
LAB_00101d32:
      _err_print_error("_on_search_text_modified","editor/find_in_files.cpp",uVar3,pcVar2,0,0);
      return;
    }
  }
  else if (*(long *)(param_1 + 0xdf0) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = 0x20c;
      pcVar2 = "Parameter \"_replace_button\" is null.";
      goto LAB_00101d32;
    }
  }
  else {
    LineEdit::get_text();
    BaseButton::set_disabled(SUB81(lVar1,0));
    CowData<char32_t>::_unref(local_28);
    uVar3 = *(undefined8 *)(param_1 + 0xdf0);
    LineEdit::get_text();
    BaseButton::set_disabled(SUB81(uVar3,0));
    CowData<char32_t>::_unref(local_28);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindInFilesDialog::FindInFilesDialog() */

void __thiscall FindInFilesDialog::FindInFilesDialog(FindInFilesDialog *this)

{
  long *plVar1;
  code *pcVar2;
  String *pSVar3;
  BoxContainer *pBVar4;
  GridContainer *this_00;
  Label *pLVar5;
  LineEdit *pLVar6;
  Control *this_01;
  CheckBox *pCVar7;
  Button *this_02;
  CallableCustom *pCVar8;
  FileDialog *this_03;
  undefined8 uVar9;
  bool bVar10;
  long in_FS_OFFSET;
  float fVar11;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  float local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined8 *)(this + 0xe30) = 2;
  *(undefined ***)this = &PTR__initialize_classv_0011bc00;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
  local_48[0] = (float)EditorScale::get_scale();
  local_48[0] = local_48[0] * __LC61;
  local_48[1] = 0.0;
  local_50 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_48);
  Window::set_min_size(this);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Find in Files";
  local_78 = 0;
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,true);
  pBVar4[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011b358;
  postinitialize_handler((Object *)pBVar4);
  fVar11 = (float)EditorScale::get_scale();
  Control::set_anchor_and_offset(0,_LC62 * fVar11,pBVar4,0,1);
  fVar11 = (float)EditorScale::get_scale();
  Control::set_anchor_and_offset(0,_LC62 * fVar11,pBVar4,1,1);
  EditorScale::get_scale();
  Control::set_anchor_and_offset(pBVar4,2,1);
  EditorScale::get_scale();
  Control::set_anchor_and_offset(pBVar4,3,1);
  Node::add_child(this,pBVar4,0,0);
  this_00 = (GridContainer *)operator_new(0xa10,"");
  GridContainer::GridContainer(this_00);
  postinitialize_handler((Object *)this_00);
  GridContainer::set_columns((int)this_00);
  Node::add_child(pBVar4,this_00,0,0);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar5,(String *)&local_68);
  postinitialize_handler((Object *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Find:";
  local_78 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text((String *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(this_00,pLVar5,0,0);
  pLVar6 = (LineEdit *)operator_new(0xbb0,"");
  local_68 = (char *)0x0;
  LineEdit::LineEdit(pLVar6,(String *)&local_68);
  postinitialize_handler((Object *)pLVar6);
  *(LineEdit **)(this + 0xdb8) = pLVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdb8),3);
  plVar1 = *(long **)(this + 0xdb8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindInFilesDialog,String_const&>
            ((FindInFilesDialog *)&local_68,(char *)this,
             (_func_void_String_ptr *)"&FindInFilesDialog::_on_search_text_modified");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,(String *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  plVar1 = *(long **)(this + 0xdb8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindInFilesDialog,String_const&>
            ((FindInFilesDialog *)&local_68,(char *)this,
             (_func_void_String_ptr *)"&FindInFilesDialog::_on_search_text_submitted");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(String *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdb8),0,0);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar5,(String *)&local_68);
  postinitialize_handler((Object *)pLVar5);
  *(Label **)(this + 0xdc0) = pLVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  pSVar3 = *(String **)(this + 0xdc0);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Replace:";
  local_78 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CanvasItem::hide();
  Node::add_child(this_00,*(undefined8 *)(this + 0xdc0),0,0);
  pLVar6 = (LineEdit *)operator_new(0xbb0,"");
  local_68 = (char *)0x0;
  LineEdit::LineEdit(pLVar6,(String *)&local_68);
  postinitialize_handler((Object *)pLVar6);
  *(LineEdit **)(this + 0xdc8) = pLVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc8),3);
  plVar1 = *(long **)(this + 0xdc8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindInFilesDialog,String_const&>
            ((FindInFilesDialog *)&local_68,(char *)this,
             (_func_void_String_ptr *)"&FindInFilesDialog::_on_replace_text_submitted");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(String *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  CanvasItem::hide();
  Node::add_child(this_00,*(undefined8 *)(this + 0xdc8),0,0);
  this_01 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_01);
  postinitialize_handler((Object *)this_01);
  Node::add_child(this_00,this_01,0,0);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,false);
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011afe0;
  pBVar4[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar4);
  pCVar7 = (CheckBox *)operator_new(0xc60,"");
  local_68 = (char *)0x0;
  CheckBox::CheckBox(pCVar7,(String *)&local_68);
  postinitialize_handler((Object *)pCVar7);
  *(CheckBox **)(this + 0xde0) = pCVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  pSVar3 = *(String **)(this + 0xde0);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_78 = 0;
  local_68 = "Whole Words";
  local_60 = 0xb;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xde0),0,0);
  pCVar7 = (CheckBox *)operator_new(0xc60,"");
  local_68 = (char *)0x0;
  CheckBox::CheckBox(pCVar7,(String *)&local_68);
  postinitialize_handler((Object *)pCVar7);
  *(CheckBox **)(this + 0xdd8) = pCVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  pSVar3 = *(String **)(this + 0xdd8);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_78 = 0;
  local_68 = "Match Case";
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xdd8),0,0);
  Node::add_child(this_00,pBVar4,0,0);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar5,(String *)&local_68);
  postinitialize_handler((Object *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Folder:";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text((String *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(this_00,pLVar5,0,0);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,false);
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011afe0;
  pBVar4[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar4);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar5,(String *)&local_68);
  postinitialize_handler((Object *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "res://";
  local_70 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_70);
  Label::set_text((String *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(pBVar4,pLVar5,0,0);
  pLVar6 = (LineEdit *)operator_new(0xbb0,"");
  local_68 = (char *)0x0;
  LineEdit::LineEdit(pLVar6,(String *)&local_68);
  postinitialize_handler((Object *)pLVar6);
  *(LineEdit **)(this + 0xdd0) = pLVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdd0),3);
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xdd0),0,0);
  this_02 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(this_02,(String *)&local_68);
  postinitialize_handler((Object *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "...";
  local_70 = 0;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  Button::set_text((String *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pcVar2 = *(code **)(*(long *)this_02 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_0011bf08;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar9 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar9;
  *(code **)(pCVar8 + 0x38) = _on_folder_button_pressed;
  *(undefined **)(pCVar8 + 0x20) = &_LC11;
  *(FindInFilesDialog **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "FindInFilesDialog::_on_folder_button_pressed";
  Callable::Callable((Callable *)&local_68,pCVar8);
  (*pcVar2)(this_02,SceneStringNames::singleton + 0x238,(String *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar4,this_02,0,0);
  this_03 = (FileDialog *)operator_new(0x1028,"");
  FileDialog::FileDialog(this_03);
  postinitialize_handler((Object *)this_03);
  *(FileDialog **)(this + 0xdf8) = this_03;
  FileDialog::set_file_mode(this_03,2);
  plVar1 = *(long **)(this + 0xdf8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar9 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_0011bf98;
  *(undefined8 *)(pCVar8 + 0x30) = uVar9;
  *(code **)(pCVar8 + 0x38) = _on_folder_selected;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined **)(pCVar8 + 0x20) = &_LC11;
  *(FindInFilesDialog **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "FindInFilesDialog::_on_folder_selected";
  Callable::Callable((Callable *)&local_68,pCVar8);
  StringName::StringName((StringName *)&local_70,"dir_selected",false);
  (*pcVar2)(plVar1,(StrRange *)&local_70,(String *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xdf8),0,0);
  Node::add_child(this_00,pBVar4,0,0);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar5,(String *)&local_68);
  postinitialize_handler((Object *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Filters:";
  local_78 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text((String *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = 
  "Include the files with the following extensions. Add or remove them in ProjectSettings.";
  local_78 = 0;
  local_60 = 0x57;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Control::set_tooltip_text((String *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(this_00,pLVar5,0,0);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,false);
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011afe0;
  pBVar4[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar4);
  *(BoxContainer **)(this + 0xe00) = pBVar4;
  Node::add_child(this_00,pBVar4,0,0);
  local_68 = "find";
  local_70 = 0;
  local_60 = 4;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "";
  local_78 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = "Find...";
  local_80 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  bVar10 = SUB81((String *)&local_68,0);
  uVar9 = AcceptDialog::add_button((String *)this,bVar10,(String *)0x0);
  *(undefined8 *)(this + 0xde8) = uVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xde8),0));
  local_68 = "replace";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "";
  local_78 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = "Replace...";
  local_80 = 0;
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  uVar9 = AcceptDialog::add_button((String *)this,bVar10,(String *)0x0);
  *(undefined8 *)(this + 0xdf0) = uVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
  local_68 = "";
  local_70 = 0;
  pSVar3 = *(String **)(this + 0xd88);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Cancel";
  local_78 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  *(undefined4 *)(this + 0xdb0) = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::set_search_text(String const&) */

void __thiscall FindInFilesDialog::set_search_text(FindInFilesDialog *this,String *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  Variant *local_58 [2];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xdb0) == 0) {
    if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
      uVar1 = *(undefined8 *)(this + 0xdb8);
      local_58[0] = (Variant *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
      LineEdit::set_text(uVar1,local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      _on_search_text_modified((String *)this);
    }
    pcVar2 = *(char **)(this + 0xdb8);
  }
  else {
    if (*(int *)(this + 0xdb0) != 1) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00103077;
    }
    pcVar2 = *(char **)(this + 0xdb8);
    if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
      local_58[0] = (Variant *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
      LineEdit::set_text(pcVar2,local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      create_custom_callable_function_pointer<Control>
                ((Control *)local_58,*(char **)(this + 0xdc8),(_func_void *)"&Control::grab_focus");
      Variant::Variant((Variant *)local_48,0);
      Callable::call_deferredp(local_58,0);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)local_58);
      LineEdit::select_all();
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _on_search_text_modified((String *)this);
        return;
      }
      goto LAB_00103077;
    }
  }
  create_custom_callable_function_pointer<Control>
            ((Control *)local_58,pcVar2,(_func_void *)"&Control::grab_focus");
  Variant::Variant((Variant *)local_48,0);
  Callable::call_deferredp(local_58,0);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    LineEdit::select_all();
    return;
  }
LAB_00103077:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindInFilesPanel::FindInFilesPanel() */

void __thiscall FindInFilesPanel::FindInFilesPanel(FindInFilesPanel *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  String *pSVar5;
  StringName *pSVar6;
  Node *this_00;
  CallableCustom *pCVar7;
  BoxContainer *this_01;
  BoxContainer *pBVar8;
  Label *pLVar9;
  ProgressBar *this_02;
  Button *pBVar10;
  Tree *this_03;
  LineEdit *this_04;
  int iVar11;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  uVar3 = _LC35;
  this[0xa68] = (FindInFilesPanel)0x0;
  *(undefined8 *)(this + 0xa30) = uVar3;
  *(undefined8 *)(this + 0xa60) = uVar3;
  *(undefined ***)this = &PTR__initialize_classv_0011b898;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined1 (*) [16])(this + 0x9c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  this_00 = (Node *)operator_new(0x478,"");
  Node::Node(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0011b6d0;
  *(undefined8 *)(this_00 + 0x430) = uVar3;
  *(undefined2 *)(this_00 + 0x440) = 0x101;
  *(undefined8 *)(this_00 + 0x428) = 0;
  *(undefined8 *)(this_00 + 0x438) = 0;
  this_00[0x442] = (Node)0x0;
  *(undefined8 *)(this_00 + 0x448) = 0;
  *(undefined8 *)(this_00 + 0x458) = 0;
  *(undefined8 *)(this_00 + 0x468) = 0;
  *(undefined4 *)(this_00 + 0x470) = 0;
  *(undefined1 (*) [16])(this_00 + 0x408) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x418) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  lVar1 = *(long *)this_00;
  *(Node **)(this + 0x9c8) = this_00;
  pcVar2 = *(code **)(lVar1 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC11;
  *(FindInFilesPanel **)(pCVar7 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar7 = &PTR_hash_0011c0b8;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(undefined8 *)(pCVar7 + 0x30) = uVar3;
  *(code **)(pCVar7 + 0x38) = _on_result_found;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "FindInFilesPanel::_on_result_found";
  Callable::Callable((Callable *)&local_68,pCVar7);
  StringName::StringName((StringName *)&local_70,FindInFiles::SIGNAL_RESULT_FOUND,false);
  (*pcVar2)(this_00,(StringName *)&local_70,(Callable *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar4 = *(long **)(this + 0x9c8);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<FindInFilesPanel>
            ((FindInFilesPanel *)&local_68,(char *)this,
             (_func_void *)"&FindInFilesPanel::_on_finished");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0xf8,(Callable *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(this,*(undefined8 *)(this + 0x9c8),0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_0011b358;
  postinitialize_handler((Object *)this_01);
  Control::set_anchor_and_offset(this_01,0,1);
  Control::set_anchor_and_offset(this_01,1,1);
  Control::set_anchor_and_offset(this_01,2,1);
  Control::set_anchor_and_offset(this_01,3,1);
  Node::add_child(this,this_01,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_0011afe0;
  postinitialize_handler((Object *)pBVar8);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_68);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Find:";
  local_78 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(pBVar8,pLVar9,0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_68);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0x9d0) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0x9d0),0,0);
  this_02 = (ProgressBar *)operator_new(0xa48,"");
  ProgressBar::ProgressBar(this_02);
  postinitialize_handler((Object *)this_02);
  *(ProgressBar **)(this + 0xa00) = this_02;
  Control::set_h_size_flags(this_02,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa00),4);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa00),0,0);
  local_58 = _LC28;
  uStack_50 = _UNK_0011c848;
  (**(code **)(**(long **)(this + 0xa00) + 0x270))(*(long **)(this + 0xa00),&local_58);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_68);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0x9e0) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0x9e0),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0x9e8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  pSVar5 = *(String **)(this + 0x9e8);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Refresh";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  plVar4 = *(long **)(this + 0x9e8);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<FindInFilesPanel>
            ((FindInFilesPanel *)&local_68,(char *)this,
             (_func_void *)"&FindInFilesPanel::_on_refresh_button_clicked");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x238,(Callable *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  CanvasItem::hide();
  Node::add_child(pBVar8,*(undefined8 *)(this + 0x9e8),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0x9f0) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  pSVar5 = *(String **)(this + 0x9f0);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Cancel";
  local_78 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  plVar4 = *(long **)(this + 0x9f0);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<FindInFilesPanel>
            ((FindInFilesPanel *)&local_68,(char *)this,
             (_func_void *)"&FindInFilesPanel::_on_cancel_button_clicked");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x238,(Callable *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  CanvasItem::hide();
  Node::add_child(pBVar8,*(undefined8 *)(this + 0x9f0),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0x9f8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  pSVar5 = *(String **)(this + 0x9f8);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Close";
  local_78 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  plVar4 = *(long **)(this + 0x9f8);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<FindInFilesPanel>
            ((FindInFilesPanel *)&local_68,(char *)this,
             (_func_void *)"&FindInFilesPanel::_on_close_button_clicked");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x238,(Callable *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0x9f8),0,0);
  Node::add_child(this_01,pBVar8,0,0);
  this_03 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_03);
  postinitialize_handler((Object *)this_03);
  *(Tree **)(this + 0x9d8) = this_03;
  Node::set_auto_translate_mode(this_03,2);
  Control::set_v_size_flags(*(undefined8 *)(this + 0x9d8),3);
  plVar4 = *(long **)(this + 0x9d8);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<FindInFilesPanel>
            ((FindInFilesPanel *)&local_68,(char *)this,
             (_func_void *)"&FindInFilesPanel::_on_result_selected");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x260,(Callable *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  plVar4 = *(long **)(this + 0x9d8);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<FindInFilesPanel>
            ((FindInFilesPanel *)&local_68,(char *)this,
             (_func_void *)"&FindInFilesPanel::_on_item_edited");
  StringName::StringName((StringName *)&local_70,"item_edited",false);
  (*pcVar2)(plVar4,(StringName *)&local_70,(Callable *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar4 = *(long **)(this + 0x9d8);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC11;
  *(FindInFilesPanel **)(pCVar7 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar7 = &PTR_hash_0011c1d8;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(undefined8 *)(pCVar7 + 0x30) = uVar3;
  *(code **)(pCVar7 + 0x38) = _on_button_clicked;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "FindInFilesPanel::_on_button_clicked";
  Callable::Callable((Callable *)&local_68,pCVar7);
  StringName::StringName((StringName *)&local_70,"button_clicked",false);
  (*pcVar2)(plVar4,(StringName *)&local_70,(Callable *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0x9d8),0));
  Tree::set_select_mode(*(undefined8 *)(this + 0x9d8),1);
  Tree::set_allow_rmb_select(SUB81(*(undefined8 *)(this + 0x9d8),0));
  Tree::set_allow_reselect(SUB81(*(undefined8 *)(this + 0x9d8),0));
  pSVar6 = *(StringName **)(this + 0x9d8);
  StringName::StringName((StringName *)&local_68,"inner_item_margin_left",false);
  iVar11 = (int)(Callable *)&local_68;
  Control::add_theme_constant_override(pSVar6,iVar11);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar6 = *(StringName **)(this + 0x9d8);
  StringName::StringName((StringName *)&local_68,"inner_item_margin_right",false);
  Control::add_theme_constant_override(pSVar6,iVar11);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  Tree::create_item(*(TreeItem **)(this + 0x9d8),0);
  Node::add_child(this_01,*(undefined8 *)(this + 0x9d8),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_0011afe0;
  postinitialize_handler((Object *)pBVar8);
  *(BoxContainer **)(this + 0xa70) = pBVar8;
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_68);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Replace:";
  local_78 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(*(undefined8 *)(this + 0xa70),pLVar9,0,0);
  this_04 = (LineEdit *)operator_new(0xbb0,"");
  local_68 = (char *)0x0;
  LineEdit::LineEdit(this_04,(String *)&local_68);
  postinitialize_handler((Object *)this_04);
  *(LineEdit **)(this + 0xa78) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa78),3);
  plVar4 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC11;
  *(FindInFilesPanel **)(pCVar7 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar7 = &PTR_hash_0011c268;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(undefined8 *)(pCVar7 + 0x30) = uVar3;
  *(undefined8 *)(pCVar7 + 0x38) = 0x100000;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "FindInFilesPanel::_on_replace_text_changed";
  Callable::Callable((Callable *)&local_68,pCVar7);
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x270,(Callable *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(*(undefined8 *)(this + 0xa70),*(undefined8 *)(this + 0xa78),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa80) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  local_70 = 0;
  pSVar5 = *(String **)(this + 0xa80);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Replace all (no undo)";
  local_78 = 0;
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  plVar4 = *(long **)(this + 0xa80);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<FindInFilesPanel>
            ((FindInFilesPanel *)&local_68,(char *)this,
             (_func_void *)"&FindInFilesPanel::_on_replace_all_clicked");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x238,(Callable *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(*(undefined8 *)(this + 0xa70),*(undefined8 *)(this + 0xa80),0,0);
  CanvasItem::hide();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this_01,*(undefined8 *)(this + 0xa70),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::_on_result_selected() */

void __thiscall FindInFilesPanel::_on_result_selected(FindInFilesPanel *this)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  Variant *pVVar24;
  long in_FS_OFFSET;
  long local_f8;
  undefined8 local_f0;
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  int local_b8 [6];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar16 = Tree::get_selected();
  lVar5 = *(long *)(this + 0xa40);
  if ((lVar5 != 0) && (*(int *)(this + 0xa64) != 0)) {
    uVar23 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa60) * 4));
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa60) * 8);
    uVar17 = lVar16 * 0x3ffff - 1;
    uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
    uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
    uVar17 = uVar17 >> 0x16 ^ uVar17;
    uVar21 = uVar17 & 0xffffffff;
    if ((int)uVar17 == 0) {
      uVar21 = 1;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar21 * lVar6;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar23;
    lVar19 = SUB168(auVar7 * auVar11,8);
    uVar22 = *(uint *)(*(long *)(this + 0xa48) + lVar19 * 4);
    uVar18 = SUB164(auVar7 * auVar11,8);
    if (uVar22 != 0) {
      uVar20 = 0;
      while ((uVar22 != (uint)uVar21 || (lVar16 != *(long *)(*(long *)(lVar5 + lVar19 * 8) + 0x10)))
            ) {
        uVar20 = uVar20 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(uVar18 + 1) * lVar6;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar23;
        lVar19 = SUB168(auVar8 * auVar12,8);
        uVar22 = *(uint *)(*(long *)(this + 0xa48) + lVar19 * 4);
        uVar18 = SUB164(auVar8 * auVar12,8);
        if ((uVar22 == 0) ||
           (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar22 * lVar6, auVar13._8_8_ = 0,
           auVar13._0_8_ = uVar23, auVar10._8_8_ = 0,
           auVar10._0_8_ =
                (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa60) * 4) +
                        uVar18) - SUB164(auVar9 * auVar13,8)) * lVar6, auVar14._8_8_ = 0,
           auVar14._0_8_ = uVar23, SUB164(auVar10 * auVar14,8) < uVar20)) goto LAB_001042e1;
      }
      lVar5 = *(long *)(lVar5 + (ulong)uVar18 * 8);
      if (lVar5 != 0) {
        iVar2 = *(int *)(lVar5 + 0x1c);
        iVar3 = *(int *)(lVar5 + 0x18);
        iVar4 = *(int *)(lVar5 + 0x20);
        TreeItem::get_parent();
        TreeItem::get_metadata((int)(Variant *)local_b8);
        Variant::operator_cast_to_String((Variant *)&local_f8);
        if (Variant::needs_deinit[local_b8[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_f0 = 0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_f8);
        }
        if (_on_result_selected()::{lambda()#1}::operator()()::sname == '\0') {
          iVar15 = __cxa_guard_acquire(&_on_result_selected()::{lambda()#1}::operator()()::sname);
          if (iVar15 != 0) {
            _scs_create((char *)&_on_result_selected()::{lambda()#1}::operator()()::sname,
                        SUB81(SIGNAL_RESULT_SELECTED,0));
            __cxa_atexit(StringName::~StringName,
                         &_on_result_selected()::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_on_result_selected()::{lambda()#1}::operator()()::sname);
          }
        }
        Variant::Variant((Variant *)local_b8,(String *)&local_f0);
        Variant::Variant(local_a0,iVar3);
        Variant::Variant(local_88,iVar2);
        Variant::Variant(local_70,iVar4);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pVVar24 = (Variant *)local_40;
        local_e8 = (Variant *)local_b8;
        pVStack_e0 = local_a0;
        local_d8 = local_88;
        pVStack_d0 = local_70;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&_on_result_selected()::{lambda()#1}::operator()()::sname,&local_e8,4);
        do {
          pVVar1 = pVVar24 + -0x18;
          pVVar24 = pVVar24 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar24 != (Variant *)local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      }
    }
  }
LAB_001042e1:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindInFilesPanel::draw_result_text(Object*, Rect2) */

void FindInFilesPanel::draw_result_text
               (undefined8 param_1_00,undefined8 param_2,StringName *param_1,long param_4)

{
  code *pcVar1;
  Rect2 *pRVar2;
  Object *pOVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  TreeItem **ppTVar7;
  long in_FS_OFFSET;
  float fVar8;
  CowData<char32_t> local_a0 [8];
  Object *local_98;
  ulong local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != 0) {
    ppTVar7 = (TreeItem **)__dynamic_cast(param_4,&Object::typeinfo,&TreeItem::typeinfo,0);
    if (ppTVar7 != (TreeItem **)0x0) {
      local_90 = local_90 & 0xffffffff00000000;
      cVar4 = HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
              ::_lookup_pos((HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
                             *)(param_1 + 0xa38),ppTVar7,(uint *)&local_90);
      if (cVar4 != '\0') {
        if (*(long *)(*(long *)(param_1 + 0xa40) + (local_90 & 0xffffffff) * 8) != 0) {
          TreeItem::get_text((int)local_a0);
          local_90 = 0;
          Control::get_theme_font((StringName *)&local_98,*(StringName **)(param_1 + 0x9d8));
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          local_90 = 0;
          uVar5 = Control::get_theme_font_size
                            (*(StringName **)(param_1 + 0x9d8),
                             (StringName *)(SceneStringNames::singleton + 0xa8));
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          pOVar3 = local_98;
          pcVar1 = *(code **)(*(long *)local_98 + 0x288);
          local_88 = (float)param_1_00;
          fStack_84 = (float)((ulong)param_1_00 >> 0x20);
          local_80 = (float)(int)param_2;
          fStack_7c = (float)((ulong)param_2 >> 0x20);
          String::left((int)(CowData<char32_t> *)&local_90);
          fVar8 = (float)(*pcVar1)(_LC102,pOVar3,(CowData<char32_t> *)&local_90,0,uVar5,3,0,0);
          local_88 = (fVar8 - (float)_LC28) + local_88;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          pOVar3 = local_98;
          pcVar1 = *(code **)(*(long *)local_98 + 0x288);
          Label::get_text();
          local_80 = (float)(*pcVar1)(_LC102,pOVar3,(CowData<char32_t> *)&local_90,0,uVar5,3,0);
          local_80 = local_80 + (float)_LC28;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          fVar8 = (float)EditorScale::get_scale();
          _local_88 = CONCAT44(fVar8 + fStack_84,local_88);
          fVar8 = (float)EditorScale::get_scale();
          uVar5 = 0;
          pRVar2 = *(Rect2 **)(param_1 + 0x9d8);
          fVar8 = fStack_7c - (fVar8 + fVar8);
          local_68 = __LC103;
          uStack_64 = _UNK_0011c854;
          uStack_60 = _UNK_0011c858;
          uStack_5c = _UNK_0011c85c;
          _local_80 = CONCAT44(fVar8,local_80);
          if (draw_result_text(Object*,Rect2)::{lambda()#1}::operator()()::sname == '\0') {
            iVar6 = __cxa_guard_acquire(&draw_result_text(Object*,Rect2)::{lambda()#1}::operator()()
                                         ::sname);
            if (iVar6 != 0) {
              _scs_create((char *)&draw_result_text(Object*,Rect2)::{lambda()#1}::operator()()::
                                   sname,true);
              __cxa_atexit(StringName::~StringName,
                           &draw_result_text(Object*,Rect2)::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&draw_result_text(Object*,Rect2)::{lambda()#1}::operator()()::
                                   sname);
            }
          }
          local_78 = Control::get_theme_color
                               (param_1,(StringName *)
                                        &draw_result_text(Object*,Rect2)::{lambda()#1}::operator()()
                                         ::sname);
          local_70 = CONCAT44(uVar5,fVar8);
          local_58 = Color::operator*((Color *)&local_78,(Color *)&local_68);
          local_50 = CONCAT44(uVar5,fVar8);
          CanvasItem::draw_rect(pRVar2,(Color *)&local_88,SUB81(&local_58,0),_LC105,false);
          pRVar2 = *(Rect2 **)(param_1 + 0x9d8);
          local_68 = __LC106;
          uStack_64 = _UNK_0011c864;
          uStack_60 = _UNK_0011c868;
          uStack_5c = _UNK_0011c86c;
          if (draw_result_text(Object*,Rect2)::{lambda()#2}::operator()()::sname == '\0') {
            iVar6 = __cxa_guard_acquire(&draw_result_text(Object*,Rect2)::{lambda()#2}::operator()()
                                         ::sname);
            if (iVar6 != 0) {
              _scs_create((char *)&draw_result_text(Object*,Rect2)::{lambda()#2}::operator()()::
                                   sname,true);
              __cxa_atexit(StringName::~StringName,
                           &draw_result_text(Object*,Rect2)::{lambda()#2}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&draw_result_text(Object*,Rect2)::{lambda()#2}::operator()()::
                                   sname);
            }
          }
          local_78 = Control::get_theme_color
                               (param_1,(StringName *)
                                        &draw_result_text(Object*,Rect2)::{lambda()#2}::operator()()
                                         ::sname);
          local_70 = CONCAT44(uVar5,fVar8);
          local_58 = Color::operator*((Color *)&local_78,(Color *)&local_68);
          local_50 = CONCAT44(uVar5,fVar8);
          CanvasItem::draw_rect(pRVar2,(Color *)&local_88,SUB81(&local_58,0),_LC102,true);
          if (local_98 != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(local_98);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)local_98 + 0x140))(local_98);
                Memory::free_static(local_98,false);
              }
            }
          }
          CowData<char32_t>::_unref(local_a0);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::erase(String const&) [clone .isra.0]
    */

ulong __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::erase(HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
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
               SUB164(auVar14 * auVar24,8) == 0)) goto LAB_00104a4b;
            goto LAB_00104a05;
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
LAB_00104a05:
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
LAB_00104a4b:
  uVar30 = (ulong)uVar32;
  plVar4 = (long *)(lVar36 + uVar30 * 8);
  *(undefined4 *)(lVar6 + uVar30 * 4) = 0;
  plVar35 = (long *)*plVar4;
  if (*(long **)(this + 0x18) == plVar35) {
    *(long *)(this + 0x18) = *plVar35;
    plVar35 = (long *)*plVar4;
    if (*(long **)(this + 0x20) != plVar35) goto LAB_00104a69;
  }
  else if (*(long **)(this + 0x20) != plVar35) goto LAB_00104a69;
  *(long *)(this + 0x20) = plVar35[1];
  plVar35 = (long *)*plVar4;
LAB_00104a69:
  if ((long *)plVar35[1] != (long *)0x0) {
    *(long *)plVar35[1] = *plVar35;
    plVar35 = (long *)*plVar4;
  }
  if (*plVar35 != 0) {
    *(long *)(*plVar35 + 8) = plVar35[1];
    plVar35 = (long *)*plVar4;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar35 + 2));
  Memory::free_static(plVar35,false);
  uVar38 = *(ulong *)(this + 8);
  *(undefined8 *)(uVar38 + uVar30 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return uVar38;
}



/* FindInFilesDialog::custom_action(String const&) */

void __thiscall FindInFilesDialog::custom_action(FindInFilesDialog *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    iVar5 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xe00),0));
    if (iVar5 <= iVar6) break;
    Node::get_child((int)*(undefined8 *)(this + 0xe00),SUB41(iVar6,0));
    uVar3 = BaseButton::is_pressed();
    Button::get_text();
    puVar8 = (undefined1 *)
             HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
             ::operator[]((HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                           *)(this + 0xe08),(String *)&local_60);
    lVar2 = local_60;
    *puVar8 = uVar3;
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
    iVar6 = iVar6 + 1;
  }
  cVar4 = String::operator==(param_1,"find");
  if (cVar4 == '\0') {
    cVar4 = String::operator==(param_1,"replace");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00104d3c;
    }
    pcVar7 = (char *)&custom_action(String_const&)::{lambda()#2}::operator()()::sname;
    if (custom_action(String_const&)::{lambda()#2}::operator()()::sname == '\0') {
      puVar8 = &custom_action(String_const&)::{lambda()#2}::operator()()::sname;
      pcVar7 = (char *)&custom_action(String_const&)::{lambda()#2}::operator()()::sname;
      iVar6 = __cxa_guard_acquire(&custom_action(String_const&)::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        uVar3 = SUB81(SIGNAL_REPLACE_REQUESTED,0);
        goto LAB_00104d02;
      }
    }
  }
  else {
    pcVar7 = (char *)&custom_action(String_const&)::{lambda()#1}::operator()()::sname;
    if (custom_action(String_const&)::{lambda()#1}::operator()()::sname == '\0') {
      puVar8 = &custom_action(String_const&)::{lambda()#1}::operator()()::sname;
      pcVar7 = (char *)&custom_action(String_const&)::{lambda()#1}::operator()()::sname;
      iVar6 = __cxa_guard_acquire(&custom_action(String_const&)::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        uVar3 = SUB81(SIGNAL_FIND_REQUESTED,0);
LAB_00104d02:
        _scs_create(pcVar7,(bool)uVar3);
        __cxa_atexit(StringName::~StringName,pcVar7,&__dso_handle);
        __cxa_guard_release(puVar8);
      }
    }
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))(this,pcVar7,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Window::hide();
    return;
  }
LAB_00104d3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::_notification(int) [clone .part.0] */

void FindInFilesDialog::_notification(int param_1)

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
  ulong uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  CheckBox *this;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  undefined4 in_register_0000003c;
  long lVar22;
  long lVar23;
  long in_FS_OFFSET;
  Variant local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  lVar22 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (iVar15 = 0; iVar14 = Node::get_child_count(SUB81(*(undefined8 *)(lVar22 + 0xe00),0)),
      iVar15 < iVar14; iVar15 = iVar15 + 1) {
    Node::get_child((int)*(undefined8 *)(lVar22 + 0xe00),SUB41(iVar15,0));
    Node::queue_free();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_60,"editor/script/search_in_file_extensions",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_Array(local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  iVar14 = 0;
  iVar15 = Array::size();
  if (0 < iVar15) {
    do {
      this = (CheckBox *)operator_new(0xc60,"");
      local_60 = 0;
      CheckBox::CheckBox(this,(String *)&local_60);
      postinitialize_handler((Object *)this);
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
      iVar15 = (int)local_68;
      Array::operator[](iVar15);
      Variant::operator_cast_to_String((Variant *)&local_60);
      Button::set_text((String *)this);
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
      Array::operator[](iVar15);
      Variant::operator_cast_to_String((Variant *)&local_60);
      if ((*(long *)(lVar22 + 0xe10) == 0) || (*(int *)(lVar22 + 0xe34) == 0)) {
LAB_00105030:
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
LAB_0010505b:
        Array::operator[](iVar15);
        Variant::operator_cast_to_String((Variant *)&local_60);
        puVar17 = (undefined1 *)
                  HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                  ::operator[]((HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                                *)(lVar22 + 0xe08),(String *)&local_60);
        *puVar17 = 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      else {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar22 + 0xe30) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar22 + 0xe30) * 8);
        uVar16 = String::hash();
        uVar12 = CONCAT44(0,uVar2);
        lVar23 = *(long *)(lVar22 + 0xe18);
        uVar18 = 1;
        if (uVar16 != 0) {
          uVar18 = uVar16;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar18 * lVar3;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar12;
        lVar20 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(lVar23 + lVar20 * 4);
        iVar19 = SUB164(auVar4 * auVar8,8);
        if (uVar16 == 0) goto LAB_00105030;
        uVar21 = 0;
        do {
          if (uVar18 == uVar16) {
            cVar13 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar22 + 0xe10) + lVar20 * 8) + 0x10),
                                        (String *)&local_60);
            if (cVar13 != '\0') goto LAB_0010514f;
            lVar23 = *(long *)(lVar22 + 0xe18);
          }
          uVar21 = uVar21 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(iVar19 + 1) * lVar3;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar12;
          lVar20 = SUB168(auVar5 * auVar9,8);
          uVar16 = *(uint *)(lVar23 + lVar20 * 4);
          iVar19 = SUB164(auVar5 * auVar9,8);
        } while ((uVar16 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar2 + iVar19) - SUB164(auVar6 * auVar10,8)) * lVar3,
                auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, uVar21 <= SUB164(auVar7 * auVar11,8)));
        cVar13 = '\0';
LAB_0010514f:
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
        if (cVar13 == '\0') goto LAB_0010505b;
      }
      Array::operator[](iVar15);
      Variant::operator_cast_to_String((Variant *)&local_60);
      HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
      ::operator[]((HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                    *)(lVar22 + 0xe08),(String *)&local_60);
      BaseButton::set_pressed(SUB81(this,0));
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
      iVar14 = iVar14 + 1;
      Node::add_child(*(undefined8 *)(lVar22 + 0xe00),this,0,0);
      iVar15 = Array::size();
    } while (iVar14 < iVar15);
  }
  Array::~Array((Array *)local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindInFilesDialog::_notification(int) */

void __thiscall FindInFilesDialog::_notification(FindInFilesDialog *this,int param_1)

{
  char cVar1;
  
  if (param_1 != 0x1e) {
    return;
  }
  cVar1 = Window::is_visible();
  if (cVar1 != '\0') {
    _notification((int)this);
    return;
  }
  return;
}



/* FindInFilesDialog::_on_folder_selected(String) */

void __thiscall
FindInFilesDialog::_on_folder_selected(FindInFilesDialog *this,CowData<char32_t> *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = String::find((char *)param_2,0x10c08d);
  if (iVar4 != -1) {
    String::substr((int)&local_28,(int)param_2);
    if (*(long *)param_2 != local_28) {
      CowData<char32_t>::_unref(param_2);
      lVar3 = local_28;
      local_28 = 0;
      *(long *)param_2 = lVar3;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  }
  local_28 = 0;
  uVar2 = *(undefined8 *)(this + 0xdd0);
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)param_2);
  }
  LineEdit::set_text(uVar2);
  lVar3 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::update_matches_text() */

void __thiscall FindInFilesPanel::update_matches_text(FindInFilesPanel *this)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  String local_60 [8];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  iVar2 = *(int *)(this + 0xa64);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (char *)0x0;
  if (iVar2 == 1) {
    if (*(int *)(this + 0xa34) == 1) {
      local_68 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_68);
      local_58 = "%d match in %d file";
      local_70 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      TTR(local_60,(String *)&local_70);
      iVar2 = 1;
      goto LAB_00105464;
    }
  }
  else if (*(int *)(this + 0xa34) == 1) {
    local_68 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "%d matches in %d file";
    local_70 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_70);
    TTR(local_60,(String *)&local_70);
    goto LAB_00105464;
  }
  local_68 = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = "%d matches in %d files";
  local_70 = 0;
  local_50 = 0x16;
  String::parse_latin1((StrRange *)&local_70);
  TTR(local_60,(String *)&local_70);
LAB_00105464:
  vformat<int,int>((String *)&local_58,(int)(CowData<char32_t> *)local_60,iVar2);
  pcVar1 = local_58;
  if (local_78 != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_58 = (char *)0x0;
    local_78 = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Label::set_text(*(String **)(this + 0x9e0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindInFilesPanel::_on_finished() */

void __thiscall FindInFilesPanel::_on_finished(FindInFilesPanel *this)

{
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  update_matches_text(this);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
  local_28 = (undefined4)_LC28;
  uStack_24 = _LC28._4_4_;
  uStack_20 = _UNK_0011c848;
  uStack_1c = _UNK_0011c84c;
  (**(code **)(**(long **)(this + 0xa00) + 0x270))(*(long **)(this + 0xa00),&local_28);
  CanvasItem::show();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFiles::_scan_file(String const&) */

void __thiscall FindInFiles::_scan_file(FindInFiles *this,String *param_1)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  bool bVar10;
  int local_17c;
  int local_130;
  int local_12c;
  Object *local_128;
  long local_120;
  long local_118;
  long local_110;
  Variant *local_108;
  Variant *pVStack_100;
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_e8;
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_128,(int)param_1,(Error *)0x1);
  local_17c = 0;
  if (local_128 == (Object *)0x0) {
    cVar5 = is_print_verbose_enabled();
    if (cVar5 != '\0') {
      local_120 = 0;
      String::parse_latin1((String *)&local_120,"Cannot open file ");
      String::operator+((String *)&local_118,(String *)&local_120);
      Variant::Variant((Variant *)&local_108,(String *)&local_118);
      stringify_variants((Variant *)&local_110);
      __print_line((String *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      if (Variant::needs_deinit[(int)local_108] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    }
  }
  else {
    cVar5 = (**(code **)(*(long *)local_128 + 0x1d8))();
    while (cVar5 == '\0') {
      local_17c = local_17c + 1;
      local_130 = 0;
      local_12c = 0;
      (**(code **)(*(long *)local_128 + 0x228))((String *)&local_120);
      iVar8 = 0;
      while (cVar5 = find_next((String *)&local_120,(String *)(this + 0x408),iVar8,(bool)this[0x441]
                               ,(bool)this[0x440],&local_130,&local_12c), lVar3 = local_120,
            iVar4 = local_12c, iVar8 = local_130, cVar5 != '\0') {
        local_110 = 0;
        plVar1 = (long *)(local_120 + -0x10);
        if (local_120 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001057ce;
            LOCK();
            lVar7 = *plVar1;
            bVar10 = lVar3 == lVar7;
            if (bVar10) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar7 != -1) {
            local_110 = local_120;
          }
        }
LAB_001057ce:
        local_118 = 0;
        plVar1 = (long *)(*(long *)param_1 + -0x10);
        if (*(long *)param_1 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00105812;
            LOCK();
            lVar7 = *plVar1;
            bVar10 = lVar3 == lVar7;
            if (bVar10) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar7 != -1) {
            local_118 = *(long *)param_1;
          }
        }
LAB_00105812:
        if ((_scan_file(String_const&)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&_scan_file(String_const&)::{lambda()#1}::operator()()::
                                         sname), iVar6 != 0)) {
          _scs_create((char *)&_scan_file(String_const&)::{lambda()#1}::operator()()::sname,
                      SUB81(SIGNAL_RESULT_FOUND,0));
          __cxa_atexit(StringName::~StringName,
                       &_scan_file(String_const&)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_scan_file(String_const&)::{lambda()#1}::operator()()::sname);
        }
        Variant::Variant(local_d8,(String *)&local_118);
        Variant::Variant(local_c0,local_17c);
        Variant::Variant(local_a8,iVar8);
        Variant::Variant(local_90,iVar4);
        Variant::Variant(local_78,(String *)&local_110);
        local_58 = (undefined1  [16])0x0;
        pVVar9 = local_48;
        local_60 = 0;
        local_108 = local_d8;
        pVStack_100 = local_c0;
        local_f8 = local_a8;
        pVStack_f0 = local_90;
        local_e8 = local_78;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&_scan_file(String_const&)::{lambda()#1}::operator()()::sname,&local_108,5);
        do {
          pVVar2 = pVVar9 + -0x18;
          pVVar9 = pVVar9 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
          lVar3 = local_118;
        } while (pVVar9 != local_d8);
        if (local_118 != 0) {
          LOCK();
          plVar1 = (long *)(local_118 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_118 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_110;
        iVar8 = local_12c;
        if (local_110 != 0) {
          LOCK();
          plVar1 = (long *)(local_110 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_110 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
            iVar8 = local_12c;
          }
        }
      }
      if (local_120 != 0) {
        LOCK();
        plVar1 = (long *)(local_120 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      cVar5 = (**(code **)(*(long *)local_128 + 0x1d8))();
    }
  }
  if (((local_128 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_128), cVar5 != '\0')) {
    (**(code **)(*(long *)local_128 + 0x140))(local_128);
    Memory::free_static(local_128,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::_on_button_clicked(TreeItem*, int, int, int) */

void FindInFilesPanel::_on_button_clicked(TreeItem *param_1,int param_2,int param_3,int param_4)

{
  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
  *this;
  uint uVar1;
  Object *pOVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  ulong uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  undefined4 in_register_00000034;
  long lVar22;
  uint uVar23;
  long in_FS_OFFSET;
  TreeItem *local_60 [2];
  String local_50 [8];
  TreeItem *local_48;
  long local_40;
  
  local_60[0] = (TreeItem *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TreeItem::get_text((int)local_50);
  HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
  ::erase((HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
           *)(param_1 + 0xa38),local_60);
  this = (HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
          *)(param_1 + 0xa08);
  if ((*(long *)(param_1 + 0xa10) != 0) && (*(int *)(param_1 + 0xa34) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xa30) * 4);
    lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0xa30) * 8);
    uVar16 = String::hash();
    uVar13 = CONCAT44(0,uVar1);
    lVar22 = *(long *)(param_1 + 0xa18);
    uVar18 = 1;
    if (uVar16 != 0) {
      uVar18 = uVar16;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar18 * lVar17;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar13;
    lVar20 = SUB168(auVar4 * auVar8,8);
    uVar16 = *(uint *)(lVar22 + lVar20 * 4);
    uVar19 = SUB164(auVar4 * auVar8,8);
    if (uVar16 != 0) {
      uVar23 = 0;
      do {
        if (uVar18 == uVar16) {
          cVar14 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_1 + 0xa10) + lVar20 * 8) + 0x10),
                                      local_50);
          if (cVar14 != '\0') {
            if (*(long *)(*(long *)(param_1 + 0xa10) + (ulong)uVar19 * 8) != 0) {
              local_48 = (TreeItem *)((ulong)local_48 & 0xffffffff00000000);
              cVar14 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                       ::_lookup_pos(this,local_50,(uint *)&local_48);
              if (cVar14 == '\0') {
                _err_print_error(&_LC10,"./core/templates/hash_map.h",0x140,
                                 "FATAL: Condition \"!exists\" is true.","HashMap key not found.",0,
                                 0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
              uVar3 = *(undefined8 *)
                       (*(long *)(*(long *)(param_1 + 0xa10) + ((ulong)local_48 & 0xffffffff) * 8) +
                       0x18);
              iVar15 = TreeItem::get_child_count();
              if (0 < iVar15) {
                iVar21 = 0;
                do {
                  iVar21 = iVar21 + 1;
                  local_48 = (TreeItem *)TreeItem::get_child((int)uVar3);
                  HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
                  ::erase((HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
                           *)(param_1 + 0xa38),&local_48);
                } while (iVar15 != iVar21);
              }
              TreeItem::clear_children();
              HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
              ::erase(this,local_50);
            }
            break;
          }
          lVar22 = *(long *)(param_1 + 0xa18);
        }
        uVar23 = uVar23 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar19 + 1) * lVar17;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar13;
        lVar20 = SUB168(auVar5 * auVar9,8);
        uVar16 = *(uint *)(lVar22 + lVar20 * 4);
        uVar19 = SUB164(auVar5 * auVar9,8);
        if ((uVar16 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar17, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar13, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar1 + uVar19) - SUB164(auVar6 * auVar10,8)) * lVar17,
           auVar11._8_8_ = 0, auVar11._0_8_ = uVar13, SUB164(auVar7 * auVar11,8) < uVar23)) break;
      } while( true );
    }
  }
  lVar17 = TreeItem::get_parent();
  if ((lVar17 != 0) && (iVar15 = TreeItem::get_child_count(), iVar15 < 2)) {
    TreeItem::get_text((int)(CowData<char32_t> *)&local_48);
    HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
    ::erase(this,(String *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    pOVar2 = *(Object **)(param_1 + 0x240);
    if (pOVar2 == (Object *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    SceneTree::queue_delete(pOVar2);
  }
  pOVar2 = *(Object **)(param_1 + 0x240);
  if (pOVar2 == (Object *)0x0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  SceneTree::queue_delete(pOVar2);
  update_matches_text((FindInFilesPanel *)param_1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindInFilesPanel::_on_result_found(String const&, int, int, int, String) */

void __thiscall
FindInFilesPanel::_on_result_found
          (FindInFilesPanel *this,String *param_1,undefined4 param_2,int param_3,undefined4 param_4,
          CowData<char32_t> *param_6)

{
  FindInFilesPanel FVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  TreeItem *pTVar7;
  CallableCustom *this_00;
  int iVar8;
  uint uVar9;
  int iVar10;
  long in_FS_OFFSET;
  Color *local_f8;
  StrRange *local_d8;
  Object *local_b0;
  TreeItem *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  Color local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_on_result_found(String_const&,int,int,int,String)::{lambda()#1}::operator()()::sname == '\0')
  {
    iVar4 = __cxa_guard_acquire(&_on_result_found(String_const&,int,int,int,String)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_on_result_found(String_const&,int,int,int,String)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_on_result_found(String_const&,int,int,int,String)::{lambda()#1}::operator()()::
                    sname,&__dso_handle);
      __cxa_guard_release(&_on_result_found(String_const&,int,int,int,String)::{lambda()#1}::
                           operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_b0);
  local_88 = (char *)((ulong)local_88._4_4_ << 0x20);
  cVar3 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
          ::_lookup_pos((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                         *)(this + 0xa08),param_1,(uint *)&local_88);
  iVar4 = (int)(StringName *)&local_b0;
  if ((cVar3 == '\0') ||
     (lVar2 = *(long *)(*(long *)(this + 0xa10) + ((ulong)local_88 & 0xffffffff) * 8), lVar2 == 0))
  {
    uVar5 = Tree::create_item(*(TreeItem **)(this + 0x9d8),0);
    local_88 = (char *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_1);
    }
    TreeItem::set_text(uVar5,0,(CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    Variant::Variant((Variant *)&local_58,param_1);
    iVar10 = (int)uVar5;
    TreeItem::set_metadata(iVar10,(Variant *)0x0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    local_90 = 0;
    local_88 = &_LC11;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Remove result");
    TTR((String *)&local_88,(String *)&local_98);
    TreeItem::add_button(iVar10,(Ref *)0x0,iVar4,true,(String *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    TreeItem::set_expand_right(iVar10,false);
    puVar6 = (undefined8 *)
             HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                           *)(this + 0xa08),param_1);
    *puVar6 = uVar5;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
  }
  local_d8 = (StrRange *)&local_98;
  local_f8 = (Color *)&local_58;
  local_88 = (char *)0x0;
  local_58 = __LC138;
  uStack_50 = _UNK_0011c878;
  local_68 = (Color  [16])
             Control::get_theme_color
                       (*(StringName **)(this + 0x9d8),
                        (StringName *)(SceneStringNames::singleton + 0xb0));
  local_78 = Color::operator*(local_68,local_f8);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  iVar10 = (int)uVar5;
  TreeItem::set_custom_color(iVar10,(Color *)0x0);
  TreeItem::set_selectable(iVar10,false);
  uVar9 = (uint)(byte)this[0xa68];
  pTVar7 = (TreeItem *)Tree::create_item(*(TreeItem **)(this + 0x9d8),iVar10);
  local_a8 = pTVar7;
  TreeItem::set_cell_mode(pTVar7,uVar9,4);
  if (*(long *)param_6 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(long *)param_6 + -8);
  }
  String::strip_edges(SUB81((CowData<char32_t> *)&local_88,0),SUB81(param_6,0));
  if ((char *)*(long *)param_6 != local_88) {
    CowData<char32_t>::_unref(param_6);
    lVar2 = (long)local_88;
    local_88 = (char *)0x0;
    *(long *)param_6 = lVar2;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (*(long *)param_6 != 0) {
    iVar10 = iVar10 - *(int *)(*(long *)param_6 + -8);
  }
  local_90 = 0;
  local_88 = "%3s: ";
  local_80 = 5;
  String::parse_latin1((StrRange *)&local_90);
  vformat<int>((String *)&local_a0,(int)(StrRange *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  String::operator+((String *)&local_88,(String *)&local_a0);
  TreeItem::set_text(pTVar7,uVar9,(CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(FindInFilesPanel **)(this_00 + 0x28) = this;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined **)(this_00 + 0x20) = &_LC11;
  *(undefined ***)this_00 = &PTR_hash_0011c2f8;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar5;
  *(code **)(this_00 + 0x38) = draw_result_text;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "FindInFilesPanel::draw_result_text";
  Callable::Callable((Callable *)&local_88,this_00);
  iVar8 = (int)pTVar7;
  TreeItem::set_custom_draw_callback(iVar8,(Callable *)(ulong)uVar9);
  Callable::~Callable((Callable *)&local_88);
  iVar10 = param_3 - iVar10;
  if (local_a0 != 0) {
    iVar10 = iVar10 + *(int *)(local_a0 + -8);
  }
  puVar6 = (undefined8 *)
           HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
           ::operator[]((HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
                         *)(this + 0xa38),&local_a8);
  FVar1 = this[0xa68];
  *puVar6 = CONCAT44(param_3,param_2);
  puVar6[1] = CONCAT44(iVar10 + -1,param_4);
  if (FVar1 == (FindInFilesPanel)0x0) {
    local_90 = 0;
    local_80 = 0;
    local_88 = &_LC11;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_88 = "Remove result";
    local_80 = 0xd;
    String::parse_latin1(local_d8);
    TTR((String *)&local_88,(String *)local_d8);
  }
  else {
    TreeItem::set_cell_mode(pTVar7,0,1);
    TreeItem::set_checked(iVar8,false);
    TreeItem::set_editable(iVar8,false);
    local_90 = 0;
    local_88 = &_LC11;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_88 = "Remove result";
    local_80 = 0xd;
    String::parse_latin1(local_d8);
    TTR((String *)&local_88,(String *)local_d8);
  }
  TreeItem::add_button
            (iVar8,(Ref *)(ulong)(FVar1 != (FindInFilesPanel)0x0),iVar4,true,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (local_b0 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_b0);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
        Memory::free_static(local_b0,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* FindInFilesDialog::_bind_methods() */

void FindInFilesDialog::_bind_methods(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  size_t local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  puVar2 = SIGNAL_FIND_REQUESTED;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  local_d0 = 0;
  if (SIGNAL_FIND_REQUESTED != (undefined *)0x0) {
    local_b0 = strlen(SIGNAL_FIND_REQUESTED);
  }
  local_b8 = puVar2;
  String::parse_latin1((StrRange *)&local_d0);
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0x11;
  local_c8 = "FindInFilesDialog";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  lVar3 = local_50;
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  puVar2 = SIGNAL_REPLACE_REQUESTED;
  sVar4 = 0;
  local_d0 = 0;
  if (SIGNAL_REPLACE_REQUESTED != (undefined *)0x0) {
    sVar4 = strlen(SIGNAL_REPLACE_REQUESTED);
  }
  local_b8 = puVar2;
  local_b0 = sVar4;
  String::parse_latin1((StrRange *)&local_d0);
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_c8 = "FindInFilesDialog";
  local_d8 = 0;
  local_c0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  lVar3 = local_50;
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFiles::_bind_methods() */

void FindInFiles::_bind_methods(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  undefined8 local_408;
  undefined8 local_400;
  long local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  long local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  long local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  long local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  long local_398;
  long local_390;
  PropertyInfo local_388 [48];
  undefined4 local_358 [2];
  long local_350;
  StringName local_348 [8];
  undefined4 local_340;
  long local_338;
  undefined4 local_330;
  undefined4 local_328 [2];
  long local_320;
  StringName local_318 [8];
  undefined4 local_310;
  long local_308;
  undefined4 local_300;
  undefined4 local_2f8 [2];
  long local_2f0;
  StringName local_2e8 [8];
  undefined4 local_2e0;
  long local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8 [2];
  long local_2c0;
  StringName local_2b8 [8];
  undefined4 local_2b0;
  long local_2a8;
  undefined4 local_2a0;
  undefined4 local_298 [2];
  undefined8 local_290;
  StringName local_288 [8];
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_268 [2];
  long local_260;
  StringName local_258 [8];
  undefined4 local_250;
  long local_248;
  undefined4 local_240;
  undefined4 local_238 [2];
  long local_230;
  StringName local_228 [8];
  undefined4 local_220;
  long local_218;
  undefined4 local_210;
  undefined4 local_208 [2];
  long local_200;
  StringName local_1f8 [8];
  undefined4 local_1f0;
  long local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8 [2];
  undefined8 local_1d0;
  StringName local_1c8 [8];
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8 [2];
  long local_1a0;
  StringName local_198 [8];
  undefined4 local_190;
  long local_188;
  undefined4 local_180;
  undefined4 local_178 [2];
  long local_170;
  StringName local_168 [8];
  undefined4 local_160;
  long local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  StringName local_138 [8];
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  long local_110;
  StringName local_108 [8];
  undefined4 local_100;
  long local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  StringName local_d8 [8];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  size_t local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = "";
  local_398 = 0;
  local_3a0 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_3a0);
  local_3a8 = 0;
  local_b8 = "text";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_3a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_2c8,4,(StrRange *)&local_3a8,0,(StrRange *)&local_3a0,6,
             &local_398);
  local_b8 = "";
  local_3b0 = 0;
  local_3b8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_3b8);
  local_3c0 = 0;
  local_b8 = "end";
  local_b0 = 3;
  String::parse_latin1((StrRange *)&local_3c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_2f8,2,(StrRange *)&local_3c0,0,(StrRange *)&local_3b8,6,
             &local_3b0);
  local_b8 = "";
  local_3c8 = 0;
  local_3d0 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_3d0);
  local_b8 = "begin";
  local_3d8 = 0;
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_3d8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_328,2,(StrRange *)&local_3d8,0,(StrRange *)&local_3d0,6,
             &local_3c8);
  local_b8 = "";
  local_3e0 = 0;
  local_3e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_3e8);
  local_b8 = "line_number";
  local_3f0 = 0;
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_3f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_358,2,(StrRange *)&local_3f0,0,(StrRange *)&local_3e8,6,
             &local_3e0);
  local_b8 = "";
  local_3f8 = 0;
  local_400 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_400);
  local_408 = 0;
  local_b8 = "path";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_408);
  PropertyInfo::PropertyInfo
            (local_388,4,(StrRange *)&local_408,0,(StrRange *)&local_400,6,&local_3f8);
  puVar2 = SIGNAL_RESULT_FOUND;
  sVar4 = 0;
  local_390 = 0;
  if (SIGNAL_RESULT_FOUND != (undefined *)0x0) {
    sVar4 = strlen(SIGNAL_RESULT_FOUND);
  }
  local_b8 = puVar2;
  local_b0 = sVar4;
  String::parse_latin1((StrRange *)&local_390);
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_a8 = (undefined1  [16])0x0;
  if (local_390 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_390);
  }
  local_200 = 0;
  local_208[0] = local_2c8[0];
  if (local_2c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_200,(CowData *)&local_2c0);
  }
  StringName::StringName(local_1f8,local_2b8);
  local_1e8 = 0;
  local_1f0 = local_2b0;
  if (local_2a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e8,(CowData *)&local_2a8);
  }
  local_230 = 0;
  local_1e0 = local_2a0;
  local_238[0] = local_2f8[0];
  if (local_2f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_230,(CowData *)&local_2f0);
  }
  StringName::StringName(local_228,local_2e8);
  local_218 = 0;
  local_220 = local_2e0;
  if (local_2d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_218,(CowData *)&local_2d8);
  }
  local_260 = 0;
  local_210 = local_2d0;
  local_268[0] = local_328[0];
  if (local_320 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_260,(CowData *)&local_320);
  }
  StringName::StringName(local_258,local_318);
  local_248 = 0;
  local_250 = local_310;
  if (local_308 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_248,(CowData *)&local_308);
  }
  local_290 = 0;
  local_240 = local_300;
  local_298[0] = local_358[0];
  if (local_350 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_290,(CowData *)&local_350);
  }
  StringName::StringName(local_288,local_348);
  local_278 = 0;
  local_280 = local_340;
  if (local_338 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_278,(CowData *)&local_338);
  }
  local_270 = local_330;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_388);
  local_170 = 0;
  local_178[0] = local_208[0];
  if (local_200 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_200);
  }
  StringName::StringName(local_168,local_1f8);
  local_158 = 0;
  local_160 = local_1f0;
  if (local_1e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1e8);
  }
  local_1a0 = 0;
  local_150 = local_1e0;
  local_1a8[0] = local_238[0];
  if (local_230 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)&local_230);
  }
  StringName::StringName(local_198,local_228);
  local_188 = 0;
  local_190 = local_220;
  if (local_218 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_218);
  }
  local_1d0 = 0;
  local_180 = local_210;
  local_1d8[0] = local_268[0];
  if (local_260 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d0,(CowData *)&local_260);
  }
  StringName::StringName(local_1c8,local_258);
  local_1b8 = 0;
  local_1c0 = local_250;
  if (local_248 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)&local_248);
  }
  local_1b0 = local_240;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_298);
  local_110 = 0;
  local_118 = CONCAT44(local_118._4_4_,local_178[0]);
  if (local_170 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_170);
  }
  StringName::StringName(local_108,local_168);
  local_f8 = 0;
  local_100 = local_160;
  if (local_158 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  }
  local_140 = 0;
  local_f0 = local_150;
  local_148 = CONCAT44(local_148._4_4_,local_1a8[0]);
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)&local_1a0);
  }
  StringName::StringName(local_138,local_198);
  local_128 = 0;
  local_130 = local_190;
  if (local_188 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_188);
  }
  local_120 = local_180;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_1d8);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,(undefined4)local_118);
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_298);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_268);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_208);
  local_118 = 0;
  local_e8 = "FindInFiles";
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  lVar3 = local_50;
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_390);
  PropertyInfo::~PropertyInfo(local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_408);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_400);
  if ((StringName::configured != '\0') && (local_3f8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_358);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3e8);
  if ((StringName::configured != '\0') && (local_3e0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_328);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3d0);
  if ((StringName::configured != '\0') && (local_3c8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
  if ((StringName::configured != '\0') && (local_3b0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_2c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a0);
  if ((StringName::configured != '\0') && (local_398 != 0)) {
    StringName::unref();
  }
  local_118 = 0;
  local_b8 = "finished";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_118);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
  local_148 = 0;
  local_e8 = "FindInFiles";
  local_e0 = 0xb;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_e8,(String *)&local_148,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  lVar3 = local_50;
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::_bind_methods() */

void FindInFilesPanel::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  MethodBind *pMVar5;
  size_t sVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_310;
  undefined8 local_308;
  long local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  long local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  long local_2b8;
  long local_2b0;
  PropertyInfo local_2a8 [48];
  undefined4 local_278 [2];
  long local_270;
  StringName local_268 [8];
  undefined4 local_260;
  long local_258;
  undefined4 local_250;
  undefined4 local_248 [2];
  long local_240;
  StringName local_238 [8];
  undefined4 local_230;
  long local_228;
  undefined4 local_220;
  undefined8 local_218;
  long local_210;
  StringName local_208 [8];
  undefined4 local_200;
  long local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  StringName local_1d8 [8];
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  StringName local_1a8 [8];
  undefined4 local_1a0;
  long local_198;
  undefined4 local_190;
  long local_188;
  long local_180;
  StringName local_178 [8];
  undefined4 local_170;
  long local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  StringName local_148 [8];
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  char *local_128;
  long local_120;
  StringName local_118 [8];
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  char *local_f8;
  undefined8 local_f0;
  StringName local_e8 [8];
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_c8;
  size_t local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar5 = create_method_bind<FindInFilesPanel,String_const&,int,int,int,String>(_on_result_found);
  StringName::StringName((StringName *)&local_c8,"_on_result_found",false);
  local_b8._0_8_ = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  uVar4 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(local_b8._0_8_ + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      local_b8._0_8_ = (long *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar7 = (long *)uVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar5 = create_method_bind<FindInFilesPanel>(_on_finished);
  StringName::StringName((StringName *)&local_c8,"_on_finished",false);
  local_b8._0_8_ = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  uVar4 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(local_b8._0_8_ + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      local_b8._0_8_ = (long *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar7 = (long *)uVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_2b8 = 0;
  local_2c0 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  local_2c8 = 0;
  local_c8 = "end";
  local_c0 = 3;
  String::parse_latin1((StrRange *)&local_2c8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_218,2,(StrRange *)&local_2c8,0,(StrRange *)&local_2c0,6,
             &local_2b8);
  local_2d0 = 0;
  local_2d8 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_2d8);
  local_2e0 = 0;
  local_c8 = "begin";
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_2e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_248,2,(StrRange *)&local_2e0,0,(StrRange *)&local_2d8,6,
             &local_2d0);
  local_2e8 = 0;
  local_2f0 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_2f0);
  local_2f8 = 0;
  local_c8 = "line_number";
  local_c0 = 0xb;
  String::parse_latin1((StrRange *)&local_2f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_278,2,(StrRange *)&local_2f8,0,(StrRange *)&local_2f0,6,
             &local_2e8);
  local_300 = 0;
  local_308 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_308);
  local_310 = 0;
  local_c8 = "path";
  local_c0 = 4;
  String::parse_latin1((StrRange *)&local_310);
  PropertyInfo::PropertyInfo
            (local_2a8,4,(StrRange *)&local_310,0,(StrRange *)&local_308,6,&local_300);
  puVar3 = SIGNAL_RESULT_SELECTED;
  sVar6 = 0;
  local_2b0 = 0;
  if (SIGNAL_RESULT_SELECTED != (undefined *)0x0) {
    sVar6 = strlen(SIGNAL_RESULT_SELECTED);
  }
  local_c8 = puVar3;
  local_c0 = sVar6;
  String::parse_latin1((StrRange *)&local_2b0);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (local_2b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_2b0);
  }
  local_180 = 0;
  local_188 = CONCAT44(local_188._4_4_,(undefined4)local_218);
  if (local_210 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_180,(CowData *)&local_210);
  }
  StringName::StringName(local_178,local_208);
  local_168 = 0;
  local_170 = local_200;
  if (local_1f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)&local_1f8);
  }
  local_1b0 = 0;
  local_160 = local_1f0;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_248[0]);
  if (local_240 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b0,(CowData *)&local_240);
  }
  StringName::StringName(local_1a8,local_238);
  local_198 = 0;
  local_1a0 = local_230;
  if (local_228 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_228);
  }
  local_1e0 = 0;
  local_190 = local_220;
  local_1e8 = CONCAT44(local_1e8._4_4_,local_278[0]);
  if (local_270 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e0,(CowData *)&local_270);
  }
  StringName::StringName(local_1d8,local_268);
  local_1c8 = 0;
  local_1d0 = local_260;
  if (local_258 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_258);
  }
  local_1c0 = local_250;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,local_2a8);
  local_120 = 0;
  local_128 = (char *)CONCAT44(local_128._4_4_,(undefined4)local_188);
  if (local_180 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_180);
  }
  StringName::StringName(local_118,local_178);
  local_108 = 0;
  local_110 = local_170;
  if (local_168 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_168);
  }
  local_150 = 0;
  local_100 = local_160;
  local_158 = CONCAT44(local_158._4_4_,(undefined4)local_1b8);
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)&local_1b0);
  }
  StringName::StringName(local_148,local_1a8);
  local_138 = 0;
  local_140 = local_1a0;
  if (local_198 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_198);
  }
  local_130 = local_190;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_1e8);
  local_f0 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,local_128._0_4_);
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_120);
  }
  StringName::StringName(local_e8,local_118);
  local_d8 = 0;
  local_e0 = local_110;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  local_d0 = local_100;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_f8 = "FindInFilesPanel";
  local_128 = (char *)0x0;
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_f8,(String *)&local_128,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b0);
  PropertyInfo::~PropertyInfo(local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_300 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_278);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f0);
  if ((StringName::configured != '\0') && (local_2e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d8);
  if ((StringName::configured != '\0') && (local_2d0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2c0);
  if ((StringName::configured != '\0') && (local_2b8 != 0)) {
    StringName::unref();
  }
  local_c8 = "";
  local_188 = 0;
  local_1b8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_1b8);
  local_1e8 = 0;
  local_c8 = "paths";
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_1e8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(PropertyInfo *)&local_1e8,0,(PropertyInfo *)&local_1b8,6,
             (PropertyInfo *)&local_188);
  puVar3 = SIGNAL_FILES_MODIFIED;
  local_158 = 0;
  sVar6 = 0;
  if (SIGNAL_FILES_MODIFIED != (undefined *)0x0) {
    sVar6 = strlen(SIGNAL_FILES_MODIFIED);
  }
  local_c8 = puVar3;
  local_c0 = sVar6;
  String::parse_latin1((StrRange *)&local_158);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  local_128 = "FindInFilesPanel";
  local_218 = 0;
  local_120 = 0x10;
  String::parse_latin1((StrRange *)&local_218);
  StringName::StringName((StringName *)&local_128,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_188 != 0)) {
    StringName::unref();
  }
  puVar3 = SIGNAL_CLOSE_BUTTON_CLICKED;
  sVar6 = 0;
  local_128 = (char *)0x0;
  if (SIGNAL_CLOSE_BUTTON_CLICKED != (undefined *)0x0) {
    sVar6 = strlen(SIGNAL_CLOSE_BUTTON_CLICKED);
  }
  local_c8 = puVar3;
  local_c0 = sVar6;
  String::parse_latin1((StrRange *)&local_128);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_128);
  local_f8 = "FindInFilesPanel";
  local_158 = 0;
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_f8,(String *)&local_158,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* FindInFiles::_scan_dir(String const&, Vector<String>&, Vector<String>&) */

void __thiscall
FindInFiles::_scan_dir(FindInFiles *this,String *param_1,Vector *param_2,Vector *param_3)

{
  uint uVar1;
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
  ulong uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  long in_FS_OFFSET;
  Object *local_80;
  long local_78;
  String local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::open((String *)&local_80,param_1);
  if (local_80 == (Object *)0x0) {
    cVar13 = is_print_verbose_enabled();
    if (cVar13 != '\0') {
      operator+((char *)local_68,(String *)"Cannot open directory! ");
      Variant::Variant((Variant *)local_58,(String *)local_68);
      stringify_variants((Variant *)&local_60);
      __print_line((String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref(local_68);
    }
  }
  else {
    iVar20 = 100000;
    (**(code **)(*(long *)local_80 + 0x160))();
    do {
      (**(code **)(*(long *)local_80 + 0x168))((String *)&local_78);
      if ((local_78 == 0) || (*(uint *)(local_78 + -8) < 2)) {
LAB_00108fe0:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        break;
      }
      cVar13 = String::operator==((String *)&local_78,".gdignore");
      if (cVar13 != '\0') {
        CowData<String>::resize<false>((CowData<String> *)(param_2 + 8),0);
        CowData<String>::resize<false>((CowData<String> *)(param_3 + 8),0);
        goto LAB_00108fe0;
      }
      ProjectSettings::get_singleton();
      ProjectSettings::get_project_data_dir_name();
      cVar13 = String::begins_with((char *)&local_78);
      if (((cVar13 == '\0') &&
          (cVar13 = String::operator==((String *)&local_78,local_70), cVar13 == '\0')) &&
         (cVar13 = (**(code **)(*(long *)local_80 + 0x178))(), cVar13 == '\0')) {
        cVar13 = (**(code **)(*(long *)local_80 + 0x170))();
        if (cVar13 == '\0') {
          String::get_extension();
          if ((*(long *)(this + 0x410) != 0) && (*(int *)(this + 0x434) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x430) * 4);
            lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x430) * 8);
            uVar14 = String::hash();
            uVar12 = CONCAT44(0,uVar1);
            lVar19 = *(long *)(this + 0x428);
            uVar16 = 1;
            if (uVar14 != 0) {
              uVar16 = (ulong)uVar14;
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar16 * lVar3;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar12;
            lVar17 = SUB168(auVar4 * auVar8,8);
            uVar14 = *(uint *)(lVar19 + lVar17 * 4);
            uVar18 = (ulong)uVar14;
            if (uVar14 != 0) {
              uVar14 = 0;
              iVar15 = SUB164(auVar4 * auVar8,8);
              do {
                if ((int)uVar16 == (int)uVar18) {
                  cVar13 = String::operator==((String *)
                                              (*(long *)(this + 0x410) +
                                              (ulong)*(uint *)(*(long *)(this + 0x418) + lVar17 * 4)
                                              * 8),(String *)local_68);
                  if (cVar13 != '\0') {
                    String::path_join((String *)&local_60);
                    Vector<String>::push_back((Vector<String> *)param_3);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                    break;
                  }
                  lVar19 = *(long *)(this + 0x428);
                }
                uVar14 = uVar14 + 1;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)(iVar15 + 1) * lVar3;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar12;
                lVar17 = SUB168(auVar5 * auVar9,8);
                uVar2 = *(uint *)(lVar19 + lVar17 * 4);
                uVar18 = (ulong)uVar2;
                iVar15 = SUB164(auVar5 * auVar9,8);
                if ((uVar2 == 0) ||
                   (auVar6._8_8_ = 0, auVar6._0_8_ = uVar18 * lVar3, auVar10._8_8_ = 0,
                   auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
                   auVar7._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar6 * auVar10,8)) * lVar3,
                   auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, SUB164(auVar7 * auVar11,8) < uVar14))
                break;
              } while( true );
            }
          }
          CowData<char32_t>::_unref(local_68);
        }
        else {
          local_60 = 0;
          if (local_78 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_78);
          }
          Vector<String>::push_back((Vector<String> *)param_2);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  if (((local_80 != (Object *)0x0) && (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
     (cVar13 = predelete_handler(local_80), cVar13 != '\0')) {
    (**(code **)(*(long *)local_80 + 0x140))(local_80);
    Memory::free_static(local_80,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindInFilesPanel::apply_replaces_in_file(String const&, Vector<FindInFilesPanel::Result> const&,
   String const&) */

void __thiscall
FindInFilesPanel::apply_replaces_in_file
          (FindInFilesPanel *this,String *param_1,Vector *param_2,String *param_3)

{
  long *plVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  Object *pOVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  Variant *pVVar18;
  int iVar19;
  long in_FS_OFFSET;
  long local_1a0;
  CowData<Variant> *local_188;
  int local_134;
  Object *local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  String local_f8 [8];
  Object *local_f0;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  Variant *local_d0;
  int local_c8 [8];
  int local_a8 [6];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_130,(int)param_1,(Error *)0x1);
  pOVar7 = local_130;
  if (local_130 == (Object *)0x0) {
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8,"\'.");
    operator+((char *)&local_f0,(String *)"Cannot open file from path \'");
    String::operator+((String *)&local_d8,(String *)&local_f0);
    _err_print_error("apply_replaces_in_file","editor/find_in_files.cpp",0x3c8,
                     "Condition \"f.is_null()\" is true.",(String *)&local_d8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  else {
    local_128 = 0;
    local_e0 = 0;
    cVar10 = RefCounted::reference();
    if (cVar10 == '\0') {
LAB_0010c308:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    cVar10 = (**(code **)(*(long *)pOVar7 + 0x1e0))(pOVar7);
    while (cVar11 = (**(code **)(*(long *)pOVar7 + 0x1d8))(pOVar7), cVar11 == '\0') {
      if (cVar10 == '\n') {
        Vector<char>::push_back((Vector<char> *)&local_e8,'\n');
        break;
      }
      if (cVar10 == '\0') break;
      if (cVar10 != '\r') {
        Vector<char>::push_back((Vector<char> *)&local_e8,cVar10);
      }
      cVar10 = (**(code **)(*(long *)pOVar7 + 0x1e0))(pOVar7);
    }
    Vector<char>::push_back((Vector<char> *)&local_e8,'\0');
    String::utf8((char *)&local_120,(int)local_e0);
    cVar10 = RefCounted::unreference();
    if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar7), cVar10 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    iVar13 = 1;
    local_118 = 0;
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)&local_118,(CowData *)(*(long *)(this + 0x9c8) + 0x408));
    local_1a0 = 0;
    lVar14 = *(long *)(param_2 + 8);
    if (lVar14 != 0) {
      iVar19 = 0;
      do {
        if (*(long *)(lVar14 + -8) <= local_1a0) break;
        iVar12 = *(int *)(lVar14 + local_1a0 * 0x10);
        if (iVar13 < iVar12) {
          do {
            while( true ) {
              iVar19 = iVar13;
              String::operator+=((String *)&local_128,(String *)&local_120);
              local_f0 = (Object *)0x0;
              if (local_130 != (Object *)0x0) {
                local_f0 = local_130;
                cVar10 = RefCounted::reference();
                if (cVar10 == '\0') {
                  local_f0 = (Object *)0x0;
                }
              }
              ConservativeGetLine::get_line
                        (&local_d8,(Vector<char> *)&local_e8,(CowData<char32_t> *)&local_f0);
              pcVar9 = local_d8;
              pcVar8 = local_120;
              if (local_120 == local_d8) {
                if (local_120 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_120 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_d8 = (char *)0x0;
                    Memory::free_static(pcVar9 + -0x10,false);
                  }
                }
              }
              else {
                if (local_120 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_120 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_120 = (char *)0x0;
                    Memory::free_static(pcVar8 + -0x10,false);
                  }
                }
                local_120 = local_d8;
              }
              pOVar7 = local_f0;
              if (((local_f0 != (Object *)0x0) &&
                  (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
                 (cVar10 = predelete_handler(pOVar7), cVar10 != '\0')) break;
              iVar13 = iVar19 + 1;
              if (iVar12 == iVar19 + 1) goto LAB_00109598;
            }
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
            iVar13 = iVar19 + 1;
          } while (iVar12 != iVar19 + 1);
LAB_00109598:
          iVar13 = iVar19 + 1;
          iVar19 = 0;
          lVar14 = *(long *)(param_2 + 8);
        }
        if (lVar14 == 0) {
          lVar16 = 0;
LAB_00109bae:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,local_1a0,lVar16,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar16 = *(long *)(lVar14 + -8);
        if (lVar16 <= local_1a0) goto LAB_00109bae;
        lVar14 = lVar14 + local_1a0 * 0x10;
        iVar4 = *(int *)(lVar14 + 4);
        iVar5 = *(int *)(lVar14 + 8);
        iVar3 = iVar4 + iVar19;
        cVar10 = find_next((String *)&local_120,(String *)&local_118,iVar3,
                           *(bool *)(*(long *)(this + 0x9c8) + 0x441),
                           *(bool *)(*(long *)(this + 0x9c8) + 0x440),&local_134,&local_134);
        if (cVar10 == '\0') {
          cVar10 = is_print_verbose_enabled();
          if (cVar10 != '\0') {
            local_110 = 0;
            local_d8 = 
            "Occurrence no longer matches, replace will be ignored in {0}: line {1}, col {2}";
            local_d0 = (Variant *)0x4f;
            String::parse_latin1((StrRange *)&local_110);
            local_100 = 0;
            local_d8 = "{_}";
            local_d0 = (Variant *)0x3;
            String::parse_latin1((StrRange *)&local_100);
            local_108 = 0;
            if (*(long *)param_1 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)param_1);
            }
            local_d0 = (Variant *)0x0;
            Variant::Variant((Variant *)local_a8,(String *)&local_108);
            Variant::Variant(local_90,iVar12);
            Variant::Variant(local_78,iVar3);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            if (local_d0 == (Variant *)0x0) {
              CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_d0);
LAB_00109ec2:
              puVar17 = (undefined8 *)Memory::alloc_static(0x90,false);
              if (puVar17 == (undefined8 *)0x0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                local_d0 = (Variant *)(puVar17 + 2);
                *puVar17 = 1;
                puVar17[1] = 0;
                lVar14 = 1;
                *(undefined4 *)(puVar17 + 2) = 0;
                *(undefined1 (*) [16])(puVar17 + 3) = (undefined1  [16])0x0;
LAB_001099cd:
                lVar16 = lVar14 * 0x18;
                do {
                  lVar14 = lVar14 + 1;
                  pVVar18 = local_d0 + lVar16;
                  lVar16 = lVar16 + 0x18;
                  *(undefined4 *)pVVar18 = 0;
                  *(undefined1 (*) [16])(pVVar18 + 8) = (undefined1  [16])0x0;
                } while (lVar14 != 3);
LAB_001099ff:
                if (local_d0 == (Variant *)0x0) {
                  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
LAB_00109a10:
                *(undefined8 *)(local_d0 + -8) = 3;
              }
            }
            else {
              lVar14 = *(long *)(local_d0 + -8);
              if (lVar14 != 3) {
                CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_d0);
                if (lVar14 * 0x18 == 0) {
                  lVar16 = 0;
                  if (lVar14 < 3) {
LAB_00109e72:
                    if (lVar14 == 0) goto LAB_00109ec2;
                    iVar12 = CowData<Variant>::_realloc((CowData<Variant> *)&local_d0,0x80);
                    if (iVar12 == 0) goto LAB_00109996;
                    goto LAB_00109a18;
                  }
                }
                else {
                  uVar15 = lVar14 * 0x18 - 1;
                  uVar15 = uVar15 | uVar15 >> 1;
                  uVar15 = uVar15 | uVar15 >> 2;
                  uVar15 = uVar15 | uVar15 >> 4;
                  uVar15 = uVar15 | uVar15 >> 8;
                  uVar15 = uVar15 | uVar15 >> 0x10;
                  lVar16 = (uVar15 | uVar15 >> 0x20) + 1;
                  if (lVar14 < 3) {
                    if (lVar16 != 0x80) goto LAB_00109e72;
LAB_00109996:
                    if (local_d0 == (Variant *)0x0) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)invalidInstructionException();
                      (*pcVar6)();
                    }
                    lVar16 = *(long *)(local_d0 + -8);
                    if (lVar16 < 3) {
                      lVar14 = lVar16 + 1;
                      *(undefined4 *)(local_d0 + lVar16 * 0x18) = 0;
                      *(undefined1 (*) [16])(local_d0 + lVar16 * 0x18 + 8) = (undefined1  [16])0x0;
                      if (lVar16 != 2) goto LAB_001099cd;
                      goto LAB_001099ff;
                    }
                    goto LAB_00109a10;
                  }
                }
                uVar15 = 3;
                while (local_d0 != (Variant *)0x0) {
                  while( true ) {
                    if (*(ulong *)(local_d0 + -8) <= uVar15) {
                      if (lVar16 == 0x80) goto LAB_00109a10;
                      iVar12 = CowData<Variant>::_realloc((CowData<Variant> *)&local_d0,0x80);
                      if (iVar12 != 0) goto LAB_00109a18;
                      goto LAB_001099ff;
                    }
                    if (Variant::needs_deinit[*(int *)(local_d0 + uVar15 * 0x18)] != '\0') break;
                    uVar15 = uVar15 + 1;
                  }
                  uVar15 = uVar15 + 1;
                  Variant::_clear_internal();
                }
                goto LAB_0010c308;
              }
            }
LAB_00109a18:
            local_188 = (CowData<Variant> *)&local_d0;
            CowData<Variant>::_copy_on_write(local_188);
            pVVar18 = local_d0;
            Variant::operator=(local_d0,(Variant *)local_a8);
            Variant::operator=(pVVar18 + 0x18,local_90);
            Variant::operator=(pVVar18 + 0x30,local_78);
            pVVar18 = local_48;
            do {
              pVVar2 = pVVar18 + -0x18;
              pVVar18 = pVVar18 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar18 != (Variant *)local_a8);
            Variant::Variant((Variant *)local_c8,(Vector *)&local_d8);
            String::format((Variant *)local_f8,(String *)&local_110);
            Variant::Variant(pVVar18,local_f8);
            stringify_variants((Variant *)&local_f0);
            __print_line((String *)&local_f0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            if (Variant::needs_deinit[local_a8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
            if (Variant::needs_deinit[local_c8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<Variant>::_unref(local_188);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
          }
        }
        else {
          String::substr((int)(CowData<char32_t> *)&local_f0,(int)(String *)&local_120);
          String::left((int)(String *)&local_100);
          String::operator+(local_f8,(String *)&local_100);
          String::operator+((String *)&local_d8,local_f8);
          if (local_120 != local_d8) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
            local_120 = local_d8;
            local_d8 = (char *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          if (*(long *)param_3 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = (int)*(undefined8 *)(*(long *)param_3 + -8);
            iVar12 = iVar12 + -1 + (uint)(iVar12 == 0);
          }
          iVar19 = iVar19 + (iVar12 - (iVar5 - iVar4));
        }
        local_1a0 = local_1a0 + 1;
        lVar14 = *(long *)(param_2 + 8);
      } while (lVar14 != 0);
    }
    String::operator+=((String *)&local_128,(String *)&local_120);
    while (cVar10 = (**(code **)(*(long *)local_130 + 0x1d8))(), pOVar7 = local_130, cVar10 == '\0')
    {
      if (local_130 == (Object *)0x0) {
LAB_00109792:
        local_f0 = (Object *)0x0;
        ConservativeGetLine::get_line
                  ((CowData<char32_t> *)&local_d8,(Vector<char> *)&local_e8,&local_f0);
        String::operator+=((String *)&local_128,(String *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      else {
        local_f0 = local_130;
        cVar10 = RefCounted::reference();
        if (cVar10 == '\0') goto LAB_00109792;
        ConservativeGetLine::get_line
                  ((CowData<char32_t> *)&local_d8,(Vector<char> *)&local_e8,&local_f0);
        String::operator+=((String *)&local_128,(String *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        cVar10 = RefCounted::unreference();
        if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar7), cVar10 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    iVar13 = (**(code **)(*(long *)local_130 + 0x2e8))(local_130,param_1,2);
    lVar14 = local_e0;
    if (iVar13 == 0) {
      (**(code **)(*(long *)local_130 + 0x2a8))();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      if (lVar14 != 0) {
        LOCK();
        plVar1 = (long *)(lVar14 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_e0 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    }
    else {
      local_f0 = (Object *)0x0;
      String::parse_latin1((String *)&local_f0,"\'.");
      operator+((char *)local_f8,(String *)"Cannot create file in path \'");
      String::operator+((String *)&local_d8,local_f8);
      _err_print_error("apply_replaces_in_file","editor/find_in_files.cpp",0x3f6,
                       "Condition \"err != OK\" is true.",(String *)&local_d8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      if (lVar14 != 0) {
        LOCK();
        plVar1 = (long *)(lVar14 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_e0 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    }
  }
  if (((local_130 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
     (cVar10 = predelete_handler(local_130), cVar10 != '\0')) {
    (**(code **)(*(long *)local_130 + 0x140))(local_130);
    Memory::free_static(local_130,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<String>>::_copy_on_write(CowData<Vector<String>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<String> *this_00;
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
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<String> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<String>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* Vector<Vector<String> >::push_back(Vector<String>) [clone .isra.0] */

void __thiscall Vector<Vector<String>>::push_back(Vector<Vector<String>> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector<String>>::resize<false>((CowData<Vector<String>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<String>::_ref((CowData<String> *)(lVar3 + 8),(CowData *)(param_2 + 8));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* FindInFiles::_iterate() */

void __thiscall FindInFiles::_iterate(FindInFiles *this)

{
  CowData *pCVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_90;
  Vector local_88 [8];
  long local_80;
  Vector local_78 [8];
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x458) == 0) ||
     (lVar10 = *(long *)(*(long *)(this + 0x458) + -8), lVar10 == 0)) {
    lVar10 = *(long *)(this + 0x468);
    if ((lVar10 == 0) || (lVar7 = *(long *)(lVar10 + -8), lVar7 == 0)) {
      cVar5 = is_print_verbose_enabled();
      if (cVar5 != '\0') {
        Variant::Variant((Variant *)local_58,"Search complete");
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      Node::set_process(SUB81(this,0));
      local_68 = &_LC11;
      local_60 = 0;
      String::parse_latin1((StrRange *)(this + 0x448));
      lVar10 = SceneStringNames::singleton;
      this[0x442] = (FindInFiles)0x0;
      local_50 = (undefined1  [16])0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      (**(code **)(*(long *)this + 0xd0))(this,lVar10 + 0xf8,0,0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      lVar9 = lVar7 + -1;
      if (lVar9 < 0) goto LAB_0010a718;
      pCVar1 = (CowData *)(lVar10 + lVar9 * 8);
      local_68 = (undefined *)0x0;
      if (*(long *)pCVar1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar1);
        if (*(long *)(this + 0x468) == 0) {
          lVar9 = -1;
        }
        else {
          lVar9 = *(long *)(*(long *)(this + 0x468) + -8) + -1;
        }
      }
      CowData<String>::resize<false>((CowData<String> *)(this + 0x468),lVar9);
      _scan_file(this,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
  }
  else {
    lVar7 = lVar10 + -1;
    if (lVar7 < 0) {
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar10,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)(this + 0x458));
    lVar10 = *(long *)(this + 0x458);
    lVar8 = lVar7 * 0x10 + lVar10;
    lVar2 = *(long *)(lVar8 + 8);
    if ((lVar2 == 0) || (lVar7 = *(long *)(lVar2 + -8), lVar7 == 0)) {
      if (lVar10 == 0) {
        lVar10 = -1;
      }
      else {
        lVar10 = *(long *)(lVar10 + -8) + -1;
      }
      CowData<Vector<String>>::resize<false>((CowData<Vector<String>> *)(this + 0x458),lVar10);
      String::get_base_dir();
      if (*(undefined **)(this + 0x448) != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x448));
        puVar4 = local_68;
        local_68 = (undefined *)0x0;
        *(undefined **)(this + 0x448) = puVar4;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((*(long *)(this + 0x458) == 0) || (*(long *)(*(long *)(this + 0x458) + -8) == 0)) {
        if (*(long *)(this + 0x468) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(this + 0x468) + -8);
        }
        *(undefined4 *)(this + 0x470) = uVar6;
      }
    }
    else {
      lVar9 = lVar7 + -1;
      if (lVar9 < 0) {
LAB_0010a718:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pCVar1 = (CowData *)(lVar2 + lVar9 * 8);
      local_90 = 0;
      if (*(long *)pCVar1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,pCVar1);
        if (*(long *)(lVar8 + 8) == 0) {
          lVar9 = -1;
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar8 + 8) + -8) + -1;
        }
      }
      CowData<String>::resize<false>((CowData<String> *)(lVar8 + 8),lVar9);
      String::path_join((String *)&local_68);
      if (*(undefined **)(this + 0x448) != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x448));
        puVar4 = local_68;
        local_68 = (undefined *)0x0;
        *(undefined **)(this + 0x448) = puVar4;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_80 = 0;
      local_70 = 0;
      operator+((char *)&local_68,(String *)"res://");
      _scan_dir(this,(String *)&local_68,local_88,local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_60 = 0;
      if (local_80 != 0) {
        CowData<String>::_ref((CowData<String> *)&local_60,(CowData *)&local_80);
      }
      Vector<Vector<String>>::push_back
                ((Vector<Vector<String>> *)(this + 0x450),(String *)&local_68);
      CowData<String>::_unref((CowData<String> *)&local_60);
      local_60 = 0;
      if (local_70 != 0) {
        CowData<String>::_ref((CowData<String> *)&local_60,(CowData *)&local_70);
      }
      Vector<String>::append_array((Vector<String> *)(this + 0x460),(String *)&local_68);
      CowData<String>::_unref((CowData<String> *)&local_60);
      CowData<String>::_unref((CowData<String> *)&local_70);
      CowData<String>::_unref((CowData<String> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFiles::_process() */

void __thiscall FindInFiles::_process(FindInFiles *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  OS::get_singleton();
  lVar2 = OS::get_ticks_msec();
  do {
    cVar1 = Node::is_processing();
    if (cVar1 == '\0') {
      return;
    }
    _iterate(this);
    lVar3 = OS::get_ticks_msec();
  } while ((ulong)(lVar3 - lVar2) < 9);
  return;
}



/* FindInFiles::_notification(int) */

void __thiscall FindInFiles::_notification(FindInFiles *this,int param_1)

{
  if (param_1 != 0x11) {
    return;
  }
  _process(this);
  return;
}



/* FindInFiles::start() */

void __thiscall FindInFiles::start(FindInFiles *this)

{
  char cVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  Vector<String> aVStack_68 [8];
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x408) == 0) || (*(uint *)(*(long *)(this + 0x408) + -8) < 2)) {
    cVar1 = is_print_verbose_enabled();
    pcVar2 = "Nothing to search, pattern is empty";
    if (cVar1 != '\0') {
LAB_0010a900:
      Variant::Variant((Variant *)local_48,pcVar2);
      stringify_variants((Variant *)&local_58);
      __print_line((String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  else {
    if (*(int *)(this + 0x434) != 0) {
      local_50 = 0;
      local_58 = &_LC11;
      String::parse_latin1((StrRange *)(this + 0x448));
      local_60 = 0;
      local_58 = (undefined *)0x0;
      if (*(long *)(this + 0x438) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(this + 0x438));
      }
      Vector<String>::push_back(aVStack_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<Vector<String>>::resize<false>((CowData<Vector<String>> *)(this + 0x458),0);
      local_50 = 0;
      if (local_60 != 0) {
        CowData<String>::_ref((CowData<String> *)&local_50,(CowData *)&local_60);
      }
      Vector<Vector<String>>::push_back
                ((Vector<Vector<String>> *)(this + 0x450),(CowData<char32_t> *)&local_58);
      CowData<String>::_unref((CowData<String> *)&local_50);
      this[0x442] = (FindInFiles)0x1;
      *(undefined4 *)(this + 0x470) = 0;
      Node::set_process(SUB81(this,0));
      CowData<String>::_unref((CowData<String> *)&local_60);
      goto LAB_0010a8a7;
    }
    cVar1 = is_print_verbose_enabled();
    if (cVar1 != '\0') {
      pcVar2 = "Nothing to search, filter matches no files";
      goto LAB_0010a900;
    }
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_40 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0xf8,0,0);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010a8a7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::start_search() */

void __thiscall FindInFilesPanel::start_search(FindInFilesPanel *this)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  clear(this);
  local_58 = "";
  pSVar1 = *(String **)(this + 0x9e0);
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Searching...";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (char *)0x0;
  pSVar1 = *(String **)(this + 0x9d0);
  if (*(long *)(*(long *)(this + 0x9c8) + 0x408) != 0) {
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)&local_58,(CowData *)(*(long *)(this + 0x9c8) + 0x408));
  }
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::set_process(SUB81(this,0));
  local_48 = (undefined4)_LC28;
  uStack_44 = (undefined4)_LC28;
  uStack_40 = (undefined4)_LC28;
  uStack_3c = (undefined4)_LC28;
  (**(code **)(**(long **)(this + 0xa00) + 0x270))(*(long **)(this + 0xa00),&local_48);
  FindInFiles::start(*(FindInFiles **)(this + 0x9c8));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
  CanvasItem::hide();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::show();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::_notification(int) [clone .part.0] */

void FindInFilesPanel::_notification(int param_1)

{
  StringName *pSVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined4 in_register_0000003c;
  StringName *this;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  this = (StringName *)CONCAT44(in_register_0000003c,param_1);
  pSVar1 = *(StringName **)(this + 0x9d0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_48,this);
  Control::add_theme_font_override(pSVar1,(Ref *)(SceneStringNames::singleton + 0xa0));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pSVar1 = *(StringName **)(this + 0x9d0);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_theme_font_size
            (this,(StringName *)&_notification(int)::{lambda()#2}::operator()()::sname);
  Control::add_theme_font_size_override(pSVar1,(int)SceneStringNames::singleton + 0xa8);
  pSVar1 = *(StringName **)(this + 0x9d8);
  if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_48,this);
  Control::add_theme_font_override(pSVar1,(Ref *)(SceneStringNames::singleton + 0xa0));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  pSVar1 = *(StringName **)(this + 0x9d8);
  if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_theme_font_size
            (this,(StringName *)&_notification(int)::{lambda()#4}::operator()()::sname);
  Control::add_theme_font_size_override(pSVar1,(int)SceneStringNames::singleton + 0xa8);
  local_48 = (Object *)0x0;
  if (*(long *)(*(long *)(this + 0x9c8) + 0x408) == 0) {
LAB_0010adf8:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)&local_48,(CowData *)(*(long *)(this + 0x9c8) + 0x408));
    if ((local_48 == (Object *)0x0) ||
       (iVar4 = (int)*(undefined8 *)((long)local_48 + -8), iVar4 == 0)) goto LAB_0010adf8;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (iVar4 != 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        start_search((FindInFilesPanel *)this);
        return;
      }
      goto LAB_0010aff0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010aff0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::_notification(int) */

void __thiscall FindInFilesPanel::_notification(FindInFilesPanel *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  if (param_1 == 0x11) {
    dVar4 = 0.0;
    iVar1 = *(int *)(*(long *)(this + 0x9c8) + 0x470);
    if (iVar1 != 0) {
      lVar2 = *(long *)(*(long *)(this + 0x9c8) + 0x468);
      lVar3 = (long)iVar1;
      if (lVar2 != 0) {
        lVar3 = lVar3 - *(long *)(lVar2 + -8);
      }
      dVar4 = (double)((float)lVar3 / (float)iVar1);
    }
    Range::set_as_ratio(dVar4);
    return;
  }
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* FindInFilesPanel::_on_refresh_button_clicked() */

void __thiscall FindInFilesPanel::_on_refresh_button_clicked(FindInFilesPanel *this)

{
  start_search(this);
  return;
}



/* FindInFilesPanel::_on_replace_all_clicked() */

void __thiscall FindInFilesPanel::_on_replace_all_clicked(FindInFilesPanel *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long in_FS_OFFSET;
  CowData<char32_t> local_c0 [8];
  long local_b8;
  undefined8 local_b0;
  Vector<String> local_a8 [8];
  long local_a0;
  Vector local_98 [8];
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  plVar26 = *(long **)(this + 0xa20);
  local_a0 = 0;
  if (plVar26 == (long *)0x0) {
    CanvasItem::hide();
    local_90 = 0;
  }
  else {
    do {
      TreeItem::get_metadata((int)(Variant *)local_78);
      Variant::operator_cast_to_String((Variant *)&local_b8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_90 = 0;
      lVar20 = 0;
      lVar16 = TreeItem::get_first_child();
      if (lVar16 != 0) {
        do {
          cVar14 = TreeItem::is_checked((int)lVar16);
          if (cVar14 == '\0') goto LAB_0010b2fe;
          lVar25 = *(long *)(this + 0xa40);
          if ((lVar25 == 0) || (*(int *)(this + 0xa64) == 0)) {
LAB_0010b440:
            _err_print_error("_on_replace_all_clicked","editor/find_in_files.cpp",0x376,
                             "Condition \"!F\" is true.",0,0);
            if (lVar20 != 0) {
              LOCK();
              plVar26 = (long *)(lVar20 + -0x10);
              *plVar26 = *plVar26 + -1;
              UNLOCK();
              if (*plVar26 == 0) {
                Memory::free_static((void *)(local_90 + -0x10),false);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<String>::_unref((CowData<String> *)&local_a0);
            CowData<char32_t>::_unref(local_c0);
            goto LAB_0010b49c;
          }
          uVar22 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa60) * 4)
                           );
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa60) * 8);
          uVar17 = lVar16 * 0x3ffff - 1;
          uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
          uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
          uVar17 = uVar17 >> 0x16 ^ uVar17;
          uVar24 = uVar17 & 0xffffffff;
          if ((int)uVar17 == 0) {
            uVar24 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar24 * lVar3;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar22;
          lVar19 = SUB168(auVar4 * auVar8,8);
          uVar21 = *(uint *)(*(long *)(this + 0xa48) + lVar19 * 4);
          uVar18 = SUB164(auVar4 * auVar8,8);
          if (uVar21 == 0) goto LAB_0010b440;
          uVar23 = 0;
          while ((uVar21 != (uint)uVar24 ||
                 (lVar16 != *(long *)(*(long *)(lVar25 + lVar19 * 8) + 0x10)))) {
            uVar23 = uVar23 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(uVar18 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar22;
            lVar19 = SUB168(auVar5 * auVar9,8);
            uVar21 = *(uint *)(*(long *)(this + 0xa48) + lVar19 * 4);
            uVar18 = SUB164(auVar5 * auVar9,8);
            if ((uVar21 == 0) ||
               (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar21 * lVar3, auVar10._8_8_ = 0,
               auVar10._0_8_ = uVar22, auVar7._8_8_ = 0,
               auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(this + 0xa60) * 4) + uVar18) -
                                     SUB164(auVar6 * auVar10,8)) * lVar3, auVar11._8_8_ = 0,
               auVar11._0_8_ = uVar22, SUB164(auVar7 * auVar11,8) < uVar23)) goto LAB_0010b440;
          }
          lVar16 = *(long *)(lVar25 + (ulong)uVar18 * 8);
          if (lVar16 == 0) goto LAB_0010b440;
          uVar12 = *(undefined8 *)(lVar16 + 0x18);
          uVar13 = *(undefined8 *)(lVar16 + 0x20);
          if (lVar20 == 0) {
            lVar20 = 1;
          }
          else {
            lVar20 = *(long *)(lVar20 + -8) + 1;
          }
          iVar15 = CowData<FindInFilesPanel::Result>::resize<false>
                             ((CowData<FindInFilesPanel::Result> *)&local_90,lVar20);
          lVar20 = local_90;
          if (iVar15 == 0) {
            if (local_90 == 0) {
              lVar25 = -1;
              lVar16 = 0;
            }
            else {
              lVar16 = *(long *)(local_90 + -8);
              lVar25 = lVar16 + -1;
              if (-1 < lVar25) {
                CowData<FindInFilesPanel::Result>::_copy_on_write
                          ((CowData<FindInFilesPanel::Result> *)&local_90);
                puVar2 = (undefined8 *)(local_90 + lVar25 * 0x10);
                *puVar2 = uVar12;
                puVar2[1] = uVar13;
                lVar20 = local_90;
                goto LAB_0010b2fe;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar25,lVar16,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
            lVar20 = local_90;
          }
LAB_0010b2fe:
          lVar16 = TreeItem::get_next();
        } while (lVar16 != 0);
        if (lVar20 != 0) {
          if (*(long *)(lVar20 + -8) != 0) {
            apply_replaces_in_file(this,(String *)&local_b8,local_98,(String *)local_c0);
            local_b0 = 0;
            if (local_b8 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_b8);
            }
            Vector<String>::push_back(local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
          LOCK();
          plVar1 = (long *)(lVar20 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_90 + -0x10),false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      lVar20 = local_a0;
      plVar26 = (long *)*plVar26;
    } while (plVar26 != (long *)0x0);
    CanvasItem::hide();
    local_90 = 0;
    if (lVar20 != 0) {
      CowData<String>::_ref((CowData<String> *)&local_90,(CowData *)&local_a0);
    }
  }
  if ((_on_replace_all_clicked()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar15 = __cxa_guard_acquire(&_on_replace_all_clicked()::{lambda()#1}::operator()()::sname),
     iVar15 != 0)) {
    _scs_create((char *)&_on_replace_all_clicked()::{lambda()#1}::operator()()::sname,
                SUB81(SIGNAL_FILES_MODIFIED,0));
    __cxa_atexit(StringName::~StringName,
                 &_on_replace_all_clicked()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_on_replace_all_clicked()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_78,local_98);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_replace_all_clicked()::{lambda()#1}::operator()()::sname,local_88,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<String>::_unref((CowData<String> *)&local_90);
  CowData<String>::_unref((CowData<String> *)&local_a0);
  CowData<char32_t>::_unref(local_c0);
LAB_0010b49c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* Viewport::is_size_2d_override_stretch_enabled() const */

undefined8 Viewport::is_size_2d_override_stretch_enabled(void)

{
  return 1;
}



/* Viewport::is_sub_viewport() const */

undefined8 Viewport::is_sub_viewport(void)

{
  return 0;
}



/* Window::_popup_adjust_rect() const */

undefined1  [16] Window::_popup_adjust_rect(void)

{
  return ZEXT816(0);
}



/* AcceptDialog::ok_pressed() */

void AcceptDialog::ok_pressed(void)

{
  return;
}



/* AcceptDialog::cancel_pressed() */

void AcceptDialog::cancel_pressed(void)

{
  return;
}



/* FindInFiles::is_class_ptr(void*) const */

uint __thiscall FindInFiles::is_class_ptr(FindInFiles *this,void *param_1)

{
  return (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* FindInFiles::_getv(StringName const&, Variant&) const */

undefined8 FindInFiles::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FindInFiles::_setv(StringName const&, Variant const&) */

undefined8 FindInFiles::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FindInFiles::_property_can_revertv(StringName const&) const */

undefined8 FindInFiles::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FindInFiles::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FindInFiles::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FindInFilesDialog::is_class_ptr(void*) const */

uint FindInFilesDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11c5,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* FindInFilesDialog::_property_can_revertv(StringName const&) const */

undefined8 FindInFilesDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FindInFilesDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FindInFilesDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FindInFilesPanel::is_class_ptr(void*) const */

uint __thiscall FindInFilesPanel::is_class_ptr(FindInFilesPanel *this,void *param_1)

{
  return (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, Object*,
   Rect2>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, TreeItem*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&, int, int, int,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String> *this
          )

{
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void,String_const&> *this)

{
  return;
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



/* MethodBindT<String const&, int, int, int, String>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<String_const&,int,int,int,String>::get_argument_meta
          (MethodBindT<String_const&,int,int,int,String> *this,int param_1)

{
  return -(param_1 - 1U < 3) & 3;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, Object*, Rect2>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2>::get_argument_count
          (CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, TreeItem*, int, int,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int>::get_argument_count
          (CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void>::get_argument_count
          (CallableCustomMethodPointer<FindInFilesPanel,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&, int, int, int,
   String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String>::
get_argument_count(CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 5;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String>::get_argument_count
          (CallableCustomMethodPointer<FindInFilesDialog,void,String> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void>::get_argument_count
          (CallableCustomMethodPointer<FindInFilesDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<FindInFilesDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* MethodBindT<String const&, int, int, int, String>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<String_const&,int,int,int,String>::_gen_argument_type
          (MethodBindT<String_const&,int,int,int,String> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 5) {
    iVar1 = (-(uint)(param_1 - 1U < 3) & 0xfffffffe) + 4;
  }
  return iVar1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&, int, int, int,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String> *this
          )

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, TreeItem*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, Object*,
   Rect2>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* FindInFilesPanel::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FindInFilesPanel::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00122008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00122008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* FindInFilesPanel::_property_can_revertv(StringName const&) const */

undefined8 FindInFilesPanel::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00122008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* FindInFiles::_validate_propertyv(PropertyInfo&) const */

void FindInFiles::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00122010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* MethodBindT<String const&, int, int, int, String>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,int,int,int,String>::~MethodBindT
          (MethodBindT<String_const&,int,int,int,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c388;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, int, int, int, String>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,int,int,int,String>::~MethodBindT
          (MethodBindT<String_const&,int,int,int,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c388;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* FindInFilesDialog::_getv(StringName const&, Variant&) const */

undefined8 FindInFilesDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00122018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* FindInFilesDialog::_setv(StringName const&, Variant const&) */

undefined8 FindInFilesDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00122020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CowData<FindInFilesPanel::Result>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<FindInFilesPanel::Result>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FindInFilesPanel::_bind_methods() [clone .cold] */

void FindInFilesPanel::_bind_methods(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindInFilesPanel::apply_replaces_in_file(String const&, Vector<FindInFilesPanel::Result> const&,
   String const&) [clone .cold] */

void FindInFilesPanel::apply_replaces_in_file(String *param_1,Vector *param_2,String *param_3)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<String>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_0010c363:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c363;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010c3ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010c3ce:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String>::get_object
          (CallableCustomMethodPointer<FindInFilesDialog,void,String> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c4fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c4fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c4fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&, int, int, int,
   String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String>::get_object
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String> *this
          )

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c5fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c5fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c5fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&>::get_object
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c6fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c6fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c6fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, Object*, Rect2>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2>::get_object
          (CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c7fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c7fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c7fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<FindInFilesDialog,void,String_const&> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c8fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c8fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c8fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, TreeItem*, int, int, int>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int>::get_object
          (CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c9fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c9fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c9fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void>::get_object
          (CallableCustomMethodPointer<FindInFilesPanel,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010cafd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cafd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cafd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Control, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_object
          (CallableCustomMethodPointer<Control,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010cbfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cbfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cbfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void>::get_object
          (CallableCustomMethodPointer<FindInFilesDialog,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ccfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ccfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ccfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* FindInFilesPanel::_validate_propertyv(PropertyInfo&) const */

void FindInFilesPanel::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00122028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* FindInFilesDialog::_validate_propertyv(PropertyInfo&) const */

void FindInFilesDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00122030 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00122038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00122038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11c6,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11c6,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00122040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00122040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FindInFilesPanel::_setv(StringName const&, Variant const&) */

undefined8 FindInFilesPanel::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00122040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010d218) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00122048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010d288) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00122048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010d2f8) */
/* FindInFilesPanel::_getv(StringName const&, Variant&) const */

undefined8 FindInFilesPanel::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00122048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d360;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d360:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d3c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d3c0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d420;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d420:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d490;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d490:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00122050 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00122050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00122050 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00122050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* FindInFilesPanel::_get_class_namev() const */

undefined8 * FindInFilesPanel::_get_class_namev(void)

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
LAB_0010d7a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d7a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FindInFilesPanel");
      goto LAB_0010d80e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FindInFilesPanel");
LAB_0010d80e:
  return &_get_class_namev()::_class_name_static;
}



/* FindInFilesDialog::_get_class_namev() const */

undefined8 * FindInFilesDialog::_get_class_namev(void)

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
LAB_0010d893:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d893;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FindInFilesDialog");
      goto LAB_0010d8fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FindInFilesDialog");
LAB_0010d8fe:
  return &_get_class_namev()::_class_name_static;
}



/* FindInFiles::_get_class_namev() const */

undefined8 * FindInFiles::_get_class_namev(void)

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
LAB_0010d973:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d973;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FindInFiles");
      goto LAB_0010d9de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FindInFiles");
LAB_0010d9de:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_0010da63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010da63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010dace;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010dace:
  return &_get_class_namev()::_class_name_static;
}



/* FindInFilesDialog::~FindInFilesDialog() */

void __thiscall FindInFilesDialog::~FindInFilesDialog(FindInFilesDialog *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0011bc00;
  pvVar5 = *(void **)(this + 0xe10);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xe34) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe30) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe34) = 0;
        *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe18) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xe18) + lVar4) = 0;
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
            pvVar5 = *(void **)(this + 0xe10);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xe34) = 0;
        *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010dbf2;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xe18),false);
    AcceptDialog::~AcceptDialog((AcceptDialog *)this);
    return;
  }
LAB_0010dbf2:
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* FindInFilesDialog::~FindInFilesDialog() */

void __thiscall FindInFilesDialog::~FindInFilesDialog(FindInFilesDialog *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0011bc00;
  pvVar5 = *(void **)(this + 0xe10);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xe34) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe30) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe34) = 0;
        *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe18) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xe18) + lVar4) = 0;
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
            pvVar5 = *(void **)(this + 0xe10);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xe34) = 0;
        *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010dd32;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xe18),false);
  }
LAB_0010dd32:
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe38);
  return;
}



/* FindInFilesDialog::get_class() const */

void FindInFilesDialog::get_class(void)

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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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



/* FindInFiles::get_class() const */

void FindInFiles::get_class(void)

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



/* FindInFilesPanel::get_class() const */

void FindInFilesPanel::get_class(void)

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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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



/* FindInFilesPanel::~FindInFilesPanel() */

void __thiscall FindInFilesPanel::~FindInFilesPanel(FindInFilesPanel *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0011b898;
  pvVar5 = *(void **)(this + 0xa40);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xa64) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa60) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xa64) = 0;
        *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa48) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0xa48) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
            pvVar5 = *(void **)(this + 0xa40);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 0xa64) = 0;
        *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010e247;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa48),false);
  }
LAB_0010e247:
  pvVar5 = *(void **)(this + 0xa10);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xa34) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa30) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xa34) = 0;
        *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa18) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xa18) + lVar4) = 0;
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
            pvVar5 = *(void **)(this + 0xa10);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xa34) = 0;
        *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010e30b;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa18),false);
    Control::~Control((Control *)this);
    return;
  }
LAB_0010e30b:
  Control::~Control((Control *)this);
  return;
}



/* FindInFilesPanel::~FindInFilesPanel() */

void __thiscall FindInFilesPanel::~FindInFilesPanel(FindInFilesPanel *this)

{
  ~FindInFilesPanel(this);
  operator_delete(this,0xa88);
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010e6db;
  }
  cVar5 = String::operator==(param_1,"Node");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0010e6db;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010e6db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFiles::is_class(String const&) const */

undefined8 __thiscall FindInFiles::is_class(FindInFiles *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010e87f;
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
LAB_0010e87f:
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
    if (cVar5 != '\0') goto LAB_0010e933;
  }
  cVar5 = String::operator==(param_1,"FindInFiles");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Node::is_class((Node *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e933:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010eaab;
  }
  cVar5 = String::operator==(param_1,"Control");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0010eaab;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010ebe8;
    }
  }
LAB_0010eaab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ebe8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::is_class(String const&) const */

undefined8 __thiscall FindInFilesPanel::is_class(FindInFilesPanel *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010ec5f;
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
LAB_0010ec5f:
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
    if (cVar5 != '\0') goto LAB_0010ed13;
  }
  cVar5 = String::operator==(param_1,"FindInFilesPanel");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ed13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010ee7b;
  }
  cVar5 = String::operator==(param_1,"Window");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0010ee7b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010efb8;
    }
  }
LAB_0010ee7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010efb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::is_class(String const&) const */

undefined8 __thiscall FindInFilesDialog::is_class(FindInFilesDialog *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010f0cb;
  }
  cVar5 = String::operator==(param_1,"FindInFilesDialog");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0010f0cb;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0010f208;
    }
  }
LAB_0010f0cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f208:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
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
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010f32c;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010f32c:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_0010f68b;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * __LC30 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010f68b;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_0010f68b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* Callable create_custom_callable_function_pointer<FindInFilesDialog, String
   const&>(FindInFilesDialog*, char const*, void (FindInFilesDialog::*)(String const&)) */

FindInFilesDialog *
create_custom_callable_function_pointer<FindInFilesDialog,String_const&>
          (FindInFilesDialog *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC11;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011be78;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<Control>(Control*, char const*, void
   (Control::*)()) */

Control * create_custom_callable_function_pointer<Control>
                    (Control *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC11;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c028;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<FindInFilesPanel>(FindInFilesPanel*, char
   const*, void (FindInFilesPanel::*)()) */

FindInFilesPanel *
create_custom_callable_function_pointer<FindInFilesPanel>
          (FindInFilesPanel *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC11;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c148;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<TreeItem*, FindInFilesPanel::Result, HashMapHasherDefault,
   HashMapComparatorDefault<TreeItem*>, DefaultTypedAllocator<HashMapElement<TreeItem*,
   FindInFilesPanel::Result> > >::operator[](TreeItem* const&) */

undefined1 * __thiscall
HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
::operator[](HashMap<TreeItem*,FindInFilesPanel::Result,HashMapHasherDefault,HashMapComparatorDefault<TreeItem*>,DefaultTypedAllocator<HashMapElement<TreeItem*,FindInFilesPanel::Result>>>
             *this,TreeItem **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
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
  undefined1 (*pauVar23) [16];
  char cVar24;
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined1 (*pauVar27) [16];
  void *pvVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  TreeItem *pTVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_98;
  uint local_48;
  uint local_44;
  long local_40;
  
  pTVar34 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar24 = _lookup_pos(this,(TreeItem **)pTVar34,&local_48);
  if (cVar24 == '\0') {
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar33 = (ulong)uVar32;
      uVar25 = uVar33 * 4;
      uVar39 = uVar33 * 8;
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(this + 0x10) = uVar26;
      pvVar28 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar28;
      if (uVar32 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar28 + uVar39)) &&
           (pvVar28 < (void *)((long)pvVar4 + uVar25))) {
          uVar25 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar25 * 4) = 0;
            *(undefined8 *)((long)pvVar28 + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
          } while (uVar33 != uVar25);
        }
        else {
          memset(pvVar4,0,uVar25);
          memset(pvVar28,0,uVar39);
        }
      }
      pTVar34 = *param_1;
    }
    local_44 = 0;
    cVar24 = _lookup_pos(this,(TreeItem **)pTVar34,&local_44);
    if (cVar24 == '\0') {
      if ((float)uVar32 * __LC30 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar32 = *(uint *)(this + 0x28);
        if (uVar32 == 0x1c) {
          pauVar27 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00110028;
        }
        uVar25 = (ulong)(uVar32 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
        if (uVar32 + 1 < 2) {
          uVar25 = 2;
        }
        uVar32 = *(uint *)(hash_table_size_primes + uVar25 * 4);
        uVar33 = (ulong)uVar32;
        *(int *)(this + 0x28) = (int)uVar25;
        pvVar28 = *(void **)(this + 8);
        uVar25 = uVar33 * 4;
        uVar39 = uVar33 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar26 = Memory::alloc_static(uVar25,false);
        *(undefined8 *)(this + 0x10) = uVar26;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar32 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar25))) {
            uVar25 = 0;
            do {
              *(undefined4 *)((long)__s + uVar25 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar33);
          }
          else {
            memset(__s,0,uVar25);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar3 == 0) {
          pTVar34 = *param_1;
        }
        else {
          uVar25 = 0;
          do {
            uVar32 = *(uint *)((long)pvVar4 + uVar25 * 4);
            if (uVar32 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar38);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar32 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              lVar30 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar30 * 4);
              iVar29 = SUB164(auVar7 * auVar15,8);
              uVar37 = *puVar1;
              uVar26 = *(undefined8 *)((long)pvVar28 + uVar25 * 8);
              while (uVar37 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar37 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar38 + iVar29) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                local_98 = SUB164(auVar9 * auVar17,8);
                uVar35 = uVar26;
                if (local_98 < uVar36) {
                  *puVar1 = uVar32;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar30 * 8);
                  uVar35 = *puVar2;
                  *puVar2 = uVar26;
                  uVar32 = uVar37;
                  uVar36 = local_98;
                }
                uVar36 = uVar36 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar29 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                lVar30 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar30 * 4);
                iVar29 = SUB164(auVar10 * auVar18,8);
                uVar26 = uVar35;
                uVar37 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar30 * 8) = uVar26;
              *puVar1 = uVar32;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar3);
          Memory::free_static(pvVar28,false);
          Memory::free_static(pvVar4,false);
          pTVar34 = *param_1;
        }
      }
      pauVar27 = (undefined1 (*) [16])operator_new(0x28,"");
      *pauVar27 = (undefined1  [16])0x0;
      *(TreeItem **)pauVar27[1] = pTVar34;
      *(undefined1 (*) [16])(pauVar27[1] + 8) = (undefined1  [16])0x0;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar27;
      }
      else {
        *puVar2 = pauVar27;
        *(undefined8 **)(*pauVar27 + 8) = puVar2;
      }
      pTVar34 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar27;
      lVar5 = *(long *)(this + 0x10);
      uVar25 = (long)pTVar34 * 0x3ffff - 1;
      uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
      uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
      uVar25 = uVar25 >> 0x16 ^ uVar25;
      uVar39 = uVar25 & 0xffffffff;
      if ((int)uVar25 == 0) {
        uVar39 = 1;
      }
      uVar37 = 0;
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = (uint)uVar39;
      uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar25 = CONCAT44(0,uVar32);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar39 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar25;
      lVar31 = SUB168(auVar11 * auVar19,8);
      lVar30 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar31 * 4);
      iVar29 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar27;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar25;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar32 + iVar29) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar25;
        local_98 = SUB164(auVar13 * auVar21,8);
        pauVar40 = pauVar23;
        if (local_98 < uVar37) {
          *puVar1 = (uint)uVar39;
          uVar39 = (ulong)uVar3;
          puVar2 = (undefined8 *)(lVar30 + lVar31 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar37 = local_98;
        }
        uVar38 = (uint)uVar39;
        uVar37 = uVar37 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar29 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar25;
        lVar31 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar5 + lVar31 * 4);
        iVar29 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar40;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar30 + lVar31 * 8) = pauVar23;
      *puVar1 = uVar38;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_44 * 8);
      *(undefined1 (*) [16])(pauVar27[1] + 8) = (undefined1  [16])0x0;
    }
  }
  else {
    pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_00110028:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar27[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char>::_realloc(long) */

undefined8 __thiscall CowData<char>::_realloc(CowData<char> *this,long param_1)

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
/* Error CowData<char>::resize<false>(long) */

undefined8 __thiscall CowData<char>::resize<false>(CowData<char> *this,long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
LAB_0011040e:
    lVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = *(long *)(lVar5 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar5 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    if (lVar9 == 0) goto LAB_0011040e;
    uVar4 = lVar9 - 1U | lVar9 - 1U >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    lVar5 = (uVar4 | uVar4 >> 0x20) + 1;
  }
  uVar4 = param_1 - 1U | param_1 - 1U >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar1 = uVar4 + 1;
  if (lVar9 < param_1) {
    if (lVar1 != lVar5) {
      if (lVar9 == 0) {
        puVar6 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar8 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar8;
        goto LAB_0011034c;
      }
      uVar7 = _realloc(this,lVar1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    puVar8 = *(undefined8 **)this;
    if (puVar8 != (undefined8 *)0x0) {
LAB_0011034c:
      puVar8[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar1 != lVar5) && (uVar7 = _realloc(this,lVar1), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* ConservativeGetLine::get_line(Ref<FileAccess>) */

char * ConservativeGetLine::get_line(char *param_1,Vector<char> *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_2 + 8);
  if ((lVar3 != 0) && (*(long *)(lVar3 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
    else {
      *(undefined8 *)(param_2 + 8) = 0;
    }
  }
  do {
    cVar4 = (**(code **)(*(long *)*param_3 + 0x1e0))();
    cVar5 = (**(code **)(*(long *)*param_3 + 0x1d8))();
    if (cVar5 != '\0') {
LAB_00110a2d:
      Vector<char>::push_back(param_2,'\0');
      String::utf8(param_1,(int)*(undefined8 *)(param_2 + 8));
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (cVar4 == '\n') {
      Vector<char>::push_back(param_2,'\n');
      goto LAB_00110a2d;
    }
    if (cVar4 == '\0') goto LAB_00110a2d;
    if (cVar4 != '\r') {
      Vector<char>::push_back(param_2,cVar4);
    }
  } while( true );
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



/* WARNING: Removing unreachable block (ram,0x00110c88) */
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



/* WARNING: Removing unreachable block (ram,0x00110fc0) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
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
        if (pvVar5 == (void *)0x0) goto LAB_001112a4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001112a4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, bool, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
::operator[](HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
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
  undefined1 (*pauVar41) [16];
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  long local_58;
  undefined1 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_001119a0:
    uVar39 = (ulong)uVar54;
    uVar43 = uVar39 * 4;
    uVar47 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar54 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar47)) && (pvVar42 < (void *)((long)pvVar2 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
        goto LAB_0011182a;
      }
      memset(pvVar2,0,uVar43);
      memset(pvVar42,0,uVar47);
      iVar44 = *(int *)(this + 0x2c);
LAB_0011182e:
      if (iVar44 != 0) {
LAB_00111836:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar53 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar45 = SUB168(auVar16 * auVar32,8);
        uVar51 = *(uint *)(lVar52 + lVar45 * 4);
        uVar50 = SUB164(auVar16 * auVar32,8);
        if (uVar51 != 0) {
          do {
            if (uVar38 == uVar51) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                pauVar41[1][8] = 0;
                goto LAB_0011170b;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar50 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar45 = SUB168(auVar17 * auVar33,8);
            uVar51 = *(uint *)(lVar52 + lVar45 * 4);
            uVar50 = SUB164(auVar17 * auVar33,8);
          } while ((uVar51 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar51 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar53 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar54;
      goto LAB_00111354;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_00111354;
    if (iVar44 != 0) goto LAB_00111836;
LAB_0011137a:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011170b;
    }
    uVar39 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar39 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar54 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar54 * lVar52;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar45 = SUB168(auVar4 * auVar20,8);
          puVar49 = (uint *)(lVar3 + lVar45 * 4);
          iVar44 = SUB164(auVar4 * auVar20,8);
          uVar51 = *puVar49;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar51 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar5 * auVar21,8)) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar53 = SUB164(auVar6 * auVar22,8);
            uVar48 = uVar40;
            if (uVar53 < uVar50) {
              *puVar49 = uVar54;
              puVar1 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar1;
              *puVar1 = uVar40;
              uVar54 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar45 = SUB168(auVar7 * auVar23,8);
            puVar49 = (uint *)(lVar3 + lVar45 * 4);
            iVar44 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar48;
            uVar51 = *puVar49;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar49 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar54);
    if (iVar44 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar52 + lVar45 * 4);
      uVar51 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0011170b;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar45 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar52 + lVar45 * 4);
          uVar51 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar50 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_001119a0;
LAB_0011182a:
      iVar44 = *(int *)(this + 0x2c);
      goto LAB_0011182e;
    }
LAB_00111354:
    if ((float)uVar39 * __LC30 < (float)(iVar44 + 1)) goto LAB_0011137a;
  }
  local_58 = 0;
  if (*(long *)param_1 == 0) {
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar3 = local_58;
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)&local_58);
    }
  }
  pauVar41[1][8] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar1 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar54 = 1;
  if (uVar37 != 0) {
    uVar54 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar54 * lVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar46 = SUB168(auVar8 * auVar24,8);
  lVar45 = *(long *)(this + 8);
  puVar49 = (uint *)(lVar3 + lVar46 * 4);
  iVar44 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar49;
  pauVar56 = pauVar41;
  if (uVar38 != 0) {
    uVar51 = 0;
    pauVar55 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26,8);
      pauVar56 = pauVar55;
      if (uVar50 < uVar51) {
        *puVar49 = uVar54;
        puVar1 = (undefined8 *)(lVar45 + lVar46 * 8);
        pauVar56 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar55;
        uVar51 = uVar50;
        uVar54 = uVar38;
      }
      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      puVar49 = (uint *)(lVar3 + lVar46 * 4);
      iVar44 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar49;
      pauVar55 = pauVar56;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar56;
  *puVar49 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011170b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::_notificationv(int, bool) */

void __thiscall FindInFilesDialog::_notificationv(FindInFilesDialog *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)this;
  if (param_2) {
    if ((param_1 == 0x1e) && (cVar1 = Window::is_visible(), cVar1 != '\0')) {
      _notification(iVar2);
    }
    if ((code *)PTR__notification_00122058 != Window::_notification) {
      AcceptDialog::_notification(iVar2);
    }
    Window::_notification(iVar2);
    Viewport::_notification(iVar2);
    Node::_notification(iVar2);
    return;
  }
  Node::_notification(iVar2);
  Viewport::_notification(iVar2);
  Window::_notification(iVar2);
  if ((code *)PTR__notification_00122058 != Window::_notification) {
    AcceptDialog::_notification(iVar2);
  }
  if ((param_1 == 0x1e) && (cVar1 = Window::is_visible(), cVar1 != '\0')) {
    _notification(iVar2);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void>::call
          (CallableCustomMethodPointer<FindInFilesPanel,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00111def;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00111def;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00111eb1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00111def:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00111eb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Control, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Control,void>::call
          (CallableCustomMethodPointer<Control,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011200f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011200f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001120d1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011200f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001120d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<FindInFilesDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void>::call
          (CallableCustomMethodPointer<FindInFilesDialog,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011222f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011222f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001122f1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011222f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001122f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, Object*, Rect2>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2>::call
          (CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 auVar11 [16];
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00112504;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00112504;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],7);
        uVar4 = _LC113;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        auVar11 = Variant::operator_cast_to_Rect2(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_0011248b:
          uVar4 = _LC114;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_0011248b;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001124dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(auVar11._0_8_,auVar11._8_8_,(long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_001125f4;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00112504:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001125f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, TreeItem*, int, int, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int>::call
          (CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Object *pOVar9;
  Object *pOVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar14;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar12 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar14 = (char)ObjectDB::spin_lock == '\0';
      if (bVar14) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar14) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar13 = (ulong *)((ulong)uVar12 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar13 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011287d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar13[1] == 0) goto LAB_0011287d;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar4 = _LC115;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[3]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar4 = _LC116;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(param_1[2]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC117;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar8 = Variant::operator_cast_to_int(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_001127e6:
          uVar4 = _LC114;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          pOVar10 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar10 == (Object *)0x0) ||
              (lVar11 = __dynamic_cast(pOVar10,&Object::typeinfo,&TreeItem::typeinfo,0), lVar11 == 0
              )) && (pOVar9 != (Object *)0x0)) goto LAB_001127e6;
        }
        pOVar9 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar9 != (Object *)0x0) {
          pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&TreeItem::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar9,iVar8,iVar7,iVar6);
          return;
        }
        goto LAB_00112993;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011287d:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112993:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String_const&>::call
          (CallableCustomMethodPointer<FindInFilesDialog,void,String_const&> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC118;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00112a6e;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00112a6e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<FindInFilesDialog, void, String>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String>::call
          (CallableCustomMethodPointer<FindInFilesDialog,void,String> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC118;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00112cde;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00112cde:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&, int, int, int,
   String>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String>::call
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String> *this
          ,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  ulong *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar11[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 6) {
          if (param_2 == 5) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[4],4);
            uVar4 = _LC119;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
            uVar4 = _LC115;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar6 = Variant::operator_cast_to_int(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
            uVar4 = _LC116;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar7 = Variant::operator_cast_to_int(param_1[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC117;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar8 = Variant::operator_cast_to_int(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC118;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar9)((long *)(lVar1 + lVar2),(Variant *)&local_58,iVar8,iVar7,iVar6,
                      (Variant *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 5;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 5;
        }
        goto LAB_00112f4f;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00112f4f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&>::call
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC118;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_001132ae;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC112,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001132ae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011356b;
  }
  cVar5 = String::operator==(param_1,"BoxContainer");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011356b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_00113675;
    }
  }
LAB_0011356b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113675:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001136ef;
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
LAB_001136ef:
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
    if (cVar5 != '\0') goto LAB_001137a3;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001137a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011386f;
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
LAB_0011386f:
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
    if (cVar5 != '\0') goto LAB_00113923;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113923:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_00122070 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00122060 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_00122068 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_00122070 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00122060 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_00122068 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC18;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC18;
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
      goto LAB_0011475c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011475c:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindInFiles::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FindInFiles::_get_property_listv(FindInFiles *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "FindInFiles";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FindInFiles";
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
      goto LAB_001149c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001149c1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"FindInFiles",false);
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



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
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
      goto LAB_00114c71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114c71:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Viewport",false);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
      goto LAB_00114f21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114f21:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00122078 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
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



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
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
      goto LAB_001151f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001151f1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00122080 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
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
      goto LAB_001154c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001154c1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_00115771;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115771:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_00115a21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115a21:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_00115cd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115cd1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesPanel::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
FindInFilesPanel::_get_property_listv(FindInFilesPanel *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "FindInFilesPanel";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FindInFilesPanel";
  local_98 = 0;
  local_70 = 0x10;
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
      goto LAB_00115f81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115f81:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"FindInFilesPanel",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Window";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_00116231;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116231:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00122088 != Object::_get_property_list) {
    Window::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Viewport::_get_property_listv((Viewport *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AcceptDialog::_get_property_listv(AcceptDialog *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AcceptDialog";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_00116501;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116501:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AcceptDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::_get_property_listv((Window *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindInFilesDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
FindInFilesDialog::_get_property_listv(FindInFilesDialog *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
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
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "FindInFilesDialog";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FindInFilesDialog";
  local_98 = 0;
  local_70 = 0x11;
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
      goto LAB_001167b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001167b1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"FindInFilesDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
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



/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::_lookup_pos(HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::operator[](HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
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
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  undefined1 (*pauVar34) [16];
  void *pvVar35;
  int iVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  undefined8 uVar40;
  uint *puVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  uint uVar46;
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  long in_FS_OFFSET;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar46 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00117140:
    uVar39 = (ulong)uVar46;
    uVar32 = uVar39 * 4;
    uVar44 = uVar39 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = pvVar35;
    if (uVar46 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar35 + uVar44)) && (pvVar35 < (void *)((long)pvVar2 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar39 != uVar32);
      }
      else {
        memset(pvVar2,0,uVar32);
        memset(pvVar35,0,uVar44);
      }
    }
  }
  else if (*(int *)(this + 0x2c) != 0) {
    uVar32 = CONCAT44(0,uVar46);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar31 = String::hash();
    lVar45 = *(long *)(this + 0x10);
    uVar30 = 1;
    if (uVar31 != 0) {
      uVar30 = uVar31;
    }
    uVar42 = 0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar30 * lVar3;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar32;
    lVar37 = SUB168(auVar12 * auVar24,8);
    uVar31 = *(uint *)(lVar45 + lVar37 * 4);
    uVar43 = SUB164(auVar12 * auVar24,8);
    if (uVar31 != 0) {
      do {
        if (uVar30 == uVar31) {
          cVar28 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10)
                                      ,param_1);
          if (cVar28 != '\0') {
            pauVar34 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar43 * 8);
            goto LAB_001170e8;
          }
          lVar45 = *(long *)(this + 0x10);
        }
        uVar42 = uVar42 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(uVar43 + 1) * lVar3;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar32;
        lVar37 = SUB168(auVar13 * auVar25,8);
        uVar31 = *(uint *)(lVar45 + lVar37 * 4);
        uVar43 = SUB164(auVar13 * auVar25,8);
      } while ((uVar31 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar31 * lVar3, auVar26._8_8_ = 0,
              auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
              auVar15._0_8_ = (ulong)((uVar43 + uVar46) - SUB164(auVar14 * auVar26,8)) * lVar3,
              auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar42 <= SUB164(auVar15 * auVar27,8)));
    }
    uVar46 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) goto LAB_00117140;
  }
  local_6c = 0;
  cVar28 = _lookup_pos(this,param_1,&local_6c);
  if (cVar28 == '\0') {
    if ((float)uVar46 * __LC30 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar46 = *(uint *)(this + 0x28);
      if (uVar46 == 0x1c) {
        pauVar34 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_001170e8;
      }
      uVar32 = (ulong)(uVar46 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)uVar46 * 4);
      if (uVar46 + 1 < 2) {
        uVar32 = 2;
      }
      uVar46 = *(uint *)(hash_table_size_primes + uVar32 * 4);
      uVar39 = (ulong)uVar46;
      *(int *)(this + 0x28) = (int)uVar32;
      pvVar35 = *(void **)(this + 8);
      uVar32 = uVar39 * 4;
      uVar44 = uVar39 * 8;
      pvVar2 = *(void **)(this + 0x10);
      uVar33 = Memory::alloc_static(uVar32,false);
      *(undefined8 *)(this + 0x10) = uVar33;
      __s_00 = (void *)Memory::alloc_static(uVar44,false);
      *(void **)(this + 8) = __s_00;
      if (uVar46 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar32))) {
          uVar32 = 0;
          do {
            *(undefined4 *)((long)__s + uVar32 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
            uVar32 = uVar32 + 1;
          } while (uVar32 != uVar39);
        }
        else {
          memset(__s,0,uVar32);
          memset(__s_00,0,uVar44);
        }
      }
      if (uVar30 != 0) {
        uVar32 = 0;
        do {
          uVar46 = *(uint *)((long)pvVar2 + uVar32 * 4);
          if (uVar46 != 0) {
            lVar3 = *(long *)(this + 0x10);
            uVar42 = 0;
            uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar44 = CONCAT44(0,uVar31);
            lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar46 * lVar45;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar44;
            lVar37 = SUB168(auVar4 * auVar16,8);
            puVar41 = (uint *)(lVar3 + lVar37 * 4);
            iVar36 = SUB164(auVar4 * auVar16,8);
            uVar43 = *puVar41;
            uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
            while (uVar43 != 0) {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar43 * lVar45;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar44;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar5 * auVar17,8)) * lVar45;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar44;
              uVar29 = SUB164(auVar6 * auVar18,8);
              uVar40 = uVar33;
              if (uVar29 < uVar42) {
                *puVar41 = uVar46;
                puVar1 = (undefined8 *)((long)__s_00 + lVar37 * 8);
                uVar40 = *puVar1;
                *puVar1 = uVar33;
                uVar46 = uVar43;
                uVar42 = uVar29;
              }
              uVar42 = uVar42 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(iVar36 + 1) * lVar45;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar44;
              lVar37 = SUB168(auVar7 * auVar19,8);
              puVar41 = (uint *)(lVar3 + lVar37 * 4);
              iVar36 = SUB164(auVar7 * auVar19,8);
              uVar33 = uVar40;
              uVar43 = *puVar41;
            }
            *(undefined8 *)((long)__s_00 + lVar37 * 8) = uVar33;
            *puVar41 = uVar46;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar32 = uVar32 + 1;
        } while (uVar30 != uVar32);
        Memory::free_static(pvVar35,false);
        Memory::free_static(pvVar2,false);
      }
    }
    local_58[0] = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)param_1 == 0) {
      local_58[1] = 0;
      pauVar34 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar34[1] = 0;
      *pauVar34 = (undefined1  [16])0x0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
      lVar3 = local_58[0];
      uVar33 = local_68._0_8_;
      uVar40 = local_68._8_8_;
      local_58[1] = 0;
      pauVar34 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar34[1] = 0;
      *(undefined8 *)*pauVar34 = uVar33;
      *(undefined8 *)(*pauVar34 + 8) = uVar40;
      if (lVar3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar34 + 1),(CowData *)local_58);
      }
    }
    *(undefined8 *)(pauVar34[1] + 8) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    puVar1 = *(undefined8 **)(this + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar34;
    }
    else {
      *puVar1 = pauVar34;
      *(undefined8 **)(*pauVar34 + 8) = puVar1;
    }
    *(undefined1 (**) [16])(this + 0x20) = pauVar34;
    uVar30 = String::hash();
    lVar3 = *(long *)(this + 0x10);
    uVar46 = 1;
    if (uVar30 != 0) {
      uVar46 = uVar30;
    }
    lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar32 = CONCAT44(0,uVar30);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar46 * lVar45;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar32;
    lVar38 = SUB168(auVar8 * auVar20,8);
    lVar37 = *(long *)(this + 8);
    puVar41 = (uint *)(lVar3 + lVar38 * 4);
    iVar36 = SUB164(auVar8 * auVar20,8);
    uVar31 = *puVar41;
    pauVar48 = pauVar34;
    if (uVar31 != 0) {
      uVar43 = 0;
      pauVar47 = pauVar34;
      do {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar31 * lVar45;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar32;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)((uVar30 + iVar36) - SUB164(auVar9 * auVar21,8)) * lVar45;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar32;
        uVar42 = SUB164(auVar10 * auVar22,8);
        pauVar48 = pauVar47;
        if (uVar42 < uVar43) {
          *puVar41 = uVar46;
          puVar1 = (undefined8 *)(lVar37 + lVar38 * 8);
          pauVar48 = (undefined1 (*) [16])*puVar1;
          *puVar1 = pauVar47;
          uVar43 = uVar42;
          uVar46 = uVar31;
        }
        uVar43 = uVar43 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(iVar36 + 1) * lVar45;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar32;
        lVar38 = SUB168(auVar11 * auVar23,8);
        puVar41 = (uint *)(lVar3 + lVar38 * 4);
        iVar36 = SUB164(auVar11 * auVar23,8);
        uVar31 = *puVar41;
        pauVar47 = pauVar48;
      } while (uVar31 != 0);
    }
    *(undefined1 (**) [16])(lVar37 + lVar38 * 8) = pauVar48;
    *puVar41 = uVar46;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    pauVar34 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c * 8);
    *(undefined8 *)(pauVar34[1] + 8) = 0;
  }
LAB_001170e8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar34[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FindInFilesPanel, String const&, int, int, int, String>(void
   (FindInFilesPanel::*)(String const&, int, int, int, String)) */

MethodBind *
create_method_bind<FindInFilesPanel,String_const&,int,int,int,String>
          (_func_void_String_ptr_int_int_int_String *param_1)

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
  *(_func_void_String_ptr_int_int_int_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c388;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "FindInFilesPanel";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<FindInFilesPanel>(void (FindInFilesPanel::*)()) */

MethodBind * create_method_bind<FindInFilesPanel>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011c3e8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FindInFilesPanel";
  local_30 = 0x10;
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



/* FindInFilesDialog::_initialize_classv() */

void FindInFilesDialog::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
          if (Node::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Object");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Node");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((code *)PTR__bind_methods_00122070 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Viewport";
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Viewport";
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Window";
        local_70 = 0;
        local_50 = 6;
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_58 = "Window";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AcceptDialog";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_00122090 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00122098 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "FindInFilesDialog";
    local_70 = 0;
    local_50 = 0x11;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindInFiles::_initialize_classv() */

void FindInFiles::_initialize_classv(void)

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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)PTR__bind_methods_001220a0 != Object::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_48 = "Node";
    local_58 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "FindInFiles";
    local_60 = 0;
    local_40 = 0xb;
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



/* FindInFilesPanel::_initialize_classv() */

void FindInFilesPanel::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00122070 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "CanvasItem";
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
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00122060 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Control";
      local_70 = 0;
      local_50 = 7;
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
      if ((code *)PTR__bind_methods_001220a8 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "FindInFilesPanel";
    local_70 = 0;
    local_50 = 0x10;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
LAB_00118520:
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
  if (lVar9 == 0) goto LAB_00118520;
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
    goto LAB_00118576;
  }
  if (lVar9 == lVar5) {
LAB_0011849b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00118576:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011840f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011849b;
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
LAB_0011840f:
  puVar7[-1] = param_1;
  return 0;
}



/* Vector<String>::append_array(Vector<String>) */

void __thiscall Vector<String>::append_array(Vector<String> *this,long param_2)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar6 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar6;
    }
    CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar6 = lVar6 << 3;
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar7 = 0;
LAB_00118638:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar3 + -8);
        if (lVar7 <= lVar5) goto LAB_00118638;
        pCVar1 = (CowData *)(lVar3 + lVar5 * 8);
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        if (*(long *)(*(long *)(this + 8) + lVar6) != *(long *)pCVar1) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(*(long *)(this + 8) + lVar6),pCVar1);
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar5 != lVar2);
    }
  }
  return;
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



/* CowData<Vector<String> >::_unref() */

void __thiscall CowData<Vector<String>>::_unref(CowData<Vector<String>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<String> *this_00;
  
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
        lVar5 = 0;
        this_00 = (CowData<String> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<String>::_unref(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* FindInFiles::~FindInFiles() */

void __thiscall FindInFiles::~FindInFiles(FindInFiles *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0011b6d0;
  CowData<String>::_unref((CowData<String> *)(this + 0x468));
  CowData<Vector<String>>::_unref((CowData<Vector<String>> *)(this + 0x458));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x448));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x438));
  pvVar5 = *(void **)(this + 0x410);
  if (pvVar5 == (void *)0x0) goto LAB_0011889b;
  if (*(int *)(this + 0x434) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x430) * 4) != 0) {
      memset(*(void **)(this + 0x428),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x430) * 4) << 2);
      if (*(int *)(this + 0x434) == 0) goto LAB_001188b8;
    }
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
        pvVar5 = *(void **)(this + 0x410);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x434));
    *(undefined4 *)(this + 0x434) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_0011889b;
  }
LAB_001188b8:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x420),false);
  Memory::free_static(*(void **)(this + 0x418),false);
  Memory::free_static(*(void **)(this + 0x428),false);
LAB_0011889b:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x408));
  Node::~Node((Node *)this);
  return;
}



/* FindInFiles::~FindInFiles() */

void __thiscall FindInFiles::~FindInFiles(FindInFiles *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0011b6d0;
  CowData<String>::_unref((CowData<String> *)(this + 0x468));
  CowData<Vector<String>>::_unref((CowData<Vector<String>> *)(this + 0x458));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x448));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x438));
  pvVar5 = *(void **)(this + 0x410);
  if (pvVar5 == (void *)0x0) goto LAB_001189db;
  if (*(int *)(this + 0x434) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x430) * 4) != 0) {
      memset(*(void **)(this + 0x428),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x430) * 4) << 2);
      if (*(int *)(this + 0x434) == 0) goto LAB_00118a00;
    }
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
        pvVar5 = *(void **)(this + 0x410);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x434));
    *(undefined4 *)(this + 0x434) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_001189db;
  }
LAB_00118a00:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x420),false);
  Memory::free_static(*(void **)(this + 0x418),false);
  Memory::free_static(*(void **)(this + 0x428),false);
LAB_001189db:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x408));
  Node::~Node((Node *)this);
  operator_delete(this,0x478);
  return;
}



/* CowData<Vector<String> >::_realloc(long) */

undefined8 __thiscall CowData<Vector<String>>::_realloc(CowData<Vector<String>> *this,long param_1)

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
/* Error CowData<Vector<String> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<String>>::resize<false>(CowData<Vector<String>> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
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
    lVar7 = 0;
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
    lVar7 = lVar4 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00118d30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_00118d30;
  uVar6 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
        if (lVar9 != lVar7) {
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
      CowData<String>::_unref((CowData<String> *)(lVar4 + 8 + uVar6 * 0x10));
      uVar6 = uVar6 + 1;
    }
    goto LAB_00118d86;
  }
  if (lVar9 == lVar7) {
LAB_00118ca3:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00118d86:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar5[-1];
    if (param_1 <= lVar4) goto LAB_00118c01;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00118ca3;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar4 = 0;
  }
  puVar2 = puVar5 + lVar4 * 2;
  do {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (puVar2 != puVar5 + param_1 * 2);
LAB_00118c01:
  puVar5[-1] = param_1;
  return 0;
}



/* FindInFiles::_notificationv(int, bool) */

void __thiscall FindInFiles::_notificationv(FindInFiles *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 0x11) {
      _process(this);
      if ((code *)PTR__notification_001220b0 != Object::_notification) goto LAB_00118db8;
    }
    else if ((code *)PTR__notification_001220b0 != Object::_notification) {
LAB_00118db8:
      Node::_notification((int)this);
      return;
    }
  }
  else {
    if ((code *)PTR__notification_001220b0 != Object::_notification) {
      Node::_notification((int)this);
    }
    if (param_1 == 0x11) {
      _process(this);
      return;
    }
  }
  return;
}



/* FindInFilesPanel::_notificationv(int, bool) */

void __thiscall FindInFilesPanel::_notificationv(FindInFilesPanel *this,int param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  double dVar5;
  
  iVar4 = (int)this;
  if (param_2) {
    if (param_1 != 0x11) {
      if (param_1 == 0x2d) {
        _notification(iVar4);
      }
      goto LAB_00118e4a;
    }
  }
  else {
    Node::_notification(iVar4);
    CanvasItem::_notification(iVar4);
    if ((code *)PTR__notification_001220b8 != CanvasItem::_notification) {
      Control::_notification(iVar4);
    }
    if (param_1 != 0x11) {
      if (param_1 != 0x2d) {
        return;
      }
      _notification(iVar4);
      return;
    }
  }
  dVar5 = 0.0;
  iVar1 = *(int *)(*(long *)(this + 0x9c8) + 0x470);
  if (iVar1 != 0) {
    lVar2 = *(long *)(*(long *)(this + 0x9c8) + 0x468);
    lVar3 = (long)iVar1;
    if (lVar2 != 0) {
      lVar3 = lVar3 - *(long *)(lVar2 + -8);
    }
    dVar5 = (double)((float)lVar3 / (float)iVar1);
  }
  Range::set_as_ratio(dVar5);
  if (!param_2) {
    return;
  }
LAB_00118e4a:
  if ((code *)PTR__notification_001220b8 != CanvasItem::_notification) {
    Control::_notification(iVar4);
  }
  CanvasItem::_notification(iVar4);
  Node::_notification(iVar4);
  return;
}



/* CowData<FindInFilesPanel::Result>::_realloc(long) */

undefined8 __thiscall
CowData<FindInFilesPanel::Result>::_realloc(CowData<FindInFilesPanel::Result> *this,long param_1)

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
/* Error CowData<FindInFilesPanel::Result>::resize<false>(long) */

undefined8 __thiscall
CowData<FindInFilesPanel::Result>::resize<false>
          (CowData<FindInFilesPanel::Result> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  long lVar11;
  
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
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
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
    lVar3 = lVar10 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00119230:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar11 = uVar4 + 1;
  if (lVar11 == 0) goto LAB_00119230;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar3) && (uVar7 = _realloc(this,lVar11), (int)uVar7 != 0)) {
      return uVar7;
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
  if (lVar11 == lVar3) {
LAB_0011919c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_0011912c;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011919c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar8 + lVar3 * 2);
  pauVar9 = pauVar6 + (param_1 - lVar3);
  do {
    *pauVar6 = (undefined1  [16])0x0;
    pauVar6 = pauVar6 + 1;
  } while (pauVar9 != pauVar6);
LAB_0011912c:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x001193c8) */
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
      _err_print_error(&_LC112,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119700;
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
LAB_00119700:
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
      goto LAB_00119b0f;
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
                    /* WARNING: Could not recover jumptable at 0x001199b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00119b0f:
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
      goto LAB_00119ccf;
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
                    /* WARNING: Could not recover jumptable at 0x00119b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00119ccf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, int, int, int, String>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<String_const&,int,int,int,String>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119d7c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  if (*(long *)(*(long *)(param_3 + 0x20) + 8) != 0) {
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)&local_48,(CowData *)(*(long *)(param_3 + 0x20) + 8));
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),*(long *)param_3 + 8,
            *(undefined4 *)(*(long *)(param_3 + 8) + 8),
            *(undefined4 *)(*(long *)(param_3 + 0x10) + 8),
            *(undefined4 *)(*(long *)(param_3 + 0x18) + 8),(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00119d7c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, int, int, int, String>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,int,int,int,String>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119f6e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  if (*(long *)*(CowData **)((long)param_3 + 0x20) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,*(CowData **)((long)param_3 + 0x20));
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)((long *)((long)param_2 + lVar1),*param_3,**(undefined4 **)((long)param_3 + 8),
            **(undefined4 **)((long)param_3 + 0x10),**(undefined4 **)((long)param_3 + 0x18),
            (CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00119f6e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, int, int, int, String>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String_const&,int,int,int,String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))();
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_78 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC112,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a2f0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar15;
    }
    if ((int)(5 - in_R8D) <= iVar6) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar10 * 8);
        }
        else {
          uVar12 = iVar6 + -5 + (int)lVar10;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_68[lVar10] = pVVar14;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 5);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[4],4);
      uVar4 = _LC119;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_80);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar4 = _LC115;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar4 = _LC116;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],2);
      uVar4 = _LC117;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_68[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_78);
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_78,iVar8,iVar7,
                         iVar6,(Variant *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      goto LAB_0011a2f0;
    }
    uVar9 = 4;
  }
  else {
    uVar9 = 3;
  }
  *in_R9 = uVar9;
  in_R9[2] = 5;
LAB_0011a2f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
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
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC11;
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
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, int, int, int, String>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,int,int,int,String>
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
    local_78 = &_LC11;
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
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  if (param_1 == local_94) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC11;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, int, int, int, String>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,int,int,int,String>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<String_const&,int,int,int,String>(in_EDX,pPVar1);
  return pPVar1;
}



/* FindInFiles::SIGNAL_RESULT_FOUND */

void FindInFiles::_GLOBAL__sub_I_SIGNAL_RESULT_FOUND(void)

{
  undefined8 uStack_8;
  
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
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (FileDialog::base_property_helper != '\0') {
    return;
  }
  FileDialog::base_property_helper = 1;
  FileDialog::base_property_helper._64_8_ = 0;
  FileDialog::base_property_helper._56_8_ = 2;
  FileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
  FileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
  FileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,FileDialog::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* FindInFiles::~FindInFiles() */

void __thiscall FindInFiles::~FindInFiles(FindInFiles *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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
/* FindInFilesPanel::~FindInFilesPanel() */

void __thiscall FindInFilesPanel::~FindInFilesPanel(FindInFilesPanel *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* FindInFilesDialog::~FindInFilesDialog() */

void __thiscall FindInFilesDialog::~FindInFilesDialog(FindInFilesDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

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
/* MethodBindT<String const&, int, int, int, String>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,int,int,int,String>::~MethodBindT
          (MethodBindT<String_const&,int,int,int,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindInFilesDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindInFilesDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindInFilesDialog, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesDialog,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesDialog,void,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindInFilesPanel, void, String const&, int, int, int,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&,int,int,int,String> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindInFilesPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindInFilesPanel, void, TreeItem*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,TreeItem*,int,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindInFilesPanel, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindInFilesPanel, void, Object*,
   Rect2>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindInFilesPanel,void,Object*,Rect2> *this)

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


